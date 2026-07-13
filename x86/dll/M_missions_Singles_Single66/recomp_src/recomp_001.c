#include "recomp.h"

/* FUN_10004d70 @ 0x11ac4d70 (437 bytes, 146 insns) */
void f_11ac4d70(void) {
  FTRACE(0x11ac4d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac4d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac4d71 mov ebp, esp */
  EBP = (ESP);
  /* 11ac4d73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac4d76 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac4d77 push esi */
  push32((uint32_t)(ESI));
  /* 11ac4d78 push edi */
  push32((uint32_t)(EDI));
  /* 11ac4d79 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac4d7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ac4d7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ac4d82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac4d87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac4d89 pop ecx */
  ECX = (pop32());
  /* 11ac4d8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac4d8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4d90 call 0x11ac1023 */
  push32(0x11ac4d95u); f_11ac1023();
  /* 11ac4d95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac4d9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac4d9c je 0x11ac4f14 */
  if (C.zf) goto L_11ac4f14;
  /* 11ac4da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4da5 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11ac4da8 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ac4dab cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ac4daf je 0x11ac4e69 */
  if (C.zf) goto L_11ac4e69;
  /* 11ac4db5 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ac4db9 je 0x11ac4dc0 */
  if (C.zf) goto L_11ac4dc0;
  /* 11ac4dbb jmp 0x11ac4ebf */
  goto L_11ac4ebf;
L_11ac4dc0:;
  /* 11ac4dc0 cmp dword ptr [0x11af9278], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4dc7 je 0x11ac4e0f */
  if (C.zf) goto L_11ac4e0f;
  /* 11ac4dc9 mov esi, esp */
  ESI = (ESP);
  /* 11ac4dcb push 3 */
  push32((uint32_t)(0x3u));
  /* 11ac4dcd mov edx, dword ptr [0x11af9278] */
  EDX = (r32((uint32_t)(0x11af9278)));
  /* 11ac4dd3 push edx */
  push32((uint32_t)(EDX));
  /* 11ac4dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4dd7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4dda push eax */
  push32((uint32_t)(EAX));
  /* 11ac4ddb call dword ptr [0x11afb478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb478))), 0x11ac4de1u);
  /* 11ac4de1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4de4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4de6 call 0x11ac6240 */
  push32(0x11ac4debu); f_11ac6240();
  /* 11ac4deb mov esi, esp */
  ESI = (ESP);
  /* 11ac4ded push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac4def mov ecx, dword ptr [0x11af9278] */
  ECX = (r32((uint32_t)(0x11af9278)));
  /* 11ac4df5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac4df6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4df9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4dfc push edx */
  push32((uint32_t)(EDX));
  /* 11ac4dfd call dword ptr [0x11afb478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb478))), 0x11ac4e03u);
  /* 11ac4e03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4e06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4e08 call 0x11ac6240 */
  push32(0x11ac4e0du); f_11ac6240();
  /* 11ac4e0d jmp 0x11ac4e64 */
  goto L_11ac4e64;
L_11ac4e0f:;
  /* 11ac4e0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4e12 call 0x11ac105a */
  push32(0x11ac4e17u); f_11ac105a();
  /* 11ac4e17 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac4e1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac4e1e jne 0x11ac4e64 */
  if (!C.zf) goto L_11ac4e64;
  /* 11ac4e20 mov esi, esp */
  ESI = (ESP);
  /* 11ac4e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac4e24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4e27 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4e2a push eax */
  push32((uint32_t)(EAX));
  /* 11ac4e2b call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac4e31u);
  /* 11ac4e31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4e34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4e36 call 0x11ac6240 */
  push32(0x11ac4e3bu); f_11ac6240();
  /* 11ac4e3b mov esi, esp */
  ESI = (ESP);
  /* 11ac4e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac4e3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4e42 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11ac4e45 push edx */
  push32((uint32_t)(EDX));
  /* 11ac4e46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4e49 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4e4c push eax */
  push32((uint32_t)(EAX));
  /* 11ac4e4d mov cl, byte ptr [0x11af9274] */
  CL = (r8((uint32_t)(0x11af9274)));
  /* 11ac4e53 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac4e54 call dword ptr [0x11afb45c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb45c))), 0x11ac4e5au);
  /* 11ac4e5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4e5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4e5f call 0x11ac6240 */
  push32(0x11ac4e64u); f_11ac6240();
L_11ac4e64:;
  /* 11ac4e64 jmp 0x11ac4f14 */
  goto L_11ac4f14;
L_11ac4e69:;
  /* 11ac4e69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4e6c call 0x11ac105a */
  push32(0x11ac4e71u); f_11ac105a();
  /* 11ac4e71 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac4e76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac4e78 jne 0x11ac4ebd */
  if (!C.zf) goto L_11ac4ebd;
  /* 11ac4e7a mov esi, esp */
  ESI = (ESP);
  /* 11ac4e7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac4e7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4e81 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4e84 push edx */
  push32((uint32_t)(EDX));
  /* 11ac4e85 call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac4e8bu);
  /* 11ac4e8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4e8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4e90 call 0x11ac6240 */
  push32(0x11ac4e95u); f_11ac6240();
  /* 11ac4e95 mov esi, esp */
  ESI = (ESP);
  /* 11ac4e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac4e99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4e9c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 11ac4e9f push ecx */
  push32((uint32_t)(ECX));
  /* 11ac4ea0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4ea3 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4ea6 push edx */
  push32((uint32_t)(EDX));
  /* 11ac4ea7 mov al, byte ptr [0x11af9274] */
  AL = (r8((uint32_t)(0x11af9274)));
  /* 11ac4eac push eax */
  push32((uint32_t)(EAX));
  /* 11ac4ead call dword ptr [0x11afb45c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb45c))), 0x11ac4eb3u);
  /* 11ac4eb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4eb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4eb8 call 0x11ac6240 */
  push32(0x11ac4ebdu); f_11ac6240();
L_11ac4ebd:;
  /* 11ac4ebd jmp 0x11ac4f14 */
  goto L_11ac4f14;
L_11ac4ebf:;
  /* 11ac4ebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4ec2 call 0x11ac105a */
  push32(0x11ac4ec7u); f_11ac105a();
  /* 11ac4ec7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac4ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac4ece jne 0x11ac4f14 */
  if (!C.zf) goto L_11ac4f14;
  /* 11ac4ed0 mov esi, esp */
  ESI = (ESP);
  /* 11ac4ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac4ed4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4ed7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4eda push ecx */
  push32((uint32_t)(ECX));
  /* 11ac4edb call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac4ee1u);
  /* 11ac4ee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4ee6 call 0x11ac6240 */
  push32(0x11ac4eebu); f_11ac6240();
  /* 11ac4eeb mov esi, esp */
  ESI = (ESP);
  /* 11ac4eed push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac4eef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4ef2 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 11ac4ef5 push eax */
  push32((uint32_t)(EAX));
  /* 11ac4ef6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4ef9 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4efc push ecx */
  push32((uint32_t)(ECX));
  /* 11ac4efd mov dl, byte ptr [0x11af9274] */
  DL = (r8((uint32_t)(0x11af9274)));
  /* 11ac4f03 push edx */
  push32((uint32_t)(EDX));
  /* 11ac4f04 call dword ptr [0x11afb4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4cc))), 0x11ac4f0au);
  /* 11ac4f0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4f0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4f0f call 0x11ac6240 */
  push32(0x11ac4f14u); f_11ac6240();
L_11ac4f14:;
  /* 11ac4f14 pop edi */
  EDI = (pop32());
  /* 11ac4f15 pop esi */
  ESI = (pop32());
  /* 11ac4f16 pop ebx */
  EBX = (pop32());
  /* 11ac4f17 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4f1a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4f1c call 0x11ac6240 */
  push32(0x11ac4f21u); f_11ac6240();
  /* 11ac4f21 mov esp, ebp */
  ESP = (EBP);
  /* 11ac4f23 pop ebp */
  EBP = (pop32());
  /* 11ac4f24 ret  */
  ESPCHK(0x11ac4d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fa0 @ 0x11ac4fa0 (235 bytes, 78 insns) */
void f_11ac4fa0(void) {
  FTRACE(0x11ac4fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac4fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac4fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac4fa3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac4fa9 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac4faa push esi */
  push32((uint32_t)(ESI));
  /* 11ac4fab push edi */
  push32((uint32_t)(EDI));
  /* 11ac4fac push ecx */
  push32((uint32_t)(ECX));
  /* 11ac4fad lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11ac4fb3 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11ac4fb8 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac4fbd rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac4fbf pop ecx */
  ECX = (pop32());
  /* 11ac4fc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac4fc3 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11ac4fca mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11ac4fd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac4fd4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4fd7 mov esi, esp */
  ESI = (ESP);
  /* 11ac4fd9 push eax */
  push32((uint32_t)(EAX));
  /* 11ac4fda call dword ptr [0x11afb4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d0))), 0x11ac4fe0u);
  /* 11ac4fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac4fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4fe5 call 0x11ac6240 */
  push32(0x11ac4feau); f_11ac6240();
  /* 11ac4fea mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11ac4fed cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac4ff1 jle 0x11ac5064 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac5064;
  /* 11ac4ff3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11ac4ffa mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11ac5001 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ac5008 jmp 0x11ac5013 */
  goto L_11ac5013;
L_11ac500a:;
  /* 11ac500a mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ac500d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5010 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11ac5013:;
  /* 11ac5013 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ac5016 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5019 jge 0x11ac5050 */
  if ((C.sf==C.of)) goto L_11ac5050;
  /* 11ac501b mov esi, esp */
  ESI = (ESP);
  /* 11ac501d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ac5020 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5021 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ac5024 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5025 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5028 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac502b push edx */
  push32((uint32_t)(EDX));
  /* 11ac502c call dword ptr [0x11afb4fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4fc))), 0x11ac5032u);
  /* 11ac5032 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5035 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5037 call 0x11ac6240 */
  push32(0x11ac503cu); f_11ac6240();
  /* 11ac503c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ac503f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5042 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11ac5045 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ac5048 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac504b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11ac504e jmp 0x11ac500a */
  goto L_11ac500a;
L_11ac5050:;
  /* 11ac5050 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ac5053 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac5054 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ac5057 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ac505a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ac505d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac505e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ac5061 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11ac5064:;
  /* 11ac5064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5067 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac506a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ac506c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ac506f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ac5072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5075 pop edi */
  EDI = (pop32());
  /* 11ac5076 pop esi */
  ESI = (pop32());
  /* 11ac5077 pop ebx */
  EBX = (pop32());
  /* 11ac5078 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac507e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5080 call 0x11ac6240 */
  push32(0x11ac5085u); f_11ac6240();
  /* 11ac5085 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5087 pop ebp */
  EBP = (pop32());
  /* 11ac5088 ret 4 */
  ESPCHK(0x11ac4fa0u, _esp0);
  ESP += 8; return;
}

/* FUN_100050d0 @ 0x11ac50d0 (120 bytes, 47 insns) */
void f_11ac50d0(void) {
  FTRACE(0x11ac50d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac50d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac50d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac50d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac50d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac50d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ac50d8 push edi */
  push32((uint32_t)(EDI));
  /* 11ac50d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac50da lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ac50dd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ac50e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac50e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac50e9 pop ecx */
  ECX = (pop32());
  /* 11ac50ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac50ed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ac50f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac50f4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac50f7 mov esi, esp */
  ESI = (ESP);
  /* 11ac50f9 push eax */
  push32((uint32_t)(EAX));
  /* 11ac50fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac50fd add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5100 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5101 call dword ptr [0x11afb4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d4))), 0x11ac5107u);
  /* 11ac5107 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac510a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac510c call 0x11ac6240 */
  push32(0x11ac5111u); f_11ac6240();
  /* 11ac5111 mov esi, eax */
  ESI = (EAX);
  /* 11ac5113 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5116 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5119 mov edi, esp */
  EDI = (ESP);
  /* 11ac511b push edx */
  push32((uint32_t)(EDX));
  /* 11ac511c call dword ptr [0x11afb4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d0))), 0x11ac5122u);
  /* 11ac5122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5125 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5127 call 0x11ac6240 */
  push32(0x11ac512cu); f_11ac6240();
  /* 11ac512c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac512e jne 0x11ac5134 */
  if (!C.zf) goto L_11ac5134;
  /* 11ac5130 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ac5134:;
  /* 11ac5134 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ac5137 pop edi */
  EDI = (pop32());
  /* 11ac5138 pop esi */
  ESI = (pop32());
  /* 11ac5139 pop ebx */
  EBX = (pop32());
  /* 11ac513a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac513d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac513f call 0x11ac6240 */
  push32(0x11ac5144u); f_11ac6240();
  /* 11ac5144 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5146 pop ebp */
  EBP = (pop32());
  /* 11ac5147 ret  */
  ESPCHK(0x11ac50d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005170 @ 0x11ac5170 (86 bytes, 35 insns) */
void f_11ac5170(void) {
  FTRACE(0x11ac5170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5170 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5171 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5173 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5176 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5177 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5178 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5179 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac517a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ac517d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ac5182 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5187 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5189 pop ecx */
  ECX = (pop32());
  /* 11ac518a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac518d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ac5191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5194 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5197 mov esi, esp */
  ESI = (ESP);
  /* 11ac5199 push eax */
  push32((uint32_t)(EAX));
  /* 11ac519a call dword ptr [0x11afb4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d0))), 0x11ac51a0u);
  /* 11ac51a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac51a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac51a5 call 0x11ac6240 */
  push32(0x11ac51aau); f_11ac6240();
  /* 11ac51aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac51ac jle 0x11ac51b2 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac51b2;
  /* 11ac51ae mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ac51b2:;
  /* 11ac51b2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ac51b5 pop edi */
  EDI = (pop32());
  /* 11ac51b6 pop esi */
  ESI = (pop32());
  /* 11ac51b7 pop ebx */
  EBX = (pop32());
  /* 11ac51b8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac51bb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac51bd call 0x11ac6240 */
  push32(0x11ac51c2u); f_11ac6240();
  /* 11ac51c2 mov esp, ebp */
  ESP = (EBP);
  /* 11ac51c4 pop ebp */
  EBP = (pop32());
  /* 11ac51c5 ret  */
  ESPCHK(0x11ac5170u, _esp0);
  ESP += 4; return;
}

/* FUN_100051e0 @ 0x11ac51e0 (42 bytes, 21 insns) */
void f_11ac51e0(void) {
  FTRACE(0x11ac51e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac51e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac51e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac51e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac51e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac51e7 push esi */
  push32((uint32_t)(ESI));
  /* 11ac51e8 push edi */
  push32((uint32_t)(EDI));
  /* 11ac51e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac51ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac51ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac51f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac51f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac51f9 pop ecx */
  ECX = (pop32());
  /* 11ac51fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac51fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5200 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5203 pop edi */
  EDI = (pop32());
  /* 11ac5204 pop esi */
  ESI = (pop32());
  /* 11ac5205 pop ebx */
  EBX = (pop32());
  /* 11ac5206 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5208 pop ebp */
  EBP = (pop32());
  /* 11ac5209 ret  */
  ESPCHK(0x11ac51e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005220 @ 0x11ac5220 (77 bytes, 32 insns) */
void f_11ac5220(void) {
  FTRACE(0x11ac5220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5220 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5221 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5223 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5226 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5227 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5228 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5229 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac522a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac522d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac5232 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5237 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5239 pop ecx */
  ECX = (pop32());
  /* 11ac523a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac523d mov esi, esp */
  ESI = (ESP);
  /* 11ac523f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5242 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5243 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5246 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5249 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac524a call dword ptr [0x11afb500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb500))), 0x11ac5250u);
  /* 11ac5250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5253 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5255 call 0x11ac6240 */
  push32(0x11ac525au); f_11ac6240();
  /* 11ac525a pop edi */
  EDI = (pop32());
  /* 11ac525b pop esi */
  ESI = (pop32());
  /* 11ac525c pop ebx */
  EBX = (pop32());
  /* 11ac525d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5260 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5262 call 0x11ac6240 */
  push32(0x11ac5267u); f_11ac6240();
  /* 11ac5267 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5269 pop ebp */
  EBP = (pop32());
  /* 11ac526a ret 4 */
  ESPCHK(0x11ac5220u, _esp0);
  ESP += 8; return;
}

/* FUN_10005280 @ 0x11ac5280 (413 bytes, 143 insns) */
void f_11ac5280(void) {
  FTRACE(0x11ac5280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5280 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5281 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5283 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5286 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5287 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5288 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5289 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac528a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 11ac528d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 11ac5292 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5297 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5299 pop ecx */
  ECX = (pop32());
  /* 11ac529a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac529d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac52a0 call 0x11ac1082 */
  push32(0x11ac52a5u); f_11ac1082();
  /* 11ac52a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac52aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac52ac je 0x11ac540c */
  if (C.zf) goto L_11ac540c;
  /* 11ac52b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac52b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac52b7 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 11ac52ba cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac52bd jne 0x11ac5368 */
  if (!C.zf) goto L_11ac5368;
  /* 11ac52c3 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11ac52c8 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ac52cb push edx */
  push32((uint32_t)(EDX));
  /* 11ac52cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac52cf call 0x11ac1073 */
  push32(0x11ac52d4u); f_11ac1073();
  /* 11ac52d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac52d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac52d8 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ac52da push edx */
  push32((uint32_t)(EDX));
  /* 11ac52db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac52de add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac52e1 push eax */
  push32((uint32_t)(EAX));
  /* 11ac52e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac52e5 call 0x11ac11c2 */
  push32(0x11ac52eau); f_11ac11c2();
  /* 11ac52ea mov esi, esp */
  ESI = (ESP);
  /* 11ac52ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac52ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac52f1 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac52f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac52f5 call dword ptr [0x11afb4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4e0))), 0x11ac52fbu);
  /* 11ac52fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac52fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5300 call 0x11ac6240 */
  push32(0x11ac5305u); f_11ac6240();
  /* 11ac5305 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5308 jge 0x11ac5313 */
  if ((C.sf==C.of)) goto L_11ac5313;
  /* 11ac530a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac530d mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 11ac5311 jmp 0x11ac5368 */
  goto L_11ac5368;
L_11ac5313:;
  /* 11ac5313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5316 call 0x11ac1104 */
  push32(0x11ac531bu); f_11ac1104();
  /* 11ac531b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac5320 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac5322 jne 0x11ac5368 */
  if (!C.zf) goto L_11ac5368;
  /* 11ac5324 mov esi, esp */
  ESI = (ESP);
  /* 11ac5326 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac532b add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac532e push eax */
  push32((uint32_t)(EAX));
  /* 11ac532f call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac5335u);
  /* 11ac5335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac533a call 0x11ac6240 */
  push32(0x11ac533fu); f_11ac6240();
  /* 11ac533f mov esi, esp */
  ESI = (ESP);
  /* 11ac5341 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5346 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11ac5349 push edx */
  push32((uint32_t)(EDX));
  /* 11ac534a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac534d add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5350 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5351 mov cl, byte ptr [0x11af6a30] */
  CL = (r8((uint32_t)(0x11af6a30)));
  /* 11ac5357 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5358 call dword ptr [0x11afb4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4cc))), 0x11ac535eu);
  /* 11ac535e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5361 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5363 call 0x11ac6240 */
  push32(0x11ac5368u); f_11ac6240();
L_11ac5368:;
  /* 11ac5368 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac536b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac536d mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 11ac5370 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5373 jne 0x11ac540c */
  if (!C.zf) goto L_11ac540c;
  /* 11ac5379 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11ac537e lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11ac5381 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5385 call 0x11ac1073 */
  push32(0x11ac538au); f_11ac1073();
  /* 11ac538a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac538d push edx */
  push32((uint32_t)(EDX));
  /* 11ac538e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11ac5390 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5391 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5394 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5397 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5398 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac539b call 0x11ac11c2 */
  push32(0x11ac53a0u); f_11ac11c2();
  /* 11ac53a0 mov esi, esp */
  ESI = (ESP);
  /* 11ac53a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac53a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac53a7 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac53aa push edx */
  push32((uint32_t)(EDX));
  /* 11ac53ab call dword ptr [0x11afb4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4e0))), 0x11ac53b1u);
  /* 11ac53b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac53b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac53b6 call 0x11ac6240 */
  push32(0x11ac53bbu); f_11ac6240();
  /* 11ac53bb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac53be jge 0x11ac5405 */
  if ((C.sf==C.of)) goto L_11ac5405;
  /* 11ac53c0 mov esi, esp */
  ESI = (ESP);
  /* 11ac53c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac53c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac53c7 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac53ca push eax */
  push32((uint32_t)(EAX));
  /* 11ac53cb call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac53d1u);
  /* 11ac53d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac53d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac53d6 call 0x11ac6240 */
  push32(0x11ac53dbu); f_11ac6240();
  /* 11ac53db mov esi, esp */
  ESI = (ESP);
  /* 11ac53dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac53df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac53e2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11ac53e5 push edx */
  push32((uint32_t)(EDX));
  /* 11ac53e6 mov eax, dword ptr [0x11af927c] */
  EAX = (r32((uint32_t)(0x11af927c)));
  /* 11ac53eb push eax */
  push32((uint32_t)(EAX));
  /* 11ac53ec mov cl, byte ptr [0x11af6a30] */
  CL = (r8((uint32_t)(0x11af6a30)));
  /* 11ac53f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac53f3 call dword ptr [0x11afb4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4cc))), 0x11ac53f9u);
  /* 11ac53f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac53fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac53fe call 0x11ac6240 */
  push32(0x11ac5403u); f_11ac6240();
  /* 11ac5403 jmp 0x11ac540c */
  goto L_11ac540c;
L_11ac5405:;
  /* 11ac5405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5408 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_11ac540c:;
  /* 11ac540c pop edi */
  EDI = (pop32());
  /* 11ac540d pop esi */
  ESI = (pop32());
  /* 11ac540e pop ebx */
  EBX = (pop32());
  /* 11ac540f add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5412 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5414 call 0x11ac6240 */
  push32(0x11ac5419u); f_11ac6240();
  /* 11ac5419 mov esp, ebp */
  ESP = (EBP);
  /* 11ac541b pop ebp */
  EBP = (pop32());
  /* 11ac541c ret  */
  ESPCHK(0x11ac5280u, _esp0);
  ESP += 4; return;
}

/* FUN_10005490 @ 0x11ac5490 (311 bytes, 104 insns) */
void f_11ac5490(void) {
  FTRACE(0x11ac5490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5490 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5491 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5493 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5499 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac549a push esi */
  push32((uint32_t)(ESI));
  /* 11ac549b push edi */
  push32((uint32_t)(EDI));
  /* 11ac549c push ecx */
  push32((uint32_t)(ECX));
  /* 11ac549d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11ac54a3 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11ac54a8 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac54ad rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac54af pop ecx */
  ECX = (pop32());
  /* 11ac54b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac54b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac54b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ac54b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac54bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ac54bf lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11ac54c2 push edx */
  push32((uint32_t)(EDX));
  /* 11ac54c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac54c6 call 0x11ac1073 */
  push32(0x11ac54cbu); f_11ac1073();
  /* 11ac54cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ac54cd mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac54d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ac54d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ac54d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ac54d9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ac54dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac54df mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11ac54e2 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ac54e5 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac54e8 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11ac54eb fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11ac54ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ac54f1 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac54f4 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ac54f7 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11ac54fa fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 11ac54fc sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac54ff fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11ac5502 call 0x11ac6624 */
  push32(0x11ac5507u); f_11ac6624();
  /* 11ac5507 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac550a fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 11ac550d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ac5510 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5513 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac5515 jge 0x11ac5523 */
  if ((C.sf==C.of)) goto L_11ac5523;
  /* 11ac5517 fld qword ptr [0x11af31e0] */
  fpu_push(rf64((uint32_t)(0x11af31e0)));
  /* 11ac551d fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 11ac5520 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_11ac5523:;
  /* 11ac5523 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 11ac5526 fmul qword ptr [0x11af31d0] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11af31d0)));
  /* 11ac552c fdiv qword ptr [0x11af31c0] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x11af31c0)));
  /* 11ac5532 call 0x11ac647c */
  push32(0x11ac5537u); f_11ac647c();
  /* 11ac5537 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ac553a fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11ac553d fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 11ac5540 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac5543 push edx */
  push32((uint32_t)(EDX));
  /* 11ac5544 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac5547 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5548 call 0x11ac6574 */
  push32(0x11ac554du); f_11ac6574();
  /* 11ac554d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5550 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 11ac5553 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 11ac5556 call 0x11ac647c */
  push32(0x11ac555bu); f_11ac647c();
  /* 11ac555b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ac555e fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11ac5561 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 11ac5564 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac5567 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5568 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac556b push edx */
  push32((uint32_t)(EDX));
  /* 11ac556c call 0x11ac64c4 */
  push32(0x11ac5571u); f_11ac64c4();
  /* 11ac5571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5574 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 11ac5577 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 11ac557a call 0x11ac647c */
  push32(0x11ac557fu); f_11ac647c();
  /* 11ac557f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ac5582 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11ac5584 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac5587 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5588 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ac558b push ecx */
  push32((uint32_t)(ECX));
  /* 11ac558c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac558f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5592 push edx */
  push32((uint32_t)(EDX));
  /* 11ac5593 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5596 call 0x11ac11c2 */
  push32(0x11ac559bu); f_11ac11c2();
  /* 11ac559b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ac559e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac55a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac55a6 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ac55a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac55ac call 0x11ac1154 */
  push32(0x11ac55b1u); f_11ac1154();
  /* 11ac55b1 pop edi */
  EDI = (pop32());
  /* 11ac55b2 pop esi */
  ESI = (pop32());
  /* 11ac55b3 pop ebx */
  EBX = (pop32());
  /* 11ac55b4 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac55ba cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac55bc call 0x11ac6240 */
  push32(0x11ac55c1u); f_11ac6240();
  /* 11ac55c1 mov esp, ebp */
  ESP = (EBP);
  /* 11ac55c3 pop ebp */
  EBP = (pop32());
  /* 11ac55c4 ret 0xc */
  ESPCHK(0x11ac5490u, _esp0);
  ESP += 16; return;
}

/* FUN_10005620 @ 0x11ac5620 (198 bytes, 71 insns) */
void f_11ac5620(void) {
  FTRACE(0x11ac5620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5620 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5621 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5623 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5626 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5627 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5628 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5629 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac562a lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11ac562d mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11ac5632 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5637 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5639 pop ecx */
  ECX = (pop32());
  /* 11ac563a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac563d mov esi, esp */
  ESI = (ESP);
  /* 11ac563f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ac5642 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5643 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5645 mov ecx, dword ptr [0x11af9280] */
  ECX = (r32((uint32_t)(0x11af9280)));
  /* 11ac564b push ecx */
  push32((uint32_t)(ECX));
  /* 11ac564c call dword ptr [0x11afb4fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4fc))), 0x11ac5652u);
  /* 11ac5652 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5657 call 0x11ac6240 */
  push32(0x11ac565cu); f_11ac6240();
  /* 11ac565c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ac565f mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11ac5662 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ac5665 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ac5668 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac566b mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11ac566e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac5671 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ac5674 mov esi, esp */
  ESI = (ESP);
  /* 11ac5676 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ac5679 push eax */
  push32((uint32_t)(EAX));
  /* 11ac567a call dword ptr [0x11afb47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb47c))), 0x11ac5680u);
  /* 11ac5680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5683 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5685 call 0x11ac6240 */
  push32(0x11ac568au); f_11ac6240();
  /* 11ac568a mov esi, esp */
  ESI = (ESP);
  /* 11ac568c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac568f push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5690 mov edx, dword ptr [0x11af9280] */
  EDX = (r32((uint32_t)(0x11af9280)));
  /* 11ac5696 push edx */
  push32((uint32_t)(EDX));
  /* 11ac5697 mov eax, dword ptr [0x11af927c] */
  EAX = (r32((uint32_t)(0x11af927c)));
  /* 11ac569c push eax */
  push32((uint32_t)(EAX));
  /* 11ac569d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac56a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac56a1 call dword ptr [0x11afb498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb498))), 0x11ac56a7u);
  /* 11ac56a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac56aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac56ac call 0x11ac6240 */
  push32(0x11ac56b1u); f_11ac6240();
  /* 11ac56b1 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ac56b4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ac56b7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac56ba mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ac56bd mov esi, esp */
  ESI = (ESP);
  /* 11ac56bf lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11ac56c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac56c3 call dword ptr [0x11afb47c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb47c))), 0x11ac56c9u);
  /* 11ac56c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac56cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac56ce call 0x11ac6240 */
  push32(0x11ac56d3u); f_11ac6240();
  /* 11ac56d3 pop edi */
  EDI = (pop32());
  /* 11ac56d4 pop esi */
  ESI = (pop32());
  /* 11ac56d5 pop ebx */
  EBX = (pop32());
  /* 11ac56d6 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac56d9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac56db call 0x11ac6240 */
  push32(0x11ac56e0u); f_11ac6240();
  /* 11ac56e0 mov esp, ebp */
  ESP = (EBP);
  /* 11ac56e2 pop ebp */
  EBP = (pop32());
  /* 11ac56e3 ret 0x10 */
  ESPCHK(0x11ac5620u, _esp0);
  ESP += 20; return;
}

/* FUN_10005720 @ 0x11ac5720 (120 bytes, 47 insns) */
void f_11ac5720(void) {
  FTRACE(0x11ac5720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5720 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5721 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5723 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5726 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5727 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5728 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5729 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac572a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ac572d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ac5732 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5737 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5739 pop ecx */
  ECX = (pop32());
  /* 11ac573a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac573d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ac5741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5744 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5747 mov esi, esp */
  ESI = (ESP);
  /* 11ac5749 push eax */
  push32((uint32_t)(EAX));
  /* 11ac574a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac574d add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5750 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5751 call dword ptr [0x11afb4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d4))), 0x11ac5757u);
  /* 11ac5757 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac575a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac575c call 0x11ac6240 */
  push32(0x11ac5761u); f_11ac6240();
  /* 11ac5761 mov esi, eax */
  ESI = (EAX);
  /* 11ac5763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5766 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5769 mov edi, esp */
  EDI = (ESP);
  /* 11ac576b push edx */
  push32((uint32_t)(EDX));
  /* 11ac576c call dword ptr [0x11afb4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d0))), 0x11ac5772u);
  /* 11ac5772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5775 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5777 call 0x11ac6240 */
  push32(0x11ac577cu); f_11ac6240();
  /* 11ac577c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac577e jne 0x11ac5784 */
  if (!C.zf) goto L_11ac5784;
  /* 11ac5780 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ac5784:;
  /* 11ac5784 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ac5787 pop edi */
  EDI = (pop32());
  /* 11ac5788 pop esi */
  ESI = (pop32());
  /* 11ac5789 pop ebx */
  EBX = (pop32());
  /* 11ac578a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac578d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac578f call 0x11ac6240 */
  push32(0x11ac5794u); f_11ac6240();
  /* 11ac5794 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5796 pop ebp */
  EBP = (pop32());
  /* 11ac5797 ret  */
  ESPCHK(0x11ac5720u, _esp0);
  ESP += 4; return;
}

/* FUN_100057c0 @ 0x11ac57c0 (86 bytes, 35 insns) */
void f_11ac57c0(void) {
  FTRACE(0x11ac57c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac57c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac57c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac57c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac57c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac57c7 push esi */
  push32((uint32_t)(ESI));
  /* 11ac57c8 push edi */
  push32((uint32_t)(EDI));
  /* 11ac57c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac57ca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ac57cd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ac57d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac57d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac57d9 pop ecx */
  ECX = (pop32());
  /* 11ac57da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac57dd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ac57e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac57e4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac57e7 mov esi, esp */
  ESI = (ESP);
  /* 11ac57e9 push eax */
  push32((uint32_t)(EAX));
  /* 11ac57ea call dword ptr [0x11afb4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d0))), 0x11ac57f0u);
  /* 11ac57f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac57f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac57f5 call 0x11ac6240 */
  push32(0x11ac57fau); f_11ac6240();
  /* 11ac57fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac57fc jle 0x11ac5802 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac5802;
  /* 11ac57fe mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ac5802:;
  /* 11ac5802 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ac5805 pop edi */
  EDI = (pop32());
  /* 11ac5806 pop esi */
  ESI = (pop32());
  /* 11ac5807 pop ebx */
  EBX = (pop32());
  /* 11ac5808 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac580b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac580d call 0x11ac6240 */
  push32(0x11ac5812u); f_11ac6240();
  /* 11ac5812 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5814 pop ebp */
  EBP = (pop32());
  /* 11ac5815 ret  */
  ESPCHK(0x11ac57c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005830 @ 0x11ac5830 (42 bytes, 21 insns) */
void f_11ac5830(void) {
  FTRACE(0x11ac5830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5830 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5831 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5833 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5836 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5837 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5838 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5839 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac583a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac583d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac5842 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5847 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5849 pop ecx */
  ECX = (pop32());
  /* 11ac584a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac584d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5850 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5853 pop edi */
  EDI = (pop32());
  /* 11ac5854 pop esi */
  ESI = (pop32());
  /* 11ac5855 pop ebx */
  EBX = (pop32());
  /* 11ac5856 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5858 pop ebp */
  EBP = (pop32());
  /* 11ac5859 ret  */
  ESPCHK(0x11ac5830u, _esp0);
  ESP += 4; return;
}

/* FUN_10005870 @ 0x11ac5870 (235 bytes, 78 insns) */
void f_11ac5870(void) {
  FTRACE(0x11ac5870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5870 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5871 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5873 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5879 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac587a push esi */
  push32((uint32_t)(ESI));
  /* 11ac587b push edi */
  push32((uint32_t)(EDI));
  /* 11ac587c push ecx */
  push32((uint32_t)(ECX));
  /* 11ac587d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11ac5883 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11ac5888 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac588d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac588f pop ecx */
  ECX = (pop32());
  /* 11ac5890 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac5893 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11ac589a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11ac58a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac58a4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac58a7 mov esi, esp */
  ESI = (ESP);
  /* 11ac58a9 push eax */
  push32((uint32_t)(EAX));
  /* 11ac58aa call dword ptr [0x11afb4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d0))), 0x11ac58b0u);
  /* 11ac58b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac58b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac58b5 call 0x11ac6240 */
  push32(0x11ac58bau); f_11ac6240();
  /* 11ac58ba mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11ac58bd cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac58c1 jle 0x11ac5934 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac5934;
  /* 11ac58c3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11ac58ca mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11ac58d1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11ac58d8 jmp 0x11ac58e3 */
  goto L_11ac58e3;
L_11ac58da:;
  /* 11ac58da mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ac58dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac58e0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11ac58e3:;
  /* 11ac58e3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ac58e6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac58e9 jge 0x11ac5920 */
  if ((C.sf==C.of)) goto L_11ac5920;
  /* 11ac58eb mov esi, esp */
  ESI = (ESP);
  /* 11ac58ed lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11ac58f0 push eax */
  push32((uint32_t)(EAX));
  /* 11ac58f1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11ac58f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac58f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac58f8 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac58fb push edx */
  push32((uint32_t)(EDX));
  /* 11ac58fc call dword ptr [0x11afb4fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4fc))), 0x11ac5902u);
  /* 11ac5902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5905 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5907 call 0x11ac6240 */
  push32(0x11ac590cu); f_11ac6240();
  /* 11ac590c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ac590f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5912 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11ac5915 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ac5918 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac591b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11ac591e jmp 0x11ac58da */
  goto L_11ac58da;
L_11ac5920:;
  /* 11ac5920 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11ac5923 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac5924 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ac5927 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ac592a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11ac592d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac592e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ac5931 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11ac5934:;
  /* 11ac5934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5937 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac593a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ac593c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ac593f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ac5942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5945 pop edi */
  EDI = (pop32());
  /* 11ac5946 pop esi */
  ESI = (pop32());
  /* 11ac5947 pop ebx */
  EBX = (pop32());
  /* 11ac5948 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac594e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5950 call 0x11ac6240 */
  push32(0x11ac5955u); f_11ac6240();
  /* 11ac5955 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5957 pop ebp */
  EBP = (pop32());
  /* 11ac5958 ret 4 */
  ESPCHK(0x11ac5870u, _esp0);
  ESP += 8; return;
}

/* FUN_100059a0 @ 0x11ac59a0 (250 bytes, 89 insns) */
void f_11ac59a0(void) {
  FTRACE(0x11ac59a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac59a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac59a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac59a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac59a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac59a7 push esi */
  push32((uint32_t)(ESI));
  /* 11ac59a8 push edi */
  push32((uint32_t)(EDI));
  /* 11ac59a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac59aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac59ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac59b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac59b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac59b9 pop ecx */
  ECX = (pop32());
  /* 11ac59ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac59bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac59c0 call 0x11ac10a5 */
  push32(0x11ac59c5u); f_11ac10a5();
  /* 11ac59c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac59ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac59cc je 0x11ac5a89 */
  if (C.zf) goto L_11ac5a89;
  /* 11ac59d2 mov esi, esp */
  ESI = (ESP);
  /* 11ac59d4 mov eax, dword ptr [0x11af6a34] */
  EAX = (r32((uint32_t)(0x11af6a34)));
  /* 11ac59d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ac59da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac59dd push ecx */
  push32((uint32_t)(ECX));
  /* 11ac59de mov edx, dword ptr [0x11af9284] */
  EDX = (r32((uint32_t)(0x11af9284)));
  /* 11ac59e4 push edx */
  push32((uint32_t)(EDX));
  /* 11ac59e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac59e8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac59eb push eax */
  push32((uint32_t)(EAX));
  /* 11ac59ec call dword ptr [0x11afb498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb498))), 0x11ac59f2u);
  /* 11ac59f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac59f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac59f7 call 0x11ac6240 */
  push32(0x11ac59fcu); f_11ac6240();
  /* 11ac59fc mov esi, esp */
  ESI = (ESP);
  /* 11ac59fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5a00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5a03 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5a06 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5a07 call dword ptr [0x11afb4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4e0))), 0x11ac5a0du);
  /* 11ac5a0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5a10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5a12 call 0x11ac6240 */
  push32(0x11ac5a17u); f_11ac6240();
  /* 11ac5a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac5a19 jle 0x11ac5a3c */
  if ((C.zf||C.sf!=C.of)) goto L_11ac5a3c;
  /* 11ac5a1b mov esi, esp */
  ESI = (ESP);
  /* 11ac5a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5a1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5a22 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5a25 push edx */
  push32((uint32_t)(EDX));
  /* 11ac5a26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5a29 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5a2a call dword ptr [0x11afb478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb478))), 0x11ac5a30u);
  /* 11ac5a30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5a33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5a35 call 0x11ac6240 */
  push32(0x11ac5a3au); f_11ac6240();
  /* 11ac5a3a jmp 0x11ac5a89 */
  goto L_11ac5a89;
L_11ac5a3c:;
  /* 11ac5a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5a3f call 0x11ac115e */
  push32(0x11ac5a44u); f_11ac115e();
  /* 11ac5a44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac5a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac5a4b jne 0x11ac5a89 */
  if (!C.zf) goto L_11ac5a89;
  /* 11ac5a4d mov esi, esp */
  ESI = (ESP);
  /* 11ac5a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5a51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5a54 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5a55 call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac5a5bu);
  /* 11ac5a5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5a60 call 0x11ac6240 */
  push32(0x11ac5a65u); f_11ac6240();
  /* 11ac5a65 mov esi, esp */
  ESI = (ESP);
  /* 11ac5a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5a6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5a6e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ac5a71 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5a72 mov cl, byte ptr [0x11af6a38] */
  CL = (r8((uint32_t)(0x11af6a38)));
  /* 11ac5a78 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5a79 call dword ptr [0x11afb45c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb45c))), 0x11ac5a7fu);
  /* 11ac5a7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5a82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5a84 call 0x11ac6240 */
  push32(0x11ac5a89u); f_11ac6240();
L_11ac5a89:;
  /* 11ac5a89 pop edi */
  EDI = (pop32());
  /* 11ac5a8a pop esi */
  ESI = (pop32());
  /* 11ac5a8b pop ebx */
  EBX = (pop32());
  /* 11ac5a8c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5a8f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5a91 call 0x11ac6240 */
  push32(0x11ac5a96u); f_11ac6240();
  /* 11ac5a96 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5a98 pop ebp */
  EBP = (pop32());
  /* 11ac5a99 ret  */
  ESPCHK(0x11ac59a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ae0 @ 0x11ac5ae0 (74 bytes, 31 insns) */
void f_11ac5ae0(void) {
  FTRACE(0x11ac5ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5ae3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5ae7 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5ae8 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5aea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac5aed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac5af2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5af7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5af9 pop ecx */
  ECX = (pop32());
  /* 11ac5afa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac5afd mov esi, esp */
  ESI = (ESP);
  /* 11ac5aff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5b02 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5b03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5b06 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5b07 call dword ptr [0x11afb500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb500))), 0x11ac5b0du);
  /* 11ac5b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5b10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5b12 call 0x11ac6240 */
  push32(0x11ac5b17u); f_11ac6240();
  /* 11ac5b17 pop edi */
  EDI = (pop32());
  /* 11ac5b18 pop esi */
  ESI = (pop32());
  /* 11ac5b19 pop ebx */
  EBX = (pop32());
  /* 11ac5b1a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5b1d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5b1f call 0x11ac6240 */
  push32(0x11ac5b24u); f_11ac6240();
  /* 11ac5b24 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5b26 pop ebp */
  EBP = (pop32());
  /* 11ac5b27 ret 4 */
  ESPCHK(0x11ac5ae0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005b40 @ 0x11ac5b40 (114 bytes, 45 insns) */
void f_11ac5b40(void) {
  FTRACE(0x11ac5b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5b41 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5b43 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5b46 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5b47 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5b48 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5b49 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5b4a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ac5b4d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ac5b52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5b57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5b59 pop ecx */
  ECX = (pop32());
  /* 11ac5b5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac5b5d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ac5b61 mov esi, esp */
  ESI = (ESP);
  /* 11ac5b63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5b66 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5b67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5b6a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ac5b6d push edx */
  push32((uint32_t)(EDX));
  /* 11ac5b6e call dword ptr [0x11afb4d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d4))), 0x11ac5b74u);
  /* 11ac5b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5b77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5b79 call 0x11ac6240 */
  push32(0x11ac5b7eu); f_11ac6240();
  /* 11ac5b7e mov esi, eax */
  ESI = (EAX);
  /* 11ac5b80 mov edi, esp */
  EDI = (ESP);
  /* 11ac5b82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5b85 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5b86 call dword ptr [0x11afb4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d0))), 0x11ac5b8cu);
  /* 11ac5b8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5b8f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5b91 call 0x11ac6240 */
  push32(0x11ac5b96u); f_11ac6240();
  /* 11ac5b96 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5b98 jne 0x11ac5b9e */
  if (!C.zf) goto L_11ac5b9e;
  /* 11ac5b9a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ac5b9e:;
  /* 11ac5b9e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ac5ba1 pop edi */
  EDI = (pop32());
  /* 11ac5ba2 pop esi */
  ESI = (pop32());
  /* 11ac5ba3 pop ebx */
  EBX = (pop32());
  /* 11ac5ba4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5ba7 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5ba9 call 0x11ac6240 */
  push32(0x11ac5baeu); f_11ac6240();
  /* 11ac5bae mov esp, ebp */
  ESP = (EBP);
  /* 11ac5bb0 pop ebp */
  EBP = (pop32());
  /* 11ac5bb1 ret  */
  ESPCHK(0x11ac5b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x11ac5bd0 (83 bytes, 34 insns) */
void f_11ac5bd0(void) {
  FTRACE(0x11ac5bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5bd3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5bd7 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5bd8 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5bda lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11ac5bdd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11ac5be2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5be7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5be9 pop ecx */
  ECX = (pop32());
  /* 11ac5bea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac5bed mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ac5bf1 mov esi, esp */
  ESI = (ESP);
  /* 11ac5bf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5bf6 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5bf7 call dword ptr [0x11afb4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4d0))), 0x11ac5bfdu);
  /* 11ac5bfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5c00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5c02 call 0x11ac6240 */
  push32(0x11ac5c07u); f_11ac6240();
  /* 11ac5c07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac5c09 jle 0x11ac5c0f */
  if ((C.zf||C.sf!=C.of)) goto L_11ac5c0f;
  /* 11ac5c0b mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11ac5c0f:;
  /* 11ac5c0f mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ac5c12 pop edi */
  EDI = (pop32());
  /* 11ac5c13 pop esi */
  ESI = (pop32());
  /* 11ac5c14 pop ebx */
  EBX = (pop32());
  /* 11ac5c15 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5c18 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5c1a call 0x11ac6240 */
  push32(0x11ac5c1fu); f_11ac6240();
  /* 11ac5c1f mov esp, ebp */
  ESP = (EBP);
  /* 11ac5c21 pop ebp */
  EBP = (pop32());
  /* 11ac5c22 ret  */
  ESPCHK(0x11ac5bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c40 @ 0x11ac5c40 (126 bytes, 48 insns) */
void f_11ac5c40(void) {
  FTRACE(0x11ac5c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5c41 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5c43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5c47 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5c48 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5c49 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5c4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac5c4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac5c52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5c57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5c59 pop ecx */
  ECX = (pop32());
  /* 11ac5c5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac5c5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5c60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5c63 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 11ac5c66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5c69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac5c6c mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 11ac5c6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5c72 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5c73 call 0x11ac107d */
  push32(0x11ac5c78u); f_11ac107d();
  /* 11ac5c78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5c7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5c7e mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 11ac5c81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5c84 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11ac5c87 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11ac5c89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5c8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac5c8f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11ac5c92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5c95 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5c98 mov esi, esp */
  ESI = (ESP);
  /* 11ac5c9a push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5c9b call dword ptr [0x11afb49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb49c))), 0x11ac5ca1u);
  /* 11ac5ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5ca6 call 0x11ac6240 */
  push32(0x11ac5cabu); f_11ac6240();
  /* 11ac5cab pop edi */
  EDI = (pop32());
  /* 11ac5cac pop esi */
  ESI = (pop32());
  /* 11ac5cad pop ebx */
  EBX = (pop32());
  /* 11ac5cae add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5cb1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5cb3 call 0x11ac6240 */
  push32(0x11ac5cb8u); f_11ac6240();
  /* 11ac5cb8 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5cba pop ebp */
  EBP = (pop32());
  /* 11ac5cbb ret 0x10 */
  ESPCHK(0x11ac5c40u, _esp0);
  ESP += 20; return;
}

/* FUN_10005ce0 @ 0x11ac5ce0 (136 bytes, 54 insns) */
void f_11ac5ce0(void) {
  FTRACE(0x11ac5ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5ce3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5ce7 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5ce8 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5cea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac5ced mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac5cf2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5cf7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5cf9 pop ecx */
  ECX = (pop32());
  /* 11ac5cfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac5cfd mov esi, esp */
  ESI = (ESP);
  /* 11ac5cff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5d02 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5d06 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5d09 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5d0a call dword ptr [0x11afb500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb500))), 0x11ac5d10u);
  /* 11ac5d10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5d13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5d15 call 0x11ac6240 */
  push32(0x11ac5d1au); f_11ac6240();
  /* 11ac5d1a mov esi, esp */
  ESI = (ESP);
  /* 11ac5d1c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac5d1f push edx */
  push32((uint32_t)(EDX));
  /* 11ac5d20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5d23 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5d26 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5d27 call dword ptr [0x11afb504] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb504))), 0x11ac5d2du);
  /* 11ac5d2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5d30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5d32 call 0x11ac6240 */
  push32(0x11ac5d37u); f_11ac6240();
  /* 11ac5d37 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac5d3a push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5d3b mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 11ac5d3e push edx */
  push32((uint32_t)(EDX));
  /* 11ac5d3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5d42 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5d45 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5d46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5d49 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5d4c push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5d4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5d50 call 0x11ac103c */
  push32(0x11ac5d55u); f_11ac103c();
  /* 11ac5d55 pop edi */
  EDI = (pop32());
  /* 11ac5d56 pop esi */
  ESI = (pop32());
  /* 11ac5d57 pop ebx */
  EBX = (pop32());
  /* 11ac5d58 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5d5b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5d5d call 0x11ac6240 */
  push32(0x11ac5d62u); f_11ac6240();
  /* 11ac5d62 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5d64 pop ebp */
  EBP = (pop32());
  /* 11ac5d65 ret 0x10 */
  ESPCHK(0x11ac5ce0u, _esp0);
  ESP += 20; return;
}

/* FUN_10005d90 @ 0x11ac5d90 (150 bytes, 58 insns) */
void f_11ac5d90(void) {
  FTRACE(0x11ac5d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5d91 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5d93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5d96 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5d97 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5d98 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5d99 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5d9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac5d9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac5da2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5da7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5da9 pop ecx */
  ECX = (pop32());
  /* 11ac5daa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac5dad mov esi, esp */
  ESI = (ESP);
  /* 11ac5daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac5db2 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5db6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5db9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5dba call dword ptr [0x11afb500] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb500))), 0x11ac5dc0u);
  /* 11ac5dc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5dc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5dc5 call 0x11ac6240 */
  push32(0x11ac5dcau); f_11ac6240();
  /* 11ac5dca mov esi, esp */
  ESI = (ESP);
  /* 11ac5dcc push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11ac5dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5dd4 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5dd7 push edx */
  push32((uint32_t)(EDX));
  /* 11ac5dd8 mov eax, dword ptr [0x11af9288] */
  EAX = (r32((uint32_t)(0x11af9288)));
  /* 11ac5ddd push eax */
  push32((uint32_t)(EAX));
  /* 11ac5dde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5de1 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5de4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5de5 call dword ptr [0x11afb498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb498))), 0x11ac5debu);
  /* 11ac5deb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5dee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5df0 call 0x11ac6240 */
  push32(0x11ac5df5u); f_11ac6240();
  /* 11ac5df5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac5df8 push edx */
  push32((uint32_t)(EDX));
  /* 11ac5df9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11ac5dfc push eax */
  push32((uint32_t)(EAX));
  /* 11ac5dfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5e00 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5e04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5e07 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5e0a push edx */
  push32((uint32_t)(EDX));
  /* 11ac5e0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5e0e call 0x11ac103c */
  push32(0x11ac5e13u); f_11ac103c();
  /* 11ac5e13 pop edi */
  EDI = (pop32());
  /* 11ac5e14 pop esi */
  ESI = (pop32());
  /* 11ac5e15 pop ebx */
  EBX = (pop32());
  /* 11ac5e16 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5e19 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5e1b call 0x11ac6240 */
  push32(0x11ac5e20u); f_11ac6240();
  /* 11ac5e20 mov esp, ebp */
  ESP = (EBP);
  /* 11ac5e22 pop ebp */
  EBP = (pop32());
  /* 11ac5e23 ret 0xc */
  ESPCHK(0x11ac5d90u, _esp0);
  ESP += 16; return;
}

/* FUN_10005e50 @ 0x11ac5e50 (255 bytes, 92 insns) */
void f_11ac5e50(void) {
  FTRACE(0x11ac5e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5e51 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5e53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5e56 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5e57 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5e58 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5e59 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5e5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac5e5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac5e62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5e67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5e69 pop ecx */
  ECX = (pop32());
  /* 11ac5e6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac5e6d mov esi, esp */
  ESI = (ESP);
  /* 11ac5e6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5e72 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11ac5e75 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5e76 call dword ptr [0x11afb4b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4b4))), 0x11ac5e7cu);
  /* 11ac5e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5e7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5e81 call 0x11ac6240 */
  push32(0x11ac5e86u); f_11ac6240();
  /* 11ac5e86 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac5e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac5e8d je 0x11ac5ed5 */
  if (C.zf) goto L_11ac5ed5;
  /* 11ac5e8f mov esi, esp */
  ESI = (ESP);
  /* 11ac5e91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5e94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ac5e96 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5e97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5e9a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 11ac5e9d push edx */
  push32((uint32_t)(EDX));
  /* 11ac5e9e call dword ptr [0x11afb4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4e0))), 0x11ac5ea4u);
  /* 11ac5ea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5ea7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5ea9 call 0x11ac6240 */
  push32(0x11ac5eaeu); f_11ac6240();
  /* 11ac5eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac5eb0 jle 0x11ac5ed5 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac5ed5;
  /* 11ac5eb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5eb5 call 0x11ac11b3 */
  push32(0x11ac5ebau); f_11ac11b3();
  /* 11ac5eba mov esi, esp */
  ESI = (ESP);
  /* 11ac5ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5ebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5ec1 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11ac5ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5ec5 call dword ptr [0x11afb4a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4a8))), 0x11ac5ecbu);
  /* 11ac5ecb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5ece cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5ed0 call 0x11ac6240 */
  push32(0x11ac5ed5u); f_11ac6240();
L_11ac5ed5:;
  /* 11ac5ed5 mov esi, esp */
  ESI = (ESP);
  /* 11ac5ed7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5eda mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11ac5edd push eax */
  push32((uint32_t)(EAX));
  /* 11ac5ede call dword ptr [0x11afb4b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4b4))), 0x11ac5ee4u);
  /* 11ac5ee4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5ee7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5ee9 call 0x11ac6240 */
  push32(0x11ac5eeeu); f_11ac6240();
  /* 11ac5eee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac5ef3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac5ef5 jne 0x11ac5f3e */
  if (!C.zf) goto L_11ac5f3e;
  /* 11ac5ef7 mov esi, esp */
  ESI = (ESP);
  /* 11ac5ef9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5efc mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ac5efe push edx */
  push32((uint32_t)(EDX));
  /* 11ac5eff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5f02 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 11ac5f05 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5f06 call dword ptr [0x11afb4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4e0))), 0x11ac5f0cu);
  /* 11ac5f0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5f0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5f11 call 0x11ac6240 */
  push32(0x11ac5f16u); f_11ac6240();
  /* 11ac5f16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5f19 jge 0x11ac5f3e */
  if ((C.sf==C.of)) goto L_11ac5f3e;
  /* 11ac5f1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5f1e call 0x11ac1087 */
  push32(0x11ac5f23u); f_11ac1087();
  /* 11ac5f23 mov esi, esp */
  ESI = (ESP);
  /* 11ac5f25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac5f27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5f2a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11ac5f2d push eax */
  push32((uint32_t)(EAX));
  /* 11ac5f2e call dword ptr [0x11afb4a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4a8))), 0x11ac5f34u);
  /* 11ac5f34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5f39 call 0x11ac6240 */
  push32(0x11ac5f3eu); f_11ac6240();
L_11ac5f3e:;
  /* 11ac5f3e pop edi */
  EDI = (pop32());
  /* 11ac5f3f pop esi */
  ESI = (pop32());
  /* 11ac5f40 pop ebx */
  EBX = (pop32());
  /* 11ac5f41 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5f44 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5f46 call 0x11ac6240 */
  push32(0x11ac5f4bu); f_11ac6240();
  /* 11ac5f4b mov esp, ebp */
  ESP = (EBP);
  /* 11ac5f4d pop ebp */
  EBP = (pop32());
  /* 11ac5f4e ret  */
  ESPCHK(0x11ac5e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f90 @ 0x11ac5f90 (158 bytes, 60 insns) */
void f_11ac5f90(void) {
  FTRACE(0x11ac5f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac5f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac5f91 mov ebp, esp */
  EBP = (ESP);
  /* 11ac5f93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac5f96 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac5f97 push esi */
  push32((uint32_t)(ESI));
  /* 11ac5f98 push edi */
  push32((uint32_t)(EDI));
  /* 11ac5f99 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5f9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac5f9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac5fa2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac5fa7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac5fa9 pop ecx */
  ECX = (pop32());
  /* 11ac5faa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac5fad mov esi, esp */
  ESI = (ESP);
  /* 11ac5faf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5fb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5fb4 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5fb7 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5fb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5fbb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ac5fbd push edx */
  push32((uint32_t)(EDX));
  /* 11ac5fbe call dword ptr [0x11afb488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb488))), 0x11ac5fc4u);
  /* 11ac5fc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5fc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5fc9 call 0x11ac6240 */
  push32(0x11ac5fceu); f_11ac6240();
  /* 11ac5fce mov esi, esp */
  ESI = (ESP);
  /* 11ac5fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac5fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5fd5 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11ac5fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac5fd9 call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac5fdfu);
  /* 11ac5fdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5fe2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5fe4 call 0x11ac6240 */
  push32(0x11ac5fe9u); f_11ac6240();
  /* 11ac5fe9 mov esi, esp */
  ESI = (ESP);
  /* 11ac5feb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac5fee mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ac5ff1 push eax */
  push32((uint32_t)(EAX));
  /* 11ac5ff2 call dword ptr [0x11afb4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4e4))), 0x11ac5ff8u);
  /* 11ac5ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac5ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac5ffd call 0x11ac6240 */
  push32(0x11ac6002u); f_11ac6240();
  /* 11ac6002 mov esi, esp */
  ESI = (ESP);
  /* 11ac6004 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac6006 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac6009 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac600c push ecx */
  push32((uint32_t)(ECX));
  /* 11ac600d call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac6013u);
  /* 11ac6013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6016 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6018 call 0x11ac6240 */
  push32(0x11ac601du); f_11ac6240();
  /* 11ac601d pop edi */
  EDI = (pop32());
  /* 11ac601e pop esi */
  ESI = (pop32());
  /* 11ac601f pop ebx */
  EBX = (pop32());
  /* 11ac6020 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6023 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6025 call 0x11ac6240 */
  push32(0x11ac602au); f_11ac6240();
  /* 11ac602a mov esp, ebp */
  ESP = (EBP);
  /* 11ac602c pop ebp */
  EBP = (pop32());
  /* 11ac602d ret  */
  ESPCHK(0x11ac5f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x11ac6060 (158 bytes, 60 insns) */
void f_11ac6060(void) {
  FTRACE(0x11ac6060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6060 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6061 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6063 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac6066 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac6067 push esi */
  push32((uint32_t)(ESI));
  /* 11ac6068 push edi */
  push32((uint32_t)(EDI));
  /* 11ac6069 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac606a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11ac606d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11ac6072 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11ac6077 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac6079 pop ecx */
  ECX = (pop32());
  /* 11ac607a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac607d mov esi, esp */
  ESI = (ESP);
  /* 11ac607f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac6081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac6084 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6087 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6088 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac608b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ac608d push edx */
  push32((uint32_t)(EDX));
  /* 11ac608e call dword ptr [0x11afb488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb488))), 0x11ac6094u);
  /* 11ac6094 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6097 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6099 call 0x11ac6240 */
  push32(0x11ac609eu); f_11ac6240();
  /* 11ac609e mov esi, esp */
  ESI = (ESP);
  /* 11ac60a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac60a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac60a5 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11ac60a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac60a9 call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac60afu);
  /* 11ac60af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac60b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac60b4 call 0x11ac6240 */
  push32(0x11ac60b9u); f_11ac6240();
  /* 11ac60b9 mov esi, esp */
  ESI = (ESP);
  /* 11ac60bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac60be mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ac60c1 push eax */
  push32((uint32_t)(EAX));
  /* 11ac60c2 call dword ptr [0x11afb4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4dc))), 0x11ac60c8u);
  /* 11ac60c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac60cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac60cd call 0x11ac6240 */
  push32(0x11ac60d2u); f_11ac6240();
  /* 11ac60d2 mov esi, esp */
  ESI = (ESP);
  /* 11ac60d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac60d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac60d9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac60dc push ecx */
  push32((uint32_t)(ECX));
  /* 11ac60dd call dword ptr [0x11afb4c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb4c8))), 0x11ac60e3u);
  /* 11ac60e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac60e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac60e8 call 0x11ac6240 */
  push32(0x11ac60edu); f_11ac6240();
  /* 11ac60ed pop edi */
  EDI = (pop32());
  /* 11ac60ee pop esi */
  ESI = (pop32());
  /* 11ac60ef pop ebx */
  EBX = (pop32());
  /* 11ac60f0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac60f3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac60f5 call 0x11ac6240 */
  push32(0x11ac60fau); f_11ac6240();
  /* 11ac60fa mov esp, ebp */
  ESP = (EBP);
  /* 11ac60fc pop ebp */
  EBP = (pop32());
  /* 11ac60fd ret  */
  ESPCHK(0x11ac6060u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11ac6240 (56 bytes, 28 insns) */
void f_11ac6240(void) {
  FTRACE(0x11ac6240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6240 jne 0x11ac6243 */
  if (!C.zf) goto L_11ac6243;
  /* 11ac6242 ret  */
  ESPCHK(0x11ac6240u, _esp0);
  ESP += 4; return;
L_11ac6243:;
  /* 11ac6243 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6244 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6246 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac6249 push eax */
  push32((uint32_t)(EAX));
  /* 11ac624a push edx */
  push32((uint32_t)(EDX));
  /* 11ac624b push ebx */
  push32((uint32_t)(EBX));
  /* 11ac624c push esi */
  push32((uint32_t)(ESI));
  /* 11ac624d push edi */
  push32((uint32_t)(EDI));
  /* 11ac624e push 0x11af3200 */
  push32((uint32_t)(0x11af3200u));
  /* 11ac6253 push 0x11af31fc */
  push32((uint32_t)(0x11af31fcu));
  /* 11ac6258 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11ac625a push 0x11af31ec */
  push32((uint32_t)(0x11af31ecu));
  /* 11ac625f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac6261 call 0x11ac6a40 */
  push32(0x11ac6266u); f_11ac6a40();
  /* 11ac6266 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6269 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac626c jne 0x11ac626f */
  if (!C.zf) goto L_11ac626f;
  /* 11ac626e int3  */
  x86_unimpl("int3 @ 0x11ac626e");
L_11ac626f:;
  /* 11ac626f pop edi */
  EDI = (pop32());
  /* 11ac6270 pop esi */
  ESI = (pop32());
  /* 11ac6271 pop ebx */
  EBX = (pop32());
  /* 11ac6272 pop edx */
  EDX = (pop32());
  /* 11ac6273 pop eax */
  EAX = (pop32());
  /* 11ac6274 mov esp, ebp */
  ESP = (EBP);
  /* 11ac6276 pop ebp */
  EBP = (pop32());
  /* 11ac6277 ret  */
  ESPCHK(0x11ac6240u, _esp0);
  ESP += 4; return;
}

/* FUN_10006280 @ 0x11ac6280 (16 bytes, 7 insns) */
void f_11ac6280(void) {
  FTRACE(0x11ac6280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6280 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6281 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6283 call 0x11ac71c0 */
  push32(0x11ac6288u); f_11ac71c0();
  /* 11ac6288 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac628b mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11ac628e pop ebp */
  EBP = (pop32());
  /* 11ac628f ret  */
  ESPCHK(0x11ac6280u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11ac6290 (54 bytes, 18 insns) */
void f_11ac6290(void) {
  FTRACE(0x11ac6290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6290 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6291 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6293 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6294 call 0x11ac71c0 */
  push32(0x11ac6299u); f_11ac71c0();
  /* 11ac6299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac629c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac629f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ac62a2 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ac62a8 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac62ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac62b1 mov dword ptr [edx + 0x14], ecx */
  w32((uint32_t)(EDX + 0x14), (ECX));
  /* 11ac62b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac62b7 mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ac62ba shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ac62bd and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac62c2 mov esp, ebp */
  ESP = (EBP);
  /* 11ac62c4 pop ebp */
  EBP = (pop32());
  /* 11ac62c5 ret  */
  ESPCHK(0x11ac6290u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x11ac62d0 (250 bytes, 92 insns) */
void f_11ac62d0(void) {
  FTRACE(0x11ac62d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac62d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac62d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac62d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac62d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac62d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ac62d8 push edi */
  push32((uint32_t)(EDI));
  /* 11ac62d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11ac62dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ac62df lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ac62e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11ac62e5:;
  /* 11ac62e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac62e9 jne 0x11ac6309 */
  if (!C.zf) goto L_11ac6309;
  /* 11ac62eb push 0x11af32f8 */
  push32((uint32_t)(0x11af32f8u));
  /* 11ac62f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac62f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11ac62f4 push 0x11af32ec */
  push32((uint32_t)(0x11af32ecu));
  /* 11ac62f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac62fb call 0x11ac6a40 */
  push32(0x11ac6300u); f_11ac6a40();
  /* 11ac6300 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6303 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6306 jne 0x11ac6309 */
  if (!C.zf) goto L_11ac6309;
  /* 11ac6308 int3  */
  x86_unimpl("int3 @ 0x11ac6308");
L_11ac6309:;
  /* 11ac6309 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac630b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac630d jne 0x11ac62e5 */
  if (!C.zf) goto L_11ac62e5;
L_11ac630f:;
  /* 11ac630f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6313 jne 0x11ac6333 */
  if (!C.zf) goto L_11ac6333;
  /* 11ac6315 push 0x11af32dc */
  push32((uint32_t)(0x11af32dcu));
  /* 11ac631a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac631c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11ac631e push 0x11af32ec */
  push32((uint32_t)(0x11af32ecu));
  /* 11ac6323 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac6325 call 0x11ac6a40 */
  push32(0x11ac632au); f_11ac6a40();
  /* 11ac632a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac632d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6330 jne 0x11ac6333 */
  if (!C.zf) goto L_11ac6333;
  /* 11ac6332 int3  */
  x86_unimpl("int3 @ 0x11ac6332");
L_11ac6333:;
  /* 11ac6333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac6337 jne 0x11ac630f */
  if (!C.zf) goto L_11ac630f;
  /* 11ac6339 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac633c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11ac6343 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac6346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6349 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ac634c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac634f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6352 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ac6354 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac6357 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11ac635e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ac6361 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6362 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac6365 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6366 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac6369 push eax */
  push32((uint32_t)(EAX));
  /* 11ac636a call 0x11ac7610 */
  push32(0x11ac636fu); f_11ac7610();
  /* 11ac636f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6372 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ac6375 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac6378 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ac637b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac637e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac6381 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ac6384 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac6387 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac638b jl 0x11ac63af */
  if ((C.sf!=C.of)) goto L_11ac63af;
  /* 11ac638d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac6390 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ac6392 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ac6395 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac6397 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac639d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11ac63a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac63a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ac63a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac63a8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac63ab mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ac63ad jmp 0x11ac63c0 */
  goto L_11ac63c0;
L_11ac63af:;
  /* 11ac63af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac63b2 push edx */
  push32((uint32_t)(EDX));
  /* 11ac63b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac63b5 call 0x11ac7390 */
  push32(0x11ac63bau); f_11ac7390();
  /* 11ac63ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac63bd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11ac63c0:;
  /* 11ac63c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ac63c3 pop edi */
  EDI = (pop32());
  /* 11ac63c4 pop esi */
  ESI = (pop32());
  /* 11ac63c5 pop ebx */
  EBX = (pop32());
  /* 11ac63c6 mov esp, ebp */
  ESP = (EBP);
  /* 11ac63c8 pop ebp */
  EBP = (pop32());
  /* 11ac63c9 ret  */
  ESPCHK(0x11ac62d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063d0 @ 0x11ac63d0 (33 bytes, 15 insns) */
void f_11ac63d0(void) {
  FTRACE(0x11ac63d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac63d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac63d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac63d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac63d4 push esi */
  push32((uint32_t)(ESI));
  /* 11ac63d5 push edi */
  push32((uint32_t)(EDI));
  /* 11ac63d6 call 0x11ac6410 */
  push32(0x11ac63dbu); f_11ac6410();
  /* 11ac63db call 0x11ac8530 */
  push32(0x11ac63e0u); f_11ac8530();
  /* 11ac63e0 mov dword ptr [0x11af92a8], eax */
  w32((uint32_t)(0x11af92a8), (EAX));
  /* 11ac63e5 call 0x11ac84b0 */
  push32(0x11ac63eau); f_11ac84b0();
  /* 11ac63ea fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11ac63ec pop edi */
  EDI = (pop32());
  /* 11ac63ed pop esi */
  ESI = (pop32());
  /* 11ac63ee pop ebx */
  EBX = (pop32());
  /* 11ac63ef pop ebp */
  EBP = (pop32());
  /* 11ac63f0 ret  */
  ESPCHK(0x11ac63d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006400 @ 0x11ac6400 (5 bytes, 4 insns) */
void f_11ac6400(void) {
  FTRACE(0x11ac6400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6400 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6401 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6403 pop ebp */
  EBP = (pop32());
  /* 11ac6404 ret  */
  ESPCHK(0x11ac6400u, _esp0);
  ESP += 4; return;
}

/* FUN_10006410 @ 0x11ac6410 (65 bytes, 10 insns) */
void f_11ac6410(void) {
  FTRACE(0x11ac6410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6410 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6411 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6413 mov dword ptr [0x11af6ac0], 0x11ac8c20 */
  w32((uint32_t)(0x11af6ac0), (0x11ac8c20u));
  /* 11ac641d mov dword ptr [0x11af6ac4], 0x11ac8630 */
  w32((uint32_t)(0x11af6ac4), (0x11ac8630u));
  /* 11ac6427 mov dword ptr [0x11af6ac8], 0x11ac8740 */
  w32((uint32_t)(0x11af6ac8), (0x11ac8740u));
  /* 11ac6431 mov dword ptr [0x11af6acc], 0x11ac8580 */
  w32((uint32_t)(0x11af6acc), (0x11ac8580u));
  /* 11ac643b mov dword ptr [0x11af6ad0], 0x11ac8710 */
  w32((uint32_t)(0x11af6ad0), (0x11ac8710u));
  /* 11ac6445 mov dword ptr [0x11af6ad4], 0x11ac8c20 */
  w32((uint32_t)(0x11af6ad4), (0x11ac8c20u));
  /* 11ac644f pop ebp */
  EBP = (pop32());
  /* 11ac6450 ret  */
  ESPCHK(0x11ac6410u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x11ac6460 (28 bytes, 11 insns) */
void f_11ac6460(void) {
  FTRACE(0x11ac6460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6460 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6461 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6463 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6464 mov eax, dword ptr [0x11af92a4] */
  EAX = (r32((uint32_t)(0x11af92a4)));
  /* 11ac6469 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac646c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac646f mov dword ptr [0x11af92a4], ecx */
  w32((uint32_t)(0x11af92a4), (ECX));
  /* 11ac6475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac6478 mov esp, ebp */
  ESP = (EBP);
  /* 11ac647a pop ebp */
  EBP = (pop32());
  /* 11ac647b ret  */
  ESPCHK(0x11ac6460u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11ac647c (39 bytes, 16 insns) */
void f_11ac647c(void) {
  FTRACE(0x11ac647cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac647c push ebp */
  push32((uint32_t)(EBP));
  /* 11ac647d mov ebp, esp */
  EBP = (ESP);
  /* 11ac647f add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6482 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac6483 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11ac6486 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac6487 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11ac648b or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11ac648e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ac6492 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11ac6495 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11ac6498 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11ac649b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac649e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac64a1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ac64a2 ret  */
  ESPCHK(0x11ac647cu, _esp0);
  ESP += 4; return;
}

/* FUN_100064b0 @ 0x11ac64b0 (20 bytes, 6 insns) */
void f_11ac64b0(void) {
  FTRACE(0x11ac64b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac64b0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac64b3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11ac64b6 call 0x11ac8f08 */
  push32(0x11ac64bbu); f_11ac8f08();
  /* 11ac64bb call 0x11ac64cd */
  push32(0x11ac64c0u); f_11ac64cd();
  /* 11ac64c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac64c3 ret  */
  ESPCHK(0x11ac64b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064c4 @ 0x11ac64c4 (9 bytes, 2 insns) */
void f_11ac64c4(void) {
  FTRACE(0x11ac64c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac64c4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11ac64c8 call 0x11ac8ec5 */
  push32(0x11ac64cdu); f_11ac8ec5();
}

/* FUN_100064cd @ 0x11ac64cd (145 bytes, 43 insns) */
void f_11ac64cd(void) {
  FTRACE(0x11ac64cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac64cd push edx */
  push32((uint32_t)(EDX));
  /* 11ac64ce wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac64cf fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11ac64d2 je 0x11ac6524 */
  if (C.zf) goto L_11ac6524;
  /* 11ac64d4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ac64da je 0x11ac64e2 */
  if (C.zf) goto L_11ac64e2;
  /* 11ac64dc fldcw word ptr [0x11af3678] */
  C.fcw = r16((uint32_t)(0x11af3678));
L_11ac64e2:;
  /* 11ac64e2 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11ac64e4 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac64e5 fnstsw ax */
  AX = fpu_status();
  /* 11ac64e7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11ac64e8 jp 0x11ac6507 */
  if (C.pf) goto L_11ac6507;
L_11ac64ea:;
  /* 11ac64ea cmp dword ptr [0x11af92a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac64f1 jne 0x11ac8f1e */
  if (!C.zf) { jmp_ind(0x11ac8f1eu); return; }
  /* 11ac64f7 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11ac64fc lea ecx, [0x11af6a60] */
  ECX = ((uint32_t)(0x11af6a60));
  /* 11ac6502 jmp 0x11ac8f2b */
  f_11ac8f2b(); return;
L_11ac6507:;
  /* 11ac6507 fld xword ptr [0x11af367a] */
  fpu_push(rf80((uint32_t)(0x11af367a)));
  /* 11ac650d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11ac650f:;
  /* 11ac650f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11ac6511 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac6512 fnstsw ax */
  AX = fpu_status();
  /* 11ac6514 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11ac6515 jp 0x11ac650f */
  if (C.pf) goto L_11ac650f;
  /* 11ac6517 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ac6519 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11ac651b jmp 0x11ac64ea */
  goto L_11ac64ea;
L_11ac651d:;
  /* 11ac651d call 0x11ac8eac */
  push32(0x11ac6522u); f_11ac8eac();
  /* 11ac6522 jmp 0x11ac653f */
  goto L_11ac653f;
L_11ac6524:;
  /* 11ac6524 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11ac6529 jne 0x11ac651d */
  if (!C.zf) goto L_11ac651d;
  /* 11ac652b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6530 jne 0x11ac651d */
  if (!C.zf) goto L_11ac651d;
  /* 11ac6532 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ac6534 fld xword ptr [0x11af6ae0] */
  fpu_push(rf80((uint32_t)(0x11af6ae0)));
  /* 11ac653a mov eax, 1 */
  EAX = (0x1u);
L_11ac653f:;
  /* 11ac653f cmp dword ptr [0x11af92a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6546 jne 0x11ac8f1e */
  if (!C.zf) { jmp_ind(0x11ac8f1eu); return; }
  /* 11ac654c mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11ac6551 lea ecx, [0x11af6a60] */
  ECX = ((uint32_t)(0x11af6a60));
  /* 11ac6557 call 0x11ac9027 */
  push32(0x11ac655cu); f_11ac9027();
  /* 11ac655c pop edx */
  EDX = (pop32());
  /* 11ac655d ret  */
  ESPCHK(0x11ac64cdu, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x11ac6560 (20 bytes, 6 insns) */
void f_11ac6560(void) {
  FTRACE(0x11ac6560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6560 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac6563 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11ac6566 call 0x11ac8f08 */
  push32(0x11ac656bu); f_11ac8f08();
  /* 11ac656b call 0x11ac657d */
  push32(0x11ac6570u); f_11ac657d();
  /* 11ac6570 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6573 ret  */
  ESPCHK(0x11ac6560u, _esp0);
  ESP += 4; return;
}

/* FUN_10006574 @ 0x11ac6574 (9 bytes, 2 insns) */
void f_11ac6574(void) {
  FTRACE(0x11ac6574u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6574 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11ac6578 call 0x11ac8ec5 */
  push32(0x11ac657du); f_11ac8ec5();
}

/* FUN_1000657d @ 0x11ac657d (145 bytes, 43 insns) */
void f_11ac657d(void) {
  FTRACE(0x11ac657du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac657d push edx */
  push32((uint32_t)(EDX));
  /* 11ac657e wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac657f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11ac6582 je 0x11ac65d4 */
  if (C.zf) goto L_11ac65d4;
  /* 11ac6584 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ac658a je 0x11ac6592 */
  if (C.zf) goto L_11ac6592;
  /* 11ac658c fldcw word ptr [0x11af3678] */
  C.fcw = r16((uint32_t)(0x11af3678));
L_11ac6592:;
  /* 11ac6592 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11ac6594 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac6595 fnstsw ax */
  AX = fpu_status();
  /* 11ac6597 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11ac6598 jp 0x11ac65b7 */
  if (C.pf) goto L_11ac65b7;
L_11ac659a:;
  /* 11ac659a cmp dword ptr [0x11af92a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac65a1 jne 0x11ac8f1e */
  if (!C.zf) { jmp_ind(0x11ac8f1eu); return; }
  /* 11ac65a7 mov edx, 0x12 */
  EDX = (0x12u);
  /* 11ac65ac lea ecx, [0x11af6a70] */
  ECX = ((uint32_t)(0x11af6a70));
  /* 11ac65b2 jmp 0x11ac8f2b */
  f_11ac8f2b(); return;
L_11ac65b7:;
  /* 11ac65b7 fld xword ptr [0x11af367a] */
  fpu_push(rf80((uint32_t)(0x11af367a)));
  /* 11ac65bd fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11ac65bf:;
  /* 11ac65bf fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11ac65c1 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac65c2 fnstsw ax */
  AX = fpu_status();
  /* 11ac65c4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11ac65c5 jp 0x11ac65bf */
  if (C.pf) goto L_11ac65bf;
  /* 11ac65c7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ac65c9 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11ac65cb jmp 0x11ac659a */
  goto L_11ac659a;
L_11ac65cd:;
  /* 11ac65cd call 0x11ac8eac */
  push32(0x11ac65d2u); f_11ac8eac();
  /* 11ac65d2 jmp 0x11ac65ef */
  goto L_11ac65ef;
L_11ac65d4:;
  /* 11ac65d4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11ac65d9 jne 0x11ac65cd */
  if (!C.zf) goto L_11ac65cd;
  /* 11ac65db cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac65e0 jne 0x11ac65cd */
  if (!C.zf) goto L_11ac65cd;
  /* 11ac65e2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ac65e4 fld xword ptr [0x11af6ae0] */
  fpu_push(rf80((uint32_t)(0x11af6ae0)));
  /* 11ac65ea mov eax, 1 */
  EAX = (0x1u);
L_11ac65ef:;
  /* 11ac65ef cmp dword ptr [0x11af92a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac65f6 jne 0x11ac8f1e */
  if (!C.zf) { jmp_ind(0x11ac8f1eu); return; }
  /* 11ac65fc mov edx, 0x12 */
  EDX = (0x12u);
  /* 11ac6601 lea ecx, [0x11af6a70] */
  ECX = ((uint32_t)(0x11af6a70));
  /* 11ac6607 call 0x11ac9027 */
  push32(0x11ac660cu); f_11ac9027();
  /* 11ac660c pop edx */
  EDX = (pop32());
  /* 11ac660d ret  */
  ESPCHK(0x11ac657du, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x11ac6610 (20 bytes, 6 insns) */
void f_11ac6610(void) {
  FTRACE(0x11ac6610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6610 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac6613 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11ac6616 call 0x11ac8f08 */
  push32(0x11ac661bu); f_11ac8f08();
  /* 11ac661b call 0x11ac662d */
  push32(0x11ac6620u); f_11ac662d();
  /* 11ac6620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6623 ret  */
  ESPCHK(0x11ac6610u, _esp0);
  ESP += 4; return;
}

/* FUN_10006624 @ 0x11ac6624 (9 bytes, 2 insns) */
void f_11ac6624(void) {
  FTRACE(0x11ac6624u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6624 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11ac6628 call 0x11ac8ec5 */
  push32(0x11ac662du); f_11ac8ec5();
}

/* FUN_1000662d @ 0x11ac662d (138 bytes, 38 insns) */
void f_11ac662d(void) {
  FTRACE(0x11ac662du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac662d push edx */
  push32((uint32_t)(EDX));
  /* 11ac662e wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac662f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11ac6632 je 0x11ac666a */
  if (C.zf) goto L_11ac666a;
  /* 11ac6634 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ac663a je 0x11ac6642 */
  if (C.zf) goto L_11ac6642;
  /* 11ac663c fldcw word ptr [0x11af3678] */
  C.fcw = r16((uint32_t)(0x11af3678));
L_11ac6642:;
  /* 11ac6642 fld1  */
  fpu_push(1.0);
  /* 11ac6644 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_11ac6646:;
  /* 11ac6646 cmp dword ptr [0x11af92a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac664d jne 0x11ac8f1e */
  if (!C.zf) { jmp_ind(0x11ac8f1eu); return; }
  /* 11ac6653 mov edx, 0xf */
  EDX = (0xfu);
  /* 11ac6658 lea ecx, [0x11af6a80] */
  ECX = ((uint32_t)(0x11af6a80));
  /* 11ac665e jmp 0x11ac8f2b */
  f_11ac8f2b(); return;
L_11ac6663:;
  /* 11ac6663 call 0x11ac8eac */
  push32(0x11ac6668u); f_11ac8eac();
  /* 11ac6668 jmp 0x11ac6690 */
  goto L_11ac6690;
L_11ac666a:;
  /* 11ac666a test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11ac666f jne 0x11ac6663 */
  if (!C.zf) goto L_11ac6663;
  /* 11ac6671 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6676 jne 0x11ac6663 */
  if (!C.zf) goto L_11ac6663;
  /* 11ac6678 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11ac667a fld xword ptr [0x11af6aea] */
  fpu_push(rf80((uint32_t)(0x11af6aea)));
  /* 11ac6680 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 11ac6685 je 0x11ac6646 */
  if (C.zf) goto L_11ac6646;
  /* 11ac6687 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11ac6689 jmp 0x11ac6646 */
  goto L_11ac6646;
  /* 11ac668b mov eax, 1 */
  EAX = (0x1u);
L_11ac6690:;
  /* 11ac6690 cmp dword ptr [0x11af92a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6697 jne 0x11ac8f1e */
  if (!C.zf) { jmp_ind(0x11ac8f1eu); return; }
  /* 11ac669d mov edx, 0xf */
  EDX = (0xfu);
  /* 11ac66a2 lea ecx, [0x11af6a80] */
  ECX = ((uint32_t)(0x11af6a80));
  /* 11ac66a8 call 0x11ac9027 */
  push32(0x11ac66adu); f_11ac9027();
  /* 11ac66ad pop edx */
  EDX = (pop32());
  /* 11ac66ae ret  */
  ESPCHK(0x11ac662du, _esp0);
  ESP += 4; return;
  /* 11ac66af int3  */
  x86_unimpl("int3 @ 0x11ac66af");
  /* 11ac66b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac66b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac66b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
}

/* FUN_100066b0 @ 0x11ac66b0 (313 bytes, 78 insns) */
void f_11ac66b0(void) {
  FTRACE(0x11ac66b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac66b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac66b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac66b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac66b7 jne 0x11ac6777 */
  if (!C.zf) goto L_11ac6777;
  /* 11ac66bd call dword ptr [0x11afb384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb384))), 0x11ac66c3u);
  /* 11ac66c3 mov dword ptr [0x11af92c8], eax */
  w32((uint32_t)(0x11af92c8), (EAX));
  /* 11ac66c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac66ca call 0x11acbe50 */
  push32(0x11ac66cfu); f_11acbe50();
  /* 11ac66cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac66d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac66d4 jne 0x11ac66dd */
  if (!C.zf) goto L_11ac66dd;
  /* 11ac66d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac66d8 jmp 0x11ac67e5 */
  goto L_11ac67e5;
L_11ac66dd:;
  /* 11ac66dd mov eax, dword ptr [0x11af92c8] */
  EAX = (r32((uint32_t)(0x11af92c8)));
  /* 11ac66e2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ac66e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac66ea mov dword ptr [0x11af92d4], eax */
  w32((uint32_t)(0x11af92d4), (EAX));
  /* 11ac66ef mov ecx, dword ptr [0x11af92c8] */
  ECX = (r32((uint32_t)(0x11af92c8)));
  /* 11ac66f5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac66fb mov dword ptr [0x11af92d0], ecx */
  w32((uint32_t)(0x11af92d0), (ECX));
  /* 11ac6701 mov edx, dword ptr [0x11af92d0] */
  EDX = (r32((uint32_t)(0x11af92d0)));
  /* 11ac6707 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ac670a add edx, dword ptr [0x11af92d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af92d4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6710 mov dword ptr [0x11af92cc], edx */
  w32((uint32_t)(0x11af92cc), (EDX));
  /* 11ac6716 mov eax, dword ptr [0x11af92c8] */
  EAX = (r32((uint32_t)(0x11af92c8)));
  /* 11ac671b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ac671e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6723 mov dword ptr [0x11af92c8], eax */
  w32((uint32_t)(0x11af92c8), (EAX));
  /* 11ac6728 call 0x11ac70e0 */
  push32(0x11ac672du); f_11ac70e0();
  /* 11ac672d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac672f jne 0x11ac673d */
  if (!C.zf) goto L_11ac673d;
  /* 11ac6731 call 0x11acbea0 */
  push32(0x11ac6736u); f_11acbea0();
  /* 11ac6736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6738 jmp 0x11ac67e5 */
  goto L_11ac67e5;
L_11ac673d:;
  /* 11ac673d call dword ptr [0x11afb380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb380))), 0x11ac6743u);
  /* 11ac6743 mov dword ptr [0x11afade8], eax */
  w32((uint32_t)(0x11afade8), (EAX));
  /* 11ac6748 call 0x11acbc30 */
  push32(0x11ac674du); f_11acbc30();
  /* 11ac674d mov dword ptr [0x11af92b0], eax */
  w32((uint32_t)(0x11af92b0), (EAX));
  /* 11ac6752 call 0x11ac9270 */
  push32(0x11ac6757u); f_11ac9270();
  /* 11ac6757 call 0x11acb720 */
  push32(0x11ac675cu); f_11acb720();
  /* 11ac675c call 0x11acb5d0 */
  push32(0x11ac6761u); f_11acb5d0();
  /* 11ac6761 call 0x11ac9070 */
  push32(0x11ac6766u); f_11ac9070();
  /* 11ac6766 mov ecx, dword ptr [0x11af92ac] */
  ECX = (r32((uint32_t)(0x11af92ac)));
  /* 11ac676c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac676f mov dword ptr [0x11af92ac], ecx */
  w32((uint32_t)(0x11af92ac), (ECX));
  /* 11ac6775 jmp 0x11ac67e0 */
  goto L_11ac67e0;
L_11ac6777:;
  /* 11ac6777 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac677b jne 0x11ac67d0 */
  if (!C.zf) goto L_11ac67d0;
  /* 11ac677d cmp dword ptr [0x11af92ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6784 jle 0x11ac67ca */
  if ((C.zf||C.sf!=C.of)) goto L_11ac67ca;
  /* 11ac6786 mov edx, dword ptr [0x11af92ac] */
  EDX = (r32((uint32_t)(0x11af92ac)));
  /* 11ac678c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac678f mov dword ptr [0x11af92ac], edx */
  w32((uint32_t)(0x11af92ac), (EDX));
  /* 11ac6795 cmp dword ptr [0x11af9300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac679c jne 0x11ac67a3 */
  if (!C.zf) goto L_11ac67a3;
  /* 11ac679e call 0x11ac90f0 */
  push32(0x11ac67a3u); f_11ac90f0();
L_11ac67a3:;
  /* 11ac67a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ac67a5 call 0x11acab70 */
  push32(0x11ac67aau); f_11acab70();
  /* 11ac67aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac67ad and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac67b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac67b2 je 0x11ac67b9 */
  if (C.zf) goto L_11ac67b9;
  /* 11ac67b4 call 0x11acb480 */
  push32(0x11ac67b9u); f_11acb480();
L_11ac67b9:;
  /* 11ac67b9 call 0x11ac95a0 */
  push32(0x11ac67beu); f_11ac95a0();
  /* 11ac67be call 0x11ac7170 */
  push32(0x11ac67c3u); f_11ac7170();
  /* 11ac67c3 call 0x11acbea0 */
  push32(0x11ac67c8u); f_11acbea0();
  /* 11ac67c8 jmp 0x11ac67ce */
  goto L_11ac67ce;
L_11ac67ca:;
  /* 11ac67ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac67cc jmp 0x11ac67e5 */
  goto L_11ac67e5;
L_11ac67ce:;
  /* 11ac67ce jmp 0x11ac67e0 */
  goto L_11ac67e0;
L_11ac67d0:;
  /* 11ac67d0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac67d4 jne 0x11ac67e0 */
  if (!C.zf) goto L_11ac67e0;
  /* 11ac67d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac67d8 call 0x11ac7260 */
  push32(0x11ac67ddu); f_11ac7260();
  /* 11ac67dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac67e0:;
  /* 11ac67e0 mov eax, 1 */
  EAX = (0x1u);
L_11ac67e5:;
  /* 11ac67e5 pop ebp */
  EBP = (pop32());
  /* 11ac67e6 ret 0xc */
  ESPCHK(0x11ac66b0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11ac67f0 (243 bytes, 86 insns) */
void f_11ac67f0(void) {
  FTRACE(0x11ac67f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac67f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac67f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac67f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac67f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ac67fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac67ff jne 0x11ac6811 */
  if (!C.zf) goto L_11ac6811;
  /* 11ac6801 cmp dword ptr [0x11af92ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6808 jne 0x11ac6811 */
  if (!C.zf) goto L_11ac6811;
  /* 11ac680a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac680c jmp 0x11ac68dd */
  goto L_11ac68dd;
L_11ac6811:;
  /* 11ac6811 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6815 je 0x11ac681d */
  if (C.zf) goto L_11ac681d;
  /* 11ac6817 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac681b jne 0x11ac685f */
  if (!C.zf) goto L_11ac685f;
L_11ac681d:;
  /* 11ac681d cmp dword ptr [0x11afadf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afadf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6824 je 0x11ac683b */
  if (C.zf) goto L_11ac683b;
  /* 11ac6826 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac6829 push eax */
  push32((uint32_t)(EAX));
  /* 11ac682a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac682d push ecx */
  push32((uint32_t)(ECX));
  /* 11ac682e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6831 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6832 call dword ptr [0x11afadf8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afadf8))), 0x11ac6838u);
  /* 11ac6838 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ac683b:;
  /* 11ac683b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac683f je 0x11ac6855 */
  if (C.zf) goto L_11ac6855;
  /* 11ac6841 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac6844 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6845 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac6848 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6849 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac684c push edx */
  push32((uint32_t)(EDX));
  /* 11ac684d call 0x11ac66b0 */
  push32(0x11ac6852u); f_11ac66b0();
  /* 11ac6852 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ac6855:;
  /* 11ac6855 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6859 jne 0x11ac685f */
  if (!C.zf) goto L_11ac685f;
  /* 11ac685b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac685d jmp 0x11ac68dd */
  goto L_11ac68dd;
L_11ac685f:;
  /* 11ac685f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac6862 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6863 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac6866 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac686a push edx */
  push32((uint32_t)(EDX));
  /* 11ac686b call 0x11ac1037 */
  push32(0x11ac6870u); f_11ac1037();
  /* 11ac6870 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac6873 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6877 jne 0x11ac688e */
  if (!C.zf) goto L_11ac688e;
  /* 11ac6879 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac687d jne 0x11ac688e */
  if (!C.zf) goto L_11ac688e;
  /* 11ac687f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac6882 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6883 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac6885 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6888 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6889 call 0x11ac66b0 */
  push32(0x11ac688eu); f_11ac66b0();
L_11ac688e:;
  /* 11ac688e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6892 je 0x11ac689a */
  if (C.zf) goto L_11ac689a;
  /* 11ac6894 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6898 jne 0x11ac68da */
  if (!C.zf) goto L_11ac68da;
L_11ac689a:;
  /* 11ac689a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac689d push edx */
  push32((uint32_t)(EDX));
  /* 11ac689e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac68a1 push eax */
  push32((uint32_t)(EAX));
  /* 11ac68a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac68a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac68a6 call 0x11ac66b0 */
  push32(0x11ac68abu); f_11ac66b0();
  /* 11ac68ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac68ad jne 0x11ac68b6 */
  if (!C.zf) goto L_11ac68b6;
  /* 11ac68af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ac68b6:;
  /* 11ac68b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac68ba je 0x11ac68da */
  if (C.zf) goto L_11ac68da;
  /* 11ac68bc cmp dword ptr [0x11afadf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afadf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac68c3 je 0x11ac68da */
  if (C.zf) goto L_11ac68da;
  /* 11ac68c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac68c8 push edx */
  push32((uint32_t)(EDX));
  /* 11ac68c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac68cc push eax */
  push32((uint32_t)(EAX));
  /* 11ac68cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac68d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac68d1 call dword ptr [0x11afadf8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afadf8))), 0x11ac68d7u);
  /* 11ac68d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ac68da:;
  /* 11ac68da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ac68dd:;
  /* 11ac68dd mov esp, ebp */
  ESP = (EBP);
  /* 11ac68df pop ebp */
  EBP = (pop32());
  /* 11ac68e0 ret 0xc */
  ESPCHK(0x11ac67f0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11ac68f0 (58 bytes, 18 insns) */
void f_11ac68f0(void) {
  FTRACE(0x11ac68f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac68f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac68f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac68f3 cmp dword ptr [0x11af92b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af92b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac68fa je 0x11ac690e */
  if (C.zf) goto L_11ac690e;
  /* 11ac68fc cmp dword ptr [0x11af92b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6903 jne 0x11ac6913 */
  if (!C.zf) goto L_11ac6913;
  /* 11ac6905 cmp dword ptr [0x11af92bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af92bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac690c jne 0x11ac6913 */
  if (!C.zf) goto L_11ac6913;
L_11ac690e:;
  /* 11ac690e call 0x11acbf40 */
  push32(0x11ac6913u); f_11acbf40();
L_11ac6913:;
  /* 11ac6913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6916 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6917 call 0x11acbf90 */
  push32(0x11ac691cu); f_11acbf90();
  /* 11ac691c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac691f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11ac6924 call dword ptr [0x11af6a88] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af6a88))), 0x11ac692au);
  /* 11ac692a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac692d pop ebp */
  EBP = (pop32());
  /* 11ac692e ret  */
  ESPCHK(0x11ac68f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x11ac6930 (11 bytes, 5 insns) */
void f_11ac6930(void) {
  FTRACE(0x11ac6930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6930 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6931 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6933 call dword ptr [0x11afb388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb388))), 0x11ac6939u);
  /* 11ac6939 pop ebp */
  EBP = (pop32());
  /* 11ac693a ret  */
  ESPCHK(0x11ac6930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006940 @ 0x11ac6940 (87 bytes, 30 insns) */
void f_11ac6940(void) {
  FTRACE(0x11ac6940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6940 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6941 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6943 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6944 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6948 jl 0x11ac6950 */
  if ((C.sf!=C.of)) goto L_11ac6950;
  /* 11ac694a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac694e jl 0x11ac6955 */
  if ((C.sf!=C.of)) goto L_11ac6955;
L_11ac6950:;
  /* 11ac6950 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6953 jmp 0x11ac6993 */
  goto L_11ac6993;
L_11ac6955:;
  /* 11ac6955 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6959 jne 0x11ac6967 */
  if (!C.zf) goto L_11ac6967;
  /* 11ac695b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac695e mov eax, dword ptr [eax*4 + 0x11af6a90] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11af6a90)));
  /* 11ac6965 jmp 0x11ac6993 */
  goto L_11ac6993;
L_11ac6967:;
  /* 11ac6967 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac696a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac696d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac696f je 0x11ac6976 */
  if (C.zf) goto L_11ac6976;
  /* 11ac6971 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6974 jmp 0x11ac6993 */
  goto L_11ac6993;
L_11ac6976:;
  /* 11ac6976 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6979 mov eax, dword ptr [edx*4 + 0x11af6a90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11af6a90)));
  /* 11ac6980 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac6983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6986 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac6989 mov dword ptr [ecx*4 + 0x11af6a90], edx */
  w32((uint32_t)(ECX*4 + 0x11af6a90), (EDX));
  /* 11ac6990 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ac6993:;
  /* 11ac6993 mov esp, ebp */
  ESP = (EBP);
  /* 11ac6995 pop ebp */
  EBP = (pop32());
  /* 11ac6996 ret  */
  ESPCHK(0x11ac6940u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11ac69a0 (126 bytes, 38 insns) */
void f_11ac69a0(void) {
  FTRACE(0x11ac69a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac69a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac69a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac69a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac69a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac69a8 jl 0x11ac69b0 */
  if ((C.sf!=C.of)) goto L_11ac69b0;
  /* 11ac69aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac69ae jl 0x11ac69b7 */
  if ((C.sf!=C.of)) goto L_11ac69b7;
L_11ac69b0:;
  /* 11ac69b0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11ac69b5 jmp 0x11ac6a1a */
  goto L_11ac6a1a;
L_11ac69b7:;
  /* 11ac69b7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac69bb jne 0x11ac69c9 */
  if (!C.zf) goto L_11ac69c9;
  /* 11ac69bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac69c0 mov eax, dword ptr [eax*4 + 0x11af6a9c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11af6a9c)));
  /* 11ac69c7 jmp 0x11ac6a1a */
  goto L_11ac6a1a;
L_11ac69c9:;
  /* 11ac69c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac69cc mov edx, dword ptr [ecx*4 + 0x11af6a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af6a9c)));
  /* 11ac69d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac69d6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac69da jne 0x11ac69f0 */
  if (!C.zf) goto L_11ac69f0;
  /* 11ac69dc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11ac69de call dword ptr [0x11afb38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb38c))), 0x11ac69e4u);
  /* 11ac69e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac69e7 mov dword ptr [ecx*4 + 0x11af6a9c], eax */
  w32((uint32_t)(ECX*4 + 0x11af6a9c), (EAX));
  /* 11ac69ee jmp 0x11ac6a17 */
  goto L_11ac6a17;
L_11ac69f0:;
  /* 11ac69f0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac69f4 jne 0x11ac6a0a */
  if (!C.zf) goto L_11ac6a0a;
  /* 11ac69f6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11ac69f8 call dword ptr [0x11afb38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb38c))), 0x11ac69feu);
  /* 11ac69fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6a01 mov dword ptr [edx*4 + 0x11af6a9c], eax */
  w32((uint32_t)(EDX*4 + 0x11af6a9c), (EAX));
  /* 11ac6a08 jmp 0x11ac6a17 */
  goto L_11ac6a17;
L_11ac6a0a:;
  /* 11ac6a0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6a0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac6a10 mov dword ptr [eax*4 + 0x11af6a9c], ecx */
  w32((uint32_t)(EAX*4 + 0x11af6a9c), (ECX));
L_11ac6a17:;
  /* 11ac6a17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ac6a1a:;
  /* 11ac6a1a mov esp, ebp */
  ESP = (EBP);
  /* 11ac6a1c pop ebp */
  EBP = (pop32());
  /* 11ac6a1d ret  */
  ESPCHK(0x11ac69a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x11ac6a20 (28 bytes, 11 insns) */
void f_11ac6a20(void) {
  FTRACE(0x11ac6a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6a21 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6a24 mov eax, dword ptr [0x11afaddc] */
  EAX = (r32((uint32_t)(0x11afaddc)));
  /* 11ac6a29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac6a2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6a2f mov dword ptr [0x11afaddc], ecx */
  w32((uint32_t)(0x11afaddc), (ECX));
  /* 11ac6a35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac6a38 mov esp, ebp */
  ESP = (EBP);
  /* 11ac6a3a pop ebp */
  EBP = (pop32());
  /* 11ac6a3b ret  */
  ESPCHK(0x11ac6a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x11ac6a40 (912 bytes, 248 insns) */
void f_11ac6a40(void) {
  FTRACE(0x11ac6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6a41 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6a43 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11ac6a48 call 0x11acc800 */
  push32(0x11ac6a4du); f_11acc800();
  /* 11ac6a4d push edi */
  push32((uint32_t)(EDI));
  /* 11ac6a4e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11ac6a55 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11ac6a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6a5c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11ac6a62 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac6a64 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11ac6a66 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11ac6a67 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 11ac6a6e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11ac6a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6a75 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 11ac6a7b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac6a7d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11ac6a7f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11ac6a80 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11ac6a87 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11ac6a8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6a8e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11ac6a94 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ac6a96 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11ac6a98 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11ac6a99 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 11ac6a9c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11ac6aa2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6aa6 jl 0x11ac6aae */
  if ((C.sf!=C.of)) goto L_11ac6aae;
  /* 11ac6aa8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6aac jl 0x11ac6ab6 */
  if ((C.sf!=C.of)) goto L_11ac6ab6;
L_11ac6aae:;
  /* 11ac6aae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6ab1 jmp 0x11ac6dcb */
  goto L_11ac6dcb;
L_11ac6ab6:;
  /* 11ac6ab6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6aba jne 0x11ac6b60 */
  if (!C.zf) goto L_11ac6b60;
  /* 11ac6ac0 push 0x11af6a8c */
  push32((uint32_t)(0x11af6a8cu));
  /* 11ac6ac5 call dword ptr [0x11afb3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3a4))), 0x11ac6acbu);
  /* 11ac6acb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac6acd jle 0x11ac6b60 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac6b60;
  /* 11ac6ad3 cmp dword ptr [0x11af92c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6ada jne 0x11ac6b1e */
  if (!C.zf) goto L_11ac6b1e;
  /* 11ac6adc push 0x11af33d4 */
  push32((uint32_t)(0x11af33d4u));
  /* 11ac6ae1 call dword ptr [0x11afb3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3a0))), 0x11ac6ae7u);
  /* 11ac6ae7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 11ac6aed cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6af4 je 0x11ac6b16 */
  if (C.zf) goto L_11ac6b16;
  /* 11ac6af6 push 0x11af33c8 */
  push32((uint32_t)(0x11af33c8u));
  /* 11ac6afb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 11ac6b01 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6b02 call dword ptr [0x11afb39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb39c))), 0x11ac6b08u);
  /* 11ac6b08 mov dword ptr [0x11af92c0], eax */
  w32((uint32_t)(0x11af92c0), (EAX));
  /* 11ac6b0d cmp dword ptr [0x11af92c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6b14 jne 0x11ac6b1e */
  if (!C.zf) goto L_11ac6b1e;
L_11ac6b16:;
  /* 11ac6b16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6b19 jmp 0x11ac6dcb */
  goto L_11ac6dcb;
L_11ac6b1e:;
  /* 11ac6b1e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac6b21 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6b22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac6b25 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6b26 push 0x11af3394 */
  push32((uint32_t)(0x11af3394u));
  /* 11ac6b2b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11ac6b31 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6b32 call dword ptr [0x11af92c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af92c0))), 0x11ac6b38u);
  /* 11ac6b38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6b3b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11ac6b41 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6b42 call dword ptr [0x11afb398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb398))), 0x11ac6b48u);
  /* 11ac6b48 push 0x11af6a8c */
  push32((uint32_t)(0x11af6a8cu));
  /* 11ac6b4d call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11ac6b53u);
  /* 11ac6b53 call 0x11ac6930 */
  push32(0x11ac6b58u); f_11ac6930();
  /* 11ac6b58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6b5b jmp 0x11ac6dcb */
  goto L_11ac6dcb;
L_11ac6b60:;
  /* 11ac6b60 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6b64 je 0x11ac6b9d */
  if (C.zf) goto L_11ac6b9d;
  /* 11ac6b66 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 11ac6b6c push eax */
  push32((uint32_t)(EAX));
  /* 11ac6b6d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac6b70 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6b71 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11ac6b76 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 11ac6b7c push edx */
  push32((uint32_t)(EDX));
  /* 11ac6b7d call 0x11acc700 */
  push32(0x11ac6b82u); f_11acc700();
  /* 11ac6b82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6b85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac6b87 jge 0x11ac6b9d */
  if ((C.sf==C.of)) goto L_11ac6b9d;
  /* 11ac6b89 push 0x11af3368 */
  push32((uint32_t)(0x11af3368u));
  /* 11ac6b8e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11ac6b94 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6b95 call 0x11acc610 */
  push32(0x11ac6b9au); f_11acc610();
  /* 11ac6b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac6b9d:;
  /* 11ac6b9d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6ba1 jne 0x11ac6bd5 */
  if (!C.zf) goto L_11ac6bd5;
  /* 11ac6ba3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6ba7 je 0x11ac6bb5 */
  if (C.zf) goto L_11ac6bb5;
  /* 11ac6ba9 mov dword ptr [ebp - 0x3028], 0x11af3354 */
  w32((uint32_t)(EBP + -0x3028), (0x11af3354u));
  /* 11ac6bb3 jmp 0x11ac6bbf */
  goto L_11ac6bbf;
L_11ac6bb5:;
  /* 11ac6bb5 mov dword ptr [ebp - 0x3028], 0x11af3340 */
  w32((uint32_t)(EBP + -0x3028), (0x11af3340u));
L_11ac6bbf:;
  /* 11ac6bbf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11ac6bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6bc6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11ac6bcc push edx */
  push32((uint32_t)(EDX));
  /* 11ac6bcd call 0x11acc610 */
  push32(0x11ac6bd2u); f_11acc610();
  /* 11ac6bd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac6bd5:;
  /* 11ac6bd5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11ac6bdb push eax */
  push32((uint32_t)(EAX));
  /* 11ac6bdc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11ac6be2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6be3 call 0x11acc620 */
  push32(0x11ac6be8u); f_11acc620();
  /* 11ac6be8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6beb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6bef jne 0x11ac6c2a */
  if (!C.zf) goto L_11ac6c2a;
  /* 11ac6bf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6bf4 mov eax, dword ptr [edx*4 + 0x11af6a90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11af6a90)));
  /* 11ac6bfb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6bfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac6c00 je 0x11ac6c16 */
  if (C.zf) goto L_11ac6c16;
  /* 11ac6c02 push 0x11af333c */
  push32((uint32_t)(0x11af333cu));
  /* 11ac6c07 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11ac6c0d push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6c0e call 0x11acc620 */
  push32(0x11ac6c13u); f_11acc620();
  /* 11ac6c13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac6c16:;
  /* 11ac6c16 push 0x11af3338 */
  push32((uint32_t)(0x11af3338u));
  /* 11ac6c1b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11ac6c21 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6c22 call 0x11acc620 */
  push32(0x11ac6c27u); f_11acc620();
  /* 11ac6c27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac6c2a:;
  /* 11ac6c2a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6c2e je 0x11ac6c72 */
  if (C.zf) goto L_11ac6c72;
  /* 11ac6c30 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 11ac6c36 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6c37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac6c3a push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6c3b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac6c3e push edx */
  push32((uint32_t)(EDX));
  /* 11ac6c3f push 0x11af332c */
  push32((uint32_t)(0x11af332cu));
  /* 11ac6c44 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ac6c49 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11ac6c4f push eax */
  push32((uint32_t)(EAX));
  /* 11ac6c50 call 0x11acc510 */
  push32(0x11ac6c55u); f_11acc510();
  /* 11ac6c55 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac6c5a jge 0x11ac6c70 */
  if ((C.sf==C.of)) goto L_11ac6c70;
  /* 11ac6c5c push 0x11af3368 */
  push32((uint32_t)(0x11af3368u));
  /* 11ac6c61 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11ac6c67 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6c68 call 0x11acc610 */
  push32(0x11ac6c6du); f_11acc610();
  /* 11ac6c6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac6c70:;
  /* 11ac6c70 jmp 0x11ac6c88 */
  goto L_11ac6c88;
L_11ac6c72:;
  /* 11ac6c72 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11ac6c78 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6c79 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11ac6c7f push eax */
  push32((uint32_t)(EAX));
  /* 11ac6c80 call 0x11acc610 */
  push32(0x11ac6c85u); f_11acc610();
  /* 11ac6c85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac6c88:;
  /* 11ac6c88 cmp dword ptr [0x11afaddc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afaddc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6c8f je 0x11ac6ccc */
  if (C.zf) goto L_11ac6ccc;
  /* 11ac6c91 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11ac6c97 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6c98 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11ac6c9e push edx */
  push32((uint32_t)(EDX));
  /* 11ac6c9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6ca2 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6ca3 call dword ptr [0x11afaddc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afaddc))), 0x11ac6ca9u);
  /* 11ac6ca9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6cac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac6cae je 0x11ac6ccc */
  if (C.zf) goto L_11ac6ccc;
  /* 11ac6cb0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6cb4 jne 0x11ac6cc1 */
  if (!C.zf) goto L_11ac6cc1;
  /* 11ac6cb6 push 0x11af6a8c */
  push32((uint32_t)(0x11af6a8cu));
  /* 11ac6cbb call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11ac6cc1u);
L_11ac6cc1:;
  /* 11ac6cc1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11ac6cc7 jmp 0x11ac6dcb */
  goto L_11ac6dcb;
L_11ac6ccc:;
  /* 11ac6ccc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6ccf mov edx, dword ptr [ecx*4 + 0x11af6a90] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af6a90)));
  /* 11ac6cd6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac6cd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac6cdb je 0x11ac6d1b */
  if (C.zf) goto L_11ac6d1b;
  /* 11ac6cdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6ce0 cmp dword ptr [eax*4 + 0x11af6a9c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11af6a9c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6ce8 je 0x11ac6d1b */
  if (C.zf) goto L_11ac6d1b;
  /* 11ac6cea push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac6cec lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 11ac6cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6cf3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11ac6cf9 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6cfa call 0x11acc490 */
  push32(0x11ac6cffu); f_11acc490();
  /* 11ac6cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6d02 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6d03 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 11ac6d09 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6d0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6d0d mov edx, dword ptr [ecx*4 + 0x11af6a9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af6a9c)));
  /* 11ac6d14 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6d15 call dword ptr [0x11afb390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb390))), 0x11ac6d1bu);
L_11ac6d1b:;
  /* 11ac6d1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6d1e mov ecx, dword ptr [eax*4 + 0x11af6a90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11af6a90)));
  /* 11ac6d25 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac6d28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac6d2a je 0x11ac6d39 */
  if (C.zf) goto L_11ac6d39;
  /* 11ac6d2c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11ac6d32 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6d33 call dword ptr [0x11afb398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb398))), 0x11ac6d39u);
L_11ac6d39:;
  /* 11ac6d39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6d3c mov ecx, dword ptr [eax*4 + 0x11af6a90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11af6a90)));
  /* 11ac6d43 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac6d46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac6d48 je 0x11ac6db8 */
  if (C.zf) goto L_11ac6db8;
  /* 11ac6d4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6d4e je 0x11ac6d6d */
  if (C.zf) goto L_11ac6d6d;
  /* 11ac6d50 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ac6d52 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11ac6d58 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6d59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac6d5c push eax */
  push32((uint32_t)(EAX));
  /* 11ac6d5d call 0x11acc1a0 */
  push32(0x11ac6d62u); f_11acc1a0();
  /* 11ac6d62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6d65 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 11ac6d6b jmp 0x11ac6d77 */
  goto L_11ac6d77;
L_11ac6d6d:;
  /* 11ac6d6d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11ac6d77:;
  /* 11ac6d77 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 11ac6d7d push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6d7e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac6d81 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6d82 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11ac6d88 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6d89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac6d8c push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6d8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac6d90 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6d91 call 0x11ac6dd0 */
  push32(0x11ac6d96u); f_11ac6dd0();
  /* 11ac6d96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6d99 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 11ac6d9f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6da3 jne 0x11ac6db0 */
  if (!C.zf) goto L_11ac6db0;
  /* 11ac6da5 push 0x11af6a8c */
  push32((uint32_t)(0x11af6a8cu));
  /* 11ac6daa call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11ac6db0u);
L_11ac6db0:;
  /* 11ac6db0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11ac6db6 jmp 0x11ac6dcb */
  goto L_11ac6dcb;
L_11ac6db8:;
  /* 11ac6db8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6dbc jne 0x11ac6dc9 */
  if (!C.zf) goto L_11ac6dc9;
  /* 11ac6dbe push 0x11af6a8c */
  push32((uint32_t)(0x11af6a8cu));
  /* 11ac6dc3 call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11ac6dc9u);
L_11ac6dc9:;
  /* 11ac6dc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ac6dcb:;
  /* 11ac6dcb pop edi */
  EDI = (pop32());
  /* 11ac6dcc mov esp, ebp */
  ESP = (EBP);
  /* 11ac6dce pop ebp */
  EBP = (pop32());
  /* 11ac6dcf ret  */
  ESPCHK(0x11ac6a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd0 @ 0x11ac6dd0 (780 bytes, 197 insns) */
void f_11ac6dd0(void) {
  FTRACE(0x11ac6dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac6dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac6dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac6dd3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11ac6dd8 call 0x11acc800 */
  push32(0x11ac6dddu); f_11acc800();
L_11ac6ddd:;
  /* 11ac6ddd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6de1 jne 0x11ac6e08 */
  if (!C.zf) goto L_11ac6e08;
  /* 11ac6de3 push 0x11af3524 */
  push32((uint32_t)(0x11af3524u));
  /* 11ac6de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac6dea push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 11ac6def push 0x11af3518 */
  push32((uint32_t)(0x11af3518u));
  /* 11ac6df4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac6df6 call 0x11ac6a40 */
  push32(0x11ac6dfbu); f_11ac6a40();
  /* 11ac6dfb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6dfe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6e01 jne 0x11ac6e08 */
  if (!C.zf) goto L_11ac6e08;
  /* 11ac6e03 call 0x11ac6930 */
  push32(0x11ac6e08u); f_11ac6930();
L_11ac6e08:;
  /* 11ac6e08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac6e0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac6e0c jne 0x11ac6ddd */
  if (!C.zf) goto L_11ac6ddd;
  /* 11ac6e0e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11ac6e13 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 11ac6e19 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac6e1c call dword ptr [0x11afb3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3a8))), 0x11ac6e22u);
  /* 11ac6e22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac6e24 jne 0x11ac6e3a */
  if (!C.zf) goto L_11ac6e3a;
  /* 11ac6e26 push 0x11af3500 */
  push32((uint32_t)(0x11af3500u));
  /* 11ac6e2b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 11ac6e31 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6e32 call 0x11acc610 */
  push32(0x11ac6e37u); f_11acc610();
  /* 11ac6e37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac6e3a:;
  /* 11ac6e3a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11ac6e40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac6e43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac6e46 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac6e47 call 0x11acc490 */
  push32(0x11ac6e4cu); f_11acc490();
  /* 11ac6e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6e4f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6e52 jbe 0x11ac6e7d */
  if ((C.cf||C.zf)) goto L_11ac6e7d;
  /* 11ac6e54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac6e57 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6e58 call 0x11acc490 */
  push32(0x11ac6e5du); f_11acc490();
  /* 11ac6e5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6e60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac6e63 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11ac6e67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac6e6a push 3 */
  push32((uint32_t)(0x3u));
  /* 11ac6e6c push 0x11af34fc */
  push32((uint32_t)(0x11af34fcu));
  /* 11ac6e71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac6e74 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6e75 call 0x11acce80 */
  push32(0x11ac6e7au); f_11acce80();
  /* 11ac6e7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac6e7d:;
  /* 11ac6e7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac6e80 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11ac6e86 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6e8d je 0x11ac6ed8 */
  if (C.zf) goto L_11ac6ed8;
  /* 11ac6e8f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11ac6e95 push edx */
  push32((uint32_t)(EDX));
  /* 11ac6e96 call 0x11acc490 */
  push32(0x11ac6e9bu); f_11acc490();
  /* 11ac6e9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6e9e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6ea1 jbe 0x11ac6ed8 */
  if ((C.cf||C.zf)) goto L_11ac6ed8;
  /* 11ac6ea3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11ac6ea9 push eax */
  push32((uint32_t)(EAX));
  /* 11ac6eaa call 0x11acc490 */
  push32(0x11ac6eafu); f_11acc490();
  /* 11ac6eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac6eb2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11ac6eb8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11ac6ebc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11ac6ec2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ac6ec4 push 0x11af34fc */
  push32((uint32_t)(0x11af34fcu));
  /* 11ac6ec9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11ac6ecf push eax */
  push32((uint32_t)(EAX));
  /* 11ac6ed0 call 0x11acce80 */
  push32(0x11ac6ed5u); f_11acce80();
  /* 11ac6ed5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac6ed8:;
  /* 11ac6ed8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6edc jne 0x11ac6eea */
  if (!C.zf) goto L_11ac6eea;
  /* 11ac6ede mov dword ptr [ebp - 0x1114], 0x11af3488 */
  w32((uint32_t)(EBP + -0x1114), (0x11af3488u));
  /* 11ac6ee8 jmp 0x11ac6ef4 */
  goto L_11ac6ef4;
L_11ac6eea:;
  /* 11ac6eea mov dword ptr [ebp - 0x1114], 0x11af31fc */
  w32((uint32_t)(EBP + -0x1114), (0x11af31fcu));
L_11ac6ef4:;
  /* 11ac6ef4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac6ef7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ac6efa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac6efc je 0x11ac6f09 */
  if (C.zf) goto L_11ac6f09;
  /* 11ac6efe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac6f01 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11ac6f07 jmp 0x11ac6f13 */
  goto L_11ac6f13;
L_11ac6f09:;
  /* 11ac6f09 mov dword ptr [ebp - 0x1118], 0x11af31fc */
  w32((uint32_t)(EBP + -0x1118), (0x11af31fcu));
L_11ac6f13:;
  /* 11ac6f13 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac6f16 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ac6f19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac6f1b je 0x11ac6f2f */
  if (C.zf) goto L_11ac6f2f;
  /* 11ac6f1d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6f21 jne 0x11ac6f2f */
  if (!C.zf) goto L_11ac6f2f;
  /* 11ac6f23 mov dword ptr [ebp - 0x111c], 0x11af3478 */
  w32((uint32_t)(EBP + -0x111c), (0x11af3478u));
  /* 11ac6f2d jmp 0x11ac6f39 */
  goto L_11ac6f39;
L_11ac6f2f:;
  /* 11ac6f2f mov dword ptr [ebp - 0x111c], 0x11af31fc */
  w32((uint32_t)(EBP + -0x111c), (0x11af31fcu));
L_11ac6f39:;
  /* 11ac6f39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac6f3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac6f3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac6f41 je 0x11ac6f4f */
  if (C.zf) goto L_11ac6f4f;
  /* 11ac6f43 mov dword ptr [ebp - 0x1120], 0x11af3474 */
  w32((uint32_t)(EBP + -0x1120), (0x11af3474u));
  /* 11ac6f4d jmp 0x11ac6f59 */
  goto L_11ac6f59;
L_11ac6f4f:;
  /* 11ac6f4f mov dword ptr [ebp - 0x1120], 0x11af31fc */
  w32((uint32_t)(EBP + -0x1120), (0x11af31fcu));
L_11ac6f59:;
  /* 11ac6f59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6f5d je 0x11ac6f6a */
  if (C.zf) goto L_11ac6f6a;
  /* 11ac6f5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac6f62 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11ac6f68 jmp 0x11ac6f74 */
  goto L_11ac6f74;
L_11ac6f6a:;
  /* 11ac6f6a mov dword ptr [ebp - 0x1124], 0x11af31fc */
  w32((uint32_t)(EBP + -0x1124), (0x11af31fcu));
L_11ac6f74:;
  /* 11ac6f74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6f78 je 0x11ac6f86 */
  if (C.zf) goto L_11ac6f86;
  /* 11ac6f7a mov dword ptr [ebp - 0x1128], 0x11af346c */
  w32((uint32_t)(EBP + -0x1128), (0x11af346cu));
  /* 11ac6f84 jmp 0x11ac6f90 */
  goto L_11ac6f90;
L_11ac6f86:;
  /* 11ac6f86 mov dword ptr [ebp - 0x1128], 0x11af31fc */
  w32((uint32_t)(EBP + -0x1128), (0x11af31fcu));
L_11ac6f90:;
  /* 11ac6f90 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6f94 je 0x11ac6fa1 */
  if (C.zf) goto L_11ac6fa1;
  /* 11ac6f96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac6f99 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11ac6f9f jmp 0x11ac6fab */
  goto L_11ac6fab;
L_11ac6fa1:;
  /* 11ac6fa1 mov dword ptr [ebp - 0x112c], 0x11af31fc */
  w32((uint32_t)(EBP + -0x112c), (0x11af31fcu));
L_11ac6fab:;
  /* 11ac6fab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6faf je 0x11ac6fbd */
  if (C.zf) goto L_11ac6fbd;
  /* 11ac6fb1 mov dword ptr [ebp - 0x1130], 0x11af3464 */
  w32((uint32_t)(EBP + -0x1130), (0x11af3464u));
  /* 11ac6fbb jmp 0x11ac6fc7 */
  goto L_11ac6fc7;
L_11ac6fbd:;
  /* 11ac6fbd mov dword ptr [ebp - 0x1130], 0x11af31fc */
  w32((uint32_t)(EBP + -0x1130), (0x11af31fcu));
L_11ac6fc7:;
  /* 11ac6fc7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6fce je 0x11ac6fde */
  if (C.zf) goto L_11ac6fde;
  /* 11ac6fd0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11ac6fd6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11ac6fdc jmp 0x11ac6fe8 */
  goto L_11ac6fe8;
L_11ac6fde:;
  /* 11ac6fde mov dword ptr [ebp - 0x1134], 0x11af31fc */
  w32((uint32_t)(EBP + -0x1134), (0x11af31fcu));
L_11ac6fe8:;
  /* 11ac6fe8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac6fef je 0x11ac6ffd */
  if (C.zf) goto L_11ac6ffd;
  /* 11ac6ff1 mov dword ptr [ebp - 0x1138], 0x11af3458 */
  w32((uint32_t)(EBP + -0x1138), (0x11af3458u));
  /* 11ac6ffb jmp 0x11ac7007 */
  goto L_11ac7007;
L_11ac6ffd:;
  /* 11ac6ffd mov dword ptr [ebp - 0x1138], 0x11af31fc */
  w32((uint32_t)(EBP + -0x1138), (0x11af31fcu));
L_11ac7007:;
  /* 11ac7007 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11ac700d push edx */
  push32((uint32_t)(EDX));
  /* 11ac700e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11ac7014 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7015 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11ac701b push ecx */
  push32((uint32_t)(ECX));
  /* 11ac701c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11ac7022 push edx */
  push32((uint32_t)(EDX));
  /* 11ac7023 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11ac7029 push eax */
  push32((uint32_t)(EAX));
  /* 11ac702a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11ac7030 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7031 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11ac7037 push edx */
  push32((uint32_t)(EDX));
  /* 11ac7038 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11ac703e push eax */
  push32((uint32_t)(EAX));
  /* 11ac703f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11ac7045 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7046 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11ac704c push edx */
  push32((uint32_t)(EDX));
  /* 11ac704d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7050 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7051 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac7054 mov edx, dword ptr [ecx*4 + 0x11af6aa8] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af6aa8)));
  /* 11ac705b push edx */
  push32((uint32_t)(EDX));
  /* 11ac705c push 0x11af3404 */
  push32((uint32_t)(0x11af3404u));
  /* 11ac7061 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ac7066 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11ac706c push eax */
  push32((uint32_t)(EAX));
  /* 11ac706d call 0x11acc510 */
  push32(0x11ac7072u); f_11acc510();
  /* 11ac7072 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7077 jge 0x11ac708d */
  if ((C.sf==C.of)) goto L_11ac708d;
  /* 11ac7079 push 0x11af3368 */
  push32((uint32_t)(0x11af3368u));
  /* 11ac707e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11ac7084 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7085 call 0x11acc610 */
  push32(0x11ac708au); f_11acc610();
  /* 11ac708a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac708d:;
  /* 11ac708d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11ac7092 push 0x11af33e0 */
  push32((uint32_t)(0x11af33e0u));
  /* 11ac7097 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11ac709d push edx */
  push32((uint32_t)(EDX));
  /* 11ac709e call 0x11accdc0 */
  push32(0x11ac70a3u); f_11accdc0();
  /* 11ac70a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac70a6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11ac70ac cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac70b3 jne 0x11ac70c6 */
  if (!C.zf) goto L_11ac70c6;
  /* 11ac70b5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11ac70b7 call 0x11accb00 */
  push32(0x11ac70bcu); f_11accb00();
  /* 11ac70bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac70bf push 3 */
  push32((uint32_t)(0x3u));
  /* 11ac70c1 call 0x11ac90d0 */
  push32(0x11ac70c6u); f_11ac90d0();
L_11ac70c6:;
  /* 11ac70c6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac70cd jne 0x11ac70d6 */
  if (!C.zf) goto L_11ac70d6;
  /* 11ac70cf mov eax, 1 */
  EAX = (0x1u);
  /* 11ac70d4 jmp 0x11ac70d8 */
  goto L_11ac70d8;
L_11ac70d6:;
  /* 11ac70d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ac70d8:;
  /* 11ac70d8 mov esp, ebp */
  ESP = (EBP);
  /* 11ac70da pop ebp */
  EBP = (pop32());
  /* 11ac70db ret  */
  ESPCHK(0x11ac6dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e0 @ 0x11ac70e0 (130 bytes, 42 insns) */
void f_11ac70e0(void) {
  FTRACE(0x11ac70e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac70e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac70e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac70e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac70e4 call 0x11accf80 */
  push32(0x11ac70e9u); f_11accf80();
  /* 11ac70e9 call dword ptr [0x11afb3b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3b4))), 0x11ac70efu);
  /* 11ac70ef mov dword ptr [0x11af6ab4], eax */
  w32((uint32_t)(0x11af6ab4), (EAX));
  /* 11ac70f4 cmp dword ptr [0x11af6ab4], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11af6ab4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac70fb jne 0x11ac7101 */
  if (!C.zf) goto L_11ac7101;
  /* 11ac70fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac70ff jmp 0x11ac715e */
  goto L_11ac715e;
L_11ac7101:;
  /* 11ac7101 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11ac7103 push 0x11af353c */
  push32((uint32_t)(0x11af353cu));
  /* 11ac7108 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac710a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11ac710c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac710e call 0x11ac9a70 */
  push32(0x11ac7113u); f_11ac9a70();
  /* 11ac7113 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7116 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac7119 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac711d je 0x11ac7134 */
  if (C.zf) goto L_11ac7134;
  /* 11ac711f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7122 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7123 mov ecx, dword ptr [0x11af6ab4] */
  ECX = (r32((uint32_t)(0x11af6ab4)));
  /* 11ac7129 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac712a call dword ptr [0x11afb3b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3b0))), 0x11ac7130u);
  /* 11ac7130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7132 jne 0x11ac7138 */
  if (!C.zf) goto L_11ac7138;
L_11ac7134:;
  /* 11ac7134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7136 jmp 0x11ac715e */
  goto L_11ac715e;
L_11ac7138:;
  /* 11ac7138 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac713b push edx */
  push32((uint32_t)(EDX));
  /* 11ac713c call 0x11ac71a0 */
  push32(0x11ac7141u); f_11ac71a0();
  /* 11ac7141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7144 call dword ptr [0x11afb3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3ac))), 0x11ac714au);
  /* 11ac714a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac714d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ac714f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7152 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11ac7159 mov eax, 1 */
  EAX = (0x1u);
L_11ac715e:;
  /* 11ac715e mov esp, ebp */
  ESP = (EBP);
  /* 11ac7160 pop ebp */
  EBP = (pop32());
  /* 11ac7161 ret  */
  ESPCHK(0x11ac70e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007170 @ 0x11ac7170 (41 bytes, 11 insns) */
void f_11ac7170(void) {
  FTRACE(0x11ac7170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac7170 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac7171 mov ebp, esp */
  EBP = (ESP);
  /* 11ac7173 call 0x11accfc0 */
  push32(0x11ac7178u); f_11accfc0();
  /* 11ac7178 cmp dword ptr [0x11af6ab4], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11af6ab4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac717f je 0x11ac7197 */
  if (C.zf) goto L_11ac7197;
  /* 11ac7181 mov eax, dword ptr [0x11af6ab4] */
  EAX = (r32((uint32_t)(0x11af6ab4)));
  /* 11ac7186 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7187 call dword ptr [0x11afb2cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2cc))), 0x11ac718du);
  /* 11ac718d mov dword ptr [0x11af6ab4], 0xffffffff */
  w32((uint32_t)(0x11af6ab4), (0xffffffffu));
L_11ac7197:;
  /* 11ac7197 pop ebp */
  EBP = (pop32());
  /* 11ac7198 ret  */
  ESPCHK(0x11ac7170u, _esp0);
  ESP += 4; return;
}

/* FUN_100071a0 @ 0x11ac71a0 (25 bytes, 8 insns) */
void f_11ac71a0(void) {
  FTRACE(0x11ac71a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac71a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac71a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac71a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac71a6 mov dword ptr [eax + 0x50], 0x11af6cb0 */
  w32((uint32_t)(EAX + 0x50), (0x11af6cb0u));
  /* 11ac71ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac71b0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11ac71b7 pop ebp */
  EBP = (pop32());
  /* 11ac71b8 ret  */
  ESPCHK(0x11ac71a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071c0 @ 0x11ac71c0 (152 bytes, 48 insns) */
void f_11ac71c0(void) {
  FTRACE(0x11ac71c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac71c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac71c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac71c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac71c6 call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11ac71ccu);
  /* 11ac71cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ac71cf mov eax, dword ptr [0x11af6ab4] */
  EAX = (r32((uint32_t)(0x11af6ab4)));
  /* 11ac71d4 push eax */
  push32((uint32_t)(EAX));
  /* 11ac71d5 call dword ptr [0x11afb3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c0))), 0x11ac71dbu);
  /* 11ac71db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac71de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac71e2 jne 0x11ac7247 */
  if (!C.zf) goto L_11ac7247;
  /* 11ac71e4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11ac71e9 push 0x11af353c */
  push32((uint32_t)(0x11af353cu));
  /* 11ac71ee push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac71f0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11ac71f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac71f4 call 0x11ac9a70 */
  push32(0x11ac71f9u); f_11ac9a70();
  /* 11ac71f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac71fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac71ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7203 je 0x11ac723d */
  if (C.zf) goto L_11ac723d;
  /* 11ac7205 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7208 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7209 mov edx, dword ptr [0x11af6ab4] */
  EDX = (r32((uint32_t)(0x11af6ab4)));
  /* 11ac720f push edx */
  push32((uint32_t)(EDX));
  /* 11ac7210 call dword ptr [0x11afb3b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3b0))), 0x11ac7216u);
  /* 11ac7216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7218 je 0x11ac723d */
  if (C.zf) goto L_11ac723d;
  /* 11ac721a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac721d push eax */
  push32((uint32_t)(EAX));
  /* 11ac721e call 0x11ac71a0 */
  push32(0x11ac7223u); f_11ac71a0();
  /* 11ac7223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7226 call dword ptr [0x11afb3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3ac))), 0x11ac722cu);
  /* 11ac722c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac722f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ac7231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7234 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11ac723b jmp 0x11ac7247 */
  goto L_11ac7247;
L_11ac723d:;
  /* 11ac723d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ac723f call 0x11ac68f0 */
  push32(0x11ac7244u); f_11ac68f0();
  /* 11ac7244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac7247:;
  /* 11ac7247 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac724a push eax */
  push32((uint32_t)(EAX));
  /* 11ac724b call dword ptr [0x11afb2d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb2d0))), 0x11ac7251u);
  /* 11ac7251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7254 mov esp, ebp */
  ESP = (EBP);
  /* 11ac7256 pop ebp */
  EBP = (pop32());
  /* 11ac7257 ret  */
  ESPCHK(0x11ac71c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007260 @ 0x11ac7260 (263 bytes, 86 insns) */
void f_11ac7260(void) {
  FTRACE(0x11ac7260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac7260 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac7261 mov ebp, esp */
  EBP = (ESP);
  /* 11ac7263 cmp dword ptr [0x11af6ab4], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11af6ab4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac726a je 0x11ac7365 */
  if (C.zf) goto L_11ac7365;
  /* 11ac7270 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7274 jne 0x11ac7285 */
  if (!C.zf) goto L_11ac7285;
  /* 11ac7276 mov eax, dword ptr [0x11af6ab4] */
  EAX = (r32((uint32_t)(0x11af6ab4)));
  /* 11ac727b push eax */
  push32((uint32_t)(EAX));
  /* 11ac727c call dword ptr [0x11afb3c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c0))), 0x11ac7282u);
  /* 11ac7282 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ac7285:;
  /* 11ac7285 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7289 je 0x11ac7356 */
  if (C.zf) goto L_11ac7356;
  /* 11ac728f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac7292 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7296 je 0x11ac72a9 */
  if (C.zf) goto L_11ac72a9;
  /* 11ac7298 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac729a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac729d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11ac72a0 push eax */
  push32((uint32_t)(EAX));
  /* 11ac72a1 call 0x11aca0f0 */
  push32(0x11ac72a6u); f_11aca0f0();
  /* 11ac72a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac72a9:;
  /* 11ac72a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac72ac cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac72b0 je 0x11ac72c3 */
  if (C.zf) goto L_11ac72c3;
  /* 11ac72b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac72b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac72b7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11ac72ba push eax */
  push32((uint32_t)(EAX));
  /* 11ac72bb call 0x11aca0f0 */
  push32(0x11ac72c0u); f_11aca0f0();
  /* 11ac72c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac72c3:;
  /* 11ac72c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac72c6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac72ca je 0x11ac72dd */
  if (C.zf) goto L_11ac72dd;
  /* 11ac72cc push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac72ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac72d1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11ac72d4 push eax */
  push32((uint32_t)(EAX));
  /* 11ac72d5 call 0x11aca0f0 */
  push32(0x11ac72dau); f_11aca0f0();
  /* 11ac72da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac72dd:;
  /* 11ac72dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac72e0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac72e4 je 0x11ac72f7 */
  if (C.zf) goto L_11ac72f7;
  /* 11ac72e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac72e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac72eb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11ac72ee push eax */
  push32((uint32_t)(EAX));
  /* 11ac72ef call 0x11aca0f0 */
  push32(0x11ac72f4u); f_11aca0f0();
  /* 11ac72f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac72f7:;
  /* 11ac72f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac72fa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac72fe je 0x11ac7311 */
  if (C.zf) goto L_11ac7311;
  /* 11ac7300 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac7302 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac7305 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11ac7308 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7309 call 0x11aca0f0 */
  push32(0x11ac730eu); f_11aca0f0();
  /* 11ac730e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac7311:;
  /* 11ac7311 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac7314 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7318 je 0x11ac732b */
  if (C.zf) goto L_11ac732b;
  /* 11ac731a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac731c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac731f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11ac7322 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7323 call 0x11aca0f0 */
  push32(0x11ac7328u); f_11aca0f0();
  /* 11ac7328 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac732b:;
  /* 11ac732b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac732e cmp dword ptr [ecx + 0x50], 0x11af6cb0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11af6cb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7335 je 0x11ac7348 */
  if (C.zf) goto L_11ac7348;
  /* 11ac7337 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac7339 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac733c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11ac733f push eax */
  push32((uint32_t)(EAX));
  /* 11ac7340 call 0x11aca0f0 */
  push32(0x11ac7345u); f_11aca0f0();
  /* 11ac7345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac7348:;
  /* 11ac7348 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac734a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac734d push ecx */
  push32((uint32_t)(ECX));
  /* 11ac734e call 0x11aca0f0 */
  push32(0x11ac7353u); f_11aca0f0();
  /* 11ac7353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac7356:;
  /* 11ac7356 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac7358 mov edx, dword ptr [0x11af6ab4] */
  EDX = (r32((uint32_t)(0x11af6ab4)));
  /* 11ac735e push edx */
  push32((uint32_t)(EDX));
  /* 11ac735f call dword ptr [0x11afb3b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3b0))), 0x11ac7365u);
L_11ac7365:;
  /* 11ac7365 pop ebp */
  EBP = (pop32());
  /* 11ac7366 ret  */
  ESPCHK(0x11ac7260u, _esp0);
  ESP += 4; return;
}

/* FUN_10007370 @ 0x11ac7370 (11 bytes, 5 insns) */
void f_11ac7370(void) {
  FTRACE(0x11ac7370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac7370 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac7371 mov ebp, esp */
  EBP = (ESP);
  /* 11ac7373 call dword ptr [0x11afb3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3ac))), 0x11ac7379u);
  /* 11ac7379 pop ebp */
  EBP = (pop32());
  /* 11ac737a ret  */
  ESPCHK(0x11ac7370u, _esp0);
  ESP += 4; return;
}

/* FUN_10007380 @ 0x11ac7380 (11 bytes, 5 insns) */
void f_11ac7380(void) {
  FTRACE(0x11ac7380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac7380 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac7381 mov ebp, esp */
  EBP = (ESP);
  /* 11ac7383 call dword ptr [0x11afb3c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c8))), 0x11ac7389u);
  /* 11ac7389 pop ebp */
  EBP = (pop32());
  /* 11ac738a ret  */
  ESPCHK(0x11ac7380u, _esp0);
  ESP += 4; return;
}

/* FUN_10007390 @ 0x11ac7390 (628 bytes, 214 insns) */
void f_11ac7390(void) {
  FTRACE(0x11ac7390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac7390 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac7391 mov ebp, esp */
  EBP = (ESP);
  /* 11ac7393 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7396 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac7397 push esi */
  push32((uint32_t)(ESI));
  /* 11ac7398 push edi */
  push32((uint32_t)(EDI));
L_11ac7399:;
  /* 11ac7399 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac739d jne 0x11ac73bd */
  if (!C.zf) goto L_11ac73bd;
  /* 11ac739f push 0x11af3594 */
  push32((uint32_t)(0x11af3594u));
  /* 11ac73a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac73a6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11ac73a8 push 0x11af3588 */
  push32((uint32_t)(0x11af3588u));
  /* 11ac73ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac73af call 0x11ac6a40 */
  push32(0x11ac73b4u); f_11ac6a40();
  /* 11ac73b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac73b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac73ba jne 0x11ac73bd */
  if (!C.zf) goto L_11ac73bd;
  /* 11ac73bc int3  */
  x86_unimpl("int3 @ 0x11ac73bc");
L_11ac73bd:;
  /* 11ac73bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac73bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac73c1 jne 0x11ac7399 */
  if (!C.zf) goto L_11ac7399;
  /* 11ac73c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac73c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ac73c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac73cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ac73cf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ac73d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac73d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ac73d8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac73de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac73e0 je 0x11ac73ef */
  if (C.zf) goto L_11ac73ef;
  /* 11ac73e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac73e5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ac73e8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac73eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac73ed je 0x11ac7405 */
  if (C.zf) goto L_11ac7405;
L_11ac73ef:;
  /* 11ac73ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac73f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ac73f5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ac73f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac73fa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11ac73fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7400 jmp 0x11ac75fd */
  goto L_11ac75fd;
L_11ac7405:;
  /* 11ac7405 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7408 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ac740b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac740e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7410 je 0x11ac745c */
  if (C.zf) goto L_11ac745c;
  /* 11ac7412 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7415 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ac741c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac741f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ac7422 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7427 je 0x11ac7445 */
  if (C.zf) goto L_11ac7445;
  /* 11ac7429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac742c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac742f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ac7432 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ac7434 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7437 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ac743a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11ac743d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7440 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ac7443 jmp 0x11ac745c */
  goto L_11ac745c;
L_11ac7445:;
  /* 11ac7445 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7448 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ac744b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac744e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7451 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ac7454 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7457 jmp 0x11ac75fd */
  goto L_11ac75fd;
L_11ac745c:;
  /* 11ac745c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac745f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ac7462 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac7465 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7468 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ac746b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac746e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ac7471 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11ac7474 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7477 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ac747a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac747d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ac7484 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ac748b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac748e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ac7491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7494 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ac7497 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac749d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac749f jne 0x11ac74cf */
  if (!C.zf) goto L_11ac74cf;
  /* 11ac74a1 cmp dword ptr [ebp - 8], 0x11af6d58 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11af6d58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac74a8 je 0x11ac74b3 */
  if (C.zf) goto L_11ac74b3;
  /* 11ac74aa cmp dword ptr [ebp - 8], 0x11af6d78 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11af6d78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac74b1 jne 0x11ac74c3 */
  if (!C.zf) goto L_11ac74c3;
L_11ac74b3:;
  /* 11ac74b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac74b6 push edx */
  push32((uint32_t)(EDX));
  /* 11ac74b7 call 0x11acd890 */
  push32(0x11ac74bcu); f_11acd890();
  /* 11ac74bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac74bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac74c1 jne 0x11ac74cf */
  if (!C.zf) goto L_11ac74cf;
L_11ac74c3:;
  /* 11ac74c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac74c6 push eax */
  push32((uint32_t)(EAX));
  /* 11ac74c7 call 0x11acd7c0 */
  push32(0x11ac74ccu); f_11acd7c0();
  /* 11ac74cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac74cf:;
  /* 11ac74cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac74d2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ac74d5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac74db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac74dd je 0x11ac75bb */
  if (C.zf) goto L_11ac75bb;
L_11ac74e3:;
  /* 11ac74e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac74e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac74e9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ac74eb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac74ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac74f0 jge 0x11ac7513 */
  if ((C.sf==C.of)) goto L_11ac7513;
  /* 11ac74f2 push 0x11af3548 */
  push32((uint32_t)(0x11af3548u));
  /* 11ac74f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac74f9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11ac74fe push 0x11af3588 */
  push32((uint32_t)(0x11af3588u));
  /* 11ac7503 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac7505 call 0x11ac6a40 */
  push32(0x11ac750au); f_11ac6a40();
  /* 11ac750a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac750d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7510 jne 0x11ac7513 */
  if (!C.zf) goto L_11ac7513;
  /* 11ac7512 int3  */
  x86_unimpl("int3 @ 0x11ac7512");
L_11ac7513:;
  /* 11ac7513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7517 jne 0x11ac74e3 */
  if (!C.zf) goto L_11ac74e3;
  /* 11ac7519 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac751c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac751f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ac7521 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7524 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac7527 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac752a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ac752d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7530 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7533 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ac7535 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7538 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ac753b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac753e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7541 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ac7544 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7548 jle 0x11ac7566 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac7566;
  /* 11ac754a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac754d push ecx */
  push32((uint32_t)(ECX));
  /* 11ac754e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7551 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ac7554 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7555 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac7558 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7559 call 0x11acd4b0 */
  push32(0x11ac755eu); f_11acd4b0();
  /* 11ac755e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7561 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ac7564 jmp 0x11ac75ae */
  goto L_11ac75ae;
L_11ac7566:;
  /* 11ac7566 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac756a je 0x11ac7589 */
  if (C.zf) goto L_11ac7589;
  /* 11ac756c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac756f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ac7572 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac7575 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7578 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ac757b mov ecx, dword ptr [edx*4 + 0x11afac80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11afac80)));
  /* 11ac7582 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7584 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ac7587 jmp 0x11ac7590 */
  goto L_11ac7590;
L_11ac7589:;
  /* 11ac7589 mov dword ptr [ebp - 0x14], 0x11af6b10 */
  w32((uint32_t)(EBP + -0x14), (0x11af6b10u));
L_11ac7590:;
  /* 11ac7590 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ac7593 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11ac7597 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac759a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac759c je 0x11ac75ae */
  if (C.zf) goto L_11ac75ae;
  /* 11ac759e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac75a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac75a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac75a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac75a6 call 0x11acd360 */
  push32(0x11ac75abu); f_11acd360();
  /* 11ac75ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac75ae:;
  /* 11ac75ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac75b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ac75b4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ac75b7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11ac75b9 jmp 0x11ac75d9 */
  goto L_11ac75d9;
L_11ac75bb:;
  /* 11ac75bb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ac75c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac75c5 push edx */
  push32((uint32_t)(EDX));
  /* 11ac75c6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ac75c9 push eax */
  push32((uint32_t)(EAX));
  /* 11ac75ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac75cd push ecx */
  push32((uint32_t)(ECX));
  /* 11ac75ce call 0x11acd4b0 */
  push32(0x11ac75d3u); f_11acd4b0();
  /* 11ac75d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac75d6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ac75d9:;
  /* 11ac75d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac75dc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac75df je 0x11ac75f5 */
  if (C.zf) goto L_11ac75f5;
  /* 11ac75e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac75e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ac75e7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac75ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac75ed mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11ac75f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac75f3 jmp 0x11ac75fd */
  goto L_11ac75fd;
L_11ac75f5:;
  /* 11ac75f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac75f8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11ac75fd:;
  /* 11ac75fd pop edi */
  EDI = (pop32());
  /* 11ac75fe pop esi */
  ESI = (pop32());
  /* 11ac75ff pop ebx */
  EBX = (pop32());
  /* 11ac7600 mov esp, ebp */
  ESP = (EBP);
  /* 11ac7602 pop ebp */
  EBP = (pop32());
  /* 11ac7603 ret  */
  ESPCHK(0x11ac7390u, _esp0);
  ESP += 4; return;
}

/* FUN_10007610 @ 0x11ac7610 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11ac7610(void) {
  FTRACE(0x11ac7610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac7610 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac7611 mov ebp, esp */
  EBP = (ESP);
  /* 11ac7613 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7619 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac761a push esi */
  push32((uint32_t)(ESI));
  /* 11ac761b push edi */
  push32((uint32_t)(EDI));
  /* 11ac761c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ac7623 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11ac762d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11ac7634:;
  /* 11ac7634 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac7637 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ac7639 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11ac763c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7640 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac7643 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7646 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ac7649 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac764b je 0x11ac8227 */
  if (C.zf) goto L_11ac8227;
  /* 11ac7651 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7658 jl 0x11ac8227 */
  if ((C.sf!=C.of)) goto L_11ac8227;
  /* 11ac765e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7662 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7665 jl 0x11ac7686 */
  if ((C.sf!=C.of)) goto L_11ac7686;
  /* 11ac7667 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac766b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac766e jg 0x11ac7686 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ac7686;
  /* 11ac7670 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7674 movsx ecx, byte ptr [eax + 0x11af3580] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11af3580))));
  /* 11ac767b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac767e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11ac7684 jmp 0x11ac7690 */
  goto L_11ac7690;
L_11ac7686:;
  /* 11ac7686 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11ac7690:;
  /* 11ac7690 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11ac7696 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ac7699 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac769c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ac769f movsx edx, byte ptr [ecx + eax*8 + 0x11af35a0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11af35a0))));
  /* 11ac76a7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ac76aa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ac76ad mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ac76b0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11ac76b6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac76bd ja 0x11ac8222 */
  if ((!C.cf&&!C.zf)) goto L_11ac8222;
  /* 11ac76c3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11ac76c9 jmp dword ptr [ecx*4 + 0x11ac8234] */
  switch (ECX) {
    case 0: goto L_11ac76d0;
    case 1: goto L_11ac776a;
    case 2: goto L_11ac77ac;
    case 3: goto L_11ac781b;
    case 4: goto L_11ac7873;
    case 5: goto L_11ac7882;
    case 6: goto L_11ac78ce;
    case 7: goto L_11ac7961;
    case 8: goto L_11ac77f8;
    case 9: goto L_11ac7803;
    case 10: goto L_11ac77ee;
    case 11: goto L_11ac77e3;
    case 12: goto L_11ac780e;
    case 13: goto L_11ac7816;
    default: x86_unimpl("switch@0x11ac76c9 out of table"); return;
  }
L_11ac76d0:;
  /* 11ac76d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ac76d7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ac76da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ac76e0 mov eax, dword ptr [0x11af6fb8] */
  EAX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ac76e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac76e7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ac76eb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac76f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac76f3 je 0x11ac774d */
  if (C.zf) goto L_11ac774d;
  /* 11ac76f5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11ac76fb push edx */
  push32((uint32_t)(EDX));
  /* 11ac76fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac76ff push eax */
  push32((uint32_t)(EAX));
  /* 11ac7700 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7704 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7705 call 0x11ac8340 */
  push32(0x11ac770au); f_11ac8340();
  /* 11ac770a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac770d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac7710 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ac7712 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11ac7715 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac7718 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac771b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11ac771e:;
  /* 11ac771e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7722 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac7724 jne 0x11ac7747 */
  if (!C.zf) goto L_11ac7747;
  /* 11ac7726 push 0x11af3620 */
  push32((uint32_t)(0x11af3620u));
  /* 11ac772b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac772d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11ac7732 push 0x11af3614 */
  push32((uint32_t)(0x11af3614u));
  /* 11ac7737 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac7739 call 0x11ac6a40 */
  push32(0x11ac773eu); f_11ac6a40();
  /* 11ac773e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7741 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7744 jne 0x11ac7747 */
  if (!C.zf) goto L_11ac7747;
  /* 11ac7746 int3  */
  x86_unimpl("int3 @ 0x11ac7746");
L_11ac7747:;
  /* 11ac7747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac774b jne 0x11ac771e */
  if (!C.zf) goto L_11ac771e;
L_11ac774d:;
  /* 11ac774d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11ac7753 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7754 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac7757 push edx */
  push32((uint32_t)(EDX));
  /* 11ac7758 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac775c push eax */
  push32((uint32_t)(EAX));
  /* 11ac775d call 0x11ac8340 */
  push32(0x11ac7762u); f_11ac8340();
  /* 11ac7762 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7765 jmp 0x11ac8222 */
  goto L_11ac8222;
L_11ac776a:;
  /* 11ac776a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ac7771 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7774 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11ac777a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11ac7780 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11ac7786 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11ac778c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ac778f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ac7796 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11ac77a0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ac77a7 jmp 0x11ac8222 */
  goto L_11ac8222;
L_11ac77ac:;
  /* 11ac77ac movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac77b0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11ac77b6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11ac77bc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac77bf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11ac77c5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac77cc ja 0x11ac7816 */
  if ((!C.cf&&!C.zf)) goto L_11ac7816;
  /* 11ac77ce mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11ac77d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac77d6 mov al, byte ptr [ecx + 0x11ac826c] */
  AL = (r8((uint32_t)(ECX + 0x11ac826c)));
  /* 11ac77dc jmp dword ptr [eax*4 + 0x11ac8254] */
  switch (EAX) {
    case 0: goto L_11ac77f8;
    case 1: goto L_11ac7803;
    case 2: goto L_11ac77ee;
    case 3: goto L_11ac77e3;
    case 4: goto L_11ac780e;
    case 5: goto L_11ac7816;
    default: x86_unimpl("switch@0x11ac77dc out of table"); return;
  }
L_11ac77e3:;
  /* 11ac77e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac77e6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac77e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac77ec jmp 0x11ac7816 */
  goto L_11ac7816;
L_11ac77ee:;
  /* 11ac77ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac77f1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ac77f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac77f6 jmp 0x11ac7816 */
  goto L_11ac7816;
L_11ac77f8:;
  /* 11ac77f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac77fb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac77fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac7801 jmp 0x11ac7816 */
  goto L_11ac7816;
L_11ac7803:;
  /* 11ac7803 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7806 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11ac7809 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac780c jmp 0x11ac7816 */
  goto L_11ac7816;
L_11ac780e:;
  /* 11ac780e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7811 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11ac7813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ac7816:;
  /* 11ac7816 jmp 0x11ac8222 */
  goto L_11ac8222;
L_11ac781b:;
  /* 11ac781b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac781f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7822 jne 0x11ac7857 */
  if (!C.zf) goto L_11ac7857;
  /* 11ac7824 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ac7827 push edx */
  push32((uint32_t)(EDX));
  /* 11ac7828 call 0x11ac8450 */
  push32(0x11ac782du); f_11ac8450();
  /* 11ac782d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7830 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11ac7836 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac783d jge 0x11ac7855 */
  if ((C.sf==C.of)) goto L_11ac7855;
  /* 11ac783f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7842 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11ac7844 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac7847 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11ac784d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ac784f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11ac7855:;
  /* 11ac7855 jmp 0x11ac786e */
  goto L_11ac786e;
L_11ac7857:;
  /* 11ac7857 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11ac785d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ac7860 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7864 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11ac7868 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11ac786e:;
  /* 11ac786e jmp 0x11ac8222 */
  goto L_11ac8222;
L_11ac7873:;
  /* 11ac7873 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11ac787d jmp 0x11ac8222 */
  goto L_11ac8222;
L_11ac7882:;
  /* 11ac7882 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7886 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7889 jne 0x11ac78b2 */
  if (!C.zf) goto L_11ac78b2;
  /* 11ac788b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ac788e push eax */
  push32((uint32_t)(EAX));
  /* 11ac788f call 0x11ac8450 */
  push32(0x11ac7894u); f_11ac8450();
  /* 11ac7894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7897 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11ac789d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac78a4 jge 0x11ac78b0 */
  if ((C.sf==C.of)) goto L_11ac78b0;
  /* 11ac78a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11ac78b0:;
  /* 11ac78b0 jmp 0x11ac78c9 */
  goto L_11ac78c9;
L_11ac78b2:;
  /* 11ac78b2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ac78b8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ac78bb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac78bf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11ac78c3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11ac78c9:;
  /* 11ac78c9 jmp 0x11ac8222 */
  goto L_11ac8222;
L_11ac78ce:;
  /* 11ac78ce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac78d2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11ac78d8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11ac78de sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac78e1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11ac78e7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac78ee ja 0x11ac795c */
  if ((!C.cf&&!C.zf)) goto L_11ac795c;
  /* 11ac78f0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11ac78f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac78f8 mov al, byte ptr [ecx + 0x11ac8291] */
  AL = (r8((uint32_t)(ECX + 0x11ac8291)));
  /* 11ac78fe jmp dword ptr [eax*4 + 0x11ac827d] */
  switch (EAX) {
    case 0: goto L_11ac7910;
    case 1: goto L_11ac7949;
    case 2: goto L_11ac7905;
    case 3: goto L_11ac7953;
    case 4: goto L_11ac795c;
    default: x86_unimpl("switch@0x11ac78fe out of table"); return;
  }
L_11ac7905:;
  /* 11ac7905 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7908 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac790b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac790e jmp 0x11ac795c */
  goto L_11ac795c;
L_11ac7910:;
  /* 11ac7910 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac7913 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac7916 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7919 jne 0x11ac793b */
  if (!C.zf) goto L_11ac793b;
  /* 11ac791b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac791e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11ac7922 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7925 jne 0x11ac793b */
  if (!C.zf) goto L_11ac793b;
  /* 11ac7927 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac792a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac792d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ac7930 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7933 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ac7936 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac7939 jmp 0x11ac7947 */
  goto L_11ac7947;
L_11ac793b:;
  /* 11ac793b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11ac7942 jmp 0x11ac76d0 */
  goto L_11ac76d0;
L_11ac7947:;
  /* 11ac7947 jmp 0x11ac795c */
  goto L_11ac795c;
L_11ac7949:;
  /* 11ac7949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac794c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ac794e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac7951 jmp 0x11ac795c */
  goto L_11ac795c;
L_11ac7953:;
  /* 11ac7953 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7956 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ac7959 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ac795c:;
  /* 11ac795c jmp 0x11ac8222 */
  goto L_11ac8222;
L_11ac7961:;
  /* 11ac7961 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7965 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11ac796b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11ac7971 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7974 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11ac797a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7981 ja 0x11ac8047 */
  if ((!C.cf&&!C.zf)) goto L_11ac8047;
  /* 11ac7987 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11ac798d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac798f mov cl, byte ptr [edx + 0x11ac82fc] */
  CL = (r8((uint32_t)(EDX + 0x11ac82fc)));
  /* 11ac7995 jmp dword ptr [ecx*4 + 0x11ac82c0] */
  switch (ECX) {
    case 0: goto L_11ac799c;
    case 1: goto L_11ac7c30;
    case 2: goto L_11ac7ac0;
    case 3: goto L_11ac7d69;
    case 4: goto L_11ac7a2b;
    case 5: goto L_11ac79b1;
    case 6: goto L_11ac7d3b;
    case 7: goto L_11ac7c40;
    case 8: goto L_11ac7be5;
    case 9: goto L_11ac7db5;
    case 10: goto L_11ac7d5f;
    case 11: goto L_11ac7ad6;
    case 12: goto L_11ac7d53;
    case 13: goto L_11ac7d75;
    case 14: goto L_11ac8047;
    default: x86_unimpl("switch@0x11ac7995 out of table"); return;
  }
L_11ac799c:;
  /* 11ac799c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac799f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac79a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac79a6 jne 0x11ac79b1 */
  if (!C.zf) goto L_11ac79b1;
  /* 11ac79a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac79ab or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ac79ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ac79b1:;
  /* 11ac79b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac79b4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac79ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac79bc je 0x11ac79f7 */
  if (C.zf) goto L_11ac79f7;
  /* 11ac79be lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ac79c1 push eax */
  push32((uint32_t)(EAX));
  /* 11ac79c2 call 0x11ac8490 */
  push32(0x11ac79c7u); f_11ac8490();
  /* 11ac79c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac79ca mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11ac79ce mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11ac79d2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac79d3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11ac79d9 push edx */
  push32((uint32_t)(EDX));
  /* 11ac79da call 0x11acdb00 */
  push32(0x11ac79dfu); f_11acdb00();
  /* 11ac79df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac79e2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ac79e5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac79e9 jge 0x11ac79f5 */
  if ((C.sf==C.of)) goto L_11ac79f5;
  /* 11ac79eb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11ac79f5:;
  /* 11ac79f5 jmp 0x11ac7a1d */
  goto L_11ac7a1d;
L_11ac79f7:;
  /* 11ac79f7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ac79fa push eax */
  push32((uint32_t)(EAX));
  /* 11ac79fb call 0x11ac8450 */
  push32(0x11ac7a00u); f_11ac8450();
  /* 11ac7a00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7a03 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11ac7a0a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11ac7a10 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11ac7a16 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11ac7a1d:;
  /* 11ac7a1d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11ac7a23 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ac7a26 jmp 0x11ac8047 */
  goto L_11ac8047;
L_11ac7a2b:;
  /* 11ac7a2b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11ac7a2e push eax */
  push32((uint32_t)(EAX));
  /* 11ac7a2f call 0x11ac8450 */
  push32(0x11ac7a34u); f_11ac8450();
  /* 11ac7a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7a37 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11ac7a3d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7a44 je 0x11ac7a52 */
  if (C.zf) goto L_11ac7a52;
  /* 11ac7a46 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ac7a4c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7a50 jne 0x11ac7a6c */
  if (!C.zf) goto L_11ac7a6c;
L_11ac7a52:;
  /* 11ac7a52 mov edx, dword ptr [0x11af6ab8] */
  EDX = (r32((uint32_t)(0x11af6ab8)));
  /* 11ac7a58 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ac7a5b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7a5e push eax */
  push32((uint32_t)(EAX));
  /* 11ac7a5f call 0x11acc490 */
  push32(0x11ac7a64u); f_11acc490();
  /* 11ac7a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7a67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ac7a6a jmp 0x11ac7abb */
  goto L_11ac7abb;
L_11ac7a6c:;
  /* 11ac7a6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7a6f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac7a75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac7a77 je 0x11ac7a9c */
  if (C.zf) goto L_11ac7a9c;
  /* 11ac7a79 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ac7a7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac7a82 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ac7a85 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ac7a8b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11ac7a8e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ac7a90 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ac7a93 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ac7a9a jmp 0x11ac7abb */
  goto L_11ac7abb;
L_11ac7a9c:;
  /* 11ac7a9c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ac7aa3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ac7aa9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac7aac mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ac7aaf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11ac7ab5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11ac7ab8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ac7abb:;
  /* 11ac7abb jmp 0x11ac8047 */
  goto L_11ac8047;
L_11ac7ac0:;
  /* 11ac7ac0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7ac3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac7ac9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac7acb jne 0x11ac7ad6 */
  if (!C.zf) goto L_11ac7ad6;
  /* 11ac7acd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7ad0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ac7ad3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ac7ad6:;
  /* 11ac7ad6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7add jne 0x11ac7aeb */
  if (!C.zf) goto L_11ac7aeb;
  /* 11ac7adf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11ac7ae9 jmp 0x11ac7af7 */
  goto L_11ac7af7;
L_11ac7aeb:;
  /* 11ac7aeb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ac7af1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11ac7af7:;
  /* 11ac7af7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11ac7afd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11ac7b03 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ac7b06 push edx */
  push32((uint32_t)(EDX));
  /* 11ac7b07 call 0x11ac8450 */
  push32(0x11ac7b0cu); f_11ac8450();
  /* 11ac7b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7b0f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ac7b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7b15 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7b1c je 0x11ac7b86 */
  if (C.zf) goto L_11ac7b86;
  /* 11ac7b1e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7b22 jne 0x11ac7b2d */
  if (!C.zf) goto L_11ac7b2d;
  /* 11ac7b24 mov ecx, dword ptr [0x11af6abc] */
  ECX = (r32((uint32_t)(0x11af6abc)));
  /* 11ac7b2a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ac7b2d:;
  /* 11ac7b2d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ac7b34 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7b37 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11ac7b3d:;
  /* 11ac7b3d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ac7b43 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ac7b49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7b4c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11ac7b52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7b54 je 0x11ac7b76 */
  if (C.zf) goto L_11ac7b76;
  /* 11ac7b56 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11ac7b5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7b5e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ac7b61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7b63 je 0x11ac7b76 */
  if (C.zf) goto L_11ac7b76;
  /* 11ac7b65 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11ac7b6b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7b6e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11ac7b74 jmp 0x11ac7b3d */
  goto L_11ac7b3d;
L_11ac7b76:;
  /* 11ac7b76 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11ac7b7c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7b7f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ac7b81 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ac7b84 jmp 0x11ac7be0 */
  goto L_11ac7be0;
L_11ac7b86:;
  /* 11ac7b86 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7b8a jne 0x11ac7b94 */
  if (!C.zf) goto L_11ac7b94;
  /* 11ac7b8c mov eax, dword ptr [0x11af6ab8] */
  EAX = (r32((uint32_t)(0x11af6ab8)));
  /* 11ac7b91 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11ac7b94:;
  /* 11ac7b94 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7b97 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11ac7b9d:;
  /* 11ac7b9d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ac7ba3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11ac7ba9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7bac mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11ac7bb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac7bb4 je 0x11ac7bd4 */
  if (C.zf) goto L_11ac7bd4;
  /* 11ac7bb6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11ac7bbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ac7bbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac7bc1 je 0x11ac7bd4 */
  if (C.zf) goto L_11ac7bd4;
  /* 11ac7bc3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11ac7bc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7bcc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11ac7bd2 jmp 0x11ac7b9d */
  goto L_11ac7b9d;
L_11ac7bd4:;
  /* 11ac7bd4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11ac7bda sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7bdd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11ac7be0:;
  /* 11ac7be0 jmp 0x11ac8047 */
  goto L_11ac8047;
L_11ac7be5:;
  /* 11ac7be5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ac7be8 push edx */
  push32((uint32_t)(EDX));
  /* 11ac7be9 call 0x11ac8450 */
  push32(0x11ac7beeu); f_11ac8450();
  /* 11ac7bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7bf1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11ac7bf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7bfa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7bfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7bff je 0x11ac7c13 */
  if (C.zf) goto L_11ac7c13;
  /* 11ac7c01 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11ac7c07 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11ac7c0e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11ac7c11 jmp 0x11ac7c21 */
  goto L_11ac7c21;
L_11ac7c13:;
  /* 11ac7c13 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11ac7c19 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11ac7c1f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11ac7c21:;
  /* 11ac7c21 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11ac7c2b jmp 0x11ac8047 */
  goto L_11ac8047;
L_11ac7c30:;
  /* 11ac7c30 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11ac7c37 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11ac7c3a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ac7c3d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11ac7c40:;
  /* 11ac7c40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7c43 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11ac7c45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac7c48 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11ac7c4e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ac7c51 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7c58 jge 0x11ac7c66 */
  if ((C.sf==C.of)) goto L_11ac7c66;
  /* 11ac7c5a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11ac7c64 jmp 0x11ac7c82 */
  goto L_11ac7c82;
L_11ac7c66:;
  /* 11ac7c66 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7c6d jne 0x11ac7c82 */
  if (!C.zf) goto L_11ac7c82;
  /* 11ac7c6f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7c73 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7c76 jne 0x11ac7c82 */
  if (!C.zf) goto L_11ac7c82;
  /* 11ac7c78 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11ac7c82:;
  /* 11ac7c82 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac7c85 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7c88 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11ac7c8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac7c8e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7c91 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ac7c93 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ac7c96 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11ac7c9c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11ac7ca2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac7ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7ca6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ac7cac push edx */
  push32((uint32_t)(EDX));
  /* 11ac7cad movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7cb1 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7cb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7cb6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11ac7cbc push edx */
  push32((uint32_t)(EDX));
  /* 11ac7cbd call dword ptr [0x11af6ac0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af6ac0))), 0x11ac7cc3u);
  /* 11ac7cc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7cc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7cc9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7cd0 je 0x11ac7ce8 */
  if (C.zf) goto L_11ac7ce8;
  /* 11ac7cd2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7cd9 jne 0x11ac7ce8 */
  if (!C.zf) goto L_11ac7ce8;
  /* 11ac7cdb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7cde push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7cdf call dword ptr [0x11af6acc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af6acc))), 0x11ac7ce5u);
  /* 11ac7ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac7ce8:;
  /* 11ac7ce8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11ac7cec cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7cef jne 0x11ac7d0a */
  if (!C.zf) goto L_11ac7d0a;
  /* 11ac7cf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7cf4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7cfb jne 0x11ac7d0a */
  if (!C.zf) goto L_11ac7d0a;
  /* 11ac7cfd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7d00 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7d01 call dword ptr [0x11af6ac4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af6ac4))), 0x11ac7d07u);
  /* 11ac7d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac7d0a:;
  /* 11ac7d0a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7d0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ac7d10 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7d13 jne 0x11ac7d27 */
  if (!C.zf) goto L_11ac7d27;
  /* 11ac7d15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7d18 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ac7d1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac7d1e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7d21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7d24 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11ac7d27:;
  /* 11ac7d27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7d2a push eax */
  push32((uint32_t)(EAX));
  /* 11ac7d2b call 0x11acc490 */
  push32(0x11ac7d30u); f_11acc490();
  /* 11ac7d30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7d33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ac7d36 jmp 0x11ac8047 */
  goto L_11ac8047;
L_11ac7d3b:;
  /* 11ac7d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7d3e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac7d41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac7d44 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11ac7d4e jmp 0x11ac7dd5 */
  goto L_11ac7dd5;
L_11ac7d53:;
  /* 11ac7d53 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11ac7d5d jmp 0x11ac7dd5 */
  goto L_11ac7dd5;
L_11ac7d5f:;
  /* 11ac7d5f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11ac7d69:;
  /* 11ac7d69 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11ac7d73 jmp 0x11ac7d7f */
  goto L_11ac7d7f;
L_11ac7d75:;
  /* 11ac7d75 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11ac7d7f:;
  /* 11ac7d7f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11ac7d89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7d8c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac7d92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac7d94 je 0x11ac7db3 */
  if (C.zf) goto L_11ac7db3;
  /* 11ac7d96 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11ac7d9d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11ac7da3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7da6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11ac7dac mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11ac7db3:;
  /* 11ac7db3 jmp 0x11ac7dd5 */
  goto L_11ac7dd5;
L_11ac7db5:;
  /* 11ac7db5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11ac7dbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7dc2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac7dc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac7dca je 0x11ac7dd5 */
  if (C.zf) goto L_11ac7dd5;
  /* 11ac7dcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7dcf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ac7dd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ac7dd5:;
  /* 11ac7dd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7dd8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7ddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7ddf je 0x11ac7dfe */
  if (C.zf) goto L_11ac7dfe;
  /* 11ac7de1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ac7de4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7de5 call 0x11ac8470 */
  push32(0x11ac7deau); f_11ac8470();
  /* 11ac7dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7ded mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ac7df3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11ac7df9 jmp 0x11ac7e8f */
  goto L_11ac7e8f;
L_11ac7dfe:;
  /* 11ac7dfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7e01 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac7e04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac7e06 je 0x11ac7e50 */
  if (C.zf) goto L_11ac7e50;
  /* 11ac7e08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7e0b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7e10 je 0x11ac7e30 */
  if (C.zf) goto L_11ac7e30;
  /* 11ac7e12 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ac7e15 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7e16 call 0x11ac8450 */
  push32(0x11ac7e1bu); f_11ac8450();
  /* 11ac7e1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7e1e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11ac7e21 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac7e22 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ac7e28 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11ac7e2e jmp 0x11ac7e4e */
  goto L_11ac7e4e;
L_11ac7e30:;
  /* 11ac7e30 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ac7e33 push edx */
  push32((uint32_t)(EDX));
  /* 11ac7e34 call 0x11ac8450 */
  push32(0x11ac7e39u); f_11ac8450();
  /* 11ac7e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7e3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7e41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac7e42 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ac7e48 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11ac7e4e:;
  /* 11ac7e4e jmp 0x11ac7e8f */
  goto L_11ac7e8f;
L_11ac7e50:;
  /* 11ac7e50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7e53 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7e56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7e58 je 0x11ac7e75 */
  if (C.zf) goto L_11ac7e75;
  /* 11ac7e5a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11ac7e5d push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7e5e call 0x11ac8450 */
  push32(0x11ac7e63u); f_11ac8450();
  /* 11ac7e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7e66 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac7e67 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ac7e6d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11ac7e73 jmp 0x11ac7e8f */
  goto L_11ac7e8f;
L_11ac7e75:;
  /* 11ac7e75 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ac7e78 push edx */
  push32((uint32_t)(EDX));
  /* 11ac7e79 call 0x11ac8450 */
  push32(0x11ac7e7eu); f_11ac8450();
  /* 11ac7e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7e81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac7e83 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11ac7e89 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11ac7e8f:;
  /* 11ac7e8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7e92 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac7e95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac7e97 je 0x11ac7ed7 */
  if (C.zf) goto L_11ac7ed7;
  /* 11ac7e99 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7ea0 jg 0x11ac7ed7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ac7ed7;
  /* 11ac7ea2 jl 0x11ac7ead */
  if ((C.sf!=C.of)) goto L_11ac7ead;
  /* 11ac7ea4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7eab jae 0x11ac7ed7 */
  if (!C.cf) goto L_11ac7ed7;
L_11ac7ead:;
  /* 11ac7ead mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11ac7eb3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ac7eb5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11ac7ebb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7ebe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ac7ec0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ac7ec6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11ac7ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7ecf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ac7ed2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac7ed5 jmp 0x11ac7eef */
  goto L_11ac7eef;
L_11ac7ed7:;
  /* 11ac7ed7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11ac7edd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ac7ee3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11ac7ee9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11ac7eef:;
  /* 11ac7eef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7ef2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac7ef8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac7efa jne 0x11ac7f17 */
  if (!C.zf) goto L_11ac7f17;
  /* 11ac7efc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ac7f02 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11ac7f08 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac7f0b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ac7f11 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11ac7f17:;
  /* 11ac7f17 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7f1e jge 0x11ac7f2c */
  if ((C.sf==C.of)) goto L_11ac7f2c;
  /* 11ac7f20 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11ac7f2a jmp 0x11ac7f35 */
  goto L_11ac7f35;
L_11ac7f2c:;
  /* 11ac7f2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac7f2f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac7f32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ac7f35:;
  /* 11ac7f35 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ac7f3b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11ac7f41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac7f43 jne 0x11ac7f4c */
  if (!C.zf) goto L_11ac7f4c;
  /* 11ac7f45 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11ac7f4c:;
  /* 11ac7f4c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11ac7f4f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11ac7f52:;
  /* 11ac7f52 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ac7f58 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11ac7f5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7f61 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11ac7f67 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac7f69 jg 0x11ac7f7f */
  if ((!C.zf&&C.sf==C.of)) goto L_11ac7f7f;
  /* 11ac7f6b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ac7f71 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11ac7f77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac7f79 je 0x11ac8000 */
  if (C.zf) goto L_11ac8000;
L_11ac7f7f:;
  /* 11ac7f7f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11ac7f85 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac7f86 push edx */
  push32((uint32_t)(EDX));
  /* 11ac7f87 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7f88 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11ac7f8e push edx */
  push32((uint32_t)(EDX));
  /* 11ac7f8f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ac7f95 push eax */
  push32((uint32_t)(EAX));
  /* 11ac7f96 call 0x11acdc90 */
  push32(0x11ac7f9bu); f_11acdc90();
  /* 11ac7f9b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7f9e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11ac7fa4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11ac7faa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac7fab push edx */
  push32((uint32_t)(EDX));
  /* 11ac7fac push eax */
  push32((uint32_t)(EAX));
  /* 11ac7fad mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11ac7fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac7fb4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11ac7fba push edx */
  push32((uint32_t)(EDX));
  /* 11ac7fbb call 0x11acdc20 */
  push32(0x11ac7fc0u); f_11acdc20();
  /* 11ac7fc0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11ac7fc6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11ac7fcc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac7fd3 jle 0x11ac7fe7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac7fe7;
  /* 11ac7fd5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11ac7fdb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac7fe1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11ac7fe7:;
  /* 11ac7fe7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7fea mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11ac7ff0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ac7ff2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac7ff5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac7ff8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ac7ffb jmp 0x11ac7f52 */
  goto L_11ac7f52;
L_11ac8000:;
  /* 11ac8000 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11ac8003 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8006 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ac8009 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac800c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac800f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ac8012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8015 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac801a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac801c je 0x11ac8047 */
  if (C.zf) goto L_11ac8047;
  /* 11ac801e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac8021 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ac8024 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8027 jne 0x11ac802f */
  if (!C.zf) goto L_11ac802f;
  /* 11ac8029 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac802d jne 0x11ac8047 */
  if (!C.zf) goto L_11ac8047;
L_11ac802f:;
  /* 11ac802f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac8032 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8035 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ac8038 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac803b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11ac803e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac8041 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8044 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11ac8047:;
  /* 11ac8047 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac804e jne 0x11ac8222 */
  if (!C.zf) goto L_11ac8222;
  /* 11ac8054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8057 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac805a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac805c je 0x11ac80ad */
  if (C.zf) goto L_11ac80ad;
  /* 11ac805e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8061 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac8067 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac8069 je 0x11ac807b */
  if (C.zf) goto L_11ac807b;
  /* 11ac806b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11ac8072 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ac8079 jmp 0x11ac80ad */
  goto L_11ac80ad;
L_11ac807b:;
  /* 11ac807b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac807e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac8081 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac8083 je 0x11ac8095 */
  if (C.zf) goto L_11ac8095;
  /* 11ac8085 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11ac808c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11ac8093 jmp 0x11ac80ad */
  goto L_11ac80ad;
L_11ac8095:;
  /* 11ac8095 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8098 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac809b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac809d je 0x11ac80ad */
  if (C.zf) goto L_11ac80ad;
  /* 11ac809f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11ac80a6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11ac80ad:;
  /* 11ac80ad mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11ac80b3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac80b6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac80b9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11ac80bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac80c2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11ac80c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac80c7 jne 0x11ac80e5 */
  if (!C.zf) goto L_11ac80e5;
  /* 11ac80c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ac80cf push eax */
  push32((uint32_t)(EAX));
  /* 11ac80d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac80d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac80d4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11ac80da push edx */
  push32((uint32_t)(EDX));
  /* 11ac80db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ac80dd call 0x11ac83c0 */
  push32(0x11ac80e2u); f_11ac83c0();
  /* 11ac80e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac80e5:;
  /* 11ac80e5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ac80eb push eax */
  push32((uint32_t)(EAX));
  /* 11ac80ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac80ef push ecx */
  push32((uint32_t)(ECX));
  /* 11ac80f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac80f3 push edx */
  push32((uint32_t)(EDX));
  /* 11ac80f4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11ac80fa push eax */
  push32((uint32_t)(EAX));
  /* 11ac80fb call 0x11ac8400 */
  push32(0x11ac8100u); f_11ac8400();
  /* 11ac8100 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8103 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8106 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac8109 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac810b je 0x11ac8133 */
  if (C.zf) goto L_11ac8133;
  /* 11ac810d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8110 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac8113 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac8115 jne 0x11ac8133 */
  if (!C.zf) goto L_11ac8133;
  /* 11ac8117 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ac811d push eax */
  push32((uint32_t)(EAX));
  /* 11ac811e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8121 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8122 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11ac8128 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8129 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ac812b call 0x11ac83c0 */
  push32(0x11ac8130u); f_11ac83c0();
  /* 11ac8130 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac8133:;
  /* 11ac8133 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8137 je 0x11ac81e1 */
  if (C.zf) goto L_11ac81e1;
  /* 11ac813d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8141 jle 0x11ac81e1 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac81e1;
  /* 11ac8147 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac814a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11ac8150 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac8153 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11ac8159:;
  /* 11ac8159 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11ac815f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11ac8165 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8168 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11ac816e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac8170 je 0x11ac81df */
  if (C.zf) goto L_11ac81df;
  /* 11ac8172 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11ac8178 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11ac817b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11ac8182 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11ac8189 push eax */
  push32((uint32_t)(EAX));
  /* 11ac818a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11ac8190 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8191 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11ac8197 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac819a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11ac81a0 call 0x11acdb00 */
  push32(0x11ac81a5u); f_11acdb00();
  /* 11ac81a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac81a8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11ac81ae cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac81b5 jg 0x11ac81b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ac81b9;
  /* 11ac81b7 jmp 0x11ac81df */
  goto L_11ac81df;
L_11ac81b9:;
  /* 11ac81b9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ac81bf push eax */
  push32((uint32_t)(EAX));
  /* 11ac81c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac81c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac81c4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11ac81ca push edx */
  push32((uint32_t)(EDX));
  /* 11ac81cb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11ac81d1 push eax */
  push32((uint32_t)(EAX));
  /* 11ac81d2 call 0x11ac8400 */
  push32(0x11ac81d7u); f_11ac8400();
  /* 11ac81d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac81da jmp 0x11ac8159 */
  goto L_11ac8159;
L_11ac81df:;
  /* 11ac81df jmp 0x11ac81fc */
  goto L_11ac81fc;
L_11ac81e1:;
  /* 11ac81e1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11ac81e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac81e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac81eb push edx */
  push32((uint32_t)(EDX));
  /* 11ac81ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ac81ef push eax */
  push32((uint32_t)(EAX));
  /* 11ac81f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ac81f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac81f4 call 0x11ac8400 */
  push32(0x11ac81f9u); f_11ac8400();
  /* 11ac81f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac81fc:;
  /* 11ac81fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac81ff and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac8202 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac8204 je 0x11ac8222 */
  if (C.zf) goto L_11ac8222;
  /* 11ac8206 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11ac820c push eax */
  push32((uint32_t)(EAX));
  /* 11ac820d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8210 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8211 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11ac8217 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8218 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11ac821a call 0x11ac83c0 */
  push32(0x11ac821fu); f_11ac83c0();
  /* 11ac821f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac8222:;
  /* 11ac8222 jmp 0x11ac7634 */
  goto L_11ac7634;
L_11ac8227:;
  /* 11ac8227 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11ac822d pop edi */
  EDI = (pop32());
  /* 11ac822e pop esi */
  ESI = (pop32());
  /* 11ac822f pop ebx */
  EBX = (pop32());
  /* 11ac8230 mov esp, ebp */
  ESP = (EBP);
  /* 11ac8232 pop ebp */
  EBP = (pop32());
  /* 11ac8233 ret  */
  ESPCHK(0x11ac7610u, _esp0);
  ESP += 4; return;
}

/* FUN_10008340 @ 0x11ac8340 (119 bytes, 44 insns) */
void f_11ac8340(void) {
  FTRACE(0x11ac8340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8340 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8341 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8343 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8344 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8347 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac834a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac834d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8350 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ac8353 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8356 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac835a jl 0x11ac8382 */
  if ((C.sf!=C.of)) goto L_11ac8382;
  /* 11ac835c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac835f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ac8361 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ac8364 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ac8366 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11ac836a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac8370 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac8373 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8376 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ac8378 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac837b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac837e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ac8380 jmp 0x11ac8395 */
  goto L_11ac8395;
L_11ac8382:;
  /* 11ac8382 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8385 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8386 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8389 push eax */
  push32((uint32_t)(EAX));
  /* 11ac838a call 0x11ac7390 */
  push32(0x11ac838fu); f_11ac7390();
  /* 11ac838f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8392 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ac8395:;
  /* 11ac8395 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8399 jne 0x11ac83a6 */
  if (!C.zf) goto L_11ac83a6;
  /* 11ac839b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac839e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ac83a4 jmp 0x11ac83b3 */
  goto L_11ac83b3;
L_11ac83a6:;
  /* 11ac83a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac83a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ac83ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac83ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac83b1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11ac83b3:;
  /* 11ac83b3 mov esp, ebp */
  ESP = (EBP);
  /* 11ac83b5 pop ebp */
  EBP = (pop32());
  /* 11ac83b6 ret  */
  ESPCHK(0x11ac8340u, _esp0);
  ESP += 4; return;
}

/* FUN_100083c0 @ 0x11ac83c0 (53 bytes, 23 insns) */
void f_11ac83c0(void) {
  FTRACE(0x11ac83c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac83c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac83c1 mov ebp, esp */
  EBP = (ESP);
L_11ac83c3:;
  /* 11ac83c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac83c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac83c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac83cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ac83cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac83d1 jle 0x11ac83f3 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac83f3;
  /* 11ac83d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac83d6 push edx */
  push32((uint32_t)(EDX));
  /* 11ac83d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac83da push eax */
  push32((uint32_t)(EAX));
  /* 11ac83db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac83de push ecx */
  push32((uint32_t)(ECX));
  /* 11ac83df call 0x11ac8340 */
  push32(0x11ac83e4u); f_11ac8340();
  /* 11ac83e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac83e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac83ea cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac83ed jne 0x11ac83f1 */
  if (!C.zf) goto L_11ac83f1;
  /* 11ac83ef jmp 0x11ac83f3 */
  goto L_11ac83f3;
L_11ac83f1:;
  /* 11ac83f1 jmp 0x11ac83c3 */
  goto L_11ac83c3;
L_11ac83f3:;
  /* 11ac83f3 pop ebp */
  EBP = (pop32());
  /* 11ac83f4 ret  */
  ESPCHK(0x11ac83c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008400 @ 0x11ac8400 (74 bytes, 31 insns) */
void f_11ac8400(void) {
  FTRACE(0x11ac8400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8400 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8401 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8403 push ecx */
  push32((uint32_t)(ECX));
L_11ac8404:;
  /* 11ac8404 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8407 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac840a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac840d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ac8410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac8412 jle 0x11ac8446 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac8446;
  /* 11ac8414 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac8417 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8418 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac841b push eax */
  push32((uint32_t)(EAX));
  /* 11ac841c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac841f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ac8422 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac8425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8428 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8429 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac842c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac842f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ac8432 call 0x11ac8340 */
  push32(0x11ac8437u); f_11ac8340();
  /* 11ac8437 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac843a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac843d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8440 jne 0x11ac8444 */
  if (!C.zf) goto L_11ac8444;
  /* 11ac8442 jmp 0x11ac8446 */
  goto L_11ac8446;
L_11ac8444:;
  /* 11ac8444 jmp 0x11ac8404 */
  goto L_11ac8404;
L_11ac8446:;
  /* 11ac8446 mov esp, ebp */
  ESP = (EBP);
  /* 11ac8448 pop ebp */
  EBP = (pop32());
  /* 11ac8449 ret  */
  ESPCHK(0x11ac8400u, _esp0);
  ESP += 4; return;
}

/* FUN_10008450 @ 0x11ac8450 (26 bytes, 12 insns) */
void f_11ac8450(void) {
  FTRACE(0x11ac8450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8450 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8451 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8453 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8456 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ac8458 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac845b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac845e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ac8460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8463 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ac8465 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ac8468 pop ebp */
  EBP = (pop32());
  /* 11ac8469 ret  */
  ESPCHK(0x11ac8450u, _esp0);
  ESP += 4; return;
}

/* FUN_10008470 @ 0x11ac8470 (31 bytes, 14 insns) */
void f_11ac8470(void) {
  FTRACE(0x11ac8470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8470 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8471 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8476 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ac8478 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac847b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac847e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ac8480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8483 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ac8485 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8488 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ac848a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ac848d pop ebp */
  EBP = (pop32());
  /* 11ac848e ret  */
  ESPCHK(0x11ac8470u, _esp0);
  ESP += 4; return;
}

/* FUN_10008490 @ 0x11ac8490 (27 bytes, 12 insns) */
void f_11ac8490(void) {
  FTRACE(0x11ac8490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8490 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8491 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8496 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ac8498 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac849b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac849e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ac84a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac84a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ac84a5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11ac84a9 pop ebp */
  EBP = (pop32());
  /* 11ac84aa ret  */
  ESPCHK(0x11ac8490u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x11ac84b0 (23 bytes, 8 insns) */
void f_11ac84b0(void) {
  FTRACE(0x11ac84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac84b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac84b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac84b3 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11ac84b8 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11ac84bd call 0x11acdda0 */
  push32(0x11ac84c2u); f_11acdda0();
  /* 11ac84c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac84c5 pop ebp */
  EBP = (pop32());
  /* 11ac84c6 ret  */
  ESPCHK(0x11ac84b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100084d0 @ 0x11ac84d0 (94 bytes, 30 insns) */
void f_11ac84d0(void) {
  FTRACE(0x11ac84d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac84d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac84d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac84d3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac84d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac84d7 push esi */
  push32((uint32_t)(ESI));
  /* 11ac84d8 push edi */
  push32((uint32_t)(EDI));
  /* 11ac84d9 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 11ac84e0 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 11ac84e7 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 11ac84ee mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 11ac84f5 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11ac84f8 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 11ac84fb fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 11ac84fe fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 11ac8501 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11ac8504 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11ac8507 fcomp qword ptr [0x11af3630] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3630)));
  (void)fpu_pop();
  /* 11ac850d fnstsw ax */
  AX = fpu_status();
  /* 11ac850f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11ac8512 jne 0x11ac851d */
  if (!C.zf) goto L_11ac851d;
  /* 11ac8514 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ac851b jmp 0x11ac8524 */
  goto L_11ac8524;
L_11ac851d:;
  /* 11ac851d mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11ac8524:;
  /* 11ac8524 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ac8527 pop edi */
  EDI = (pop32());
  /* 11ac8528 pop esi */
  ESI = (pop32());
  /* 11ac8529 pop ebx */
  EBX = (pop32());
  /* 11ac852a mov esp, ebp */
  ESP = (EBP);
  /* 11ac852c pop ebp */
  EBP = (pop32());
  /* 11ac852d ret  */
  ESPCHK(0x11ac84d0u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x11ac8530 (66 bytes, 22 insns) */
void f_11ac8530(void) {
  FTRACE(0x11ac8530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8530 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8531 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8536 push 0x11af3654 */
  push32((uint32_t)(0x11af3654u));
  /* 11ac853b call dword ptr [0x11afb3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3cc))), 0x11ac8541u);
  /* 11ac8541 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac8544 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8548 je 0x11ac8569 */
  if (C.zf) goto L_11ac8569;
  /* 11ac854a push 0x11af3638 */
  push32((uint32_t)(0x11af3638u));
  /* 11ac854f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8552 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8553 call dword ptr [0x11afb39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb39c))), 0x11ac8559u);
  /* 11ac8559 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ac855c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8560 je 0x11ac8569 */
  if (C.zf) goto L_11ac8569;
  /* 11ac8562 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac8564 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x11ac8567u);
  /* 11ac8567 jmp 0x11ac856e */
  goto L_11ac856e;
L_11ac8569:;
  /* 11ac8569 call 0x11ac84d0 */
  push32(0x11ac856eu); f_11ac84d0();
L_11ac856e:;
  /* 11ac856e mov esp, ebp */
  ESP = (EBP);
  /* 11ac8570 pop ebp */
  EBP = (pop32());
  /* 11ac8571 ret  */
  ESPCHK(0x11ac8530u, _esp0);
  ESP += 4; return;
}

/* FUN_10008580 @ 0x11ac8580 (168 bytes, 59 insns) */
void f_11ac8580(void) {
  FTRACE(0x11ac8580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8580 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8581 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8589 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac858c push ecx */
  push32((uint32_t)(ECX));
  /* 11ac858d call 0x11ace280 */
  push32(0x11ac8592u); f_11ace280();
  /* 11ac8592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8595 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8598 je 0x11ac85e0 */
  if (C.zf) goto L_11ac85e0;
L_11ac859a:;
  /* 11ac859a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac859d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac85a0 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ac85a3 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac85aa jle 0x11ac85c2 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac85c2;
  /* 11ac85ac push 4 */
  push32((uint32_t)(0x4u));
  /* 11ac85ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac85b1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac85b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac85b5 call 0x11ace1b0 */
  push32(0x11ac85bau); f_11ace1b0();
  /* 11ac85ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac85bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ac85c0 jmp 0x11ac85da */
  goto L_11ac85da;
L_11ac85c2:;
  /* 11ac85c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac85c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ac85c8 mov ecx, dword ptr [0x11af6fb8] */
  ECX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ac85ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac85d0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11ac85d4 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac85d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ac85da:;
  /* 11ac85da cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac85de jne 0x11ac859a */
  if (!C.zf) goto L_11ac859a;
L_11ac85e0:;
  /* 11ac85e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac85e3 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ac85e5 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ac85e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac85eb mov al, byte ptr [0x11af71d4] */
  AL = (r8((uint32_t)(0x11af71d4)));
  /* 11ac85f0 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ac85f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac85f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac85f8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11ac85fb:;
  /* 11ac85fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac85fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ac8600 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11ac8603 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8606 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11ac8609 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ac860b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11ac860e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11ac8611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8614 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ac8617 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac861a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac861d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ac8620 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac8622 jne 0x11ac85fb */
  if (!C.zf) goto L_11ac85fb;
  /* 11ac8624 mov esp, ebp */
  ESP = (EBP);
  /* 11ac8626 pop ebp */
  EBP = (pop32());
  /* 11ac8627 ret  */
  ESPCHK(0x11ac8580u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x11ac8630 (215 bytes, 78 insns) */
void f_11ac8630(void) {
  FTRACE(0x11ac8630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8630 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8631 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8633 push ecx */
  push32((uint32_t)(ECX));
L_11ac8634:;
  /* 11ac8634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8637 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac863a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac863c je 0x11ac865a */
  if (C.zf) goto L_11ac865a;
  /* 11ac863e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8641 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ac8644 movsx ecx, byte ptr [0x11af71d4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11af71d4))));
  /* 11ac864b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac864d je 0x11ac865a */
  if (C.zf) goto L_11ac865a;
  /* 11ac864f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8652 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8655 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ac8658 jmp 0x11ac8634 */
  goto L_11ac8634;
L_11ac865a:;
  /* 11ac865a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac865d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac8660 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8663 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8666 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ac8669 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac866b je 0x11ac8703 */
  if (C.zf) goto L_11ac8703;
L_11ac8671:;
  /* 11ac8671 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8674 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac8677 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac8679 je 0x11ac869c */
  if (C.zf) goto L_11ac869c;
  /* 11ac867b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac867e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ac8681 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8684 je 0x11ac869c */
  if (C.zf) goto L_11ac869c;
  /* 11ac8686 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8689 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ac868c cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac868f je 0x11ac869c */
  if (C.zf) goto L_11ac869c;
  /* 11ac8691 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8694 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8697 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ac869a jmp 0x11ac8671 */
  goto L_11ac8671;
L_11ac869c:;
  /* 11ac869c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac869f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac86a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac86a5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac86a8 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11ac86ab:;
  /* 11ac86ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac86ae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac86b1 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac86b4 jne 0x11ac86c1 */
  if (!C.zf) goto L_11ac86c1;
  /* 11ac86b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac86b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac86bc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ac86bf jmp 0x11ac86ab */
  goto L_11ac86ab;
L_11ac86c1:;
  /* 11ac86c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac86c4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac86c7 movsx edx, byte ptr [0x11af71d4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11af71d4))));
  /* 11ac86ce cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac86d0 jne 0x11ac86db */
  if (!C.zf) goto L_11ac86db;
  /* 11ac86d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac86d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac86d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ac86db:;
  /* 11ac86db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac86de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac86e1 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11ac86e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac86e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac86ea mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ac86ec mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ac86ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac86f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ac86f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac86f7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac86fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac86fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac86ff je 0x11ac8703 */
  if (C.zf) goto L_11ac8703;
  /* 11ac8701 jmp 0x11ac86db */
  goto L_11ac86db;
L_11ac8703:;
  /* 11ac8703 mov esp, ebp */
  ESP = (EBP);
  /* 11ac8705 pop ebp */
  EBP = (pop32());
  /* 11ac8706 ret  */
  ESPCHK(0x11ac8630u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x11ac8710 (45 bytes, 16 insns) */
void f_11ac8710(void) {
  FTRACE(0x11ac8710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8710 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8711 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8713 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8717 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11ac8719 fcomp qword ptr [0x11af3660] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11af3660)));
  (void)fpu_pop();
  /* 11ac871f fnstsw ax */
  AX = fpu_status();
  /* 11ac8721 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11ac8724 jne 0x11ac872f */
  if (!C.zf) goto L_11ac872f;
  /* 11ac8726 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ac872d jmp 0x11ac8736 */
  goto L_11ac8736;
L_11ac872f:;
  /* 11ac872f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ac8736:;
  /* 11ac8736 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8739 mov esp, ebp */
  ESP = (EBP);
  /* 11ac873b pop ebp */
  EBP = (pop32());
  /* 11ac873c ret  */
  ESPCHK(0x11ac8710u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11ac8740 (72 bytes, 29 insns) */
void f_11ac8740(void) {
  FTRACE(0x11ac8740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8740 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8741 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8743 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8746 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac874a je 0x11ac876c */
  if (C.zf) goto L_11ac876c;
  /* 11ac874c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac874f push eax */
  push32((uint32_t)(EAX));
  /* 11ac8750 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11ac8753 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8754 call 0x11aceb70 */
  push32(0x11ac8759u); f_11aceb70();
  /* 11ac8759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac875c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac875f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac8762 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ac8764 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8767 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ac876a jmp 0x11ac8784 */
  goto L_11ac8784;
L_11ac876c:;
  /* 11ac876c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac876f push edx */
  push32((uint32_t)(EDX));
  /* 11ac8770 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ac8773 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8774 call 0x11acebf0 */
  push32(0x11ac8779u); f_11acebf0();
  /* 11ac8779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac877c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac877f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac8782 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_11ac8784:;
  /* 11ac8784 mov esp, ebp */
  ESP = (EBP);
  /* 11ac8786 pop ebp */
  EBP = (pop32());
  /* 11ac8787 ret  */
  ESPCHK(0x11ac8740u, _esp0);
  ESP += 4; return;
}

/* FUN_10008790 @ 0x11ac8790 (118 bytes, 49 insns) */
void f_11ac8790(void) {
  FTRACE(0x11ac8790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8790 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8791 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8793 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8796 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ac8799 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac879c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11ac879f push ecx */
  push32((uint32_t)(ECX));
  /* 11ac87a0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ac87a3 push edx */
  push32((uint32_t)(EDX));
  /* 11ac87a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac87a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac87aa push ecx */
  push32((uint32_t)(ECX));
  /* 11ac87ab mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ac87ad push edx */
  push32((uint32_t)(EDX));
  /* 11ac87ae call 0x11aced30 */
  push32(0x11ac87b3u); f_11aced30();
  /* 11ac87b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac87b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac87b9 push eax */
  push32((uint32_t)(EAX));
  /* 11ac87ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac87bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac87c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac87c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac87c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac87c6 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac87c9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11ac87cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac87cf add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac87d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac87d3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac87d7 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11ac87da add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac87dc push ecx */
  push32((uint32_t)(ECX));
  /* 11ac87dd call 0x11acec30 */
  push32(0x11ac87e2u); f_11acec30();
  /* 11ac87e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac87e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac87e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac87ea push eax */
  push32((uint32_t)(EAX));
  /* 11ac87eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac87ee push ecx */
  push32((uint32_t)(ECX));
  /* 11ac87ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac87f2 push edx */
  push32((uint32_t)(EDX));
  /* 11ac87f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac87f6 push eax */
  push32((uint32_t)(EAX));
  /* 11ac87f7 call 0x11ac8810 */
  push32(0x11ac87fcu); f_11ac8810();
  /* 11ac87fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac87ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8802 mov esp, ebp */
  ESP = (EBP);
  /* 11ac8804 pop ebp */
  EBP = (pop32());
  /* 11ac8805 ret  */
  ESPCHK(0x11ac8790u, _esp0);
  ESP += 4; return;
}

/* FUN_10008810 @ 0x11ac8810 (358 bytes, 128 insns) */
void f_11ac8810(void) {
  FTRACE(0x11ac8810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8810 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8811 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8816 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11ac881a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac881c je 0x11ac8847 */
  if (C.zf) goto L_11ac8847;
  /* 11ac881e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac8821 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac8823 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8826 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11ac8829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac882c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac882e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac8831 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac8833 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8837 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11ac883a push ecx */
  push32((uint32_t)(ECX));
  /* 11ac883b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac883e push edx */
  push32((uint32_t)(EDX));
  /* 11ac883f call 0x11ac8c80 */
  push32(0x11ac8844u); f_11ac8c80();
  /* 11ac8844 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac8847:;
  /* 11ac8847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac884a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac884d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac8850 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8853 jne 0x11ac8864 */
  if (!C.zf) goto L_11ac8864;
  /* 11ac8855 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8858 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 11ac885b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac885e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8861 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ac8864:;
  /* 11ac8864 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8868 jle 0x11ac8888 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac8888;
  /* 11ac886a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac886d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8870 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ac8873 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11ac8875 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8878 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac887b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac887e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8881 mov al, byte ptr [0x11af71d4] */
  AL = (r8((uint32_t)(0x11af71d4)));
  /* 11ac8886 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_11ac8888:;
  /* 11ac8888 push 0x11af3668 */
  push32((uint32_t)(0x11af3668u));
  /* 11ac888d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8890 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8893 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11ac8897 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ac8899 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac889b inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ac889c add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac889e push ecx */
  push32((uint32_t)(ECX));
  /* 11ac889f call 0x11acc610 */
  push32(0x11ac88a4u); f_11acc610();
  /* 11ac88a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac88a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac88aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac88ae je 0x11ac88b6 */
  if (C.zf) goto L_11ac88b6;
  /* 11ac88b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac88b3 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_11ac88b6:;
  /* 11ac88b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac88b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac88bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac88bf mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac88c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ac88c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac88c8 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac88cb je 0x11ac896f */
  if (C.zf) goto L_11ac896f;
  /* 11ac88d1 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac88d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac88d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac88da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ac88dd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac88e1 jge 0x11ac88f1 */
  if ((C.sf==C.of)) goto L_11ac88f1;
  /* 11ac88e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac88e6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ac88e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ac88eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac88ee mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_11ac88f1:;
  /* 11ac88f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac88f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac88f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac88fa cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac88fe jl 0x11ac8925 */
  if ((C.sf!=C.of)) goto L_11ac8925;
  /* 11ac8900 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac8903 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac8904 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11ac8909 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ac890b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac890e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11ac8910 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ac8912 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8915 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ac8917 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac891a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac891b mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11ac8920 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ac8922 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ac8925:;
  /* 11ac8925 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8928 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac892b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac892e cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8932 jl 0x11ac8959 */
  if ((C.sf!=C.of)) goto L_11ac8959;
  /* 11ac8934 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac8937 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac8938 mov ecx, 0xa */
  ECX = (0xau);
  /* 11ac893d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ac893f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8942 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11ac8944 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ac8946 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8949 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11ac894b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac894e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ac894f mov ecx, 0xa */
  ECX = (0xau);
  /* 11ac8954 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ac8956 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ac8959:;
  /* 11ac8959 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac895c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac895f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac8962 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8965 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ac8967 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ac896a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac896d mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_11ac896f:;
  /* 11ac896f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8972 mov esp, ebp */
  ESP = (EBP);
  /* 11ac8974 pop ebp */
  EBP = (pop32());
  /* 11ac8975 ret  */
  ESPCHK(0x11ac8810u, _esp0);
  ESP += 4; return;
}

/* FUN_10008980 @ 0x11ac8980 (106 bytes, 44 insns) */
void f_11ac8980(void) {
  FTRACE(0x11ac8980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8980 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8981 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8983 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8986 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ac8989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac898c lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11ac898f push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8990 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ac8993 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8997 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac899a push ecx */
  push32((uint32_t)(ECX));
  /* 11ac899b mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ac899d push edx */
  push32((uint32_t)(EDX));
  /* 11ac899e call 0x11aced30 */
  push32(0x11ac89a3u); f_11aced30();
  /* 11ac89a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac89a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac89a9 push eax */
  push32((uint32_t)(EAX));
  /* 11ac89aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac89ad mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac89b0 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac89b3 push edx */
  push32((uint32_t)(EDX));
  /* 11ac89b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac89b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac89b9 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac89bc sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ac89bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac89c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac89c4 push edx */
  push32((uint32_t)(EDX));
  /* 11ac89c5 call 0x11acec30 */
  push32(0x11ac89cau); f_11acec30();
  /* 11ac89ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac89cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac89cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac89d2 push eax */
  push32((uint32_t)(EAX));
  /* 11ac89d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac89d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac89d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac89da push edx */
  push32((uint32_t)(EDX));
  /* 11ac89db call 0x11ac89f0 */
  push32(0x11ac89e0u); f_11ac89f0();
  /* 11ac89e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac89e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac89e6 mov esp, ebp */
  ESP = (EBP);
  /* 11ac89e8 pop ebp */
  EBP = (pop32());
  /* 11ac89e9 ret  */
  ESPCHK(0x11ac8980u, _esp0);
  ESP += 4; return;
}

/* FUN_100089f0 @ 0x11ac89f0 (317 bytes, 113 insns) */
void f_11ac89f0(void) {
  FTRACE(0x11ac89f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac89f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac89f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac89f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac89f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac89f9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac89fc sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac89ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ac8a02 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11ac8a06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac8a08 je 0x11ac8a43 */
  if (C.zf) goto L_11ac8a43;
  /* 11ac8a0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8a0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac8a0f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8a12 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11ac8a15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8a18 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8a1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac8a1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac8a20 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8a23 jne 0x11ac8a43 */
  if (!C.zf) goto L_11ac8a43;
  /* 11ac8a25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8a28 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8a2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ac8a2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac8a31 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11ac8a34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac8a37 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8a3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ac8a3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac8a40 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11ac8a43:;
  /* 11ac8a43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8a46 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac8a49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8a4c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8a4f jne 0x11ac8a60 */
  if (!C.zf) goto L_11ac8a60;
  /* 11ac8a51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8a54 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11ac8a57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8a5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8a5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ac8a60:;
  /* 11ac8a60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8a63 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8a67 jg 0x11ac8a88 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ac8a88;
  /* 11ac8a69 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac8a6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8a6e push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8a6f call 0x11ac8c80 */
  push32(0x11ac8a74u); f_11ac8c80();
  /* 11ac8a74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8a77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8a7a mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11ac8a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8a80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8a83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac8a86 jmp 0x11ac8a94 */
  goto L_11ac8a94;
L_11ac8a88:;
  /* 11ac8a88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8a8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8a8e add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8a91 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ac8a94:;
  /* 11ac8a94 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8a98 jle 0x11ac8b26 */
  if ((C.zf||C.sf!=C.of)) goto L_11ac8b26;
  /* 11ac8a9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac8aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8aa3 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8aa4 call 0x11ac8c80 */
  push32(0x11ac8aa9u); f_11ac8c80();
  /* 11ac8aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8aac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8aaf mov dl, byte ptr [0x11af71d4] */
  DL = (r8((uint32_t)(0x11af71d4)));
  /* 11ac8ab5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ac8ab7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8aba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8abd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac8ac0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8ac3 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8ac7 jge 0x11ac8b26 */
  if ((C.sf==C.of)) goto L_11ac8b26;
  /* 11ac8ac9 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11ac8acd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac8acf je 0x11ac8ade */
  if (C.zf) goto L_11ac8ade;
  /* 11ac8ad1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8ad4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac8ad7 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ac8ad9 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ac8adc jmp 0x11ac8b04 */
  goto L_11ac8b04;
L_11ac8ade:;
  /* 11ac8ade mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8ae1 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac8ae4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ac8ae6 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8ae9 jge 0x11ac8af3 */
  if ((C.sf==C.of)) goto L_11ac8af3;
  /* 11ac8aeb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8aee mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ac8af1 jmp 0x11ac8afe */
  goto L_11ac8afe;
L_11ac8af3:;
  /* 11ac8af3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8af6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac8af9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ac8afb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11ac8afe:;
  /* 11ac8afe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac8b01 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11ac8b04:;
  /* 11ac8b04 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8b07 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8b0b push eax */
  push32((uint32_t)(EAX));
  /* 11ac8b0c call 0x11ac8c80 */
  push32(0x11ac8b11u); f_11ac8c80();
  /* 11ac8b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8b14 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8b17 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8b18 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11ac8b1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8b1d push edx */
  push32((uint32_t)(EDX));
  /* 11ac8b1e call 0x11acef20 */
  push32(0x11ac8b23u); f_11acef20();
  /* 11ac8b23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac8b26:;
  /* 11ac8b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8b29 mov esp, ebp */
  ESP = (EBP);
  /* 11ac8b2b pop ebp */
  EBP = (pop32());
  /* 11ac8b2c ret  */
  ESPCHK(0x11ac89f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b30 @ 0x11ac8b30 (229 bytes, 89 insns) */
void f_11ac8b30(void) {
  FTRACE(0x11ac8b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8b31 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8b33 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8b36 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 11ac8b3a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11ac8b3d mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11ac8b40 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11ac8b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8b44 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11ac8b47 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8b48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8b4b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac8b4e push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8b4f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11ac8b51 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8b52 call 0x11aced30 */
  push32(0x11ac8b57u); f_11aced30();
  /* 11ac8b57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8b5a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac8b5d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ac8b60 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8b63 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11ac8b66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac8b69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac8b6b cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8b6e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11ac8b71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8b74 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8b76 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac8b79 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac8b7c push edx */
  push32((uint32_t)(EDX));
  /* 11ac8b7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8b80 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8b81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8b84 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8b85 call 0x11acec30 */
  push32(0x11ac8b8au); f_11acec30();
  /* 11ac8b8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8b8d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac8b90 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac8b93 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8b96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac8b98 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8b9b setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11ac8b9e mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 11ac8ba1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac8ba4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac8ba7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8baa mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11ac8bad cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8bb1 jl 0x11ac8bbb */
  if ((C.sf!=C.of)) goto L_11ac8bbb;
  /* 11ac8bb3 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ac8bb6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8bb9 jl 0x11ac8bd7 */
  if ((C.sf!=C.of)) goto L_11ac8bd7;
L_11ac8bbb:;
  /* 11ac8bbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac8bbd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac8bc0 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8bc1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac8bc4 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8bc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8bc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8bcc push edx */
  push32((uint32_t)(EDX));
  /* 11ac8bcd call 0x11ac8810 */
  push32(0x11ac8bd2u); f_11ac8810();
  /* 11ac8bd2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8bd5 jmp 0x11ac8c11 */
  goto L_11ac8c11;
L_11ac8bd7:;
  /* 11ac8bd7 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 11ac8bdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac8bdd je 0x11ac8bfb */
  if (C.zf) goto L_11ac8bfb;
L_11ac8bdf:;
  /* 11ac8bdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8be2 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ac8be5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8be8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8beb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac8bee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac8bf0 je 0x11ac8bf4 */
  if (C.zf) goto L_11ac8bf4;
  /* 11ac8bf2 jmp 0x11ac8bdf */
  goto L_11ac8bdf;
L_11ac8bf4:;
  /* 11ac8bf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac8bf7 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_11ac8bfb:;
  /* 11ac8bfb push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac8bfd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ac8c00 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8c01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac8c04 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8c05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8c08 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8c09 call 0x11ac89f0 */
  push32(0x11ac8c0eu); f_11ac89f0();
  /* 11ac8c0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac8c11:;
  /* 11ac8c11 mov esp, ebp */
  ESP = (EBP);
  /* 11ac8c13 pop ebp */
  EBP = (pop32());
  /* 11ac8c14 ret  */
  ESPCHK(0x11ac8b30u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11ac8c20 (95 bytes, 40 insns) */
void f_11ac8c20(void) {
  FTRACE(0x11ac8c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8c21 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8c23 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8c27 je 0x11ac8c2f */
  if (C.zf) goto L_11ac8c2f;
  /* 11ac8c29 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8c2d jne 0x11ac8c49 */
  if (!C.zf) goto L_11ac8c49;
L_11ac8c2f:;
  /* 11ac8c2f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac8c32 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8c33 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac8c36 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8c37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8c3a push edx */
  push32((uint32_t)(EDX));
  /* 11ac8c3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8c3e push eax */
  push32((uint32_t)(EAX));
  /* 11ac8c3f call 0x11ac8790 */
  push32(0x11ac8c44u); f_11ac8790();
  /* 11ac8c44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8c47 jmp 0x11ac8c7d */
  goto L_11ac8c7d;
L_11ac8c49:;
  /* 11ac8c49 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8c4d jne 0x11ac8c65 */
  if (!C.zf) goto L_11ac8c65;
  /* 11ac8c4f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac8c52 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8c53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8c56 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8c57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8c5a push eax */
  push32((uint32_t)(EAX));
  /* 11ac8c5b call 0x11ac8980 */
  push32(0x11ac8c60u); f_11ac8980();
  /* 11ac8c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8c63 jmp 0x11ac8c7d */
  goto L_11ac8c7d;
L_11ac8c65:;
  /* 11ac8c65 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac8c68 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8c69 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac8c6c push edx */
  push32((uint32_t)(EDX));
  /* 11ac8c6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac8c70 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8c74 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8c75 call 0x11ac8b30 */
  push32(0x11ac8c7au); f_11ac8b30();
  /* 11ac8c7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac8c7d:;
  /* 11ac8c7d pop ebp */
  EBP = (pop32());
  /* 11ac8c7e ret  */
  ESPCHK(0x11ac8c20u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x11ac8c80 (46 bytes, 19 insns) */
void f_11ac8c80(void) {
  FTRACE(0x11ac8c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac8c81 mov ebp, esp */
  EBP = (ESP);
  /* 11ac8c83 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8c87 je 0x11ac8cac */
  if (C.zf) goto L_11ac8cac;
  /* 11ac8c89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8c8c push eax */
  push32((uint32_t)(EAX));
  /* 11ac8c8d call 0x11acc490 */
  push32(0x11ac8c92u); f_11acc490();
  /* 11ac8c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8c95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8c98 push eax */
  push32((uint32_t)(EAX));
  /* 11ac8c99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8c9c push ecx */
  push32((uint32_t)(ECX));
  /* 11ac8c9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac8ca0 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8ca3 push edx */
  push32((uint32_t)(EDX));
  /* 11ac8ca4 call 0x11acef80 */
  push32(0x11ac8ca9u); f_11acef80();
  /* 11ac8ca9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac8cac:;
  /* 11ac8cac pop ebp */
  EBP = (pop32());
  /* 11ac8cad ret  */
  ESPCHK(0x11ac8c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eac @ 0x11ac8eac (25 bytes, 7 insns) */
void f_11ac8eac(void) {
  FTRACE(0x11ac8eacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8eac test eax, 0x80000 */
  { uint32_t _r=(EAX)&(0x80000u); fl_logic(_r,32); }
  /* 11ac8eb1 je 0x11ac8eb9 */
  if (C.zf) goto L_11ac8eb9;
  /* 11ac8eb3 mov eax, 7 */
  EAX = (0x7u);
  /* 11ac8eb8 ret  */
  ESPCHK(0x11ac8eacu, _esp0);
  ESP += 4; return;
L_11ac8eb9:;
  /* 11ac8eb9 fadd qword ptr [0x11af3670] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x11af3670)));
  /* 11ac8ebf mov eax, 1 */
  EAX = (0x1u);
  /* 11ac8ec4 ret  */
  ESPCHK(0x11ac8eacu, _esp0);
  ESP += 4; return;
}

/* __fload_withFB @ 0x11ac8ec5 (67 bytes, 21 insns) */
void f_11ac8ec5(void) {
  FTRACE(0x11ac8ec5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8ec5 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac8ec8 and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac8ecd cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8ed2 je 0x11ac8ed7 */
  if (C.zf) goto L_11ac8ed7;
  /* 11ac8ed4 fld qword ptr [edx] */
  fpu_push(rf64((uint32_t)(EDX)));
  /* 11ac8ed6 ret  */
  ESPCHK(0x11ac8ec5u, _esp0);
  ESP += 4; return;
L_11ac8ed7:;
  /* 11ac8ed7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac8eda sub esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac8edd or eax, 0x7fff0000 */
  { uint32_t _r=(EAX)|(0x7fff0000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac8ee2 mov dword ptr [esp + 6], eax */
  w32((uint32_t)(ESP + 0x6), (EAX));
  /* 11ac8ee6 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac8ee9 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11ac8eeb shld eax, ecx, 0xb */
  EAX = (sh_shld((uint32_t)(EAX),(uint32_t)(ECX),(0xbu)&0x1f,32));
  /* 11ac8eef shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11ac8ef2 mov dword ptr [esp + 4], eax */
  w32((uint32_t)(ESP + 0x4), (EAX));
  /* 11ac8ef6 mov dword ptr [esp], ecx */
  w32((uint32_t)(ESP), (ECX));
  /* 11ac8ef9 fld xword ptr [esp] */
  fpu_push(rf80((uint32_t)(ESP)));
  /* 11ac8efc add esp, 0xa */
  { uint32_t _a=(ESP),_b=(0xau),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac8eff test eax, 0 */
  { uint32_t _r=(EAX)&(0x0u); fl_logic(_r,32); }
  /* 11ac8f04 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac8f07 ret  */
  ESPCHK(0x11ac8ec5u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f08 @ 0x11ac8f08 (22 bytes, 7 insns) */
void f_11ac8f08(void) {
  FTRACE(0x11ac8f08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8f08 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ac8f0c and eax, 0x7ff00000 */
  { uint32_t _r=(EAX)&(0x7ff00000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac8f11 cmp eax, 0x7ff00000 */
  { uint32_t _a=(EAX),_b=(0x7ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac8f16 je 0x11ac8f19 */
  if (C.zf) goto L_11ac8f19;
  /* 11ac8f18 ret  */
  ESPCHK(0x11ac8f08u, _esp0);
  ESP += 4; return;
L_11ac8f19:;
  /* 11ac8f19 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ac8f1d ret  */
  ESPCHK(0x11ac8f08u, _esp0);
  ESP += 4; return;
}

/* __math_exit @ 0x11ac8f2b (42 bytes, 16 insns) */
void f_11ac8f2b(void) {
  FTRACE(0x11ac8f2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac8f2b mov ax, word ptr [esp] */
  AX = (r16((uint32_t)(ESP)));
  /* 11ac8f2f cmp ax, 0x27f */
  { uint32_t _a=(AX),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ac8f33 je 0x11ac8f53 */
  if (C.zf) goto L_11ac8f53;
  /* 11ac8f35 and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11ac8f39 je 0x11ac8f50 */
  if (C.zf) goto L_11ac8f50;
  /* 11ac8f3b wait  */
  /* wait (no observable integer/reg state) */
  /* 11ac8f3c fnstsw ax */
  AX = fpu_status();
  /* 11ac8f3e and ax, 0x20 */
  { uint32_t _r=(AX)&(0x20u); AX = (_r); fl_logic(_r,16); }
  /* 11ac8f42 je 0x11ac8f50 */
  if (C.zf) goto L_11ac8f50;
  /* 11ac8f44 mov eax, 8 */
  EAX = (0x8u);
  /* 11ac8f49 call 0x11ac9027 */
  push32(0x11ac8f4eu); f_11ac9027();
  /* 11ac8f4e pop edx */
  EDX = (pop32());
  /* 11ac8f4f ret  */
  ESPCHK(0x11ac8f2bu, _esp0);
  ESP += 4; return;
L_11ac8f50:;
  /* 11ac8f50 fldcw word ptr [esp] */
  C.fcw = r16((uint32_t)(ESP));
L_11ac8f53:;
  /* 11ac8f53 pop edx */
  EDX = (pop32());
  /* 11ac8f54 ret  */
  ESPCHK(0x11ac8f2bu, _esp0);
  ESP += 4; return;
}

/* FUN_10009010 @ 0x11ac9010 (23 bytes, 9 insns) */
void f_11ac9010(void) {
  FTRACE(0x11ac9010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9010 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9011 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9013 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9016 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ac9019 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac901c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ac901f mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ac9022 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ac9025 jmp 0x11ac9030 */
  jmp_ind(0x11ac9030u); return;
}

/* __startOneArgErrorHandling @ 0x11ac9027 (60 bytes, 23 insns) */
void f_11ac9027(void) {
  FTRACE(0x11ac9027u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9027 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9028 mov ebp, esp */
  EBP = (ESP);
  /* 11ac902a add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac902d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ac9030 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ac9033 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11ac9036 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9039 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac903c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ac903f mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ac9042 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ac9045 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 11ac9048 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9049 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac904a push edx */
  push32((uint32_t)(EDX));
  /* 11ac904b call 0x11acf2d0 */
  push32(0x11ac9050u); f_11acf2d0();
  /* 11ac9050 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9053 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11ac9056 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11ac905c je 0x11ac9061 */
  if (C.zf) goto L_11ac9061;
  /* 11ac905e fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_11ac9061:;
  /* 11ac9061 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ac9062 ret  */
  ESPCHK(0x11ac9027u, _esp0);
  ESP += 4; return;
}

/* FUN_10009070 @ 0x11ac9070 (56 bytes, 15 insns) */
void f_11ac9070(void) {
  FTRACE(0x11ac9070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9070 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9071 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9073 cmp dword ptr [0x11af6a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af6a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac907a je 0x11ac9082 */
  if (C.zf) goto L_11ac9082;
  /* 11ac907c call dword ptr [0x11af6a48] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af6a48))), 0x11ac9082u);
L_11ac9082:;
  /* 11ac9082 push 0x11af6418 */
  push32((uint32_t)(0x11af6418u));
  /* 11ac9087 push 0x11af6208 */
  push32((uint32_t)(0x11af6208u));
  /* 11ac908c call 0x11ac9240 */
  push32(0x11ac9091u); f_11ac9240();
  /* 11ac9091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9094 push 0x11af6104 */
  push32((uint32_t)(0x11af6104u));
  /* 11ac9099 push 0x11af6000 */
  push32((uint32_t)(0x11af6000u));
  /* 11ac909e call 0x11ac9240 */
  push32(0x11ac90a3u); f_11ac9240();
  /* 11ac90a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac90a6 pop ebp */
  EBP = (pop32());
  /* 11ac90a7 ret  */
  ESPCHK(0x11ac9070u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x11ac90b0 (21 bytes, 10 insns) */
void f_11ac90b0(void) {
  FTRACE(0x11ac90b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac90b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac90b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac90b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac90b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac90b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac90ba push eax */
  push32((uint32_t)(EAX));
  /* 11ac90bb call 0x11ac9130 */
  push32(0x11ac90c0u); f_11ac9130();
  /* 11ac90c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac90c3 pop ebp */
  EBP = (pop32());
  /* 11ac90c4 ret  */
  ESPCHK(0x11ac90b0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11ac90d0 (21 bytes, 10 insns) */
void f_11ac90d0(void) {
  FTRACE(0x11ac90d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac90d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac90d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac90d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac90d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac90d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac90da push eax */
  push32((uint32_t)(EAX));
  /* 11ac90db call 0x11ac9130 */
  push32(0x11ac90e0u); f_11ac9130();
  /* 11ac90e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac90e3 pop ebp */
  EBP = (pop32());
  /* 11ac90e4 ret  */
  ESPCHK(0x11ac90d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090f0 @ 0x11ac90f0 (19 bytes, 9 insns) */
void f_11ac90f0(void) {
  FTRACE(0x11ac90f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac90f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac90f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac90f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac90f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac90f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac90f9 call 0x11ac9130 */
  push32(0x11ac90feu); f_11ac9130();
  /* 11ac90fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9101 pop ebp */
  EBP = (pop32());
  /* 11ac9102 ret  */
  ESPCHK(0x11ac90f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009110 @ 0x11ac9110 (19 bytes, 9 insns) */
void f_11ac9110(void) {
  FTRACE(0x11ac9110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9110 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9111 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9113 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9115 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9117 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9119 call 0x11ac9130 */
  push32(0x11ac911eu); f_11ac9130();
  /* 11ac911e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9121 pop ebp */
  EBP = (pop32());
  /* 11ac9122 ret  */
  ESPCHK(0x11ac9110u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x11ac9130 (227 bytes, 61 insns) */
void f_11ac9130(void) {
  FTRACE(0x11ac9130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9130 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9131 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9133 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9134 call 0x11ac9220 */
  push32(0x11ac9139u); f_11ac9220();
  /* 11ac9139 cmp dword ptr [0x11af9304], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af9304))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9140 jne 0x11ac9153 */
  if (!C.zf) goto L_11ac9153;
  /* 11ac9142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9145 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9146 call dword ptr [0x11afb3b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3b8))), 0x11ac914cu);
  /* 11ac914c push eax */
  push32((uint32_t)(EAX));
  /* 11ac914d call dword ptr [0x11afb3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3d4))), 0x11ac9153u);
L_11ac9153:;
  /* 11ac9153 mov dword ptr [0x11af9300], 1 */
  w32((uint32_t)(0x11af9300), (0x1u));
  /* 11ac915d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11ac9160 mov byte ptr [0x11af92fc], cl */
  w8((uint32_t)(0x11af92fc), (CL));
  /* 11ac9166 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac916a jne 0x11ac91b3 */
  if (!C.zf) goto L_11ac91b3;
  /* 11ac916c cmp dword ptr [0x11afadd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afadd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9173 je 0x11ac91a1 */
  if (C.zf) goto L_11ac91a1;
  /* 11ac9175 mov edx, dword ptr [0x11afadd4] */
  EDX = (r32((uint32_t)(0x11afadd4)));
  /* 11ac917b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ac917e:;
  /* 11ac917e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9181 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac9184 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac9187 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac918a cmp ecx, dword ptr [0x11afadd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11afadd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9190 jb 0x11ac91a1 */
  if (C.cf) goto L_11ac91a1;
  /* 11ac9192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9195 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9198 je 0x11ac919f */
  if (C.zf) goto L_11ac919f;
  /* 11ac919a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac919d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11ac919fu);
L_11ac919f:;
  /* 11ac919f jmp 0x11ac917e */
  goto L_11ac917e;
L_11ac91a1:;
  /* 11ac91a1 push 0x11af6724 */
  push32((uint32_t)(0x11af6724u));
  /* 11ac91a6 push 0x11af651c */
  push32((uint32_t)(0x11af651cu));
  /* 11ac91ab call 0x11ac9240 */
  push32(0x11ac91b0u); f_11ac9240();
  /* 11ac91b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac91b3:;
  /* 11ac91b3 push 0x11af692c */
  push32((uint32_t)(0x11af692cu));
  /* 11ac91b8 push 0x11af6828 */
  push32((uint32_t)(0x11af6828u));
  /* 11ac91bd call 0x11ac9240 */
  push32(0x11ac91c2u); f_11ac9240();
  /* 11ac91c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac91c5 cmp dword ptr [0x11af9308], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9308))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac91cc jne 0x11ac91ee */
  if (!C.zf) goto L_11ac91ee;
  /* 11ac91ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ac91d0 call 0x11acab70 */
  push32(0x11ac91d5u); f_11acab70();
  /* 11ac91d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac91d8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac91db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac91dd je 0x11ac91ee */
  if (C.zf) goto L_11ac91ee;
  /* 11ac91df mov dword ptr [0x11af9308], 1 */
  w32((uint32_t)(0x11af9308), (0x1u));
  /* 11ac91e9 call 0x11acb480 */
  push32(0x11ac91eeu); f_11acb480();
L_11ac91ee:;
  /* 11ac91ee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac91f2 je 0x11ac91fb */
  if (C.zf) goto L_11ac91fb;
  /* 11ac91f4 call 0x11ac9230 */
  push32(0x11ac91f9u); f_11ac9230();
  /* 11ac91f9 jmp 0x11ac920f */
  goto L_11ac920f;
L_11ac91fb:;
  /* 11ac91fb mov dword ptr [0x11af9304], 1 */
  w32((uint32_t)(0x11af9304), (0x1u));
  /* 11ac9205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9208 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9209 call dword ptr [0x11afb3d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3d0))), 0x11ac920fu);
L_11ac920f:;
  /* 11ac920f mov esp, ebp */
  ESP = (EBP);
  /* 11ac9211 pop ebp */
  EBP = (pop32());
  /* 11ac9212 ret  */
  ESPCHK(0x11ac9130u, _esp0);
  ESP += 4; return;
}

/* FUN_10009220 @ 0x11ac9220 (15 bytes, 7 insns) */
void f_11ac9220(void) {
  FTRACE(0x11ac9220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9220 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9221 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9223 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11ac9225 call 0x11acd060 */
  push32(0x11ac922au); f_11acd060();
  /* 11ac922a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac922d pop ebp */
  EBP = (pop32());
  /* 11ac922e ret  */
  ESPCHK(0x11ac9220u, _esp0);
  ESP += 4; return;
}

/* FUN_10009230 @ 0x11ac9230 (15 bytes, 7 insns) */
void f_11ac9230(void) {
  FTRACE(0x11ac9230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9230 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9231 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9233 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11ac9235 call 0x11acd100 */
  push32(0x11ac923au); f_11acd100();
  /* 11ac923a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac923d pop ebp */
  EBP = (pop32());
  /* 11ac923e ret  */
  ESPCHK(0x11ac9230u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11ac9240 (37 bytes, 16 insns) */
void f_11ac9240(void) {
  FTRACE(0x11ac9240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9240 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9241 mov ebp, esp */
  EBP = (ESP);
L_11ac9243:;
  /* 11ac9243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9246 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9249 jae 0x11ac9263 */
  if (!C.cf) goto L_11ac9263;
  /* 11ac924b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac924e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9251 je 0x11ac9258 */
  if (C.zf) goto L_11ac9258;
  /* 11ac9253 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9256 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11ac9258u);
L_11ac9258:;
  /* 11ac9258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac925b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac925e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ac9261 jmp 0x11ac9243 */
  goto L_11ac9243;
L_11ac9263:;
  /* 11ac9263 pop ebp */
  EBP = (pop32());
  /* 11ac9264 ret  */
  ESPCHK(0x11ac9240u, _esp0);
  ESP += 4; return;
}

/* FUN_10009270 @ 0x11ac9270 (804 bytes, 236 insns) */
void f_11ac9270(void) {
  FTRACE(0x11ac9270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9270 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9271 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9273 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac9276 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11ac927b push 0x11af36b4 */
  push32((uint32_t)(0x11af36b4u));
  /* 11ac9280 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9282 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ac9287 call 0x11ac9660 */
  push32(0x11ac928cu); f_11ac9660();
  /* 11ac928c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac928f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11ac9292 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9296 jne 0x11ac92a2 */
  if (!C.zf) goto L_11ac92a2;
  /* 11ac9298 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11ac929a call 0x11ac68f0 */
  push32(0x11ac929fu); f_11ac68f0();
  /* 11ac929f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac92a2:;
  /* 11ac92a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac92a5 mov dword ptr [0x11afac80], eax */
  w32((uint32_t)(0x11afac80), (EAX));
  /* 11ac92aa mov dword ptr [0x11afadbc], 0x20 */
  w32((uint32_t)(0x11afadbc), (0x20u));
  /* 11ac92b4 jmp 0x11ac92bf */
  goto L_11ac92bf;
L_11ac92b6:;
  /* 11ac92b6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac92b9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac92bc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11ac92bf:;
  /* 11ac92bf mov edx, dword ptr [0x11afac80] */
  EDX = (r32((uint32_t)(0x11afac80)));
  /* 11ac92c5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac92cb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac92ce jae 0x11ac92f3 */
  if (!C.cf) goto L_11ac92f3;
  /* 11ac92d0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac92d3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ac92d7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac92da mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ac92e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac92e3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11ac92e7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac92ea mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11ac92f1 jmp 0x11ac92b6 */
  goto L_11ac92b6;
L_11ac92f3:;
  /* 11ac92f3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11ac92f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac92f7 call dword ptr [0x11afb3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e0))), 0x11ac92fdu);
  /* 11ac92fd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11ac9300 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ac9306 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac9308 je 0x11ac9495 */
  if (C.zf) goto L_11ac9495;
  /* 11ac930e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9312 je 0x11ac9495 */
  if (C.zf) goto L_11ac9495;
  /* 11ac9318 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ac931b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ac931d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11ac9320 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ac9323 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9326 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac9329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac932c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac932f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11ac9332 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9339 jge 0x11ac9343 */
  if ((C.sf==C.of)) goto L_11ac9343;
  /* 11ac933b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11ac933e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11ac9341 jmp 0x11ac934a */
  goto L_11ac934a;
L_11ac9343:;
  /* 11ac9343 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11ac934a:;
  /* 11ac934a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11ac934d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11ac9350 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11ac9357 jmp 0x11ac9362 */
  goto L_11ac9362;
L_11ac9359:;
  /* 11ac9359 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11ac935c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac935f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11ac9362:;
  /* 11ac9362 mov ecx, dword ptr [0x11afadbc] */
  ECX = (r32((uint32_t)(0x11afadbc)));
  /* 11ac9368 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac936b jge 0x11ac9402 */
  if ((C.sf==C.of)) goto L_11ac9402;
  /* 11ac9371 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11ac9376 push 0x11af36b4 */
  push32((uint32_t)(0x11af36b4u));
  /* 11ac937b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac937d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11ac9382 call 0x11ac9660 */
  push32(0x11ac9387u); f_11ac9660();
  /* 11ac9387 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac938a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11ac938d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9391 jne 0x11ac939e */
  if (!C.zf) goto L_11ac939e;
  /* 11ac9393 mov edx, dword ptr [0x11afadbc] */
  EDX = (r32((uint32_t)(0x11afadbc)));
  /* 11ac9399 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11ac939c jmp 0x11ac9402 */
  goto L_11ac9402;
L_11ac939e:;
  /* 11ac939e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11ac93a1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac93a4 mov dword ptr [eax*4 + 0x11afac80], ecx */
  w32((uint32_t)(EAX*4 + 0x11afac80), (ECX));
  /* 11ac93ab mov edx, dword ptr [0x11afadbc] */
  EDX = (r32((uint32_t)(0x11afadbc)));
  /* 11ac93b1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac93b4 mov dword ptr [0x11afadbc], edx */
  w32((uint32_t)(0x11afadbc), (EDX));
  /* 11ac93ba jmp 0x11ac93c5 */
  goto L_11ac93c5;
L_11ac93bc:;
  /* 11ac93bc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac93bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac93c2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11ac93c5:;
  /* 11ac93c5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11ac93c8 mov edx, dword ptr [ecx*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11ac93cf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac93d5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac93d8 jae 0x11ac93fd */
  if (!C.cf) goto L_11ac93fd;
  /* 11ac93da mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac93dd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ac93e1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac93e4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11ac93ea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac93ed mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11ac93f1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac93f4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11ac93fb jmp 0x11ac93bc */
  goto L_11ac93bc;
L_11ac93fd:;
  /* 11ac93fd jmp 0x11ac9359 */
  goto L_11ac9359;
L_11ac9402:;
  /* 11ac9402 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ac9409 jmp 0x11ac9426 */
  goto L_11ac9426;
L_11ac940b:;
  /* 11ac940b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ac940e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9411 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11ac9414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9417 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac941a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ac941d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ac9420 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9423 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11ac9426:;
  /* 11ac9426 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ac9429 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac942c jge 0x11ac9495 */
  if ((C.sf==C.of)) goto L_11ac9495;
  /* 11ac942e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ac9431 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9434 je 0x11ac9490 */
  if (C.zf) goto L_11ac9490;
  /* 11ac9436 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9439 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ac943c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ac943f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac9441 je 0x11ac9490 */
  if (C.zf) goto L_11ac9490;
  /* 11ac9443 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9446 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ac9449 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac944c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac944e jne 0x11ac9460 */
  if (!C.zf) goto L_11ac9460;
  /* 11ac9450 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ac9453 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ac9455 push edx */
  push32((uint32_t)(EDX));
  /* 11ac9456 call dword ptr [0x11afb3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3dc))), 0x11ac945cu);
  /* 11ac945c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac945e je 0x11ac9490 */
  if (C.zf) goto L_11ac9490;
L_11ac9460:;
  /* 11ac9460 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ac9463 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ac9466 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ac9469 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac946c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ac946f mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11ac9476 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9478 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11ac947b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac947e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11ac9481 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ac9483 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ac9485 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac9488 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac948b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ac948d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11ac9490:;
  /* 11ac9490 jmp 0x11ac940b */
  goto L_11ac940b;
L_11ac9495:;
  /* 11ac9495 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11ac949c jmp 0x11ac94a7 */
  goto L_11ac94a7;
L_11ac949e:;
  /* 11ac949e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ac94a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac94a4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11ac94a7:;
  /* 11ac94a7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac94ab jge 0x11ac9584 */
  if ((C.sf==C.of)) goto L_11ac9584;
  /* 11ac94b1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ac94b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ac94b7 mov edx, dword ptr [0x11afac80] */
  EDX = (r32((uint32_t)(0x11afac80)));
  /* 11ac94bd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac94bf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11ac94c2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac94c5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac94c8 jne 0x11ac9570 */
  if (!C.zf) goto L_11ac9570;
  /* 11ac94ce mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac94d1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11ac94d5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac94d9 jne 0x11ac94e4 */
  if (!C.zf) goto L_11ac94e4;
  /* 11ac94db mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11ac94e2 jmp 0x11ac94f4 */
  goto L_11ac94f4;
L_11ac94e4:;
  /* 11ac94e4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11ac94e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac94ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ac94ec sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac94ee add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac94f1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11ac94f4:;
  /* 11ac94f4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ac94f7 push eax */
  push32((uint32_t)(EAX));
  /* 11ac94f8 call dword ptr [0x11afb38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb38c))), 0x11ac94feu);
  /* 11ac94fe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11ac9501 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9505 je 0x11ac955f */
  if (C.zf) goto L_11ac955f;
  /* 11ac9507 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ac950a push ecx */
  push32((uint32_t)(ECX));
  /* 11ac950b call dword ptr [0x11afb3dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3dc))), 0x11ac9511u);
  /* 11ac9511 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11ac9514 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9518 je 0x11ac955f */
  if (C.zf) goto L_11ac955f;
  /* 11ac951a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac951d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11ac9520 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ac9522 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11ac9525 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac952b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac952e jne 0x11ac9540 */
  if (!C.zf) goto L_11ac9540;
  /* 11ac9530 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac9533 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ac9536 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11ac9538 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac953b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11ac953e jmp 0x11ac955d */
  goto L_11ac955d;
L_11ac9540:;
  /* 11ac9540 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11ac9543 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ac9549 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac954c jne 0x11ac955d */
  if (!C.zf) goto L_11ac955d;
  /* 11ac954e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac9551 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ac9554 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11ac9557 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac955a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11ac955d:;
  /* 11ac955d jmp 0x11ac956e */
  goto L_11ac956e;
L_11ac955f:;
  /* 11ac955f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac9562 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ac9565 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11ac9568 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac956b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11ac956e:;
  /* 11ac956e jmp 0x11ac957f */
  goto L_11ac957f;
L_11ac9570:;
  /* 11ac9570 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac9573 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ac9576 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11ac9579 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11ac957c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11ac957f:;
  /* 11ac957f jmp 0x11ac949e */
  goto L_11ac949e;
L_11ac9584:;
  /* 11ac9584 mov eax, dword ptr [0x11afadbc] */
  EAX = (r32((uint32_t)(0x11afadbc)));
  /* 11ac9589 push eax */
  push32((uint32_t)(EAX));
  /* 11ac958a call dword ptr [0x11afb3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3d8))), 0x11ac9590u);
  /* 11ac9590 mov esp, ebp */
  ESP = (EBP);
  /* 11ac9592 pop ebp */
  EBP = (pop32());
  /* 11ac9593 ret  */
  ESPCHK(0x11ac9270u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11ac95a0 (155 bytes, 45 insns) */
void f_11ac95a0(void) {
  FTRACE(0x11ac95a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac95a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac95a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac95a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac95a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ac95ad jmp 0x11ac95b8 */
  goto L_11ac95b8;
L_11ac95af:;
  /* 11ac95af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac95b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac95b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ac95b8:;
  /* 11ac95b8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac95bc jge 0x11ac9637 */
  if ((C.sf==C.of)) goto L_11ac9637;
  /* 11ac95be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac95c1 cmp dword ptr [ecx*4 + 0x11afac80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11afac80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac95c9 je 0x11ac9632 */
  if (C.zf) goto L_11ac9632;
  /* 11ac95cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac95ce mov eax, dword ptr [edx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11afac80)));
  /* 11ac95d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac95d8 jmp 0x11ac95e3 */
  goto L_11ac95e3;
L_11ac95da:;
  /* 11ac95da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac95dd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac95e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ac95e3:;
  /* 11ac95e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac95e6 mov eax, dword ptr [edx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11afac80)));
  /* 11ac95ed add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac95f2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac95f5 jae 0x11ac960f */
  if (!C.cf) goto L_11ac960f;
  /* 11ac95f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac95fa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac95fe je 0x11ac960d */
  if (C.zf) goto L_11ac960d;
  /* 11ac9600 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9603 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9606 push edx */
  push32((uint32_t)(EDX));
  /* 11ac9607 call dword ptr [0x11afb3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e4))), 0x11ac960du);
L_11ac960d:;
  /* 11ac960d jmp 0x11ac95da */
  goto L_11ac95da;
L_11ac960f:;
  /* 11ac960f push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9611 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9614 mov ecx, dword ptr [eax*4 + 0x11afac80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11ac961b push ecx */
  push32((uint32_t)(ECX));
  /* 11ac961c call 0x11aca0f0 */
  push32(0x11ac9621u); f_11aca0f0();
  /* 11ac9621 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9624 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9627 mov dword ptr [edx*4 + 0x11afac80], 0 */
  w32((uint32_t)(EDX*4 + 0x11afac80), (0x0u));
L_11ac9632:;
  /* 11ac9632 jmp 0x11ac95af */
  goto L_11ac95af;
L_11ac9637:;
  /* 11ac9637 mov esp, ebp */
  ESP = (EBP);
  /* 11ac9639 pop ebp */
  EBP = (pop32());
  /* 11ac963a ret  */
  ESPCHK(0x11ac95a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009640 @ 0x11ac9640 (29 bytes, 13 insns) */
void f_11ac9640(void) {
  FTRACE(0x11ac9640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9640 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9641 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9643 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9645 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9647 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9649 mov eax, dword ptr [0x11af94b4] */
  EAX = (r32((uint32_t)(0x11af94b4)));
  /* 11ac964e push eax */
  push32((uint32_t)(EAX));
  /* 11ac964f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9652 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9653 call 0x11ac96b0 */
  push32(0x11ac9658u); f_11ac96b0();
  /* 11ac9658 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac965b pop ebp */
  EBP = (pop32());
  /* 11ac965c ret  */
  ESPCHK(0x11ac9640u, _esp0);
  ESP += 4; return;
}

/* FUN_10009660 @ 0x11ac9660 (35 bytes, 16 insns) */
void f_11ac9660(void) {
  FTRACE(0x11ac9660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9660 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9661 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9663 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac9666 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9667 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac966a push ecx */
  push32((uint32_t)(ECX));
  /* 11ac966b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac966e push edx */
  push32((uint32_t)(EDX));
  /* 11ac966f mov eax, dword ptr [0x11af94b4] */
  EAX = (r32((uint32_t)(0x11af94b4)));
  /* 11ac9674 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9675 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9678 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9679 call 0x11ac96b0 */
  push32(0x11ac967eu); f_11ac96b0();
  /* 11ac967e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9681 pop ebp */
  EBP = (pop32());
  /* 11ac9682 ret  */
  ESPCHK(0x11ac9660u, _esp0);
  ESP += 4; return;
}

/* FUN_10009690 @ 0x11ac9690 (27 bytes, 13 insns) */
void f_11ac9690(void) {
  FTRACE(0x11ac9690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9690 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9691 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9693 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9695 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9697 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9699 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac969c push eax */
  push32((uint32_t)(EAX));
  /* 11ac969d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac96a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac96a1 call 0x11ac96b0 */
  push32(0x11ac96a6u); f_11ac96b0();
  /* 11ac96a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac96a9 pop ebp */
  EBP = (pop32());
  /* 11ac96aa ret  */
  ESPCHK(0x11ac9690u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x11ac96b0 (94 bytes, 38 insns) */
void f_11ac96b0(void) {
  FTRACE(0x11ac96b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac96b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac96b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac96b3 push ecx */
  push32((uint32_t)(ECX));
L_11ac96b4:;
  /* 11ac96b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ac96b6 call 0x11acd060 */
  push32(0x11ac96bbu); f_11acd060();
  /* 11ac96bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac96be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac96c1 push eax */
  push32((uint32_t)(EAX));
  /* 11ac96c2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac96c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac96c6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac96c9 push edx */
  push32((uint32_t)(EDX));
  /* 11ac96ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac96cd push eax */
  push32((uint32_t)(EAX));
  /* 11ac96ce call 0x11ac9730 */
  push32(0x11ac96d3u); f_11ac9730();
  /* 11ac96d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac96d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac96d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ac96db call 0x11acd100 */
  push32(0x11ac96e0u); f_11acd100();
  /* 11ac96e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac96e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac96e7 jne 0x11ac96ef */
  if (!C.zf) goto L_11ac96ef;
  /* 11ac96e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac96ed jne 0x11ac96f4 */
  if (!C.zf) goto L_11ac96f4;
L_11ac96ef:;
  /* 11ac96ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac96f2 jmp 0x11ac970a */
  goto L_11ac970a;
L_11ac96f4:;
  /* 11ac96f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac96f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac96f8 call 0x11acf490 */
  push32(0x11ac96fdu); f_11acf490();
  /* 11ac96fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9700 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac9702 jne 0x11ac9708 */
  if (!C.zf) goto L_11ac9708;
  /* 11ac9704 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9706 jmp 0x11ac970a */
  goto L_11ac970a;
L_11ac9708:;
  /* 11ac9708 jmp 0x11ac96b4 */
  goto L_11ac96b4;
L_11ac970a:;
  /* 11ac970a mov esp, ebp */
  ESP = (EBP);
  /* 11ac970c pop ebp */
  EBP = (pop32());
  /* 11ac970d ret  */
  ESPCHK(0x11ac96b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009710 @ 0x11ac9710 (23 bytes, 11 insns) */
void f_11ac9710(void) {
  FTRACE(0x11ac9710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9710 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9711 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9713 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9715 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9717 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac971c push eax */
  push32((uint32_t)(EAX));
  /* 11ac971d call 0x11ac9730 */
  push32(0x11ac9722u); f_11ac9730();
  /* 11ac9722 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9725 pop ebp */
  EBP = (pop32());
  /* 11ac9726 ret  */
  ESPCHK(0x11ac9710u, _esp0);
  ESP += 4; return;
}

/* FUN_10009730 @ 0x11ac9730 (787 bytes, 254 insns) */
void f_11ac9730(void) {
  FTRACE(0x11ac9730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9730 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9731 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9733 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac9736 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac9737 push esi */
  push32((uint32_t)(ESI));
  /* 11ac9738 push edi */
  push32((uint32_t)(EDI));
  /* 11ac9739 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ac9740 mov eax, dword ptr [0x11af6b34] */
  EAX = (r32((uint32_t)(0x11af6b34)));
  /* 11ac9745 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac974a je 0x11ac977c */
  if (C.zf) goto L_11ac977c;
L_11ac974c:;
  /* 11ac974c call 0x11aca800 */
  push32(0x11ac9751u); f_11aca800();
  /* 11ac9751 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac9753 jne 0x11ac9776 */
  if (!C.zf) goto L_11ac9776;
  /* 11ac9755 push 0x11af37a8 */
  push32((uint32_t)(0x11af37a8u));
  /* 11ac975a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac975c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11ac9761 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11ac9766 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9768 call 0x11ac6a40 */
  push32(0x11ac976du); f_11ac6a40();
  /* 11ac976d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9770 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9773 jne 0x11ac9776 */
  if (!C.zf) goto L_11ac9776;
  /* 11ac9775 int3  */
  x86_unimpl("int3 @ 0x11ac9775");
L_11ac9776:;
  /* 11ac9776 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9778 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac977a jne 0x11ac974c */
  if (!C.zf) goto L_11ac974c;
L_11ac977c:;
  /* 11ac977c mov edx, dword ptr [0x11af6b38] */
  EDX = (r32((uint32_t)(0x11af6b38)));
  /* 11ac9782 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ac9785 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9788 cmp eax, dword ptr [0x11af6b3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af6b3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac978e jne 0x11ac9791 */
  if (!C.zf) goto L_11ac9791;
  /* 11ac9790 int3  */
  x86_unimpl("int3 @ 0x11ac9790");
L_11ac9791:;
  /* 11ac9791 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac9794 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9795 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9798 push edx */
  push32((uint32_t)(EDX));
  /* 11ac9799 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac979c push eax */
  push32((uint32_t)(EAX));
  /* 11ac979d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac97a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac97a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac97a4 push edx */
  push32((uint32_t)(EDX));
  /* 11ac97a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac97a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac97a9 call dword ptr [0x11af7210] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af7210))), 0x11ac97afu);
  /* 11ac97af add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac97b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac97b4 jne 0x11ac9814 */
  if (!C.zf) goto L_11ac9814;
  /* 11ac97b6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac97ba je 0x11ac97e7 */
  if (C.zf) goto L_11ac97e7;
L_11ac97bc:;
  /* 11ac97bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac97bf push eax */
  push32((uint32_t)(EAX));
  /* 11ac97c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac97c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac97c4 push 0x11af3764 */
  push32((uint32_t)(0x11af3764u));
  /* 11ac97c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac97cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac97cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac97cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac97d1 call 0x11ac6a40 */
  push32(0x11ac97d6u); f_11ac6a40();
  /* 11ac97d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac97d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac97dc jne 0x11ac97df */
  if (!C.zf) goto L_11ac97df;
  /* 11ac97de int3  */
  x86_unimpl("int3 @ 0x11ac97de");
L_11ac97df:;
  /* 11ac97df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac97e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac97e3 jne 0x11ac97bc */
  if (!C.zf) goto L_11ac97bc;
  /* 11ac97e5 jmp 0x11ac980d */
  goto L_11ac980d;
L_11ac97e7:;
  /* 11ac97e7 push 0x11af3740 */
  push32((uint32_t)(0x11af3740u));
  /* 11ac97ec push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11ac97f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac97f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac97f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac97f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac97f9 call 0x11ac6a40 */
  push32(0x11ac97feu); f_11ac6a40();
  /* 11ac97fe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9801 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9804 jne 0x11ac9807 */
  if (!C.zf) goto L_11ac9807;
  /* 11ac9806 int3  */
  x86_unimpl("int3 @ 0x11ac9806");
L_11ac9807:;
  /* 11ac9807 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac980b jne 0x11ac97e7 */
  if (!C.zf) goto L_11ac97e7;
L_11ac980d:;
  /* 11ac980d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac980f jmp 0x11ac9a3c */
  goto L_11ac9a3c;
L_11ac9814:;
  /* 11ac9814 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9817 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac981d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9820 je 0x11ac9836 */
  if (C.zf) goto L_11ac9836;
  /* 11ac9822 mov edx, dword ptr [0x11af6b34] */
  EDX = (r32((uint32_t)(0x11af6b34)));
  /* 11ac9828 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ac982b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac982d jne 0x11ac9836 */
  if (!C.zf) goto L_11ac9836;
  /* 11ac982f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11ac9836:;
  /* 11ac9836 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac983a ja 0x11ac9847 */
  if ((!C.cf&&!C.zf)) goto L_11ac9847;
  /* 11ac983c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac983f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9842 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9845 jbe 0x11ac9873 */
  if ((C.cf||C.zf)) goto L_11ac9873;
L_11ac9847:;
  /* 11ac9847 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac984a push ecx */
  push32((uint32_t)(ECX));
  /* 11ac984b push 0x11af3718 */
  push32((uint32_t)(0x11af3718u));
  /* 11ac9850 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9852 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9856 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9858 call 0x11ac6a40 */
  push32(0x11ac985du); f_11ac6a40();
  /* 11ac985d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9860 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9863 jne 0x11ac9866 */
  if (!C.zf) goto L_11ac9866;
  /* 11ac9865 int3  */
  x86_unimpl("int3 @ 0x11ac9865");
L_11ac9866:;
  /* 11ac9866 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac9868 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac986a jne 0x11ac9847 */
  if (!C.zf) goto L_11ac9847;
  /* 11ac986c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac986e jmp 0x11ac9a3c */
  goto L_11ac9a3c;
L_11ac9873:;
  /* 11ac9873 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9876 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac987b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac987e je 0x11ac98c0 */
  if (C.zf) goto L_11ac98c0;
  /* 11ac9880 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9884 je 0x11ac98c0 */
  if (C.zf) goto L_11ac98c0;
  /* 11ac9886 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9889 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac988f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9892 je 0x11ac98c0 */
  if (C.zf) goto L_11ac98c0;
  /* 11ac9894 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9898 je 0x11ac98c0 */
  if (C.zf) goto L_11ac98c0;
L_11ac989a:;
  /* 11ac989a push 0x11af36e4 */
  push32((uint32_t)(0x11af36e4u));
  /* 11ac989f push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11ac98a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac98a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac98a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac98aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac98ac call 0x11ac6a40 */
  push32(0x11ac98b1u); f_11ac6a40();
  /* 11ac98b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac98b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac98b7 jne 0x11ac98ba */
  if (!C.zf) goto L_11ac98ba;
  /* 11ac98b9 int3  */
  x86_unimpl("int3 @ 0x11ac98b9");
L_11ac98ba:;
  /* 11ac98ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac98bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac98be jne 0x11ac989a */
  if (!C.zf) goto L_11ac989a;
L_11ac98c0:;
  /* 11ac98c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac98c3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac98c6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ac98c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac98cc push ecx */
  push32((uint32_t)(ECX));
  /* 11ac98cd call 0x11acf540 */
  push32(0x11ac98d2u); f_11acf540();
  /* 11ac98d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac98d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac98d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac98dc jne 0x11ac98e5 */
  if (!C.zf) goto L_11ac98e5;
  /* 11ac98de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac98e0 jmp 0x11ac9a3c */
  goto L_11ac9a3c;
L_11ac98e5:;
  /* 11ac98e5 mov edx, dword ptr [0x11af6b38] */
  EDX = (r32((uint32_t)(0x11af6b38)));
  /* 11ac98eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac98ee mov dword ptr [0x11af6b38], edx */
  w32((uint32_t)(0x11af6b38), (EDX));
  /* 11ac98f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac98f8 je 0x11ac9943 */
  if (C.zf) goto L_11ac9943;
  /* 11ac98fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac98fd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ac9903 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9906 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ac990d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9910 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11ac9917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac991a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11ac9921 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9927 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11ac992a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac992d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11ac9934 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9937 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11ac993e jmp 0x11ac99e3 */
  goto L_11ac99e3;
L_11ac9943:;
  /* 11ac9943 mov edx, dword ptr [0x11af9310] */
  EDX = (r32((uint32_t)(0x11af9310)));
  /* 11ac9949 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac994c mov dword ptr [0x11af9310], edx */
  w32((uint32_t)(0x11af9310), (EDX));
  /* 11ac9952 mov eax, dword ptr [0x11af9318] */
  EAX = (r32((uint32_t)(0x11af9318)));
  /* 11ac9957 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac995a mov dword ptr [0x11af9318], eax */
  w32((uint32_t)(0x11af9318), (EAX));
  /* 11ac995f mov ecx, dword ptr [0x11af9318] */
  ECX = (r32((uint32_t)(0x11af9318)));
  /* 11ac9965 cmp ecx, dword ptr [0x11af931c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af931c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac996b jbe 0x11ac9979 */
  if ((C.cf||C.zf)) goto L_11ac9979;
  /* 11ac996d mov edx, dword ptr [0x11af9318] */
  EDX = (r32((uint32_t)(0x11af9318)));
  /* 11ac9973 mov dword ptr [0x11af931c], edx */
  w32((uint32_t)(0x11af931c), (EDX));
L_11ac9979:;
  /* 11ac9979 cmp dword ptr [0x11af9314], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9314))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9980 je 0x11ac998f */
  if (C.zf) goto L_11ac998f;
  /* 11ac9982 mov eax, dword ptr [0x11af9314] */
  EAX = (r32((uint32_t)(0x11af9314)));
  /* 11ac9987 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac998a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ac998d jmp 0x11ac9998 */
  goto L_11ac9998;
L_11ac998f:;
  /* 11ac998f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9992 mov dword ptr [0x11af930c], edx */
  w32((uint32_t)(0x11af930c), (EDX));
L_11ac9998:;
  /* 11ac9998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac999b mov ecx, dword ptr [0x11af9314] */
  ECX = (r32((uint32_t)(0x11af9314)));
  /* 11ac99a1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ac99a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac99a6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11ac99ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac99b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac99b3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ac99b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac99b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac99bc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11ac99bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac99c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac99c5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11ac99c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac99cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac99ce mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11ac99d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac99d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac99d7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11ac99da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac99dd mov dword ptr [0x11af9314], ecx */
  w32((uint32_t)(0x11af9314), (ECX));
L_11ac99e3:;
  /* 11ac99e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ac99e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac99e7 mov dl, byte ptr [0x11af6b40] */
  DL = (r8((uint32_t)(0x11af6b40)));
  /* 11ac99ed push edx */
  push32((uint32_t)(EDX));
  /* 11ac99ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac99f1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac99f4 push eax */
  push32((uint32_t)(EAX));
  /* 11ac99f5 call 0x11acef20 */
  push32(0x11ac99fau); f_11acef20();
  /* 11ac99fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac99fd push 4 */
  push32((uint32_t)(0x4u));
  /* 11ac99ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9a01 mov cl, byte ptr [0x11af6b40] */
  CL = (r8((uint32_t)(0x11af6b40)));
  /* 11ac9a07 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9a08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9a0e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11ac9a12 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9a13 call 0x11acef20 */
  push32(0x11ac9a18u); f_11acef20();
  /* 11ac9a18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9a1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9a1e push edx */
  push32((uint32_t)(EDX));
  /* 11ac9a1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9a21 mov al, byte ptr [0x11af6b42] */
  AL = (r8((uint32_t)(0x11af6b42)));
  /* 11ac9a26 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9a27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9a2a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9a2d push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9a2e call 0x11acef20 */
  push32(0x11ac9a33u); f_11acef20();
  /* 11ac9a33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9a36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9a39 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ac9a3c:;
  /* 11ac9a3c pop edi */
  EDI = (pop32());
  /* 11ac9a3d pop esi */
  ESI = (pop32());
  /* 11ac9a3e pop ebx */
  EBX = (pop32());
  /* 11ac9a3f mov esp, ebp */
  ESP = (EBP);
  /* 11ac9a41 pop ebp */
  EBP = (pop32());
  /* 11ac9a42 ret  */
  ESPCHK(0x11ac9730u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a50 @ 0x11ac9a50 (27 bytes, 13 insns) */
void f_11ac9a50(void) {
  FTRACE(0x11ac9a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9a51 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9a57 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9a59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9a5c push eax */
  push32((uint32_t)(EAX));
  /* 11ac9a5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9a60 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9a61 call 0x11ac9a70 */
  push32(0x11ac9a66u); f_11ac9a70();
  /* 11ac9a66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9a69 pop ebp */
  EBP = (pop32());
  /* 11ac9a6a ret  */
  ESPCHK(0x11ac9a50u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11ac9a70 (96 bytes, 37 insns) */
void f_11ac9a70(void) {
  FTRACE(0x11ac9a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9a71 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac9a76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9a79 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ac9a7d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ac9a80 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac9a83 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9a84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac9a87 push edx */
  push32((uint32_t)(EDX));
  /* 11ac9a88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9a8b push eax */
  push32((uint32_t)(EAX));
  /* 11ac9a8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9a8f push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9a90 call 0x11ac9660 */
  push32(0x11ac9a95u); f_11ac9660();
  /* 11ac9a95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9a98 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ac9a9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9a9f je 0x11ac9ac9 */
  if (C.zf) goto L_11ac9ac9;
  /* 11ac9aa1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9aa4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ac9aa7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9aaa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9aad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ac9ab0:;
  /* 11ac9ab0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9ab3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9ab6 jae 0x11ac9ac9 */
  if (!C.cf) goto L_11ac9ac9;
  /* 11ac9ab8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9abb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11ac9abe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9ac1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9ac4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ac9ac7 jmp 0x11ac9ab0 */
  goto L_11ac9ab0;
L_11ac9ac9:;
  /* 11ac9ac9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9acc mov esp, ebp */
  ESP = (EBP);
  /* 11ac9ace pop ebp */
  EBP = (pop32());
  /* 11ac9acf ret  */
  ESPCHK(0x11ac9a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad0 @ 0x11ac9ad0 (27 bytes, 13 insns) */
void f_11ac9ad0(void) {
  FTRACE(0x11ac9ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9ad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9adc push eax */
  push32((uint32_t)(EAX));
  /* 11ac9add mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9ae1 call 0x11ac9af0 */
  push32(0x11ac9ae6u); f_11ac9af0();
  /* 11ac9ae6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9ae9 pop ebp */
  EBP = (pop32());
  /* 11ac9aea ret  */
  ESPCHK(0x11ac9ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009af0 @ 0x11ac9af0 (64 bytes, 27 insns) */
void f_11ac9af0(void) {
  FTRACE(0x11ac9af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9af1 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9af4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ac9af6 call 0x11acd060 */
  push32(0x11ac9afbu); f_11acd060();
  /* 11ac9afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9afe push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9b00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac9b03 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9b04 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac9b07 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9b08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9b0b push edx */
  push32((uint32_t)(EDX));
  /* 11ac9b0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9b0f push eax */
  push32((uint32_t)(EAX));
  /* 11ac9b10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9b14 call 0x11ac9b30 */
  push32(0x11ac9b19u); f_11ac9b30();
  /* 11ac9b19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9b1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ac9b1f push 9 */
  push32((uint32_t)(0x9u));
  /* 11ac9b21 call 0x11acd100 */
  push32(0x11ac9b26u); f_11acd100();
  /* 11ac9b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9b29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9b2c mov esp, ebp */
  ESP = (EBP);
  /* 11ac9b2e pop ebp */
  EBP = (pop32());
  /* 11ac9b2f ret  */
  ESPCHK(0x11ac9af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b30 @ 0x11ac9b30 (1297 bytes, 431 insns) */
void f_11ac9b30(void) {
  FTRACE(0x11ac9b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ac9b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ac9b31 mov ebp, esp */
  EBP = (ESP);
  /* 11ac9b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac9b36 push ebx */
  push32((uint32_t)(EBX));
  /* 11ac9b37 push esi */
  push32((uint32_t)(ESI));
  /* 11ac9b38 push edi */
  push32((uint32_t)(EDI));
  /* 11ac9b39 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ac9b40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9b44 jne 0x11ac9b63 */
  if (!C.zf) goto L_11ac9b63;
  /* 11ac9b46 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac9b49 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9b4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac9b4d push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9b4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9b51 push edx */
  push32((uint32_t)(EDX));
  /* 11ac9b52 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9b55 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9b56 call 0x11ac9660 */
  push32(0x11ac9b5bu); f_11ac9660();
  /* 11ac9b5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9b5e jmp 0x11aca03a */
  goto L_11aca03a;
L_11ac9b63:;
  /* 11ac9b63 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9b67 je 0x11ac9b86 */
  if (C.zf) goto L_11ac9b86;
  /* 11ac9b69 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9b6d jne 0x11ac9b86 */
  if (!C.zf) goto L_11ac9b86;
  /* 11ac9b6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9b72 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9b73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9b76 push edx */
  push32((uint32_t)(EDX));
  /* 11ac9b77 call 0x11aca0f0 */
  push32(0x11ac9b7cu); f_11aca0f0();
  /* 11ac9b7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9b7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9b81 jmp 0x11aca03a */
  goto L_11aca03a;
L_11ac9b86:;
  /* 11ac9b86 mov eax, dword ptr [0x11af6b34] */
  EAX = (r32((uint32_t)(0x11af6b34)));
  /* 11ac9b8b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9b8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac9b90 je 0x11ac9bc2 */
  if (C.zf) goto L_11ac9bc2;
L_11ac9b92:;
  /* 11ac9b92 call 0x11aca800 */
  push32(0x11ac9b97u); f_11aca800();
  /* 11ac9b97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac9b99 jne 0x11ac9bbc */
  if (!C.zf) goto L_11ac9bbc;
  /* 11ac9b9b push 0x11af37a8 */
  push32((uint32_t)(0x11af37a8u));
  /* 11ac9ba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9ba2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11ac9ba7 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11ac9bac push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9bae call 0x11ac6a40 */
  push32(0x11ac9bb3u); f_11ac6a40();
  /* 11ac9bb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9bb6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9bb9 jne 0x11ac9bbc */
  if (!C.zf) goto L_11ac9bbc;
  /* 11ac9bbb int3  */
  x86_unimpl("int3 @ 0x11ac9bbb");
L_11ac9bbc:;
  /* 11ac9bbc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9bbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac9bc0 jne 0x11ac9b92 */
  if (!C.zf) goto L_11ac9b92;
L_11ac9bc2:;
  /* 11ac9bc2 mov edx, dword ptr [0x11af6b38] */
  EDX = (r32((uint32_t)(0x11af6b38)));
  /* 11ac9bc8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ac9bcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac9bce cmp eax, dword ptr [0x11af6b3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af6b3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9bd4 jne 0x11ac9bd7 */
  if (!C.zf) goto L_11ac9bd7;
  /* 11ac9bd6 int3  */
  x86_unimpl("int3 @ 0x11ac9bd6");
L_11ac9bd7:;
  /* 11ac9bd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac9bda push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9bdb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac9bde push edx */
  push32((uint32_t)(EDX));
  /* 11ac9bdf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac9be2 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9be3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9be6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9be7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9bea push edx */
  push32((uint32_t)(EDX));
  /* 11ac9beb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9bee push eax */
  push32((uint32_t)(EAX));
  /* 11ac9bef push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9bf1 call dword ptr [0x11af7210] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af7210))), 0x11ac9bf7u);
  /* 11ac9bf7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9bfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac9bfc jne 0x11ac9c5c */
  if (!C.zf) goto L_11ac9c5c;
  /* 11ac9bfe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9c02 je 0x11ac9c2f */
  if (C.zf) goto L_11ac9c2f;
L_11ac9c04:;
  /* 11ac9c04 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac9c07 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9c08 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac9c0b push edx */
  push32((uint32_t)(EDX));
  /* 11ac9c0c push 0x11af3924 */
  push32((uint32_t)(0x11af3924u));
  /* 11ac9c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c19 call 0x11ac6a40 */
  push32(0x11ac9c1eu); f_11ac6a40();
  /* 11ac9c1e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9c21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9c24 jne 0x11ac9c27 */
  if (!C.zf) goto L_11ac9c27;
  /* 11ac9c26 int3  */
  x86_unimpl("int3 @ 0x11ac9c26");
L_11ac9c27:;
  /* 11ac9c27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac9c2b jne 0x11ac9c04 */
  if (!C.zf) goto L_11ac9c04;
  /* 11ac9c2d jmp 0x11ac9c55 */
  goto L_11ac9c55;
L_11ac9c2f:;
  /* 11ac9c2f push 0x11af3900 */
  push32((uint32_t)(0x11af3900u));
  /* 11ac9c34 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11ac9c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c41 call 0x11ac6a40 */
  push32(0x11ac9c46u); f_11ac6a40();
  /* 11ac9c46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9c49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9c4c jne 0x11ac9c4f */
  if (!C.zf) goto L_11ac9c4f;
  /* 11ac9c4e int3  */
  x86_unimpl("int3 @ 0x11ac9c4e");
L_11ac9c4f:;
  /* 11ac9c4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9c51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac9c53 jne 0x11ac9c2f */
  if (!C.zf) goto L_11ac9c2f;
L_11ac9c55:;
  /* 11ac9c55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9c57 jmp 0x11aca03a */
  goto L_11aca03a;
L_11ac9c5c:;
  /* 11ac9c5c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9c60 jbe 0x11ac9c8e */
  if ((C.cf||C.zf)) goto L_11ac9c8e;
L_11ac9c62:;
  /* 11ac9c62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9c65 push edx */
  push32((uint32_t)(EDX));
  /* 11ac9c66 push 0x11af38d0 */
  push32((uint32_t)(0x11af38d0u));
  /* 11ac9c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9c71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9c73 call 0x11ac6a40 */
  push32(0x11ac9c78u); f_11ac6a40();
  /* 11ac9c78 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9c7b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9c7e jne 0x11ac9c81 */
  if (!C.zf) goto L_11ac9c81;
  /* 11ac9c80 int3  */
  x86_unimpl("int3 @ 0x11ac9c80");
L_11ac9c81:;
  /* 11ac9c81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac9c85 jne 0x11ac9c62 */
  if (!C.zf) goto L_11ac9c62;
  /* 11ac9c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9c89 jmp 0x11aca03a */
  goto L_11aca03a;
L_11ac9c8e:;
  /* 11ac9c8e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9c92 je 0x11ac9cd6 */
  if (C.zf) goto L_11ac9cd6;
  /* 11ac9c94 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9c97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9c9d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9ca0 je 0x11ac9cd6 */
  if (C.zf) goto L_11ac9cd6;
  /* 11ac9ca2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9ca5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ac9cab cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9cae je 0x11ac9cd6 */
  if (C.zf) goto L_11ac9cd6;
L_11ac9cb0:;
  /* 11ac9cb0 push 0x11af36e4 */
  push32((uint32_t)(0x11af36e4u));
  /* 11ac9cb5 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11ac9cba push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9cbc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9cc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ac9cc2 call 0x11ac6a40 */
  push32(0x11ac9cc7u); f_11ac6a40();
  /* 11ac9cc7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9cca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9ccd jne 0x11ac9cd0 */
  if (!C.zf) goto L_11ac9cd0;
  /* 11ac9ccf int3  */
  x86_unimpl("int3 @ 0x11ac9ccf");
L_11ac9cd0:;
  /* 11ac9cd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9cd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac9cd4 jne 0x11ac9cb0 */
  if (!C.zf) goto L_11ac9cb0;
L_11ac9cd6:;
  /* 11ac9cd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9cda call 0x11acac60 */
  push32(0x11ac9cdfu); f_11acac60();
  /* 11ac9cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ac9ce4 jne 0x11ac9d07 */
  if (!C.zf) goto L_11ac9d07;
  /* 11ac9ce6 push 0x11af38ac */
  push32((uint32_t)(0x11af38acu));
  /* 11ac9ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9ced push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11ac9cf2 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11ac9cf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9cf9 call 0x11ac6a40 */
  push32(0x11ac9cfeu); f_11ac6a40();
  /* 11ac9cfe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9d01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9d04 jne 0x11ac9d07 */
  if (!C.zf) goto L_11ac9d07;
  /* 11ac9d06 int3  */
  x86_unimpl("int3 @ 0x11ac9d06");
L_11ac9d07:;
  /* 11ac9d07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac9d09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac9d0b jne 0x11ac9cd6 */
  if (!C.zf) goto L_11ac9cd6;
  /* 11ac9d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ac9d10 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac9d13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ac9d16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9d19 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9d1d jne 0x11ac9d26 */
  if (!C.zf) goto L_11ac9d26;
  /* 11ac9d1f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11ac9d26:;
  /* 11ac9d26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9d2a je 0x11ac9d6a */
  if (C.zf) goto L_11ac9d6a;
L_11ac9d2c:;
  /* 11ac9d2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9d2f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9d36 jne 0x11ac9d41 */
  if (!C.zf) goto L_11ac9d41;
  /* 11ac9d38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9d3b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9d3f je 0x11ac9d62 */
  if (C.zf) goto L_11ac9d62;
L_11ac9d41:;
  /* 11ac9d41 push 0x11af3864 */
  push32((uint32_t)(0x11af3864u));
  /* 11ac9d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9d48 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11ac9d4d push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11ac9d52 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9d54 call 0x11ac6a40 */
  push32(0x11ac9d59u); f_11ac6a40();
  /* 11ac9d59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9d5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9d5f jne 0x11ac9d62 */
  if (!C.zf) goto L_11ac9d62;
  /* 11ac9d61 int3  */
  x86_unimpl("int3 @ 0x11ac9d61");
L_11ac9d62:;
  /* 11ac9d62 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9d64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac9d66 jne 0x11ac9d2c */
  if (!C.zf) goto L_11ac9d2c;
  /* 11ac9d68 jmp 0x11ac9dce */
  goto L_11ac9dce;
L_11ac9d6a:;
  /* 11ac9d6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9d6d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ac9d70 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9d75 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9d78 jne 0x11ac9d8f */
  if (!C.zf) goto L_11ac9d8f;
  /* 11ac9d7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9d7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9d83 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9d86 jne 0x11ac9d8f */
  if (!C.zf) goto L_11ac9d8f;
  /* 11ac9d88 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11ac9d8f:;
  /* 11ac9d8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9d92 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ac9d95 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9d9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ac9d9d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9da3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9da5 je 0x11ac9dc8 */
  if (C.zf) goto L_11ac9dc8;
  /* 11ac9da7 push 0x11af3828 */
  push32((uint32_t)(0x11af3828u));
  /* 11ac9dac push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9dae push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11ac9db3 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11ac9db8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9dba call 0x11ac6a40 */
  push32(0x11ac9dbfu); f_11ac6a40();
  /* 11ac9dbf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9dc2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9dc5 jne 0x11ac9dc8 */
  if (!C.zf) goto L_11ac9dc8;
  /* 11ac9dc7 int3  */
  x86_unimpl("int3 @ 0x11ac9dc7");
L_11ac9dc8:;
  /* 11ac9dc8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac9dca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac9dcc jne 0x11ac9d8f */
  if (!C.zf) goto L_11ac9d8f;
L_11ac9dce:;
  /* 11ac9dce cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9dd2 je 0x11ac9df9 */
  if (C.zf) goto L_11ac9df9;
  /* 11ac9dd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9dd7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9dda push eax */
  push32((uint32_t)(EAX));
  /* 11ac9ddb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9dde push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9ddf call 0x11acf670 */
  push32(0x11ac9de4u); f_11acf670();
  /* 11ac9de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9de7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ac9dea cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9dee jne 0x11ac9df7 */
  if (!C.zf) goto L_11ac9df7;
  /* 11ac9df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9df2 jmp 0x11aca03a */
  goto L_11aca03a;
L_11ac9df7:;
  /* 11ac9df7 jmp 0x11ac9e1c */
  goto L_11ac9e1c;
L_11ac9df9:;
  /* 11ac9df9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9dfc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9dff push edx */
  push32((uint32_t)(EDX));
  /* 11ac9e00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ac9e03 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9e04 call 0x11acf5c0 */
  push32(0x11ac9e09u); f_11acf5c0();
  /* 11ac9e09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9e0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ac9e0f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9e13 jne 0x11ac9e1c */
  if (!C.zf) goto L_11ac9e1c;
  /* 11ac9e15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9e17 jmp 0x11aca03a */
  goto L_11aca03a;
L_11ac9e1c:;
  /* 11ac9e1c mov ecx, dword ptr [0x11af6b38] */
  ECX = (r32((uint32_t)(0x11af6b38)));
  /* 11ac9e22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9e25 mov dword ptr [0x11af6b38], ecx */
  w32((uint32_t)(0x11af6b38), (ECX));
  /* 11ac9e2b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9e2f jne 0x11ac9e87 */
  if (!C.zf) goto L_11ac9e87;
  /* 11ac9e31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9e34 mov eax, dword ptr [0x11af9310] */
  EAX = (r32((uint32_t)(0x11af9310)));
  /* 11ac9e39 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac9e3c mov dword ptr [0x11af9310], eax */
  w32((uint32_t)(0x11af9310), (EAX));
  /* 11ac9e41 mov ecx, dword ptr [0x11af9310] */
  ECX = (r32((uint32_t)(0x11af9310)));
  /* 11ac9e47 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9e4a mov dword ptr [0x11af9310], ecx */
  w32((uint32_t)(0x11af9310), (ECX));
  /* 11ac9e50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9e53 mov eax, dword ptr [0x11af9318] */
  EAX = (r32((uint32_t)(0x11af9318)));
  /* 11ac9e58 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac9e5b mov dword ptr [0x11af9318], eax */
  w32((uint32_t)(0x11af9318), (EAX));
  /* 11ac9e60 mov ecx, dword ptr [0x11af9318] */
  ECX = (r32((uint32_t)(0x11af9318)));
  /* 11ac9e66 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9e69 mov dword ptr [0x11af9318], ecx */
  w32((uint32_t)(0x11af9318), (ECX));
  /* 11ac9e6f mov edx, dword ptr [0x11af9318] */
  EDX = (r32((uint32_t)(0x11af9318)));
  /* 11ac9e75 cmp edx, dword ptr [0x11af931c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af931c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9e7b jbe 0x11ac9e87 */
  if ((C.cf||C.zf)) goto L_11ac9e87;
  /* 11ac9e7d mov eax, dword ptr [0x11af9318] */
  EAX = (r32((uint32_t)(0x11af9318)));
  /* 11ac9e82 mov dword ptr [0x11af931c], eax */
  w32((uint32_t)(0x11af931c), (EAX));
L_11ac9e87:;
  /* 11ac9e87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9e8a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9e8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ac9e90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9e93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9e96 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9e99 jbe 0x11ac9ebf */
  if ((C.cf||C.zf)) goto L_11ac9ebf;
  /* 11ac9e9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9e9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9ea1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ac9ea4 push edx */
  push32((uint32_t)(EDX));
  /* 11ac9ea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9ea7 mov al, byte ptr [0x11af6b42] */
  AL = (r8((uint32_t)(0x11af6b42)));
  /* 11ac9eac push eax */
  push32((uint32_t)(EAX));
  /* 11ac9ead mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9eb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9eb3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9eb6 push edx */
  push32((uint32_t)(EDX));
  /* 11ac9eb7 call 0x11acef20 */
  push32(0x11ac9ebcu); f_11acef20();
  /* 11ac9ebc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ac9ebf:;
  /* 11ac9ebf push 4 */
  push32((uint32_t)(0x4u));
  /* 11ac9ec1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ac9ec3 mov al, byte ptr [0x11af6b40] */
  AL = (r8((uint32_t)(0x11af6b40)));
  /* 11ac9ec8 push eax */
  push32((uint32_t)(EAX));
  /* 11ac9ec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9ecc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9ecf push ecx */
  push32((uint32_t)(ECX));
  /* 11ac9ed0 call 0x11acef20 */
  push32(0x11ac9ed5u); f_11acef20();
  /* 11ac9ed5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9ed8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9edc jne 0x11ac9ef9 */
  if (!C.zf) goto L_11ac9ef9;
  /* 11ac9ede mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9ee1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ac9ee4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ac9ee7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9eea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ac9eed mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11ac9ef0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9ef3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ac9ef6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11ac9ef9:;
  /* 11ac9ef9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9efc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ac9eff mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11ac9f02:;
  /* 11ac9f02 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9f06 jne 0x11ac9f37 */
  if (!C.zf) goto L_11ac9f37;
  /* 11ac9f08 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9f0c jne 0x11ac9f16 */
  if (!C.zf) goto L_11ac9f16;
  /* 11ac9f0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9f11 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9f14 je 0x11ac9f37 */
  if (C.zf) goto L_11ac9f37;
L_11ac9f16:;
  /* 11ac9f16 push 0x11af37f4 */
  push32((uint32_t)(0x11af37f4u));
  /* 11ac9f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9f1d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11ac9f22 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11ac9f27 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9f29 call 0x11ac6a40 */
  push32(0x11ac9f2eu); f_11ac6a40();
  /* 11ac9f2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9f31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9f34 jne 0x11ac9f37 */
  if (!C.zf) goto L_11ac9f37;
  /* 11ac9f36 int3  */
  x86_unimpl("int3 @ 0x11ac9f36");
L_11ac9f37:;
  /* 11ac9f37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ac9f39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ac9f3b jne 0x11ac9f02 */
  if (!C.zf) goto L_11ac9f02;
  /* 11ac9f3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9f40 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9f43 je 0x11ac9f4b */
  if (C.zf) goto L_11ac9f4b;
  /* 11ac9f45 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9f49 je 0x11ac9f53 */
  if (C.zf) goto L_11ac9f53;
L_11ac9f4b:;
  /* 11ac9f4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ac9f4e jmp 0x11aca03a */
  goto L_11aca03a;
L_11ac9f53:;
  /* 11ac9f53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9f56 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9f59 je 0x11ac9f6b */
  if (C.zf) goto L_11ac9f6b;
  /* 11ac9f5b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9f5e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ac9f60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9f63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ac9f66 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ac9f69 jmp 0x11ac9fa7 */
  goto L_11ac9fa7;
L_11ac9f6b:;
  /* 11ac9f6b mov eax, dword ptr [0x11af930c] */
  EAX = (r32((uint32_t)(0x11af930c)));
  /* 11ac9f70 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9f73 je 0x11ac9f96 */
  if (C.zf) goto L_11ac9f96;
  /* 11ac9f75 push 0x11af37d8 */
  push32((uint32_t)(0x11af37d8u));
  /* 11ac9f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9f7c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11ac9f81 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11ac9f86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9f88 call 0x11ac6a40 */
  push32(0x11ac9f8du); f_11ac6a40();
  /* 11ac9f8d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9f90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9f93 jne 0x11ac9f96 */
  if (!C.zf) goto L_11ac9f96;
  /* 11ac9f95 int3  */
  x86_unimpl("int3 @ 0x11ac9f95");
L_11ac9f96:;
  /* 11ac9f96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9f98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac9f9a jne 0x11ac9f6b */
  if (!C.zf) goto L_11ac9f6b;
  /* 11ac9f9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9f9f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac9fa2 mov dword ptr [0x11af930c], eax */
  w32((uint32_t)(0x11af930c), (EAX));
L_11ac9fa7:;
  /* 11ac9fa7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9faa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9fae je 0x11ac9fbf */
  if (C.zf) goto L_11ac9fbf;
  /* 11ac9fb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9fb3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ac9fb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9fb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ac9fbb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ac9fbd jmp 0x11ac9ffa */
  goto L_11ac9ffa;
L_11ac9fbf:;
  /* 11ac9fbf mov eax, dword ptr [0x11af9314] */
  EAX = (r32((uint32_t)(0x11af9314)));
  /* 11ac9fc4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9fc7 je 0x11ac9fea */
  if (C.zf) goto L_11ac9fea;
  /* 11ac9fc9 push 0x11af37bc */
  push32((uint32_t)(0x11af37bcu));
  /* 11ac9fce push 0 */
  push32((uint32_t)(0x0u));
  /* 11ac9fd0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11ac9fd5 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11ac9fda push 2 */
  push32((uint32_t)(0x2u));
  /* 11ac9fdc call 0x11ac6a40 */
  push32(0x11ac9fe1u); f_11ac6a40();
  /* 11ac9fe1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ac9fe4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ac9fe7 jne 0x11ac9fea */
  if (!C.zf) goto L_11ac9fea;
  /* 11ac9fe9 int3  */
  x86_unimpl("int3 @ 0x11ac9fe9");
L_11ac9fea:;
  /* 11ac9fea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ac9fec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ac9fee jne 0x11ac9fbf */
  if (!C.zf) goto L_11ac9fbf;
  /* 11ac9ff0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ac9ff3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ac9ff5 mov dword ptr [0x11af9314], eax */
  w32((uint32_t)(0x11af9314), (EAX));
L_11ac9ffa:;
  /* 11ac9ffa cmp dword ptr [0x11af9314], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9314))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca001 je 0x11aca011 */
  if (C.zf) goto L_11aca011;
  /* 11aca003 mov ecx, dword ptr [0x11af9314] */
  ECX = (r32((uint32_t)(0x11af9314)));
  /* 11aca009 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11aca00c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11aca00f jmp 0x11aca019 */
  goto L_11aca019;
L_11aca011:;
  /* 11aca011 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11aca014 mov dword ptr [0x11af930c], eax */
  w32((uint32_t)(0x11af930c), (EAX));
L_11aca019:;
  /* 11aca019 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11aca01c mov edx, dword ptr [0x11af9314] */
  EDX = (r32((uint32_t)(0x11af9314)));
  /* 11aca022 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11aca024 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11aca027 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11aca02e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11aca031 mov dword ptr [0x11af9314], ecx */
  w32((uint32_t)(0x11af9314), (ECX));
  /* 11aca037 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11aca03a:;
  /* 11aca03a pop edi */
  EDI = (pop32());
  /* 11aca03b pop esi */
  ESI = (pop32());
  /* 11aca03c pop ebx */
  EBX = (pop32());
  /* 11aca03d mov esp, ebp */
  ESP = (EBP);
  /* 11aca03f pop ebp */
  EBP = (pop32());
  /* 11aca040 ret  */
  ESPCHK(0x11ac9b30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a050 @ 0x11aca050 (27 bytes, 13 insns) */
void f_11aca050(void) {
  FTRACE(0x11aca050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca050 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca051 mov ebp, esp */
  EBP = (ESP);
  /* 11aca053 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca055 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca057 push 1 */
  push32((uint32_t)(0x1u));
  /* 11aca059 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aca05c push eax */
  push32((uint32_t)(EAX));
  /* 11aca05d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca060 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca061 call 0x11aca070 */
  push32(0x11aca066u); f_11aca070();
  /* 11aca066 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca069 pop ebp */
  EBP = (pop32());
  /* 11aca06a ret  */
  ESPCHK(0x11aca050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a070 @ 0x11aca070 (64 bytes, 27 insns) */
void f_11aca070(void) {
  FTRACE(0x11aca070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca070 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca071 mov ebp, esp */
  EBP = (ESP);
  /* 11aca073 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca074 push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca076 call 0x11acd060 */
  push32(0x11aca07bu); f_11acd060();
  /* 11aca07b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca07e push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca080 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11aca083 push eax */
  push32((uint32_t)(EAX));
  /* 11aca084 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11aca087 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca088 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11aca08b push edx */
  push32((uint32_t)(EDX));
  /* 11aca08c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aca08f push eax */
  push32((uint32_t)(EAX));
  /* 11aca090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca093 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca094 call 0x11ac9b30 */
  push32(0x11aca099u); f_11ac9b30();
  /* 11aca099 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca09c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11aca09f push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca0a1 call 0x11acd100 */
  push32(0x11aca0a6u); f_11acd100();
  /* 11aca0a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca0a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca0ac mov esp, ebp */
  ESP = (EBP);
  /* 11aca0ae pop ebp */
  EBP = (pop32());
  /* 11aca0af ret  */
  ESPCHK(0x11aca070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b0 @ 0x11aca0b0 (19 bytes, 9 insns) */
void f_11aca0b0(void) {
  FTRACE(0x11aca0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca0b1 mov ebp, esp */
  EBP = (ESP);
  /* 11aca0b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11aca0b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca0b8 push eax */
  push32((uint32_t)(EAX));
  /* 11aca0b9 call 0x11aca0f0 */
  push32(0x11aca0beu); f_11aca0f0();
  /* 11aca0be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca0c1 pop ebp */
  EBP = (pop32());
  /* 11aca0c2 ret  */
  ESPCHK(0x11aca0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0d0 @ 0x11aca0d0 (19 bytes, 9 insns) */
void f_11aca0d0(void) {
  FTRACE(0x11aca0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca0d1 mov ebp, esp */
  EBP = (ESP);
  /* 11aca0d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11aca0d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca0d8 push eax */
  push32((uint32_t)(EAX));
  /* 11aca0d9 call 0x11aca120 */
  push32(0x11aca0deu); f_11aca120();
  /* 11aca0de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca0e1 pop ebp */
  EBP = (pop32());
  /* 11aca0e2 ret  */
  ESPCHK(0x11aca0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0f0 @ 0x11aca0f0 (41 bytes, 16 insns) */
void f_11aca0f0(void) {
  FTRACE(0x11aca0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca0f1 mov ebp, esp */
  EBP = (ESP);
  /* 11aca0f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca0f5 call 0x11acd060 */
  push32(0x11aca0fau); f_11acd060();
  /* 11aca0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca0fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aca100 push eax */
  push32((uint32_t)(EAX));
  /* 11aca101 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca104 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca105 call 0x11aca120 */
  push32(0x11aca10au); f_11aca120();
  /* 11aca10a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca10d push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca10f call 0x11acd100 */
  push32(0x11aca114u); f_11acd100();
  /* 11aca114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca117 pop ebp */
  EBP = (pop32());
  /* 11aca118 ret  */
  ESPCHK(0x11aca0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a120 @ 0x11aca120 (1004 bytes, 342 insns) */
void f_11aca120(void) {
  FTRACE(0x11aca120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca120 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca121 mov ebp, esp */
  EBP = (ESP);
  /* 11aca123 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca124 push ebx */
  push32((uint32_t)(EBX));
  /* 11aca125 push esi */
  push32((uint32_t)(ESI));
  /* 11aca126 push edi */
  push32((uint32_t)(EDI));
  /* 11aca127 mov eax, dword ptr [0x11af6b34] */
  EAX = (r32((uint32_t)(0x11af6b34)));
  /* 11aca12c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11aca12f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca131 je 0x11aca163 */
  if (C.zf) goto L_11aca163;
L_11aca133:;
  /* 11aca133 call 0x11aca800 */
  push32(0x11aca138u); f_11aca800();
  /* 11aca138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca13a jne 0x11aca15d */
  if (!C.zf) goto L_11aca15d;
  /* 11aca13c push 0x11af37a8 */
  push32((uint32_t)(0x11af37a8u));
  /* 11aca141 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca143 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11aca148 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca14d push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca14f call 0x11ac6a40 */
  push32(0x11aca154u); f_11ac6a40();
  /* 11aca154 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca15a jne 0x11aca15d */
  if (!C.zf) goto L_11aca15d;
  /* 11aca15c int3  */
  x86_unimpl("int3 @ 0x11aca15c");
L_11aca15d:;
  /* 11aca15d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca15f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca161 jne 0x11aca133 */
  if (!C.zf) goto L_11aca133;
L_11aca163:;
  /* 11aca163 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca167 jne 0x11aca16e */
  if (!C.zf) goto L_11aca16e;
  /* 11aca169 jmp 0x11aca505 */
  goto L_11aca505;
L_11aca16e:;
  /* 11aca16e push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca170 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca172 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca174 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aca177 push edx */
  push32((uint32_t)(EDX));
  /* 11aca178 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca17a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca17d push eax */
  push32((uint32_t)(EAX));
  /* 11aca17e push 3 */
  push32((uint32_t)(0x3u));
  /* 11aca180 call dword ptr [0x11af7210] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af7210))), 0x11aca186u);
  /* 11aca186 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca18b jne 0x11aca1b8 */
  if (!C.zf) goto L_11aca1b8;
L_11aca18d:;
  /* 11aca18d push 0x11af3a6c */
  push32((uint32_t)(0x11af3a6cu));
  /* 11aca192 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11aca197 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca199 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca19b push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca19d push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca19f call 0x11ac6a40 */
  push32(0x11aca1a4u); f_11ac6a40();
  /* 11aca1a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca1a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca1aa jne 0x11aca1ad */
  if (!C.zf) goto L_11aca1ad;
  /* 11aca1ac int3  */
  x86_unimpl("int3 @ 0x11aca1ac");
L_11aca1ad:;
  /* 11aca1ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca1af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca1b1 jne 0x11aca18d */
  if (!C.zf) goto L_11aca18d;
  /* 11aca1b3 jmp 0x11aca505 */
  goto L_11aca505;
L_11aca1b8:;
  /* 11aca1b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca1bb push edx */
  push32((uint32_t)(EDX));
  /* 11aca1bc call 0x11acac60 */
  push32(0x11aca1c1u); f_11acac60();
  /* 11aca1c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca1c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca1c6 jne 0x11aca1e9 */
  if (!C.zf) goto L_11aca1e9;
  /* 11aca1c8 push 0x11af38ac */
  push32((uint32_t)(0x11af38acu));
  /* 11aca1cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca1cf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11aca1d4 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca1d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca1db call 0x11ac6a40 */
  push32(0x11aca1e0u); f_11ac6a40();
  /* 11aca1e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca1e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca1e6 jne 0x11aca1e9 */
  if (!C.zf) goto L_11aca1e9;
  /* 11aca1e8 int3  */
  x86_unimpl("int3 @ 0x11aca1e8");
L_11aca1e9:;
  /* 11aca1e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11aca1eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca1ed jne 0x11aca1b8 */
  if (!C.zf) goto L_11aca1b8;
  /* 11aca1ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca1f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aca1f5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11aca1f8:;
  /* 11aca1f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca1fb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11aca1fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aca203 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca206 je 0x11aca24b */
  if (C.zf) goto L_11aca24b;
  /* 11aca208 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca20b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca20f je 0x11aca24b */
  if (C.zf) goto L_11aca24b;
  /* 11aca211 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca214 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11aca217 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aca21c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca21f je 0x11aca24b */
  if (C.zf) goto L_11aca24b;
  /* 11aca221 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca224 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca228 je 0x11aca24b */
  if (C.zf) goto L_11aca24b;
  /* 11aca22a push 0x11af3a44 */
  push32((uint32_t)(0x11af3a44u));
  /* 11aca22f push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca231 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11aca236 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca23b push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca23d call 0x11ac6a40 */
  push32(0x11aca242u); f_11ac6a40();
  /* 11aca242 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca245 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca248 jne 0x11aca24b */
  if (!C.zf) goto L_11aca24b;
  /* 11aca24a int3  */
  x86_unimpl("int3 @ 0x11aca24a");
L_11aca24b:;
  /* 11aca24b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11aca24d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11aca24f jne 0x11aca1f8 */
  if (!C.zf) goto L_11aca1f8;
  /* 11aca251 mov eax, dword ptr [0x11af6b34] */
  EAX = (r32((uint32_t)(0x11af6b34)));
  /* 11aca256 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11aca259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca25b jne 0x11aca326 */
  if (!C.zf) goto L_11aca326;
  /* 11aca261 push 4 */
  push32((uint32_t)(0x4u));
  /* 11aca263 mov cl, byte ptr [0x11af6b40] */
  CL = (r8((uint32_t)(0x11af6b40)));
  /* 11aca269 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca26a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca26d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca270 push edx */
  push32((uint32_t)(EDX));
  /* 11aca271 call 0x11aca770 */
  push32(0x11aca276u); f_11aca770();
  /* 11aca276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca27b jne 0x11aca2c0 */
  if (!C.zf) goto L_11aca2c0;
L_11aca27d:;
  /* 11aca27d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca280 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca283 push eax */
  push32((uint32_t)(EAX));
  /* 11aca284 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca287 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11aca28a push edx */
  push32((uint32_t)(EDX));
  /* 11aca28b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca28e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11aca291 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11aca297 mov edx, dword ptr [ecx*4 + 0x11af6b44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af6b44)));
  /* 11aca29e push edx */
  push32((uint32_t)(EDX));
  /* 11aca29f push 0x11af3a18 */
  push32((uint32_t)(0x11af3a18u));
  /* 11aca2a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca2a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca2a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca2aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11aca2ac call 0x11ac6a40 */
  push32(0x11aca2b1u); f_11ac6a40();
  /* 11aca2b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca2b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca2b7 jne 0x11aca2ba */
  if (!C.zf) goto L_11aca2ba;
  /* 11aca2b9 int3  */
  x86_unimpl("int3 @ 0x11aca2b9");
L_11aca2ba:;
  /* 11aca2ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11aca2bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca2be jne 0x11aca27d */
  if (!C.zf) goto L_11aca27d;
L_11aca2c0:;
  /* 11aca2c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11aca2c2 mov cl, byte ptr [0x11af6b40] */
  CL = (r8((uint32_t)(0x11af6b40)));
  /* 11aca2c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca2c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca2cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11aca2cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca2d2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11aca2d6 push edx */
  push32((uint32_t)(EDX));
  /* 11aca2d7 call 0x11aca770 */
  push32(0x11aca2dcu); f_11aca770();
  /* 11aca2dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca2df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca2e1 jne 0x11aca326 */
  if (!C.zf) goto L_11aca326;
L_11aca2e3:;
  /* 11aca2e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca2e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca2e9 push eax */
  push32((uint32_t)(EAX));
  /* 11aca2ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca2ed mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11aca2f0 push edx */
  push32((uint32_t)(EDX));
  /* 11aca2f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca2f4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11aca2f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11aca2fd mov edx, dword ptr [ecx*4 + 0x11af6b44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af6b44)));
  /* 11aca304 push edx */
  push32((uint32_t)(EDX));
  /* 11aca305 push 0x11af39ec */
  push32((uint32_t)(0x11af39ecu));
  /* 11aca30a push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca30c push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca30e push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca310 push 1 */
  push32((uint32_t)(0x1u));
  /* 11aca312 call 0x11ac6a40 */
  push32(0x11aca317u); f_11ac6a40();
  /* 11aca317 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca31a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca31d jne 0x11aca320 */
  if (!C.zf) goto L_11aca320;
  /* 11aca31f int3  */
  x86_unimpl("int3 @ 0x11aca31f");
L_11aca320:;
  /* 11aca320 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11aca322 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca324 jne 0x11aca2e3 */
  if (!C.zf) goto L_11aca2e3;
L_11aca326:;
  /* 11aca326 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca329 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca32d jne 0x11aca39b */
  if (!C.zf) goto L_11aca39b;
L_11aca32f:;
  /* 11aca32f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca332 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca339 jne 0x11aca344 */
  if (!C.zf) goto L_11aca344;
  /* 11aca33b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca33e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca342 je 0x11aca365 */
  if (C.zf) goto L_11aca365;
L_11aca344:;
  /* 11aca344 push 0x11af39ac */
  push32((uint32_t)(0x11af39acu));
  /* 11aca349 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca34b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11aca350 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca355 push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca357 call 0x11ac6a40 */
  push32(0x11aca35cu); f_11ac6a40();
  /* 11aca35c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca35f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca362 jne 0x11aca365 */
  if (!C.zf) goto L_11aca365;
  /* 11aca364 int3  */
  x86_unimpl("int3 @ 0x11aca364");
L_11aca365:;
  /* 11aca365 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca367 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca369 jne 0x11aca32f */
  if (!C.zf) goto L_11aca32f;
  /* 11aca36b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca36e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11aca371 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca374 push eax */
  push32((uint32_t)(EAX));
  /* 11aca375 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca377 mov cl, byte ptr [0x11af6b41] */
  CL = (r8((uint32_t)(0x11af6b41)));
  /* 11aca37d push ecx */
  push32((uint32_t)(ECX));
  /* 11aca37e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca381 push edx */
  push32((uint32_t)(EDX));
  /* 11aca382 call 0x11acef20 */
  push32(0x11aca387u); f_11acef20();
  /* 11aca387 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca38a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca38d push eax */
  push32((uint32_t)(EAX));
  /* 11aca38e call 0x11acf860 */
  push32(0x11aca393u); f_11acf860();
  /* 11aca393 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca396 jmp 0x11aca505 */
  goto L_11aca505;
L_11aca39b:;
  /* 11aca39b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca39e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca3a2 jne 0x11aca3b1 */
  if (!C.zf) goto L_11aca3b1;
  /* 11aca3a4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca3a8 jne 0x11aca3b1 */
  if (!C.zf) goto L_11aca3b1;
  /* 11aca3aa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11aca3b1:;
  /* 11aca3b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca3b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11aca3b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca3ba je 0x11aca3dd */
  if (C.zf) goto L_11aca3dd;
  /* 11aca3bc push 0x11af398c */
  push32((uint32_t)(0x11af398cu));
  /* 11aca3c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca3c3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11aca3c8 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca3cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca3cf call 0x11ac6a40 */
  push32(0x11aca3d4u); f_11ac6a40();
  /* 11aca3d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca3d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca3da jne 0x11aca3dd */
  if (!C.zf) goto L_11aca3dd;
  /* 11aca3dc int3  */
  x86_unimpl("int3 @ 0x11aca3dc");
L_11aca3dd:;
  /* 11aca3dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca3df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca3e1 jne 0x11aca3b1 */
  if (!C.zf) goto L_11aca3b1;
  /* 11aca3e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca3e6 mov eax, dword ptr [0x11af9318] */
  EAX = (r32((uint32_t)(0x11af9318)));
  /* 11aca3eb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aca3ee mov dword ptr [0x11af9318], eax */
  w32((uint32_t)(0x11af9318), (EAX));
  /* 11aca3f3 mov ecx, dword ptr [0x11af6b34] */
  ECX = (r32((uint32_t)(0x11af6b34)));
  /* 11aca3f9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11aca3fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca3fe jne 0x11aca4dc */
  if (!C.zf) goto L_11aca4dc;
  /* 11aca404 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca407 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca40a je 0x11aca41c */
  if (C.zf) goto L_11aca41c;
  /* 11aca40c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca40f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11aca411 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca414 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11aca417 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11aca41a jmp 0x11aca45a */
  goto L_11aca45a;
L_11aca41c:;
  /* 11aca41c mov ecx, dword ptr [0x11af930c] */
  ECX = (r32((uint32_t)(0x11af930c)));
  /* 11aca422 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca425 je 0x11aca448 */
  if (C.zf) goto L_11aca448;
  /* 11aca427 push 0x11af3974 */
  push32((uint32_t)(0x11af3974u));
  /* 11aca42c push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca42e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11aca433 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca438 push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca43a call 0x11ac6a40 */
  push32(0x11aca43fu); f_11ac6a40();
  /* 11aca43f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca442 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca445 jne 0x11aca448 */
  if (!C.zf) goto L_11aca448;
  /* 11aca447 int3  */
  x86_unimpl("int3 @ 0x11aca447");
L_11aca448:;
  /* 11aca448 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11aca44a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11aca44c jne 0x11aca41c */
  if (!C.zf) goto L_11aca41c;
  /* 11aca44e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca451 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11aca454 mov dword ptr [0x11af930c], ecx */
  w32((uint32_t)(0x11af930c), (ECX));
L_11aca45a:;
  /* 11aca45a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca45d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca461 je 0x11aca472 */
  if (C.zf) goto L_11aca472;
  /* 11aca463 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca466 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11aca469 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca46c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11aca46e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11aca470 jmp 0x11aca4af */
  goto L_11aca4af;
L_11aca472:;
  /* 11aca472 mov ecx, dword ptr [0x11af9314] */
  ECX = (r32((uint32_t)(0x11af9314)));
  /* 11aca478 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca47b je 0x11aca49e */
  if (C.zf) goto L_11aca49e;
  /* 11aca47d push 0x11af395c */
  push32((uint32_t)(0x11af395cu));
  /* 11aca482 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca484 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11aca489 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca48e push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca490 call 0x11ac6a40 */
  push32(0x11aca495u); f_11ac6a40();
  /* 11aca495 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca498 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca49b jne 0x11aca49e */
  if (!C.zf) goto L_11aca49e;
  /* 11aca49d int3  */
  x86_unimpl("int3 @ 0x11aca49d");
L_11aca49e:;
  /* 11aca49e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11aca4a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11aca4a2 jne 0x11aca472 */
  if (!C.zf) goto L_11aca472;
  /* 11aca4a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca4a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11aca4a9 mov dword ptr [0x11af9314], ecx */
  w32((uint32_t)(0x11af9314), (ECX));
L_11aca4af:;
  /* 11aca4af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca4b2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11aca4b5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca4b8 push eax */
  push32((uint32_t)(EAX));
  /* 11aca4b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca4bb mov cl, byte ptr [0x11af6b41] */
  CL = (r8((uint32_t)(0x11af6b41)));
  /* 11aca4c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca4c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca4c5 push edx */
  push32((uint32_t)(EDX));
  /* 11aca4c6 call 0x11acef20 */
  push32(0x11aca4cbu); f_11acef20();
  /* 11aca4cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca4ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca4d1 push eax */
  push32((uint32_t)(EAX));
  /* 11aca4d2 call 0x11acf860 */
  push32(0x11aca4d7u); f_11acf860();
  /* 11aca4d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca4da jmp 0x11aca505 */
  goto L_11aca505;
L_11aca4dc:;
  /* 11aca4dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca4df mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11aca4e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca4e9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11aca4ec push eax */
  push32((uint32_t)(EAX));
  /* 11aca4ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca4ef mov cl, byte ptr [0x11af6b41] */
  CL = (r8((uint32_t)(0x11af6b41)));
  /* 11aca4f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca4f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca4f9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca4fc push edx */
  push32((uint32_t)(EDX));
  /* 11aca4fd call 0x11acef20 */
  push32(0x11aca502u); f_11acef20();
  /* 11aca502 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11aca505:;
  /* 11aca505 pop edi */
  EDI = (pop32());
  /* 11aca506 pop esi */
  ESI = (pop32());
  /* 11aca507 pop ebx */
  EBX = (pop32());
  /* 11aca508 mov esp, ebp */
  ESP = (EBP);
  /* 11aca50a pop ebp */
  EBP = (pop32());
  /* 11aca50b ret  */
  ESPCHK(0x11aca120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a510 @ 0x11aca510 (19 bytes, 9 insns) */
void f_11aca510(void) {
  FTRACE(0x11aca510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca510 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca511 mov ebp, esp */
  EBP = (ESP);
  /* 11aca513 push 1 */
  push32((uint32_t)(0x1u));
  /* 11aca515 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca518 push eax */
  push32((uint32_t)(EAX));
  /* 11aca519 call 0x11aca530 */
  push32(0x11aca51eu); f_11aca530();
  /* 11aca51e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca521 pop ebp */
  EBP = (pop32());
  /* 11aca522 ret  */
  ESPCHK(0x11aca510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a530 @ 0x11aca530 (342 bytes, 119 insns) */
void f_11aca530(void) {
  FTRACE(0x11aca530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca530 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca531 mov ebp, esp */
  EBP = (ESP);
  /* 11aca533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aca536 push ebx */
  push32((uint32_t)(EBX));
  /* 11aca537 push esi */
  push32((uint32_t)(ESI));
  /* 11aca538 push edi */
  push32((uint32_t)(EDI));
  /* 11aca539 mov eax, dword ptr [0x11af6b34] */
  EAX = (r32((uint32_t)(0x11af6b34)));
  /* 11aca53e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11aca541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca543 je 0x11aca575 */
  if (C.zf) goto L_11aca575;
L_11aca545:;
  /* 11aca545 call 0x11aca800 */
  push32(0x11aca54au); f_11aca800();
  /* 11aca54a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca54c jne 0x11aca56f */
  if (!C.zf) goto L_11aca56f;
  /* 11aca54e push 0x11af37a8 */
  push32((uint32_t)(0x11af37a8u));
  /* 11aca553 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca555 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11aca55a push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca55f push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca561 call 0x11ac6a40 */
  push32(0x11aca566u); f_11ac6a40();
  /* 11aca566 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca569 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca56c jne 0x11aca56f */
  if (!C.zf) goto L_11aca56f;
  /* 11aca56e int3  */
  x86_unimpl("int3 @ 0x11aca56e");
L_11aca56f:;
  /* 11aca56f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca571 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca573 jne 0x11aca545 */
  if (!C.zf) goto L_11aca545;
L_11aca575:;
  /* 11aca575 push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca577 call 0x11acd060 */
  push32(0x11aca57cu); f_11acd060();
  /* 11aca57c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11aca57f:;
  /* 11aca57f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca582 push edx */
  push32((uint32_t)(EDX));
  /* 11aca583 call 0x11acac60 */
  push32(0x11aca588u); f_11acac60();
  /* 11aca588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca58b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca58d jne 0x11aca5b0 */
  if (!C.zf) goto L_11aca5b0;
  /* 11aca58f push 0x11af38ac */
  push32((uint32_t)(0x11af38acu));
  /* 11aca594 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca596 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11aca59b push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca5a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca5a2 call 0x11ac6a40 */
  push32(0x11aca5a7u); f_11ac6a40();
  /* 11aca5a7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca5aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca5ad jne 0x11aca5b0 */
  if (!C.zf) goto L_11aca5b0;
  /* 11aca5af int3  */
  x86_unimpl("int3 @ 0x11aca5af");
L_11aca5b0:;
  /* 11aca5b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11aca5b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca5b4 jne 0x11aca57f */
  if (!C.zf) goto L_11aca57f;
  /* 11aca5b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca5b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aca5bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11aca5bf:;
  /* 11aca5bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca5c2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11aca5c5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aca5ca cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca5cd je 0x11aca612 */
  if (C.zf) goto L_11aca612;
  /* 11aca5cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca5d2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca5d6 je 0x11aca612 */
  if (C.zf) goto L_11aca612;
  /* 11aca5d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca5db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11aca5de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aca5e3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca5e6 je 0x11aca612 */
  if (C.zf) goto L_11aca612;
  /* 11aca5e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca5eb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca5ef je 0x11aca612 */
  if (C.zf) goto L_11aca612;
  /* 11aca5f1 push 0x11af3a44 */
  push32((uint32_t)(0x11af3a44u));
  /* 11aca5f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca5f8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11aca5fd push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca602 push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca604 call 0x11ac6a40 */
  push32(0x11aca609u); f_11ac6a40();
  /* 11aca609 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca60c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca60f jne 0x11aca612 */
  if (!C.zf) goto L_11aca612;
  /* 11aca611 int3  */
  x86_unimpl("int3 @ 0x11aca611");
L_11aca612:;
  /* 11aca612 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11aca614 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11aca616 jne 0x11aca5bf */
  if (!C.zf) goto L_11aca5bf;
  /* 11aca618 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca61b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca61f jne 0x11aca62e */
  if (!C.zf) goto L_11aca62e;
  /* 11aca621 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca625 jne 0x11aca62e */
  if (!C.zf) goto L_11aca62e;
  /* 11aca627 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11aca62e:;
  /* 11aca62e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca631 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca635 je 0x11aca669 */
  if (C.zf) goto L_11aca669;
L_11aca637:;
  /* 11aca637 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca63a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11aca63d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca640 je 0x11aca663 */
  if (C.zf) goto L_11aca663;
  /* 11aca642 push 0x11af398c */
  push32((uint32_t)(0x11af398cu));
  /* 11aca647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca649 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11aca64e push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca653 push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca655 call 0x11ac6a40 */
  push32(0x11aca65au); f_11ac6a40();
  /* 11aca65a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca65d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca660 jne 0x11aca663 */
  if (!C.zf) goto L_11aca663;
  /* 11aca662 int3  */
  x86_unimpl("int3 @ 0x11aca662");
L_11aca663:;
  /* 11aca663 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca665 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca667 jne 0x11aca637 */
  if (!C.zf) goto L_11aca637;
L_11aca669:;
  /* 11aca669 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca66c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11aca66f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11aca672 push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca674 call 0x11acd100 */
  push32(0x11aca679u); f_11acd100();
  /* 11aca679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca67c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca67f pop edi */
  EDI = (pop32());
  /* 11aca680 pop esi */
  ESI = (pop32());
  /* 11aca681 pop ebx */
  EBX = (pop32());
  /* 11aca682 mov esp, ebp */
  ESP = (EBP);
  /* 11aca684 pop ebp */
  EBP = (pop32());
  /* 11aca685 ret  */
  ESPCHK(0x11aca530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x11aca690 (28 bytes, 11 insns) */
void f_11aca690(void) {
  FTRACE(0x11aca690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca690 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca691 mov ebp, esp */
  EBP = (ESP);
  /* 11aca693 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca694 mov eax, dword ptr [0x11af6b3c] */
  EAX = (r32((uint32_t)(0x11af6b3c)));
  /* 11aca699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11aca69c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca69f mov dword ptr [0x11af6b3c], ecx */
  w32((uint32_t)(0x11af6b3c), (ECX));
  /* 11aca6a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca6a8 mov esp, ebp */
  ESP = (EBP);
  /* 11aca6aa pop ebp */
  EBP = (pop32());
  /* 11aca6ab ret  */
  ESPCHK(0x11aca690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6b0 @ 0x11aca6b0 (157 bytes, 59 insns) */
void f_11aca6b0(void) {
  FTRACE(0x11aca6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca6b1 mov ebp, esp */
  EBP = (ESP);
  /* 11aca6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca6b4 push ebx */
  push32((uint32_t)(EBX));
  /* 11aca6b5 push esi */
  push32((uint32_t)(ESI));
  /* 11aca6b6 push edi */
  push32((uint32_t)(EDI));
  /* 11aca6b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca6b9 call 0x11acd060 */
  push32(0x11aca6beu); f_11acd060();
  /* 11aca6be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca6c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca6c4 push eax */
  push32((uint32_t)(EAX));
  /* 11aca6c5 call 0x11acac60 */
  push32(0x11aca6cau); f_11acac60();
  /* 11aca6ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca6cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca6cf je 0x11aca73c */
  if (C.zf) goto L_11aca73c;
  /* 11aca6d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca6d4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aca6d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11aca6da:;
  /* 11aca6da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca6dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11aca6e0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aca6e5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca6e8 je 0x11aca72d */
  if (C.zf) goto L_11aca72d;
  /* 11aca6ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca6ed cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca6f1 je 0x11aca72d */
  if (C.zf) goto L_11aca72d;
  /* 11aca6f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca6f6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11aca6f9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aca6fe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca701 je 0x11aca72d */
  if (C.zf) goto L_11aca72d;
  /* 11aca703 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca706 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca70a je 0x11aca72d */
  if (C.zf) goto L_11aca72d;
  /* 11aca70c push 0x11af3a44 */
  push32((uint32_t)(0x11af3a44u));
  /* 11aca711 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca713 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11aca718 push 0x11af379c */
  push32((uint32_t)(0x11af379cu));
  /* 11aca71d push 2 */
  push32((uint32_t)(0x2u));
  /* 11aca71f call 0x11ac6a40 */
  push32(0x11aca724u); f_11ac6a40();
  /* 11aca724 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca727 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca72a jne 0x11aca72d */
  if (!C.zf) goto L_11aca72d;
  /* 11aca72c int3  */
  x86_unimpl("int3 @ 0x11aca72c");
L_11aca72d:;
  /* 11aca72d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11aca72f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11aca731 jne 0x11aca6da */
  if (!C.zf) goto L_11aca6da;
  /* 11aca733 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca736 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aca739 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11aca73c:;
  /* 11aca73c push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca73e call 0x11acd100 */
  push32(0x11aca743u); f_11acd100();
  /* 11aca743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca746 pop edi */
  EDI = (pop32());
  /* 11aca747 pop esi */
  ESI = (pop32());
  /* 11aca748 pop ebx */
  EBX = (pop32());
  /* 11aca749 mov esp, ebp */
  ESP = (EBP);
  /* 11aca74b pop ebp */
  EBP = (pop32());
  /* 11aca74c ret  */
  ESPCHK(0x11aca6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a750 @ 0x11aca750 (28 bytes, 11 insns) */
void f_11aca750(void) {
  FTRACE(0x11aca750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca750 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca751 mov ebp, esp */
  EBP = (ESP);
  /* 11aca753 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca754 mov eax, dword ptr [0x11af7210] */
  EAX = (r32((uint32_t)(0x11af7210)));
  /* 11aca759 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11aca75c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca75f mov dword ptr [0x11af7210], ecx */
  w32((uint32_t)(0x11af7210), (ECX));
  /* 11aca765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca768 mov esp, ebp */
  ESP = (EBP);
  /* 11aca76a pop ebp */
  EBP = (pop32());
  /* 11aca76b ret  */
  ESPCHK(0x11aca750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a770 @ 0x11aca770 (136 bytes, 55 insns) */
void f_11aca770(void) {
  FTRACE(0x11aca770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca770 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca771 mov ebp, esp */
  EBP = (ESP);
  /* 11aca773 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca774 push ebx */
  push32((uint32_t)(EBX));
  /* 11aca775 push esi */
  push32((uint32_t)(ESI));
  /* 11aca776 push edi */
  push32((uint32_t)(EDI));
  /* 11aca777 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11aca77e:;
  /* 11aca77e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11aca781 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11aca784 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aca787 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11aca78a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca78c je 0x11aca7ee */
  if (C.zf) goto L_11aca7ee;
  /* 11aca78e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca791 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11aca793 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11aca795 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aca798 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11aca79e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca7a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca7a4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11aca7a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca7a9 je 0x11aca7ec */
  if (C.zf) goto L_11aca7ec;
L_11aca7ab:;
  /* 11aca7ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aca7ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aca7b3 push eax */
  push32((uint32_t)(EAX));
  /* 11aca7b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca7b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11aca7b9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11aca7bc push edx */
  push32((uint32_t)(EDX));
  /* 11aca7bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aca7c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aca7c3 push eax */
  push32((uint32_t)(EAX));
  /* 11aca7c4 push 0x11af3a88 */
  push32((uint32_t)(0x11af3a88u));
  /* 11aca7c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca7cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca7cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca7cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca7d1 call 0x11ac6a40 */
  push32(0x11aca7d6u); f_11ac6a40();
  /* 11aca7d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca7d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca7dc jne 0x11aca7df */
  if (!C.zf) goto L_11aca7df;
  /* 11aca7de int3  */
  x86_unimpl("int3 @ 0x11aca7de");
L_11aca7df:;
  /* 11aca7df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca7e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca7e3 jne 0x11aca7ab */
  if (!C.zf) goto L_11aca7ab;
  /* 11aca7e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11aca7ec:;
  /* 11aca7ec jmp 0x11aca77e */
  goto L_11aca77e;
L_11aca7ee:;
  /* 11aca7ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aca7f1 pop edi */
  EDI = (pop32());
  /* 11aca7f2 pop esi */
  ESI = (pop32());
  /* 11aca7f3 pop ebx */
  EBX = (pop32());
  /* 11aca7f4 mov esp, ebp */
  ESP = (EBP);
  /* 11aca7f6 pop ebp */
  EBP = (pop32());
  /* 11aca7f7 ret  */
  ESPCHK(0x11aca770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x11aca800 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11aca800(void) {
  FTRACE(0x11aca800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aca800 push ebp */
  push32((uint32_t)(EBP));
  /* 11aca801 mov ebp, esp */
  EBP = (ESP);
  /* 11aca803 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aca806 push ebx */
  push32((uint32_t)(EBX));
  /* 11aca807 push esi */
  push32((uint32_t)(ESI));
  /* 11aca808 push edi */
  push32((uint32_t)(EDI));
  /* 11aca809 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11aca810 mov eax, dword ptr [0x11af6b34] */
  EAX = (r32((uint32_t)(0x11af6b34)));
  /* 11aca815 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11aca818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca81a jne 0x11aca826 */
  if (!C.zf) goto L_11aca826;
  /* 11aca81c mov eax, 1 */
  EAX = (0x1u);
  /* 11aca821 jmp 0x11acab58 */
  goto L_11acab58;
L_11aca826:;
  /* 11aca826 push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca828 call 0x11acd060 */
  push32(0x11aca82du); f_11acd060();
  /* 11aca82d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca830 call 0x11acf8d0 */
  push32(0x11aca835u); f_11acf8d0();
  /* 11aca835 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11aca838 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca83c je 0x11aca949 */
  if (C.zf) goto L_11aca949;
  /* 11aca842 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca846 je 0x11aca949 */
  if (C.zf) goto L_11aca949;
  /* 11aca84c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11aca84f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11aca852 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11aca855 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca858 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11aca85b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca85f ja 0x11aca912 */
  if ((!C.cf&&!C.zf)) goto L_11aca912;
  /* 11aca865 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11aca868 jmp dword ptr [eax*4 + 0x11acab5f] */
  switch (EAX) {
    case 0: goto L_11aca8ea;
    case 1: goto L_11aca8c2;
    case 2: goto L_11aca89a;
    case 3: goto L_11aca86f;
    default: x86_unimpl("switch@0x11aca868 out of table"); return;
  }
L_11aca86f:;
  /* 11aca86f push 0x11af3bdc */
  push32((uint32_t)(0x11af3bdcu));
  /* 11aca874 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11aca879 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca87b push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca87d push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca87f push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca881 call 0x11ac6a40 */
  push32(0x11aca886u); f_11ac6a40();
  /* 11aca886 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca889 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca88c jne 0x11aca88f */
  if (!C.zf) goto L_11aca88f;
  /* 11aca88e int3  */
  x86_unimpl("int3 @ 0x11aca88e");
L_11aca88f:;
  /* 11aca88f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca891 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca893 jne 0x11aca86f */
  if (!C.zf) goto L_11aca86f;
  /* 11aca895 jmp 0x11aca938 */
  goto L_11aca938;
L_11aca89a:;
  /* 11aca89a push 0x11af3bb8 */
  push32((uint32_t)(0x11af3bb8u));
  /* 11aca89f push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11aca8a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8ac call 0x11ac6a40 */
  push32(0x11aca8b1u); f_11ac6a40();
  /* 11aca8b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca8b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca8b7 jne 0x11aca8ba */
  if (!C.zf) goto L_11aca8ba;
  /* 11aca8b9 int3  */
  x86_unimpl("int3 @ 0x11aca8b9");
L_11aca8ba:;
  /* 11aca8ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11aca8bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11aca8be jne 0x11aca89a */
  if (!C.zf) goto L_11aca89a;
  /* 11aca8c0 jmp 0x11aca938 */
  goto L_11aca938;
L_11aca8c2:;
  /* 11aca8c2 push 0x11af3b94 */
  push32((uint32_t)(0x11af3b94u));
  /* 11aca8c7 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11aca8cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8d4 call 0x11ac6a40 */
  push32(0x11aca8d9u); f_11ac6a40();
  /* 11aca8d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca8dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca8df jne 0x11aca8e2 */
  if (!C.zf) goto L_11aca8e2;
  /* 11aca8e1 int3  */
  x86_unimpl("int3 @ 0x11aca8e1");
L_11aca8e2:;
  /* 11aca8e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11aca8e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca8e6 jne 0x11aca8c2 */
  if (!C.zf) goto L_11aca8c2;
  /* 11aca8e8 jmp 0x11aca938 */
  goto L_11aca938;
L_11aca8ea:;
  /* 11aca8ea push 0x11af3b70 */
  push32((uint32_t)(0x11af3b70u));
  /* 11aca8ef push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11aca8f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca8fc call 0x11ac6a40 */
  push32(0x11aca901u); f_11ac6a40();
  /* 11aca901 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca904 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca907 jne 0x11aca90a */
  if (!C.zf) goto L_11aca90a;
  /* 11aca909 int3  */
  x86_unimpl("int3 @ 0x11aca909");
L_11aca90a:;
  /* 11aca90a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aca90c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aca90e jne 0x11aca8ea */
  if (!C.zf) goto L_11aca8ea;
  /* 11aca910 jmp 0x11aca938 */
  goto L_11aca938;
L_11aca912:;
  /* 11aca912 push 0x11af3b44 */
  push32((uint32_t)(0x11af3b44u));
  /* 11aca917 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11aca91c push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca91e push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca920 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca922 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca924 call 0x11ac6a40 */
  push32(0x11aca929u); f_11ac6a40();
  /* 11aca929 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca92c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca92f jne 0x11aca932 */
  if (!C.zf) goto L_11aca932;
  /* 11aca931 int3  */
  x86_unimpl("int3 @ 0x11aca931");
L_11aca932:;
  /* 11aca932 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11aca934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11aca936 jne 0x11aca912 */
  if (!C.zf) goto L_11aca912;
L_11aca938:;
  /* 11aca938 push 9 */
  push32((uint32_t)(0x9u));
  /* 11aca93a call 0x11acd100 */
  push32(0x11aca93fu); f_11acd100();
  /* 11aca93f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca942 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11aca944 jmp 0x11acab58 */
  goto L_11acab58;
L_11aca949:;
  /* 11aca949 mov eax, dword ptr [0x11af9314] */
  EAX = (r32((uint32_t)(0x11af9314)));
  /* 11aca94e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11aca951 jmp 0x11aca95b */
  goto L_11aca95b;
L_11aca953:;
  /* 11aca953 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca956 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11aca958 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11aca95b:;
  /* 11aca95b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca95f je 0x11acab4b */
  if (C.zf) goto L_11acab4b;
  /* 11aca965 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11aca96c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca96f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11aca972 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11aca978 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca97b je 0x11aca9a0 */
  if (C.zf) goto L_11aca9a0;
  /* 11aca97d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca980 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca984 je 0x11aca9a0 */
  if (C.zf) goto L_11aca9a0;
  /* 11aca986 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca989 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11aca98c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11aca992 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca995 je 0x11aca9a0 */
  if (C.zf) goto L_11aca9a0;
  /* 11aca997 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca99a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aca99e jne 0x11aca9b8 */
  if (!C.zf) goto L_11aca9b8;
L_11aca9a0:;
  /* 11aca9a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca9a3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11aca9a6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11aca9ac mov edx, dword ptr [ecx*4 + 0x11af6b44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af6b44)));
  /* 11aca9b3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11aca9b6 jmp 0x11aca9bf */
  goto L_11aca9bf;
L_11aca9b8:;
  /* 11aca9b8 mov dword ptr [ebp - 0x14], 0x11af3b3c */
  w32((uint32_t)(EBP + -0x14), (0x11af3b3cu));
L_11aca9bf:;
  /* 11aca9bf push 4 */
  push32((uint32_t)(0x4u));
  /* 11aca9c1 mov al, byte ptr [0x11af6b40] */
  AL = (r8((uint32_t)(0x11af6b40)));
  /* 11aca9c6 push eax */
  push32((uint32_t)(EAX));
  /* 11aca9c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca9ca add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca9cd push ecx */
  push32((uint32_t)(ECX));
  /* 11aca9ce call 0x11aca770 */
  push32(0x11aca9d3u); f_11aca770();
  /* 11aca9d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca9d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aca9d8 jne 0x11acaa14 */
  if (!C.zf) goto L_11acaa14;
L_11aca9da:;
  /* 11aca9da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca9dd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aca9e0 push edx */
  push32((uint32_t)(EDX));
  /* 11aca9e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aca9e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11aca9e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11aca9e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11aca9eb push edx */
  push32((uint32_t)(EDX));
  /* 11aca9ec push 0x11af3a18 */
  push32((uint32_t)(0x11af3a18u));
  /* 11aca9f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca9f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca9f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca9f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aca9f9 call 0x11ac6a40 */
  push32(0x11aca9feu); f_11ac6a40();
  /* 11aca9fe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaa01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaa04 jne 0x11acaa07 */
  if (!C.zf) goto L_11acaa07;
  /* 11acaa06 int3  */
  x86_unimpl("int3 @ 0x11acaa06");
L_11acaa07:;
  /* 11acaa07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acaa09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acaa0b jne 0x11aca9da */
  if (!C.zf) goto L_11aca9da;
  /* 11acaa0d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11acaa14:;
  /* 11acaa14 push 4 */
  push32((uint32_t)(0x4u));
  /* 11acaa16 mov cl, byte ptr [0x11af6b40] */
  CL = (r8((uint32_t)(0x11af6b40)));
  /* 11acaa1c push ecx */
  push32((uint32_t)(ECX));
  /* 11acaa1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaa20 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11acaa23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaa26 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11acaa2a push edx */
  push32((uint32_t)(EDX));
  /* 11acaa2b call 0x11aca770 */
  push32(0x11acaa30u); f_11aca770();
  /* 11acaa30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaa33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acaa35 jne 0x11acaa71 */
  if (!C.zf) goto L_11acaa71;
L_11acaa37:;
  /* 11acaa37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaa3a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaa3d push eax */
  push32((uint32_t)(EAX));
  /* 11acaa3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaa41 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11acaa44 push edx */
  push32((uint32_t)(EDX));
  /* 11acaa45 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acaa48 push eax */
  push32((uint32_t)(EAX));
  /* 11acaa49 push 0x11af39ec */
  push32((uint32_t)(0x11af39ecu));
  /* 11acaa4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaa50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaa52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaa54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaa56 call 0x11ac6a40 */
  push32(0x11acaa5bu); f_11ac6a40();
  /* 11acaa5b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaa5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaa61 jne 0x11acaa64 */
  if (!C.zf) goto L_11acaa64;
  /* 11acaa63 int3  */
  x86_unimpl("int3 @ 0x11acaa63");
L_11acaa64:;
  /* 11acaa64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acaa66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acaa68 jne 0x11acaa37 */
  if (!C.zf) goto L_11acaa37;
  /* 11acaa6a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11acaa71:;
  /* 11acaa71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaa74 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaa78 jne 0x11acaaca */
  if (!C.zf) goto L_11acaaca;
  /* 11acaa7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaa7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11acaa80 push ecx */
  push32((uint32_t)(ECX));
  /* 11acaa81 mov dl, byte ptr [0x11af6b41] */
  DL = (r8((uint32_t)(0x11af6b41)));
  /* 11acaa87 push edx */
  push32((uint32_t)(EDX));
  /* 11acaa88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaa8b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaa8e push eax */
  push32((uint32_t)(EAX));
  /* 11acaa8f call 0x11aca770 */
  push32(0x11acaa94u); f_11aca770();
  /* 11acaa94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaa97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acaa99 jne 0x11acaaca */
  if (!C.zf) goto L_11acaaca;
L_11acaa9b:;
  /* 11acaa9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaa9e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaaa1 push ecx */
  push32((uint32_t)(ECX));
  /* 11acaaa2 push 0x11af3b10 */
  push32((uint32_t)(0x11af3b10u));
  /* 11acaaa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaaa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaaab push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaaad push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaaaf call 0x11ac6a40 */
  push32(0x11acaab4u); f_11ac6a40();
  /* 11acaab4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaab7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaaba jne 0x11acaabd */
  if (!C.zf) goto L_11acaabd;
  /* 11acaabc int3  */
  x86_unimpl("int3 @ 0x11acaabc");
L_11acaabd:;
  /* 11acaabd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acaabf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acaac1 jne 0x11acaa9b */
  if (!C.zf) goto L_11acaa9b;
  /* 11acaac3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11acaaca:;
  /* 11acaaca cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaace jne 0x11acab46 */
  if (!C.zf) goto L_11acab46;
  /* 11acaad0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaad3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaad7 je 0x11acab0c */
  if (C.zf) goto L_11acab0c;
L_11acaad9:;
  /* 11acaad9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaadc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11acaadf push edx */
  push32((uint32_t)(EDX));
  /* 11acaae0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaae3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11acaae6 push ecx */
  push32((uint32_t)(ECX));
  /* 11acaae7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acaaea push edx */
  push32((uint32_t)(EDX));
  /* 11acaaeb push 0x11af3af0 */
  push32((uint32_t)(0x11af3af0u));
  /* 11acaaf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaaf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaaf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaaf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaaf8 call 0x11ac6a40 */
  push32(0x11acaafdu); f_11ac6a40();
  /* 11acaafd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acab00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acab03 jne 0x11acab06 */
  if (!C.zf) goto L_11acab06;
  /* 11acab05 int3  */
  x86_unimpl("int3 @ 0x11acab05");
L_11acab06:;
  /* 11acab06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acab08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acab0a jne 0x11acaad9 */
  if (!C.zf) goto L_11acaad9;
L_11acab0c:;
  /* 11acab0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acab0f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11acab12 push edx */
  push32((uint32_t)(EDX));
  /* 11acab13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acab16 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acab19 push eax */
  push32((uint32_t)(EAX));
  /* 11acab1a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acab1d push ecx */
  push32((uint32_t)(ECX));
  /* 11acab1e push 0x11af3ac4 */
  push32((uint32_t)(0x11af3ac4u));
  /* 11acab23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acab25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acab27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acab29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acab2b call 0x11ac6a40 */
  push32(0x11acab30u); f_11ac6a40();
  /* 11acab30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acab33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acab36 jne 0x11acab39 */
  if (!C.zf) goto L_11acab39;
  /* 11acab38 int3  */
  x86_unimpl("int3 @ 0x11acab38");
L_11acab39:;
  /* 11acab39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acab3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acab3d jne 0x11acab0c */
  if (!C.zf) goto L_11acab0c;
  /* 11acab3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11acab46:;
  /* 11acab46 jmp 0x11aca953 */
  goto L_11aca953;
L_11acab4b:;
  /* 11acab4b push 9 */
  push32((uint32_t)(0x9u));
  /* 11acab4d call 0x11acd100 */
  push32(0x11acab52u); f_11acd100();
  /* 11acab52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acab55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11acab58:;
  /* 11acab58 pop edi */
  EDI = (pop32());
  /* 11acab59 pop esi */
  ESI = (pop32());
  /* 11acab5a pop ebx */
  EBX = (pop32());
  /* 11acab5b mov esp, ebp */
  ESP = (EBP);
  /* 11acab5d pop ebp */
  EBP = (pop32());
  /* 11acab5e ret  */
  ESPCHK(0x11aca800u, _esp0);
  ESP += 4; return;
}

