#include "recomp.h"

/* FUN_10014e60 @ 0x125b4e60 (289 bytes, 97 insns) */
void f_125b4e60(void) {
  FTRACE(0x125b4e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4e60 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4e61 mov ebp, esp */
  EBP = (ESP);
  /* 125b4e63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4e66 push esi */
  push32((uint32_t)(ESI));
  /* 125b4e67 mov eax, dword ptr [0x125d2c98] */
  EAX = (r32((uint32_t)(0x125d2c98)));
  /* 125b4e6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b4e6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b4e76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b4e7d jmp 0x125b4e88 */
  goto L_125b4e88;
L_125b4e7f:;
  /* 125b4e7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4e82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4e85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125b4e88:;
  /* 125b4e88 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4e8c jae 0x125b4ec1 */
  if (!C.cf) goto L_125b4ec1;
  /* 125b4e8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4e91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4e94 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125b4e97 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4e98 call 0x125aaf40 */
  push32(0x125b4e9du); f_125aaf40();
  /* 125b4e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4ea0 mov esi, eax */
  ESI = (EAX);
  /* 125b4ea2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4ea5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4ea8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 125b4eac push ecx */
  push32((uint32_t)(ECX));
  /* 125b4ead call 0x125aaf40 */
  push32(0x125b4eb2u); f_125aaf40();
  /* 125b4eb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4eb5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4eb8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125b4ebc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b4ebf jmp 0x125b4e7f */
  goto L_125b4e7f;
L_125b4ec1:;
  /* 125b4ec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b4ec4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4ec7 push eax */
  push32((uint32_t)(EAX));
  /* 125b4ec8 call 0x125a80f0 */
  push32(0x125b4ecdu); f_125a80f0();
  /* 125b4ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4ed0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b4ed3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4ed7 je 0x125b4f79 */
  if (C.zf) goto L_125b4f79;
  /* 125b4edd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b4ee0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125b4ee3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b4eea jmp 0x125b4ef5 */
  goto L_125b4ef5;
L_125b4eec:;
  /* 125b4eec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4eef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4ef2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125b4ef5:;
  /* 125b4ef5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4ef9 jae 0x125b4f6a */
  if (!C.cf) goto L_125b4f6a;
  /* 125b4efb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4efe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 125b4f01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4f04 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4f07 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125b4f0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4f0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4f10 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125b4f13 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4f14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4f17 push edx */
  push32((uint32_t)(EDX));
  /* 125b4f18 call 0x125ab0c0 */
  push32(0x125b4f1du); f_125ab0c0();
  /* 125b4f1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4f20 push eax */
  push32((uint32_t)(EAX));
  /* 125b4f21 call 0x125aaf40 */
  push32(0x125b4f26u); f_125aaf40();
  /* 125b4f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4f29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4f2c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4f2e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125b4f31 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4f34 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 125b4f37 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4f3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4f3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b4f40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4f43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4f46 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 125b4f4a push eax */
  push32((uint32_t)(EAX));
  /* 125b4f4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4f4e push ecx */
  push32((uint32_t)(ECX));
  /* 125b4f4f call 0x125ab0c0 */
  push32(0x125b4f54u); f_125ab0c0();
  /* 125b4f54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4f57 push eax */
  push32((uint32_t)(EAX));
  /* 125b4f58 call 0x125aaf40 */
  push32(0x125b4f5du); f_125aaf40();
  /* 125b4f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4f60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4f63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4f65 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125b4f68 jmp 0x125b4eec */
  goto L_125b4eec;
L_125b4f6a:;
  /* 125b4f6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4f6d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125b4f70 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b4f73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4f76 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_125b4f79:;
  /* 125b4f79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b4f7c pop esi */
  ESI = (pop32());
  /* 125b4f7d mov esp, ebp */
  ESP = (EBP);
  /* 125b4f7f pop ebp */
  EBP = (pop32());
  /* 125b4f80 ret  */
  ESPCHK(0x125b4e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f90 @ 0x125b4f90 (291 bytes, 97 insns) */
void f_125b4f90(void) {
  FTRACE(0x125b4f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b4f90 push ebp */
  push32((uint32_t)(EBP));
  /* 125b4f91 mov ebp, esp */
  EBP = (ESP);
  /* 125b4f93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b4f96 push esi */
  push32((uint32_t)(ESI));
  /* 125b4f97 mov eax, dword ptr [0x125d2c98] */
  EAX = (r32((uint32_t)(0x125d2c98)));
  /* 125b4f9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b4f9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b4fa6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b4fad jmp 0x125b4fb8 */
  goto L_125b4fb8;
L_125b4faf:;
  /* 125b4faf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4fb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4fb5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125b4fb8:;
  /* 125b4fb8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b4fbc jae 0x125b4ff2 */
  if (!C.cf) goto L_125b4ff2;
  /* 125b4fbe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4fc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4fc4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 125b4fc8 push ecx */
  push32((uint32_t)(ECX));
  /* 125b4fc9 call 0x125aaf40 */
  push32(0x125b4fceu); f_125aaf40();
  /* 125b4fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4fd1 mov esi, eax */
  ESI = (EAX);
  /* 125b4fd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b4fd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b4fd9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 125b4fdd push ecx */
  push32((uint32_t)(ECX));
  /* 125b4fde call 0x125aaf40 */
  push32(0x125b4fe3u); f_125aaf40();
  /* 125b4fe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4fe6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4fe9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125b4fed mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b4ff0 jmp 0x125b4faf */
  goto L_125b4faf;
L_125b4ff2:;
  /* 125b4ff2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b4ff5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b4ff8 push eax */
  push32((uint32_t)(EAX));
  /* 125b4ff9 call 0x125a80f0 */
  push32(0x125b4ffeu); f_125a80f0();
  /* 125b4ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5001 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b5004 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5008 je 0x125b50ab */
  if (C.zf) goto L_125b50ab;
  /* 125b500e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5011 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125b5014 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b501b jmp 0x125b5026 */
  goto L_125b5026;
L_125b501d:;
  /* 125b501d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b5020 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5023 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125b5026:;
  /* 125b5026 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b502a jae 0x125b509c */
  if (!C.cf) goto L_125b509c;
  /* 125b502c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b502f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 125b5032 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5038 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125b503b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b503e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5041 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 125b5045 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5046 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5049 push edx */
  push32((uint32_t)(EDX));
  /* 125b504a call 0x125ab0c0 */
  push32(0x125b504fu); f_125ab0c0();
  /* 125b504f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5052 push eax */
  push32((uint32_t)(EAX));
  /* 125b5053 call 0x125aaf40 */
  push32(0x125b5058u); f_125aaf40();
  /* 125b5058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b505b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b505e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5060 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125b5063 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5066 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 125b5069 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b506c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b506f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b5072 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b5075 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5078 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125b507c push eax */
  push32((uint32_t)(EAX));
  /* 125b507d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5080 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5081 call 0x125ab0c0 */
  push32(0x125b5086u); f_125ab0c0();
  /* 125b5086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5089 push eax */
  push32((uint32_t)(EAX));
  /* 125b508a call 0x125aaf40 */
  push32(0x125b508fu); f_125aaf40();
  /* 125b508f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5092 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5095 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5097 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125b509a jmp 0x125b501d */
  goto L_125b501d;
L_125b509c:;
  /* 125b509c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b509f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125b50a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b50a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b50a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_125b50ab:;
  /* 125b50ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b50ae pop esi */
  ESI = (pop32());
  /* 125b50af mov esp, ebp */
  ESP = (EBP);
  /* 125b50b1 pop ebp */
  EBP = (pop32());
  /* 125b50b2 ret  */
  ESPCHK(0x125b4f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100150c0 @ 0x125b50c0 (878 bytes, 273 insns) */
void f_125b50c0(void) {
  FTRACE(0x125b50c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b50c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b50c1 mov ebp, esp */
  EBP = (ESP);
  /* 125b50c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b50c6 push esi */
  push32((uint32_t)(ESI));
  /* 125b50c7 mov eax, dword ptr [0x125d2c98] */
  EAX = (r32((uint32_t)(0x125d2c98)));
  /* 125b50cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b50cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b50d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b50dd jmp 0x125b50e8 */
  goto L_125b50e8;
L_125b50df:;
  /* 125b50df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b50e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b50e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125b50e8:;
  /* 125b50e8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b50ec jae 0x125b5121 */
  if (!C.cf) goto L_125b5121;
  /* 125b50ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b50f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b50f4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 125b50f7 push ecx */
  push32((uint32_t)(ECX));
  /* 125b50f8 call 0x125aaf40 */
  push32(0x125b50fdu); f_125aaf40();
  /* 125b50fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5100 mov esi, eax */
  ESI = (EAX);
  /* 125b5102 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b5105 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5108 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 125b510c push ecx */
  push32((uint32_t)(ECX));
  /* 125b510d call 0x125aaf40 */
  push32(0x125b5112u); f_125aaf40();
  /* 125b5112 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5115 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5118 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125b511c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b511f jmp 0x125b50df */
  goto L_125b50df;
L_125b5121:;
  /* 125b5121 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b5128 jmp 0x125b5133 */
  goto L_125b5133;
L_125b512a:;
  /* 125b512a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b512d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5130 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125b5133:;
  /* 125b5133 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5137 jae 0x125b516d */
  if (!C.cf) goto L_125b516d;
  /* 125b5139 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b513c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b513f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 125b5143 push eax */
  push32((uint32_t)(EAX));
  /* 125b5144 call 0x125aaf40 */
  push32(0x125b5149u); f_125aaf40();
  /* 125b5149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b514c mov esi, eax */
  ESI = (EAX);
  /* 125b514e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b5151 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5154 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125b5158 push eax */
  push32((uint32_t)(EAX));
  /* 125b5159 call 0x125aaf40 */
  push32(0x125b515eu); f_125aaf40();
  /* 125b515e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5161 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5164 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125b5168 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b516b jmp 0x125b512a */
  goto L_125b512a;
L_125b516d:;
  /* 125b516d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5170 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 125b5176 push eax */
  push32((uint32_t)(EAX));
  /* 125b5177 call 0x125aaf40 */
  push32(0x125b517cu); f_125aaf40();
  /* 125b517c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b517f mov esi, eax */
  ESI = (EAX);
  /* 125b5181 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5184 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 125b518a push edx */
  push32((uint32_t)(EDX));
  /* 125b518b call 0x125aaf40 */
  push32(0x125b5190u); f_125aaf40();
  /* 125b5190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5193 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5196 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 125b519a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b519d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b51a0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 125b51a6 push edx */
  push32((uint32_t)(EDX));
  /* 125b51a7 call 0x125aaf40 */
  push32(0x125b51acu); f_125aaf40();
  /* 125b51ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b51af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b51b2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125b51b6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b51b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b51bc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 125b51c2 push ecx */
  push32((uint32_t)(ECX));
  /* 125b51c3 call 0x125aaf40 */
  push32(0x125b51c8u); f_125aaf40();
  /* 125b51c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b51cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b51ce lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125b51d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b51d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b51d8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 125b51de push edx */
  push32((uint32_t)(EDX));
  /* 125b51df call 0x125aaf40 */
  push32(0x125b51e4u); f_125aaf40();
  /* 125b51e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b51e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b51ea lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125b51ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b51f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b51f4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b51f9 push eax */
  push32((uint32_t)(EAX));
  /* 125b51fa call 0x125a80f0 */
  push32(0x125b51ffu); f_125a80f0();
  /* 125b51ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5202 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b5205 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5209 je 0x125b5426 */
  if (C.zf) goto L_125b5426;
  /* 125b520f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5212 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 125b5215 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5218 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b521e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125b5221 push 0xac */
  push32((uint32_t)(0xacu));
  /* 125b5226 mov eax, dword ptr [0x125d2c98] */
  EAX = (r32((uint32_t)(0x125d2c98)));
  /* 125b522b push eax */
  push32((uint32_t)(EAX));
  /* 125b522c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b522f push ecx */
  push32((uint32_t)(ECX));
  /* 125b5230 call 0x125ae9f0 */
  push32(0x125b5235u); f_125ae9f0();
  /* 125b5235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5238 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b523f jmp 0x125b524a */
  goto L_125b524a;
L_125b5241:;
  /* 125b5241 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b5244 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5247 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125b524a:;
  /* 125b524a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b524e jae 0x125b52be */
  if (!C.cf) goto L_125b52be;
  /* 125b5250 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b5253 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b5256 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5259 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 125b525c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b525f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5262 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125b5265 push edx */
  push32((uint32_t)(EDX));
  /* 125b5266 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5269 push eax */
  push32((uint32_t)(EAX));
  /* 125b526a call 0x125ab0c0 */
  push32(0x125b526fu); f_125ab0c0();
  /* 125b526f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5272 push eax */
  push32((uint32_t)(EAX));
  /* 125b5273 call 0x125aaf40 */
  push32(0x125b5278u); f_125aaf40();
  /* 125b5278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b527b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b527e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125b5282 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125b5285 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b5288 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b528b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b528e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 125b5292 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b5295 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5298 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 125b529c push edx */
  push32((uint32_t)(EDX));
  /* 125b529d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b52a0 push eax */
  push32((uint32_t)(EAX));
  /* 125b52a1 call 0x125ab0c0 */
  push32(0x125b52a6u); f_125ab0c0();
  /* 125b52a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b52a9 push eax */
  push32((uint32_t)(EAX));
  /* 125b52aa call 0x125aaf40 */
  push32(0x125b52afu); f_125aaf40();
  /* 125b52af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b52b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b52b5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125b52b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125b52bc jmp 0x125b5241 */
  goto L_125b5241;
L_125b52be:;
  /* 125b52be mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b52c5 jmp 0x125b52d0 */
  goto L_125b52d0;
L_125b52c7:;
  /* 125b52c7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b52ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b52cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125b52d0:;
  /* 125b52d0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b52d4 jae 0x125b5346 */
  if (!C.cf) goto L_125b5346;
  /* 125b52d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b52d9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b52dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b52df mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 125b52e3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b52e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b52e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 125b52ed push eax */
  push32((uint32_t)(EAX));
  /* 125b52ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b52f1 push ecx */
  push32((uint32_t)(ECX));
  /* 125b52f2 call 0x125ab0c0 */
  push32(0x125b52f7u); f_125ab0c0();
  /* 125b52f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b52fa push eax */
  push32((uint32_t)(EAX));
  /* 125b52fb call 0x125aaf40 */
  push32(0x125b5300u); f_125aaf40();
  /* 125b5300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5303 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5306 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125b530a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b530d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b5310 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b5313 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5316 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 125b531a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b531d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5320 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125b5324 push eax */
  push32((uint32_t)(EAX));
  /* 125b5325 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5328 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5329 call 0x125ab0c0 */
  push32(0x125b532eu); f_125ab0c0();
  /* 125b532e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5331 push eax */
  push32((uint32_t)(EAX));
  /* 125b5332 call 0x125aaf40 */
  push32(0x125b5337u); f_125aaf40();
  /* 125b5337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b533a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b533d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125b5341 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b5344 jmp 0x125b52c7 */
  goto L_125b52c7;
L_125b5346:;
  /* 125b5346 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b5349 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b534c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 125b5352 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5355 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 125b535b push ecx */
  push32((uint32_t)(ECX));
  /* 125b535c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b535f push edx */
  push32((uint32_t)(EDX));
  /* 125b5360 call 0x125ab0c0 */
  push32(0x125b5365u); f_125ab0c0();
  /* 125b5365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5368 push eax */
  push32((uint32_t)(EAX));
  /* 125b5369 call 0x125aaf40 */
  push32(0x125b536eu); f_125aaf40();
  /* 125b536e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5371 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5374 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125b5378 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125b537b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b537e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5381 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 125b5387 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b538a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 125b5390 push eax */
  push32((uint32_t)(EAX));
  /* 125b5391 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5394 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5395 call 0x125ab0c0 */
  push32(0x125b539au); f_125ab0c0();
  /* 125b539a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b539d push eax */
  push32((uint32_t)(EAX));
  /* 125b539e call 0x125aaf40 */
  push32(0x125b53a3u); f_125aaf40();
  /* 125b53a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b53a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b53a9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125b53ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b53b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b53b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b53b6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 125b53bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b53bf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 125b53c5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b53c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b53c9 push edx */
  push32((uint32_t)(EDX));
  /* 125b53ca call 0x125ab0c0 */
  push32(0x125b53cfu); f_125ab0c0();
  /* 125b53cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b53d2 push eax */
  push32((uint32_t)(EAX));
  /* 125b53d3 call 0x125aaf40 */
  push32(0x125b53d8u); f_125aaf40();
  /* 125b53d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b53db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b53de lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 125b53e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125b53e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b53e8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b53eb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 125b53f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b53f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 125b53fa push eax */
  push32((uint32_t)(EAX));
  /* 125b53fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b53fe push ecx */
  push32((uint32_t)(ECX));
  /* 125b53ff call 0x125ab0c0 */
  push32(0x125b5404u); f_125ab0c0();
  /* 125b5404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5407 push eax */
  push32((uint32_t)(EAX));
  /* 125b5408 call 0x125aaf40 */
  push32(0x125b540du); f_125aaf40();
  /* 125b540d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5410 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5413 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 125b5417 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b541a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b541d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5420 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_125b5426:;
  /* 125b5426 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5429 pop esi */
  ESI = (pop32());
  /* 125b542a mov esp, ebp */
  ESP = (EBP);
  /* 125b542c pop ebp */
  EBP = (pop32());
  /* 125b542d ret  */
  ESPCHK(0x125b50c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015430 @ 0x125b5430 (31 bytes, 15 insns) */
void f_125b5430(void) {
  FTRACE(0x125b5430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b5430 push ebp */
  push32((uint32_t)(EBP));
  /* 125b5431 mov ebp, esp */
  EBP = (ESP);
  /* 125b5433 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b5435 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5438 push eax */
  push32((uint32_t)(EAX));
  /* 125b5439 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b543c push ecx */
  push32((uint32_t)(ECX));
  /* 125b543d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5440 push edx */
  push32((uint32_t)(EDX));
  /* 125b5441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5444 push eax */
  push32((uint32_t)(EAX));
  /* 125b5445 call 0x125b5450 */
  push32(0x125b544au); f_125b5450();
  /* 125b544a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b544d pop ebp */
  EBP = (pop32());
  /* 125b544e ret  */
  ESPCHK(0x125b5430u, _esp0);
  ESP += 4; return;
}

/* FUN_10015450 @ 0x125b5450 (394 bytes, 123 insns) */
void f_125b5450(void) {
  FTRACE(0x125b5450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b5450 push ebp */
  push32((uint32_t)(EBP));
  /* 125b5451 mov ebp, esp */
  EBP = (ESP);
  /* 125b5453 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5456 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5459 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b545c push 0x125d3c6c */
  push32((uint32_t)(0x125d3c6cu));
  /* 125b5461 call dword ptr [0x125d6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6388))), 0x125b5467u);
  /* 125b5467 cmp dword ptr [0x125d3c5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b546e je 0x125b548e */
  if (C.zf) goto L_125b548e;
  /* 125b5470 push 0x125d3c6c */
  push32((uint32_t)(0x125d3c6cu));
  /* 125b5475 call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125b547bu);
  /* 125b547b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b547d call 0x125abb10 */
  push32(0x125b5482u); f_125abb10();
  /* 125b5482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5485 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 125b548c jmp 0x125b5495 */
  goto L_125b5495;
L_125b548e:;
  /* 125b548e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125b5495:;
  /* 125b5495 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5499 jne 0x125b54a6 */
  if (!C.zf) goto L_125b54a6;
  /* 125b549b mov ecx, dword ptr [0x125d2c98] */
  ECX = (r32((uint32_t)(0x125d2c98)));
  /* 125b54a1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125b54a4 jmp 0x125b54ac */
  goto L_125b54ac;
L_125b54a6:;
  /* 125b54a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b54a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125b54ac:;
  /* 125b54ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b54af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b54b2:;
  /* 125b54b2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b54b6 jbe 0x125b55a3 */
  if ((C.cf||C.zf)) goto L_125b55a3;
  /* 125b54bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b54bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b54c1 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 125b54c4 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b54c8 je 0x125b54d2 */
  if (C.zf) goto L_125b54d2;
  /* 125b54ca cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b54ce je 0x125b54d7 */
  if (C.zf) goto L_125b54d7;
  /* 125b54d0 jmp 0x125b5531 */
  goto L_125b5531;
L_125b54d2:;
  /* 125b54d2 jmp 0x125b55a3 */
  goto L_125b55a3;
L_125b54d7:;
  /* 125b54d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b54da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b54dd mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 125b54e0 mov dword ptr [0x125d3c48], 0 */
  w32((uint32_t)(0x125d3c48), (0x0u));
  /* 125b54ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b54ed movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b54f0 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b54f3 jne 0x125b5508 */
  if (!C.zf) goto L_125b5508;
  /* 125b54f5 mov dword ptr [0x125d3c48], 1 */
  w32((uint32_t)(0x125d3c48), (0x1u));
  /* 125b54ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5502 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5505 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_125b5508:;
  /* 125b5508 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b550b push ecx */
  push32((uint32_t)(ECX));
  /* 125b550c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 125b550f push edx */
  push32((uint32_t)(EDX));
  /* 125b5510 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 125b5513 push eax */
  push32((uint32_t)(EAX));
  /* 125b5514 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5517 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5518 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b551b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b551d push eax */
  push32((uint32_t)(EAX));
  /* 125b551e call 0x125b55e0 */
  push32(0x125b5523u); f_125b55e0();
  /* 125b5523 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5526 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5529 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b552c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125b552f jmp 0x125b559e */
  goto L_125b559e;
L_125b5531:;
  /* 125b5531 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b5536 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b5538 mov ecx, dword ptr [0x125d1c98] */
  ECX = (r32((uint32_t)(0x125d1c98)));
  /* 125b553e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b5540 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125b5544 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125b554a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b554c je 0x125b5579 */
  if (C.zf) goto L_125b5579;
  /* 125b554e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5552 jbe 0x125b5579 */
  if ((C.cf||C.zf)) goto L_125b5579;
  /* 125b5554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5557 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b555a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b555c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125b555e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5561 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5564 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b5567 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b556a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b556d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125b5570 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5573 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5576 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125b5579:;
  /* 125b5579 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b557c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b557f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b5581 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125b5583 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5586 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5589 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b558c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b558f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5592 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 125b5595 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5598 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b559b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125b559e:;
  /* 125b559e jmp 0x125b54b2 */
  goto L_125b54b2;
L_125b55a3:;
  /* 125b55a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b55a7 je 0x125b55b5 */
  if (C.zf) goto L_125b55b5;
  /* 125b55a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b55ab call 0x125abbb0 */
  push32(0x125b55b0u); f_125abbb0();
  /* 125b55b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b55b3 jmp 0x125b55c0 */
  goto L_125b55c0;
L_125b55b5:;
  /* 125b55b5 push 0x125d3c6c */
  push32((uint32_t)(0x125d3c6cu));
  /* 125b55ba call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125b55c0u);
L_125b55c0:;
  /* 125b55c0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b55c4 jbe 0x125b55d4 */
  if ((C.cf||C.zf)) goto L_125b55d4;
  /* 125b55c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b55c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125b55cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b55cf sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b55d2 jmp 0x125b55d6 */
  goto L_125b55d6;
L_125b55d4:;
  /* 125b55d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b55d6:;
  /* 125b55d6 mov esp, ebp */
  ESP = (EBP);
  /* 125b55d8 pop ebp */
  EBP = (pop32());
  /* 125b55d9 ret  */
  ESPCHK(0x125b5450u, _esp0);
  ESP += 4; return;
}

/* FUN_100155e0 @ 0x125b55e0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_125b55e0(void) {
  FTRACE(0x125b55e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b55e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b55e1 mov ebp, esp */
  EBP = (ESP);
  /* 125b55e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b55e6 push esi */
  push32((uint32_t)(ESI));
  /* 125b55e7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 125b55eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b55ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b55f1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b55f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b55f7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b55fb ja 0x125b5b48 */
  if ((!C.cf&&!C.zf)) goto L_125b5b48;
  /* 125b5601 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5604 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b5606 mov dl, byte ptr [eax + 0x125b5ba9] */
  DL = (r8((uint32_t)(EAX + 0x125b5ba9)));
  /* 125b560c jmp dword ptr [edx*4 + 0x125b5b4d] */
  switch (EDX) {
    case 0: goto L_125b5b26;
    case 1: goto L_125b5635;
    case 2: goto L_125b567b;
    case 3: goto L_125b57c8;
    case 4: goto L_125b57f0;
    case 5: goto L_125b588f;
    case 6: goto L_125b58fb;
    case 7: goto L_125b5924;
    case 8: goto L_125b5965;
    case 9: goto L_125b5a47;
    case 10: goto L_125b5aae;
    case 11: goto L_125b5afb;
    case 12: goto L_125b5613;
    case 13: goto L_125b5658;
    case 14: goto L_125b569e;
    case 15: goto L_125b579e;
    case 16: goto L_125b5835;
    case 17: goto L_125b5862;
    case 18: goto L_125b58b7;
    case 19: goto L_125b593b;
    case 20: goto L_125b59e9;
    case 21: goto L_125b5a78;
    case 22: goto L_125b5b48;
    default: x86_unimpl("switch@0x125b560c out of table"); return;
  }
L_125b5613:;
  /* 125b5613 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5616 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5617 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b561a push edx */
  push32((uint32_t)(EDX));
  /* 125b561b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b561e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 125b5621 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5624 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 125b5627 push eax */
  push32((uint32_t)(EAX));
  /* 125b5628 call 0x125b5c00 */
  push32(0x125b562du); f_125b5c00();
  /* 125b562d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5630 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5635:;
  /* 125b5635 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5638 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5639 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b563c push edx */
  push32((uint32_t)(EDX));
  /* 125b563d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5640 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 125b5643 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5646 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 125b564a push eax */
  push32((uint32_t)(EAX));
  /* 125b564b call 0x125b5c00 */
  push32(0x125b5650u); f_125b5c00();
  /* 125b5650 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5653 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5658:;
  /* 125b5658 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b565b push ecx */
  push32((uint32_t)(ECX));
  /* 125b565c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b565f push edx */
  push32((uint32_t)(EDX));
  /* 125b5660 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5663 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125b5666 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5669 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 125b566d push eax */
  push32((uint32_t)(EAX));
  /* 125b566e call 0x125b5c00 */
  push32(0x125b5673u); f_125b5c00();
  /* 125b5673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5676 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b567b:;
  /* 125b567b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b567e push ecx */
  push32((uint32_t)(ECX));
  /* 125b567f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5682 push edx */
  push32((uint32_t)(EDX));
  /* 125b5683 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5686 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 125b5689 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b568c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 125b5690 push eax */
  push32((uint32_t)(EAX));
  /* 125b5691 call 0x125b5c00 */
  push32(0x125b5696u); f_125b5c00();
  /* 125b5696 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5699 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b569e:;
  /* 125b569e cmp dword ptr [0x125d3c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b56a5 je 0x125b5726 */
  if (C.zf) goto L_125b5726;
  /* 125b56a7 mov dword ptr [0x125d3c48], 0 */
  w32((uint32_t)(0x125d3c48), (0x0u));
  /* 125b56b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b56b4 push ecx */
  push32((uint32_t)(ECX));
  /* 125b56b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b56b8 push edx */
  push32((uint32_t)(EDX));
  /* 125b56b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b56bc push eax */
  push32((uint32_t)(EAX));
  /* 125b56bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b56c0 push ecx */
  push32((uint32_t)(ECX));
  /* 125b56c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b56c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 125b56ca push eax */
  push32((uint32_t)(EAX));
  /* 125b56cb call 0x125b5db0 */
  push32(0x125b56d0u); f_125b5db0();
  /* 125b56d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b56d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b56d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b56d9 jne 0x125b56e0 */
  if (!C.zf) goto L_125b56e0;
  /* 125b56db jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b56e0:;
  /* 125b56e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b56e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b56e5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 125b56e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b56eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b56ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b56f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b56f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b56f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b56f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b56fa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b56fd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5700 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b5702 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5705 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5706 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5709 push edx */
  push32((uint32_t)(EDX));
  /* 125b570a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b570d push eax */
  push32((uint32_t)(EAX));
  /* 125b570e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5711 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5712 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5715 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 125b571b push eax */
  push32((uint32_t)(EAX));
  /* 125b571c call 0x125b5db0 */
  push32(0x125b5721u); f_125b5db0();
  /* 125b5721 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5724 jmp 0x125b5799 */
  goto L_125b5799;
L_125b5726:;
  /* 125b5726 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5729 push ecx */
  push32((uint32_t)(ECX));
  /* 125b572a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b572d push edx */
  push32((uint32_t)(EDX));
  /* 125b572e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5731 push eax */
  push32((uint32_t)(EAX));
  /* 125b5732 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5735 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5736 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5739 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 125b573f push eax */
  push32((uint32_t)(EAX));
  /* 125b5740 call 0x125b5db0 */
  push32(0x125b5745u); f_125b5db0();
  /* 125b5745 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5748 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b574b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b574e jne 0x125b5755 */
  if (!C.zf) goto L_125b5755;
  /* 125b5750 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5755:;
  /* 125b5755 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5758 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b575a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 125b575d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5760 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b5762 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5765 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5768 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b576a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b576d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b576f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5772 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5775 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b5777 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b577a push ecx */
  push32((uint32_t)(ECX));
  /* 125b577b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b577e push edx */
  push32((uint32_t)(EDX));
  /* 125b577f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5782 push eax */
  push32((uint32_t)(EAX));
  /* 125b5783 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5786 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5787 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b578a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 125b5790 push eax */
  push32((uint32_t)(EAX));
  /* 125b5791 call 0x125b5db0 */
  push32(0x125b5796u); f_125b5db0();
  /* 125b5796 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b5799:;
  /* 125b5799 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b579e:;
  /* 125b579e mov ecx, dword ptr [0x125d3c48] */
  ECX = (r32((uint32_t)(0x125d3c48)));
  /* 125b57a4 mov dword ptr [0x125d3c58], ecx */
  w32((uint32_t)(0x125d3c58), (ECX));
  /* 125b57aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b57ad push edx */
  push32((uint32_t)(EDX));
  /* 125b57ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b57b1 push eax */
  push32((uint32_t)(EAX));
  /* 125b57b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b57b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b57b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 125b57ba push edx */
  push32((uint32_t)(EDX));
  /* 125b57bb call 0x125b5c50 */
  push32(0x125b57c0u); f_125b5c50();
  /* 125b57c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b57c3 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b57c8:;
  /* 125b57c8 mov eax, dword ptr [0x125d3c48] */
  EAX = (r32((uint32_t)(0x125d3c48)));
  /* 125b57cd mov dword ptr [0x125d3c58], eax */
  w32((uint32_t)(0x125d3c58), (EAX));
  /* 125b57d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b57d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b57d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b57d9 push edx */
  push32((uint32_t)(EDX));
  /* 125b57da push 2 */
  push32((uint32_t)(0x2u));
  /* 125b57dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b57df mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 125b57e2 push ecx */
  push32((uint32_t)(ECX));
  /* 125b57e3 call 0x125b5c50 */
  push32(0x125b57e8u); f_125b5c50();
  /* 125b57e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b57eb jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b57f0:;
  /* 125b57f0 mov edx, dword ptr [0x125d3c48] */
  EDX = (r32((uint32_t)(0x125d3c48)));
  /* 125b57f6 mov dword ptr [0x125d3c58], edx */
  w32((uint32_t)(0x125d3c58), (EDX));
  /* 125b57fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b57ff mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 125b5802 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b5803 mov ecx, 0xc */
  ECX = (0xcu);
  /* 125b5808 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b580a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b580d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5811 jne 0x125b581a */
  if (!C.zf) goto L_125b581a;
  /* 125b5813 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_125b581a:;
  /* 125b581a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b581d push edx */
  push32((uint32_t)(EDX));
  /* 125b581e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5821 push eax */
  push32((uint32_t)(EAX));
  /* 125b5822 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b5824 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5827 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5828 call 0x125b5c50 */
  push32(0x125b582du); f_125b5c50();
  /* 125b582d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5830 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5835:;
  /* 125b5835 mov edx, dword ptr [0x125d3c48] */
  EDX = (r32((uint32_t)(0x125d3c48)));
  /* 125b583b mov dword ptr [0x125d3c58], edx */
  w32((uint32_t)(0x125d3c58), (EDX));
  /* 125b5841 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5844 push eax */
  push32((uint32_t)(EAX));
  /* 125b5845 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5848 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5849 push 3 */
  push32((uint32_t)(0x3u));
  /* 125b584b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b584e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125b5851 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5854 push eax */
  push32((uint32_t)(EAX));
  /* 125b5855 call 0x125b5c50 */
  push32(0x125b585au); f_125b5c50();
  /* 125b585a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b585d jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5862:;
  /* 125b5862 mov ecx, dword ptr [0x125d3c48] */
  ECX = (r32((uint32_t)(0x125d3c48)));
  /* 125b5868 mov dword ptr [0x125d3c58], ecx */
  w32((uint32_t)(0x125d3c58), (ECX));
  /* 125b586e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5871 push edx */
  push32((uint32_t)(EDX));
  /* 125b5872 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5875 push eax */
  push32((uint32_t)(EAX));
  /* 125b5876 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b5878 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b587b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 125b587e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5881 push edx */
  push32((uint32_t)(EDX));
  /* 125b5882 call 0x125b5c50 */
  push32(0x125b5887u); f_125b5c50();
  /* 125b5887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b588a jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b588f:;
  /* 125b588f mov eax, dword ptr [0x125d3c48] */
  EAX = (r32((uint32_t)(0x125d3c48)));
  /* 125b5894 mov dword ptr [0x125d3c58], eax */
  w32((uint32_t)(0x125d3c58), (EAX));
  /* 125b5899 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b589c push ecx */
  push32((uint32_t)(ECX));
  /* 125b589d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b58a0 push edx */
  push32((uint32_t)(EDX));
  /* 125b58a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b58a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b58a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 125b58a9 push ecx */
  push32((uint32_t)(ECX));
  /* 125b58aa call 0x125b5c50 */
  push32(0x125b58afu); f_125b5c50();
  /* 125b58af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b58b2 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b58b7:;
  /* 125b58b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b58ba cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b58be jg 0x125b58dc */
  if ((!C.zf&&C.sf==C.of)) goto L_125b58dc;
  /* 125b58c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b58c3 push eax */
  push32((uint32_t)(EAX));
  /* 125b58c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b58c7 push ecx */
  push32((uint32_t)(ECX));
  /* 125b58c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b58cb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 125b58d1 push eax */
  push32((uint32_t)(EAX));
  /* 125b58d2 call 0x125b5c00 */
  push32(0x125b58d7u); f_125b5c00();
  /* 125b58d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b58da jmp 0x125b58f6 */
  goto L_125b58f6;
L_125b58dc:;
  /* 125b58dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b58df push ecx */
  push32((uint32_t)(ECX));
  /* 125b58e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b58e3 push edx */
  push32((uint32_t)(EDX));
  /* 125b58e4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b58e7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 125b58ed push ecx */
  push32((uint32_t)(ECX));
  /* 125b58ee call 0x125b5c00 */
  push32(0x125b58f3u); f_125b5c00();
  /* 125b58f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b58f6:;
  /* 125b58f6 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b58fb:;
  /* 125b58fb mov edx, dword ptr [0x125d3c48] */
  EDX = (r32((uint32_t)(0x125d3c48)));
  /* 125b5901 mov dword ptr [0x125d3c58], edx */
  w32((uint32_t)(0x125d3c58), (EDX));
  /* 125b5907 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b590a push eax */
  push32((uint32_t)(EAX));
  /* 125b590b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b590e push ecx */
  push32((uint32_t)(ECX));
  /* 125b590f push 2 */
  push32((uint32_t)(0x2u));
  /* 125b5911 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5914 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b5916 push eax */
  push32((uint32_t)(EAX));
  /* 125b5917 call 0x125b5c50 */
  push32(0x125b591cu); f_125b5c50();
  /* 125b591c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b591f jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5924:;
  /* 125b5924 mov ecx, dword ptr [0x125d3c48] */
  ECX = (r32((uint32_t)(0x125d3c48)));
  /* 125b592a mov dword ptr [0x125d3c58], ecx */
  w32((uint32_t)(0x125d3c58), (ECX));
  /* 125b5930 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5933 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 125b5936 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b5939 jmp 0x125b598d */
  goto L_125b598d;
L_125b593b:;
  /* 125b593b mov ecx, dword ptr [0x125d3c48] */
  ECX = (r32((uint32_t)(0x125d3c48)));
  /* 125b5941 mov dword ptr [0x125d3c58], ecx */
  w32((uint32_t)(0x125d3c58), (ECX));
  /* 125b5947 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b594a push edx */
  push32((uint32_t)(EDX));
  /* 125b594b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b594e push eax */
  push32((uint32_t)(EAX));
  /* 125b594f push 1 */
  push32((uint32_t)(0x1u));
  /* 125b5951 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5954 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 125b5957 push edx */
  push32((uint32_t)(EDX));
  /* 125b5958 call 0x125b5c50 */
  push32(0x125b595du); f_125b5c50();
  /* 125b595d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5960 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5965:;
  /* 125b5965 mov eax, dword ptr [0x125d3c48] */
  EAX = (r32((uint32_t)(0x125d3c48)));
  /* 125b596a mov dword ptr [0x125d3c58], eax */
  w32((uint32_t)(0x125d3c58), (EAX));
  /* 125b596f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5972 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5976 jne 0x125b5981 */
  if (!C.zf) goto L_125b5981;
  /* 125b5978 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 125b597f jmp 0x125b598d */
  goto L_125b598d;
L_125b5981:;
  /* 125b5981 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5984 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 125b5987 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b598a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125b598d:;
  /* 125b598d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5990 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125b5993 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5996 jge 0x125b59a1 */
  if ((C.sf==C.of)) goto L_125b59a1;
  /* 125b5998 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b599f jmp 0x125b59ce */
  goto L_125b59ce;
L_125b59a1:;
  /* 125b59a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b59a4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125b59a7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b59a8 mov ecx, 7 */
  ECX = (0x7u);
  /* 125b59ad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b59af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b59b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b59b5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125b59b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b59b9 mov ecx, 7 */
  ECX = (0x7u);
  /* 125b59be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b59c0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b59c3 jl 0x125b59ce */
  if ((C.sf!=C.of)) goto L_125b59ce;
  /* 125b59c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b59c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b59cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_125b59ce:;
  /* 125b59ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b59d1 push eax */
  push32((uint32_t)(EAX));
  /* 125b59d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b59d5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b59d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b59d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b59db push edx */
  push32((uint32_t)(EDX));
  /* 125b59dc call 0x125b5c50 */
  push32(0x125b59e1u); f_125b5c50();
  /* 125b59e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b59e4 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b59e9:;
  /* 125b59e9 cmp dword ptr [0x125d3c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b59f0 je 0x125b5a20 */
  if (C.zf) goto L_125b5a20;
  /* 125b59f2 mov dword ptr [0x125d3c48], 0 */
  w32((uint32_t)(0x125d3c48), (0x0u));
  /* 125b59fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b59ff push eax */
  push32((uint32_t)(EAX));
  /* 125b5a00 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5a03 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5a04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5a07 push edx */
  push32((uint32_t)(EDX));
  /* 125b5a08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5a0b push eax */
  push32((uint32_t)(EAX));
  /* 125b5a0c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5a0f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 125b5a15 push edx */
  push32((uint32_t)(EDX));
  /* 125b5a16 call 0x125b5db0 */
  push32(0x125b5a1bu); f_125b5db0();
  /* 125b5a1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5a1e jmp 0x125b5a42 */
  goto L_125b5a42;
L_125b5a20:;
  /* 125b5a20 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5a23 push eax */
  push32((uint32_t)(EAX));
  /* 125b5a24 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5a27 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5a28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5a2b push edx */
  push32((uint32_t)(EDX));
  /* 125b5a2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5a2f push eax */
  push32((uint32_t)(EAX));
  /* 125b5a30 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5a33 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 125b5a39 push edx */
  push32((uint32_t)(EDX));
  /* 125b5a3a call 0x125b5db0 */
  push32(0x125b5a3fu); f_125b5db0();
  /* 125b5a3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b5a42:;
  /* 125b5a42 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5a47:;
  /* 125b5a47 mov dword ptr [0x125d3c48], 0 */
  w32((uint32_t)(0x125d3c48), (0x0u));
  /* 125b5a51 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5a54 push eax */
  push32((uint32_t)(EAX));
  /* 125b5a55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5a58 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5a59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5a5c push edx */
  push32((uint32_t)(EDX));
  /* 125b5a5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5a60 push eax */
  push32((uint32_t)(EAX));
  /* 125b5a61 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5a64 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 125b5a6a push edx */
  push32((uint32_t)(EDX));
  /* 125b5a6b call 0x125b5db0 */
  push32(0x125b5a70u); f_125b5db0();
  /* 125b5a70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5a73 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5a78:;
  /* 125b5a78 mov eax, dword ptr [0x125d3c48] */
  EAX = (r32((uint32_t)(0x125d3c48)));
  /* 125b5a7d mov dword ptr [0x125d3c58], eax */
  w32((uint32_t)(0x125d3c58), (EAX));
  /* 125b5a82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5a85 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 125b5a88 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b5a89 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 125b5a8e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b5a90 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b5a93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5a96 push edx */
  push32((uint32_t)(EDX));
  /* 125b5a97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5a9a push eax */
  push32((uint32_t)(EAX));
  /* 125b5a9b push 2 */
  push32((uint32_t)(0x2u));
  /* 125b5a9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5aa1 call 0x125b5c50 */
  push32(0x125b5aa6u); f_125b5c50();
  /* 125b5aa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5aa9 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5aae:;
  /* 125b5aae mov edx, dword ptr [0x125d3c48] */
  EDX = (r32((uint32_t)(0x125d3c48)));
  /* 125b5ab4 mov dword ptr [0x125d3c58], edx */
  w32((uint32_t)(0x125d3c58), (EDX));
  /* 125b5aba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5abd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 125b5ac0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b5ac1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 125b5ac6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b5ac8 mov ecx, eax */
  ECX = (EAX);
  /* 125b5aca add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5acd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b5ad0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5ad3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125b5ad6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b5ad7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 125b5adc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b5ade add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5ae0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b5ae3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5ae6 push eax */
  push32((uint32_t)(EAX));
  /* 125b5ae7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5aea push ecx */
  push32((uint32_t)(ECX));
  /* 125b5aeb push 4 */
  push32((uint32_t)(0x4u));
  /* 125b5aed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5af0 push edx */
  push32((uint32_t)(EDX));
  /* 125b5af1 call 0x125b5c50 */
  push32(0x125b5af6u); f_125b5c50();
  /* 125b5af6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5af9 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5afb:;
  /* 125b5afb call 0x125b6c10 */
  push32(0x125b5b00u); f_125b6c10();
  /* 125b5b00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5b03 push eax */
  push32((uint32_t)(EAX));
  /* 125b5b04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5b07 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5b08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5b0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b5b0d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5b11 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 125b5b14 mov ecx, dword ptr [eax*4 + 0x125d2e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x125d2e1c)));
  /* 125b5b1b push ecx */
  push32((uint32_t)(ECX));
  /* 125b5b1c call 0x125b5c00 */
  push32(0x125b5b21u); f_125b5c00();
  /* 125b5b21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5b24 jmp 0x125b5b48 */
  goto L_125b5b48;
L_125b5b26:;
  /* 125b5b26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5b29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b5b2b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 125b5b2e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5b31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b5b33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5b36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5b39 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b5b3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5b3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b5b40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5b43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5b46 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125b5b48:;
  /* 125b5b48 pop esi */
  ESI = (pop32());
  /* 125b5b49 mov esp, ebp */
  ESP = (EBP);
  /* 125b5b4b pop ebp */
  EBP = (pop32());
  /* 125b5b4c ret  */
  ESPCHK(0x125b55e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x125b5c00 (72 bytes, 30 insns) */
void f_125b5c00(void) {
  FTRACE(0x125b5c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b5c00 push ebp */
  push32((uint32_t)(EBP));
  /* 125b5c01 mov ebp, esp */
  EBP = (ESP);
L_125b5c03:;
  /* 125b5c03 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5c06 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5c09 je 0x125b5c46 */
  if (C.zf) goto L_125b5c46;
  /* 125b5c0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5c0e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b5c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b5c13 je 0x125b5c46 */
  if (C.zf) goto L_125b5c46;
  /* 125b5c15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5c18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b5c1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5c1d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b5c1f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125b5c21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5c24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b5c26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5c29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5c2c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b5c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5c31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5c34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125b5c37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5c3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b5c3c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5c3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5c42 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125b5c44 jmp 0x125b5c03 */
  goto L_125b5c03;
L_125b5c46:;
  /* 125b5c46 pop ebp */
  EBP = (pop32());
  /* 125b5c47 ret  */
  ESPCHK(0x125b5c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c50 @ 0x125b5c50 (173 bytes, 64 insns) */
void f_125b5c50(void) {
  FTRACE(0x125b5c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b5c50 push ebp */
  push32((uint32_t)(EBP));
  /* 125b5c51 mov ebp, esp */
  EBP = (ESP);
  /* 125b5c53 push ecx */
  push32((uint32_t)(ECX));
  /* 125b5c54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b5c5b cmp dword ptr [0x125d3c58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5c62 je 0x125b5c7a */
  if (C.zf) goto L_125b5c7a;
  /* 125b5c64 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5c67 push eax */
  push32((uint32_t)(EAX));
  /* 125b5c68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5c6b push ecx */
  push32((uint32_t)(ECX));
  /* 125b5c6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5c6f push edx */
  push32((uint32_t)(EDX));
  /* 125b5c70 call 0x125b5d00 */
  push32(0x125b5c75u); f_125b5d00();
  /* 125b5c75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5c78 jmp 0x125b5cf9 */
  goto L_125b5cf9;
L_125b5c7a:;
  /* 125b5c7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5c80 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5c82 jae 0x125b5cf0 */
  if (!C.cf) goto L_125b5cf0;
  /* 125b5c84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5c87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5c8a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 125b5c8d jmp 0x125b5c98 */
  goto L_125b5c98;
L_125b5c8f:;
  /* 125b5c8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5c92 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5c95 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_125b5c98:;
  /* 125b5c98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5c9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5c9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b5ca0 je 0x125b5cd4 */
  if (C.zf) goto L_125b5cd4;
  /* 125b5ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5ca5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b5ca6 mov ecx, 0xa */
  ECX = (0xau);
  /* 125b5cab idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b5cad add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5cb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5cb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b5cb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5cb8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 125b5cbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5cbe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b5cbf mov ecx, 0xa */
  ECX = (0xau);
  /* 125b5cc4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b5cc6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b5cc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5ccc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5ccf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b5cd2 jmp 0x125b5c8f */
  goto L_125b5c8f;
L_125b5cd4:;
  /* 125b5cd4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5cd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b5cd9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5cdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5cdf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125b5ce1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5ce4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b5ce6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5ce9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5cec mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125b5cee jmp 0x125b5cf9 */
  goto L_125b5cf9;
L_125b5cf0:;
  /* 125b5cf0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5cf3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_125b5cf9:;
  /* 125b5cf9 mov esp, ebp */
  ESP = (EBP);
  /* 125b5cfb pop ebp */
  EBP = (pop32());
  /* 125b5cfc ret  */
  ESPCHK(0x125b5c50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x125b5d00 (172 bytes, 65 insns) */
void f_125b5d00(void) {
  FTRACE(0x125b5d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b5d00 push ebp */
  push32((uint32_t)(EBP));
  /* 125b5d01 mov ebp, esp */
  EBP = (ESP);
  /* 125b5d03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5d06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5d09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b5d0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b5d0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5d11 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5d14 jbe 0x125b5d5b */
  if ((C.cf||C.zf)) goto L_125b5d5b;
L_125b5d16:;
  /* 125b5d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5d19 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b5d1a mov ecx, 0xa */
  ECX = (0xau);
  /* 125b5d1f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b5d21 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5d27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125b5d29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5d2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5d2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b5d32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5d35 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b5d37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5d3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5d3d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125b5d3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5d42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b5d43 mov ecx, 0xa */
  ECX = (0xau);
  /* 125b5d48 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b5d4a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b5d4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5d51 jle 0x125b5d5b */
  if ((C.zf||C.sf!=C.of)) goto L_125b5d5b;
  /* 125b5d53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b5d56 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5d59 ja 0x125b5d16 */
  if ((!C.cf&&!C.zf)) goto L_125b5d16;
L_125b5d5b:;
  /* 125b5d5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5d5e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b5d60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b5d63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5d66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5d69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125b5d6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5d6e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5d71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125b5d74:;
  /* 125b5d74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5d77 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b5d79 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 125b5d7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5d7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b5d82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b5d84 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125b5d86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5d89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5d8c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b5d8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b5d92 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 125b5d95 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 125b5d97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b5d9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5d9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b5da0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b5da3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5da6 jb 0x125b5d74 */
  if (C.cf) goto L_125b5d74;
  /* 125b5da8 mov esp, ebp */
  ESP = (EBP);
  /* 125b5daa pop ebp */
  EBP = (pop32());
  /* 125b5dab ret  */
  ESPCHK(0x125b5d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015db0 @ 0x125b5db0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_125b5db0(void) {
  FTRACE(0x125b5db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b5db0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b5db1 mov ebp, esp */
  EBP = (ESP);
  /* 125b5db3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_125b5db6:;
  /* 125b5db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5db9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b5dbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b5dbe je 0x125b622c */
  if (C.zf) goto L_125b622c;
  /* 125b5dc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5dc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5dca je 0x125b622c */
  if (C.zf) goto L_125b622c;
  /* 125b5dd0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 125b5dd4 mov dword ptr [0x125d3c58], 0 */
  w32((uint32_t)(0x125d3c58), (0x0u));
  /* 125b5dde mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125b5de5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5de8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b5deb jmp 0x125b5df6 */
  goto L_125b5df6;
L_125b5ded:;
  /* 125b5ded mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5df0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5df3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_125b5df6:;
  /* 125b5df6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5df9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b5dfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5dff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b5e02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5e05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5e08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b5e0b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5e0d jne 0x125b5e11 */
  if (!C.zf) goto L_125b5e11;
  /* 125b5e0f jmp 0x125b5ded */
  goto L_125b5ded;
L_125b5e11:;
  /* 125b5e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b5e14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5e17 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b5e1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5e1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b5e20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125b5e23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5e26 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5e29 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 125b5e2c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5e30 ja 0x125b6180 */
  if ((!C.cf&&!C.zf)) goto L_125b6180;
  /* 125b5e36 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b5e39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b5e3b mov al, byte ptr [ecx + 0x125b625c] */
  AL = (r8((uint32_t)(ECX + 0x125b625c)));
  /* 125b5e41 jmp dword ptr [eax*4 + 0x125b6230] */
  switch (EAX) {
    case 0: goto L_125b609f;
    case 1: goto L_125b5f83;
    case 2: goto L_125b5f0e;
    case 3: goto L_125b5e48;
    case 4: goto L_125b5e86;
    case 5: goto L_125b5ee7;
    case 6: goto L_125b5f35;
    case 7: goto L_125b5f5c;
    case 8: goto L_125b5fca;
    case 9: goto L_125b5ec4;
    case 10: goto L_125b6180;
    default: x86_unimpl("switch@0x125b5e41 out of table"); return;
  }
L_125b5e48:;
  /* 125b5e48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5e4b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 125b5e4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b5e51 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5e54 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125b5e57 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5e5b ja 0x125b5e81 */
  if ((!C.cf&&!C.zf)) goto L_125b5e81;
  /* 125b5e5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b5e60 jmp dword ptr [ecx*4 + 0x125b62af] */
  switch (ECX) {
    case 0: goto L_125b5e67;
    case 1: goto L_125b5e71;
    case 2: goto L_125b5e77;
    case 3: goto L_125b5e7d;
    case 4: goto L_125b5ea5;
    case 5: goto L_125b5eaf;
    case 6: goto L_125b5eb5;
    case 7: goto L_125b5ebb;
    default: x86_unimpl("switch@0x125b5e60 out of table"); return;
  }
L_125b5e67:;
  /* 125b5e67 mov dword ptr [0x125d3c58], 1 */
  w32((uint32_t)(0x125d3c58), (0x1u));
L_125b5e71:;
  /* 125b5e71 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 125b5e75 jmp 0x125b5e81 */
  goto L_125b5e81;
L_125b5e77:;
  /* 125b5e77 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 125b5e7b jmp 0x125b5e81 */
  goto L_125b5e81;
L_125b5e7d:;
  /* 125b5e7d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_125b5e81:;
  /* 125b5e81 jmp 0x125b6180 */
  goto L_125b6180;
L_125b5e86:;
  /* 125b5e86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5e89 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 125b5e8c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b5e8f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b5e92 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125b5e95 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5e99 ja 0x125b5ebf */
  if ((!C.cf&&!C.zf)) goto L_125b5ebf;
  /* 125b5e9b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b5e9e jmp dword ptr [ecx*4 + 0x125b62bf] */
  switch (ECX) {
    case 0: goto L_125b5ea5;
    case 1: goto L_125b5eaf;
    case 2: goto L_125b5eb5;
    case 3: goto L_125b5ebb;
    default: x86_unimpl("switch@0x125b5e9e out of table"); return;
  }
L_125b5ea5:;
  /* 125b5ea5 mov dword ptr [0x125d3c58], 1 */
  w32((uint32_t)(0x125d3c58), (0x1u));
L_125b5eaf:;
  /* 125b5eaf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 125b5eb3 jmp 0x125b5ebf */
  goto L_125b5ebf;
L_125b5eb5:;
  /* 125b5eb5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 125b5eb9 jmp 0x125b5ebf */
  goto L_125b5ebf;
L_125b5ebb:;
  /* 125b5ebb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_125b5ebf:;
  /* 125b5ebf jmp 0x125b6180 */
  goto L_125b6180;
L_125b5ec4:;
  /* 125b5ec4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5ec7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 125b5eca cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5ece je 0x125b5ed8 */
  if (C.zf) goto L_125b5ed8;
  /* 125b5ed0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5ed4 je 0x125b5ede */
  if (C.zf) goto L_125b5ede;
  /* 125b5ed6 jmp 0x125b5ee2 */
  goto L_125b5ee2;
L_125b5ed8:;
  /* 125b5ed8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 125b5edc jmp 0x125b5ee2 */
  goto L_125b5ee2;
L_125b5ede:;
  /* 125b5ede mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_125b5ee2:;
  /* 125b5ee2 jmp 0x125b6180 */
  goto L_125b6180;
L_125b5ee7:;
  /* 125b5ee7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5eea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125b5eed cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5ef1 je 0x125b5efb */
  if (C.zf) goto L_125b5efb;
  /* 125b5ef3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5ef7 je 0x125b5f05 */
  if (C.zf) goto L_125b5f05;
  /* 125b5ef9 jmp 0x125b5f09 */
  goto L_125b5f09;
L_125b5efb:;
  /* 125b5efb mov dword ptr [0x125d3c58], 1 */
  w32((uint32_t)(0x125d3c58), (0x1u));
L_125b5f05:;
  /* 125b5f05 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_125b5f09:;
  /* 125b5f09 jmp 0x125b6180 */
  goto L_125b6180;
L_125b5f0e:;
  /* 125b5f0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5f11 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 125b5f14 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5f18 je 0x125b5f22 */
  if (C.zf) goto L_125b5f22;
  /* 125b5f1a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5f1e je 0x125b5f2c */
  if (C.zf) goto L_125b5f2c;
  /* 125b5f20 jmp 0x125b5f30 */
  goto L_125b5f30;
L_125b5f22:;
  /* 125b5f22 mov dword ptr [0x125d3c58], 1 */
  w32((uint32_t)(0x125d3c58), (0x1u));
L_125b5f2c:;
  /* 125b5f2c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_125b5f30:;
  /* 125b5f30 jmp 0x125b6180 */
  goto L_125b6180;
L_125b5f35:;
  /* 125b5f35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5f38 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 125b5f3b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5f3f je 0x125b5f49 */
  if (C.zf) goto L_125b5f49;
  /* 125b5f41 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5f45 je 0x125b5f53 */
  if (C.zf) goto L_125b5f53;
  /* 125b5f47 jmp 0x125b5f57 */
  goto L_125b5f57;
L_125b5f49:;
  /* 125b5f49 mov dword ptr [0x125d3c58], 1 */
  w32((uint32_t)(0x125d3c58), (0x1u));
L_125b5f53:;
  /* 125b5f53 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_125b5f57:;
  /* 125b5f57 jmp 0x125b6180 */
  goto L_125b6180;
L_125b5f5c:;
  /* 125b5f5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b5f5f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 125b5f62 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5f66 je 0x125b5f70 */
  if (C.zf) goto L_125b5f70;
  /* 125b5f68 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5f6c je 0x125b5f7a */
  if (C.zf) goto L_125b5f7a;
  /* 125b5f6e jmp 0x125b5f7e */
  goto L_125b5f7e;
L_125b5f70:;
  /* 125b5f70 mov dword ptr [0x125d3c58], 1 */
  w32((uint32_t)(0x125d3c58), (0x1u));
L_125b5f7a:;
  /* 125b5f7a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_125b5f7e:;
  /* 125b5f7e jmp 0x125b6180 */
  goto L_125b6180;
L_125b5f83:;
  /* 125b5f83 push 0x125cffac */
  push32((uint32_t)(0x125cffacu));
  /* 125b5f88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5f8b push ecx */
  push32((uint32_t)(ECX));
  /* 125b5f8c call 0x125b67e0 */
  push32(0x125b5f91u); f_125b67e0();
  /* 125b5f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b5f96 jne 0x125b5fa3 */
  if (!C.zf) goto L_125b5fa3;
  /* 125b5f98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5f9b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5f9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b5fa1 jmp 0x125b5fc1 */
  goto L_125b5fc1;
L_125b5fa3:;
  /* 125b5fa3 push 0x125cffa8 */
  push32((uint32_t)(0x125cffa8u));
  /* 125b5fa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5fab push eax */
  push32((uint32_t)(EAX));
  /* 125b5fac call 0x125b67e0 */
  push32(0x125b5fb1u); f_125b67e0();
  /* 125b5fb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b5fb6 jne 0x125b5fc1 */
  if (!C.zf) goto L_125b5fc1;
  /* 125b5fb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b5fbb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b5fbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125b5fc1:;
  /* 125b5fc1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 125b5fc5 jmp 0x125b6180 */
  goto L_125b6180;
L_125b5fca:;
  /* 125b5fca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b5fcd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5fd1 jg 0x125b5fe1 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b5fe1;
  /* 125b5fd3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5fd6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 125b5fdc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125b5fdf jmp 0x125b5fed */
  goto L_125b5fed;
L_125b5fe1:;
  /* 125b5fe1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b5fe4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 125b5fea mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_125b5fed:;
  /* 125b5fed cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5ff1 jle 0x125b6094 */
  if ((C.zf||C.sf!=C.of)) goto L_125b6094;
  /* 125b5ff7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b5ffa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b5ffd jbe 0x125b6094 */
  if ((C.cf||C.zf)) goto L_125b6094;
  /* 125b6003 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b6006 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6008 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b600a mov ecx, dword ptr [0x125d1c98] */
  ECX = (r32((uint32_t)(0x125d1c98)));
  /* 125b6010 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6012 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125b6016 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125b601c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b601e je 0x125b6057 */
  if (C.zf) goto L_125b6057;
  /* 125b6020 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b6023 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6026 jbe 0x125b6057 */
  if ((C.cf||C.zf)) goto L_125b6057;
  /* 125b6028 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b602b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b602d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b6030 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b6032 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125b6034 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6037 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b6039 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b603c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b603f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125b6041 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b6044 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6047 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 125b604a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b604d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b604f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b6052 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b6055 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_125b6057:;
  /* 125b6057 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b605a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b605c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b605f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b6061 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125b6063 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6066 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b6068 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b606b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b606e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b6070 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b6073 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6076 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125b6079 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b607c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b607e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b6081 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b6084 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125b6086 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6089 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b608c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125b608f jmp 0x125b5fed */
  goto L_125b5fed;
L_125b6094:;
  /* 125b6094 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6097 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b609a jmp 0x125b5db6 */
  goto L_125b5db6;
L_125b609f:;
  /* 125b609f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b60a2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125b60a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b60a7 je 0x125b6172 */
  if (C.zf) goto L_125b6172;
  /* 125b60ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b60b0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b60b3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_125b60b6:;
  /* 125b60b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b60b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b60bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b60be je 0x125b6170 */
  if (C.zf) goto L_125b6170;
  /* 125b60c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b60c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b60ca je 0x125b6170 */
  if (C.zf) goto L_125b6170;
  /* 125b60d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b60d3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b60d6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b60d9 jne 0x125b60e9 */
  if (!C.zf) goto L_125b60e9;
  /* 125b60db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b60de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b60e1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125b60e4 jmp 0x125b6170 */
  goto L_125b6170;
L_125b60e9:;
  /* 125b60e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b60ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b60ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b60f0 mov edx, dword ptr [0x125d1c98] */
  EDX = (r32((uint32_t)(0x125d1c98)));
  /* 125b60f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b60f8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 125b60fc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 125b6101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b6103 je 0x125b613c */
  if (C.zf) goto L_125b613c;
  /* 125b6105 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b6108 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b610b jbe 0x125b613c */
  if ((C.cf||C.zf)) goto L_125b613c;
  /* 125b610d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6110 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b6112 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6115 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b6117 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125b6119 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b611c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b611e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6121 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6124 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125b6126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6129 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b612c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b612f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b6132 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b6134 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b6137 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b613a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125b613c:;
  /* 125b613c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b613f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b6141 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6144 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b6146 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 125b6148 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b614b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b614d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6150 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6153 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125b6155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6158 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b615b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125b615e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b6161 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b6163 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b6166 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b6169 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125b616b jmp 0x125b60b6 */
  goto L_125b60b6;
L_125b6170:;
  /* 125b6170 jmp 0x125b617b */
  goto L_125b617b;
L_125b6172:;
  /* 125b6172 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6175 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6178 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125b617b:;
  /* 125b617b jmp 0x125b5db6 */
  goto L_125b5db6;
L_125b6180:;
  /* 125b6180 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 125b6184 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b6186 je 0x125b61ac */
  if (C.zf) goto L_125b61ac;
  /* 125b6188 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b618b push edx */
  push32((uint32_t)(EDX));
  /* 125b618c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b618f push eax */
  push32((uint32_t)(EAX));
  /* 125b6190 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6193 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6194 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b6197 push edx */
  push32((uint32_t)(EDX));
  /* 125b6198 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 125b619b push eax */
  push32((uint32_t)(EAX));
  /* 125b619c call 0x125b55e0 */
  push32(0x125b61a1u); f_125b55e0();
  /* 125b61a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b61a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b61a7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125b61aa jmp 0x125b6227 */
  goto L_125b6227;
L_125b61ac:;
  /* 125b61ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b61af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b61b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b61b3 mov ecx, dword ptr [0x125d1c98] */
  ECX = (r32((uint32_t)(0x125d1c98)));
  /* 125b61b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b61bb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125b61bf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 125b61c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b61c7 je 0x125b61f8 */
  if (C.zf) goto L_125b61f8;
  /* 125b61c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b61cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b61ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b61d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b61d3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125b61d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b61d8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b61da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b61dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b61e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 125b61e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b61e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b61e8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125b61eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b61ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b61f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b61f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b61f6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_125b61f8:;
  /* 125b61f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b61fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b61fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6200 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b6202 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 125b6204 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6207 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b6209 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b620c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b620f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 125b6211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6214 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6217 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b621a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b621d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b621f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b6222 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b6225 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_125b6227:;
  /* 125b6227 jmp 0x125b5db6 */
  goto L_125b5db6;
L_125b622c:;
  /* 125b622c mov esp, ebp */
  ESP = (EBP);
  /* 125b622e pop ebp */
  EBP = (pop32());
  /* 125b622f ret  */
  ESPCHK(0x125b5db0u, _esp0);
  ESP += 4; return;
}

/* FUN_100162d0 @ 0x125b62d0 (650 bytes, 178 insns) */
void f_125b62d0(void) {
  FTRACE(0x125b62d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b62d0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b62d1 mov ebp, esp */
  EBP = (ESP);
  /* 125b62d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b62d9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b62dd jne 0x125b6439 */
  if (!C.zf) goto L_125b6439;
  /* 125b62e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b62e6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 125b62ec lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 125b62f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b62f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b62fc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 125b6306 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6308 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 125b630e push edx */
  push32((uint32_t)(EDX));
  /* 125b630f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6312 push eax */
  push32((uint32_t)(EAX));
  /* 125b6313 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6316 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6317 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b631a push edx */
  push32((uint32_t)(EDX));
  /* 125b631b call 0x125b76f0 */
  push32(0x125b6320u); f_125b76f0();
  /* 125b6320 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6323 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b6326 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b632a jne 0x125b63bf */
  if (!C.zf) goto L_125b63bf;
  /* 125b6330 call dword ptr [0x125d63b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d63b4))), 0x125b6336u);
  /* 125b6336 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6339 je 0x125b6340 */
  if (C.zf) goto L_125b6340;
  /* 125b633b jmp 0x125b641d */
  goto L_125b641d;
L_125b6340:;
  /* 125b6340 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6342 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6344 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6346 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6349 push eax */
  push32((uint32_t)(EAX));
  /* 125b634a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b634d push ecx */
  push32((uint32_t)(ECX));
  /* 125b634e call 0x125b76f0 */
  push32(0x125b6353u); f_125b76f0();
  /* 125b6353 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6356 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 125b635c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6363 jne 0x125b636a */
  if (!C.zf) goto L_125b636a;
  /* 125b6365 jmp 0x125b641d */
  goto L_125b641d;
L_125b636a:;
  /* 125b636a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 125b636c push 0x125cffb4 */
  push32((uint32_t)(0x125cffb4u));
  /* 125b6371 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b6373 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 125b6379 push edx */
  push32((uint32_t)(EDX));
  /* 125b637a call 0x125a8110 */
  push32(0x125b637fu); f_125a8110();
  /* 125b637f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6382 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b6385 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6389 jne 0x125b6390 */
  if (!C.zf) goto L_125b6390;
  /* 125b638b jmp 0x125b641d */
  goto L_125b641d;
L_125b6390:;
  /* 125b6390 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125b6397 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6399 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 125b639f push eax */
  push32((uint32_t)(EAX));
  /* 125b63a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b63a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b63a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b63a7 push edx */
  push32((uint32_t)(EDX));
  /* 125b63a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b63ab push eax */
  push32((uint32_t)(EAX));
  /* 125b63ac call 0x125b76f0 */
  push32(0x125b63b1u); f_125b76f0();
  /* 125b63b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b63b4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b63b7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b63bb jne 0x125b63bf */
  if (!C.zf) goto L_125b63bf;
  /* 125b63bd jmp 0x125b641d */
  goto L_125b641d;
L_125b63bf:;
  /* 125b63bf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 125b63c1 push 0x125cffb4 */
  push32((uint32_t)(0x125cffb4u));
  /* 125b63c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b63c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b63cb push ecx */
  push32((uint32_t)(ECX));
  /* 125b63cc call 0x125a8110 */
  push32(0x125b63d1u); f_125a8110();
  /* 125b63d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b63d4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 125b63da mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 125b63dc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 125b63e2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b63e5 jne 0x125b63e9 */
  if (!C.zf) goto L_125b63e9;
  /* 125b63e7 jmp 0x125b641d */
  goto L_125b641d;
L_125b63e9:;
  /* 125b63e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b63ec push ecx */
  push32((uint32_t)(ECX));
  /* 125b63ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b63f0 push edx */
  push32((uint32_t)(EDX));
  /* 125b63f1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 125b63f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b63f9 push ecx */
  push32((uint32_t)(ECX));
  /* 125b63fa call 0x125ab930 */
  push32(0x125b63ffu); f_125ab930();
  /* 125b63ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6402 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6406 je 0x125b6416 */
  if (C.zf) goto L_125b6416;
  /* 125b6408 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b640a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b640d push edx */
  push32((uint32_t)(EDX));
  /* 125b640e call 0x125a8ba0 */
  push32(0x125b6413u); f_125a8ba0();
  /* 125b6413 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b6416:;
  /* 125b6416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6418 jmp 0x125b6556 */
  goto L_125b6556;
L_125b641d:;
  /* 125b641d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6421 je 0x125b6431 */
  if (C.zf) goto L_125b6431;
  /* 125b6423 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b6425 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6428 push eax */
  push32((uint32_t)(EAX));
  /* 125b6429 call 0x125a8ba0 */
  push32(0x125b642eu); f_125a8ba0();
  /* 125b642e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b6431:;
  /* 125b6431 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b6434 jmp 0x125b6556 */
  goto L_125b6556;
L_125b6439:;
  /* 125b6439 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b643d jne 0x125b6553 */
  if (!C.zf) goto L_125b6553;
  /* 125b6443 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 125b644d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b6450 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 125b6456 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6458 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 125b645e push edx */
  push32((uint32_t)(EDX));
  /* 125b645f push 0x125d3b70 */
  push32((uint32_t)(0x125d3b70u));
  /* 125b6464 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6467 push eax */
  push32((uint32_t)(EAX));
  /* 125b6468 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b646b push ecx */
  push32((uint32_t)(ECX));
  /* 125b646c call 0x125b7550 */
  push32(0x125b6471u); f_125b7550();
  /* 125b6471 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b6476 jne 0x125b6480 */
  if (!C.zf) goto L_125b6480;
  /* 125b6478 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b647b jmp 0x125b6556 */
  goto L_125b6556;
L_125b6480:;
  /* 125b6480 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125b6486 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 125b6489 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 125b6493 jmp 0x125b64a4 */
  goto L_125b64a4;
L_125b6495:;
  /* 125b6495 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b649b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b649e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_125b64a4:;
  /* 125b64a4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b64ab jge 0x125b654f */
  if ((C.sf==C.of)) goto L_125b654f;
  /* 125b64b1 cmp dword ptr [0x125d1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b64b8 jle 0x125b64eb */
  if ((C.zf||C.sf!=C.of)) goto L_125b64eb;
  /* 125b64ba push 4 */
  push32((uint32_t)(0x4u));
  /* 125b64bc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b64c2 mov dl, byte ptr [ecx*2 + 0x125d3b70] */
  DL = (r8((uint32_t)(ECX*2 + 0x125d3b70)));
  /* 125b64c9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 125b64cf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 125b64d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b64da push eax */
  push32((uint32_t)(EAX));
  /* 125b64db call 0x125ae120 */
  push32(0x125b64e0u); f_125ae120();
  /* 125b64e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b64e3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 125b64e9 jmp 0x125b651e */
  goto L_125b651e;
L_125b64eb:;
  /* 125b64eb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 125b64f1 mov dl, byte ptr [ecx*2 + 0x125d3b70] */
  DL = (r8((uint32_t)(ECX*2 + 0x125d3b70)));
  /* 125b64f8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 125b64fe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 125b6504 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b6509 mov ecx, dword ptr [0x125d1c98] */
  ECX = (r32((uint32_t)(0x125d1c98)));
  /* 125b650f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6511 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125b6515 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125b6518 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_125b651e:;
  /* 125b651e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6525 je 0x125b6548 */
  if (C.zf) goto L_125b6548;
  /* 125b6527 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125b652d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b6530 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b6533 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 125b653a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 125b653e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 125b6544 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 125b6546 jmp 0x125b654a */
  goto L_125b654a;
L_125b6548:;
  /* 125b6548 jmp 0x125b654f */
  goto L_125b654f;
L_125b654a:;
  /* 125b654a jmp 0x125b6495 */
  goto L_125b6495;
L_125b654f:;
  /* 125b654f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6551 jmp 0x125b6556 */
  goto L_125b6556;
L_125b6553:;
  /* 125b6553 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_125b6556:;
  /* 125b6556 mov esp, ebp */
  ESP = (EBP);
  /* 125b6558 pop ebp */
  EBP = (pop32());
  /* 125b6559 ret  */
  ESPCHK(0x125b62d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016560 @ 0x125b6560 (10 bytes, 5 insns) */
void f_125b6560(void) {
  FTRACE(0x125b6560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b6560 push ebp */
  push32((uint32_t)(EBP));
  /* 125b6561 mov ebp, esp */
  EBP = (ESP);
  /* 125b6563 mov eax, dword ptr [0x125d2d88] */
  EAX = (r32((uint32_t)(0x125d2d88)));
  /* 125b6568 pop ebp */
  EBP = (pop32());
  /* 125b6569 ret  */
  ESPCHK(0x125b6560u, _esp0);
  ESP += 4; return;
}

/* FUN_10016570 @ 0x125b6570 (575 bytes, 196 insns) */
void f_125b6570(void) {
  FTRACE(0x125b6570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b6570 push ebp */
  push32((uint32_t)(EBP));
  /* 125b6571 mov ebp, esp */
  EBP = (ESP);
  /* 125b6573 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b6575 push 0x125cffc0 */
  push32((uint32_t)(0x125cffc0u));
  /* 125b657a push 0x125b1218 */
  push32((uint32_t)(0x125b1218u));
  /* 125b657f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125b6585 push eax */
  push32((uint32_t)(EAX));
  /* 125b6586 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125b658d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6590 push ebx */
  push32((uint32_t)(EBX));
  /* 125b6591 push esi */
  push32((uint32_t)(ESI));
  /* 125b6592 push edi */
  push32((uint32_t)(EDI));
  /* 125b6593 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b6596 cmp dword ptr [0x125d3b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b659d jne 0x125b65ee */
  if (!C.zf) goto L_125b65ee;
  /* 125b659f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 125b65a2 push eax */
  push32((uint32_t)(EAX));
  /* 125b65a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b65a5 push 0x125cf6f4 */
  push32((uint32_t)(0x125cf6f4u));
  /* 125b65aa push 1 */
  push32((uint32_t)(0x1u));
  /* 125b65ac call dword ptr [0x125d6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6308))), 0x125b65b2u);
  /* 125b65b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b65b4 je 0x125b65c2 */
  if (C.zf) goto L_125b65c2;
  /* 125b65b6 mov dword ptr [0x125d3b7c], 1 */
  w32((uint32_t)(0x125d3b7c), (0x1u));
  /* 125b65c0 jmp 0x125b65ee */
  goto L_125b65ee;
L_125b65c2:;
  /* 125b65c2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 125b65c5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b65c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b65c8 push 0x125cf6f0 */
  push32((uint32_t)(0x125cf6f0u));
  /* 125b65cd push 1 */
  push32((uint32_t)(0x1u));
  /* 125b65cf push 0 */
  push32((uint32_t)(0x0u));
  /* 125b65d1 call dword ptr [0x125d6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6318))), 0x125b65d7u);
  /* 125b65d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b65d9 je 0x125b65e7 */
  if (C.zf) goto L_125b65e7;
  /* 125b65db mov dword ptr [0x125d3b7c], 2 */
  w32((uint32_t)(0x125d3b7c), (0x2u));
  /* 125b65e5 jmp 0x125b65ee */
  goto L_125b65ee;
L_125b65e7:;
  /* 125b65e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b65e9 jmp 0x125b67c9 */
  goto L_125b67c9;
L_125b65ee:;
  /* 125b65ee cmp dword ptr [0x125d3b7c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b7c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b65f5 jne 0x125b6612 */
  if (!C.zf) goto L_125b6612;
  /* 125b65f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b65fa push edx */
  push32((uint32_t)(EDX));
  /* 125b65fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b65fe push eax */
  push32((uint32_t)(EAX));
  /* 125b65ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b6602 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6603 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6606 push edx */
  push32((uint32_t)(EDX));
  /* 125b6607 call dword ptr [0x125d6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6308))), 0x125b660du);
  /* 125b660d jmp 0x125b67c9 */
  goto L_125b67c9;
L_125b6612:;
  /* 125b6612 cmp dword ptr [0x125d3b7c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b7c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6619 jne 0x125b67c7 */
  if (!C.zf) goto L_125b67c7;
  /* 125b661f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6623 jne 0x125b662d */
  if (!C.zf) goto L_125b662d;
  /* 125b6625 mov eax, dword ptr [0x125d3af0] */
  EAX = (r32((uint32_t)(0x125d3af0)));
  /* 125b662a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_125b662d:;
  /* 125b662d push 0 */
  push32((uint32_t)(0x0u));
  /* 125b662f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6631 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6633 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6635 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6638 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6639 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b663c push edx */
  push32((uint32_t)(EDX));
  /* 125b663d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125b6642 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b6645 push eax */
  push32((uint32_t)(EAX));
  /* 125b6646 call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b664cu);
  /* 125b664c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 125b664f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6653 jne 0x125b665c */
  if (!C.zf) goto L_125b665c;
  /* 125b6655 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6657 jmp 0x125b67c9 */
  goto L_125b67c9;
L_125b665c:;
  /* 125b665c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b6663 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b6666 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6669 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125b666b call 0x125ab2b0 */
  push32(0x125b6670u); f_125ab2b0();
  /* 125b6670 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 125b6673 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b6676 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 125b6679 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 125b667c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b667f push edx */
  push32((uint32_t)(EDX));
  /* 125b6680 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6682 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b6685 push eax */
  push32((uint32_t)(EAX));
  /* 125b6686 call 0x125abe80 */
  push32(0x125b668bu); f_125abe80();
  /* 125b668b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b668e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b6695 jmp 0x125b66ae */
  goto L_125b66ae;
  /* 125b6697 mov eax, 1 */
  EAX = (0x1u);
  /* 125b669c ret  */
  ESPCHK(0x125b6570u, _esp0);
  ESP += 4; return;
  /* 125b669d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125b66a0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 125b66a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b66ae:;
  /* 125b66ae cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b66b2 jne 0x125b66bb */
  if (!C.zf) goto L_125b66bb;
  /* 125b66b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b66b6 jmp 0x125b67c9 */
  goto L_125b67c9;
L_125b66bb:;
  /* 125b66bb push 0 */
  push32((uint32_t)(0x0u));
  /* 125b66bd push 0 */
  push32((uint32_t)(0x0u));
  /* 125b66bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b66c2 push ecx */
  push32((uint32_t)(ECX));
  /* 125b66c3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b66c6 push edx */
  push32((uint32_t)(EDX));
  /* 125b66c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b66ca push eax */
  push32((uint32_t)(EAX));
  /* 125b66cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b66ce push ecx */
  push32((uint32_t)(ECX));
  /* 125b66cf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125b66d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b66d7 push edx */
  push32((uint32_t)(EDX));
  /* 125b66d8 call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b66deu);
  /* 125b66de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b66e0 jne 0x125b66e9 */
  if (!C.zf) goto L_125b66e9;
  /* 125b66e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b66e4 jmp 0x125b67c9 */
  goto L_125b67c9;
L_125b66e9:;
  /* 125b66e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125b66f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b66f3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 125b66f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b66fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125b66fc call 0x125ab2b0 */
  push32(0x125b6701u); f_125ab2b0();
  /* 125b6701 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 125b6704 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b6707 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 125b670a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125b670d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b6714 jmp 0x125b672d */
  goto L_125b672d;
  /* 125b6716 mov eax, 1 */
  EAX = (0x1u);
  /* 125b671b ret  */
  ESPCHK(0x125b6570u, _esp0);
  ESP += 4; return;
  /* 125b671c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125b671f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125b6726 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b672d:;
  /* 125b672d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6731 jne 0x125b673a */
  if (!C.zf) goto L_125b673a;
  /* 125b6733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6735 jmp 0x125b67c9 */
  goto L_125b67c9;
L_125b673a:;
  /* 125b673a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b673e jne 0x125b6749 */
  if (!C.zf) goto L_125b6749;
  /* 125b6740 mov edx, dword ptr [0x125d3ae0] */
  EDX = (r32((uint32_t)(0x125d3ae0)));
  /* 125b6746 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_125b6749:;
  /* 125b6749 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b674c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b674f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 125b6755 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6758 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b675b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 125b6762 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b6765 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6766 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b6769 push edx */
  push32((uint32_t)(EDX));
  /* 125b676a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 125b676d push eax */
  push32((uint32_t)(EAX));
  /* 125b676e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6771 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6772 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b6775 push edx */
  push32((uint32_t)(EDX));
  /* 125b6776 call dword ptr [0x125d6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6318))), 0x125b677cu);
  /* 125b677c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125b677f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6782 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b6785 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6787 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 125b678c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6792 je 0x125b67a8 */
  if (C.zf) goto L_125b67a8;
  /* 125b6794 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b6797 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b679a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b679c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125b67a0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b67a6 je 0x125b67ac */
  if (C.zf) goto L_125b67ac;
L_125b67a8:;
  /* 125b67a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b67aa jmp 0x125b67c9 */
  goto L_125b67c9;
L_125b67ac:;
  /* 125b67ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b67af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b67b1 push eax */
  push32((uint32_t)(EAX));
  /* 125b67b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b67b5 push ecx */
  push32((uint32_t)(ECX));
  /* 125b67b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b67b9 push edx */
  push32((uint32_t)(EDX));
  /* 125b67ba call 0x125b0000 */
  push32(0x125b67bfu); f_125b0000();
  /* 125b67bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b67c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b67c5 jmp 0x125b67c9 */
  goto L_125b67c9;
L_125b67c7:;
  /* 125b67c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b67c9:;
  /* 125b67c9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 125b67cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b67cf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125b67d6 pop edi */
  EDI = (pop32());
  /* 125b67d7 pop esi */
  ESI = (pop32());
  /* 125b67d8 pop ebx */
  EBX = (pop32());
  /* 125b67d9 mov esp, ebp */
  ESP = (EBP);
  /* 125b67db pop ebp */
  EBP = (pop32());
  /* 125b67dc ret  */
  ESPCHK(0x125b6570u, _esp0);
  ESP += 4; return;
}

/* FUN_100167e0 @ 0x125b67e0 (208 bytes, 85 insns) */
void f_125b67e0(void) {
  FTRACE(0x125b67e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b67e0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b67e1 mov ebp, esp */
  EBP = (ESP);
  /* 125b67e3 push edi */
  push32((uint32_t)(EDI));
  /* 125b67e4 push esi */
  push32((uint32_t)(ESI));
  /* 125b67e5 push ebx */
  push32((uint32_t)(EBX));
  /* 125b67e6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 125b67e9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 125b67ec lea eax, [0x125d3ad8] */
  EAX = ((uint32_t)(0x125d3ad8));
  /* 125b67f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b67f6 jne 0x125b6833 */
  if (!C.zf) goto L_125b6833;
  /* 125b67f8 mov al, 0xff */
  AL = (0xffu);
  /* 125b67fa mov edi, edi */
  EDI = (EDI);
L_125b67fc:;
  /* 125b67fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b67fe je 0x125b682e */
  if (C.zf) goto L_125b682e;
  /* 125b6800 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b6802 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125b6803 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 125b6805 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125b6806 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b6808 je 0x125b67fc */
  if (C.zf) goto L_125b67fc;
  /* 125b680a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125b680c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b680e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125b6810 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 125b6813 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b6815 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b6817 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 125b6819 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125b681b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b681d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125b681f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 125b6822 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b6824 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 125b6826 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b6828 je 0x125b67fc */
  if (C.zf) goto L_125b67fc;
  /* 125b682a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 125b682c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_125b682e:;
  /* 125b682e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 125b6831 jmp 0x125b68ab */
  goto L_125b68ab;
L_125b6833:;
  /* 125b6833 lock inc dword ptr [0x125d3c6c] */
  x86_unimpl("lock inc @ 0x125b6833");
  /* 125b683a cmp dword ptr [0x125d3c5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6841 jg 0x125b6847 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b6847;
  /* 125b6843 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6845 jmp 0x125b685c */
  goto L_125b685c;
L_125b6847:;
  /* 125b6847 lock dec dword ptr [0x125d3c6c] */
  x86_unimpl("lock dec @ 0x125b6847");
  /* 125b684e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b6850 call 0x125abb10 */
  push32(0x125b6855u); f_125abb10();
  /* 125b6855 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_125b685c:;
  /* 125b685c mov eax, 0xff */
  EAX = (0xffu);
  /* 125b6861 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 125b6863 nop  */
  /* nop */
L_125b6864:;
  /* 125b6864 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b6866 je 0x125b688f */
  if (C.zf) goto L_125b688f;
  /* 125b6868 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b686a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125b686b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 125b686d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125b686e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b6870 je 0x125b6864 */
  if (C.zf) goto L_125b6864;
  /* 125b6872 push eax */
  push32((uint32_t)(EAX));
  /* 125b6873 push ebx */
  push32((uint32_t)(EBX));
  /* 125b6874 call 0x125b7950 */
  push32(0x125b6879u); f_125b7950();
  /* 125b6879 mov ebx, eax */
  EBX = (EAX);
  /* 125b687b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b687e call 0x125b7950 */
  push32(0x125b6883u); f_125b7950();
  /* 125b6883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6886 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b6888 je 0x125b6864 */
  if (C.zf) goto L_125b6864;
  /* 125b688a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b688c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_125b688f:;
  /* 125b688f mov ebx, eax */
  EBX = (EAX);
  /* 125b6891 pop eax */
  EAX = (pop32());
  /* 125b6892 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6894 jne 0x125b689f */
  if (!C.zf) goto L_125b689f;
  /* 125b6896 lock dec dword ptr [0x125d3c6c] */
  x86_unimpl("lock dec @ 0x125b6896");
  /* 125b689d jmp 0x125b68a9 */
  goto L_125b68a9;
L_125b689f:;
  /* 125b689f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b68a1 call 0x125abbb0 */
  push32(0x125b68a6u); f_125abbb0();
  /* 125b68a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b68a9:;
  /* 125b68a9 mov eax, ebx */
  EAX = (EBX);
L_125b68ab:;
  /* 125b68ab pop ebx */
  EBX = (pop32());
  /* 125b68ac pop esi */
  ESI = (pop32());
  /* 125b68ad pop edi */
  EDI = (pop32());
  /* 125b68ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b68af ret  */
  ESPCHK(0x125b67e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100168b0 @ 0x125b68b0 (257 bytes, 103 insns) */
void f_125b68b0(void) {
  FTRACE(0x125b68b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b68b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b68b1 mov ebp, esp */
  EBP = (ESP);
  /* 125b68b3 push edi */
  push32((uint32_t)(EDI));
  /* 125b68b4 push esi */
  push32((uint32_t)(ESI));
  /* 125b68b5 push ebx */
  push32((uint32_t)(EBX));
  /* 125b68b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b68b9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b68bb je 0x125b69aa */
  if (C.zf) goto L_125b69aa;
  /* 125b68c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 125b68c4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 125b68c7 lea eax, [0x125d3ad8] */
  EAX = ((uint32_t)(0x125d3ad8));
  /* 125b68cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b68d1 jne 0x125b6921 */
  if (!C.zf) goto L_125b6921;
  /* 125b68d3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 125b68d5 mov bl, 0x5a */
  BL = (0x5au);
  /* 125b68d7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 125b68d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_125b68dc:;
  /* 125b68dc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 125b68de or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 125b68e0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 125b68e2 je 0x125b6905 */
  if (C.zf) goto L_125b6905;
  /* 125b68e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 125b68e6 je 0x125b6905 */
  if (C.zf) goto L_125b6905;
  /* 125b68e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125b68e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125b68ea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b68ec jb 0x125b68f4 */
  if (C.cf) goto L_125b68f4;
  /* 125b68ee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b68f0 ja 0x125b68f4 */
  if ((!C.cf&&!C.zf)) goto L_125b68f4;
  /* 125b68f2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_125b68f4:;
  /* 125b68f4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b68f6 jb 0x125b68fe */
  if (C.cf) goto L_125b68fe;
  /* 125b68f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b68fa ja 0x125b68fe */
  if ((!C.cf&&!C.zf)) goto L_125b68fe;
  /* 125b68fc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_125b68fe:;
  /* 125b68fe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b6900 jne 0x125b690f */
  if (!C.zf) goto L_125b690f;
  /* 125b6902 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125b6903 jne 0x125b68dc */
  if (!C.zf) goto L_125b68dc;
L_125b6905:;
  /* 125b6905 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b6907 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b6909 je 0x125b69aa */
  if (C.zf) goto L_125b69aa;
L_125b690f:;
  /* 125b690f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 125b6914 jb 0x125b69aa */
  if (C.cf) goto L_125b69aa;
  /* 125b691a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b691c jmp 0x125b69aa */
  goto L_125b69aa;
L_125b6921:;
  /* 125b6921 lock inc dword ptr [0x125d3c6c] */
  x86_unimpl("lock inc @ 0x125b6921");
  /* 125b6928 cmp dword ptr [0x125d3c5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b692f jg 0x125b6935 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b6935;
  /* 125b6931 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6933 jmp 0x125b694e */
  goto L_125b694e;
L_125b6935:;
  /* 125b6935 lock dec dword ptr [0x125d3c6c] */
  x86_unimpl("lock dec @ 0x125b6935");
  /* 125b693c mov ebx, ecx */
  EBX = (ECX);
  /* 125b693e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b6940 call 0x125abb10 */
  push32(0x125b6945u); f_125abb10();
  /* 125b6945 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 125b694c mov ecx, ebx */
  ECX = (EBX);
L_125b694e:;
  /* 125b694e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6950 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 125b6952 mov edi, edi */
  EDI = (EDI);
L_125b6954:;
  /* 125b6954 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 125b6956 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6958 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 125b695a je 0x125b697f */
  if (C.zf) goto L_125b697f;
  /* 125b695c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 125b695e je 0x125b697f */
  if (C.zf) goto L_125b697f;
  /* 125b6960 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 125b6961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 125b6962 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6963 push eax */
  push32((uint32_t)(EAX));
  /* 125b6964 push ebx */
  push32((uint32_t)(EBX));
  /* 125b6965 call 0x125b7950 */
  push32(0x125b696au); f_125b7950();
  /* 125b696a mov ebx, eax */
  EBX = (EAX);
  /* 125b696c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b696f call 0x125b7950 */
  push32(0x125b6974u); f_125b7950();
  /* 125b6974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6977 pop ecx */
  ECX = (pop32());
  /* 125b6978 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b697a jne 0x125b6985 */
  if (!C.zf) goto L_125b6985;
  /* 125b697c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 125b697d jne 0x125b6954 */
  if (!C.zf) goto L_125b6954;
L_125b697f:;
  /* 125b697f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b6981 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6983 je 0x125b698e */
  if (C.zf) goto L_125b698e;
L_125b6985:;
  /* 125b6985 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 125b698a jb 0x125b698e */
  if (C.cf) goto L_125b698e;
  /* 125b698c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_125b698e:;
  /* 125b698e pop eax */
  EAX = (pop32());
  /* 125b698f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6991 jne 0x125b699c */
  if (!C.zf) goto L_125b699c;
  /* 125b6993 lock dec dword ptr [0x125d3c6c] */
  x86_unimpl("lock dec @ 0x125b6993");
  /* 125b699a jmp 0x125b69aa */
  goto L_125b69aa;
L_125b699c:;
  /* 125b699c mov ebx, ecx */
  EBX = (ECX);
  /* 125b699e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b69a0 call 0x125abbb0 */
  push32(0x125b69a5u); f_125abbb0();
  /* 125b69a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b69a8 mov ecx, ebx */
  ECX = (EBX);
L_125b69aa:;
  /* 125b69aa mov eax, ecx */
  EAX = (ECX);
  /* 125b69ac pop ebx */
  EBX = (pop32());
  /* 125b69ad pop esi */
  ESI = (pop32());
  /* 125b69ae pop edi */
  EDI = (pop32());
  /* 125b69af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 125b69b0 ret  */
  ESPCHK(0x125b68b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100169c0 @ 0x125b69c0 (255 bytes, 88 insns) */
void f_125b69c0(void) {
  FTRACE(0x125b69c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b69c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b69c1 mov ebp, esp */
  EBP = (ESP);
  /* 125b69c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_125b69c6:;
  /* 125b69c6 cmp dword ptr [0x125d1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b69cd jle 0x125b69e6 */
  if ((C.zf||C.sf!=C.of)) goto L_125b69e6;
  /* 125b69cf push 8 */
  push32((uint32_t)(0x8u));
  /* 125b69d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b69d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b69d6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b69d8 push ecx */
  push32((uint32_t)(ECX));
  /* 125b69d9 call 0x125ae120 */
  push32(0x125b69deu); f_125ae120();
  /* 125b69de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b69e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125b69e4 jmp 0x125b69ff */
  goto L_125b69ff;
L_125b69e6:;
  /* 125b69e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b69e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b69eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b69ed mov ecx, dword ptr [0x125d1c98] */
  ECX = (r32((uint32_t)(0x125d1c98)));
  /* 125b69f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b69f5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125b69f9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125b69fc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125b69ff:;
  /* 125b69ff cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6a03 je 0x125b6a10 */
  if (C.zf) goto L_125b6a10;
  /* 125b6a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6a08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6a0b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b6a0e jmp 0x125b69c6 */
  goto L_125b69c6;
L_125b6a10:;
  /* 125b6a10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6a13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6a15 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b6a17 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b6a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6a1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6a20 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b6a23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6a26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b6a29 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6a2d je 0x125b6a35 */
  if (C.zf) goto L_125b6a35;
  /* 125b6a2f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6a33 jne 0x125b6a48 */
  if (!C.zf) goto L_125b6a48;
L_125b6a35:;
  /* 125b6a35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6a38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6a3a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b6a3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b6a3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6a42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6a45 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_125b6a48:;
  /* 125b6a48 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125b6a4f:;
  /* 125b6a4f cmp dword ptr [0x125d1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6a56 jle 0x125b6a6b */
  if ((C.zf||C.sf!=C.of)) goto L_125b6a6b;
  /* 125b6a58 push 4 */
  push32((uint32_t)(0x4u));
  /* 125b6a5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6a5d push edx */
  push32((uint32_t)(EDX));
  /* 125b6a5e call 0x125ae120 */
  push32(0x125b6a63u); f_125ae120();
  /* 125b6a63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6a66 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b6a69 jmp 0x125b6a80 */
  goto L_125b6a80;
L_125b6a6b:;
  /* 125b6a6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6a6e mov ecx, dword ptr [0x125d1c98] */
  ECX = (r32((uint32_t)(0x125d1c98)));
  /* 125b6a74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6a76 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125b6a7a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125b6a7d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_125b6a80:;
  /* 125b6a80 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6a84 je 0x125b6aab */
  if (C.zf) goto L_125b6aab;
  /* 125b6a86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b6a89 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b6a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6a8f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 125b6a93 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b6a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6a99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b6a9b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b6a9d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b6aa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6aa3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6aa6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125b6aa9 jmp 0x125b6a4f */
  goto L_125b6a4f;
L_125b6aab:;
  /* 125b6aab cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6aaf jne 0x125b6ab8 */
  if (!C.zf) goto L_125b6ab8;
  /* 125b6ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b6ab4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b6ab6 jmp 0x125b6abb */
  goto L_125b6abb;
L_125b6ab8:;
  /* 125b6ab8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_125b6abb:;
  /* 125b6abb mov esp, ebp */
  ESP = (EBP);
  /* 125b6abd pop ebp */
  EBP = (pop32());
  /* 125b6abe ret  */
  ESPCHK(0x125b69c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ac0 @ 0x125b6ac0 (17 bytes, 8 insns) */
void f_125b6ac0(void) {
  FTRACE(0x125b6ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b6ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b6ac1 mov ebp, esp */
  EBP = (ESP);
  /* 125b6ac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6ac6 push eax */
  push32((uint32_t)(EAX));
  /* 125b6ac7 call 0x125b69c0 */
  push32(0x125b6accu); f_125b69c0();
  /* 125b6acc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6acf pop ebp */
  EBP = (pop32());
  /* 125b6ad0 ret  */
  ESPCHK(0x125b6ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ae0 @ 0x125b6ae0 (297 bytes, 106 insns) */
void f_125b6ae0(void) {
  FTRACE(0x125b6ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b6ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b6ae1 mov ebp, esp */
  EBP = (ESP);
  /* 125b6ae3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b6ae6 push esi */
  push32((uint32_t)(ESI));
L_125b6ae7:;
  /* 125b6ae7 cmp dword ptr [0x125d1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6aee jle 0x125b6b07 */
  if ((C.zf||C.sf!=C.of)) goto L_125b6b07;
  /* 125b6af0 push 8 */
  push32((uint32_t)(0x8u));
  /* 125b6af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6af5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b6af7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b6af9 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6afa call 0x125ae120 */
  push32(0x125b6affu); f_125ae120();
  /* 125b6aff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6b02 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b6b05 jmp 0x125b6b20 */
  goto L_125b6b20;
L_125b6b07:;
  /* 125b6b07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6b0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6b0c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b6b0e mov ecx, dword ptr [0x125d1c98] */
  ECX = (r32((uint32_t)(0x125d1c98)));
  /* 125b6b14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6b16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125b6b1a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 125b6b1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_125b6b20:;
  /* 125b6b20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6b24 je 0x125b6b31 */
  if (C.zf) goto L_125b6b31;
  /* 125b6b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6b29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6b2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b6b2f jmp 0x125b6ae7 */
  goto L_125b6ae7;
L_125b6b31:;
  /* 125b6b31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6b34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6b36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b6b38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b6b3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6b3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6b41 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b6b44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6b47 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125b6b4a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6b4e je 0x125b6b56 */
  if (C.zf) goto L_125b6b56;
  /* 125b6b50 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6b54 jne 0x125b6b69 */
  if (!C.zf) goto L_125b6b69;
L_125b6b56:;
  /* 125b6b56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6b59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6b5b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b6b5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b6b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6b63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6b66 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_125b6b69:;
  /* 125b6b69 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 125b6b70 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_125b6b77:;
  /* 125b6b77 cmp dword ptr [0x125d1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6b7e jle 0x125b6b93 */
  if ((C.zf||C.sf!=C.of)) goto L_125b6b93;
  /* 125b6b80 push 4 */
  push32((uint32_t)(0x4u));
  /* 125b6b82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6b85 push edx */
  push32((uint32_t)(EDX));
  /* 125b6b86 call 0x125ae120 */
  push32(0x125b6b8bu); f_125ae120();
  /* 125b6b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6b8e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125b6b91 jmp 0x125b6ba8 */
  goto L_125b6ba8;
L_125b6b93:;
  /* 125b6b93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6b96 mov ecx, dword ptr [0x125d1c98] */
  ECX = (r32((uint32_t)(0x125d1c98)));
  /* 125b6b9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6b9e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 125b6ba2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 125b6ba5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_125b6ba8:;
  /* 125b6ba8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6bac je 0x125b6be9 */
  if (C.zf) goto L_125b6be9;
  /* 125b6bae push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6bb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 125b6bb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b6bb5 push eax */
  push32((uint32_t)(EAX));
  /* 125b6bb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6bba call 0x125b7a80 */
  push32(0x125b6bbfu); f_125b7a80();
  /* 125b6bbf mov ecx, eax */
  ECX = (EAX);
  /* 125b6bc1 mov esi, edx */
  ESI = (EDX);
  /* 125b6bc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6bc6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b6bc9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b6bca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6bcc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6bce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b6bd1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 125b6bd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b6bd9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b6bdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b6bde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b6be1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6be4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 125b6be7 jmp 0x125b6b77 */
  goto L_125b6b77;
L_125b6be9:;
  /* 125b6be9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6bed jne 0x125b6bfe */
  if (!C.zf) goto L_125b6bfe;
  /* 125b6bef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6bf2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b6bf4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b6bf7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6bfa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b6bfc jmp 0x125b6c04 */
  goto L_125b6c04;
L_125b6bfe:;
  /* 125b6bfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6c01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_125b6c04:;
  /* 125b6c04 pop esi */
  ESI = (pop32());
  /* 125b6c05 mov esp, ebp */
  ESP = (EBP);
  /* 125b6c07 pop ebp */
  EBP = (pop32());
  /* 125b6c08 ret  */
  ESPCHK(0x125b6ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c10 @ 0x125b6c10 (61 bytes, 18 insns) */
void f_125b6c10(void) {
  FTRACE(0x125b6c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b6c10 push ebp */
  push32((uint32_t)(EBP));
  /* 125b6c11 mov ebp, esp */
  EBP = (ESP);
  /* 125b6c13 cmp dword ptr [0x125d3c38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6c1a jne 0x125b6c4b */
  if (!C.zf) goto L_125b6c4b;
  /* 125b6c1c push 0xb */
  push32((uint32_t)(0xbu));
  /* 125b6c1e call 0x125abb10 */
  push32(0x125b6c23u); f_125abb10();
  /* 125b6c23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6c26 cmp dword ptr [0x125d3c38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6c2d jne 0x125b6c41 */
  if (!C.zf) goto L_125b6c41;
  /* 125b6c2f call 0x125b6c70 */
  push32(0x125b6c34u); f_125b6c70();
  /* 125b6c34 mov eax, dword ptr [0x125d3c38] */
  EAX = (r32((uint32_t)(0x125d3c38)));
  /* 125b6c39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6c3c mov dword ptr [0x125d3c38], eax */
  w32((uint32_t)(0x125d3c38), (EAX));
L_125b6c41:;
  /* 125b6c41 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125b6c43 call 0x125abbb0 */
  push32(0x125b6c48u); f_125abbb0();
  /* 125b6c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b6c4b:;
  /* 125b6c4b pop ebp */
  EBP = (pop32());
  /* 125b6c4c ret  */
  ESPCHK(0x125b6c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c50 @ 0x125b6c50 (30 bytes, 11 insns) */
void f_125b6c50(void) {
  FTRACE(0x125b6c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b6c50 push ebp */
  push32((uint32_t)(EBP));
  /* 125b6c51 mov ebp, esp */
  EBP = (ESP);
  /* 125b6c53 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125b6c55 call 0x125abb10 */
  push32(0x125b6c5au); f_125abb10();
  /* 125b6c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6c5d call 0x125b6c70 */
  push32(0x125b6c62u); f_125b6c70();
  /* 125b6c62 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125b6c64 call 0x125abbb0 */
  push32(0x125b6c69u); f_125abbb0();
  /* 125b6c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6c6c pop ebp */
  EBP = (pop32());
  /* 125b6c6d ret  */
  ESPCHK(0x125b6c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016c70 @ 0x125b6c70 (939 bytes, 266 insns) */
void f_125b6c70(void) {
  FTRACE(0x125b6c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b6c70 push ebp */
  push32((uint32_t)(EBP));
  /* 125b6c71 mov ebp, esp */
  EBP = (ESP);
  /* 125b6c73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b6c76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b6c7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 125b6c7f call 0x125abb10 */
  push32(0x125b6c84u); f_125abb10();
  /* 125b6c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6c87 mov dword ptr [0x125d3b80], 0 */
  w32((uint32_t)(0x125d3b80), (0x0u));
  /* 125b6c91 mov dword ptr [0x125d2e38], 0xffffffff */
  w32((uint32_t)(0x125d2e38), (0xffffffffu));
  /* 125b6c9b mov eax, dword ptr [0x125d2e38] */
  EAX = (r32((uint32_t)(0x125d2e38)));
  /* 125b6ca0 mov dword ptr [0x125d2e28], eax */
  w32((uint32_t)(0x125d2e28), (EAX));
  /* 125b6ca5 push 0x125d0020 */
  push32((uint32_t)(0x125d0020u));
  /* 125b6caa call 0x125b7af0 */
  push32(0x125b6cafu); f_125b7af0();
  /* 125b6caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6cb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b6cb5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6cb9 jne 0x125b6df3 */
  if (!C.zf) goto L_125b6df3;
  /* 125b6cbf push 0xc */
  push32((uint32_t)(0xcu));
  /* 125b6cc1 call 0x125abbb0 */
  push32(0x125b6cc6u); f_125abbb0();
  /* 125b6cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6cc9 push 0x125d3b88 */
  push32((uint32_t)(0x125d3b88u));
  /* 125b6cce call dword ptr [0x125d62cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62cc))), 0x125b6cd4u);
  /* 125b6cd4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6cd7 je 0x125b6dee */
  if (C.zf) goto L_125b6dee;
  /* 125b6cdd mov dword ptr [0x125d3b80], 1 */
  w32((uint32_t)(0x125d3b80), (0x1u));
  /* 125b6ce7 mov ecx, dword ptr [0x125d3b88] */
  ECX = (r32((uint32_t)(0x125d3b88)));
  /* 125b6ced imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b6cf0 mov dword ptr [0x125d2d90], ecx */
  w32((uint32_t)(0x125d2d90), (ECX));
  /* 125b6cf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6cf8 mov dx, word ptr [0x125d3bce] */
  DX = (r16((uint32_t)(0x125d3bce)));
  /* 125b6cff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b6d01 je 0x125b6d19 */
  if (C.zf) goto L_125b6d19;
  /* 125b6d03 mov eax, dword ptr [0x125d3bdc] */
  EAX = (r32((uint32_t)(0x125d3bdc)));
  /* 125b6d08 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b6d0b mov ecx, dword ptr [0x125d2d90] */
  ECX = (r32((uint32_t)(0x125d2d90)));
  /* 125b6d11 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6d13 mov dword ptr [0x125d2d90], ecx */
  w32((uint32_t)(0x125d2d90), (ECX));
L_125b6d19:;
  /* 125b6d19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b6d1b mov dx, word ptr [0x125d3c22] */
  DX = (r16((uint32_t)(0x125d3c22)));
  /* 125b6d22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b6d24 je 0x125b6d4e */
  if (C.zf) goto L_125b6d4e;
  /* 125b6d26 cmp dword ptr [0x125d3c30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6d2d je 0x125b6d4e */
  if (C.zf) goto L_125b6d4e;
  /* 125b6d2f mov dword ptr [0x125d2d94], 1 */
  w32((uint32_t)(0x125d2d94), (0x1u));
  /* 125b6d39 mov eax, dword ptr [0x125d3c30] */
  EAX = (r32((uint32_t)(0x125d3c30)));
  /* 125b6d3e sub eax, dword ptr [0x125d3bdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d3bdc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b6d44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b6d47 mov dword ptr [0x125d2d98], eax */
  w32((uint32_t)(0x125d2d98), (EAX));
  /* 125b6d4c jmp 0x125b6d62 */
  goto L_125b6d62;
L_125b6d4e:;
  /* 125b6d4e mov dword ptr [0x125d2d94], 0 */
  w32((uint32_t)(0x125d2d94), (0x0u));
  /* 125b6d58 mov dword ptr [0x125d2d98], 0 */
  w32((uint32_t)(0x125d2d98), (0x0u));
L_125b6d62:;
  /* 125b6d62 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 125b6d65 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6d68 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125b6d6a mov edx, dword ptr [0x125d2e1c] */
  EDX = (r32((uint32_t)(0x125d2e1c)));
  /* 125b6d70 push edx */
  push32((uint32_t)(EDX));
  /* 125b6d71 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b6d73 push 0x125d3b8c */
  push32((uint32_t)(0x125d3b8cu));
  /* 125b6d78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125b6d7d mov eax, dword ptr [0x125d3af0] */
  EAX = (r32((uint32_t)(0x125d3af0)));
  /* 125b6d82 push eax */
  push32((uint32_t)(EAX));
  /* 125b6d83 call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b6d89u);
  /* 125b6d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b6d8b je 0x125b6d9f */
  if (C.zf) goto L_125b6d9f;
  /* 125b6d8d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6d91 jne 0x125b6d9f */
  if (!C.zf) goto L_125b6d9f;
  /* 125b6d93 mov ecx, dword ptr [0x125d2e1c] */
  ECX = (r32((uint32_t)(0x125d2e1c)));
  /* 125b6d99 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 125b6d9d jmp 0x125b6da8 */
  goto L_125b6da8;
L_125b6d9f:;
  /* 125b6d9f mov edx, dword ptr [0x125d2e1c] */
  EDX = (r32((uint32_t)(0x125d2e1c)));
  /* 125b6da5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_125b6da8:;
  /* 125b6da8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 125b6dab push eax */
  push32((uint32_t)(EAX));
  /* 125b6dac push 0 */
  push32((uint32_t)(0x0u));
  /* 125b6dae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 125b6db0 mov ecx, dword ptr [0x125d2e20] */
  ECX = (r32((uint32_t)(0x125d2e20)));
  /* 125b6db6 push ecx */
  push32((uint32_t)(ECX));
  /* 125b6db7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b6db9 push 0x125d3be0 */
  push32((uint32_t)(0x125d3be0u));
  /* 125b6dbe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125b6dc3 mov edx, dword ptr [0x125d3af0] */
  EDX = (r32((uint32_t)(0x125d3af0)));
  /* 125b6dc9 push edx */
  push32((uint32_t)(EDX));
  /* 125b6dca call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b6dd0u);
  /* 125b6dd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b6dd2 je 0x125b6de5 */
  if (C.zf) goto L_125b6de5;
  /* 125b6dd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6dd8 jne 0x125b6de5 */
  if (!C.zf) goto L_125b6de5;
  /* 125b6dda mov eax, dword ptr [0x125d2e20] */
  EAX = (r32((uint32_t)(0x125d2e20)));
  /* 125b6ddf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 125b6de3 jmp 0x125b6dee */
  goto L_125b6dee;
L_125b6de5:;
  /* 125b6de5 mov ecx, dword ptr [0x125d2e20] */
  ECX = (r32((uint32_t)(0x125d2e20)));
  /* 125b6deb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_125b6dee:;
  /* 125b6dee jmp 0x125b7017 */
  goto L_125b7017;
L_125b6df3:;
  /* 125b6df3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6df6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b6df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b6dfb je 0x125b6e1d */
  if (C.zf) goto L_125b6e1d;
  /* 125b6dfd cmp dword ptr [0x125d3c34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6e04 je 0x125b6e2c */
  if (C.zf) goto L_125b6e2c;
  /* 125b6e06 mov ecx, dword ptr [0x125d3c34] */
  ECX = (r32((uint32_t)(0x125d3c34)));
  /* 125b6e0c push ecx */
  push32((uint32_t)(ECX));
  /* 125b6e0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6e10 push edx */
  push32((uint32_t)(EDX));
  /* 125b6e11 call 0x125b3da0 */
  push32(0x125b6e16u); f_125b3da0();
  /* 125b6e16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b6e1b jne 0x125b6e2c */
  if (!C.zf) goto L_125b6e2c;
L_125b6e1d:;
  /* 125b6e1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 125b6e1f call 0x125abbb0 */
  push32(0x125b6e24u); f_125abbb0();
  /* 125b6e24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6e27 jmp 0x125b7017 */
  goto L_125b7017;
L_125b6e2c:;
  /* 125b6e2c push 2 */
  push32((uint32_t)(0x2u));
  /* 125b6e2e mov eax, dword ptr [0x125d3c34] */
  EAX = (r32((uint32_t)(0x125d3c34)));
  /* 125b6e33 push eax */
  push32((uint32_t)(EAX));
  /* 125b6e34 call 0x125a8ba0 */
  push32(0x125b6e39u); f_125a8ba0();
  /* 125b6e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6e3c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 125b6e41 push 0x125d0018 */
  push32((uint32_t)(0x125d0018u));
  /* 125b6e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b6e48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6e4b push ecx */
  push32((uint32_t)(ECX));
  /* 125b6e4c call 0x125aaf40 */
  push32(0x125b6e51u); f_125aaf40();
  /* 125b6e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6e54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6e57 push eax */
  push32((uint32_t)(EAX));
  /* 125b6e58 call 0x125a8110 */
  push32(0x125b6e5du); f_125a8110();
  /* 125b6e5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6e60 mov dword ptr [0x125d3c34], eax */
  w32((uint32_t)(0x125d3c34), (EAX));
  /* 125b6e65 cmp dword ptr [0x125d3c34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6e6c jne 0x125b6e7d */
  if (!C.zf) goto L_125b6e7d;
  /* 125b6e6e push 0xc */
  push32((uint32_t)(0xcu));
  /* 125b6e70 call 0x125abbb0 */
  push32(0x125b6e75u); f_125abbb0();
  /* 125b6e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6e78 jmp 0x125b7017 */
  goto L_125b7017;
L_125b6e7d:;
  /* 125b6e7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6e80 push edx */
  push32((uint32_t)(EDX));
  /* 125b6e81 mov eax, dword ptr [0x125d3c34] */
  EAX = (r32((uint32_t)(0x125d3c34)));
  /* 125b6e86 push eax */
  push32((uint32_t)(EAX));
  /* 125b6e87 call 0x125ab0c0 */
  push32(0x125b6e8cu); f_125ab0c0();
  /* 125b6e8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6e8f push 0xc */
  push32((uint32_t)(0xcu));
  /* 125b6e91 call 0x125abbb0 */
  push32(0x125b6e96u); f_125abbb0();
  /* 125b6e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6e99 push 3 */
  push32((uint32_t)(0x3u));
  /* 125b6e9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6e9e push ecx */
  push32((uint32_t)(ECX));
  /* 125b6e9f mov edx, dword ptr [0x125d2e1c] */
  EDX = (r32((uint32_t)(0x125d2e1c)));
  /* 125b6ea5 push edx */
  push32((uint32_t)(EDX));
  /* 125b6ea6 call 0x125ab930 */
  push32(0x125b6eabu); f_125ab930();
  /* 125b6eab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6eae mov eax, dword ptr [0x125d2e1c] */
  EAX = (r32((uint32_t)(0x125d2e1c)));
  /* 125b6eb3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 125b6eb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6eba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6ebd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b6ec0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6ec3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b6ec6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6ec9 jne 0x125b6edd */
  if (!C.zf) goto L_125b6edd;
  /* 125b6ecb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b6ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6ed1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b6ed4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6ed7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6eda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125b6edd:;
  /* 125b6edd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6ee0 push eax */
  push32((uint32_t)(EAX));
  /* 125b6ee1 call 0x125b69c0 */
  push32(0x125b6ee6u); f_125b69c0();
  /* 125b6ee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6ee9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b6eef mov dword ptr [0x125d2d90], eax */
  w32((uint32_t)(0x125d2d90), (EAX));
L_125b6ef4:;
  /* 125b6ef4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6ef7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b6efa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6efd je 0x125b6f15 */
  if (C.zf) goto L_125b6f15;
  /* 125b6eff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f02 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b6f05 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6f08 jl 0x125b6f20 */
  if ((C.sf!=C.of)) goto L_125b6f20;
  /* 125b6f0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b6f10 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6f13 jg 0x125b6f20 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b6f20;
L_125b6f15:;
  /* 125b6f15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6f1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b6f1e jmp 0x125b6ef4 */
  goto L_125b6ef4;
L_125b6f20:;
  /* 125b6f20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b6f26 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6f29 jne 0x125b6fc5 */
  if (!C.zf) goto L_125b6fc5;
  /* 125b6f2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6f35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b6f38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f3b push edx */
  push32((uint32_t)(EDX));
  /* 125b6f3c call 0x125b69c0 */
  push32(0x125b6f41u); f_125b69c0();
  /* 125b6f41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6f44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b6f47 mov ecx, dword ptr [0x125d2d90] */
  ECX = (r32((uint32_t)(0x125d2d90)));
  /* 125b6f4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6f4f mov dword ptr [0x125d2d90], ecx */
  w32((uint32_t)(0x125d2d90), (ECX));
L_125b6f55:;
  /* 125b6f55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f58 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b6f5b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6f5e jl 0x125b6f76 */
  if ((C.sf!=C.of)) goto L_125b6f76;
  /* 125b6f60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f63 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b6f66 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6f69 jg 0x125b6f76 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b6f76;
  /* 125b6f6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6f71 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b6f74 jmp 0x125b6f55 */
  goto L_125b6f55;
L_125b6f76:;
  /* 125b6f76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f79 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b6f7c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6f7f jne 0x125b6fc5 */
  if (!C.zf) goto L_125b6fc5;
  /* 125b6f81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6f87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b6f8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6f8d push ecx */
  push32((uint32_t)(ECX));
  /* 125b6f8e call 0x125b69c0 */
  push32(0x125b6f93u); f_125b69c0();
  /* 125b6f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6f96 mov edx, dword ptr [0x125d2d90] */
  EDX = (r32((uint32_t)(0x125d2d90)));
  /* 125b6f9c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6f9e mov dword ptr [0x125d2d90], edx */
  w32((uint32_t)(0x125d2d90), (EDX));
L_125b6fa4:;
  /* 125b6fa4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6fa7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b6faa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6fad jl 0x125b6fc5 */
  if ((C.sf!=C.of)) goto L_125b6fc5;
  /* 125b6faf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6fb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 125b6fb5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6fb8 jg 0x125b6fc5 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b6fc5;
  /* 125b6fba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6fbd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b6fc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b6fc3 jmp 0x125b6fa4 */
  goto L_125b6fa4;
L_125b6fc5:;
  /* 125b6fc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6fc9 je 0x125b6fd9 */
  if (C.zf) goto L_125b6fd9;
  /* 125b6fcb mov edx, dword ptr [0x125d2d90] */
  EDX = (r32((uint32_t)(0x125d2d90)));
  /* 125b6fd1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b6fd3 mov dword ptr [0x125d2d90], edx */
  w32((uint32_t)(0x125d2d90), (EDX));
L_125b6fd9:;
  /* 125b6fd9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6fdc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 125b6fdf mov dword ptr [0x125d2d94], ecx */
  w32((uint32_t)(0x125d2d94), (ECX));
  /* 125b6fe5 cmp dword ptr [0x125d2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b6fec je 0x125b700e */
  if (C.zf) goto L_125b700e;
  /* 125b6fee push 3 */
  push32((uint32_t)(0x3u));
  /* 125b6ff0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b6ff3 push edx */
  push32((uint32_t)(EDX));
  /* 125b6ff4 mov eax, dword ptr [0x125d2e20] */
  EAX = (r32((uint32_t)(0x125d2e20)));
  /* 125b6ff9 push eax */
  push32((uint32_t)(EAX));
  /* 125b6ffa call 0x125ab930 */
  push32(0x125b6fffu); f_125ab930();
  /* 125b6fff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7002 mov ecx, dword ptr [0x125d2e20] */
  ECX = (r32((uint32_t)(0x125d2e20)));
  /* 125b7008 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 125b700c jmp 0x125b7017 */
  goto L_125b7017;
L_125b700e:;
  /* 125b700e mov edx, dword ptr [0x125d2e20] */
  EDX = (r32((uint32_t)(0x125d2e20)));
  /* 125b7014 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_125b7017:;
  /* 125b7017 mov esp, ebp */
  ESP = (EBP);
  /* 125b7019 pop ebp */
  EBP = (pop32());
  /* 125b701a ret  */
  ESPCHK(0x125b6c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10017020 @ 0x125b7020 (46 bytes, 18 insns) */
void f_125b7020(void) {
  FTRACE(0x125b7020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7020 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7021 mov ebp, esp */
  EBP = (ESP);
  /* 125b7023 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7024 push 0xb */
  push32((uint32_t)(0xbu));
  /* 125b7026 call 0x125abb10 */
  push32(0x125b702bu); f_125abb10();
  /* 125b702b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b702e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7031 push eax */
  push32((uint32_t)(EAX));
  /* 125b7032 call 0x125b7050 */
  push32(0x125b7037u); f_125b7050();
  /* 125b7037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b703a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b703d push 0xb */
  push32((uint32_t)(0xbu));
  /* 125b703f call 0x125abbb0 */
  push32(0x125b7044u); f_125abbb0();
  /* 125b7044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b704a mov esp, ebp */
  ESP = (EBP);
  /* 125b704c pop ebp */
  EBP = (pop32());
  /* 125b704d ret  */
  ESPCHK(0x125b7020u, _esp0);
  ESP += 4; return;
}

/* FUN_10017050 @ 0x125b7050 (762 bytes, 246 insns) */
void f_125b7050(void) {
  FTRACE(0x125b7050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7050 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7051 mov ebp, esp */
  EBP = (ESP);
  /* 125b7053 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7054 cmp dword ptr [0x125d2d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d2d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b705b jne 0x125b7064 */
  if (!C.zf) goto L_125b7064;
  /* 125b705d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b705f jmp 0x125b7346 */
  goto L_125b7346;
L_125b7064:;
  /* 125b7064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7067 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125b706a cmp ecx, dword ptr [0x125d2e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d2e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7070 jne 0x125b7084 */
  if (!C.zf) goto L_125b7084;
  /* 125b7072 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7075 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125b7078 cmp eax, dword ptr [0x125d2e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d2e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b707e je 0x125b724b */
  if (C.zf) goto L_125b724b;
L_125b7084:;
  /* 125b7084 cmp dword ptr [0x125d3b80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3b80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b708b je 0x125b7205 */
  if (C.zf) goto L_125b7205;
  /* 125b7091 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b7093 mov cx, word ptr [0x125d3c20] */
  CX = (r16((uint32_t)(0x125d3c20)));
  /* 125b709a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b709c jne 0x125b70f9 */
  if (!C.zf) goto L_125b70f9;
  /* 125b709e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b70a0 mov dx, word ptr [0x125d3c2e] */
  DX = (r16((uint32_t)(0x125d3c2e)));
  /* 125b70a7 push edx */
  push32((uint32_t)(EDX));
  /* 125b70a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b70aa mov ax, word ptr [0x125d3c2c] */
  AX = (r16((uint32_t)(0x125d3c2c)));
  /* 125b70b0 push eax */
  push32((uint32_t)(EAX));
  /* 125b70b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b70b3 mov cx, word ptr [0x125d3c2a] */
  CX = (r16((uint32_t)(0x125d3c2a)));
  /* 125b70ba push ecx */
  push32((uint32_t)(ECX));
  /* 125b70bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b70bd mov dx, word ptr [0x125d3c28] */
  DX = (r16((uint32_t)(0x125d3c28)));
  /* 125b70c4 push edx */
  push32((uint32_t)(EDX));
  /* 125b70c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b70c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b70c9 mov ax, word ptr [0x125d3c24] */
  AX = (r16((uint32_t)(0x125d3c24)));
  /* 125b70cf push eax */
  push32((uint32_t)(EAX));
  /* 125b70d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b70d2 mov cx, word ptr [0x125d3c26] */
  CX = (r16((uint32_t)(0x125d3c26)));
  /* 125b70d9 push ecx */
  push32((uint32_t)(ECX));
  /* 125b70da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b70dc mov dx, word ptr [0x125d3c22] */
  DX = (r16((uint32_t)(0x125d3c22)));
  /* 125b70e3 push edx */
  push32((uint32_t)(EDX));
  /* 125b70e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b70e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125b70ea push ecx */
  push32((uint32_t)(ECX));
  /* 125b70eb push 1 */
  push32((uint32_t)(0x1u));
  /* 125b70ed push 1 */
  push32((uint32_t)(0x1u));
  /* 125b70ef call 0x125b7350 */
  push32(0x125b70f4u); f_125b7350();
  /* 125b70f4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b70f7 jmp 0x125b714a */
  goto L_125b714a;
L_125b70f9:;
  /* 125b70f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b70fb mov dx, word ptr [0x125d3c2e] */
  DX = (r16((uint32_t)(0x125d3c2e)));
  /* 125b7102 push edx */
  push32((uint32_t)(EDX));
  /* 125b7103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7105 mov ax, word ptr [0x125d3c2c] */
  AX = (r16((uint32_t)(0x125d3c2c)));
  /* 125b710b push eax */
  push32((uint32_t)(EAX));
  /* 125b710c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b710e mov cx, word ptr [0x125d3c2a] */
  CX = (r16((uint32_t)(0x125d3c2a)));
  /* 125b7115 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7116 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b7118 mov dx, word ptr [0x125d3c28] */
  DX = (r16((uint32_t)(0x125d3c28)));
  /* 125b711f push edx */
  push32((uint32_t)(EDX));
  /* 125b7120 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7122 mov ax, word ptr [0x125d3c26] */
  AX = (r16((uint32_t)(0x125d3c26)));
  /* 125b7128 push eax */
  push32((uint32_t)(EAX));
  /* 125b7129 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b712b push 0 */
  push32((uint32_t)(0x0u));
  /* 125b712d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b712f mov cx, word ptr [0x125d3c22] */
  CX = (r16((uint32_t)(0x125d3c22)));
  /* 125b7136 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7137 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b713a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125b713d push eax */
  push32((uint32_t)(EAX));
  /* 125b713e push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7140 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7142 call 0x125b7350 */
  push32(0x125b7147u); f_125b7350();
  /* 125b7147 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b714a:;
  /* 125b714a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b714c mov cx, word ptr [0x125d3bcc] */
  CX = (r16((uint32_t)(0x125d3bcc)));
  /* 125b7153 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b7155 jne 0x125b71b2 */
  if (!C.zf) goto L_125b71b2;
  /* 125b7157 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b7159 mov dx, word ptr [0x125d3bda] */
  DX = (r16((uint32_t)(0x125d3bda)));
  /* 125b7160 push edx */
  push32((uint32_t)(EDX));
  /* 125b7161 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7163 mov ax, word ptr [0x125d3bd8] */
  AX = (r16((uint32_t)(0x125d3bd8)));
  /* 125b7169 push eax */
  push32((uint32_t)(EAX));
  /* 125b716a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b716c mov cx, word ptr [0x125d3bd6] */
  CX = (r16((uint32_t)(0x125d3bd6)));
  /* 125b7173 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7174 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b7176 mov dx, word ptr [0x125d3bd4] */
  DX = (r16((uint32_t)(0x125d3bd4)));
  /* 125b717d push edx */
  push32((uint32_t)(EDX));
  /* 125b717e push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7182 mov ax, word ptr [0x125d3bd0] */
  AX = (r16((uint32_t)(0x125d3bd0)));
  /* 125b7188 push eax */
  push32((uint32_t)(EAX));
  /* 125b7189 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b718b mov cx, word ptr [0x125d3bd2] */
  CX = (r16((uint32_t)(0x125d3bd2)));
  /* 125b7192 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7193 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b7195 mov dx, word ptr [0x125d3bce] */
  DX = (r16((uint32_t)(0x125d3bce)));
  /* 125b719c push edx */
  push32((uint32_t)(EDX));
  /* 125b719d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b71a0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125b71a3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b71a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b71a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b71a8 call 0x125b7350 */
  push32(0x125b71adu); f_125b7350();
  /* 125b71ad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b71b0 jmp 0x125b7203 */
  goto L_125b7203;
L_125b71b2:;
  /* 125b71b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b71b4 mov dx, word ptr [0x125d3bda] */
  DX = (r16((uint32_t)(0x125d3bda)));
  /* 125b71bb push edx */
  push32((uint32_t)(EDX));
  /* 125b71bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b71be mov ax, word ptr [0x125d3bd8] */
  AX = (r16((uint32_t)(0x125d3bd8)));
  /* 125b71c4 push eax */
  push32((uint32_t)(EAX));
  /* 125b71c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b71c7 mov cx, word ptr [0x125d3bd6] */
  CX = (r16((uint32_t)(0x125d3bd6)));
  /* 125b71ce push ecx */
  push32((uint32_t)(ECX));
  /* 125b71cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b71d1 mov dx, word ptr [0x125d3bd4] */
  DX = (r16((uint32_t)(0x125d3bd4)));
  /* 125b71d8 push edx */
  push32((uint32_t)(EDX));
  /* 125b71d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b71db mov ax, word ptr [0x125d3bd2] */
  AX = (r16((uint32_t)(0x125d3bd2)));
  /* 125b71e1 push eax */
  push32((uint32_t)(EAX));
  /* 125b71e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b71e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b71e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b71e8 mov cx, word ptr [0x125d3bce] */
  CX = (r16((uint32_t)(0x125d3bce)));
  /* 125b71ef push ecx */
  push32((uint32_t)(ECX));
  /* 125b71f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b71f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 125b71f6 push eax */
  push32((uint32_t)(EAX));
  /* 125b71f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b71f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b71fb call 0x125b7350 */
  push32(0x125b7200u); f_125b7350();
  /* 125b7200 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b7203:;
  /* 125b7203 jmp 0x125b724b */
  goto L_125b724b;
L_125b7205:;
  /* 125b7205 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7207 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7209 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b720b push 2 */
  push32((uint32_t)(0x2u));
  /* 125b720d push 0 */
  push32((uint32_t)(0x0u));
  /* 125b720f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7211 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7213 push 4 */
  push32((uint32_t)(0x4u));
  /* 125b7215 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7218 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 125b721b push edx */
  push32((uint32_t)(EDX));
  /* 125b721c push 1 */
  push32((uint32_t)(0x1u));
  /* 125b721e push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7220 call 0x125b7350 */
  push32(0x125b7225u); f_125b7350();
  /* 125b7225 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7228 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b722a push 0 */
  push32((uint32_t)(0x0u));
  /* 125b722c push 0 */
  push32((uint32_t)(0x0u));
  /* 125b722e push 2 */
  push32((uint32_t)(0x2u));
  /* 125b7230 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7232 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7234 push 5 */
  push32((uint32_t)(0x5u));
  /* 125b7236 push 0xa */
  push32((uint32_t)(0xau));
  /* 125b7238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b723b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 125b723e push ecx */
  push32((uint32_t)(ECX));
  /* 125b723f push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7241 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7243 call 0x125b7350 */
  push32(0x125b7248u); f_125b7350();
  /* 125b7248 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b724b:;
  /* 125b724b mov edx, dword ptr [0x125d2e2c] */
  EDX = (r32((uint32_t)(0x125d2e2c)));
  /* 125b7251 cmp edx, dword ptr [0x125d2e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7257 jge 0x125b72a4 */
  if ((C.sf==C.of)) goto L_125b72a4;
  /* 125b7259 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b725c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125b725f cmp ecx, dword ptr [0x125d2e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7265 jl 0x125b7275 */
  if ((C.sf!=C.of)) goto L_125b7275;
  /* 125b7267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b726a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125b726d cmp eax, dword ptr [0x125d2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7273 jle 0x125b727c */
  if ((C.zf||C.sf!=C.of)) goto L_125b727c;
L_125b7275:;
  /* 125b7275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7277 jmp 0x125b7346 */
  goto L_125b7346;
L_125b727c:;
  /* 125b727c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b727f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125b7282 cmp edx, dword ptr [0x125d2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7288 jle 0x125b72a2 */
  if ((C.zf||C.sf!=C.of)) goto L_125b72a2;
  /* 125b728a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b728d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125b7290 cmp ecx, dword ptr [0x125d2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7296 jge 0x125b72a2 */
  if ((C.sf==C.of)) goto L_125b72a2;
  /* 125b7298 mov eax, 1 */
  EAX = (0x1u);
  /* 125b729d jmp 0x125b7346 */
  goto L_125b7346;
L_125b72a2:;
  /* 125b72a2 jmp 0x125b72e7 */
  goto L_125b72e7;
L_125b72a4:;
  /* 125b72a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b72a7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125b72aa cmp eax, dword ptr [0x125d2e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b72b0 jl 0x125b72c0 */
  if ((C.sf!=C.of)) goto L_125b72c0;
  /* 125b72b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b72b5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125b72b8 cmp edx, dword ptr [0x125d2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b72be jle 0x125b72c7 */
  if ((C.zf||C.sf!=C.of)) goto L_125b72c7;
L_125b72c0:;
  /* 125b72c0 mov eax, 1 */
  EAX = (0x1u);
  /* 125b72c5 jmp 0x125b7346 */
  goto L_125b7346;
L_125b72c7:;
  /* 125b72c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b72ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 125b72cd cmp ecx, dword ptr [0x125d2e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d2e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b72d3 jle 0x125b72e7 */
  if ((C.zf||C.sf!=C.of)) goto L_125b72e7;
  /* 125b72d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b72d8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 125b72db cmp eax, dword ptr [0x125d2e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b72e1 jge 0x125b72e7 */
  if ((C.sf==C.of)) goto L_125b72e7;
  /* 125b72e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b72e5 jmp 0x125b7346 */
  goto L_125b7346;
L_125b72e7:;
  /* 125b72e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b72ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 125b72ed imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b72f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b72f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b72f5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b72f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b72fa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 125b72fd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b7303 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7305 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b730b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b730e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7311 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 125b7314 cmp edx, dword ptr [0x125d2e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x125d2e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b731a jne 0x125b7332 */
  if (!C.zf) goto L_125b7332;
  /* 125b731c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b731f cmp eax, dword ptr [0x125d2e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d2e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7325 jl 0x125b732e */
  if ((C.sf!=C.of)) goto L_125b732e;
  /* 125b7327 mov eax, 1 */
  EAX = (0x1u);
  /* 125b732c jmp 0x125b7346 */
  goto L_125b7346;
L_125b732e:;
  /* 125b732e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7330 jmp 0x125b7346 */
  goto L_125b7346;
L_125b7332:;
  /* 125b7332 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7335 cmp ecx, dword ptr [0x125d2e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d2e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b733b jge 0x125b7344 */
  if ((C.sf==C.of)) goto L_125b7344;
  /* 125b733d mov eax, 1 */
  EAX = (0x1u);
  /* 125b7342 jmp 0x125b7346 */
  goto L_125b7346;
L_125b7344:;
  /* 125b7344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b7346:;
  /* 125b7346 mov esp, ebp */
  ESP = (EBP);
  /* 125b7348 pop ebp */
  EBP = (pop32());
  /* 125b7349 ret  */
  ESPCHK(0x125b7050u, _esp0);
  ESP += 4; return;
}

/* FUN_10017350 @ 0x125b7350 (504 bytes, 145 insns) */
void f_125b7350(void) {
  FTRACE(0x125b7350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7350 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7351 mov ebp, esp */
  EBP = (ESP);
  /* 125b7353 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b7356 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b735a jne 0x125b742c */
  if (!C.zf) goto L_125b742c;
  /* 125b7360 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7363 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 125b7366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7368 jne 0x125b7379 */
  if (!C.zf) goto L_125b7379;
  /* 125b736a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b736d mov edx, dword ptr [ecx*4 + 0x125d2e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d2e4c)));
  /* 125b7374 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125b7377 jmp 0x125b7386 */
  goto L_125b7386;
L_125b7379:;
  /* 125b7379 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b737c mov ecx, dword ptr [eax*4 + 0x125d2e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x125d2e80)));
  /* 125b7383 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_125b7386:;
  /* 125b7386 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b7389 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b738c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b738f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7392 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b7395 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b739b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b739e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b73a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b73a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b73a6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 125b73a9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 125b73ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 125b73ae mov ecx, 7 */
  ECX = (0x7u);
  /* 125b73b3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 125b73b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b73b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b73bb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b73be jg 0x125b73d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b73d9;
  /* 125b73c0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b73c3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b73c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b73c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b73cc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b73cf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b73d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b73d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b73d7 jmp 0x125b73ed */
  goto L_125b73ed;
L_125b73d9:;
  /* 125b73d9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b73dc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b73df mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b73e2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b73e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b73e8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b73ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125b73ed:;
  /* 125b73ed cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b73f1 jne 0x125b742a */
  if (!C.zf) goto L_125b742a;
  /* 125b73f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b73f6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 125b73f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b73fb jne 0x125b740c */
  if (!C.zf) goto L_125b740c;
  /* 125b73fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b7400 mov eax, dword ptr [edx*4 + 0x125d2e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d2e50)));
  /* 125b7407 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125b740a jmp 0x125b7419 */
  goto L_125b7419;
L_125b740c:;
  /* 125b740c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b740f mov edx, dword ptr [ecx*4 + 0x125d2e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x125d2e84)));
  /* 125b7416 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_125b7419:;
  /* 125b7419 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b741c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b741f jle 0x125b742a */
  if ((C.zf||C.sf!=C.of)) goto L_125b742a;
  /* 125b7421 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b7424 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b7427 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125b742a:;
  /* 125b742a jmp 0x125b7461 */
  goto L_125b7461;
L_125b742c:;
  /* 125b742c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b742f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 125b7432 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b7434 jne 0x125b7445 */
  if (!C.zf) goto L_125b7445;
  /* 125b7436 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b7439 mov ecx, dword ptr [eax*4 + 0x125d2e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x125d2e4c)));
  /* 125b7440 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 125b7443 jmp 0x125b7452 */
  goto L_125b7452;
L_125b7445:;
  /* 125b7445 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b7448 mov eax, dword ptr [edx*4 + 0x125d2e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x125d2e80)));
  /* 125b744f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_125b7452:;
  /* 125b7452 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b7455 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 125b7458 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b745b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b745e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_125b7461:;
  /* 125b7461 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7465 jne 0x125b74a1 */
  if (!C.zf) goto L_125b74a1;
  /* 125b7467 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b746a mov dword ptr [0x125d2e2c], eax */
  w32((uint32_t)(0x125d2e2c), (EAX));
  /* 125b746f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 125b7472 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b7475 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 125b7478 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b747a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b747d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 125b7480 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7482 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b7488 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 125b748b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b748d mov dword ptr [0x125d2e30], ecx */
  w32((uint32_t)(0x125d2e30), (ECX));
  /* 125b7493 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7496 mov dword ptr [0x125d2e28], edx */
  w32((uint32_t)(0x125d2e28), (EDX));
  /* 125b749c jmp 0x125b7544 */
  goto L_125b7544;
L_125b74a1:;
  /* 125b74a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b74a4 mov dword ptr [0x125d2e3c], eax */
  w32((uint32_t)(0x125d2e3c), (EAX));
  /* 125b74a9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 125b74ac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b74af mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 125b74b2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b74b4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b74b7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 125b74ba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b74bc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b74c2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 125b74c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b74c7 mov dword ptr [0x125d2e40], ecx */
  w32((uint32_t)(0x125d2e40), (ECX));
  /* 125b74cd mov edx, dword ptr [0x125d2d98] */
  EDX = (r32((uint32_t)(0x125d2d98)));
  /* 125b74d3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 125b74d9 mov eax, dword ptr [0x125d2e40] */
  EAX = (r32((uint32_t)(0x125d2e40)));
  /* 125b74de add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b74e0 mov dword ptr [0x125d2e40], eax */
  w32((uint32_t)(0x125d2e40), (EAX));
  /* 125b74e5 cmp dword ptr [0x125d2e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d2e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b74ec jge 0x125b7511 */
  if ((C.sf==C.of)) goto L_125b7511;
  /* 125b74ee mov ecx, dword ptr [0x125d2e40] */
  ECX = (r32((uint32_t)(0x125d2e40)));
  /* 125b74f4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b74fa mov dword ptr [0x125d2e40], ecx */
  w32((uint32_t)(0x125d2e40), (ECX));
  /* 125b7500 mov edx, dword ptr [0x125d2e3c] */
  EDX = (r32((uint32_t)(0x125d2e3c)));
  /* 125b7506 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b7509 mov dword ptr [0x125d2e3c], edx */
  w32((uint32_t)(0x125d2e3c), (EDX));
  /* 125b750f jmp 0x125b753b */
  goto L_125b753b;
L_125b7511:;
  /* 125b7511 cmp dword ptr [0x125d2e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x125d2e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b751b jl 0x125b753b */
  if ((C.sf!=C.of)) goto L_125b753b;
  /* 125b751d mov eax, dword ptr [0x125d2e40] */
  EAX = (r32((uint32_t)(0x125d2e40)));
  /* 125b7522 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b7527 mov dword ptr [0x125d2e40], eax */
  w32((uint32_t)(0x125d2e40), (EAX));
  /* 125b752c mov ecx, dword ptr [0x125d2e3c] */
  ECX = (r32((uint32_t)(0x125d2e3c)));
  /* 125b7532 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7535 mov dword ptr [0x125d2e3c], ecx */
  w32((uint32_t)(0x125d2e3c), (ECX));
L_125b753b:;
  /* 125b753b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b753e mov dword ptr [0x125d2e38], edx */
  w32((uint32_t)(0x125d2e38), (EDX));
L_125b7544:;
  /* 125b7544 mov esp, ebp */
  ESP = (EBP);
  /* 125b7546 pop ebp */
  EBP = (pop32());
  /* 125b7547 ret  */
  ESPCHK(0x125b7350u, _esp0);
  ESP += 4; return;
}

/* FUN_10017550 @ 0x125b7550 (382 bytes, 135 insns) */
void f_125b7550(void) {
  FTRACE(0x125b7550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7550 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7551 mov ebp, esp */
  EBP = (ESP);
  /* 125b7553 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b7555 push 0x125d0028 */
  push32((uint32_t)(0x125d0028u));
  /* 125b755a push 0x125b1218 */
  push32((uint32_t)(0x125b1218u));
  /* 125b755f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125b7565 push eax */
  push32((uint32_t)(EAX));
  /* 125b7566 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125b756d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7570 push ebx */
  push32((uint32_t)(EBX));
  /* 125b7571 push esi */
  push32((uint32_t)(ESI));
  /* 125b7572 push edi */
  push32((uint32_t)(EDI));
  /* 125b7573 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b7576 cmp dword ptr [0x125d3c3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b757d jne 0x125b75c2 */
  if (!C.zf) goto L_125b75c2;
  /* 125b757f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7581 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7583 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7585 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7587 call dword ptr [0x125d62c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62c8))), 0x125b758du);
  /* 125b758d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b758f je 0x125b759d */
  if (C.zf) goto L_125b759d;
  /* 125b7591 mov dword ptr [0x125d3c3c], 1 */
  w32((uint32_t)(0x125d3c3c), (0x1u));
  /* 125b759b jmp 0x125b75c2 */
  goto L_125b75c2;
L_125b759d:;
  /* 125b759d push 0 */
  push32((uint32_t)(0x0u));
  /* 125b759f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b75a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b75a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b75a5 call dword ptr [0x125d62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e0))), 0x125b75abu);
  /* 125b75ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b75ad je 0x125b75bb */
  if (C.zf) goto L_125b75bb;
  /* 125b75af mov dword ptr [0x125d3c3c], 2 */
  w32((uint32_t)(0x125d3c3c), (0x2u));
  /* 125b75b9 jmp 0x125b75c2 */
  goto L_125b75c2;
L_125b75bb:;
  /* 125b75bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b75bd jmp 0x125b76d1 */
  goto L_125b76d1;
L_125b75c2:;
  /* 125b75c2 cmp dword ptr [0x125d3c3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b75c9 jne 0x125b75e6 */
  if (!C.zf) goto L_125b75e6;
  /* 125b75cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b75ce push eax */
  push32((uint32_t)(EAX));
  /* 125b75cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b75d2 push ecx */
  push32((uint32_t)(ECX));
  /* 125b75d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b75d6 push edx */
  push32((uint32_t)(EDX));
  /* 125b75d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b75da push eax */
  push32((uint32_t)(EAX));
  /* 125b75db call dword ptr [0x125d62c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62c8))), 0x125b75e1u);
  /* 125b75e1 jmp 0x125b76d1 */
  goto L_125b76d1;
L_125b75e6:;
  /* 125b75e6 cmp dword ptr [0x125d3c3c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b75ed jne 0x125b76cf */
  if (!C.zf) goto L_125b76cf;
  /* 125b75f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b75f7 jne 0x125b7602 */
  if (!C.zf) goto L_125b7602;
  /* 125b75f9 mov ecx, dword ptr [0x125d3af0] */
  ECX = (r32((uint32_t)(0x125d3af0)));
  /* 125b75ff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_125b7602:;
  /* 125b7602 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7604 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7606 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b7609 push edx */
  push32((uint32_t)(EDX));
  /* 125b760a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b760d push eax */
  push32((uint32_t)(EAX));
  /* 125b760e call dword ptr [0x125d62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e0))), 0x125b7614u);
  /* 125b7614 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125b7617 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b761b jne 0x125b7624 */
  if (!C.zf) goto L_125b7624;
  /* 125b761d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b761f jmp 0x125b76d1 */
  goto L_125b76d1;
L_125b7624:;
  /* 125b7624 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b762b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b762e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7631 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125b7633 call 0x125ab2b0 */
  push32(0x125b7638u); f_125ab2b0();
  /* 125b7638 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 125b763b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b763e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b7641 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125b7644 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b764b jmp 0x125b7664 */
  goto L_125b7664;
  /* 125b764d mov eax, 1 */
  EAX = (0x1u);
  /* 125b7652 ret  */
  ESPCHK(0x125b7550u, _esp0);
  ESP += 4; return;
  /* 125b7653 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125b7656 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125b765d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b7664:;
  /* 125b7664 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7668 jne 0x125b766e */
  if (!C.zf) goto L_125b766e;
  /* 125b766a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b766c jmp 0x125b76d1 */
  goto L_125b76d1;
L_125b766e:;
  /* 125b766e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b7671 push edx */
  push32((uint32_t)(EDX));
  /* 125b7672 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b7675 push eax */
  push32((uint32_t)(EAX));
  /* 125b7676 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b7679 push ecx */
  push32((uint32_t)(ECX));
  /* 125b767a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b767d push edx */
  push32((uint32_t)(EDX));
  /* 125b767e call dword ptr [0x125d62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e0))), 0x125b7684u);
  /* 125b7684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7686 jne 0x125b768c */
  if (!C.zf) goto L_125b768c;
  /* 125b7688 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b768a jmp 0x125b76d1 */
  goto L_125b76d1;
L_125b768c:;
  /* 125b768c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7690 jne 0x125b76ad */
  if (!C.zf) goto L_125b76ad;
  /* 125b7692 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7694 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7696 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b7698 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b769b push eax */
  push32((uint32_t)(EAX));
  /* 125b769c push 1 */
  push32((uint32_t)(0x1u));
  /* 125b769e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b76a1 push ecx */
  push32((uint32_t)(ECX));
  /* 125b76a2 call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b76a8u);
  /* 125b76a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125b76ab jmp 0x125b76ca */
  goto L_125b76ca;
L_125b76ad:;
  /* 125b76ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b76b0 push edx */
  push32((uint32_t)(EDX));
  /* 125b76b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b76b4 push eax */
  push32((uint32_t)(EAX));
  /* 125b76b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b76b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b76ba push ecx */
  push32((uint32_t)(ECX));
  /* 125b76bb push 1 */
  push32((uint32_t)(0x1u));
  /* 125b76bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b76c0 push edx */
  push32((uint32_t)(EDX));
  /* 125b76c1 call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b76c7u);
  /* 125b76c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125b76ca:;
  /* 125b76ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b76cd jmp 0x125b76d1 */
  goto L_125b76d1;
L_125b76cf:;
  /* 125b76cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b76d1:;
  /* 125b76d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 125b76d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b76d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125b76de pop edi */
  EDI = (pop32());
  /* 125b76df pop esi */
  ESI = (pop32());
  /* 125b76e0 pop ebx */
  EBX = (pop32());
  /* 125b76e1 mov esp, ebp */
  ESP = (EBP);
  /* 125b76e3 pop ebp */
  EBP = (pop32());
  /* 125b76e4 ret  */
  ESPCHK(0x125b7550u, _esp0);
  ESP += 4; return;
}

/* FUN_100176f0 @ 0x125b76f0 (398 bytes, 140 insns) */
void f_125b76f0(void) {
  FTRACE(0x125b76f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b76f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b76f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b76f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b76f5 push 0x125d0038 */
  push32((uint32_t)(0x125d0038u));
  /* 125b76fa push 0x125b1218 */
  push32((uint32_t)(0x125b1218u));
  /* 125b76ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125b7705 push eax */
  push32((uint32_t)(EAX));
  /* 125b7706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125b770d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7710 push ebx */
  push32((uint32_t)(EBX));
  /* 125b7711 push esi */
  push32((uint32_t)(ESI));
  /* 125b7712 push edi */
  push32((uint32_t)(EDI));
  /* 125b7713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b7716 cmp dword ptr [0x125d3c40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b771d jne 0x125b7762 */
  if (!C.zf) goto L_125b7762;
  /* 125b771f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7721 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7723 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7725 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7727 call dword ptr [0x125d62c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62c8))), 0x125b772du);
  /* 125b772d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b772f je 0x125b773d */
  if (C.zf) goto L_125b773d;
  /* 125b7731 mov dword ptr [0x125d3c40], 1 */
  w32((uint32_t)(0x125d3c40), (0x1u));
  /* 125b773b jmp 0x125b7762 */
  goto L_125b7762;
L_125b773d:;
  /* 125b773d push 0 */
  push32((uint32_t)(0x0u));
  /* 125b773f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7741 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7743 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7745 call dword ptr [0x125d62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e0))), 0x125b774bu);
  /* 125b774b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b774d je 0x125b775b */
  if (C.zf) goto L_125b775b;
  /* 125b774f mov dword ptr [0x125d3c40], 2 */
  w32((uint32_t)(0x125d3c40), (0x2u));
  /* 125b7759 jmp 0x125b7762 */
  goto L_125b7762;
L_125b775b:;
  /* 125b775b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b775d jmp 0x125b7881 */
  goto L_125b7881;
L_125b7762:;
  /* 125b7762 cmp dword ptr [0x125d3c40], 2 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c40))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7769 jne 0x125b7786 */
  if (!C.zf) goto L_125b7786;
  /* 125b776b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b776e push eax */
  push32((uint32_t)(EAX));
  /* 125b776f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7772 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7773 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b7776 push edx */
  push32((uint32_t)(EDX));
  /* 125b7777 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b777a push eax */
  push32((uint32_t)(EAX));
  /* 125b777b call dword ptr [0x125d62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62e0))), 0x125b7781u);
  /* 125b7781 jmp 0x125b7881 */
  goto L_125b7881;
L_125b7786:;
  /* 125b7786 cmp dword ptr [0x125d3c40], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c40))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b778d jne 0x125b787f */
  if (!C.zf) goto L_125b787f;
  /* 125b7793 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7797 jne 0x125b77a2 */
  if (!C.zf) goto L_125b77a2;
  /* 125b7799 mov ecx, dword ptr [0x125d3af0] */
  ECX = (r32((uint32_t)(0x125d3af0)));
  /* 125b779f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_125b77a2:;
  /* 125b77a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b77a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b77a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b77a9 push edx */
  push32((uint32_t)(EDX));
  /* 125b77aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b77ad push eax */
  push32((uint32_t)(EAX));
  /* 125b77ae call dword ptr [0x125d62c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62c8))), 0x125b77b4u);
  /* 125b77b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125b77b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b77bb jne 0x125b77c4 */
  if (!C.zf) goto L_125b77c4;
  /* 125b77bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b77bf jmp 0x125b7881 */
  goto L_125b7881;
L_125b77c4:;
  /* 125b77c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b77cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b77ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b77d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b77d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125b77d5 call 0x125ab2b0 */
  push32(0x125b77dau); f_125ab2b0();
  /* 125b77da mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 125b77dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b77e0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b77e3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 125b77e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b77ed jmp 0x125b7806 */
  goto L_125b7806;
  /* 125b77ef mov eax, 1 */
  EAX = (0x1u);
  /* 125b77f4 ret  */
  ESPCHK(0x125b76f0u, _esp0);
  ESP += 4; return;
  /* 125b77f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125b77f8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 125b77ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b7806:;
  /* 125b7806 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b780a jne 0x125b7810 */
  if (!C.zf) goto L_125b7810;
  /* 125b780c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b780e jmp 0x125b7881 */
  goto L_125b7881;
L_125b7810:;
  /* 125b7810 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b7813 push edx */
  push32((uint32_t)(EDX));
  /* 125b7814 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b7817 push eax */
  push32((uint32_t)(EAX));
  /* 125b7818 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b781b push ecx */
  push32((uint32_t)(ECX));
  /* 125b781c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b781f push edx */
  push32((uint32_t)(EDX));
  /* 125b7820 call dword ptr [0x125d62c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62c8))), 0x125b7826u);
  /* 125b7826 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7828 jne 0x125b782e */
  if (!C.zf) goto L_125b782e;
  /* 125b782a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b782c jmp 0x125b7881 */
  goto L_125b7881;
L_125b782e:;
  /* 125b782e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7832 jne 0x125b7856 */
  if (!C.zf) goto L_125b7856;
  /* 125b7834 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7836 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7838 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b783a push 0 */
  push32((uint32_t)(0x0u));
  /* 125b783c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b783e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b7841 push eax */
  push32((uint32_t)(EAX));
  /* 125b7842 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125b7847 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b784a push ecx */
  push32((uint32_t)(ECX));
  /* 125b784b call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b7851u);
  /* 125b7851 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 125b7854 jmp 0x125b787a */
  goto L_125b787a;
L_125b7856:;
  /* 125b7856 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7858 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b785a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b785d push edx */
  push32((uint32_t)(EDX));
  /* 125b785e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7861 push eax */
  push32((uint32_t)(EAX));
  /* 125b7862 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b7864 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b7867 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7868 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 125b786d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b7870 push edx */
  push32((uint32_t)(EDX));
  /* 125b7871 call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b7877u);
  /* 125b7877 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_125b787a:;
  /* 125b787a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b787d jmp 0x125b7881 */
  goto L_125b7881;
L_125b787f:;
  /* 125b787f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b7881:;
  /* 125b7881 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 125b7884 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b7887 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125b788e pop edi */
  EDI = (pop32());
  /* 125b788f pop esi */
  ESI = (pop32());
  /* 125b7890 pop ebx */
  EBX = (pop32());
  /* 125b7891 mov esp, ebp */
  ESP = (EBP);
  /* 125b7893 pop ebp */
  EBP = (pop32());
  /* 125b7894 ret  */
  ESPCHK(0x125b76f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100178a0 @ 0x125b78a0 (11 bytes, 6 insns) */
void f_125b78a0(void) {
  FTRACE(0x125b78a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b78a0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b78a1 mov ebp, esp */
  EBP = (ESP);
  /* 125b78a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b78a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b78a9 pop ebp */
  EBP = (pop32());
  /* 125b78aa ret  */
  ESPCHK(0x125b78a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100178b0 @ 0x125b78b0 (147 bytes, 43 insns) */
void f_125b78b0(void) {
  FTRACE(0x125b78b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b78b0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b78b1 mov ebp, esp */
  EBP = (ESP);
  /* 125b78b3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b78b4 cmp dword ptr [0x125d3ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b78bb jne 0x125b78d7 */
  if (!C.zf) goto L_125b78d7;
  /* 125b78bd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b78c1 jl 0x125b78d2 */
  if ((C.sf!=C.of)) goto L_125b78d2;
  /* 125b78c3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b78c7 jg 0x125b78d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b78d2;
  /* 125b78c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b78cc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b78cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125b78d2:;
  /* 125b78d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b78d5 jmp 0x125b793f */
  goto L_125b793f;
L_125b78d7:;
  /* 125b78d7 push 0x125d3c6c */
  push32((uint32_t)(0x125d3c6cu));
  /* 125b78dc call dword ptr [0x125d6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6388))), 0x125b78e2u);
  /* 125b78e2 cmp dword ptr [0x125d3c5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b78e9 je 0x125b7909 */
  if (C.zf) goto L_125b7909;
  /* 125b78eb push 0x125d3c6c */
  push32((uint32_t)(0x125d3c6cu));
  /* 125b78f0 call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125b78f6u);
  /* 125b78f6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b78f8 call 0x125abb10 */
  push32(0x125b78fdu); f_125abb10();
  /* 125b78fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7900 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125b7907 jmp 0x125b7910 */
  goto L_125b7910;
L_125b7909:;
  /* 125b7909 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_125b7910:;
  /* 125b7910 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7913 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7914 call 0x125b7950 */
  push32(0x125b7919u); f_125b7950();
  /* 125b7919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b791c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 125b791f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7923 je 0x125b7931 */
  if (C.zf) goto L_125b7931;
  /* 125b7925 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 125b7927 call 0x125abbb0 */
  push32(0x125b792cu); f_125abbb0();
  /* 125b792c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b792f jmp 0x125b793c */
  goto L_125b793c;
L_125b7931:;
  /* 125b7931 push 0x125d3c6c */
  push32((uint32_t)(0x125d3c6cu));
  /* 125b7936 call dword ptr [0x125d6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6378))), 0x125b793cu);
L_125b793c:;
  /* 125b793c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_125b793f:;
  /* 125b793f mov esp, ebp */
  ESP = (EBP);
  /* 125b7941 pop ebp */
  EBP = (pop32());
  /* 125b7942 ret  */
  ESPCHK(0x125b78b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017950 @ 0x125b7950 (299 bytes, 91 insns) */
void f_125b7950(void) {
  FTRACE(0x125b7950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7950 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7951 mov ebp, esp */
  EBP = (ESP);
  /* 125b7953 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b7956 cmp dword ptr [0x125d3ae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3ae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b795d jne 0x125b797c */
  if (!C.zf) goto L_125b797c;
  /* 125b795f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7963 jl 0x125b7974 */
  if ((C.sf!=C.of)) goto L_125b7974;
  /* 125b7965 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7969 jg 0x125b7974 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b7974;
  /* 125b796b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b796e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7971 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_125b7974:;
  /* 125b7974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7977 jmp 0x125b7a77 */
  goto L_125b7a77;
L_125b797c:;
  /* 125b797c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7983 jge 0x125b79c3 */
  if ((C.sf==C.of)) goto L_125b79c3;
  /* 125b7985 cmp dword ptr [0x125d1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b798c jle 0x125b79a1 */
  if ((C.zf||C.sf!=C.of)) goto L_125b79a1;
  /* 125b798e push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7993 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7994 call 0x125ae120 */
  push32(0x125b7999u); f_125ae120();
  /* 125b7999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b799c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125b799f jmp 0x125b79b5 */
  goto L_125b79b5;
L_125b79a1:;
  /* 125b79a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b79a4 mov eax, dword ptr [0x125d1c98] */
  EAX = (r32((uint32_t)(0x125d1c98)));
  /* 125b79a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b79ab mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 125b79af and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 125b79b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_125b79b5:;
  /* 125b79b5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b79b9 jne 0x125b79c3 */
  if (!C.zf) goto L_125b79c3;
  /* 125b79bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b79be jmp 0x125b7a77 */
  goto L_125b7a77;
L_125b79c3:;
  /* 125b79c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b79c6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 125b79c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125b79cf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125b79d5 mov eax, dword ptr [0x125d1c98] */
  EAX = (r32((uint32_t)(0x125d1c98)));
  /* 125b79da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b79dc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 125b79e0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 125b79e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b79e8 je 0x125b7a0c */
  if (C.zf) goto L_125b7a0c;
  /* 125b79ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b79ed sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 125b79f0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 125b79f6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 125b79f9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 125b79fc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 125b79ff mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 125b7a03 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 125b7a0a jmp 0x125b7a1d */
  goto L_125b7a1d;
L_125b7a0c:;
  /* 125b7a0c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 125b7a0f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 125b7a12 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 125b7a16 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_125b7a1d:;
  /* 125b7a1d push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7a21 push 3 */
  push32((uint32_t)(0x3u));
  /* 125b7a23 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 125b7a26 push edx */
  push32((uint32_t)(EDX));
  /* 125b7a27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7a2a push eax */
  push32((uint32_t)(EAX));
  /* 125b7a2b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 125b7a2e push ecx */
  push32((uint32_t)(ECX));
  /* 125b7a2f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 125b7a34 mov edx, dword ptr [0x125d3ae0] */
  EDX = (r32((uint32_t)(0x125d3ae0)));
  /* 125b7a3a push edx */
  push32((uint32_t)(EDX));
  /* 125b7a3b call 0x125b0500 */
  push32(0x125b7a40u); f_125b0500();
  /* 125b7a40 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b7a46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7a4a jne 0x125b7a51 */
  if (!C.zf) goto L_125b7a51;
  /* 125b7a4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7a4f jmp 0x125b7a77 */
  goto L_125b7a77;
L_125b7a51:;
  /* 125b7a51 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7a55 jne 0x125b7a61 */
  if (!C.zf) goto L_125b7a61;
  /* 125b7a57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b7a5a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b7a5f jmp 0x125b7a77 */
  goto L_125b7a77;
L_125b7a61:;
  /* 125b7a61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b7a64 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b7a69 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 125b7a6c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 125b7a72 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 125b7a75 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_125b7a77:;
  /* 125b7a77 mov esp, ebp */
  ESP = (EBP);
  /* 125b7a79 pop ebp */
  EBP = (pop32());
  /* 125b7a7a ret  */
  ESPCHK(0x125b7950u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x125b7a80 (52 bytes, 19 insns) */
void f_125b7a80(void) {
  FTRACE(0x125b7a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7a80 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125b7a84 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 125b7a88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 125b7a8a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 125b7a8e jne 0x125b7a99 */
  if (!C.zf) goto L_125b7a99;
  /* 125b7a90 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 125b7a94 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125b7a96 ret 0x10 */
  ESPCHK(0x125b7a80u, _esp0);
  ESP += 20; return;
L_125b7a99:;
  /* 125b7a99 push ebx */
  push32((uint32_t)(EBX));
  /* 125b7a9a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125b7a9c mov ebx, eax */
  EBX = (EAX);
  /* 125b7a9e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125b7aa2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125b7aa6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7aa8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 125b7aac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 125b7aae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7ab0 pop ebx */
  EBX = (pop32());
  /* 125b7ab1 ret 0x10 */
  ESPCHK(0x125b7a80u, _esp0);
  ESP += 20; return;
}

/* FUN_10017ac0 @ 0x125b7ac0 (46 bytes, 18 insns) */
void f_125b7ac0(void) {
  FTRACE(0x125b7ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7ac1 mov ebp, esp */
  EBP = (ESP);
  /* 125b7ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7ac4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 125b7ac6 call 0x125abb10 */
  push32(0x125b7acbu); f_125abb10();
  /* 125b7acb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7ace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7ad1 push eax */
  push32((uint32_t)(EAX));
  /* 125b7ad2 call 0x125b7af0 */
  push32(0x125b7ad7u); f_125b7af0();
  /* 125b7ad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7ada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b7add push 0xc */
  push32((uint32_t)(0xcu));
  /* 125b7adf call 0x125abbb0 */
  push32(0x125b7ae4u); f_125abbb0();
  /* 125b7ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7aea mov esp, ebp */
  ESP = (EBP);
  /* 125b7aec pop ebp */
  EBP = (pop32());
  /* 125b7aed ret  */
  ESPCHK(0x125b7ac0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x125b7af0 (198 bytes, 69 insns) */
void f_125b7af0(void) {
  FTRACE(0x125b7af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7af0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7af1 mov ebp, esp */
  EBP = (ESP);
  /* 125b7af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b7af6 mov eax, dword ptr [0x125d38fc] */
  EAX = (r32((uint32_t)(0x125d38fc)));
  /* 125b7afb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b7afe cmp dword ptr [0x125d5400], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d5400))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7b05 jne 0x125b7b0e */
  if (!C.zf) goto L_125b7b0e;
  /* 125b7b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7b09 jmp 0x125b7bb2 */
  goto L_125b7bb2;
L_125b7b0e:;
  /* 125b7b0e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7b12 jne 0x125b7b36 */
  if (!C.zf) goto L_125b7b36;
  /* 125b7b14 cmp dword ptr [0x125d3904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7b1b je 0x125b7b36 */
  if (C.zf) goto L_125b7b36;
  /* 125b7b1d call 0x125b7c10 */
  push32(0x125b7b22u); f_125b7c10();
  /* 125b7b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7b24 je 0x125b7b2d */
  if (C.zf) goto L_125b7b2d;
  /* 125b7b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7b28 jmp 0x125b7bb2 */
  goto L_125b7bb2;
L_125b7b2d:;
  /* 125b7b2d mov ecx, dword ptr [0x125d38fc] */
  ECX = (r32((uint32_t)(0x125d38fc)));
  /* 125b7b33 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_125b7b36:;
  /* 125b7b36 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7b3a je 0x125b7bb0 */
  if (C.zf) goto L_125b7bb0;
  /* 125b7b3c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7b40 je 0x125b7bb0 */
  if (C.zf) goto L_125b7bb0;
  /* 125b7b42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7b45 push edx */
  push32((uint32_t)(EDX));
  /* 125b7b46 call 0x125aaf40 */
  push32(0x125b7b4bu); f_125aaf40();
  /* 125b7b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7b4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b7b51:;
  /* 125b7b51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b7b54 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7b57 je 0x125b7bb0 */
  if (C.zf) goto L_125b7bb0;
  /* 125b7b59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b7b5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b7b5e push edx */
  push32((uint32_t)(EDX));
  /* 125b7b5f call 0x125aaf40 */
  push32(0x125b7b64u); f_125aaf40();
  /* 125b7b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7b67 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7b6a jbe 0x125b7ba5 */
  if ((C.cf||C.zf)) goto L_125b7ba5;
  /* 125b7b6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b7b6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b7b71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7b74 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 125b7b78 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7b7b jne 0x125b7ba5 */
  if (!C.zf) goto L_125b7ba5;
  /* 125b7b7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7b80 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7b84 push edx */
  push32((uint32_t)(EDX));
  /* 125b7b85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b7b88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b7b8a push ecx */
  push32((uint32_t)(ECX));
  /* 125b7b8b call 0x125b7bc0 */
  push32(0x125b7b90u); f_125b7bc0();
  /* 125b7b90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7b93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7b95 jne 0x125b7ba5 */
  if (!C.zf) goto L_125b7ba5;
  /* 125b7b97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b7b9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b7b9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7b9f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 125b7ba3 jmp 0x125b7bb2 */
  goto L_125b7bb2;
L_125b7ba5:;
  /* 125b7ba5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b7ba8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7bab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b7bae jmp 0x125b7b51 */
  goto L_125b7b51;
L_125b7bb0:;
  /* 125b7bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b7bb2:;
  /* 125b7bb2 mov esp, ebp */
  ESP = (EBP);
  /* 125b7bb4 pop ebp */
  EBP = (pop32());
  /* 125b7bb5 ret  */
  ESPCHK(0x125b7af0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x125b7bc0 (79 bytes, 32 insns) */
void f_125b7bc0(void) {
  FTRACE(0x125b7bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7bc1 mov ebp, esp */
  EBP = (ESP);
  /* 125b7bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7bc4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7bc8 jne 0x125b7bce */
  if (!C.zf) goto L_125b7bce;
  /* 125b7bca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7bcc jmp 0x125b7c0b */
  goto L_125b7c0b;
L_125b7bce:;
  /* 125b7bce mov eax, dword ptr [0x125d4fc4] */
  EAX = (r32((uint32_t)(0x125d4fc4)));
  /* 125b7bd3 push eax */
  push32((uint32_t)(EAX));
  /* 125b7bd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7bd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b7bdb push edx */
  push32((uint32_t)(EDX));
  /* 125b7bdc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7bdf push eax */
  push32((uint32_t)(EAX));
  /* 125b7be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7be3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7be4 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7be6 mov edx, dword ptr [0x125d5264] */
  EDX = (r32((uint32_t)(0x125d5264)));
  /* 125b7bec push edx */
  push32((uint32_t)(EDX));
  /* 125b7bed call 0x125b7cc0 */
  push32(0x125b7bf2u); f_125b7cc0();
  /* 125b7bf2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7bf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b7bf8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7bfc jne 0x125b7c05 */
  if (!C.zf) goto L_125b7c05;
  /* 125b7bfe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 125b7c03 jmp 0x125b7c0b */
  goto L_125b7c0b;
L_125b7c05:;
  /* 125b7c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7c08 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_125b7c0b:;
  /* 125b7c0b mov esp, ebp */
  ESP = (EBP);
  /* 125b7c0d pop ebp */
  EBP = (pop32());
  /* 125b7c0e ret  */
  ESPCHK(0x125b7bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017c10 @ 0x125b7c10 (174 bytes, 66 insns) */
void f_125b7c10(void) {
  FTRACE(0x125b7c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7c10 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7c11 mov ebp, esp */
  EBP = (ESP);
  /* 125b7c13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b7c16 mov eax, dword ptr [0x125d3904] */
  EAX = (r32((uint32_t)(0x125d3904)));
  /* 125b7c1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_125b7c1e:;
  /* 125b7c1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7c21 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7c24 je 0x125b7cb8 */
  if (C.zf) goto L_125b7cb8;
  /* 125b7c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7c2e push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7c32 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b7c34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7c37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b7c39 push eax */
  push32((uint32_t)(EAX));
  /* 125b7c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7c3c push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7c3e call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b7c44u);
  /* 125b7c44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b7c47 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7c4b jne 0x125b7c52 */
  if (!C.zf) goto L_125b7c52;
  /* 125b7c4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b7c50 jmp 0x125b7cba */
  goto L_125b7cba;
L_125b7c52:;
  /* 125b7c52 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 125b7c54 push 0x125d0044 */
  push32((uint32_t)(0x125d0044u));
  /* 125b7c59 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b7c5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b7c5e push ecx */
  push32((uint32_t)(ECX));
  /* 125b7c5f call 0x125a8110 */
  push32(0x125b7c64u); f_125a8110();
  /* 125b7c64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7c67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b7c6a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7c6e jne 0x125b7c75 */
  if (!C.zf) goto L_125b7c75;
  /* 125b7c70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b7c73 jmp 0x125b7cba */
  goto L_125b7cba;
L_125b7c75:;
  /* 125b7c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7c79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b7c7c push edx */
  push32((uint32_t)(EDX));
  /* 125b7c7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b7c80 push eax */
  push32((uint32_t)(EAX));
  /* 125b7c81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b7c83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7c86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b7c88 push edx */
  push32((uint32_t)(EDX));
  /* 125b7c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7c8b push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7c8d call dword ptr [0x125d635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d635c))), 0x125b7c93u);
  /* 125b7c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7c95 jne 0x125b7c9c */
  if (!C.zf) goto L_125b7c9c;
  /* 125b7c97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b7c9a jmp 0x125b7cba */
  goto L_125b7cba;
L_125b7c9c:;
  /* 125b7c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7c9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b7ca1 push eax */
  push32((uint32_t)(EAX));
  /* 125b7ca2 call 0x125b8110 */
  push32(0x125b7ca7u); f_125b8110();
  /* 125b7ca7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7caa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b7cad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7cb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b7cb3 jmp 0x125b7c1e */
  goto L_125b7c1e;
L_125b7cb8:;
  /* 125b7cb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b7cba:;
  /* 125b7cba mov esp, ebp */
  ESP = (EBP);
  /* 125b7cbc pop ebp */
  EBP = (pop32());
  /* 125b7cbd ret  */
  ESPCHK(0x125b7c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10017cc0 @ 0x125b7cc0 (970 bytes, 340 insns) */
void f_125b7cc0(void) {
  FTRACE(0x125b7cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b7cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b7cc1 mov ebp, esp */
  EBP = (ESP);
  /* 125b7cc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 125b7cc5 push 0x125d0098 */
  push32((uint32_t)(0x125d0098u));
  /* 125b7cca push 0x125b1218 */
  push32((uint32_t)(0x125b1218u));
  /* 125b7ccf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 125b7cd5 push eax */
  push32((uint32_t)(EAX));
  /* 125b7cd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 125b7cdd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7ce0 push ebx */
  push32((uint32_t)(EBX));
  /* 125b7ce1 push esi */
  push32((uint32_t)(ESI));
  /* 125b7ce2 push edi */
  push32((uint32_t)(EDI));
  /* 125b7ce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b7ce6 cmp dword ptr [0x125d3c44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7ced jne 0x125b7d46 */
  if (!C.zf) goto L_125b7d46;
  /* 125b7cef push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7cf1 push 0x125cf6f4 */
  push32((uint32_t)(0x125cf6f4u));
  /* 125b7cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7cf8 push 0x125cf6f4 */
  push32((uint32_t)(0x125cf6f4u));
  /* 125b7cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7cff push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7d01 call dword ptr [0x125d62c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62c4))), 0x125b7d07u);
  /* 125b7d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7d09 je 0x125b7d17 */
  if (C.zf) goto L_125b7d17;
  /* 125b7d0b mov dword ptr [0x125d3c44], 1 */
  w32((uint32_t)(0x125d3c44), (0x1u));
  /* 125b7d15 jmp 0x125b7d46 */
  goto L_125b7d46;
L_125b7d17:;
  /* 125b7d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7d19 push 0x125cf6f0 */
  push32((uint32_t)(0x125cf6f0u));
  /* 125b7d1e push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7d20 push 0x125cf6f0 */
  push32((uint32_t)(0x125cf6f0u));
  /* 125b7d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7d29 call dword ptr [0x125d62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62d0))), 0x125b7d2fu);
  /* 125b7d2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7d31 je 0x125b7d3f */
  if (C.zf) goto L_125b7d3f;
  /* 125b7d33 mov dword ptr [0x125d3c44], 2 */
  w32((uint32_t)(0x125d3c44), (0x2u));
  /* 125b7d3d jmp 0x125b7d46 */
  goto L_125b7d46;
L_125b7d3f:;
  /* 125b7d3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7d41 jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7d46:;
  /* 125b7d46 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7d4a jle 0x125b7d5f */
  if ((C.zf||C.sf!=C.of)) goto L_125b7d5f;
  /* 125b7d4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b7d4f push eax */
  push32((uint32_t)(EAX));
  /* 125b7d50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7d53 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7d54 call 0x125b80c0 */
  push32(0x125b7d59u); f_125b80c0();
  /* 125b7d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7d5c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_125b7d5f:;
  /* 125b7d5f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7d63 jle 0x125b7d78 */
  if ((C.zf||C.sf!=C.of)) goto L_125b7d78;
  /* 125b7d65 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b7d68 push edx */
  push32((uint32_t)(EDX));
  /* 125b7d69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b7d6c push eax */
  push32((uint32_t)(EAX));
  /* 125b7d6d call 0x125b80c0 */
  push32(0x125b7d72u); f_125b80c0();
  /* 125b7d72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7d75 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_125b7d78:;
  /* 125b7d78 cmp dword ptr [0x125d3c44], 2 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c44))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7d7f jne 0x125b7da4 */
  if (!C.zf) goto L_125b7da4;
  /* 125b7d81 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b7d84 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7d85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b7d88 push edx */
  push32((uint32_t)(EDX));
  /* 125b7d89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b7d8c push eax */
  push32((uint32_t)(EAX));
  /* 125b7d8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7d90 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7d91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b7d94 push edx */
  push32((uint32_t)(EDX));
  /* 125b7d95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b7d98 push eax */
  push32((uint32_t)(EAX));
  /* 125b7d99 call dword ptr [0x125d62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62d0))), 0x125b7d9fu);
  /* 125b7d9f jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7da4:;
  /* 125b7da4 cmp dword ptr [0x125d3c44], 1 */
  { uint32_t _a=(r32((uint32_t)(0x125d3c44))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7dab jne 0x125b80a2 */
  if (!C.zf) goto L_125b80a2;
  /* 125b7db1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7db5 jne 0x125b7dc0 */
  if (!C.zf) goto L_125b7dc0;
  /* 125b7db7 mov ecx, dword ptr [0x125d3af0] */
  ECX = (r32((uint32_t)(0x125d3af0)));
  /* 125b7dbd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_125b7dc0:;
  /* 125b7dc0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7dc4 je 0x125b7dd0 */
  if (C.zf) goto L_125b7dd0;
  /* 125b7dc6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7dca jne 0x125b7f4c */
  if (!C.zf) goto L_125b7f4c;
L_125b7dd0:;
  /* 125b7dd0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b7dd3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7dd6 jne 0x125b7de2 */
  if (!C.zf) goto L_125b7de2;
  /* 125b7dd8 mov eax, 2 */
  EAX = (0x2u);
  /* 125b7ddd jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7de2:;
  /* 125b7de2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7de6 jle 0x125b7df2 */
  if ((C.zf||C.sf!=C.of)) goto L_125b7df2;
  /* 125b7de8 mov eax, 1 */
  EAX = (0x1u);
  /* 125b7ded jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7df2:;
  /* 125b7df2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7df6 jle 0x125b7e02 */
  if ((C.zf||C.sf!=C.of)) goto L_125b7e02;
  /* 125b7df8 mov eax, 3 */
  EAX = (0x3u);
  /* 125b7dfd jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7e02:;
  /* 125b7e02 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 125b7e05 push eax */
  push32((uint32_t)(EAX));
  /* 125b7e06 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b7e09 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7e0a call dword ptr [0x125d631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d631c))), 0x125b7e10u);
  /* 125b7e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7e12 jne 0x125b7e1b */
  if (!C.zf) goto L_125b7e1b;
  /* 125b7e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7e16 jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7e1b:;
  /* 125b7e1b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7e1f jne 0x125b7e27 */
  if (!C.zf) goto L_125b7e27;
  /* 125b7e21 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7e25 je 0x125b7e54 */
  if (C.zf) goto L_125b7e54;
L_125b7e27:;
  /* 125b7e27 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7e2b jne 0x125b7e33 */
  if (!C.zf) goto L_125b7e33;
  /* 125b7e2d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7e31 je 0x125b7e54 */
  if (C.zf) goto L_125b7e54;
L_125b7e33:;
  /* 125b7e33 push 0x125d0058 */
  push32((uint32_t)(0x125d0058u));
  /* 125b7e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7e3a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 125b7e3f push 0x125d0050 */
  push32((uint32_t)(0x125d0050u));
  /* 125b7e44 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b7e46 call 0x125a71d0 */
  push32(0x125b7e4bu); f_125a71d0();
  /* 125b7e4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7e4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7e51 jne 0x125b7e54 */
  if (!C.zf) goto L_125b7e54;
  /* 125b7e53 int3  */
  x86_unimpl("int3 @ 0x125b7e53");
L_125b7e54:;
  /* 125b7e54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b7e56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b7e58 jne 0x125b7e1b */
  if (!C.zf) goto L_125b7e1b;
  /* 125b7e5a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7e5e jle 0x125b7ed3 */
  if ((C.zf||C.sf!=C.of)) goto L_125b7ed3;
  /* 125b7e60 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7e64 jae 0x125b7e70 */
  if (!C.cf) goto L_125b7e70;
  /* 125b7e66 mov eax, 3 */
  EAX = (0x3u);
  /* 125b7e6b jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7e70:;
  /* 125b7e70 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 125b7e73 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 125b7e76 jmp 0x125b7e81 */
  goto L_125b7e81;
L_125b7e78:;
  /* 125b7e78 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7e7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7e7e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_125b7e81:;
  /* 125b7e81 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7e86 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b7e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7e8a je 0x125b7ec9 */
  if (C.zf) goto L_125b7ec9;
  /* 125b7e8c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7e8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b7e91 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 125b7e94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b7e96 je 0x125b7ec9 */
  if (C.zf) goto L_125b7ec9;
  /* 125b7e98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7e9b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b7e9d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b7e9f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7ea4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b7ea6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7ea8 jl 0x125b7ec7 */
  if ((C.sf!=C.of)) goto L_125b7ec7;
  /* 125b7eaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7ead xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b7eaf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b7eb1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7eb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b7eb6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125b7eb9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7ebb jg 0x125b7ec7 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b7ec7;
  /* 125b7ebd mov eax, 2 */
  EAX = (0x2u);
  /* 125b7ec2 jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7ec7:;
  /* 125b7ec7 jmp 0x125b7e78 */
  goto L_125b7e78;
L_125b7ec9:;
  /* 125b7ec9 mov eax, 3 */
  EAX = (0x3u);
  /* 125b7ece jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7ed3:;
  /* 125b7ed3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7ed7 jle 0x125b7f4c */
  if ((C.zf||C.sf!=C.of)) goto L_125b7f4c;
  /* 125b7ed9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7edd jae 0x125b7ee9 */
  if (!C.cf) goto L_125b7ee9;
  /* 125b7edf mov eax, 1 */
  EAX = (0x1u);
  /* 125b7ee4 jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7ee9:;
  /* 125b7ee9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 125b7eec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 125b7eef jmp 0x125b7efa */
  goto L_125b7efa;
L_125b7ef1:;
  /* 125b7ef1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7ef4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7ef7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_125b7efa:;
  /* 125b7efa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7efd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b7eff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b7f01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b7f03 je 0x125b7f42 */
  if (C.zf) goto L_125b7f42;
  /* 125b7f05 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7f08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b7f0a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 125b7f0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b7f0f je 0x125b7f42 */
  if (C.zf) goto L_125b7f42;
  /* 125b7f11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b7f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7f16 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 125b7f18 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7f1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 125b7f1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 125b7f1f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7f21 jl 0x125b7f40 */
  if ((C.sf!=C.of)) goto L_125b7f40;
  /* 125b7f23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b7f26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b7f28 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b7f2a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 125b7f2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7f2f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 125b7f32 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7f34 jg 0x125b7f40 */
  if ((!C.zf&&C.sf==C.of)) goto L_125b7f40;
  /* 125b7f36 mov eax, 2 */
  EAX = (0x2u);
  /* 125b7f3b jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7f40:;
  /* 125b7f40 jmp 0x125b7ef1 */
  goto L_125b7ef1;
L_125b7f42:;
  /* 125b7f42 mov eax, 1 */
  EAX = (0x1u);
  /* 125b7f47 jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7f4c:;
  /* 125b7f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7f50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b7f53 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7f54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7f57 push edx */
  push32((uint32_t)(EDX));
  /* 125b7f58 push 9 */
  push32((uint32_t)(0x9u));
  /* 125b7f5a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b7f5d push eax */
  push32((uint32_t)(EAX));
  /* 125b7f5e call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b7f64u);
  /* 125b7f64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 125b7f67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7f6b jne 0x125b7f74 */
  if (!C.zf) goto L_125b7f74;
  /* 125b7f6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7f6f jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7f74:;
  /* 125b7f74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 125b7f7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b7f7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b7f80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b7f83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125b7f85 call 0x125ab2b0 */
  push32(0x125b7f8au); f_125ab2b0();
  /* 125b7f8a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 125b7f8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b7f90 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 125b7f93 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 125b7f96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b7f9d jmp 0x125b7fb6 */
  goto L_125b7fb6;
  /* 125b7f9f mov eax, 1 */
  EAX = (0x1u);
  /* 125b7fa4 ret  */
  ESPCHK(0x125b7cc0u, _esp0);
  ESP += 4; return;
  /* 125b7fa5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125b7fa8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 125b7faf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b7fb6:;
  /* 125b7fb6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b7fba jne 0x125b7fc3 */
  if (!C.zf) goto L_125b7fc3;
  /* 125b7fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7fbe jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7fc3:;
  /* 125b7fc3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b7fc6 push edx */
  push32((uint32_t)(EDX));
  /* 125b7fc7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b7fca push eax */
  push32((uint32_t)(EAX));
  /* 125b7fcb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 125b7fce push ecx */
  push32((uint32_t)(ECX));
  /* 125b7fcf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 125b7fd2 push edx */
  push32((uint32_t)(EDX));
  /* 125b7fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 125b7fd5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b7fd8 push eax */
  push32((uint32_t)(EAX));
  /* 125b7fd9 call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b7fdfu);
  /* 125b7fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b7fe1 jne 0x125b7fea */
  if (!C.zf) goto L_125b7fea;
  /* 125b7fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b7fe5 jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b7fea:;
  /* 125b7fea push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7fec push 0 */
  push32((uint32_t)(0x0u));
  /* 125b7fee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b7ff1 push ecx */
  push32((uint32_t)(ECX));
  /* 125b7ff2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b7ff5 push edx */
  push32((uint32_t)(EDX));
  /* 125b7ff6 push 9 */
  push32((uint32_t)(0x9u));
  /* 125b7ff8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b7ffb push eax */
  push32((uint32_t)(EAX));
  /* 125b7ffc call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b8002u);
  /* 125b8002 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 125b8005 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8009 jne 0x125b8012 */
  if (!C.zf) goto L_125b8012;
  /* 125b800b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b800d jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b8012:;
  /* 125b8012 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 125b8019 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b801c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 125b801e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8021 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 125b8023 call 0x125ab2b0 */
  push32(0x125b8028u); f_125ab2b0();
  /* 125b8028 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 125b802b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 125b802e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 125b8031 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 125b8034 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 125b803b jmp 0x125b8054 */
  goto L_125b8054;
  /* 125b803d mov eax, 1 */
  EAX = (0x1u);
  /* 125b8042 ret  */
  ESPCHK(0x125b7cc0u, _esp0);
  ESP += 4; return;
  /* 125b8043 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 125b8046 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 125b804d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_125b8054:;
  /* 125b8054 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8058 jne 0x125b805e */
  if (!C.zf) goto L_125b805e;
  /* 125b805a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b805c jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b805e:;
  /* 125b805e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b8061 push edx */
  push32((uint32_t)(EDX));
  /* 125b8062 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b8065 push eax */
  push32((uint32_t)(EAX));
  /* 125b8066 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 125b8069 push ecx */
  push32((uint32_t)(ECX));
  /* 125b806a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 125b806d push edx */
  push32((uint32_t)(EDX));
  /* 125b806e push 1 */
  push32((uint32_t)(0x1u));
  /* 125b8070 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 125b8073 push eax */
  push32((uint32_t)(EAX));
  /* 125b8074 call dword ptr [0x125d6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d6310))), 0x125b807au);
  /* 125b807a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b807c jne 0x125b8082 */
  if (!C.zf) goto L_125b8082;
  /* 125b807e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b8080 jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b8082:;
  /* 125b8082 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 125b8085 push ecx */
  push32((uint32_t)(ECX));
  /* 125b8086 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 125b8089 push edx */
  push32((uint32_t)(EDX));
  /* 125b808a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 125b808d push eax */
  push32((uint32_t)(EAX));
  /* 125b808e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 125b8091 push ecx */
  push32((uint32_t)(ECX));
  /* 125b8092 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b8095 push edx */
  push32((uint32_t)(EDX));
  /* 125b8096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8099 push eax */
  push32((uint32_t)(EAX));
  /* 125b809a call dword ptr [0x125d62c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62c4))), 0x125b80a0u);
  /* 125b80a0 jmp 0x125b80a4 */
  goto L_125b80a4;
L_125b80a2:;
  /* 125b80a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b80a4:;
  /* 125b80a4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 125b80a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b80aa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 125b80b1 pop edi */
  EDI = (pop32());
  /* 125b80b2 pop esi */
  ESI = (pop32());
  /* 125b80b3 pop ebx */
  EBX = (pop32());
  /* 125b80b4 mov esp, ebp */
  ESP = (EBP);
  /* 125b80b6 pop ebp */
  EBP = (pop32());
  /* 125b80b7 ret  */
  ESPCHK(0x125b7cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100180c0 @ 0x125b80c0 (80 bytes, 32 insns) */
void f_125b80c0(void) {
  FTRACE(0x125b80c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b80c0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b80c1 mov ebp, esp */
  EBP = (ESP);
  /* 125b80c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b80c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b80c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b80cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b80cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125b80d2:;
  /* 125b80d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b80d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b80d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b80db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b80de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b80e0 je 0x125b80f7 */
  if (C.zf) goto L_125b80f7;
  /* 125b80e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b80e5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b80e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b80ea je 0x125b80f7 */
  if (C.zf) goto L_125b80f7;
  /* 125b80ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b80ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b80f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b80f5 jmp 0x125b80d2 */
  goto L_125b80d2;
L_125b80f7:;
  /* 125b80f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b80fa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 125b80fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b80ff jne 0x125b8109 */
  if (!C.zf) goto L_125b8109;
  /* 125b8101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b8104 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b8107 jmp 0x125b810c */
  goto L_125b810c;
L_125b8109:;
  /* 125b8109 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_125b810c:;
  /* 125b810c mov esp, ebp */
  ESP = (EBP);
  /* 125b810e pop ebp */
  EBP = (pop32());
  /* 125b810f ret  */
  ESPCHK(0x125b80c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018110 @ 0x125b8110 (736 bytes, 224 insns) */
void f_125b8110(void) {
  FTRACE(0x125b8110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b8110 push ebp */
  push32((uint32_t)(EBP));
  /* 125b8111 mov ebp, esp */
  EBP = (ESP);
  /* 125b8113 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b8116 push esi */
  push32((uint32_t)(ESI));
  /* 125b8117 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b811b je 0x125b813c */
  if (C.zf) goto L_125b813c;
  /* 125b811d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 125b811f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8122 push eax */
  push32((uint32_t)(EAX));
  /* 125b8123 call 0x125b8560 */
  push32(0x125b8128u); f_125b8560();
  /* 125b8128 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b812b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 125b812e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8132 je 0x125b813c */
  if (C.zf) goto L_125b813c;
  /* 125b8134 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8137 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b813a jne 0x125b8144 */
  if (!C.zf) goto L_125b8144;
L_125b813c:;
  /* 125b813c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b813f jmp 0x125b83eb */
  goto L_125b83eb;
L_125b8144:;
  /* 125b8144 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b8147 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 125b814b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b814d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b814f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 125b8150 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 125b8153 mov ecx, dword ptr [0x125d38fc] */
  ECX = (r32((uint32_t)(0x125d38fc)));
  /* 125b8159 cmp ecx, dword ptr [0x125d3900] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x125d3900))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b815f jne 0x125b8175 */
  if (!C.zf) goto L_125b8175;
  /* 125b8161 mov edx, dword ptr [0x125d38fc] */
  EDX = (r32((uint32_t)(0x125d38fc)));
  /* 125b8167 push edx */
  push32((uint32_t)(EDX));
  /* 125b8168 call 0x125b8470 */
  push32(0x125b816du); f_125b8470();
  /* 125b816d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8170 mov dword ptr [0x125d38fc], eax */
  w32((uint32_t)(0x125d38fc), (EAX));
L_125b8175:;
  /* 125b8175 cmp dword ptr [0x125d38fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b817c jne 0x125b8235 */
  if (!C.zf) goto L_125b8235;
  /* 125b8182 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8186 je 0x125b81a7 */
  if (C.zf) goto L_125b81a7;
  /* 125b8188 cmp dword ptr [0x125d3904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b818f je 0x125b81a7 */
  if (C.zf) goto L_125b81a7;
  /* 125b8191 call 0x125b7c10 */
  push32(0x125b8196u); f_125b7c10();
  /* 125b8196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b8198 je 0x125b81a2 */
  if (C.zf) goto L_125b81a2;
  /* 125b819a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b819d jmp 0x125b83eb */
  goto L_125b83eb;
L_125b81a2:;
  /* 125b81a2 jmp 0x125b8235 */
  goto L_125b8235;
L_125b81a7:;
  /* 125b81a7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b81ab je 0x125b81b4 */
  if (C.zf) goto L_125b81b4;
  /* 125b81ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b81af jmp 0x125b83eb */
  goto L_125b83eb;
L_125b81b4:;
  /* 125b81b4 cmp dword ptr [0x125d38fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b81bb jne 0x125b81f4 */
  if (!C.zf) goto L_125b81f4;
  /* 125b81bd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 125b81c2 push 0x125d00b0 */
  push32((uint32_t)(0x125d00b0u));
  /* 125b81c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b81c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 125b81cb call 0x125a8110 */
  push32(0x125b81d0u); f_125a8110();
  /* 125b81d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b81d3 mov dword ptr [0x125d38fc], eax */
  w32((uint32_t)(0x125d38fc), (EAX));
  /* 125b81d8 cmp dword ptr [0x125d38fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d38fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b81df jne 0x125b81e9 */
  if (!C.zf) goto L_125b81e9;
  /* 125b81e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b81e4 jmp 0x125b83eb */
  goto L_125b83eb;
L_125b81e9:;
  /* 125b81e9 mov eax, dword ptr [0x125d38fc] */
  EAX = (r32((uint32_t)(0x125d38fc)));
  /* 125b81ee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_125b81f4:;
  /* 125b81f4 cmp dword ptr [0x125d3904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b81fb jne 0x125b8235 */
  if (!C.zf) goto L_125b8235;
  /* 125b81fd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 125b8202 push 0x125d00b0 */
  push32((uint32_t)(0x125d00b0u));
  /* 125b8207 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b8209 push 4 */
  push32((uint32_t)(0x4u));
  /* 125b820b call 0x125a8110 */
  push32(0x125b8210u); f_125a8110();
  /* 125b8210 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8213 mov dword ptr [0x125d3904], eax */
  w32((uint32_t)(0x125d3904), (EAX));
  /* 125b8218 cmp dword ptr [0x125d3904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d3904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b821f jne 0x125b8229 */
  if (!C.zf) goto L_125b8229;
  /* 125b8221 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b8224 jmp 0x125b83eb */
  goto L_125b83eb;
L_125b8229:;
  /* 125b8229 mov ecx, dword ptr [0x125d3904] */
  ECX = (r32((uint32_t)(0x125d3904)));
  /* 125b822f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_125b8235:;
  /* 125b8235 mov edx, dword ptr [0x125d38fc] */
  EDX = (r32((uint32_t)(0x125d38fc)));
  /* 125b823b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 125b823e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b8241 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b8244 push eax */
  push32((uint32_t)(EAX));
  /* 125b8245 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8248 push ecx */
  push32((uint32_t)(ECX));
  /* 125b8249 call 0x125b83f0 */
  push32(0x125b824eu); f_125b83f0();
  /* 125b824e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8251 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b8254 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8258 jl 0x125b82f1 */
  if ((C.sf!=C.of)) goto L_125b82f1;
  /* 125b825e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b8261 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8264 je 0x125b82f1 */
  if (C.zf) goto L_125b82f1;
  /* 125b826a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b826e je 0x125b82e3 */
  if (C.zf) goto L_125b82e3;
  /* 125b8270 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b8272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b8275 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b8278 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 125b827b push edx */
  push32((uint32_t)(EDX));
  /* 125b827c call 0x125a8ba0 */
  push32(0x125b8281u); f_125a8ba0();
  /* 125b8281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8284 jmp 0x125b828f */
  goto L_125b828f;
L_125b8286:;
  /* 125b8286 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b8289 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b828c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125b828f:;
  /* 125b828f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b8292 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b8295 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8299 je 0x125b82b0 */
  if (C.zf) goto L_125b82b0;
  /* 125b829b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b829e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b82a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b82a4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 125b82a7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 125b82ab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 125b82ae jmp 0x125b8286 */
  goto L_125b8286;
L_125b82b0:;
  /* 125b82b0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 125b82b5 push 0x125d00b0 */
  push32((uint32_t)(0x125d00b0u));
  /* 125b82ba push 2 */
  push32((uint32_t)(0x2u));
  /* 125b82bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b82bf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 125b82c2 push eax */
  push32((uint32_t)(EAX));
  /* 125b82c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b82c6 push ecx */
  push32((uint32_t)(ECX));
  /* 125b82c7 call 0x125a85a0 */
  push32(0x125b82ccu); f_125a85a0();
  /* 125b82cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b82cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b82d2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b82d6 je 0x125b82e1 */
  if (C.zf) goto L_125b82e1;
  /* 125b82d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b82db mov dword ptr [0x125d38fc], edx */
  w32((uint32_t)(0x125d38fc), (EDX));
L_125b82e1:;
  /* 125b82e1 jmp 0x125b82ef */
  goto L_125b82ef;
L_125b82e3:;
  /* 125b82e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b82e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b82e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b82ec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_125b82ef:;
  /* 125b82ef jmp 0x125b8364 */
  goto L_125b8364;
L_125b82f1:;
  /* 125b82f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b82f5 jne 0x125b835d */
  if (!C.zf) goto L_125b835d;
  /* 125b82f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b82fb jge 0x125b8305 */
  if ((C.sf==C.of)) goto L_125b8305;
  /* 125b82fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b8300 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b8302 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_125b8305:;
  /* 125b8305 push 0xce */
  push32((uint32_t)(0xceu));
  /* 125b830a push 0x125d00b0 */
  push32((uint32_t)(0x125d00b0u));
  /* 125b830f push 2 */
  push32((uint32_t)(0x2u));
  /* 125b8311 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b8314 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 125b831b push edx */
  push32((uint32_t)(EDX));
  /* 125b831c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b831f push eax */
  push32((uint32_t)(EAX));
  /* 125b8320 call 0x125a85a0 */
  push32(0x125b8325u); f_125a85a0();
  /* 125b8325 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8328 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b832b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b832f jne 0x125b8339 */
  if (!C.zf) goto L_125b8339;
  /* 125b8331 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b8334 jmp 0x125b83eb */
  goto L_125b83eb;
L_125b8339:;
  /* 125b8339 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b833c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b833f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8342 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 125b8345 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b8348 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b834b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 125b8353 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b8356 mov dword ptr [0x125d38fc], eax */
  w32((uint32_t)(0x125d38fc), (EAX));
  /* 125b835b jmp 0x125b8364 */
  goto L_125b8364;
L_125b835d:;
  /* 125b835d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b835f jmp 0x125b83eb */
  goto L_125b83eb;
L_125b8364:;
  /* 125b8364 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8368 je 0x125b83e9 */
  if (C.zf) goto L_125b83e9;
  /* 125b836a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 125b836f push 0x125d00b0 */
  push32((uint32_t)(0x125d00b0u));
  /* 125b8374 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b8376 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8379 push ecx */
  push32((uint32_t)(ECX));
  /* 125b837a call 0x125aaf40 */
  push32(0x125b837fu); f_125aaf40();
  /* 125b837f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8382 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8385 push eax */
  push32((uint32_t)(EAX));
  /* 125b8386 call 0x125a8110 */
  push32(0x125b838bu); f_125a8110();
  /* 125b838b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b838e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 125b8391 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8395 je 0x125b83e9 */
  if (C.zf) goto L_125b83e9;
  /* 125b8397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b839a push edx */
  push32((uint32_t)(EDX));
  /* 125b839b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b839e push eax */
  push32((uint32_t)(EAX));
  /* 125b839f call 0x125ab0c0 */
  push32(0x125b83a4u); f_125ab0c0();
  /* 125b83a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b83a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 125b83aa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b83ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b83b0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b83b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 125b83b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b83b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 125b83bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b83be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b83c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b83c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 125b83c7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 125b83c9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b83cb not edx */
  EDX = (~(EDX));
  /* 125b83cd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 125b83d0 push edx */
  push32((uint32_t)(EDX));
  /* 125b83d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b83d4 push eax */
  push32((uint32_t)(EAX));
  /* 125b83d5 call dword ptr [0x125d62c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x125d62c0))), 0x125b83dbu);
  /* 125b83db push 2 */
  push32((uint32_t)(0x2u));
  /* 125b83dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b83e0 push ecx */
  push32((uint32_t)(ECX));
  /* 125b83e1 call 0x125a8ba0 */
  push32(0x125b83e6u); f_125a8ba0();
  /* 125b83e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b83e9:;
  /* 125b83e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b83eb:;
  /* 125b83eb pop esi */
  ESI = (pop32());
  /* 125b83ec mov esp, ebp */
  ESP = (EBP);
  /* 125b83ee pop ebp */
  EBP = (pop32());
  /* 125b83ef ret  */
  ESPCHK(0x125b8110u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x125b83f0 (124 bytes, 47 insns) */
void f_125b83f0(void) {
  FTRACE(0x125b83f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b83f0 push ebp */
  push32((uint32_t)(EBP));
  /* 125b83f1 mov ebp, esp */
  EBP = (ESP);
  /* 125b83f3 push ecx */
  push32((uint32_t)(ECX));
  /* 125b83f4 mov eax, dword ptr [0x125d38fc] */
  EAX = (r32((uint32_t)(0x125d38fc)));
  /* 125b83f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 125b83fc jmp 0x125b8407 */
  goto L_125b8407;
L_125b83fe:;
  /* 125b83fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b8401 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8404 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_125b8407:;
  /* 125b8407 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b840a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b840d je 0x125b845a */
  if (C.zf) goto L_125b845a;
  /* 125b840f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b8412 push eax */
  push32((uint32_t)(EAX));
  /* 125b8413 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b8416 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b8418 push edx */
  push32((uint32_t)(EDX));
  /* 125b8419 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b841c push eax */
  push32((uint32_t)(EAX));
  /* 125b841d call 0x125b7bc0 */
  push32(0x125b8422u); f_125b7bc0();
  /* 125b8422 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 125b8427 jne 0x125b8458 */
  if (!C.zf) goto L_125b8458;
  /* 125b8429 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b842c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b842e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b8431 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 125b8435 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8438 je 0x125b844a */
  if (C.zf) goto L_125b844a;
  /* 125b843a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b843d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b843f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b8442 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 125b8446 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b8448 jne 0x125b8458 */
  if (!C.zf) goto L_125b8458;
L_125b844a:;
  /* 125b844a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b844d sub eax, dword ptr [0x125d38fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d38fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b8453 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 125b8456 jmp 0x125b8468 */
  goto L_125b8468;
L_125b8458:;
  /* 125b8458 jmp 0x125b83fe */
  goto L_125b83fe;
L_125b845a:;
  /* 125b845a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b845d sub eax, dword ptr [0x125d38fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x125d38fc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b8463 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 125b8466 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_125b8468:;
  /* 125b8468 mov esp, ebp */
  ESP = (EBP);
  /* 125b846a pop ebp */
  EBP = (pop32());
  /* 125b846b ret  */
  ESPCHK(0x125b83f0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x125b8470 (238 bytes, 80 insns) */
void f_125b8470(void) {
  FTRACE(0x125b8470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b8470 push ebp */
  push32((uint32_t)(EBP));
  /* 125b8471 mov ebp, esp */
  EBP = (ESP);
  /* 125b8473 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b8476 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 125b847d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8480 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b8483 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8487 jne 0x125b8490 */
  if (!C.zf) goto L_125b8490;
  /* 125b8489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b848b jmp 0x125b855a */
  goto L_125b855a;
L_125b8490:;
  /* 125b8490 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b8493 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b8495 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b8498 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b849b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 125b849e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b84a0 je 0x125b84ad */
  if (C.zf) goto L_125b84ad;
  /* 125b84a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b84a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b84a8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 125b84ab jmp 0x125b8490 */
  goto L_125b8490;
L_125b84ad:;
  /* 125b84ad push 0x146 */
  push32((uint32_t)(0x146u));
  /* 125b84b2 push 0x125d00b0 */
  push32((uint32_t)(0x125d00b0u));
  /* 125b84b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 125b84b9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 125b84bc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 125b84c3 push eax */
  push32((uint32_t)(EAX));
  /* 125b84c4 call 0x125a8110 */
  push32(0x125b84c9u); f_125a8110();
  /* 125b84c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b84cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 125b84cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b84d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 125b84d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b84d9 jne 0x125b84e5 */
  if (!C.zf) goto L_125b84e5;
  /* 125b84db push 9 */
  push32((uint32_t)(0x9u));
  /* 125b84dd call 0x125a7080 */
  push32(0x125b84e2u); f_125a7080();
  /* 125b84e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b84e5:;
  /* 125b84e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b84e8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_125b84eb:;
  /* 125b84eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b84ee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b84f1 je 0x125b854e */
  if (C.zf) goto L_125b854e;
  /* 125b84f3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 125b84f8 push 0x125d00b0 */
  push32((uint32_t)(0x125d00b0u));
  /* 125b84fd push 2 */
  push32((uint32_t)(0x2u));
  /* 125b84ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b8502 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 125b8504 push edx */
  push32((uint32_t)(EDX));
  /* 125b8505 call 0x125aaf40 */
  push32(0x125b850au); f_125aaf40();
  /* 125b850a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b850d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8510 push eax */
  push32((uint32_t)(EAX));
  /* 125b8511 call 0x125a8110 */
  push32(0x125b8516u); f_125a8110();
  /* 125b8516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8519 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b851c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 125b851e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b8521 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8524 je 0x125b853a */
  if (C.zf) goto L_125b853a;
  /* 125b8526 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b8529 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 125b852b push ecx */
  push32((uint32_t)(ECX));
  /* 125b852c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b852f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 125b8531 push eax */
  push32((uint32_t)(EAX));
  /* 125b8532 call 0x125ab0c0 */
  push32(0x125b8537u); f_125ab0c0();
  /* 125b8537 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_125b853a:;
  /* 125b853a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 125b853d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 125b8543 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b8546 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8549 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 125b854c jmp 0x125b84eb */
  goto L_125b84eb;
L_125b854e:;
  /* 125b854e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 125b8551 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 125b8557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_125b855a:;
  /* 125b855a mov esp, ebp */
  ESP = (EBP);
  /* 125b855c pop ebp */
  EBP = (pop32());
  /* 125b855d ret  */
  ESPCHK(0x125b8470u, _esp0);
  ESP += 4; return;
}

/* FUN_10018560 @ 0x125b8560 (237 bytes, 81 insns) */
void f_125b8560(void) {
  FTRACE(0x125b8560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b8560 push ebp */
  push32((uint32_t)(EBP));
  /* 125b8561 mov ebp, esp */
  EBP = (ESP);
  /* 125b8563 push ecx */
  push32((uint32_t)(ECX));
  /* 125b8564 cmp dword ptr [0x125d504c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x125d504c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b856b jne 0x125b8582 */
  if (!C.zf) goto L_125b8582;
  /* 125b856d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 125b8570 push eax */
  push32((uint32_t)(EAX));
  /* 125b8571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8574 push ecx */
  push32((uint32_t)(ECX));
  /* 125b8575 call 0x125b8660 */
  push32(0x125b857au); f_125b8660();
  /* 125b857a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b857d jmp 0x125b8649 */
  goto L_125b8649;
L_125b8582:;
  /* 125b8582 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125b8584 call 0x125abb10 */
  push32(0x125b8589u); f_125abb10();
  /* 125b8589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b858c jmp 0x125b8597 */
  goto L_125b8597;
L_125b858e:;
  /* 125b858e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8591 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8594 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_125b8597:;
  /* 125b8597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b859a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 125b859e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 125b85a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b85a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125b85ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 125b85ad je 0x125b862b */
  if (C.zf) goto L_125b862b;
  /* 125b85af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b85b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b85b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b85b9 mov cl, byte ptr [eax + 0x125d5161] */
  CL = (r8((uint32_t)(EAX + 0x125d5161)));
  /* 125b85bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 125b85c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b85c4 je 0x125b8616 */
  if (C.zf) goto L_125b8616;
  /* 125b85c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b85c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b85cc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 125b85cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b85d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b85d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b85d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 125b85d8 jne 0x125b85e8 */
  if (!C.zf) goto L_125b85e8;
  /* 125b85da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125b85dc call 0x125abbb0 */
  push32(0x125b85e1u); f_125abbb0();
  /* 125b85e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b85e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b85e6 jmp 0x125b8649 */
  goto L_125b8649;
L_125b85e8:;
  /* 125b85e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b85eb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125b85f1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 125b85f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b85f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 125b85f9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 125b85fb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 125b85fd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8600 jne 0x125b8614 */
  if (!C.zf) goto L_125b8614;
  /* 125b8602 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125b8604 call 0x125abbb0 */
  push32(0x125b8609u); f_125abbb0();
  /* 125b8609 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b860c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b860f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 125b8612 jmp 0x125b8649 */
  goto L_125b8649;
L_125b8614:;
  /* 125b8614 jmp 0x125b8626 */
  goto L_125b8626;
L_125b8616:;
  /* 125b8616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b8619 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 125b861f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8622 jne 0x125b8626 */
  if (!C.zf) goto L_125b8626;
  /* 125b8624 jmp 0x125b862b */
  goto L_125b862b;
L_125b8626:;
  /* 125b8626 jmp 0x125b858e */
  goto L_125b858e;
L_125b862b:;
  /* 125b862b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 125b862d call 0x125abbb0 */
  push32(0x125b8632u); f_125abbb0();
  /* 125b8632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 125b8635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 125b8638 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b863d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 125b8640 jne 0x125b8647 */
  if (!C.zf) goto L_125b8647;
  /* 125b8642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 125b8645 jmp 0x125b8649 */
  goto L_125b8649;
L_125b8647:;
  /* 125b8647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_125b8649:;
  /* 125b8649 mov esp, ebp */
  ESP = (EBP);
  /* 125b864b pop ebp */
  EBP = (pop32());
  /* 125b864c ret  */
  ESPCHK(0x125b8560u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x125b8660 (193 bytes, 87 insns) */
void f_125b8660(void) {
  FTRACE(0x125b8660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b8660 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b8662 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 125b8666 push ebx */
  push32((uint32_t)(EBX));
  /* 125b8667 mov ebx, eax */
  EBX = (EAX);
  /* 125b8669 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 125b866c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 125b8670 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 125b8676 je 0x125b868b */
  if (C.zf) goto L_125b868b;
L_125b8678:;
  /* 125b8678 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 125b867a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 125b867b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b867d je 0x125b8650 */
  if (C.zf) { jmp_ind(0x125b8650u); return; }
  /* 125b867f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 125b8681 je 0x125b86d4 */
  if (C.zf) goto L_125b86d4;
  /* 125b8683 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 125b8689 jne 0x125b8678 */
  if (!C.zf) goto L_125b8678;
L_125b868b:;
  /* 125b868b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 125b868d push edi */
  push32((uint32_t)(EDI));
  /* 125b868e mov eax, ebx */
  EAX = (EBX);
  /* 125b8690 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 125b8693 push esi */
  push32((uint32_t)(ESI));
  /* 125b8694 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_125b8696:;
  /* 125b8696 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 125b8698 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 125b869d mov eax, ecx */
  EAX = (ECX);
  /* 125b869f mov esi, edi */
  ESI = (EDI);
  /* 125b86a1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 125b86a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 125b86a5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 125b86a7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 125b86aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 125b86ad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 125b86af xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 125b86b1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 125b86b4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 125b86ba jne 0x125b86d8 */
  if (!C.zf) goto L_125b86d8;
  /* 125b86bc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 125b86c1 je 0x125b8696 */
  if (C.zf) goto L_125b8696;
  /* 125b86c3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 125b86c8 jne 0x125b86d2 */
  if (!C.zf) goto L_125b86d2;
  /* 125b86ca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 125b86d0 jne 0x125b8696 */
  if (!C.zf) goto L_125b8696;
L_125b86d2:;
  /* 125b86d2 pop esi */
  ESI = (pop32());
  /* 125b86d3 pop edi */
  EDI = (pop32());
L_125b86d4:;
  /* 125b86d4 pop ebx */
  EBX = (pop32());
  /* 125b86d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 125b86d7 ret  */
  ESPCHK(0x125b8660u, _esp0);
  ESP += 4; return;
L_125b86d8:;
  /* 125b86d8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 125b86db cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b86dd je 0x125b8715 */
  if (C.zf) goto L_125b8715;
  /* 125b86df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125b86e1 je 0x125b86d2 */
  if (C.zf) goto L_125b86d2;
  /* 125b86e3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b86e5 je 0x125b870e */
  if (C.zf) goto L_125b870e;
  /* 125b86e7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 125b86e9 je 0x125b86d2 */
  if (C.zf) goto L_125b86d2;
  /* 125b86eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 125b86ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b86f0 je 0x125b8707 */
  if (C.zf) goto L_125b8707;
  /* 125b86f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 125b86f4 je 0x125b86d2 */
  if (C.zf) goto L_125b86d2;
  /* 125b86f6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 125b86f8 je 0x125b8700 */
  if (C.zf) goto L_125b8700;
  /* 125b86fa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 125b86fc je 0x125b86d2 */
  if (C.zf) goto L_125b86d2;
  /* 125b86fe jmp 0x125b8696 */
  goto L_125b8696;
L_125b8700:;
  /* 125b8700 pop esi */
  ESI = (pop32());
  /* 125b8701 pop edi */
  EDI = (pop32());
  /* 125b8702 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 125b8705 pop ebx */
  EBX = (pop32());
  /* 125b8706 ret  */
  ESPCHK(0x125b8660u, _esp0);
  ESP += 4; return;
L_125b8707:;
  /* 125b8707 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 125b870a pop esi */
  ESI = (pop32());
  /* 125b870b pop edi */
  EDI = (pop32());
  /* 125b870c pop ebx */
  EBX = (pop32());
  /* 125b870d ret  */
  ESPCHK(0x125b8660u, _esp0);
  ESP += 4; return;
L_125b870e:;
  /* 125b870e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 125b8711 pop esi */
  ESI = (pop32());
  /* 125b8712 pop edi */
  EDI = (pop32());
  /* 125b8713 pop ebx */
  EBX = (pop32());
  /* 125b8714 ret  */
  ESPCHK(0x125b8660u, _esp0);
  ESP += 4; return;
L_125b8715:;
  /* 125b8715 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 125b8718 pop esi */
  ESI = (pop32());
  /* 125b8719 pop edi */
  EDI = (pop32());
  /* 125b871a pop ebx */
  EBX = (pop32());
  /* 125b871b ret  */
  ESPCHK(0x125b8660u, _esp0);
  ESP += 4; return;
  /* 125b871c jmp dword ptr [0x125d6364] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x125d6364)))); return;
}

/* RtlUnwind @ 0x125b886c (6 bytes, 1 insns) */
void f_125b886c(void) {
  FTRACE(0x125b886cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 125b886c jmp dword ptr [0x125d62f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x125d62f8)))); return;
}

