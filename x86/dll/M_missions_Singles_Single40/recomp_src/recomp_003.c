#include "recomp.h"

/* FUN_1000ea2b @ 0x1169ea2b (20 bytes, 9 insns) */
void f_1169ea2b(void) {
  FTRACE(0x1169ea2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ea2b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1169ea2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169ea31 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1169ea38 pop edi */
  EDI = (pop32());
  /* 1169ea39 pop esi */
  ESI = (pop32());
  /* 1169ea3a pop ebx */
  EBX = (pop32());
  /* 1169ea3b mov esp, ebp */
  ESP = (EBP);
  /* 1169ea3d pop ebp */
  EBP = (pop32());
  /* 1169ea3e ret  */
  ESPCHK(0x1169ea2bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea40 @ 0x1169ea40 (66 bytes, 24 insns) */
void f_1169ea40(void) {
  FTRACE(0x1169ea40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ea40 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ea41 mov ebp, esp */
  EBP = (ESP);
  /* 1169ea43 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ea44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ea47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169ea49 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169ea4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ea4f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ea55 jne 0x1169ea7c */
  if (!C.zf) goto L_1169ea7c;
  /* 1169ea57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ea5a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ea5e jne 0x1169ea7c */
  if (!C.zf) goto L_1169ea7c;
  /* 1169ea60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ea63 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ea6a jne 0x1169ea7c */
  if (!C.zf) goto L_1169ea7c;
  /* 1169ea6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ea6f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ea73 jne 0x1169ea7c */
  if (!C.zf) goto L_1169ea7c;
  /* 1169ea75 mov eax, 1 */
  EAX = (0x1u);
  /* 1169ea7a jmp 0x1169ea7e */
  goto L_1169ea7e;
L_1169ea7c:;
  /* 1169ea7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1169ea7e:;
  /* 1169ea7e mov esp, ebp */
  ESP = (EBP);
  /* 1169ea80 pop ebp */
  EBP = (pop32());
  /* 1169ea81 ret  */
  ESPCHK(0x1169ea40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea90 @ 0x1169ea90 (621 bytes, 229 insns) */
void f_1169ea90(void) {
  FTRACE(0x1169ea90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ea90 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ea91 mov ebp, esp */
  EBP = (ESP);
  /* 1169ea93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169ea95 push 0x116cb390 */
  push32((uint32_t)(0x116cb390u));
  /* 1169ea9a push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 1169ea9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169eaa5 push eax */
  push32((uint32_t)(EAX));
  /* 1169eaa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1169eaad add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eab0 push ebx */
  push32((uint32_t)(EBX));
  /* 1169eab1 push esi */
  push32((uint32_t)(ESI));
  /* 1169eab2 push edi */
  push32((uint32_t)(EDI));
  /* 1169eab3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1169eab6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169eab9 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169eabd je 0x1169ead6 */
  if (C.zf) goto L_1169ead6;
  /* 1169eabf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169eac2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1169eac5 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 1169eac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169eacb je 0x1169ead6 */
  if (C.zf) goto L_1169ead6;
  /* 1169eacd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169ead0 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ead4 jne 0x1169eadb */
  if (!C.zf) goto L_1169eadb;
L_1169ead6:;
  /* 1169ead6 jmp 0x1169ecfa */
  goto L_1169ecfa;
L_1169eadb:;
  /* 1169eadb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169eade mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1169eae1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169eae4 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 1169eae8 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1169eaeb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169eaf2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169eaf5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169eaf7 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1169eafa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169eafc je 0x1169eb56 */
  if (C.zf) goto L_1169eb56;
  /* 1169eafe push 1 */
  push32((uint32_t)(0x1u));
  /* 1169eb00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169eb03 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1169eb06 push eax */
  push32((uint32_t)(EAX));
  /* 1169eb07 call 0x116a4c40 */
  push32(0x1169eb0cu); f_116a4c40();
  /* 1169eb0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eb0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169eb11 je 0x1169eb4c */
  if (C.zf) goto L_1169eb4c;
  /* 1169eb13 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169eb15 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169eb18 push ecx */
  push32((uint32_t)(ECX));
  /* 1169eb19 call 0x116a4c70 */
  push32(0x1169eb1eu); f_116a4c70();
  /* 1169eb1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eb21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169eb23 je 0x1169eb4c */
  if (C.zf) goto L_1169eb4c;
  /* 1169eb25 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169eb28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169eb2b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1169eb2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1169eb30 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169eb33 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eb36 push edx */
  push32((uint32_t)(EDX));
  /* 1169eb37 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169eb3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169eb3c push ecx */
  push32((uint32_t)(ECX));
  /* 1169eb3d call 0x1169eda0 */
  push32(0x1169eb42u); f_1169eda0();
  /* 1169eb42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eb45 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169eb48 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1169eb4a jmp 0x1169eb51 */
  goto L_1169eb51;
L_1169eb4c:;
  /* 1169eb4c call 0x1169f1a0 */
  push32(0x1169eb51u); f_1169f1a0();
L_1169eb51:;
  /* 1169eb51 jmp 0x1169ece3 */
  goto L_1169ece3;
L_1169eb56:;
  /* 1169eb56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169eb59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169eb5b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1169eb5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169eb60 je 0x1169ebda */
  if (C.zf) goto L_1169ebda;
  /* 1169eb62 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169eb64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169eb67 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1169eb6a push eax */
  push32((uint32_t)(EAX));
  /* 1169eb6b call 0x116a4c40 */
  push32(0x1169eb70u); f_116a4c40();
  /* 1169eb70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eb73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169eb75 je 0x1169ebd0 */
  if (C.zf) goto L_1169ebd0;
  /* 1169eb77 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169eb79 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169eb7c push ecx */
  push32((uint32_t)(ECX));
  /* 1169eb7d call 0x116a4c70 */
  push32(0x1169eb82u); f_116a4c70();
  /* 1169eb82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eb85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169eb87 je 0x1169ebd0 */
  if (C.zf) goto L_1169ebd0;
  /* 1169eb89 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169eb8c mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1169eb8f push eax */
  push32((uint32_t)(EAX));
  /* 1169eb90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169eb93 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1169eb96 push edx */
  push32((uint32_t)(EDX));
  /* 1169eb97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169eb9a push eax */
  push32((uint32_t)(EAX));
  /* 1169eb9b call 0x116a25a0 */
  push32(0x1169eba0u); f_116a25a0();
  /* 1169eba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eba3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169eba6 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ebaa jne 0x1169ebce */
  if (!C.zf) goto L_1169ebce;
  /* 1169ebac mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169ebaf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ebb2 je 0x1169ebce */
  if (C.zf) goto L_1169ebce;
  /* 1169ebb4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ebb7 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ebba push eax */
  push32((uint32_t)(EAX));
  /* 1169ebbb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169ebbe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169ebc0 push edx */
  push32((uint32_t)(EDX));
  /* 1169ebc1 call 0x1169eda0 */
  push32(0x1169ebc6u); f_1169eda0();
  /* 1169ebc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ebc9 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169ebcc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1169ebce:;
  /* 1169ebce jmp 0x1169ebd5 */
  goto L_1169ebd5;
L_1169ebd0:;
  /* 1169ebd0 call 0x1169f1a0 */
  push32(0x1169ebd5u); f_1169f1a0();
L_1169ebd5:;
  /* 1169ebd5 jmp 0x1169ece3 */
  goto L_1169ece3;
L_1169ebda:;
  /* 1169ebda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ebdd cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ebe1 jne 0x1169ec40 */
  if (!C.zf) goto L_1169ec40;
  /* 1169ebe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169ebe5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ebe8 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1169ebeb push ecx */
  push32((uint32_t)(ECX));
  /* 1169ebec call 0x116a4c40 */
  push32(0x1169ebf1u); f_116a4c40();
  /* 1169ebf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ebf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ebf6 je 0x1169ec36 */
  if (C.zf) goto L_1169ec36;
  /* 1169ebf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169ebfa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169ebfd push edx */
  push32((uint32_t)(EDX));
  /* 1169ebfe call 0x116a4c70 */
  push32(0x1169ec03u); f_116a4c70();
  /* 1169ec03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ec06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ec08 je 0x1169ec36 */
  if (C.zf) goto L_1169ec36;
  /* 1169ec0a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ec0d mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1169ec10 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ec11 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ec14 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ec17 push edx */
  push32((uint32_t)(EDX));
  /* 1169ec18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ec1b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1169ec1e push ecx */
  push32((uint32_t)(ECX));
  /* 1169ec1f call 0x1169eda0 */
  push32(0x1169ec24u); f_1169eda0();
  /* 1169ec24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ec27 push eax */
  push32((uint32_t)(EAX));
  /* 1169ec28 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169ec2b push edx */
  push32((uint32_t)(EDX));
  /* 1169ec2c call 0x116a25a0 */
  push32(0x1169ec31u); f_116a25a0();
  /* 1169ec31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ec34 jmp 0x1169ec3b */
  goto L_1169ec3b;
L_1169ec36:;
  /* 1169ec36 call 0x1169f1a0 */
  push32(0x1169ec3bu); f_1169f1a0();
L_1169ec3b:;
  /* 1169ec3b jmp 0x1169ece3 */
  goto L_1169ece3;
L_1169ec40:;
  /* 1169ec40 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169ec42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ec45 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1169ec48 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ec49 call 0x116a4c40 */
  push32(0x1169ec4eu); f_116a4c40();
  /* 1169ec4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ec51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ec53 je 0x1169ecde */
  if (C.zf) goto L_1169ecde;
  /* 1169ec59 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169ec5b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169ec5e push edx */
  push32((uint32_t)(EDX));
  /* 1169ec5f call 0x116a4c70 */
  push32(0x1169ec64u); f_116a4c70();
  /* 1169ec64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ec67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ec69 je 0x1169ecde */
  if (C.zf) goto L_1169ecde;
  /* 1169ec6b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ec6e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1169ec71 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ec72 call 0x116a4ca0 */
  push32(0x1169ec77u); f_116a4ca0();
  /* 1169ec77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ec7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ec7c je 0x1169ecde */
  if (C.zf) goto L_1169ecde;
  /* 1169ec7e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ec81 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169ec83 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1169ec86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ec88 je 0x1169ecb5 */
  if (C.zf) goto L_1169ecb5;
  /* 1169ec8a push 1 */
  push32((uint32_t)(0x1u));
  /* 1169ec8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ec8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ec92 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ec93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ec96 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1169ec99 push eax */
  push32((uint32_t)(EAX));
  /* 1169ec9a call 0x1169eda0 */
  push32(0x1169ec9fu); f_1169eda0();
  /* 1169ec9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eca2 push eax */
  push32((uint32_t)(EAX));
  /* 1169eca3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169eca6 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1169eca9 push edx */
  push32((uint32_t)(EDX));
  /* 1169ecaa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169ecad push eax */
  push32((uint32_t)(EAX));
  /* 1169ecae call 0x1169a1e0 */
  push32(0x1169ecb3u); f_1169a1e0();
  /* 1169ecb3 jmp 0x1169ecdc */
  goto L_1169ecdc;
L_1169ecb5:;
  /* 1169ecb5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ecb8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ecbb push ecx */
  push32((uint32_t)(ECX));
  /* 1169ecbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ecbf mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1169ecc2 push eax */
  push32((uint32_t)(EAX));
  /* 1169ecc3 call 0x1169eda0 */
  push32(0x1169ecc8u); f_1169eda0();
  /* 1169ecc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eccb push eax */
  push32((uint32_t)(EAX));
  /* 1169eccc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169eccf mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1169ecd2 push edx */
  push32((uint32_t)(EDX));
  /* 1169ecd3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1169ecd6 push eax */
  push32((uint32_t)(EAX));
  /* 1169ecd7 call 0x1169a1d0 */
  push32(0x1169ecdcu); f_1169a1d0();
L_1169ecdc:;
  /* 1169ecdc jmp 0x1169ece3 */
  goto L_1169ece3;
L_1169ecde:;
  /* 1169ecde call 0x1169f1a0 */
  push32(0x1169ece3u); f_1169f1a0();
L_1169ece3:;
  /* 1169ece3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1169ecea jmp 0x1169ecfa */
  goto L_1169ecfa;
  /* 1169ecec mov eax, 1 */
  EAX = (0x1u);
  /* 1169ecf1 ret  */
  ESPCHK(0x1169ea90u, _esp0);
  ESP += 4; return;
  /* 1169ecf2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1169ecf5 call 0x1169f0f0 */
  push32(0x1169ecfau); f_1169f0f0();
L_1169ecfa:;
  /* 1169ecfa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169ecfd mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1169ed04 pop edi */
  EDI = (pop32());
  /* 1169ed05 pop esi */
  ESI = (pop32());
  /* 1169ed06 pop ebx */
  EBX = (pop32());
  /* 1169ed07 mov esp, ebp */
  ESP = (EBP);
  /* 1169ed09 pop ebp */
  EBP = (pop32());
  /* 1169ed0a ret  */
  ESPCHK(0x1169ea90u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x1169ed10 (111 bytes, 46 insns) */
void f_1169ed10(void) {
  FTRACE(0x1169ed10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ed10 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ed11 mov ebp, esp */
  EBP = (ESP);
  /* 1169ed13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169ed15 push 0x116cb3a0 */
  push32((uint32_t)(0x116cb3a0u));
  /* 1169ed1a push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 1169ed1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169ed25 push eax */
  push32((uint32_t)(EAX));
  /* 1169ed26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1169ed2d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ed30 push ebx */
  push32((uint32_t)(EBX));
  /* 1169ed31 push esi */
  push32((uint32_t)(ESI));
  /* 1169ed32 push edi */
  push32((uint32_t)(EDI));
  /* 1169ed33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1169ed36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ed3a je 0x1169ed85 */
  if (C.zf) goto L_1169ed85;
  /* 1169ed3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ed3f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1169ed42 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ed46 je 0x1169ed85 */
  if (C.zf) goto L_1169ed85;
  /* 1169ed48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169ed4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ed52 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1169ed55 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169ed58 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ed59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ed5c mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 1169ed5f push eax */
  push32((uint32_t)(EAX));
  /* 1169ed60 call 0x1169a1c0 */
  push32(0x1169ed65u); f_1169a1c0();
  /* 1169ed65 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1169ed6c jmp 0x1169ed85 */
  goto L_1169ed85;
  /* 1169ed6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ed71 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169ed76 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169ed78 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ed7a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169ed7c ret  */
  ESPCHK(0x1169ed10u, _esp0);
  ESP += 4; return;
  /* 1169ed7d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1169ed80 call 0x1169f0f0 */
  push32(0x1169ed85u); f_1169f0f0();
L_1169ed85:;
  /* 1169ed85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169ed88 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1169ed8f pop edi */
  EDI = (pop32());
  /* 1169ed90 pop esi */
  ESI = (pop32());
  /* 1169ed91 pop ebx */
  EBX = (pop32());
  /* 1169ed92 mov esp, ebp */
  ESP = (EBP);
  /* 1169ed94 pop ebp */
  EBP = (pop32());
  /* 1169ed95 ret  */
  ESPCHK(0x1169ed10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x1169eda0 (70 bytes, 27 insns) */
void f_1169eda0(void) {
  FTRACE(0x1169eda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169eda0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169eda1 mov ebp, esp */
  EBP = (ESP);
  /* 1169eda3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169eda4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169eda7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169edaa add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169edac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169edaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169edb2 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169edb6 jl 0x1169eddf */
  if ((C.sf!=C.of)) goto L_1169eddf;
  /* 1169edb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169edbb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1169edbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169edc1 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1169edc4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169edc7 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1169edca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169edcd add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169edd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169edd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169edd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169edd9 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eddc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169eddf:;
  /* 1169eddf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ede2 mov esp, ebp */
  ESP = (EBP);
  /* 1169ede4 pop ebp */
  EBP = (pop32());
  /* 1169ede5 ret  */
  ESPCHK(0x1169eda0u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x1169edf0 (76 bytes, 34 insns) */
void f_1169edf0(void) {
  FTRACE(0x1169edf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169edf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169edf1 mov ebp, esp */
  EBP = (ESP);
  /* 1169edf3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169edf6 push ebx */
  push32((uint32_t)(EBX));
  /* 1169edf7 push ecx */
  push32((uint32_t)(ECX));
  /* 1169edf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169edfb add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169edfe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169ee01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ee04 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ee05 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1169ee08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169ee0b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ee0e call 0x1169a62d */
  push32(0x1169ee13u); f_1169a62d();
  /* 1169ee13 push esi */
  push32((uint32_t)(ESI));
  /* 1169ee14 push edi */
  push32((uint32_t)(EDI));
  /* 1169ee15 call eax */
  call_ind((uint32_t)(EAX), 0x1169ee17u);
  /* 1169ee17 pop edi */
  EDI = (pop32());
  /* 1169ee18 pop esi */
  ESI = (pop32());
  /* 1169ee19 mov ebx, ebp */
  EBX = (EBP);
  /* 1169ee1b pop ebp */
  EBP = (pop32());
  /* 1169ee1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169ee1f push ebp */
  push32((uint32_t)(EBP));
  /* 1169ee20 mov ebp, ebx */
  EBP = (EBX);
  /* 1169ee22 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ee28 jne 0x1169ee2f */
  if (!C.zf) goto L_1169ee2f;
  /* 1169ee2a mov ecx, 2 */
  ECX = (0x2u);
L_1169ee2f:;
  /* 1169ee2f push ecx */
  push32((uint32_t)(ECX));
  /* 1169ee30 call 0x1169a62d */
  push32(0x1169ee35u); f_1169a62d();
  /* 1169ee35 pop ebp */
  EBP = (pop32());
  /* 1169ee36 pop ecx */
  ECX = (pop32());
  /* 1169ee37 pop ebx */
  EBX = (pop32());
  /* 1169ee38 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1169ee39 ret 0xc */
  ESPCHK(0x1169edf0u, _esp0);
  ESP += 16; return;
}

/* FUN_1000ee40 @ 0x1169ee40 (130 bytes, 42 insns) */
void f_1169ee40(void) {
  FTRACE(0x1169ee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ee40 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ee41 mov ebp, esp */
  EBP = (ESP);
  /* 1169ee43 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ee44 call 0x1169c040 */
  push32(0x1169ee49u); f_1169c040();
  /* 1169ee49 call dword ptr [0x116d33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33f8))), 0x1169ee4fu);
  /* 1169ee4f mov dword ptr [0x116ce1a0], eax */
  w32((uint32_t)(0x116ce1a0), (EAX));
  /* 1169ee54 cmp dword ptr [0x116ce1a0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce1a0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ee5b jne 0x1169ee61 */
  if (!C.zf) goto L_1169ee61;
  /* 1169ee5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ee5f jmp 0x1169eebe */
  goto L_1169eebe;
L_1169ee61:;
  /* 1169ee61 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 1169ee63 push 0x116cb3ac */
  push32((uint32_t)(0x116cb3acu));
  /* 1169ee68 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169ee6a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1169ee6c push 1 */
  push32((uint32_t)(0x1u));
  /* 1169ee6e call 0x1169c630 */
  push32(0x1169ee73u); f_1169c630();
  /* 1169ee73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ee76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169ee79 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ee7d je 0x1169ee94 */
  if (C.zf) goto L_1169ee94;
  /* 1169ee7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ee82 push eax */
  push32((uint32_t)(EAX));
  /* 1169ee83 mov ecx, dword ptr [0x116ce1a0] */
  ECX = (r32((uint32_t)(0x116ce1a0)));
  /* 1169ee89 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ee8a call dword ptr [0x116d33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33fc))), 0x1169ee90u);
  /* 1169ee90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ee92 jne 0x1169ee98 */
  if (!C.zf) goto L_1169ee98;
L_1169ee94:;
  /* 1169ee94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ee96 jmp 0x1169eebe */
  goto L_1169eebe;
L_1169ee98:;
  /* 1169ee98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ee9b push edx */
  push32((uint32_t)(EDX));
  /* 1169ee9c call 0x1169ef00 */
  push32(0x1169eea1u); f_1169ef00();
  /* 1169eea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169eea4 call dword ptr [0x116d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3400))), 0x1169eeaau);
  /* 1169eeaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169eead mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1169eeaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169eeb2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1169eeb9 mov eax, 1 */
  EAX = (0x1u);
L_1169eebe:;
  /* 1169eebe mov esp, ebp */
  ESP = (EBP);
  /* 1169eec0 pop ebp */
  EBP = (pop32());
  /* 1169eec1 ret  */
  ESPCHK(0x1169ee40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eed0 @ 0x1169eed0 (41 bytes, 11 insns) */
void f_1169eed0(void) {
  FTRACE(0x1169eed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169eed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169eed1 mov ebp, esp */
  EBP = (ESP);
  /* 1169eed3 call 0x1169c080 */
  push32(0x1169eed8u); f_1169c080();
  /* 1169eed8 cmp dword ptr [0x116ce1a0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce1a0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169eedf je 0x1169eef7 */
  if (C.zf) goto L_1169eef7;
  /* 1169eee1 mov eax, dword ptr [0x116ce1a0] */
  EAX = (r32((uint32_t)(0x116ce1a0)));
  /* 1169eee6 push eax */
  push32((uint32_t)(EAX));
  /* 1169eee7 call dword ptr [0x116d33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33f4))), 0x1169eeedu);
  /* 1169eeed mov dword ptr [0x116ce1a0], 0xffffffff */
  w32((uint32_t)(0x116ce1a0), (0xffffffffu));
L_1169eef7:;
  /* 1169eef7 pop ebp */
  EBP = (pop32());
  /* 1169eef8 ret  */
  ESPCHK(0x1169eed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef00 @ 0x1169ef00 (25 bytes, 8 insns) */
void f_1169ef00(void) {
  FTRACE(0x1169ef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ef00 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ef01 mov ebp, esp */
  EBP = (ESP);
  /* 1169ef03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ef06 mov dword ptr [eax + 0x50], 0x116ce4c0 */
  w32((uint32_t)(EAX + 0x50), (0x116ce4c0u));
  /* 1169ef0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169ef10 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 1169ef17 pop ebp */
  EBP = (pop32());
  /* 1169ef18 ret  */
  ESPCHK(0x1169ef00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef20 @ 0x1169ef20 (152 bytes, 48 insns) */
void f_1169ef20(void) {
  FTRACE(0x1169ef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ef20 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ef21 mov ebp, esp */
  EBP = (ESP);
  /* 1169ef23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ef26 call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x1169ef2cu);
  /* 1169ef2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169ef2f mov eax, dword ptr [0x116ce1a0] */
  EAX = (r32((uint32_t)(0x116ce1a0)));
  /* 1169ef34 push eax */
  push32((uint32_t)(EAX));
  /* 1169ef35 call dword ptr [0x116d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33ec))), 0x1169ef3bu);
  /* 1169ef3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169ef3e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ef42 jne 0x1169efa7 */
  if (!C.zf) goto L_1169efa7;
  /* 1169ef44 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 1169ef49 push 0x116cb3ac */
  push32((uint32_t)(0x116cb3acu));
  /* 1169ef4e push 2 */
  push32((uint32_t)(0x2u));
  /* 1169ef50 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1169ef52 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169ef54 call 0x1169c630 */
  push32(0x1169ef59u); f_1169c630();
  /* 1169ef59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ef5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169ef5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ef63 je 0x1169ef9d */
  if (C.zf) goto L_1169ef9d;
  /* 1169ef65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ef68 push ecx */
  push32((uint32_t)(ECX));
  /* 1169ef69 mov edx, dword ptr [0x116ce1a0] */
  EDX = (r32((uint32_t)(0x116ce1a0)));
  /* 1169ef6f push edx */
  push32((uint32_t)(EDX));
  /* 1169ef70 call dword ptr [0x116d33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33fc))), 0x1169ef76u);
  /* 1169ef76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169ef78 je 0x1169ef9d */
  if (C.zf) goto L_1169ef9d;
  /* 1169ef7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ef7d push eax */
  push32((uint32_t)(EAX));
  /* 1169ef7e call 0x1169ef00 */
  push32(0x1169ef83u); f_1169ef00();
  /* 1169ef83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ef86 call dword ptr [0x116d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3400))), 0x1169ef8cu);
  /* 1169ef8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ef8f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1169ef91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169ef94 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1169ef9b jmp 0x1169efa7 */
  goto L_1169efa7;
L_1169ef9d:;
  /* 1169ef9d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1169ef9f call 0x1169ac90 */
  push32(0x1169efa4u); f_1169ac90();
  /* 1169efa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169efa7:;
  /* 1169efa7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169efaa push eax */
  push32((uint32_t)(EAX));
  /* 1169efab call dword ptr [0x116d33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33f0))), 0x1169efb1u);
  /* 1169efb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169efb4 mov esp, ebp */
  ESP = (EBP);
  /* 1169efb6 pop ebp */
  EBP = (pop32());
  /* 1169efb7 ret  */
  ESPCHK(0x1169ef20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efc0 @ 0x1169efc0 (263 bytes, 86 insns) */
void f_1169efc0(void) {
  FTRACE(0x1169efc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169efc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169efc1 mov ebp, esp */
  EBP = (ESP);
  /* 1169efc3 cmp dword ptr [0x116ce1a0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce1a0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169efca je 0x1169f0c5 */
  if (C.zf) goto L_1169f0c5;
  /* 1169efd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169efd4 jne 0x1169efe5 */
  if (!C.zf) goto L_1169efe5;
  /* 1169efd6 mov eax, dword ptr [0x116ce1a0] */
  EAX = (r32((uint32_t)(0x116ce1a0)));
  /* 1169efdb push eax */
  push32((uint32_t)(EAX));
  /* 1169efdc call dword ptr [0x116d33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33ec))), 0x1169efe2u);
  /* 1169efe2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1169efe5:;
  /* 1169efe5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169efe9 je 0x1169f0b6 */
  if (C.zf) goto L_1169f0b6;
  /* 1169efef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169eff2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169eff6 je 0x1169f009 */
  if (C.zf) goto L_1169f009;
  /* 1169eff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169effa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169effd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 1169f000 push eax */
  push32((uint32_t)(EAX));
  /* 1169f001 call 0x1169ccb0 */
  push32(0x1169f006u); f_1169ccb0();
  /* 1169f006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f009:;
  /* 1169f009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f00c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f010 je 0x1169f023 */
  if (C.zf) goto L_1169f023;
  /* 1169f012 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f017 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1169f01a push eax */
  push32((uint32_t)(EAX));
  /* 1169f01b call 0x1169ccb0 */
  push32(0x1169f020u); f_1169ccb0();
  /* 1169f020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f023:;
  /* 1169f023 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f026 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f02a je 0x1169f03d */
  if (C.zf) goto L_1169f03d;
  /* 1169f02c push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f02e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f031 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 1169f034 push eax */
  push32((uint32_t)(EAX));
  /* 1169f035 call 0x1169ccb0 */
  push32(0x1169f03au); f_1169ccb0();
  /* 1169f03a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f03d:;
  /* 1169f03d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f040 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f044 je 0x1169f057 */
  if (C.zf) goto L_1169f057;
  /* 1169f046 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f04b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1169f04e push eax */
  push32((uint32_t)(EAX));
  /* 1169f04f call 0x1169ccb0 */
  push32(0x1169f054u); f_1169ccb0();
  /* 1169f054 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f057:;
  /* 1169f057 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f05a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f05e je 0x1169f071 */
  if (C.zf) goto L_1169f071;
  /* 1169f060 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f062 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f065 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1169f068 push eax */
  push32((uint32_t)(EAX));
  /* 1169f069 call 0x1169ccb0 */
  push32(0x1169f06eu); f_1169ccb0();
  /* 1169f06e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f071:;
  /* 1169f071 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f074 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f078 je 0x1169f08b */
  if (C.zf) goto L_1169f08b;
  /* 1169f07a push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f07c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f07f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 1169f082 push eax */
  push32((uint32_t)(EAX));
  /* 1169f083 call 0x1169ccb0 */
  push32(0x1169f088u); f_1169ccb0();
  /* 1169f088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f08b:;
  /* 1169f08b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f08e cmp dword ptr [ecx + 0x50], 0x116ce4c0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x116ce4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f095 je 0x1169f0a8 */
  if (C.zf) goto L_1169f0a8;
  /* 1169f097 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f099 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f09c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1169f09f push eax */
  push32((uint32_t)(EAX));
  /* 1169f0a0 call 0x1169ccb0 */
  push32(0x1169f0a5u); f_1169ccb0();
  /* 1169f0a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f0a8:;
  /* 1169f0a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f0aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f0ad push ecx */
  push32((uint32_t)(ECX));
  /* 1169f0ae call 0x1169ccb0 */
  push32(0x1169f0b3u); f_1169ccb0();
  /* 1169f0b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f0b6:;
  /* 1169f0b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169f0b8 mov edx, dword ptr [0x116ce1a0] */
  EDX = (r32((uint32_t)(0x116ce1a0)));
  /* 1169f0be push edx */
  push32((uint32_t)(EDX));
  /* 1169f0bf call dword ptr [0x116d33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33fc))), 0x1169f0c5u);
L_1169f0c5:;
  /* 1169f0c5 pop ebp */
  EBP = (pop32());
  /* 1169f0c6 ret  */
  ESPCHK(0x1169efc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0d0 @ 0x1169f0d0 (11 bytes, 5 insns) */
void f_1169f0d0(void) {
  FTRACE(0x1169f0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f0d3 call dword ptr [0x116d3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3400))), 0x1169f0d9u);
  /* 1169f0d9 pop ebp */
  EBP = (pop32());
  /* 1169f0da ret  */
  ESPCHK(0x1169f0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0e0 @ 0x1169f0e0 (11 bytes, 5 insns) */
void f_1169f0e0(void) {
  FTRACE(0x1169f0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f0e3 call dword ptr [0x116d33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e4))), 0x1169f0e9u);
  /* 1169f0e9 pop ebp */
  EBP = (pop32());
  /* 1169f0ea ret  */
  ESPCHK(0x1169f0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0f0 @ 0x1169f0f0 (92 bytes, 29 insns) */
void f_1169f0f0(void) {
  FTRACE(0x1169f0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f0f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169f0f5 push 0x116cb3b8 */
  push32((uint32_t)(0x116cb3b8u));
  /* 1169f0fa push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 1169f0ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169f105 push eax */
  push32((uint32_t)(EAX));
  /* 1169f106 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1169f10d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f110 push ebx */
  push32((uint32_t)(EBX));
  /* 1169f111 push esi */
  push32((uint32_t)(ESI));
  /* 1169f112 push edi */
  push32((uint32_t)(EDI));
  /* 1169f113 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1169f116 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169f11d call 0x1169ef20 */
  push32(0x1169f122u); f_1169ef20();
  /* 1169f122 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f126 je 0x1169f150 */
  if (C.zf) goto L_1169f150;
  /* 1169f128 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1169f12f call 0x1169ef20 */
  push32(0x1169f134u); f_1169ef20();
  /* 1169f134 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x1169f137u);
  /* 1169f137 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169f13e jmp 0x1169f150 */
  goto L_1169f150;
  /* 1169f140 mov eax, 1 */
  EAX = (0x1u);
  /* 1169f145 ret  */
  ESPCHK(0x1169f0f0u, _esp0);
  ESP += 4; return;
  /* 1169f146 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1169f149 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1169f150:;
  /* 1169f150 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1169f157 call 0x1169f15e */
  push32(0x1169f15cu); f_1169f15e();
  /* 1169f15c jmp 0x1169f164 */
  jmp_ind(0x1169f164u); return;
}

/* _abort @ 0x1169f15e (5 bytes, 2 insns) */
void f_1169f15e(void) {
  FTRACE(0x1169f15eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f15e call 0x116a5060 */
  push32(0x1169f163u); f_116a5060();
  /* 1169f163 ret  */
  ESPCHK(0x1169f15eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000f180 @ 0x1169f180 (29 bytes, 10 insns) */
void f_1169f180(void) {
  FTRACE(0x1169f180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f180 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f181 mov ebp, esp */
  EBP = (ESP);
  /* 1169f183 call 0x1169ef20 */
  push32(0x1169f188u); f_1169ef20();
  /* 1169f188 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f18c je 0x1169f196 */
  if (C.zf) goto L_1169f196;
  /* 1169f18e call 0x1169ef20 */
  push32(0x1169f193u); f_1169ef20();
  /* 1169f193 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x1169f196u);
L_1169f196:;
  /* 1169f196 call 0x1169f0f0 */
  push32(0x1169f19bu); f_1169f0f0();
  /* 1169f19b pop ebp */
  EBP = (pop32());
  /* 1169f19c ret  */
  ESPCHK(0x1169f180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1a0 @ 0x1169f1a0 (90 bytes, 27 insns) */
void f_1169f1a0(void) {
  FTRACE(0x1169f1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f1a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169f1a5 push 0x116cb3d0 */
  push32((uint32_t)(0x116cb3d0u));
  /* 1169f1aa push 0x116a4d5c */
  push32((uint32_t)(0x116a4d5cu));
  /* 1169f1af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1169f1b5 push eax */
  push32((uint32_t)(EAX));
  /* 1169f1b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1169f1bd sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f1c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1169f1c1 push esi */
  push32((uint32_t)(ESI));
  /* 1169f1c2 push edi */
  push32((uint32_t)(EDI));
  /* 1169f1c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1169f1c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169f1cd cmp dword ptr [0x116ce1a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce1a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f1d4 je 0x1169f1fc */
  if (C.zf) goto L_1169f1fc;
  /* 1169f1d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1169f1dd call dword ptr [0x116ce1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116ce1a4))), 0x1169f1e3u);
  /* 1169f1e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1169f1ea jmp 0x1169f1fc */
  goto L_1169f1fc;
  /* 1169f1ec mov eax, 1 */
  EAX = (0x1u);
  /* 1169f1f1 ret  */
  ESPCHK(0x1169f1a0u, _esp0);
  ESP += 4; return;
  /* 1169f1f2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1169f1f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1169f1fc:;
  /* 1169f1fc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1169f203 call 0x1169f20a */
  push32(0x1169f208u); f_1169f20a();
  /* 1169f208 jmp 0x1169f210 */
  f_1169f210(); return;
}

/* FUN_1000f20a @ 0x1169f20a (6 bytes, 2 insns) */
void f_1169f20a(void) {
  FTRACE(0x1169f20au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f20a call 0x1169f0f0 */
  push32(0x1169f20fu); f_1169f0f0();
  /* 1169f20f ret  */
  ESPCHK(0x1169f20au, _esp0);
  ESP += 4; return;
}

/* FUN_1000f210 @ 0x1169f210 (17 bytes, 8 insns) */
void f_1169f210(void) {
  FTRACE(0x1169f210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f210 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169f213 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1169f21a pop edi */
  EDI = (pop32());
  /* 1169f21b pop esi */
  ESI = (pop32());
  /* 1169f21c pop ebx */
  EBX = (pop32());
  /* 1169f21d mov esp, ebp */
  ESP = (EBP);
  /* 1169f21f pop ebp */
  EBP = (pop32());
  /* 1169f220 ret  */
  ESPCHK(0x1169f210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f230 @ 0x1169f230 (56 bytes, 15 insns) */
void f_1169f230(void) {
  FTRACE(0x1169f230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f230 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f231 mov ebp, esp */
  EBP = (ESP);
  /* 1169f233 cmp dword ptr [0x116ce020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f23a je 0x1169f242 */
  if (C.zf) goto L_1169f242;
  /* 1169f23c call dword ptr [0x116ce020] */
  call_ind((uint32_t)(r32((uint32_t)(0x116ce020))), 0x1169f242u);
L_1169f242:;
  /* 1169f242 push 0x116cd638 */
  push32((uint32_t)(0x116cd638u));
  /* 1169f247 push 0x116cd320 */
  push32((uint32_t)(0x116cd320u));
  /* 1169f24c call 0x1169f400 */
  push32(0x1169f251u); f_1169f400();
  /* 1169f251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f254 push 0x116cd21c */
  push32((uint32_t)(0x116cd21cu));
  /* 1169f259 push 0x116cd000 */
  push32((uint32_t)(0x116cd000u));
  /* 1169f25e call 0x1169f400 */
  push32(0x1169f263u); f_1169f400();
  /* 1169f263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f266 pop ebp */
  EBP = (pop32());
  /* 1169f267 ret  */
  ESPCHK(0x1169f230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f270 @ 0x1169f270 (21 bytes, 10 insns) */
void f_1169f270(void) {
  FTRACE(0x1169f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f271 mov ebp, esp */
  EBP = (ESP);
  /* 1169f273 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169f275 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169f277 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f27a push eax */
  push32((uint32_t)(EAX));
  /* 1169f27b call 0x1169f2f0 */
  push32(0x1169f280u); f_1169f2f0();
  /* 1169f280 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f283 pop ebp */
  EBP = (pop32());
  /* 1169f284 ret  */
  ESPCHK(0x1169f270u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x1169f290 (21 bytes, 10 insns) */
void f_1169f290(void) {
  FTRACE(0x1169f290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f290 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f291 mov ebp, esp */
  EBP = (ESP);
  /* 1169f293 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169f295 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169f297 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f29a push eax */
  push32((uint32_t)(EAX));
  /* 1169f29b call 0x1169f2f0 */
  push32(0x1169f2a0u); f_1169f2f0();
  /* 1169f2a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f2a3 pop ebp */
  EBP = (pop32());
  /* 1169f2a4 ret  */
  ESPCHK(0x1169f290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2b0 @ 0x1169f2b0 (19 bytes, 9 insns) */
void f_1169f2b0(void) {
  FTRACE(0x1169f2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f2b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169f2b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169f2b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169f2b9 call 0x1169f2f0 */
  push32(0x1169f2beu); f_1169f2f0();
  /* 1169f2be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f2c1 pop ebp */
  EBP = (pop32());
  /* 1169f2c2 ret  */
  ESPCHK(0x1169f2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2d0 @ 0x1169f2d0 (19 bytes, 9 insns) */
void f_1169f2d0(void) {
  FTRACE(0x1169f2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f2d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169f2d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1169f2d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1169f2d9 call 0x1169f2f0 */
  push32(0x1169f2deu); f_1169f2f0();
  /* 1169f2de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f2e1 pop ebp */
  EBP = (pop32());
  /* 1169f2e2 ret  */
  ESPCHK(0x1169f2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2f0 @ 0x1169f2f0 (227 bytes, 61 insns) */
void f_1169f2f0(void) {
  FTRACE(0x1169f2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169f2f4 call 0x1169f3e0 */
  push32(0x1169f2f9u); f_1169f3e0();
  /* 1169f2f9 cmp dword ptr [0x116d060c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d060c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f300 jne 0x1169f313 */
  if (!C.zf) goto L_1169f313;
  /* 1169f302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f305 push eax */
  push32((uint32_t)(EAX));
  /* 1169f306 call dword ptr [0x116d33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33dc))), 0x1169f30cu);
  /* 1169f30c push eax */
  push32((uint32_t)(EAX));
  /* 1169f30d call dword ptr [0x116d33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e0))), 0x1169f313u);
L_1169f313:;
  /* 1169f313 mov dword ptr [0x116d0608], 1 */
  w32((uint32_t)(0x116d0608), (0x1u));
  /* 1169f31d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 1169f320 mov byte ptr [0x116d0604], cl */
  w8((uint32_t)(0x116d0604), (CL));
  /* 1169f326 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f32a jne 0x1169f373 */
  if (!C.zf) goto L_1169f373;
  /* 1169f32c cmp dword ptr [0x116d2058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d2058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f333 je 0x1169f361 */
  if (C.zf) goto L_1169f361;
  /* 1169f335 mov edx, dword ptr [0x116d2054] */
  EDX = (r32((uint32_t)(0x116d2054)));
  /* 1169f33b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1169f33e:;
  /* 1169f33e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f341 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f344 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169f347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f34a cmp ecx, dword ptr [0x116d2058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d2058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f350 jb 0x1169f361 */
  if (C.cf) goto L_1169f361;
  /* 1169f352 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f355 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f358 je 0x1169f35f */
  if (C.zf) goto L_1169f35f;
  /* 1169f35a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f35d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1169f35fu);
L_1169f35f:;
  /* 1169f35f jmp 0x1169f33e */
  goto L_1169f33e;
L_1169f361:;
  /* 1169f361 push 0x116cd944 */
  push32((uint32_t)(0x116cd944u));
  /* 1169f366 push 0x116cd73c */
  push32((uint32_t)(0x116cd73cu));
  /* 1169f36b call 0x1169f400 */
  push32(0x1169f370u); f_1169f400();
  /* 1169f370 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f373:;
  /* 1169f373 push 0x116cdc50 */
  push32((uint32_t)(0x116cdc50u));
  /* 1169f378 push 0x116cda48 */
  push32((uint32_t)(0x116cda48u));
  /* 1169f37d call 0x1169f400 */
  push32(0x1169f382u); f_1169f400();
  /* 1169f382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f385 cmp dword ptr [0x116d0610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f38c jne 0x1169f3ae */
  if (!C.zf) goto L_1169f3ae;
  /* 1169f38e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1169f390 call 0x1169d730 */
  push32(0x1169f395u); f_1169d730();
  /* 1169f395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f398 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1169f39b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169f39d je 0x1169f3ae */
  if (C.zf) goto L_1169f3ae;
  /* 1169f39f mov dword ptr [0x116d0610], 1 */
  w32((uint32_t)(0x116d0610), (0x1u));
  /* 1169f3a9 call 0x1169e040 */
  push32(0x1169f3aeu); f_1169e040();
L_1169f3ae:;
  /* 1169f3ae cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f3b2 je 0x1169f3bb */
  if (C.zf) goto L_1169f3bb;
  /* 1169f3b4 call 0x1169f3f0 */
  push32(0x1169f3b9u); f_1169f3f0();
  /* 1169f3b9 jmp 0x1169f3cf */
  goto L_1169f3cf;
L_1169f3bb:;
  /* 1169f3bb mov dword ptr [0x116d060c], 1 */
  w32((uint32_t)(0x116d060c), (0x1u));
  /* 1169f3c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f3c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1169f3c9 call dword ptr [0x116d3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3414))), 0x1169f3cfu);
L_1169f3cf:;
  /* 1169f3cf mov esp, ebp */
  ESP = (EBP);
  /* 1169f3d1 pop ebp */
  EBP = (pop32());
  /* 1169f3d2 ret  */
  ESPCHK(0x1169f2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3e0 @ 0x1169f3e0 (15 bytes, 7 insns) */
void f_1169f3e0(void) {
  FTRACE(0x1169f3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f3e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1169f3e5 call 0x1169c120 */
  push32(0x1169f3eau); f_1169c120();
  /* 1169f3ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f3ed pop ebp */
  EBP = (pop32());
  /* 1169f3ee ret  */
  ESPCHK(0x1169f3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3f0 @ 0x1169f3f0 (15 bytes, 7 insns) */
void f_1169f3f0(void) {
  FTRACE(0x1169f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f3f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1169f3f5 call 0x1169c1c0 */
  push32(0x1169f3fau); f_1169c1c0();
  /* 1169f3fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f3fd pop ebp */
  EBP = (pop32());
  /* 1169f3fe ret  */
  ESPCHK(0x1169f3f0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x1169f400 (37 bytes, 16 insns) */
void f_1169f400(void) {
  FTRACE(0x1169f400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f400 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f401 mov ebp, esp */
  EBP = (ESP);
L_1169f403:;
  /* 1169f403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f406 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f409 jae 0x1169f423 */
  if (!C.cf) goto L_1169f423;
  /* 1169f40b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f40e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f411 je 0x1169f418 */
  if (C.zf) goto L_1169f418;
  /* 1169f413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f416 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x1169f418u);
L_1169f418:;
  /* 1169f418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f41b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f41e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1169f421 jmp 0x1169f403 */
  goto L_1169f403;
L_1169f423:;
  /* 1169f423 pop ebp */
  EBP = (pop32());
  /* 1169f424 ret  */
  ESPCHK(0x1169f400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f430 @ 0x1169f430 (238 bytes, 75 insns) */
void f_1169f430(void) {
  FTRACE(0x1169f430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f430 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f431 mov ebp, esp */
  EBP = (ESP);
  /* 1169f433 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f439 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f43e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1169f441 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f445 jl 0x1169f450 */
  if ((C.sf!=C.of)) goto L_1169f450;
  /* 1169f447 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f44e jle 0x1169f458 */
  if ((C.zf||C.sf!=C.of)) goto L_1169f458;
L_1169f450:;
  /* 1169f450 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169f453 jmp 0x1169f51a */
  goto L_1169f51a;
L_1169f458:;
  /* 1169f458 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169f45b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169f45e add edx, dword ptr [ecx*4 + 0x116ce62c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x116ce62c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f465 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 1169f468 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f46b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1169f46e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169f470 jne 0x1169f481 */
  if (!C.zf) goto L_1169f481;
  /* 1169f472 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f476 jle 0x1169f481 */
  if ((C.zf||C.sf!=C.of)) goto L_1169f481;
  /* 1169f478 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1169f47b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f47e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1169f481:;
  /* 1169f481 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f484 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f487 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169f48d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f490 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f493 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1169f496 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1169f499 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f49b lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 1169f49f imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169f4a2 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f4a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169f4a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f4ab imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169f4ae add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f4b1 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169f4b4 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f4b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169f4ba call 0x116a5080 */
  push32(0x1169f4bfu); f_116a5080();
  /* 1169f4bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f4c2 add ecx, dword ptr [0x116ce548] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116ce548))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f4c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169f4cb mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1169f4ce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1169f4d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169f4d4 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1169f4d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169f4da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f4dd mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1169f4e0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169f4e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1169f4e6 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f4ea je 0x1169f50b */
  if (C.zf) goto L_1169f50b;
  /* 1169f4ec cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f4f0 jne 0x1169f517 */
  if (!C.zf) goto L_1169f517;
  /* 1169f4f2 cmp dword ptr [0x116ce54c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce54c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f4f9 je 0x1169f517 */
  if (C.zf) goto L_1169f517;
  /* 1169f4fb lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1169f4fe push eax */
  push32((uint32_t)(EAX));
  /* 1169f4ff call 0x116a5490 */
  push32(0x1169f504u); f_116a5490();
  /* 1169f504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169f509 je 0x1169f517 */
  if (C.zf) goto L_1169f517;
L_1169f50b:;
  /* 1169f50b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f50e add ecx, dword ptr [0x116ce550] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116ce550))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f514 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1169f517:;
  /* 1169f517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1169f51a:;
  /* 1169f51a mov esp, ebp */
  ESP = (EBP);
  /* 1169f51c pop ebp */
  EBP = (pop32());
  /* 1169f51d ret  */
  ESPCHK(0x1169f430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f520 @ 0x1169f520 (804 bytes, 236 insns) */
void f_1169f520(void) {
  FTRACE(0x1169f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f520 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f521 mov ebp, esp */
  EBP = (ESP);
  /* 1169f523 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f526 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1169f52b push 0x116cb3e8 */
  push32((uint32_t)(0x116cb3e8u));
  /* 1169f530 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f532 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1169f537 call 0x1169c220 */
  push32(0x1169f53cu); f_1169c220();
  /* 1169f53c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f53f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1169f542 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f546 jne 0x1169f552 */
  if (!C.zf) goto L_1169f552;
  /* 1169f548 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1169f54a call 0x1169ac90 */
  push32(0x1169f54fu); f_1169ac90();
  /* 1169f54f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f552:;
  /* 1169f552 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f555 mov dword ptr [0x116d1f00], eax */
  w32((uint32_t)(0x116d1f00), (EAX));
  /* 1169f55a mov dword ptr [0x116d203c], 0x20 */
  w32((uint32_t)(0x116d203c), (0x20u));
  /* 1169f564 jmp 0x1169f56f */
  goto L_1169f56f;
L_1169f566:;
  /* 1169f566 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f569 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f56c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1169f56f:;
  /* 1169f56f mov edx, dword ptr [0x116d1f00] */
  EDX = (r32((uint32_t)(0x116d1f00)));
  /* 1169f575 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f57b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f57e jae 0x1169f5a3 */
  if (!C.cf) goto L_1169f5a3;
  /* 1169f580 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f583 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1169f587 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f58a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1169f590 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f593 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1169f597 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f59a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1169f5a1 jmp 0x1169f566 */
  goto L_1169f566;
L_1169f5a3:;
  /* 1169f5a3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1169f5a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1169f5a7 call dword ptr [0x116d33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33d0))), 0x1169f5adu);
  /* 1169f5ad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 1169f5b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169f5b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169f5b8 je 0x1169f745 */
  if (C.zf) goto L_1169f745;
  /* 1169f5be cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f5c2 je 0x1169f745 */
  if (C.zf) goto L_1169f745;
  /* 1169f5c8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169f5cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169f5cd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 1169f5d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169f5d3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f5d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169f5d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f5dc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f5df mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 1169f5e2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f5e9 jge 0x1169f5f3 */
  if ((C.sf==C.of)) goto L_1169f5f3;
  /* 1169f5eb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1169f5ee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 1169f5f1 jmp 0x1169f5fa */
  goto L_1169f5fa;
L_1169f5f3:;
  /* 1169f5f3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1169f5fa:;
  /* 1169f5fa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1169f5fd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1169f600 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 1169f607 jmp 0x1169f612 */
  goto L_1169f612;
L_1169f609:;
  /* 1169f609 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1169f60c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f60f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_1169f612:;
  /* 1169f612 mov ecx, dword ptr [0x116d203c] */
  ECX = (r32((uint32_t)(0x116d203c)));
  /* 1169f618 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f61b jge 0x1169f6b2 */
  if ((C.sf==C.of)) goto L_1169f6b2;
  /* 1169f621 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1169f626 push 0x116cb3e8 */
  push32((uint32_t)(0x116cb3e8u));
  /* 1169f62b push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f62d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1169f632 call 0x1169c220 */
  push32(0x1169f637u); f_1169c220();
  /* 1169f637 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f63a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1169f63d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f641 jne 0x1169f64e */
  if (!C.zf) goto L_1169f64e;
  /* 1169f643 mov edx, dword ptr [0x116d203c] */
  EDX = (r32((uint32_t)(0x116d203c)));
  /* 1169f649 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1169f64c jmp 0x1169f6b2 */
  goto L_1169f6b2;
L_1169f64e:;
  /* 1169f64e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1169f651 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f654 mov dword ptr [eax*4 + 0x116d1f00], ecx */
  w32((uint32_t)(EAX*4 + 0x116d1f00), (ECX));
  /* 1169f65b mov edx, dword ptr [0x116d203c] */
  EDX = (r32((uint32_t)(0x116d203c)));
  /* 1169f661 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f664 mov dword ptr [0x116d203c], edx */
  w32((uint32_t)(0x116d203c), (EDX));
  /* 1169f66a jmp 0x1169f675 */
  goto L_1169f675;
L_1169f66c:;
  /* 1169f66c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f66f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f672 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_1169f675:;
  /* 1169f675 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1169f678 mov edx, dword ptr [ecx*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x116d1f00)));
  /* 1169f67f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f685 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f688 jae 0x1169f6ad */
  if (!C.cf) goto L_1169f6ad;
  /* 1169f68a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f68d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1169f691 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f694 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1169f69a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f69d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1169f6a1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f6a4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1169f6ab jmp 0x1169f66c */
  goto L_1169f66c;
L_1169f6ad:;
  /* 1169f6ad jmp 0x1169f609 */
  goto L_1169f609;
L_1169f6b2:;
  /* 1169f6b2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1169f6b9 jmp 0x1169f6d6 */
  goto L_1169f6d6;
L_1169f6bb:;
  /* 1169f6bb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1169f6be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f6c1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 1169f6c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f6c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f6ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169f6cd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 1169f6d0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f6d3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_1169f6d6:;
  /* 1169f6d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1169f6d9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f6dc jge 0x1169f745 */
  if ((C.sf==C.of)) goto L_1169f745;
  /* 1169f6de mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 1169f6e1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f6e4 je 0x1169f740 */
  if (C.zf) goto L_1169f740;
  /* 1169f6e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f6e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169f6ec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1169f6ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169f6f1 je 0x1169f740 */
  if (C.zf) goto L_1169f740;
  /* 1169f6f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f6f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169f6f9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1169f6fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169f6fe jne 0x1169f710 */
  if (!C.zf) goto L_1169f710;
  /* 1169f700 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 1169f703 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169f705 push edx */
  push32((uint32_t)(EDX));
  /* 1169f706 call dword ptr [0x116d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33d4))), 0x1169f70cu);
  /* 1169f70c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169f70e je 0x1169f740 */
  if (C.zf) goto L_1169f740;
L_1169f710:;
  /* 1169f710 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 1169f713 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1169f716 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1169f719 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1169f71c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169f71f mov edx, dword ptr [eax*4 + 0x116d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 1169f726 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f728 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1169f72b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f72e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 1169f731 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169f733 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1169f735 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f738 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f73b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1169f73d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_1169f740:;
  /* 1169f740 jmp 0x1169f6bb */
  goto L_1169f6bb;
L_1169f745:;
  /* 1169f745 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1169f74c jmp 0x1169f757 */
  goto L_1169f757;
L_1169f74e:;
  /* 1169f74e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 1169f751 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f754 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_1169f757:;
  /* 1169f757 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f75b jge 0x1169f834 */
  if ((C.sf==C.of)) goto L_1169f834;
  /* 1169f761 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1169f764 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1169f767 mov edx, dword ptr [0x116d1f00] */
  EDX = (r32((uint32_t)(0x116d1f00)));
  /* 1169f76d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f76f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1169f772 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f775 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f778 jne 0x1169f820 */
  if (!C.zf) goto L_1169f820;
  /* 1169f77e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f781 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 1169f785 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f789 jne 0x1169f794 */
  if (!C.zf) goto L_1169f794;
  /* 1169f78b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 1169f792 jmp 0x1169f7a4 */
  goto L_1169f7a4;
L_1169f794:;
  /* 1169f794 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 1169f797 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f79a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1169f79c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f79e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f7a1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_1169f7a4:;
  /* 1169f7a4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 1169f7a7 push eax */
  push32((uint32_t)(EAX));
  /* 1169f7a8 call dword ptr [0x116d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3434))), 0x1169f7aeu);
  /* 1169f7ae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 1169f7b1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f7b5 je 0x1169f80f */
  if (C.zf) goto L_1169f80f;
  /* 1169f7b7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1169f7ba push ecx */
  push32((uint32_t)(ECX));
  /* 1169f7bb call dword ptr [0x116d33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33d4))), 0x1169f7c1u);
  /* 1169f7c1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1169f7c4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f7c8 je 0x1169f80f */
  if (C.zf) goto L_1169f80f;
  /* 1169f7ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f7cd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1169f7d0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1169f7d2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 1169f7d5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169f7db cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f7de jne 0x1169f7f0 */
  if (!C.zf) goto L_1169f7f0;
  /* 1169f7e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f7e3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1169f7e6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1169f7e8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f7eb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1169f7ee jmp 0x1169f80d */
  goto L_1169f80d;
L_1169f7f0:;
  /* 1169f7f0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 1169f7f3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169f7f9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f7fc jne 0x1169f80d */
  if (!C.zf) goto L_1169f80d;
  /* 1169f7fe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f801 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1169f804 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 1169f807 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f80a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1169f80d:;
  /* 1169f80d jmp 0x1169f81e */
  goto L_1169f81e;
L_1169f80f:;
  /* 1169f80f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f812 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1169f815 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1169f818 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f81b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1169f81e:;
  /* 1169f81e jmp 0x1169f82f */
  goto L_1169f82f;
L_1169f820:;
  /* 1169f820 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f823 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1169f826 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 1169f829 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1169f82c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1169f82f:;
  /* 1169f82f jmp 0x1169f74e */
  goto L_1169f74e;
L_1169f834:;
  /* 1169f834 mov eax, dword ptr [0x116d203c] */
  EAX = (r32((uint32_t)(0x116d203c)));
  /* 1169f839 push eax */
  push32((uint32_t)(EAX));
  /* 1169f83a call dword ptr [0x116d33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33d8))), 0x1169f840u);
  /* 1169f840 mov esp, ebp */
  ESP = (EBP);
  /* 1169f842 pop ebp */
  EBP = (pop32());
  /* 1169f843 ret  */
  ESPCHK(0x1169f520u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x1169f850 (155 bytes, 45 insns) */
void f_1169f850(void) {
  FTRACE(0x1169f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f850 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f851 mov ebp, esp */
  EBP = (ESP);
  /* 1169f853 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f856 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1169f85d jmp 0x1169f868 */
  goto L_1169f868;
L_1169f85f:;
  /* 1169f85f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169f862 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f865 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1169f868:;
  /* 1169f868 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f86c jge 0x1169f8e7 */
  if ((C.sf==C.of)) goto L_1169f8e7;
  /* 1169f86e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169f871 cmp dword ptr [ecx*4 + 0x116d1f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x116d1f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f879 je 0x1169f8e2 */
  if (C.zf) goto L_1169f8e2;
  /* 1169f87b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169f87e mov eax, dword ptr [edx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116d1f00)));
  /* 1169f885 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169f888 jmp 0x1169f893 */
  goto L_1169f893;
L_1169f88a:;
  /* 1169f88a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f88d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f890 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1169f893:;
  /* 1169f893 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169f896 mov eax, dword ptr [edx*4 + 0x116d1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x116d1f00)));
  /* 1169f89d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f8a2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f8a5 jae 0x1169f8bf */
  if (!C.cf) goto L_1169f8bf;
  /* 1169f8a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f8aa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f8ae je 0x1169f8bd */
  if (C.zf) goto L_1169f8bd;
  /* 1169f8b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f8b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f8b6 push edx */
  push32((uint32_t)(EDX));
  /* 1169f8b7 call dword ptr [0x116d3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3458))), 0x1169f8bdu);
L_1169f8bd:;
  /* 1169f8bd jmp 0x1169f88a */
  goto L_1169f88a;
L_1169f8bf:;
  /* 1169f8bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f8c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169f8c4 mov ecx, dword ptr [eax*4 + 0x116d1f00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116d1f00)));
  /* 1169f8cb push ecx */
  push32((uint32_t)(ECX));
  /* 1169f8cc call 0x1169ccb0 */
  push32(0x1169f8d1u); f_1169ccb0();
  /* 1169f8d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f8d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169f8d7 mov dword ptr [edx*4 + 0x116d1f00], 0 */
  w32((uint32_t)(EDX*4 + 0x116d1f00), (0x0u));
L_1169f8e2:;
  /* 1169f8e2 jmp 0x1169f85f */
  goto L_1169f85f;
L_1169f8e7:;
  /* 1169f8e7 mov esp, ebp */
  ESP = (EBP);
  /* 1169f8e9 pop ebp */
  EBP = (pop32());
  /* 1169f8ea ret  */
  ESPCHK(0x1169f850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8f0 @ 0x1169f8f0 (329 bytes, 102 insns) */
void f_1169f8f0(void) {
  FTRACE(0x1169f8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169f8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1169f8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1169f8f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169f8f6 cmp dword ptr [0x116d2050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d2050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f8fd jne 0x1169f904 */
  if (!C.zf) goto L_1169f904;
  /* 1169f8ff call 0x116a61a0 */
  push32(0x1169f904u); f_116a61a0();
L_1169f904:;
  /* 1169f904 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1169f90b mov eax, dword ptr [0x116d0544] */
  EAX = (r32((uint32_t)(0x116d0544)));
  /* 1169f910 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1169f913:;
  /* 1169f913 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f916 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1169f919 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169f91b je 0x1169f949 */
  if (C.zf) goto L_1169f949;
  /* 1169f91d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f920 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169f923 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f926 je 0x1169f931 */
  if (C.zf) goto L_1169f931;
  /* 1169f928 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169f92b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f92e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1169f931:;
  /* 1169f931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f934 push eax */
  push32((uint32_t)(EAX));
  /* 1169f935 call 0x116a07b0 */
  push32(0x1169f93au); f_116a07b0();
  /* 1169f93a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f93d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f940 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1169f944 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169f947 jmp 0x1169f913 */
  goto L_1169f913;
L_1169f949:;
  /* 1169f949 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1169f94b push 0x116cb3f4 */
  push32((uint32_t)(0x116cb3f4u));
  /* 1169f950 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f952 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169f955 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1169f95c push ecx */
  push32((uint32_t)(ECX));
  /* 1169f95d call 0x1169c220 */
  push32(0x1169f962u); f_1169c220();
  /* 1169f962 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f965 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1169f968 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169f96b mov dword ptr [0x116d05ec], edx */
  w32((uint32_t)(0x116d05ec), (EDX));
  /* 1169f971 cmp dword ptr [0x116d05ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d05ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f978 jne 0x1169f984 */
  if (!C.zf) goto L_1169f984;
  /* 1169f97a push 9 */
  push32((uint32_t)(0x9u));
  /* 1169f97c call 0x1169ac90 */
  push32(0x1169f981u); f_1169ac90();
  /* 1169f981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f984:;
  /* 1169f984 mov eax, dword ptr [0x116d0544] */
  EAX = (r32((uint32_t)(0x116d0544)));
  /* 1169f989 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169f98c jmp 0x1169f997 */
  goto L_1169f997;
L_1169f98e:;
  /* 1169f98e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f991 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f994 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1169f997:;
  /* 1169f997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f99a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169f99d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169f99f je 0x1169fa07 */
  if (C.zf) goto L_1169fa07;
  /* 1169f9a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f9a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1169f9a5 call 0x116a07b0 */
  push32(0x1169f9aau); f_116a07b0();
  /* 1169f9aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f9ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f9b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1169f9b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f9b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169f9b9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f9bc je 0x1169fa05 */
  if (C.zf) goto L_1169fa05;
  /* 1169f9be push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1169f9c0 push 0x116cb3f4 */
  push32((uint32_t)(0x116cb3f4u));
  /* 1169f9c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169f9c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169f9ca push ecx */
  push32((uint32_t)(ECX));
  /* 1169f9cb call 0x1169c220 */
  push32(0x1169f9d0u); f_1169c220();
  /* 1169f9d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f9d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169f9d6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1169f9d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169f9db cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169f9de jne 0x1169f9ea */
  if (!C.zf) goto L_1169f9ea;
  /* 1169f9e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 1169f9e2 call 0x1169ac90 */
  push32(0x1169f9e7u); f_1169ac90();
  /* 1169f9e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169f9ea:;
  /* 1169f9ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169f9ed push ecx */
  push32((uint32_t)(ECX));
  /* 1169f9ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169f9f1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169f9f3 push eax */
  push32((uint32_t)(EAX));
  /* 1169f9f4 call 0x1169a7d0 */
  push32(0x1169f9f9u); f_1169a7d0();
  /* 1169f9f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169f9fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169f9ff add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fa02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1169fa05:;
  /* 1169fa05 jmp 0x1169f98e */
  goto L_1169f98e;
L_1169fa07:;
  /* 1169fa07 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169fa09 mov edx, dword ptr [0x116d0544] */
  EDX = (r32((uint32_t)(0x116d0544)));
  /* 1169fa0f push edx */
  push32((uint32_t)(EDX));
  /* 1169fa10 call 0x1169ccb0 */
  push32(0x1169fa15u); f_1169ccb0();
  /* 1169fa15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fa18 mov dword ptr [0x116d0544], 0 */
  w32((uint32_t)(0x116d0544), (0x0u));
  /* 1169fa22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169fa25 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1169fa2b mov dword ptr [0x116d2040], 1 */
  w32((uint32_t)(0x116d2040), (0x1u));
  /* 1169fa35 mov esp, ebp */
  ESP = (EBP);
  /* 1169fa37 pop ebp */
  EBP = (pop32());
  /* 1169fa38 ret  */
  ESPCHK(0x1169f8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa40 @ 0x1169fa40 (216 bytes, 69 insns) */
void f_1169fa40(void) {
  FTRACE(0x1169fa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169fa40 push ebp */
  push32((uint32_t)(EBP));
  /* 1169fa41 mov ebp, esp */
  EBP = (ESP);
  /* 1169fa43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169fa46 cmp dword ptr [0x116d2050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d2050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fa4d jne 0x1169fa54 */
  if (!C.zf) goto L_1169fa54;
  /* 1169fa4f call 0x116a61a0 */
  push32(0x1169fa54u); f_116a61a0();
L_1169fa54:;
  /* 1169fa54 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1169fa59 push 0x116d0614 */
  push32((uint32_t)(0x116d0614u));
  /* 1169fa5e push 0 */
  push32((uint32_t)(0x0u));
  /* 1169fa60 call dword ptr [0x116d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d343c))), 0x1169fa66u);
  /* 1169fa66 mov dword ptr [0x116d05fc], 0x116d0614 */
  w32((uint32_t)(0x116d05fc), (0x116d0614u));
  /* 1169fa70 mov eax, dword ptr [0x116d2074] */
  EAX = (r32((uint32_t)(0x116d2074)));
  /* 1169fa75 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169fa78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169fa7a jne 0x1169fa87 */
  if (!C.zf) goto L_1169fa87;
  /* 1169fa7c mov edx, dword ptr [0x116d05fc] */
  EDX = (r32((uint32_t)(0x116d05fc)));
  /* 1169fa82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1169fa85 jmp 0x1169fa8f */
  goto L_1169fa8f;
L_1169fa87:;
  /* 1169fa87 mov eax, dword ptr [0x116d2074] */
  EAX = (r32((uint32_t)(0x116d2074)));
  /* 1169fa8c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1169fa8f:;
  /* 1169fa8f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169fa92 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1169fa95 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 1169fa98 push edx */
  push32((uint32_t)(EDX));
  /* 1169fa99 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1169fa9c push eax */
  push32((uint32_t)(EAX));
  /* 1169fa9d push 0 */
  push32((uint32_t)(0x0u));
  /* 1169fa9f push 0 */
  push32((uint32_t)(0x0u));
  /* 1169faa1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169faa4 push ecx */
  push32((uint32_t)(ECX));
  /* 1169faa5 call 0x1169fb20 */
  push32(0x1169faaau); f_1169fb20();
  /* 1169faaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169faad push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1169fab2 push 0x116cb400 */
  push32((uint32_t)(0x116cb400u));
  /* 1169fab7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1169fab9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169fabc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fabf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 1169fac2 push ecx */
  push32((uint32_t)(ECX));
  /* 1169fac3 call 0x1169c220 */
  push32(0x1169fac8u); f_1169c220();
  /* 1169fac8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169facb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169face cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fad2 jne 0x1169fade */
  if (!C.zf) goto L_1169fade;
  /* 1169fad4 push 8 */
  push32((uint32_t)(0x8u));
  /* 1169fad6 call 0x1169ac90 */
  push32(0x1169fadbu); f_1169ac90();
  /* 1169fadb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1169fade:;
  /* 1169fade lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 1169fae1 push edx */
  push32((uint32_t)(EDX));
  /* 1169fae2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1169fae5 push eax */
  push32((uint32_t)(EAX));
  /* 1169fae6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169fae9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169faec lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1169faef push eax */
  push32((uint32_t)(EAX));
  /* 1169faf0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169faf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1169faf4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169faf7 push edx */
  push32((uint32_t)(EDX));
  /* 1169faf8 call 0x1169fb20 */
  push32(0x1169fafdu); f_1169fb20();
  /* 1169fafd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fb00 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169fb03 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169fb06 mov dword ptr [0x116d05e0], eax */
  w32((uint32_t)(0x116d05e0), (EAX));
  /* 1169fb0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169fb0e mov dword ptr [0x116d05e4], ecx */
  w32((uint32_t)(0x116d05e4), (ECX));
  /* 1169fb14 mov esp, ebp */
  ESP = (EBP);
  /* 1169fb16 pop ebp */
  EBP = (pop32());
  /* 1169fb17 ret  */
  ESPCHK(0x1169fa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb20 @ 0x1169fb20 (1060 bytes, 360 insns) */
void f_1169fb20(void) {
  FTRACE(0x1169fb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169fb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1169fb21 mov ebp, esp */
  EBP = (ESP);
  /* 1169fb23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169fb26 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fb29 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1169fb2f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169fb32 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 1169fb38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1169fb3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169fb3e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fb42 je 0x1169fb55 */
  if (C.zf) goto L_1169fb55;
  /* 1169fb44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169fb47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fb4a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1169fb4c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169fb4f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fb52 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_1169fb55:;
  /* 1169fb55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fb58 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169fb5b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fb5e jne 0x1169fc2d */
  if (!C.zf) goto L_1169fc2d;
L_1169fb64:;
  /* 1169fb64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fb67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fb6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169fb6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fb70 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169fb73 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fb76 je 0x1169fbf2 */
  if (C.zf) goto L_1169fbf2;
  /* 1169fb78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fb7b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169fb7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169fb80 je 0x1169fbf2 */
  if (C.zf) goto L_1169fbf2;
  /* 1169fb82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fb85 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169fb87 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1169fb89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169fb8b mov al, byte ptr [edx + 0x116d1dc1] */
  AL = (r8((uint32_t)(EDX + 0x116d1dc1)));
  /* 1169fb91 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1169fb94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169fb96 je 0x1169fbc7 */
  if (C.zf) goto L_1169fbc7;
  /* 1169fb98 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fb9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169fb9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fba0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fba3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1169fba5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fba9 je 0x1169fbc7 */
  if (C.zf) goto L_1169fbc7;
  /* 1169fbab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fbae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fbb1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1169fbb3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1169fbb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fbb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fbbb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1169fbbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fbc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fbc4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1169fbc7:;
  /* 1169fbc7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fbca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169fbcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fbcf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fbd2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1169fbd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fbd8 je 0x1169fbed */
  if (C.zf) goto L_1169fbed;
  /* 1169fbda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fbdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fbe0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1169fbe2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1169fbe4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fbe7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fbea mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1169fbed:;
  /* 1169fbed jmp 0x1169fb64 */
  goto L_1169fb64;
L_1169fbf2:;
  /* 1169fbf2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fbf5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169fbf7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fbfa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fbfd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1169fbff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fc03 je 0x1169fc14 */
  if (C.zf) goto L_1169fc14;
  /* 1169fc05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fc08 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1169fc0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fc0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fc11 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_1169fc14:;
  /* 1169fc14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fc17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169fc1a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fc1d jne 0x1169fc28 */
  if (!C.zf) goto L_1169fc28;
  /* 1169fc1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fc22 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fc25 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1169fc28:;
  /* 1169fc28 jmp 0x1169fcfc */
  goto L_1169fcfc;
L_1169fc2d:;
  /* 1169fc2d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fc30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169fc32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fc35 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fc38 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1169fc3a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fc3e je 0x1169fc53 */
  if (C.zf) goto L_1169fc53;
  /* 1169fc40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fc43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fc46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1169fc48 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1169fc4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fc4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fc50 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1169fc53:;
  /* 1169fc53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fc56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1169fc58 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1169fc5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fc5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fc61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169fc64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169fc67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169fc6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169fc6f mov dl, byte ptr [ecx + 0x116d1dc1] */
  DL = (r8((uint32_t)(ECX + 0x116d1dc1)));
  /* 1169fc75 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1169fc78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169fc7a je 0x1169fcab */
  if (C.zf) goto L_1169fcab;
  /* 1169fc7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fc7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169fc81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fc84 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fc87 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1169fc89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fc8d je 0x1169fca2 */
  if (C.zf) goto L_1169fca2;
  /* 1169fc8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fc92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fc95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1169fc97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1169fc99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fc9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fc9f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1169fca2:;
  /* 1169fca2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fca5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fca8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1169fcab:;
  /* 1169fcab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169fcae and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169fcb4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fcb7 je 0x1169fcd7 */
  if (C.zf) goto L_1169fcd7;
  /* 1169fcb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169fcbc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1169fcc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169fcc3 je 0x1169fcd7 */
  if (C.zf) goto L_1169fcd7;
  /* 1169fcc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169fcc8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1169fcce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fcd1 jne 0x1169fc2d */
  if (!C.zf) goto L_1169fc2d;
L_1169fcd7:;
  /* 1169fcd7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1169fcda and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1169fce0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169fce2 jne 0x1169fcef */
  if (!C.zf) goto L_1169fcef;
  /* 1169fce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fce7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169fcea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169fced jmp 0x1169fcfc */
  goto L_1169fcfc;
L_1169fcef:;
  /* 1169fcef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fcf3 je 0x1169fcfc */
  if (C.zf) goto L_1169fcfc;
  /* 1169fcf5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fcf8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1169fcfc:;
  /* 1169fcfc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1169fd03:;
  /* 1169fd03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fd06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169fd09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169fd0b je 0x1169fd2e */
  if (C.zf) goto L_1169fd2e;
L_1169fd0d:;
  /* 1169fd0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fd10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1169fd13 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fd16 je 0x1169fd23 */
  if (C.zf) goto L_1169fd23;
  /* 1169fd18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fd1b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169fd1e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fd21 jne 0x1169fd2e */
  if (!C.zf) goto L_1169fd2e;
L_1169fd23:;
  /* 1169fd23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fd26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fd29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169fd2c jmp 0x1169fd0d */
  goto L_1169fd0d;
L_1169fd2e:;
  /* 1169fd2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fd31 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169fd34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169fd36 jne 0x1169fd3d */
  if (!C.zf) goto L_1169fd3d;
  /* 1169fd38 jmp 0x1169ff1b */
  goto L_1169ff1b;
L_1169fd3d:;
  /* 1169fd3d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fd41 je 0x1169fd54 */
  if (C.zf) goto L_1169fd54;
  /* 1169fd43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169fd46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fd49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1169fd4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169fd4e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fd51 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1169fd54:;
  /* 1169fd54 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169fd57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169fd59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fd5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169fd5f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1169fd61:;
  /* 1169fd61 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1169fd68 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1169fd6f:;
  /* 1169fd6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fd72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169fd75 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fd78 jne 0x1169fd8e */
  if (!C.zf) goto L_1169fd8e;
  /* 1169fd7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fd7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fd80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169fd83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169fd86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fd89 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1169fd8c jmp 0x1169fd6f */
  goto L_1169fd6f;
L_1169fd8e:;
  /* 1169fd8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fd91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169fd94 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fd97 jne 0x1169fdea */
  if (!C.zf) goto L_1169fdea;
  /* 1169fd99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169fd9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169fd9e mov ecx, 2 */
  ECX = (0x2u);
  /* 1169fda3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1169fda5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169fda7 jne 0x1169fde2 */
  if (!C.zf) goto L_1169fde2;
  /* 1169fda9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fdad je 0x1169fdcf */
  if (C.zf) goto L_1169fdcf;
  /* 1169fdaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fdb2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1169fdb6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fdb9 jne 0x1169fdc6 */
  if (!C.zf) goto L_1169fdc6;
  /* 1169fdbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fdbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fdc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1169fdc4 jmp 0x1169fdcd */
  goto L_1169fdcd;
L_1169fdc6:;
  /* 1169fdc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1169fdcd:;
  /* 1169fdcd jmp 0x1169fdd6 */
  goto L_1169fdd6;
L_1169fdcf:;
  /* 1169fdcf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1169fdd6:;
  /* 1169fdd6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169fdd8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fddc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1169fddf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1169fde2:;
  /* 1169fde2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169fde5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1169fde7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1169fdea:;
  /* 1169fdea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169fded mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1169fdf0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169fdf3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1169fdf6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169fdf8 je 0x1169fe1e */
  if (C.zf) goto L_1169fe1e;
  /* 1169fdfa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fdfe je 0x1169fe0f */
  if (C.zf) goto L_1169fe0f;
  /* 1169fe00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fe03 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 1169fe06 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fe09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fe0c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1169fe0f:;
  /* 1169fe0f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fe12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169fe14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fe17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fe1a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1169fe1c jmp 0x1169fdea */
  goto L_1169fdea;
L_1169fe1e:;
  /* 1169fe1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fe21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1169fe24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1169fe26 je 0x1169fe44 */
  if (C.zf) goto L_1169fe44;
  /* 1169fe28 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fe2c jne 0x1169fe49 */
  if (!C.zf) goto L_1169fe49;
  /* 1169fe2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fe31 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1169fe34 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fe37 je 0x1169fe44 */
  if (C.zf) goto L_1169fe44;
  /* 1169fe39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fe3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1169fe3f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fe42 jne 0x1169fe49 */
  if (!C.zf) goto L_1169fe49;
L_1169fe44:;
  /* 1169fe44 jmp 0x1169fef4 */
  goto L_1169fef4;
L_1169fe49:;
  /* 1169fe49 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fe4d je 0x1169fee6 */
  if (C.zf) goto L_1169fee6;
  /* 1169fe53 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fe57 je 0x1169fead */
  if (C.zf) goto L_1169fead;
  /* 1169fe59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fe5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169fe5e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1169fe60 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169fe62 mov cl, byte ptr [eax + 0x116d1dc1] */
  CL = (r8((uint32_t)(EAX + 0x116d1dc1)));
  /* 1169fe68 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1169fe6b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169fe6d je 0x1169fe98 */
  if (C.zf) goto L_1169fe98;
  /* 1169fe6f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fe72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fe75 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1169fe77 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1169fe79 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fe7c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fe7f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 1169fe82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fe85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fe88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169fe8b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fe8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1169fe90 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fe93 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fe96 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1169fe98:;
  /* 1169fe98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fe9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fe9e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1169fea0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1169fea2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fea5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fea8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1169feab jmp 0x1169fed9 */
  goto L_1169fed9;
L_1169fead:;
  /* 1169fead mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169feb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169feb2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1169feb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1169feb6 mov cl, byte ptr [eax + 0x116d1dc1] */
  CL = (r8((uint32_t)(EAX + 0x116d1dc1)));
  /* 1169febc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1169febf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1169fec1 je 0x1169fed9 */
  if (C.zf) goto L_1169fed9;
  /* 1169fec3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fec6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fec9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1169fecc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fecf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169fed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fed4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fed7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1169fed9:;
  /* 1169fed9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fedc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169fede add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169fee1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169fee4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1169fee6:;
  /* 1169fee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1169fee9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169feec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1169feef jmp 0x1169fd61 */
  goto L_1169fd61;
L_1169fef4:;
  /* 1169fef4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169fef8 je 0x1169ff09 */
  if (C.zf) goto L_1169ff09;
  /* 1169fefa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169fefd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1169ff00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1169ff03 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ff06 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_1169ff09:;
  /* 1169ff09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169ff0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1169ff0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ff11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1169ff14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1169ff16 jmp 0x1169fd03 */
  goto L_1169fd03;
L_1169ff1b:;
  /* 1169ff1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ff1f je 0x1169ff33 */
  if (C.zf) goto L_1169ff33;
  /* 1169ff21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ff24 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1169ff2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1169ff2d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ff30 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1169ff33:;
  /* 1169ff33 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ff36 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1169ff38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ff3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1169ff3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1169ff40 mov esp, ebp */
  ESP = (EBP);
  /* 1169ff42 pop ebp */
  EBP = (pop32());
  /* 1169ff43 ret  */
  ESPCHK(0x1169fb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x1169ff50 (537 bytes, 173 insns) */
void f_1169ff50(void) {
  FTRACE(0x1169ff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1169ff50 push ebp */
  push32((uint32_t)(EBP));
  /* 1169ff51 mov ebp, esp */
  EBP = (ESP);
  /* 1169ff53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1169ff56 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1169ff5d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1169ff64 cmp dword ptr [0x116d0718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ff6b jne 0x1169ffaa */
  if (!C.zf) goto L_1169ffaa;
  /* 1169ff6d call dword ptr [0x116d33bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33bc))), 0x1169ff73u);
  /* 1169ff73 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1169ff76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ff7a je 0x1169ff88 */
  if (C.zf) goto L_1169ff88;
  /* 1169ff7c mov dword ptr [0x116d0718], 1 */
  w32((uint32_t)(0x116d0718), (0x1u));
  /* 1169ff86 jmp 0x1169ffaa */
  goto L_1169ffaa;
L_1169ff88:;
  /* 1169ff88 call dword ptr [0x116d33c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c0))), 0x1169ff8eu);
  /* 1169ff8e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1169ff91 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ff95 je 0x1169ffa3 */
  if (C.zf) goto L_1169ffa3;
  /* 1169ff97 mov dword ptr [0x116d0718], 2 */
  w32((uint32_t)(0x116d0718), (0x2u));
  /* 1169ffa1 jmp 0x1169ffaa */
  goto L_1169ffaa;
L_1169ffa3:;
  /* 1169ffa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ffa5 jmp 0x116a0165 */
  goto L_116a0165;
L_1169ffaa:;
  /* 1169ffaa cmp dword ptr [0x116d0718], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d0718))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ffb1 jne 0x116a00ae */
  if (!C.zf) goto L_116a00ae;
  /* 1169ffb7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ffbb jne 0x1169ffd3 */
  if (!C.zf) goto L_1169ffd3;
  /* 1169ffbd call dword ptr [0x116d33bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33bc))), 0x1169ffc3u);
  /* 1169ffc3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1169ffc6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1169ffca jne 0x1169ffd3 */
  if (!C.zf) goto L_1169ffd3;
  /* 1169ffcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1169ffce jmp 0x116a0165 */
  goto L_116a0165;
L_1169ffd3:;
  /* 1169ffd3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1169ffd6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1169ffd9:;
  /* 1169ffd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169ffdc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169ffde mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1169ffe1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169ffe3 je 0x116a0005 */
  if (C.zf) goto L_116a0005;
  /* 1169ffe5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169ffe8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1169ffeb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1169ffee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169fff1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1169fff3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1169fff6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1169fff8 jne 0x116a0003 */
  if (!C.zf) goto L_116a0003;
  /* 1169fffa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1169fffd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0000 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116a0003:;
  /* 116a0003 jmp 0x1169ffd9 */
  goto L_1169ffd9;
L_116a0005:;
  /* 116a0005 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0008 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a000b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116a000d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0010 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a0013 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0015 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0017 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0019 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a001b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a001e push edx */
  push32((uint32_t)(EDX));
  /* 116a001f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a0022 push eax */
  push32((uint32_t)(EAX));
  /* 116a0023 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0025 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0027 call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116a002du);
  /* 116a002d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a0030 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0034 je 0x116a0054 */
  if (C.zf) goto L_116a0054;
  /* 116a0036 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 116a0038 push 0x116cb40c */
  push32((uint32_t)(0x116cb40cu));
  /* 116a003d push 2 */
  push32((uint32_t)(0x2u));
  /* 116a003f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a0042 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0043 call 0x1169c220 */
  push32(0x116a0048u); f_1169c220();
  /* 116a0048 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a004b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a004e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0052 jne 0x116a0065 */
  if (!C.zf) goto L_116a0065;
L_116a0054:;
  /* 116a0054 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a0057 push edx */
  push32((uint32_t)(EDX));
  /* 116a0058 call dword ptr [0x116d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c8))), 0x116a005eu);
  /* 116a005e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a0060 jmp 0x116a0165 */
  goto L_116a0165;
L_116a0065:;
  /* 116a0065 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0067 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0069 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a006c push eax */
  push32((uint32_t)(EAX));
  /* 116a006d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0070 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0071 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0074 push edx */
  push32((uint32_t)(EDX));
  /* 116a0075 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a0078 push eax */
  push32((uint32_t)(EAX));
  /* 116a0079 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a007b push 0 */
  push32((uint32_t)(0x0u));
  /* 116a007d call dword ptr [0x116d33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c4))), 0x116a0083u);
  /* 116a0083 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a0085 jne 0x116a009c */
  if (!C.zf) goto L_116a009c;
  /* 116a0087 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a0089 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a008c push ecx */
  push32((uint32_t)(ECX));
  /* 116a008d call 0x1169ccb0 */
  push32(0x116a0092u); f_1169ccb0();
  /* 116a0092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0095 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_116a009c:;
  /* 116a009c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a009f push edx */
  push32((uint32_t)(EDX));
  /* 116a00a0 call dword ptr [0x116d33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c8))), 0x116a00a6u);
  /* 116a00a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a00a9 jmp 0x116a0165 */
  goto L_116a0165;
L_116a00ae:;
  /* 116a00ae cmp dword ptr [0x116d0718], 2 */
  { uint32_t _a=(r32((uint32_t)(0x116d0718))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a00b5 jne 0x116a0163 */
  if (!C.zf) goto L_116a0163;
  /* 116a00bb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a00bf jne 0x116a00d7 */
  if (!C.zf) goto L_116a00d7;
  /* 116a00c1 call dword ptr [0x116d33c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33c0))), 0x116a00c7u);
  /* 116a00c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a00ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a00ce jne 0x116a00d7 */
  if (!C.zf) goto L_116a00d7;
  /* 116a00d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a00d2 jmp 0x116a0165 */
  goto L_116a0165;
L_116a00d7:;
  /* 116a00d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a00da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116a00dd:;
  /* 116a00dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a00e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a00e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a00e5 je 0x116a0105 */
  if (C.zf) goto L_116a0105;
  /* 116a00e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a00ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a00ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a00f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a00f3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a00f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a00f8 jne 0x116a0103 */
  if (!C.zf) goto L_116a0103;
  /* 116a00fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a00fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0100 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116a0103:;
  /* 116a0103 jmp 0x116a00dd */
  goto L_116a00dd;
L_116a0105:;
  /* 116a0105 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0108 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a010b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a010e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116a0111 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 116a0116 push 0x116cb40c */
  push32((uint32_t)(0x116cb40cu));
  /* 116a011b push 2 */
  push32((uint32_t)(0x2u));
  /* 116a011d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a0120 push edx */
  push32((uint32_t)(EDX));
  /* 116a0121 call 0x1169c220 */
  push32(0x116a0126u); f_1169c220();
  /* 116a0126 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0129 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a012c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0130 jne 0x116a0140 */
  if (!C.zf) goto L_116a0140;
  /* 116a0132 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0135 push eax */
  push32((uint32_t)(EAX));
  /* 116a0136 call dword ptr [0x116d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33cc))), 0x116a013cu);
  /* 116a013c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a013e jmp 0x116a0165 */
  goto L_116a0165;
L_116a0140:;
  /* 116a0140 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a0143 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0144 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0147 push edx */
  push32((uint32_t)(EDX));
  /* 116a0148 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a014b push eax */
  push32((uint32_t)(EAX));
  /* 116a014c call 0x116a61d0 */
  push32(0x116a0151u); f_116a61d0();
  /* 116a0151 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0154 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0157 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0158 call dword ptr [0x116d33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33cc))), 0x116a015eu);
  /* 116a015e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0161 jmp 0x116a0165 */
  goto L_116a0165;
L_116a0163:;
  /* 116a0163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a0165:;
  /* 116a0165 mov esp, ebp */
  ESP = (EBP);
  /* 116a0167 pop ebp */
  EBP = (pop32());
  /* 116a0168 ret  */
  ESPCHK(0x1169ff50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010170 @ 0x116a0170 (77 bytes, 25 insns) */
void f_116a0170(void) {
  FTRACE(0x116a0170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0170 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0171 mov ebp, esp */
  EBP = (ESP);
  /* 116a0173 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0175 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116a017a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a017c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0180 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 116a0183 push eax */
  push32((uint32_t)(EAX));
  /* 116a0184 call dword ptr [0x116d33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33b4))), 0x116a018au);
  /* 116a018a mov dword ptr [0x116d1eec], eax */
  w32((uint32_t)(0x116d1eec), (EAX));
  /* 116a018f cmp dword ptr [0x116d1eec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1eec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0196 jne 0x116a019c */
  if (!C.zf) goto L_116a019c;
  /* 116a0198 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a019a jmp 0x116a01bb */
  goto L_116a01bb;
L_116a019c:;
  /* 116a019c call 0x116a2e30 */
  push32(0x116a01a1u); f_116a2e30();
  /* 116a01a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a01a3 jne 0x116a01b6 */
  if (!C.zf) goto L_116a01b6;
  /* 116a01a5 mov ecx, dword ptr [0x116d1eec] */
  ECX = (r32((uint32_t)(0x116d1eec)));
  /* 116a01ab push ecx */
  push32((uint32_t)(ECX));
  /* 116a01ac call dword ptr [0x116d33b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33b8))), 0x116a01b2u);
  /* 116a01b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a01b4 jmp 0x116a01bb */
  goto L_116a01bb;
L_116a01b6:;
  /* 116a01b6 mov eax, 1 */
  EAX = (0x1u);
L_116a01bb:;
  /* 116a01bb pop ebp */
  EBP = (pop32());
  /* 116a01bc ret  */
  ESPCHK(0x116a0170u, _esp0);
  ESP += 4; return;
}

/* FUN_100101c0 @ 0x116a01c0 (156 bytes, 48 insns) */
void f_116a01c0(void) {
  FTRACE(0x116a01c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a01c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a01c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a01c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a01c6 mov eax, dword ptr [0x116d1ee8] */
  EAX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a01cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a01ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a01d5 jmp 0x116a01e0 */
  goto L_116a01e0;
L_116a01d7:;
  /* 116a01d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a01da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a01dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a01e0:;
  /* 116a01e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a01e3 cmp edx, dword ptr [0x116d1ee4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116d1ee4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a01e9 jge 0x116a0236 */
  if ((C.sf==C.of)) goto L_116a0236;
  /* 116a01eb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 116a01f0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 116a01f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a01f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116a01fb push ecx */
  push32((uint32_t)(ECX));
  /* 116a01fc call dword ptr [0x116d33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33ac))), 0x116a0202u);
  /* 116a0202 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116a0207 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0209 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a020c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116a020f push eax */
  push32((uint32_t)(EAX));
  /* 116a0210 call dword ptr [0x116d33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33ac))), 0x116a0216u);
  /* 116a0216 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0219 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116a021c push edx */
  push32((uint32_t)(EDX));
  /* 116a021d push 0 */
  push32((uint32_t)(0x0u));
  /* 116a021f mov eax, dword ptr [0x116d1eec] */
  EAX = (r32((uint32_t)(0x116d1eec)));
  /* 116a0224 push eax */
  push32((uint32_t)(EAX));
  /* 116a0225 call dword ptr [0x116d33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33b0))), 0x116a022bu);
  /* 116a022b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a022e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0231 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a0234 jmp 0x116a01d7 */
  goto L_116a01d7;
L_116a0236:;
  /* 116a0236 mov edx, dword ptr [0x116d1ee8] */
  EDX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a023c push edx */
  push32((uint32_t)(EDX));
  /* 116a023d push 0 */
  push32((uint32_t)(0x0u));
  /* 116a023f mov eax, dword ptr [0x116d1eec] */
  EAX = (r32((uint32_t)(0x116d1eec)));
  /* 116a0244 push eax */
  push32((uint32_t)(EAX));
  /* 116a0245 call dword ptr [0x116d33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33b0))), 0x116a024bu);
  /* 116a024b mov ecx, dword ptr [0x116d1eec] */
  ECX = (r32((uint32_t)(0x116d1eec)));
  /* 116a0251 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0252 call dword ptr [0x116d33b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33b8))), 0x116a0258u);
  /* 116a0258 mov esp, ebp */
  ESP = (EBP);
  /* 116a025a pop ebp */
  EBP = (pop32());
  /* 116a025b ret  */
  ESPCHK(0x116a01c0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x116a0260 (73 bytes, 19 insns) */
void f_116a0260(void) {
  FTRACE(0x116a0260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0260 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0261 mov ebp, esp */
  EBP = (ESP);
  /* 116a0263 cmp dword ptr [0x116d054c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d054c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a026a je 0x116a027e */
  if (C.zf) goto L_116a027e;
  /* 116a026c cmp dword ptr [0x116d054c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d054c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0273 jne 0x116a02a7 */
  if (!C.zf) goto L_116a02a7;
  /* 116a0275 cmp dword ptr [0x116d0550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d0550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a027c jne 0x116a02a7 */
  if (!C.zf) goto L_116a02a7;
L_116a027e:;
  /* 116a027e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 116a0283 call 0x116a02b0 */
  push32(0x116a0288u); f_116a02b0();
  /* 116a0288 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a028b cmp dword ptr [0x116d071c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d071c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0292 je 0x116a029a */
  if (C.zf) goto L_116a029a;
  /* 116a0294 call dword ptr [0x116d071c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d071c))), 0x116a029au);
L_116a029a:;
  /* 116a029a push 0xff */
  push32((uint32_t)(0xffu));
  /* 116a029f call 0x116a02b0 */
  push32(0x116a02a4u); f_116a02b0();
  /* 116a02a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a02a7:;
  /* 116a02a7 pop ebp */
  EBP = (pop32());
  /* 116a02a8 ret  */
  ESPCHK(0x116a0260u, _esp0);
  ESP += 4; return;
}

/* FUN_100102b0 @ 0x116a02b0 (447 bytes, 131 insns) */
void f_116a02b0(void) {
  FTRACE(0x116a02b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a02b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a02b1 mov ebp, esp */
  EBP = (ESP);
  /* 116a02b3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a02b9 push ebx */
  push32((uint32_t)(EBX));
  /* 116a02ba push esi */
  push32((uint32_t)(ESI));
  /* 116a02bb push edi */
  push32((uint32_t)(EDI));
  /* 116a02bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a02c3 jmp 0x116a02ce */
  goto L_116a02ce;
L_116a02c5:;
  /* 116a02c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a02c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a02cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116a02ce:;
  /* 116a02ce cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a02d2 jae 0x116a02e7 */
  if (!C.cf) goto L_116a02e7;
  /* 116a02d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a02d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a02da cmp edx, dword ptr [ecx*8 + 0x116ce1d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x116ce1d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a02e1 jne 0x116a02e5 */
  if (!C.zf) goto L_116a02e5;
  /* 116a02e3 jmp 0x116a02e7 */
  goto L_116a02e7;
L_116a02e5:;
  /* 116a02e5 jmp 0x116a02c5 */
  goto L_116a02c5;
L_116a02e7:;
  /* 116a02e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a02ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a02ed cmp ecx, dword ptr [eax*8 + 0x116ce1d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x116ce1d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a02f4 jne 0x116a0468 */
  if (!C.zf) goto L_116a0468;
  /* 116a02fa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0301 je 0x116a0324 */
  if (C.zf) goto L_116a0324;
  /* 116a0303 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0306 mov eax, dword ptr [edx*8 + 0x116ce1d4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x116ce1d4)));
  /* 116a030d push eax */
  push32((uint32_t)(EAX));
  /* 116a030e push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0310 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0312 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0314 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0316 call 0x1169ade0 */
  push32(0x116a031bu); f_1169ade0();
  /* 116a031b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a031e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0321 jne 0x116a0324 */
  if (!C.zf) goto L_116a0324;
  /* 116a0323 int3  */
  x86_unimpl("int3 @ 0x116a0323");
L_116a0324:;
  /* 116a0324 cmp dword ptr [0x116d054c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d054c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a032b je 0x116a033f */
  if (C.zf) goto L_116a033f;
  /* 116a032d cmp dword ptr [0x116d054c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d054c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0334 jne 0x116a0378 */
  if (!C.zf) goto L_116a0378;
  /* 116a0336 cmp dword ptr [0x116d0550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d0550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a033d jne 0x116a0378 */
  if (!C.zf) goto L_116a0378;
L_116a033f:;
  /* 116a033f push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0341 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 116a0344 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0345 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0348 mov eax, dword ptr [edx*8 + 0x116ce1d4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x116ce1d4)));
  /* 116a034f push eax */
  push32((uint32_t)(EAX));
  /* 116a0350 call 0x116a07b0 */
  push32(0x116a0355u); f_116a07b0();
  /* 116a0355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0358 push eax */
  push32((uint32_t)(EAX));
  /* 116a0359 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a035c mov edx, dword ptr [ecx*8 + 0x116ce1d4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x116ce1d4)));
  /* 116a0363 push edx */
  push32((uint32_t)(EDX));
  /* 116a0364 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 116a0366 call dword ptr [0x116d3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3434))), 0x116a036cu);
  /* 116a036c push eax */
  push32((uint32_t)(EAX));
  /* 116a036d call dword ptr [0x116d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d332c))), 0x116a0373u);
  /* 116a0373 jmp 0x116a0468 */
  goto L_116a0468;
L_116a0378:;
  /* 116a0378 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a037f je 0x116a0468 */
  if (C.zf) goto L_116a0468;
  /* 116a0385 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 116a038a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 116a0390 push eax */
  push32((uint32_t)(EAX));
  /* 116a0391 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0393 call dword ptr [0x116d343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d343c))), 0x116a0399u);
  /* 116a0399 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a039b jne 0x116a03b1 */
  if (!C.zf) goto L_116a03b1;
  /* 116a039d push 0x116cab94 */
  push32((uint32_t)(0x116cab94u));
  /* 116a03a2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 116a03a8 push ecx */
  push32((uint32_t)(ECX));
  /* 116a03a9 call 0x1169a7d0 */
  push32(0x116a03aeu); f_1169a7d0();
  /* 116a03ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a03b1:;
  /* 116a03b1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 116a03b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a03ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a03bd push eax */
  push32((uint32_t)(EAX));
  /* 116a03be call 0x116a07b0 */
  push32(0x116a03c3u); f_116a07b0();
  /* 116a03c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a03c6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a03c9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a03cc jbe 0x116a03fa */
  if ((C.cf||C.zf)) goto L_116a03fa;
  /* 116a03ce lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 116a03d4 push ecx */
  push32((uint32_t)(ECX));
  /* 116a03d5 call 0x116a07b0 */
  push32(0x116a03dau); f_116a07b0();
  /* 116a03da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a03dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a03e0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 116a03e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a03e7 push 3 */
  push32((uint32_t)(0x3u));
  /* 116a03e9 push 0x116cab90 */
  push32((uint32_t)(0x116cab90u));
  /* 116a03ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a03f1 push ecx */
  push32((uint32_t)(ECX));
  /* 116a03f2 call 0x116a10b0 */
  push32(0x116a03f7u); f_116a10b0();
  /* 116a03f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a03fa:;
  /* 116a03fa push 0x116cb6c8 */
  push32((uint32_t)(0x116cb6c8u));
  /* 116a03ff lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 116a0405 push edx */
  push32((uint32_t)(EDX));
  /* 116a0406 call 0x1169a7d0 */
  push32(0x116a040bu); f_1169a7d0();
  /* 116a040b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a040e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0411 push eax */
  push32((uint32_t)(EAX));
  /* 116a0412 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 116a0418 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0419 call 0x1169a7e0 */
  push32(0x116a041eu); f_1169a7e0();
  /* 116a041e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0421 push 0x116cab08 */
  push32((uint32_t)(0x116cab08u));
  /* 116a0426 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 116a042c push edx */
  push32((uint32_t)(EDX));
  /* 116a042d call 0x1169a7e0 */
  push32(0x116a0432u); f_1169a7e0();
  /* 116a0432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0435 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0438 mov ecx, dword ptr [eax*8 + 0x116ce1d4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x116ce1d4)));
  /* 116a043f push ecx */
  push32((uint32_t)(ECX));
  /* 116a0440 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 116a0446 push edx */
  push32((uint32_t)(EDX));
  /* 116a0447 call 0x1169a7e0 */
  push32(0x116a044cu); f_1169a7e0();
  /* 116a044c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a044f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 116a0454 push 0x116cb6a0 */
  push32((uint32_t)(0x116cb6a0u));
  /* 116a0459 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 116a045f push eax */
  push32((uint32_t)(EAX));
  /* 116a0460 call 0x116a0ff0 */
  push32(0x116a0465u); f_116a0ff0();
  /* 116a0465 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a0468:;
  /* 116a0468 pop edi */
  EDI = (pop32());
  /* 116a0469 pop esi */
  ESI = (pop32());
  /* 116a046a pop ebx */
  EBX = (pop32());
  /* 116a046b mov esp, ebp */
  ESP = (EBP);
  /* 116a046d pop ebp */
  EBP = (pop32());
  /* 116a046e ret  */
  ESPCHK(0x116a02b0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x116a0470 (80 bytes, 27 insns) */
void f_116a0470(void) {
  FTRACE(0x116a0470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0470 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0471 mov ebp, esp */
  EBP = (ESP);
  /* 116a0473 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0474 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a047b jmp 0x116a0486 */
  goto L_116a0486;
L_116a047d:;
  /* 116a047d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0480 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0483 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a0486:;
  /* 116a0486 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a048a jae 0x116a049f */
  if (!C.cf) goto L_116a049f;
  /* 116a048c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a048f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a0492 cmp edx, dword ptr [ecx*8 + 0x116ce1d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x116ce1d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0499 jne 0x116a049d */
  if (!C.zf) goto L_116a049d;
  /* 116a049b jmp 0x116a049f */
  goto L_116a049f;
L_116a049d:;
  /* 116a049d jmp 0x116a047d */
  goto L_116a047d;
L_116a049f:;
  /* 116a049f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a04a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a04a5 cmp ecx, dword ptr [eax*8 + 0x116ce1d0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x116ce1d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a04ac jne 0x116a04ba */
  if (!C.zf) goto L_116a04ba;
  /* 116a04ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a04b1 mov eax, dword ptr [edx*8 + 0x116ce1d4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x116ce1d4)));
  /* 116a04b8 jmp 0x116a04bc */
  goto L_116a04bc;
L_116a04ba:;
  /* 116a04ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a04bc:;
  /* 116a04bc mov esp, ebp */
  ESP = (EBP);
  /* 116a04be pop ebp */
  EBP = (pop32());
  /* 116a04bf ret  */
  ESPCHK(0x116a0470u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x116a04c0 (66 bytes, 28 insns) */
void f_116a04c0(void) {
  FTRACE(0x116a04c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a04c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a04c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a04c3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a04c7 jne 0x116a04e7 */
  if (!C.zf) goto L_116a04e7;
  /* 116a04c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a04cd jge 0x116a04e7 */
  if ((C.sf==C.of)) goto L_116a04e7;
  /* 116a04cf push 1 */
  push32((uint32_t)(0x1u));
  /* 116a04d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a04d4 push eax */
  push32((uint32_t)(EAX));
  /* 116a04d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a04d8 push ecx */
  push32((uint32_t)(ECX));
  /* 116a04d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a04dc push edx */
  push32((uint32_t)(EDX));
  /* 116a04dd call 0x116a0510 */
  push32(0x116a04e2u); f_116a0510();
  /* 116a04e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a04e5 jmp 0x116a04fd */
  goto L_116a04fd;
L_116a04e7:;
  /* 116a04e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a04e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a04ec push eax */
  push32((uint32_t)(EAX));
  /* 116a04ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a04f0 push ecx */
  push32((uint32_t)(ECX));
  /* 116a04f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a04f4 push edx */
  push32((uint32_t)(EDX));
  /* 116a04f5 call 0x116a0510 */
  push32(0x116a04fau); f_116a0510();
  /* 116a04fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a04fd:;
  /* 116a04fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0500 pop ebp */
  EBP = (pop32());
  /* 116a0501 ret  */
  ESPCHK(0x116a04c0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x116a0510 (194 bytes, 71 insns) */
void f_116a0510(void) {
  FTRACE(0x116a0510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0510 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0511 mov ebp, esp */
  EBP = (ESP);
  /* 116a0513 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0516 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0519 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a051c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0520 je 0x116a0539 */
  if (C.zf) goto L_116a0539;
  /* 116a0522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0525 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 116a0528 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a052b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a052e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a0531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a0534 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a0536 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116a0539:;
  /* 116a0539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a053c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_116a053f:;
  /* 116a053f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a0542 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a0544 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116a0547 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a054a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a054d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a054f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116a0552 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116a0555 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0559 jbe 0x116a0571 */
  if ((C.cf||C.zf)) goto L_116a0571;
  /* 116a055b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a055e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0564 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116a0566 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0569 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a056c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a056f jmp 0x116a0585 */
  goto L_116a0585;
L_116a0571:;
  /* 116a0571 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0574 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0577 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a057a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116a057c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a057f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0582 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a0585:;
  /* 116a0585 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0589 ja 0x116a053f */
  if ((!C.cf&&!C.zf)) goto L_116a053f;
  /* 116a058b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a058e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116a0591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0594 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0597 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a059a:;
  /* 116a059a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a059d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a059f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 116a05a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a05a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a05a8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a05aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116a05ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a05af mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 116a05b2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116a05b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a05b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a05ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a05bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a05c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a05c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a05c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a05c9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a05cc jb 0x116a059a */
  if (C.cf) goto L_116a059a;
  /* 116a05ce mov esp, ebp */
  ESP = (EBP);
  /* 116a05d0 pop ebp */
  EBP = (pop32());
  /* 116a05d1 ret  */
  ESPCHK(0x116a0510u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x116a05e0 (63 bytes, 24 insns) */
void f_116a05e0(void) {
  FTRACE(0x116a05e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a05e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a05e1 mov ebp, esp */
  EBP = (ESP);
  /* 116a05e3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a05e4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a05e8 jne 0x116a05f9 */
  if (!C.zf) goto L_116a05f9;
  /* 116a05ea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a05ee jge 0x116a05f9 */
  if ((C.sf==C.of)) goto L_116a05f9;
  /* 116a05f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a05f7 jmp 0x116a0600 */
  goto L_116a0600;
L_116a05f9:;
  /* 116a05f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116a0600:;
  /* 116a0600 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0603 push eax */
  push32((uint32_t)(EAX));
  /* 116a0604 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a0607 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0608 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a060b push edx */
  push32((uint32_t)(EDX));
  /* 116a060c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a060f push eax */
  push32((uint32_t)(EAX));
  /* 116a0610 call 0x116a0510 */
  push32(0x116a0615u); f_116a0510();
  /* 116a0615 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0618 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a061b mov esp, ebp */
  ESP = (EBP);
  /* 116a061d pop ebp */
  EBP = (pop32());
  /* 116a061e ret  */
  ESPCHK(0x116a05e0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x116a0620 (30 bytes, 14 insns) */
void f_116a0620(void) {
  FTRACE(0x116a0620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0620 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0621 mov ebp, esp */
  EBP = (ESP);
  /* 116a0623 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0625 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a0628 push eax */
  push32((uint32_t)(EAX));
  /* 116a0629 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a062c push ecx */
  push32((uint32_t)(ECX));
  /* 116a062d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a0630 push edx */
  push32((uint32_t)(EDX));
  /* 116a0631 call 0x116a0510 */
  push32(0x116a0636u); f_116a0510();
  /* 116a0636 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0639 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a063c pop ebp */
  EBP = (pop32());
  /* 116a063d ret  */
  ESPCHK(0x116a0620u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x116a0640 (72 bytes, 28 insns) */
void f_116a0640(void) {
  FTRACE(0x116a0640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0640 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0641 mov ebp, esp */
  EBP = (ESP);
  /* 116a0643 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0644 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0648 jne 0x116a0661 */
  if (!C.zf) goto L_116a0661;
  /* 116a064a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a064e jg 0x116a0661 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a0661;
  /* 116a0650 jl 0x116a0658 */
  if ((C.sf!=C.of)) goto L_116a0658;
  /* 116a0652 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0656 jae 0x116a0661 */
  if (!C.cf) goto L_116a0661;
L_116a0658:;
  /* 116a0658 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a065f jmp 0x116a0668 */
  goto L_116a0668;
L_116a0661:;
  /* 116a0661 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116a0668:;
  /* 116a0668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a066b push eax */
  push32((uint32_t)(EAX));
  /* 116a066c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a066f push ecx */
  push32((uint32_t)(ECX));
  /* 116a0670 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a0673 push edx */
  push32((uint32_t)(EDX));
  /* 116a0674 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0677 push eax */
  push32((uint32_t)(EAX));
  /* 116a0678 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a067b push ecx */
  push32((uint32_t)(ECX));
  /* 116a067c call 0x116a0690 */
  push32(0x116a0681u); f_116a0690();
  /* 116a0681 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a0684 mov esp, ebp */
  ESP = (EBP);
  /* 116a0686 pop ebp */
  EBP = (pop32());
  /* 116a0687 ret  */
  ESPCHK(0x116a0640u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x116a0690 (242 bytes, 91 insns) */
void f_116a0690(void) {
  FTRACE(0x116a0690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0690 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0691 mov ebp, esp */
  EBP = (ESP);
  /* 116a0693 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0696 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a0699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a069c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a06a0 je 0x116a06c4 */
  if (C.zf) goto L_116a06c4;
  /* 116a06a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a06a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 116a06a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a06ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a06ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a06b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a06b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a06b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a06b9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a06bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a06be mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116a06c1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_116a06c4:;
  /* 116a06c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a06c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116a06ca:;
  /* 116a06ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a06cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a06cf push ecx */
  push32((uint32_t)(ECX));
  /* 116a06d0 push eax */
  push32((uint32_t)(EAX));
  /* 116a06d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a06d4 push edx */
  push32((uint32_t)(EDX));
  /* 116a06d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a06d8 push eax */
  push32((uint32_t)(EAX));
  /* 116a06d9 call 0x116a6580 */
  push32(0x116a06deu); f_116a6580();
  /* 116a06de mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a06e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a06e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a06e6 push edx */
  push32((uint32_t)(EDX));
  /* 116a06e7 push ecx */
  push32((uint32_t)(ECX));
  /* 116a06e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a06eb push eax */
  push32((uint32_t)(EAX));
  /* 116a06ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a06ef push ecx */
  push32((uint32_t)(ECX));
  /* 116a06f0 call 0x116a6510 */
  push32(0x116a06f5u); f_116a6510();
  /* 116a06f5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116a06f8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 116a06fb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a06ff jbe 0x116a0717 */
  if ((C.cf||C.zf)) goto L_116a0717;
  /* 116a0701 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0704 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a070a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116a070c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a070f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0712 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a0715 jmp 0x116a072b */
  goto L_116a072b;
L_116a0717:;
  /* 116a0717 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a071a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a071d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0720 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116a0722 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0725 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0728 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a072b:;
  /* 116a072b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a072f ja 0x116a06ca */
  if ((!C.cf&&!C.zf)) goto L_116a06ca;
  /* 116a0731 jb 0x116a0739 */
  if (C.cf) goto L_116a0739;
  /* 116a0733 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0737 ja 0x116a06ca */
  if ((!C.cf&&!C.zf)) goto L_116a06ca;
L_116a0739:;
  /* 116a0739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a073c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116a073f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0742 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0745 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a0748:;
  /* 116a0748 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a074b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a074d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 116a0750 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0753 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0756 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a0758 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 116a075a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a075d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 116a0760 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 116a0762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0765 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0768 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a076b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a076e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0771 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a0774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0777 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a077a jb 0x116a0748 */
  if (C.cf) goto L_116a0748;
  /* 116a077c mov esp, ebp */
  ESP = (EBP);
  /* 116a077e pop ebp */
  EBP = (pop32());
  /* 116a077f ret 0x14 */
  ESPCHK(0x116a0690u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x116a0790 (31 bytes, 15 insns) */
void f_116a0790(void) {
  FTRACE(0x116a0790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0790 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0791 mov ebp, esp */
  EBP = (ESP);
  /* 116a0793 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0795 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a0798 push eax */
  push32((uint32_t)(EAX));
  /* 116a0799 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a079c push ecx */
  push32((uint32_t)(ECX));
  /* 116a079d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a07a0 push edx */
  push32((uint32_t)(EDX));
  /* 116a07a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a07a4 push eax */
  push32((uint32_t)(EAX));
  /* 116a07a5 call 0x116a0690 */
  push32(0x116a07aau); f_116a0690();
  /* 116a07aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a07ad pop ebp */
  EBP = (pop32());
  /* 116a07ae ret  */
  ESPCHK(0x116a0790u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x116a07b0 (123 bytes, 44 insns) */
void f_116a07b0(void) {
  FTRACE(0x116a07b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a07b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116a07b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116a07ba je 0x116a07d0 */
  if (C.zf) goto L_116a07d0;
L_116a07bc:;
  /* 116a07bc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 116a07be inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116a07bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116a07c1 je 0x116a0803 */
  if (C.zf) goto L_116a0803;
  /* 116a07c3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116a07c9 jne 0x116a07bc */
  if (!C.zf) goto L_116a07bc;
  /* 116a07cb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_116a07d0:;
  /* 116a07d0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116a07d2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 116a07d7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a07d9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a07dc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a07de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a07e1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 116a07e6 je 0x116a07d0 */
  if (C.zf) goto L_116a07d0;
  /* 116a07e8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 116a07eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116a07ed je 0x116a0821 */
  if (C.zf) goto L_116a0821;
  /* 116a07ef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116a07f1 je 0x116a0817 */
  if (C.zf) goto L_116a0817;
  /* 116a07f3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 116a07f8 je 0x116a080d */
  if (C.zf) goto L_116a080d;
  /* 116a07fa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 116a07ff je 0x116a0803 */
  if (C.zf) goto L_116a0803;
  /* 116a0801 jmp 0x116a07d0 */
  goto L_116a07d0;
L_116a0803:;
  /* 116a0803 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 116a0806 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116a080a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a080c ret  */
  ESPCHK(0x116a07b0u, _esp0);
  ESP += 4; return;
L_116a080d:;
  /* 116a080d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 116a0810 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116a0814 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0816 ret  */
  ESPCHK(0x116a07b0u, _esp0);
  ESP += 4; return;
L_116a0817:;
  /* 116a0817 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 116a081a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116a081e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0820 ret  */
  ESPCHK(0x116a07b0u, _esp0);
  ESP += 4; return;
L_116a0821:;
  /* 116a0821 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 116a0824 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116a0828 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a082a ret  */
  ESPCHK(0x116a07b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010830 @ 0x116a0830 (249 bytes, 93 insns) */
void f_116a0830(void) {
  FTRACE(0x116a0830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0830 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0831 mov ebp, esp */
  EBP = (ESP);
  /* 116a0833 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0836 push ebx */
  push32((uint32_t)(EBX));
  /* 116a0837 push esi */
  push32((uint32_t)(ESI));
  /* 116a0838 push edi */
  push32((uint32_t)(EDI));
  /* 116a0839 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 116a083c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a083f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 116a0842 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_116a0845:;
  /* 116a0845 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0849 jne 0x116a0869 */
  if (!C.zf) goto L_116a0869;
  /* 116a084b push 0x116cb700 */
  push32((uint32_t)(0x116cb700u));
  /* 116a0850 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0852 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 116a0854 push 0x116cb6f4 */
  push32((uint32_t)(0x116cb6f4u));
  /* 116a0859 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a085b call 0x1169ade0 */
  push32(0x116a0860u); f_1169ade0();
  /* 116a0860 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0863 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0866 jne 0x116a0869 */
  if (!C.zf) goto L_116a0869;
  /* 116a0868 int3  */
  x86_unimpl("int3 @ 0x116a0868");
L_116a0869:;
  /* 116a0869 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a086b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a086d jne 0x116a0845 */
  if (!C.zf) goto L_116a0845;
L_116a086f:;
  /* 116a086f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0873 jne 0x116a0893 */
  if (!C.zf) goto L_116a0893;
  /* 116a0875 push 0x116cb6e4 */
  push32((uint32_t)(0x116cb6e4u));
  /* 116a087a push 0 */
  push32((uint32_t)(0x0u));
  /* 116a087c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 116a087e push 0x116cb6f4 */
  push32((uint32_t)(0x116cb6f4u));
  /* 116a0883 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a0885 call 0x1169ade0 */
  push32(0x116a088au); f_1169ade0();
  /* 116a088a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a088d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0890 jne 0x116a0893 */
  if (!C.zf) goto L_116a0893;
  /* 116a0892 int3  */
  x86_unimpl("int3 @ 0x116a0892");
L_116a0893:;
  /* 116a0893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a0895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a0897 jne 0x116a086f */
  if (!C.zf) goto L_116a086f;
  /* 116a0899 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a089c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 116a08a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a08a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a08a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116a08ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a08af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a08b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a08b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a08b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a08ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116a08bd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a08c0 push edx */
  push32((uint32_t)(EDX));
  /* 116a08c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a08c4 push eax */
  push32((uint32_t)(EAX));
  /* 116a08c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a08c8 push ecx */
  push32((uint32_t)(ECX));
  /* 116a08c9 call 0x116a6880 */
  push32(0x116a08ceu); f_116a6880();
  /* 116a08ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a08d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a08d4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a08d7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a08da sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a08dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a08e0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116a08e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a08e6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a08ea jl 0x116a090e */
  if ((C.sf!=C.of)) goto L_116a090e;
  /* 116a08ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a08ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a08f1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 116a08f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a08f6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a08fc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 116a08ff mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a0902 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a0904 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0907 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a090a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116a090c jmp 0x116a091f */
  goto L_116a091f;
L_116a090e:;
  /* 116a090e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a0911 push eax */
  push32((uint32_t)(EAX));
  /* 116a0912 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0914 call 0x116a6600 */
  push32(0x116a0919u); f_116a6600();
  /* 116a0919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a091c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_116a091f:;
  /* 116a091f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a0922 pop edi */
  EDI = (pop32());
  /* 116a0923 pop esi */
  ESI = (pop32());
  /* 116a0924 pop ebx */
  EBX = (pop32());
  /* 116a0925 mov esp, ebp */
  ESP = (EBP);
  /* 116a0927 pop ebp */
  EBP = (pop32());
  /* 116a0928 ret  */
  ESPCHK(0x116a0830u, _esp0);
  ESP += 4; return;
}

/* FUN_10010930 @ 0x116a0930 (243 bytes, 91 insns) */
void f_116a0930(void) {
  FTRACE(0x116a0930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0930 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0931 mov ebp, esp */
  EBP = (ESP);
  /* 116a0933 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0936 push ebx */
  push32((uint32_t)(EBX));
  /* 116a0937 push esi */
  push32((uint32_t)(ESI));
  /* 116a0938 push edi */
  push32((uint32_t)(EDI));
  /* 116a0939 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 116a093c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_116a093f:;
  /* 116a093f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0943 jne 0x116a0963 */
  if (!C.zf) goto L_116a0963;
  /* 116a0945 push 0x116cb700 */
  push32((uint32_t)(0x116cb700u));
  /* 116a094a push 0 */
  push32((uint32_t)(0x0u));
  /* 116a094c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 116a094e push 0x116cb710 */
  push32((uint32_t)(0x116cb710u));
  /* 116a0953 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a0955 call 0x1169ade0 */
  push32(0x116a095au); f_1169ade0();
  /* 116a095a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a095d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0960 jne 0x116a0963 */
  if (!C.zf) goto L_116a0963;
  /* 116a0962 int3  */
  x86_unimpl("int3 @ 0x116a0962");
L_116a0963:;
  /* 116a0963 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a0965 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a0967 jne 0x116a093f */
  if (!C.zf) goto L_116a093f;
L_116a0969:;
  /* 116a0969 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a096d jne 0x116a098d */
  if (!C.zf) goto L_116a098d;
  /* 116a096f push 0x116cb6e4 */
  push32((uint32_t)(0x116cb6e4u));
  /* 116a0974 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0976 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 116a0978 push 0x116cb710 */
  push32((uint32_t)(0x116cb710u));
  /* 116a097d push 2 */
  push32((uint32_t)(0x2u));
  /* 116a097f call 0x1169ade0 */
  push32(0x116a0984u); f_1169ade0();
  /* 116a0984 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0987 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a098a jne 0x116a098d */
  if (!C.zf) goto L_116a098d;
  /* 116a098c int3  */
  x86_unimpl("int3 @ 0x116a098c");
L_116a098d:;
  /* 116a098d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a098f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a0991 jne 0x116a0969 */
  if (!C.zf) goto L_116a0969;
  /* 116a0993 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a0996 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 116a099d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a09a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a09a3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116a09a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a09a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a09ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116a09ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a09b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a09b4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116a09b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a09ba push ecx */
  push32((uint32_t)(ECX));
  /* 116a09bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a09be push edx */
  push32((uint32_t)(EDX));
  /* 116a09bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a09c2 push eax */
  push32((uint32_t)(EAX));
  /* 116a09c3 call 0x116a6880 */
  push32(0x116a09c8u); f_116a6880();
  /* 116a09c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a09cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a09ce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a09d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a09d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a09d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a09da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a09dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a09e0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a09e4 jl 0x116a0a08 */
  if ((C.sf!=C.of)) goto L_116a0a08;
  /* 116a09e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a09e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a09eb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116a09ee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a09f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a09f6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116a09f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a09fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a09fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0a01 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a0a04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a0a06 jmp 0x116a0a19 */
  goto L_116a0a19;
L_116a0a08:;
  /* 116a0a08 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a0a0b push edx */
  push32((uint32_t)(EDX));
  /* 116a0a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 116a0a0e call 0x116a6600 */
  push32(0x116a0a13u); f_116a6600();
  /* 116a0a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0a16 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_116a0a19:;
  /* 116a0a19 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a0a1c pop edi */
  EDI = (pop32());
  /* 116a0a1d pop esi */
  ESI = (pop32());
  /* 116a0a1e pop ebx */
  EBX = (pop32());
  /* 116a0a1f mov esp, ebp */
  ESP = (EBP);
  /* 116a0a21 pop ebp */
  EBP = (pop32());
  /* 116a0a22 ret  */
  ESPCHK(0x116a0930u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a30 @ 0x116a0a30 (47 bytes, 17 insns) */
void f_116a0a30(void) {
  FTRACE(0x116a0a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0a30 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0a31 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0a36 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 116a0a3a jb 0x116a0a50 */
  if (C.cf) goto L_116a0a50;
L_116a0a3c:;
  /* 116a0a3c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0a42 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0a47 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 116a0a49 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0a4e jae 0x116a0a3c */
  if (!C.cf) goto L_116a0a3c;
L_116a0a50:;
  /* 116a0a50 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0a52 mov eax, esp */
  EAX = (ESP);
  /* 116a0a54 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 116a0a56 mov esp, ecx */
  ESP = (ECX);
  /* 116a0a58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a0a5a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a0a5d push eax */
  push32((uint32_t)(EAX));
  /* 116a0a5e ret  */
  ESPCHK(0x116a0a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a60 @ 0x116a0a60 (507 bytes, 151 insns) [1 switch table(s)] */
void f_116a0a60(void) {
  FTRACE(0x116a0a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0a60 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0a61 mov ebp, esp */
  EBP = (ESP);
  /* 116a0a63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0a66 push esi */
  push32((uint32_t)(ESI));
  /* 116a0a67 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0a6b je 0x116a0a73 */
  if (C.zf) goto L_116a0a73;
  /* 116a0a6d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0a71 jne 0x116a0a78 */
  if (!C.zf) goto L_116a0a78;
L_116a0a73:;
  /* 116a0a73 jmp 0x116a0c48 */
  goto L_116a0c48;
L_116a0a78:;
  /* 116a0a78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0a7c je 0x116a0a94 */
  if (C.zf) goto L_116a0a94;
  /* 116a0a7e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0a82 je 0x116a0a94 */
  if (C.zf) goto L_116a0a94;
  /* 116a0a84 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0a88 je 0x116a0a94 */
  if (C.zf) goto L_116a0a94;
  /* 116a0a8a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0a8e jne 0x116a0b71 */
  if (!C.zf) goto L_116a0b71;
L_116a0a94:;
  /* 116a0a94 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0a96 call 0x1169c120 */
  push32(0x116a0a9bu); f_1169c120();
  /* 116a0a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0a9e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0aa2 je 0x116a0aaa */
  if (C.zf) goto L_116a0aaa;
  /* 116a0aa4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0aa8 jne 0x116a0aef */
  if (!C.zf) goto L_116a0aef;
L_116a0aaa:;
  /* 116a0aaa cmp dword ptr [0x116d0730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0ab1 jne 0x116a0aef */
  if (!C.zf) goto L_116a0aef;
  /* 116a0ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0ab5 push 0x116a0c90 */
  push32((uint32_t)(0x116a0c90u));
  /* 116a0aba call dword ptr [0x116d33a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33a8))), 0x116a0ac0u);
  /* 116a0ac0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0ac3 jne 0x116a0ad1 */
  if (!C.zf) goto L_116a0ad1;
  /* 116a0ac5 mov dword ptr [0x116d0730], 1 */
  w32((uint32_t)(0x116d0730), (0x1u));
  /* 116a0acf jmp 0x116a0aef */
  goto L_116a0aef;
L_116a0ad1:;
  /* 116a0ad1 call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x116a0ad7u);
  /* 116a0ad7 mov esi, eax */
  ESI = (EAX);
  /* 116a0ad9 call 0x116a77d0 */
  push32(0x116a0adeu); f_116a77d0();
  /* 116a0ade mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 116a0ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0ae2 call 0x1169c1c0 */
  push32(0x116a0ae7u); f_1169c1c0();
  /* 116a0ae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0aea jmp 0x116a0c48 */
  goto L_116a0c48;
L_116a0aef:;
  /* 116a0aef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a0af2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a0af5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a0af8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0afb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116a0afe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0b02 ja 0x116a0b62 */
  if ((!C.cf&&!C.zf)) goto L_116a0b62;
  /* 116a0b04 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a0b07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a0b09 mov dl, byte ptr [eax + 0x116a0c6f] */
  DL = (r8((uint32_t)(EAX + 0x116a0c6f)));
  /* 116a0b0f jmp dword ptr [edx*4 + 0x116a0c5b] */
  switch (EDX) {
    case 0: goto L_116a0b16;
    case 1: goto L_116a0b50;
    case 2: goto L_116a0b2a;
    case 3: goto L_116a0b3d;
    case 4: goto L_116a0b62;
    default: x86_unimpl("switch@0x116a0b0f out of table"); return;
  }
L_116a0b16:;
  /* 116a0b16 mov ecx, dword ptr [0x116d0720] */
  ECX = (r32((uint32_t)(0x116d0720)));
  /* 116a0b1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a0b1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0b22 mov dword ptr [0x116d0720], edx */
  w32((uint32_t)(0x116d0720), (EDX));
  /* 116a0b28 jmp 0x116a0b62 */
  goto L_116a0b62;
L_116a0b2a:;
  /* 116a0b2a mov eax, dword ptr [0x116d0724] */
  EAX = (r32((uint32_t)(0x116d0724)));
  /* 116a0b2f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a0b32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0b35 mov dword ptr [0x116d0724], ecx */
  w32((uint32_t)(0x116d0724), (ECX));
  /* 116a0b3b jmp 0x116a0b62 */
  goto L_116a0b62;
L_116a0b3d:;
  /* 116a0b3d mov edx, dword ptr [0x116d0728] */
  EDX = (r32((uint32_t)(0x116d0728)));
  /* 116a0b43 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a0b46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0b49 mov dword ptr [0x116d0728], eax */
  w32((uint32_t)(0x116d0728), (EAX));
  /* 116a0b4e jmp 0x116a0b62 */
  goto L_116a0b62;
L_116a0b50:;
  /* 116a0b50 mov ecx, dword ptr [0x116d072c] */
  ECX = (r32((uint32_t)(0x116d072c)));
  /* 116a0b56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a0b59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0b5c mov dword ptr [0x116d072c], edx */
  w32((uint32_t)(0x116d072c), (EDX));
L_116a0b62:;
  /* 116a0b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0b64 call 0x1169c1c0 */
  push32(0x116a0b69u); f_1169c1c0();
  /* 116a0b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0b6c jmp 0x116a0c43 */
  goto L_116a0c43;
L_116a0b71:;
  /* 116a0b71 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0b75 je 0x116a0b88 */
  if (C.zf) goto L_116a0b88;
  /* 116a0b77 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0b7b je 0x116a0b88 */
  if (C.zf) goto L_116a0b88;
  /* 116a0b7d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0b81 je 0x116a0b88 */
  if (C.zf) goto L_116a0b88;
  /* 116a0b83 jmp 0x116a0c48 */
  goto L_116a0c48;
L_116a0b88:;
  /* 116a0b88 call 0x1169ef20 */
  push32(0x116a0b8du); f_1169ef20();
  /* 116a0b8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a0b90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0b93 cmp dword ptr [eax + 0x50], 0x116ce4c0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x116ce4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0b9a jne 0x116a0be5 */
  if (!C.zf) goto L_116a0be5;
  /* 116a0b9c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 116a0ba1 push 0x116cb71c */
  push32((uint32_t)(0x116cb71cu));
  /* 116a0ba6 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a0ba8 mov ecx, dword ptr [0x116ce540] */
  ECX = (r32((uint32_t)(0x116ce540)));
  /* 116a0bae push ecx */
  push32((uint32_t)(ECX));
  /* 116a0baf call 0x1169c220 */
  push32(0x116a0bb4u); f_1169c220();
  /* 116a0bb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0bb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0bba mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 116a0bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0bc0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0bc4 je 0x116a0be3 */
  if (C.zf) goto L_116a0be3;
  /* 116a0bc6 mov ecx, dword ptr [0x116ce540] */
  ECX = (r32((uint32_t)(0x116ce540)));
  /* 116a0bcc push ecx */
  push32((uint32_t)(ECX));
  /* 116a0bcd push 0x116ce4c0 */
  push32((uint32_t)(0x116ce4c0u));
  /* 116a0bd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0bd5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 116a0bd8 push eax */
  push32((uint32_t)(EAX));
  /* 116a0bd9 call 0x116a61d0 */
  push32(0x116a0bdeu); f_116a61d0();
  /* 116a0bde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0be1 jmp 0x116a0be5 */
  goto L_116a0be5;
L_116a0be3:;
  /* 116a0be3 jmp 0x116a0c48 */
  goto L_116a0c48;
L_116a0be5:;
  /* 116a0be5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0be8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116a0beb push edx */
  push32((uint32_t)(EDX));
  /* 116a0bec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a0bef push eax */
  push32((uint32_t)(EAX));
  /* 116a0bf0 call 0x116a0f70 */
  push32(0x116a0bf5u); f_116a0f70();
  /* 116a0bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0bf8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a0bfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0bff jne 0x116a0c03 */
  if (!C.zf) goto L_116a0c03;
  /* 116a0c01 jmp 0x116a0c48 */
  goto L_116a0c48;
L_116a0c03:;
  /* 116a0c03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0c06 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a0c09 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116a0c0c:;
  /* 116a0c0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0c0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a0c12 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0c15 jne 0x116a0c43 */
  if (!C.zf) goto L_116a0c43;
  /* 116a0c17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0c1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0c1d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116a0c20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0c23 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0c26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a0c29 mov edx, dword ptr [0x116ce544] */
  EDX = (r32((uint32_t)(0x116ce544)));
  /* 116a0c2f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a0c32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0c35 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 116a0c38 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0c3a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0c3d jb 0x116a0c41 */
  if (C.cf) goto L_116a0c41;
  /* 116a0c3f jmp 0x116a0c43 */
  goto L_116a0c43;
L_116a0c41:;
  /* 116a0c41 jmp 0x116a0c0c */
  goto L_116a0c0c;
L_116a0c43:;
  /* 116a0c43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0c46 jmp 0x116a0c56 */
  goto L_116a0c56;
L_116a0c48:;
  /* 116a0c48 call 0x116a77c0 */
  push32(0x116a0c4du); f_116a77c0();
  /* 116a0c4d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 116a0c53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_116a0c56:;
  /* 116a0c56 pop esi */
  ESI = (pop32());
  /* 116a0c57 mov esp, ebp */
  ESP = (EBP);
  /* 116a0c59 pop ebp */
  EBP = (pop32());
  /* 116a0c5a ret  */
  ESPCHK(0x116a0a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c90 @ 0x116a0c90 (146 bytes, 45 insns) */
void f_116a0c90(void) {
  FTRACE(0x116a0c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0c90 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0c91 mov ebp, esp */
  EBP = (ESP);
  /* 116a0c93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0c96 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0c98 call 0x1169c120 */
  push32(0x116a0c9du); f_1169c120();
  /* 116a0c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0ca0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0ca4 jne 0x116a0cbe */
  if (!C.zf) goto L_116a0cbe;
  /* 116a0ca6 mov dword ptr [ebp - 8], 0x116d0720 */
  w32((uint32_t)(EBP + -0x8), (0x116d0720u));
  /* 116a0cad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0cb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a0cb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a0cb5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116a0cbc jmp 0x116a0cd4 */
  goto L_116a0cd4;
L_116a0cbe:;
  /* 116a0cbe mov dword ptr [ebp - 8], 0x116d0724 */
  w32((uint32_t)(EBP + -0x8), (0x116d0724u));
  /* 116a0cc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0cc8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a0cca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a0ccd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_116a0cd4:;
  /* 116a0cd4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0cd8 jne 0x116a0ce8 */
  if (!C.zf) goto L_116a0ce8;
  /* 116a0cda push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0cdc call 0x1169c1c0 */
  push32(0x116a0ce1u); f_1169c1c0();
  /* 116a0ce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0ce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a0ce6 jmp 0x116a0d1c */
  goto L_116a0d1c;
L_116a0ce8:;
  /* 116a0ce8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0cec je 0x116a0d0d */
  if (C.zf) goto L_116a0d0d;
  /* 116a0cee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0cf1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 116a0cf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0cf9 call 0x1169c1c0 */
  push32(0x116a0cfeu); f_1169c1c0();
  /* 116a0cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0d01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0d04 push edx */
  push32((uint32_t)(EDX));
  /* 116a0d05 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x116a0d08u);
  /* 116a0d08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0d0b jmp 0x116a0d17 */
  goto L_116a0d17;
L_116a0d0d:;
  /* 116a0d0d push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0d0f call 0x1169c1c0 */
  push32(0x116a0d14u); f_1169c1c0();
  /* 116a0d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a0d17:;
  /* 116a0d17 mov eax, 1 */
  EAX = (0x1u);
L_116a0d1c:;
  /* 116a0d1c mov esp, ebp */
  ESP = (EBP);
  /* 116a0d1e pop ebp */
  EBP = (pop32());
  /* 116a0d1f ret 4 */
  ESPCHK(0x116a0c90u, _esp0);
  ESP += 8; return;
}

/* FUN_10010d30 @ 0x116a0d30 (522 bytes, 162 insns) [1 switch table(s)] */
void f_116a0d30(void) {
  FTRACE(0x116a0d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0d30 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0d31 mov ebp, esp */
  EBP = (ESP);
  /* 116a0d33 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0d36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a0d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a0d40 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a0d43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a0d46 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0d49 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116a0d4c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0d50 ja 0x116a0dfe */
  if ((!C.cf&&!C.zf)) goto L_116a0dfe;
  /* 116a0d56 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a0d59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a0d5b mov dl, byte ptr [eax + 0x116a0f52] */
  DL = (r8((uint32_t)(EAX + 0x116a0f52)));
  /* 116a0d61 jmp dword ptr [edx*4 + 0x116a0f3a] */
  switch (EDX) {
    case 0: goto L_116a0d68;
    case 1: goto L_116a0dd3;
    case 2: goto L_116a0db9;
    case 3: goto L_116a0d85;
    case 4: goto L_116a0d9f;
    case 5: goto L_116a0dfe;
    default: x86_unimpl("switch@0x116a0d61 out of table"); return;
  }
L_116a0d68:;
  /* 116a0d68 mov dword ptr [ebp - 0x18], 0x116d0720 */
  w32((uint32_t)(EBP + -0x18), (0x116d0720u));
  /* 116a0d6f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0d72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a0d74 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a0d77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0d7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0d7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a0d80 jmp 0x116a0e06 */
  goto L_116a0e06;
L_116a0d85:;
  /* 116a0d85 mov dword ptr [ebp - 0x18], 0x116d0724 */
  w32((uint32_t)(EBP + -0x18), (0x116d0724u));
  /* 116a0d8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0d8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a0d91 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a0d94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0d97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0d9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a0d9d jmp 0x116a0e06 */
  goto L_116a0e06;
L_116a0d9f:;
  /* 116a0d9f mov dword ptr [ebp - 0x18], 0x116d0728 */
  w32((uint32_t)(EBP + -0x18), (0x116d0728u));
  /* 116a0da6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0da9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a0dab mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a0dae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0db1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0db4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a0db7 jmp 0x116a0e06 */
  goto L_116a0e06;
L_116a0db9:;
  /* 116a0db9 mov dword ptr [ebp - 0x18], 0x116d072c */
  w32((uint32_t)(EBP + -0x18), (0x116d072cu));
  /* 116a0dc0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0dc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a0dc5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a0dc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a0dcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0dce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a0dd1 jmp 0x116a0e06 */
  goto L_116a0e06;
L_116a0dd3:;
  /* 116a0dd3 call 0x1169ef20 */
  push32(0x116a0dd8u); f_1169ef20();
  /* 116a0dd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a0ddb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0dde mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116a0de1 push edx */
  push32((uint32_t)(EDX));
  /* 116a0de2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a0de5 push eax */
  push32((uint32_t)(EAX));
  /* 116a0de6 call 0x116a0f70 */
  push32(0x116a0debu); f_116a0f70();
  /* 116a0deb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0dee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0df1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a0df4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0df7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a0df9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a0dfc jmp 0x116a0e06 */
  goto L_116a0e06;
L_116a0dfe:;
  /* 116a0dfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a0e01 jmp 0x116a0f36 */
  goto L_116a0f36;
L_116a0e06:;
  /* 116a0e06 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e0a je 0x116a0e16 */
  if (C.zf) goto L_116a0e16;
  /* 116a0e0c push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0e0e call 0x1169c120 */
  push32(0x116a0e13u); f_1169c120();
  /* 116a0e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a0e16:;
  /* 116a0e16 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e1a jne 0x116a0e33 */
  if (!C.zf) goto L_116a0e33;
  /* 116a0e1c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e20 je 0x116a0e2c */
  if (C.zf) goto L_116a0e2c;
  /* 116a0e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0e24 call 0x1169c1c0 */
  push32(0x116a0e29u); f_1169c1c0();
  /* 116a0e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a0e2c:;
  /* 116a0e2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a0e2e jmp 0x116a0f36 */
  goto L_116a0f36;
L_116a0e33:;
  /* 116a0e33 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e37 jne 0x116a0e50 */
  if (!C.zf) goto L_116a0e50;
  /* 116a0e39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e3d je 0x116a0e49 */
  if (C.zf) goto L_116a0e49;
  /* 116a0e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0e41 call 0x1169c1c0 */
  push32(0x116a0e46u); f_1169c1c0();
  /* 116a0e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a0e49:;
  /* 116a0e49 push 3 */
  push32((uint32_t)(0x3u));
  /* 116a0e4b call 0x1169f290 */
  push32(0x116a0e50u); f_1169f290();
L_116a0e50:;
  /* 116a0e50 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e54 je 0x116a0e62 */
  if (C.zf) goto L_116a0e62;
  /* 116a0e56 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e5a je 0x116a0e62 */
  if (C.zf) goto L_116a0e62;
  /* 116a0e5c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e60 jne 0x116a0e8e */
  if (!C.zf) goto L_116a0e8e;
L_116a0e62:;
  /* 116a0e62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0e65 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 116a0e68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116a0e6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0e6e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 116a0e75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e79 jne 0x116a0e8e */
  if (!C.zf) goto L_116a0e8e;
  /* 116a0e7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0e7e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 116a0e81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a0e84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0e87 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_116a0e8e:;
  /* 116a0e8e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0e92 jne 0x116a0ed0 */
  if (!C.zf) goto L_116a0ed0;
  /* 116a0e94 mov eax, dword ptr [0x116ce538] */
  EAX = (r32((uint32_t)(0x116ce538)));
  /* 116a0e99 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a0e9c jmp 0x116a0ea7 */
  goto L_116a0ea7;
L_116a0e9e:;
  /* 116a0e9e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a0ea1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0ea4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116a0ea7:;
  /* 116a0ea7 mov edx, dword ptr [0x116ce538] */
  EDX = (r32((uint32_t)(0x116ce538)));
  /* 116a0ead add edx, dword ptr [0x116ce53c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116ce53c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0eb3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0eb6 jge 0x116a0ece */
  if ((C.sf==C.of)) goto L_116a0ece;
  /* 116a0eb8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a0ebb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a0ebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0ec1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 116a0ec4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 116a0ecc jmp 0x116a0e9e */
  goto L_116a0e9e;
L_116a0ece:;
  /* 116a0ece jmp 0x116a0ed9 */
  goto L_116a0ed9;
L_116a0ed0:;
  /* 116a0ed0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a0ed3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_116a0ed9:;
  /* 116a0ed9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0edd je 0x116a0ee9 */
  if (C.zf) goto L_116a0ee9;
  /* 116a0edf push 1 */
  push32((uint32_t)(0x1u));
  /* 116a0ee1 call 0x1169c1c0 */
  push32(0x116a0ee6u); f_1169c1c0();
  /* 116a0ee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a0ee9:;
  /* 116a0ee9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0eed jne 0x116a0f00 */
  if (!C.zf) goto L_116a0f00;
  /* 116a0eef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0ef2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 116a0ef5 push edx */
  push32((uint32_t)(EDX));
  /* 116a0ef6 push 8 */
  push32((uint32_t)(0x8u));
  /* 116a0ef8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x116a0efbu);
  /* 116a0efb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0efe jmp 0x116a0f0a */
  goto L_116a0f0a;
L_116a0f00:;
  /* 116a0f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a0f03 push eax */
  push32((uint32_t)(EAX));
  /* 116a0f04 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x116a0f07u);
  /* 116a0f07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a0f0a:;
  /* 116a0f0a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0f0e je 0x116a0f1c */
  if (C.zf) goto L_116a0f1c;
  /* 116a0f10 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0f14 je 0x116a0f1c */
  if (C.zf) goto L_116a0f1c;
  /* 116a0f16 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0f1a jne 0x116a0f34 */
  if (!C.zf) goto L_116a0f34;
L_116a0f1c:;
  /* 116a0f1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0f1f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a0f22 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 116a0f25 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0f29 jne 0x116a0f34 */
  if (!C.zf) goto L_116a0f34;
  /* 116a0f2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a0f31 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_116a0f34:;
  /* 116a0f34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a0f36:;
  /* 116a0f36 mov esp, ebp */
  ESP = (EBP);
  /* 116a0f38 pop ebp */
  EBP = (pop32());
  /* 116a0f39 ret  */
  ESPCHK(0x116a0d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f70 @ 0x116a0f70 (91 bytes, 35 insns) */
void f_116a0f70(void) {
  FTRACE(0x116a0f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0f70 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0f71 mov ebp, esp */
  EBP = (ESP);
  /* 116a0f73 push ecx */
  push32((uint32_t)(ECX));
  /* 116a0f74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0f77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a0f7a:;
  /* 116a0f7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0f7d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a0f80 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0f83 je 0x116a0fa3 */
  if (C.zf) goto L_116a0fa3;
  /* 116a0f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0f88 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0f8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a0f8e mov ecx, dword ptr [0x116ce544] */
  ECX = (r32((uint32_t)(0x116ce544)));
  /* 116a0f94 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a0f97 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0f9a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0f9c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0f9f jae 0x116a0fa3 */
  if (!C.cf) goto L_116a0fa3;
  /* 116a0fa1 jmp 0x116a0f7a */
  goto L_116a0f7a;
L_116a0fa3:;
  /* 116a0fa3 mov eax, dword ptr [0x116ce544] */
  EAX = (r32((uint32_t)(0x116ce544)));
  /* 116a0fa8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a0fab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a0fae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0fb0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0fb3 jae 0x116a0fc5 */
  if (!C.cf) goto L_116a0fc5;
  /* 116a0fb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0fb8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a0fbb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a0fbe jne 0x116a0fc5 */
  if (!C.zf) goto L_116a0fc5;
  /* 116a0fc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a0fc3 jmp 0x116a0fc7 */
  goto L_116a0fc7;
L_116a0fc5:;
  /* 116a0fc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a0fc7:;
  /* 116a0fc7 mov esp, ebp */
  ESP = (EBP);
  /* 116a0fc9 pop ebp */
  EBP = (pop32());
  /* 116a0fca ret  */
  ESPCHK(0x116a0f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fd0 @ 0x116a0fd0 (13 bytes, 6 insns) */
void f_116a0fd0(void) {
  FTRACE(0x116a0fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0fd1 mov ebp, esp */
  EBP = (ESP);
  /* 116a0fd3 call 0x1169ef20 */
  push32(0x116a0fd8u); f_1169ef20();
  /* 116a0fd8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0fdb pop ebp */
  EBP = (pop32());
  /* 116a0fdc ret  */
  ESPCHK(0x116a0fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x116a0fe0 (13 bytes, 6 insns) */
void f_116a0fe0(void) {
  FTRACE(0x116a0fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0fe1 mov ebp, esp */
  EBP = (ESP);
  /* 116a0fe3 call 0x1169ef20 */
  push32(0x116a0fe8u); f_1169ef20();
  /* 116a0fe8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a0feb pop ebp */
  EBP = (pop32());
  /* 116a0fec ret  */
  ESPCHK(0x116a0fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ff0 @ 0x116a0ff0 (187 bytes, 54 insns) */
void f_116a0ff0(void) {
  FTRACE(0x116a0ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a0ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a0ff1 mov ebp, esp */
  EBP = (ESP);
  /* 116a0ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a0ff6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a0ffd cmp dword ptr [0x116d0734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1004 jne 0x116a1063 */
  if (!C.zf) goto L_116a1063;
  /* 116a1006 push 0x116caa68 */
  push32((uint32_t)(0x116caa68u));
  /* 116a100b call dword ptr [0x116d3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3448))), 0x116a1011u);
  /* 116a1011 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a1014 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1018 je 0x116a1037 */
  if (C.zf) goto L_116a1037;
  /* 116a101a push 0x116cb74c */
  push32((uint32_t)(0x116cb74cu));
  /* 116a101f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1022 push eax */
  push32((uint32_t)(EAX));
  /* 116a1023 call dword ptr [0x116d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3444))), 0x116a1029u);
  /* 116a1029 mov dword ptr [0x116d0734], eax */
  w32((uint32_t)(0x116d0734), (EAX));
  /* 116a102e cmp dword ptr [0x116d0734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1035 jne 0x116a103b */
  if (!C.zf) goto L_116a103b;
L_116a1037:;
  /* 116a1037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1039 jmp 0x116a10a7 */
  goto L_116a10a7;
L_116a103b:;
  /* 116a103b push 0x116cb73c */
  push32((uint32_t)(0x116cb73cu));
  /* 116a1040 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1043 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1044 call dword ptr [0x116d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3444))), 0x116a104au);
  /* 116a104a mov dword ptr [0x116d0738], eax */
  w32((uint32_t)(0x116d0738), (EAX));
  /* 116a104f push 0x116cb728 */
  push32((uint32_t)(0x116cb728u));
  /* 116a1054 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1057 push edx */
  push32((uint32_t)(EDX));
  /* 116a1058 call dword ptr [0x116d3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3444))), 0x116a105eu);
  /* 116a105e mov dword ptr [0x116d073c], eax */
  w32((uint32_t)(0x116d073c), (EAX));
L_116a1063:;
  /* 116a1063 cmp dword ptr [0x116d0738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a106a je 0x116a1075 */
  if (C.zf) goto L_116a1075;
  /* 116a106c call dword ptr [0x116d0738] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d0738))), 0x116a1072u);
  /* 116a1072 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a1075:;
  /* 116a1075 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1079 je 0x116a1091 */
  if (C.zf) goto L_116a1091;
  /* 116a107b cmp dword ptr [0x116d073c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d073c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1082 je 0x116a1091 */
  if (C.zf) goto L_116a1091;
  /* 116a1084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1087 push eax */
  push32((uint32_t)(EAX));
  /* 116a1088 call dword ptr [0x116d073c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d073c))), 0x116a108eu);
  /* 116a108e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a1091:;
  /* 116a1091 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1094 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1095 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1098 push edx */
  push32((uint32_t)(EDX));
  /* 116a1099 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a109c push eax */
  push32((uint32_t)(EAX));
  /* 116a109d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a10a0 push ecx */
  push32((uint32_t)(ECX));
  /* 116a10a1 call dword ptr [0x116d0734] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d0734))), 0x116a10a7u);
L_116a10a7:;
  /* 116a10a7 mov esp, ebp */
  ESP = (EBP);
  /* 116a10a9 pop ebp */
  EBP = (pop32());
  /* 116a10aa ret  */
  ESPCHK(0x116a0ff0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x116a10b0 (254 bytes, 109 insns) */
void f_116a10b0(void) {
  FTRACE(0x116a10b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a10b0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 116a10b4 push edi */
  push32((uint32_t)(EDI));
  /* 116a10b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a10b7 je 0x116a1133 */
  if (C.zf) goto L_116a1133;
  /* 116a10b9 push esi */
  push32((uint32_t)(ESI));
  /* 116a10ba push ebx */
  push32((uint32_t)(EBX));
  /* 116a10bb mov ebx, ecx */
  EBX = (ECX);
  /* 116a10bd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 116a10c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 116a10c7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 116a10cb jne 0x116a10d4 */
  if (!C.zf) goto L_116a10d4;
  /* 116a10cd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a10d0 jne 0x116a1141 */
  if (!C.zf) goto L_116a1141;
  /* 116a10d2 jmp 0x116a10f5 */
  goto L_116a10f5;
L_116a10d4:;
  /* 116a10d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a10d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116a10d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a10d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116a10da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116a10db je 0x116a1102 */
  if (C.zf) goto L_116a1102;
  /* 116a10dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116a10df je 0x116a110a */
  if (C.zf) goto L_116a110a;
  /* 116a10e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 116a10e7 jne 0x116a10d4 */
  if (!C.zf) goto L_116a10d4;
  /* 116a10e9 mov ebx, ecx */
  EBX = (ECX);
  /* 116a10eb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a10ee jne 0x116a1141 */
  if (!C.zf) goto L_116a1141;
L_116a10f0:;
  /* 116a10f0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 116a10f3 je 0x116a1102 */
  if (C.zf) goto L_116a1102;
L_116a10f5:;
  /* 116a10f5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a10f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116a10f8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a10fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116a10fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116a10fd je 0x116a112e */
  if (C.zf) goto L_116a112e;
  /* 116a10ff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 116a1100 jne 0x116a10f5 */
  if (!C.zf) goto L_116a10f5;
L_116a1102:;
  /* 116a1102 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 116a1106 pop ebx */
  EBX = (pop32());
  /* 116a1107 pop esi */
  ESI = (pop32());
  /* 116a1108 pop edi */
  EDI = (pop32());
  /* 116a1109 ret  */
  ESPCHK(0x116a10b0u, _esp0);
  ESP += 4; return;
L_116a110a:;
  /* 116a110a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116a1110 je 0x116a1124 */
  if (C.zf) goto L_116a1124;
L_116a1112:;
  /* 116a1112 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a1114 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116a1115 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116a1116 je 0x116a11a6 */
  if (C.zf) goto L_116a11a6;
  /* 116a111c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116a1122 jne 0x116a1112 */
  if (!C.zf) goto L_116a1112;
L_116a1124:;
  /* 116a1124 mov ebx, ecx */
  EBX = (ECX);
  /* 116a1126 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a1129 jne 0x116a1197 */
  if (!C.zf) goto L_116a1197;
L_116a112b:;
  /* 116a112b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a112d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_116a112e:;
  /* 116a112e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 116a112f jne 0x116a112b */
  if (!C.zf) goto L_116a112b;
  /* 116a1131 pop ebx */
  EBX = (pop32());
  /* 116a1132 pop esi */
  ESI = (pop32());
L_116a1133:;
  /* 116a1133 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116a1137 pop edi */
  EDI = (pop32());
  /* 116a1138 ret  */
  ESPCHK(0x116a10b0u, _esp0);
  ESP += 4; return;
L_116a1139:;
  /* 116a1139 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116a113b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a113e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116a113f je 0x116a10f0 */
  if (C.zf) goto L_116a10f0;
L_116a1141:;
  /* 116a1141 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 116a1146 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 116a1148 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a114a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a114d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a114f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 116a1151 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1154 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 116a1159 je 0x116a1139 */
  if (C.zf) goto L_116a1139;
  /* 116a115b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 116a115d je 0x116a118b */
  if (C.zf) goto L_116a118b;
  /* 116a115f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 116a1161 je 0x116a1181 */
  if (C.zf) goto L_116a1181;
  /* 116a1163 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 116a1169 je 0x116a1177 */
  if (C.zf) goto L_116a1177;
  /* 116a116b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 116a1171 jne 0x116a1139 */
  if (!C.zf) goto L_116a1139;
  /* 116a1173 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116a1175 jmp 0x116a118f */
  goto L_116a118f;
L_116a1177:;
  /* 116a1177 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a117d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116a117f jmp 0x116a118f */
  goto L_116a118f;
L_116a1181:;
  /* 116a1181 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1187 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 116a1189 jmp 0x116a118f */
  goto L_116a118f;
L_116a118b:;
  /* 116a118b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a118d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_116a118f:;
  /* 116a118f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1192 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1194 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116a1195 je 0x116a11a1 */
  if (C.zf) goto L_116a11a1;
L_116a1197:;
  /* 116a1197 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a1199:;
  /* 116a1199 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 116a119b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a119e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116a119f jne 0x116a1199 */
  if (!C.zf) goto L_116a1199;
L_116a11a1:;
  /* 116a11a1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 116a11a4 jne 0x116a112b */
  if (!C.zf) goto L_116a112b;
L_116a11a6:;
  /* 116a11a6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 116a11aa pop ebx */
  EBX = (pop32());
  /* 116a11ab pop esi */
  ESI = (pop32());
  /* 116a11ac pop edi */
  EDI = (pop32());
  /* 116a11ad ret  */
  ESPCHK(0x116a10b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111b0 @ 0x116a11b0 (348 bytes, 114 insns) [1 switch table(s)] */
void f_116a11b0(void) {
  FTRACE(0x116a11b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a11b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a11b1 mov ebp, esp */
  EBP = (ESP);
  /* 116a11b3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a11b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a11b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a11bb mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 116a11be mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116a11c1 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 116a11c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a11c7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a11ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a11cc mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 116a11cf mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116a11d2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a11d5 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 116a11d8 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a11dc ja 0x116a121e */
  if ((!C.cf&&!C.zf)) goto L_116a121e;
  /* 116a11de mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 116a11e1 jmp dword ptr [eax*4 + 0x116a130c] */
  switch (EAX) {
    case 0: goto L_116a11e8;
    case 1: goto L_116a1203;
    case 2: goto L_116a11f1;
    case 3: goto L_116a11fa;
    case 4: goto L_116a11e8;
    case 5: goto L_116a121e;
    case 6: goto L_116a1215;
    case 7: goto L_116a120c;
    default: x86_unimpl("switch@0x116a11e1 out of table"); return;
  }
L_116a11e8:;
  /* 116a11e8 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 116a11ef jmp 0x116a1225 */
  goto L_116a1225;
L_116a11f1:;
  /* 116a11f1 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 116a11f8 jmp 0x116a1225 */
  goto L_116a1225;
L_116a11fa:;
  /* 116a11fa mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 116a1201 jmp 0x116a1225 */
  goto L_116a1225;
L_116a1203:;
  /* 116a1203 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 116a120a jmp 0x116a1225 */
  goto L_116a1225;
L_116a120c:;
  /* 116a120c mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 116a1213 jmp 0x116a1225 */
  goto L_116a1225;
L_116a1215:;
  /* 116a1215 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1218 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_116a121e:;
  /* 116a121e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116a1225:;
  /* 116a1225 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1229 je 0x116a12ba */
  if (C.zf) goto L_116a12ba;
  /* 116a122f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1232 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a1234 push eax */
  push32((uint32_t)(EAX));
  /* 116a1235 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1238 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a123b push ecx */
  push32((uint32_t)(ECX));
  /* 116a123c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a123f push edx */
  push32((uint32_t)(EDX));
  /* 116a1240 call 0x116a7f10 */
  push32(0x116a1245u); f_116a7f10();
  /* 116a1245 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a124a jne 0x116a12ba */
  if (!C.zf) goto L_116a12ba;
  /* 116a124c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a124f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 116a1252 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1256 je 0x116a1266 */
  if (C.zf) goto L_116a1266;
  /* 116a1258 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a125c je 0x116a1266 */
  if (C.zf) goto L_116a1266;
  /* 116a125e cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1262 je 0x116a1266 */
  if (C.zf) goto L_116a1266;
  /* 116a1264 jmp 0x116a128c */
  goto L_116a128c;
L_116a1266:;
  /* 116a1266 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a1269 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a126c mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 116a126f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a1272 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1275 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1278 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 116a127b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a127e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a1281 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 116a1284 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 116a1287 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 116a128a jmp 0x116a1294 */
  goto L_116a1294;
L_116a128c:;
  /* 116a128c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a128f and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 116a1291 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_116a1294:;
  /* 116a1294 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1297 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a129a push ecx */
  push32((uint32_t)(ECX));
  /* 116a129b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a129e add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a12a1 push edx */
  push32((uint32_t)(EDX));
  /* 116a12a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a12a5 push eax */
  push32((uint32_t)(EAX));
  /* 116a12a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a12a9 push ecx */
  push32((uint32_t)(ECX));
  /* 116a12aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a12ad push edx */
  push32((uint32_t)(EDX));
  /* 116a12ae lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 116a12b1 push eax */
  push32((uint32_t)(EAX));
  /* 116a12b2 call 0x116a7a40 */
  push32(0x116a12b7u); f_116a7a40();
  /* 116a12b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a12ba:;
  /* 116a12ba push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 116a12bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a12c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a12c4 push edx */
  push32((uint32_t)(EDX));
  /* 116a12c5 call 0x116a8480 */
  push32(0x116a12cau); f_116a8480();
  /* 116a12ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a12cd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a12d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a12d7 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a12da je 0x116a12f4 */
  if (C.zf) goto L_116a12f4;
  /* 116a12dc cmp dword ptr [0x116ce9a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116ce9a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a12e3 jne 0x116a12f4 */
  if (!C.zf) goto L_116a12f4;
  /* 116a12e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a12e8 push ecx */
  push32((uint32_t)(ECX));
  /* 116a12e9 call 0x116a8430 */
  push32(0x116a12eeu); f_116a8430();
  /* 116a12ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a12f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116a12f4:;
  /* 116a12f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a12f8 jne 0x116a1308 */
  if (!C.zf) goto L_116a1308;
  /* 116a12fa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a12fd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a12ff push eax */
  push32((uint32_t)(EAX));
  /* 116a1300 call 0x116a8330 */
  push32(0x116a1305u); f_116a8330();
  /* 116a1305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a1308:;
  /* 116a1308 mov esp, ebp */
  ESP = (EBP);
  /* 116a130a pop ebp */
  EBP = (pop32());
  /* 116a130b ret  */
  ESPCHK(0x116a11b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011330 @ 0x116a1330 (31 bytes, 18 insns) */
void f_116a1330(void) {
  FTRACE(0x116a1330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1330 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1331 mov ebp, esp */
  EBP = (ESP);
  /* 116a1333 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1334 push ebx */
  push32((uint32_t)(EBX));
  /* 116a1335 push esi */
  push32((uint32_t)(ESI));
  /* 116a1336 push edi */
  push32((uint32_t)(EDI));
  /* 116a1337 wait  */
  /* wait (no observable integer/reg state) */
  /* 116a1338 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 116a133b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a133f push eax */
  push32((uint32_t)(EAX));
  /* 116a1340 call 0x116a1720 */
  push32(0x116a1345u); f_116a1720();
  /* 116a1345 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1348 pop edi */
  EDI = (pop32());
  /* 116a1349 pop esi */
  ESI = (pop32());
  /* 116a134a pop ebx */
  EBX = (pop32());
  /* 116a134b mov esp, ebp */
  ESP = (EBP);
  /* 116a134d pop ebp */
  EBP = (pop32());
  /* 116a134e ret  */
  ESPCHK(0x116a1330u, _esp0);
  ESP += 4; return;
}

/* FUN_10011350 @ 0x116a1350 (32 bytes, 18 insns) */
void f_116a1350(void) {
  FTRACE(0x116a1350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1350 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1351 mov ebp, esp */
  EBP = (ESP);
  /* 116a1353 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1354 push ebx */
  push32((uint32_t)(EBX));
  /* 116a1355 push esi */
  push32((uint32_t)(ESI));
  /* 116a1356 push edi */
  push32((uint32_t)(EDI));
  /* 116a1357 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 116a135a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 116a135c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a1360 push eax */
  push32((uint32_t)(EAX));
  /* 116a1361 call 0x116a1720 */
  push32(0x116a1366u); f_116a1720();
  /* 116a1366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1369 pop edi */
  EDI = (pop32());
  /* 116a136a pop esi */
  ESI = (pop32());
  /* 116a136b pop ebx */
  EBX = (pop32());
  /* 116a136c mov esp, ebp */
  ESP = (EBP);
  /* 116a136e pop ebp */
  EBP = (pop32());
  /* 116a136f ret  */
  ESPCHK(0x116a1350u, _esp0);
  ESP += 4; return;
}

/* FUN_10011370 @ 0x116a1370 (79 bytes, 34 insns) */
void f_116a1370(void) {
  FTRACE(0x116a1370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1370 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1371 mov ebp, esp */
  EBP = (ESP);
  /* 116a1373 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1376 push ebx */
  push32((uint32_t)(EBX));
  /* 116a1377 push esi */
  push32((uint32_t)(ESI));
  /* 116a1378 push edi */
  push32((uint32_t)(EDI));
  /* 116a1379 wait  */
  /* wait (no observable integer/reg state) */
  /* 116a137a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 116a137d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 116a1381 push eax */
  push32((uint32_t)(EAX));
  /* 116a1382 call 0x116a1440 */
  push32(0x116a1387u); f_116a1440();
  /* 116a1387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a138a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a138d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1390 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 116a1393 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1396 not edx */
  EDX = (~(EDX));
  /* 116a1398 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a139b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a139d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a139f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a13a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a13a5 push ecx */
  push32((uint32_t)(ECX));
  /* 116a13a6 call 0x116a15c0 */
  push32(0x116a13abu); f_116a15c0();
  /* 116a13ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a13ae mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 116a13b2 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 116a13b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a13b8 pop edi */
  EDI = (pop32());
  /* 116a13b9 pop esi */
  ESI = (pop32());
  /* 116a13ba pop ebx */
  EBX = (pop32());
  /* 116a13bb mov esp, ebp */
  ESP = (EBP);
  /* 116a13bd pop ebp */
  EBP = (pop32());
  /* 116a13be ret  */
  ESPCHK(0x116a1370u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x116a13c0 (26 bytes, 11 insns) */
void f_116a13c0(void) {
  FTRACE(0x116a13c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a13c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a13c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a13c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a13c6 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a13cb push eax */
  push32((uint32_t)(EAX));
  /* 116a13cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a13cf push ecx */
  push32((uint32_t)(ECX));
  /* 116a13d0 call 0x116a1370 */
  push32(0x116a13d5u); f_116a1370();
  /* 116a13d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a13d8 pop ebp */
  EBP = (pop32());
  /* 116a13d9 ret  */
  ESPCHK(0x116a13c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113e0 @ 0x116a13e0 (88 bytes, 33 insns) */
void f_116a13e0(void) {
  FTRACE(0x116a13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a13e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a13e1 mov ebp, esp */
  EBP = (ESP);
  /* 116a13e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a13e6 push ebx */
  push32((uint32_t)(EBX));
  /* 116a13e7 push esi */
  push32((uint32_t)(ESI));
  /* 116a13e8 push edi */
  push32((uint32_t)(EDI));
  /* 116a13e9 call 0x116a0fe0 */
  push32(0x116a13eeu); f_116a0fe0();
  /* 116a13ee mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 116a13f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a13f3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 116a13f5 call 0x1169b840 */
  push32(0x116a13fau); f_1169b840();
  /* 116a13fa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a13fe je 0x116a1431 */
  if (C.zf) goto L_116a1431;
  /* 116a1400 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1403 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a1406 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a1408 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 116a140d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a140f je 0x116a1431 */
  if (C.zf) goto L_116a1431;
  /* 116a1411 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1414 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a1417 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a141a mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a141d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1420 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 116a1427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a142a mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_116a1431:;
  /* 116a1431 pop edi */
  EDI = (pop32());
  /* 116a1432 pop esi */
  ESI = (pop32());
  /* 116a1433 pop ebx */
  EBX = (pop32());
  /* 116a1434 mov esp, ebp */
  ESP = (EBP);
  /* 116a1436 pop ebp */
  EBP = (pop32());
  /* 116a1437 ret  */
  ESPCHK(0x116a13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011440 @ 0x116a1440 (377 bytes, 115 insns) */
void f_116a1440(void) {
  FTRACE(0x116a1440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1440 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1441 mov ebp, esp */
  EBP = (ESP);
  /* 116a1443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1446 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a144d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1450 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a1455 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a145a je 0x116a1465 */
  if (C.zf) goto L_116a1465;
  /* 116a145c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a145f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 116a1462 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a1465:;
  /* 116a1465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1468 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a146e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1471 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a1473 je 0x116a147d */
  if (C.zf) goto L_116a147d;
  /* 116a1475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1478 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 116a147a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a147d:;
  /* 116a147d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1480 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a1486 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116a1489 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a148b je 0x116a1496 */
  if (C.zf) goto L_116a1496;
  /* 116a148d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1490 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1493 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a1496:;
  /* 116a1496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1499 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a149e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116a14a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a14a3 je 0x116a14ae */
  if (C.zf) goto L_116a14ae;
  /* 116a14a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a14a8 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a14ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a14ae:;
  /* 116a14ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a14b1 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a14b7 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 116a14ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a14bc je 0x116a14c6 */
  if (C.zf) goto L_116a14c6;
  /* 116a14be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a14c1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116a14c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a14c6:;
  /* 116a14c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a14c9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a14cf and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a14d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a14d4 je 0x116a14e2 */
  if (C.zf) goto L_116a14e2;
  /* 116a14d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a14d9 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 116a14df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a14e2:;
  /* 116a14e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a14e5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a14ea and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 116a14ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a14f2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a14f9 jg 0x116a1515 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a1515;
  /* 116a14fb cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1502 je 0x116a1528 */
  if (C.zf) goto L_116a1528;
  /* 116a1504 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1508 je 0x116a1520 */
  if (C.zf) goto L_116a1520;
  /* 116a150a cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1511 je 0x116a1533 */
  if (C.zf) goto L_116a1533;
  /* 116a1513 jmp 0x116a1547 */
  goto L_116a1547;
L_116a1515:;
  /* 116a1515 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a151c je 0x116a153e */
  if (C.zf) goto L_116a153e;
  /* 116a151e jmp 0x116a1547 */
  goto L_116a1547;
L_116a1520:;
  /* 116a1520 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1523 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a1526 jmp 0x116a1547 */
  goto L_116a1547;
L_116a1528:;
  /* 116a1528 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a152b or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a152e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a1531 jmp 0x116a1547 */
  goto L_116a1547;
L_116a1533:;
  /* 116a1533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1536 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 116a1539 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a153c jmp 0x116a1547 */
  goto L_116a1547;
L_116a153e:;
  /* 116a153e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1541 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116a1544 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a1547:;
  /* 116a1547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a154a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1550 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1556 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a1559 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a155d je 0x116a1589 */
  if (C.zf) goto L_116a1589;
  /* 116a155f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1566 je 0x116a157b */
  if (C.zf) goto L_116a157b;
  /* 116a1568 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a156f je 0x116a1573 */
  if (C.zf) goto L_116a1573;
  /* 116a1571 jmp 0x116a1595 */
  goto L_116a1595;
L_116a1573:;
  /* 116a1573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1576 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a1579 jmp 0x116a1595 */
  goto L_116a1595;
L_116a157b:;
  /* 116a157b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a157e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a1584 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a1587 jmp 0x116a1595 */
  goto L_116a1595;
L_116a1589:;
  /* 116a1589 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a158c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1592 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a1595:;
  /* 116a1595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1598 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a159d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a15a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a15a4 je 0x116a15b2 */
  if (C.zf) goto L_116a15b2;
  /* 116a15a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a15a9 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a15af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a15b2:;
  /* 116a15b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a15b5 mov esp, ebp */
  ESP = (EBP);
  /* 116a15b7 pop ebp */
  EBP = (pop32());
  /* 116a15b8 ret  */
  ESPCHK(0x116a1440u, _esp0);
  ESP += 4; return;
}

/* FUN_100115c0 @ 0x116a15c0 (346 bytes, 106 insns) */
void f_116a15c0(void) {
  FTRACE(0x116a15c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a15c0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a15c1 mov ebp, esp */
  EBP = (ESP);
  /* 116a15c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a15c6 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a15cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a15cf and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116a15d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a15d4 je 0x116a15e1 */
  if (C.zf) goto L_116a15e1;
  /* 116a15d6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a15da or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 116a15dd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_116a15e1:;
  /* 116a15e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a15e4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 116a15e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a15e9 je 0x116a15f5 */
  if (C.zf) goto L_116a15f5;
  /* 116a15eb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a15ef or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 116a15f1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_116a15f5:;
  /* 116a15f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a15f8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 116a15fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a15fd je 0x116a160a */
  if (C.zf) goto L_116a160a;
  /* 116a15ff mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a1603 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 116a1606 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_116a160a:;
  /* 116a160a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a160d and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1610 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a1612 je 0x116a161f */
  if (C.zf) goto L_116a161f;
  /* 116a1614 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a1618 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 116a161b mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_116a161f:;
  /* 116a161f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1622 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1625 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a1627 je 0x116a1633 */
  if (C.zf) goto L_116a1633;
  /* 116a1629 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a162d or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 116a162f mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_116a1633:;
  /* 116a1633 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1636 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a163c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a163e je 0x116a164b */
  if (C.zf) goto L_116a164b;
  /* 116a1640 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a1644 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 116a1647 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_116a164b:;
  /* 116a164b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a164e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1653 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a1656 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a165d ja 0x116a1679 */
  if ((!C.cf&&!C.zf)) goto L_116a1679;
  /* 116a165f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1666 je 0x116a168e */
  if (C.zf) goto L_116a168e;
  /* 116a1668 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a166c je 0x116a1684 */
  if (C.zf) goto L_116a1684;
  /* 116a166e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1675 je 0x116a169b */
  if (C.zf) goto L_116a169b;
  /* 116a1677 jmp 0x116a16b3 */
  goto L_116a16b3;
L_116a1679:;
  /* 116a1679 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1680 je 0x116a16a8 */
  if (C.zf) goto L_116a16a8;
  /* 116a1682 jmp 0x116a16b3 */
  goto L_116a16b3;
L_116a1684:;
  /* 116a1684 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a1688 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 116a168c jmp 0x116a16b3 */
  goto L_116a16b3;
L_116a168e:;
  /* 116a168e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a1692 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 116a1695 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 116a1699 jmp 0x116a16b3 */
  goto L_116a16b3;
L_116a169b:;
  /* 116a169b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a169f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 116a16a2 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 116a16a6 jmp 0x116a16b3 */
  goto L_116a16b3;
L_116a16a8:;
  /* 116a16a8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a16ac or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116a16af mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_116a16b3:;
  /* 116a16b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a16b6 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 116a16bc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a16bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a16c3 je 0x116a16d9 */
  if (C.zf) goto L_116a16d9;
  /* 116a16c5 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a16cc je 0x116a16e6 */
  if (C.zf) goto L_116a16e6;
  /* 116a16ce cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a16d5 je 0x116a16f3 */
  if (C.zf) goto L_116a16f3;
  /* 116a16d7 jmp 0x116a16fb */
  goto L_116a16fb;
L_116a16d9:;
  /* 116a16d9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a16dd or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 116a16e0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 116a16e4 jmp 0x116a16fb */
  goto L_116a16fb;
L_116a16e6:;
  /* 116a16e6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a16ea or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116a16ed mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 116a16f1 jmp 0x116a16fb */
  goto L_116a16fb;
L_116a16f3:;
  /* 116a16f3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a16f7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_116a16fb:;
  /* 116a16fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a16fe and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1703 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a1705 je 0x116a1712 */
  if (C.zf) goto L_116a1712;
  /* 116a1707 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a170b or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 116a170e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_116a1712:;
  /* 116a1712 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a1716 mov esp, ebp */
  ESP = (EBP);
  /* 116a1718 pop ebp */
  EBP = (pop32());
  /* 116a1719 ret  */
  ESPCHK(0x116a15c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011720 @ 0x116a1720 (167 bytes, 56 insns) */
void f_116a1720(void) {
  FTRACE(0x116a1720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1720 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1721 mov ebp, esp */
  EBP = (ESP);
  /* 116a1723 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1724 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a172b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a172e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a1733 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1736 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a1738 je 0x116a1743 */
  if (C.zf) goto L_116a1743;
  /* 116a173a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a173d or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 116a1740 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a1743:;
  /* 116a1743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1746 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a174c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a174f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a1751 je 0x116a175b */
  if (C.zf) goto L_116a175b;
  /* 116a1753 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1756 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 116a1758 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a175b:;
  /* 116a175b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a175e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a1764 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 116a1767 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a1769 je 0x116a1774 */
  if (C.zf) goto L_116a1774;
  /* 116a176b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a176e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1771 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a1774:;
  /* 116a1774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1777 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a177c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 116a177f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a1781 je 0x116a178c */
  if (C.zf) goto L_116a178c;
  /* 116a1783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1786 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a1789 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a178c:;
  /* 116a178c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a178f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1795 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1798 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a179a je 0x116a17a4 */
  if (C.zf) goto L_116a17a4;
  /* 116a179c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a179f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 116a17a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a17a4:;
  /* 116a17a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a17a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a17ad and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 116a17b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a17b2 je 0x116a17c0 */
  if (C.zf) goto L_116a17c0;
  /* 116a17b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a17b7 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 116a17bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a17c0:;
  /* 116a17c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a17c3 mov esp, ebp */
  ESP = (EBP);
  /* 116a17c5 pop ebp */
  EBP = (pop32());
  /* 116a17c6 ret  */
  ESPCHK(0x116a1720u, _esp0);
  ESP += 4; return;
}

/* FUN_100117d0 @ 0x116a17d0 (183 bytes, 58 insns) */
void f_116a17d0(void) {
  FTRACE(0x116a17d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a17d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a17d1 mov ebp, esp */
  EBP = (ESP);
  /* 116a17d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a17d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a17d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a17dc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a17e1 ja 0x116a17fa */
  if ((!C.cf&&!C.zf)) goto L_116a17fa;
  /* 116a17e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a17e6 mov edx, dword ptr [0x116ce26c] */
  EDX = (r32((uint32_t)(0x116ce26c)));
  /* 116a17ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a17ee mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 116a17f2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 116a17f5 jmp 0x116a1883 */
  goto L_116a1883;
L_116a17fa:;
  /* 116a17fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a17fd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 116a1800 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a1806 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a180c mov edx, dword ptr [0x116ce26c] */
  EDX = (r32((uint32_t)(0x116ce26c)));
  /* 116a1812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1814 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 116a1818 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a181d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a181f je 0x116a1843 */
  if (C.zf) goto L_116a1843;
  /* 116a1821 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1824 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 116a1827 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a182d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 116a1830 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 116a1833 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 116a1836 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 116a183a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 116a1841 jmp 0x116a1854 */
  goto L_116a1854;
L_116a1843:;
  /* 116a1843 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 116a1846 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 116a1849 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 116a184d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_116a1854:;
  /* 116a1854 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a1856 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a1858 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a185a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 116a185d push ecx */
  push32((uint32_t)(ECX));
  /* 116a185e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1861 push edx */
  push32((uint32_t)(EDX));
  /* 116a1862 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116a1865 push eax */
  push32((uint32_t)(EAX));
  /* 116a1866 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a1868 call 0x116a8540 */
  push32(0x116a186du); f_116a8540();
  /* 116a186d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a1872 jne 0x116a1878 */
  if (!C.zf) goto L_116a1878;
  /* 116a1874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1876 jmp 0x116a1883 */
  goto L_116a1883;
L_116a1878:;
  /* 116a1878 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a187b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a1880 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_116a1883:;
  /* 116a1883 mov esp, ebp */
  ESP = (EBP);
  /* 116a1885 pop ebp */
  EBP = (pop32());
  /* 116a1886 ret  */
  ESPCHK(0x116a17d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011890 @ 0x116a1890 (11 bytes, 6 insns) */
void f_116a1890(void) {
  FTRACE(0x116a1890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1890 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1891 mov ebp, esp */
  EBP = (ESP);
  /* 116a1893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1896 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1899 pop ebp */
  EBP = (pop32());
  /* 116a189a ret  */
  ESPCHK(0x116a1890u, _esp0);
  ESP += 4; return;
}

/* FUN_100118a0 @ 0x116a18a0 (147 bytes, 43 insns) */
void f_116a18a0(void) {
  FTRACE(0x116a18a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a18a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a18a1 mov ebp, esp */
  EBP = (ESP);
  /* 116a18a3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a18a4 cmp dword ptr [0x116d0828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a18ab jne 0x116a18c7 */
  if (!C.zf) goto L_116a18c7;
  /* 116a18ad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a18b1 jl 0x116a18c2 */
  if ((C.sf!=C.of)) goto L_116a18c2;
  /* 116a18b3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a18b7 jg 0x116a18c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a18c2;
  /* 116a18b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a18bc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a18bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116a18c2:;
  /* 116a18c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a18c5 jmp 0x116a192f */
  goto L_116a192f;
L_116a18c7:;
  /* 116a18c7 push 0x116d1c34 */
  push32((uint32_t)(0x116d1c34u));
  /* 116a18cc call dword ptr [0x116d344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d344c))), 0x116a18d2u);
  /* 116a18d2 cmp dword ptr [0x116d1c24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1c24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a18d9 je 0x116a18f9 */
  if (C.zf) goto L_116a18f9;
  /* 116a18db push 0x116d1c34 */
  push32((uint32_t)(0x116d1c34u));
  /* 116a18e0 call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x116a18e6u);
  /* 116a18e6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116a18e8 call 0x1169c120 */
  push32(0x116a18edu); f_1169c120();
  /* 116a18ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a18f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 116a18f7 jmp 0x116a1900 */
  goto L_116a1900;
L_116a18f9:;
  /* 116a18f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116a1900:;
  /* 116a1900 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1903 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1904 call 0x116a1940 */
  push32(0x116a1909u); f_116a1940();
  /* 116a1909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a190c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 116a190f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1913 je 0x116a1921 */
  if (C.zf) goto L_116a1921;
  /* 116a1915 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 116a1917 call 0x1169c1c0 */
  push32(0x116a191cu); f_1169c1c0();
  /* 116a191c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a191f jmp 0x116a192c */
  goto L_116a192c;
L_116a1921:;
  /* 116a1921 push 0x116d1c34 */
  push32((uint32_t)(0x116d1c34u));
  /* 116a1926 call dword ptr [0x116d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3328))), 0x116a192cu);
L_116a192c:;
  /* 116a192c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_116a192f:;
  /* 116a192f mov esp, ebp */
  ESP = (EBP);
  /* 116a1931 pop ebp */
  EBP = (pop32());
  /* 116a1932 ret  */
  ESPCHK(0x116a18a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011940 @ 0x116a1940 (299 bytes, 91 insns) */
void f_116a1940(void) {
  FTRACE(0x116a1940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1940 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1941 mov ebp, esp */
  EBP = (ESP);
  /* 116a1943 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1946 cmp dword ptr [0x116d0828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a194d jne 0x116a196c */
  if (!C.zf) goto L_116a196c;
  /* 116a194f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1953 jl 0x116a1964 */
  if ((C.sf!=C.of)) goto L_116a1964;
  /* 116a1955 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1959 jg 0x116a1964 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a1964;
  /* 116a195b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a195e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1961 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116a1964:;
  /* 116a1964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1967 jmp 0x116a1a67 */
  goto L_116a1a67;
L_116a196c:;
  /* 116a196c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1973 jge 0x116a19b3 */
  if ((C.sf==C.of)) goto L_116a19b3;
  /* 116a1975 cmp dword ptr [0x116ce260], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116ce260))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a197c jle 0x116a1991 */
  if ((C.zf||C.sf!=C.of)) goto L_116a1991;
  /* 116a197e push 1 */
  push32((uint32_t)(0x1u));
  /* 116a1980 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1983 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1984 call 0x116a17d0 */
  push32(0x116a1989u); f_116a17d0();
  /* 116a1989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a198c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a198f jmp 0x116a19a5 */
  goto L_116a19a5;
L_116a1991:;
  /* 116a1991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1994 mov eax, dword ptr [0x116ce26c] */
  EAX = (r32((uint32_t)(0x116ce26c)));
  /* 116a1999 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a199b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116a199f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a19a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116a19a5:;
  /* 116a19a5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a19a9 jne 0x116a19b3 */
  if (!C.zf) goto L_116a19b3;
  /* 116a19ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a19ae jmp 0x116a1a67 */
  goto L_116a1a67;
L_116a19b3:;
  /* 116a19b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a19b6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 116a19b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a19bf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a19c5 mov eax, dword ptr [0x116ce26c] */
  EAX = (r32((uint32_t)(0x116ce26c)));
  /* 116a19ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a19cc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 116a19d0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a19d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a19d8 je 0x116a19fc */
  if (C.zf) goto L_116a19fc;
  /* 116a19da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a19dd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 116a19e0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a19e6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 116a19e9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 116a19ec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 116a19ef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 116a19f3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 116a19fa jmp 0x116a1a0d */
  goto L_116a1a0d;
L_116a19fc:;
  /* 116a19fc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 116a19ff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 116a1a02 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 116a1a06 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_116a1a0d:;
  /* 116a1a0d push 1 */
  push32((uint32_t)(0x1u));
  /* 116a1a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 116a1a11 push 3 */
  push32((uint32_t)(0x3u));
  /* 116a1a13 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116a1a16 push edx */
  push32((uint32_t)(EDX));
  /* 116a1a17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1a1a push eax */
  push32((uint32_t)(EAX));
  /* 116a1a1b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 116a1a1e push ecx */
  push32((uint32_t)(ECX));
  /* 116a1a1f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 116a1a24 mov edx, dword ptr [0x116d0828] */
  EDX = (r32((uint32_t)(0x116d0828)));
  /* 116a1a2a push edx */
  push32((uint32_t)(EDX));
  /* 116a1a2b call 0x116a9150 */
  push32(0x116a1a30u); f_116a9150();
  /* 116a1a30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1a33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a1a36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1a3a jne 0x116a1a41 */
  if (!C.zf) goto L_116a1a41;
  /* 116a1a3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1a3f jmp 0x116a1a67 */
  goto L_116a1a67;
L_116a1a41:;
  /* 116a1a41 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1a45 jne 0x116a1a51 */
  if (!C.zf) goto L_116a1a51;
  /* 116a1a47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1a4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a1a4f jmp 0x116a1a67 */
  goto L_116a1a67;
L_116a1a51:;
  /* 116a1a51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1a54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a1a59 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 116a1a5c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a1a62 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 116a1a65 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_116a1a67:;
  /* 116a1a67 mov esp, ebp */
  ESP = (EBP);
  /* 116a1a69 pop ebp */
  EBP = (pop32());
  /* 116a1a6a ret  */
  ESPCHK(0x116a1940u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a70 @ 0x116a1a70 (132 bytes, 51 insns) */
void f_116a1a70(void) {
  FTRACE(0x116a1a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1a70 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1a71 mov ebp, esp */
  EBP = (ESP);
  /* 116a1a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1a76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1a79 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a1a7a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1a7d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1a7f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116a1a82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a1a85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1a88 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 116a1a8d jns 0x116a1a94 */
  if (!C.sf) goto L_116a1a94;
  /* 116a1a8f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116a1a90 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1a93 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116a1a94:;
  /* 116a1a94 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 116a1a99 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1a9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a1a9e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1aa1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1aa4 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a1aa6 not edx */
  EDX = (~(EDX));
  /* 116a1aa8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a1aab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1aae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1ab1 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116a1ab4 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 116a1ab7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a1ab9 je 0x116a1abf */
  if (C.zf) goto L_116a1abf;
  /* 116a1abb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1abd jmp 0x116a1af0 */
  goto L_116a1af0;
L_116a1abf:;
  /* 116a1abf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1ac2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1ac5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a1ac8 jmp 0x116a1ad3 */
  goto L_116a1ad3;
L_116a1aca:;
  /* 116a1aca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1acd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1ad0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116a1ad3:;
  /* 116a1ad3 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1ad7 jge 0x116a1aeb */
  if ((C.sf==C.of)) goto L_116a1aeb;
  /* 116a1ad9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1adc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1adf cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1ae3 je 0x116a1ae9 */
  if (C.zf) goto L_116a1ae9;
  /* 116a1ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1ae7 jmp 0x116a1af0 */
  goto L_116a1af0;
L_116a1ae9:;
  /* 116a1ae9 jmp 0x116a1aca */
  goto L_116a1aca;
L_116a1aeb:;
  /* 116a1aeb mov eax, 1 */
  EAX = (0x1u);
L_116a1af0:;
  /* 116a1af0 mov esp, ebp */
  ESP = (EBP);
  /* 116a1af2 pop ebp */
  EBP = (pop32());
  /* 116a1af3 ret  */
  ESPCHK(0x116a1a70u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x116a1b00 (168 bytes, 63 insns) */
void f_116a1b00(void) {
  FTRACE(0x116a1b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1b00 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1b01 mov ebp, esp */
  EBP = (ESP);
  /* 116a1b03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1b06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1b09 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a1b0a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1b0d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1b0f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116a1b12 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a1b15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1b18 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 116a1b1d jns 0x116a1b24 */
  if (!C.sf) goto L_116a1b24;
  /* 116a1b1f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116a1b20 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1b23 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116a1b24:;
  /* 116a1b24 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 116a1b29 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1b2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a1b2e mov edx, 1 */
  EDX = (0x1u);
  /* 116a1b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1b36 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a1b38 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a1b3b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1b3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1b41 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 116a1b44 push edx */
  push32((uint32_t)(EDX));
  /* 116a1b45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1b48 push eax */
  push32((uint32_t)(EAX));
  /* 116a1b49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1b4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1b4f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116a1b52 push eax */
  push32((uint32_t)(EAX));
  /* 116a1b53 call 0x116a94b0 */
  push32(0x116a1b58u); f_116a94b0();
  /* 116a1b58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1b5b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a1b5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1b61 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1b64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a1b67 jmp 0x116a1b72 */
  goto L_116a1b72;
L_116a1b69:;
  /* 116a1b69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1b6c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1b6f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116a1b72:;
  /* 116a1b72 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1b76 jl 0x116a1ba1 */
  if ((C.sf!=C.of)) goto L_116a1ba1;
  /* 116a1b78 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1b7c je 0x116a1ba1 */
  if (C.zf) goto L_116a1ba1;
  /* 116a1b7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1b81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1b84 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 116a1b87 push edx */
  push32((uint32_t)(EDX));
  /* 116a1b88 push 1 */
  push32((uint32_t)(0x1u));
  /* 116a1b8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1b8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1b90 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116a1b93 push edx */
  push32((uint32_t)(EDX));
  /* 116a1b94 call 0x116a94b0 */
  push32(0x116a1b99u); f_116a94b0();
  /* 116a1b99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1b9c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a1b9f jmp 0x116a1b69 */
  goto L_116a1b69;
L_116a1ba1:;
  /* 116a1ba1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a1ba4 mov esp, ebp */
  ESP = (EBP);
  /* 116a1ba6 pop ebp */
  EBP = (pop32());
  /* 116a1ba7 ret  */
  ESPCHK(0x116a1b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bb0 @ 0x116a1bb0 (219 bytes, 78 insns) */
void f_116a1bb0(void) {
  FTRACE(0x116a1bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1bb1 mov ebp, esp */
  EBP = (ESP);
  /* 116a1bb3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1bb6 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 116a1bbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1bc0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1bc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a1bc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1bc9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1bcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a1bcf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1bd2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a1bd3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1bd6 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1bd8 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116a1bdb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116a1bde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1be1 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1be7 jns 0x116a1bee */
  if (!C.sf) goto L_116a1bee;
  /* 116a1be9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 116a1bea or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 116a1bed inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_116a1bee:;
  /* 116a1bee mov eax, 0x1f */
  EAX = (0x1fu);
  /* 116a1bf3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1bf5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a1bf8 mov edx, 1 */
  EDX = (0x1u);
  /* 116a1bfd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1c00 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a1c02 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a1c05 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a1c08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1c0b mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116a1c0e and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 116a1c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a1c13 je 0x116a1c3f */
  if (C.zf) goto L_116a1c3f;
  /* 116a1c15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1c18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1c1b push eax */
  push32((uint32_t)(EAX));
  /* 116a1c1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1c1f push ecx */
  push32((uint32_t)(ECX));
  /* 116a1c20 call 0x116a1a70 */
  push32(0x116a1c25u); f_116a1a70();
  /* 116a1c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a1c2a jne 0x116a1c3f */
  if (!C.zf) goto L_116a1c3f;
  /* 116a1c2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1c2f push edx */
  push32((uint32_t)(EDX));
  /* 116a1c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1c33 push eax */
  push32((uint32_t)(EAX));
  /* 116a1c34 call 0x116a1b00 */
  push32(0x116a1c39u); f_116a1b00();
  /* 116a1c39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1c3c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_116a1c3f:;
  /* 116a1c3f or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1c42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1c45 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a1c47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a1c4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1c4d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116a1c50 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1c52 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a1c55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1c58 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 116a1c5b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a1c5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1c61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a1c64 jmp 0x116a1c6f */
  goto L_116a1c6f;
L_116a1c66:;
  /* 116a1c66 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a1c69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1c6c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116a1c6f:;
  /* 116a1c6f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1c73 jge 0x116a1c84 */
  if ((C.sf==C.of)) goto L_116a1c84;
  /* 116a1c75 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a1c78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1c7b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 116a1c82 jmp 0x116a1c66 */
  goto L_116a1c66;
L_116a1c84:;
  /* 116a1c84 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a1c87 mov esp, ebp */
  ESP = (EBP);
  /* 116a1c89 pop ebp */
  EBP = (pop32());
  /* 116a1c8a ret  */
  ESPCHK(0x116a1bb0u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x116a1c90 (76 bytes, 28 insns) */
void f_116a1c90(void) {
  FTRACE(0x116a1c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1c90 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1c91 mov ebp, esp */
  EBP = (ESP);
  /* 116a1c93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1c96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1c99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a1c9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1c9f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a1ca2 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a1ca9 jmp 0x116a1cb4 */
  goto L_116a1cb4;
L_116a1cab:;
  /* 116a1cab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1cae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1cb1 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_116a1cb4:;
  /* 116a1cb4 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1cb8 jge 0x116a1cd8 */
  if ((C.sf==C.of)) goto L_116a1cd8;
  /* 116a1cba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1cbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1cc0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a1cc2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a1cc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a1cc7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1cca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a1ccd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1cd0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1cd3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a1cd6 jmp 0x116a1cab */
  goto L_116a1cab;
L_116a1cd8:;
  /* 116a1cd8 mov esp, ebp */
  ESP = (EBP);
  /* 116a1cda pop ebp */
  EBP = (pop32());
  /* 116a1cdb ret  */
  ESPCHK(0x116a1c90u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x116a1ce0 (47 bytes, 17 insns) */
void f_116a1ce0(void) {
  FTRACE(0x116a1ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1ce1 mov ebp, esp */
  EBP = (ESP);
  /* 116a1ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1ce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a1ceb jmp 0x116a1cf6 */
  goto L_116a1cf6;
L_116a1ced:;
  /* 116a1ced mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1cf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1cf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a1cf6:;
  /* 116a1cf6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1cfa jge 0x116a1d0b */
  if ((C.sf==C.of)) goto L_116a1d0b;
  /* 116a1cfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1cff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1d02 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 116a1d09 jmp 0x116a1ced */
  goto L_116a1ced;
L_116a1d0b:;
  /* 116a1d0b mov esp, ebp */
  ESP = (EBP);
  /* 116a1d0d pop ebp */
  EBP = (pop32());
  /* 116a1d0e ret  */
  ESPCHK(0x116a1ce0u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x116a1d10 (55 bytes, 21 insns) */
void f_116a1d10(void) {
  FTRACE(0x116a1d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1d10 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1d11 mov ebp, esp */
  EBP = (ESP);
  /* 116a1d13 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1d14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a1d1b jmp 0x116a1d26 */
  goto L_116a1d26;
L_116a1d1d:;
  /* 116a1d1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1d20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_116a1d26:;
  /* 116a1d26 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1d2a jge 0x116a1d3e */
  if ((C.sf==C.of)) goto L_116a1d3e;
  /* 116a1d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1d2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1d32 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1d36 je 0x116a1d3c */
  if (C.zf) goto L_116a1d3c;
  /* 116a1d38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1d3a jmp 0x116a1d43 */
  goto L_116a1d43;
L_116a1d3c:;
  /* 116a1d3c jmp 0x116a1d1d */
  goto L_116a1d1d;
L_116a1d3e:;
  /* 116a1d3e mov eax, 1 */
  EAX = (0x1u);
L_116a1d43:;
  /* 116a1d43 mov esp, ebp */
  ESP = (EBP);
  /* 116a1d45 pop ebp */
  EBP = (pop32());
  /* 116a1d46 ret  */
  ESPCHK(0x116a1d10u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x116a1d50 (236 bytes, 82 insns) */
void f_116a1d50(void) {
  FTRACE(0x116a1d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1d50 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1d51 mov ebp, esp */
  EBP = (ESP);
  /* 116a1d53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1d56 push esi */
  push32((uint32_t)(ESI));
  /* 116a1d57 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1d5a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116a1d5b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1d5e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1d60 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 116a1d63 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a1d66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a1d69 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 116a1d6e jns 0x116a1d75 */
  if (!C.sf) goto L_116a1d75;
  /* 116a1d70 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116a1d71 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1d74 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116a1d75:;
  /* 116a1d75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a1d78 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a1d7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1d7e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a1d80 not edx */
  EDX = (~(EDX));
  /* 116a1d82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116a1d85 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a1d8c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a1d93 jmp 0x116a1d9e */
  goto L_116a1d9e;
L_116a1d95:;
  /* 116a1d95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1d98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1d9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116a1d9e:;
  /* 116a1d9e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1da2 jge 0x116a1df1 */
  if ((C.sf==C.of)) goto L_116a1df1;
  /* 116a1da4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1da7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1daa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116a1dad and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 116a1db0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a1db3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1db6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1db9 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 116a1dbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1dbf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a1dc1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1dc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1dc7 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 116a1dca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1dcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1dd0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 116a1dd3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 116a1dd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1dd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1ddc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 116a1ddf mov ecx, 0x20 */
  ECX = (0x20u);
  /* 116a1de4 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1de7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a1dea shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a1dec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a1def jmp 0x116a1d95 */
  goto L_116a1d95;
L_116a1df1:;
  /* 116a1df1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 116a1df8 jmp 0x116a1e03 */
  goto L_116a1e03;
L_116a1dfa:;
  /* 116a1dfa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1dfd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1e00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_116a1e03:;
  /* 116a1e03 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1e07 jl 0x116a1e37 */
  if ((C.sf!=C.of)) goto L_116a1e37;
  /* 116a1e09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1e0c cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1e0f jl 0x116a1e28 */
  if ((C.sf!=C.of)) goto L_116a1e28;
  /* 116a1e11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1e14 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1e17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1e1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1e1d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1e20 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 116a1e23 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 116a1e26 jmp 0x116a1e35 */
  goto L_116a1e35;
L_116a1e28:;
  /* 116a1e28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a1e2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1e2e mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_116a1e35:;
  /* 116a1e35 jmp 0x116a1dfa */
  goto L_116a1dfa;
L_116a1e37:;
  /* 116a1e37 pop esi */
  ESI = (pop32());
  /* 116a1e38 mov esp, ebp */
  ESP = (EBP);
  /* 116a1e3a pop ebp */
  EBP = (pop32());
  /* 116a1e3b ret  */
  ESPCHK(0x116a1d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e40 @ 0x116a1e40 (578 bytes, 188 insns) */
void f_116a1e40(void) {
  FTRACE(0x116a1e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a1e40 push ebp */
  push32((uint32_t)(EBP));
  /* 116a1e41 mov ebp, esp */
  EBP = (ESP);
  /* 116a1e43 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1e49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a1e4b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 116a1e4f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a1e55 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1e5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a1e5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1e61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1e63 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 116a1e67 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1e6c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a1e6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1e72 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 116a1e75 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116a1e78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1e7b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 116a1e7e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116a1e81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a1e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a1e86 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 116a1e89 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116a1e8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a1e8f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1e96 jne 0x116a1ed0 */
  if (!C.zf) goto L_116a1ed0;
  /* 116a1e98 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a1e9f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 116a1ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1ea3 call 0x116a1d10 */
  push32(0x116a1ea8u); f_116a1d10();
  /* 116a1ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1eab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a1ead je 0x116a1eb8 */
  if (C.zf) goto L_116a1eb8;
  /* 116a1eaf mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 116a1eb6 jmp 0x116a1ecb */
  goto L_116a1ecb;
L_116a1eb8:;
  /* 116a1eb8 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 116a1ebb push edx */
  push32((uint32_t)(EDX));
  /* 116a1ebc call 0x116a1ce0 */
  push32(0x116a1ec1u); f_116a1ce0();
  /* 116a1ec1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1ec4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_116a1ecb:;
  /* 116a1ecb jmp 0x116a201c */
  goto L_116a201c;
L_116a1ed0:;
  /* 116a1ed0 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 116a1ed3 push eax */
  push32((uint32_t)(EAX));
  /* 116a1ed4 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 116a1ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1ed8 call 0x116a1c90 */
  push32(0x116a1eddu); f_116a1c90();
  /* 116a1edd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1ee0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1ee3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a1ee6 push eax */
  push32((uint32_t)(EAX));
  /* 116a1ee7 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 116a1eea push ecx */
  push32((uint32_t)(ECX));
  /* 116a1eeb call 0x116a1bb0 */
  push32(0x116a1ef0u); f_116a1bb0();
  /* 116a1ef0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1ef3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a1ef5 je 0x116a1f00 */
  if (C.zf) goto L_116a1f00;
  /* 116a1ef7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1efa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1efd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a1f00:;
  /* 116a1f00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1f03 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1f06 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a1f09 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1f0c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1f0f jge 0x116a1f30 */
  if ((C.sf==C.of)) goto L_116a1f30;
  /* 116a1f11 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 116a1f14 push eax */
  push32((uint32_t)(EAX));
  /* 116a1f15 call 0x116a1ce0 */
  push32(0x116a1f1au); f_116a1ce0();
  /* 116a1f1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1f1d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a1f24 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 116a1f2b jmp 0x116a201c */
  goto L_116a201c;
L_116a1f30:;
  /* 116a1f30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1f33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1f36 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1f39 jg 0x116a1fa0 */
  if ((!C.zf&&C.sf==C.of)) goto L_116a1fa0;
  /* 116a1f3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1f3e mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a1f41 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a1f44 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 116a1f47 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 116a1f4a push edx */
  push32((uint32_t)(EDX));
  /* 116a1f4b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 116a1f4e push eax */
  push32((uint32_t)(EAX));
  /* 116a1f4f call 0x116a1c90 */
  push32(0x116a1f54u); f_116a1c90();
  /* 116a1f54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1f57 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a1f5a push ecx */
  push32((uint32_t)(ECX));
  /* 116a1f5b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 116a1f5e push edx */
  push32((uint32_t)(EDX));
  /* 116a1f5f call 0x116a1d50 */
  push32(0x116a1f64u); f_116a1d50();
  /* 116a1f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1f67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1f6a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a1f6d push ecx */
  push32((uint32_t)(ECX));
  /* 116a1f6e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 116a1f71 push edx */
  push32((uint32_t)(EDX));
  /* 116a1f72 call 0x116a1bb0 */
  push32(0x116a1f77u); f_116a1bb0();
  /* 116a1f77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1f7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1f7d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116a1f80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1f83 push ecx */
  push32((uint32_t)(ECX));
  /* 116a1f84 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 116a1f87 push edx */
  push32((uint32_t)(EDX));
  /* 116a1f88 call 0x116a1d50 */
  push32(0x116a1f8du); f_116a1d50();
  /* 116a1f8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1f90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a1f97 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 116a1f9e jmp 0x116a201c */
  goto L_116a201c;
L_116a1fa0:;
  /* 116a1fa0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1fa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1fa6 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a1fa8 jl 0x116a1feb */
  if ((C.sf!=C.of)) goto L_116a1feb;
  /* 116a1faa lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 116a1fad push edx */
  push32((uint32_t)(EDX));
  /* 116a1fae call 0x116a1ce0 */
  push32(0x116a1fb3u); f_116a1ce0();
  /* 116a1fb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1fb6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a1fb9 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a1fbe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a1fc1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1fc4 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a1fc7 push edx */
  push32((uint32_t)(EDX));
  /* 116a1fc8 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 116a1fcb push eax */
  push32((uint32_t)(EAX));
  /* 116a1fcc call 0x116a1d50 */
  push32(0x116a1fd1u); f_116a1d50();
  /* 116a1fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1fd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1fd7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a1fd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1fdc add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1fdf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a1fe2 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 116a1fe9 jmp 0x116a201c */
  goto L_116a201c;
L_116a1feb:;
  /* 116a1feb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a1fee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a1ff1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a1ff4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a1ff7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a1ffa and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a1fff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a2002 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a2005 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a2008 push edx */
  push32((uint32_t)(EDX));
  /* 116a2009 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 116a200c push eax */
  push32((uint32_t)(EAX));
  /* 116a200d call 0x116a1d50 */
  push32(0x116a2012u); f_116a1d50();
  /* 116a2012 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2015 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_116a201c:;
  /* 116a201c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a201f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a2022 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2025 mov eax, 0x20 */
  EAX = (0x20u);
  /* 116a202a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a202c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a202f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2032 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a2035 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a2037 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a203a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a203c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a203f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a2041 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2043 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a2049 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 116a204b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a204e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a2051 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2055 jne 0x116a206a */
  if (!C.zf) goto L_116a206a;
  /* 116a2057 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a205a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a205d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116a2060 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2063 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a2066 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116a2068 jmp 0x116a207b */
  goto L_116a207b;
L_116a206a:;
  /* 116a206a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a206d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2071 jne 0x116a207b */
  if (!C.zf) goto L_116a207b;
  /* 116a2073 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2076 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a2079 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_116a207b:;
  /* 116a207b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a207e mov esp, ebp */
  ESP = (EBP);
  /* 116a2080 pop ebp */
  EBP = (pop32());
  /* 116a2081 ret  */
  ESPCHK(0x116a1e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012090 @ 0x116a2090 (26 bytes, 11 insns) */
void f_116a2090(void) {
  FTRACE(0x116a2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2090 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2091 mov ebp, esp */
  EBP = (ESP);
  /* 116a2093 push 0x116ce478 */
  push32((uint32_t)(0x116ce478u));
  /* 116a2098 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a209b push eax */
  push32((uint32_t)(EAX));
  /* 116a209c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a209f push ecx */
  push32((uint32_t)(ECX));
  /* 116a20a0 call 0x116a1e40 */
  push32(0x116a20a5u); f_116a1e40();
  /* 116a20a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a20a8 pop ebp */
  EBP = (pop32());
  /* 116a20a9 ret  */
  ESPCHK(0x116a2090u, _esp0);
  ESP += 4; return;
}

/* FUN_100120b0 @ 0x116a20b0 (26 bytes, 11 insns) */
void f_116a20b0(void) {
  FTRACE(0x116a20b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a20b0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a20b1 mov ebp, esp */
  EBP = (ESP);
  /* 116a20b3 push 0x116ce490 */
  push32((uint32_t)(0x116ce490u));
  /* 116a20b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a20bb push eax */
  push32((uint32_t)(EAX));
  /* 116a20bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a20bf push ecx */
  push32((uint32_t)(ECX));
  /* 116a20c0 call 0x116a1e40 */
  push32(0x116a20c5u); f_116a1e40();
  /* 116a20c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a20c8 pop ebp */
  EBP = (pop32());
  /* 116a20c9 ret  */
  ESPCHK(0x116a20b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120d0 @ 0x116a20d0 (191 bytes, 58 insns) */
void f_116a20d0(void) {
  FTRACE(0x116a20d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a20d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a20d1 mov ebp, esp */
  EBP = (ESP);
  /* 116a20d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a20d6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 116a20dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a20e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a20e2 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 116a20e6 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a20ec mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 116a20f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a20f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a20f5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 116a20f9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a20fe mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 116a2102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2105 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 116a2108 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116a210b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a210e mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 116a2111 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a2114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a2119 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 116a211c shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116a211f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a2122 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116a2124 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 116a2127 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2128 call 0x116a1bb0 */
  push32(0x116a212du); f_116a1bb0();
  /* 116a212d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a2132 je 0x116a2147 */
  if (C.zf) goto L_116a2147;
  /* 116a2134 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 116a213b mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a213f add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 116a2143 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_116a2147:;
  /* 116a2147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a214a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a214f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2154 jne 0x116a215d */
  if (!C.zf) goto L_116a215d;
  /* 116a2156 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_116a215d:;
  /* 116a215d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2160 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a2163 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116a2166 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2169 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a216c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116a216e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a2171 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a2177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a217a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a217f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a2181 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2184 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 116a2188 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a218b mov esp, ebp */
  ESP = (EBP);
  /* 116a218d pop ebp */
  EBP = (pop32());
  /* 116a218e ret  */
  ESPCHK(0x116a20d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012190 @ 0x116a2190 (54 bytes, 24 insns) */
void f_116a2190(void) {
  FTRACE(0x116a2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2190 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2191 mov ebp, esp */
  EBP = (ESP);
  /* 116a2193 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2196 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a2198 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a219a push 0 */
  push32((uint32_t)(0x0u));
  /* 116a219c push 0 */
  push32((uint32_t)(0x0u));
  /* 116a219e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a21a1 push eax */
  push32((uint32_t)(EAX));
  /* 116a21a2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 116a21a5 push ecx */
  push32((uint32_t)(ECX));
  /* 116a21a6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116a21a9 push edx */
  push32((uint32_t)(EDX));
  /* 116a21aa call 0x116a97b0 */
  push32(0x116a21afu); f_116a97b0();
  /* 116a21af add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a21b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a21b5 push eax */
  push32((uint32_t)(EAX));
  /* 116a21b6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 116a21b9 push ecx */
  push32((uint32_t)(ECX));
  /* 116a21ba call 0x116a2090 */
  push32(0x116a21bfu); f_116a2090();
  /* 116a21bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a21c2 mov esp, ebp */
  ESP = (EBP);
  /* 116a21c4 pop ebp */
  EBP = (pop32());
  /* 116a21c5 ret  */
  ESPCHK(0x116a2190u, _esp0);
  ESP += 4; return;
}

/* FUN_100121d0 @ 0x116a21d0 (54 bytes, 24 insns) */
void f_116a21d0(void) {
  FTRACE(0x116a21d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a21d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a21d1 mov ebp, esp */
  EBP = (ESP);
  /* 116a21d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a21d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a21d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a21da push 0 */
  push32((uint32_t)(0x0u));
  /* 116a21dc push 1 */
  push32((uint32_t)(0x1u));
  /* 116a21de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a21e1 push eax */
  push32((uint32_t)(EAX));
  /* 116a21e2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 116a21e5 push ecx */
  push32((uint32_t)(ECX));
  /* 116a21e6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116a21e9 push edx */
  push32((uint32_t)(EDX));
  /* 116a21ea call 0x116a97b0 */
  push32(0x116a21efu); f_116a97b0();
  /* 116a21ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a21f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a21f5 push eax */
  push32((uint32_t)(EAX));
  /* 116a21f6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 116a21f9 push ecx */
  push32((uint32_t)(ECX));
  /* 116a21fa call 0x116a20d0 */
  push32(0x116a21ffu); f_116a20d0();
  /* 116a21ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2202 mov esp, ebp */
  ESP = (EBP);
  /* 116a2204 pop ebp */
  EBP = (pop32());
  /* 116a2205 ret  */
  ESPCHK(0x116a21d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012210 @ 0x116a2210 (54 bytes, 24 insns) */
void f_116a2210(void) {
  FTRACE(0x116a2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2210 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2211 mov ebp, esp */
  EBP = (ESP);
  /* 116a2213 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2216 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a2218 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a221a push 0 */
  push32((uint32_t)(0x0u));
  /* 116a221c push 0 */
  push32((uint32_t)(0x0u));
  /* 116a221e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2221 push eax */
  push32((uint32_t)(EAX));
  /* 116a2222 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 116a2225 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2226 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 116a2229 push edx */
  push32((uint32_t)(EDX));
  /* 116a222a call 0x116a97b0 */
  push32(0x116a222fu); f_116a97b0();
  /* 116a222f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2235 push eax */
  push32((uint32_t)(EAX));
  /* 116a2236 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 116a2239 push ecx */
  push32((uint32_t)(ECX));
  /* 116a223a call 0x116a20b0 */
  push32(0x116a223fu); f_116a20b0();
  /* 116a223f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2242 mov esp, ebp */
  ESP = (EBP);
  /* 116a2244 pop ebp */
  EBP = (pop32());
  /* 116a2245 ret  */
  ESPCHK(0x116a2210u, _esp0);
  ESP += 4; return;
}

/* FUN_10012250 @ 0x116a2250 (250 bytes, 90 insns) */
void f_116a2250(void) {
  FTRACE(0x116a2250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2250 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2251 mov ebp, esp */
  EBP = (ESP);
  /* 116a2253 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a225c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a225f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a2262 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a2265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2268 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 116a226b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a226e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2271 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_116a2274:;
  /* 116a2274 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2278 jle 0x116a22bb */
  if ((C.zf||C.sf!=C.of)) goto L_116a22bb;
  /* 116a227a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a227d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 116a2280 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a2282 je 0x116a2298 */
  if (C.zf) goto L_116a2298;
  /* 116a2284 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2287 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a228a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a228d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2290 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2293 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a2296 jmp 0x116a229f */
  goto L_116a229f;
L_116a2298:;
  /* 116a2298 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_116a229f:;
  /* 116a229f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a22a2 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 116a22a5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 116a22a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a22aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a22ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a22b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a22b3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a22b6 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116a22b9 jmp 0x116a2274 */
  goto L_116a2274;
L_116a22bb:;
  /* 116a22bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a22be mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 116a22c1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a22c5 jl 0x116a2304 */
  if ((C.sf!=C.of)) goto L_116a2304;
  /* 116a22c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a22ca movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a22cd cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a22d0 jl 0x116a2304 */
  if ((C.sf!=C.of)) goto L_116a2304;
  /* 116a22d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a22d5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a22d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a22db:;
  /* 116a22db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a22de movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 116a22e1 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a22e4 jne 0x116a22f7 */
  if (!C.zf) goto L_116a22f7;
  /* 116a22e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a22e9 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 116a22ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a22ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a22f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a22f5 jmp 0x116a22db */
  goto L_116a22db;
L_116a22f7:;
  /* 116a22f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a22fa mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 116a22fc add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a22ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2302 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_116a2304:;
  /* 116a2304 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2307 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 116a230a cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a230d jne 0x116a2320 */
  if (!C.zf) goto L_116a2320;
  /* 116a230f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a2312 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a2315 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2318 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a231b mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116a231e jmp 0x116a2346 */
  goto L_116a2346;
L_116a2320:;
  /* 116a2320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2323 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2326 push eax */
  push32((uint32_t)(EAX));
  /* 116a2327 call 0x116a07b0 */
  push32(0x116a232cu); f_116a07b0();
  /* 116a232c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a232f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2332 push eax */
  push32((uint32_t)(EAX));
  /* 116a2333 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2336 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2339 push ecx */
  push32((uint32_t)(ECX));
  /* 116a233a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a233d push edx */
  push32((uint32_t)(EDX));
  /* 116a233e call 0x116a25a0 */
  push32(0x116a2343u); f_116a25a0();
  /* 116a2343 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a2346:;
  /* 116a2346 mov esp, ebp */
  ESP = (EBP);
  /* 116a2348 pop ebp */
  EBP = (pop32());
  /* 116a2349 ret  */
  ESPCHK(0x116a2250u, _esp0);
  ESP += 4; return;
}

/* FUN_10012350 @ 0x116a2350 (119 bytes, 44 insns) */
void f_116a2350(void) {
  FTRACE(0x116a2350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2350 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2351 mov ebp, esp */
  EBP = (ESP);
  /* 116a2353 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2356 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 116a2359 push eax */
  push32((uint32_t)(EAX));
  /* 116a235a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 116a235d push ecx */
  push32((uint32_t)(ECX));
  /* 116a235e call 0x116a23d0 */
  push32(0x116a2363u); f_116a23d0();
  /* 116a2363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2366 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 116a2369 push edx */
  push32((uint32_t)(EDX));
  /* 116a236a push 0 */
  push32((uint32_t)(0x0u));
  /* 116a236c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116a236e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2371 mov eax, esp */
  EAX = (ESP);
  /* 116a2373 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a2376 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116a2378 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a237b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a237e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a2382 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 116a2386 call 0x116aa330 */
  push32(0x116a238bu); f_116aa330();
  /* 116a238b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a238e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a2391 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116a2394 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 116a2398 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a239b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a239d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 116a23a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a23a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a23a7 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 116a23aa push ecx */
  push32((uint32_t)(ECX));
  /* 116a23ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a23ae push edx */
  push32((uint32_t)(EDX));
  /* 116a23af call 0x1169a7d0 */
  push32(0x116a23b4u); f_1169a7d0();
  /* 116a23b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a23b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a23ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 116a23bd mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 116a23c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a23c3 mov esp, ebp */
  ESP = (EBP);
  /* 116a23c5 pop ebp */
  EBP = (pop32());
  /* 116a23c6 ret  */
  ESPCHK(0x116a2350u, _esp0);
  ESP += 4; return;
}

/* FUN_100123d0 @ 0x116a23d0 (354 bytes, 104 insns) */
void f_116a23d0(void) {
  FTRACE(0x116a23d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a23d0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a23d1 mov ebp, esp */
  EBP = (ESP);
  /* 116a23d3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a23d6 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 116a23dd mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a23e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a23e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a23e8 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 116a23ec and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 116a23f2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116a23f5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 116a23f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a23fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a23fe mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 116a2402 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116a2407 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 116a240b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a240e mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a2411 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a2417 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a241a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a241d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a241f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116a2422 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a2425 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a242b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a242e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2432 je 0x116a2447 */
  if (C.zf) goto L_116a2447;
  /* 116a2434 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a243b je 0x116a243f */
  if (C.zf) goto L_116a243f;
  /* 116a243d jmp 0x116a248a */
  goto L_116a248a;
L_116a243f:;
  /* 116a243f mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 116a2445 jmp 0x116a24a5 */
  goto L_116a24a5;
L_116a2447:;
  /* 116a2447 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a244b jne 0x116a2474 */
  if (!C.zf) goto L_116a2474;
  /* 116a244d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2451 jne 0x116a2474 */
  if (!C.zf) goto L_116a2474;
  /* 116a2453 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2456 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 116a245d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2460 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 116a2466 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2469 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 116a246f jmp 0x116a252e */
  goto L_116a252e;
L_116a2474:;
  /* 116a2474 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 116a2478 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a247d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 116a2481 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a2488 jmp 0x116a24a5 */
  goto L_116a24a5;
L_116a248a:;
  /* 116a248a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 116a248e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 116a2493 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 116a2497 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 116a249b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a24a1 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_116a24a5:;
  /* 116a24a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a24a8 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 116a24ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a24ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a24b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a24b3 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 116a24b6 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a24b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a24bb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116a24be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a24c1 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 116a24c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a24c7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116a24c9:;
  /* 116a24c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a24cc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a24cf and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a24d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a24d7 jne 0x116a2514 */
  if (!C.zf) goto L_116a2514;
  /* 116a24d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a24dc mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a24df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116a24e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a24e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a24e6 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 116a24ec neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a24ee sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a24f0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a24f2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a24f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a24f7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116a24fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a24fd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a24ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116a2501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2504 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a2506 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 116a250a sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 116a250e mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 116a2512 jmp 0x116a24c9 */
  goto L_116a24c9;
L_116a2514:;
  /* 116a2514 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a2517 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a251c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a251f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a2525 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 116a2527 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a252a mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_116a252e:;
  /* 116a252e mov esp, ebp */
  ESP = (EBP);
  /* 116a2530 pop ebp */
  EBP = (pop32());
  /* 116a2531 ret  */
  ESPCHK(0x116a23d0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x116a2540 (88 bytes, 40 insns) */
void f_116a2540(void) {
  FTRACE(0x116a2540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2540 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 116a2544 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116a2548 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a254a je 0x116a2593 */
  if (C.zf) goto L_116a2593;
  /* 116a254c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a254e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 116a2552 push edi */
  push32((uint32_t)(EDI));
  /* 116a2553 mov edi, ecx */
  EDI = (ECX);
  /* 116a2555 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2558 jb 0x116a2587 */
  if (C.cf) goto L_116a2587;
  /* 116a255a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a255c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 116a255f je 0x116a2569 */
  if (C.zf) goto L_116a2569;
  /* 116a2561 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_116a2563:;
  /* 116a2563 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a2565 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116a2566 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116a2567 jne 0x116a2563 */
  if (!C.zf) goto L_116a2563;
L_116a2569:;
  /* 116a2569 mov ecx, eax */
  ECX = (EAX);
  /* 116a256b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 116a256e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2570 mov ecx, eax */
  ECX = (EAX);
  /* 116a2572 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116a2575 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2577 mov ecx, edx */
  ECX = (EDX);
  /* 116a2579 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116a257c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a257f je 0x116a2587 */
  if (C.zf) goto L_116a2587;
  /* 116a2581 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116a2583 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a2585 je 0x116a258d */
  if (C.zf) goto L_116a258d;
L_116a2587:;
  /* 116a2587 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a2589 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116a258a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 116a258b jne 0x116a2587 */
  if (!C.zf) goto L_116a2587;
L_116a258d:;
  /* 116a258d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116a2591 pop edi */
  EDI = (pop32());
  /* 116a2592 ret  */
  ESPCHK(0x116a2540u, _esp0);
  ESP += 4; return;
L_116a2593:;
  /* 116a2593 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 116a2597 ret  */
  ESPCHK(0x116a2540u, _esp0);
  ESP += 4; return;
}

/* FUN_100125a0 @ 0x116a25a0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_116a25a0(void) {
  FTRACE(0x116a25a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a25a0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a25a1 mov ebp, esp */
  EBP = (ESP);
  /* 116a25a3 push edi */
  push32((uint32_t)(EDI));
  /* 116a25a4 push esi */
  push32((uint32_t)(ESI));
  /* 116a25a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116a25a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a25ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116a25ae mov eax, ecx */
  EAX = (ECX);
  /* 116a25b0 mov edx, ecx */
  EDX = (ECX);
  /* 116a25b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a25b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a25b6 jbe 0x116a25c0 */
  if ((C.cf||C.zf)) goto L_116a25c0;
  /* 116a25b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a25ba jb 0x116a2738 */
  if (C.cf) goto L_116a2738;
L_116a25c0:;
  /* 116a25c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116a25c6 jne 0x116a25dc */
  if (!C.zf) goto L_116a25dc;
  /* 116a25c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a25cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116a25ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a25d1 jb 0x116a25fc */
  if (C.cf) goto L_116a25fc;
  /* 116a25d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a25d5 jmp dword ptr [edx*4 + 0x116a26e8] */
  switch (EDX) {
    case 0: goto L_116a26f8;
    case 1: goto L_116a2700;
    case 2: goto L_116a270c;
    case 3: goto L_116a2720;
    default: x86_unimpl("switch@0x116a25d5 out of table"); return;
  }
L_116a25dc:;
  /* 116a25dc mov eax, edi */
  EAX = (EDI);
  /* 116a25de mov edx, 3 */
  EDX = (0x3u);
  /* 116a25e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a25e6 jb 0x116a25f4 */
  if (C.cf) goto L_116a25f4;
  /* 116a25e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116a25eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a25ed jmp dword ptr [eax*4 + 0x116a2600] */
  switch (EAX) {
    case 1: goto L_116a2610;
    case 2: goto L_116a263c;
    case 3: goto L_116a2660;
    default: x86_unimpl("switch@0x116a25ed out of table"); return;
  }
L_116a25f4:;
  /* 116a25f4 jmp dword ptr [ecx*4 + 0x116a26f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x116a26f8)))); return;
  /* 116a25fb nop  */
  /* nop */
L_116a25fc:;
  /* 116a25fc jmp dword ptr [ecx*4 + 0x116a267c] */
  switch (ECX) {
    case 0: goto L_116a26df;
    case 1: goto L_116a26cc;
    case 2: goto L_116a26c4;
    case 3: goto L_116a26bc;
    case 4: goto L_116a26b4;
    case 5: goto L_116a26ac;
    case 6: goto L_116a26a4;
    case 7: goto L_116a269c;
    default: x86_unimpl("switch@0x116a25fc out of table"); return;
  }
  /* 116a2603 nop  */
  /* nop */
L_116a2610:;
  /* 116a2610 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a2612 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a2614 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a2616 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a2619 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a261c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a261f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a2622 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a2625 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2628 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a262b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a262e jb 0x116a25fc */
  if (C.cf) goto L_116a25fc;
  /* 116a2630 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a2632 jmp dword ptr [edx*4 + 0x116a26e8] */
  switch (EDX) {
    case 0: goto L_116a26f8;
    case 1: goto L_116a2700;
    case 2: goto L_116a270c;
    case 3: goto L_116a2720;
    default: x86_unimpl("switch@0x116a2632 out of table"); return;
  }
  /* 116a2639 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a263c:;
  /* 116a263c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a263e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a2640 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a2642 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a2645 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a2648 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a264b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a264e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2651 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2654 jb 0x116a25fc */
  if (C.cf) goto L_116a25fc;
  /* 116a2656 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a2658 jmp dword ptr [edx*4 + 0x116a26e8] */
  switch (EDX) {
    case 0: goto L_116a26f8;
    case 1: goto L_116a2700;
    case 2: goto L_116a270c;
    case 3: goto L_116a2720;
    default: x86_unimpl("switch@0x116a2658 out of table"); return;
  }
  /* 116a265f nop  */
  /* nop */
L_116a2660:;
  /* 116a2660 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a2662 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a2664 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a2666 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116a2667 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a266a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116a266b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a266e jb 0x116a25fc */
  if (C.cf) goto L_116a25fc;
  /* 116a2670 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a2672 jmp dword ptr [edx*4 + 0x116a26e8] */
  switch (EDX) {
    case 0: goto L_116a26f8;
    case 1: goto L_116a2700;
    case 2: goto L_116a270c;
    case 3: goto L_116a2720;
    default: x86_unimpl("switch@0x116a2672 out of table"); return;
  }
  /* 116a2679 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a269c:;
  /* 116a269c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 116a26a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_116a26a4:;
  /* 116a26a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 116a26a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_116a26ac:;
  /* 116a26ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 116a26b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_116a26b4:;
  /* 116a26b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 116a26b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_116a26bc:;
  /* 116a26bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 116a26c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_116a26c4:;
  /* 116a26c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 116a26c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_116a26cc:;
  /* 116a26cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 116a26d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 116a26d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 116a26db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a26dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116a26df:;
  /* 116a26df jmp dword ptr [edx*4 + 0x116a26e8] */
  switch (EDX) {
    case 0: goto L_116a26f8;
    case 1: goto L_116a2700;
    case 2: goto L_116a270c;
    case 3: goto L_116a2720;
    default: x86_unimpl("switch@0x116a26df out of table"); return;
  }
  /* 116a26e6 mov edi, edi */
  EDI = (EDI);
L_116a26f8:;
  /* 116a26f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a26fb pop esi */
  ESI = (pop32());
  /* 116a26fc pop edi */
  EDI = (pop32());
  /* 116a26fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a26fe ret  */
  ESPCHK(0x116a25a0u, _esp0);
  ESP += 4; return;
  /* 116a26ff nop  */
  /* nop */
L_116a2700:;
  /* 116a2700 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a2702 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a2704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2707 pop esi */
  ESI = (pop32());
  /* 116a2708 pop edi */
  EDI = (pop32());
  /* 116a2709 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a270a ret  */
  ESPCHK(0x116a25a0u, _esp0);
  ESP += 4; return;
  /* 116a270b nop  */
  /* nop */
L_116a270c:;
  /* 116a270c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a270e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a2710 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a2713 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a2716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2719 pop esi */
  ESI = (pop32());
  /* 116a271a pop edi */
  EDI = (pop32());
  /* 116a271b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a271c ret  */
  ESPCHK(0x116a25a0u, _esp0);
  ESP += 4; return;
  /* 116a271d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a2720:;
  /* 116a2720 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116a2722 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116a2724 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a2727 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a272a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a272d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a2730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2733 pop esi */
  ESI = (pop32());
  /* 116a2734 pop edi */
  EDI = (pop32());
  /* 116a2735 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a2736 ret  */
  ESPCHK(0x116a25a0u, _esp0);
  ESP += 4; return;
  /* 116a2737 nop  */
  /* nop */
L_116a2738:;
  /* 116a2738 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 116a273c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 116a2740 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 116a2746 jne 0x116a276c */
  if (!C.zf) goto L_116a276c;
  /* 116a2748 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a274b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116a274e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2751 jb 0x116a2760 */
  if (C.cf) goto L_116a2760;
  /* 116a2753 std  */
  C.df=1;
  /* 116a2754 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a2756 cld  */
  C.df=0;
  /* 116a2757 jmp dword ptr [edx*4 + 0x116a2880] */
  switch (EDX) {
    case 0: goto L_116a2890;
    case 1: goto L_116a2898;
    case 2: goto L_116a28a8;
    case 3: goto L_116a28bc;
    default: x86_unimpl("switch@0x116a2757 out of table"); return;
  }
  /* 116a275e mov edi, edi */
  EDI = (EDI);
L_116a2760:;
  /* 116a2760 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116a2762 jmp dword ptr [ecx*4 + 0x116a2830] */
  switch (ECX) {
    case 0: goto L_116a2877;
    default: x86_unimpl("switch@0x116a2762 out of table"); return;
  }
  /* 116a2769 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a276c:;
  /* 116a276c mov eax, edi */
  EAX = (EDI);
  /* 116a276e mov edx, 3 */
  EDX = (0x3u);
  /* 116a2773 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2776 jb 0x116a2784 */
  if (C.cf) goto L_116a2784;
  /* 116a2778 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116a277b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a277d jmp dword ptr [eax*4 + 0x116a2788] */
  switch (EAX) {
    case 1: goto L_116a2798;
    case 2: goto L_116a27b8;
    case 3: goto L_116a27e0;
    default: x86_unimpl("switch@0x116a277d out of table"); return;
  }
L_116a2784:;
  /* 116a2784 jmp dword ptr [ecx*4 + 0x116a2880] */
  switch (ECX) {
    case 0: goto L_116a2890;
    case 1: goto L_116a2898;
    case 2: goto L_116a28a8;
    case 3: goto L_116a28bc;
    default: x86_unimpl("switch@0x116a2784 out of table"); return;
  }
  /* 116a278b nop  */
  /* nop */
L_116a2798:;
  /* 116a2798 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a279b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a279d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a27a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 116a27a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a27a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 116a27a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a27a8 jb 0x116a2760 */
  if (C.cf) goto L_116a2760;
  /* 116a27aa std  */
  C.df=1;
  /* 116a27ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a27ad cld  */
  C.df=0;
  /* 116a27ae jmp dword ptr [edx*4 + 0x116a2880] */
  switch (EDX) {
    case 0: goto L_116a2890;
    case 1: goto L_116a2898;
    case 2: goto L_116a28a8;
    case 3: goto L_116a28bc;
    default: x86_unimpl("switch@0x116a27ae out of table"); return;
  }
  /* 116a27b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a27b8:;
  /* 116a27b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a27bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a27bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a27c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a27c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a27c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a27c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a27cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a27cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a27d2 jb 0x116a2760 */
  if (C.cf) goto L_116a2760;
  /* 116a27d4 std  */
  C.df=1;
  /* 116a27d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a27d7 cld  */
  C.df=0;
  /* 116a27d8 jmp dword ptr [edx*4 + 0x116a2880] */
  switch (EDX) {
    case 0: goto L_116a2890;
    case 1: goto L_116a2898;
    case 2: goto L_116a28a8;
    case 3: goto L_116a28bc;
    default: x86_unimpl("switch@0x116a27d8 out of table"); return;
  }
  /* 116a27df nop  */
  /* nop */
L_116a27e0:;
  /* 116a27e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a27e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116a27e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a27e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a27eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a27ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a27f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116a27f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a27f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a27fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a27fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2800 jb 0x116a2760 */
  if (C.cf) goto L_116a2760;
  /* 116a2806 std  */
  C.df=1;
  /* 116a2807 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116a2809 cld  */
  C.df=0;
  /* 116a280a jmp dword ptr [edx*4 + 0x116a2880] */
  switch (EDX) {
    case 0: goto L_116a2890;
    case 1: goto L_116a2898;
    case 2: goto L_116a28a8;
    case 3: goto L_116a28bc;
    default: x86_unimpl("switch@0x116a280a out of table"); return;
  }
  /* 116a2811 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 116a2814 xor al, 0x28 */
  { uint32_t _r=(AL)^(0x28u); AL = (_r); fl_logic(_r,8); }
  /* 116a2816 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116a2818 cmp al, 0x28 */
  { uint32_t _a=(AL),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116a281a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116a281c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 116a281d sub byte ptr [edx + 0x11], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + 0x11))),_b=(C.c.b.h),_r=_a-_b; w8((uint32_t)(EDX + 0x11), (_r)); fl_sub(_a,_b,_r,8); }
  /* 116a2820 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 116a2821 sub byte ptr [edx + 0x11], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + 0x11))),_b=(C.c.b.h),_r=_a-_b; w8((uint32_t)(EDX + 0x11), (_r)); fl_sub(_a,_b,_r,8); }
  /* 116a2824 push esp */
  push32((uint32_t)(ESP));
  /* 116a2825 sub byte ptr [edx + 0x11], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + 0x11))),_b=(C.c.b.h),_r=_a-_b; w8((uint32_t)(EDX + 0x11), (_r)); fl_sub(_a,_b,_r,8); }
  /* 116a2828 pop esp */
  ESP = (pop32());
  /* 116a2829 sub byte ptr [edx + 0x11], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + 0x11))),_b=(C.c.b.h),_r=_a-_b; w8((uint32_t)(EDX + 0x11), (_r)); fl_sub(_a,_b,_r,8); }
  /* 116a282c sub byte ptr fs:[edx + 0x11], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + 0x11))),_b=(C.c.b.h),_r=_a-_b; w8((uint32_t)(EDX + 0x11), (_r)); fl_sub(_a,_b,_r,8); }
  /* 116a2834 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 116a2838 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 116a283c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 116a2840 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 116a2844 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 116a2848 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 116a284c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 116a2850 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 116a2854 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 116a2858 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 116a285c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 116a2860 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 116a2864 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 116a2868 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 116a286c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 116a2873 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2875 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116a2877:;
  /* 116a2877 jmp dword ptr [edx*4 + 0x116a2880] */
  switch (EDX) {
    case 0: goto L_116a2890;
    case 1: goto L_116a2898;
    case 2: goto L_116a28a8;
    case 3: goto L_116a28bc;
    default: x86_unimpl("switch@0x116a2877 out of table"); return;
  }
  /* 116a287e mov edi, edi */
  EDI = (EDI);
L_116a2890:;
  /* 116a2890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2893 pop esi */
  ESI = (pop32());
  /* 116a2894 pop edi */
  EDI = (pop32());
  /* 116a2895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a2896 ret  */
  ESPCHK(0x116a25a0u, _esp0);
  ESP += 4; return;
  /* 116a2897 nop  */
  /* nop */
L_116a2898:;
  /* 116a2898 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a289b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a289e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a28a1 pop esi */
  ESI = (pop32());
  /* 116a28a2 pop edi */
  EDI = (pop32());
  /* 116a28a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a28a4 ret  */
  ESPCHK(0x116a25a0u, _esp0);
  ESP += 4; return;
  /* 116a28a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116a28a8:;
  /* 116a28a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a28ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a28ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a28b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a28b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a28b7 pop esi */
  ESI = (pop32());
  /* 116a28b8 pop edi */
  EDI = (pop32());
  /* 116a28b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a28ba ret  */
  ESPCHK(0x116a25a0u, _esp0);
  ESP += 4; return;
  /* 116a28bb nop  */
  /* nop */
L_116a28bc:;
  /* 116a28bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116a28bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116a28c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116a28c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116a28c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116a28cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116a28ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a28d1 pop esi */
  ESI = (pop32());
  /* 116a28d2 pop edi */
  EDI = (pop32());
  /* 116a28d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116a28d4 ret  */
  ESPCHK(0x116a25a0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x116a28e0 (15 bytes, 7 insns) */
void f_116a28e0(void) {
  FTRACE(0x116a28e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a28e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a28e1 mov ebp, esp */
  EBP = (ESP);
  /* 116a28e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a28e5 call 0x1169ac90 */
  push32(0x116a28eau); f_1169ac90();
  /* 116a28ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a28ed pop ebp */
  EBP = (pop32());
  /* 116a28ee ret  */
  ESPCHK(0x116a28e0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x116a28f0 (48 bytes, 17 insns) */
void f_116a28f0(void) {
  FTRACE(0x116a28f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a28f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a28f1 mov ebp, esp */
  EBP = (ESP);
  /* 116a28f3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a28f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 116a28f6 call 0x1169c120 */
  push32(0x116a28fbu); f_1169c120();
  /* 116a28fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a28fe mov eax, dword ptr [0x116d0744] */
  EAX = (r32((uint32_t)(0x116d0744)));
  /* 116a2903 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a2906 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2909 mov dword ptr [0x116d0744], ecx */
  w32((uint32_t)(0x116d0744), (ECX));
  /* 116a290f push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2911 call 0x1169c1c0 */
  push32(0x116a2916u); f_1169c1c0();
  /* 116a2916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2919 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a291c mov esp, ebp */
  ESP = (EBP);
  /* 116a291e pop ebp */
  EBP = (pop32());
  /* 116a291f ret  */
  ESPCHK(0x116a28f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012920 @ 0x116a2920 (10 bytes, 5 insns) */
void f_116a2920(void) {
  FTRACE(0x116a2920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2920 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2921 mov ebp, esp */
  EBP = (ESP);
  /* 116a2923 mov eax, dword ptr [0x116d0744] */
  EAX = (r32((uint32_t)(0x116d0744)));
  /* 116a2928 pop ebp */
  EBP = (pop32());
  /* 116a2929 ret  */
  ESPCHK(0x116a2920u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x116a2930 (45 bytes, 19 insns) */
void f_116a2930(void) {
  FTRACE(0x116a2930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2930 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2931 mov ebp, esp */
  EBP = (ESP);
  /* 116a2933 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2934 mov eax, dword ptr [0x116d0744] */
  EAX = (r32((uint32_t)(0x116d0744)));
  /* 116a2939 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a293c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2940 je 0x116a2950 */
  if (C.zf) goto L_116a2950;
  /* 116a2942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2945 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2946 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x116a2949u);
  /* 116a2949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a294c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a294e jne 0x116a2954 */
  if (!C.zf) goto L_116a2954;
L_116a2950:;
  /* 116a2950 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a2952 jmp 0x116a2959 */
  goto L_116a2959;
L_116a2954:;
  /* 116a2954 mov eax, 1 */
  EAX = (0x1u);
L_116a2959:;
  /* 116a2959 mov esp, ebp */
  ESP = (EBP);
  /* 116a295b pop ebp */
  EBP = (pop32());
  /* 116a295c ret  */
  ESPCHK(0x116a2930u, _esp0);
  ESP += 4; return;
}

/* FUN_10012960 @ 0x116a2960 (23 bytes, 10 insns) */
void f_116a2960(void) {
  FTRACE(0x116a2960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2960 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2961 mov ebp, esp */
  EBP = (ESP);
  /* 116a2963 mov eax, dword ptr [0x116d0740] */
  EAX = (r32((uint32_t)(0x116d0740)));
  /* 116a2968 push eax */
  push32((uint32_t)(EAX));
  /* 116a2969 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a296c push ecx */
  push32((uint32_t)(ECX));
  /* 116a296d call 0x116a2980 */
  push32(0x116a2972u); f_116a2980();
  /* 116a2972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2975 pop ebp */
  EBP = (pop32());
  /* 116a2976 ret  */
  ESPCHK(0x116a2960u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x116a2980 (87 bytes, 34 insns) */
void f_116a2980(void) {
  FTRACE(0x116a2980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2980 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2981 mov ebp, esp */
  EBP = (ESP);
  /* 116a2983 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2984 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2988 jbe 0x116a298e */
  if ((C.cf||C.zf)) goto L_116a298e;
  /* 116a298a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a298c jmp 0x116a29d3 */
  goto L_116a29d3;
L_116a298e:;
  /* 116a298e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2992 ja 0x116a29a5 */
  if ((!C.cf&&!C.zf)) goto L_116a29a5;
  /* 116a2994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2997 push eax */
  push32((uint32_t)(EAX));
  /* 116a2998 call 0x116a29e0 */
  push32(0x116a299du); f_116a29e0();
  /* 116a299d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a29a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a29a3 jmp 0x116a29ac */
  goto L_116a29ac;
L_116a29a5:;
  /* 116a29a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_116a29ac:;
  /* 116a29ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a29b0 jne 0x116a29b8 */
  if (!C.zf) goto L_116a29b8;
  /* 116a29b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a29b6 jne 0x116a29bd */
  if (!C.zf) goto L_116a29bd;
L_116a29b8:;
  /* 116a29b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a29bb jmp 0x116a29d3 */
  goto L_116a29d3;
L_116a29bd:;
  /* 116a29bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a29c0 push ecx */
  push32((uint32_t)(ECX));
  /* 116a29c1 call 0x116a2930 */
  push32(0x116a29c6u); f_116a2930();
  /* 116a29c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a29c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a29cb jne 0x116a29d1 */
  if (!C.zf) goto L_116a29d1;
  /* 116a29cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a29cf jmp 0x116a29d3 */
  goto L_116a29d3;
L_116a29d1:;
  /* 116a29d1 jmp 0x116a298e */
  goto L_116a298e;
L_116a29d3:;
  /* 116a29d3 mov esp, ebp */
  ESP = (EBP);
  /* 116a29d5 pop ebp */
  EBP = (pop32());
  /* 116a29d6 ret  */
  ESPCHK(0x116a2980u, _esp0);
  ESP += 4; return;
}

/* FUN_100129e0 @ 0x116a29e0 (109 bytes, 37 insns) */
void f_116a29e0(void) {
  FTRACE(0x116a29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a29e0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a29e1 mov ebp, esp */
  EBP = (ESP);
  /* 116a29e3 push ecx */
  push32((uint32_t)(ECX));
  /* 116a29e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a29e7 cmp eax, dword ptr [0x116ce4b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116ce4b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a29ed ja 0x116a2a1d */
  if ((!C.cf&&!C.zf)) goto L_116a2a1d;
  /* 116a29ef push 9 */
  push32((uint32_t)(0x9u));
  /* 116a29f1 call 0x1169c120 */
  push32(0x116a29f6u); f_1169c120();
  /* 116a29f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a29f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a29fc push ecx */
  push32((uint32_t)(ECX));
  /* 116a29fd call 0x116a3520 */
  push32(0x116a2a02u); f_116a3520();
  /* 116a2a02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2a05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a2a08 push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2a0a call 0x1169c1c0 */
  push32(0x116a2a0fu); f_1169c1c0();
  /* 116a2a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2a12 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2a16 je 0x116a2a1d */
  if (C.zf) goto L_116a2a1d;
  /* 116a2a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2a1b jmp 0x116a2a49 */
  goto L_116a2a49;
L_116a2a1d:;
  /* 116a2a1d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2a21 jne 0x116a2a2a */
  if (!C.zf) goto L_116a2a2a;
  /* 116a2a23 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_116a2a2a:;
  /* 116a2a2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2a2d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2a30 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 116a2a33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 116a2a36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2a39 push eax */
  push32((uint32_t)(EAX));
  /* 116a2a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 116a2a3c mov ecx, dword ptr [0x116d1eec] */
  ECX = (r32((uint32_t)(0x116d1eec)));
  /* 116a2a42 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2a43 call dword ptr [0x116d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33a4))), 0x116a2a49u);
L_116a2a49:;
  /* 116a2a49 mov esp, ebp */
  ESP = (EBP);
  /* 116a2a4b pop ebp */
  EBP = (pop32());
  /* 116a2a4c ret  */
  ESPCHK(0x116a29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a50 @ 0x116a2a50 (10 bytes, 5 insns) */
void f_116a2a50(void) {
  FTRACE(0x116a2a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2a50 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2a51 mov ebp, esp */
  EBP = (ESP);
  /* 116a2a53 mov eax, 1 */
  EAX = (0x1u);
  /* 116a2a58 pop ebp */
  EBP = (pop32());
  /* 116a2a59 ret  */
  ESPCHK(0x116a2a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a60 @ 0x116a2a60 (173 bytes, 59 insns) */
void f_116a2a60(void) {
  FTRACE(0x116a2a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2a60 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2a61 mov ebp, esp */
  EBP = (ESP);
  /* 116a2a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2a66 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2a6a jbe 0x116a2a73 */
  if ((C.cf||C.zf)) goto L_116a2a73;
  /* 116a2a6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a2a6e jmp 0x116a2b09 */
  goto L_116a2b09;
L_116a2a73:;
  /* 116a2a73 push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2a75 call 0x1169c120 */
  push32(0x116a2a7au); f_1169c120();
  /* 116a2a7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2a7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2a80 push eax */
  push32((uint32_t)(EAX));
  /* 116a2a81 call 0x116a2e90 */
  push32(0x116a2a86u); f_116a2e90();
  /* 116a2a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2a89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a2a8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2a90 je 0x116a2ad1 */
  if (C.zf) goto L_116a2ad1;
  /* 116a2a92 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 116a2a99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2a9c cmp ecx, dword ptr [0x116ce4b4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116ce4b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2aa2 ja 0x116a2ac2 */
  if ((!C.cf&&!C.zf)) goto L_116a2ac2;
  /* 116a2aa4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2aa7 push edx */
  push32((uint32_t)(EDX));
  /* 116a2aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2aab push eax */
  push32((uint32_t)(EAX));
  /* 116a2aac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2aaf push ecx */
  push32((uint32_t)(ECX));
  /* 116a2ab0 call 0x116a3d60 */
  push32(0x116a2ab5u); f_116a3d60();
  /* 116a2ab5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a2aba je 0x116a2ac2 */
  if (C.zf) goto L_116a2ac2;
  /* 116a2abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2abf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a2ac2:;
  /* 116a2ac2 push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2ac4 call 0x1169c1c0 */
  push32(0x116a2ac9u); f_1169c1c0();
  /* 116a2ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2acc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2acf jmp 0x116a2b09 */
  goto L_116a2b09;
L_116a2ad1:;
  /* 116a2ad1 push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2ad3 call 0x1169c1c0 */
  push32(0x116a2ad8u); f_1169c1c0();
  /* 116a2ad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2adb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2adf jne 0x116a2ae8 */
  if (!C.zf) goto L_116a2ae8;
  /* 116a2ae1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_116a2ae8:;
  /* 116a2ae8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2aeb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2aee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 116a2af0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116a2af3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2af6 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2af7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2afa push edx */
  push32((uint32_t)(EDX));
  /* 116a2afb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 116a2afd mov eax, dword ptr [0x116d1eec] */
  EAX = (r32((uint32_t)(0x116d1eec)));
  /* 116a2b02 push eax */
  push32((uint32_t)(EAX));
  /* 116a2b03 call dword ptr [0x116d33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33a0))), 0x116a2b09u);
L_116a2b09:;
  /* 116a2b09 mov esp, ebp */
  ESP = (EBP);
  /* 116a2b0b pop ebp */
  EBP = (pop32());
  /* 116a2b0c ret  */
  ESPCHK(0x116a2a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b10 @ 0x116a2b10 (490 bytes, 165 insns) */
void f_116a2b10(void) {
  FTRACE(0x116a2b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2b10 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2b11 mov ebp, esp */
  EBP = (ESP);
  /* 116a2b13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2b16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2b1a jne 0x116a2b2d */
  if (!C.zf) goto L_116a2b2d;
  /* 116a2b1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2b1f push eax */
  push32((uint32_t)(EAX));
  /* 116a2b20 call 0x116a2960 */
  push32(0x116a2b25u); f_116a2960();
  /* 116a2b25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2b28 jmp 0x116a2cf6 */
  goto L_116a2cf6;
L_116a2b2d:;
  /* 116a2b2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2b31 jne 0x116a2b46 */
  if (!C.zf) goto L_116a2b46;
  /* 116a2b33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2b36 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2b37 call 0x116a2d00 */
  push32(0x116a2b3cu); f_116a2d00();
  /* 116a2b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2b3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a2b41 jmp 0x116a2cf6 */
  goto L_116a2cf6;
L_116a2b46:;
  /* 116a2b46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 116a2b4d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2b51 ja 0x116a2cc9 */
  if ((!C.cf&&!C.zf)) goto L_116a2cc9;
  /* 116a2b57 push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2b59 call 0x1169c120 */
  push32(0x116a2b5eu); f_1169c120();
  /* 116a2b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2b61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2b64 push edx */
  push32((uint32_t)(EDX));
  /* 116a2b65 call 0x116a2e90 */
  push32(0x116a2b6au); f_116a2e90();
  /* 116a2b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2b6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a2b70 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2b74 je 0x116a2c8c */
  if (C.zf) goto L_116a2c8c;
  /* 116a2b7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2b7d cmp eax, dword ptr [0x116ce4b4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116ce4b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2b83 ja 0x116a2c00 */
  if ((!C.cf&&!C.zf)) goto L_116a2c00;
  /* 116a2b85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2b88 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2b89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2b8c push edx */
  push32((uint32_t)(EDX));
  /* 116a2b8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a2b90 push eax */
  push32((uint32_t)(EAX));
  /* 116a2b91 call 0x116a3d60 */
  push32(0x116a2b96u); f_116a3d60();
  /* 116a2b96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a2b9b je 0x116a2ba5 */
  if (C.zf) goto L_116a2ba5;
  /* 116a2b9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2ba0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a2ba3 jmp 0x116a2c00 */
  goto L_116a2c00;
L_116a2ba5:;
  /* 116a2ba5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2ba8 push edx */
  push32((uint32_t)(EDX));
  /* 116a2ba9 call 0x116a3520 */
  push32(0x116a2baeu); f_116a3520();
  /* 116a2bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2bb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a2bb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2bb8 je 0x116a2c00 */
  if (C.zf) goto L_116a2c00;
  /* 116a2bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2bbd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 116a2bc0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2bc3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a2bc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2bc9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2bcc jae 0x116a2bd6 */
  if (!C.cf) goto L_116a2bd6;
  /* 116a2bce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2bd1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a2bd4 jmp 0x116a2bdc */
  goto L_116a2bdc;
L_116a2bd6:;
  /* 116a2bd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2bd9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_116a2bdc:;
  /* 116a2bdc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a2bdf push edx */
  push32((uint32_t)(EDX));
  /* 116a2be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2be3 push eax */
  push32((uint32_t)(EAX));
  /* 116a2be4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2be7 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2be8 call 0x116a61d0 */
  push32(0x116a2bedu); f_116a61d0();
  /* 116a2bed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2bf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2bf3 push edx */
  push32((uint32_t)(EDX));
  /* 116a2bf4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a2bf7 push eax */
  push32((uint32_t)(EAX));
  /* 116a2bf8 call 0x116a2f50 */
  push32(0x116a2bfdu); f_116a2f50();
  /* 116a2bfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a2c00:;
  /* 116a2c00 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2c04 jne 0x116a2c80 */
  if (!C.zf) goto L_116a2c80;
  /* 116a2c06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2c0a jne 0x116a2c13 */
  if (!C.zf) goto L_116a2c13;
  /* 116a2c0c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_116a2c13:;
  /* 116a2c13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2c16 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2c19 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 116a2c1c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116a2c1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2c22 push edx */
  push32((uint32_t)(EDX));
  /* 116a2c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a2c25 mov eax, dword ptr [0x116d1eec] */
  EAX = (r32((uint32_t)(0x116d1eec)));
  /* 116a2c2a push eax */
  push32((uint32_t)(EAX));
  /* 116a2c2b call dword ptr [0x116d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33a4))), 0x116a2c31u);
  /* 116a2c31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a2c34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2c38 je 0x116a2c80 */
  if (C.zf) goto L_116a2c80;
  /* 116a2c3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2c3d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 116a2c40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2c43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a2c46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2c49 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2c4c jae 0x116a2c56 */
  if (!C.cf) goto L_116a2c56;
  /* 116a2c4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2c51 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116a2c54 jmp 0x116a2c5c */
  goto L_116a2c5c;
L_116a2c56:;
  /* 116a2c56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2c59 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_116a2c5c:;
  /* 116a2c5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a2c5f push eax */
  push32((uint32_t)(EAX));
  /* 116a2c60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2c63 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2c64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2c67 push edx */
  push32((uint32_t)(EDX));
  /* 116a2c68 call 0x116a61d0 */
  push32(0x116a2c6du); f_116a61d0();
  /* 116a2c6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2c70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2c73 push eax */
  push32((uint32_t)(EAX));
  /* 116a2c74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a2c77 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2c78 call 0x116a2f50 */
  push32(0x116a2c7du); f_116a2f50();
  /* 116a2c7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116a2c80:;
  /* 116a2c80 push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2c82 call 0x1169c1c0 */
  push32(0x116a2c87u); f_1169c1c0();
  /* 116a2c87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2c8a jmp 0x116a2cc9 */
  goto L_116a2cc9;
L_116a2c8c:;
  /* 116a2c8c push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2c8e call 0x1169c1c0 */
  push32(0x116a2c93u); f_1169c1c0();
  /* 116a2c93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2c96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2c9a jne 0x116a2ca3 */
  if (!C.zf) goto L_116a2ca3;
  /* 116a2c9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_116a2ca3:;
  /* 116a2ca3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2ca6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2ca9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 116a2cac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 116a2caf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2cb2 push eax */
  push32((uint32_t)(EAX));
  /* 116a2cb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a2cb9 mov edx, dword ptr [0x116d1eec] */
  EDX = (r32((uint32_t)(0x116d1eec)));
  /* 116a2cbf push edx */
  push32((uint32_t)(EDX));
  /* 116a2cc0 call dword ptr [0x116d33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33a0))), 0x116a2cc6u);
  /* 116a2cc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_116a2cc9:;
  /* 116a2cc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2ccd jne 0x116a2cd8 */
  if (!C.zf) goto L_116a2cd8;
  /* 116a2ccf cmp dword ptr [0x116d0740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2cd6 jne 0x116a2cdd */
  if (!C.zf) goto L_116a2cdd;
L_116a2cd8:;
  /* 116a2cd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2cdb jmp 0x116a2cf6 */
  goto L_116a2cf6;
L_116a2cdd:;
  /* 116a2cdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2ce0 push eax */
  push32((uint32_t)(EAX));
  /* 116a2ce1 call 0x116a2930 */
  push32(0x116a2ce6u); f_116a2930();
  /* 116a2ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a2ceb jne 0x116a2cf1 */
  if (!C.zf) goto L_116a2cf1;
  /* 116a2ced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a2cef jmp 0x116a2cf6 */
  goto L_116a2cf6;
L_116a2cf1:;
  /* 116a2cf1 jmp 0x116a2b46 */
  goto L_116a2b46;
L_116a2cf6:;
  /* 116a2cf6 mov esp, ebp */
  ESP = (EBP);
  /* 116a2cf8 pop ebp */
  EBP = (pop32());
  /* 116a2cf9 ret  */
  ESPCHK(0x116a2b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d00 @ 0x116a2d00 (104 bytes, 38 insns) */
void f_116a2d00(void) {
  FTRACE(0x116a2d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2d00 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2d01 mov ebp, esp */
  EBP = (ESP);
  /* 116a2d03 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2d04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2d08 jne 0x116a2d0c */
  if (!C.zf) goto L_116a2d0c;
  /* 116a2d0a jmp 0x116a2d64 */
  goto L_116a2d64;
L_116a2d0c:;
  /* 116a2d0c push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2d0e call 0x1169c120 */
  push32(0x116a2d13u); f_1169c120();
  /* 116a2d13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2d19 push eax */
  push32((uint32_t)(EAX));
  /* 116a2d1a call 0x116a2e90 */
  push32(0x116a2d1fu); f_116a2e90();
  /* 116a2d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2d22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a2d25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2d29 je 0x116a2d47 */
  if (C.zf) goto L_116a2d47;
  /* 116a2d2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2d2e push ecx */
  push32((uint32_t)(ECX));
  /* 116a2d2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2d32 push edx */
  push32((uint32_t)(EDX));
  /* 116a2d33 call 0x116a2f50 */
  push32(0x116a2d38u); f_116a2f50();
  /* 116a2d38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2d3b push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2d3d call 0x1169c1c0 */
  push32(0x116a2d42u); f_1169c1c0();
  /* 116a2d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2d45 jmp 0x116a2d64 */
  goto L_116a2d64;
L_116a2d47:;
  /* 116a2d47 push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2d49 call 0x1169c1c0 */
  push32(0x116a2d4eu); f_1169c1c0();
  /* 116a2d4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2d51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2d54 push eax */
  push32((uint32_t)(EAX));
  /* 116a2d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a2d57 mov ecx, dword ptr [0x116d1eec] */
  ECX = (r32((uint32_t)(0x116d1eec)));
  /* 116a2d5d push ecx */
  push32((uint32_t)(ECX));
  /* 116a2d5e call dword ptr [0x116d33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33b0))), 0x116a2d64u);
L_116a2d64:;
  /* 116a2d64 mov esp, ebp */
  ESP = (EBP);
  /* 116a2d66 pop ebp */
  EBP = (pop32());
  /* 116a2d67 ret  */
  ESPCHK(0x116a2d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d70 @ 0x116a2d70 (116 bytes, 34 insns) */
void f_116a2d70(void) {
  FTRACE(0x116a2d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2d70 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2d71 mov ebp, esp */
  EBP = (ESP);
  /* 116a2d73 push ecx */
  push32((uint32_t)(ECX));
  /* 116a2d74 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 116a2d7b push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2d7d call 0x1169c120 */
  push32(0x116a2d82u); f_1169c120();
  /* 116a2d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2d85 call 0x116a4480 */
  push32(0x116a2d8au); f_116a4480();
  /* 116a2d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a2d8c jge 0x116a2d95 */
  if ((C.sf==C.of)) goto L_116a2d95;
  /* 116a2d8e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_116a2d95:;
  /* 116a2d95 push 9 */
  push32((uint32_t)(0x9u));
  /* 116a2d97 call 0x1169c1c0 */
  push32(0x116a2d9cu); f_1169c1c0();
  /* 116a2d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 116a2da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a2da3 mov eax, dword ptr [0x116d1eec] */
  EAX = (r32((uint32_t)(0x116d1eec)));
  /* 116a2da8 push eax */
  push32((uint32_t)(EAX));
  /* 116a2da9 call dword ptr [0x116d3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3404))), 0x116a2dafu);
  /* 116a2daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a2db1 jne 0x116a2ddd */
  if (!C.zf) goto L_116a2ddd;
  /* 116a2db3 call dword ptr [0x116d33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33e8))), 0x116a2db9u);
  /* 116a2db9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2dbc jne 0x116a2dd6 */
  if (!C.zf) goto L_116a2dd6;
  /* 116a2dbe call 0x116a77d0 */
  push32(0x116a2dc3u); f_116a77d0();
  /* 116a2dc3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 116a2dc9 call 0x116a77c0 */
  push32(0x116a2dceu); f_116a77c0();
  /* 116a2dce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 116a2dd4 jmp 0x116a2ddd */
  goto L_116a2ddd;
L_116a2dd6:;
  /* 116a2dd6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_116a2ddd:;
  /* 116a2ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2de0 mov esp, ebp */
  ESP = (EBP);
  /* 116a2de2 pop ebp */
  EBP = (pop32());
  /* 116a2de3 ret  */
  ESPCHK(0x116a2d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10012df0 @ 0x116a2df0 (10 bytes, 5 insns) */
void f_116a2df0(void) {
  FTRACE(0x116a2df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2df0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2df1 mov ebp, esp */
  EBP = (ESP);
  /* 116a2df3 call 0x116a2d70 */
  push32(0x116a2df8u); f_116a2d70();
  /* 116a2df8 pop ebp */
  EBP = (pop32());
  /* 116a2df9 ret  */
  ESPCHK(0x116a2df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e00 @ 0x116a2e00 (10 bytes, 5 insns) */
void f_116a2e00(void) {
  FTRACE(0x116a2e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2e00 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2e01 mov ebp, esp */
  EBP = (ESP);
  /* 116a2e03 mov eax, dword ptr [0x116ce4b4] */
  EAX = (r32((uint32_t)(0x116ce4b4)));
  /* 116a2e08 pop ebp */
  EBP = (pop32());
  /* 116a2e09 ret  */
  ESPCHK(0x116a2e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e10 @ 0x116a2e10 (31 bytes, 11 insns) */
void f_116a2e10(void) {
  FTRACE(0x116a2e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2e10 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2e11 mov ebp, esp */
  EBP = (ESP);
  /* 116a2e13 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2e1a jbe 0x116a2e20 */
  if ((C.cf||C.zf)) goto L_116a2e20;
  /* 116a2e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a2e1e jmp 0x116a2e2d */
  goto L_116a2e2d;
L_116a2e20:;
  /* 116a2e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2e23 mov dword ptr [0x116ce4b4], eax */
  w32((uint32_t)(0x116ce4b4), (EAX));
  /* 116a2e28 mov eax, 1 */
  EAX = (0x1u);
L_116a2e2d:;
  /* 116a2e2d pop ebp */
  EBP = (pop32());
  /* 116a2e2e ret  */
  ESPCHK(0x116a2e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e30 @ 0x116a2e30 (89 bytes, 20 insns) */
void f_116a2e30(void) {
  FTRACE(0x116a2e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2e30 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2e31 mov ebp, esp */
  EBP = (ESP);
  /* 116a2e33 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 116a2e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a2e3a mov eax, dword ptr [0x116d1eec] */
  EAX = (r32((uint32_t)(0x116d1eec)));
  /* 116a2e3f push eax */
  push32((uint32_t)(EAX));
  /* 116a2e40 call dword ptr [0x116d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33a4))), 0x116a2e46u);
  /* 116a2e46 mov dword ptr [0x116d1ee8], eax */
  w32((uint32_t)(0x116d1ee8), (EAX));
  /* 116a2e4b cmp dword ptr [0x116d1ee8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1ee8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2e52 jne 0x116a2e58 */
  if (!C.zf) goto L_116a2e58;
  /* 116a2e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a2e56 jmp 0x116a2e87 */
  goto L_116a2e87;
L_116a2e58:;
  /* 116a2e58 mov ecx, dword ptr [0x116d1ee8] */
  ECX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a2e5e mov dword ptr [0x116d1edc], ecx */
  w32((uint32_t)(0x116d1edc), (ECX));
  /* 116a2e64 mov dword ptr [0x116d1ee0], 0 */
  w32((uint32_t)(0x116d1ee0), (0x0u));
  /* 116a2e6e mov dword ptr [0x116d1ee4], 0 */
  w32((uint32_t)(0x116d1ee4), (0x0u));
  /* 116a2e78 mov dword ptr [0x116d1ec8], 0x10 */
  w32((uint32_t)(0x116d1ec8), (0x10u));
  /* 116a2e82 mov eax, 1 */
  EAX = (0x1u);
L_116a2e87:;
  /* 116a2e87 pop ebp */
  EBP = (pop32());
  /* 116a2e88 ret  */
  ESPCHK(0x116a2e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e90 @ 0x116a2e90 (85 bytes, 29 insns) */
void f_116a2e90(void) {
  FTRACE(0x116a2e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2e90 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2e91 mov ebp, esp */
  EBP = (ESP);
  /* 116a2e93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2e96 mov eax, dword ptr [0x116d1ee4] */
  EAX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a2e9b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a2e9e mov ecx, dword ptr [0x116d1ee8] */
  ECX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a2ea4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2ea6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a2ea9 mov edx, dword ptr [0x116d1ee8] */
  EDX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a2eaf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_116a2eb2:;
  /* 116a2eb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2eb5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2eb8 jae 0x116a2edf */
  if (!C.cf) goto L_116a2edf;
  /* 116a2eba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2ebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2ec0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2ec3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a2ec6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2ecd jae 0x116a2ed4 */
  if (!C.cf) goto L_116a2ed4;
  /* 116a2ecf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2ed2 jmp 0x116a2ee1 */
  goto L_116a2ee1;
L_116a2ed4:;
  /* 116a2ed4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2ed7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2eda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a2edd jmp 0x116a2eb2 */
  goto L_116a2eb2;
L_116a2edf:;
  /* 116a2edf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a2ee1:;
  /* 116a2ee1 mov esp, ebp */
  ESP = (EBP);
  /* 116a2ee3 pop ebp */
  EBP = (pop32());
  /* 116a2ee4 ret  */
  ESPCHK(0x116a2e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x116a2ef0 (95 bytes, 33 insns) */
void f_116a2ef0(void) {
  FTRACE(0x116a2ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2ef1 mov ebp, esp */
  EBP = (ESP);
  /* 116a2ef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2ef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2ef9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2efc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2eff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a2f02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2f05 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 116a2f08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a2f0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a2f10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2f13 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a2f15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2f18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a2f1b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a2f1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a2f1f jne 0x116a2f41 */
  if (!C.zf) goto L_116a2f41;
  /* 116a2f21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2f24 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 116a2f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a2f29 jne 0x116a2f41 */
  if (!C.zf) goto L_116a2f41;
  /* 116a2f2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a2f2e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a2f34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a2f36 je 0x116a2f41 */
  if (C.zf) goto L_116a2f41;
  /* 116a2f38 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 116a2f3f jmp 0x116a2f48 */
  goto L_116a2f48;
L_116a2f41:;
  /* 116a2f41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_116a2f48:;
  /* 116a2f48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a2f4b mov esp, ebp */
  ESP = (EBP);
  /* 116a2f4d pop ebp */
  EBP = (pop32());
  /* 116a2f4e ret  */
  ESPCHK(0x116a2ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f50 @ 0x116a2f50 (1485 bytes, 453 insns) */
void f_116a2f50(void) {
  FTRACE(0x116a2f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a2f50 push ebp */
  push32((uint32_t)(EBP));
  /* 116a2f51 mov ebp, esp */
  EBP = (ESP);
  /* 116a2f53 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2f59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a2f5c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 116a2f5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a2f62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2f65 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2f68 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a2f6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a2f6e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 116a2f71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a2f74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a2f77 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a2f7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a2f80 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 116a2f87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a2f8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a2f8d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2f90 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a2f93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a2f96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a2f98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2f9b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 116a2f9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a2fa1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a2fa4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 116a2fa7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a2faa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a2fac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116a2faf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a2fb2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 116a2fb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116a2fb8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a2fbb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a2fbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a2fc0 jne 0x116a30e8 */
  if (!C.zf) goto L_116a30e8;
  /* 116a2fc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a2fc9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116a2fcc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a2fcf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116a2fd2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2fd6 jbe 0x116a2fdf */
  if ((C.cf||C.zf)) goto L_116a2fdf;
  /* 116a2fd8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_116a2fdf:;
  /* 116a2fdf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a2fe2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a2fe5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a2fe8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2feb jne 0x116a30c1 */
  if (!C.zf) goto L_116a30c1;
  /* 116a2ff1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a2ff5 jae 0x116a3056 */
  if (!C.cf) goto L_116a3056;
  /* 116a2ff7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a2ffc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a2fff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a3001 not eax */
  EAX = (~(EAX));
  /* 116a3003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3006 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3009 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 116a300d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a300f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3012 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3015 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 116a3019 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a301c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a301f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116a3022 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a3025 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3028 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a302b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116a302e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3031 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3034 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116a3038 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a303a jne 0x116a3054 */
  if (!C.zf) goto L_116a3054;
  /* 116a303c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a3041 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a3044 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a3046 not eax */
  EAX = (~(EAX));
  /* 116a3048 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a304b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a304d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a304f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3052 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116a3054:;
  /* 116a3054 jmp 0x116a30c1 */
  goto L_116a30c1;
L_116a3056:;
  /* 116a3056 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a3059 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a305c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a3061 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a3063 not edx */
  EDX = (~(EDX));
  /* 116a3065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3068 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a306b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 116a3072 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a3074 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3077 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a307a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 116a3081 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3084 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3087 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116a308a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a308d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3090 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3093 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116a3096 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3099 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a309c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116a30a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a30a2 jne 0x116a30c1 */
  if (!C.zf) goto L_116a30c1;
  /* 116a30a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a30a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a30aa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a30af shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a30b1 not edx */
  EDX = (~(EDX));
  /* 116a30b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a30b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a30b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a30bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a30be mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116a30c1:;
  /* 116a30c1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a30c4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a30c7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a30ca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a30cd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116a30d0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a30d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a30d6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a30d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a30dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116a30df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a30e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a30e5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_116a30e8:;
  /* 116a30e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a30eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116a30ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a30f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a30f4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a30f8 jbe 0x116a3101 */
  if ((C.cf||C.zf)) goto L_116a3101;
  /* 116a30fa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_116a3101:;
  /* 116a3101 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a3104 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a3107 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a3109 jne 0x116a3265 */
  if (!C.zf) goto L_116a3265;
  /* 116a310f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a3112 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3115 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 116a3118 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a311b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116a311e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3121 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 116a3124 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3128 jbe 0x116a3131 */
  if ((C.cf||C.zf)) goto L_116a3131;
  /* 116a312a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_116a3131:;
  /* 116a3131 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3134 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3137 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 116a313a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a313d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116a3140 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3143 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 116a3146 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a314a jbe 0x116a3153 */
  if ((C.cf||C.zf)) goto L_116a3153;
  /* 116a314c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_116a3153:;
  /* 116a3153 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3156 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3159 je 0x116a325f */
  if (C.zf) goto L_116a325f;
  /* 116a315f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a3162 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a3165 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a3168 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a316b jne 0x116a3241 */
  if (!C.zf) goto L_116a3241;
  /* 116a3171 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3175 jae 0x116a31d6 */
  if (!C.cf) goto L_116a31d6;
  /* 116a3177 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a317c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a317f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a3181 not edx */
  EDX = (~(EDX));
  /* 116a3183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3186 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3189 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116a318d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a318f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3192 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3195 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116a3199 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a319c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a319f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116a31a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a31a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a31a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a31ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116a31ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a31b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a31b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116a31b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a31ba jne 0x116a31d4 */
  if (!C.zf) goto L_116a31d4;
  /* 116a31bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a31c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a31c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a31c6 not edx */
  EDX = (~(EDX));
  /* 116a31c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a31cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a31cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a31cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a31d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116a31d4:;
  /* 116a31d4 jmp 0x116a3241 */
  goto L_116a3241;
L_116a31d6:;
  /* 116a31d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a31d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a31dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a31e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a31e3 not eax */
  EAX = (~(EAX));
  /* 116a31e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a31e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a31eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116a31f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a31f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a31f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a31fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 116a3201 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3204 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3207 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116a320a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a320d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3210 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3213 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116a3216 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3219 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a321c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116a3220 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a3222 jne 0x116a3241 */
  if (!C.zf) goto L_116a3241;
  /* 116a3224 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3227 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a322a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a322f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a3231 not eax */
  EAX = (~(EAX));
  /* 116a3233 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3236 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a3239 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a323b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a323e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116a3241:;
  /* 116a3241 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a3244 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a3247 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a324a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a324d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116a3250 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a3253 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a3256 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a3259 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a325c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_116a325f:;
  /* 116a325f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a3262 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_116a3265:;
  /* 116a3265 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a3268 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a326b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a326d jne 0x116a327b */
  if (!C.zf) goto L_116a327b;
  /* 116a326f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3272 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3275 je 0x116a338b */
  if (C.zf) goto L_116a338b;
L_116a327b:;
  /* 116a327b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a327e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a3281 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 116a3284 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116a3287 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a328a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a328d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a3290 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a3293 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a3296 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3299 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 116a329c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a329f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a32a2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116a32a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a32a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a32ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a32ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116a32b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a32b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a32b7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a32ba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a32bd jne 0x116a338b */
  if (!C.zf) goto L_116a338b;
  /* 116a32c3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a32c7 jae 0x116a3324 */
  if (!C.cf) goto L_116a3324;
  /* 116a32c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a32cc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a32cf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116a32d3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a32d6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a32d9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116a32dc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a32df mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a32e2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a32e5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 116a32e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a32ea jne 0x116a3302 */
  if (!C.zf) goto L_116a3302;
  /* 116a32ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a32f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a32f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a32f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a32f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a32fb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a32fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3300 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116a3302:;
  /* 116a3302 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a3307 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a330a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a330c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a330f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3312 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 116a3316 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a3318 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a331b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a331e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 116a3322 jmp 0x116a338b */
  goto L_116a338b;
L_116a3324:;
  /* 116a3324 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3327 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a332a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116a332e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3331 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3334 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116a3337 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a333a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a333d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3340 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 116a3343 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a3345 jne 0x116a3362 */
  if (!C.zf) goto L_116a3362;
  /* 116a3347 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a334a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a334d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a3352 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a3354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3357 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a335a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a335c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a335f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116a3362:;
  /* 116a3362 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3365 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3368 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a336d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a336f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3372 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3375 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116a337c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a337e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3381 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 116a3384 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_116a338b:;
  /* 116a338b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a338e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3391 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a3393 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a3396 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3399 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a339c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 116a339f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a33a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a33a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a33a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a33aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a33ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a33af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a33b2 jne 0x116a3519 */
  if (!C.zf) goto L_116a3519;
  /* 116a33b8 cmp dword ptr [0x116d1ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a33bf je 0x116a3508 */
  if (C.zf) goto L_116a3508;
  /* 116a33c5 mov eax, dword ptr [0x116d1ed8] */
  EAX = (r32((uint32_t)(0x116d1ed8)));
  /* 116a33ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 116a33cd mov ecx, dword ptr [0x116d1ee0] */
  ECX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a33d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a33d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a33d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116a33db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 116a33e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116a33e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a33e8 push eax */
  push32((uint32_t)(EAX));
  /* 116a33e9 call dword ptr [0x116d33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33ac))), 0x116a33efu);
  /* 116a33ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a33f4 mov ecx, dword ptr [0x116d1ed8] */
  ECX = (r32((uint32_t)(0x116d1ed8)));
  /* 116a33fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a33fc mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a3401 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a3404 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a3406 mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a340c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116a340f mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a3414 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a3417 mov edx, dword ptr [0x116d1ed8] */
  EDX = (r32((uint32_t)(0x116d1ed8)));
  /* 116a341d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 116a3428 mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a342d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a3430 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 116a3433 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a3436 mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a343b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a343e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 116a3441 mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a3447 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116a344a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 116a344e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a3450 jne 0x116a3466 */
  if (!C.zf) goto L_116a3466;
  /* 116a3452 mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a3458 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a345b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 116a345d mov ecx, dword ptr [0x116d1ee0] */
  ECX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a3463 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_116a3466:;
  /* 116a3466 mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a346c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3470 jne 0x116a3508 */
  if (!C.zf) goto L_116a3508;
  /* 116a3476 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116a347b push 0 */
  push32((uint32_t)(0x0u));
  /* 116a347d mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a3482 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116a3485 push ecx */
  push32((uint32_t)(ECX));
  /* 116a3486 call dword ptr [0x116d33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33ac))), 0x116a348cu);
  /* 116a348c mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a3492 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116a3495 push eax */
  push32((uint32_t)(EAX));
  /* 116a3496 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a3498 mov ecx, dword ptr [0x116d1eec] */
  ECX = (r32((uint32_t)(0x116d1eec)));
  /* 116a349e push ecx */
  push32((uint32_t)(ECX));
  /* 116a349f call dword ptr [0x116d33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33b0))), 0x116a34a5u);
  /* 116a34a5 mov edx, dword ptr [0x116d1ee4] */
  EDX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a34ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a34ae mov eax, dword ptr [0x116d1ee8] */
  EAX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a34b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a34b5 mov ecx, dword ptr [0x116d1ee0] */
  ECX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a34bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a34be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a34c0 push eax */
  push32((uint32_t)(EAX));
  /* 116a34c1 mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a34c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a34ca push edx */
  push32((uint32_t)(EDX));
  /* 116a34cb mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a34d0 push eax */
  push32((uint32_t)(EAX));
  /* 116a34d1 call 0x116a25a0 */
  push32(0x116a34d6u); f_116a25a0();
  /* 116a34d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a34d9 mov ecx, dword ptr [0x116d1ee4] */
  ECX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a34df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a34e2 mov dword ptr [0x116d1ee4], ecx */
  w32((uint32_t)(0x116d1ee4), (ECX));
  /* 116a34e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a34eb cmp edx, dword ptr [0x116d1ee0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x116d1ee0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a34f1 jbe 0x116a34fc */
  if ((C.cf||C.zf)) goto L_116a34fc;
  /* 116a34f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a34f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a34f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_116a34fc:;
  /* 116a34fc mov ecx, dword ptr [0x116d1ee8] */
  ECX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a3502 mov dword ptr [0x116d1edc], ecx */
  w32((uint32_t)(0x116d1edc), (ECX));
L_116a3508:;
  /* 116a3508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a350b mov dword ptr [0x116d1ee0], edx */
  w32((uint32_t)(0x116d1ee0), (EDX));
  /* 116a3511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3514 mov dword ptr [0x116d1ed8], eax */
  w32((uint32_t)(0x116d1ed8), (EAX));
L_116a3519:;
  /* 116a3519 mov esp, ebp */
  ESP = (EBP);
  /* 116a351b pop ebp */
  EBP = (pop32());
  /* 116a351c ret  */
  ESPCHK(0x116a2f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013520 @ 0x116a3520 (1334 bytes, 427 insns) */
void f_116a3520(void) {
  FTRACE(0x116a3520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a3520 push ebp */
  push32((uint32_t)(EBP));
  /* 116a3521 mov ebp, esp */
  EBP = (ESP);
  /* 116a3523 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3526 push esi */
  push32((uint32_t)(ESI));
  /* 116a3527 mov eax, dword ptr [0x116d1ee4] */
  EAX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a352c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a352f mov ecx, dword ptr [0x116d1ee8] */
  ECX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a3535 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3537 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116a353a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a353d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3540 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 116a3543 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 116a3546 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3549 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116a354c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a354f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a3552 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3556 jge 0x116a356c */
  if ((C.sf==C.of)) goto L_116a356c;
  /* 116a3558 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 116a355b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a355e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a3560 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116a3563 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 116a356a jmp 0x116a3581 */
  goto L_116a3581;
L_116a356c:;
  /* 116a356c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 116a3573 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3576 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3579 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a357c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a357e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_116a3581:;
  /* 116a3581 mov ecx, dword ptr [0x116d1edc] */
  ECX = (r32((uint32_t)(0x116d1edc)));
  /* 116a3587 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_116a358a:;
  /* 116a358a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a358d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3590 jae 0x116a35b6 */
  if (!C.cf) goto L_116a35b6;
  /* 116a3592 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a3598 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 116a359a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a359d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a35a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 116a35a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a35a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a35a7 je 0x116a35ab */
  if (C.zf) goto L_116a35ab;
  /* 116a35a9 jmp 0x116a35b6 */
  goto L_116a35b6;
L_116a35ab:;
  /* 116a35ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a35ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a35b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116a35b4 jmp 0x116a358a */
  goto L_116a358a;
L_116a35b6:;
  /* 116a35b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a35b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a35bc jne 0x116a369d */
  if (!C.zf) goto L_116a369d;
  /* 116a35c2 mov eax, dword ptr [0x116d1ee8] */
  EAX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a35c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_116a35ca:;
  /* 116a35ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a35cd cmp ecx, dword ptr [0x116d1edc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d1edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a35d3 jae 0x116a35f9 */
  if (!C.cf) goto L_116a35f9;
  /* 116a35d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a35d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a35db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 116a35dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a35e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a35e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 116a35e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a35e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a35ea je 0x116a35ee */
  if (C.zf) goto L_116a35ee;
  /* 116a35ec jmp 0x116a35f9 */
  goto L_116a35f9;
L_116a35ee:;
  /* 116a35ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a35f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a35f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a35f7 jmp 0x116a35ca */
  goto L_116a35ca;
L_116a35f9:;
  /* 116a35f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a35fc cmp ecx, dword ptr [0x116d1edc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d1edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3602 jne 0x116a369d */
  if (!C.zf) goto L_116a369d;
L_116a3608:;
  /* 116a3608 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a360b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a360e jae 0x116a3626 */
  if (!C.cf) goto L_116a3626;
  /* 116a3610 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3613 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3617 je 0x116a361b */
  if (C.zf) goto L_116a361b;
  /* 116a3619 jmp 0x116a3626 */
  goto L_116a3626;
L_116a361b:;
  /* 116a361b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a361e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3621 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116a3624 jmp 0x116a3608 */
  goto L_116a3608;
L_116a3626:;
  /* 116a3626 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3629 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a362c jne 0x116a3677 */
  if (!C.zf) goto L_116a3677;
  /* 116a362e mov eax, dword ptr [0x116d1ee8] */
  EAX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a3633 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_116a3636:;
  /* 116a3636 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3639 cmp ecx, dword ptr [0x116d1edc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d1edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a363f jae 0x116a3657 */
  if (!C.cf) goto L_116a3657;
  /* 116a3641 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3644 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3648 je 0x116a364c */
  if (C.zf) goto L_116a364c;
  /* 116a364a jmp 0x116a3657 */
  goto L_116a3657;
L_116a364c:;
  /* 116a364c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a364f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3652 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a3655 jmp 0x116a3636 */
  goto L_116a3636;
L_116a3657:;
  /* 116a3657 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a365a cmp ecx, dword ptr [0x116d1edc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d1edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3660 jne 0x116a3677 */
  if (!C.zf) goto L_116a3677;
  /* 116a3662 call 0x116a3a60 */
  push32(0x116a3667u); f_116a3a60();
  /* 116a3667 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a366a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a366e jne 0x116a3677 */
  if (!C.zf) goto L_116a3677;
  /* 116a3670 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a3672 jmp 0x116a3a51 */
  goto L_116a3a51;
L_116a3677:;
  /* 116a3677 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a367a push edx */
  push32((uint32_t)(EDX));
  /* 116a367b call 0x116a3b70 */
  push32(0x116a3680u); f_116a3b70();
  /* 116a3680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3683 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3686 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116a3689 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116a368b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a368e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a3691 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3694 jne 0x116a369d */
  if (!C.zf) goto L_116a369d;
  /* 116a3696 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a3698 jmp 0x116a3a51 */
  goto L_116a3a51;
L_116a369d:;
  /* 116a369d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a36a0 mov dword ptr [0x116d1edc], edx */
  w32((uint32_t)(0x116d1edc), (EDX));
  /* 116a36a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a36a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a36ac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 116a36af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a36b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a36b4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 116a36b7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a36bb je 0x116a36e0 */
  if (C.zf) goto L_116a36e0;
  /* 116a36bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a36c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a36c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a36c6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 116a36ca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a36cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a36d0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 116a36d3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 116a36da or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 116a36dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a36de jne 0x116a3715 */
  if (!C.zf) goto L_116a3715;
L_116a36e0:;
  /* 116a36e0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_116a36e7:;
  /* 116a36e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a36ea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a36ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a36f0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 116a36f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a36f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a36fa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 116a36fd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 116a3704 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 116a3706 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a3708 jne 0x116a3715 */
  if (!C.zf) goto L_116a3715;
  /* 116a370a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a370d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3710 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 116a3713 jmp 0x116a36e7 */
  goto L_116a36e7;
L_116a3715:;
  /* 116a3715 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3718 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a371e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3721 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 116a3728 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a372b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116a3732 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3735 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3738 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a373b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 116a373f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 116a3742 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3746 jne 0x116a3762 */
  if (!C.zf) goto L_116a3762;
  /* 116a3748 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 116a374f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3752 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3755 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 116a3758 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 116a375f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_116a3762:;
  /* 116a3762 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3766 jl 0x116a377b */
  if ((C.sf!=C.of)) goto L_116a377b;
  /* 116a3768 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a376b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 116a376d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116a3770 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3773 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3776 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 116a3779 jmp 0x116a3762 */
  goto L_116a3762;
L_116a377b:;
  /* 116a377b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a377e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3781 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 116a3785 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116a3788 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a378b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a378d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3790 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a3793 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a3796 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116a3799 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a379c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 116a379f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a37a3 jle 0x116a37ac */
  if ((C.zf||C.sf!=C.of)) goto L_116a37ac;
  /* 116a37a5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_116a37ac:;
  /* 116a37ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a37af cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a37b2 je 0x116a39d0 */
  if (C.zf) goto L_116a39d0;
  /* 116a37b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a37bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a37be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a37c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a37c4 jne 0x116a389a */
  if (!C.zf) goto L_116a389a;
  /* 116a37ca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a37ce jge 0x116a382f */
  if ((C.sf==C.of)) goto L_116a382f;
  /* 116a37d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a37d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a37d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a37da not eax */
  EAX = (~(EAX));
  /* 116a37dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a37df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a37e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 116a37e6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a37e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a37eb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a37ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 116a37f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a37f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a37f8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116a37fb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a37fe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3801 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3804 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116a3807 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a380a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a380d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116a3811 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a3813 jne 0x116a382d */
  if (!C.zf) goto L_116a382d;
  /* 116a3815 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a381a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a381d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a381f not eax */
  EAX = (~(EAX));
  /* 116a3821 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3824 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a3826 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a3828 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a382b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116a382d:;
  /* 116a382d jmp 0x116a389a */
  goto L_116a389a;
L_116a382f:;
  /* 116a382f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3832 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3835 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a383a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a383c not edx */
  EDX = (~(EDX));
  /* 116a383e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3841 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3844 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 116a384b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a384d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3850 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3853 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 116a385a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a385d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3860 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116a3863 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a3866 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3869 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a386c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116a386f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3872 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3875 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116a3879 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a387b jne 0x116a389a */
  if (!C.zf) goto L_116a389a;
  /* 116a387d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3880 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3883 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a3888 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a388a not edx */
  EDX = (~(EDX));
  /* 116a388c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a388f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a3892 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a3894 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3897 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116a389a:;
  /* 116a389a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a389d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a38a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a38a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116a38a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a38af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a38b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116a38b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a38bc je 0x116a39d0 */
  if (C.zf) goto L_116a39d0;
  /* 116a38c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a38c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a38c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 116a38cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a38ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a38d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a38d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116a38da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a38e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116a38e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a38e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116a38ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a38f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116a38f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a38fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a3901 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3904 jne 0x116a39d0 */
  if (!C.zf) goto L_116a39d0;
  /* 116a390a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a390e jge 0x116a396a */
  if ((C.sf==C.of)) goto L_116a396a;
  /* 116a3910 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3913 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3916 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116a391a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a391d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3920 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 116a3923 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a3925 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3928 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a392b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 116a392e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a3930 jne 0x116a3948 */
  if (!C.zf) goto L_116a3948;
  /* 116a3932 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a3937 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a393a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a393c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a393f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a3941 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a3943 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3946 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116a3948:;
  /* 116a3948 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a394d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3950 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a3952 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3955 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3958 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116a395c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a395e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3961 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3964 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116a3968 jmp 0x116a39d0 */
  goto L_116a39d0;
L_116a396a:;
  /* 116a396a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a396d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3970 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116a3974 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3977 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a397a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 116a397d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a397f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3982 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3985 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 116a3988 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a398a jne 0x116a39a7 */
  if (!C.zf) goto L_116a39a7;
  /* 116a398c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a398f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3992 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a3997 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a3999 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a399c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a399f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a39a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a39a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116a39a7:;
  /* 116a39a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a39aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a39ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a39b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a39b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a39b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a39ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 116a39c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a39c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a39c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a39c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_116a39d0:;
  /* 116a39d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a39d4 je 0x116a39ea */
  if (C.zf) goto L_116a39ea;
  /* 116a39d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a39d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a39dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116a39de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a39e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a39e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a39e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_116a39ea:;
  /* 116a39ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a39ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a39f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116a39f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a39f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a39f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a39fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a39fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3a01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3a04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a3a07 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3a0a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 116a3a0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3a10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a3a12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3a15 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a3a17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3a1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3a1d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116a3a1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a3a21 jne 0x116a3a43 */
  if (!C.zf) goto L_116a3a43;
  /* 116a3a23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3a26 cmp eax, dword ptr [0x116d1ee0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d1ee0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3a2c jne 0x116a3a43 */
  if (!C.zf) goto L_116a3a43;
  /* 116a3a2e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3a31 cmp ecx, dword ptr [0x116d1ed8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d1ed8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3a37 jne 0x116a3a43 */
  if (!C.zf) goto L_116a3a43;
  /* 116a3a39 mov dword ptr [0x116d1ee0], 0 */
  w32((uint32_t)(0x116d1ee0), (0x0u));
L_116a3a43:;
  /* 116a3a43 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 116a3a46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3a49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 116a3a4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a3a4e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_116a3a51:;
  /* 116a3a51 pop esi */
  ESI = (pop32());
  /* 116a3a52 mov esp, ebp */
  ESP = (EBP);
  /* 116a3a54 pop ebp */
  EBP = (pop32());
  /* 116a3a55 ret  */
  ESPCHK(0x116a3520u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a60 @ 0x116a3a60 (271 bytes, 78 insns) */
void f_116a3a60(void) {
  FTRACE(0x116a3a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a3a60 push ebp */
  push32((uint32_t)(EBP));
  /* 116a3a61 mov ebp, esp */
  EBP = (ESP);
  /* 116a3a63 push ecx */
  push32((uint32_t)(ECX));
  /* 116a3a64 mov eax, dword ptr [0x116d1ee4] */
  EAX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a3a69 cmp eax, dword ptr [0x116d1ec8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116d1ec8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3a6f jne 0x116a3abb */
  if (!C.zf) goto L_116a3abb;
  /* 116a3a71 mov ecx, dword ptr [0x116d1ec8] */
  ECX = (r32((uint32_t)(0x116d1ec8)));
  /* 116a3a77 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3a7a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a3a7d push ecx */
  push32((uint32_t)(ECX));
  /* 116a3a7e mov edx, dword ptr [0x116d1ee8] */
  EDX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a3a84 push edx */
  push32((uint32_t)(EDX));
  /* 116a3a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a3a87 mov eax, dword ptr [0x116d1eec] */
  EAX = (r32((uint32_t)(0x116d1eec)));
  /* 116a3a8c push eax */
  push32((uint32_t)(EAX));
  /* 116a3a8d call dword ptr [0x116d33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33a0))), 0x116a3a93u);
  /* 116a3a93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a3a96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3a9a jne 0x116a3aa3 */
  if (!C.zf) goto L_116a3aa3;
  /* 116a3a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a3a9e jmp 0x116a3b6b */
  goto L_116a3b6b;
L_116a3aa3:;
  /* 116a3aa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3aa6 mov dword ptr [0x116d1ee8], ecx */
  w32((uint32_t)(0x116d1ee8), (ECX));
  /* 116a3aac mov edx, dword ptr [0x116d1ec8] */
  EDX = (r32((uint32_t)(0x116d1ec8)));
  /* 116a3ab2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3ab5 mov dword ptr [0x116d1ec8], edx */
  w32((uint32_t)(0x116d1ec8), (EDX));
L_116a3abb:;
  /* 116a3abb mov eax, dword ptr [0x116d1ee4] */
  EAX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a3ac0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a3ac3 mov ecx, dword ptr [0x116d1ee8] */
  ECX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a3ac9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3acb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a3ace push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 116a3ad3 push 8 */
  push32((uint32_t)(0x8u));
  /* 116a3ad5 mov edx, dword ptr [0x116d1eec] */
  EDX = (r32((uint32_t)(0x116d1eec)));
  /* 116a3adb push edx */
  push32((uint32_t)(EDX));
  /* 116a3adc call dword ptr [0x116d33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33a4))), 0x116a3ae2u);
  /* 116a3ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3ae5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 116a3ae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3aeb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3aef jne 0x116a3af5 */
  if (!C.zf) goto L_116a3af5;
  /* 116a3af1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a3af3 jmp 0x116a3b6b */
  goto L_116a3b6b;
L_116a3af5:;
  /* 116a3af5 push 4 */
  push32((uint32_t)(0x4u));
  /* 116a3af7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 116a3afc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 116a3b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a3b03 call dword ptr [0x116d339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d339c))), 0x116a3b09u);
  /* 116a3b09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3b0c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 116a3b0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3b12 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3b16 jne 0x116a3b32 */
  if (!C.zf) goto L_116a3b32;
  /* 116a3b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3b1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a3b1e push ecx */
  push32((uint32_t)(ECX));
  /* 116a3b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 116a3b21 mov edx, dword ptr [0x116d1eec] */
  EDX = (r32((uint32_t)(0x116d1eec)));
  /* 116a3b27 push edx */
  push32((uint32_t)(EDX));
  /* 116a3b28 call dword ptr [0x116d33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33b0))), 0x116a3b2eu);
  /* 116a3b2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a3b30 jmp 0x116a3b6b */
  goto L_116a3b6b;
L_116a3b32:;
  /* 116a3b32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3b35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 116a3b3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3b3e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 116a3b45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3b48 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 116a3b4f mov eax, dword ptr [0x116d1ee4] */
  EAX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a3b54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3b57 mov dword ptr [0x116d1ee4], eax */
  w32((uint32_t)(0x116d1ee4), (EAX));
  /* 116a3b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3b5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116a3b62 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 116a3b68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_116a3b6b:;
  /* 116a3b6b mov esp, ebp */
  ESP = (EBP);
  /* 116a3b6d pop ebp */
  EBP = (pop32());
  /* 116a3b6e ret  */
  ESPCHK(0x116a3a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b70 @ 0x116a3b70 (494 bytes, 149 insns) */
void f_116a3b70(void) {
  FTRACE(0x116a3b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a3b70 push ebp */
  push32((uint32_t)(EBP));
  /* 116a3b71 mov ebp, esp */
  EBP = (ESP);
  /* 116a3b73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3b79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a3b7c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116a3b7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3b82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a3b85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a3b88 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_116a3b8f:;
  /* 116a3b8f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3b93 jl 0x116a3ba8 */
  if ((C.sf!=C.of)) goto L_116a3ba8;
  /* 116a3b95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a3b98 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116a3b9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116a3b9d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3ba0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3ba3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 116a3ba6 jmp 0x116a3b8f */
  goto L_116a3b8f;
L_116a3ba8:;
  /* 116a3ba8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3bab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a3bb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3bb4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 116a3bbb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 116a3bbe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 116a3bc5 jmp 0x116a3bd0 */
  goto L_116a3bd0;
L_116a3bc7:;
  /* 116a3bc7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3bca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3bcd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_116a3bd0:;
  /* 116a3bd0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3bd4 jge 0x116a3bf6 */
  if ((C.sf==C.of)) goto L_116a3bf6;
  /* 116a3bd6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3bd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a3bdc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 116a3bdf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a3be2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3be5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3be8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116a3beb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3bee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3bf1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 116a3bf4 jmp 0x116a3bc7 */
  goto L_116a3bc7;
L_116a3bf6:;
  /* 116a3bf6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3bf9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 116a3bfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3bff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 116a3c02 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3c04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116a3c07 push 4 */
  push32((uint32_t)(0x4u));
  /* 116a3c09 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 116a3c0e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116a3c13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a3c16 push edx */
  push32((uint32_t)(EDX));
  /* 116a3c17 call dword ptr [0x116d339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d339c))), 0x116a3c1du);
  /* 116a3c1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a3c1f jne 0x116a3c29 */
  if (!C.zf) goto L_116a3c29;
  /* 116a3c21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a3c24 jmp 0x116a3d5a */
  goto L_116a3d5a;
L_116a3c29:;
  /* 116a3c29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a3c2c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3c31 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116a3c34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a3c37 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a3c3a jmp 0x116a3c48 */
  goto L_116a3c48;
L_116a3c3c:;
  /* 116a3c3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3c3f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3c45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_116a3c48:;
  /* 116a3c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3c4b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3c4e ja 0x116a3cad */
  if ((!C.cf&&!C.zf)) goto L_116a3cad;
  /* 116a3c50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3c53 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 116a3c5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3c5d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 116a3c67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3c6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3c6d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a3c70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3c73 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 116a3c79 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3c7c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3c82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3c85 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a3c88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3c8b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3c91 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3c94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116a3c97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3c9a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3c9f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a3ca2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a3ca5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 116a3cab jmp 0x116a3c3c */
  goto L_116a3c3c;
L_116a3cad:;
  /* 116a3cad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a3cb0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3cb6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116a3cb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a3cbc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3cbf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3cc2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 116a3cc5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3cc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a3ccb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a3cce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3cd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3cd4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116a3cd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a3cda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3cdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3ce0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 116a3ce3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3ce6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a3ce9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a3cec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3cef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3cf2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116a3cf5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3cf8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3cfb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 116a3d03 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3d06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3d09 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 116a3d14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3d17 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 116a3d1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3d1e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 116a3d21 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a3d24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3d27 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 116a3d2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a3d2c jne 0x116a3d3d */
  if (!C.zf) goto L_116a3d3d;
  /* 116a3d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3d31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a3d34 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a3d37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3d3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116a3d3d:;
  /* 116a3d3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a3d42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3d45 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a3d47 not edx */
  EDX = (~(EDX));
  /* 116a3d49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3d4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a3d4f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a3d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3d54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116a3d57 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_116a3d5a:;
  /* 116a3d5a mov esp, ebp */
  ESP = (EBP);
  /* 116a3d5c pop ebp */
  EBP = (pop32());
  /* 116a3d5d ret  */
  ESPCHK(0x116a3b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d60 @ 0x116a3d60 (1515 bytes, 489 insns) */
void f_116a3d60(void) {
  FTRACE(0x116a3d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a3d60 push ebp */
  push32((uint32_t)(EBP));
  /* 116a3d61 mov ebp, esp */
  EBP = (ESP);
  /* 116a3d63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3d66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 116a3d69 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3d6c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 116a3d6e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 116a3d71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3d74 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 116a3d77 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 116a3d7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3d7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a3d80 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3d83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 116a3d86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a3d89 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 116a3d8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a3d8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3d92 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a3d98 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3d9b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 116a3da2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a3da5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a3da8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3dab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 116a3dae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3db1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a3db3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3db6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 116a3db9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3dbc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3dbf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 116a3dc2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3dc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a3dc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116a3dca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a3dcd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3dd0 jle 0x116a4086 */
  if ((C.zf||C.sf!=C.of)) goto L_116a4086;
  /* 116a3dd6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a3dd9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 116a3ddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a3dde jne 0x116a3deb */
  if (!C.zf) goto L_116a3deb;
  /* 116a3de0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3de3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3de6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3de9 jle 0x116a3df2 */
  if ((C.zf||C.sf!=C.of)) goto L_116a3df2;
L_116a3deb:;
  /* 116a3deb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a3ded jmp 0x116a4347 */
  goto L_116a4347;
L_116a3df2:;
  /* 116a3df2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a3df5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116a3df8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3dfb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a3dfe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3e02 jbe 0x116a3e0b */
  if ((C.cf||C.zf)) goto L_116a3e0b;
  /* 116a3e04 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_116a3e0b:;
  /* 116a3e0b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3e0e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3e11 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a3e14 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3e17 jne 0x116a3eed */
  if (!C.zf) goto L_116a3eed;
  /* 116a3e1d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3e21 jae 0x116a3e82 */
  if (!C.cf) goto L_116a3e82;
  /* 116a3e23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a3e28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3e2b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a3e2d not edx */
  EDX = (~(EDX));
  /* 116a3e2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3e32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3e35 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116a3e39 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a3e3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3e3e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3e41 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116a3e45 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3e48 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3e4b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116a3e4e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a3e51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3e54 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3e57 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116a3e5a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3e5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3e60 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116a3e64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a3e66 jne 0x116a3e80 */
  if (!C.zf) goto L_116a3e80;
  /* 116a3e68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a3e6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3e70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a3e72 not edx */
  EDX = (~(EDX));
  /* 116a3e74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3e77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a3e79 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a3e7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3e7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116a3e80:;
  /* 116a3e80 jmp 0x116a3eed */
  goto L_116a3eed;
L_116a3e82:;
  /* 116a3e82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3e85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3e88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a3e8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a3e8f not eax */
  EAX = (~(EAX));
  /* 116a3e91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3e94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3e97 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116a3e9e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a3ea0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3ea3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3ea6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 116a3ead mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3eb0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3eb3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116a3eb6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a3eb9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3ebc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3ebf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116a3ec2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3ec5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3ec8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116a3ecc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a3ece jne 0x116a3eed */
  if (!C.zf) goto L_116a3eed;
  /* 116a3ed0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3ed3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3ed6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a3edb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a3edd not eax */
  EAX = (~(EAX));
  /* 116a3edf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3ee2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a3ee5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a3ee7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3eea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116a3eed:;
  /* 116a3eed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3ef0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a3ef3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3ef6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a3ef9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116a3efc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3eff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a3f02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3f05 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a3f08 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116a3f0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a3f0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3f11 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3f14 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 116a3f17 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3f1b jle 0x116a4067 */
  if ((C.zf||C.sf!=C.of)) goto L_116a4067;
  /* 116a3f21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a3f24 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3f27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 116a3f2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a3f2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116a3f30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a3f33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 116a3f36 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3f3a jbe 0x116a3f43 */
  if ((C.cf||C.zf)) goto L_116a3f43;
  /* 116a3f3c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_116a3f43:;
  /* 116a3f43 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3f46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a3f49 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 116a3f4c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 116a3f4f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3f52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3f55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a3f58 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a3f5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3f5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3f61 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 116a3f64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a3f67 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3f6a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 116a3f6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3f70 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a3f73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3f76 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116a3f79 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3f7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a3f7f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a3f82 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3f85 jne 0x116a4053 */
  if (!C.zf) goto L_116a4053;
  /* 116a3f8b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a3f8f jae 0x116a3fec */
  if (!C.cf) goto L_116a3fec;
  /* 116a3f91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3f94 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3f97 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116a3f9b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3f9e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3fa1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116a3fa4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a3fa7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3faa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3fad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 116a3fb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a3fb2 jne 0x116a3fca */
  if (!C.zf) goto L_116a3fca;
  /* 116a3fb4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a3fb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3fbc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a3fbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3fc1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a3fc3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a3fc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a3fc8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116a3fca:;
  /* 116a3fca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a3fcf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a3fd2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a3fd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3fd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3fda mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 116a3fde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a3fe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a3fe3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3fe6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 116a3fea jmp 0x116a4053 */
  goto L_116a4053;
L_116a3fec:;
  /* 116a3fec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3fef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3ff2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116a3ff6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a3ff9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a3ffc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116a3fff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a4002 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4005 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4008 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 116a400b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a400d jne 0x116a402a */
  if (!C.zf) goto L_116a402a;
  /* 116a400f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a4012 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a4015 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a401a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a401c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a401f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a4022 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a4024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4027 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_116a402a:;
  /* 116a402a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a402d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a4030 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a4035 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a4037 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a403a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a403d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116a4044 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a4046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4049 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a404c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_116a4053:;
  /* 116a4053 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a4056 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4059 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a405b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a405e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4061 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4064 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_116a4067:;
  /* 116a4067 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a406a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a406d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4070 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 116a4072 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a4075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4078 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a407b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a407e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 116a4081 jmp 0x116a4342 */
  goto L_116a4342;
L_116a4086:;
  /* 116a4086 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a4089 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a408c jge 0x116a4342 */
  if ((C.sf==C.of)) goto L_116a4342;
  /* 116a4092 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a4095 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4098 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a409b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 116a409d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 116a40a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a40a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a40a6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a40a9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 116a40ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a40af add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a40b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 116a40b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a40b8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a40bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a40be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a40c1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116a40c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a40c7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116a40ca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a40ce jbe 0x116a40d7 */
  if ((C.cf||C.zf)) goto L_116a40d7;
  /* 116a40d0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_116a40d7:;
  /* 116a40d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a40da and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a40dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a40df jne 0x116a4220 */
  if (!C.zf) goto L_116a4220;
  /* 116a40e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a40e8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 116a40eb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a40ee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 116a40f1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a40f5 jbe 0x116a40fe */
  if ((C.cf||C.zf)) goto L_116a40fe;
  /* 116a40f7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_116a40fe:;
  /* 116a40fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a4101 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a4104 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a4107 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a410a jne 0x116a41e0 */
  if (!C.zf) goto L_116a41e0;
  /* 116a4110 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4114 jae 0x116a4175 */
  if (!C.cf) goto L_116a4175;
  /* 116a4116 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a411b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a411e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a4120 not edx */
  EDX = (~(EDX));
  /* 116a4122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4125 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4128 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116a412c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a412e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4131 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4134 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116a4138 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a413b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a413e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 116a4141 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a4144 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4147 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a414a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 116a414d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4150 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4153 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116a4157 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a4159 jne 0x116a4173 */
  if (!C.zf) goto L_116a4173;
  /* 116a415b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a4160 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a4163 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a4165 not edx */
  EDX = (~(EDX));
  /* 116a4167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a416a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a416c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a416e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4171 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_116a4173:;
  /* 116a4173 jmp 0x116a41e0 */
  goto L_116a41e0;
L_116a4175:;
  /* 116a4175 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a4178 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a417b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a4180 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a4182 not eax */
  EAX = (~(EAX));
  /* 116a4184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4187 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a418a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 116a4191 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 116a4193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4196 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4199 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 116a41a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a41a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a41a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 116a41a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a41ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a41af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a41b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 116a41b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a41b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a41bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 116a41bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a41c1 jne 0x116a41e0 */
  if (!C.zf) goto L_116a41e0;
  /* 116a41c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 116a41c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a41c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a41ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a41d0 not eax */
  EAX = (~(EAX));
  /* 116a41d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a41d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a41d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a41da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a41dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116a41e0:;
  /* 116a41e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a41e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a41e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a41e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a41ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116a41ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a41f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a41f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a41f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a41fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 116a41fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a4201 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4204 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a4207 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a420a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116a420d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a4210 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 116a4213 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4217 jbe 0x116a4220 */
  if ((C.cf||C.zf)) goto L_116a4220;
  /* 116a4219 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_116a4220:;
  /* 116a4220 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4223 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4226 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 116a4229 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116a422c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a422f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a4232 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a4235 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 116a4238 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a423b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a423e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116a4241 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a4244 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4247 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116a424a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a424d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a4250 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4253 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116a4256 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4259 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a425c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a425f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4262 jne 0x116a432e */
  if (!C.zf) goto L_116a432e;
  /* 116a4268 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a426c jae 0x116a42c8 */
  if (!C.cf) goto L_116a42c8;
  /* 116a426e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4271 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4274 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116a4278 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a427b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a427e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 116a4281 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a4283 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4286 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4289 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 116a428c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a428e jne 0x116a42a6 */
  if (!C.zf) goto L_116a42a6;
  /* 116a4290 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a4295 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4298 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a429a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a429d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a429f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a42a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a42a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_116a42a6:;
  /* 116a42a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a42ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a42ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a42b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a42b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a42b6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 116a42ba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a42bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a42bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a42c2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 116a42c6 jmp 0x116a432e */
  goto L_116a432e;
L_116a42c8:;
  /* 116a42c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a42cb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a42ce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 116a42d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a42d5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a42d8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 116a42db add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116a42dd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a42e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a42e3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 116a42e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a42e8 jne 0x116a4305 */
  if (!C.zf) goto L_116a4305;
  /* 116a42ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a42ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a42f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116a42f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116a42f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a42fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a42fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 116a42ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4302 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_116a4305:;
  /* 116a4305 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4308 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a430b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a4310 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a4312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4315 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4318 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 116a431f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a4321 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4324 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 116a4327 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_116a432e:;
  /* 116a432e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4331 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a4334 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116a4336 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4339 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a433c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a433f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_116a4342:;
  /* 116a4342 mov eax, 1 */
  EAX = (0x1u);
L_116a4347:;
  /* 116a4347 mov esp, ebp */
  ESP = (EBP);
  /* 116a4349 pop ebp */
  EBP = (pop32());
  /* 116a434a ret  */
  ESPCHK(0x116a3d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014350 @ 0x116a4350 (304 bytes, 79 insns) */
void f_116a4350(void) {
  FTRACE(0x116a4350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4350 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4351 mov ebp, esp */
  EBP = (ESP);
  /* 116a4353 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4354 cmp dword ptr [0x116d1ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d1ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a435b je 0x116a447c */
  if (C.zf) goto L_116a447c;
  /* 116a4361 mov eax, dword ptr [0x116d1ed8] */
  EAX = (r32((uint32_t)(0x116d1ed8)));
  /* 116a4366 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 116a4369 mov ecx, dword ptr [0x116d1ee0] */
  ECX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a436f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 116a4372 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4374 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116a4377 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 116a437c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116a4381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4384 push eax */
  push32((uint32_t)(EAX));
  /* 116a4385 call dword ptr [0x116d33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33ac))), 0x116a438bu);
  /* 116a438b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a4390 mov ecx, dword ptr [0x116d1ed8] */
  ECX = (r32((uint32_t)(0x116d1ed8)));
  /* 116a4396 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a4398 mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a439d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 116a43a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 116a43a2 mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a43a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116a43ab mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a43b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a43b3 mov edx, dword ptr [0x116d1ed8] */
  EDX = (r32((uint32_t)(0x116d1ed8)));
  /* 116a43b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 116a43c4 mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a43c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a43cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 116a43cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116a43d2 mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a43d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a43da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 116a43dd mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a43e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116a43e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 116a43ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116a43ec jne 0x116a4402 */
  if (!C.zf) goto L_116a4402;
  /* 116a43ee mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a43f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 116a43f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 116a43f9 mov ecx, dword ptr [0x116d1ee0] */
  ECX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a43ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_116a4402:;
  /* 116a4402 mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a4408 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a440c jne 0x116a4472 */
  if (!C.zf) goto L_116a4472;
  /* 116a440e cmp dword ptr [0x116d1ee4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116d1ee4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4415 jle 0x116a4472 */
  if ((C.zf||C.sf!=C.of)) goto L_116a4472;
  /* 116a4417 mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a441c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 116a441f push ecx */
  push32((uint32_t)(ECX));
  /* 116a4420 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a4422 mov edx, dword ptr [0x116d1eec] */
  EDX = (r32((uint32_t)(0x116d1eec)));
  /* 116a4428 push edx */
  push32((uint32_t)(EDX));
  /* 116a4429 call dword ptr [0x116d33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d33b0))), 0x116a442fu);
  /* 116a442f mov eax, dword ptr [0x116d1ee4] */
  EAX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a4434 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a4437 mov ecx, dword ptr [0x116d1ee8] */
  ECX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a443d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a443f mov edx, dword ptr [0x116d1ee0] */
  EDX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a4445 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4448 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a444a push ecx */
  push32((uint32_t)(ECX));
  /* 116a444b mov eax, dword ptr [0x116d1ee0] */
  EAX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a4450 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4453 push eax */
  push32((uint32_t)(EAX));
  /* 116a4454 mov ecx, dword ptr [0x116d1ee0] */
  ECX = (r32((uint32_t)(0x116d1ee0)));
  /* 116a445a push ecx */
  push32((uint32_t)(ECX));
  /* 116a445b call 0x116a25a0 */
  push32(0x116a4460u); f_116a25a0();
  /* 116a4460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4463 mov edx, dword ptr [0x116d1ee4] */
  EDX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a4469 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a446c mov dword ptr [0x116d1ee4], edx */
  w32((uint32_t)(0x116d1ee4), (EDX));
L_116a4472:;
  /* 116a4472 mov dword ptr [0x116d1ee0], 0 */
  w32((uint32_t)(0x116d1ee0), (0x0u));
L_116a447c:;
  /* 116a447c mov esp, ebp */
  ESP = (EBP);
  /* 116a447e pop ebp */
  EBP = (pop32());
  /* 116a447f ret  */
  ESPCHK(0x116a4350u, _esp0);
  ESP += 4; return;
}

/* FUN_10014480 @ 0x116a4480 (1565 bytes, 343 insns) */
void f_116a4480(void) {
  FTRACE(0x116a4480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4480 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4481 mov ebp, esp */
  EBP = (ESP);
  /* 116a4483 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a4489 mov eax, dword ptr [0x116d1ee4] */
  EAX = (r32((uint32_t)(0x116d1ee4)));
  /* 116a448e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116a4491 push eax */
  push32((uint32_t)(EAX));
  /* 116a4492 mov ecx, dword ptr [0x116d1ee8] */
  ECX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a4498 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4499 call dword ptr [0x116d340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d340c))), 0x116a449fu);
  /* 116a449f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a44a1 je 0x116a44ab */
  if (C.zf) goto L_116a44ab;
  /* 116a44a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116a44a6 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a44ab:;
  /* 116a44ab mov edx, dword ptr [0x116d1ee8] */
  EDX = (r32((uint32_t)(0x116d1ee8)));
  /* 116a44b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 116a44b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 116a44c1 jmp 0x116a44d2 */
  goto L_116a44d2;
L_116a44c3:;
  /* 116a44c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 116a44c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a44cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_116a44d2:;
  /* 116a44d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 116a44d8 cmp ecx, dword ptr [0x116d1ee4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x116d1ee4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a44de jge 0x116a4a97 */
  if ((C.sf==C.of)) goto L_116a4a97;
  /* 116a44e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116a44ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 116a44ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 116a44f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 116a44f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 116a44fe push ecx */
  push32((uint32_t)(ECX));
  /* 116a44ff call dword ptr [0x116d340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d340c))), 0x116a4505u);
  /* 116a4505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a4507 je 0x116a4513 */
  if (C.zf) goto L_116a4513;
  /* 116a4509 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 116a450e jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a4513:;
  /* 116a4513 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116a4519 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 116a451c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 116a4522 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 116a4528 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a452e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 116a4531 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116a4537 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a453a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116a453d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 116a4547 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 116a4551 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 116a4558 jmp 0x116a4563 */
  goto L_116a4563;
L_116a455a:;
  /* 116a455a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a455d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_116a4563:;
  /* 116a4563 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4567 jge 0x116a4a5b */
  if ((C.sf==C.of)) goto L_116a4a5b;
  /* 116a456d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 116a4577 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 116a4581 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 116a458b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 116a4595 jmp 0x116a45a6 */
  goto L_116a45a6;
L_116a4597:;
  /* 116a4597 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116a459d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a45a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_116a45a6:;
  /* 116a45a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a45ad jge 0x116a45c2 */
  if ((C.sf==C.of)) goto L_116a45c2;
  /* 116a45af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116a45b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 116a45c0 jmp 0x116a4597 */
  goto L_116a4597;
L_116a45c2:;
  /* 116a45c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a45c6 jl 0x116a49fd */
  if ((C.sf!=C.of)) goto L_116a49fd;
  /* 116a45cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 116a45d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 116a45d7 push ecx */
  push32((uint32_t)(ECX));
  /* 116a45d8 call dword ptr [0x116d340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d340c))), 0x116a45deu);
  /* 116a45de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a45e0 je 0x116a45ec */
  if (C.zf) goto L_116a45ec;
  /* 116a45e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 116a45e7 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a45ec:;
  /* 116a45ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 116a45f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 116a45f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 116a45ff jmp 0x116a4610 */
  goto L_116a4610;
L_116a4601:;
  /* 116a4601 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 116a4607 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a460a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_116a4610:;
  /* 116a4610 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4617 jge 0x116a4794 */
  if ((C.sf==C.of)) goto L_116a4794;
  /* 116a461d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4620 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4623 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 116a4629 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 116a462f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4635 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 116a463b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 116a4641 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4645 jne 0x116a4652 */
  if (!C.zf) goto L_116a4652;
  /* 116a4647 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 116a464d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4650 je 0x116a465c */
  if (C.zf) goto L_116a465c;
L_116a4652:;
  /* 116a4652 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 116a4657 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a465c:;
  /* 116a465c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 116a4662 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a4664 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 116a466a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 116a4670 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 116a4676 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 116a467c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 116a467f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a4681 je 0x116a46b9 */
  if (C.zf) goto L_116a46b9;
  /* 116a4683 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 116a4689 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a468c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 116a4692 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a469c jle 0x116a46a8 */
  if ((C.zf||C.sf!=C.of)) goto L_116a46a8;
  /* 116a469e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 116a46a3 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a46a8:;
  /* 116a46a8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 116a46ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a46b1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 116a46b7 jmp 0x116a46fb */
  goto L_116a46fb;
L_116a46b9:;
  /* 116a46b9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 116a46bf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116a46c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a46c5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 116a46cb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a46d2 jle 0x116a46de */
  if ((C.zf||C.sf!=C.of)) goto L_116a46de;
  /* 116a46d4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_116a46de:;
  /* 116a46de mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116a46e4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 116a46eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a46ee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116a46f4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_116a46fb:;
  /* 116a46fb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4702 jl 0x116a471d */
  if ((C.sf!=C.of)) goto L_116a471d;
  /* 116a4704 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 116a470a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 116a470d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a470f jne 0x116a471d */
  if (!C.zf) goto L_116a471d;
  /* 116a4711 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a471b jle 0x116a4727 */
  if ((C.zf||C.sf!=C.of)) goto L_116a4727;
L_116a471d:;
  /* 116a471d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 116a4722 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a4727:;
  /* 116a4727 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 116a472d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4733 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 116a4736 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a473c je 0x116a4748 */
  if (C.zf) goto L_116a4748;
  /* 116a473e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 116a4743 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a4748:;
  /* 116a4748 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 116a474e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4754 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 116a475a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 116a4760 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4766 jb 0x116a465c */
  if (C.cf) goto L_116a465c;
  /* 116a476c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 116a4772 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4778 je 0x116a4784 */
  if (C.zf) goto L_116a4784;
  /* 116a477a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 116a477f jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a4784:;
  /* 116a4784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116a4787 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a478c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 116a478f jmp 0x116a4601 */
  goto L_116a4601;
L_116a4794:;
  /* 116a4794 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a4797 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a4799 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a479f je 0x116a47ab */
  if (C.zf) goto L_116a47ab;
  /* 116a47a1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 116a47a6 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a47ab:;
  /* 116a47ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a47ae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 116a47b4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 116a47bb jmp 0x116a47c6 */
  goto L_116a47c6;
L_116a47bd:;
  /* 116a47bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a47c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a47c3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_116a47c6:;
  /* 116a47c6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a47ca jge 0x116a49fd */
  if ((C.sf==C.of)) goto L_116a49fd;
  /* 116a47d0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 116a47da mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 116a47e0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_116a47e6:;
  /* 116a47e6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 116a47ec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 116a47ef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 116a47f5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116a47fb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4801 je 0x116a492a */
  if (C.zf) goto L_116a492a;
  /* 116a4807 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a480a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 116a4810 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4817 je 0x116a492a */
  if (C.zf) goto L_116a492a;
  /* 116a481d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116a4823 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4829 jb 0x116a483e */
  if (C.cf) goto L_116a483e;
  /* 116a482b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 116a4831 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4836 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a483c jb 0x116a4848 */
  if (C.cf) goto L_116a4848;
L_116a483e:;
  /* 116a483e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 116a4843 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a4848:;
  /* 116a4848 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116a484e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 116a4854 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 116a485a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 116a4860 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4863 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116a4866 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4869 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a486e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_116a4874:;
  /* 116a4874 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4877 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a487d je 0x116a489e */
  if (C.zf) goto L_116a489e;
  /* 116a487f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4882 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4888 jne 0x116a488c */
  if (!C.zf) goto L_116a488c;
  /* 116a488a jmp 0x116a489e */
  goto L_116a489e;
L_116a488c:;
  /* 116a488c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a488f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a4891 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 116a4894 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a4897 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4899 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116a489c jmp 0x116a4874 */
  goto L_116a4874;
L_116a489e:;
  /* 116a489e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116a48a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a48a7 jne 0x116a48b3 */
  if (!C.zf) goto L_116a48b3;
  /* 116a48a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 116a48ae jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a48b3:;
  /* 116a48b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116a48b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a48bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 116a48be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a48c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 116a48c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a48ce jle 0x116a48da */
  if ((C.zf||C.sf!=C.of)) goto L_116a48da;
  /* 116a48d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_116a48da:;
  /* 116a48da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 116a48e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a48e3 je 0x116a48ef */
  if (C.zf) goto L_116a48ef;
  /* 116a48e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 116a48ea jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a48ef:;
  /* 116a48ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116a48f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116a48f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a48fe je 0x116a490a */
  if (C.zf) goto L_116a490a;
  /* 116a4900 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 116a4905 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a490a:;
  /* 116a490a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 116a4910 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 116a4916 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 116a491c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a491f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 116a4925 jmp 0x116a47e6 */
  goto L_116a47e6;
L_116a492a:;
  /* 116a492a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4931 je 0x116a49a1 */
  if (C.zf) goto L_116a49a1;
  /* 116a4933 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4937 jge 0x116a496b */
  if ((C.sf==C.of)) goto L_116a496b;
  /* 116a4939 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a493e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4941 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a4943 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 116a4949 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a494b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 116a4951 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a4956 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4959 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a495b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 116a4961 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a4963 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 116a4969 jmp 0x116a49a1 */
  goto L_116a49a1;
L_116a496b:;
  /* 116a496b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a496e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a4971 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a4976 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a4978 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 116a497e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a4980 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 116a4986 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a4989 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a498c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116a4991 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116a4993 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 116a4999 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116a499b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_116a49a1:;
  /* 116a49a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 116a49a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a49aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a49b0 jne 0x116a49c4 */
  if (!C.zf) goto L_116a49c4;
  /* 116a49b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116a49b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 116a49bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a49c2 je 0x116a49ce */
  if (C.zf) goto L_116a49ce;
L_116a49c4:;
  /* 116a49c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 116a49c9 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a49ce:;
  /* 116a49ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 116a49d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 116a49d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a49dd je 0x116a49e9 */
  if (C.zf) goto L_116a49e9;
  /* 116a49df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 116a49e4 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a49e9:;
  /* 116a49e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 116a49ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a49f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 116a49f8 jmp 0x116a47bd */
  goto L_116a47bd;
L_116a49fd:;
  /* 116a49fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a4a00 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 116a4a06 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 116a4a0c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4a10 jne 0x116a4a2a */
  if (!C.zf) goto L_116a4a2a;
  /* 116a4a12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 116a4a15 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 116a4a1b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 116a4a21 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4a28 je 0x116a4a31 */
  if (C.zf) goto L_116a4a31;
L_116a4a2a:;
  /* 116a4a2a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 116a4a2f jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a4a31:;
  /* 116a4a31 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 116a4a37 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4a3d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 116a4a43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 116a4a46 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4a4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 116a4a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116a4a51 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 116a4a53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 116a4a56 jmp 0x116a455a */
  goto L_116a455a;
L_116a4a5b:;
  /* 116a4a5b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116a4a61 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 116a4a67 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4a69 jne 0x116a4a7c */
  if (!C.zf) goto L_116a4a7c;
  /* 116a4a6b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116a4a71 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 116a4a77 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4a7a je 0x116a4a83 */
  if (C.zf) goto L_116a4a83;
L_116a4a7c:;
  /* 116a4a7c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 116a4a81 jmp 0x116a4a99 */
  goto L_116a4a99;
L_116a4a83:;
  /* 116a4a83 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 116a4a89 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4a8c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 116a4a92 jmp 0x116a44c3 */
  goto L_116a44c3;
L_116a4a97:;
  /* 116a4a97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a4a99:;
  /* 116a4a99 mov esp, ebp */
  ESP = (EBP);
  /* 116a4a9b pop ebp */
  EBP = (pop32());
  /* 116a4a9c ret  */
  ESPCHK(0x116a4480u, _esp0);
  ESP += 4; return;
}

/* FUN_10014aa0 @ 0x116a4aa0 (250 bytes, 92 insns) */
void f_116a4aa0(void) {
  FTRACE(0x116a4aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4aa1 mov ebp, esp */
  EBP = (ESP);
  /* 116a4aa3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a4aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 116a4aa7 push esi */
  push32((uint32_t)(ESI));
  /* 116a4aa8 push edi */
  push32((uint32_t)(EDI));
  /* 116a4aa9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 116a4aac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 116a4aaf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 116a4ab2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_116a4ab5:;
  /* 116a4ab5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4ab9 jne 0x116a4ad9 */
  if (!C.zf) goto L_116a4ad9;
  /* 116a4abb push 0x116cb700 */
  push32((uint32_t)(0x116cb700u));
  /* 116a4ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a4ac2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 116a4ac4 push 0x116cb6f4 */
  push32((uint32_t)(0x116cb6f4u));
  /* 116a4ac9 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a4acb call 0x1169ade0 */
  push32(0x116a4ad0u); f_1169ade0();
  /* 116a4ad0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4ad3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4ad6 jne 0x116a4ad9 */
  if (!C.zf) goto L_116a4ad9;
  /* 116a4ad8 int3  */
  x86_unimpl("int3 @ 0x116a4ad8");
L_116a4ad9:;
  /* 116a4ad9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116a4adb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116a4add jne 0x116a4ab5 */
  if (!C.zf) goto L_116a4ab5;
L_116a4adf:;
  /* 116a4adf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4ae3 jne 0x116a4b03 */
  if (!C.zf) goto L_116a4b03;
  /* 116a4ae5 push 0x116cb6e4 */
  push32((uint32_t)(0x116cb6e4u));
  /* 116a4aea push 0 */
  push32((uint32_t)(0x0u));
  /* 116a4aec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 116a4aee push 0x116cb6f4 */
  push32((uint32_t)(0x116cb6f4u));
  /* 116a4af3 push 2 */
  push32((uint32_t)(0x2u));
  /* 116a4af5 call 0x1169ade0 */
  push32(0x116a4afau); f_1169ade0();
  /* 116a4afa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4afd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4b00 jne 0x116a4b03 */
  if (!C.zf) goto L_116a4b03;
  /* 116a4b02 int3  */
  x86_unimpl("int3 @ 0x116a4b02");
L_116a4b03:;
  /* 116a4b03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116a4b05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a4b07 jne 0x116a4adf */
  if (!C.zf) goto L_116a4adf;
  /* 116a4b09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 116a4b13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4b19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 116a4b1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4b22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 116a4b24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b27 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 116a4b2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 116a4b31 push ecx */
  push32((uint32_t)(ECX));
  /* 116a4b32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116a4b35 push edx */
  push32((uint32_t)(EDX));
  /* 116a4b36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b39 push eax */
  push32((uint32_t)(EAX));
  /* 116a4b3a call 0x116a6880 */
  push32(0x116a4b3fu); f_116a6880();
  /* 116a4b3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4b42 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 116a4b45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116a4b4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116a4b4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 116a4b54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b57 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4b5b jl 0x116a4b7f */
  if ((C.sf!=C.of)) goto L_116a4b7f;
  /* 116a4b5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a4b62 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 116a4b65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116a4b67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 116a4b6d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 116a4b70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a4b75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4b78 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b7b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 116a4b7d jmp 0x116a4b90 */
  goto L_116a4b90;
L_116a4b7f:;
  /* 116a4b7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 116a4b82 push edx */
  push32((uint32_t)(EDX));
  /* 116a4b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 116a4b85 call 0x116a6600 */
  push32(0x116a4b8au); f_116a6600();
  /* 116a4b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4b8d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_116a4b90:;
  /* 116a4b90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 116a4b93 pop edi */
  EDI = (pop32());
  /* 116a4b94 pop esi */
  ESI = (pop32());
  /* 116a4b95 pop ebx */
  EBX = (pop32());
  /* 116a4b96 mov esp, ebp */
  ESP = (EBP);
  /* 116a4b98 pop ebp */
  EBP = (pop32());
  /* 116a4b99 ret  */
  ESPCHK(0x116a4aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ba0 @ 0x116a4ba0 (91 bytes, 30 insns) */
void f_116a4ba0(void) {
  FTRACE(0x116a4ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4ba1 mov ebp, esp */
  EBP = (ESP);
  /* 116a4ba3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4ba6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 116a4ba8 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4bae jne 0x116a4bce */
  if (!C.zf) goto L_116a4bce;
  /* 116a4bb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4bb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 116a4bb5 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4bb9 jne 0x116a4bce */
  if (!C.zf) goto L_116a4bce;
  /* 116a4bbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4bbe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 116a4bc0 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4bc7 jne 0x116a4bce */
  if (!C.zf) goto L_116a4bce;
  /* 116a4bc9 call 0x1169f0f0 */
  push32(0x116a4bceu); f_1169f0f0();
L_116a4bce:;
  /* 116a4bce cmp dword ptr [0x116d0748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x116d0748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116a4bd5 je 0x116a4bf5 */
  if (C.zf) goto L_116a4bf5;
  /* 116a4bd7 mov eax, dword ptr [0x116d0748] */
  EAX = (r32((uint32_t)(0x116d0748)));
  /* 116a4bdc push eax */
  push32((uint32_t)(EAX));
  /* 116a4bdd call 0x116a4ca0 */
  push32(0x116a4be2u); f_116a4ca0();
  /* 116a4be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116a4be5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116a4be7 je 0x116a4bf5 */
  if (C.zf) goto L_116a4bf5;
  /* 116a4be9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116a4bec push ecx */
  push32((uint32_t)(ECX));
  /* 116a4bed call dword ptr [0x116d0748] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d0748))), 0x116a4bf3u);
  /* 116a4bf3 jmp 0x116a4bf7 */
  goto L_116a4bf7;
L_116a4bf5:;
  /* 116a4bf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_116a4bf7:;
  /* 116a4bf7 pop ebp */
  EBP = (pop32());
  /* 116a4bf8 ret 4 */
  ESPCHK(0x116a4ba0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014c00 @ 0x116a4c00 (21 bytes, 7 insns) */
void f_116a4c00(void) {
  FTRACE(0x116a4c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4c00 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4c01 mov ebp, esp */
  EBP = (ESP);
  /* 116a4c03 push 0x116a4ba0 */
  push32((uint32_t)(0x116a4ba0u));
  /* 116a4c08 call dword ptr [0x116d3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3398))), 0x116a4c0eu);
  /* 116a4c0e mov dword ptr [0x116d0748], eax */
  w32((uint32_t)(0x116d0748), (EAX));
  /* 116a4c13 pop ebp */
  EBP = (pop32());
  /* 116a4c14 ret  */
  ESPCHK(0x116a4c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c20 @ 0x116a4c20 (17 bytes, 7 insns) */
void f_116a4c20(void) {
  FTRACE(0x116a4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116a4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 116a4c21 mov ebp, esp */
  EBP = (ESP);
  /* 116a4c23 mov eax, dword ptr [0x116d0748] */
  EAX = (r32((uint32_t)(0x116d0748)));
  /* 116a4c28 push eax */
  push32((uint32_t)(EAX));
  /* 116a4c29 call dword ptr [0x116d3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x116d3398))), 0x116a4c2fu);
  /* 116a4c2f pop ebp */
  EBP = (pop32());
  /* 116a4c30 ret  */
  ESPCHK(0x116a4c20u, _esp0);
  ESP += 4; return;
}

