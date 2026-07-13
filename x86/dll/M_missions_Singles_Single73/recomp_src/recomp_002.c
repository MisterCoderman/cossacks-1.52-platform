#include "recomp.h"

/* FUN_1000ae3a @ 0x11c3ae3a (151 bytes, 62 insns) */
void f_11c3ae3a(void) {
  FTRACE(0x11c3ae3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ae3a push ebp */
  push32((uint32_t)(EBP));
  /* 11c3ae3b mov ebp, esp */
  EBP = (ESP);
  /* 11c3ae3d cmp dword ptr [0x11c56aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c56aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ae44 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3ae45 push esi */
  push32((uint32_t)(ESI));
  /* 11c3ae46 jne 0x11c3ae57 */
  if (!C.zf) goto L_11c3ae57;
  /* 11c3ae48 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3ae4b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3ae4e call 0x11c38990 */
  push32(0x11c3ae53u); f_11c38990();
  /* 11c3ae53 pop ecx */
  ECX = (pop32());
  /* 11c3ae54 pop ecx */
  ECX = (pop32());
  /* 11c3ae55 jmp 0x11c3aecd */
  goto L_11c3aecd;
L_11c3ae57:;
  /* 11c3ae57 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c3ae59 call 0x11c35ff6 */
  push32(0x11c3ae5eu); f_11c35ff6();
  /* 11c3ae5e mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3ae61 pop ecx */
  ECX = (pop32());
L_11c3ae62:;
  /* 11c3ae62 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11c3ae66 test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 11c3ae69 je 0x11c3aeb5 */
  if (C.zf) goto L_11c3aeb5;
  /* 11c3ae6b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c3ae6e test byte ptr [eax + 0x11c56c01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c56c01)))&(0x4u); fl_logic(_r,8); }
  /* 11c3ae75 je 0x11c3ae91 */
  if (C.zf) goto L_11c3ae91;
  /* 11c3ae77 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c3ae7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3ae7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c3ae7d je 0x11c3ae9c */
  if (C.zf) goto L_11c3ae9c;
  /* 11c3ae7f movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11c3ae82 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11c3ae85 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11c3ae88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11c3ae8a cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ae8d je 0x11c3aea8 */
  if (C.zf) goto L_11c3aea8;
  /* 11c3ae8f jmp 0x11c3ae99 */
  goto L_11c3ae99;
L_11c3ae91:;
  /* 11c3ae91 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 11c3ae94 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3ae97 je 0x11c3aeb5 */
  if (C.zf) goto L_11c3aeb5;
L_11c3ae99:;
  /* 11c3ae99 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3ae9a jmp 0x11c3ae62 */
  goto L_11c3ae62;
L_11c3ae9c:;
  /* 11c3ae9c push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c3ae9e call 0x11c36057 */
  push32(0x11c3aea3u); f_11c36057();
  /* 11c3aea3 pop ecx */
  ECX = (pop32());
  /* 11c3aea4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3aea6 jmp 0x11c3aecd */
  goto L_11c3aecd;
L_11c3aea8:;
  /* 11c3aea8 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c3aeaa call 0x11c36057 */
  push32(0x11c3aeafu); f_11c36057();
  /* 11c3aeaf pop ecx */
  ECX = (pop32());
  /* 11c3aeb0 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11c3aeb3 jmp 0x11c3aecd */
  goto L_11c3aecd;
L_11c3aeb5:;
  /* 11c3aeb5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c3aeb7 call 0x11c36057 */
  push32(0x11c3aebcu); f_11c36057();
  /* 11c3aebc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3aebf pop ecx */
  ECX = (pop32());
  /* 11c3aec0 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11c3aec3 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3aec5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c3aec7 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3aec9 not eax */
  EAX = (~(EAX));
  /* 11c3aecb and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c3aecd:;
  /* 11c3aecd pop esi */
  ESI = (pop32());
  /* 11c3aece pop ebx */
  EBX = (pop32());
  /* 11c3aecf pop ebp */
  EBP = (pop32());
  /* 11c3aed0 ret  */
  ESPCHK(0x11c3ae3au, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed1 @ 0x11c3aed1 (43 bytes, 23 insns) */
void f_11c3aed1(void) {
  FTRACE(0x11c3aed1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3aed1 push esi */
  push32((uint32_t)(ESI));
  /* 11c3aed2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3aed6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3aed8 je 0x11c3aef8 */
  if (C.zf) goto L_11c3aef8;
  /* 11c3aeda push esi */
  push32((uint32_t)(ESI));
  /* 11c3aedb call 0x11c35da0 */
  push32(0x11c3aee0u); f_11c35da0();
  /* 11c3aee0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3aee1 push eax */
  push32((uint32_t)(EAX));
  /* 11c3aee2 call 0x11c344f2 */
  push32(0x11c3aee7u); f_11c344f2();
  /* 11c3aee7 pop ecx */
  ECX = (pop32());
  /* 11c3aee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3aeea pop ecx */
  ECX = (pop32());
  /* 11c3aeeb je 0x11c3aef8 */
  if (C.zf) goto L_11c3aef8;
  /* 11c3aeed push esi */
  push32((uint32_t)(ESI));
  /* 11c3aeee push eax */
  push32((uint32_t)(EAX));
  /* 11c3aeef call 0x11c35910 */
  push32(0x11c3aef4u); f_11c35910();
  /* 11c3aef4 pop ecx */
  ECX = (pop32());
  /* 11c3aef5 pop ecx */
  ECX = (pop32());
  /* 11c3aef6 pop esi */
  ESI = (pop32());
  /* 11c3aef7 ret  */
  ESPCHK(0x11c3aed1u, _esp0);
  ESP += 4; return;
L_11c3aef8:;
  /* 11c3aef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3aefa pop esi */
  ESI = (pop32());
  /* 11c3aefb ret  */
  ESPCHK(0x11c3aed1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aefc @ 0x11c3aefc (150 bytes, 54 insns) */
void f_11c3aefc(void) {
  FTRACE(0x11c3aefcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3aefc mov eax, 0x11c3c974 */
  EAX = (0x11c3c974u);
  /* 11c3af01 call 0x11c3bcf4 */
  push32(0x11c3af06u); f_11c3bcf4();
  /* 11c3af06 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3af07 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3af08 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3af09 push esi */
  push32((uint32_t)(ESI));
  /* 11c3af0a push edi */
  push32((uint32_t)(EDI));
  /* 11c3af0b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3af0d cmp dword ptr [ebp + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3af10 mov esi, ecx */
  ESI = (ECX);
  /* 11c3af12 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3af14 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11c3af17 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11c3af1a pop edi */
  EDI = (pop32());
  /* 11c3af1b je 0x11c3af38 */
  if (C.zf) goto L_11c3af38;
  /* 11c3af1d lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 11c3af20 mov dword ptr [esi], 0x11c3d858 */
  w32((uint32_t)(ESI), (0x11c3d858u));
  /* 11c3af26 mov dword ptr [esi + 0xc], 0x11c3d850 */
  w32((uint32_t)(ESI + 0xc), (0x11c3d850u));
  /* 11c3af2d call 0x11c3afd0 */
  push32(0x11c3af32u); f_11c3afd0();
  /* 11c3af32 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11c3af35 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11c3af38:;
  /* 11c3af38 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11c3af3a call 0x11c3b9ff */
  push32(0x11c3af3fu); f_11c3b9ff();
  /* 11c3af3f pop ecx */
  ECX = (pop32());
  /* 11c3af40 mov ecx, eax */
  ECX = (EAX);
  /* 11c3af42 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11c3af45 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3af47 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c3af4a je 0x11c3af53 */
  if (C.zf) goto L_11c3af53;
  /* 11c3af4c call 0x11c3b1b0 */
  push32(0x11c3af51u); f_11c3b1b0();
  /* 11c3af51 jmp 0x11c3af55 */
  goto L_11c3af55;
L_11c3af53:;
  /* 11c3af53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3af55:;
  /* 11c3af55 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3af56 push eax */
  push32((uint32_t)(EAX));
  /* 11c3af57 mov ecx, esi */
  ECX = (ESI);
  /* 11c3af59 mov byte ptr [ebp - 4], bl */
  w8((uint32_t)(EBP + -0x4), (BL));
  /* 11c3af5c call 0x11c3b0ee */
  push32(0x11c3af61u); f_11c3b0ee();
  /* 11c3af61 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3af63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3af66 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3af69 mov dword ptr [eax + esi], 0x11c3d84c */
  w32((uint32_t)(EAX + ESI*1), (0x11c3d84cu));
  /* 11c3af70 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3af72 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3af75 mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 11c3af79 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3af7b mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3af7e mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 11c3af82 mov eax, esi */
  EAX = (ESI);
  /* 11c3af84 pop edi */
  EDI = (pop32());
  /* 11c3af85 pop esi */
  ESI = (pop32());
  /* 11c3af86 pop ebx */
  EBX = (pop32());
  /* 11c3af87 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3af8e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3af8f ret 4 */
  ESPCHK(0x11c3aefcu, _esp0);
  ESP += 8; return;
}

/* FUN_1000afbd @ 0x11c3afbd (19 bytes, 4 insns) */
void f_11c3afbd(void) {
  FTRACE(0x11c3afbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3afbd mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 11c3afc0 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3afc3 mov dword ptr [eax + ecx - 0x14], 0x11c3d84c */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x11c3d84cu));
  /* 11c3afcb jmp 0x11c3b163 */
  f_11c3b163(); return;
}

/* FUN_1000afd0 @ 0x11c3afd0 (94 bytes, 29 insns) */
void f_11c3afd0(void) {
  FTRACE(0x11c3afd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3afd0 push esi */
  push32((uint32_t)(ESI));
  /* 11c3afd1 mov esi, ecx */
  ESI = (ECX);
  /* 11c3afd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3afd5 or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 11c3afd9 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c3afdc mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c3afdf mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c3afe2 mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 11c3afe5 mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 11c3afe8 mov dword ptr [esi + 0x30], eax */
  w32((uint32_t)(ESI + 0x30), (EAX));
  /* 11c3afeb mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 11c3afee lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11c3aff1 mov dword ptr [esi], 0x11c3d870 */
  w32((uint32_t)(ESI), (0x11c3d870u));
  /* 11c3aff7 push eax */
  push32((uint32_t)(EAX));
  /* 11c3aff8 mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 11c3afff mov dword ptr [esi + 0x28], 6 */
  w32((uint32_t)(ESI + 0x28), (0x6u));
  /* 11c3b006 mov byte ptr [esi + 0x2c], 0x20 */
  w8((uint32_t)(ESI + 0x2c), (0x20u));
  /* 11c3b00a call 0x11c3b556 */
  push32(0x11c3b00fu); f_11c3b556();
  /* 11c3b00f mov eax, dword ptr [0x11c56ac0] */
  EAX = (r32((uint32_t)(0x11c56ac0)));
  /* 11c3b014 inc dword ptr [0x11c56ac0] */
  { uint32_t _r=(r32((uint32_t)(0x11c56ac0)))+1; w32((uint32_t)(0x11c56ac0), (_r)); fl_inc(_r,32); }
  /* 11c3b01a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b01c pop ecx */
  ECX = (pop32());
  /* 11c3b01d jne 0x11c3b02a */
  if (!C.zf) goto L_11c3b02a;
  /* 11c3b01f push 0x11c56a88 */
  push32((uint32_t)(0x11c56a88u));
  /* 11c3b024 call 0x11c3b556 */
  push32(0x11c3b029u); f_11c3b556();
  /* 11c3b029 pop ecx */
  ECX = (pop32());
L_11c3b02a:;
  /* 11c3b02a mov eax, esi */
  EAX = (ESI);
  /* 11c3b02c pop esi */
  ESI = (pop32());
  /* 11c3b02d ret  */
  ESPCHK(0x11c3afd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b02e @ 0x11c3b02e (28 bytes, 11 insns) */
void f_11c3b02e(void) {
  FTRACE(0x11c3b02eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b02e push esi */
  push32((uint32_t)(ESI));
  /* 11c3b02f mov esi, ecx */
  ESI = (ECX);
  /* 11c3b031 call 0x11c3b04a */
  push32(0x11c3b036u); f_11c3b04a();
  /* 11c3b036 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11c3b03b je 0x11c3b044 */
  if (C.zf) goto L_11c3b044;
  /* 11c3b03d push esi */
  push32((uint32_t)(ESI));
  /* 11c3b03e call 0x11c3b9a8 */
  push32(0x11c3b043u); f_11c3b9a8();
  /* 11c3b043 pop ecx */
  ECX = (pop32());
L_11c3b044:;
  /* 11c3b044 mov eax, esi */
  EAX = (ESI);
  /* 11c3b046 pop esi */
  ESI = (pop32());
  /* 11c3b047 ret 4 */
  ESPCHK(0x11c3b02eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000b04a @ 0x11c3b04a (74 bytes, 25 insns) */
void f_11c3b04a(void) {
  FTRACE(0x11c3b04au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b04a push esi */
  push32((uint32_t)(ESI));
  /* 11c3b04b mov esi, ecx */
  ESI = (ECX);
  /* 11c3b04d or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 11c3b051 mov dword ptr [esi], 0x11c3d870 */
  w32((uint32_t)(ESI), (0x11c3d870u));
  /* 11c3b057 dec dword ptr [0x11c56ac0] */
  { uint32_t _r=(r32((uint32_t)(0x11c56ac0)))-1; w32((uint32_t)(0x11c56ac0), (_r)); fl_dec(_r,32); }
  /* 11c3b05d jne 0x11c3b06a */
  if (!C.zf) goto L_11c3b06a;
  /* 11c3b05f push 0x11c56a88 */
  push32((uint32_t)(0x11c56a88u));
  /* 11c3b064 call 0x11c3b561 */
  push32(0x11c3b069u); f_11c3b561();
  /* 11c3b069 pop ecx */
  ECX = (pop32());
L_11c3b06a:;
  /* 11c3b06a lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11c3b06d push eax */
  push32((uint32_t)(EAX));
  /* 11c3b06e call 0x11c3b561 */
  push32(0x11c3b073u); f_11c3b561();
  /* 11c3b073 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b077 pop ecx */
  ECX = (pop32());
  /* 11c3b078 je 0x11c3b087 */
  if (C.zf) goto L_11c3b087;
  /* 11c3b07a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c3b07d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c3b07f je 0x11c3b087 */
  if (C.zf) goto L_11c3b087;
  /* 11c3b081 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c3b083 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b085 call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11c3b087u);
L_11c3b087:;
  /* 11c3b087 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c3b08b mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 11c3b092 pop esi */
  ESI = (pop32());
  /* 11c3b093 ret  */
  ESPCHK(0x11c3b04au, _esp0);
  ESP += 4; return;
}

/* FUN_1000b094 @ 0x11c3b094 (47 bytes, 19 insns) */
void f_11c3b094(void) {
  FTRACE(0x11c3b094u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b094 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b095 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b097 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b09b je 0x11c3b0aa */
  if (C.zf) goto L_11c3b0aa;
  /* 11c3b09d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c3b0a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c3b0a2 je 0x11c3b0aa */
  if (C.zf) goto L_11c3b0aa;
  /* 11c3b0a4 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c3b0a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b0a8 call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11c3b0aau);
L_11c3b0aa:;
  /* 11c3b0aa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3b0ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b0b0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c3b0b3 je 0x11c3b0bb */
  if (C.zf) goto L_11c3b0bb;
  /* 11c3b0b5 and dword ptr [esi + 8], 0xfffffffb */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0xfffffffbu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c3b0b9 jmp 0x11c3b0bf */
  goto L_11c3b0bf;
L_11c3b0bb:;
  /* 11c3b0bb or dword ptr [esi + 8], 4 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0x4u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
L_11c3b0bf:;
  /* 11c3b0bf pop esi */
  ESI = (pop32());
  /* 11c3b0c0 ret 4 */
  ESPCHK(0x11c3b094u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b0ee @ 0x11c3b0ee (117 bytes, 41 insns) */
void f_11c3b0ee(void) {
  FTRACE(0x11c3b0eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b0ee mov eax, 0x11c3c9a5 */
  EAX = (0x11c3c9a5u);
  /* 11c3b0f3 call 0x11c3bcf4 */
  push32(0x11c3b0f8u); f_11c3bcf4();
  /* 11c3b0f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b0f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b0fa push ebx */
  push32((uint32_t)(EBX));
  /* 11c3b0fb push esi */
  push32((uint32_t)(ESI));
  /* 11c3b0fc push edi */
  push32((uint32_t)(EDI));
  /* 11c3b0fd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3b0ff cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b102 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b104 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b106 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11c3b109 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11c3b10c pop edi */
  EDI = (pop32());
  /* 11c3b10d je 0x11c3b12a */
  if (C.zf) goto L_11c3b12a;
  /* 11c3b10f lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 11c3b112 mov dword ptr [esi], 0x11c3d884 */
  w32((uint32_t)(ESI), (0x11c3d884u));
  /* 11c3b118 mov dword ptr [esi + 0xc], 0x11c3d87c */
  w32((uint32_t)(ESI + 0xc), (0x11c3d87cu));
  /* 11c3b11f call 0x11c3afd0 */
  push32(0x11c3b124u); f_11c3afd0();
  /* 11c3b124 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11c3b127 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11c3b12a:;
  /* 11c3b12a push ebx */
  push32((uint32_t)(EBX));
  /* 11c3b12b mov ecx, esi */
  ECX = (ESI);
  /* 11c3b12d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3b130 call 0x11c3b5ad */
  push32(0x11c3b135u); f_11c3b5ad();
  /* 11c3b135 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3b136 lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 11c3b139 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3b13c mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c3b13f call 0x11c3b682 */
  push32(0x11c3b144u); f_11c3b682();
  /* 11c3b144 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b146 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3b149 pop edi */
  EDI = (pop32());
  /* 11c3b14a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3b14d mov dword ptr [eax + esi], 0x11c3d878 */
  w32((uint32_t)(EAX + ESI*1), (0x11c3d878u));
  /* 11c3b154 mov eax, esi */
  EAX = (ESI);
  /* 11c3b156 pop esi */
  ESI = (pop32());
  /* 11c3b157 pop ebx */
  EBX = (pop32());
  /* 11c3b158 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3b15f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3b160 ret 8 */
  ESPCHK(0x11c3b0eeu, _esp0);
  ESP += 12; return;
}

/* FUN_1000b163 @ 0x11c3b163 (77 bytes, 24 insns) */
void f_11c3b163(void) {
  FTRACE(0x11c3b163u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b163 mov eax, 0x11c3c9bb */
  EAX = (0x11c3c9bbu);
  /* 11c3b168 call 0x11c3bcf4 */
  push32(0x11c3b16du); f_11c3bcf4();
  /* 11c3b16d push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b16e mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 11c3b171 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b172 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c3b175 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3b178 mov dword ptr [eax + ecx - 0x14], 0x11c3d878 */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x11c3d878u));
  /* 11c3b180 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3b184 lea esi, [ecx - 8] */
  ESI = ((uint32_t)(ECX + -0x8));
  /* 11c3b187 add ecx, -0x14 */
  { uint32_t _a=(ECX),_b=(0xffffffecu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b18a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c3b18c sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3b18e and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c3b190 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b193 call 0x11c3b6e7 */
  push32(0x11c3b198u); f_11c3b6e7();
  /* 11c3b198 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3b19c mov ecx, esi */
  ECX = (ESI);
  /* 11c3b19e call 0x11c3b623 */
  push32(0x11c3b1a3u); f_11c3b623();
  /* 11c3b1a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3b1a6 pop esi */
  ESI = (pop32());
  /* 11c3b1a7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3b1ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3b1af ret  */
  ESPCHK(0x11c3b163u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1b0 @ 0x11c3b1b0 (26 bytes, 9 insns) */
void f_11c3b1b0(void) {
  FTRACE(0x11c3b1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b1b0 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b1b1 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b1b3 call 0x11c3b6f6 */
  push32(0x11c3b1b8u); f_11c3b6f6();
  /* 11c3b1b8 and dword ptr [esi + 0x50], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x50)))&(0x0u); w32((uint32_t)(ESI + 0x50), (_r)); fl_logic(_r,32); }
  /* 11c3b1bc or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 11c3b1c0 mov dword ptr [esi], 0x11c3d8a8 */
  w32((uint32_t)(ESI), (0x11c3d8a8u));
  /* 11c3b1c6 mov eax, esi */
  EAX = (ESI);
  /* 11c3b1c8 pop esi */
  ESI = (pop32());
  /* 11c3b1c9 ret  */
  ESPCHK(0x11c3b1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1ca @ 0x11c3b1ca (28 bytes, 11 insns) */
void f_11c3b1ca(void) {
  FTRACE(0x11c3b1cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b1ca push esi */
  push32((uint32_t)(ESI));
  /* 11c3b1cb mov esi, ecx */
  ESI = (ECX);
  /* 11c3b1cd call 0x11c3b1e6 */
  push32(0x11c3b1d2u); f_11c3b1e6();
  /* 11c3b1d2 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11c3b1d7 je 0x11c3b1e0 */
  if (C.zf) goto L_11c3b1e0;
  /* 11c3b1d9 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b1da call 0x11c3b9a8 */
  push32(0x11c3b1dfu); f_11c3b9a8();
  /* 11c3b1df pop ecx */
  ECX = (pop32());
L_11c3b1e0:;
  /* 11c3b1e0 mov eax, esi */
  EAX = (ESI);
  /* 11c3b1e2 pop esi */
  ESI = (pop32());
  /* 11c3b1e3 ret 4 */
  ESPCHK(0x11c3b1cau, _esp0);
  ESP += 8; return;
}

/* FUN_1000b1e6 @ 0x11c3b1e6 (87 bytes, 28 insns) */
void f_11c3b1e6(void) {
  FTRACE(0x11c3b1e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b1e6 mov eax, 0x11c3c9d0 */
  EAX = (0x11c3c9d0u);
  /* 11c3b1eb call 0x11c3bcf4 */
  push32(0x11c3b1f0u); f_11c3bcf4();
  /* 11c3b1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b1f1 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b1f2 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b1f4 mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 11c3b1f7 mov dword ptr [esi], 0x11c3d8a8 */
  w32((uint32_t)(ESI), (0x11c3d8a8u));
  /* 11c3b1fd and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3b201 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b205 jge 0x11c3b211 */
  if ((C.sf==C.of)) goto L_11c3b211;
  /* 11c3b207 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c3b20a push eax */
  push32((uint32_t)(EAX));
  /* 11c3b20b call 0x11c3b56c */
  push32(0x11c3b210u); f_11c3b56c();
  /* 11c3b210 pop ecx */
  ECX = (pop32());
L_11c3b211:;
  /* 11c3b211 cmp dword ptr [esi + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b215 mov ecx, esi */
  ECX = (ESI);
  /* 11c3b217 je 0x11c3b220 */
  if (C.zf) goto L_11c3b220;
  /* 11c3b219 call 0x11c3b23d */
  push32(0x11c3b21eu); f_11c3b23d();
  /* 11c3b21e jmp 0x11c3b225 */
  goto L_11c3b225;
L_11c3b220:;
  /* 11c3b220 call 0x11c3b417 */
  push32(0x11c3b225u); f_11c3b417();
L_11c3b225:;
  /* 11c3b225 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3b229 mov ecx, esi */
  ECX = (ESI);
  /* 11c3b22b call 0x11c3b751 */
  push32(0x11c3b230u); f_11c3b751();
  /* 11c3b230 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3b233 pop esi */
  ESI = (pop32());
  /* 11c3b234 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3b23b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3b23c ret  */
  ESPCHK(0x11c3b1e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b23d @ 0x11c3b23d (99 bytes, 41 insns) */
void f_11c3b23d(void) {
  FTRACE(0x11c3b23du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b23d push esi */
  push32((uint32_t)(ESI));
  /* 11c3b23e mov esi, ecx */
  ESI = (ECX);
  /* 11c3b240 push edi */
  push32((uint32_t)(EDI));
  /* 11c3b241 cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b245 je 0x11c3b29b */
  if (C.zf) goto L_11c3b29b;
  /* 11c3b247 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b24b jge 0x11c3b257 */
  if ((C.sf==C.of)) goto L_11c3b257;
  /* 11c3b24d lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c3b250 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b251 call 0x11c3b56c */
  push32(0x11c3b256u); f_11c3b56c();
  /* 11c3b256 pop ecx */
  ECX = (pop32());
L_11c3b257:;
  /* 11c3b257 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b259 mov ecx, esi */
  ECX = (ESI);
  /* 11c3b25b call dword ptr [eax + 4] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x4))), 0x11c3b25eu);
  /* 11c3b25e push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11c3b261 mov edi, eax */
  EDI = (EAX);
  /* 11c3b263 call 0x11c3ad2f */
  push32(0x11c3b268u); f_11c3ad2f();
  /* 11c3b268 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b26b pop ecx */
  ECX = (pop32());
  /* 11c3b26c je 0x11c3b28b */
  if (C.zf) goto L_11c3b28b;
  /* 11c3b26e cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b271 je 0x11c3b28b */
  if (C.zf) goto L_11c3b28b;
  /* 11c3b273 or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 11c3b277 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b27b jge 0x11c3b287 */
  if ((C.sf==C.of)) goto L_11c3b287;
  /* 11c3b27d lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c3b280 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b281 call 0x11c3b577 */
  push32(0x11c3b286u); f_11c3b577();
  /* 11c3b286 pop ecx */
  ECX = (pop32());
L_11c3b287:;
  /* 11c3b287 mov eax, esi */
  EAX = (ESI);
  /* 11c3b289 jmp 0x11c3b29d */
  goto L_11c3b29d;
L_11c3b28b:;
  /* 11c3b28b cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b28f jge 0x11c3b29b */
  if ((C.sf==C.of)) goto L_11c3b29b;
  /* 11c3b291 add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b294 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b295 call 0x11c3b577 */
  push32(0x11c3b29au); f_11c3b577();
  /* 11c3b29a pop ecx */
  ECX = (pop32());
L_11c3b29b:;
  /* 11c3b29b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3b29d:;
  /* 11c3b29d pop edi */
  EDI = (pop32());
  /* 11c3b29e pop esi */
  ESI = (pop32());
  /* 11c3b29f ret  */
  ESPCHK(0x11c3b23du, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2a0 @ 0x11c3b2a0 (113 bytes, 44 insns) */
void f_11c3b2a0(void) {
  FTRACE(0x11c3b2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b2a0 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b2a1 push edi */
  push32((uint32_t)(EDI));
  /* 11c3b2a2 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b2a4 call 0x11c3b8b9 */
  push32(0x11c3b2a9u); f_11c3b8b9();
  /* 11c3b2a9 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c3b2ac cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b2ae je 0x11c3b30d */
  if (C.zf) goto L_11c3b30d;
  /* 11c3b2b0 mov ecx, esi */
  ECX = (ESI);
  /* 11c3b2b2 call 0x11c3b417 */
  push32(0x11c3b2b7u); f_11c3b417();
  /* 11c3b2b7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b2b9 je 0x11c3b30d */
  if (C.zf) goto L_11c3b30d;
  /* 11c3b2bb mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c3b2be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c3b2c0 jne 0x11c3b2d1 */
  if (!C.zf) goto L_11c3b2d1;
  /* 11c3b2c2 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c3b2c5 mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 11c3b2c8 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 11c3b2cb mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11c3b2ce mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
L_11c3b2d1:;
  /* 11c3b2d1 cmp dword ptr [esp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b2d5 je 0x11c3b2ee */
  if (C.zf) goto L_11c3b2ee;
  /* 11c3b2d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c3b2d9 jne 0x11c3b2f6 */
  if (!C.zf) goto L_11c3b2f6;
  /* 11c3b2db mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c3b2de cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b2e1 jae 0x11c3b2f6 */
  if (!C.cf) goto L_11c3b2f6;
  /* 11c3b2e3 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c3b2e7 mov ecx, esi */
  ECX = (ESI);
  /* 11c3b2e9 call 0x11c3b311 */
  push32(0x11c3b2eeu); f_11c3b311();
L_11c3b2ee:;
  /* 11c3b2ee push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b2f0 pop eax */
  EAX = (pop32());
L_11c3b2f1:;
  /* 11c3b2f1 pop edi */
  EDI = (pop32());
  /* 11c3b2f2 pop esi */
  ESI = (pop32());
  /* 11c3b2f3 ret 4 */
  ESPCHK(0x11c3b2a0u, _esp0);
  ESP += 8; return;
L_11c3b2f6:;
  /* 11c3b2f6 lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 11c3b2fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b2fc push eax */
  push32((uint32_t)(EAX));
  /* 11c3b2fd push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11c3b300 call 0x11c37f30 */
  push32(0x11c3b305u); f_11c37f30();
  /* 11c3b305 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b308 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b30b je 0x11c3b2ee */
  if (C.zf) goto L_11c3b2ee;
L_11c3b30d:;
  /* 11c3b30d mov eax, edi */
  EAX = (EDI);
  /* 11c3b30f jmp 0x11c3b2f1 */
  goto L_11c3b2f1;
}

/* FUN_1000b311 @ 0x11c3b311 (34 bytes, 12 insns) */
void f_11c3b311(void) {
  FTRACE(0x11c3b311u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b311 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11c3b314 cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b317 jae 0x11c3b327 */
  if (!C.cf) goto L_11c3b327;
  /* 11c3b319 mov dl, byte ptr [esp + 4] */
  DL = (r8((uint32_t)(ESP + 0x4)));
  /* 11c3b31d mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11c3b31f inc dword ptr [ecx + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x1c)))+1; w32((uint32_t)(ECX + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11c3b322 movzx eax, dl */
  EAX = ((uint32_t)(DL));
  /* 11c3b325 jmp 0x11c3b330 */
  goto L_11c3b330;
L_11c3b327:;
  /* 11c3b327 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c3b329 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c3b32d call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x11c3b330u);
L_11c3b330:;
  /* 11c3b330 ret 4 */
  ESPCHK(0x11c3b311u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b333 @ 0x11c3b333 (144 bytes, 60 insns) */
void f_11c3b333(void) {
  FTRACE(0x11c3b333u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b333 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3b334 mov ebp, esp */
  EBP = (ESP);
  /* 11c3b336 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b337 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b338 push edi */
  push32((uint32_t)(EDI));
  /* 11c3b339 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b33b call 0x11c3b3c3 */
  push32(0x11c3b340u); f_11c3b3c3();
  /* 11c3b340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b342 je 0x11c3b34c */
  if (C.zf) goto L_11c3b34c;
  /* 11c3b344 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c3b347 movzx eax, byte ptr [eax] */
  EAX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11c3b34a jmp 0x11c3b3bf */
  goto L_11c3b3bf;
L_11c3b34c:;
  /* 11c3b34c mov ecx, esi */
  ECX = (ESI);
  /* 11c3b34e call 0x11c3b8b9 */
  push32(0x11c3b353u); f_11c3b8b9();
  /* 11c3b353 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c3b356 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b358 je 0x11c3b3a7 */
  if (C.zf) goto L_11c3b3a7;
  /* 11c3b35a mov ecx, esi */
  ECX = (ESI);
  /* 11c3b35c call 0x11c3b417 */
  push32(0x11c3b361u); f_11c3b417();
  /* 11c3b361 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b363 je 0x11c3b3a7 */
  if (C.zf) goto L_11c3b3a7;
  /* 11c3b365 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b369 je 0x11c3b386 */
  if (C.zf) goto L_11c3b386;
  /* 11c3b36b lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 11c3b36e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b370 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b371 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11c3b374 call 0x11c3bd13 */
  push32(0x11c3b379u); f_11c3bd13();
  /* 11c3b379 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b37c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b37e jle 0x11c3b3a7 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3b3a7;
  /* 11c3b380 movzx eax, byte ptr [ebp - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x1))));
  /* 11c3b384 jmp 0x11c3b3bf */
  goto L_11c3b3bf;
L_11c3b386:;
  /* 11c3b386 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11c3b389 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c3b38c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b38e jbe 0x11c3b394 */
  if ((C.cf||C.zf)) goto L_11c3b394;
  /* 11c3b390 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3b392 jmp 0x11c3b396 */
  goto L_11c3b396;
L_11c3b394:;
  /* 11c3b394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3b396:;
  /* 11c3b396 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b397 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b398 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11c3b39b call 0x11c3bd13 */
  push32(0x11c3b3a0u); f_11c3bd13();
  /* 11c3b3a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b3a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b3a5 jg 0x11c3b3ab */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3b3ab;
L_11c3b3a7:;
  /* 11c3b3a7 mov eax, edi */
  EAX = (EDI);
  /* 11c3b3a9 jmp 0x11c3b3bf */
  goto L_11c3b3bf;
L_11c3b3ab:;
  /* 11c3b3ab mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c3b3ae mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 11c3b3b1 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b3b3 mov dword ptr [esi + 0x24], ecx */
  w32((uint32_t)(ESI + 0x24), (ECX));
  /* 11c3b3b6 mov dword ptr [esi + 0x28], ecx */
  w32((uint32_t)(ESI + 0x28), (ECX));
  /* 11c3b3b9 mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 11c3b3bc movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
L_11c3b3bf:;
  /* 11c3b3bf pop edi */
  EDI = (pop32());
  /* 11c3b3c0 pop esi */
  ESI = (pop32());
  /* 11c3b3c1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3b3c2 ret  */
  ESPCHK(0x11c3b333u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3c3 @ 0x11c3b3c3 (16 bytes, 8 insns) */
void f_11c3b3c3(void) {
  FTRACE(0x11c3b3c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b3c3 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11c3b3c6 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11c3b3c9 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b3cb jae 0x11c3b3d0 */
  if (!C.cf) goto L_11c3b3d0;
  /* 11c3b3cd sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3b3cf ret  */
  ESPCHK(0x11c3b3c3u, _esp0);
  ESP += 4; return;
L_11c3b3d0:;
  /* 11c3b3d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b3d2 ret  */
  ESPCHK(0x11c3b3c3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b417 @ 0x11c3b417 (219 bytes, 90 insns) */
void f_11c3b417(void) {
  FTRACE(0x11c3b417u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b417 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3b418 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b419 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b41b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b41e push edi */
  push32((uint32_t)(EDI));
  /* 11c3b41f mov ecx, dword ptr [esi + 0x4c] */
  ECX = (r32((uint32_t)(ESI + 0x4c)));
  /* 11c3b422 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b424 je 0x11c3b4ee */
  if (C.zf) goto L_11c3b4ee;
  /* 11c3b42a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c3b42c cmp dword ptr [esi + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b42f jne 0x11c3b4ec */
  if (!C.zf) goto L_11c3b4ec;
  /* 11c3b435 mov edi, dword ptr [esi + 0x1c] */
  EDI = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c3b438 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11c3b43b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b43d jb 0x11c3b443 */
  if (C.cf) goto L_11c3b443;
  /* 11c3b43f sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3b441 jmp 0x11c3b445 */
  goto L_11c3b445;
L_11c3b443:;
  /* 11c3b443 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c3b445:;
  /* 11c3b445 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b447 je 0x11c3b478 */
  if (C.zf) goto L_11c3b478;
  /* 11c3b449 push edi */
  push32((uint32_t)(EDI));
  /* 11c3b44a push eax */
  push32((uint32_t)(EAX));
  /* 11c3b44b push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b44c call 0x11c37f30 */
  push32(0x11c3b451u); f_11c37f30();
  /* 11c3b451 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b454 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b456 je 0x11c3b478 */
  if (C.zf) goto L_11c3b478;
  /* 11c3b458 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b45a jle 0x11c3b4d8 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3b4d8;
  /* 11c3b45c cmp dword ptr [esi + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b45f je 0x11c3b464 */
  if (C.zf) goto L_11c3b464;
  /* 11c3b461 sub dword ptr [esi + 0x1c], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x1c), (_r)); fl_sub(_a,_b,_r,32); }
L_11c3b464:;
  /* 11c3b464 mov esi, dword ptr [esi + 0x18] */
  ESI = (r32((uint32_t)(ESI + 0x18)));
  /* 11c3b467 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3b469 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b46b push edi */
  push32((uint32_t)(EDI));
  /* 11c3b46c push eax */
  push32((uint32_t)(EAX));
  /* 11c3b46d push esi */
  push32((uint32_t)(ESI));
  /* 11c3b46e call 0x11c35a60 */
  push32(0x11c3b473u); f_11c35a60();
  /* 11c3b473 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b476 jmp 0x11c3b4d8 */
  goto L_11c3b4d8;
L_11c3b478:;
  /* 11c3b478 mov ecx, esi */
  ECX = (ESI);
  /* 11c3b47a mov dword ptr [esi + 0x18], ebx */
  w32((uint32_t)(ESI + 0x18), (EBX));
  /* 11c3b47d mov dword ptr [esi + 0x1c], ebx */
  w32((uint32_t)(ESI + 0x1c), (EBX));
  /* 11c3b480 mov dword ptr [esi + 0x20], ebx */
  w32((uint32_t)(ESI + 0x20), (EBX));
  /* 11c3b483 call 0x11c3b3c3 */
  push32(0x11c3b488u); f_11c3b3c3();
  /* 11c3b488 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b48a jle 0x11c3b4df */
  if ((C.zf||C.sf!=C.of)) goto L_11c3b4df;
  /* 11c3b48c mov edx, dword ptr [esi + 0x4c] */
  EDX = (r32((uint32_t)(ESI + 0x4c)));
  /* 11c3b48f mov edi, edx */
  EDI = (EDX);
  /* 11c3b491 mov ecx, edx */
  ECX = (EDX);
  /* 11c3b493 sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 11c3b496 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11c3b499 mov edi, dword ptr [edi*4 + 0x11c57d60] */
  EDI = (r32((uint32_t)(EDI*4 + 0x11c57d60)));
  /* 11c3b4a0 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 11c3b4a3 mov bl, byte ptr [edi + ecx*4 + 4] */
  BL = (r8((uint32_t)(EDI + ECX*4 + 0x4)));
  /* 11c3b4a7 test bl, 0x80 */
  { uint32_t _r=(BL)&(0x80u); fl_logic(_r,8); }
  /* 11c3b4aa je 0x11c3b4c5 */
  if (C.zf) goto L_11c3b4c5;
  /* 11c3b4ac mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c3b4af mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
L_11c3b4b2:;
  /* 11c3b4b2 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b4b4 jae 0x11c3b4bf */
  if (!C.cf) goto L_11c3b4bf;
  /* 11c3b4b6 cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3b4b9 jne 0x11c3b4bc */
  if (!C.zf) goto L_11c3b4bc;
  /* 11c3b4bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c3b4bc:;
  /* 11c3b4bc inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c3b4bd jmp 0x11c3b4b2 */
  goto L_11c3b4b2;
L_11c3b4bf:;
  /* 11c3b4bf test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11c3b4c2 je 0x11c3b4c5 */
  if (C.zf) goto L_11c3b4c5;
  /* 11c3b4c4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c3b4c5:;
  /* 11c3b4c5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c3b4c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b4c9 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b4ca push edx */
  push32((uint32_t)(EDX));
  /* 11c3b4cb call 0x11c37e58 */
  push32(0x11c3b4d0u); f_11c37e58();
  /* 11c3b4d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b4d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b4d6 jne 0x11c3b4dd */
  if (!C.zf) goto L_11c3b4dd;
L_11c3b4d8:;
  /* 11c3b4d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b4db jmp 0x11c3b4ee */
  goto L_11c3b4ee;
L_11c3b4dd:;
  /* 11c3b4dd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c3b4df:;
  /* 11c3b4df or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c3b4e3 mov dword ptr [esi + 0x24], ebx */
  w32((uint32_t)(ESI + 0x24), (EBX));
  /* 11c3b4e6 mov dword ptr [esi + 0x28], ebx */
  w32((uint32_t)(ESI + 0x28), (EBX));
  /* 11c3b4e9 mov dword ptr [esi + 0x2c], ebx */
  w32((uint32_t)(ESI + 0x2c), (EBX));
L_11c3b4ec:;
  /* 11c3b4ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3b4ee:;
  /* 11c3b4ee pop edi */
  EDI = (pop32());
  /* 11c3b4ef pop esi */
  ESI = (pop32());
  /* 11c3b4f0 pop ebx */
  EBX = (pop32());
  /* 11c3b4f1 ret  */
  ESPCHK(0x11c3b417u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4f2 @ 0x11c3b4f2 (100 bytes, 41 insns) */
void f_11c3b4f2(void) {
  FTRACE(0x11c3b4f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b4f2 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b4f3 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b4f5 cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b4f9 je 0x11c3b505 */
  if (C.zf) goto L_11c3b505;
  /* 11c3b4fb cmp dword ptr [esi + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b4ff je 0x11c3b505 */
  if (C.zf) goto L_11c3b505;
  /* 11c3b501 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b503 jmp 0x11c3b552 */
  goto L_11c3b552;
L_11c3b505:;
  /* 11c3b505 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3b506 push edi */
  push32((uint32_t)(EDI));
  /* 11c3b507 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c3b50b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c3b50d je 0x11c3b547 */
  if (C.zf) goto L_11c3b547;
  /* 11c3b50f mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c3b513 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c3b515 jle 0x11c3b547 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3b547;
  /* 11c3b517 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b51b jge 0x11c3b527 */
  if ((C.sf==C.of)) goto L_11c3b527;
  /* 11c3b51d lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c3b520 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b521 call 0x11c3b56c */
  push32(0x11c3b526u); f_11c3b56c();
  /* 11c3b526 pop ecx */
  ECX = (pop32());
L_11c3b527:;
  /* 11c3b527 lea eax, [edi + ebx] */
  EAX = ((uint32_t)(EDI + EBX*1));
  /* 11c3b52a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3b52c push eax */
  push32((uint32_t)(EAX));
  /* 11c3b52d push edi */
  push32((uint32_t)(EDI));
  /* 11c3b52e mov ecx, esi */
  ECX = (ESI);
  /* 11c3b530 call 0x11c3b904 */
  push32(0x11c3b535u); f_11c3b904();
  /* 11c3b535 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b539 jge 0x11c3b54e */
  if ((C.sf==C.of)) goto L_11c3b54e;
  /* 11c3b53b lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c3b53e push eax */
  push32((uint32_t)(EAX));
  /* 11c3b53f call 0x11c3b577 */
  push32(0x11c3b544u); f_11c3b577();
  /* 11c3b544 pop ecx */
  ECX = (pop32());
  /* 11c3b545 jmp 0x11c3b54e */
  goto L_11c3b54e;
L_11c3b547:;
  /* 11c3b547 mov dword ptr [esi + 8], 1 */
  w32((uint32_t)(ESI + 0x8), (0x1u));
L_11c3b54e:;
  /* 11c3b54e pop edi */
  EDI = (pop32());
  /* 11c3b54f mov eax, esi */
  EAX = (ESI);
  /* 11c3b551 pop ebx */
  EBX = (pop32());
L_11c3b552:;
  /* 11c3b552 pop esi */
  ESI = (pop32());
  /* 11c3b553 ret 8 */
  ESPCHK(0x11c3b4f2u, _esp0);
  ESP += 12; return;
}

/* FUN_1000b556 @ 0x11c3b556 (11 bytes, 3 insns) */
void f_11c3b556(void) {
  FTRACE(0x11c3b556u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b556 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c3b55a call dword ptr [0x11c3d06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d06c))), 0x11c3b560u);
  /* 11c3b560 ret  */
  ESPCHK(0x11c3b556u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b561 @ 0x11c3b561 (11 bytes, 3 insns) */
void f_11c3b561(void) {
  FTRACE(0x11c3b561u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b561 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c3b565 call dword ptr [0x11c3d0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0ac))), 0x11c3b56bu);
  /* 11c3b56b ret  */
  ESPCHK(0x11c3b561u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b56c @ 0x11c3b56c (11 bytes, 3 insns) */
void f_11c3b56c(void) {
  FTRACE(0x11c3b56cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b56c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c3b570 call dword ptr [0x11c3d068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d068))), 0x11c3b576u);
  /* 11c3b576 ret  */
  ESPCHK(0x11c3b56cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b577 @ 0x11c3b577 (11 bytes, 3 insns) */
void f_11c3b577(void) {
  FTRACE(0x11c3b577u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b577 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c3b57b call dword ptr [0x11c3d064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d064))), 0x11c3b581u);
  /* 11c3b581 ret  */
  ESPCHK(0x11c3b577u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5ad @ 0x11c3b5ad (118 bytes, 38 insns) */
void f_11c3b5ad(void) {
  FTRACE(0x11c3b5adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b5ad mov eax, 0x11c3c9f6 */
  EAX = (0x11c3c9f6u);
  /* 11c3b5b2 call 0x11c3bcf4 */
  push32(0x11c3b5b7u); f_11c3bcf4();
  /* 11c3b5b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b5b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b5b9 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b5ba push edi */
  push32((uint32_t)(EDI));
  /* 11c3b5bb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c3b5bd mov esi, ecx */
  ESI = (ECX);
  /* 11c3b5bf cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b5c2 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11c3b5c5 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11c3b5c8 je 0x11c3b5e2 */
  if (C.zf) goto L_11c3b5e2;
  /* 11c3b5ca lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 11c3b5cd mov dword ptr [esi], 0x11c3d8dc */
  w32((uint32_t)(ESI), (0x11c3d8dcu));
  /* 11c3b5d3 call 0x11c3afd0 */
  push32(0x11c3b5d8u); f_11c3afd0();
  /* 11c3b5d8 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11c3b5df mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
L_11c3b5e2:;
  /* 11c3b5e2 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b5e4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3b5e7 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3b5ea mov dword ptr [eax + esi], 0x11c3d8d8 */
  w32((uint32_t)(EAX + ESI*1), (0x11c3d8d8u));
  /* 11c3b5f1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b5f3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3b5f6 add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b5f8 call 0x11c3b094 */
  push32(0x11c3b5fdu); f_11c3b094();
  /* 11c3b5fd mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b5ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3b602 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3b605 or dword ptr [eax + esi + 0x24], 1 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1 + 0x24)))|(0x1u); w32((uint32_t)(EAX + ESI*1 + 0x24), (_r)); fl_logic(_r,32); }
  /* 11c3b60a mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11c3b60d mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11c3b610 lea eax, [eax + esi + 0x24] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x24));
  /* 11c3b614 pop edi */
  EDI = (pop32());
  /* 11c3b615 mov eax, esi */
  EAX = (ESI);
  /* 11c3b617 pop esi */
  ESI = (pop32());
  /* 11c3b618 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3b61f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3b620 ret 8 */
  ESPCHK(0x11c3b5adu, _esp0);
  ESP += 12; return;
}

/* FUN_1000b623 @ 0x11c3b623 (15 bytes, 4 insns) */
void f_11c3b623(void) {
  FTRACE(0x11c3b623u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b623 mov eax, dword ptr [ecx - 0xc] */
  EAX = (r32((uint32_t)(ECX + -0xc)));
  /* 11c3b626 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3b629 mov dword ptr [eax + ecx - 0xc], 0x11c3d8d8 */
  w32((uint32_t)(EAX + ECX*1 + -0xc), (0x11c3d8d8u));
  /* 11c3b631 ret  */
  ESPCHK(0x11c3b623u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b632 @ 0x11c3b632 (37 bytes, 14 insns) */
void f_11c3b632(void) {
  FTRACE(0x11c3b632u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b632 mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 11c3b635 cmp dword ptr [ecx + 0x24], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b638 jae 0x11c3b649 */
  if (!C.cf) goto L_11c3b649;
  /* 11c3b63a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c3b63b mov dword ptr [ecx + 0x28], eax */
  w32((uint32_t)(ECX + 0x28), (EAX));
  /* 11c3b63e mov cl, byte ptr [esp + 4] */
  CL = (r8((uint32_t)(ESP + 0x4)));
  /* 11c3b642 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11c3b644 movsx eax, cl */
  EAX = ((uint32_t)(int32_t)(int8_t)(CL));
  /* 11c3b647 jmp 0x11c3b654 */
  goto L_11c3b654;
L_11c3b649:;
  /* 11c3b649 movsx edx, byte ptr [esp + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESP + 0x4))));
  /* 11c3b64e mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c3b650 push edx */
  push32((uint32_t)(EDX));
  /* 11c3b651 call dword ptr [eax + 0x24] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x24))), 0x11c3b654u);
L_11c3b654:;
  /* 11c3b654 ret 4 */
  ESPCHK(0x11c3b632u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b682 @ 0x11c3b682 (101 bytes, 30 insns) */
void f_11c3b682(void) {
  FTRACE(0x11c3b682u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b682 mov eax, 0x11c3ca1a */
  EAX = (0x11c3ca1au);
  /* 11c3b687 call 0x11c3bcf4 */
  push32(0x11c3b68cu); f_11c3bcf4();
  /* 11c3b68c push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b68d push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b68e and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 11c3b692 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b696 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b697 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b699 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11c3b69c je 0x11c3b6b7 */
  if (C.zf) goto L_11c3b6b7;
  /* 11c3b69e lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11c3b6a1 mov dword ptr [esi], 0x11c3d8ec */
  w32((uint32_t)(ESI), (0x11c3d8ecu));
  /* 11c3b6a7 call 0x11c3afd0 */
  push32(0x11c3b6acu); f_11c3afd0();
  /* 11c3b6ac mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11c3b6b3 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c3b6b7:;
  /* 11c3b6b7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b6b9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3b6bc mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3b6bf mov dword ptr [eax + esi], 0x11c3d8e8 */
  w32((uint32_t)(EAX + ESI*1), (0x11c3d8e8u));
  /* 11c3b6c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b6c8 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3b6cb add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b6cd call 0x11c3b094 */
  push32(0x11c3b6d2u); f_11c3b094();
  /* 11c3b6d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3b6d5 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c3b6d9 mov eax, esi */
  EAX = (ESI);
  /* 11c3b6db pop esi */
  ESI = (pop32());
  /* 11c3b6dc mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3b6e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3b6e4 ret 8 */
  ESPCHK(0x11c3b682u, _esp0);
  ESP += 12; return;
}

/* FUN_1000b6e7 @ 0x11c3b6e7 (15 bytes, 4 insns) */
void f_11c3b6e7(void) {
  FTRACE(0x11c3b6e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b6e7 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 11c3b6ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3b6ed mov dword ptr [eax + ecx - 8], 0x11c3d8e8 */
  w32((uint32_t)(EAX + ECX*1 + -0x8), (0x11c3d8e8u));
  /* 11c3b6f5 ret  */
  ESPCHK(0x11c3b6e7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f6 @ 0x11c3b6f6 (63 bytes, 23 insns) */
void f_11c3b6f6(void) {
  FTRACE(0x11c3b6f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b6f6 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b6f7 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b6f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b6fb or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c3b6ff or dword ptr [esi + 0x30], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x30)))|(0xffffffffu); w32((uint32_t)(ESI + 0x30), (_r)); fl_logic(_r,32); }
  /* 11c3b703 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c3b706 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c3b709 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c3b70c mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11c3b70f mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 11c3b712 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 11c3b715 mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 11c3b718 mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 11c3b71b mov dword ptr [esi + 0x28], eax */
  w32((uint32_t)(ESI + 0x28), (EAX));
  /* 11c3b71e mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 11c3b721 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c3b724 mov dword ptr [esi], 0x11c3d8f8 */
  w32((uint32_t)(ESI), (0x11c3d8f8u));
  /* 11c3b72a push eax */
  push32((uint32_t)(EAX));
  /* 11c3b72b call 0x11c3b556 */
  push32(0x11c3b730u); f_11c3b556();
  /* 11c3b730 pop ecx */
  ECX = (pop32());
  /* 11c3b731 mov eax, esi */
  EAX = (ESI);
  /* 11c3b733 pop esi */
  ESI = (pop32());
  /* 11c3b734 ret  */
  ESPCHK(0x11c3b6f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b735 @ 0x11c3b735 (28 bytes, 11 insns) */
void f_11c3b735(void) {
  FTRACE(0x11c3b735u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b735 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b736 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b738 call 0x11c3b751 */
  push32(0x11c3b73du); f_11c3b751();
  /* 11c3b73d test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11c3b742 je 0x11c3b74b */
  if (C.zf) goto L_11c3b74b;
  /* 11c3b744 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b745 call 0x11c3b9a8 */
  push32(0x11c3b74au); f_11c3b9a8();
  /* 11c3b74a pop ecx */
  ECX = (pop32());
L_11c3b74b:;
  /* 11c3b74b mov eax, esi */
  EAX = (ESI);
  /* 11c3b74d pop esi */
  ESI = (pop32());
  /* 11c3b74e ret 4 */
  ESPCHK(0x11c3b735u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b751 @ 0x11c3b751 (48 bytes, 19 insns) */
void f_11c3b751(void) {
  FTRACE(0x11c3b751u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b751 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b752 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b754 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c3b757 mov dword ptr [esi], 0x11c3d8f8 */
  w32((uint32_t)(ESI), (0x11c3d8f8u));
  /* 11c3b75d push eax */
  push32((uint32_t)(EAX));
  /* 11c3b75e call 0x11c3b561 */
  push32(0x11c3b763u); f_11c3b561();
  /* 11c3b763 pop ecx */
  ECX = (pop32());
  /* 11c3b764 mov ecx, esi */
  ECX = (ESI);
  /* 11c3b766 call 0x11c3b8a2 */
  push32(0x11c3b76bu); f_11c3b8a2();
  /* 11c3b76b cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b76f je 0x11c3b77f */
  if (C.zf) goto L_11c3b77f;
  /* 11c3b771 mov esi, dword ptr [esi + 0x10] */
  ESI = (r32((uint32_t)(ESI + 0x10)));
  /* 11c3b774 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3b776 je 0x11c3b77f */
  if (C.zf) goto L_11c3b77f;
  /* 11c3b778 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b779 call 0x11c3b9a8 */
  push32(0x11c3b77eu); f_11c3b9a8();
  /* 11c3b77e pop ecx */
  ECX = (pop32());
L_11c3b77f:;
  /* 11c3b77f pop esi */
  ESI = (pop32());
  /* 11c3b780 ret  */
  ESPCHK(0x11c3b751u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7b5 @ 0x11c3b7b5 (86 bytes, 42 insns) */
void f_11c3b7b5(void) {
  FTRACE(0x11c3b7b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b7b5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3b7b6 mov ebp, esp */
  EBP = (ESP);
  /* 11c3b7b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b7b9 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3b7bd push ebx */
  push32((uint32_t)(EBX));
  /* 11c3b7be mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3b7c1 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b7c2 mov eax, ebx */
  EAX = (EBX);
  /* 11c3b7c4 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c3b7c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b7c7 push edi */
  push32((uint32_t)(EDI));
  /* 11c3b7c8 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b7ca je 0x11c3b801 */
  if (C.zf) goto L_11c3b801;
  /* 11c3b7cc mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_11c3b7cf:;
  /* 11c3b7cf cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b7d3 jne 0x11c3b7e6 */
  if (!C.zf) goto L_11c3b7e6;
  /* 11c3b7d5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c3b7d8 cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b7db jae 0x11c3b7e6 */
  if (!C.cf) goto L_11c3b7e6;
  /* 11c3b7dd mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11c3b7df mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11c3b7e1 inc dword ptr [esi + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))+1; w32((uint32_t)(ESI + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11c3b7e4 jmp 0x11c3b7f6 */
  goto L_11c3b7f6;
L_11c3b7e6:;
  /* 11c3b7e6 movzx ecx, byte ptr [edi] */
  ECX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c3b7e9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b7eb push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b7ec mov ecx, esi */
  ECX = (ESI);
  /* 11c3b7ee call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x11c3b7f1u);
  /* 11c3b7f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b7f4 je 0x11c3b801 */
  if (C.zf) goto L_11c3b801;
L_11c3b7f6:;
  /* 11c3b7f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c3b7f7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c3b7fa mov eax, ebx */
  EAX = (EBX);
  /* 11c3b7fc dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c3b7fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b7ff jne 0x11c3b7cf */
  if (!C.zf) goto L_11c3b7cf;
L_11c3b801:;
  /* 11c3b801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3b804 pop edi */
  EDI = (pop32());
  /* 11c3b805 pop esi */
  ESI = (pop32());
  /* 11c3b806 pop ebx */
  EBX = (pop32());
  /* 11c3b807 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3b808 ret 8 */
  ESPCHK(0x11c3b7b5u, _esp0);
  ESP += 12; return;
}

/* FUN_1000b80b @ 0x11c3b80b (151 bytes, 67 insns) */
void f_11c3b80b(void) {
  FTRACE(0x11c3b80bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b80b push ebp */
  push32((uint32_t)(EBP));
  /* 11c3b80c mov ebp, esp */
  EBP = (ESP);
  /* 11c3b80e push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b80f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3b813 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3b814 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b815 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b817 push edi */
  push32((uint32_t)(EDI));
  /* 11c3b818 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b81c je 0x11c3b863 */
  if (C.zf) goto L_11c3b863;
  /* 11c3b81e cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b822 jne 0x11c3b82c */
  if (!C.zf) goto L_11c3b82c;
  /* 11c3b824 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b826 call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x11c3b829u);
  /* 11c3b829 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_11c3b82c:;
  /* 11c3b82c mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3b82f mov eax, ebx */
  EAX = (EBX);
  /* 11c3b831 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c3b832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b834 je 0x11c3b859 */
  if (C.zf) goto L_11c3b859;
  /* 11c3b836 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_11c3b839:;
  /* 11c3b839 cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b83d je 0x11c3b859 */
  if (C.zf) goto L_11c3b859;
  /* 11c3b83f mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 11c3b842 mov ecx, esi */
  ECX = (ESI);
  /* 11c3b844 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c3b846 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b848 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c3b849 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c3b84c call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x11c3b84fu);
  /* 11c3b84f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c3b852 mov eax, ebx */
  EAX = (EBX);
  /* 11c3b854 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c3b855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b857 jne 0x11c3b839 */
  if (!C.zf) goto L_11c3b839;
L_11c3b859:;
  /* 11c3b859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3b85c pop edi */
  EDI = (pop32());
  /* 11c3b85d pop esi */
  ESI = (pop32());
  /* 11c3b85e pop ebx */
  EBX = (pop32());
  /* 11c3b85f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3b860 ret 8 */
  ESPCHK(0x11c3b80bu, _esp0);
  ESP += 12; return;
L_11c3b863:;
  /* 11c3b863 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11c3b866:;
  /* 11c3b866 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c3b868 je 0x11c3b859 */
  if (C.zf) goto L_11c3b859;
  /* 11c3b86a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b86c mov ecx, esi */
  ECX = (ESI);
  /* 11c3b86e call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x11c3b871u);
  /* 11c3b871 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b874 je 0x11c3b859 */
  if (C.zf) goto L_11c3b859;
  /* 11c3b876 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c3b879 mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
  /* 11c3b87c sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3b87e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b880 jl 0x11c3b884 */
  if ((C.sf!=C.of)) goto L_11c3b884;
  /* 11c3b882 mov edi, ebx */
  EDI = (EBX);
L_11c3b884:;
  /* 11c3b884 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c3b886 jle 0x11c3b866 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3b866;
  /* 11c3b888 push edi */
  push32((uint32_t)(EDI));
  /* 11c3b889 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b88a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3b88d call 0x11c37950 */
  push32(0x11c3b892u); f_11c37950();
  /* 11c3b892 add dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3b895 add dword ptr [esi + 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x28))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI + 0x28), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3b898 add dword ptr [ebp - 4], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3b89b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b89e sub ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3b8a0 jmp 0x11c3b866 */
  goto L_11c3b866;
}

/* FUN_1000b8a2 @ 0x11c3b8a2 (23 bytes, 10 insns) */
void f_11c3b8a2(void) {
  FTRACE(0x11c3b8a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b8a2 mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 11c3b8a5 cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b8a8 jb 0x11c3b8b5 */
  if (C.cf) goto L_11c3b8b5;
  /* 11c3b8aa mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11c3b8ad cmp eax, dword ptr [ecx + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b8b0 ja 0x11c3b8b5 */
  if ((!C.cf&&!C.zf)) goto L_11c3b8b5;
  /* 11c3b8b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b8b4 ret  */
  ESPCHK(0x11c3b8a2u, _esp0);
  ESP += 4; return;
L_11c3b8b5:;
  /* 11c3b8b5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b8b8 ret  */
  ESPCHK(0x11c3b8a2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8b9 @ 0x11c3b8b9 (30 bytes, 14 insns) */
void f_11c3b8b9(void) {
  FTRACE(0x11c3b8b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b8b9 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b8bd jne 0x11c3b8d4 */
  if (!C.zf) goto L_11c3b8d4;
  /* 11c3b8bf cmp dword ptr [ecx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b8c3 jne 0x11c3b8d4 */
  if (!C.zf) goto L_11c3b8d4;
  /* 11c3b8c5 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c3b8c7 call dword ptr [eax + 0x28] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x28))), 0x11c3b8cau);
  /* 11c3b8ca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3b8cb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c3b8cd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3b8cf and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b8d2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c3b8d3 ret  */
  ESPCHK(0x11c3b8b9u, _esp0);
  ESP += 4; return;
L_11c3b8d4:;
  /* 11c3b8d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b8d6 ret  */
  ESPCHK(0x11c3b8b9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8d7 @ 0x11c3b8d7 (45 bytes, 20 insns) */
void f_11c3b8d7(void) {
  FTRACE(0x11c3b8d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b8d7 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b8d8 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b8da push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11c3b8df call 0x11c3b9ff */
  push32(0x11c3b8e4u); f_11c3b9ff();
  /* 11c3b8e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b8e6 pop ecx */
  ECX = (pop32());
  /* 11c3b8e7 jne 0x11c3b8ee */
  if (!C.zf) goto L_11c3b8ee;
  /* 11c3b8e9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b8ec pop esi */
  ESI = (pop32());
  /* 11c3b8ed ret  */
  ESPCHK(0x11c3b8d7u, _esp0);
  ESP += 4; return;
L_11c3b8ee:;
  /* 11c3b8ee lea ecx, [eax + 0x200] */
  ECX = ((uint32_t)(EAX + 0x200));
  /* 11c3b8f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b8f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b8f7 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b8f8 mov ecx, esi */
  ECX = (ESI);
  /* 11c3b8fa call 0x11c3b904 */
  push32(0x11c3b8ffu); f_11c3b904();
  /* 11c3b8ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b901 pop eax */
  EAX = (pop32());
  /* 11c3b902 pop esi */
  ESI = (pop32());
  /* 11c3b903 ret  */
  ESPCHK(0x11c3b8d7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b904 @ 0x11c3b904 (48 bytes, 18 insns) */
void f_11c3b904(void) {
  FTRACE(0x11c3b904u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b904 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b905 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b907 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b90b je 0x11c3b91b */
  if (C.zf) goto L_11c3b91b;
  /* 11c3b90d mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c3b910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b912 je 0x11c3b91b */
  if (C.zf) goto L_11c3b91b;
  /* 11c3b914 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b915 call 0x11c3b9a8 */
  push32(0x11c3b91au); f_11c3b9a8();
  /* 11c3b91a pop ecx */
  ECX = (pop32());
L_11c3b91b:;
  /* 11c3b91b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3b91f mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c3b922 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c3b926 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c3b929 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c3b92d mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11c3b930 pop esi */
  ESI = (pop32());
  /* 11c3b931 ret 0xc */
  ESPCHK(0x11c3b904u, _esp0);
  ESP += 16; return;
}

/* FUN_1000b94c @ 0x11c3b94c (92 bytes, 40 insns) */
void f_11c3b94c(void) {
  FTRACE(0x11c3b94cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b94c push esi */
  push32((uint32_t)(ESI));
  /* 11c3b94d mov esi, ecx */
  ESI = (ECX);
  /* 11c3b94f mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11c3b952 cmp eax, dword ptr [esi + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b955 jae 0x11c3b962 */
  if (!C.cf) goto L_11c3b962;
  /* 11c3b957 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c3b95b call 0x11c3b632 */
  push32(0x11c3b960u); f_11c3b632();
  /* 11c3b960 jmp 0x11c3b9a4 */
  goto L_11c3b9a4;
L_11c3b962:;
  /* 11c3b962 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3b964 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b966 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3b968 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3b96a mov ecx, esi */
  ECX = (ESI);
  /* 11c3b96c call dword ptr [eax + 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0xc))), 0x11c3b96fu);
  /* 11c3b96f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b972 jne 0x11c3b978 */
  if (!C.zf) goto L_11c3b978;
  /* 11c3b974 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3b976 jmp 0x11c3b9a4 */
  goto L_11c3b9a4;
L_11c3b978:;
  /* 11c3b978 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3b97c push ebx */
  push32((uint32_t)(EBX));
  /* 11c3b97d mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c3b981 jne 0x11c3b9a1 */
  if (!C.zf) goto L_11c3b9a1;
  /* 11c3b983 mov eax, dword ptr [esi + 0x2c] */
  EAX = (r32((uint32_t)(ESI + 0x2c)));
  /* 11c3b986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3b988 je 0x11c3b9a1 */
  if (C.zf) goto L_11c3b9a1;
  /* 11c3b98a mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c3b98d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3b98f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c3b990 push eax */
  push32((uint32_t)(EAX));
  /* 11c3b991 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b992 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c3b993 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3b994 call 0x11c35a60 */
  push32(0x11c3b999u); f_11c35a60();
  /* 11c3b999 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c3b99c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3b99f mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_11c3b9a1:;
  /* 11c3b9a1 mov eax, ebx */
  EAX = (EBX);
  /* 11c3b9a3 pop ebx */
  EBX = (pop32());
L_11c3b9a4:;
  /* 11c3b9a4 pop esi */
  ESI = (pop32());
  /* 11c3b9a5 ret 4 */
  ESPCHK(0x11c3b94cu, _esp0);
  ESP += 8; return;
}

/* FUN_1000b9a8 @ 0x11c3b9a8 (11 bytes, 4 insns) */
void f_11c3b9a8(void) {
  FTRACE(0x11c3b9a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b9a8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c3b9ac call 0x11c3606c */
  push32(0x11c3b9b1u); f_11c3606c();
  /* 11c3b9b1 pop ecx */
  ECX = (pop32());
  /* 11c3b9b2 ret  */
  ESPCHK(0x11c3b9a8u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11c3b9b4 (6 bytes, 1 insns) */
void f_11c3b9b4(void) {
  FTRACE(0x11c3b9b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b9b4 jmp dword ptr [0x11c3d058] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c3d058)))); return;
}

/* FUN_1000b9ba @ 0x11c3b9ba (41 bytes, 17 insns) */
void f_11c3b9ba(void) {
  FTRACE(0x11c3b9bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b9ba push esi */
  push32((uint32_t)(ESI));
  /* 11c3b9bb mov esi, ecx */
  ESI = (ECX);
  /* 11c3b9bd push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11c3b9bf mov dword ptr [esi], 0x11c3d928 */
  w32((uint32_t)(ESI), (0x11c3d928u));
  /* 11c3b9c5 call 0x11c35ff6 */
  push32(0x11c3b9cau); f_11c35ff6();
  /* 11c3b9ca mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11c3b9cd pop ecx */
  ECX = (pop32());
  /* 11c3b9ce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c3b9d0 je 0x11c3b9d9 */
  if (C.zf) goto L_11c3b9d9;
  /* 11c3b9d2 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b9d3 call 0x11c3606c */
  push32(0x11c3b9d8u); f_11c3606c();
  /* 11c3b9d8 pop ecx */
  ECX = (pop32());
L_11c3b9d9:;
  /* 11c3b9d9 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11c3b9db call 0x11c36057 */
  push32(0x11c3b9e0u); f_11c36057();
  /* 11c3b9e0 pop ecx */
  ECX = (pop32());
  /* 11c3b9e1 pop esi */
  ESI = (pop32());
  /* 11c3b9e2 ret  */
  ESPCHK(0x11c3b9bau, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e3 @ 0x11c3b9e3 (28 bytes, 11 insns) */
void f_11c3b9e3(void) {
  FTRACE(0x11c3b9e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b9e3 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b9e4 mov esi, ecx */
  ESI = (ECX);
  /* 11c3b9e6 call 0x11c3b9ba */
  push32(0x11c3b9ebu); f_11c3b9ba();
  /* 11c3b9eb test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11c3b9f0 je 0x11c3b9f9 */
  if (C.zf) goto L_11c3b9f9;
  /* 11c3b9f2 push esi */
  push32((uint32_t)(ESI));
  /* 11c3b9f3 call 0x11c3b9a8 */
  push32(0x11c3b9f8u); f_11c3b9a8();
  /* 11c3b9f8 pop ecx */
  ECX = (pop32());
L_11c3b9f9:;
  /* 11c3b9f9 mov eax, esi */
  EAX = (ESI);
  /* 11c3b9fb pop esi */
  ESI = (pop32());
  /* 11c3b9fc ret 4 */
  ESPCHK(0x11c3b9e3u, _esp0);
  ESP += 8; return;
}

/* operator_new @ 0x11c3b9ff (14 bytes, 6 insns) */
void f_11c3b9ff(void) {
  FTRACE(0x11c3b9ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3b9ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3ba01 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c3ba05 call 0x11c34504 */
  push32(0x11c3ba0au); f_11c34504();
  /* 11c3ba0a pop ecx */
  ECX = (pop32());
  /* 11c3ba0b pop ecx */
  ECX = (pop32());
  /* 11c3ba0c ret  */
  ESPCHK(0x11c3b9ffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba0d @ 0x11c3ba0d (45 bytes, 17 insns) */
void f_11c3ba0d(void) {
  FTRACE(0x11c3ba0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ba0d push ebp */
  push32((uint32_t)(EBP));
  /* 11c3ba0e mov ebp, esp */
  EBP = (ESP);
  /* 11c3ba10 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3ba11 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3ba12 push esi */
  push32((uint32_t)(ESI));
  /* 11c3ba13 push edi */
  push32((uint32_t)(EDI));
  /* 11c3ba14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3ba17 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3ba1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c3ba1d mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11c3ba24 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c3ba26 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11c3ba2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3ba2f mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3ba32 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11c3ba35 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3ba38 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000ba41 @ 0x11c3ba41 (7 bytes, 4 insns) */
void f_11c3ba41(void) {
  FTRACE(0x11c3ba41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ba41 pop eax */
  EAX = (pop32());
  /* 11c3ba42 pop ecx */
  ECX = (pop32());
  /* 11c3ba43 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11c3ba46 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000ba48 @ 0x11c3ba48 (7 bytes, 4 insns) */
void f_11c3ba48(void) {
  FTRACE(0x11c3ba48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ba48 pop eax */
  EAX = (pop32());
  /* 11c3ba49 pop ecx */
  ECX = (pop32());
  /* 11c3ba4a xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11c3ba4d jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000ba4f @ 0x11c3ba4f (79 bytes, 29 insns) */
void f_11c3ba4f(void) {
  FTRACE(0x11c3ba4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ba4f push ebp */
  push32((uint32_t)(EBP));
  /* 11c3ba50 mov ebp, esp */
  EBP = (ESP);
  /* 11c3ba52 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3ba53 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3ba54 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3ba55 push esi */
  push32((uint32_t)(ESI));
  /* 11c3ba56 push edi */
  push32((uint32_t)(EDI));
  /* 11c3ba57 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3ba5d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c3ba60 mov dword ptr [ebp - 4], 0x11c3ba77 */
  w32((uint32_t)(EBP + -0x4), (0x11c3ba77u));
  /* 11c3ba67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3ba69 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3ba6c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c3ba6f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3ba72 call 0x11c3b9b4 */
  push32(0x11c3ba77u); f_11c3b9b4();
  /* 11c3ba77 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3ba7a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3ba7d and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11c3ba7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3ba82 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11c3ba85 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3ba8b mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c3ba8e mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11c3ba90 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11c3ba97 pop edi */
  EDI = (pop32());
  /* 11c3ba98 pop esi */
  ESI = (pop32());
  /* 11c3ba99 pop ebx */
  EBX = (pop32());
  /* 11c3ba9a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3ba9b ret 8 */
  ESPCHK(0x11c3ba4fu, _esp0);
  ESP += 12; return;
}

/* FUN_1000ba9e @ 0x11c3ba9e (54 bytes, 27 insns) */
void f_11c3ba9e(void) {
  FTRACE(0x11c3ba9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ba9e push ebp */
  push32((uint32_t)(EBP));
  /* 11c3ba9f mov ebp, esp */
  EBP = (ESP);
  /* 11c3baa1 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3baa4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3baa5 push esi */
  push32((uint32_t)(ESI));
  /* 11c3baa6 push edi */
  push32((uint32_t)(EDI));
  /* 11c3baa7 cld  */
  C.df=0;
  /* 11c3baa8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c3baab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3baad push eax */
  push32((uint32_t)(EAX));
  /* 11c3baae push eax */
  push32((uint32_t)(EAX));
  /* 11c3baaf push eax */
  push32((uint32_t)(EAX));
  /* 11c3bab0 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c3bab3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3bab6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3bab9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3babc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3babf call 0x11c3bf5a */
  push32(0x11c3bac4u); f_11c3bf5a();
  /* 11c3bac4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3bac7 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11c3baca pop edi */
  EDI = (pop32());
  /* 11c3bacb pop esi */
  ESI = (pop32());
  /* 11c3bacc pop ebx */
  EBX = (pop32());
  /* 11c3bacd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c3bad0 mov esp, ebp */
  ESP = (EBP);
  /* 11c3bad2 pop ebp */
  EBP = (pop32());
  /* 11c3bad3 ret  */
  ESPCHK(0x11c3ba9eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bad4 @ 0x11c3bad4 (84 bytes, 26 insns) */
void f_11c3bad4(void) {
  FTRACE(0x11c3bad4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bad4 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3bad5 mov ebp, esp */
  EBP = (ESP);
  /* 11c3bad7 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3bada mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3badd and dword ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))&(0x0u); w32((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,32); }
  /* 11c3bae1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3bae4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11c3bae7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c3baea mov dword ptr [ebp - 0x10], 0x11c3bb28 */
  w32((uint32_t)(EBP + -0x10), (0x11c3bb28u));
  /* 11c3baf1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3baf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c3baf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c3baf8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3bafe mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11c3bb01 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11c3bb07 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11c3bb0d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3bb10 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3bb11 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3bb14 call 0x11c3c780 */
  push32(0x11c3bb19u); f_11c3c780();
  /* 11c3bb19 mov ecx, eax */
  ECX = (EAX);
  /* 11c3bb1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c3bb1e mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11c3bb24 mov eax, ecx */
  EAX = (ECX);
  /* 11c3bb26 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3bb27 ret  */
  ESPCHK(0x11c3bad4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb28 @ 0x11c3bb28 (37 bytes, 16 insns) */
void f_11c3bb28(void) {
  FTRACE(0x11c3bb28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bb28 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3bb29 mov ebp, esp */
  EBP = (ESP);
  /* 11c3bb2b cld  */
  C.df=0;
  /* 11c3bb2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bb2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3bb31 push eax */
  push32((uint32_t)(EAX));
  /* 11c3bb32 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11c3bb35 push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 11c3bb38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3bb3a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3bb3d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11c3bb40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3bb43 call 0x11c3bf5a */
  push32(0x11c3bb48u); f_11c3bf5a();
  /* 11c3bb48 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3bb4b pop ebp */
  EBP = (pop32());
  /* 11c3bb4c ret  */
  ESPCHK(0x11c3bb28u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb4d @ 0x11c3bb4d (182 bytes, 57 insns) */
void f_11c3bb4d(void) {
  FTRACE(0x11c3bb4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bb4d push ebp */
  push32((uint32_t)(EBP));
  /* 11c3bb4e mov ebp, esp */
  EBP = (ESP);
  /* 11c3bb50 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3bb53 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3bb54 push esi */
  push32((uint32_t)(ESI));
  /* 11c3bb55 push edi */
  push32((uint32_t)(EDI));
  /* 11c3bb56 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11c3bb5a mov dword ptr [ebp - 0x24], 0x11c3bc03 */
  w32((uint32_t)(EBP + -0x24), (0x11c3bc03u));
  /* 11c3bb61 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c3bb64 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c3bb67 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bb6a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c3bb6d mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c3bb70 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11c3bb73 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11c3bb76 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11c3bb79 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 11c3bb7d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11c3bb81 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c3bb85 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3bb89 mov dword ptr [ebp - 0x10], 0x11c3bbd5 */
  w32((uint32_t)(EBP + -0x10), (0x11c3bbd5u));
  /* 11c3bb90 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11c3bb93 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11c3bb96 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3bb9c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c3bb9f lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c3bba5 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11c3bbab mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11c3bbb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3bbb5 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11c3bbb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3bbbb mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11c3bbbe lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11c3bbc1 push eax */
  push32((uint32_t)(EAX));
  /* 11c3bbc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3bbc5 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c3bbc7 call 0x11c33dee */
  push32(0x11c3bbccu); f_11c33dee();
  /* 11c3bbcc call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11c3bbcfu);
  /* 11c3bbcf pop ecx */
  ECX = (pop32());
  /* 11c3bbd0 pop ecx */
  ECX = (pop32());
  /* 11c3bbd1 and dword ptr [ebp - 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))&(0x0u); w32((uint32_t)(EBP + -0x34), (_r)); fl_logic(_r,32); }
  /* 11c3bbd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bbd9 je 0x11c3bbf2 */
  if (C.zf) goto L_11c3bbf2;
  /* 11c3bbdb mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11c3bbe2 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c3bbe4 mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11c3bbe7 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11c3bbe9 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11c3bbf0 jmp 0x11c3bbfb */
  goto L_11c3bbfb;
L_11c3bbf2:;
  /* 11c3bbf2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11c3bbf5 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11c3bbfb:;
  /* 11c3bbfb mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11c3bbfe pop edi */
  EDI = (pop32());
  /* 11c3bbff pop esi */
  ESI = (pop32());
  /* 11c3bc00 pop ebx */
  EBX = (pop32());
  /* 11c3bc01 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3bc02 ret  */
  ESPCHK(0x11c3bb4du, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc03 @ 0x11c3bc03 (114 bytes, 47 insns) */
void f_11c3bc03(void) {
  FTRACE(0x11c3bc03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bc03 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3bc04 mov ebp, esp */
  EBP = (ESP);
  /* 11c3bc06 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3bc07 push esi */
  push32((uint32_t)(ESI));
  /* 11c3bc08 push edi */
  push32((uint32_t)(EDI));
  /* 11c3bc09 cld  */
  C.df=0;
  /* 11c3bc0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3bc0d mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c3bc10 and eax, 0x66 */
  { uint32_t _r=(EAX)&(0x66u); EAX = (_r); fl_logic(_r,32); }
  /* 11c3bc13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3bc15 je 0x11c3bc26 */
  if (C.zf) goto L_11c3bc26;
  /* 11c3bc17 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bc1a mov dword ptr [eax + 0x24], 1 */
  w32((uint32_t)(EAX + 0x24), (0x1u));
  /* 11c3bc21 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3bc23 pop eax */
  EAX = (pop32());
  /* 11c3bc24 jmp 0x11c3bc73 */
  goto L_11c3bc73;
L_11c3bc26:;
  /* 11c3bc26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3bc28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bc2b push dword ptr [eax + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x14))));
  /* 11c3bc2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bc31 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11c3bc34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bc37 push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 11c3bc3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3bc3c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3bc3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bc42 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11c3bc45 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3bc48 call 0x11c3bf5a */
  push32(0x11c3bc4du); f_11c3bf5a();
  /* 11c3bc4d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3bc50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bc53 cmp dword ptr [eax + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bc57 jne 0x11c3bc64 */
  if (!C.zf) goto L_11c3bc64;
  /* 11c3bc59 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3bc5c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3bc5f call 0x11c3ba4f */
  push32(0x11c3bc64u); f_11c3ba4f();
L_11c3bc64:;
  /* 11c3bc64 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bc67 mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11c3bc6a mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11c3bc6d jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11c3bc70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3bc72 pop eax */
  EAX = (pop32());
L_11c3bc73:;
  /* 11c3bc73 pop edi */
  EDI = (pop32());
  /* 11c3bc74 pop esi */
  ESI = (pop32());
  /* 11c3bc75 pop ebx */
  EBX = (pop32());
  /* 11c3bc76 pop ebp */
  EBP = (pop32());
  /* 11c3bc77 ret  */
  ESPCHK(0x11c3bc03u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc78 @ 0x11c3bc78 (123 bytes, 51 insns) */
void f_11c3bc78(void) {
  FTRACE(0x11c3bc78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bc78 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3bc79 mov ebp, esp */
  EBP = (ESP);
  /* 11c3bc7b push ecx */
  push32((uint32_t)(ECX));
  /* 11c3bc7c push ebx */
  push32((uint32_t)(EBX));
  /* 11c3bc7d push esi */
  push32((uint32_t)(ESI));
  /* 11c3bc7e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bc82 push edi */
  push32((uint32_t)(EDI));
  /* 11c3bc83 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3bc86 mov esi, dword ptr [edi + 0xc] */
  ESI = (r32((uint32_t)(EDI + 0xc)));
  /* 11c3bc89 mov ebx, dword ptr [edi + 0x10] */
  EBX = (r32((uint32_t)(EDI + 0x10)));
  /* 11c3bc8c mov eax, esi */
  EAX = (ESI);
  /* 11c3bc8e mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11c3bc91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c3bc94 jl 0x11c3bccf */
  if ((C.sf!=C.of)) goto L_11c3bccf;
L_11c3bc96:;
  /* 11c3bc96 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bc99 jne 0x11c3bca0 */
  if (!C.zf) goto L_11c3bca0;
  /* 11c3bc9b call 0x11c3c82d */
  push32(0x11c3bca0u); f_11c3c82d();
L_11c3bca0:;
  /* 11c3bca0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3bca3 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c3bca4 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11c3bca7 cmp dword ptr [ebx + eax*4 + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*4 + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bcab lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 11c3bcae jge 0x11c3bcb5 */
  if ((C.sf==C.of)) goto L_11c3bcb5;
  /* 11c3bcb0 cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bcb3 jle 0x11c3bcba */
  if ((C.zf||C.sf!=C.of)) goto L_11c3bcba;
L_11c3bcb5:;
  /* 11c3bcb5 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bcb8 jne 0x11c3bcc6 */
  if (!C.zf) goto L_11c3bcc6;
L_11c3bcba:;
  /* 11c3bcba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3bcbd dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11c3bcc0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c3bcc3 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
L_11c3bcc6:;
  /* 11c3bcc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bcca jge 0x11c3bc96 */
  if ((C.sf==C.of)) goto L_11c3bc96;
  /* 11c3bccc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11c3bccf:;
  /* 11c3bccf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c3bcd2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c3bcd3 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11c3bcd5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c3bcd8 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11c3bcda cmp eax, dword ptr [edi + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bcdd ja 0x11c3bce3 */
  if ((!C.cf&&!C.zf)) goto L_11c3bce3;
  /* 11c3bcdf cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bce1 jbe 0x11c3bce8 */
  if ((C.cf||C.zf)) goto L_11c3bce8;
L_11c3bce3:;
  /* 11c3bce3 call 0x11c3c82d */
  push32(0x11c3bce8u); f_11c3c82d();
L_11c3bce8:;
  /* 11c3bce8 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11c3bceb pop edi */
  EDI = (pop32());
  /* 11c3bcec pop esi */
  ESI = (pop32());
  /* 11c3bced lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 11c3bcf0 pop ebx */
  EBX = (pop32());
  /* 11c3bcf1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3bcf2 ret  */
  ESPCHK(0x11c3bc78u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf4 @ 0x11c3bcf4 (31 bytes, 10 insns) */
void f_11c3bcf4(void) {
  FTRACE(0x11c3bcf4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bcf4 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3bcf6 push eax */
  push32((uint32_t)(EAX));
  /* 11c3bcf7 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3bcfd push eax */
  push32((uint32_t)(EAX));
  /* 11c3bcfe mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c3bd02 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c3bd09 mov dword ptr [esp + 0xc], ebp */
  w32((uint32_t)(ESP + 0xc), (EBP));
  /* 11c3bd0d lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 11c3bd11 push eax */
  push32((uint32_t)(EAX));
  /* 11c3bd12 ret  */
  ESPCHK(0x11c3bcf4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd13 @ 0x11c3bd13 (101 bytes, 34 insns) */
void f_11c3bd13(void) {
  FTRACE(0x11c3bd13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bd13 push esi */
  push32((uint32_t)(ESI));
  /* 11c3bd14 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3bd18 cmp esi, dword ptr [0x11c57e60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c57e60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bd1e jae 0x11c3bd60 */
  if (!C.cf) goto L_11c3bd60;
  /* 11c3bd20 mov ecx, esi */
  ECX = (ESI);
  /* 11c3bd22 mov eax, esi */
  EAX = (ESI);
  /* 11c3bd24 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c3bd27 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3bd2a mov ecx, dword ptr [ecx*4 + 0x11c57d60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c3bd31 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c3bd34 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c3bd39 je 0x11c3bd60 */
  if (C.zf) goto L_11c3bd60;
  /* 11c3bd3b push edi */
  push32((uint32_t)(EDI));
  /* 11c3bd3c push esi */
  push32((uint32_t)(ESI));
  /* 11c3bd3d call 0x11c39dd7 */
  push32(0x11c3bd42u); f_11c39dd7();
  /* 11c3bd42 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c3bd46 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c3bd4a push esi */
  push32((uint32_t)(ESI));
  /* 11c3bd4b call 0x11c3bd78 */
  push32(0x11c3bd50u); f_11c3bd78();
  /* 11c3bd50 push esi */
  push32((uint32_t)(ESI));
  /* 11c3bd51 mov edi, eax */
  EDI = (EAX);
  /* 11c3bd53 call 0x11c39e36 */
  push32(0x11c3bd58u); f_11c39e36();
  /* 11c3bd58 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3bd5b mov eax, edi */
  EAX = (EDI);
  /* 11c3bd5d pop edi */
  EDI = (pop32());
  /* 11c3bd5e pop esi */
  ESI = (pop32());
  /* 11c3bd5f ret  */
  ESPCHK(0x11c3bd13u, _esp0);
  ESP += 4; return;
L_11c3bd60:;
  /* 11c3bd60 call 0x11c39d04 */
  push32(0x11c3bd65u); f_11c39d04();
  /* 11c3bd65 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c3bd6b call 0x11c39d0d */
  push32(0x11c3bd70u); f_11c39d0d();
  /* 11c3bd70 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c3bd73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3bd76 pop esi */
  ESI = (pop32());
  /* 11c3bd77 ret  */
  ESPCHK(0x11c3bd13u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd78 @ 0x11c3bd78 (473 bytes, 170 insns) */
void f_11c3bd78(void) {
  FTRACE(0x11c3bd78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bd78 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3bd79 mov ebp, esp */
  EBP = (ESP);
  /* 11c3bd7b sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3bd7e and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c3bd82 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bd86 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3bd87 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bd8a push esi */
  push32((uint32_t)(ESI));
  /* 11c3bd8b push edi */
  push32((uint32_t)(EDI));
  /* 11c3bd8c mov edx, ebx */
  EDX = (EBX);
  /* 11c3bd8e je 0x11c3bf4a */
  if (C.zf) goto L_11c3bf4a;
  /* 11c3bd94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3bd97 mov ecx, eax */
  ECX = (EAX);
  /* 11c3bd99 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3bd9c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c3bd9f lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11c3bda2 mov eax, dword ptr [ecx*4 + 0x11c57d60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c57d60)));
  /* 11c3bda9 lea edi, [ecx*4 + 0x11c57d60] */
  EDI = ((uint32_t)(ECX*4 + 0x11c57d60));
  /* 11c3bdb0 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c3bdb3 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3bdb5 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11c3bdb8 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11c3bdbb jne 0x11c3bf4a */
  if (!C.zf) goto L_11c3bf4a;
  /* 11c3bdc1 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 11c3bdc4 je 0x11c3bde3 */
  if (C.zf) goto L_11c3bde3;
  /* 11c3bdc6 mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 11c3bdc9 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3bdcb je 0x11c3bde3 */
  if (C.zf) goto L_11c3bde3;
  /* 11c3bdcd dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11c3bdd0 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11c3bdd2 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3bdd4 lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 11c3bdd7 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11c3bdde mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_11c3bde3:;
  /* 11c3bde3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c3bde6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3bde8 push eax */
  push32((uint32_t)(EAX));
  /* 11c3bde9 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3bdeb push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3bdee push edx */
  push32((uint32_t)(EDX));
  /* 11c3bdef push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11c3bdf2 call dword ptr [0x11c3d014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d014))), 0x11c3bdf8u);
  /* 11c3bdf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3bdfa jne 0x11c3be35 */
  if (!C.zf) goto L_11c3be35;
  /* 11c3bdfc call dword ptr [0x11c3d0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f8))), 0x11c3be02u);
  /* 11c3be02 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c3be04 pop esi */
  ESI = (pop32());
  /* 11c3be05 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3be07 jne 0x11c3be1d */
  if (!C.zf) goto L_11c3be1d;
  /* 11c3be09 call 0x11c39d04 */
  push32(0x11c3be0eu); f_11c39d04();
  /* 11c3be0e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c3be14 call 0x11c39d0d */
  push32(0x11c3be19u); f_11c39d0d();
  /* 11c3be19 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11c3be1b jmp 0x11c3be2d */
  goto L_11c3be2d;
L_11c3be1d:;
  /* 11c3be1d cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3be20 je 0x11c3bf4a */
  if (C.zf) goto L_11c3bf4a;
  /* 11c3be26 push eax */
  push32((uint32_t)(EAX));
  /* 11c3be27 call 0x11c39c91 */
  push32(0x11c3be2cu); f_11c39c91();
  /* 11c3be2c pop ecx */
  ECX = (pop32());
L_11c3be2d:;
  /* 11c3be2d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c3be30 jmp 0x11c3bf4c */
  goto L_11c3bf4c;
L_11c3be35:;
  /* 11c3be35 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3be37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c3be3a add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3be3d lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11c3be41 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 11c3be45 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11c3be47 je 0x11c3bf45 */
  if (C.zf) goto L_11c3bf45;
  /* 11c3be4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c3be4f je 0x11c3be5a */
  if (C.zf) goto L_11c3be5a;
  /* 11c3be51 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3be54 jne 0x11c3be5a */
  if (!C.zf) goto L_11c3be5a;
  /* 11c3be56 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11c3be58 jmp 0x11c3be5c */
  goto L_11c3be5c;
L_11c3be5a:;
  /* 11c3be5a and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_11c3be5c:;
  /* 11c3be5c mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11c3be5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3be61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c3be64 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11c3be67 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3be69 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3be6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c3be6e jae 0x11c3bf3f */
  if (!C.cf) goto L_11c3bf3f;
L_11c3be74:;
  /* 11c3be74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3be77 mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 11c3be79 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3be7b je 0x11c3bf2f */
  if (C.zf) goto L_11c3bf2f;
  /* 11c3be81 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3be83 je 0x11c3be90 */
  if (C.zf) goto L_11c3be90;
  /* 11c3be85 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11c3be87 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c3be88 inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11c3be8b jmp 0x11c3bf21 */
  goto L_11c3bf21;
L_11c3be90:;
  /* 11c3be90 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c3be91 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3be94 jae 0x11c3beae */
  if (!C.cf) goto L_11c3beae;
  /* 11c3be96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3be99 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3be9a cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3be9d jne 0x11c3bea5 */
  if (!C.zf) goto L_11c3bea5;
  /* 11c3be9f add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3bea3 jmp 0x11c3bf03 */
  goto L_11c3bf03;
L_11c3bea5:;
  /* 11c3bea5 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11c3bea8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c3bea9 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11c3beac jmp 0x11c3bf21 */
  goto L_11c3bf21;
L_11c3beae:;
  /* 11c3beae lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c3beb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3beb3 push eax */
  push32((uint32_t)(EAX));
  /* 11c3beb4 inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11c3beb7 lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 11c3beba push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3bebc push eax */
  push32((uint32_t)(EAX));
  /* 11c3bebd mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3bebf push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11c3bec2 call dword ptr [0x11c3d014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d014))), 0x11c3bec8u);
  /* 11c3bec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3beca jne 0x11c3bed6 */
  if (!C.zf) goto L_11c3bed6;
  /* 11c3becc call dword ptr [0x11c3d0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d0f8))), 0x11c3bed2u);
  /* 11c3bed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3bed4 jne 0x11c3bf1d */
  if (!C.zf) goto L_11c3bf1d;
L_11c3bed6:;
  /* 11c3bed6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3beda je 0x11c3bf1d */
  if (C.zf) goto L_11c3bf1d;
  /* 11c3bedc mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3bede test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 11c3bee3 je 0x11c3bef8 */
  if (C.zf) goto L_11c3bef8;
  /* 11c3bee5 mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 11c3bee8 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3beea je 0x11c3bf03 */
  if (C.zf) goto L_11c3bf03;
  /* 11c3beec mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11c3beef mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11c3bef1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c3bef2 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 11c3bef6 jmp 0x11c3bf21 */
  goto L_11c3bf21;
L_11c3bef8:;
  /* 11c3bef8 cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3befb jne 0x11c3bf08 */
  if (!C.zf) goto L_11c3bf08;
  /* 11c3befd cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3bf01 jne 0x11c3bf08 */
  if (!C.zf) goto L_11c3bf08;
L_11c3bf03:;
  /* 11c3bf03 mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 11c3bf06 jmp 0x11c3bf20 */
  goto L_11c3bf20;
L_11c3bf08:;
  /* 11c3bf08 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3bf0a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3bf0c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3bf0f call 0x11c37ebd */
  push32(0x11c3bf14u); f_11c37ebd();
  /* 11c3bf14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3bf17 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3bf1b je 0x11c3bf21 */
  if (C.zf) goto L_11c3bf21;
L_11c3bf1d:;
  /* 11c3bf1d mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_11c3bf20:;
  /* 11c3bf20 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11c3bf21:;
  /* 11c3bf21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c3bf24 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bf27 jb 0x11c3be74 */
  if (C.cf) goto L_11c3be74;
  /* 11c3bf2d jmp 0x11c3bf3f */
  goto L_11c3bf3f;
L_11c3bf2f:;
  /* 11c3bf2f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3bf31 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11c3bf35 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c3bf37 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11c3bf39 jne 0x11c3bf3f */
  if (!C.zf) goto L_11c3bf3f;
  /* 11c3bf3b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11c3bf3d mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_11c3bf3f:;
  /* 11c3bf3f sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3bf42 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_11c3bf45:;
  /* 11c3bf45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c3bf48 jmp 0x11c3bf4c */
  goto L_11c3bf4c;
L_11c3bf4a:;
  /* 11c3bf4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3bf4c:;
  /* 11c3bf4c pop edi */
  EDI = (pop32());
  /* 11c3bf4d pop esi */
  ESI = (pop32());
  /* 11c3bf4e pop ebx */
  EBX = (pop32());
  /* 11c3bf4f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3bf50 ret  */
  ESPCHK(0x11c3bd78u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf5a @ 0x11c3bf5a (155 bytes, 61 insns) */
void f_11c3bf5a(void) {
  FTRACE(0x11c3bf5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bf5a push ebp */
  push32((uint32_t)(EBP));
  /* 11c3bf5b mov ebp, esp */
  EBP = (ESP);
  /* 11c3bf5d push esi */
  push32((uint32_t)(ESI));
  /* 11c3bf5e mov esi, dword ptr [ebp + 0x18] */
  ESI = (r32((uint32_t)(EBP + 0x18)));
  /* 11c3bf61 push edi */
  push32((uint32_t)(EDI));
  /* 11c3bf62 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 11c3bf67 cmp dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bf69 je 0x11c3bf70 */
  if (C.zf) goto L_11c3bf70;
  /* 11c3bf6b call 0x11c3c82d */
  push32(0x11c3bf70u); f_11c3c82d();
L_11c3bf70:;
  /* 11c3bf70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3bf73 test byte ptr [eax + 4], 0x66 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x66u); fl_logic(_r,8); }
  /* 11c3bf77 je 0x11c3bf98 */
  if (C.zf) goto L_11c3bf98;
  /* 11c3bf79 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bf7d je 0x11c3bfee */
  if (C.zf) goto L_11c3bfee;
  /* 11c3bf7f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bf83 jne 0x11c3bfee */
  if (!C.zf) goto L_11c3bfee;
  /* 11c3bf85 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3bf87 push esi */
  push32((uint32_t)(ESI));
  /* 11c3bf88 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3bf8b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3bf8e call 0x11c3c2af */
  push32(0x11c3bf93u); f_11c3c2af();
  /* 11c3bf93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3bf96 jmp 0x11c3bfee */
  goto L_11c3bfee;
L_11c3bf98:;
  /* 11c3bf98 cmp dword ptr [esi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bf9c je 0x11c3bfee */
  if (C.zf) goto L_11c3bfee;
  /* 11c3bf9e cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bfa4 jne 0x11c3bfd2 */
  if (!C.zf) goto L_11c3bfd2;
  /* 11c3bfa6 cmp dword ptr [eax + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3bfa9 jbe 0x11c3bfd2 */
  if ((C.cf||C.zf)) goto L_11c3bfd2;
  /* 11c3bfab mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11c3bfae mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c3bfb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c3bfb3 je 0x11c3bfd2 */
  if (C.zf) goto L_11c3bfd2;
  /* 11c3bfb5 movzx edx, byte ptr [ebp + 0x24] */
  EDX = ((uint32_t)(r8((uint32_t)(EBP + 0x24))));
  /* 11c3bfb9 push edx */
  push32((uint32_t)(EDX));
  /* 11c3bfba push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3bfbd push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c3bfc0 push esi */
  push32((uint32_t)(ESI));
  /* 11c3bfc1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3bfc4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3bfc7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3bfca push eax */
  push32((uint32_t)(EAX));
  /* 11c3bfcb call ecx */
  call_ind((uint32_t)(ECX), 0x11c3bfcdu);
  /* 11c3bfcd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3bfd0 jmp 0x11c3bff1 */
  goto L_11c3bff1;
L_11c3bfd2:;
  /* 11c3bfd2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3bfd5 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c3bfd8 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c3bfdb push esi */
  push32((uint32_t)(ESI));
  /* 11c3bfdc push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3bfdf push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3bfe2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3bfe5 push eax */
  push32((uint32_t)(EAX));
  /* 11c3bfe6 call 0x11c3bff5 */
  push32(0x11c3bfebu); f_11c3bff5();
  /* 11c3bfeb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3bfee:;
  /* 11c3bfee push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3bff0 pop eax */
  EAX = (pop32());
L_11c3bff1:;
  /* 11c3bff1 pop edi */
  EDI = (pop32());
  /* 11c3bff2 pop esi */
  ESI = (pop32());
  /* 11c3bff3 pop ebp */
  EBP = (pop32());
  /* 11c3bff4 ret  */
  ESPCHK(0x11c3bf5au, _esp0);
  ESP += 4; return;
}

/* FUN_1000bff5 @ 0x11c3bff5 (435 bytes, 149 insns) */
void f_11c3bff5(void) {
  FTRACE(0x11c3bff5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3bff5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3bff6 mov ebp, esp */
  EBP = (ESP);
  /* 11c3bff8 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3bffb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3bffe and byte ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x14)))&(0x0u); w8((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,8); }
  /* 11c3c002 mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c3c005 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c008 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11c3c00b jl 0x11c3c015 */
  if ((C.sf!=C.of)) goto L_11c3c015;
  /* 11c3c00d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c3c010 cmp eax, dword ptr [ecx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c013 jl 0x11c3c01a */
  if ((C.sf!=C.of)) goto L_11c3c01a;
L_11c3c015:;
  /* 11c3c015 call 0x11c3c82d */
  push32(0x11c3c01au); f_11c3c82d();
L_11c3c01a:;
  /* 11c3c01a push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c01b push esi */
  push32((uint32_t)(ESI));
  /* 11c3c01c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3c01f mov ebx, 0xe06d7363 */
  EBX = (0xe06d7363u);
  /* 11c3c024 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c025 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 11c3c02a cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c02c jne 0x11c3c17d */
  if (!C.zf) goto L_11c3c17d;
  /* 11c3c032 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c036 jne 0x11c3c09a */
  if (!C.zf) goto L_11c3c09a;
  /* 11c3c038 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c03b jne 0x11c3c09a */
  if (!C.zf) goto L_11c3c09a;
  /* 11c3c03d cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c041 jne 0x11c3c09a */
  if (!C.zf) goto L_11c3c09a;
  /* 11c3c043 call 0x11c33dee */
  push32(0x11c3c048u); f_11c33dee();
  /* 11c3c048 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c04c je 0x11c3c178 */
  if (C.zf) goto L_11c3c178;
  /* 11c3c052 call 0x11c33dee */
  push32(0x11c3c057u); f_11c33dee();
  /* 11c3c057 mov esi, dword ptr [eax + 0x6c] */
  ESI = (r32((uint32_t)(EAX + 0x6c)));
  /* 11c3c05a call 0x11c33dee */
  push32(0x11c3c05fu); f_11c33dee();
  /* 11c3c05f mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11c3c062 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c064 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c065 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11c3c068 mov byte ptr [ebp - 0x14], 1 */
  w8((uint32_t)(EBP + -0x14), (0x1u));
  /* 11c3c06c call 0x11c3c8e7 */
  push32(0x11c3c071u); f_11c3c8e7();
  /* 11c3c071 pop ecx */
  ECX = (pop32());
  /* 11c3c072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c074 pop ecx */
  ECX = (pop32());
  /* 11c3c075 jne 0x11c3c07c */
  if (!C.zf) goto L_11c3c07c;
  /* 11c3c077 call 0x11c3c82d */
  push32(0x11c3c07cu); f_11c3c82d();
L_11c3c07c:;
  /* 11c3c07c cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c07e jne 0x11c3c17d */
  if (!C.zf) goto L_11c3c17d;
  /* 11c3c084 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c088 jne 0x11c3c09a */
  if (!C.zf) goto L_11c3c09a;
  /* 11c3c08a cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c08d jne 0x11c3c09a */
  if (!C.zf) goto L_11c3c09a;
  /* 11c3c08f cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c093 jne 0x11c3c09a */
  if (!C.zf) goto L_11c3c09a;
  /* 11c3c095 call 0x11c3c82d */
  push32(0x11c3c09au); f_11c3c82d();
L_11c3c09a:;
  /* 11c3c09a cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c09c jne 0x11c3c17d */
  if (!C.zf) goto L_11c3c17d;
  /* 11c3c0a2 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c0a6 jne 0x11c3c17d */
  if (!C.zf) goto L_11c3c17d;
  /* 11c3c0ac cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c0af jne 0x11c3c17d */
  if (!C.zf) goto L_11c3c17d;
  /* 11c3c0b5 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c0b8 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c3c0bb push eax */
  push32((uint32_t)(EAX));
  /* 11c3c0bc lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c3c0bf push eax */
  push32((uint32_t)(EAX));
  /* 11c3c0c0 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c0c1 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3c0c4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3c0c7 call 0x11c3bc78 */
  push32(0x11c3c0ccu); f_11c3bc78();
  /* 11c3c0cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c0cf mov ebx, eax */
  EBX = (EAX);
L_11c3c0d1:;
  /* 11c3c0d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3c0d4 cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c0d7 jae 0x11c3c168 */
  if (!C.cf) goto L_11c3c168;
  /* 11c3c0dd cmp dword ptr [ebx], edi */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c0df jg 0x11c3c15d */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3c15d;
  /* 11c3c0e1 cmp edi, dword ptr [ebx + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c0e4 jg 0x11c3c15d */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3c15d;
  /* 11c3c0e6 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c3c0e9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11c3c0ec mov eax, dword ptr [ebx + 0xc] */
  EAX = (r32((uint32_t)(EBX + 0xc)));
  /* 11c3c0ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c0f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11c3c0f4 jle 0x11c3c15a */
  if ((C.zf||C.sf!=C.of)) goto L_11c3c15a;
L_11c3c0f6:;
  /* 11c3c0f6 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c3c0f9 mov eax, dword ptr [eax + 0xc] */
  EAX = (r32((uint32_t)(EAX + 0xc)));
  /* 11c3c0fc lea edi, [eax + 4] */
  EDI = ((uint32_t)(EAX + 0x4));
  /* 11c3c0ff mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11c3c101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c103 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c3c106 jle 0x11c3c127 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3c127;
L_11c3c108:;
  /* 11c3c108 push dword ptr [esi + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1c))));
  /* 11c3c10b push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c3c10d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3c110 call 0x11c3c252 */
  push32(0x11c3c115u); f_11c3c252();
  /* 11c3c115 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c11a jne 0x11c3c136 */
  if (!C.zf) goto L_11c3c136;
  /* 11c3c11c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11c3c11f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c122 cmp dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c125 jg 0x11c3c108 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3c108;
L_11c3c127:;
  /* 11c3c127 dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 11c3c12a add dword ptr [ebp + 8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c3c12e cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c132 jg 0x11c3c0f6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3c0f6;
  /* 11c3c134 jmp 0x11c3c15a */
  goto L_11c3c15a;
L_11c3c136:;
  /* 11c3c136 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 11c3c139 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c3c13c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3c13f push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c140 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c3c142 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3c145 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3c148 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3c14b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3c14e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3c151 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c152 call 0x11c3c363 */
  push32(0x11c3c157u); f_11c3c363();
  /* 11c3c157 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3c15a:;
  /* 11c3c15a mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
L_11c3c15d:;
  /* 11c3c15d inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c3c160 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c163 jmp 0x11c3c0d1 */
  goto L_11c3c0d1;
L_11c3c168:;
  /* 11c3c168 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3c16c je 0x11c3c178 */
  if (C.zf) goto L_11c3c178;
  /* 11c3c16e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c170 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c171 call 0x11c3c6e7 */
  push32(0x11c3c176u); f_11c3c6e7();
  /* 11c3c176 pop ecx */
  ECX = (pop32());
  /* 11c3c177 pop ecx */
  ECX = (pop32());
L_11c3c178:;
  /* 11c3c178 pop edi */
  EDI = (pop32());
  /* 11c3c179 pop esi */
  ESI = (pop32());
  /* 11c3c17a pop ebx */
  EBX = (pop32());
  /* 11c3c17b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3c17c ret  */
  ESPCHK(0x11c3bff5u, _esp0);
  ESP += 4; return;
L_11c3c17d:;
  /* 11c3c17d cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3c181 jne 0x11c3c1a3 */
  if (!C.zf) goto L_11c3c1a3;
  /* 11c3c183 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c3c186 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3c189 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11c3c18c push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3c18f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3c192 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3c195 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3c198 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c199 call 0x11c3c1a8 */
  push32(0x11c3c19eu); f_11c3c1a8();
  /* 11c3c19e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c1a1 jmp 0x11c3c178 */
  goto L_11c3c178;
L_11c3c1a3:;
  /* 11c3c1a3 jmp 0x11c3c7cc */
  f_11c3c7cc(); return;
}

/* FUN_1000c1a8 @ 0x11c3c1a8 (170 bytes, 68 insns) */
void f_11c3c1a8(void) {
  FTRACE(0x11c3c1a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c1a8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c1a9 mov ebp, esp */
  EBP = (ESP);
  /* 11c3c1ab push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c1ac push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c1ad push esi */
  push32((uint32_t)(ESI));
  /* 11c3c1ae push edi */
  push32((uint32_t)(EDI));
  /* 11c3c1af call 0x11c33dee */
  push32(0x11c3c1b4u); f_11c33dee();
  /* 11c3c1b4 cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c1b8 je 0x11c3c1db */
  if (C.zf) goto L_11c3c1db;
  /* 11c3c1ba push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c3c1bd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3c1c0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3c1c3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3c1c6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3c1c9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3c1cc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3c1cf call 0x11c3bb4d */
  push32(0x11c3c1d4u); f_11c3bb4d();
  /* 11c3c1d4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c1d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c1d9 jne 0x11c3c24e */
  if (!C.zf) goto L_11c3c24e;
L_11c3c1db:;
  /* 11c3c1db mov edi, dword ptr [ebp + 0x1c] */
  EDI = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c3c1de lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c3c1e1 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c1e2 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c3c1e5 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c1e6 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c1e7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3c1ea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3c1ed call 0x11c3bc78 */
  push32(0x11c3c1f2u); f_11c3bc78();
  /* 11c3c1f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c1f5 mov esi, eax */
  ESI = (EAX);
L_11c3c1f7:;
  /* 11c3c1f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3c1fa cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c1fd jae 0x11c3c24e */
  if (!C.cf) goto L_11c3c24e;
  /* 11c3c1ff cmp edi, dword ptr [esi] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c201 jl 0x11c3c246 */
  if ((C.sf!=C.of)) goto L_11c3c246;
  /* 11c3c203 cmp edi, dword ptr [esi + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c206 jg 0x11c3c246 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c3c246;
  /* 11c3c208 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c3c20b mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c3c20e shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c3c211 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c213 mov ecx, dword ptr [eax - 0xc] */
  ECX = (r32((uint32_t)(EAX + -0xc)));
  /* 11c3c216 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c3c218 je 0x11c3c220 */
  if (C.zf) goto L_11c3c220;
  /* 11c3c21a cmp byte ptr [ecx + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3c21e jne 0x11c3c246 */
  if (!C.zf) goto L_11c3c246;
L_11c3c220:;
  /* 11c3c220 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c222 add eax, -0x10 */
  { uint32_t _a=(EAX),_b=(0xfffffff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c225 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c3c228 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3c22b push esi */
  push32((uint32_t)(ESI));
  /* 11c3c22c push 0 */
  push32((uint32_t)(0x0u));
  /* 11c3c22e push eax */
  push32((uint32_t)(EAX));
  /* 11c3c22f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3c232 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3c235 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3c238 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c3c23b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3c23e call 0x11c3c363 */
  push32(0x11c3c243u); f_11c3c363();
  /* 11c3c243 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3c246:;
  /* 11c3c246 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c3c249 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c24c jmp 0x11c3c1f7 */
  goto L_11c3c1f7;
L_11c3c24e:;
  /* 11c3c24e pop edi */
  EDI = (pop32());
  /* 11c3c24f pop esi */
  ESI = (pop32());
  /* 11c3c250 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3c251 ret  */
  ESPCHK(0x11c3c1a8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c252 @ 0x11c3c252 (93 bytes, 42 insns) */
void f_11c3c252(void) {
  FTRACE(0x11c3c252u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c252 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c253 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c254 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c3c258 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c3c25b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c25d je 0x11c3c2a9 */
  if (C.zf) goto L_11c3c2a9;
  /* 11c3c25f cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3c263 lea edx, [eax + 8] */
  EDX = ((uint32_t)(EAX + 0x8));
  /* 11c3c266 je 0x11c3c2a9 */
  if (C.zf) goto L_11c3c2a9;
  /* 11c3c268 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c3c26c mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c3c26f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c271 je 0x11c3c283 */
  if (C.zf) goto L_11c3c283;
  /* 11c3c273 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c276 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c277 push edx */
  push32((uint32_t)(EDX));
  /* 11c3c278 call 0x11c39b90 */
  push32(0x11c3c27du); f_11c39b90();
  /* 11c3c27d pop ecx */
  ECX = (pop32());
  /* 11c3c27e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c280 pop ecx */
  ECX = (pop32());
  /* 11c3c281 jne 0x11c3c2a5 */
  if (!C.zf) goto L_11c3c2a5;
L_11c3c283:;
  /* 11c3c283 test byte ptr [esi], 2 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x2u); fl_logic(_r,8); }
  /* 11c3c286 je 0x11c3c28d */
  if (C.zf) goto L_11c3c28d;
  /* 11c3c288 test byte ptr [edi], 8 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x8u); fl_logic(_r,8); }
  /* 11c3c28b je 0x11c3c2a5 */
  if (C.zf) goto L_11c3c2a5;
L_11c3c28d:;
  /* 11c3c28d mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c3c291 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11c3c293 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11c3c295 je 0x11c3c29c */
  if (C.zf) goto L_11c3c29c;
  /* 11c3c297 test byte ptr [edi], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x1u); fl_logic(_r,8); }
  /* 11c3c29a je 0x11c3c2a5 */
  if (C.zf) goto L_11c3c2a5;
L_11c3c29c:;
  /* 11c3c29c test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 11c3c29e je 0x11c3c2a9 */
  if (C.zf) goto L_11c3c2a9;
  /* 11c3c2a0 test byte ptr [edi], 2 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x2u); fl_logic(_r,8); }
  /* 11c3c2a3 jne 0x11c3c2a9 */
  if (!C.zf) goto L_11c3c2a9;
L_11c3c2a5:;
  /* 11c3c2a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c3c2a7 jmp 0x11c3c2ac */
  goto L_11c3c2ac;
L_11c3c2a9:;
  /* 11c3c2a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c2ab pop eax */
  EAX = (pop32());
L_11c3c2ac:;
  /* 11c3c2ac pop edi */
  EDI = (pop32());
  /* 11c3c2ad pop esi */
  ESI = (pop32());
  /* 11c3c2ae ret  */
  ESPCHK(0x11c3c252u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2af @ 0x11c3c2af (132 bytes, 56 insns) */
void f_11c3c2af(void) {
  FTRACE(0x11c3c2afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c2af push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c2b0 mov ebp, esp */
  EBP = (ESP);
  /* 11c3c2b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3c2b4 push 0x11c3d930 */
  push32((uint32_t)(0x11c3d930u));
  /* 11c3c2b9 push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c3c2be mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3c2c4 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c2c5 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c3c2cc sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3c2cf push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c2d0 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c2d1 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c2d2 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3c2d5 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3c2d8 mov esi, dword ptr [ebx + 8] */
  ESI = (r32((uint32_t)(EBX + 0x8)));
  /* 11c3c2db mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11c3c2de mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_11c3c2e1:;
  /* 11c3c2e1 cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c2e4 je 0x11c3c33b */
  if (C.zf) goto L_11c3c33b;
  /* 11c3c2e6 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c2e9 jle 0x11c3c2f0 */
  if ((C.zf||C.sf!=C.of)) goto L_11c3c2f0;
  /* 11c3c2eb cmp esi, dword ptr [edi + 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c2ee jl 0x11c3c2f5 */
  if ((C.sf!=C.of)) goto L_11c3c2f5;
L_11c3c2f0:;
  /* 11c3c2f0 call 0x11c3c82d */
  push32(0x11c3c2f5u); f_11c3c82d();
L_11c3c2f5:;
  /* 11c3c2f5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c2f9 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11c3c2fc mov eax, dword ptr [eax + esi*8 + 4] */
  EAX = (r32((uint32_t)(EAX + ESI*8 + 0x4)));
  /* 11c3c300 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c302 je 0x11c3c310 */
  if (C.zf) goto L_11c3c310;
  /* 11c3c304 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11c3c309 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c30a push eax */
  push32((uint32_t)(EAX));
  /* 11c3c30b call 0x11c3c780 */
  push32(0x11c3c310u); f_11c3c780();
L_11c3c310:;
  /* 11c3c310 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c314 jmp 0x11c3c330 */
  goto L_11c3c330;
  /* 11c3c316 push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 11c3c319 call 0x11c3c34d */
  call_ind(0x11c3c34du, 0x11c3c31eu);
  /* 11c3c31e pop ecx */
  ECX = (pop32());
  /* 11c3c31f ret  */
  ESPCHK(0x11c3c2afu, _esp0);
  ESP += 4; return;
  /* 11c3c320 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c3c323 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c327 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3c32a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3c32d mov esi, dword ptr [ebp - 0x1c] */
  ESI = (r32((uint32_t)(EBP + -0x1c)));
L_11c3c330:;
  /* 11c3c330 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11c3c333 mov esi, dword ptr [eax + esi*8] */
  ESI = (r32((uint32_t)(EAX + ESI*8)));
  /* 11c3c336 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11c3c339 jmp 0x11c3c2e1 */
  goto L_11c3c2e1;
L_11c3c33b:;
  /* 11c3c33b mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 11c3c33e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c341 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3c348 pop edi */
  EDI = (pop32());
  /* 11c3c349 pop esi */
  ESI = (pop32());
  /* 11c3c34a pop ebx */
  EBX = (pop32());
  /* 11c3c34b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3c34c ret  */
  ESPCHK(0x11c3c2afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c363 @ 0x11c3c363 (123 bytes, 50 insns) */
void f_11c3c363(void) {
  FTRACE(0x11c3c363u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c363 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c364 mov ebp, esp */
  EBP = (ESP);
  /* 11c3c366 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c36a push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c36b mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c3c36e push esi */
  push32((uint32_t)(ESI));
  /* 11c3c36f push edi */
  push32((uint32_t)(EDI));
  /* 11c3c370 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3c373 je 0x11c3c385 */
  if (C.zf) goto L_11c3c385;
  /* 11c3c375 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3c378 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c379 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c37a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3c37d call 0x11c3c523 */
  push32(0x11c3c382u); f_11c3c523();
  /* 11c3c382 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c3c385:;
  /* 11c3c385 cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c389 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3c38c jne 0x11c3c391 */
  if (!C.zf) goto L_11c3c391;
  /* 11c3c38e push edi */
  push32((uint32_t)(EDI));
  /* 11c3c38f jmp 0x11c3c394 */
  goto L_11c3c394;
L_11c3c391:;
  /* 11c3c391 push dword ptr [ebp + 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x2c))));
L_11c3c394:;
  /* 11c3c394 call 0x11c3ba4f */
  push32(0x11c3c399u); f_11c3ba4f();
  /* 11c3c399 mov esi, dword ptr [ebp + 0x24] */
  ESI = (r32((uint32_t)(EBP + 0x24)));
  /* 11c3c39c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c3c39e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3c3a1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3c3a4 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c3a5 call 0x11c3c2af */
  push32(0x11c3c3aau); f_11c3c2af();
  /* 11c3c3aa mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c3c3ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11c3c3b2 push dword ptr [ebp + 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x28))));
  /* 11c3c3b5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c3c3b6 mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 11c3c3b9 push dword ptr [ebx + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0xc))));
  /* 11c3c3bc push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c3c3bf push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3c3c2 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c3c3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3c3c6 call 0x11c3c3de */
  push32(0x11c3c3cbu); f_11c3c3de();
  /* 11c3c3cb add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c3ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c3d0 je 0x11c3c3d9 */
  if (C.zf) goto L_11c3c3d9;
  /* 11c3c3d2 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c3d3 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c3d4 call 0x11c3ba0d */
  push32(0x11c3c3d9u); f_11c3ba0d();
L_11c3c3d9:;
  /* 11c3c3d9 pop edi */
  EDI = (pop32());
  /* 11c3c3da pop esi */
  ESI = (pop32());
  /* 11c3c3db pop ebx */
  EBX = (pop32());
  /* 11c3c3dc pop ebp */
  EBP = (pop32());
  /* 11c3c3dd ret  */
  ESPCHK(0x11c3c363u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3de @ 0x11c3c3de (165 bytes, 52 insns) */
void f_11c3c3de(void) {
  FTRACE(0x11c3c3deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c3de push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c3df mov ebp, esp */
  EBP = (ESP);
  /* 11c3c3e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3c3e3 push 0x11c3d940 */
  push32((uint32_t)(0x11c3d940u));
  /* 11c3c3e8 push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c3c3ed mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3c3f3 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c3f4 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c3c3fb sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3c3fe push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c3ff push esi */
  push32((uint32_t)(ESI));
  /* 11c3c400 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c401 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3c404 mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c3c407 mov dword ptr [ebp - 0x2c], ebx */
  w32((uint32_t)(EBP + -0x2c), (EBX));
  /* 11c3c40a and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 11c3c40e mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3c411 mov eax, dword ptr [esi - 4] */
  EAX = (r32((uint32_t)(ESI + -0x4)));
  /* 11c3c414 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c3c417 call 0x11c33dee */
  push32(0x11c3c41cu); f_11c33dee();
  /* 11c3c41c mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11c3c41f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c3c422 call 0x11c33dee */
  push32(0x11c3c427u); f_11c33dee();
  /* 11c3c427 mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11c3c42a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c3c42d call 0x11c33dee */
  push32(0x11c3c432u); f_11c33dee();
  /* 11c3c432 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3c435 mov dword ptr [eax + 0x6c], edi */
  w32((uint32_t)(EAX + 0x6c), (EDI));
  /* 11c3c438 call 0x11c33dee */
  push32(0x11c3c43du); f_11c33dee();
  /* 11c3c43d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3c440 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11c3c443 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c447 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c3c44e push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c3c451 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c3c454 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c455 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c3c458 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c459 call 0x11c3bad4 */
  push32(0x11c3c45eu); f_11c3bad4();
  /* 11c3c45e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c461 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11c3c464 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c468 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c46c call 0x11c3c4ab */
  push32(0x11c3c471u); f_11c3c4ab();
  /* 11c3c471 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11c3c474 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c477 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3c47e pop edi */
  EDI = (pop32());
  /* 11c3c47f pop esi */
  ESI = (pop32());
  /* 11c3c480 pop ebx */
  EBX = (pop32());
  /* 11c3c481 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3c482 ret  */
  ESPCHK(0x11c3c3deu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4ab @ 0x11c3c4ab (78 bytes, 25 insns) */
void f_11c3c4ab(void) {
  FTRACE(0x11c3c4abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c4ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11c3c4ae mov dword ptr [esi - 4], eax */
  w32((uint32_t)(ESI + -0x4), (EAX));
  /* 11c3c4b1 call 0x11c33dee */
  push32(0x11c3c4b6u); f_11c33dee();
  /* 11c3c4b6 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c3c4b9 mov dword ptr [eax + 0x6c], ecx */
  w32((uint32_t)(EAX + 0x6c), (ECX));
  /* 11c3c4bc call 0x11c33dee */
  push32(0x11c3c4c1u); f_11c33dee();
  /* 11c3c4c1 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11c3c4c4 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11c3c4c7 cmp dword ptr [edi], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c4cd jne 0x11c3c4f8 */
  if (!C.zf) goto L_11c3c4f8;
  /* 11c3c4cf cmp dword ptr [edi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c4d3 jne 0x11c3c4f8 */
  if (!C.zf) goto L_11c3c4f8;
  /* 11c3c4d5 cmp dword ptr [edi + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c4dc jne 0x11c3c4f8 */
  if (!C.zf) goto L_11c3c4f8;
  /* 11c3c4de cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c4e2 jne 0x11c3c4f8 */
  if (!C.zf) goto L_11c3c4f8;
  /* 11c3c4e4 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c4e8 je 0x11c3c4f8 */
  if (C.zf) goto L_11c3c4f8;
  /* 11c3c4ea call 0x11c37d32 */
  push32(0x11c3c4efu); f_11c37d32();
  /* 11c3c4ef push eax */
  push32((uint32_t)(EAX));
  /* 11c3c4f0 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c4f1 call 0x11c3c6e7 */
  push32(0x11c3c4f6u); f_11c3c6e7();
  /* 11c3c4f6 pop ecx */
  ECX = (pop32());
  /* 11c3c4f7 pop ecx */
  ECX = (pop32());
L_11c3c4f8:;
  /* 11c3c4f8 ret  */
  ESPCHK(0x11c3c4abu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c523 @ 0x11c3c523 (440 bytes, 164 insns) */
void f_11c3c523(void) {
  FTRACE(0x11c3c523u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c523 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c524 mov ebp, esp */
  EBP = (ESP);
  /* 11c3c526 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3c528 push 0x11c3d958 */
  push32((uint32_t)(0x11c3d958u));
  /* 11c3c52d push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c3c532 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3c538 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c539 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c3c540 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3c543 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c544 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c545 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c546 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3c549 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3c54c mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c3c54f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c551 je 0x11c3c6cc */
  if (C.zf) goto L_11c3c6cc;
  /* 11c3c557 cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c3c55b je 0x11c3c6cc */
  if (C.zf) goto L_11c3c6cc;
  /* 11c3c561 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c3c564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c566 je 0x11c3c6cc */
  if (C.zf) goto L_11c3c6cc;
  /* 11c3c56c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3c56f lea edi, [eax + edx + 0xc] */
  EDI = ((uint32_t)(EAX + EDX*1 + 0xc));
  /* 11c3c573 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c577 test byte ptr [ecx], 8 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x8u); fl_logic(_r,8); }
  /* 11c3c57a je 0x11c3c5c0 */
  if (C.zf) goto L_11c3c5c0;
  /* 11c3c57c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3c57f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c581 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11c3c584 call 0x11c3c8e7 */
  push32(0x11c3c589u); f_11c3c8e7();
  /* 11c3c589 pop ecx */
  ECX = (pop32());
  /* 11c3c58a pop ecx */
  ECX = (pop32());
  /* 11c3c58b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c58d je 0x11c3c6c3 */
  if (C.zf) goto L_11c3c6c3;
  /* 11c3c593 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c595 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c596 call 0x11c3c903 */
  push32(0x11c3c59bu); f_11c3c903();
  /* 11c3c59b pop ecx */
  ECX = (pop32());
  /* 11c3c59c pop ecx */
  ECX = (pop32());
  /* 11c3c59d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c59f je 0x11c3c6c3 */
  if (C.zf) goto L_11c3c6c3;
  /* 11c3c5a5 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11c3c5a8 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c3c5aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c3c5ad add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c5b0 push ecx */
  push32((uint32_t)(ECX));
L_11c3c5b1:;
  /* 11c3c5b1 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c5b2 call 0x11c3c74e */
  push32(0x11c3c5b7u); f_11c3c74e();
  /* 11c3c5b7 pop ecx */
  ECX = (pop32());
  /* 11c3c5b8 pop ecx */
  ECX = (pop32());
  /* 11c3c5b9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c3c5bb jmp 0x11c3c6c8 */
  goto L_11c3c6c8;
L_11c3c5c0:;
  /* 11c3c5c0 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c3c5c3 test byte ptr [esi], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x1u); fl_logic(_r,8); }
  /* 11c3c5c6 je 0x11c3c61a */
  if (C.zf) goto L_11c3c61a;
  /* 11c3c5c8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3c5cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c5cd push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c3c5d0 call 0x11c3c8e7 */
  push32(0x11c3c5d5u); f_11c3c8e7();
  /* 11c3c5d5 pop ecx */
  ECX = (pop32());
  /* 11c3c5d6 pop ecx */
  ECX = (pop32());
  /* 11c3c5d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c5d9 je 0x11c3c6c3 */
  if (C.zf) goto L_11c3c6c3;
  /* 11c3c5df push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c5e1 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c5e2 call 0x11c3c903 */
  push32(0x11c3c5e7u); f_11c3c903();
  /* 11c3c5e7 pop ecx */
  ECX = (pop32());
  /* 11c3c5e8 pop ecx */
  ECX = (pop32());
  /* 11c3c5e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c5eb je 0x11c3c6c3 */
  if (C.zf) goto L_11c3c6c3;
  /* 11c3c5f1 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c3c5f4 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c3c5f7 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c5f8 call 0x11c35a60 */
  push32(0x11c3c5fdu); f_11c35a60();
  /* 11c3c5fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c600 cmp dword ptr [esi + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c604 jne 0x11c3c6c8 */
  if (!C.zf) goto L_11c3c6c8;
  /* 11c3c60a mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c3c60c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c60e je 0x11c3c6c8 */
  if (C.zf) goto L_11c3c6c8;
  /* 11c3c614 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c617 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c618 jmp 0x11c3c5b1 */
  goto L_11c3c5b1;
L_11c3c61a:;
  /* 11c3c61a cmp dword ptr [esi + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c61e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3c621 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c623 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c3c626 jne 0x11c3c662 */
  if (!C.zf) goto L_11c3c662;
  /* 11c3c628 call 0x11c3c8e7 */
  push32(0x11c3c62du); f_11c3c8e7();
  /* 11c3c62d pop ecx */
  ECX = (pop32());
  /* 11c3c62e pop ecx */
  ECX = (pop32());
  /* 11c3c62f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c631 je 0x11c3c6c3 */
  if (C.zf) goto L_11c3c6c3;
  /* 11c3c637 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c639 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c63a call 0x11c3c903 */
  push32(0x11c3c63fu); f_11c3c903();
  /* 11c3c63f pop ecx */
  ECX = (pop32());
  /* 11c3c640 pop ecx */
  ECX = (pop32());
  /* 11c3c641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c643 je 0x11c3c6c3 */
  if (C.zf) goto L_11c3c6c3;
  /* 11c3c645 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c3c648 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c64b push esi */
  push32((uint32_t)(ESI));
  /* 11c3c64c push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c3c64f call 0x11c3c74e */
  push32(0x11c3c654u); f_11c3c74e();
  /* 11c3c654 pop ecx */
  ECX = (pop32());
  /* 11c3c655 pop ecx */
  ECX = (pop32());
  /* 11c3c656 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c657 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c658 call 0x11c35a60 */
  push32(0x11c3c65du); f_11c35a60();
  /* 11c3c65d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c660 jmp 0x11c3c6c8 */
  goto L_11c3c6c8;
L_11c3c662:;
  /* 11c3c662 call 0x11c3c8e7 */
  push32(0x11c3c667u); f_11c3c8e7();
  /* 11c3c667 pop ecx */
  ECX = (pop32());
  /* 11c3c668 pop ecx */
  ECX = (pop32());
  /* 11c3c669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c66b je 0x11c3c6c3 */
  if (C.zf) goto L_11c3c6c3;
  /* 11c3c66d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c66f push edi */
  push32((uint32_t)(EDI));
  /* 11c3c670 call 0x11c3c903 */
  push32(0x11c3c675u); f_11c3c903();
  /* 11c3c675 pop ecx */
  ECX = (pop32());
  /* 11c3c676 pop ecx */
  ECX = (pop32());
  /* 11c3c677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c679 je 0x11c3c6c3 */
  if (C.zf) goto L_11c3c6c3;
  /* 11c3c67b push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11c3c67e call 0x11c3c91f */
  push32(0x11c3c683u); f_11c3c91f();
  /* 11c3c683 pop ecx */
  ECX = (pop32());
  /* 11c3c684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c686 je 0x11c3c6c3 */
  if (C.zf) goto L_11c3c6c3;
  /* 11c3c688 test byte ptr [esi], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x4u); fl_logic(_r,8); }
  /* 11c3c68b je 0x11c3c6a9 */
  if (C.zf) goto L_11c3c6a9;
  /* 11c3c68d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c68f lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11c3c692 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c693 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c3c696 call 0x11c3c74e */
  push32(0x11c3c69bu); f_11c3c74e();
  /* 11c3c69b pop ecx */
  ECX = (pop32());
  /* 11c3c69c pop ecx */
  ECX = (pop32());
  /* 11c3c69d push eax */
  push32((uint32_t)(EAX));
  /* 11c3c69e push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11c3c6a1 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c6a2 call 0x11c3ba48 */
  push32(0x11c3c6a7u); f_11c3ba48();
  /* 11c3c6a7 jmp 0x11c3c6c8 */
  goto L_11c3c6c8;
L_11c3c6a9:;
  /* 11c3c6a9 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11c3c6ac push eax */
  push32((uint32_t)(EAX));
  /* 11c3c6ad push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c3c6b0 call 0x11c3c74e */
  push32(0x11c3c6b5u); f_11c3c74e();
  /* 11c3c6b5 pop ecx */
  ECX = (pop32());
  /* 11c3c6b6 pop ecx */
  ECX = (pop32());
  /* 11c3c6b7 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c6b8 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11c3c6bb push edi */
  push32((uint32_t)(EDI));
  /* 11c3c6bc call 0x11c3ba41 */
  push32(0x11c3c6c1u); f_11c3ba41();
  /* 11c3c6c1 jmp 0x11c3c6c8 */
  goto L_11c3c6c8;
L_11c3c6c3:;
  /* 11c3c6c3 call 0x11c3c82d */
  push32(0x11c3c6c8u); f_11c3c82d();
L_11c3c6c8:;
  /* 11c3c6c8 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c3c6cc:;
  /* 11c3c6cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c6cf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3c6d6 pop edi */
  EDI = (pop32());
  /* 11c3c6d7 pop esi */
  ESI = (pop32());
  /* 11c3c6d8 pop ebx */
  EBX = (pop32());
  /* 11c3c6d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3c6da ret  */
  ESPCHK(0x11c3c523u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6e7 @ 0x11c3c6e7 (86 bytes, 33 insns) */
void f_11c3c6e7(void) {
  FTRACE(0x11c3c6e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c6e7 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c6e8 mov ebp, esp */
  EBP = (ESP);
  /* 11c3c6ea push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3c6ec push 0x11c3d968 */
  push32((uint32_t)(0x11c3d968u));
  /* 11c3c6f1 push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c3c6f6 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3c6fc push eax */
  push32((uint32_t)(EAX));
  /* 11c3c6fd mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c3c704 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c705 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c706 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c707 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c708 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c709 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3c70c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3c70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c711 je 0x11c3c72e */
  if (C.zf) goto L_11c3c72e;
  /* 11c3c713 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11c3c716 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c3c719 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c3c71b je 0x11c3c72e */
  if (C.zf) goto L_11c3c72e;
  /* 11c3c71d and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c721 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c722 push dword ptr [eax + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x18))));
  /* 11c3c725 call 0x11c3ba41 */
  push32(0x11c3c72au); f_11c3ba41();
  /* 11c3c72a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c3c72e:;
  /* 11c3c72e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c731 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c3c738 pop edi */
  EDI = (pop32());
  /* 11c3c739 pop esi */
  ESI = (pop32());
  /* 11c3c73a pop ebx */
  EBX = (pop32());
  /* 11c3c73b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3c73c ret  */
  ESPCHK(0x11c3c6e7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c74e @ 0x11c3c74e (35 bytes, 15 insns) */
void f_11c3c74e(void) {
  FTRACE(0x11c3c74eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c74e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3c752 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c753 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3c757 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c3c759 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c3c75c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c75e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c3c760 jl 0x11c3c76f */
  if ((C.sf!=C.of)) goto L_11c3c76f;
  /* 11c3c762 mov esi, dword ptr [edx + esi] */
  ESI = (r32((uint32_t)(EDX + ESI*1)));
  /* 11c3c765 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c3c768 mov ecx, dword ptr [esi + ecx] */
  ECX = (r32((uint32_t)(ESI + ECX*1)));
  /* 11c3c76b add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c76d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c3c76f:;
  /* 11c3c76f pop esi */
  ESI = (pop32());
  /* 11c3c770 ret  */
  ESPCHK(0x11c3c74eu, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11c3c780 (76 bytes, 34 insns) */
void f_11c3c780(void) {
  FTRACE(0x11c3c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c780 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c781 mov ebp, esp */
  EBP = (ESP);
  /* 11c3c783 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3c786 push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c787 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c788 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c3c78b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c78e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c3c791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c3c794 push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c795 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c3c798 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3c79b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11c3c79e call 0x11c37d55 */
  push32(0x11c3c7a3u); f_11c37d55();
  /* 11c3c7a3 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c7a4 push edi */
  push32((uint32_t)(EDI));
  /* 11c3c7a5 call eax */
  call_ind((uint32_t)(EAX), 0x11c3c7a7u);
  /* 11c3c7a7 pop edi */
  EDI = (pop32());
  /* 11c3c7a8 pop esi */
  ESI = (pop32());
  /* 11c3c7a9 mov ebx, ebp */
  EBX = (EBP);
  /* 11c3c7ab pop ebp */
  EBP = (pop32());
  /* 11c3c7ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c3c7af push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c7b0 mov ebp, ebx */
  EBP = (EBX);
  /* 11c3c7b2 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c7b8 jne 0x11c3c7bf */
  if (!C.zf) goto L_11c3c7bf;
  /* 11c3c7ba mov ecx, 2 */
  ECX = (0x2u);
L_11c3c7bf:;
  /* 11c3c7bf push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c7c0 call 0x11c37d55 */
  push32(0x11c3c7c5u); f_11c37d55();
  /* 11c3c7c5 pop ebp */
  EBP = (pop32());
  /* 11c3c7c6 pop ecx */
  ECX = (pop32());
  /* 11c3c7c7 pop ebx */
  EBX = (pop32());
  /* 11c3c7c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c3c7c9 ret 0xc */
  ESPCHK(0x11c3c780u, _esp0);
  ESP += 16; return;
}

/* FUN_1000c7cc @ 0x11c3c7cc (86 bytes, 32 insns) */
void f_11c3c7cc(void) {
  FTRACE(0x11c3c7ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c7cc push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c7cd mov ebp, esp */
  EBP = (ESP);
  /* 11c3c7cf push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3c7d1 push 0x11c3d978 */
  push32((uint32_t)(0x11c3d978u));
  /* 11c3c7d6 push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c3c7db mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3c7e1 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c7e2 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c3c7e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c7ea push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c7eb push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c7ec push esi */
  push32((uint32_t)(ESI));
  /* 11c3c7ed push edi */
  push32((uint32_t)(EDI));
  /* 11c3c7ee mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3c7f1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c3c7f3 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11c3c7f6 call 0x11c33dee */
  push32(0x11c3c7fbu); f_11c33dee();
  /* 11c3c7fb cmp dword ptr [eax + 0x60], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c7fe je 0x11c3c81f */
  if (C.zf) goto L_11c3c81f;
  /* 11c3c800 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c3c807 call 0x11c33dee */
  push32(0x11c3c80cu); f_11c33dee();
  /* 11c3c80c call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11c3c80fu);
  /* 11c3c80f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11c3c812 jmp 0x11c3c81f */
  goto L_11c3c81f;
  /* 11c3c814 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c816 pop eax */
  EAX = (pop32());
  /* 11c3c817 ret  */
  ESPCHK(0x11c3c7ccu, _esp0);
  ESP += 4; return;
  /* 11c3c818 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c3c81b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c3c81f:;
  /* 11c3c81f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c823 call 0x11c3c828 */
  call_ind(0x11c3c828u, 0x11c3c828u);
  /* 11c3c828 jmp 0x11c3c937 */
  f_11c3c937(); return;
}

/* FUN_1000c82d @ 0x11c3c82d (79 bytes, 29 insns) */
void f_11c3c82d(void) {
  FTRACE(0x11c3c82du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c82d push ebp */
  push32((uint32_t)(EBP));
  /* 11c3c82e mov ebp, esp */
  EBP = (ESP);
  /* 11c3c830 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c3c832 push 0x11c3d990 */
  push32((uint32_t)(0x11c3d990u));
  /* 11c3c837 push 0x11c37d80 */
  push32((uint32_t)(0x11c37d80u));
  /* 11c3c83c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c3c842 push eax */
  push32((uint32_t)(EAX));
  /* 11c3c843 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c3c84a push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c84b push ecx */
  push32((uint32_t)(ECX));
  /* 11c3c84c push ebx */
  push32((uint32_t)(EBX));
  /* 11c3c84d push esi */
  push32((uint32_t)(ESI));
  /* 11c3c84e push edi */
  push32((uint32_t)(EDI));
  /* 11c3c84f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c3c852 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c856 mov eax, dword ptr [0x11c42670] */
  EAX = (r32((uint32_t)(0x11c42670)));
  /* 11c3c85b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c85d je 0x11c3c875 */
  if (C.zf) goto L_11c3c875;
  /* 11c3c85f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c3c866 call eax */
  call_ind((uint32_t)(EAX), 0x11c3c868u);
  /* 11c3c868 jmp 0x11c3c871 */
  goto L_11c3c871;
  /* 11c3c86a push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c86c pop eax */
  EAX = (pop32());
  /* 11c3c86d ret  */
  ESPCHK(0x11c3c82du, _esp0);
  ESP += 4; return;
  /* 11c3c86e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
L_11c3c871:;
  /* 11c3c871 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c3c875:;
  /* 11c3c875 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c3c879 call 0x11c3c87e */
  call_ind(0x11c3c87eu, 0x11c3c87eu);
  /* 11c3c87e jmp 0x11c3c7cc */
  f_11c3c7cc(); return;
}

/* FUN_1000c883 @ 0x11c3c883 (70 bytes, 24 insns) */
void f_11c3c883(void) {
  FTRACE(0x11c3c883u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c883 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c884 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c3c888 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c3c88a cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c890 jne 0x11c3c8a6 */
  if (!C.zf) goto L_11c3c8a6;
  /* 11c3c892 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c896 jne 0x11c3c8a6 */
  if (!C.zf) goto L_11c3c8a6;
  /* 11c3c898 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c3c89f jne 0x11c3c8a6 */
  if (!C.zf) goto L_11c3c8a6;
  /* 11c3c8a1 jmp 0x11c3c7cc */
  f_11c3c7cc(); return;
L_11c3c8a6:;
  /* 11c3c8a6 mov eax, dword ptr [0x11c56ac8] */
  EAX = (r32((uint32_t)(0x11c56ac8)));
  /* 11c3c8ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c8ad je 0x11c3c8c3 */
  if (C.zf) goto L_11c3c8c3;
  /* 11c3c8af push eax */
  push32((uint32_t)(EAX));
  /* 11c3c8b0 call 0x11c3c91f */
  push32(0x11c3c8b5u); f_11c3c91f();
  /* 11c3c8b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c8b7 pop ecx */
  ECX = (pop32());
  /* 11c3c8b8 je 0x11c3c8c3 */
  if (C.zf) goto L_11c3c8c3;
  /* 11c3c8ba push esi */
  push32((uint32_t)(ESI));
  /* 11c3c8bb call dword ptr [0x11c56ac8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c56ac8))), 0x11c3c8c1u);
  /* 11c3c8c1 jmp 0x11c3c8c5 */
  goto L_11c3c8c5;
L_11c3c8c3:;
  /* 11c3c8c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c3c8c5:;
  /* 11c3c8c5 pop esi */
  ESI = (pop32());
  /* 11c3c8c6 ret 4 */
  ESPCHK(0x11c3c883u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c8e7 @ 0x11c3c8e7 (28 bytes, 12 insns) */
void f_11c3c8e7(void) {
  FTRACE(0x11c3c8e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c8e7 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c8e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c8ea pop esi */
  ESI = (pop32());
  /* 11c3c8eb push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c3c8ef push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c3c8f3 call dword ptr [0x11c3d00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d00c))), 0x11c3c8f9u);
  /* 11c3c8f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c8fb je 0x11c3c8ff */
  if (C.zf) goto L_11c3c8ff;
  /* 11c3c8fd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c3c8ff:;
  /* 11c3c8ff mov eax, esi */
  EAX = (ESI);
  /* 11c3c901 pop esi */
  ESI = (pop32());
  /* 11c3c902 ret  */
  ESPCHK(0x11c3c8e7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c903 @ 0x11c3c903 (28 bytes, 12 insns) */
void f_11c3c903(void) {
  FTRACE(0x11c3c903u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c903 push esi */
  push32((uint32_t)(ESI));
  /* 11c3c904 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c906 pop esi */
  ESI = (pop32());
  /* 11c3c907 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c3c90b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c3c90f call dword ptr [0x11c3d05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d05c))), 0x11c3c915u);
  /* 11c3c915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c917 je 0x11c3c91b */
  if (C.zf) goto L_11c3c91b;
  /* 11c3c919 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c3c91b:;
  /* 11c3c91b mov eax, esi */
  EAX = (ESI);
  /* 11c3c91d pop esi */
  ESI = (pop32());
  /* 11c3c91e ret  */
  ESPCHK(0x11c3c903u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c91f @ 0x11c3c91f (24 bytes, 11 insns) */
void f_11c3c91f(void) {
  FTRACE(0x11c3c91fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c91f push esi */
  push32((uint32_t)(ESI));
  /* 11c3c920 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c3c922 pop esi */
  ESI = (pop32());
  /* 11c3c923 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c3c927 call dword ptr [0x11c3d008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c3d008))), 0x11c3c92du);
  /* 11c3c92d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c92f je 0x11c3c933 */
  if (C.zf) goto L_11c3c933;
  /* 11c3c931 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c3c933:;
  /* 11c3c933 mov eax, esi */
  EAX = (ESI);
  /* 11c3c935 pop esi */
  ESI = (pop32());
  /* 11c3c936 ret  */
  ESPCHK(0x11c3c91fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c937 @ 0x11c3c937 (23 bytes, 10 insns) */
void f_11c3c937(void) {
  FTRACE(0x11c3c937u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c937 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c3c939 call 0x11c34f27 */
  push32(0x11c3c93eu); f_11c34f27();
  /* 11c3c93e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11c3c940 call 0x11c38cce */
  push32(0x11c3c945u); f_11c38cce();
  /* 11c3c945 pop ecx */
  ECX = (pop32());
  /* 11c3c946 pop ecx */
  ECX = (pop32());
  /* 11c3c947 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c3c949 call 0x11c33fe4 */
  push32(0x11c3c94eu); f_11c33fe4();
  /* 11c3c94e int3  */
  x86_unimpl("int3 @ 0x11c3c94e");
  /* 11c3c94f int3  */
  x86_unimpl("int3 @ 0x11c3c94f");
}

/* Unwind@1000c950 @ 0x11c3c950 (26 bytes, 8 insns) */
void f_11c3c950(void) {
  FTRACE(0x11c3c950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c950 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c953 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11c3c956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c958 je 0x11c3c969 */
  if (C.zf) goto L_11c3c969;
  /* 11c3c95e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c3c961 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c964 jmp 0x11c3b04a */
  f_11c3b04a(); return;
L_11c3c969:;
  /* 11c3c969 ret  */
  ESPCHK(0x11c3c950u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000c96a @ 0x11c3c96a (10 bytes, 4 insns) */
void f_11c3c96a(void) {
  FTRACE(0x11c3c96au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c96a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c3c96d call 0x11c3b9a8 */
  push32(0x11c3c972u); f_11c3b9a8();
  /* 11c3c972 pop ecx */
  ECX = (pop32());
  /* 11c3c973 ret  */
  ESPCHK(0x11c3c96au, _esp0);
  ESP += 4; return;
}

/* Unwind@1000c980 @ 0x11c3c980 (26 bytes, 8 insns) */
void f_11c3c980(void) {
  FTRACE(0x11c3c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c980 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c983 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11c3c986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c988 je 0x11c3c999 */
  if (C.zf) goto L_11c3c999;
  /* 11c3c98e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c3c991 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c994 jmp 0x11c3b04a */
  f_11c3b04a(); return;
L_11c3c999:;
  /* 11c3c999 ret  */
  ESPCHK(0x11c3c980u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000c99a @ 0x11c3c99a (11 bytes, 3 insns) */
void f_11c3c99a(void) {
  FTRACE(0x11c3c99au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c99a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c3c99d add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c9a0 jmp 0x11c3b623 */
  f_11c3b623(); return;
}

/* Unwind@1000c9b0 @ 0x11c3c9b0 (11 bytes, 3 insns) */
void f_11c3c9b0(void) {
  FTRACE(0x11c3c9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c9b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c9b3 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c3c9b6 jmp 0x11c3b623 */
  f_11c3b623(); return;
}

/* Unwind@1000c9c8 @ 0x11c3c9c8 (8 bytes, 2 insns) */
void f_11c3c9c8(void) {
  FTRACE(0x11c3c9c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c9c8 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c9cb jmp 0x11c3b751 */
  f_11c3b751(); return;
}

/* Unwind@1000c9dc @ 0x11c3c9dc (26 bytes, 8 insns) */
void f_11c3c9dc(void) {
  FTRACE(0x11c3c9dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3c9dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3c9df and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11c3c9e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3c9e4 je 0x11c3c9f5 */
  if (C.zf) goto L_11c3c9f5;
  /* 11c3c9ea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c3c9ed add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3c9f0 jmp 0x11c3b04a */
  f_11c3b04a(); return;
L_11c3c9f5:;
  /* 11c3c9f5 ret  */
  ESPCHK(0x11c3c9dcu, _esp0);
  ESP += 4; return;
}

/* Unwind@1000ca00 @ 0x11c3ca00 (26 bytes, 8 insns) */
void f_11c3ca00(void) {
  FTRACE(0x11c3ca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c3ca00 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c3ca03 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11c3ca06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c3ca08 je 0x11c3ca19 */
  if (C.zf) goto L_11c3ca19;
  /* 11c3ca0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c3ca11 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c3ca14 jmp 0x11c3b04a */
  f_11c3b04a(); return;
L_11c3ca19:;
  /* 11c3ca19 ret  */
  ESPCHK(0x11c3ca00u, _esp0);
  ESP += 4; return;
}

