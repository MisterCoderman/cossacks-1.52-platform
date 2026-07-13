#include "recomp.h"

/* __local_unwind2 @ 0x1000790e (104 bytes, 33 insns) */
void f_1000790e(void) {
  FTRACE(0x1000790eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000790e push ebx */
  push32((uint32_t)(EBX));
  /* 1000790f push esi */
  push32((uint32_t)(ESI));
  /* 10007910 push edi */
  push32((uint32_t)(EDI));
  /* 10007911 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10007915 push eax */
  push32((uint32_t)(EAX));
  /* 10007916 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10007918 push 0x100078ec */
  push32((uint32_t)(0x100078ecu));
  /* 1000791d push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10007924 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1000792b:;
  /* 1000792b mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1000792f mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10007932 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10007935 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007938 je 0x10007968 */
  if (C.zf) goto L_10007968;
  /* 1000793a cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1000793e je 0x10007968 */
  if (C.zf) goto L_10007968;
  /* 10007940 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10007943 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10007946 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1000794a mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1000794d cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007952 jne 0x10007966 */
  if (!C.zf) goto L_10007966;
  /* 10007954 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10007959 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1000795d call 0x100079a2 */
  push32(0x10007962u); f_100079a2();
  /* 10007962 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10007966u);
L_10007966:;
  /* 10007966 jmp 0x1000792b */
  goto L_1000792b;
L_10007968:;
  /* 10007968 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1000796f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007972 pop edi */
  EDI = (pop32());
  /* 10007973 pop esi */
  ESI = (pop32());
  /* 10007974 pop ebx */
  EBX = (pop32());
  /* 10007975 ret  */
  ESPCHK(0x1000790eu, _esp0);
  ESP += 4; return;
}

/* FUN_100079a2 @ 0x100079a2 (24 bytes, 10 insns) */
void f_100079a2(void) {
  FTRACE(0x100079a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100079a2 push ebx */
  push32((uint32_t)(EBX));
  /* 100079a3 push ecx */
  push32((uint32_t)(ECX));
  /* 100079a4 mov ebx, 0x1000b8c0 */
  EBX = (0x1000b8c0u);
  /* 100079a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100079ac mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 100079af mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 100079b2 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 100079b5 pop ecx */
  ECX = (pop32());
  /* 100079b6 pop ebx */
  EBX = (pop32());
  /* 100079b7 ret 4 */
  ESPCHK(0x100079a2u, _esp0);
  ESP += 8; return;
}

/* FUN_10007a81 @ 0x10007a81 (27 bytes, 11 insns) */
void f_10007a81(void) {
  FTRACE(0x10007a81u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007a81 push ebp */
  push32((uint32_t)(EBP));
  /* 10007a82 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10007a86 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10007a88 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10007a8b push eax */
  push32((uint32_t)(EAX));
  /* 10007a8c mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10007a8f push eax */
  push32((uint32_t)(EAX));
  /* 10007a90 call 0x1000790e */
  push32(0x10007a95u); f_1000790e();
  /* 10007a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007a98 pop ebp */
  EBP = (pop32());
  /* 10007a99 ret 4 */
  ESPCHK(0x10007a81u, _esp0);
  ESP += 8; return;
}

/* FUN_10007aa0 @ 0x10007aa0 (47 bytes, 17 insns) */
void f_10007aa0(void) {
  FTRACE(0x10007aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10007aa1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007aa6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10007aaa jb 0x10007ac0 */
  if (C.cf) goto L_10007ac0;
L_10007aac:;
  /* 10007aac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007ab2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007ab7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10007ab9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007abe jae 0x10007aac */
  if (!C.cf) goto L_10007aac;
L_10007ac0:;
  /* 10007ac0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007ac2 mov eax, esp */
  EAX = (ESP);
  /* 10007ac4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10007ac6 mov esp, ecx */
  ESP = (ECX);
  /* 10007ac8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10007aca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10007acd push eax */
  push32((uint32_t)(EAX));
  /* 10007ace ret  */
  ESPCHK(0x10007aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007acf @ 0x10007acf (93 bytes, 32 insns) */
void f_10007acf(void) {
  FTRACE(0x10007acfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007acf push esi */
  push32((uint32_t)(ESI));
  /* 10007ad0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10007ad4 cmp esi, dword ptr [0x1000d7e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1000d7e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007ada jae 0x10007b14 */
  if (!C.cf) goto L_10007b14;
  /* 10007adc mov ecx, esi */
  ECX = (ESI);
  /* 10007ade mov eax, esi */
  EAX = (ESI);
  /* 10007ae0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10007ae3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10007ae6 mov ecx, dword ptr [ecx*4 + 0x1000d6e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1000d6e0)));
  /* 10007aed lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10007af0 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 10007af5 je 0x10007b14 */
  if (C.zf) goto L_10007b14;
  /* 10007af7 push edi */
  push32((uint32_t)(EDI));
  /* 10007af8 push esi */
  push32((uint32_t)(ESI));
  /* 10007af9 call 0x10006cd4 */
  push32(0x10007afeu); f_10006cd4();
  /* 10007afe push esi */
  push32((uint32_t)(ESI));
  /* 10007aff call 0x10007b2c */
  push32(0x10007b04u); f_10007b2c();
  /* 10007b04 push esi */
  push32((uint32_t)(ESI));
  /* 10007b05 mov edi, eax */
  EDI = (EAX);
  /* 10007b07 call 0x10006d33 */
  push32(0x10007b0cu); f_10006d33();
  /* 10007b0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007b0f mov eax, edi */
  EAX = (EDI);
  /* 10007b11 pop edi */
  EDI = (pop32());
  /* 10007b12 pop esi */
  ESI = (pop32());
  /* 10007b13 ret  */
  ESPCHK(0x10007acfu, _esp0);
  ESP += 4; return;
L_10007b14:;
  /* 10007b14 call 0x10006c01 */
  push32(0x10007b19u); f_10006c01();
  /* 10007b19 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10007b1f call 0x10006c0a */
  push32(0x10007b24u); f_10006c0a();
  /* 10007b24 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10007b27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10007b2a pop esi */
  ESI = (pop32());
  /* 10007b2b ret  */
  ESPCHK(0x10007acfu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b2c @ 0x10007b2c (131 bytes, 52 insns) */
void f_10007b2c(void) {
  FTRACE(0x10007b2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007b2c push esi */
  push32((uint32_t)(ESI));
  /* 10007b2d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10007b31 push edi */
  push32((uint32_t)(EDI));
  /* 10007b32 push esi */
  push32((uint32_t)(ESI));
  /* 10007b33 call 0x10006c92 */
  push32(0x10007b38u); f_10006c92();
  /* 10007b38 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007b3b pop ecx */
  ECX = (pop32());
  /* 10007b3c je 0x10007b7a */
  if (C.zf) goto L_10007b7a;
  /* 10007b3e cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007b41 je 0x10007b48 */
  if (C.zf) goto L_10007b48;
  /* 10007b43 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007b46 jne 0x10007b5e */
  if (!C.zf) goto L_10007b5e;
L_10007b48:;
  /* 10007b48 push 2 */
  push32((uint32_t)(0x2u));
  /* 10007b4a call 0x10006c92 */
  push32(0x10007b4fu); f_10006c92();
  /* 10007b4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10007b51 mov edi, eax */
  EDI = (EAX);
  /* 10007b53 call 0x10006c92 */
  push32(0x10007b58u); f_10006c92();
  /* 10007b58 pop ecx */
  ECX = (pop32());
  /* 10007b59 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007b5b pop ecx */
  ECX = (pop32());
  /* 10007b5c je 0x10007b7a */
  if (C.zf) goto L_10007b7a;
L_10007b5e:;
  /* 10007b5e push esi */
  push32((uint32_t)(ESI));
  /* 10007b5f call 0x10006c92 */
  push32(0x10007b64u); f_10006c92();
  /* 10007b64 pop ecx */
  ECX = (pop32());
  /* 10007b65 push eax */
  push32((uint32_t)(EAX));
  /* 10007b66 call dword ptr [0x100090cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100090cc))), 0x10007b6cu);
  /* 10007b6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007b6e jne 0x10007b7a */
  if (!C.zf) goto L_10007b7a;
  /* 10007b70 call dword ptr [0x1000903c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1000903c))), 0x10007b76u);
  /* 10007b76 mov edi, eax */
  EDI = (EAX);
  /* 10007b78 jmp 0x10007b7c */
  goto L_10007b7c;
L_10007b7a:;
  /* 10007b7a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10007b7c:;
  /* 10007b7c push esi */
  push32((uint32_t)(ESI));
  /* 10007b7d call 0x10006c13 */
  push32(0x10007b82u); f_10006c13();
  /* 10007b82 mov eax, esi */
  EAX = (ESI);
  /* 10007b84 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 10007b87 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10007b8a pop ecx */
  ECX = (pop32());
  /* 10007b8b mov eax, dword ptr [eax*4 + 0x1000d6e0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1000d6e0)));
  /* 10007b92 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 10007b95 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 10007b9a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10007b9c je 0x10007baa */
  if (C.zf) goto L_10007baa;
  /* 10007b9e push edi */
  push32((uint32_t)(EDI));
  /* 10007b9f call 0x10006b8e */
  push32(0x10007ba4u); f_10006b8e();
  /* 10007ba4 pop ecx */
  ECX = (pop32());
  /* 10007ba5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10007ba8 jmp 0x10007bac */
  goto L_10007bac;
L_10007baa:;
  /* 10007baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10007bac:;
  /* 10007bac pop edi */
  EDI = (pop32());
  /* 10007bad pop esi */
  ESI = (pop32());
  /* 10007bae ret  */
  ESPCHK(0x10007b2cu, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x10007baf (43 bytes, 17 insns) */
void f_10007baf(void) {
  FTRACE(0x10007bafu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007baf push esi */
  push32((uint32_t)(ESI));
  /* 10007bb0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10007bb4 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 10007bb7 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 10007bb9 je 0x10007bd8 */
  if (C.zf) goto L_10007bd8;
  /* 10007bbb test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10007bbd je 0x10007bd8 */
  if (C.zf) goto L_10007bd8;
  /* 10007bbf push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 10007bc2 call 0x100058ad */
  push32(0x10007bc7u); f_100058ad();
  /* 10007bc7 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 10007bcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007bcf pop ecx */
  ECX = (pop32());
  /* 10007bd0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10007bd2 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10007bd5 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_10007bd8:;
  /* 10007bd8 pop esi */
  ESI = (pop32());
  /* 10007bd9 ret  */
  ESPCHK(0x10007bafu, _esp0);
  ESP += 4; return;
}

/* FUN_10007be0 @ 0x10007be0 (208 bytes, 85 insns) */
void f_10007be0(void) {
  FTRACE(0x10007be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10007be1 mov ebp, esp */
  EBP = (ESP);
  /* 10007be3 push edi */
  push32((uint32_t)(EDI));
  /* 10007be4 push esi */
  push32((uint32_t)(ESI));
  /* 10007be5 push ebx */
  push32((uint32_t)(EBX));
  /* 10007be6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10007be9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10007bec lea eax, [0x1000c2e4] */
  EAX = ((uint32_t)(0x1000c2e4));
  /* 10007bf2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007bf6 jne 0x10007c33 */
  if (!C.zf) goto L_10007c33;
  /* 10007bf8 mov al, 0xff */
  AL = (0xffu);
  /* 10007bfa mov edi, edi */
  EDI = (EDI);
L_10007bfc:;
  /* 10007bfc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10007bfe je 0x10007c2e */
  if (C.zf) goto L_10007c2e;
  /* 10007c00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10007c02 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10007c03 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10007c05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10007c06 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007c08 je 0x10007bfc */
  if (C.zf) goto L_10007bfc;
  /* 10007c0a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10007c0c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007c0e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10007c10 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10007c13 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10007c15 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10007c17 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10007c19 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10007c1b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007c1d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10007c1f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10007c22 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10007c24 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10007c26 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007c28 je 0x10007bfc */
  if (C.zf) goto L_10007bfc;
  /* 10007c2a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10007c2c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_10007c2e:;
  /* 10007c2e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10007c31 jmp 0x10007cab */
  goto L_10007cab;
L_10007c33:;
  /* 10007c33 lock inc dword ptr [0x1000c454] */
  x86_unimpl("lock inc @ 0x10007c33");
  /* 10007c3a cmp dword ptr [0x1000c450], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1000c450))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007c41 jg 0x10007c47 */
  if ((!C.zf&&C.sf==C.of)) goto L_10007c47;
  /* 10007c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007c45 jmp 0x10007c5c */
  goto L_10007c5c;
L_10007c47:;
  /* 10007c47 lock dec dword ptr [0x1000c454] */
  x86_unimpl("lock dec @ 0x10007c47");
  /* 10007c4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10007c50 call 0x100057aa */
  push32(0x10007c55u); f_100057aa();
  /* 10007c55 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_10007c5c:;
  /* 10007c5c mov eax, 0xff */
  EAX = (0xffu);
  /* 10007c61 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10007c63 nop  */
  /* nop */
L_10007c64:;
  /* 10007c64 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10007c66 je 0x10007c8f */
  if (C.zf) goto L_10007c8f;
  /* 10007c68 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10007c6a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10007c6b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10007c6d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10007c6e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007c70 je 0x10007c64 */
  if (C.zf) goto L_10007c64;
  /* 10007c72 push eax */
  push32((uint32_t)(EAX));
  /* 10007c73 push ebx */
  push32((uint32_t)(EBX));
  /* 10007c74 call 0x10007e26 */
  push32(0x10007c79u); f_10007e26();
  /* 10007c79 mov ebx, eax */
  EBX = (EAX);
  /* 10007c7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007c7e call 0x10007e26 */
  push32(0x10007c83u); f_10007e26();
  /* 10007c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007c86 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007c88 je 0x10007c64 */
  if (C.zf) goto L_10007c64;
  /* 10007c8a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10007c8c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10007c8f:;
  /* 10007c8f mov ebx, eax */
  EBX = (EAX);
  /* 10007c91 pop eax */
  EAX = (pop32());
  /* 10007c92 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007c94 jne 0x10007c9f */
  if (!C.zf) goto L_10007c9f;
  /* 10007c96 lock dec dword ptr [0x1000c454] */
  x86_unimpl("lock dec @ 0x10007c96");
  /* 10007c9d jmp 0x10007ca9 */
  goto L_10007ca9;
L_10007c9f:;
  /* 10007c9f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10007ca1 call 0x1000580b */
  push32(0x10007ca6u); f_1000580b();
  /* 10007ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10007ca9:;
  /* 10007ca9 mov eax, ebx */
  EAX = (EBX);
L_10007cab:;
  /* 10007cab pop ebx */
  EBX = (pop32());
  /* 10007cac pop esi */
  ESI = (pop32());
  /* 10007cad pop edi */
  EDI = (pop32());
  /* 10007cae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007caf ret  */
  ESPCHK(0x10007be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x10007cb0 (257 bytes, 103 insns) */
void f_10007cb0(void) {
  FTRACE(0x10007cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10007cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10007cb3 push edi */
  push32((uint32_t)(EDI));
  /* 10007cb4 push esi */
  push32((uint32_t)(ESI));
  /* 10007cb5 push ebx */
  push32((uint32_t)(EBX));
  /* 10007cb6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10007cb9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10007cbb je 0x10007daa */
  if (C.zf) goto L_10007daa;
  /* 10007cc1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10007cc4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10007cc7 lea eax, [0x1000c2e4] */
  EAX = ((uint32_t)(0x1000c2e4));
  /* 10007ccd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007cd1 jne 0x10007d21 */
  if (!C.zf) goto L_10007d21;
  /* 10007cd3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 10007cd5 mov bl, 0x5a */
  BL = (0x5au);
  /* 10007cd7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 10007cd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10007cdc:;
  /* 10007cdc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 10007cde or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10007ce0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 10007ce2 je 0x10007d05 */
  if (C.zf) goto L_10007d05;
  /* 10007ce4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10007ce6 je 0x10007d05 */
  if (C.zf) goto L_10007d05;
  /* 10007ce8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10007ce9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10007cea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007cec jb 0x10007cf4 */
  if (C.cf) goto L_10007cf4;
  /* 10007cee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007cf0 ja 0x10007cf4 */
  if ((!C.cf&&!C.zf)) goto L_10007cf4;
  /* 10007cf2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_10007cf4:;
  /* 10007cf4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007cf6 jb 0x10007cfe */
  if (C.cf) goto L_10007cfe;
  /* 10007cf8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007cfa ja 0x10007cfe */
  if ((!C.cf&&!C.zf)) goto L_10007cfe;
  /* 10007cfc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_10007cfe:;
  /* 10007cfe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007d00 jne 0x10007d0f */
  if (!C.zf) goto L_10007d0f;
  /* 10007d02 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10007d03 jne 0x10007cdc */
  if (!C.zf) goto L_10007cdc;
L_10007d05:;
  /* 10007d05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10007d07 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10007d09 je 0x10007daa */
  if (C.zf) goto L_10007daa;
L_10007d0f:;
  /* 10007d0f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10007d14 jb 0x10007daa */
  if (C.cf) goto L_10007daa;
  /* 10007d1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10007d1c jmp 0x10007daa */
  goto L_10007daa;
L_10007d21:;
  /* 10007d21 lock inc dword ptr [0x1000c454] */
  x86_unimpl("lock inc @ 0x10007d21");
  /* 10007d28 cmp dword ptr [0x1000c450], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1000c450))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007d2f jg 0x10007d35 */
  if ((!C.zf&&C.sf==C.of)) goto L_10007d35;
  /* 10007d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007d33 jmp 0x10007d4e */
  goto L_10007d4e;
L_10007d35:;
  /* 10007d35 lock dec dword ptr [0x1000c454] */
  x86_unimpl("lock dec @ 0x10007d35");
  /* 10007d3c mov ebx, ecx */
  EBX = (ECX);
  /* 10007d3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10007d40 call 0x100057aa */
  push32(0x10007d45u); f_100057aa();
  /* 10007d45 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 10007d4c mov ecx, ebx */
  ECX = (EBX);
L_10007d4e:;
  /* 10007d4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007d50 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10007d52 mov edi, edi */
  EDI = (EDI);
L_10007d54:;
  /* 10007d54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10007d56 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007d58 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 10007d5a je 0x10007d7f */
  if (C.zf) goto L_10007d7f;
  /* 10007d5c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10007d5e je 0x10007d7f */
  if (C.zf) goto L_10007d7f;
  /* 10007d60 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10007d61 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10007d62 push ecx */
  push32((uint32_t)(ECX));
  /* 10007d63 push eax */
  push32((uint32_t)(EAX));
  /* 10007d64 push ebx */
  push32((uint32_t)(EBX));
  /* 10007d65 call 0x10007e26 */
  push32(0x10007d6au); f_10007e26();
  /* 10007d6a mov ebx, eax */
  EBX = (EAX);
  /* 10007d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007d6f call 0x10007e26 */
  push32(0x10007d74u); f_10007e26();
  /* 10007d74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007d77 pop ecx */
  ECX = (pop32());
  /* 10007d78 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007d7a jne 0x10007d85 */
  if (!C.zf) goto L_10007d85;
  /* 10007d7c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10007d7d jne 0x10007d54 */
  if (!C.zf) goto L_10007d54;
L_10007d7f:;
  /* 10007d7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10007d81 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007d83 je 0x10007d8e */
  if (C.zf) goto L_10007d8e;
L_10007d85:;
  /* 10007d85 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10007d8a jb 0x10007d8e */
  if (C.cf) goto L_10007d8e;
  /* 10007d8c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_10007d8e:;
  /* 10007d8e pop eax */
  EAX = (pop32());
  /* 10007d8f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10007d91 jne 0x10007d9c */
  if (!C.zf) goto L_10007d9c;
  /* 10007d93 lock dec dword ptr [0x1000c454] */
  x86_unimpl("lock dec @ 0x10007d93");
  /* 10007d9a jmp 0x10007daa */
  goto L_10007daa;
L_10007d9c:;
  /* 10007d9c mov ebx, ecx */
  EBX = (ECX);
  /* 10007d9e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10007da0 call 0x1000580b */
  push32(0x10007da5u); f_1000580b();
  /* 10007da5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007da8 mov ecx, ebx */
  ECX = (EBX);
L_10007daa:;
  /* 10007daa mov eax, ecx */
  EAX = (ECX);
  /* 10007dac pop ebx */
  EBX = (pop32());
  /* 10007dad pop esi */
  ESI = (pop32());
  /* 10007dae pop edi */
  EDI = (pop32());
  /* 10007daf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007db0 ret  */
  ESPCHK(0x10007cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007db1 @ 0x10007db1 (117 bytes, 46 insns) */
void f_10007db1(void) {
  FTRACE(0x10007db1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007db1 push ebp */
  push32((uint32_t)(EBP));
  /* 10007db2 mov ebp, esp */
  EBP = (ESP);
  /* 10007db4 push ecx */
  push32((uint32_t)(ECX));
  /* 10007db5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007db8 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10007dbb cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007dc1 ja 0x10007dcf */
  if ((!C.cf&&!C.zf)) goto L_10007dcf;
  /* 10007dc3 mov ecx, dword ptr [0x1000b1c8] */
  ECX = (r32((uint32_t)(0x1000b1c8)));
  /* 10007dc9 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 10007dcd jmp 0x10007e21 */
  goto L_10007e21;
L_10007dcf:;
  /* 10007dcf mov ecx, eax */
  ECX = (EAX);
  /* 10007dd1 push esi */
  push32((uint32_t)(ESI));
  /* 10007dd2 mov esi, dword ptr [0x1000b1c8] */
  ESI = (r32((uint32_t)(0x1000b1c8)));
  /* 10007dd8 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10007ddb movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 10007dde test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10007de3 pop esi */
  ESI = (pop32());
  /* 10007de4 je 0x10007df4 */
  if (C.zf) goto L_10007df4;
  /* 10007de6 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10007dea mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10007ded mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 10007df0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10007df2 jmp 0x10007dfd */
  goto L_10007dfd;
L_10007df4:;
  /* 10007df4 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10007df8 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10007dfb push 1 */
  push32((uint32_t)(0x1u));
L_10007dfd:;
  /* 10007dfd pop eax */
  EAX = (pop32());
  /* 10007dfe lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 10007e01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10007e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007e07 push ecx */
  push32((uint32_t)(ECX));
  /* 10007e08 push eax */
  push32((uint32_t)(EAX));
  /* 10007e09 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10007e0c push eax */
  push32((uint32_t)(EAX));
  /* 10007e0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10007e0f call 0x100071e2 */
  push32(0x10007e14u); f_100071e2();
  /* 10007e14 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007e19 jne 0x10007e1d */
  if (!C.zf) goto L_10007e1d;
  /* 10007e1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007e1c ret  */
  ESPCHK(0x10007db1u, _esp0);
  ESP += 4; return;
L_10007e1d:;
  /* 10007e1d movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_10007e21:;
  /* 10007e21 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10007e24 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007e25 ret  */
  ESPCHK(0x10007db1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e26 @ 0x10007e26 (203 bytes, 78 insns) */
void f_10007e26(void) {
  FTRACE(0x10007e26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10007e26 push ebp */
  push32((uint32_t)(EBP));
  /* 10007e27 mov ebp, esp */
  EBP = (ESP);
  /* 10007e29 push ecx */
  push32((uint32_t)(ECX));
  /* 10007e2a cmp dword ptr [0x1000c2ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1000c2ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007e31 push ebx */
  push32((uint32_t)(EBX));
  /* 10007e32 push esi */
  push32((uint32_t)(ESI));
  /* 10007e33 push edi */
  push32((uint32_t)(EDI));
  /* 10007e34 jne 0x10007e53 */
  if (!C.zf) goto L_10007e53;
  /* 10007e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007e39 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007e3c jl 0x10007eec */
  if ((C.sf!=C.of)) goto L_10007eec;
  /* 10007e42 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007e45 jg 0x10007eec */
  if ((!C.zf&&C.sf==C.of)) goto L_10007eec;
  /* 10007e4b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10007e4e jmp 0x10007eec */
  goto L_10007eec;
L_10007e53:;
  /* 10007e53 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10007e56 mov edi, 0x100 */
  EDI = (0x100u);
  /* 10007e5b push 1 */
  push32((uint32_t)(0x1u));
  /* 10007e5d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007e5f pop esi */
  ESI = (pop32());
  /* 10007e60 jge 0x10007e87 */
  if ((C.sf==C.of)) goto L_10007e87;
  /* 10007e62 cmp dword ptr [0x1000b8b4], esi */
  { uint32_t _a=(r32((uint32_t)(0x1000b8b4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007e68 jle 0x10007e75 */
  if ((C.zf||C.sf!=C.of)) goto L_10007e75;
  /* 10007e6a push esi */
  push32((uint32_t)(ESI));
  /* 10007e6b push ebx */
  push32((uint32_t)(EBX));
  /* 10007e6c call 0x10007db1 */
  push32(0x10007e71u); f_10007db1();
  /* 10007e71 pop ecx */
  ECX = (pop32());
  /* 10007e72 pop ecx */
  ECX = (pop32());
  /* 10007e73 jmp 0x10007e7f */
  goto L_10007e7f;
L_10007e75:;
  /* 10007e75 mov eax, dword ptr [0x1000b1c8] */
  EAX = (r32((uint32_t)(0x1000b1c8)));
  /* 10007e7a mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10007e7d and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10007e7f:;
  /* 10007e7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007e81 jne 0x10007e87 */
  if (!C.zf) goto L_10007e87;
L_10007e83:;
  /* 10007e83 mov eax, ebx */
  EAX = (EBX);
  /* 10007e85 jmp 0x10007eec */
  goto L_10007eec;
L_10007e87:;
  /* 10007e87 mov edx, dword ptr [0x1000b1c8] */
  EDX = (r32((uint32_t)(0x1000b1c8)));
  /* 10007e8d mov eax, ebx */
  EAX = (EBX);
  /* 10007e8f sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10007e92 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 10007e95 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10007e9a je 0x10007eab */
  if (C.zf) goto L_10007eab;
  /* 10007e9c and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10007ea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10007ea2 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 10007ea5 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10007ea8 pop eax */
  EAX = (pop32());
  /* 10007ea9 jmp 0x10007eb4 */
  goto L_10007eb4;
L_10007eab:;
  /* 10007eab and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10007eaf mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 10007eb2 mov eax, esi */
  EAX = (ESI);
L_10007eb4:;
  /* 10007eb4 push esi */
  push32((uint32_t)(ESI));
  /* 10007eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10007eb7 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10007eba push 3 */
  push32((uint32_t)(0x3u));
  /* 10007ebc push ecx */
  push32((uint32_t)(ECX));
  /* 10007ebd push eax */
  push32((uint32_t)(EAX));
  /* 10007ebe lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10007ec1 push eax */
  push32((uint32_t)(EAX));
  /* 10007ec2 push edi */
  push32((uint32_t)(EDI));
  /* 10007ec3 push dword ptr [0x1000c2ec] */
  push32((uint32_t)(r32((uint32_t)(0x1000c2ec))));
  /* 10007ec9 call 0x10006f93 */
  push32(0x10007eceu); f_10006f93();
  /* 10007ece add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10007ed1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10007ed3 je 0x10007e83 */
  if (C.zf) goto L_10007e83;
  /* 10007ed5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10007ed7 jne 0x10007edf */
  if (!C.zf) goto L_10007edf;
  /* 10007ed9 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10007edd jmp 0x10007eec */
  goto L_10007eec;
L_10007edf:;
  /* 10007edf movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 10007ee3 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10007ee7 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10007eea or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10007eec:;
  /* 10007eec pop edi */
  EDI = (pop32());
  /* 10007eed pop esi */
  ESI = (pop32());
  /* 10007eee pop ebx */
  EBX = (pop32());
  /* 10007eef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10007ef0 ret  */
  ESPCHK(0x10007e26u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1000800c (6 bytes, 1 insns) */
void f_1000800c(void) {
  FTRACE(0x1000800cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1000800c jmp dword ptr [0x100090c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x100090c8)))); return;
}

