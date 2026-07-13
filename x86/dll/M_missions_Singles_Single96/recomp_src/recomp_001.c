#include "recomp.h"

/* FUN_10008f50 @ 0x12068f50 (13 bytes, 6 insns) */
void f_12068f50(void) {
  FTRACE(0x12068f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12068f51 mov ebp, esp */
  EBP = (ESP);
  /* 12068f53 call 0x12065250 */
  push32(0x12068f58u); f_12065250();
  /* 12068f58 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068f5b pop ebp */
  EBP = (pop32());
  /* 12068f5c ret  */
  ESPCHK(0x12068f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f60 @ 0x12068f60 (13 bytes, 6 insns) */
void f_12068f60(void) {
  FTRACE(0x12068f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12068f61 mov ebp, esp */
  EBP = (ESP);
  /* 12068f63 call 0x12065250 */
  push32(0x12068f68u); f_12065250();
  /* 12068f68 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12068f6b pop ebp */
  EBP = (pop32());
  /* 12068f6c ret  */
  ESPCHK(0x12068f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f70 @ 0x12068f70 (187 bytes, 54 insns) */
void f_12068f70(void) {
  FTRACE(0x12068f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12068f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12068f71 mov ebp, esp */
  EBP = (ESP);
  /* 12068f73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12068f76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12068f7d cmp dword ptr [0x12091730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068f84 jne 0x12068fe3 */
  if (!C.zf) goto L_12068fe3;
  /* 12068f86 push 0x1208c3cc */
  push32((uint32_t)(0x1208c3ccu));
  /* 12068f8b call dword ptr [0x12094398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094398))), 0x12068f91u);
  /* 12068f91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12068f94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068f98 je 0x12068fb7 */
  if (C.zf) goto L_12068fb7;
  /* 12068f9a push 0x1208cfd0 */
  push32((uint32_t)(0x1208cfd0u));
  /* 12068f9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068fa2 push eax */
  push32((uint32_t)(EAX));
  /* 12068fa3 call dword ptr [0x12094394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094394))), 0x12068fa9u);
  /* 12068fa9 mov dword ptr [0x12091730], eax */
  w32((uint32_t)(0x12091730), (EAX));
  /* 12068fae cmp dword ptr [0x12091730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068fb5 jne 0x12068fbb */
  if (!C.zf) goto L_12068fbb;
L_12068fb7:;
  /* 12068fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12068fb9 jmp 0x12069027 */
  goto L_12069027;
L_12068fbb:;
  /* 12068fbb push 0x1208cfc0 */
  push32((uint32_t)(0x1208cfc0u));
  /* 12068fc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12068fc4 call dword ptr [0x12094394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094394))), 0x12068fcau);
  /* 12068fca mov dword ptr [0x12091734], eax */
  w32((uint32_t)(0x12091734), (EAX));
  /* 12068fcf push 0x1208cfac */
  push32((uint32_t)(0x1208cfacu));
  /* 12068fd4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12068fd7 push edx */
  push32((uint32_t)(EDX));
  /* 12068fd8 call dword ptr [0x12094394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094394))), 0x12068fdeu);
  /* 12068fde mov dword ptr [0x12091738], eax */
  w32((uint32_t)(0x12091738), (EAX));
L_12068fe3:;
  /* 12068fe3 cmp dword ptr [0x12091734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068fea je 0x12068ff5 */
  if (C.zf) goto L_12068ff5;
  /* 12068fec call dword ptr [0x12091734] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091734))), 0x12068ff2u);
  /* 12068ff2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12068ff5:;
  /* 12068ff5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12068ff9 je 0x12069011 */
  if (C.zf) goto L_12069011;
  /* 12068ffb cmp dword ptr [0x12091738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069002 je 0x12069011 */
  if (C.zf) goto L_12069011;
  /* 12069004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069007 push eax */
  push32((uint32_t)(EAX));
  /* 12069008 call dword ptr [0x12091738] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091738))), 0x1206900eu);
  /* 1206900e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12069011:;
  /* 12069011 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12069014 push ecx */
  push32((uint32_t)(ECX));
  /* 12069015 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069018 push edx */
  push32((uint32_t)(EDX));
  /* 12069019 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206901c push eax */
  push32((uint32_t)(EAX));
  /* 1206901d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069020 push ecx */
  push32((uint32_t)(ECX));
  /* 12069021 call dword ptr [0x12091730] */
  call_ind((uint32_t)(r32((uint32_t)(0x12091730))), 0x12069027u);
L_12069027:;
  /* 12069027 mov esp, ebp */
  ESP = (EBP);
  /* 12069029 pop ebp */
  EBP = (pop32());
  /* 1206902a ret  */
  ESPCHK(0x12068f70u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12069030 (254 bytes, 109 insns) */
void f_12069030(void) {
  FTRACE(0x12069030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069030 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12069034 push edi */
  push32((uint32_t)(EDI));
  /* 12069035 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12069037 je 0x120690b3 */
  if (C.zf) goto L_120690b3;
  /* 12069039 push esi */
  push32((uint32_t)(ESI));
  /* 1206903a push ebx */
  push32((uint32_t)(EBX));
  /* 1206903b mov ebx, ecx */
  EBX = (ECX);
  /* 1206903d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12069041 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12069047 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1206904b jne 0x12069054 */
  if (!C.zf) goto L_12069054;
  /* 1206904d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12069050 jne 0x120690c1 */
  if (!C.zf) goto L_120690c1;
  /* 12069052 jmp 0x12069075 */
  goto L_12069075;
L_12069054:;
  /* 12069054 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12069056 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12069057 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12069059 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1206905a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1206905b je 0x12069082 */
  if (C.zf) goto L_12069082;
  /* 1206905d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1206905f je 0x1206908a */
  if (C.zf) goto L_1206908a;
  /* 12069061 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12069067 jne 0x12069054 */
  if (!C.zf) goto L_12069054;
  /* 12069069 mov ebx, ecx */
  EBX = (ECX);
  /* 1206906b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206906e jne 0x120690c1 */
  if (!C.zf) goto L_120690c1;
L_12069070:;
  /* 12069070 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12069073 je 0x12069082 */
  if (C.zf) goto L_12069082;
L_12069075:;
  /* 12069075 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12069077 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12069078 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206907a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1206907b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1206907d je 0x120690ae */
  if (C.zf) goto L_120690ae;
  /* 1206907f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12069080 jne 0x12069075 */
  if (!C.zf) goto L_12069075;
L_12069082:;
  /* 12069082 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12069086 pop ebx */
  EBX = (pop32());
  /* 12069087 pop esi */
  ESI = (pop32());
  /* 12069088 pop edi */
  EDI = (pop32());
  /* 12069089 ret  */
  ESPCHK(0x12069030u, _esp0);
  ESP += 4; return;
L_1206908a:;
  /* 1206908a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12069090 je 0x120690a4 */
  if (C.zf) goto L_120690a4;
L_12069092:;
  /* 12069092 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12069094 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12069095 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12069096 je 0x12069126 */
  if (C.zf) goto L_12069126;
  /* 1206909c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120690a2 jne 0x12069092 */
  if (!C.zf) goto L_12069092;
L_120690a4:;
  /* 120690a4 mov ebx, ecx */
  EBX = (ECX);
  /* 120690a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120690a9 jne 0x12069117 */
  if (!C.zf) goto L_12069117;
L_120690ab:;
  /* 120690ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120690ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_120690ae:;
  /* 120690ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120690af jne 0x120690ab */
  if (!C.zf) goto L_120690ab;
  /* 120690b1 pop ebx */
  EBX = (pop32());
  /* 120690b2 pop esi */
  ESI = (pop32());
L_120690b3:;
  /* 120690b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120690b7 pop edi */
  EDI = (pop32());
  /* 120690b8 ret  */
  ESPCHK(0x12069030u, _esp0);
  ESP += 4; return;
L_120690b9:;
  /* 120690b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120690bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120690be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120690bf je 0x12069070 */
  if (C.zf) goto L_12069070;
L_120690c1:;
  /* 120690c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120690c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120690c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120690ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120690cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120690cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 120690d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120690d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 120690d9 je 0x120690b9 */
  if (C.zf) goto L_120690b9;
  /* 120690db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120690dd je 0x1206910b */
  if (C.zf) goto L_1206910b;
  /* 120690df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 120690e1 je 0x12069101 */
  if (C.zf) goto L_12069101;
  /* 120690e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 120690e9 je 0x120690f7 */
  if (C.zf) goto L_120690f7;
  /* 120690eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 120690f1 jne 0x120690b9 */
  if (!C.zf) goto L_120690b9;
  /* 120690f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120690f5 jmp 0x1206910f */
  goto L_1206910f;
L_120690f7:;
  /* 120690f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120690fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120690ff jmp 0x1206910f */
  goto L_1206910f;
L_12069101:;
  /* 12069101 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12069107 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12069109 jmp 0x1206910f */
  goto L_1206910f;
L_1206910b:;
  /* 1206910b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206910d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1206910f:;
  /* 1206910f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12069112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12069114 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12069115 je 0x12069121 */
  if (C.zf) goto L_12069121;
L_12069117:;
  /* 12069117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12069119:;
  /* 12069119 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1206911b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206911e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1206911f jne 0x12069119 */
  if (!C.zf) goto L_12069119;
L_12069121:;
  /* 12069121 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12069124 jne 0x120690ab */
  if (!C.zf) goto L_120690ab;
L_12069126:;
  /* 12069126 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1206912a pop ebx */
  EBX = (pop32());
  /* 1206912b pop esi */
  ESI = (pop32());
  /* 1206912c pop edi */
  EDI = (pop32());
  /* 1206912d ret  */
  ESPCHK(0x12069030u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x12069130 (55 bytes, 16 insns) */
void f_12069130(void) {
  FTRACE(0x12069130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069130 push ebp */
  push32((uint32_t)(EBP));
  /* 12069131 mov ebp, esp */
  EBP = (ESP);
  /* 12069133 mov eax, dword ptr [0x1208fb94] */
  EAX = (r32((uint32_t)(0x1208fb94)));
  /* 12069138 push eax */
  push32((uint32_t)(EAX));
  /* 12069139 call dword ptr [0x12094354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094354))), 0x1206913fu);
  /* 1206913f mov ecx, dword ptr [0x1208fb84] */
  ECX = (r32((uint32_t)(0x1208fb84)));
  /* 12069145 push ecx */
  push32((uint32_t)(ECX));
  /* 12069146 call dword ptr [0x12094354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094354))), 0x1206914cu);
  /* 1206914c mov edx, dword ptr [0x1208fb74] */
  EDX = (r32((uint32_t)(0x1208fb74)));
  /* 12069152 push edx */
  push32((uint32_t)(EDX));
  /* 12069153 call dword ptr [0x12094354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094354))), 0x12069159u);
  /* 12069159 mov eax, dword ptr [0x1208fb54] */
  EAX = (r32((uint32_t)(0x1208fb54)));
  /* 1206915e push eax */
  push32((uint32_t)(EAX));
  /* 1206915f call dword ptr [0x12094354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094354))), 0x12069165u);
  /* 12069165 pop ebp */
  EBP = (pop32());
  /* 12069166 ret  */
  ESPCHK(0x12069130u, _esp0);
  ESP += 4; return;
}

/* FUN_10009170 @ 0x12069170 (159 bytes, 47 insns) */
void f_12069170(void) {
  FTRACE(0x12069170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069170 push ebp */
  push32((uint32_t)(EBP));
  /* 12069171 mov ebp, esp */
  EBP = (ESP);
  /* 12069173 push ecx */
  push32((uint32_t)(ECX));
  /* 12069174 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206917b jmp 0x12069186 */
  goto L_12069186;
L_1206917d:;
  /* 1206917d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069180 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069183 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12069186:;
  /* 12069186 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206918a jge 0x120691d9 */
  if ((C.sf==C.of)) goto L_120691d9;
  /* 1206918c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206918f cmp dword ptr [ecx*4 + 0x1208fb50], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1208fb50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069197 je 0x120691d7 */
  if (C.zf) goto L_120691d7;
  /* 12069199 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206919d je 0x120691d7 */
  if (C.zf) goto L_120691d7;
  /* 1206919f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120691a3 je 0x120691d7 */
  if (C.zf) goto L_120691d7;
  /* 120691a5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120691a9 je 0x120691d7 */
  if (C.zf) goto L_120691d7;
  /* 120691ab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120691af je 0x120691d7 */
  if (C.zf) goto L_120691d7;
  /* 120691b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120691b4 mov eax, dword ptr [edx*4 + 0x1208fb50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1208fb50)));
  /* 120691bb push eax */
  push32((uint32_t)(EAX));
  /* 120691bc call dword ptr [0x120943d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d8))), 0x120691c2u);
  /* 120691c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 120691c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120691c7 mov edx, dword ptr [ecx*4 + 0x1208fb50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1208fb50)));
  /* 120691ce push edx */
  push32((uint32_t)(EDX));
  /* 120691cf call 0x120662a0 */
  push32(0x120691d4u); f_120662a0();
  /* 120691d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120691d7:;
  /* 120691d7 jmp 0x1206917d */
  goto L_1206917d;
L_120691d9:;
  /* 120691d9 mov eax, dword ptr [0x1208fb74] */
  EAX = (r32((uint32_t)(0x1208fb74)));
  /* 120691de push eax */
  push32((uint32_t)(EAX));
  /* 120691df call dword ptr [0x120943d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d8))), 0x120691e5u);
  /* 120691e5 mov ecx, dword ptr [0x1208fb84] */
  ECX = (r32((uint32_t)(0x1208fb84)));
  /* 120691eb push ecx */
  push32((uint32_t)(ECX));
  /* 120691ec call dword ptr [0x120943d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d8))), 0x120691f2u);
  /* 120691f2 mov edx, dword ptr [0x1208fb94] */
  EDX = (r32((uint32_t)(0x1208fb94)));
  /* 120691f8 push edx */
  push32((uint32_t)(EDX));
  /* 120691f9 call dword ptr [0x120943d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d8))), 0x120691ffu);
  /* 120691ff mov eax, dword ptr [0x1208fb54] */
  EAX = (r32((uint32_t)(0x1208fb54)));
  /* 12069204 push eax */
  push32((uint32_t)(EAX));
  /* 12069205 call dword ptr [0x120943d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d8))), 0x1206920bu);
  /* 1206920b mov esp, ebp */
  ESP = (EBP);
  /* 1206920d pop ebp */
  EBP = (pop32());
  /* 1206920e ret  */
  ESPCHK(0x12069170u, _esp0);
  ESP += 4; return;
}

/* FUN_10009210 @ 0x12069210 (151 bytes, 46 insns) */
void f_12069210(void) {
  FTRACE(0x12069210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069210 push ebp */
  push32((uint32_t)(EBP));
  /* 12069211 mov ebp, esp */
  EBP = (ESP);
  /* 12069213 push ecx */
  push32((uint32_t)(ECX));
  /* 12069214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069217 cmp dword ptr [eax*4 + 0x1208fb50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1208fb50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206921f jne 0x12069292 */
  if (!C.zf) goto L_12069292;
  /* 12069221 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12069226 push 0x1208cfdc */
  push32((uint32_t)(0x1208cfdcu));
  /* 1206922b push 2 */
  push32((uint32_t)(0x2u));
  /* 1206922d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1206922f call 0x12065810 */
  push32(0x12069234u); f_12065810();
  /* 12069234 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069237 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206923a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206923e jne 0x1206924a */
  if (!C.zf) goto L_1206924a;
  /* 12069240 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12069242 call 0x12064780 */
  push32(0x12069247u); f_12064780();
  /* 12069247 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206924a:;
  /* 1206924a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1206924c call 0x12069210 */
  push32(0x12069251u); f_12069210();
  /* 12069251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069254 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069257 cmp dword ptr [ecx*4 + 0x1208fb50], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1208fb50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206925f jne 0x1206927a */
  if (!C.zf) goto L_1206927a;
  /* 12069261 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069264 push edx */
  push32((uint32_t)(EDX));
  /* 12069265 call dword ptr [0x12094354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094354))), 0x1206926bu);
  /* 1206926b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206926e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069271 mov dword ptr [eax*4 + 0x1208fb50], ecx */
  w32((uint32_t)(EAX*4 + 0x1208fb50), (ECX));
  /* 12069278 jmp 0x12069288 */
  goto L_12069288;
L_1206927a:;
  /* 1206927a push 2 */
  push32((uint32_t)(0x2u));
  /* 1206927c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206927f push edx */
  push32((uint32_t)(EDX));
  /* 12069280 call 0x120662a0 */
  push32(0x12069285u); f_120662a0();
  /* 12069285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12069288:;
  /* 12069288 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1206928a call 0x120692b0 */
  push32(0x1206928fu); f_120692b0();
  /* 1206928f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12069292:;
  /* 12069292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069295 mov ecx, dword ptr [eax*4 + 0x1208fb50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1208fb50)));
  /* 1206929c push ecx */
  push32((uint32_t)(ECX));
  /* 1206929d call dword ptr [0x12094344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094344))), 0x120692a3u);
  /* 120692a3 mov esp, ebp */
  ESP = (EBP);
  /* 120692a5 pop ebp */
  EBP = (pop32());
  /* 120692a6 ret  */
  ESPCHK(0x12069210u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x120692b0 (22 bytes, 8 insns) */
void f_120692b0(void) {
  FTRACE(0x120692b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120692b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120692b1 mov ebp, esp */
  EBP = (ESP);
  /* 120692b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120692b6 mov ecx, dword ptr [eax*4 + 0x1208fb50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1208fb50)));
  /* 120692bd push ecx */
  push32((uint32_t)(ECX));
  /* 120692be call dword ptr [0x12094340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094340))), 0x120692c4u);
  /* 120692c4 pop ebp */
  EBP = (pop32());
  /* 120692c5 ret  */
  ESPCHK(0x120692b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100092d0 @ 0x120692d0 (26 bytes, 10 insns) */
void f_120692d0(void) {
  FTRACE(0x120692d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120692d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120692d1 mov ebp, esp */
  EBP = (ESP);
  /* 120692d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120692d6 push eax */
  push32((uint32_t)(EAX));
  /* 120692d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120692d9 call dword ptr [0x12094348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094348))), 0x120692dfu);
  /* 120692df push 0xff */
  push32((uint32_t)(0xffu));
  /* 120692e4 call dword ptr [0x120943a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943a4))), 0x120692eau);
  /* 120692ea pop ebp */
  EBP = (pop32());
  /* 120692eb ret  */
  ESPCHK(0x120692d0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x120692f0 (446 bytes, 130 insns) */
void f_120692f0(void) {
  FTRACE(0x120692f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120692f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120692f1 mov ebp, esp */
  EBP = (ESP);
  /* 120692f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120692f6 call 0x12065250 */
  push32(0x120692fbu); f_12065250();
  /* 120692fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120692fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069301 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12069304 push ecx */
  push32((uint32_t)(ECX));
  /* 12069305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069308 push edx */
  push32((uint32_t)(EDX));
  /* 12069309 call 0x120694b0 */
  push32(0x1206930eu); f_120694b0();
  /* 1206930e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069311 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12069314 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069318 je 0x12069323 */
  if (C.zf) goto L_12069323;
  /* 1206931a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206931d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069321 jne 0x12069332 */
  if (!C.zf) goto L_12069332;
L_12069323:;
  /* 12069323 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069326 push ecx */
  push32((uint32_t)(ECX));
  /* 12069327 call dword ptr [0x12094338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094338))), 0x1206932du);
  /* 1206932d jmp 0x120694aa */
  goto L_120694aa;
L_12069332:;
  /* 12069332 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12069335 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069339 jne 0x1206934f */
  if (!C.zf) goto L_1206934f;
  /* 1206933b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206933e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12069345 mov eax, 1 */
  EAX = (0x1u);
  /* 1206934a jmp 0x120694aa */
  goto L_120694aa;
L_1206934f:;
  /* 1206934f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12069352 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069356 jne 0x12069360 */
  if (!C.zf) goto L_12069360;
  /* 12069358 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206935b jmp 0x120694aa */
  goto L_120694aa;
L_12069360:;
  /* 12069360 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12069363 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12069366 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12069369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206936c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1206936f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12069372 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069375 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069378 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1206937b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206937e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069382 jne 0x12069487 */
  if (!C.zf) goto L_12069487;
  /* 12069388 mov eax, dword ptr [0x1208fc88] */
  EAX = (r32((uint32_t)(0x1208fc88)));
  /* 1206938d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12069390 jmp 0x1206939b */
  goto L_1206939b;
L_12069392:;
  /* 12069392 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12069395 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069398 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1206939b:;
  /* 1206939b mov edx, dword ptr [0x1208fc88] */
  EDX = (r32((uint32_t)(0x1208fc88)));
  /* 120693a1 add edx, dword ptr [0x1208fc8c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1208fc8c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120693a7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120693aa jge 0x120693c2 */
  if ((C.sf==C.of)) goto L_120693c2;
  /* 120693ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120693af imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120693b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120693b5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 120693b8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 120693c0 jmp 0x12069392 */
  goto L_12069392;
L_120693c2:;
  /* 120693c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120693c5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 120693c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120693cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120693ce cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120693d4 jne 0x120693e5 */
  if (!C.zf) goto L_120693e5;
  /* 120693d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120693d9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 120693e0 jmp 0x1206946d */
  goto L_1206946d;
L_120693e5:;
  /* 120693e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120693e8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120693ee jne 0x120693fc */
  if (!C.zf) goto L_120693fc;
  /* 120693f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120693f3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 120693fa jmp 0x1206946d */
  goto L_1206946d;
L_120693fc:;
  /* 120693fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120693ff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069405 jne 0x12069413 */
  if (!C.zf) goto L_12069413;
  /* 12069407 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206940a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12069411 jmp 0x1206946d */
  goto L_1206946d;
L_12069413:;
  /* 12069413 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12069416 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206941c jne 0x1206942a */
  if (!C.zf) goto L_1206942a;
  /* 1206941e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069421 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12069428 jmp 0x1206946d */
  goto L_1206946d;
L_1206942a:;
  /* 1206942a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206942d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069433 jne 0x12069441 */
  if (!C.zf) goto L_12069441;
  /* 12069435 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069438 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1206943f jmp 0x1206946d */
  goto L_1206946d;
L_12069441:;
  /* 12069441 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12069444 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206944a jne 0x12069458 */
  if (!C.zf) goto L_12069458;
  /* 1206944c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206944f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12069456 jmp 0x1206946d */
  goto L_1206946d;
L_12069458:;
  /* 12069458 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206945b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069461 jne 0x1206946d */
  if (!C.zf) goto L_1206946d;
  /* 12069463 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069466 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1206946d:;
  /* 1206946d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069470 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12069473 push edx */
  push32((uint32_t)(EDX));
  /* 12069474 push 8 */
  push32((uint32_t)(0x8u));
  /* 12069476 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12069479u);
  /* 12069479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206947c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206947f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12069482 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12069485 jmp 0x1206949e */
  goto L_1206949e;
L_12069487:;
  /* 12069487 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206948a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12069491 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12069494 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12069497 push ecx */
  push32((uint32_t)(ECX));
  /* 12069498 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1206949bu);
  /* 1206949b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206949e:;
  /* 1206949e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120694a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120694a4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 120694a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120694aa:;
  /* 120694aa mov esp, ebp */
  ESP = (EBP);
  /* 120694ac pop ebp */
  EBP = (pop32());
  /* 120694ad ret  */
  ESPCHK(0x120692f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100094b0 @ 0x120694b0 (89 bytes, 35 insns) */
void f_120694b0(void) {
  FTRACE(0x120694b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120694b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120694b1 mov ebp, esp */
  EBP = (ESP);
  /* 120694b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120694b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120694b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120694ba:;
  /* 120694ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120694bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120694bf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120694c2 je 0x120694e2 */
  if (C.zf) goto L_120694e2;
  /* 120694c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120694c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120694ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120694cd mov ecx, dword ptr [0x1208fc94] */
  ECX = (r32((uint32_t)(0x1208fc94)));
  /* 120694d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120694d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120694d9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120694db cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120694de jae 0x120694e2 */
  if (!C.cf) goto L_120694e2;
  /* 120694e0 jmp 0x120694ba */
  goto L_120694ba;
L_120694e2:;
  /* 120694e2 mov eax, dword ptr [0x1208fc94] */
  EAX = (r32((uint32_t)(0x1208fc94)));
  /* 120694e7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120694ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120694ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120694ef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120694f2 jae 0x120694fe */
  if (!C.cf) goto L_120694fe;
  /* 120694f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120694f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120694f9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120694fc je 0x12069502 */
  if (C.zf) goto L_12069502;
L_120694fe:;
  /* 120694fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12069500 jmp 0x12069505 */
  goto L_12069505;
L_12069502:;
  /* 12069502 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12069505:;
  /* 12069505 mov esp, ebp */
  ESP = (EBP);
  /* 12069507 pop ebp */
  EBP = (pop32());
  /* 12069508 ret  */
  ESPCHK(0x120694b0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12069510 (48 bytes, 17 insns) */
void f_12069510(void) {
  FTRACE(0x12069510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069510 push ebp */
  push32((uint32_t)(EBP));
  /* 12069511 mov ebp, esp */
  EBP = (ESP);
  /* 12069513 push ecx */
  push32((uint32_t)(ECX));
  /* 12069514 push 9 */
  push32((uint32_t)(0x9u));
  /* 12069516 call 0x12069210 */
  push32(0x1206951bu); f_12069210();
  /* 1206951b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206951e mov eax, dword ptr [0x120917a4] */
  EAX = (r32((uint32_t)(0x120917a4)));
  /* 12069523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12069526 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069529 mov dword ptr [0x120917a4], ecx */
  w32((uint32_t)(0x120917a4), (ECX));
  /* 1206952f push 9 */
  push32((uint32_t)(0x9u));
  /* 12069531 call 0x120692b0 */
  push32(0x12069536u); f_120692b0();
  /* 12069536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069539 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206953c mov esp, ebp */
  ESP = (EBP);
  /* 1206953e pop ebp */
  EBP = (pop32());
  /* 1206953f ret  */
  ESPCHK(0x12069510u, _esp0);
  ESP += 4; return;
}

/* FUN_10009540 @ 0x12069540 (10 bytes, 5 insns) */
void f_12069540(void) {
  FTRACE(0x12069540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069540 push ebp */
  push32((uint32_t)(EBP));
  /* 12069541 mov ebp, esp */
  EBP = (ESP);
  /* 12069543 mov eax, dword ptr [0x120917a4] */
  EAX = (r32((uint32_t)(0x120917a4)));
  /* 12069548 pop ebp */
  EBP = (pop32());
  /* 12069549 ret  */
  ESPCHK(0x12069540u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12069550 (45 bytes, 19 insns) */
void f_12069550(void) {
  FTRACE(0x12069550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069550 push ebp */
  push32((uint32_t)(EBP));
  /* 12069551 mov ebp, esp */
  EBP = (ESP);
  /* 12069553 push ecx */
  push32((uint32_t)(ECX));
  /* 12069554 mov eax, dword ptr [0x120917a4] */
  EAX = (r32((uint32_t)(0x120917a4)));
  /* 12069559 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206955c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069560 je 0x12069570 */
  if (C.zf) goto L_12069570;
  /* 12069562 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069565 push ecx */
  push32((uint32_t)(ECX));
  /* 12069566 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12069569u);
  /* 12069569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206956c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206956e jne 0x12069574 */
  if (!C.zf) goto L_12069574;
L_12069570:;
  /* 12069570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12069572 jmp 0x12069579 */
  goto L_12069579;
L_12069574:;
  /* 12069574 mov eax, 1 */
  EAX = (0x1u);
L_12069579:;
  /* 12069579 mov esp, ebp */
  ESP = (EBP);
  /* 1206957b pop ebp */
  EBP = (pop32());
  /* 1206957c ret  */
  ESPCHK(0x12069550u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12069580 (88 bytes, 40 insns) */
void f_12069580(void) {
  FTRACE(0x12069580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069580 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12069584 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12069588 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206958a je 0x120695d3 */
  if (C.zf) goto L_120695d3;
  /* 1206958c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206958e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12069592 push edi */
  push32((uint32_t)(EDI));
  /* 12069593 mov edi, ecx */
  EDI = (ECX);
  /* 12069595 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069598 jb 0x120695c7 */
  if (C.cf) goto L_120695c7;
  /* 1206959a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206959c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1206959f je 0x120695a9 */
  if (C.zf) goto L_120695a9;
  /* 120695a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_120695a3:;
  /* 120695a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120695a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120695a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120695a7 jne 0x120695a3 */
  if (!C.zf) goto L_120695a3;
L_120695a9:;
  /* 120695a9 mov ecx, eax */
  ECX = (EAX);
  /* 120695ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120695ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120695b0 mov ecx, eax */
  ECX = (EAX);
  /* 120695b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120695b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120695b7 mov ecx, edx */
  ECX = (EDX);
  /* 120695b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120695bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120695bf je 0x120695c7 */
  if (C.zf) goto L_120695c7;
  /* 120695c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120695c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120695c5 je 0x120695cd */
  if (C.zf) goto L_120695cd;
L_120695c7:;
  /* 120695c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120695c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120695ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120695cb jne 0x120695c7 */
  if (!C.zf) goto L_120695c7;
L_120695cd:;
  /* 120695cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120695d1 pop edi */
  EDI = (pop32());
  /* 120695d2 ret  */
  ESPCHK(0x12069580u, _esp0);
  ESP += 4; return;
L_120695d3:;
  /* 120695d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120695d7 ret  */
  ESPCHK(0x12069580u, _esp0);
  ESP += 4; return;
}

/* FUN_100095e0 @ 0x120695e0 (23 bytes, 10 insns) */
void f_120695e0(void) {
  FTRACE(0x120695e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120695e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120695e1 mov ebp, esp */
  EBP = (ESP);
  /* 120695e3 mov eax, dword ptr [0x120917a0] */
  EAX = (r32((uint32_t)(0x120917a0)));
  /* 120695e8 push eax */
  push32((uint32_t)(EAX));
  /* 120695e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120695ec push ecx */
  push32((uint32_t)(ECX));
  /* 120695ed call 0x12069600 */
  push32(0x120695f2u); f_12069600();
  /* 120695f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120695f5 pop ebp */
  EBP = (pop32());
  /* 120695f6 ret  */
  ESPCHK(0x120695e0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12069600 (87 bytes, 34 insns) */
void f_12069600(void) {
  FTRACE(0x12069600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069600 push ebp */
  push32((uint32_t)(EBP));
  /* 12069601 mov ebp, esp */
  EBP = (ESP);
  /* 12069603 push ecx */
  push32((uint32_t)(ECX));
  /* 12069604 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069608 jbe 0x1206960e */
  if ((C.cf||C.zf)) goto L_1206960e;
  /* 1206960a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206960c jmp 0x12069653 */
  goto L_12069653;
L_1206960e:;
  /* 1206960e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069612 ja 0x12069625 */
  if ((!C.cf&&!C.zf)) goto L_12069625;
  /* 12069614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069617 push eax */
  push32((uint32_t)(EAX));
  /* 12069618 call 0x12069660 */
  push32(0x1206961du); f_12069660();
  /* 1206961d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069620 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12069623 jmp 0x1206962c */
  goto L_1206962c;
L_12069625:;
  /* 12069625 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1206962c:;
  /* 1206962c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069630 jne 0x12069638 */
  if (!C.zf) goto L_12069638;
  /* 12069632 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069636 jne 0x1206963d */
  if (!C.zf) goto L_1206963d;
L_12069638:;
  /* 12069638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206963b jmp 0x12069653 */
  goto L_12069653;
L_1206963d:;
  /* 1206963d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069640 push ecx */
  push32((uint32_t)(ECX));
  /* 12069641 call 0x12069550 */
  push32(0x12069646u); f_12069550();
  /* 12069646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206964b jne 0x12069651 */
  if (!C.zf) goto L_12069651;
  /* 1206964d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206964f jmp 0x12069653 */
  goto L_12069653;
L_12069651:;
  /* 12069651 jmp 0x1206960e */
  goto L_1206960e;
L_12069653:;
  /* 12069653 mov esp, ebp */
  ESP = (EBP);
  /* 12069655 pop ebp */
  EBP = (pop32());
  /* 12069656 ret  */
  ESPCHK(0x12069600u, _esp0);
  ESP += 4; return;
}

/* FUN_10009660 @ 0x12069660 (109 bytes, 37 insns) */
void f_12069660(void) {
  FTRACE(0x12069660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069660 push ebp */
  push32((uint32_t)(EBP));
  /* 12069661 mov ebp, esp */
  EBP = (ESP);
  /* 12069663 push ecx */
  push32((uint32_t)(ECX));
  /* 12069664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069667 cmp eax, dword ptr [0x1208fca4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1208fca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206966d ja 0x1206969d */
  if ((!C.cf&&!C.zf)) goto L_1206969d;
  /* 1206966f push 9 */
  push32((uint32_t)(0x9u));
  /* 12069671 call 0x12069210 */
  push32(0x12069676u); f_12069210();
  /* 12069676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206967c push ecx */
  push32((uint32_t)(ECX));
  /* 1206967d call 0x1206a1a0 */
  push32(0x12069682u); f_1206a1a0();
  /* 12069682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069685 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12069688 push 9 */
  push32((uint32_t)(0x9u));
  /* 1206968a call 0x120692b0 */
  push32(0x1206968fu); f_120692b0();
  /* 1206968f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069692 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069696 je 0x1206969d */
  if (C.zf) goto L_1206969d;
  /* 12069698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206969b jmp 0x120696c9 */
  goto L_120696c9;
L_1206969d:;
  /* 1206969d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120696a1 jne 0x120696aa */
  if (!C.zf) goto L_120696aa;
  /* 120696a3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_120696aa:;
  /* 120696aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120696ad add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120696b0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 120696b3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120696b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120696b9 push eax */
  push32((uint32_t)(EAX));
  /* 120696ba push 0 */
  push32((uint32_t)(0x0u));
  /* 120696bc mov ecx, dword ptr [0x12092f6c] */
  ECX = (r32((uint32_t)(0x12092f6c)));
  /* 120696c2 push ecx */
  push32((uint32_t)(ECX));
  /* 120696c3 call dword ptr [0x12094334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094334))), 0x120696c9u);
L_120696c9:;
  /* 120696c9 mov esp, ebp */
  ESP = (EBP);
  /* 120696cb pop ebp */
  EBP = (pop32());
  /* 120696cc ret  */
  ESPCHK(0x12069660u, _esp0);
  ESP += 4; return;
}

/* FUN_100096d0 @ 0x120696d0 (10 bytes, 5 insns) */
void f_120696d0(void) {
  FTRACE(0x120696d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120696d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120696d1 mov ebp, esp */
  EBP = (ESP);
  /* 120696d3 mov eax, 1 */
  EAX = (0x1u);
  /* 120696d8 pop ebp */
  EBP = (pop32());
  /* 120696d9 ret  */
  ESPCHK(0x120696d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096e0 @ 0x120696e0 (173 bytes, 59 insns) */
void f_120696e0(void) {
  FTRACE(0x120696e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120696e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120696e1 mov ebp, esp */
  EBP = (ESP);
  /* 120696e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120696e6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120696ea jbe 0x120696f3 */
  if ((C.cf||C.zf)) goto L_120696f3;
  /* 120696ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120696ee jmp 0x12069789 */
  goto L_12069789;
L_120696f3:;
  /* 120696f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 120696f5 call 0x12069210 */
  push32(0x120696fau); f_12069210();
  /* 120696fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120696fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069700 push eax */
  push32((uint32_t)(EAX));
  /* 12069701 call 0x12069b10 */
  push32(0x12069706u); f_12069b10();
  /* 12069706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069709 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206970c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069710 je 0x12069751 */
  if (C.zf) goto L_12069751;
  /* 12069712 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12069719 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206971c cmp ecx, dword ptr [0x1208fca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1208fca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069722 ja 0x12069742 */
  if ((!C.cf&&!C.zf)) goto L_12069742;
  /* 12069724 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069727 push edx */
  push32((uint32_t)(EDX));
  /* 12069728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206972b push eax */
  push32((uint32_t)(EAX));
  /* 1206972c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206972f push ecx */
  push32((uint32_t)(ECX));
  /* 12069730 call 0x1206a9e0 */
  push32(0x12069735u); f_1206a9e0();
  /* 12069735 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206973a je 0x12069742 */
  if (C.zf) goto L_12069742;
  /* 1206973c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206973f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12069742:;
  /* 12069742 push 9 */
  push32((uint32_t)(0x9u));
  /* 12069744 call 0x120692b0 */
  push32(0x12069749u); f_120692b0();
  /* 12069749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206974c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206974f jmp 0x12069789 */
  goto L_12069789;
L_12069751:;
  /* 12069751 push 9 */
  push32((uint32_t)(0x9u));
  /* 12069753 call 0x120692b0 */
  push32(0x12069758u); f_120692b0();
  /* 12069758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206975b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206975f jne 0x12069768 */
  if (!C.zf) goto L_12069768;
  /* 12069761 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12069768:;
  /* 12069768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206976b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206976e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12069770 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12069773 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069776 push ecx */
  push32((uint32_t)(ECX));
  /* 12069777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206977a push edx */
  push32((uint32_t)(EDX));
  /* 1206977b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1206977d mov eax, dword ptr [0x12092f6c] */
  EAX = (r32((uint32_t)(0x12092f6c)));
  /* 12069782 push eax */
  push32((uint32_t)(EAX));
  /* 12069783 call dword ptr [0x1209433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209433c))), 0x12069789u);
L_12069789:;
  /* 12069789 mov esp, ebp */
  ESP = (EBP);
  /* 1206978b pop ebp */
  EBP = (pop32());
  /* 1206978c ret  */
  ESPCHK(0x120696e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009790 @ 0x12069790 (490 bytes, 165 insns) */
void f_12069790(void) {
  FTRACE(0x12069790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069790 push ebp */
  push32((uint32_t)(EBP));
  /* 12069791 mov ebp, esp */
  EBP = (ESP);
  /* 12069793 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069796 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206979a jne 0x120697ad */
  if (!C.zf) goto L_120697ad;
  /* 1206979c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206979f push eax */
  push32((uint32_t)(EAX));
  /* 120697a0 call 0x120695e0 */
  push32(0x120697a5u); f_120695e0();
  /* 120697a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120697a8 jmp 0x12069976 */
  goto L_12069976;
L_120697ad:;
  /* 120697ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120697b1 jne 0x120697c6 */
  if (!C.zf) goto L_120697c6;
  /* 120697b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120697b6 push ecx */
  push32((uint32_t)(ECX));
  /* 120697b7 call 0x12069980 */
  push32(0x120697bcu); f_12069980();
  /* 120697bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120697bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120697c1 jmp 0x12069976 */
  goto L_12069976;
L_120697c6:;
  /* 120697c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120697cd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120697d1 ja 0x12069949 */
  if ((!C.cf&&!C.zf)) goto L_12069949;
  /* 120697d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 120697d9 call 0x12069210 */
  push32(0x120697deu); f_12069210();
  /* 120697de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120697e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120697e4 push edx */
  push32((uint32_t)(EDX));
  /* 120697e5 call 0x12069b10 */
  push32(0x120697eau); f_12069b10();
  /* 120697ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120697ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120697f0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120697f4 je 0x1206990c */
  if (C.zf) goto L_1206990c;
  /* 120697fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120697fd cmp eax, dword ptr [0x1208fca4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1208fca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069803 ja 0x12069880 */
  if ((!C.cf&&!C.zf)) goto L_12069880;
  /* 12069805 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069808 push ecx */
  push32((uint32_t)(ECX));
  /* 12069809 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206980c push edx */
  push32((uint32_t)(EDX));
  /* 1206980d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12069810 push eax */
  push32((uint32_t)(EAX));
  /* 12069811 call 0x1206a9e0 */
  push32(0x12069816u); f_1206a9e0();
  /* 12069816 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206981b je 0x12069825 */
  if (C.zf) goto L_12069825;
  /* 1206981d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069820 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12069823 jmp 0x12069880 */
  goto L_12069880;
L_12069825:;
  /* 12069825 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069828 push edx */
  push32((uint32_t)(EDX));
  /* 12069829 call 0x1206a1a0 */
  push32(0x1206982eu); f_1206a1a0();
  /* 1206982e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069831 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12069834 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069838 je 0x12069880 */
  if (C.zf) goto L_12069880;
  /* 1206983a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206983d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12069840 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069843 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12069846 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069849 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206984c jae 0x12069856 */
  if (!C.cf) goto L_12069856;
  /* 1206984e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069851 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12069854 jmp 0x1206985c */
  goto L_1206985c;
L_12069856:;
  /* 12069856 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069859 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1206985c:;
  /* 1206985c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206985f push edx */
  push32((uint32_t)(EDX));
  /* 12069860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069863 push eax */
  push32((uint32_t)(EAX));
  /* 12069864 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069867 push ecx */
  push32((uint32_t)(ECX));
  /* 12069868 call 0x1206c0f0 */
  push32(0x1206986du); f_1206c0f0();
  /* 1206986d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069870 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069873 push edx */
  push32((uint32_t)(EDX));
  /* 12069874 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12069877 push eax */
  push32((uint32_t)(EAX));
  /* 12069878 call 0x12069bd0 */
  push32(0x1206987du); f_12069bd0();
  /* 1206987d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12069880:;
  /* 12069880 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069884 jne 0x12069900 */
  if (!C.zf) goto L_12069900;
  /* 12069886 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206988a jne 0x12069893 */
  if (!C.zf) goto L_12069893;
  /* 1206988c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12069893:;
  /* 12069893 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069896 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069899 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1206989c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1206989f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120698a2 push edx */
  push32((uint32_t)(EDX));
  /* 120698a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120698a5 mov eax, dword ptr [0x12092f6c] */
  EAX = (r32((uint32_t)(0x12092f6c)));
  /* 120698aa push eax */
  push32((uint32_t)(EAX));
  /* 120698ab call dword ptr [0x12094334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094334))), 0x120698b1u);
  /* 120698b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120698b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120698b8 je 0x12069900 */
  if (C.zf) goto L_12069900;
  /* 120698ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120698bd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 120698c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120698c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120698c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120698c9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120698cc jae 0x120698d6 */
  if (!C.cf) goto L_120698d6;
  /* 120698ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120698d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120698d4 jmp 0x120698dc */
  goto L_120698dc;
L_120698d6:;
  /* 120698d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120698d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_120698dc:;
  /* 120698dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120698df push eax */
  push32((uint32_t)(EAX));
  /* 120698e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120698e3 push ecx */
  push32((uint32_t)(ECX));
  /* 120698e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120698e7 push edx */
  push32((uint32_t)(EDX));
  /* 120698e8 call 0x1206c0f0 */
  push32(0x120698edu); f_1206c0f0();
  /* 120698ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120698f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120698f3 push eax */
  push32((uint32_t)(EAX));
  /* 120698f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120698f7 push ecx */
  push32((uint32_t)(ECX));
  /* 120698f8 call 0x12069bd0 */
  push32(0x120698fdu); f_12069bd0();
  /* 120698fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12069900:;
  /* 12069900 push 9 */
  push32((uint32_t)(0x9u));
  /* 12069902 call 0x120692b0 */
  push32(0x12069907u); f_120692b0();
  /* 12069907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206990a jmp 0x12069949 */
  goto L_12069949;
L_1206990c:;
  /* 1206990c push 9 */
  push32((uint32_t)(0x9u));
  /* 1206990e call 0x120692b0 */
  push32(0x12069913u); f_120692b0();
  /* 12069913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069916 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206991a jne 0x12069923 */
  if (!C.zf) goto L_12069923;
  /* 1206991c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12069923:;
  /* 12069923 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069926 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069929 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1206992c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1206992f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069932 push eax */
  push32((uint32_t)(EAX));
  /* 12069933 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069936 push ecx */
  push32((uint32_t)(ECX));
  /* 12069937 push 0 */
  push32((uint32_t)(0x0u));
  /* 12069939 mov edx, dword ptr [0x12092f6c] */
  EDX = (r32((uint32_t)(0x12092f6c)));
  /* 1206993f push edx */
  push32((uint32_t)(EDX));
  /* 12069940 call dword ptr [0x1209433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209433c))), 0x12069946u);
  /* 12069946 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12069949:;
  /* 12069949 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206994d jne 0x12069958 */
  if (!C.zf) goto L_12069958;
  /* 1206994f cmp dword ptr [0x120917a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069956 jne 0x1206995d */
  if (!C.zf) goto L_1206995d;
L_12069958:;
  /* 12069958 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206995b jmp 0x12069976 */
  goto L_12069976;
L_1206995d:;
  /* 1206995d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069960 push eax */
  push32((uint32_t)(EAX));
  /* 12069961 call 0x12069550 */
  push32(0x12069966u); f_12069550();
  /* 12069966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206996b jne 0x12069971 */
  if (!C.zf) goto L_12069971;
  /* 1206996d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206996f jmp 0x12069976 */
  goto L_12069976;
L_12069971:;
  /* 12069971 jmp 0x120697c6 */
  goto L_120697c6;
L_12069976:;
  /* 12069976 mov esp, ebp */
  ESP = (EBP);
  /* 12069978 pop ebp */
  EBP = (pop32());
  /* 12069979 ret  */
  ESPCHK(0x12069790u, _esp0);
  ESP += 4; return;
}

/* FUN_10009980 @ 0x12069980 (104 bytes, 38 insns) */
void f_12069980(void) {
  FTRACE(0x12069980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069980 push ebp */
  push32((uint32_t)(EBP));
  /* 12069981 mov ebp, esp */
  EBP = (ESP);
  /* 12069983 push ecx */
  push32((uint32_t)(ECX));
  /* 12069984 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069988 jne 0x1206998c */
  if (!C.zf) goto L_1206998c;
  /* 1206998a jmp 0x120699e4 */
  goto L_120699e4;
L_1206998c:;
  /* 1206998c push 9 */
  push32((uint32_t)(0x9u));
  /* 1206998e call 0x12069210 */
  push32(0x12069993u); f_12069210();
  /* 12069993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069999 push eax */
  push32((uint32_t)(EAX));
  /* 1206999a call 0x12069b10 */
  push32(0x1206999fu); f_12069b10();
  /* 1206999f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120699a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120699a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120699a9 je 0x120699c7 */
  if (C.zf) goto L_120699c7;
  /* 120699ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120699ae push ecx */
  push32((uint32_t)(ECX));
  /* 120699af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120699b2 push edx */
  push32((uint32_t)(EDX));
  /* 120699b3 call 0x12069bd0 */
  push32(0x120699b8u); f_12069bd0();
  /* 120699b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120699bb push 9 */
  push32((uint32_t)(0x9u));
  /* 120699bd call 0x120692b0 */
  push32(0x120699c2u); f_120692b0();
  /* 120699c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120699c5 jmp 0x120699e4 */
  goto L_120699e4;
L_120699c7:;
  /* 120699c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 120699c9 call 0x120692b0 */
  push32(0x120699ceu); f_120692b0();
  /* 120699ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120699d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120699d4 push eax */
  push32((uint32_t)(EAX));
  /* 120699d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120699d7 mov ecx, dword ptr [0x12092f6c] */
  ECX = (r32((uint32_t)(0x12092f6c)));
  /* 120699dd push ecx */
  push32((uint32_t)(ECX));
  /* 120699de call dword ptr [0x12094360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094360))), 0x120699e4u);
L_120699e4:;
  /* 120699e4 mov esp, ebp */
  ESP = (EBP);
  /* 120699e6 pop ebp */
  EBP = (pop32());
  /* 120699e7 ret  */
  ESPCHK(0x12069980u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f0 @ 0x120699f0 (116 bytes, 34 insns) */
void f_120699f0(void) {
  FTRACE(0x120699f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120699f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120699f1 mov ebp, esp */
  EBP = (ESP);
  /* 120699f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120699f4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 120699fb push 9 */
  push32((uint32_t)(0x9u));
  /* 120699fd call 0x12069210 */
  push32(0x12069a02u); f_12069210();
  /* 12069a02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069a05 call 0x1206b100 */
  push32(0x12069a0au); f_1206b100();
  /* 12069a0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12069a0c jge 0x12069a15 */
  if ((C.sf==C.of)) goto L_12069a15;
  /* 12069a0e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12069a15:;
  /* 12069a15 push 9 */
  push32((uint32_t)(0x9u));
  /* 12069a17 call 0x120692b0 */
  push32(0x12069a1cu); f_120692b0();
  /* 12069a1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12069a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12069a21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12069a23 mov eax, dword ptr [0x12092f6c] */
  EAX = (r32((uint32_t)(0x12092f6c)));
  /* 12069a28 push eax */
  push32((uint32_t)(EAX));
  /* 12069a29 call dword ptr [0x12094374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094374))), 0x12069a2fu);
  /* 12069a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12069a31 jne 0x12069a5d */
  if (!C.zf) goto L_12069a5d;
  /* 12069a33 call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x12069a39u);
  /* 12069a39 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069a3c jne 0x12069a56 */
  if (!C.zf) goto L_12069a56;
  /* 12069a3e call 0x1206d6f0 */
  push32(0x12069a43u); f_1206d6f0();
  /* 12069a43 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12069a49 call 0x1206d6e0 */
  push32(0x12069a4eu); f_1206d6e0();
  /* 12069a4e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12069a54 jmp 0x12069a5d */
  goto L_12069a5d;
L_12069a56:;
  /* 12069a56 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12069a5d:;
  /* 12069a5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069a60 mov esp, ebp */
  ESP = (EBP);
  /* 12069a62 pop ebp */
  EBP = (pop32());
  /* 12069a63 ret  */
  ESPCHK(0x120699f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a70 @ 0x12069a70 (10 bytes, 5 insns) */
void f_12069a70(void) {
  FTRACE(0x12069a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12069a71 mov ebp, esp */
  EBP = (ESP);
  /* 12069a73 call 0x120699f0 */
  push32(0x12069a78u); f_120699f0();
  /* 12069a78 pop ebp */
  EBP = (pop32());
  /* 12069a79 ret  */
  ESPCHK(0x12069a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a80 @ 0x12069a80 (10 bytes, 5 insns) */
void f_12069a80(void) {
  FTRACE(0x12069a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12069a81 mov ebp, esp */
  EBP = (ESP);
  /* 12069a83 mov eax, dword ptr [0x1208fca4] */
  EAX = (r32((uint32_t)(0x1208fca4)));
  /* 12069a88 pop ebp */
  EBP = (pop32());
  /* 12069a89 ret  */
  ESPCHK(0x12069a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a90 @ 0x12069a90 (31 bytes, 11 insns) */
void f_12069a90(void) {
  FTRACE(0x12069a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12069a91 mov ebp, esp */
  EBP = (ESP);
  /* 12069a93 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069a9a jbe 0x12069aa0 */
  if ((C.cf||C.zf)) goto L_12069aa0;
  /* 12069a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12069a9e jmp 0x12069aad */
  goto L_12069aad;
L_12069aa0:;
  /* 12069aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069aa3 mov dword ptr [0x1208fca4], eax */
  w32((uint32_t)(0x1208fca4), (EAX));
  /* 12069aa8 mov eax, 1 */
  EAX = (0x1u);
L_12069aad:;
  /* 12069aad pop ebp */
  EBP = (pop32());
  /* 12069aae ret  */
  ESPCHK(0x12069a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ab0 @ 0x12069ab0 (89 bytes, 20 insns) */
void f_12069ab0(void) {
  FTRACE(0x12069ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12069ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12069ab3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12069ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12069aba mov eax, dword ptr [0x12092f6c] */
  EAX = (r32((uint32_t)(0x12092f6c)));
  /* 12069abf push eax */
  push32((uint32_t)(EAX));
  /* 12069ac0 call dword ptr [0x12094334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094334))), 0x12069ac6u);
  /* 12069ac6 mov dword ptr [0x12092f68], eax */
  w32((uint32_t)(0x12092f68), (EAX));
  /* 12069acb cmp dword ptr [0x12092f68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12092f68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069ad2 jne 0x12069ad8 */
  if (!C.zf) goto L_12069ad8;
  /* 12069ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12069ad6 jmp 0x12069b07 */
  goto L_12069b07;
L_12069ad8:;
  /* 12069ad8 mov ecx, dword ptr [0x12092f68] */
  ECX = (r32((uint32_t)(0x12092f68)));
  /* 12069ade mov dword ptr [0x12092f5c], ecx */
  w32((uint32_t)(0x12092f5c), (ECX));
  /* 12069ae4 mov dword ptr [0x12092f60], 0 */
  w32((uint32_t)(0x12092f60), (0x0u));
  /* 12069aee mov dword ptr [0x12092f64], 0 */
  w32((uint32_t)(0x12092f64), (0x0u));
  /* 12069af8 mov dword ptr [0x12092f48], 0x10 */
  w32((uint32_t)(0x12092f48), (0x10u));
  /* 12069b02 mov eax, 1 */
  EAX = (0x1u);
L_12069b07:;
  /* 12069b07 pop ebp */
  EBP = (pop32());
  /* 12069b08 ret  */
  ESPCHK(0x12069ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x12069b10 (85 bytes, 29 insns) */
void f_12069b10(void) {
  FTRACE(0x12069b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12069b11 mov ebp, esp */
  EBP = (ESP);
  /* 12069b13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069b16 mov eax, dword ptr [0x12092f64] */
  EAX = (r32((uint32_t)(0x12092f64)));
  /* 12069b1b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12069b1e mov ecx, dword ptr [0x12092f68] */
  ECX = (r32((uint32_t)(0x12092f68)));
  /* 12069b24 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069b26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12069b29 mov edx, dword ptr [0x12092f68] */
  EDX = (r32((uint32_t)(0x12092f68)));
  /* 12069b2f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12069b32:;
  /* 12069b32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069b35 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069b38 jae 0x12069b5f */
  if (!C.cf) goto L_12069b5f;
  /* 12069b3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069b3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069b40 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069b43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12069b46 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069b4d jae 0x12069b54 */
  if (!C.cf) goto L_12069b54;
  /* 12069b4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069b52 jmp 0x12069b61 */
  goto L_12069b61;
L_12069b54:;
  /* 12069b54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069b57 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069b5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12069b5d jmp 0x12069b32 */
  goto L_12069b32;
L_12069b5f:;
  /* 12069b5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12069b61:;
  /* 12069b61 mov esp, ebp */
  ESP = (EBP);
  /* 12069b63 pop ebp */
  EBP = (pop32());
  /* 12069b64 ret  */
  ESPCHK(0x12069b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b70 @ 0x12069b70 (95 bytes, 33 insns) */
void f_12069b70(void) {
  FTRACE(0x12069b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12069b71 mov ebp, esp */
  EBP = (ESP);
  /* 12069b73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069b79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069b7c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069b7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12069b82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069b85 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12069b88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12069b8b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12069b90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069b93 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12069b95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069b98 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12069b9b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12069b9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12069b9f jne 0x12069bc1 */
  if (!C.zf) goto L_12069bc1;
  /* 12069ba1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069ba4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12069ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12069ba9 jne 0x12069bc1 */
  if (!C.zf) goto L_12069bc1;
  /* 12069bab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069bae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12069bb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12069bb6 je 0x12069bc1 */
  if (C.zf) goto L_12069bc1;
  /* 12069bb8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12069bbf jmp 0x12069bc8 */
  goto L_12069bc8;
L_12069bc1:;
  /* 12069bc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12069bc8:;
  /* 12069bc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12069bcb mov esp, ebp */
  ESP = (EBP);
  /* 12069bcd pop ebp */
  EBP = (pop32());
  /* 12069bce ret  */
  ESPCHK(0x12069b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x12069bd0 (1485 bytes, 453 insns) */
void f_12069bd0(void) {
  FTRACE(0x12069bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12069bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12069bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12069bd3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069bd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12069bdc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12069bdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069be2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069be5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069be8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12069beb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12069bee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12069bf1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12069bf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069bf7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12069bfd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069c00 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12069c07 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12069c0a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12069c0d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069c10 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12069c13 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069c16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12069c18 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069c1b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12069c1e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069c21 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069c24 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12069c27 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12069c2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12069c2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12069c2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069c32 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12069c35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12069c38 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12069c3b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12069c3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12069c40 jne 0x12069d68 */
  if (!C.zf) goto L_12069d68;
  /* 12069c46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12069c49 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12069c4c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069c4f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12069c52 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069c56 jbe 0x12069c5f */
  if ((C.cf||C.zf)) goto L_12069c5f;
  /* 12069c58 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12069c5f:;
  /* 12069c5f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12069c62 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12069c65 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12069c68 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069c6b jne 0x12069d41 */
  if (!C.zf) goto L_12069d41;
  /* 12069c71 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069c75 jae 0x12069cd6 */
  if (!C.cf) goto L_12069cd6;
  /* 12069c77 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12069c7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12069c7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12069c81 not eax */
  EAX = (~(EAX));
  /* 12069c83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069c86 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069c89 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12069c8d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12069c8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069c92 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069c95 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12069c99 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069c9c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069c9f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12069ca2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12069ca5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069ca8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069cab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12069cae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069cb1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069cb4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12069cb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12069cba jne 0x12069cd4 */
  if (!C.zf) goto L_12069cd4;
  /* 12069cbc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12069cc1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12069cc4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12069cc6 not eax */
  EAX = (~(EAX));
  /* 12069cc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069ccb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12069ccd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12069ccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069cd2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12069cd4:;
  /* 12069cd4 jmp 0x12069d41 */
  goto L_12069d41;
L_12069cd6:;
  /* 12069cd6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12069cd9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069cdc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12069ce1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12069ce3 not edx */
  EDX = (~(EDX));
  /* 12069ce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069ce8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069ceb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12069cf2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12069cf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069cf7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069cfa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12069d01 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069d04 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069d07 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12069d0a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12069d0d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069d10 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069d13 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12069d16 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069d19 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069d1c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12069d20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12069d22 jne 0x12069d41 */
  if (!C.zf) goto L_12069d41;
  /* 12069d24 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12069d27 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069d2a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12069d2f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12069d31 not edx */
  EDX = (~(EDX));
  /* 12069d33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069d36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12069d39 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12069d3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069d3e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12069d41:;
  /* 12069d41 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12069d44 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12069d47 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12069d4a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12069d4d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12069d50 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12069d53 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12069d56 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12069d59 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12069d5c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12069d5f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12069d62 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069d65 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12069d68:;
  /* 12069d68 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12069d6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12069d6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069d71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12069d74 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069d78 jbe 0x12069d81 */
  if ((C.cf||C.zf)) goto L_12069d81;
  /* 12069d7a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12069d81:;
  /* 12069d81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12069d84 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12069d87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12069d89 jne 0x12069ee5 */
  if (!C.zf) goto L_12069ee5;
  /* 12069d8f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069d92 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069d95 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12069d98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12069d9b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12069d9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069da1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12069da4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069da8 jbe 0x12069db1 */
  if ((C.cf||C.zf)) goto L_12069db1;
  /* 12069daa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12069db1:;
  /* 12069db1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12069db4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069db7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12069dba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12069dbd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12069dc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069dc3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12069dc6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069dca jbe 0x12069dd3 */
  if ((C.cf||C.zf)) goto L_12069dd3;
  /* 12069dcc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12069dd3:;
  /* 12069dd3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12069dd6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069dd9 je 0x12069edf */
  if (C.zf) goto L_12069edf;
  /* 12069ddf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12069de2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12069de5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12069de8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069deb jne 0x12069ec1 */
  if (!C.zf) goto L_12069ec1;
  /* 12069df1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069df5 jae 0x12069e56 */
  if (!C.cf) goto L_12069e56;
  /* 12069df7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12069dfc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12069dff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12069e01 not edx */
  EDX = (~(EDX));
  /* 12069e03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069e06 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e09 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12069e0d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12069e0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069e12 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e15 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12069e19 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e1c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069e1f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12069e22 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12069e25 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e28 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069e2b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12069e2e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e31 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069e34 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12069e38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12069e3a jne 0x12069e54 */
  if (!C.zf) goto L_12069e54;
  /* 12069e3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12069e41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12069e44 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12069e46 not edx */
  EDX = (~(EDX));
  /* 12069e48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069e4b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12069e4d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12069e4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069e52 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12069e54:;
  /* 12069e54 jmp 0x12069ec1 */
  goto L_12069ec1;
L_12069e56:;
  /* 12069e56 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12069e59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069e5c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12069e61 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12069e63 not eax */
  EAX = (~(EAX));
  /* 12069e65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069e68 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e6b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12069e72 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12069e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069e77 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e7a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12069e81 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e84 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069e87 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12069e8a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12069e8d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e90 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069e93 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12069e96 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069e99 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069e9c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12069ea0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12069ea2 jne 0x12069ec1 */
  if (!C.zf) goto L_12069ec1;
  /* 12069ea4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12069ea7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069eaa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12069eaf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12069eb1 not eax */
  EAX = (~(EAX));
  /* 12069eb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069eb6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12069eb9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12069ebb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069ebe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12069ec1:;
  /* 12069ec1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12069ec4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12069ec7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12069eca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12069ecd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12069ed0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12069ed3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12069ed6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12069ed9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12069edc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12069edf:;
  /* 12069edf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12069ee2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12069ee5:;
  /* 12069ee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12069ee8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12069eeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12069eed jne 0x12069efb */
  if (!C.zf) goto L_12069efb;
  /* 12069eef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12069ef2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069ef5 je 0x1206a00b */
  if (C.zf) goto L_1206a00b;
L_12069efb:;
  /* 12069efb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12069efe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12069f01 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12069f04 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12069f07 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069f0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12069f0d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12069f10 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12069f13 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069f16 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12069f19 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12069f1c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12069f1f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069f22 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12069f25 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069f28 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12069f2b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069f2e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12069f31 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069f34 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12069f37 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12069f3a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069f3d jne 0x1206a00b */
  if (!C.zf) goto L_1206a00b;
  /* 12069f43 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12069f47 jae 0x12069fa4 */
  if (!C.cf) goto L_12069fa4;
  /* 12069f49 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069f4c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069f4f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12069f53 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069f56 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069f59 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12069f5c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12069f5f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069f62 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069f65 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12069f68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12069f6a jne 0x12069f82 */
  if (!C.zf) goto L_12069f82;
  /* 12069f6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12069f71 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12069f74 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12069f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069f79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12069f7b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12069f7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069f80 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12069f82:;
  /* 12069f82 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12069f87 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12069f8a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12069f8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069f8f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069f92 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12069f96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12069f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069f9b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069f9e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12069fa2 jmp 0x1206a00b */
  goto L_1206a00b;
L_12069fa4:;
  /* 12069fa4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069fa7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069faa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12069fae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069fb1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069fb4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12069fb7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12069fba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069fbd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12069fc0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12069fc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12069fc5 jne 0x12069fe2 */
  if (!C.zf) goto L_12069fe2;
  /* 12069fc7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12069fca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069fcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12069fd2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12069fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069fd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12069fda or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12069fdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12069fdf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12069fe2:;
  /* 12069fe2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12069fe5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12069fe8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12069fed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12069fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12069ff2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12069ff5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12069ffc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12069ffe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a001 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1206a004 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1206a00b:;
  /* 1206a00b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206a00e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a011 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1206a013 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206a016 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a019 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a01c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1206a01f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206a022 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206a024 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a027 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206a02a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1206a02c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206a02f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a032 jne 0x1206a199 */
  if (!C.zf) goto L_1206a199;
  /* 1206a038 cmp dword ptr [0x12092f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12092f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a03f je 0x1206a188 */
  if (C.zf) goto L_1206a188;
  /* 1206a045 mov eax, dword ptr [0x12092f58] */
  EAX = (r32((uint32_t)(0x12092f58)));
  /* 1206a04a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1206a04d mov ecx, dword ptr [0x12092f60] */
  ECX = (r32((uint32_t)(0x12092f60)));
  /* 1206a053 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206a056 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a058 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1206a05b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1206a060 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1206a065 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a068 push eax */
  push32((uint32_t)(EAX));
  /* 1206a069 call dword ptr [0x12094350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094350))), 0x1206a06fu);
  /* 1206a06f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206a074 mov ecx, dword ptr [0x12092f58] */
  ECX = (r32((uint32_t)(0x12092f58)));
  /* 1206a07a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206a07c mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206a081 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206a084 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1206a086 mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206a08c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1206a08f mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206a094 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206a097 mov edx, dword ptr [0x12092f58] */
  EDX = (r32((uint32_t)(0x12092f58)));
  /* 1206a09d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1206a0a8 mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206a0ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206a0b0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1206a0b3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1206a0b6 mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206a0bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206a0be mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1206a0c1 mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206a0c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206a0ca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1206a0ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206a0d0 jne 0x1206a0e6 */
  if (!C.zf) goto L_1206a0e6;
  /* 1206a0d2 mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206a0d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1206a0db and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1206a0dd mov ecx, dword ptr [0x12092f60] */
  ECX = (r32((uint32_t)(0x12092f60)));
  /* 1206a0e3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1206a0e6:;
  /* 1206a0e6 mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206a0ec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a0f0 jne 0x1206a188 */
  if (!C.zf) goto L_1206a188;
  /* 1206a0f6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1206a0fb push 0 */
  push32((uint32_t)(0x0u));
  /* 1206a0fd mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206a102 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206a105 push ecx */
  push32((uint32_t)(ECX));
  /* 1206a106 call dword ptr [0x12094350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094350))), 0x1206a10cu);
  /* 1206a10c mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206a112 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206a115 push eax */
  push32((uint32_t)(EAX));
  /* 1206a116 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206a118 mov ecx, dword ptr [0x12092f6c] */
  ECX = (r32((uint32_t)(0x12092f6c)));
  /* 1206a11e push ecx */
  push32((uint32_t)(ECX));
  /* 1206a11f call dword ptr [0x12094360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094360))), 0x1206a125u);
  /* 1206a125 mov edx, dword ptr [0x12092f64] */
  EDX = (r32((uint32_t)(0x12092f64)));
  /* 1206a12b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206a12e mov eax, dword ptr [0x12092f68] */
  EAX = (r32((uint32_t)(0x12092f68)));
  /* 1206a133 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a135 mov ecx, dword ptr [0x12092f60] */
  ECX = (r32((uint32_t)(0x12092f60)));
  /* 1206a13b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a13e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a140 push eax */
  push32((uint32_t)(EAX));
  /* 1206a141 mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206a147 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a14a push edx */
  push32((uint32_t)(EDX));
  /* 1206a14b mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206a150 push eax */
  push32((uint32_t)(EAX));
  /* 1206a151 call 0x1206d700 */
  push32(0x1206a156u); f_1206d700();
  /* 1206a156 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a159 mov ecx, dword ptr [0x12092f64] */
  ECX = (r32((uint32_t)(0x12092f64)));
  /* 1206a15f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a162 mov dword ptr [0x12092f64], ecx */
  w32((uint32_t)(0x12092f64), (ECX));
  /* 1206a168 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a16b cmp edx, dword ptr [0x12092f60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12092f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a171 jbe 0x1206a17c */
  if ((C.cf||C.zf)) goto L_1206a17c;
  /* 1206a173 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a176 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a179 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1206a17c:;
  /* 1206a17c mov ecx, dword ptr [0x12092f68] */
  ECX = (r32((uint32_t)(0x12092f68)));
  /* 1206a182 mov dword ptr [0x12092f5c], ecx */
  w32((uint32_t)(0x12092f5c), (ECX));
L_1206a188:;
  /* 1206a188 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a18b mov dword ptr [0x12092f60], edx */
  w32((uint32_t)(0x12092f60), (EDX));
  /* 1206a191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a194 mov dword ptr [0x12092f58], eax */
  w32((uint32_t)(0x12092f58), (EAX));
L_1206a199:;
  /* 1206a199 mov esp, ebp */
  ESP = (EBP);
  /* 1206a19b pop ebp */
  EBP = (pop32());
  /* 1206a19c ret  */
  ESPCHK(0x12069bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a0 @ 0x1206a1a0 (1334 bytes, 427 insns) */
void f_1206a1a0(void) {
  FTRACE(0x1206a1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206a1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206a1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1206a1a3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a1a6 push esi */
  push32((uint32_t)(ESI));
  /* 1206a1a7 mov eax, dword ptr [0x12092f64] */
  EAX = (r32((uint32_t)(0x12092f64)));
  /* 1206a1ac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206a1af mov ecx, dword ptr [0x12092f68] */
  ECX = (r32((uint32_t)(0x12092f68)));
  /* 1206a1b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a1b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1206a1ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a1bd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a1c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1206a1c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1206a1c6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206a1c9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1206a1cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a1cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1206a1d2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a1d6 jge 0x1206a1ec */
  if ((C.sf==C.of)) goto L_1206a1ec;
  /* 1206a1d8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1206a1db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a1de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206a1e0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1206a1e3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1206a1ea jmp 0x1206a201 */
  goto L_1206a201;
L_1206a1ec:;
  /* 1206a1ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1206a1f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a1f6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a1f9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206a1fc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206a1fe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1206a201:;
  /* 1206a201 mov ecx, dword ptr [0x12092f5c] */
  ECX = (r32((uint32_t)(0x12092f5c)));
  /* 1206a207 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1206a20a:;
  /* 1206a20a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a20d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a210 jae 0x1206a236 */
  if (!C.cf) goto L_1206a236;
  /* 1206a212 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a215 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206a218 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1206a21a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a21d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1206a220 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1206a223 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1206a225 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206a227 je 0x1206a22b */
  if (C.zf) goto L_1206a22b;
  /* 1206a229 jmp 0x1206a236 */
  goto L_1206a236;
L_1206a22b:;
  /* 1206a22b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a22e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a231 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1206a234 jmp 0x1206a20a */
  goto L_1206a20a;
L_1206a236:;
  /* 1206a236 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a239 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a23c jne 0x1206a31d */
  if (!C.zf) goto L_1206a31d;
  /* 1206a242 mov eax, dword ptr [0x12092f68] */
  EAX = (r32((uint32_t)(0x12092f68)));
  /* 1206a247 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1206a24a:;
  /* 1206a24a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a24d cmp ecx, dword ptr [0x12092f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12092f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a253 jae 0x1206a279 */
  if (!C.cf) goto L_1206a279;
  /* 1206a255 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a258 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206a25b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1206a25d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a260 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1206a263 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1206a266 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206a268 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206a26a je 0x1206a26e */
  if (C.zf) goto L_1206a26e;
  /* 1206a26c jmp 0x1206a279 */
  goto L_1206a279;
L_1206a26e:;
  /* 1206a26e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a271 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a274 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1206a277 jmp 0x1206a24a */
  goto L_1206a24a;
L_1206a279:;
  /* 1206a279 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a27c cmp ecx, dword ptr [0x12092f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12092f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a282 jne 0x1206a31d */
  if (!C.zf) goto L_1206a31d;
L_1206a288:;
  /* 1206a288 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a28b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a28e jae 0x1206a2a6 */
  if (!C.cf) goto L_1206a2a6;
  /* 1206a290 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a293 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a297 je 0x1206a29b */
  if (C.zf) goto L_1206a29b;
  /* 1206a299 jmp 0x1206a2a6 */
  goto L_1206a2a6;
L_1206a29b:;
  /* 1206a29b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a29e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a2a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1206a2a4 jmp 0x1206a288 */
  goto L_1206a288;
L_1206a2a6:;
  /* 1206a2a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a2a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a2ac jne 0x1206a2f7 */
  if (!C.zf) goto L_1206a2f7;
  /* 1206a2ae mov eax, dword ptr [0x12092f68] */
  EAX = (r32((uint32_t)(0x12092f68)));
  /* 1206a2b3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1206a2b6:;
  /* 1206a2b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a2b9 cmp ecx, dword ptr [0x12092f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12092f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a2bf jae 0x1206a2d7 */
  if (!C.cf) goto L_1206a2d7;
  /* 1206a2c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a2c4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a2c8 je 0x1206a2cc */
  if (C.zf) goto L_1206a2cc;
  /* 1206a2ca jmp 0x1206a2d7 */
  goto L_1206a2d7;
L_1206a2cc:;
  /* 1206a2cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a2cf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a2d2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1206a2d5 jmp 0x1206a2b6 */
  goto L_1206a2b6;
L_1206a2d7:;
  /* 1206a2d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a2da cmp ecx, dword ptr [0x12092f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12092f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a2e0 jne 0x1206a2f7 */
  if (!C.zf) goto L_1206a2f7;
  /* 1206a2e2 call 0x1206a6e0 */
  push32(0x1206a2e7u); f_1206a6e0();
  /* 1206a2e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1206a2ea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a2ee jne 0x1206a2f7 */
  if (!C.zf) goto L_1206a2f7;
  /* 1206a2f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206a2f2 jmp 0x1206a6d1 */
  goto L_1206a6d1;
L_1206a2f7:;
  /* 1206a2f7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a2fa push edx */
  push32((uint32_t)(EDX));
  /* 1206a2fb call 0x1206a7f0 */
  push32(0x1206a300u); f_1206a7f0();
  /* 1206a300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a303 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a306 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1206a309 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1206a30b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a30e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206a311 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a314 jne 0x1206a31d */
  if (!C.zf) goto L_1206a31d;
  /* 1206a316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206a318 jmp 0x1206a6d1 */
  goto L_1206a6d1;
L_1206a31d:;
  /* 1206a31d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a320 mov dword ptr [0x12092f5c], edx */
  w32((uint32_t)(0x12092f5c), (EDX));
  /* 1206a326 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a329 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206a32c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1206a32f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a332 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206a334 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1206a337 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a33b je 0x1206a360 */
  if (C.zf) goto L_1206a360;
  /* 1206a33d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a340 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a343 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206a346 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1206a34a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a34d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a350 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1206a353 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1206a35a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1206a35c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206a35e jne 0x1206a395 */
  if (!C.zf) goto L_1206a395;
L_1206a360:;
  /* 1206a360 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1206a367:;
  /* 1206a367 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a36a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a36d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206a370 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1206a374 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a377 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a37a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1206a37d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1206a384 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1206a386 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206a388 jne 0x1206a395 */
  if (!C.zf) goto L_1206a395;
  /* 1206a38a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a38d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a390 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1206a393 jmp 0x1206a367 */
  goto L_1206a367;
L_1206a395:;
  /* 1206a395 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a398 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206a39e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a3a1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1206a3a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206a3ab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1206a3b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a3b5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a3b8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206a3bb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1206a3bf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1206a3c2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a3c6 jne 0x1206a3e2 */
  if (!C.zf) goto L_1206a3e2;
  /* 1206a3c8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1206a3cf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a3d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a3d5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1206a3d8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1206a3df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1206a3e2:;
  /* 1206a3e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a3e6 jl 0x1206a3fb */
  if ((C.sf!=C.of)) goto L_1206a3fb;
  /* 1206a3e8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206a3eb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1206a3ed mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1206a3f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a3f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a3f6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1206a3f9 jmp 0x1206a3e2 */
  goto L_1206a3e2;
L_1206a3fb:;
  /* 1206a3fb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a3fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a401 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1206a405 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1206a408 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a40b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206a40d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a410 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206a413 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206a416 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1206a419 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a41c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1206a41f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a423 jle 0x1206a42c */
  if ((C.zf||C.sf!=C.of)) goto L_1206a42c;
  /* 1206a425 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1206a42c:;
  /* 1206a42c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a42f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a432 je 0x1206a650 */
  if (C.zf) goto L_1206a650;
  /* 1206a438 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a43b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a43e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206a441 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a444 jne 0x1206a51a */
  if (!C.zf) goto L_1206a51a;
  /* 1206a44a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a44e jge 0x1206a4af */
  if ((C.sf==C.of)) goto L_1206a4af;
  /* 1206a450 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206a455 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a458 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206a45a not eax */
  EAX = (~(EAX));
  /* 1206a45c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a45f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a462 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1206a466 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1206a468 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a46b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a46e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1206a472 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a475 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a478 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1206a47b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1206a47e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a481 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a484 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1206a487 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a48a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a48d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1206a491 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206a493 jne 0x1206a4ad */
  if (!C.zf) goto L_1206a4ad;
  /* 1206a495 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206a49a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a49d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206a49f not eax */
  EAX = (~(EAX));
  /* 1206a4a1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a4a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206a4a6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1206a4a8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a4ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1206a4ad:;
  /* 1206a4ad jmp 0x1206a51a */
  goto L_1206a51a;
L_1206a4af:;
  /* 1206a4af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a4b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a4b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206a4ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206a4bc not edx */
  EDX = (~(EDX));
  /* 1206a4be mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a4c1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a4c4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1206a4cb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206a4cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a4d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a4d3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1206a4da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a4dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a4e0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1206a4e3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1206a4e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a4e9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a4ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1206a4ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a4f2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a4f5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1206a4f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206a4fb jne 0x1206a51a */
  if (!C.zf) goto L_1206a51a;
  /* 1206a4fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a500 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a503 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206a508 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206a50a not edx */
  EDX = (~(EDX));
  /* 1206a50c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a50f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206a512 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1206a514 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a517 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1206a51a:;
  /* 1206a51a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a51d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206a520 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a523 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1206a526 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1206a529 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a52c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206a52f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a532 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206a535 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1206a538 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a53c je 0x1206a650 */
  if (C.zf) goto L_1206a650;
  /* 1206a542 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a545 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a548 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1206a54b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1206a54e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a551 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206a554 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206a557 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1206a55a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a55d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206a560 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1206a563 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206a566 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a569 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1206a56c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a56f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206a572 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a575 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1206a578 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a57b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a57e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206a581 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a584 jne 0x1206a650 */
  if (!C.zf) goto L_1206a650;
  /* 1206a58a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a58e jge 0x1206a5ea */
  if ((C.sf==C.of)) goto L_1206a5ea;
  /* 1206a590 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a593 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a596 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1206a59a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a59d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a5a0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1206a5a3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206a5a5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a5a8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a5ab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1206a5ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206a5b0 jne 0x1206a5c8 */
  if (!C.zf) goto L_1206a5c8;
  /* 1206a5b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206a5b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a5ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206a5bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a5bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206a5c1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1206a5c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a5c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1206a5c8:;
  /* 1206a5c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206a5cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a5d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206a5d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a5d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a5d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1206a5dc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206a5de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a5e1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a5e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1206a5e8 jmp 0x1206a650 */
  goto L_1206a650;
L_1206a5ea:;
  /* 1206a5ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a5ed add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a5f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1206a5f4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a5f7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a5fa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1206a5fd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206a5ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a602 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a605 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1206a608 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206a60a jne 0x1206a627 */
  if (!C.zf) goto L_1206a627;
  /* 1206a60c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a60f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a612 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206a617 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206a619 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a61c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206a61f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1206a621 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a624 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1206a627:;
  /* 1206a627 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a62a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a62d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206a632 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206a634 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a637 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a63a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1206a641 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206a643 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a646 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a649 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1206a650:;
  /* 1206a650 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a654 je 0x1206a66a */
  if (C.zf) goto L_1206a66a;
  /* 1206a656 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206a65c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1206a65e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a661 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a664 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206a667 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1206a66a:;
  /* 1206a66a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a66d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a670 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1206a673 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206a676 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a679 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a67c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1206a67e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206a681 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a684 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a687 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a68a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1206a68d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a690 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206a692 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a695 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206a697 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a69a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a69d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1206a69f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206a6a1 jne 0x1206a6c3 */
  if (!C.zf) goto L_1206a6c3;
  /* 1206a6a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a6a6 cmp eax, dword ptr [0x12092f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12092f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a6ac jne 0x1206a6c3 */
  if (!C.zf) goto L_1206a6c3;
  /* 1206a6ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a6b1 cmp ecx, dword ptr [0x12092f58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12092f58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a6b7 jne 0x1206a6c3 */
  if (!C.zf) goto L_1206a6c3;
  /* 1206a6b9 mov dword ptr [0x12092f60], 0 */
  w32((uint32_t)(0x12092f60), (0x0u));
L_1206a6c3:;
  /* 1206a6c3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1206a6c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206a6c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1206a6cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a6ce add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1206a6d1:;
  /* 1206a6d1 pop esi */
  ESI = (pop32());
  /* 1206a6d2 mov esp, ebp */
  ESP = (EBP);
  /* 1206a6d4 pop ebp */
  EBP = (pop32());
  /* 1206a6d5 ret  */
  ESPCHK(0x1206a1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6e0 @ 0x1206a6e0 (271 bytes, 78 insns) */
void f_1206a6e0(void) {
  FTRACE(0x1206a6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206a6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206a6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1206a6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206a6e4 mov eax, dword ptr [0x12092f64] */
  EAX = (r32((uint32_t)(0x12092f64)));
  /* 1206a6e9 cmp eax, dword ptr [0x12092f48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12092f48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a6ef jne 0x1206a73b */
  if (!C.zf) goto L_1206a73b;
  /* 1206a6f1 mov ecx, dword ptr [0x12092f48] */
  ECX = (r32((uint32_t)(0x12092f48)));
  /* 1206a6f7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a6fa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206a6fd push ecx */
  push32((uint32_t)(ECX));
  /* 1206a6fe mov edx, dword ptr [0x12092f68] */
  EDX = (r32((uint32_t)(0x12092f68)));
  /* 1206a704 push edx */
  push32((uint32_t)(EDX));
  /* 1206a705 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206a707 mov eax, dword ptr [0x12092f6c] */
  EAX = (r32((uint32_t)(0x12092f6c)));
  /* 1206a70c push eax */
  push32((uint32_t)(EAX));
  /* 1206a70d call dword ptr [0x1209433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209433c))), 0x1206a713u);
  /* 1206a713 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206a716 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a71a jne 0x1206a723 */
  if (!C.zf) goto L_1206a723;
  /* 1206a71c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206a71e jmp 0x1206a7eb */
  goto L_1206a7eb;
L_1206a723:;
  /* 1206a723 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a726 mov dword ptr [0x12092f68], ecx */
  w32((uint32_t)(0x12092f68), (ECX));
  /* 1206a72c mov edx, dword ptr [0x12092f48] */
  EDX = (r32((uint32_t)(0x12092f48)));
  /* 1206a732 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a735 mov dword ptr [0x12092f48], edx */
  w32((uint32_t)(0x12092f48), (EDX));
L_1206a73b:;
  /* 1206a73b mov eax, dword ptr [0x12092f64] */
  EAX = (r32((uint32_t)(0x12092f64)));
  /* 1206a740 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206a743 mov ecx, dword ptr [0x12092f68] */
  ECX = (r32((uint32_t)(0x12092f68)));
  /* 1206a749 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a74b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206a74e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1206a753 push 8 */
  push32((uint32_t)(0x8u));
  /* 1206a755 mov edx, dword ptr [0x12092f6c] */
  EDX = (r32((uint32_t)(0x12092f6c)));
  /* 1206a75b push edx */
  push32((uint32_t)(EDX));
  /* 1206a75c call dword ptr [0x12094334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094334))), 0x1206a762u);
  /* 1206a762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a765 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1206a768 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a76b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a76f jne 0x1206a775 */
  if (!C.zf) goto L_1206a775;
  /* 1206a771 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206a773 jmp 0x1206a7eb */
  goto L_1206a7eb;
L_1206a775:;
  /* 1206a775 push 4 */
  push32((uint32_t)(0x4u));
  /* 1206a777 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1206a77c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1206a781 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206a783 call dword ptr [0x1209432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209432c))), 0x1206a789u);
  /* 1206a789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a78c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1206a78f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a792 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a796 jne 0x1206a7b2 */
  if (!C.zf) goto L_1206a7b2;
  /* 1206a798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a79b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206a79e push ecx */
  push32((uint32_t)(ECX));
  /* 1206a79f push 0 */
  push32((uint32_t)(0x0u));
  /* 1206a7a1 mov edx, dword ptr [0x12092f6c] */
  EDX = (r32((uint32_t)(0x12092f6c)));
  /* 1206a7a7 push edx */
  push32((uint32_t)(EDX));
  /* 1206a7a8 call dword ptr [0x12094360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094360))), 0x1206a7aeu);
  /* 1206a7ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206a7b0 jmp 0x1206a7eb */
  goto L_1206a7eb;
L_1206a7b2:;
  /* 1206a7b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a7b5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1206a7bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a7be mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1206a7c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a7c8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1206a7cf mov eax, dword ptr [0x12092f64] */
  EAX = (r32((uint32_t)(0x12092f64)));
  /* 1206a7d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a7d7 mov dword ptr [0x12092f64], eax */
  w32((uint32_t)(0x12092f64), (EAX));
  /* 1206a7dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a7df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1206a7e2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1206a7e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1206a7eb:;
  /* 1206a7eb mov esp, ebp */
  ESP = (EBP);
  /* 1206a7ed pop ebp */
  EBP = (pop32());
  /* 1206a7ee ret  */
  ESPCHK(0x1206a6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7f0 @ 0x1206a7f0 (494 bytes, 149 insns) */
void f_1206a7f0(void) {
  FTRACE(0x1206a7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206a7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206a7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1206a7f3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a7f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a7f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206a7fc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1206a7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a802 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1206a805 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206a808 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1206a80f:;
  /* 1206a80f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a813 jl 0x1206a828 */
  if ((C.sf!=C.of)) goto L_1206a828;
  /* 1206a815 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206a818 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1206a81a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1206a81d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206a820 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a823 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1206a826 jmp 0x1206a80f */
  goto L_1206a80f;
L_1206a828:;
  /* 1206a828 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206a82b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206a831 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206a834 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1206a83b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1206a83e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1206a845 jmp 0x1206a850 */
  goto L_1206a850;
L_1206a847:;
  /* 1206a847 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a84a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a84d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1206a850:;
  /* 1206a850 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a854 jge 0x1206a876 */
  if ((C.sf==C.of)) goto L_1206a876;
  /* 1206a856 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206a859 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206a85c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1206a85f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1206a862 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a865 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a868 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1206a86b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a86e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a871 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1206a874 jmp 0x1206a847 */
  goto L_1206a847;
L_1206a876:;
  /* 1206a876 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206a879 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1206a87c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a87f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206a882 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a884 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1206a887 push 4 */
  push32((uint32_t)(0x4u));
  /* 1206a889 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1206a88e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1206a893 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a896 push edx */
  push32((uint32_t)(EDX));
  /* 1206a897 call dword ptr [0x1209432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209432c))), 0x1206a89du);
  /* 1206a89d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206a89f jne 0x1206a8a9 */
  if (!C.zf) goto L_1206a8a9;
  /* 1206a8a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206a8a4 jmp 0x1206a9da */
  goto L_1206a9da;
L_1206a8a9:;
  /* 1206a8a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a8ac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a8b1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1206a8b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a8b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206a8ba jmp 0x1206a8c8 */
  goto L_1206a8c8;
L_1206a8bc:;
  /* 1206a8bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a8bf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a8c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206a8c8:;
  /* 1206a8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a8cb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206a8ce ja 0x1206a92d */
  if ((!C.cf&&!C.zf)) goto L_1206a92d;
  /* 1206a8d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a8d3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1206a8da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a8dd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1206a8e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206a8ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a8ed mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1206a8f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a8f3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1206a8f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a8fc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a902 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a905 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1206a908 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a90b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a911 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a914 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1206a917 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a91a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a91f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1206a922 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206a925 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1206a92b jmp 0x1206a8bc */
  goto L_1206a8bc;
L_1206a92d:;
  /* 1206a92d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206a930 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a936 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1206a939 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206a93c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a93f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a942 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1206a945 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a948 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1206a94b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1206a94e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a951 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a954 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1206a957 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206a95a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a95d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a960 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1206a963 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a966 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1206a969 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1206a96c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206a96f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206a972 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1206a975 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206a978 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206a97b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1206a983 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206a986 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206a989 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1206a994 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206a997 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1206a99b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206a99e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1206a9a1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206a9a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206a9a7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1206a9aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206a9ac jne 0x1206a9bd */
  if (!C.zf) goto L_1206a9bd;
  /* 1206a9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a9b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206a9b4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1206a9b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a9ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1206a9bd:;
  /* 1206a9bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206a9c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206a9c5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206a9c7 not edx */
  EDX = (~(EDX));
  /* 1206a9c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a9cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206a9cf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1206a9d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a9d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1206a9d7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1206a9da:;
  /* 1206a9da mov esp, ebp */
  ESP = (EBP);
  /* 1206a9dc pop ebp */
  EBP = (pop32());
  /* 1206a9dd ret  */
  ESPCHK(0x1206a7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9e0 @ 0x1206a9e0 (1515 bytes, 489 insns) */
void f_1206a9e0(void) {
  FTRACE(0x1206a9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206a9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206a9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1206a9e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206a9e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206a9e9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206a9ec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1206a9ee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1206a9f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a9f4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1206a9f7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1206a9fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206a9fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206aa00 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206aa03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1206aa06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206aa09 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1206aa0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206aa0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206aa12 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206aa18 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206aa1b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1206aa22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1206aa25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206aa28 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206aa2b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1206aa2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aa31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206aa33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206aa36 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1206aa39 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aa3c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aa3f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1206aa42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206aa45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206aa47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1206aa4a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206aa4d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206aa50 jle 0x1206ad06 */
  if ((C.zf||C.sf!=C.of)) goto L_1206ad06;
  /* 1206aa56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206aa59 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1206aa5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206aa5e jne 0x1206aa6b */
  if (!C.zf) goto L_1206aa6b;
  /* 1206aa60 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206aa63 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aa66 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206aa69 jle 0x1206aa72 */
  if ((C.zf||C.sf!=C.of)) goto L_1206aa72;
L_1206aa6b:;
  /* 1206aa6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206aa6d jmp 0x1206afc7 */
  goto L_1206afc7;
L_1206aa72:;
  /* 1206aa72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206aa75 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1206aa78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206aa7b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1206aa7e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206aa82 jbe 0x1206aa8b */
  if ((C.cf||C.zf)) goto L_1206aa8b;
  /* 1206aa84 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1206aa8b:;
  /* 1206aa8b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206aa8e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206aa91 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206aa94 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206aa97 jne 0x1206ab6d */
  if (!C.zf) goto L_1206ab6d;
  /* 1206aa9d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206aaa1 jae 0x1206ab02 */
  if (!C.cf) goto L_1206ab02;
  /* 1206aaa3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206aaa8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206aaab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206aaad not edx */
  EDX = (~(EDX));
  /* 1206aaaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206aab2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206aab5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1206aab9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206aabb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206aabe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206aac1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1206aac5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206aac8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aacb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1206aace sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1206aad1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206aad4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aad7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1206aada mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206aadd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aae0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1206aae4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206aae6 jne 0x1206ab00 */
  if (!C.zf) goto L_1206ab00;
  /* 1206aae8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206aaed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206aaf0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206aaf2 not edx */
  EDX = (~(EDX));
  /* 1206aaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206aaf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206aaf9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1206aafb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206aafe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1206ab00:;
  /* 1206ab00 jmp 0x1206ab6d */
  goto L_1206ab6d;
L_1206ab02:;
  /* 1206ab02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ab05 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ab08 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206ab0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206ab0f not eax */
  EAX = (~(EAX));
  /* 1206ab11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ab14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ab17 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1206ab1e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1206ab20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ab23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ab26 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1206ab2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ab30 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ab33 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1206ab36 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1206ab39 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ab3c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ab3f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1206ab42 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ab45 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ab48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1206ab4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206ab4e jne 0x1206ab6d */
  if (!C.zf) goto L_1206ab6d;
  /* 1206ab50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ab53 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ab56 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206ab5b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206ab5d not eax */
  EAX = (~(EAX));
  /* 1206ab5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ab62 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206ab65 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1206ab67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ab6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1206ab6d:;
  /* 1206ab6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ab70 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1206ab73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ab76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206ab79 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1206ab7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ab7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1206ab82 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ab85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1206ab88 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1206ab8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206ab8e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ab91 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ab94 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1206ab97 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ab9b jle 0x1206ace7 */
  if ((C.zf||C.sf!=C.of)) goto L_1206ace7;
  /* 1206aba1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aba4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aba7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1206abaa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206abad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1206abb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206abb3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1206abb6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206abba jbe 0x1206abc3 */
  if ((C.cf||C.zf)) goto L_1206abc3;
  /* 1206abbc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1206abc3:;
  /* 1206abc3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206abc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206abc9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1206abcc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1206abcf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206abd2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206abd5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206abd8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1206abdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206abde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206abe1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1206abe4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206abe7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206abea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1206abed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206abf0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206abf3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206abf6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1206abf9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206abfc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206abff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206ac02 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ac05 jne 0x1206acd3 */
  if (!C.zf) goto L_1206acd3;
  /* 1206ac0b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ac0f jae 0x1206ac6c */
  if (!C.cf) goto L_1206ac6c;
  /* 1206ac11 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ac14 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ac17 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1206ac1b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ac1e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ac21 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1206ac24 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206ac27 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ac2a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ac2d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1206ac30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206ac32 jne 0x1206ac4a */
  if (!C.zf) goto L_1206ac4a;
  /* 1206ac34 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206ac39 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ac3c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206ac3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ac41 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206ac43 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1206ac45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ac48 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1206ac4a:;
  /* 1206ac4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206ac4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ac52 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206ac54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ac57 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ac5a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1206ac5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1206ac60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ac63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ac66 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1206ac6a jmp 0x1206acd3 */
  goto L_1206acd3;
L_1206ac6c:;
  /* 1206ac6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ac6f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ac72 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1206ac76 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ac79 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ac7c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1206ac7f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206ac82 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ac85 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ac88 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1206ac8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206ac8d jne 0x1206acaa */
  if (!C.zf) goto L_1206acaa;
  /* 1206ac8f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ac92 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ac95 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206ac9a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206ac9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ac9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206aca2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1206aca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206aca7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1206acaa:;
  /* 1206acaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206acad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206acb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206acb5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206acb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206acba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206acbd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1206acc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1206acc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206acc9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206accc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1206acd3:;
  /* 1206acd3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206acd6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206acd9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1206acdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206acde add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ace1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206ace4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1206ace7:;
  /* 1206ace7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206acea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aced mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206acf0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1206acf2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206acf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206acf8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206acfb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206acfe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1206ad01 jmp 0x1206afc2 */
  goto L_1206afc2;
L_1206ad06:;
  /* 1206ad06 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206ad09 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ad0c jge 0x1206afc2 */
  if ((C.sf==C.of)) goto L_1206afc2;
  /* 1206ad12 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206ad15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ad18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206ad1b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1206ad1d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206ad20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ad23 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206ad26 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ad29 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1206ad2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206ad2f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ad32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1206ad35 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206ad38 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ad3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1206ad3e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206ad41 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1206ad44 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ad47 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1206ad4a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ad4e jbe 0x1206ad57 */
  if ((C.cf||C.zf)) goto L_1206ad57;
  /* 1206ad50 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1206ad57:;
  /* 1206ad57 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206ad5a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1206ad5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206ad5f jne 0x1206aea0 */
  if (!C.zf) goto L_1206aea0;
  /* 1206ad65 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206ad68 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1206ad6b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ad6e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1206ad71 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ad75 jbe 0x1206ad7e */
  if ((C.cf||C.zf)) goto L_1206ad7e;
  /* 1206ad77 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1206ad7e:;
  /* 1206ad7e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ad81 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ad84 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206ad87 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ad8a jne 0x1206ae60 */
  if (!C.zf) goto L_1206ae60;
  /* 1206ad90 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ad94 jae 0x1206adf5 */
  if (!C.cf) goto L_1206adf5;
  /* 1206ad96 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206ad9b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ad9e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206ada0 not edx */
  EDX = (~(EDX));
  /* 1206ada2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ada5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ada8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1206adac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206adae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206adb1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206adb4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1206adb8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206adbb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206adbe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1206adc1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1206adc4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206adc7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206adca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1206adcd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206add0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206add3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1206add7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206add9 jne 0x1206adf3 */
  if (!C.zf) goto L_1206adf3;
  /* 1206addb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206ade0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ade3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206ade5 not edx */
  EDX = (~(EDX));
  /* 1206ade7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206adea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206adec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1206adee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206adf1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1206adf3:;
  /* 1206adf3 jmp 0x1206ae60 */
  goto L_1206ae60;
L_1206adf5:;
  /* 1206adf5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206adf8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206adfb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206ae00 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206ae02 not eax */
  EAX = (~(EAX));
  /* 1206ae04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ae07 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ae0a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1206ae11 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1206ae13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ae16 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ae19 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1206ae20 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ae23 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ae26 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1206ae29 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1206ae2c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ae2f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ae32 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1206ae35 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206ae38 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ae3b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1206ae3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206ae41 jne 0x1206ae60 */
  if (!C.zf) goto L_1206ae60;
  /* 1206ae43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ae46 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ae49 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206ae4e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206ae50 not eax */
  EAX = (~(EAX));
  /* 1206ae52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ae55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206ae58 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1206ae5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ae5d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1206ae60:;
  /* 1206ae60 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ae63 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1206ae66 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ae69 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206ae6c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1206ae6f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ae72 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1206ae75 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206ae78 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1206ae7b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1206ae7e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206ae81 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ae84 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1206ae87 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206ae8a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1206ae8d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ae90 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1206ae93 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ae97 jbe 0x1206aea0 */
  if ((C.cf||C.zf)) goto L_1206aea0;
  /* 1206ae99 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1206aea0:;
  /* 1206aea0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206aea3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206aea6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1206aea9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1206aeac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aeaf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206aeb2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206aeb5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1206aeb8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aebb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206aebe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1206aec1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206aec4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aec7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1206aeca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aecd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206aed0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aed3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1206aed6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aed9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206aedc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206aedf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206aee2 jne 0x1206afae */
  if (!C.zf) goto L_1206afae;
  /* 1206aee8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206aeec jae 0x1206af48 */
  if (!C.cf) goto L_1206af48;
  /* 1206aeee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206aef1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aef4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1206aef8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206aefb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aefe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1206af01 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206af03 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206af06 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206af09 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1206af0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206af0e jne 0x1206af26 */
  if (!C.zf) goto L_1206af26;
  /* 1206af10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206af15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206af18 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206af1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206af1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206af1f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1206af21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206af24 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1206af26:;
  /* 1206af26 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206af2b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206af2e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206af30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206af33 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206af36 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1206af3a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206af3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206af3f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206af42 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1206af46 jmp 0x1206afae */
  goto L_1206afae;
L_1206af48:;
  /* 1206af48 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206af4b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206af4e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1206af52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206af55 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206af58 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1206af5b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206af5d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206af60 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206af63 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1206af66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206af68 jne 0x1206af85 */
  if (!C.zf) goto L_1206af85;
  /* 1206af6a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206af6d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206af70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1206af75 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1206af77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206af7a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206af7d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1206af7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206af82 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1206af85:;
  /* 1206af85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206af88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206af8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206af90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206af92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206af95 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206af98 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1206af9f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206afa1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206afa4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206afa7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1206afae:;
  /* 1206afae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206afb1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206afb4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1206afb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206afb9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206afbc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206afbf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1206afc2:;
  /* 1206afc2 mov eax, 1 */
  EAX = (0x1u);
L_1206afc7:;
  /* 1206afc7 mov esp, ebp */
  ESP = (EBP);
  /* 1206afc9 pop ebp */
  EBP = (pop32());
  /* 1206afca ret  */
  ESPCHK(0x1206a9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afd0 @ 0x1206afd0 (304 bytes, 79 insns) */
void f_1206afd0(void) {
  FTRACE(0x1206afd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206afd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206afd1 mov ebp, esp */
  EBP = (ESP);
  /* 1206afd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206afd4 cmp dword ptr [0x12092f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12092f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206afdb je 0x1206b0fc */
  if (C.zf) goto L_1206b0fc;
  /* 1206afe1 mov eax, dword ptr [0x12092f58] */
  EAX = (r32((uint32_t)(0x12092f58)));
  /* 1206afe6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1206afe9 mov ecx, dword ptr [0x12092f60] */
  ECX = (r32((uint32_t)(0x12092f60)));
  /* 1206afef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206aff2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206aff4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206aff7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1206affc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1206b001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206b004 push eax */
  push32((uint32_t)(EAX));
  /* 1206b005 call dword ptr [0x12094350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094350))), 0x1206b00bu);
  /* 1206b00b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206b010 mov ecx, dword ptr [0x12092f58] */
  ECX = (r32((uint32_t)(0x12092f58)));
  /* 1206b016 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206b018 mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206b01d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206b020 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1206b022 mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206b028 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1206b02b mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206b030 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206b033 mov edx, dword ptr [0x12092f58] */
  EDX = (r32((uint32_t)(0x12092f58)));
  /* 1206b039 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1206b044 mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206b049 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206b04c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1206b04f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1206b052 mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206b057 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206b05a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1206b05d mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206b063 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206b066 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1206b06a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206b06c jne 0x1206b082 */
  if (!C.zf) goto L_1206b082;
  /* 1206b06e mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206b074 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1206b077 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1206b079 mov ecx, dword ptr [0x12092f60] */
  ECX = (r32((uint32_t)(0x12092f60)));
  /* 1206b07f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1206b082:;
  /* 1206b082 mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206b088 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b08c jne 0x1206b0f2 */
  if (!C.zf) goto L_1206b0f2;
  /* 1206b08e cmp dword ptr [0x12092f64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12092f64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b095 jle 0x1206b0f2 */
  if ((C.zf||C.sf!=C.of)) goto L_1206b0f2;
  /* 1206b097 mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206b09c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206b09f push ecx */
  push32((uint32_t)(ECX));
  /* 1206b0a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206b0a2 mov edx, dword ptr [0x12092f6c] */
  EDX = (r32((uint32_t)(0x12092f6c)));
  /* 1206b0a8 push edx */
  push32((uint32_t)(EDX));
  /* 1206b0a9 call dword ptr [0x12094360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094360))), 0x1206b0afu);
  /* 1206b0af mov eax, dword ptr [0x12092f64] */
  EAX = (r32((uint32_t)(0x12092f64)));
  /* 1206b0b4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206b0b7 mov ecx, dword ptr [0x12092f68] */
  ECX = (r32((uint32_t)(0x12092f68)));
  /* 1206b0bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b0bf mov edx, dword ptr [0x12092f60] */
  EDX = (r32((uint32_t)(0x12092f60)));
  /* 1206b0c5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b0c8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b0ca push ecx */
  push32((uint32_t)(ECX));
  /* 1206b0cb mov eax, dword ptr [0x12092f60] */
  EAX = (r32((uint32_t)(0x12092f60)));
  /* 1206b0d0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b0d3 push eax */
  push32((uint32_t)(EAX));
  /* 1206b0d4 mov ecx, dword ptr [0x12092f60] */
  ECX = (r32((uint32_t)(0x12092f60)));
  /* 1206b0da push ecx */
  push32((uint32_t)(ECX));
  /* 1206b0db call 0x1206d700 */
  push32(0x1206b0e0u); f_1206d700();
  /* 1206b0e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b0e3 mov edx, dword ptr [0x12092f64] */
  EDX = (r32((uint32_t)(0x12092f64)));
  /* 1206b0e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b0ec mov dword ptr [0x12092f64], edx */
  w32((uint32_t)(0x12092f64), (EDX));
L_1206b0f2:;
  /* 1206b0f2 mov dword ptr [0x12092f60], 0 */
  w32((uint32_t)(0x12092f60), (0x0u));
L_1206b0fc:;
  /* 1206b0fc mov esp, ebp */
  ESP = (EBP);
  /* 1206b0fe pop ebp */
  EBP = (pop32());
  /* 1206b0ff ret  */
  ESPCHK(0x1206afd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b100 @ 0x1206b100 (1565 bytes, 343 insns) */
void f_1206b100(void) {
  FTRACE(0x1206b100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206b100 push ebp */
  push32((uint32_t)(EBP));
  /* 1206b101 mov ebp, esp */
  EBP = (ESP);
  /* 1206b103 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b109 mov eax, dword ptr [0x12092f64] */
  EAX = (r32((uint32_t)(0x12092f64)));
  /* 1206b10e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206b111 push eax */
  push32((uint32_t)(EAX));
  /* 1206b112 mov ecx, dword ptr [0x12092f68] */
  ECX = (r32((uint32_t)(0x12092f68)));
  /* 1206b118 push ecx */
  push32((uint32_t)(ECX));
  /* 1206b119 call dword ptr [0x120943dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943dc))), 0x1206b11fu);
  /* 1206b11f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206b121 je 0x1206b12b */
  if (C.zf) goto L_1206b12b;
  /* 1206b123 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206b126 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b12b:;
  /* 1206b12b mov edx, dword ptr [0x12092f68] */
  EDX = (r32((uint32_t)(0x12092f68)));
  /* 1206b131 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1206b137 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1206b141 jmp 0x1206b152 */
  goto L_1206b152;
L_1206b143:;
  /* 1206b143 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1206b149 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b14c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1206b152:;
  /* 1206b152 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1206b158 cmp ecx, dword ptr [0x12092f64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12092f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b15e jge 0x1206b717 */
  if ((C.sf==C.of)) goto L_1206b717;
  /* 1206b164 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1206b16a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206b16d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1206b173 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1206b178 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1206b17e push ecx */
  push32((uint32_t)(ECX));
  /* 1206b17f call dword ptr [0x120943dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943dc))), 0x1206b185u);
  /* 1206b185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206b187 je 0x1206b193 */
  if (C.zf) goto L_1206b193;
  /* 1206b189 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1206b18e jmp 0x1206b719 */
  goto L_1206b719;
L_1206b193:;
  /* 1206b193 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1206b199 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1206b19c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1206b1a2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1206b1a8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b1ae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1206b1b1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1206b1b7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1206b1ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206b1bd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1206b1c7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1206b1d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1206b1d8 jmp 0x1206b1e3 */
  goto L_1206b1e3;
L_1206b1da:;
  /* 1206b1da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206b1dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b1e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1206b1e3:;
  /* 1206b1e3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b1e7 jge 0x1206b6db */
  if ((C.sf==C.of)) goto L_1206b6db;
  /* 1206b1ed mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1206b1f7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1206b201 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1206b20b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1206b215 jmp 0x1206b226 */
  goto L_1206b226;
L_1206b217:;
  /* 1206b217 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1206b21d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b220 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1206b226:;
  /* 1206b226 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b22d jge 0x1206b242 */
  if ((C.sf==C.of)) goto L_1206b242;
  /* 1206b22f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1206b235 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1206b240 jmp 0x1206b217 */
  goto L_1206b217;
L_1206b242:;
  /* 1206b242 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b246 jl 0x1206b67d */
  if ((C.sf!=C.of)) goto L_1206b67d;
  /* 1206b24c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1206b251 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1206b257 push ecx */
  push32((uint32_t)(ECX));
  /* 1206b258 call dword ptr [0x120943dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943dc))), 0x1206b25eu);
  /* 1206b25e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206b260 je 0x1206b26c */
  if (C.zf) goto L_1206b26c;
  /* 1206b262 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1206b267 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b26c:;
  /* 1206b26c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1206b272 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1206b275 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1206b27f jmp 0x1206b290 */
  goto L_1206b290;
L_1206b281:;
  /* 1206b281 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1206b287 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b28a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1206b290:;
  /* 1206b290 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b297 jge 0x1206b414 */
  if ((C.sf==C.of)) goto L_1206b414;
  /* 1206b29d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206b2a0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b2a3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1206b2a9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1206b2af add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b2b5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1206b2bb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1206b2c1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b2c5 jne 0x1206b2d2 */
  if (!C.zf) goto L_1206b2d2;
  /* 1206b2c7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1206b2cd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b2d0 je 0x1206b2dc */
  if (C.zf) goto L_1206b2dc;
L_1206b2d2:;
  /* 1206b2d2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1206b2d7 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b2dc:;
  /* 1206b2dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1206b2e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206b2e4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1206b2ea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1206b2f0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1206b2f6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1206b2fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1206b2ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206b301 je 0x1206b339 */
  if (C.zf) goto L_1206b339;
  /* 1206b303 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1206b309 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b30c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1206b312 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b31c jle 0x1206b328 */
  if ((C.zf||C.sf!=C.of)) goto L_1206b328;
  /* 1206b31e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1206b323 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b328:;
  /* 1206b328 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1206b32e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b331 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1206b337 jmp 0x1206b37b */
  goto L_1206b37b;
L_1206b339:;
  /* 1206b339 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1206b33f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1206b342 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b345 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1206b34b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b352 jle 0x1206b35e */
  if ((C.zf||C.sf!=C.of)) goto L_1206b35e;
  /* 1206b354 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1206b35e:;
  /* 1206b35e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1206b364 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1206b36b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b36e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1206b374 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1206b37b:;
  /* 1206b37b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b382 jl 0x1206b39d */
  if ((C.sf!=C.of)) goto L_1206b39d;
  /* 1206b384 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1206b38a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1206b38d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206b38f jne 0x1206b39d */
  if (!C.zf) goto L_1206b39d;
  /* 1206b391 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b39b jle 0x1206b3a7 */
  if ((C.zf||C.sf!=C.of)) goto L_1206b3a7;
L_1206b39d:;
  /* 1206b39d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1206b3a2 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b3a7:;
  /* 1206b3a7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1206b3ad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b3b3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1206b3b6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b3bc je 0x1206b3c8 */
  if (C.zf) goto L_1206b3c8;
  /* 1206b3be mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1206b3c3 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b3c8:;
  /* 1206b3c8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1206b3ce add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b3d4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1206b3da mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1206b3e0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b3e6 jb 0x1206b2dc */
  if (C.cf) goto L_1206b2dc;
  /* 1206b3ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1206b3f2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b3f8 je 0x1206b404 */
  if (C.zf) goto L_1206b404;
  /* 1206b3fa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1206b3ff jmp 0x1206b719 */
  goto L_1206b719;
L_1206b404:;
  /* 1206b404 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206b407 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b40c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206b40f jmp 0x1206b281 */
  goto L_1206b281;
L_1206b414:;
  /* 1206b414 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206b417 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206b419 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b41f je 0x1206b42b */
  if (C.zf) goto L_1206b42b;
  /* 1206b421 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1206b426 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b42b:;
  /* 1206b42b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206b42e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1206b434 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1206b43b jmp 0x1206b446 */
  goto L_1206b446;
L_1206b43d:;
  /* 1206b43d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206b440 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b443 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1206b446:;
  /* 1206b446 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b44a jge 0x1206b67d */
  if ((C.sf==C.of)) goto L_1206b67d;
  /* 1206b450 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1206b45a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1206b460 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1206b466:;
  /* 1206b466 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1206b46c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206b46f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1206b475 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1206b47b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b481 je 0x1206b5aa */
  if (C.zf) goto L_1206b5aa;
  /* 1206b487 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206b48a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1206b490 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b497 je 0x1206b5aa */
  if (C.zf) goto L_1206b5aa;
  /* 1206b49d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1206b4a3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b4a9 jb 0x1206b4be */
  if (C.cf) goto L_1206b4be;
  /* 1206b4ab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1206b4b1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b4b6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b4bc jb 0x1206b4c8 */
  if (C.cf) goto L_1206b4c8;
L_1206b4be:;
  /* 1206b4be mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1206b4c3 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b4c8:;
  /* 1206b4c8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1206b4ce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1206b4d4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1206b4da mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1206b4e0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b4e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1206b4e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206b4e9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b4ee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1206b4f4:;
  /* 1206b4f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206b4f7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b4fd je 0x1206b51e */
  if (C.zf) goto L_1206b51e;
  /* 1206b4ff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206b502 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b508 jne 0x1206b50c */
  if (!C.zf) goto L_1206b50c;
  /* 1206b50a jmp 0x1206b51e */
  goto L_1206b51e;
L_1206b50c:;
  /* 1206b50c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206b50f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206b511 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1206b514 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206b517 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b519 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1206b51c jmp 0x1206b4f4 */
  goto L_1206b4f4;
L_1206b51e:;
  /* 1206b51e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206b521 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b527 jne 0x1206b533 */
  if (!C.zf) goto L_1206b533;
  /* 1206b529 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1206b52e jmp 0x1206b719 */
  goto L_1206b719;
L_1206b533:;
  /* 1206b533 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1206b539 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206b53b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1206b53e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b541 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1206b547 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b54e jle 0x1206b55a */
  if ((C.zf||C.sf!=C.of)) goto L_1206b55a;
  /* 1206b550 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1206b55a:;
  /* 1206b55a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1206b560 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b563 je 0x1206b56f */
  if (C.zf) goto L_1206b56f;
  /* 1206b565 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1206b56a jmp 0x1206b719 */
  goto L_1206b719;
L_1206b56f:;
  /* 1206b56f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1206b575 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1206b578 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b57e je 0x1206b58a */
  if (C.zf) goto L_1206b58a;
  /* 1206b580 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1206b585 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b58a:;
  /* 1206b58a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1206b590 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1206b596 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1206b59c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b59f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1206b5a5 jmp 0x1206b466 */
  goto L_1206b466;
L_1206b5aa:;
  /* 1206b5aa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b5b1 je 0x1206b621 */
  if (C.zf) goto L_1206b621;
  /* 1206b5b3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b5b7 jge 0x1206b5eb */
  if ((C.sf==C.of)) goto L_1206b5eb;
  /* 1206b5b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206b5be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206b5c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206b5c3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1206b5c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b5cb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1206b5d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206b5d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206b5d9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206b5db mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1206b5e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b5e3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1206b5e9 jmp 0x1206b621 */
  goto L_1206b621;
L_1206b5eb:;
  /* 1206b5eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206b5ee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b5f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206b5f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206b5f8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1206b5fe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b600 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1206b606 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206b609 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b60c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1206b611 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1206b613 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1206b619 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b61b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1206b621:;
  /* 1206b621 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1206b627 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206b62a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b630 jne 0x1206b644 */
  if (!C.zf) goto L_1206b644;
  /* 1206b632 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206b635 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1206b63b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b642 je 0x1206b64e */
  if (C.zf) goto L_1206b64e;
L_1206b644:;
  /* 1206b644 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1206b649 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b64e:;
  /* 1206b64e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1206b654 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1206b657 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b65d je 0x1206b669 */
  if (C.zf) goto L_1206b669;
  /* 1206b65f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1206b664 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b669:;
  /* 1206b669 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1206b66f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b672 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1206b678 jmp 0x1206b43d */
  goto L_1206b43d;
L_1206b67d:;
  /* 1206b67d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206b680 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1206b686 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1206b68c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b690 jne 0x1206b6aa */
  if (!C.zf) goto L_1206b6aa;
  /* 1206b692 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206b695 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1206b69b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1206b6a1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b6a8 je 0x1206b6b1 */
  if (C.zf) goto L_1206b6b1;
L_1206b6aa:;
  /* 1206b6aa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1206b6af jmp 0x1206b719 */
  goto L_1206b719;
L_1206b6b1:;
  /* 1206b6b1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1206b6b7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b6bd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1206b6c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206b6c6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b6cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1206b6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206b6d1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1206b6d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206b6d6 jmp 0x1206b1da */
  goto L_1206b1da;
L_1206b6db:;
  /* 1206b6db mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1206b6e1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1206b6e7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b6e9 jne 0x1206b6fc */
  if (!C.zf) goto L_1206b6fc;
  /* 1206b6eb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1206b6f1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1206b6f7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b6fa je 0x1206b703 */
  if (C.zf) goto L_1206b703;
L_1206b6fc:;
  /* 1206b6fc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1206b701 jmp 0x1206b719 */
  goto L_1206b719;
L_1206b703:;
  /* 1206b703 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1206b709 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b70c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1206b712 jmp 0x1206b143 */
  goto L_1206b143;
L_1206b717:;
  /* 1206b717 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1206b719:;
  /* 1206b719 mov esp, ebp */
  ESP = (EBP);
  /* 1206b71b pop ebp */
  EBP = (pop32());
  /* 1206b71c ret  */
  ESPCHK(0x1206b100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b720 @ 0x1206b720 (250 bytes, 92 insns) */
void f_1206b720(void) {
  FTRACE(0x1206b720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206b720 push ebp */
  push32((uint32_t)(EBP));
  /* 1206b721 mov ebp, esp */
  EBP = (ESP);
  /* 1206b723 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b726 push ebx */
  push32((uint32_t)(EBX));
  /* 1206b727 push esi */
  push32((uint32_t)(ESI));
  /* 1206b728 push edi */
  push32((uint32_t)(EDI));
  /* 1206b729 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1206b72c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1206b72f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1206b732 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1206b735:;
  /* 1206b735 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b739 jne 0x1206b759 */
  if (!C.zf) goto L_1206b759;
  /* 1206b73b push 0x1208cf84 */
  push32((uint32_t)(0x1208cf84u));
  /* 1206b740 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206b742 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1206b744 push 0x1208cf78 */
  push32((uint32_t)(0x1208cf78u));
  /* 1206b749 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206b74b call 0x120648d0 */
  push32(0x1206b750u); f_120648d0();
  /* 1206b750 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b753 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b756 jne 0x1206b759 */
  if (!C.zf) goto L_1206b759;
  /* 1206b758 int3  */
  x86_unimpl("int3 @ 0x1206b758");
L_1206b759:;
  /* 1206b759 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206b75b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206b75d jne 0x1206b735 */
  if (!C.zf) goto L_1206b735;
L_1206b75f:;
  /* 1206b75f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b763 jne 0x1206b783 */
  if (!C.zf) goto L_1206b783;
  /* 1206b765 push 0x1208cf68 */
  push32((uint32_t)(0x1208cf68u));
  /* 1206b76a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206b76c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1206b76e push 0x1208cf78 */
  push32((uint32_t)(0x1208cf78u));
  /* 1206b773 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206b775 call 0x120648d0 */
  push32(0x1206b77au); f_120648d0();
  /* 1206b77a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b77d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b780 jne 0x1206b783 */
  if (!C.zf) goto L_1206b783;
  /* 1206b782 int3  */
  x86_unimpl("int3 @ 0x1206b782");
L_1206b783:;
  /* 1206b783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b785 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206b787 jne 0x1206b75f */
  if (!C.zf) goto L_1206b75f;
  /* 1206b789 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b78c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1206b793 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206b799 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1206b79c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b79f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206b7a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1206b7a4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b7a7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1206b7ae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206b7b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1206b7b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206b7b5 push edx */
  push32((uint32_t)(EDX));
  /* 1206b7b6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b7b9 push eax */
  push32((uint32_t)(EAX));
  /* 1206b7ba call 0x1206c7a0 */
  push32(0x1206b7bfu); f_1206c7a0();
  /* 1206b7bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b7c2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1206b7c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b7c8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206b7cb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b7ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b7d1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1206b7d4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b7d7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b7db jl 0x1206b7ff */
  if ((C.sf!=C.of)) goto L_1206b7ff;
  /* 1206b7dd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b7e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206b7e2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1206b7e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206b7e7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1206b7ed mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1206b7f0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b7f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206b7f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b7f8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b7fb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1206b7fd jmp 0x1206b810 */
  goto L_1206b810;
L_1206b7ff:;
  /* 1206b7ff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b802 push edx */
  push32((uint32_t)(EDX));
  /* 1206b803 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206b805 call 0x1206c520 */
  push32(0x1206b80au); f_1206c520();
  /* 1206b80a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b80d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1206b810:;
  /* 1206b810 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206b813 pop edi */
  EDI = (pop32());
  /* 1206b814 pop esi */
  ESI = (pop32());
  /* 1206b815 pop ebx */
  EBX = (pop32());
  /* 1206b816 mov esp, ebp */
  ESP = (EBP);
  /* 1206b818 pop ebp */
  EBP = (pop32());
  /* 1206b819 ret  */
  ESPCHK(0x1206b720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b820 @ 0x1206b820 (183 bytes, 58 insns) */
void f_1206b820(void) {
  FTRACE(0x1206b820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206b820 push ebp */
  push32((uint32_t)(EBP));
  /* 1206b821 mov ebp, esp */
  EBP = (ESP);
  /* 1206b823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206b829 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b82c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b831 ja 0x1206b84a */
  if ((!C.cf&&!C.zf)) goto L_1206b84a;
  /* 1206b833 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206b836 mov edx, dword ptr [0x1208fca8] */
  EDX = (r32((uint32_t)(0x1208fca8)));
  /* 1206b83c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b83e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1206b842 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1206b845 jmp 0x1206b8d3 */
  goto L_1206b8d3;
L_1206b84a:;
  /* 1206b84a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206b84d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1206b850 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1206b856 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1206b85c mov edx, dword ptr [0x1208fca8] */
  EDX = (r32((uint32_t)(0x1208fca8)));
  /* 1206b862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b864 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1206b868 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1206b86d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206b86f je 0x1206b893 */
  if (C.zf) goto L_1206b893;
  /* 1206b871 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206b874 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1206b877 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1206b87d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1206b880 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1206b883 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1206b886 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1206b88a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1206b891 jmp 0x1206b8a4 */
  goto L_1206b8a4;
L_1206b893:;
  /* 1206b893 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1206b896 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1206b899 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1206b89d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1206b8a4:;
  /* 1206b8a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206b8a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206b8a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206b8aa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1206b8ad push ecx */
  push32((uint32_t)(ECX));
  /* 1206b8ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206b8b1 push edx */
  push32((uint32_t)(EDX));
  /* 1206b8b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1206b8b5 push eax */
  push32((uint32_t)(EAX));
  /* 1206b8b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206b8b8 call 0x1206da40 */
  push32(0x1206b8bdu); f_1206da40();
  /* 1206b8bd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b8c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206b8c2 jne 0x1206b8c8 */
  if (!C.zf) goto L_1206b8c8;
  /* 1206b8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b8c6 jmp 0x1206b8d3 */
  goto L_1206b8d3;
L_1206b8c8:;
  /* 1206b8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206b8cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206b8d0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1206b8d3:;
  /* 1206b8d3 mov esp, ebp */
  ESP = (EBP);
  /* 1206b8d5 pop ebp */
  EBP = (pop32());
  /* 1206b8d6 ret  */
  ESPCHK(0x1206b820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8e0 @ 0x1206b8e0 (836 bytes, 238 insns) */
void f_1206b8e0(void) {
  FTRACE(0x1206b8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206b8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206b8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1206b8e3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206b8e6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1206b8e8 call 0x12069210 */
  push32(0x1206b8edu); f_12069210();
  /* 1206b8ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b8f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206b8f3 push eax */
  push32((uint32_t)(EAX));
  /* 1206b8f4 call 0x1206bc30 */
  push32(0x1206b8f9u); f_1206bc30();
  /* 1206b8f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b8fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1206b8ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206b902 cmp ecx, dword ptr [0x12092ca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12092ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b908 jne 0x1206b91b */
  if (!C.zf) goto L_1206b91b;
  /* 1206b90a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1206b90c call 0x120692b0 */
  push32(0x1206b911u); f_120692b0();
  /* 1206b911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b916 jmp 0x1206bc20 */
  goto L_1206bc20;
L_1206b91b:;
  /* 1206b91b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b91f jne 0x1206b93c */
  if (!C.zf) goto L_1206b93c;
  /* 1206b921 call 0x1206bd10 */
  push32(0x1206b926u); f_1206bd10();
  /* 1206b926 call 0x1206bd90 */
  push32(0x1206b92bu); f_1206bd90();
  /* 1206b92b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1206b92d call 0x120692b0 */
  push32(0x1206b932u); f_120692b0();
  /* 1206b932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b935 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b937 jmp 0x1206bc20 */
  goto L_1206bc20;
L_1206b93c:;
  /* 1206b93c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206b943 jmp 0x1206b94e */
  goto L_1206b94e;
L_1206b945:;
  /* 1206b945 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206b948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b94b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206b94e:;
  /* 1206b94e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b952 jae 0x1206ba9f */
  if (!C.cf) goto L_1206ba9f;
  /* 1206b958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206b95b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206b95e mov ecx, dword ptr [eax + 0x1208fec8] */
  ECX = (r32((uint32_t)(EAX + 0x1208fec8)));
  /* 1206b964 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b967 jne 0x1206ba9a */
  if (!C.zf) goto L_1206ba9a;
  /* 1206b96d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1206b974 jmp 0x1206b97f */
  goto L_1206b97f;
L_1206b976:;
  /* 1206b976 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b979 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b97c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1206b97f:;
  /* 1206b97f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b986 jae 0x1206b994 */
  if (!C.cf) goto L_1206b994;
  /* 1206b988 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b98b mov byte ptr [eax + 0x12092e40], 0 */
  w8((uint32_t)(EAX + 0x12092e40), (0x0u));
  /* 1206b992 jmp 0x1206b976 */
  goto L_1206b976;
L_1206b994:;
  /* 1206b994 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1206b99b jmp 0x1206b9a6 */
  goto L_1206b9a6;
L_1206b99d:;
  /* 1206b99d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206b9a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b9a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1206b9a6:;
  /* 1206b9a6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206b9aa jae 0x1206ba27 */
  if (!C.cf) goto L_1206ba27;
  /* 1206b9ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206b9af imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206b9b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206b9b5 lea ecx, [edx + eax*8 + 0x1208fed8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1208fed8));
  /* 1206b9bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1206b9bf jmp 0x1206b9ca */
  goto L_1206b9ca;
L_1206b9c1:;
  /* 1206b9c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206b9c4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b9c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1206b9ca:;
  /* 1206b9ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206b9cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206b9cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1206b9d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206b9d3 je 0x1206ba22 */
  if (C.zf) goto L_1206ba22;
  /* 1206b9d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206b9d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206b9da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1206b9dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206b9df je 0x1206ba22 */
  if (C.zf) goto L_1206ba22;
  /* 1206b9e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206b9e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206b9e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1206b9e8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1206b9eb jmp 0x1206b9f6 */
  goto L_1206b9f6;
L_1206b9ed:;
  /* 1206b9ed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206b9f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206b9f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1206b9f6:;
  /* 1206b9f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206b9f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206b9fb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1206b9fe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ba01 ja 0x1206ba20 */
  if ((!C.cf&&!C.zf)) goto L_1206ba20;
  /* 1206ba03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206ba06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206ba09 mov dl, byte ptr [eax + 0x12092e41] */
  DL = (r8((uint32_t)(EAX + 0x12092e41)));
  /* 1206ba0f or dl, byte ptr [ecx + 0x1208fec0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1208fec0))); DL = (_r); fl_logic(_r,8); }
  /* 1206ba15 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206ba18 mov byte ptr [eax + 0x12092e41], dl */
  w8((uint32_t)(EAX + 0x12092e41), (DL));
  /* 1206ba1e jmp 0x1206b9ed */
  goto L_1206b9ed;
L_1206ba20:;
  /* 1206ba20 jmp 0x1206b9c1 */
  goto L_1206b9c1;
L_1206ba22:;
  /* 1206ba22 jmp 0x1206b99d */
  goto L_1206b99d;
L_1206ba27:;
  /* 1206ba27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ba2a mov dword ptr [0x12092ca4], ecx */
  w32((uint32_t)(0x12092ca4), (ECX));
  /* 1206ba30 mov dword ptr [0x12092d2c], 1 */
  w32((uint32_t)(0x12092d2c), (0x1u));
  /* 1206ba3a mov edx, dword ptr [0x12092ca4] */
  EDX = (r32((uint32_t)(0x12092ca4)));
  /* 1206ba40 push edx */
  push32((uint32_t)(EDX));
  /* 1206ba41 call 0x1206bc90 */
  push32(0x1206ba46u); f_1206bc90();
  /* 1206ba46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ba49 mov dword ptr [0x12092f44], eax */
  w32((uint32_t)(0x12092f44), (EAX));
  /* 1206ba4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1206ba55 jmp 0x1206ba60 */
  goto L_1206ba60;
L_1206ba57:;
  /* 1206ba57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206ba5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ba5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1206ba60:;
  /* 1206ba60 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ba64 jae 0x1206ba84 */
  if (!C.cf) goto L_1206ba84;
  /* 1206ba66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ba69 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ba6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206ba6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206ba72 mov cx, word ptr [ecx + eax*2 + 0x1208fecc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1208fecc)));
  /* 1206ba7a mov word ptr [edx*2 + 0x12092d20], cx */
  w16((uint32_t)(EDX*2 + 0x12092d20), (CX));
  /* 1206ba82 jmp 0x1206ba57 */
  goto L_1206ba57;
L_1206ba84:;
  /* 1206ba84 call 0x1206bd90 */
  push32(0x1206ba89u); f_1206bd90();
  /* 1206ba89 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1206ba8b call 0x120692b0 */
  push32(0x1206ba90u); f_120692b0();
  /* 1206ba90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ba93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206ba95 jmp 0x1206bc20 */
  goto L_1206bc20;
L_1206ba9a:;
  /* 1206ba9a jmp 0x1206b945 */
  goto L_1206b945;
L_1206ba9f:;
  /* 1206ba9f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1206baa2 push edx */
  push32((uint32_t)(EDX));
  /* 1206baa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206baa6 push eax */
  push32((uint32_t)(EAX));
  /* 1206baa7 call dword ptr [0x12094328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094328))), 0x1206baadu);
  /* 1206baad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bab0 jne 0x1206bbf2 */
  if (!C.zf) goto L_1206bbf2;
  /* 1206bab6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1206babd jmp 0x1206bac8 */
  goto L_1206bac8;
L_1206babf:;
  /* 1206babf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206bac2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bac5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1206bac8:;
  /* 1206bac8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bacf jae 0x1206badd */
  if (!C.cf) goto L_1206badd;
  /* 1206bad1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206bad4 mov byte ptr [edx + 0x12092e40], 0 */
  w8((uint32_t)(EDX + 0x12092e40), (0x0u));
  /* 1206badb jmp 0x1206babf */
  goto L_1206babf;
L_1206badd:;
  /* 1206badd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206bae0 mov dword ptr [0x12092ca4], eax */
  w32((uint32_t)(0x12092ca4), (EAX));
  /* 1206bae5 mov dword ptr [0x12092f44], 0 */
  w32((uint32_t)(0x12092f44), (0x0u));
  /* 1206baef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206baf3 jbe 0x1206bbae */
  if ((C.cf||C.zf)) goto L_1206bbae;
  /* 1206baf9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1206bafc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1206baff jmp 0x1206bb0a */
  goto L_1206bb0a;
L_1206bb01:;
  /* 1206bb01 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206bb04 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bb07 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1206bb0a:;
  /* 1206bb0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206bb0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206bb0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1206bb11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206bb13 je 0x1206bb5c */
  if (C.zf) goto L_1206bb5c;
  /* 1206bb15 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206bb18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206bb1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1206bb1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206bb1f je 0x1206bb5c */
  if (C.zf) goto L_1206bb5c;
  /* 1206bb21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206bb24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206bb26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1206bb28 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1206bb2b jmp 0x1206bb36 */
  goto L_1206bb36;
L_1206bb2d:;
  /* 1206bb2d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206bb30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bb33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1206bb36:;
  /* 1206bb36 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206bb39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206bb3b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1206bb3e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bb41 ja 0x1206bb5a */
  if ((!C.cf&&!C.zf)) goto L_1206bb5a;
  /* 1206bb43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206bb46 mov cl, byte ptr [eax + 0x12092e41] */
  CL = (r8((uint32_t)(EAX + 0x12092e41)));
  /* 1206bb4c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1206bb4f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206bb52 mov byte ptr [edx + 0x12092e41], cl */
  w8((uint32_t)(EDX + 0x12092e41), (CL));
  /* 1206bb58 jmp 0x1206bb2d */
  goto L_1206bb2d;
L_1206bb5a:;
  /* 1206bb5a jmp 0x1206bb01 */
  goto L_1206bb01;
L_1206bb5c:;
  /* 1206bb5c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1206bb63 jmp 0x1206bb6e */
  goto L_1206bb6e;
L_1206bb65:;
  /* 1206bb65 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206bb68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bb6b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1206bb6e:;
  /* 1206bb6e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bb75 jae 0x1206bb8e */
  if (!C.cf) goto L_1206bb8e;
  /* 1206bb77 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206bb7a mov dl, byte ptr [ecx + 0x12092e41] */
  DL = (r8((uint32_t)(ECX + 0x12092e41)));
  /* 1206bb80 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1206bb83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206bb86 mov byte ptr [eax + 0x12092e41], dl */
  w8((uint32_t)(EAX + 0x12092e41), (DL));
  /* 1206bb8c jmp 0x1206bb65 */
  goto L_1206bb65;
L_1206bb8e:;
  /* 1206bb8e mov ecx, dword ptr [0x12092ca4] */
  ECX = (r32((uint32_t)(0x12092ca4)));
  /* 1206bb94 push ecx */
  push32((uint32_t)(ECX));
  /* 1206bb95 call 0x1206bc90 */
  push32(0x1206bb9au); f_1206bc90();
  /* 1206bb9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bb9d mov dword ptr [0x12092f44], eax */
  w32((uint32_t)(0x12092f44), (EAX));
  /* 1206bba2 mov dword ptr [0x12092d2c], 1 */
  w32((uint32_t)(0x12092d2c), (0x1u));
  /* 1206bbac jmp 0x1206bbb8 */
  goto L_1206bbb8;
L_1206bbae:;
  /* 1206bbae mov dword ptr [0x12092d2c], 0 */
  w32((uint32_t)(0x12092d2c), (0x0u));
L_1206bbb8:;
  /* 1206bbb8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1206bbbf jmp 0x1206bbca */
  goto L_1206bbca;
L_1206bbc1:;
  /* 1206bbc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206bbc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bbc7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1206bbca:;
  /* 1206bbca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bbce jae 0x1206bbdf */
  if (!C.cf) goto L_1206bbdf;
  /* 1206bbd0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206bbd3 mov word ptr [eax*2 + 0x12092d20], 0 */
  w16((uint32_t)(EAX*2 + 0x12092d20), (0x0u));
  /* 1206bbdd jmp 0x1206bbc1 */
  goto L_1206bbc1;
L_1206bbdf:;
  /* 1206bbdf call 0x1206bd90 */
  push32(0x1206bbe4u); f_1206bd90();
  /* 1206bbe4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1206bbe6 call 0x120692b0 */
  push32(0x1206bbebu); f_120692b0();
  /* 1206bbeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bbee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206bbf0 jmp 0x1206bc20 */
  goto L_1206bc20;
L_1206bbf2:;
  /* 1206bbf2 cmp dword ptr [0x120917a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bbf9 je 0x1206bc13 */
  if (C.zf) goto L_1206bc13;
  /* 1206bbfb call 0x1206bd10 */
  push32(0x1206bc00u); f_1206bd10();
  /* 1206bc00 call 0x1206bd90 */
  push32(0x1206bc05u); f_1206bd90();
  /* 1206bc05 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1206bc07 call 0x120692b0 */
  push32(0x1206bc0cu); f_120692b0();
  /* 1206bc0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bc0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206bc11 jmp 0x1206bc20 */
  goto L_1206bc20;
L_1206bc13:;
  /* 1206bc13 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1206bc15 call 0x120692b0 */
  push32(0x1206bc1au); f_120692b0();
  /* 1206bc1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bc1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1206bc20:;
  /* 1206bc20 mov esp, ebp */
  ESP = (EBP);
  /* 1206bc22 pop ebp */
  EBP = (pop32());
  /* 1206bc23 ret  */
  ESPCHK(0x1206b8e0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1206bc30 (89 bytes, 21 insns) */
void f_1206bc30(void) {
  FTRACE(0x1206bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1206bc31 mov ebp, esp */
  EBP = (ESP);
  /* 1206bc33 mov dword ptr [0x120917a8], 0 */
  w32((uint32_t)(0x120917a8), (0x0u));
  /* 1206bc3d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bc41 jne 0x1206bc55 */
  if (!C.zf) goto L_1206bc55;
  /* 1206bc43 mov dword ptr [0x120917a8], 1 */
  w32((uint32_t)(0x120917a8), (0x1u));
  /* 1206bc4d call dword ptr [0x12094320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094320))), 0x1206bc53u);
  /* 1206bc53 jmp 0x1206bc87 */
  goto L_1206bc87;
L_1206bc55:;
  /* 1206bc55 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bc59 jne 0x1206bc6d */
  if (!C.zf) goto L_1206bc6d;
  /* 1206bc5b mov dword ptr [0x120917a8], 1 */
  w32((uint32_t)(0x120917a8), (0x1u));
  /* 1206bc65 call dword ptr [0x12094330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094330))), 0x1206bc6bu);
  /* 1206bc6b jmp 0x1206bc87 */
  goto L_1206bc87;
L_1206bc6d:;
  /* 1206bc6d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bc71 jne 0x1206bc84 */
  if (!C.zf) goto L_1206bc84;
  /* 1206bc73 mov dword ptr [0x120917a8], 1 */
  w32((uint32_t)(0x120917a8), (0x1u));
  /* 1206bc7d mov eax, dword ptr [0x120917c8] */
  EAX = (r32((uint32_t)(0x120917c8)));
  /* 1206bc82 jmp 0x1206bc87 */
  goto L_1206bc87;
L_1206bc84:;
  /* 1206bc84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1206bc87:;
  /* 1206bc87 pop ebp */
  EBP = (pop32());
  /* 1206bc88 ret  */
  ESPCHK(0x1206bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc90 @ 0x1206bc90 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1206bc90(void) {
  FTRACE(0x1206bc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206bc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1206bc91 mov ebp, esp */
  EBP = (ESP);
  /* 1206bc93 push ecx */
  push32((uint32_t)(ECX));
  /* 1206bc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206bc97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206bc9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206bc9d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206bca3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206bca6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bcaa ja 0x1206bcda */
  if ((!C.cf&&!C.zf)) goto L_1206bcda;
  /* 1206bcac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206bcaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206bcb1 mov dl, byte ptr [eax + 0x1206bcf4] */
  DL = (r8((uint32_t)(EAX + 0x1206bcf4)));
  /* 1206bcb7 jmp dword ptr [edx*4 + 0x1206bce0] */
  switch (EDX) {
    case 0: goto L_1206bcbe;
    case 1: goto L_1206bcc5;
    case 2: goto L_1206bccc;
    case 3: goto L_1206bcd3;
    case 4: goto L_1206bcda;
    default: x86_unimpl("switch@0x1206bcb7 out of table"); return;
  }
L_1206bcbe:;
  /* 1206bcbe mov eax, 0x411 */
  EAX = (0x411u);
  /* 1206bcc3 jmp 0x1206bcdc */
  goto L_1206bcdc;
L_1206bcc5:;
  /* 1206bcc5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1206bcca jmp 0x1206bcdc */
  goto L_1206bcdc;
L_1206bccc:;
  /* 1206bccc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1206bcd1 jmp 0x1206bcdc */
  goto L_1206bcdc;
L_1206bcd3:;
  /* 1206bcd3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1206bcd8 jmp 0x1206bcdc */
  goto L_1206bcdc;
L_1206bcda:;
  /* 1206bcda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1206bcdc:;
  /* 1206bcdc mov esp, ebp */
  ESP = (EBP);
  /* 1206bcde pop ebp */
  EBP = (pop32());
  /* 1206bcdf ret  */
  ESPCHK(0x1206bc90u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1206bd10 (116 bytes, 29 insns) */
void f_1206bd10(void) {
  FTRACE(0x1206bd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206bd10 push ebp */
  push32((uint32_t)(EBP));
  /* 1206bd11 mov ebp, esp */
  EBP = (ESP);
  /* 1206bd13 push ecx */
  push32((uint32_t)(ECX));
  /* 1206bd14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206bd1b jmp 0x1206bd26 */
  goto L_1206bd26;
L_1206bd1d:;
  /* 1206bd1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206bd20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bd23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206bd26:;
  /* 1206bd26 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bd2d jge 0x1206bd3b */
  if ((C.sf==C.of)) goto L_1206bd3b;
  /* 1206bd2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206bd32 mov byte ptr [ecx + 0x12092e40], 0 */
  w8((uint32_t)(ECX + 0x12092e40), (0x0u));
  /* 1206bd39 jmp 0x1206bd1d */
  goto L_1206bd1d;
L_1206bd3b:;
  /* 1206bd3b mov dword ptr [0x12092ca4], 0 */
  w32((uint32_t)(0x12092ca4), (0x0u));
  /* 1206bd45 mov dword ptr [0x12092d2c], 0 */
  w32((uint32_t)(0x12092d2c), (0x0u));
  /* 1206bd4f mov dword ptr [0x12092f44], 0 */
  w32((uint32_t)(0x12092f44), (0x0u));
  /* 1206bd59 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206bd60 jmp 0x1206bd6b */
  goto L_1206bd6b;
L_1206bd62:;
  /* 1206bd62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206bd65 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bd68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206bd6b:;
  /* 1206bd6b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bd6f jge 0x1206bd80 */
  if ((C.sf==C.of)) goto L_1206bd80;
  /* 1206bd71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206bd74 mov word ptr [eax*2 + 0x12092d20], 0 */
  w16((uint32_t)(EAX*2 + 0x12092d20), (0x0u));
  /* 1206bd7e jmp 0x1206bd62 */
  goto L_1206bd62;
L_1206bd80:;
  /* 1206bd80 mov esp, ebp */
  ESP = (EBP);
  /* 1206bd82 pop ebp */
  EBP = (pop32());
  /* 1206bd83 ret  */
  ESPCHK(0x1206bd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x1206bd90 (770 bytes, 175 insns) */
void f_1206bd90(void) {
  FTRACE(0x1206bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 1206bd91 mov ebp, esp */
  EBP = (ESP);
  /* 1206bd93 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206bd99 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1206bd9f push eax */
  push32((uint32_t)(EAX));
  /* 1206bda0 mov ecx, dword ptr [0x12092ca4] */
  ECX = (r32((uint32_t)(0x12092ca4)));
  /* 1206bda6 push ecx */
  push32((uint32_t)(ECX));
  /* 1206bda7 call dword ptr [0x12094328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094328))), 0x1206bdadu);
  /* 1206bdad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bdb0 jne 0x1206bfc9 */
  if (!C.zf) goto L_1206bfc9;
  /* 1206bdb6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1206bdc0 jmp 0x1206bdd1 */
  goto L_1206bdd1;
L_1206bdc2:;
  /* 1206bdc2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bdc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bdcb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1206bdd1:;
  /* 1206bdd1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bddb jae 0x1206bdf2 */
  if (!C.cf) goto L_1206bdf2;
  /* 1206bddd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bde3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1206bde9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1206bdf0 jmp 0x1206bdc2 */
  goto L_1206bdc2;
L_1206bdf2:;
  /* 1206bdf2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1206bdf9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1206bdff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206be02 jmp 0x1206be0d */
  goto L_1206be0d;
L_1206be04:;
  /* 1206be04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206be07 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206be0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206be0d:;
  /* 1206be0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206be10 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206be12 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1206be14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206be16 je 0x1206be58 */
  if (C.zf) goto L_1206be58;
  /* 1206be18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206be1b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206be1d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1206be1f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1206be25 jmp 0x1206be36 */
  goto L_1206be36;
L_1206be27:;
  /* 1206be27 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206be2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206be30 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1206be36:;
  /* 1206be36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206be39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206be3b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1206be3e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206be44 ja 0x1206be56 */
  if ((!C.cf&&!C.zf)) goto L_1206be56;
  /* 1206be46 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206be4c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1206be54 jmp 0x1206be27 */
  goto L_1206be27;
L_1206be56:;
  /* 1206be56 jmp 0x1206be04 */
  goto L_1206be04;
L_1206be58:;
  /* 1206be58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206be5a mov eax, dword ptr [0x12092f44] */
  EAX = (r32((uint32_t)(0x12092f44)));
  /* 1206be5f push eax */
  push32((uint32_t)(EAX));
  /* 1206be60 mov ecx, dword ptr [0x12092ca4] */
  ECX = (r32((uint32_t)(0x12092ca4)));
  /* 1206be66 push ecx */
  push32((uint32_t)(ECX));
  /* 1206be67 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1206be6d push edx */
  push32((uint32_t)(EDX));
  /* 1206be6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1206be73 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1206be79 push eax */
  push32((uint32_t)(EAX));
  /* 1206be7a push 1 */
  push32((uint32_t)(0x1u));
  /* 1206be7c call 0x1206da40 */
  push32(0x1206be81u); f_1206da40();
  /* 1206be81 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206be84 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206be86 mov ecx, dword ptr [0x12092ca4] */
  ECX = (r32((uint32_t)(0x12092ca4)));
  /* 1206be8c push ecx */
  push32((uint32_t)(ECX));
  /* 1206be8d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1206be92 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1206be98 push edx */
  push32((uint32_t)(EDX));
  /* 1206be99 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1206be9e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1206bea4 push eax */
  push32((uint32_t)(EAX));
  /* 1206bea5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1206beaa mov ecx, dword ptr [0x12092f44] */
  ECX = (r32((uint32_t)(0x12092f44)));
  /* 1206beb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1206beb1 call 0x1206dc00 */
  push32(0x1206beb6u); f_1206dc00();
  /* 1206beb6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206beb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206bebb mov edx, dword ptr [0x12092ca4] */
  EDX = (r32((uint32_t)(0x12092ca4)));
  /* 1206bec1 push edx */
  push32((uint32_t)(EDX));
  /* 1206bec2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1206bec7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1206becd push eax */
  push32((uint32_t)(EAX));
  /* 1206bece push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1206bed3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1206bed9 push ecx */
  push32((uint32_t)(ECX));
  /* 1206beda push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1206bedf mov edx, dword ptr [0x12092f44] */
  EDX = (r32((uint32_t)(0x12092f44)));
  /* 1206bee5 push edx */
  push32((uint32_t)(EDX));
  /* 1206bee6 call 0x1206dc00 */
  push32(0x1206beebu); f_1206dc00();
  /* 1206beeb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206beee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1206bef8 jmp 0x1206bf09 */
  goto L_1206bf09;
L_1206befa:;
  /* 1206befa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bf03 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1206bf09:;
  /* 1206bf09 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bf13 jae 0x1206bfc4 */
  if (!C.cf) goto L_1206bfc4;
  /* 1206bf19 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206bf21 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1206bf29 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1206bf2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206bf2e je 0x1206bf66 */
  if (C.zf) goto L_1206bf66;
  /* 1206bf30 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf36 mov cl, byte ptr [eax + 0x12092e41] */
  CL = (r8((uint32_t)(EAX + 0x12092e41)));
  /* 1206bf3c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1206bf3f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf45 mov byte ptr [edx + 0x12092e41], cl */
  w8((uint32_t)(EDX + 0x12092e41), (CL));
  /* 1206bf4b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf51 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf57 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1206bf5e mov byte ptr [eax + 0x12092d40], dl */
  w8((uint32_t)(EAX + 0x12092d40), (DL));
  /* 1206bf64 jmp 0x1206bfbf */
  goto L_1206bfbf;
L_1206bf66:;
  /* 1206bf66 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206bf6e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1206bf76 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1206bf79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206bf7b je 0x1206bfb2 */
  if (C.zf) goto L_1206bfb2;
  /* 1206bf7d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf83 mov al, byte ptr [edx + 0x12092e41] */
  AL = (r8((uint32_t)(EDX + 0x12092e41)));
  /* 1206bf89 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1206bf8b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf91 mov byte ptr [ecx + 0x12092e41], al */
  w8((uint32_t)(ECX + 0x12092e41), (AL));
  /* 1206bf97 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bf9d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bfa3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1206bfaa mov byte ptr [edx + 0x12092d40], cl */
  w8((uint32_t)(EDX + 0x12092d40), (CL));
  /* 1206bfb0 jmp 0x1206bfbf */
  goto L_1206bfbf;
L_1206bfb2:;
  /* 1206bfb2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bfb8 mov byte ptr [edx + 0x12092d40], 0 */
  w8((uint32_t)(EDX + 0x12092d40), (0x0u));
L_1206bfbf:;
  /* 1206bfbf jmp 0x1206befa */
  goto L_1206befa;
L_1206bfc4:;
  /* 1206bfc4 jmp 0x1206c08e */
  goto L_1206c08e;
L_1206bfc9:;
  /* 1206bfc9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1206bfd3 jmp 0x1206bfe4 */
  goto L_1206bfe4;
L_1206bfd5:;
  /* 1206bfd5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206bfdb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206bfde mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1206bfe4:;
  /* 1206bfe4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bfee jae 0x1206c08e */
  if (!C.cf) goto L_1206c08e;
  /* 1206bff4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206bffb jb 0x1206c038 */
  if (C.cf) goto L_1206c038;
  /* 1206bffd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c004 ja 0x1206c038 */
  if ((!C.cf&&!C.zf)) goto L_1206c038;
  /* 1206c006 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206c00c mov dl, byte ptr [ecx + 0x12092e41] */
  DL = (r8((uint32_t)(ECX + 0x12092e41)));
  /* 1206c012 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1206c015 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206c01b mov byte ptr [eax + 0x12092e41], dl */
  w8((uint32_t)(EAX + 0x12092e41), (DL));
  /* 1206c021 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206c027 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c02a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206c030 mov byte ptr [edx + 0x12092d40], cl */
  w8((uint32_t)(EDX + 0x12092d40), (CL));
  /* 1206c036 jmp 0x1206c089 */
  goto L_1206c089;
L_1206c038:;
  /* 1206c038 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c03f jb 0x1206c07c */
  if (C.cf) goto L_1206c07c;
  /* 1206c041 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c048 ja 0x1206c07c */
  if ((!C.cf&&!C.zf)) goto L_1206c07c;
  /* 1206c04a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206c050 mov cl, byte ptr [eax + 0x12092e41] */
  CL = (r8((uint32_t)(EAX + 0x12092e41)));
  /* 1206c056 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1206c059 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206c05f mov byte ptr [edx + 0x12092e41], cl */
  w8((uint32_t)(EDX + 0x12092e41), (CL));
  /* 1206c065 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206c06b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c06e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206c074 mov byte ptr [ecx + 0x12092d40], al */
  w8((uint32_t)(ECX + 0x12092d40), (AL));
  /* 1206c07a jmp 0x1206c089 */
  goto L_1206c089;
L_1206c07c:;
  /* 1206c07c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1206c082 mov byte ptr [edx + 0x12092d40], 0 */
  w8((uint32_t)(EDX + 0x12092d40), (0x0u));
L_1206c089:;
  /* 1206c089 jmp 0x1206bfd5 */
  goto L_1206bfd5;
L_1206c08e:;
  /* 1206c08e mov esp, ebp */
  ESP = (EBP);
  /* 1206c090 pop ebp */
  EBP = (pop32());
  /* 1206c091 ret  */
  ESPCHK(0x1206bd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a0 @ 0x1206c0a0 (23 bytes, 9 insns) */
void f_1206c0a0(void) {
  FTRACE(0x1206c0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206c0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206c0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1206c0a3 cmp dword ptr [0x12092d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12092d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c0aa je 0x1206c0b3 */
  if (C.zf) goto L_1206c0b3;
  /* 1206c0ac mov eax, dword ptr [0x12092ca4] */
  EAX = (r32((uint32_t)(0x12092ca4)));
  /* 1206c0b1 jmp 0x1206c0b5 */
  goto L_1206c0b5;
L_1206c0b3:;
  /* 1206c0b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1206c0b5:;
  /* 1206c0b5 pop ebp */
  EBP = (pop32());
  /* 1206c0b6 ret  */
  ESPCHK(0x1206c0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c0 @ 0x1206c0c0 (34 bytes, 10 insns) */
void f_1206c0c0(void) {
  FTRACE(0x1206c0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206c0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206c0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1206c0c3 cmp dword ptr [0x120930f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120930f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c0ca jne 0x1206c0e0 */
  if (!C.zf) goto L_1206c0e0;
  /* 1206c0cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1206c0ce call 0x1206b8e0 */
  push32(0x1206c0d3u); f_1206b8e0();
  /* 1206c0d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c0d6 mov dword ptr [0x120930f0], 1 */
  w32((uint32_t)(0x120930f0), (0x1u));
L_1206c0e0:;
  /* 1206c0e0 pop ebp */
  EBP = (pop32());
  /* 1206c0e1 ret  */
  ESPCHK(0x1206c0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0f0 @ 0x1206c0f0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1206c0f0(void) {
  FTRACE(0x1206c0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206c0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206c0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1206c0f3 push edi */
  push32((uint32_t)(EDI));
  /* 1206c0f4 push esi */
  push32((uint32_t)(ESI));
  /* 1206c0f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1206c0f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206c0fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c0fe mov eax, ecx */
  EAX = (ECX);
  /* 1206c100 mov edx, ecx */
  EDX = (ECX);
  /* 1206c102 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c104 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c106 jbe 0x1206c110 */
  if ((C.cf||C.zf)) goto L_1206c110;
  /* 1206c108 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c10a jb 0x1206c288 */
  if (C.cf) goto L_1206c288;
L_1206c110:;
  /* 1206c110 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1206c116 jne 0x1206c12c */
  if (!C.zf) goto L_1206c12c;
  /* 1206c118 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206c11b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1206c11e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c121 jb 0x1206c14c */
  if (C.cf) goto L_1206c14c;
  /* 1206c123 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206c125 jmp dword ptr [edx*4 + 0x1206c238] */
  switch (EDX) {
    case 0: goto L_1206c248;
    case 1: goto L_1206c250;
    case 2: goto L_1206c25c;
    case 3: goto L_1206c270;
    default: x86_unimpl("switch@0x1206c125 out of table"); return;
  }
L_1206c12c:;
  /* 1206c12c mov eax, edi */
  EAX = (EDI);
  /* 1206c12e mov edx, 3 */
  EDX = (0x3u);
  /* 1206c133 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c136 jb 0x1206c144 */
  if (C.cf) goto L_1206c144;
  /* 1206c138 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1206c13b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c13d jmp dword ptr [eax*4 + 0x1206c150] */
  switch (EAX) {
    case 1: goto L_1206c160;
    case 2: goto L_1206c18c;
    case 3: goto L_1206c1b0;
    default: x86_unimpl("switch@0x1206c13d out of table"); return;
  }
L_1206c144:;
  /* 1206c144 jmp dword ptr [ecx*4 + 0x1206c248] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1206c248)))); return;
  /* 1206c14b nop  */
  /* nop */
L_1206c14c:;
  /* 1206c14c jmp dword ptr [ecx*4 + 0x1206c1cc] */
  switch (ECX) {
    case 0: goto L_1206c22f;
    case 1: goto L_1206c21c;
    case 2: goto L_1206c214;
    case 3: goto L_1206c20c;
    case 4: goto L_1206c204;
    case 5: goto L_1206c1fc;
    case 6: goto L_1206c1f4;
    case 7: goto L_1206c1ec;
    default: x86_unimpl("switch@0x1206c14c out of table"); return;
  }
  /* 1206c153 nop  */
  /* nop */
L_1206c160:;
  /* 1206c160 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c162 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206c164 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206c166 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206c169 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206c16c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206c16f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206c172 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206c175 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c178 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c17b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c17e jb 0x1206c14c */
  if (C.cf) goto L_1206c14c;
  /* 1206c180 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206c182 jmp dword ptr [edx*4 + 0x1206c238] */
  switch (EDX) {
    case 0: goto L_1206c248;
    case 1: goto L_1206c250;
    case 2: goto L_1206c25c;
    case 3: goto L_1206c270;
    default: x86_unimpl("switch@0x1206c182 out of table"); return;
  }
  /* 1206c189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206c18c:;
  /* 1206c18c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c18e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206c190 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206c192 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206c195 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206c198 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206c19b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c19e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c1a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c1a4 jb 0x1206c14c */
  if (C.cf) goto L_1206c14c;
  /* 1206c1a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206c1a8 jmp dword ptr [edx*4 + 0x1206c238] */
  switch (EDX) {
    case 0: goto L_1206c248;
    case 1: goto L_1206c250;
    case 2: goto L_1206c25c;
    case 3: goto L_1206c270;
    default: x86_unimpl("switch@0x1206c1a8 out of table"); return;
  }
  /* 1206c1af nop  */
  /* nop */
L_1206c1b0:;
  /* 1206c1b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c1b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206c1b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206c1b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1206c1b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206c1ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1206c1bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c1be jb 0x1206c14c */
  if (C.cf) goto L_1206c14c;
  /* 1206c1c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206c1c2 jmp dword ptr [edx*4 + 0x1206c238] */
  switch (EDX) {
    case 0: goto L_1206c248;
    case 1: goto L_1206c250;
    case 2: goto L_1206c25c;
    case 3: goto L_1206c270;
    default: x86_unimpl("switch@0x1206c1c2 out of table"); return;
  }
  /* 1206c1c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206c1ec:;
  /* 1206c1ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1206c1f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1206c1f4:;
  /* 1206c1f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1206c1f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1206c1fc:;
  /* 1206c1fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1206c200 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1206c204:;
  /* 1206c204 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1206c208 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1206c20c:;
  /* 1206c20c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1206c210 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1206c214:;
  /* 1206c214 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1206c218 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1206c21c:;
  /* 1206c21c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1206c220 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1206c224 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1206c22b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c22d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1206c22f:;
  /* 1206c22f jmp dword ptr [edx*4 + 0x1206c238] */
  switch (EDX) {
    case 0: goto L_1206c248;
    case 1: goto L_1206c250;
    case 2: goto L_1206c25c;
    case 3: goto L_1206c270;
    default: x86_unimpl("switch@0x1206c22f out of table"); return;
  }
  /* 1206c236 mov edi, edi */
  EDI = (EDI);
L_1206c248:;
  /* 1206c248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c24b pop esi */
  ESI = (pop32());
  /* 1206c24c pop edi */
  EDI = (pop32());
  /* 1206c24d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206c24e ret  */
  ESPCHK(0x1206c0f0u, _esp0);
  ESP += 4; return;
  /* 1206c24f nop  */
  /* nop */
L_1206c250:;
  /* 1206c250 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206c252 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206c254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c257 pop esi */
  ESI = (pop32());
  /* 1206c258 pop edi */
  EDI = (pop32());
  /* 1206c259 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206c25a ret  */
  ESPCHK(0x1206c0f0u, _esp0);
  ESP += 4; return;
  /* 1206c25b nop  */
  /* nop */
L_1206c25c:;
  /* 1206c25c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206c25e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206c260 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206c263 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206c266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c269 pop esi */
  ESI = (pop32());
  /* 1206c26a pop edi */
  EDI = (pop32());
  /* 1206c26b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206c26c ret  */
  ESPCHK(0x1206c0f0u, _esp0);
  ESP += 4; return;
  /* 1206c26d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206c270:;
  /* 1206c270 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206c272 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206c274 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206c277 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206c27a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206c27d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206c280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c283 pop esi */
  ESI = (pop32());
  /* 1206c284 pop edi */
  EDI = (pop32());
  /* 1206c285 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206c286 ret  */
  ESPCHK(0x1206c0f0u, _esp0);
  ESP += 4; return;
  /* 1206c287 nop  */
  /* nop */
L_1206c288:;
  /* 1206c288 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1206c28c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1206c290 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1206c296 jne 0x1206c2bc */
  if (!C.zf) goto L_1206c2bc;
  /* 1206c298 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206c29b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1206c29e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c2a1 jb 0x1206c2b0 */
  if (C.cf) goto L_1206c2b0;
  /* 1206c2a3 std  */
  C.df=1;
  /* 1206c2a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206c2a6 cld  */
  C.df=0;
  /* 1206c2a7 jmp dword ptr [edx*4 + 0x1206c3d0] */
  switch (EDX) {
    case 0: goto L_1206c3e0;
    case 1: goto L_1206c3e8;
    case 2: goto L_1206c3f8;
    case 3: goto L_1206c40c;
    default: x86_unimpl("switch@0x1206c2a7 out of table"); return;
  }
  /* 1206c2ae mov edi, edi */
  EDI = (EDI);
L_1206c2b0:;
  /* 1206c2b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206c2b2 jmp dword ptr [ecx*4 + 0x1206c380] */
  switch (ECX) {
    case 0: goto L_1206c3c7;
    default: x86_unimpl("switch@0x1206c2b2 out of table"); return;
  }
  /* 1206c2b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206c2bc:;
  /* 1206c2bc mov eax, edi */
  EAX = (EDI);
  /* 1206c2be mov edx, 3 */
  EDX = (0x3u);
  /* 1206c2c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c2c6 jb 0x1206c2d4 */
  if (C.cf) goto L_1206c2d4;
  /* 1206c2c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1206c2cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c2cd jmp dword ptr [eax*4 + 0x1206c2d8] */
  switch (EAX) {
    case 1: goto L_1206c2e8;
    case 2: goto L_1206c308;
    case 3: goto L_1206c330;
    default: x86_unimpl("switch@0x1206c2cd out of table"); return;
  }
L_1206c2d4:;
  /* 1206c2d4 jmp dword ptr [ecx*4 + 0x1206c3d0] */
  switch (ECX) {
    case 0: goto L_1206c3e0;
    case 1: goto L_1206c3e8;
    case 2: goto L_1206c3f8;
    case 3: goto L_1206c40c;
    default: x86_unimpl("switch@0x1206c2d4 out of table"); return;
  }
  /* 1206c2db nop  */
  /* nop */
L_1206c2e8:;
  /* 1206c2e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206c2eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c2ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206c2f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1206c2f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206c2f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1206c2f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c2f8 jb 0x1206c2b0 */
  if (C.cf) goto L_1206c2b0;
  /* 1206c2fa std  */
  C.df=1;
  /* 1206c2fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206c2fd cld  */
  C.df=0;
  /* 1206c2fe jmp dword ptr [edx*4 + 0x1206c3d0] */
  switch (EDX) {
    case 0: goto L_1206c3e0;
    case 1: goto L_1206c3e8;
    case 2: goto L_1206c3f8;
    case 3: goto L_1206c40c;
    default: x86_unimpl("switch@0x1206c2fe out of table"); return;
  }
  /* 1206c305 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206c308:;
  /* 1206c308 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206c30b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c30d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206c310 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206c313 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206c316 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206c319 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c31c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c31f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c322 jb 0x1206c2b0 */
  if (C.cf) goto L_1206c2b0;
  /* 1206c324 std  */
  C.df=1;
  /* 1206c325 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206c327 cld  */
  C.df=0;
  /* 1206c328 jmp dword ptr [edx*4 + 0x1206c3d0] */
  switch (EDX) {
    case 0: goto L_1206c3e0;
    case 1: goto L_1206c3e8;
    case 2: goto L_1206c3f8;
    case 3: goto L_1206c40c;
    default: x86_unimpl("switch@0x1206c328 out of table"); return;
  }
  /* 1206c32f nop  */
  /* nop */
L_1206c330:;
  /* 1206c330 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206c333 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c335 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206c338 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206c33b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206c33e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206c341 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206c344 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206c347 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c34a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c34d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c350 jb 0x1206c2b0 */
  if (C.cf) goto L_1206c2b0;
  /* 1206c356 std  */
  C.df=1;
  /* 1206c357 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206c359 cld  */
  C.df=0;
  /* 1206c35a jmp dword ptr [edx*4 + 0x1206c3d0] */
  switch (EDX) {
    case 0: goto L_1206c3e0;
    case 1: goto L_1206c3e8;
    case 2: goto L_1206c3f8;
    case 3: goto L_1206c40c;
    default: x86_unimpl("switch@0x1206c35a out of table"); return;
  }
  /* 1206c361 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1206c364 test bl, al */
  { uint32_t _r=(BL)&(AL); fl_logic(_r,8); }
  /* 1206c366 push es */
  push32((uint32_t)(C.seg_es));
  /* 1206c367 adc cl, byte ptr [ebx + eax*8 - 0x3c6bedfa] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x3c6bedfa))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206c36e push es */
  push32((uint32_t)(C.seg_es));
  /* 1206c36f adc bl, byte ptr [ebx + eax*8 - 0x3c5bedfa] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x3c5bedfa))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206c376 push es */
  push32((uint32_t)(C.seg_es));
  /* 1206c377 adc ch, byte ptr [ebx + eax*8 - 0x3c4bedfa] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBX + EAX*8 + -0x3c4bedfa))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1206c37e push es */
  push32((uint32_t)(C.seg_es));
  /* 1206c384 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1206c388 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1206c38c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1206c390 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1206c394 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1206c398 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1206c39c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1206c3a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1206c3a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1206c3a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1206c3ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1206c3b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1206c3b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1206c3b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1206c3bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1206c3c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c3c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1206c3c7:;
  /* 1206c3c7 jmp dword ptr [edx*4 + 0x1206c3d0] */
  switch (EDX) {
    case 0: goto L_1206c3e0;
    case 1: goto L_1206c3e8;
    case 2: goto L_1206c3f8;
    case 3: goto L_1206c40c;
    default: x86_unimpl("switch@0x1206c3c7 out of table"); return;
  }
  /* 1206c3ce mov edi, edi */
  EDI = (EDI);
L_1206c3e0:;
  /* 1206c3e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c3e3 pop esi */
  ESI = (pop32());
  /* 1206c3e4 pop edi */
  EDI = (pop32());
  /* 1206c3e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206c3e6 ret  */
  ESPCHK(0x1206c0f0u, _esp0);
  ESP += 4; return;
  /* 1206c3e7 nop  */
  /* nop */
L_1206c3e8:;
  /* 1206c3e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206c3eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206c3ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c3f1 pop esi */
  ESI = (pop32());
  /* 1206c3f2 pop edi */
  EDI = (pop32());
  /* 1206c3f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206c3f4 ret  */
  ESPCHK(0x1206c0f0u, _esp0);
  ESP += 4; return;
  /* 1206c3f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206c3f8:;
  /* 1206c3f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206c3fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206c3fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206c401 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206c404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c407 pop esi */
  ESI = (pop32());
  /* 1206c408 pop edi */
  EDI = (pop32());
  /* 1206c409 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206c40a ret  */
  ESPCHK(0x1206c0f0u, _esp0);
  ESP += 4; return;
  /* 1206c40b nop  */
  /* nop */
L_1206c40c:;
  /* 1206c40c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206c40f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206c412 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206c415 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206c418 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206c41b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206c41e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c421 pop esi */
  ESI = (pop32());
  /* 1206c422 pop edi */
  EDI = (pop32());
  /* 1206c423 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206c424 ret  */
  ESPCHK(0x1206c0f0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1206c430 (104 bytes, 43 insns) */
void f_1206c430(void) {
  FTRACE(0x1206c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206c430 push ebx */
  push32((uint32_t)(EBX));
  /* 1206c431 push esi */
  push32((uint32_t)(ESI));
  /* 1206c432 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1206c436 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206c438 jne 0x1206c452 */
  if (!C.zf) goto L_1206c452;
  /* 1206c43a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1206c43e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1206c442 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c444 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1206c446 mov ebx, eax */
  EBX = (EAX);
  /* 1206c448 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1206c44c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1206c44e mov edx, ebx */
  EDX = (EBX);
  /* 1206c450 jmp 0x1206c493 */
  goto L_1206c493;
L_1206c452:;
  /* 1206c452 mov ecx, eax */
  ECX = (EAX);
  /* 1206c454 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1206c458 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1206c45c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1206c460:;
  /* 1206c460 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1206c462 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1206c464 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1206c466 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1206c468 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206c46a jne 0x1206c460 */
  if (!C.zf) goto L_1206c460;
  /* 1206c46c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1206c46e mov esi, eax */
  ESI = (EAX);
  /* 1206c470 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1206c474 mov ecx, eax */
  ECX = (EAX);
  /* 1206c476 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1206c47a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1206c47c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c47e jb 0x1206c48e */
  if (C.cf) goto L_1206c48e;
  /* 1206c480 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c484 ja 0x1206c48e */
  if ((!C.cf&&!C.zf)) goto L_1206c48e;
  /* 1206c486 jb 0x1206c48f */
  if (C.cf) goto L_1206c48f;
  /* 1206c488 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c48c jbe 0x1206c48f */
  if ((C.cf||C.zf)) goto L_1206c48f;
L_1206c48e:;
  /* 1206c48e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1206c48f:;
  /* 1206c48f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c491 mov eax, esi */
  EAX = (ESI);
L_1206c493:;
  /* 1206c493 pop esi */
  ESI = (pop32());
  /* 1206c494 pop ebx */
  EBX = (pop32());
  /* 1206c495 ret 0x10 */
  ESPCHK(0x1206c430u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1206c4a0 (117 bytes, 44 insns) */
void f_1206c4a0(void) {
  FTRACE(0x1206c4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206c4a0 push ebx */
  push32((uint32_t)(EBX));
  /* 1206c4a1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1206c4a5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206c4a7 jne 0x1206c4c1 */
  if (!C.zf) goto L_1206c4c1;
  /* 1206c4a9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1206c4ad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1206c4b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c4b3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1206c4b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1206c4b9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1206c4bb mov eax, edx */
  EAX = (EDX);
  /* 1206c4bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1206c4bf jmp 0x1206c511 */
  goto L_1206c511;
L_1206c4c1:;
  /* 1206c4c1 mov ecx, eax */
  ECX = (EAX);
  /* 1206c4c3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1206c4c7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1206c4cb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1206c4cf:;
  /* 1206c4cf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1206c4d1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1206c4d3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1206c4d5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1206c4d7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206c4d9 jne 0x1206c4cf */
  if (!C.zf) goto L_1206c4cf;
  /* 1206c4db div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1206c4dd mov ecx, eax */
  ECX = (EAX);
  /* 1206c4df mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1206c4e3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1206c4e4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1206c4e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c4ea jb 0x1206c4fa */
  if (C.cf) goto L_1206c4fa;
  /* 1206c4ec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c4f0 ja 0x1206c4fa */
  if ((!C.cf&&!C.zf)) goto L_1206c4fa;
  /* 1206c4f2 jb 0x1206c502 */
  if (C.cf) goto L_1206c502;
  /* 1206c4f4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c4f8 jbe 0x1206c502 */
  if ((C.cf||C.zf)) goto L_1206c502;
L_1206c4fa:;
  /* 1206c4fa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c4fe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1206c502:;
  /* 1206c502 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c506 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c50a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206c50c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206c50e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1206c511:;
  /* 1206c511 pop ebx */
  EBX = (pop32());
  /* 1206c512 ret 0x10 */
  ESPCHK(0x1206c4a0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c520 @ 0x1206c520 (628 bytes, 214 insns) */
void f_1206c520(void) {
  FTRACE(0x1206c520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206c520 push ebp */
  push32((uint32_t)(EBP));
  /* 1206c521 mov ebp, esp */
  EBP = (ESP);
  /* 1206c523 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c526 push ebx */
  push32((uint32_t)(EBX));
  /* 1206c527 push esi */
  push32((uint32_t)(ESI));
  /* 1206c528 push edi */
  push32((uint32_t)(EDI));
L_1206c529:;
  /* 1206c529 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c52d jne 0x1206c54d */
  if (!C.zf) goto L_1206c54d;
  /* 1206c52f push 0x1208d030 */
  push32((uint32_t)(0x1208d030u));
  /* 1206c534 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206c536 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1206c538 push 0x1208d024 */
  push32((uint32_t)(0x1208d024u));
  /* 1206c53d push 2 */
  push32((uint32_t)(0x2u));
  /* 1206c53f call 0x120648d0 */
  push32(0x1206c544u); f_120648d0();
  /* 1206c544 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c547 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c54a jne 0x1206c54d */
  if (!C.zf) goto L_1206c54d;
  /* 1206c54c int3  */
  x86_unimpl("int3 @ 0x1206c54c");
L_1206c54d:;
  /* 1206c54d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206c54f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206c551 jne 0x1206c529 */
  if (!C.zf) goto L_1206c529;
  /* 1206c553 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206c556 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1206c559 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c55c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206c55f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1206c562 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c565 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206c568 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1206c56e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206c570 je 0x1206c57f */
  if (C.zf) goto L_1206c57f;
  /* 1206c572 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c575 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206c578 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1206c57b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206c57d je 0x1206c595 */
  if (C.zf) goto L_1206c595;
L_1206c57f:;
  /* 1206c57f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c582 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1206c585 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1206c587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c58a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1206c58d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206c590 jmp 0x1206c78d */
  goto L_1206c78d;
L_1206c595:;
  /* 1206c595 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c598 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1206c59b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1206c59e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206c5a0 je 0x1206c5ec */
  if (C.zf) goto L_1206c5ec;
  /* 1206c5a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5a5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1206c5ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5af mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1206c5b2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1206c5b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206c5b7 je 0x1206c5d5 */
  if (C.zf) goto L_1206c5d5;
  /* 1206c5b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5bf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1206c5c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1206c5c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206c5ca and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1206c5cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5d0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1206c5d3 jmp 0x1206c5ec */
  goto L_1206c5ec;
L_1206c5d5:;
  /* 1206c5d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5d8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206c5db or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1206c5de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5e1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1206c5e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206c5e7 jmp 0x1206c78d */
  goto L_1206c78d;
L_1206c5ec:;
  /* 1206c5ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206c5f2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1206c5f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5f8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1206c5fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c5fe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206c601 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1206c604 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c607 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1206c60a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c60d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1206c614 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206c61b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206c61e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1206c621 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c624 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206c627 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1206c62d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206c62f jne 0x1206c65f */
  if (!C.zf) goto L_1206c65f;
  /* 1206c631 cmp dword ptr [ebp - 8], 0x12090150 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12090150u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c638 je 0x1206c643 */
  if (C.zf) goto L_1206c643;
  /* 1206c63a cmp dword ptr [ebp - 8], 0x12090170 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12090170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c641 jne 0x1206c653 */
  if (!C.zf) goto L_1206c653;
L_1206c643:;
  /* 1206c643 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206c646 push edx */
  push32((uint32_t)(EDX));
  /* 1206c647 call 0x1206e490 */
  push32(0x1206c64cu); f_1206e490();
  /* 1206c64c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c64f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206c651 jne 0x1206c65f */
  if (!C.zf) goto L_1206c65f;
L_1206c653:;
  /* 1206c653 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c656 push eax */
  push32((uint32_t)(EAX));
  /* 1206c657 call 0x1206e3c0 */
  push32(0x1206c65cu); f_1206e3c0();
  /* 1206c65c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206c65f:;
  /* 1206c65f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c662 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206c665 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1206c66b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206c66d je 0x1206c74b */
  if (C.zf) goto L_1206c74b;
L_1206c673:;
  /* 1206c673 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c676 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c679 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1206c67b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c67e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206c680 jge 0x1206c6a3 */
  if ((C.sf==C.of)) goto L_1206c6a3;
  /* 1206c682 push 0x1208cfe4 */
  push32((uint32_t)(0x1208cfe4u));
  /* 1206c687 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206c689 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1206c68e push 0x1208d024 */
  push32((uint32_t)(0x1208d024u));
  /* 1206c693 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206c695 call 0x120648d0 */
  push32(0x1206c69au); f_120648d0();
  /* 1206c69a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c69d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c6a0 jne 0x1206c6a3 */
  if (!C.zf) goto L_1206c6a3;
  /* 1206c6a2 int3  */
  x86_unimpl("int3 @ 0x1206c6a2");
L_1206c6a3:;
  /* 1206c6a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206c6a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206c6a7 jne 0x1206c673 */
  if (!C.zf) goto L_1206c673;
  /* 1206c6a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c6ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c6af mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1206c6b1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c6b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206c6b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c6ba mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1206c6bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c6c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c6c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1206c6c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c6c8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1206c6cb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c6ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c6d1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1206c6d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c6d8 jle 0x1206c6f6 */
  if ((C.zf||C.sf!=C.of)) goto L_1206c6f6;
  /* 1206c6da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206c6dd push ecx */
  push32((uint32_t)(ECX));
  /* 1206c6de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c6e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1206c6e4 push eax */
  push32((uint32_t)(EAX));
  /* 1206c6e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206c6e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1206c6e9 call 0x1206e0b0 */
  push32(0x1206c6eeu); f_1206e0b0();
  /* 1206c6ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c6f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1206c6f4 jmp 0x1206c73e */
  goto L_1206c73e;
L_1206c6f6:;
  /* 1206c6f6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c6fa je 0x1206c719 */
  if (C.zf) goto L_1206c719;
  /* 1206c6fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206c6ff sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1206c702 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206c705 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1206c708 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206c70b mov ecx, dword ptr [edx*4 + 0x12092fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12092fa0)));
  /* 1206c712 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c714 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1206c717 jmp 0x1206c720 */
  goto L_1206c720;
L_1206c719:;
  /* 1206c719 mov dword ptr [ebp - 0x14], 0x1208fa68 */
  w32((uint32_t)(EBP + -0x14), (0x1208fa68u));
L_1206c720:;
  /* 1206c720 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1206c723 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1206c727 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1206c72a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206c72c je 0x1206c73e */
  if (C.zf) goto L_1206c73e;
  /* 1206c72e push 2 */
  push32((uint32_t)(0x2u));
  /* 1206c730 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206c732 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206c735 push ecx */
  push32((uint32_t)(ECX));
  /* 1206c736 call 0x1206df60 */
  push32(0x1206c73bu); f_1206df60();
  /* 1206c73b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206c73e:;
  /* 1206c73e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c741 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1206c744 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1206c747 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1206c749 jmp 0x1206c769 */
  goto L_1206c769;
L_1206c74b:;
  /* 1206c74b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1206c752 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206c755 push edx */
  push32((uint32_t)(EDX));
  /* 1206c756 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1206c759 push eax */
  push32((uint32_t)(EAX));
  /* 1206c75a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206c75d push ecx */
  push32((uint32_t)(ECX));
  /* 1206c75e call 0x1206e0b0 */
  push32(0x1206c763u); f_1206e0b0();
  /* 1206c763 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c766 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1206c769:;
  /* 1206c769 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206c76c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c76f je 0x1206c785 */
  if (C.zf) goto L_1206c785;
  /* 1206c771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c774 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206c777 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1206c77a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c77d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1206c780 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206c783 jmp 0x1206c78d */
  goto L_1206c78d;
L_1206c785:;
  /* 1206c785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c788 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1206c78d:;
  /* 1206c78d pop edi */
  EDI = (pop32());
  /* 1206c78e pop esi */
  ESI = (pop32());
  /* 1206c78f pop ebx */
  EBX = (pop32());
  /* 1206c790 mov esp, ebp */
  ESP = (EBP);
  /* 1206c792 pop ebp */
  EBP = (pop32());
  /* 1206c793 ret  */
  ESPCHK(0x1206c520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7a0 @ 0x1206c7a0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1206c7a0(void) {
  FTRACE(0x1206c7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206c7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206c7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1206c7a3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c7a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1206c7aa push esi */
  push32((uint32_t)(ESI));
  /* 1206c7ab push edi */
  push32((uint32_t)(EDI));
  /* 1206c7ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1206c7b3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1206c7bd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1206c7c4:;
  /* 1206c7c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206c7c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1206c7c9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1206c7cc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c7d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206c7d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c7d6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1206c7d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206c7db je 0x1206d3b7 */
  if (C.zf) goto L_1206d3b7;
  /* 1206c7e1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c7e8 jl 0x1206d3b7 */
  if ((C.sf!=C.of)) goto L_1206d3b7;
  /* 1206c7ee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c7f2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c7f5 jl 0x1206c816 */
  if ((C.sf!=C.of)) goto L_1206c816;
  /* 1206c7f7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c7fb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c7fe jg 0x1206c816 */
  if ((!C.zf&&C.sf==C.of)) goto L_1206c816;
  /* 1206c800 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c804 movsx ecx, byte ptr [eax + 0x1208d01c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1208d01c))));
  /* 1206c80b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1206c80e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1206c814 jmp 0x1206c820 */
  goto L_1206c820;
L_1206c816:;
  /* 1206c816 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1206c820:;
  /* 1206c820 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1206c826 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1206c829 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206c82c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206c82f movsx edx, byte ptr [ecx + eax*8 + 0x1208d03c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1208d03c))));
  /* 1206c837 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1206c83a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1206c83d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206c840 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1206c846 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c84d ja 0x1206d3b2 */
  if ((!C.cf&&!C.zf)) goto L_1206d3b2;
  /* 1206c853 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1206c859 jmp dword ptr [ecx*4 + 0x1206d3c4] */
  switch (ECX) {
    case 0: goto L_1206c860;
    case 1: goto L_1206c8fa;
    case 2: goto L_1206c93c;
    case 3: goto L_1206c9ab;
    case 4: goto L_1206ca03;
    case 5: goto L_1206ca12;
    case 6: goto L_1206ca5e;
    case 7: goto L_1206caf1;
    case 8: goto L_1206c988;
    case 9: goto L_1206c993;
    case 10: goto L_1206c97e;
    case 11: goto L_1206c973;
    case 12: goto L_1206c99e;
    case 13: goto L_1206c9a6;
    default: x86_unimpl("switch@0x1206c859 out of table"); return;
  }
L_1206c860:;
  /* 1206c860 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1206c867 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206c86a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1206c870 mov eax, dword ptr [0x1208fca8] */
  EAX = (r32((uint32_t)(0x1208fca8)));
  /* 1206c875 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206c877 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1206c87b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1206c881 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206c883 je 0x1206c8dd */
  if (C.zf) goto L_1206c8dd;
  /* 1206c885 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1206c88b push edx */
  push32((uint32_t)(EDX));
  /* 1206c88c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c88f push eax */
  push32((uint32_t)(EAX));
  /* 1206c890 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c894 push ecx */
  push32((uint32_t)(ECX));
  /* 1206c895 call 0x1206d4d0 */
  push32(0x1206c89au); f_1206d4d0();
  /* 1206c89a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c89d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206c8a0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1206c8a2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1206c8a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206c8a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c8ab mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1206c8ae:;
  /* 1206c8ae movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c8b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206c8b4 jne 0x1206c8d7 */
  if (!C.zf) goto L_1206c8d7;
  /* 1206c8b6 push 0x1208d0bc */
  push32((uint32_t)(0x1208d0bcu));
  /* 1206c8bb push 0 */
  push32((uint32_t)(0x0u));
  /* 1206c8bd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1206c8c2 push 0x1208d0b0 */
  push32((uint32_t)(0x1208d0b0u));
  /* 1206c8c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206c8c9 call 0x120648d0 */
  push32(0x1206c8ceu); f_120648d0();
  /* 1206c8ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c8d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c8d4 jne 0x1206c8d7 */
  if (!C.zf) goto L_1206c8d7;
  /* 1206c8d6 int3  */
  x86_unimpl("int3 @ 0x1206c8d6");
L_1206c8d7:;
  /* 1206c8d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206c8d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206c8db jne 0x1206c8ae */
  if (!C.zf) goto L_1206c8ae;
L_1206c8dd:;
  /* 1206c8dd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1206c8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206c8e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206c8e7 push edx */
  push32((uint32_t)(EDX));
  /* 1206c8e8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c8ec push eax */
  push32((uint32_t)(EAX));
  /* 1206c8ed call 0x1206d4d0 */
  push32(0x1206c8f2u); f_1206d4d0();
  /* 1206c8f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c8f5 jmp 0x1206d3b2 */
  goto L_1206d3b2;
L_1206c8fa:;
  /* 1206c8fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1206c901 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206c904 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1206c90a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1206c910 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1206c916 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1206c91c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1206c91f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206c926 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1206c930 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1206c937 jmp 0x1206d3b2 */
  goto L_1206d3b2;
L_1206c93c:;
  /* 1206c93c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c940 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1206c946 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1206c94c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206c94f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1206c955 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c95c ja 0x1206c9a6 */
  if ((!C.cf&&!C.zf)) goto L_1206c9a6;
  /* 1206c95e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1206c964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206c966 mov al, byte ptr [ecx + 0x1206d3fc] */
  AL = (r8((uint32_t)(ECX + 0x1206d3fc)));
  /* 1206c96c jmp dword ptr [eax*4 + 0x1206d3e4] */
  switch (EAX) {
    case 0: goto L_1206c988;
    case 1: goto L_1206c993;
    case 2: goto L_1206c97e;
    case 3: goto L_1206c973;
    case 4: goto L_1206c99e;
    case 5: goto L_1206c9a6;
    default: x86_unimpl("switch@0x1206c96c out of table"); return;
  }
L_1206c973:;
  /* 1206c973 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206c976 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1206c979 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206c97c jmp 0x1206c9a6 */
  goto L_1206c9a6;
L_1206c97e:;
  /* 1206c97e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206c981 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1206c983 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206c986 jmp 0x1206c9a6 */
  goto L_1206c9a6;
L_1206c988:;
  /* 1206c988 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206c98b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1206c98e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206c991 jmp 0x1206c9a6 */
  goto L_1206c9a6;
L_1206c993:;
  /* 1206c993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206c996 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1206c999 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206c99c jmp 0x1206c9a6 */
  goto L_1206c9a6;
L_1206c99e:;
  /* 1206c99e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206c9a1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1206c9a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206c9a6:;
  /* 1206c9a6 jmp 0x1206d3b2 */
  goto L_1206d3b2;
L_1206c9ab:;
  /* 1206c9ab movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c9af cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c9b2 jne 0x1206c9e7 */
  if (!C.zf) goto L_1206c9e7;
  /* 1206c9b4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1206c9b7 push edx */
  push32((uint32_t)(EDX));
  /* 1206c9b8 call 0x1206d5e0 */
  push32(0x1206c9bdu); f_1206d5e0();
  /* 1206c9bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206c9c0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1206c9c6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206c9cd jge 0x1206c9e5 */
  if ((C.sf==C.of)) goto L_1206c9e5;
  /* 1206c9cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206c9d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1206c9d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206c9d7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1206c9dd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206c9df mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1206c9e5:;
  /* 1206c9e5 jmp 0x1206c9fe */
  goto L_1206c9fe;
L_1206c9e7:;
  /* 1206c9e7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1206c9ed imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206c9f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206c9f4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1206c9f8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1206c9fe:;
  /* 1206c9fe jmp 0x1206d3b2 */
  goto L_1206d3b2;
L_1206ca03:;
  /* 1206ca03 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1206ca0d jmp 0x1206d3b2 */
  goto L_1206d3b2;
L_1206ca12:;
  /* 1206ca12 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206ca16 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ca19 jne 0x1206ca42 */
  if (!C.zf) goto L_1206ca42;
  /* 1206ca1b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1206ca1e push eax */
  push32((uint32_t)(EAX));
  /* 1206ca1f call 0x1206d5e0 */
  push32(0x1206ca24u); f_1206d5e0();
  /* 1206ca24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ca27 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1206ca2d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ca34 jge 0x1206ca40 */
  if ((C.sf==C.of)) goto L_1206ca40;
  /* 1206ca36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1206ca40:;
  /* 1206ca40 jmp 0x1206ca59 */
  goto L_1206ca59;
L_1206ca42:;
  /* 1206ca42 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1206ca48 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ca4b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206ca4f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1206ca53 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1206ca59:;
  /* 1206ca59 jmp 0x1206d3b2 */
  goto L_1206d3b2;
L_1206ca5e:;
  /* 1206ca5e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206ca62 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1206ca68 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1206ca6e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ca71 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1206ca77 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ca7e ja 0x1206caec */
  if ((!C.cf&&!C.zf)) goto L_1206caec;
  /* 1206ca80 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1206ca86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206ca88 mov al, byte ptr [ecx + 0x1206d421] */
  AL = (r8((uint32_t)(ECX + 0x1206d421)));
  /* 1206ca8e jmp dword ptr [eax*4 + 0x1206d40d] */
  switch (EAX) {
    case 0: goto L_1206caa0;
    case 1: goto L_1206cad9;
    case 2: goto L_1206ca95;
    case 3: goto L_1206cae3;
    case 4: goto L_1206caec;
    default: x86_unimpl("switch@0x1206ca8e out of table"); return;
  }
L_1206ca95:;
  /* 1206ca95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ca98 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1206ca9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206ca9e jmp 0x1206caec */
  goto L_1206caec;
L_1206caa0:;
  /* 1206caa0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206caa3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1206caa6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206caa9 jne 0x1206cacb */
  if (!C.zf) goto L_1206cacb;
  /* 1206caab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206caae movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1206cab2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cab5 jne 0x1206cacb */
  if (!C.zf) goto L_1206cacb;
  /* 1206cab7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206caba add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cabd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1206cac0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cac3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1206cac6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206cac9 jmp 0x1206cad7 */
  goto L_1206cad7;
L_1206cacb:;
  /* 1206cacb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1206cad2 jmp 0x1206c860 */
  goto L_1206c860;
L_1206cad7:;
  /* 1206cad7 jmp 0x1206caec */
  goto L_1206caec;
L_1206cad9:;
  /* 1206cad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cadc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1206cade mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206cae1 jmp 0x1206caec */
  goto L_1206caec;
L_1206cae3:;
  /* 1206cae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cae6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1206cae9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1206caec:;
  /* 1206caec jmp 0x1206d3b2 */
  goto L_1206d3b2;
L_1206caf1:;
  /* 1206caf1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206caf5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1206cafb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1206cb01 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206cb04 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1206cb0a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cb11 ja 0x1206d1d7 */
  if ((!C.cf&&!C.zf)) goto L_1206d1d7;
  /* 1206cb17 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1206cb1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206cb1f mov cl, byte ptr [edx + 0x1206d48c] */
  CL = (r8((uint32_t)(EDX + 0x1206d48c)));
  /* 1206cb25 jmp dword ptr [ecx*4 + 0x1206d450] */
  switch (ECX) {
    case 0: goto L_1206cb2c;
    case 1: goto L_1206cdc0;
    case 2: goto L_1206cc50;
    case 3: goto L_1206cef9;
    case 4: goto L_1206cbbb;
    case 5: goto L_1206cb41;
    case 6: goto L_1206cecb;
    case 7: goto L_1206cdd0;
    case 8: goto L_1206cd75;
    case 9: goto L_1206cf45;
    case 10: goto L_1206ceef;
    case 11: goto L_1206cc66;
    case 12: goto L_1206cee3;
    case 13: goto L_1206cf05;
    case 14: goto L_1206d1d7;
    default: x86_unimpl("switch@0x1206cb25 out of table"); return;
  }
L_1206cb2c:;
  /* 1206cb2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cb2f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1206cb34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206cb36 jne 0x1206cb41 */
  if (!C.zf) goto L_1206cb41;
  /* 1206cb38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cb3b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1206cb3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1206cb41:;
  /* 1206cb41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cb44 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1206cb4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206cb4c je 0x1206cb87 */
  if (C.zf) goto L_1206cb87;
  /* 1206cb4e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1206cb51 push eax */
  push32((uint32_t)(EAX));
  /* 1206cb52 call 0x1206d620 */
  push32(0x1206cb57u); f_1206d620();
  /* 1206cb57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cb5a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1206cb5e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1206cb62 push ecx */
  push32((uint32_t)(ECX));
  /* 1206cb63 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1206cb69 push edx */
  push32((uint32_t)(EDX));
  /* 1206cb6a call 0x1206e700 */
  push32(0x1206cb6fu); f_1206e700();
  /* 1206cb6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cb72 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1206cb75 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cb79 jge 0x1206cb85 */
  if ((C.sf==C.of)) goto L_1206cb85;
  /* 1206cb7b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1206cb85:;
  /* 1206cb85 jmp 0x1206cbad */
  goto L_1206cbad;
L_1206cb87:;
  /* 1206cb87 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1206cb8a push eax */
  push32((uint32_t)(EAX));
  /* 1206cb8b call 0x1206d5e0 */
  push32(0x1206cb90u); f_1206d5e0();
  /* 1206cb90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cb93 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1206cb9a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1206cba0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1206cba6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1206cbad:;
  /* 1206cbad lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1206cbb3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1206cbb6 jmp 0x1206d1d7 */
  goto L_1206d1d7;
L_1206cbbb:;
  /* 1206cbbb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1206cbbe push eax */
  push32((uint32_t)(EAX));
  /* 1206cbbf call 0x1206d5e0 */
  push32(0x1206cbc4u); f_1206d5e0();
  /* 1206cbc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cbc7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1206cbcd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cbd4 je 0x1206cbe2 */
  if (C.zf) goto L_1206cbe2;
  /* 1206cbd6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1206cbdc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cbe0 jne 0x1206cbfc */
  if (!C.zf) goto L_1206cbfc;
L_1206cbe2:;
  /* 1206cbe2 mov edx, dword ptr [0x1208ffc0] */
  EDX = (r32((uint32_t)(0x1208ffc0)));
  /* 1206cbe8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1206cbeb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206cbee push eax */
  push32((uint32_t)(EAX));
  /* 1206cbef call 0x12068640 */
  push32(0x1206cbf4u); f_12068640();
  /* 1206cbf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cbf7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1206cbfa jmp 0x1206cc4b */
  goto L_1206cc4b;
L_1206cbfc:;
  /* 1206cbfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cbff and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1206cc05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206cc07 je 0x1206cc2c */
  if (C.zf) goto L_1206cc2c;
  /* 1206cc09 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1206cc0f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1206cc12 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1206cc15 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1206cc1b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1206cc1e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1206cc20 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1206cc23 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1206cc2a jmp 0x1206cc4b */
  goto L_1206cc4b;
L_1206cc2c:;
  /* 1206cc2c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1206cc33 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1206cc39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206cc3c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1206cc3f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1206cc45 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1206cc48 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1206cc4b:;
  /* 1206cc4b jmp 0x1206d1d7 */
  goto L_1206d1d7;
L_1206cc50:;
  /* 1206cc50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cc53 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1206cc59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206cc5b jne 0x1206cc66 */
  if (!C.zf) goto L_1206cc66;
  /* 1206cc5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cc60 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1206cc63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206cc66:;
  /* 1206cc66 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cc6d jne 0x1206cc7b */
  if (!C.zf) goto L_1206cc7b;
  /* 1206cc6f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1206cc79 jmp 0x1206cc87 */
  goto L_1206cc87;
L_1206cc7b:;
  /* 1206cc7b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1206cc81 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1206cc87:;
  /* 1206cc87 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1206cc8d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1206cc93 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1206cc96 push edx */
  push32((uint32_t)(EDX));
  /* 1206cc97 call 0x1206d5e0 */
  push32(0x1206cc9cu); f_1206d5e0();
  /* 1206cc9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cc9f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1206cca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cca5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1206ccaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206ccac je 0x1206cd16 */
  if (C.zf) goto L_1206cd16;
  /* 1206ccae cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ccb2 jne 0x1206ccbd */
  if (!C.zf) goto L_1206ccbd;
  /* 1206ccb4 mov ecx, dword ptr [0x1208ffc4] */
  ECX = (r32((uint32_t)(0x1208ffc4)));
  /* 1206ccba mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1206ccbd:;
  /* 1206ccbd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1206ccc4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ccc7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1206cccd:;
  /* 1206cccd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1206ccd3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1206ccd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ccdc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1206cce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206cce4 je 0x1206cd06 */
  if (C.zf) goto L_1206cd06;
  /* 1206cce6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1206ccec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206ccee mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1206ccf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206ccf3 je 0x1206cd06 */
  if (C.zf) goto L_1206cd06;
  /* 1206ccf5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1206ccfb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ccfe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1206cd04 jmp 0x1206cccd */
  goto L_1206cccd;
L_1206cd06:;
  /* 1206cd06 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1206cd0c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206cd0f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1206cd11 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1206cd14 jmp 0x1206cd70 */
  goto L_1206cd70;
L_1206cd16:;
  /* 1206cd16 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cd1a jne 0x1206cd24 */
  if (!C.zf) goto L_1206cd24;
  /* 1206cd1c mov eax, dword ptr [0x1208ffc0] */
  EAX = (r32((uint32_t)(0x1208ffc0)));
  /* 1206cd21 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1206cd24:;
  /* 1206cd24 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206cd27 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1206cd2d:;
  /* 1206cd2d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1206cd33 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1206cd39 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206cd3c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1206cd42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206cd44 je 0x1206cd64 */
  if (C.zf) goto L_1206cd64;
  /* 1206cd46 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1206cd4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1206cd4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206cd51 je 0x1206cd64 */
  if (C.zf) goto L_1206cd64;
  /* 1206cd53 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1206cd59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cd5c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1206cd62 jmp 0x1206cd2d */
  goto L_1206cd2d;
L_1206cd64:;
  /* 1206cd64 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1206cd6a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206cd6d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1206cd70:;
  /* 1206cd70 jmp 0x1206d1d7 */
  goto L_1206d1d7;
L_1206cd75:;
  /* 1206cd75 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1206cd78 push edx */
  push32((uint32_t)(EDX));
  /* 1206cd79 call 0x1206d5e0 */
  push32(0x1206cd7eu); f_1206d5e0();
  /* 1206cd7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cd81 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1206cd87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cd8a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1206cd8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206cd8f je 0x1206cda3 */
  if (C.zf) goto L_1206cda3;
  /* 1206cd91 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1206cd97 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1206cd9e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1206cda1 jmp 0x1206cdb1 */
  goto L_1206cdb1;
L_1206cda3:;
  /* 1206cda3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1206cda9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1206cdaf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1206cdb1:;
  /* 1206cdb1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1206cdbb jmp 0x1206d1d7 */
  goto L_1206d1d7;
L_1206cdc0:;
  /* 1206cdc0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1206cdc7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1206cdca add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206cdcd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1206cdd0:;
  /* 1206cdd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cdd3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1206cdd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206cdd8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1206cdde mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1206cde1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cde8 jge 0x1206cdf6 */
  if ((C.sf==C.of)) goto L_1206cdf6;
  /* 1206cdea mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1206cdf4 jmp 0x1206ce12 */
  goto L_1206ce12;
L_1206cdf6:;
  /* 1206cdf6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cdfd jne 0x1206ce12 */
  if (!C.zf) goto L_1206ce12;
  /* 1206cdff movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206ce03 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ce06 jne 0x1206ce12 */
  if (!C.zf) goto L_1206ce12;
  /* 1206ce08 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1206ce12:;
  /* 1206ce12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206ce15 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ce18 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1206ce1b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206ce1e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206ce21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206ce23 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206ce26 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1206ce2c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1206ce32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206ce35 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ce36 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1206ce3c push edx */
  push32((uint32_t)(EDX));
  /* 1206ce3d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206ce41 push eax */
  push32((uint32_t)(EAX));
  /* 1206ce42 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ce45 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ce46 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1206ce4c push edx */
  push32((uint32_t)(EDX));
  /* 1206ce4d call dword ptr [0x120903b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120903b0))), 0x1206ce53u);
  /* 1206ce53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ce56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ce59 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1206ce5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206ce60 je 0x1206ce78 */
  if (C.zf) goto L_1206ce78;
  /* 1206ce62 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ce69 jne 0x1206ce78 */
  if (!C.zf) goto L_1206ce78;
  /* 1206ce6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ce6e push ecx */
  push32((uint32_t)(ECX));
  /* 1206ce6f call dword ptr [0x120903bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120903bc))), 0x1206ce75u);
  /* 1206ce75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206ce78:;
  /* 1206ce78 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1206ce7c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ce7f jne 0x1206ce9a */
  if (!C.zf) goto L_1206ce9a;
  /* 1206ce81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ce84 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1206ce89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206ce8b jne 0x1206ce9a */
  if (!C.zf) goto L_1206ce9a;
  /* 1206ce8d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ce90 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ce91 call dword ptr [0x120903b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120903b4))), 0x1206ce97u);
  /* 1206ce97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206ce9a:;
  /* 1206ce9a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ce9d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1206cea0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206cea3 jne 0x1206ceb7 */
  if (!C.zf) goto L_1206ceb7;
  /* 1206cea5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cea8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1206ceab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206ceae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ceb1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ceb4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1206ceb7:;
  /* 1206ceb7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206ceba push eax */
  push32((uint32_t)(EAX));
  /* 1206cebb call 0x12068640 */
  push32(0x1206cec0u); f_12068640();
  /* 1206cec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cec3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1206cec6 jmp 0x1206d1d7 */
  goto L_1206d1d7;
L_1206cecb:;
  /* 1206cecb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cece or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1206ced1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206ced4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1206cede jmp 0x1206cf65 */
  goto L_1206cf65;
L_1206cee3:;
  /* 1206cee3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1206ceed jmp 0x1206cf65 */
  goto L_1206cf65;
L_1206ceef:;
  /* 1206ceef mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1206cef9:;
  /* 1206cef9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1206cf03 jmp 0x1206cf0f */
  goto L_1206cf0f;
L_1206cf05:;
  /* 1206cf05 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1206cf0f:;
  /* 1206cf0f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1206cf19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cf1c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1206cf22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206cf24 je 0x1206cf43 */
  if (C.zf) goto L_1206cf43;
  /* 1206cf26 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1206cf2d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1206cf33 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cf36 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1206cf3c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1206cf43:;
  /* 1206cf43 jmp 0x1206cf65 */
  goto L_1206cf65;
L_1206cf45:;
  /* 1206cf45 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1206cf4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cf52 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1206cf58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206cf5a je 0x1206cf65 */
  if (C.zf) goto L_1206cf65;
  /* 1206cf5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cf5f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1206cf62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206cf65:;
  /* 1206cf65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cf68 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1206cf6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206cf6f je 0x1206cf8e */
  if (C.zf) goto L_1206cf8e;
  /* 1206cf71 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1206cf74 push ecx */
  push32((uint32_t)(ECX));
  /* 1206cf75 call 0x1206d600 */
  push32(0x1206cf7au); f_1206d600();
  /* 1206cf7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cf7d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1206cf83 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1206cf89 jmp 0x1206d01f */
  goto L_1206d01f;
L_1206cf8e:;
  /* 1206cf8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cf91 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1206cf94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206cf96 je 0x1206cfe0 */
  if (C.zf) goto L_1206cfe0;
  /* 1206cf98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cf9b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1206cf9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206cfa0 je 0x1206cfc0 */
  if (C.zf) goto L_1206cfc0;
  /* 1206cfa2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1206cfa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1206cfa6 call 0x1206d5e0 */
  push32(0x1206cfabu); f_1206d5e0();
  /* 1206cfab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cfae movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1206cfb1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1206cfb2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1206cfb8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1206cfbe jmp 0x1206cfde */
  goto L_1206cfde;
L_1206cfc0:;
  /* 1206cfc0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1206cfc3 push edx */
  push32((uint32_t)(EDX));
  /* 1206cfc4 call 0x1206d5e0 */
  push32(0x1206cfc9u); f_1206d5e0();
  /* 1206cfc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cfcc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206cfd1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1206cfd2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1206cfd8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1206cfde:;
  /* 1206cfde jmp 0x1206d01f */
  goto L_1206d01f;
L_1206cfe0:;
  /* 1206cfe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206cfe3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1206cfe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206cfe8 je 0x1206d005 */
  if (C.zf) goto L_1206d005;
  /* 1206cfea lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1206cfed push ecx */
  push32((uint32_t)(ECX));
  /* 1206cfee call 0x1206d5e0 */
  push32(0x1206cff3u); f_1206d5e0();
  /* 1206cff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206cff6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1206cff7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1206cffd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1206d003 jmp 0x1206d01f */
  goto L_1206d01f;
L_1206d005:;
  /* 1206d005 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1206d008 push edx */
  push32((uint32_t)(EDX));
  /* 1206d009 call 0x1206d5e0 */
  push32(0x1206d00eu); f_1206d5e0();
  /* 1206d00e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d011 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206d013 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1206d019 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1206d01f:;
  /* 1206d01f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d022 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1206d025 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206d027 je 0x1206d067 */
  if (C.zf) goto L_1206d067;
  /* 1206d029 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d030 jg 0x1206d067 */
  if ((!C.zf&&C.sf==C.of)) goto L_1206d067;
  /* 1206d032 jl 0x1206d03d */
  if ((C.sf!=C.of)) goto L_1206d03d;
  /* 1206d034 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d03b jae 0x1206d067 */
  if (!C.cf) goto L_1206d067;
L_1206d03d:;
  /* 1206d03d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1206d043 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206d045 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1206d04b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d04e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206d050 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1206d056 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1206d05c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d05f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1206d062 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206d065 jmp 0x1206d07f */
  goto L_1206d07f;
L_1206d067:;
  /* 1206d067 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1206d06d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1206d073 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1206d079 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1206d07f:;
  /* 1206d07f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d082 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1206d088 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206d08a jne 0x1206d0a7 */
  if (!C.zf) goto L_1206d0a7;
  /* 1206d08c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1206d092 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1206d098 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1206d09b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1206d0a1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1206d0a7:;
  /* 1206d0a7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d0ae jge 0x1206d0bc */
  if ((C.sf==C.of)) goto L_1206d0bc;
  /* 1206d0b0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1206d0ba jmp 0x1206d0c5 */
  goto L_1206d0c5;
L_1206d0bc:;
  /* 1206d0bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d0bf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1206d0c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206d0c5:;
  /* 1206d0c5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1206d0cb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1206d0d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206d0d3 jne 0x1206d0dc */
  if (!C.zf) goto L_1206d0dc;
  /* 1206d0d5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1206d0dc:;
  /* 1206d0dc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1206d0df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1206d0e2:;
  /* 1206d0e2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1206d0e8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1206d0ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d0f1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1206d0f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206d0f9 jg 0x1206d10f */
  if ((!C.zf&&C.sf==C.of)) goto L_1206d10f;
  /* 1206d0fb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1206d101 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1206d107 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206d109 je 0x1206d190 */
  if (C.zf) goto L_1206d190;
L_1206d10f:;
  /* 1206d10f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1206d115 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1206d116 push edx */
  push32((uint32_t)(EDX));
  /* 1206d117 push eax */
  push32((uint32_t)(EAX));
  /* 1206d118 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1206d11e push edx */
  push32((uint32_t)(EDX));
  /* 1206d11f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1206d125 push eax */
  push32((uint32_t)(EAX));
  /* 1206d126 call 0x1206c4a0 */
  push32(0x1206d12bu); f_1206c4a0();
  /* 1206d12b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d12e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1206d134 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1206d13a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1206d13b push edx */
  push32((uint32_t)(EDX));
  /* 1206d13c push eax */
  push32((uint32_t)(EAX));
  /* 1206d13d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1206d143 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d144 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1206d14a push edx */
  push32((uint32_t)(EDX));
  /* 1206d14b call 0x1206c430 */
  push32(0x1206d150u); f_1206c430();
  /* 1206d150 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1206d156 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1206d15c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d163 jle 0x1206d177 */
  if ((C.zf||C.sf!=C.of)) goto L_1206d177;
  /* 1206d165 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1206d16b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d171 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1206d177:;
  /* 1206d177 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206d17a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1206d180 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1206d182 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206d185 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d188 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1206d18b jmp 0x1206d0e2 */
  goto L_1206d0e2;
L_1206d190:;
  /* 1206d190 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1206d193 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d196 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1206d199 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206d19c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d19f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1206d1a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d1a5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1206d1aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206d1ac je 0x1206d1d7 */
  if (C.zf) goto L_1206d1d7;
  /* 1206d1ae mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206d1b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1206d1b4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d1b7 jne 0x1206d1bf */
  if (!C.zf) goto L_1206d1bf;
  /* 1206d1b9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d1bd jne 0x1206d1d7 */
  if (!C.zf) goto L_1206d1d7;
L_1206d1bf:;
  /* 1206d1bf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206d1c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d1c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1206d1c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206d1cb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1206d1ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206d1d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d1d4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1206d1d7:;
  /* 1206d1d7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d1de jne 0x1206d3b2 */
  if (!C.zf) goto L_1206d3b2;
  /* 1206d1e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d1e7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1206d1ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206d1ec je 0x1206d23d */
  if (C.zf) goto L_1206d23d;
  /* 1206d1ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d1f1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1206d1f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206d1f9 je 0x1206d20b */
  if (C.zf) goto L_1206d20b;
  /* 1206d1fb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1206d202 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1206d209 jmp 0x1206d23d */
  goto L_1206d23d;
L_1206d20b:;
  /* 1206d20b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d20e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1206d211 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206d213 je 0x1206d225 */
  if (C.zf) goto L_1206d225;
  /* 1206d215 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1206d21c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1206d223 jmp 0x1206d23d */
  goto L_1206d23d;
L_1206d225:;
  /* 1206d225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d228 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1206d22b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206d22d je 0x1206d23d */
  if (C.zf) goto L_1206d23d;
  /* 1206d22f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1206d236 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1206d23d:;
  /* 1206d23d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1206d243 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d246 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d249 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1206d24f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d252 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1206d255 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206d257 jne 0x1206d275 */
  if (!C.zf) goto L_1206d275;
  /* 1206d259 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1206d25f push eax */
  push32((uint32_t)(EAX));
  /* 1206d260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d263 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d264 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1206d26a push edx */
  push32((uint32_t)(EDX));
  /* 1206d26b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1206d26d call 0x1206d550 */
  push32(0x1206d272u); f_1206d550();
  /* 1206d272 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206d275:;
  /* 1206d275 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1206d27b push eax */
  push32((uint32_t)(EAX));
  /* 1206d27c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d27f push ecx */
  push32((uint32_t)(ECX));
  /* 1206d280 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206d283 push edx */
  push32((uint32_t)(EDX));
  /* 1206d284 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1206d28a push eax */
  push32((uint32_t)(EAX));
  /* 1206d28b call 0x1206d590 */
  push32(0x1206d290u); f_1206d590();
  /* 1206d290 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d296 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1206d299 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206d29b je 0x1206d2c3 */
  if (C.zf) goto L_1206d2c3;
  /* 1206d29d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d2a0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1206d2a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206d2a5 jne 0x1206d2c3 */
  if (!C.zf) goto L_1206d2c3;
  /* 1206d2a7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1206d2ad push eax */
  push32((uint32_t)(EAX));
  /* 1206d2ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d2b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d2b2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1206d2b8 push edx */
  push32((uint32_t)(EDX));
  /* 1206d2b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1206d2bb call 0x1206d550 */
  push32(0x1206d2c0u); f_1206d550();
  /* 1206d2c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206d2c3:;
  /* 1206d2c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d2c7 je 0x1206d371 */
  if (C.zf) goto L_1206d371;
  /* 1206d2cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d2d1 jle 0x1206d371 */
  if ((C.zf||C.sf!=C.of)) goto L_1206d371;
  /* 1206d2d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206d2da mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1206d2e0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206d2e3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1206d2e9:;
  /* 1206d2e9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1206d2ef mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1206d2f5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d2f8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1206d2fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206d300 je 0x1206d36f */
  if (C.zf) goto L_1206d36f;
  /* 1206d302 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1206d308 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1206d30b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1206d312 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1206d319 push eax */
  push32((uint32_t)(EAX));
  /* 1206d31a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1206d320 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d321 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1206d327 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d32a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1206d330 call 0x1206e700 */
  push32(0x1206d335u); f_1206e700();
  /* 1206d335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d338 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1206d33e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d345 jg 0x1206d349 */
  if ((!C.zf&&C.sf==C.of)) goto L_1206d349;
  /* 1206d347 jmp 0x1206d36f */
  goto L_1206d36f;
L_1206d349:;
  /* 1206d349 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1206d34f push eax */
  push32((uint32_t)(EAX));
  /* 1206d350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d353 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d354 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1206d35a push edx */
  push32((uint32_t)(EDX));
  /* 1206d35b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1206d361 push eax */
  push32((uint32_t)(EAX));
  /* 1206d362 call 0x1206d590 */
  push32(0x1206d367u); f_1206d590();
  /* 1206d367 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d36a jmp 0x1206d2e9 */
  goto L_1206d2e9;
L_1206d36f:;
  /* 1206d36f jmp 0x1206d38c */
  goto L_1206d38c;
L_1206d371:;
  /* 1206d371 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1206d377 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d37b push edx */
  push32((uint32_t)(EDX));
  /* 1206d37c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206d37f push eax */
  push32((uint32_t)(EAX));
  /* 1206d380 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206d383 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d384 call 0x1206d590 */
  push32(0x1206d389u); f_1206d590();
  /* 1206d389 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206d38c:;
  /* 1206d38c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d38f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1206d392 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206d394 je 0x1206d3b2 */
  if (C.zf) goto L_1206d3b2;
  /* 1206d396 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1206d39c push eax */
  push32((uint32_t)(EAX));
  /* 1206d39d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d3a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d3a1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1206d3a7 push edx */
  push32((uint32_t)(EDX));
  /* 1206d3a8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1206d3aa call 0x1206d550 */
  push32(0x1206d3afu); f_1206d550();
  /* 1206d3af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206d3b2:;
  /* 1206d3b2 jmp 0x1206c7c4 */
  goto L_1206c7c4;
L_1206d3b7:;
  /* 1206d3b7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1206d3bd pop edi */
  EDI = (pop32());
  /* 1206d3be pop esi */
  ESI = (pop32());
  /* 1206d3bf pop ebx */
  EBX = (pop32());
  /* 1206d3c0 mov esp, ebp */
  ESP = (EBP);
  /* 1206d3c2 pop ebp */
  EBP = (pop32());
  /* 1206d3c3 ret  */
  ESPCHK(0x1206c7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4d0 @ 0x1206d4d0 (119 bytes, 44 insns) */
void f_1206d4d0(void) {
  FTRACE(0x1206d4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1206d4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d4d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d4d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1206d4da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d4dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d4e0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1206d4e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d4e6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d4ea jl 0x1206d512 */
  if ((C.sf!=C.of)) goto L_1206d512;
  /* 1206d4ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d4ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1206d4f1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1206d4f4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1206d4f6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1206d4fa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1206d500 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206d503 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d506 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206d508 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d50b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d50e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1206d510 jmp 0x1206d525 */
  goto L_1206d525;
L_1206d512:;
  /* 1206d512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d515 push edx */
  push32((uint32_t)(EDX));
  /* 1206d516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d519 push eax */
  push32((uint32_t)(EAX));
  /* 1206d51a call 0x1206c520 */
  push32(0x1206d51fu); f_1206c520();
  /* 1206d51f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d522 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206d525:;
  /* 1206d525 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d529 jne 0x1206d536 */
  if (!C.zf) goto L_1206d536;
  /* 1206d52b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206d52e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1206d534 jmp 0x1206d543 */
  goto L_1206d543;
L_1206d536:;
  /* 1206d536 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206d539 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1206d53b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d53e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206d541 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1206d543:;
  /* 1206d543 mov esp, ebp */
  ESP = (EBP);
  /* 1206d545 pop ebp */
  EBP = (pop32());
  /* 1206d546 ret  */
  ESPCHK(0x1206d4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d550 @ 0x1206d550 (53 bytes, 23 insns) */
void f_1206d550(void) {
  FTRACE(0x1206d550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d550 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d551 mov ebp, esp */
  EBP = (ESP);
L_1206d553:;
  /* 1206d553 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d556 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d559 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d55c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1206d55f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206d561 jle 0x1206d583 */
  if ((C.zf||C.sf!=C.of)) goto L_1206d583;
  /* 1206d563 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206d566 push edx */
  push32((uint32_t)(EDX));
  /* 1206d567 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206d56a push eax */
  push32((uint32_t)(EAX));
  /* 1206d56b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d56e push ecx */
  push32((uint32_t)(ECX));
  /* 1206d56f call 0x1206d4d0 */
  push32(0x1206d574u); f_1206d4d0();
  /* 1206d574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d577 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206d57a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d57d jne 0x1206d581 */
  if (!C.zf) goto L_1206d581;
  /* 1206d57f jmp 0x1206d583 */
  goto L_1206d583;
L_1206d581:;
  /* 1206d581 jmp 0x1206d553 */
  goto L_1206d553;
L_1206d583:;
  /* 1206d583 pop ebp */
  EBP = (pop32());
  /* 1206d584 ret  */
  ESPCHK(0x1206d550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d590 @ 0x1206d590 (74 bytes, 31 insns) */
void f_1206d590(void) {
  FTRACE(0x1206d590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d590 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d591 mov ebp, esp */
  EBP = (ESP);
  /* 1206d593 push ecx */
  push32((uint32_t)(ECX));
L_1206d594:;
  /* 1206d594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d597 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d59a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d59d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1206d5a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206d5a2 jle 0x1206d5d6 */
  if ((C.zf||C.sf!=C.of)) goto L_1206d5d6;
  /* 1206d5a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206d5a7 push edx */
  push32((uint32_t)(EDX));
  /* 1206d5a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206d5ab push eax */
  push32((uint32_t)(EAX));
  /* 1206d5ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d5af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1206d5b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206d5b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d5b8 push eax */
  push32((uint32_t)(EAX));
  /* 1206d5b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d5bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d5bf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1206d5c2 call 0x1206d4d0 */
  push32(0x1206d5c7u); f_1206d4d0();
  /* 1206d5c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d5ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206d5cd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d5d0 jne 0x1206d5d4 */
  if (!C.zf) goto L_1206d5d4;
  /* 1206d5d2 jmp 0x1206d5d6 */
  goto L_1206d5d6;
L_1206d5d4:;
  /* 1206d5d4 jmp 0x1206d594 */
  goto L_1206d594;
L_1206d5d6:;
  /* 1206d5d6 mov esp, ebp */
  ESP = (EBP);
  /* 1206d5d8 pop ebp */
  EBP = (pop32());
  /* 1206d5d9 ret  */
  ESPCHK(0x1206d590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5e0 @ 0x1206d5e0 (26 bytes, 12 insns) */
void f_1206d5e0(void) {
  FTRACE(0x1206d5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1206d5e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d5e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206d5e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d5eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d5ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1206d5f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d5f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206d5f5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1206d5f8 pop ebp */
  EBP = (pop32());
  /* 1206d5f9 ret  */
  ESPCHK(0x1206d5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d600 @ 0x1206d600 (31 bytes, 14 insns) */
void f_1206d600(void) {
  FTRACE(0x1206d600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d600 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d601 mov ebp, esp */
  EBP = (ESP);
  /* 1206d603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d606 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206d608 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d60b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d60e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1206d610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d613 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206d615 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d618 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1206d61a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1206d61d pop ebp */
  EBP = (pop32());
  /* 1206d61e ret  */
  ESPCHK(0x1206d600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d620 @ 0x1206d620 (27 bytes, 12 insns) */
void f_1206d620(void) {
  FTRACE(0x1206d620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d620 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d621 mov ebp, esp */
  EBP = (ESP);
  /* 1206d623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d626 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206d628 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d62b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d62e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1206d630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d633 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1206d635 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1206d639 pop ebp */
  EBP = (pop32());
  /* 1206d63a ret  */
  ESPCHK(0x1206d620u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1206d640 (145 bytes, 42 insns) */
void f_1206d640(void) {
  FTRACE(0x1206d640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d640 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d641 mov ebp, esp */
  EBP = (ESP);
  /* 1206d643 push ecx */
  push32((uint32_t)(ECX));
  /* 1206d644 call 0x1206d6f0 */
  push32(0x1206d649u); f_1206d6f0();
  /* 1206d649 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d64c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1206d64e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206d655 jmp 0x1206d660 */
  goto L_1206d660;
L_1206d657:;
  /* 1206d657 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d65a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d65d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206d660:;
  /* 1206d660 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d664 jae 0x1206d68a */
  if (!C.cf) goto L_1206d68a;
  /* 1206d666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d669 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d66c cmp ecx, dword ptr [eax*8 + 0x1208ffc8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1208ffc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d673 jne 0x1206d688 */
  if (!C.zf) goto L_1206d688;
  /* 1206d675 call 0x1206d6e0 */
  push32(0x1206d67au); f_1206d6e0();
  /* 1206d67a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206d67d mov ecx, dword ptr [edx*8 + 0x1208ffcc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1208ffcc)));
  /* 1206d684 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1206d686 jmp 0x1206d6cd */
  goto L_1206d6cd;
L_1206d688:;
  /* 1206d688 jmp 0x1206d657 */
  goto L_1206d657;
L_1206d68a:;
  /* 1206d68a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d68e jb 0x1206d6a3 */
  if (C.cf) goto L_1206d6a3;
  /* 1206d690 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d694 ja 0x1206d6a3 */
  if ((!C.cf&&!C.zf)) goto L_1206d6a3;
  /* 1206d696 call 0x1206d6e0 */
  push32(0x1206d69bu); f_1206d6e0();
  /* 1206d69b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1206d6a1 jmp 0x1206d6cd */
  goto L_1206d6cd;
L_1206d6a3:;
  /* 1206d6a3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d6aa jb 0x1206d6c2 */
  if (C.cf) goto L_1206d6c2;
  /* 1206d6ac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d6b3 ja 0x1206d6c2 */
  if ((!C.cf&&!C.zf)) goto L_1206d6c2;
  /* 1206d6b5 call 0x1206d6e0 */
  push32(0x1206d6bau); f_1206d6e0();
  /* 1206d6ba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1206d6c0 jmp 0x1206d6cd */
  goto L_1206d6cd;
L_1206d6c2:;
  /* 1206d6c2 call 0x1206d6e0 */
  push32(0x1206d6c7u); f_1206d6e0();
  /* 1206d6c7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1206d6cd:;
  /* 1206d6cd mov esp, ebp */
  ESP = (EBP);
  /* 1206d6cf pop ebp */
  EBP = (pop32());
  /* 1206d6d0 ret  */
  ESPCHK(0x1206d640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6e0 @ 0x1206d6e0 (13 bytes, 6 insns) */
void f_1206d6e0(void) {
  FTRACE(0x1206d6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1206d6e3 call 0x12065250 */
  push32(0x1206d6e8u); f_12065250();
  /* 1206d6e8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d6eb pop ebp */
  EBP = (pop32());
  /* 1206d6ec ret  */
  ESPCHK(0x1206d6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6f0 @ 0x1206d6f0 (13 bytes, 6 insns) */
void f_1206d6f0(void) {
  FTRACE(0x1206d6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1206d6f3 call 0x12065250 */
  push32(0x1206d6f8u); f_12065250();
  /* 1206d6f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d6fb pop ebp */
  EBP = (pop32());
  /* 1206d6fc ret  */
  ESPCHK(0x1206d6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d700 @ 0x1206d700 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1206d700(void) {
  FTRACE(0x1206d700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206d700 push ebp */
  push32((uint32_t)(EBP));
  /* 1206d701 mov ebp, esp */
  EBP = (ESP);
  /* 1206d703 push edi */
  push32((uint32_t)(EDI));
  /* 1206d704 push esi */
  push32((uint32_t)(ESI));
  /* 1206d705 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1206d708 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206d70b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d70e mov eax, ecx */
  EAX = (ECX);
  /* 1206d710 mov edx, ecx */
  EDX = (ECX);
  /* 1206d712 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d714 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d716 jbe 0x1206d720 */
  if ((C.cf||C.zf)) goto L_1206d720;
  /* 1206d718 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d71a jb 0x1206d898 */
  if (C.cf) goto L_1206d898;
L_1206d720:;
  /* 1206d720 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1206d726 jne 0x1206d73c */
  if (!C.zf) goto L_1206d73c;
  /* 1206d728 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206d72b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1206d72e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d731 jb 0x1206d75c */
  if (C.cf) goto L_1206d75c;
  /* 1206d733 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206d735 jmp dword ptr [edx*4 + 0x1206d848] */
  switch (EDX) {
    case 0: goto L_1206d858;
    case 1: goto L_1206d860;
    case 2: goto L_1206d86c;
    case 3: goto L_1206d880;
    default: x86_unimpl("switch@0x1206d735 out of table"); return;
  }
L_1206d73c:;
  /* 1206d73c mov eax, edi */
  EAX = (EDI);
  /* 1206d73e mov edx, 3 */
  EDX = (0x3u);
  /* 1206d743 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d746 jb 0x1206d754 */
  if (C.cf) goto L_1206d754;
  /* 1206d748 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1206d74b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d74d jmp dword ptr [eax*4 + 0x1206d760] */
  switch (EAX) {
    case 1: goto L_1206d770;
    case 2: goto L_1206d79c;
    case 3: goto L_1206d7c0;
    default: x86_unimpl("switch@0x1206d74d out of table"); return;
  }
L_1206d754:;
  /* 1206d754 jmp dword ptr [ecx*4 + 0x1206d858] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1206d858)))); return;
  /* 1206d75b nop  */
  /* nop */
L_1206d75c:;
  /* 1206d75c jmp dword ptr [ecx*4 + 0x1206d7dc] */
  switch (ECX) {
    case 0: goto L_1206d83f;
    case 1: goto L_1206d82c;
    case 2: goto L_1206d824;
    case 3: goto L_1206d81c;
    case 4: goto L_1206d814;
    case 5: goto L_1206d80c;
    case 6: goto L_1206d804;
    case 7: goto L_1206d7fc;
    default: x86_unimpl("switch@0x1206d75c out of table"); return;
  }
  /* 1206d763 nop  */
  /* nop */
L_1206d770:;
  /* 1206d770 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206d772 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206d774 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206d776 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206d779 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206d77c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206d77f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206d782 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206d785 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d788 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d78b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d78e jb 0x1206d75c */
  if (C.cf) goto L_1206d75c;
  /* 1206d790 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206d792 jmp dword ptr [edx*4 + 0x1206d848] */
  switch (EDX) {
    case 0: goto L_1206d858;
    case 1: goto L_1206d860;
    case 2: goto L_1206d86c;
    case 3: goto L_1206d880;
    default: x86_unimpl("switch@0x1206d792 out of table"); return;
  }
  /* 1206d799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206d79c:;
  /* 1206d79c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206d79e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206d7a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206d7a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206d7a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206d7a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206d7ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d7ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d7b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d7b4 jb 0x1206d75c */
  if (C.cf) goto L_1206d75c;
  /* 1206d7b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206d7b8 jmp dword ptr [edx*4 + 0x1206d848] */
  switch (EDX) {
    case 0: goto L_1206d858;
    case 1: goto L_1206d860;
    case 2: goto L_1206d86c;
    case 3: goto L_1206d880;
    default: x86_unimpl("switch@0x1206d7b8 out of table"); return;
  }
  /* 1206d7bf nop  */
  /* nop */
L_1206d7c0:;
  /* 1206d7c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206d7c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206d7c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206d7c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1206d7c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206d7ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1206d7cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d7ce jb 0x1206d75c */
  if (C.cf) goto L_1206d75c;
  /* 1206d7d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206d7d2 jmp dword ptr [edx*4 + 0x1206d848] */
  switch (EDX) {
    case 0: goto L_1206d858;
    case 1: goto L_1206d860;
    case 2: goto L_1206d86c;
    case 3: goto L_1206d880;
    default: x86_unimpl("switch@0x1206d7d2 out of table"); return;
  }
  /* 1206d7d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206d7fc:;
  /* 1206d7fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1206d800 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1206d804:;
  /* 1206d804 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1206d808 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1206d80c:;
  /* 1206d80c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1206d810 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1206d814:;
  /* 1206d814 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1206d818 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1206d81c:;
  /* 1206d81c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1206d820 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1206d824:;
  /* 1206d824 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1206d828 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1206d82c:;
  /* 1206d82c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1206d830 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1206d834 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1206d83b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d83d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1206d83f:;
  /* 1206d83f jmp dword ptr [edx*4 + 0x1206d848] */
  switch (EDX) {
    case 0: goto L_1206d858;
    case 1: goto L_1206d860;
    case 2: goto L_1206d86c;
    case 3: goto L_1206d880;
    default: x86_unimpl("switch@0x1206d83f out of table"); return;
  }
  /* 1206d846 mov edi, edi */
  EDI = (EDI);
L_1206d858:;
  /* 1206d858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d85b pop esi */
  ESI = (pop32());
  /* 1206d85c pop edi */
  EDI = (pop32());
  /* 1206d85d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206d85e ret  */
  ESPCHK(0x1206d700u, _esp0);
  ESP += 4; return;
  /* 1206d85f nop  */
  /* nop */
L_1206d860:;
  /* 1206d860 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206d862 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206d864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d867 pop esi */
  ESI = (pop32());
  /* 1206d868 pop edi */
  EDI = (pop32());
  /* 1206d869 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206d86a ret  */
  ESPCHK(0x1206d700u, _esp0);
  ESP += 4; return;
  /* 1206d86b nop  */
  /* nop */
L_1206d86c:;
  /* 1206d86c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206d86e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206d870 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206d873 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206d876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d879 pop esi */
  ESI = (pop32());
  /* 1206d87a pop edi */
  EDI = (pop32());
  /* 1206d87b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206d87c ret  */
  ESPCHK(0x1206d700u, _esp0);
  ESP += 4; return;
  /* 1206d87d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206d880:;
  /* 1206d880 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1206d882 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1206d884 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206d887 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206d88a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206d88d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206d890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d893 pop esi */
  ESI = (pop32());
  /* 1206d894 pop edi */
  EDI = (pop32());
  /* 1206d895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206d896 ret  */
  ESPCHK(0x1206d700u, _esp0);
  ESP += 4; return;
  /* 1206d897 nop  */
  /* nop */
L_1206d898:;
  /* 1206d898 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1206d89c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1206d8a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1206d8a6 jne 0x1206d8cc */
  if (!C.zf) goto L_1206d8cc;
  /* 1206d8a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206d8ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1206d8ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d8b1 jb 0x1206d8c0 */
  if (C.cf) goto L_1206d8c0;
  /* 1206d8b3 std  */
  C.df=1;
  /* 1206d8b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206d8b6 cld  */
  C.df=0;
  /* 1206d8b7 jmp dword ptr [edx*4 + 0x1206d9e0] */
  switch (EDX) {
    case 0: goto L_1206d9f0;
    case 1: goto L_1206d9f8;
    case 2: goto L_1206da08;
    case 3: goto L_1206da1c;
    default: x86_unimpl("switch@0x1206d8b7 out of table"); return;
  }
  /* 1206d8be mov edi, edi */
  EDI = (EDI);
L_1206d8c0:;
  /* 1206d8c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206d8c2 jmp dword ptr [ecx*4 + 0x1206d990] */
  switch (ECX) {
    case 0: goto L_1206d9d7;
    default: x86_unimpl("switch@0x1206d8c2 out of table"); return;
  }
  /* 1206d8c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206d8cc:;
  /* 1206d8cc mov eax, edi */
  EAX = (EDI);
  /* 1206d8ce mov edx, 3 */
  EDX = (0x3u);
  /* 1206d8d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d8d6 jb 0x1206d8e4 */
  if (C.cf) goto L_1206d8e4;
  /* 1206d8d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1206d8db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d8dd jmp dword ptr [eax*4 + 0x1206d8e8] */
  switch (EAX) {
    case 1: goto L_1206d8f8;
    case 2: goto L_1206d918;
    case 3: goto L_1206d940;
    default: x86_unimpl("switch@0x1206d8dd out of table"); return;
  }
L_1206d8e4:;
  /* 1206d8e4 jmp dword ptr [ecx*4 + 0x1206d9e0] */
  switch (ECX) {
    case 0: goto L_1206d9f0;
    case 1: goto L_1206d9f8;
    case 2: goto L_1206da08;
    case 3: goto L_1206da1c;
    default: x86_unimpl("switch@0x1206d8e4 out of table"); return;
  }
  /* 1206d8eb nop  */
  /* nop */
L_1206d8f8:;
  /* 1206d8f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206d8fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206d8fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206d900 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1206d901 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206d904 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1206d905 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d908 jb 0x1206d8c0 */
  if (C.cf) goto L_1206d8c0;
  /* 1206d90a std  */
  C.df=1;
  /* 1206d90b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206d90d cld  */
  C.df=0;
  /* 1206d90e jmp dword ptr [edx*4 + 0x1206d9e0] */
  switch (EDX) {
    case 0: goto L_1206d9f0;
    case 1: goto L_1206d9f8;
    case 2: goto L_1206da08;
    case 3: goto L_1206da1c;
    default: x86_unimpl("switch@0x1206d90e out of table"); return;
  }
  /* 1206d915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206d918:;
  /* 1206d918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206d91b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206d91d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206d920 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206d923 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206d926 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206d929 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d92c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d92f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d932 jb 0x1206d8c0 */
  if (C.cf) goto L_1206d8c0;
  /* 1206d934 std  */
  C.df=1;
  /* 1206d935 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206d937 cld  */
  C.df=0;
  /* 1206d938 jmp dword ptr [edx*4 + 0x1206d9e0] */
  switch (EDX) {
    case 0: goto L_1206d9f0;
    case 1: goto L_1206d9f8;
    case 2: goto L_1206da08;
    case 3: goto L_1206da1c;
    default: x86_unimpl("switch@0x1206d938 out of table"); return;
  }
  /* 1206d93f nop  */
  /* nop */
L_1206d940:;
  /* 1206d940 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206d943 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1206d945 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206d948 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206d94b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206d94e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206d951 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1206d954 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206d957 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d95a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206d95d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206d960 jb 0x1206d8c0 */
  if (C.cf) goto L_1206d8c0;
  /* 1206d966 std  */
  C.df=1;
  /* 1206d967 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1206d969 cld  */
  C.df=0;
  /* 1206d96a jmp dword ptr [edx*4 + 0x1206d9e0] */
  switch (EDX) {
    case 0: goto L_1206d9f0;
    case 1: goto L_1206d9f8;
    case 2: goto L_1206da08;
    case 3: goto L_1206da1c;
    default: x86_unimpl("switch@0x1206d96a out of table"); return;
  }
  /* 1206d971 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1206d974 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1206d975 fld dword ptr [esi] */
  fpu_push((double)rf32((uint32_t)(ESI)));
  /* 1206d977 adc bl, byte ptr [ecx + ebx*8 - 0x265bedfa] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ECX + EBX*8 + -0x265bedfa))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1206d97e push es */
  push32((uint32_t)(C.seg_es));
  /* 1206d97f adc ch, byte ptr [ecx + ebx*8 - 0x264bedfa] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(ECX + EBX*8 + -0x264bedfa))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1206d986 push es */
  push32((uint32_t)(C.seg_es));
  /* 1206d987 adc bh, byte ptr [ecx + ebx*8 - 0x263bedfa] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(ECX + EBX*8 + -0x263bedfa))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1206d98e push es */
  push32((uint32_t)(C.seg_es));
  /* 1206d994 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1206d998 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1206d99c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1206d9a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1206d9a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1206d9a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1206d9ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1206d9b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1206d9b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1206d9b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1206d9bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1206d9c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1206d9c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1206d9c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1206d9cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1206d9d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1206d9d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1206d9d7:;
  /* 1206d9d7 jmp dword ptr [edx*4 + 0x1206d9e0] */
  switch (EDX) {
    case 0: goto L_1206d9f0;
    case 1: goto L_1206d9f8;
    case 2: goto L_1206da08;
    case 3: goto L_1206da1c;
    default: x86_unimpl("switch@0x1206d9d7 out of table"); return;
  }
  /* 1206d9de mov edi, edi */
  EDI = (EDI);
L_1206d9f0:;
  /* 1206d9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206d9f3 pop esi */
  ESI = (pop32());
  /* 1206d9f4 pop edi */
  EDI = (pop32());
  /* 1206d9f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206d9f6 ret  */
  ESPCHK(0x1206d700u, _esp0);
  ESP += 4; return;
  /* 1206d9f7 nop  */
  /* nop */
L_1206d9f8:;
  /* 1206d9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206d9fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206d9fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206da01 pop esi */
  ESI = (pop32());
  /* 1206da02 pop edi */
  EDI = (pop32());
  /* 1206da03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206da04 ret  */
  ESPCHK(0x1206d700u, _esp0);
  ESP += 4; return;
  /* 1206da05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1206da08:;
  /* 1206da08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206da0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206da0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206da11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206da14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206da17 pop esi */
  ESI = (pop32());
  /* 1206da18 pop edi */
  EDI = (pop32());
  /* 1206da19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206da1a ret  */
  ESPCHK(0x1206d700u, _esp0);
  ESP += 4; return;
  /* 1206da1b nop  */
  /* nop */
L_1206da1c:;
  /* 1206da1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1206da1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1206da22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1206da25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1206da28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1206da2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1206da2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206da31 pop esi */
  ESI = (pop32());
  /* 1206da32 pop edi */
  EDI = (pop32());
  /* 1206da33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1206da34 ret  */
  ESPCHK(0x1206d700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x1206da40 (421 bytes, 148 insns) */
void f_1206da40(void) {
  FTRACE(0x1206da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206da40 push ebp */
  push32((uint32_t)(EBP));
  /* 1206da41 mov ebp, esp */
  EBP = (ESP);
  /* 1206da43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1206da45 push 0x1208d0d8 */
  push32((uint32_t)(0x1208d0d8u));
  /* 1206da4a push 0x1206e918 */
  push32((uint32_t)(0x1206e918u));
  /* 1206da4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1206da55 push eax */
  push32((uint32_t)(EAX));
  /* 1206da56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1206da5d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206da60 push ebx */
  push32((uint32_t)(EBX));
  /* 1206da61 push esi */
  push32((uint32_t)(ESI));
  /* 1206da62 push edi */
  push32((uint32_t)(EDI));
  /* 1206da63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1206da66 cmp dword ptr [0x120917ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206da6d jne 0x1206dabe */
  if (!C.zf) goto L_1206dabe;
  /* 1206da6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1206da72 push eax */
  push32((uint32_t)(EAX));
  /* 1206da73 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206da75 push 0x1208d0d0 */
  push32((uint32_t)(0x1208d0d0u));
  /* 1206da7a push 1 */
  push32((uint32_t)(0x1u));
  /* 1206da7c call dword ptr [0x12094314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094314))), 0x1206da82u);
  /* 1206da82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206da84 je 0x1206da92 */
  if (C.zf) goto L_1206da92;
  /* 1206da86 mov dword ptr [0x120917ac], 1 */
  w32((uint32_t)(0x120917ac), (0x1u));
  /* 1206da90 jmp 0x1206dabe */
  goto L_1206dabe;
L_1206da92:;
  /* 1206da92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1206da95 push ecx */
  push32((uint32_t)(ECX));
  /* 1206da96 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206da98 push 0x1208d0cc */
  push32((uint32_t)(0x1208d0ccu));
  /* 1206da9d push 1 */
  push32((uint32_t)(0x1u));
  /* 1206da9f push 0 */
  push32((uint32_t)(0x0u));
  /* 1206daa1 call dword ptr [0x12094324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094324))), 0x1206daa7u);
  /* 1206daa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206daa9 je 0x1206dab7 */
  if (C.zf) goto L_1206dab7;
  /* 1206daab mov dword ptr [0x120917ac], 2 */
  w32((uint32_t)(0x120917ac), (0x2u));
  /* 1206dab5 jmp 0x1206dabe */
  goto L_1206dabe;
L_1206dab7:;
  /* 1206dab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206dab9 jmp 0x1206dbe8 */
  goto L_1206dbe8;
L_1206dabe:;
  /* 1206dabe cmp dword ptr [0x120917ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120917ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dac5 jne 0x1206daf5 */
  if (!C.zf) goto L_1206daf5;
  /* 1206dac7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dacb jne 0x1206dad6 */
  if (!C.zf) goto L_1206dad6;
  /* 1206dacd mov edx, dword ptr [0x120917b8] */
  EDX = (r32((uint32_t)(0x120917b8)));
  /* 1206dad3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1206dad6:;
  /* 1206dad6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206dad9 push eax */
  push32((uint32_t)(EAX));
  /* 1206dada mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206dadd push ecx */
  push32((uint32_t)(ECX));
  /* 1206dade mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206dae1 push edx */
  push32((uint32_t)(EDX));
  /* 1206dae2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206dae5 push eax */
  push32((uint32_t)(EAX));
  /* 1206dae6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1206dae9 push ecx */
  push32((uint32_t)(ECX));
  /* 1206daea call dword ptr [0x12094324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094324))), 0x1206daf0u);
  /* 1206daf0 jmp 0x1206dbe8 */
  goto L_1206dbe8;
L_1206daf5:;
  /* 1206daf5 cmp dword ptr [0x120917ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120917ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dafc jne 0x1206dbe6 */
  if (!C.zf) goto L_1206dbe6;
  /* 1206db02 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206db06 jne 0x1206db11 */
  if (!C.zf) goto L_1206db11;
  /* 1206db08 mov edx, dword ptr [0x120917c8] */
  EDX = (r32((uint32_t)(0x120917c8)));
  /* 1206db0e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1206db11:;
  /* 1206db11 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206db13 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206db15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206db18 push eax */
  push32((uint32_t)(EAX));
  /* 1206db19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206db1c push ecx */
  push32((uint32_t)(ECX));
  /* 1206db1d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1206db20 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206db22 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206db24 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1206db27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206db2a push edx */
  push32((uint32_t)(EDX));
  /* 1206db2b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1206db2e push eax */
  push32((uint32_t)(EAX));
  /* 1206db2f call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x1206db35u);
  /* 1206db35 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1206db38 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206db3c jne 0x1206db45 */
  if (!C.zf) goto L_1206db45;
  /* 1206db3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206db40 jmp 0x1206dbe8 */
  goto L_1206dbe8;
L_1206db45:;
  /* 1206db45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206db4c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206db4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1206db51 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206db54 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1206db56 call 0x120689b0 */
  push32(0x1206db5bu); f_120689b0();
  /* 1206db5b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1206db5e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1206db61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206db64 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1206db67 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206db6a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1206db6c push edx */
  push32((uint32_t)(EDX));
  /* 1206db6d push 0 */
  push32((uint32_t)(0x0u));
  /* 1206db6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206db72 push eax */
  push32((uint32_t)(EAX));
  /* 1206db73 call 0x12069580 */
  push32(0x1206db78u); f_12069580();
  /* 1206db78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206db7b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1206db82 jmp 0x1206db9b */
  goto L_1206db9b;
  /* 1206db84 mov eax, 1 */
  EAX = (0x1u);
  /* 1206db89 ret  */
  ESPCHK(0x1206da40u, _esp0);
  ESP += 4; return;
  /* 1206db8a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1206db8d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1206db94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1206db9b:;
  /* 1206db9b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206db9f jne 0x1206dba5 */
  if (!C.zf) goto L_1206dba5;
  /* 1206dba1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206dba3 jmp 0x1206dbe8 */
  goto L_1206dbe8;
L_1206dba5:;
  /* 1206dba5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206dba8 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dba9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206dbac push edx */
  push32((uint32_t)(EDX));
  /* 1206dbad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206dbb0 push eax */
  push32((uint32_t)(EAX));
  /* 1206dbb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206dbb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dbb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206dbb7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1206dbba push edx */
  push32((uint32_t)(EDX));
  /* 1206dbbb call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x1206dbc1u);
  /* 1206dbc1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1206dbc4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dbc8 jne 0x1206dbce */
  if (!C.zf) goto L_1206dbce;
  /* 1206dbca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206dbcc jmp 0x1206dbe8 */
  goto L_1206dbe8;
L_1206dbce:;
  /* 1206dbce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206dbd1 push eax */
  push32((uint32_t)(EAX));
  /* 1206dbd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206dbd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dbd6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206dbd9 push edx */
  push32((uint32_t)(EDX));
  /* 1206dbda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206dbdd push eax */
  push32((uint32_t)(EAX));
  /* 1206dbde call dword ptr [0x12094314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094314))), 0x1206dbe4u);
  /* 1206dbe4 jmp 0x1206dbe8 */
  goto L_1206dbe8;
L_1206dbe6:;
  /* 1206dbe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1206dbe8:;
  /* 1206dbe8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1206dbeb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206dbee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1206dbf5 pop edi */
  EDI = (pop32());
  /* 1206dbf6 pop esi */
  ESI = (pop32());
  /* 1206dbf7 pop ebx */
  EBX = (pop32());
  /* 1206dbf8 mov esp, ebp */
  ESP = (EBP);
  /* 1206dbfa pop ebp */
  EBP = (pop32());
  /* 1206dbfb ret  */
  ESPCHK(0x1206da40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc00 @ 0x1206dc00 (727 bytes, 263 insns) */
void f_1206dc00(void) {
  FTRACE(0x1206dc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206dc00 push ebp */
  push32((uint32_t)(EBP));
  /* 1206dc01 mov ebp, esp */
  EBP = (ESP);
  /* 1206dc03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1206dc05 push 0x1208d0e8 */
  push32((uint32_t)(0x1208d0e8u));
  /* 1206dc0a push 0x1206e918 */
  push32((uint32_t)(0x1206e918u));
  /* 1206dc0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1206dc15 push eax */
  push32((uint32_t)(EAX));
  /* 1206dc16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1206dc1d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206dc20 push ebx */
  push32((uint32_t)(EBX));
  /* 1206dc21 push esi */
  push32((uint32_t)(ESI));
  /* 1206dc22 push edi */
  push32((uint32_t)(EDI));
  /* 1206dc23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1206dc26 cmp dword ptr [0x120917d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dc2d jne 0x1206dc86 */
  if (!C.zf) goto L_1206dc86;
  /* 1206dc2f push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dc31 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dc33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206dc35 push 0x1208d0d0 */
  push32((uint32_t)(0x1208d0d0u));
  /* 1206dc3a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1206dc3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dc41 call dword ptr [0x12094318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094318))), 0x1206dc47u);
  /* 1206dc47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206dc49 je 0x1206dc57 */
  if (C.zf) goto L_1206dc57;
  /* 1206dc4b mov dword ptr [0x120917d0], 1 */
  w32((uint32_t)(0x120917d0), (0x1u));
  /* 1206dc55 jmp 0x1206dc86 */
  goto L_1206dc86;
L_1206dc57:;
  /* 1206dc57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dc59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dc5b push 1 */
  push32((uint32_t)(0x1u));
  /* 1206dc5d push 0x1208d0cc */
  push32((uint32_t)(0x1208d0ccu));
  /* 1206dc62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1206dc67 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dc69 call dword ptr [0x12094310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094310))), 0x1206dc6fu);
  /* 1206dc6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206dc71 je 0x1206dc7f */
  if (C.zf) goto L_1206dc7f;
  /* 1206dc73 mov dword ptr [0x120917d0], 2 */
  w32((uint32_t)(0x120917d0), (0x2u));
  /* 1206dc7d jmp 0x1206dc86 */
  goto L_1206dc86;
L_1206dc7f:;
  /* 1206dc7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206dc81 jmp 0x1206def1 */
  goto L_1206def1;
L_1206dc86:;
  /* 1206dc86 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dc8a jle 0x1206dc9f */
  if ((C.zf||C.sf!=C.of)) goto L_1206dc9f;
  /* 1206dc8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206dc8f push eax */
  push32((uint32_t)(EAX));
  /* 1206dc90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206dc93 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dc94 call 0x1206df10 */
  push32(0x1206dc99u); f_1206df10();
  /* 1206dc99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206dc9c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1206dc9f:;
  /* 1206dc9f cmp dword ptr [0x120917d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120917d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dca6 jne 0x1206dccb */
  if (!C.zf) goto L_1206dccb;
  /* 1206dca8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1206dcab push edx */
  push32((uint32_t)(EDX));
  /* 1206dcac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1206dcaf push eax */
  push32((uint32_t)(EAX));
  /* 1206dcb0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206dcb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dcb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206dcb7 push edx */
  push32((uint32_t)(EDX));
  /* 1206dcb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206dcbb push eax */
  push32((uint32_t)(EAX));
  /* 1206dcbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206dcbf push ecx */
  push32((uint32_t)(ECX));
  /* 1206dcc0 call dword ptr [0x12094310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094310))), 0x1206dcc6u);
  /* 1206dcc6 jmp 0x1206def1 */
  goto L_1206def1;
L_1206dccb:;
  /* 1206dccb cmp dword ptr [0x120917d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120917d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dcd2 jne 0x1206deef */
  if (!C.zf) goto L_1206deef;
  /* 1206dcd8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dcdc jne 0x1206dce7 */
  if (!C.zf) goto L_1206dce7;
  /* 1206dcde mov edx, dword ptr [0x120917c8] */
  EDX = (r32((uint32_t)(0x120917c8)));
  /* 1206dce4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1206dce7:;
  /* 1206dce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dceb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206dcee push eax */
  push32((uint32_t)(EAX));
  /* 1206dcef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206dcf2 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dcf3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1206dcf6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206dcf8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206dcfa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1206dcfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206dd00 push edx */
  push32((uint32_t)(EDX));
  /* 1206dd01 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1206dd04 push eax */
  push32((uint32_t)(EAX));
  /* 1206dd05 call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x1206dd0bu);
  /* 1206dd0b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1206dd0e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dd12 jne 0x1206dd1b */
  if (!C.zf) goto L_1206dd1b;
  /* 1206dd14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206dd16 jmp 0x1206def1 */
  goto L_1206def1;
L_1206dd1b:;
  /* 1206dd1b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206dd22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206dd25 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1206dd27 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206dd2a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1206dd2c call 0x120689b0 */
  push32(0x1206dd31u); f_120689b0();
  /* 1206dd31 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1206dd34 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1206dd37 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1206dd3a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1206dd3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1206dd44 jmp 0x1206dd5d */
  goto L_1206dd5d;
  /* 1206dd46 mov eax, 1 */
  EAX = (0x1u);
  /* 1206dd4b ret  */
  ESPCHK(0x1206dc00u, _esp0);
  ESP += 4; return;
  /* 1206dd4c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1206dd4f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1206dd56 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1206dd5d:;
  /* 1206dd5d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dd61 jne 0x1206dd6a */
  if (!C.zf) goto L_1206dd6a;
  /* 1206dd63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206dd65 jmp 0x1206def1 */
  goto L_1206def1;
L_1206dd6a:;
  /* 1206dd6a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206dd6d push edx */
  push32((uint32_t)(EDX));
  /* 1206dd6e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206dd71 push eax */
  push32((uint32_t)(EAX));
  /* 1206dd72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206dd75 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dd76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206dd79 push edx */
  push32((uint32_t)(EDX));
  /* 1206dd7a push 1 */
  push32((uint32_t)(0x1u));
  /* 1206dd7c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1206dd7f push eax */
  push32((uint32_t)(EAX));
  /* 1206dd80 call dword ptr [0x1209431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209431c))), 0x1206dd86u);
  /* 1206dd86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206dd88 jne 0x1206dd91 */
  if (!C.zf) goto L_1206dd91;
  /* 1206dd8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206dd8c jmp 0x1206def1 */
  goto L_1206def1;
L_1206dd91:;
  /* 1206dd91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dd93 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206dd95 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206dd98 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dd99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206dd9c push edx */
  push32((uint32_t)(EDX));
  /* 1206dd9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206dda0 push eax */
  push32((uint32_t)(EAX));
  /* 1206dda1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206dda4 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dda5 call dword ptr [0x12094318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094318))), 0x1206ddabu);
  /* 1206ddab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1206ddae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ddb2 jne 0x1206ddbb */
  if (!C.zf) goto L_1206ddbb;
  /* 1206ddb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206ddb6 jmp 0x1206def1 */
  goto L_1206def1;
L_1206ddbb:;
  /* 1206ddbb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206ddbe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1206ddc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206ddc6 je 0x1206de0b */
  if (C.zf) goto L_1206de0b;
  /* 1206ddc8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ddcc je 0x1206de06 */
  if (C.zf) goto L_1206de06;
  /* 1206ddce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206ddd1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ddd4 jle 0x1206dddd */
  if ((C.zf||C.sf!=C.of)) goto L_1206dddd;
  /* 1206ddd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206ddd8 jmp 0x1206def1 */
  goto L_1206def1;
L_1206dddd:;
  /* 1206dddd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1206dde0 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dde1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1206dde4 push edx */
  push32((uint32_t)(EDX));
  /* 1206dde5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206dde8 push eax */
  push32((uint32_t)(EAX));
  /* 1206dde9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206ddec push ecx */
  push32((uint32_t)(ECX));
  /* 1206dded mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206ddf0 push edx */
  push32((uint32_t)(EDX));
  /* 1206ddf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ddf4 push eax */
  push32((uint32_t)(EAX));
  /* 1206ddf5 call dword ptr [0x12094318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094318))), 0x1206ddfbu);
  /* 1206ddfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206ddfd jne 0x1206de06 */
  if (!C.zf) goto L_1206de06;
  /* 1206ddff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206de01 jmp 0x1206def1 */
  goto L_1206def1;
L_1206de06:;
  /* 1206de06 jmp 0x1206deea */
  goto L_1206deea;
L_1206de0b:;
  /* 1206de0b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206de0e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1206de11 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1206de18 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206de1b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1206de1d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206de20 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1206de22 call 0x120689b0 */
  push32(0x1206de27u); f_120689b0();
  /* 1206de27 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1206de2a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1206de2d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1206de30 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1206de33 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1206de3a jmp 0x1206de53 */
  goto L_1206de53;
  /* 1206de3c mov eax, 1 */
  EAX = (0x1u);
  /* 1206de41 ret  */
  ESPCHK(0x1206dc00u, _esp0);
  ESP += 4; return;
  /* 1206de42 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1206de45 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1206de4c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1206de53:;
  /* 1206de53 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206de57 jne 0x1206de60 */
  if (!C.zf) goto L_1206de60;
  /* 1206de59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206de5b jmp 0x1206def1 */
  goto L_1206def1;
L_1206de60:;
  /* 1206de60 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206de63 push eax */
  push32((uint32_t)(EAX));
  /* 1206de64 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206de67 push ecx */
  push32((uint32_t)(ECX));
  /* 1206de68 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1206de6b push edx */
  push32((uint32_t)(EDX));
  /* 1206de6c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1206de6f push eax */
  push32((uint32_t)(EAX));
  /* 1206de70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206de73 push ecx */
  push32((uint32_t)(ECX));
  /* 1206de74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206de77 push edx */
  push32((uint32_t)(EDX));
  /* 1206de78 call dword ptr [0x12094318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094318))), 0x1206de7eu);
  /* 1206de7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206de80 jne 0x1206de86 */
  if (!C.zf) goto L_1206de86;
  /* 1206de82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206de84 jmp 0x1206def1 */
  goto L_1206def1;
L_1206de86:;
  /* 1206de86 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206de8a jne 0x1206deba */
  if (!C.zf) goto L_1206deba;
  /* 1206de8c push 0 */
  push32((uint32_t)(0x0u));
  /* 1206de8e push 0 */
  push32((uint32_t)(0x0u));
  /* 1206de90 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206de92 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206de94 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206de97 push eax */
  push32((uint32_t)(EAX));
  /* 1206de98 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206de9b push ecx */
  push32((uint32_t)(ECX));
  /* 1206de9c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1206dea1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1206dea4 push edx */
  push32((uint32_t)(EDX));
  /* 1206dea5 call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x1206deabu);
  /* 1206deab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1206deae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206deb2 jne 0x1206deb8 */
  if (!C.zf) goto L_1206deb8;
  /* 1206deb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206deb6 jmp 0x1206def1 */
  goto L_1206def1;
L_1206deb8:;
  /* 1206deb8 jmp 0x1206deea */
  goto L_1206deea;
L_1206deba:;
  /* 1206deba push 0 */
  push32((uint32_t)(0x0u));
  /* 1206debc push 0 */
  push32((uint32_t)(0x0u));
  /* 1206debe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1206dec1 push eax */
  push32((uint32_t)(EAX));
  /* 1206dec2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1206dec5 push ecx */
  push32((uint32_t)(ECX));
  /* 1206dec6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1206dec9 push edx */
  push32((uint32_t)(EDX));
  /* 1206deca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1206decd push eax */
  push32((uint32_t)(EAX));
  /* 1206dece push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1206ded3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1206ded6 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ded7 call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x1206deddu);
  /* 1206dedd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1206dee0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206dee4 jne 0x1206deea */
  if (!C.zf) goto L_1206deea;
  /* 1206dee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206dee8 jmp 0x1206def1 */
  goto L_1206def1;
L_1206deea:;
  /* 1206deea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1206deed jmp 0x1206def1 */
  goto L_1206def1;
L_1206deef:;
  /* 1206deef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1206def1:;
  /* 1206def1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1206def4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206def7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1206defe pop edi */
  EDI = (pop32());
  /* 1206deff pop esi */
  ESI = (pop32());
  /* 1206df00 pop ebx */
  EBX = (pop32());
  /* 1206df01 mov esp, ebp */
  ESP = (EBP);
  /* 1206df03 pop ebp */
  EBP = (pop32());
  /* 1206df04 ret  */
  ESPCHK(0x1206dc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df10 @ 0x1206df10 (80 bytes, 32 insns) */
void f_1206df10(void) {
  FTRACE(0x1206df10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206df10 push ebp */
  push32((uint32_t)(EBP));
  /* 1206df11 mov ebp, esp */
  EBP = (ESP);
  /* 1206df13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206df16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206df19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206df1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206df1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1206df22:;
  /* 1206df22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206df25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206df28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206df2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206df2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206df30 je 0x1206df47 */
  if (C.zf) goto L_1206df47;
  /* 1206df32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206df35 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1206df38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206df3a je 0x1206df47 */
  if (C.zf) goto L_1206df47;
  /* 1206df3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206df3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206df42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206df45 jmp 0x1206df22 */
  goto L_1206df22;
L_1206df47:;
  /* 1206df47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206df4a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1206df4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206df4f jne 0x1206df59 */
  if (!C.zf) goto L_1206df59;
  /* 1206df51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206df54 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206df57 jmp 0x1206df5c */
  goto L_1206df5c;
L_1206df59:;
  /* 1206df59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1206df5c:;
  /* 1206df5c mov esp, ebp */
  ESP = (EBP);
  /* 1206df5e pop ebp */
  EBP = (pop32());
  /* 1206df5f ret  */
  ESPCHK(0x1206df10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df60 @ 0x1206df60 (130 bytes, 43 insns) */
void f_1206df60(void) {
  FTRACE(0x1206df60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206df60 push ebp */
  push32((uint32_t)(EBP));
  /* 1206df61 mov ebp, esp */
  EBP = (ESP);
  /* 1206df63 push ecx */
  push32((uint32_t)(ECX));
  /* 1206df64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206df67 cmp eax, dword ptr [0x120930dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120930dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206df6d jae 0x1206df91 */
  if (!C.cf) goto L_1206df91;
  /* 1206df6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206df72 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206df75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206df78 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206df7b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206df7e mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206df85 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1206df8a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1206df8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206df8f jne 0x1206dfac */
  if (!C.zf) goto L_1206dfac;
L_1206df91:;
  /* 1206df91 call 0x1206d6e0 */
  push32(0x1206df96u); f_1206d6e0();
  /* 1206df96 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1206df9c call 0x1206d6f0 */
  push32(0x1206dfa1u); f_1206d6f0();
  /* 1206dfa1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1206dfa7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206dfaa jmp 0x1206dfde */
  goto L_1206dfde;
L_1206dfac:;
  /* 1206dfac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206dfaf push edx */
  push32((uint32_t)(EDX));
  /* 1206dfb0 call 0x1206ef00 */
  push32(0x1206dfb5u); f_1206ef00();
  /* 1206dfb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206dfb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206dfbb push eax */
  push32((uint32_t)(EAX));
  /* 1206dfbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206dfbf push ecx */
  push32((uint32_t)(ECX));
  /* 1206dfc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206dfc3 push edx */
  push32((uint32_t)(EDX));
  /* 1206dfc4 call 0x1206dff0 */
  push32(0x1206dfc9u); f_1206dff0();
  /* 1206dfc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206dfcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206dfcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206dfd2 push eax */
  push32((uint32_t)(EAX));
  /* 1206dfd3 call 0x1206ef90 */
  push32(0x1206dfd8u); f_1206ef90();
  /* 1206dfd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206dfdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1206dfde:;
  /* 1206dfde mov esp, ebp */
  ESP = (EBP);
  /* 1206dfe0 pop ebp */
  EBP = (pop32());
  /* 1206dfe1 ret  */
  ESPCHK(0x1206df60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dff0 @ 0x1206dff0 (178 bytes, 56 insns) */
void f_1206dff0(void) {
  FTRACE(0x1206dff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206dff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206dff1 mov ebp, esp */
  EBP = (ESP);
  /* 1206dff3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206dff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206dff9 push eax */
  push32((uint32_t)(EAX));
  /* 1206dffa call 0x1206ed80 */
  push32(0x1206dfffu); f_1206ed80();
  /* 1206dfff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e002 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1206e005 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e009 jne 0x1206e01e */
  if (!C.zf) goto L_1206e01e;
  /* 1206e00b call 0x1206d6e0 */
  push32(0x1206e010u); f_1206d6e0();
  /* 1206e010 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1206e016 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206e019 jmp 0x1206e09e */
  goto L_1206e09e;
L_1206e01e:;
  /* 1206e01e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206e021 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e022 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206e024 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206e027 push edx */
  push32((uint32_t)(EDX));
  /* 1206e028 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206e02b push eax */
  push32((uint32_t)(EAX));
  /* 1206e02c call dword ptr [0x12094308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094308))), 0x1206e032u);
  /* 1206e032 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206e035 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e039 jne 0x1206e046 */
  if (!C.zf) goto L_1206e046;
  /* 1206e03b call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x1206e041u);
  /* 1206e041 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206e044 jmp 0x1206e04d */
  goto L_1206e04d;
L_1206e046:;
  /* 1206e046 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1206e04d:;
  /* 1206e04d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e051 je 0x1206e064 */
  if (C.zf) goto L_1206e064;
  /* 1206e053 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e056 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e057 call 0x1206d640 */
  push32(0x1206e05cu); f_1206d640();
  /* 1206e05c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e05f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206e062 jmp 0x1206e09e */
  goto L_1206e09e;
L_1206e064:;
  /* 1206e064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e067 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1206e06a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e06d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1206e070 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e073 mov ecx, dword ptr [edx*4 + 0x12092fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12092fa0)));
  /* 1206e07a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1206e07e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1206e081 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e084 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206e087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e08a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206e08d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e090 mov eax, dword ptr [eax*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206e097 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1206e09b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1206e09e:;
  /* 1206e09e mov esp, ebp */
  ESP = (EBP);
  /* 1206e0a0 pop ebp */
  EBP = (pop32());
  /* 1206e0a1 ret  */
  ESPCHK(0x1206dff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0b0 @ 0x1206e0b0 (130 bytes, 43 insns) */
void f_1206e0b0(void) {
  FTRACE(0x1206e0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1206e0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e0b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e0b7 cmp eax, dword ptr [0x120930dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120930dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e0bd jae 0x1206e0e1 */
  if (!C.cf) goto L_1206e0e1;
  /* 1206e0bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e0c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206e0c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e0c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206e0cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e0ce mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206e0d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1206e0da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1206e0dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206e0df jne 0x1206e0fc */
  if (!C.zf) goto L_1206e0fc;
L_1206e0e1:;
  /* 1206e0e1 call 0x1206d6e0 */
  push32(0x1206e0e6u); f_1206d6e0();
  /* 1206e0e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1206e0ec call 0x1206d6f0 */
  push32(0x1206e0f1u); f_1206d6f0();
  /* 1206e0f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1206e0f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206e0fa jmp 0x1206e12e */
  goto L_1206e12e;
L_1206e0fc:;
  /* 1206e0fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e0ff push edx */
  push32((uint32_t)(EDX));
  /* 1206e100 call 0x1206ef00 */
  push32(0x1206e105u); f_1206ef00();
  /* 1206e105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e108 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206e10b push eax */
  push32((uint32_t)(EAX));
  /* 1206e10c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206e10f push ecx */
  push32((uint32_t)(ECX));
  /* 1206e110 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e113 push edx */
  push32((uint32_t)(EDX));
  /* 1206e114 call 0x1206e140 */
  push32(0x1206e119u); f_1206e140();
  /* 1206e119 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e11c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206e11f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e122 push eax */
  push32((uint32_t)(EAX));
  /* 1206e123 call 0x1206ef90 */
  push32(0x1206e128u); f_1206ef90();
  /* 1206e128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e12b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1206e12e:;
  /* 1206e12e mov esp, ebp */
  ESP = (EBP);
  /* 1206e130 pop ebp */
  EBP = (pop32());
  /* 1206e131 ret  */
  ESPCHK(0x1206e0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e140 @ 0x1206e140 (627 bytes, 182 insns) */
void f_1206e140(void) {
  FTRACE(0x1206e140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e140 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e141 mov ebp, esp */
  EBP = (ESP);
  /* 1206e143 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e149 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1206e150 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206e153 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1206e159 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e15d jne 0x1206e166 */
  if (!C.zf) goto L_1206e166;
  /* 1206e15f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206e161 jmp 0x1206e3af */
  goto L_1206e3af;
L_1206e166:;
  /* 1206e166 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e169 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206e16c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e16f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206e172 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e175 mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206e17c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1206e181 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1206e184 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206e186 je 0x1206e198 */
  if (C.zf) goto L_1206e198;
  /* 1206e188 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206e18a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206e18c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e18f push edx */
  push32((uint32_t)(EDX));
  /* 1206e190 call 0x1206dff0 */
  push32(0x1206e195u); f_1206dff0();
  /* 1206e195 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206e198:;
  /* 1206e198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e19b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206e19e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e1a1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206e1a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e1a7 mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206e1ae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1206e1b3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1206e1b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206e1ba je 0x1206e2cc */
  if (C.zf) goto L_1206e2cc;
  /* 1206e1c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206e1c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206e1c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1206e1cd:;
  /* 1206e1cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e1d0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e1d3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e1d6 jae 0x1206e2ca */
  if (!C.cf) goto L_1206e2ca;
  /* 1206e1dc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1206e1e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1206e1e5:;
  /* 1206e1e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206e1e8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1206e1ee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e1f0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e1f6 jge 0x1206e257 */
  if ((C.sf==C.of)) goto L_1206e257;
  /* 1206e1f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e1fb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e1fe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e201 jae 0x1206e257 */
  if (!C.cf) goto L_1206e257;
  /* 1206e203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e206 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1206e208 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1206e20e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e211 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e214 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206e217 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1206e21e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e221 jne 0x1206e241 */
  if (!C.zf) goto L_1206e241;
  /* 1206e223 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1206e229 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e22c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1206e232 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206e235 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1206e238 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206e23b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e23e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1206e241:;
  /* 1206e241 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206e244 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1206e24a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1206e24c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206e24f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e252 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1206e255 jmp 0x1206e1e5 */
  goto L_1206e1e5;
L_1206e257:;
  /* 1206e257 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206e259 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1206e25f push edx */
  push32((uint32_t)(EDX));
  /* 1206e260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206e263 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1206e269 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e26b push eax */
  push32((uint32_t)(EAX));
  /* 1206e26c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1206e272 push edx */
  push32((uint32_t)(EDX));
  /* 1206e273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e276 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206e279 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e27c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206e27f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e282 mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206e289 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1206e28c push eax */
  push32((uint32_t)(EAX));
  /* 1206e28d call dword ptr [0x12094388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094388))), 0x1206e293u);
  /* 1206e293 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206e295 je 0x1206e2ba */
  if (C.zf) goto L_1206e2ba;
  /* 1206e297 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206e29a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e2a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1206e2a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206e2a6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1206e2ac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e2ae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e2b4 jge 0x1206e2b8 */
  if ((C.sf==C.of)) goto L_1206e2b8;
  /* 1206e2b6 jmp 0x1206e2ca */
  goto L_1206e2ca;
L_1206e2b8:;
  /* 1206e2b8 jmp 0x1206e2c5 */
  goto L_1206e2c5;
L_1206e2ba:;
  /* 1206e2ba call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x1206e2c0u);
  /* 1206e2c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1206e2c3 jmp 0x1206e2ca */
  goto L_1206e2ca;
L_1206e2c5:;
  /* 1206e2c5 jmp 0x1206e1cd */
  goto L_1206e1cd;
L_1206e2ca:;
  /* 1206e2ca jmp 0x1206e31c */
  goto L_1206e31c;
L_1206e2cc:;
  /* 1206e2cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1206e2ce lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1206e2d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e2d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206e2d8 push edx */
  push32((uint32_t)(EDX));
  /* 1206e2d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206e2dc push eax */
  push32((uint32_t)(EAX));
  /* 1206e2dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e2e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206e2e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e2e6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206e2e9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e2ec mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206e2f3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1206e2f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e2f7 call dword ptr [0x12094388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094388))), 0x1206e2fdu);
  /* 1206e2fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206e2ff je 0x1206e313 */
  if (C.zf) goto L_1206e313;
  /* 1206e301 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1206e308 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1206e30e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1206e311 jmp 0x1206e31c */
  goto L_1206e31c;
L_1206e313:;
  /* 1206e313 call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x1206e319u);
  /* 1206e319 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1206e31c:;
  /* 1206e31c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e320 jne 0x1206e3a6 */
  if (!C.zf) goto L_1206e3a6;
  /* 1206e326 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e32a je 0x1206e35a */
  if (C.zf) goto L_1206e35a;
  /* 1206e32c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e330 jne 0x1206e349 */
  if (!C.zf) goto L_1206e349;
  /* 1206e332 call 0x1206d6e0 */
  push32(0x1206e337u); f_1206d6e0();
  /* 1206e337 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1206e33d call 0x1206d6f0 */
  push32(0x1206e342u); f_1206d6f0();
  /* 1206e342 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206e345 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1206e347 jmp 0x1206e355 */
  goto L_1206e355;
L_1206e349:;
  /* 1206e349 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206e34c push edx */
  push32((uint32_t)(EDX));
  /* 1206e34d call 0x1206d640 */
  push32(0x1206e352u); f_1206d640();
  /* 1206e352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206e355:;
  /* 1206e355 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206e358 jmp 0x1206e3af */
  goto L_1206e3af;
L_1206e35a:;
  /* 1206e35a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e35d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206e360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e363 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206e366 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e369 mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206e370 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1206e375 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1206e378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206e37a je 0x1206e38b */
  if (C.zf) goto L_1206e38b;
  /* 1206e37c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206e37f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1206e382 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e385 jne 0x1206e38b */
  if (!C.zf) goto L_1206e38b;
  /* 1206e387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206e389 jmp 0x1206e3af */
  goto L_1206e3af;
L_1206e38b:;
  /* 1206e38b call 0x1206d6e0 */
  push32(0x1206e390u); f_1206d6e0();
  /* 1206e390 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1206e396 call 0x1206d6f0 */
  push32(0x1206e39bu); f_1206d6f0();
  /* 1206e39b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1206e3a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206e3a4 jmp 0x1206e3af */
  goto L_1206e3af;
L_1206e3a6:;
  /* 1206e3a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206e3a9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1206e3af:;
  /* 1206e3af mov esp, ebp */
  ESP = (EBP);
  /* 1206e3b1 pop ebp */
  EBP = (pop32());
  /* 1206e3b2 ret  */
  ESPCHK(0x1206e140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3c0 @ 0x1206e3c0 (199 bytes, 68 insns) */
void f_1206e3c0(void) {
  FTRACE(0x1206e3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1206e3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e3c4 push ebx */
  push32((uint32_t)(EBX));
  /* 1206e3c5 push esi */
  push32((uint32_t)(ESI));
  /* 1206e3c6 push edi */
  push32((uint32_t)(EDI));
L_1206e3c7:;
  /* 1206e3c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e3cb jne 0x1206e3eb */
  if (!C.zf) goto L_1206e3eb;
  /* 1206e3cd push 0x1208d030 */
  push32((uint32_t)(0x1208d030u));
  /* 1206e3d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206e3d4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1206e3d6 push 0x1208d100 */
  push32((uint32_t)(0x1208d100u));
  /* 1206e3db push 2 */
  push32((uint32_t)(0x2u));
  /* 1206e3dd call 0x120648d0 */
  push32(0x1206e3e2u); f_120648d0();
  /* 1206e3e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e3e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e3e8 jne 0x1206e3eb */
  if (!C.zf) goto L_1206e3eb;
  /* 1206e3ea int3  */
  x86_unimpl("int3 @ 0x1206e3ea");
L_1206e3eb:;
  /* 1206e3eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206e3ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206e3ef jne 0x1206e3c7 */
  if (!C.zf) goto L_1206e3c7;
  /* 1206e3f1 mov ecx, dword ptr [0x120917d4] */
  ECX = (r32((uint32_t)(0x120917d4)));
  /* 1206e3f7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e3fa mov dword ptr [0x120917d4], ecx */
  w32((uint32_t)(0x120917d4), (ECX));
  /* 1206e400 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e403 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206e406 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1206e408 push 0x1208d100 */
  push32((uint32_t)(0x1208d100u));
  /* 1206e40d push 2 */
  push32((uint32_t)(0x2u));
  /* 1206e40f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1206e414 call 0x12065810 */
  push32(0x1206e419u); f_12065810();
  /* 1206e419 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e41c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e41f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1206e422 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e425 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e429 je 0x1206e446 */
  if (C.zf) goto L_1206e446;
  /* 1206e42b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e42e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206e431 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1206e434 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e437 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1206e43a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e43d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1206e444 jmp 0x1206e46b */
  goto L_1206e46b;
L_1206e446:;
  /* 1206e446 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e449 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206e44c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1206e44f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e452 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1206e455 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e458 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e45b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e45e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1206e461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e464 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1206e46b:;
  /* 1206e46b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e46e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e471 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1206e474 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1206e476 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e479 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1206e480 pop edi */
  EDI = (pop32());
  /* 1206e481 pop esi */
  ESI = (pop32());
  /* 1206e482 pop ebx */
  EBX = (pop32());
  /* 1206e483 mov esp, ebp */
  ESP = (EBP);
  /* 1206e485 pop ebp */
  EBP = (pop32());
  /* 1206e486 ret  */
  ESPCHK(0x1206e3c0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1206e490 (50 bytes, 17 insns) */
void f_1206e490(void) {
  FTRACE(0x1206e490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e490 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e491 mov ebp, esp */
  EBP = (ESP);
  /* 1206e493 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e496 cmp eax, dword ptr [0x120930dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120930dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e49c jb 0x1206e4a2 */
  if (C.cf) goto L_1206e4a2;
  /* 1206e49e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206e4a0 jmp 0x1206e4c0 */
  goto L_1206e4c0;
L_1206e4a2:;
  /* 1206e4a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e4a5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206e4a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e4ab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206e4ae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e4b1 mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206e4b8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1206e4bd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1206e4c0:;
  /* 1206e4c0 pop ebp */
  EBP = (pop32());
  /* 1206e4c1 ret  */
  ESPCHK(0x1206e490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4d0 @ 0x1206e4d0 (300 bytes, 80 insns) */
void f_1206e4d0(void) {
  FTRACE(0x1206e4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1206e4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e4d4 cmp dword ptr [0x12092ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12092ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e4db jne 0x1206e4e9 */
  if (!C.zf) goto L_1206e4e9;
  /* 1206e4dd mov dword ptr [0x12092ca0], 0x200 */
  w32((uint32_t)(0x12092ca0), (0x200u));
  /* 1206e4e7 jmp 0x1206e4fc */
  goto L_1206e4fc;
L_1206e4e9:;
  /* 1206e4e9 cmp dword ptr [0x12092ca0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12092ca0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e4f0 jge 0x1206e4fc */
  if ((C.sf==C.of)) goto L_1206e4fc;
  /* 1206e4f2 mov dword ptr [0x12092ca0], 0x14 */
  w32((uint32_t)(0x12092ca0), (0x14u));
L_1206e4fc:;
  /* 1206e4fc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1206e501 push 0x1208d10c */
  push32((uint32_t)(0x1208d10cu));
  /* 1206e506 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206e508 push 4 */
  push32((uint32_t)(0x4u));
  /* 1206e50a mov eax, dword ptr [0x12092ca0] */
  EAX = (r32((uint32_t)(0x12092ca0)));
  /* 1206e50f push eax */
  push32((uint32_t)(EAX));
  /* 1206e510 call 0x12065c20 */
  push32(0x1206e515u); f_12065c20();
  /* 1206e515 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e518 mov dword ptr [0x12091948], eax */
  w32((uint32_t)(0x12091948), (EAX));
  /* 1206e51d cmp dword ptr [0x12091948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e524 jne 0x1206e565 */
  if (!C.zf) goto L_1206e565;
  /* 1206e526 mov dword ptr [0x12092ca0], 0x14 */
  w32((uint32_t)(0x12092ca0), (0x14u));
  /* 1206e530 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1206e535 push 0x1208d10c */
  push32((uint32_t)(0x1208d10cu));
  /* 1206e53a push 2 */
  push32((uint32_t)(0x2u));
  /* 1206e53c push 4 */
  push32((uint32_t)(0x4u));
  /* 1206e53e mov ecx, dword ptr [0x12092ca0] */
  ECX = (r32((uint32_t)(0x12092ca0)));
  /* 1206e544 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e545 call 0x12065c20 */
  push32(0x1206e54au); f_12065c20();
  /* 1206e54a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e54d mov dword ptr [0x12091948], eax */
  w32((uint32_t)(0x12091948), (EAX));
  /* 1206e552 cmp dword ptr [0x12091948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e559 jne 0x1206e565 */
  if (!C.zf) goto L_1206e565;
  /* 1206e55b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1206e55d call 0x12064780 */
  push32(0x1206e562u); f_12064780();
  /* 1206e562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206e565:;
  /* 1206e565 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206e56c jmp 0x1206e577 */
  goto L_1206e577;
L_1206e56e:;
  /* 1206e56e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e571 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e574 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206e577:;
  /* 1206e577 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e57b jge 0x1206e596 */
  if ((C.sf==C.of)) goto L_1206e596;
  /* 1206e57d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e580 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206e583 add eax, 0x12090130 */
  { uint32_t _a=(EAX),_b=(0x12090130u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e588 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e58b mov edx, dword ptr [0x12091948] */
  EDX = (r32((uint32_t)(0x12091948)));
  /* 1206e591 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1206e594 jmp 0x1206e56e */
  goto L_1206e56e;
L_1206e596:;
  /* 1206e596 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206e59d jmp 0x1206e5a8 */
  goto L_1206e5a8;
L_1206e59f:;
  /* 1206e59f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e5a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e5a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206e5a8:;
  /* 1206e5a8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e5ac jge 0x1206e5f8 */
  if ((C.sf==C.of)) goto L_1206e5f8;
  /* 1206e5ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e5b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206e5b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e5b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206e5ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e5bd mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206e5c4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e5c8 je 0x1206e5e6 */
  if (C.zf) goto L_1206e5e6;
  /* 1206e5ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e5cd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206e5d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e5d3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206e5d6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206e5d9 mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206e5e0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e5e4 jne 0x1206e5f6 */
  if (!C.zf) goto L_1206e5f6;
L_1206e5e6:;
  /* 1206e5e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206e5e9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206e5ec mov dword ptr [ecx + 0x12090140], 0xffffffff */
  w32((uint32_t)(ECX + 0x12090140), (0xffffffffu));
L_1206e5f6:;
  /* 1206e5f6 jmp 0x1206e59f */
  goto L_1206e59f;
L_1206e5f8:;
  /* 1206e5f8 mov esp, ebp */
  ESP = (EBP);
  /* 1206e5fa pop ebp */
  EBP = (pop32());
  /* 1206e5fb ret  */
  ESPCHK(0x1206e4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e600 @ 0x1206e600 (26 bytes, 9 insns) */
void f_1206e600(void) {
  FTRACE(0x1206e600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e600 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e601 mov ebp, esp */
  EBP = (ESP);
  /* 1206e603 call 0x1206f200 */
  push32(0x1206e608u); f_1206f200();
  /* 1206e608 movsx eax, byte ptr [0x120915ec] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x120915ec))));
  /* 1206e60f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206e611 je 0x1206e618 */
  if (C.zf) goto L_1206e618;
  /* 1206e613 call 0x1206efc0 */
  push32(0x1206e618u); f_1206efc0();
L_1206e618:;
  /* 1206e618 pop ebp */
  EBP = (pop32());
  /* 1206e619 ret  */
  ESPCHK(0x1206e600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e620 @ 0x1206e620 (61 bytes, 20 insns) */
void f_1206e620(void) {
  FTRACE(0x1206e620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e620 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e621 mov ebp, esp */
  EBP = (ESP);
  /* 1206e623 cmp dword ptr [ebp + 8], 0x12090130 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12090130u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e62a jb 0x1206e64e */
  if (C.cf) goto L_1206e64e;
  /* 1206e62c cmp dword ptr [ebp + 8], 0x12090390 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12090390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e633 ja 0x1206e64e */
  if ((!C.cf&&!C.zf)) goto L_1206e64e;
  /* 1206e635 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e638 sub eax, 0x12090130 */
  { uint32_t _a=(EAX),_b=(0x12090130u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e63d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206e640 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e643 push eax */
  push32((uint32_t)(EAX));
  /* 1206e644 call 0x12069210 */
  push32(0x1206e649u); f_12069210();
  /* 1206e649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e64c jmp 0x1206e65b */
  goto L_1206e65b;
L_1206e64e:;
  /* 1206e64e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e651 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e654 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e655 call dword ptr [0x12094344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094344))), 0x1206e65bu);
L_1206e65b:;
  /* 1206e65b pop ebp */
  EBP = (pop32());
  /* 1206e65c ret  */
  ESPCHK(0x1206e620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x1206e660 (41 bytes, 16 insns) */
void f_1206e660(void) {
  FTRACE(0x1206e660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e660 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e661 mov ebp, esp */
  EBP = (ESP);
  /* 1206e663 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e667 jge 0x1206e67a */
  if ((C.sf==C.of)) goto L_1206e67a;
  /* 1206e669 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e66c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e66f push eax */
  push32((uint32_t)(EAX));
  /* 1206e670 call 0x12069210 */
  push32(0x1206e675u); f_12069210();
  /* 1206e675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e678 jmp 0x1206e687 */
  goto L_1206e687;
L_1206e67a:;
  /* 1206e67a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206e67d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e680 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e681 call dword ptr [0x12094344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094344))), 0x1206e687u);
L_1206e687:;
  /* 1206e687 pop ebp */
  EBP = (pop32());
  /* 1206e688 ret  */
  ESPCHK(0x1206e660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e690 @ 0x1206e690 (61 bytes, 20 insns) */
void f_1206e690(void) {
  FTRACE(0x1206e690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e690 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e691 mov ebp, esp */
  EBP = (ESP);
  /* 1206e693 cmp dword ptr [ebp + 8], 0x12090130 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12090130u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e69a jb 0x1206e6be */
  if (C.cf) goto L_1206e6be;
  /* 1206e69c cmp dword ptr [ebp + 8], 0x12090390 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12090390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e6a3 ja 0x1206e6be */
  if ((!C.cf&&!C.zf)) goto L_1206e6be;
  /* 1206e6a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e6a8 sub eax, 0x12090130 */
  { uint32_t _a=(EAX),_b=(0x12090130u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e6ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206e6b0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e6b3 push eax */
  push32((uint32_t)(EAX));
  /* 1206e6b4 call 0x120692b0 */
  push32(0x1206e6b9u); f_120692b0();
  /* 1206e6b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e6bc jmp 0x1206e6cb */
  goto L_1206e6cb;
L_1206e6be:;
  /* 1206e6be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e6c1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e6c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e6c5 call dword ptr [0x12094340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094340))), 0x1206e6cbu);
L_1206e6cb:;
  /* 1206e6cb pop ebp */
  EBP = (pop32());
  /* 1206e6cc ret  */
  ESPCHK(0x1206e690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6d0 @ 0x1206e6d0 (41 bytes, 16 insns) */
void f_1206e6d0(void) {
  FTRACE(0x1206e6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1206e6d3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e6d7 jge 0x1206e6ea */
  if ((C.sf==C.of)) goto L_1206e6ea;
  /* 1206e6d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e6dc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e6df push eax */
  push32((uint32_t)(EAX));
  /* 1206e6e0 call 0x120692b0 */
  push32(0x1206e6e5u); f_120692b0();
  /* 1206e6e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e6e8 jmp 0x1206e6f7 */
  goto L_1206e6f7;
L_1206e6ea:;
  /* 1206e6ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206e6ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e6f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e6f1 call dword ptr [0x12094340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094340))), 0x1206e6f7u);
L_1206e6f7:;
  /* 1206e6f7 pop ebp */
  EBP = (pop32());
  /* 1206e6f8 ret  */
  ESPCHK(0x1206e6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x1206e700 (119 bytes, 34 insns) */
void f_1206e700(void) {
  FTRACE(0x1206e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e700 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e701 mov ebp, esp */
  EBP = (ESP);
  /* 1206e703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e706 push 0x12091944 */
  push32((uint32_t)(0x12091944u));
  /* 1206e70b call dword ptr [0x1209439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209439c))), 0x1206e711u);
  /* 1206e711 cmp dword ptr [0x12091934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e718 je 0x1206e738 */
  if (C.zf) goto L_1206e738;
  /* 1206e71a push 0x12091944 */
  push32((uint32_t)(0x12091944u));
  /* 1206e71f call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x1206e725u);
  /* 1206e725 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1206e727 call 0x12069210 */
  push32(0x1206e72cu); f_12069210();
  /* 1206e72c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e72f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1206e736 jmp 0x1206e73f */
  goto L_1206e73f;
L_1206e738:;
  /* 1206e738 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1206e73f:;
  /* 1206e73f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1206e743 push eax */
  push32((uint32_t)(EAX));
  /* 1206e744 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e747 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e748 call 0x1206e780 */
  push32(0x1206e74du); f_1206e780();
  /* 1206e74d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e750 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206e753 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e757 je 0x1206e765 */
  if (C.zf) goto L_1206e765;
  /* 1206e759 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1206e75b call 0x120692b0 */
  push32(0x1206e760u); f_120692b0();
  /* 1206e760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e763 jmp 0x1206e770 */
  goto L_1206e770;
L_1206e765:;
  /* 1206e765 push 0x12091944 */
  push32((uint32_t)(0x12091944u));
  /* 1206e76a call dword ptr [0x1209438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209438c))), 0x1206e770u);
L_1206e770:;
  /* 1206e770 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206e773 mov esp, ebp */
  ESP = (EBP);
  /* 1206e775 pop ebp */
  EBP = (pop32());
  /* 1206e776 ret  */
  ESPCHK(0x1206e700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e780 @ 0x1206e780 (160 bytes, 50 insns) */
void f_1206e780(void) {
  FTRACE(0x1206e780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e780 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e781 mov ebp, esp */
  EBP = (ESP);
  /* 1206e783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e786 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e78a jne 0x1206e793 */
  if (!C.zf) goto L_1206e793;
  /* 1206e78c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206e78e jmp 0x1206e81c */
  goto L_1206e81c;
L_1206e793:;
  /* 1206e793 cmp dword ptr [0x120917b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e79a jne 0x1206e7ca */
  if (!C.zf) goto L_1206e7ca;
  /* 1206e79c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206e79f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206e7a4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e7a9 jle 0x1206e7bb */
  if ((C.zf||C.sf!=C.of)) goto L_1206e7bb;
  /* 1206e7ab call 0x1206d6e0 */
  push32(0x1206e7b0u); f_1206d6e0();
  /* 1206e7b0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1206e7b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206e7b9 jmp 0x1206e81c */
  goto L_1206e81c;
L_1206e7bb:;
  /* 1206e7bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e7be mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1206e7c1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1206e7c3 mov eax, 1 */
  EAX = (0x1u);
  /* 1206e7c8 jmp 0x1206e81c */
  goto L_1206e81c;
L_1206e7ca:;
  /* 1206e7ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1206e7d1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1206e7d4 push eax */
  push32((uint32_t)(EAX));
  /* 1206e7d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206e7d7 mov ecx, dword ptr [0x1208feb4] */
  ECX = (r32((uint32_t)(0x1208feb4)));
  /* 1206e7dd push ecx */
  push32((uint32_t)(ECX));
  /* 1206e7de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e7e1 push edx */
  push32((uint32_t)(EDX));
  /* 1206e7e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206e7e4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1206e7e7 push eax */
  push32((uint32_t)(EAX));
  /* 1206e7e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1206e7ed mov ecx, dword ptr [0x120917c8] */
  ECX = (r32((uint32_t)(0x120917c8)));
  /* 1206e7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e7f4 call dword ptr [0x12094368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094368))), 0x1206e7fau);
  /* 1206e7fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206e7fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e801 je 0x1206e809 */
  if (C.zf) goto L_1206e809;
  /* 1206e803 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e807 je 0x1206e819 */
  if (C.zf) goto L_1206e819;
L_1206e809:;
  /* 1206e809 call 0x1206d6e0 */
  push32(0x1206e80eu); f_1206d6e0();
  /* 1206e80e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1206e814 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206e817 jmp 0x1206e81c */
  goto L_1206e81c;
L_1206e819:;
  /* 1206e819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1206e81c:;
  /* 1206e81c mov esp, ebp */
  ESP = (EBP);
  /* 1206e81e pop ebp */
  EBP = (pop32());
  /* 1206e81f ret  */
  ESPCHK(0x1206e780u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1206e820 (32 bytes, 18 insns) */
void f_1206e820(void) {
  FTRACE(0x1206e820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e820 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e821 mov ebp, esp */
  EBP = (ESP);
  /* 1206e823 push ebx */
  push32((uint32_t)(EBX));
  /* 1206e824 push esi */
  push32((uint32_t)(ESI));
  /* 1206e825 push edi */
  push32((uint32_t)(EDI));
  /* 1206e826 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e827 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206e829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206e82b push 0x1206e838 */
  push32((uint32_t)(0x1206e838u));
  /* 1206e830 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1206e833 call 0x12075f6c */
  push32(0x1206e838u); f_12075f6c();
  /* 1206e838 pop ebp */
  EBP = (pop32());
  /* 1206e839 pop edi */
  EDI = (pop32());
  /* 1206e83a pop esi */
  ESI = (pop32());
  /* 1206e83b pop ebx */
  EBX = (pop32());
  /* 1206e83c mov esp, ebp */
  ESP = (EBP);
  /* 1206e83e pop ebp */
  EBP = (pop32());
  /* 1206e83f ret  */
  ESPCHK(0x1206e820u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1206e862 (104 bytes, 33 insns) */
void f_1206e862(void) {
  FTRACE(0x1206e862u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e862 push ebx */
  push32((uint32_t)(EBX));
  /* 1206e863 push esi */
  push32((uint32_t)(ESI));
  /* 1206e864 push edi */
  push32((uint32_t)(EDI));
  /* 1206e865 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1206e869 push eax */
  push32((uint32_t)(EAX));
  /* 1206e86a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1206e86c push 0x1206e840 */
  push32((uint32_t)(0x1206e840u));
  /* 1206e871 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1206e878 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1206e87f:;
  /* 1206e87f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1206e883 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206e886 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1206e889 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e88c je 0x1206e8bc */
  if (C.zf) goto L_1206e8bc;
  /* 1206e88e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e892 je 0x1206e8bc */
  if (C.zf) goto L_1206e8bc;
  /* 1206e894 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1206e897 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1206e89a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1206e89e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1206e8a1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206e8a6 jne 0x1206e8ba */
  if (!C.zf) goto L_1206e8ba;
  /* 1206e8a8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1206e8ad mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1206e8b1 call 0x1206e8f6 */
  push32(0x1206e8b6u); f_1206e8f6();
  /* 1206e8b6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1206e8bau);
L_1206e8ba:;
  /* 1206e8ba jmp 0x1206e87f */
  goto L_1206e87f;
L_1206e8bc:;
  /* 1206e8bc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1206e8c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e8c6 pop edi */
  EDI = (pop32());
  /* 1206e8c7 pop esi */
  ESI = (pop32());
  /* 1206e8c8 pop ebx */
  EBX = (pop32());
  /* 1206e8c9 ret  */
  ESPCHK(0x1206e862u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f6 @ 0x1206e8f6 (24 bytes, 10 insns) */
void f_1206e8f6(void) {
  FTRACE(0x1206e8f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e8f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1206e8f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1206e8f8 mov ebx, 0x120903c8 */
  EBX = (0x120903c8u);
  /* 1206e8fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206e900 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1206e903 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1206e906 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1206e909 pop ecx */
  ECX = (pop32());
  /* 1206e90a pop ebx */
  EBX = (pop32());
  /* 1206e90b ret 4 */
  ESPCHK(0x1206e8f6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e9d5 @ 0x1206e9d5 (27 bytes, 11 insns) */
void f_1206e9d5(void) {
  FTRACE(0x1206e9d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e9d5 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e9d6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1206e9da mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1206e9dc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1206e9df push eax */
  push32((uint32_t)(EAX));
  /* 1206e9e0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1206e9e3 push eax */
  push32((uint32_t)(EAX));
  /* 1206e9e4 call 0x1206e862 */
  push32(0x1206e9e9u); f_1206e862();
  /* 1206e9e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206e9ec pop ebp */
  EBP = (pop32());
  /* 1206e9ed ret 4 */
  ESPCHK(0x1206e9d5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e9f0 @ 0x1206e9f0 (482 bytes, 138 insns) */
void f_1206e9f0(void) {
  FTRACE(0x1206e9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206e9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206e9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1206e9f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206e9f6 push esi */
  push32((uint32_t)(ESI));
  /* 1206e9f7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1206e9fe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1206ea00 call 0x12069210 */
  push32(0x1206ea05u); f_12069210();
  /* 1206ea05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ea08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1206ea0f jmp 0x1206ea1a */
  goto L_1206ea1a;
L_1206ea11:;
  /* 1206ea11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206ea14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ea17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1206ea1a:;
  /* 1206ea1a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ea1e jge 0x1206ebc0 */
  if ((C.sf==C.of)) goto L_1206ebc0;
  /* 1206ea24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206ea27 cmp dword ptr [ecx*4 + 0x12092fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12092fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ea2f je 0x1206eb26 */
  if (C.zf) goto L_1206eb26;
  /* 1206ea35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206ea38 mov eax, dword ptr [edx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12092fa0)));
  /* 1206ea3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206ea42 jmp 0x1206ea4d */
  goto L_1206ea4d;
L_1206ea44:;
  /* 1206ea44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ea47 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ea4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1206ea4d:;
  /* 1206ea4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206ea50 mov eax, dword ptr [edx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12092fa0)));
  /* 1206ea57 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ea5c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ea5f jae 0x1206eb16 */
  if (!C.cf) goto L_1206eb16;
  /* 1206ea65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ea68 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1206ea6c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1206ea6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206ea71 jne 0x1206eb11 */
  if (!C.zf) goto L_1206eb11;
  /* 1206ea77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ea7a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ea7e jne 0x1206eab9 */
  if (!C.zf) goto L_1206eab9;
  /* 1206ea80 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1206ea82 call 0x12069210 */
  push32(0x1206ea87u); f_12069210();
  /* 1206ea87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ea8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ea8d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ea91 jne 0x1206eaaf */
  if (!C.zf) goto L_1206eaaf;
  /* 1206ea93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ea96 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ea99 push edx */
  push32((uint32_t)(EDX));
  /* 1206ea9a call dword ptr [0x12094354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094354))), 0x1206eaa0u);
  /* 1206eaa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eaa3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206eaa6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eaa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eaac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1206eaaf:;
  /* 1206eaaf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1206eab1 call 0x120692b0 */
  push32(0x1206eab6u); f_120692b0();
  /* 1206eab6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206eab9:;
  /* 1206eab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eabc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eabf push eax */
  push32((uint32_t)(EAX));
  /* 1206eac0 call dword ptr [0x12094344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094344))), 0x1206eac6u);
  /* 1206eac6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eac9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1206eacd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1206ead0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206ead2 je 0x1206eae6 */
  if (C.zf) goto L_1206eae6;
  /* 1206ead4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ead7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eada push eax */
  push32((uint32_t)(EAX));
  /* 1206eadb call dword ptr [0x12094340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094340))), 0x1206eae1u);
  /* 1206eae1 jmp 0x1206ea44 */
  goto L_1206ea44;
L_1206eae6:;
  /* 1206eae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eae9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1206eaef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206eaf2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206eaf5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206eaf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eafb sub eax, dword ptr [edx*4 + 0x12092fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12092fa0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206eb02 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1206eb03 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1206eb08 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1206eb0a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eb0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1206eb0f jmp 0x1206eb16 */
  goto L_1206eb16;
L_1206eb11:;
  /* 1206eb11 jmp 0x1206ea44 */
  goto L_1206ea44;
L_1206eb16:;
  /* 1206eb16 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206eb1a je 0x1206eb21 */
  if (C.zf) goto L_1206eb21;
  /* 1206eb1c jmp 0x1206ebc0 */
  goto L_1206ebc0;
L_1206eb21:;
  /* 1206eb21 jmp 0x1206ebbb */
  goto L_1206ebbb;
L_1206eb26:;
  /* 1206eb26 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1206eb28 push 0x1208d114 */
  push32((uint32_t)(0x1208d114u));
  /* 1206eb2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1206eb2f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1206eb34 call 0x12065810 */
  push32(0x1206eb39u); f_12065810();
  /* 1206eb39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eb3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206eb3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206eb43 je 0x1206ebb9 */
  if (C.zf) goto L_1206ebb9;
  /* 1206eb45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206eb48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eb4b mov dword ptr [eax*4 + 0x12092fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x12092fa0), (ECX));
  /* 1206eb52 mov edx, dword ptr [0x120930dc] */
  EDX = (r32((uint32_t)(0x120930dc)));
  /* 1206eb58 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eb5b mov dword ptr [0x120930dc], edx */
  w32((uint32_t)(0x120930dc), (EDX));
  /* 1206eb61 jmp 0x1206eb6c */
  goto L_1206eb6c;
L_1206eb63:;
  /* 1206eb63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eb66 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eb69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206eb6c:;
  /* 1206eb6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206eb6f mov edx, dword ptr [ecx*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206eb76 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eb7c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206eb7f jae 0x1206eba4 */
  if (!C.cf) goto L_1206eba4;
  /* 1206eb81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eb84 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1206eb88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eb8b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1206eb91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eb94 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1206eb98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206eb9b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1206eba2 jmp 0x1206eb63 */
  goto L_1206eb63;
L_1206eba4:;
  /* 1206eba4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206eba7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206ebaa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1206ebad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206ebb0 push edx */
  push32((uint32_t)(EDX));
  /* 1206ebb1 call 0x1206ef00 */
  push32(0x1206ebb6u); f_1206ef00();
  /* 1206ebb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206ebb9:;
  /* 1206ebb9 jmp 0x1206ebc0 */
  goto L_1206ebc0;
L_1206ebbb:;
  /* 1206ebbb jmp 0x1206ea11 */
  goto L_1206ea11;
L_1206ebc0:;
  /* 1206ebc0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1206ebc2 call 0x120692b0 */
  push32(0x1206ebc7u); f_120692b0();
  /* 1206ebc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ebca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206ebcd pop esi */
  ESI = (pop32());
  /* 1206ebce mov esp, ebp */
  ESP = (EBP);
  /* 1206ebd0 pop ebp */
  EBP = (pop32());
  /* 1206ebd1 ret  */
  ESPCHK(0x1206e9f0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1206ebe0 (183 bytes, 57 insns) */
void f_1206ebe0(void) {
  FTRACE(0x1206ebe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206ebe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206ebe1 mov ebp, esp */
  EBP = (ESP);
  /* 1206ebe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ebe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ebe7 cmp eax, dword ptr [0x120930dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120930dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ebed jae 0x1206ec7a */
  if (!C.cf) goto L_1206ec7a;
  /* 1206ebf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ebf6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206ebf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ebfc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206ebff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ec02 mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206ec09 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ec0d jne 0x1206ec7a */
  if (!C.zf) goto L_1206ec7a;
  /* 1206ec0f cmp dword ptr [0x120915ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120915ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ec16 jne 0x1206ec5a */
  if (!C.zf) goto L_1206ec5a;
  /* 1206ec18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ec1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1206ec1e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ec22 je 0x1206ec32 */
  if (C.zf) goto L_1206ec32;
  /* 1206ec24 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ec28 je 0x1206ec40 */
  if (C.zf) goto L_1206ec40;
  /* 1206ec2a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ec2e je 0x1206ec4e */
  if (C.zf) goto L_1206ec4e;
  /* 1206ec30 jmp 0x1206ec5a */
  goto L_1206ec5a;
L_1206ec32:;
  /* 1206ec32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206ec35 push edx */
  push32((uint32_t)(EDX));
  /* 1206ec36 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1206ec38 call dword ptr [0x1209430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209430c))), 0x1206ec3eu);
  /* 1206ec3e jmp 0x1206ec5a */
  goto L_1206ec5a;
L_1206ec40:;
  /* 1206ec40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206ec43 push eax */
  push32((uint32_t)(EAX));
  /* 1206ec44 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1206ec46 call dword ptr [0x1209430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209430c))), 0x1206ec4cu);
  /* 1206ec4c jmp 0x1206ec5a */
  goto L_1206ec5a;
L_1206ec4e:;
  /* 1206ec4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206ec51 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ec52 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1206ec54 call dword ptr [0x1209430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209430c))), 0x1206ec5au);
L_1206ec5a:;
  /* 1206ec5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ec5d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1206ec60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ec63 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1206ec66 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ec69 mov ecx, dword ptr [edx*4 + 0x12092fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12092fa0)));
  /* 1206ec70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206ec73 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1206ec76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206ec78 jmp 0x1206ec93 */
  goto L_1206ec93;
L_1206ec7a:;
  /* 1206ec7a call 0x1206d6e0 */
  push32(0x1206ec7fu); f_1206d6e0();
  /* 1206ec7f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1206ec85 call 0x1206d6f0 */
  push32(0x1206ec8au); f_1206d6f0();
  /* 1206ec8a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1206ec90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1206ec93:;
  /* 1206ec93 mov esp, ebp */
  ESP = (EBP);
  /* 1206ec95 pop ebp */
  EBP = (pop32());
  /* 1206ec96 ret  */
  ESPCHK(0x1206ebe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eca0 @ 0x1206eca0 (216 bytes, 63 insns) */
void f_1206eca0(void) {
  FTRACE(0x1206eca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206eca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206eca1 mov ebp, esp */
  EBP = (ESP);
  /* 1206eca3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206eca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206eca7 cmp eax, dword ptr [0x120930dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120930dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ecad jae 0x1206ed5b */
  if (!C.cf) goto L_1206ed5b;
  /* 1206ecb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ecb6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206ecb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ecbc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206ecbf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ecc2 mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206ecc9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1206ecce and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1206ecd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206ecd3 je 0x1206ed5b */
  if (C.zf) goto L_1206ed5b;
  /* 1206ecd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ecdc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1206ecdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ece2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1206ece5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ece8 mov ecx, dword ptr [edx*4 + 0x12092fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12092fa0)));
  /* 1206ecef cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ecf3 je 0x1206ed5b */
  if (C.zf) goto L_1206ed5b;
  /* 1206ecf5 cmp dword ptr [0x120915ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120915ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ecfc jne 0x1206ed3a */
  if (!C.zf) goto L_1206ed3a;
  /* 1206ecfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ed01 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206ed04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ed08 je 0x1206ed18 */
  if (C.zf) goto L_1206ed18;
  /* 1206ed0a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ed0e je 0x1206ed24 */
  if (C.zf) goto L_1206ed24;
  /* 1206ed10 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ed14 je 0x1206ed30 */
  if (C.zf) goto L_1206ed30;
  /* 1206ed16 jmp 0x1206ed3a */
  goto L_1206ed3a;
L_1206ed18:;
  /* 1206ed18 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206ed1a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1206ed1c call dword ptr [0x1209430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209430c))), 0x1206ed22u);
  /* 1206ed22 jmp 0x1206ed3a */
  goto L_1206ed3a;
L_1206ed24:;
  /* 1206ed24 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206ed26 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1206ed28 call dword ptr [0x1209430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209430c))), 0x1206ed2eu);
  /* 1206ed2e jmp 0x1206ed3a */
  goto L_1206ed3a;
L_1206ed30:;
  /* 1206ed30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206ed32 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1206ed34 call dword ptr [0x1209430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1209430c))), 0x1206ed3au);
L_1206ed3a:;
  /* 1206ed3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ed3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206ed40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ed43 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206ed46 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ed49 mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206ed50 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1206ed57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206ed59 jmp 0x1206ed74 */
  goto L_1206ed74;
L_1206ed5b:;
  /* 1206ed5b call 0x1206d6e0 */
  push32(0x1206ed60u); f_1206d6e0();
  /* 1206ed60 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1206ed66 call 0x1206d6f0 */
  push32(0x1206ed6bu); f_1206d6f0();
  /* 1206ed6b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1206ed71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1206ed74:;
  /* 1206ed74 mov esp, ebp */
  ESP = (EBP);
  /* 1206ed76 pop ebp */
  EBP = (pop32());
  /* 1206ed77 ret  */
  ESPCHK(0x1206eca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed80 @ 0x1206ed80 (102 bytes, 30 insns) */
void f_1206ed80(void) {
  FTRACE(0x1206ed80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206ed80 push ebp */
  push32((uint32_t)(EBP));
  /* 1206ed81 mov ebp, esp */
  EBP = (ESP);
  /* 1206ed83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ed86 cmp eax, dword ptr [0x120930dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120930dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ed8c jae 0x1206edcb */
  if (!C.cf) goto L_1206edcb;
  /* 1206ed8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ed91 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206ed94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ed97 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206ed9a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ed9d mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206eda4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1206eda9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1206edac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206edae je 0x1206edcb */
  if (C.zf) goto L_1206edcb;
  /* 1206edb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206edb3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1206edb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206edb9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1206edbc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206edbf mov ecx, dword ptr [edx*4 + 0x12092fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12092fa0)));
  /* 1206edc6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1206edc9 jmp 0x1206ede4 */
  goto L_1206ede4;
L_1206edcb:;
  /* 1206edcb call 0x1206d6e0 */
  push32(0x1206edd0u); f_1206d6e0();
  /* 1206edd0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1206edd6 call 0x1206d6f0 */
  push32(0x1206eddbu); f_1206d6f0();
  /* 1206eddb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1206ede1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1206ede4:;
  /* 1206ede4 pop ebp */
  EBP = (pop32());
  /* 1206ede5 ret  */
  ESPCHK(0x1206ed80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edf0 @ 0x1206edf0 (260 bytes, 83 insns) */
void f_1206edf0(void) {
  FTRACE(0x1206edf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206edf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206edf1 mov ebp, esp */
  EBP = (ESP);
  /* 1206edf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206edf6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1206edfa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206edfd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1206ee00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206ee02 je 0x1206ee0d */
  if (C.zf) goto L_1206ee0d;
  /* 1206ee04 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1206ee07 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1206ee0a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1206ee0d:;
  /* 1206ee0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206ee10 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1206ee16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206ee18 je 0x1206ee22 */
  if (C.zf) goto L_1206ee22;
  /* 1206ee1a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1206ee1d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1206ee1f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1206ee22:;
  /* 1206ee22 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206ee25 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1206ee2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206ee2d je 0x1206ee38 */
  if (C.zf) goto L_1206ee38;
  /* 1206ee2f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1206ee32 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1206ee35 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1206ee38:;
  /* 1206ee38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ee3b push eax */
  push32((uint32_t)(EAX));
  /* 1206ee3c call dword ptr [0x120943d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d0))), 0x1206ee42u);
  /* 1206ee42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206ee45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ee49 jne 0x1206ee62 */
  if (!C.zf) goto L_1206ee62;
  /* 1206ee4b call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x1206ee51u);
  /* 1206ee51 push eax */
  push32((uint32_t)(EAX));
  /* 1206ee52 call 0x1206d640 */
  push32(0x1206ee57u); f_1206d640();
  /* 1206ee57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ee5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206ee5d jmp 0x1206eef0 */
  goto L_1206eef0;
L_1206ee62:;
  /* 1206ee62 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ee66 jne 0x1206ee73 */
  if (!C.zf) goto L_1206ee73;
  /* 1206ee68 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1206ee6b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1206ee6e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1206ee71 jmp 0x1206ee82 */
  goto L_1206ee82;
L_1206ee73:;
  /* 1206ee73 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ee77 jne 0x1206ee82 */
  if (!C.zf) goto L_1206ee82;
  /* 1206ee79 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1206ee7c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1206ee7f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1206ee82:;
  /* 1206ee82 call 0x1206e9f0 */
  push32(0x1206ee87u); f_1206e9f0();
  /* 1206ee87 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206ee8a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ee8e jne 0x1206eeab */
  if (!C.zf) goto L_1206eeab;
  /* 1206ee90 call 0x1206d6e0 */
  push32(0x1206ee95u); f_1206d6e0();
  /* 1206ee95 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1206ee9b call 0x1206d6f0 */
  push32(0x1206eea0u); f_1206d6f0();
  /* 1206eea0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1206eea6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206eea9 jmp 0x1206eef0 */
  goto L_1206eef0;
L_1206eeab:;
  /* 1206eeab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206eeae push eax */
  push32((uint32_t)(EAX));
  /* 1206eeaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206eeb2 push ecx */
  push32((uint32_t)(ECX));
  /* 1206eeb3 call 0x1206ebe0 */
  push32(0x1206eeb8u); f_1206ebe0();
  /* 1206eeb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eebb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1206eebe or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1206eec1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1206eec4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206eec7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206eeca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206eecd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206eed0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206eed3 mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206eeda mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1206eedd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1206eee1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206eee4 push ecx */
  push32((uint32_t)(ECX));
  /* 1206eee5 call 0x1206ef90 */
  push32(0x1206eeeau); f_1206ef90();
  /* 1206eeea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206eeed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1206eef0:;
  /* 1206eef0 mov esp, ebp */
  ESP = (EBP);
  /* 1206eef2 pop ebp */
  EBP = (pop32());
  /* 1206eef3 ret  */
  ESPCHK(0x1206edf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef00 @ 0x1206ef00 (134 bytes, 44 insns) */
void f_1206ef00(void) {
  FTRACE(0x1206ef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206ef00 push ebp */
  push32((uint32_t)(EBP));
  /* 1206ef01 mov ebp, esp */
  EBP = (ESP);
  /* 1206ef03 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ef04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ef07 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206ef0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ef0d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206ef10 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ef13 mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206ef1a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ef1c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1206ef1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ef22 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ef26 jne 0x1206ef61 */
  if (!C.zf) goto L_1206ef61;
  /* 1206ef28 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1206ef2a call 0x12069210 */
  push32(0x1206ef2fu); f_12069210();
  /* 1206ef2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ef32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ef35 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ef39 jne 0x1206ef57 */
  if (!C.zf) goto L_1206ef57;
  /* 1206ef3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ef3e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ef41 push edx */
  push32((uint32_t)(EDX));
  /* 1206ef42 call dword ptr [0x12094354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094354))), 0x1206ef48u);
  /* 1206ef48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ef4b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206ef4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ef51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ef54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1206ef57:;
  /* 1206ef57 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1206ef59 call 0x120692b0 */
  push32(0x1206ef5eu); f_120692b0();
  /* 1206ef5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206ef61:;
  /* 1206ef61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ef64 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206ef67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ef6a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206ef6d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ef70 mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206ef77 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1206ef7b push eax */
  push32((uint32_t)(EAX));
  /* 1206ef7c call dword ptr [0x12094344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094344))), 0x1206ef82u);
  /* 1206ef82 mov esp, ebp */
  ESP = (EBP);
  /* 1206ef84 pop ebp */
  EBP = (pop32());
  /* 1206ef85 ret  */
  ESPCHK(0x1206ef00u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1206ef90 (38 bytes, 13 insns) */
void f_1206ef90(void) {
  FTRACE(0x1206ef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206ef90 push ebp */
  push32((uint32_t)(EBP));
  /* 1206ef91 mov ebp, esp */
  EBP = (ESP);
  /* 1206ef93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ef96 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206ef99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ef9c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206ef9f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206efa2 mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206efa9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1206efad push eax */
  push32((uint32_t)(EAX));
  /* 1206efae call dword ptr [0x12094340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094340))), 0x1206efb4u);
  /* 1206efb4 pop ebp */
  EBP = (pop32());
  /* 1206efb5 ret  */
  ESPCHK(0x1206ef90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efc0 @ 0x1206efc0 (218 bytes, 63 insns) */
void f_1206efc0(void) {
  FTRACE(0x1206efc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206efc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206efc1 mov ebp, esp */
  EBP = (ESP);
  /* 1206efc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206efc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206efcd push 2 */
  push32((uint32_t)(0x2u));
  /* 1206efcf call 0x12069210 */
  push32(0x1206efd4u); f_12069210();
  /* 1206efd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206efd7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1206efde jmp 0x1206efe9 */
  goto L_1206efe9;
L_1206efe0:;
  /* 1206efe0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206efe3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206efe6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1206efe9:;
  /* 1206efe9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206efec cmp ecx, dword ptr [0x12092ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12092ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206eff2 jge 0x1206f089 */
  if ((C.sf==C.of)) goto L_1206f089;
  /* 1206eff8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206effb mov eax, dword ptr [0x12091948] */
  EAX = (r32((uint32_t)(0x12091948)));
  /* 1206f000 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f004 je 0x1206f084 */
  if (C.zf) goto L_1206f084;
  /* 1206f006 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f009 mov edx, dword ptr [0x12091948] */
  EDX = (r32((uint32_t)(0x12091948)));
  /* 1206f00f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1206f012 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206f015 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1206f01b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206f01d je 0x1206f041 */
  if (C.zf) goto L_1206f041;
  /* 1206f01f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f022 mov eax, dword ptr [0x12091948] */
  EAX = (r32((uint32_t)(0x12091948)));
  /* 1206f027 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1206f02a push ecx */
  push32((uint32_t)(ECX));
  /* 1206f02b call 0x1206fdb0 */
  push32(0x1206f030u); f_1206fdb0();
  /* 1206f030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f033 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f036 je 0x1206f041 */
  if (C.zf) goto L_1206f041;
  /* 1206f038 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f03b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f03e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1206f041:;
  /* 1206f041 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f045 jl 0x1206f084 */
  if ((C.sf!=C.of)) goto L_1206f084;
  /* 1206f047 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f04a mov ecx, dword ptr [0x12091948] */
  ECX = (r32((uint32_t)(0x12091948)));
  /* 1206f050 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1206f053 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f056 push edx */
  push32((uint32_t)(EDX));
  /* 1206f057 call dword ptr [0x120943d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943d8))), 0x1206f05du);
  /* 1206f05d push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f05f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f062 mov ecx, dword ptr [0x12091948] */
  ECX = (r32((uint32_t)(0x12091948)));
  /* 1206f068 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1206f06b push edx */
  push32((uint32_t)(EDX));
  /* 1206f06c call 0x120662a0 */
  push32(0x1206f071u); f_120662a0();
  /* 1206f071 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f074 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f077 mov ecx, dword ptr [0x12091948] */
  ECX = (r32((uint32_t)(0x12091948)));
  /* 1206f07d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1206f084:;
  /* 1206f084 jmp 0x1206efe0 */
  goto L_1206efe0;
L_1206f089:;
  /* 1206f089 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f08b call 0x120692b0 */
  push32(0x1206f090u); f_120692b0();
  /* 1206f090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f093 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f096 mov esp, ebp */
  ESP = (EBP);
  /* 1206f098 pop ebp */
  EBP = (pop32());
  /* 1206f099 ret  */
  ESPCHK(0x1206efc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0a0 @ 0x1206f0a0 (68 bytes, 26 insns) */
void f_1206f0a0(void) {
  FTRACE(0x1206f0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1206f0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f0a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f0a8 jne 0x1206f0b6 */
  if (!C.zf) goto L_1206f0b6;
  /* 1206f0aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1206f0ac call 0x1206f210 */
  push32(0x1206f0b1u); f_1206f210();
  /* 1206f0b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f0b4 jmp 0x1206f0e0 */
  goto L_1206f0e0;
L_1206f0b6:;
  /* 1206f0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f0b9 push eax */
  push32((uint32_t)(EAX));
  /* 1206f0ba call 0x1206e620 */
  push32(0x1206f0bfu); f_1206e620();
  /* 1206f0bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f0c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f0c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f0c6 call 0x1206f0f0 */
  push32(0x1206f0cbu); f_1206f0f0();
  /* 1206f0cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f0ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206f0d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f0d4 push edx */
  push32((uint32_t)(EDX));
  /* 1206f0d5 call 0x1206e690 */
  push32(0x1206f0dau); f_1206e690();
  /* 1206f0da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f0dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1206f0e0:;
  /* 1206f0e0 mov esp, ebp */
  ESP = (EBP);
  /* 1206f0e2 pop ebp */
  EBP = (pop32());
  /* 1206f0e3 ret  */
  ESPCHK(0x1206f0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0f0 @ 0x1206f0f0 (65 bytes, 26 insns) */
void f_1206f0f0(void) {
  FTRACE(0x1206f0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1206f0f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f0f6 push eax */
  push32((uint32_t)(EAX));
  /* 1206f0f7 call 0x1206f140 */
  push32(0x1206f0fcu); f_1206f140();
  /* 1206f0fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f0ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f101 je 0x1206f108 */
  if (C.zf) goto L_1206f108;
  /* 1206f103 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206f106 jmp 0x1206f12f */
  goto L_1206f12f;
L_1206f108:;
  /* 1206f108 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f10b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206f10e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1206f114 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206f116 je 0x1206f12d */
  if (C.zf) goto L_1206f12d;
  /* 1206f118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f11b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206f11e push ecx */
  push32((uint32_t)(ECX));
  /* 1206f11f call 0x1206ff00 */
  push32(0x1206f124u); f_1206ff00();
  /* 1206f124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f127 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1206f129 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f12b jmp 0x1206f12f */
  goto L_1206f12f;
L_1206f12d:;
  /* 1206f12d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1206f12f:;
  /* 1206f12f pop ebp */
  EBP = (pop32());
  /* 1206f130 ret  */
  ESPCHK(0x1206f0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f140 @ 0x1206f140 (183 bytes, 62 insns) */
void f_1206f140(void) {
  FTRACE(0x1206f140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f140 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f141 mov ebp, esp */
  EBP = (ESP);
  /* 1206f143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f146 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206f14d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f150 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206f153 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f156 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206f159 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1206f15c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f15f jne 0x1206f1db */
  if (!C.zf) goto L_1206f1db;
  /* 1206f161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f164 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206f167 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1206f16d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206f16f je 0x1206f1db */
  if (C.zf) goto L_1206f1db;
  /* 1206f171 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f174 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f177 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1206f179 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f17c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1206f17f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f183 jle 0x1206f1db */
  if ((C.zf||C.sf!=C.of)) goto L_1206f1db;
  /* 1206f185 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f188 push edx */
  push32((uint32_t)(EDX));
  /* 1206f189 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f18c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1206f18f push ecx */
  push32((uint32_t)(ECX));
  /* 1206f190 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f193 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1206f196 push eax */
  push32((uint32_t)(EAX));
  /* 1206f197 call 0x1206e0b0 */
  push32(0x1206f19cu); f_1206e0b0();
  /* 1206f19c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f19f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f1a2 jne 0x1206f1c5 */
  if (!C.zf) goto L_1206f1c5;
  /* 1206f1a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f1a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206f1aa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1206f1b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206f1b2 je 0x1206f1c3 */
  if (C.zf) goto L_1206f1c3;
  /* 1206f1b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f1b7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206f1ba and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1206f1bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f1c0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1206f1c3:;
  /* 1206f1c3 jmp 0x1206f1db */
  goto L_1206f1db;
L_1206f1c5:;
  /* 1206f1c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f1c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206f1cb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1206f1ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f1d1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1206f1d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1206f1db:;
  /* 1206f1db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f1de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f1e1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1206f1e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1206f1e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f1e9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1206f1f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f1f3 mov esp, ebp */
  ESP = (EBP);
  /* 1206f1f5 pop ebp */
  EBP = (pop32());
  /* 1206f1f6 ret  */
  ESPCHK(0x1206f140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f200 @ 0x1206f200 (15 bytes, 7 insns) */
void f_1206f200(void) {
  FTRACE(0x1206f200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f200 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f201 mov ebp, esp */
  EBP = (ESP);
  /* 1206f203 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206f205 call 0x1206f210 */
  push32(0x1206f20au); f_1206f210();
  /* 1206f20a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f20d pop ebp */
  EBP = (pop32());
  /* 1206f20e ret  */
  ESPCHK(0x1206f200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f210 @ 0x1206f210 (319 bytes, 94 insns) */
void f_1206f210(void) {
  FTRACE(0x1206f210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f210 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f211 mov ebp, esp */
  EBP = (ESP);
  /* 1206f213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f216 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206f21d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1206f224 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f226 call 0x12069210 */
  push32(0x1206f22bu); f_12069210();
  /* 1206f22b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f22e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1206f235 jmp 0x1206f240 */
  goto L_1206f240;
L_1206f237:;
  /* 1206f237 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f23a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f23d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1206f240:;
  /* 1206f240 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f243 cmp ecx, dword ptr [0x12092ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12092ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f249 jge 0x1206f333 */
  if ((C.sf==C.of)) goto L_1206f333;
  /* 1206f24f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f252 mov eax, dword ptr [0x12091948] */
  EAX = (r32((uint32_t)(0x12091948)));
  /* 1206f257 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f25b je 0x1206f32e */
  if (C.zf) goto L_1206f32e;
  /* 1206f261 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f264 mov edx, dword ptr [0x12091948] */
  EDX = (r32((uint32_t)(0x12091948)));
  /* 1206f26a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1206f26d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1206f270 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1206f276 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206f278 je 0x1206f32e */
  if (C.zf) goto L_1206f32e;
  /* 1206f27e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f281 mov eax, dword ptr [0x12091948] */
  EAX = (r32((uint32_t)(0x12091948)));
  /* 1206f286 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1206f289 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f28a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f28d push edx */
  push32((uint32_t)(EDX));
  /* 1206f28e call 0x1206e660 */
  push32(0x1206f293u); f_1206e660();
  /* 1206f293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f296 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f299 mov ecx, dword ptr [0x12091948] */
  ECX = (r32((uint32_t)(0x12091948)));
  /* 1206f29f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1206f2a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1206f2a5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1206f2aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f2ac je 0x1206f315 */
  if (C.zf) goto L_1206f315;
  /* 1206f2ae cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f2b2 jne 0x1206f2d9 */
  if (!C.zf) goto L_1206f2d9;
  /* 1206f2b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f2b7 mov edx, dword ptr [0x12091948] */
  EDX = (r32((uint32_t)(0x12091948)));
  /* 1206f2bd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1206f2c0 push eax */
  push32((uint32_t)(EAX));
  /* 1206f2c1 call 0x1206f0f0 */
  push32(0x1206f2c6u); f_1206f0f0();
  /* 1206f2c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f2c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f2cc je 0x1206f2d7 */
  if (C.zf) goto L_1206f2d7;
  /* 1206f2ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f2d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f2d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1206f2d7:;
  /* 1206f2d7 jmp 0x1206f315 */
  goto L_1206f315;
L_1206f2d9:;
  /* 1206f2d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f2dd jne 0x1206f315 */
  if (!C.zf) goto L_1206f315;
  /* 1206f2df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f2e2 mov eax, dword ptr [0x12091948] */
  EAX = (r32((uint32_t)(0x12091948)));
  /* 1206f2e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1206f2ea mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206f2ed and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1206f2f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206f2f2 je 0x1206f315 */
  if (C.zf) goto L_1206f315;
  /* 1206f2f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f2f7 mov ecx, dword ptr [0x12091948] */
  ECX = (r32((uint32_t)(0x12091948)));
  /* 1206f2fd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1206f300 push edx */
  push32((uint32_t)(EDX));
  /* 1206f301 call 0x1206f0f0 */
  push32(0x1206f306u); f_1206f0f0();
  /* 1206f306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f309 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f30c jne 0x1206f315 */
  if (!C.zf) goto L_1206f315;
  /* 1206f30e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1206f315:;
  /* 1206f315 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f318 mov ecx, dword ptr [0x12091948] */
  ECX = (r32((uint32_t)(0x12091948)));
  /* 1206f31e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1206f321 push edx */
  push32((uint32_t)(EDX));
  /* 1206f322 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f325 push eax */
  push32((uint32_t)(EAX));
  /* 1206f326 call 0x1206e6d0 */
  push32(0x1206f32bu); f_1206e6d0();
  /* 1206f32b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206f32e:;
  /* 1206f32e jmp 0x1206f237 */
  goto L_1206f237;
L_1206f333:;
  /* 1206f333 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f335 call 0x120692b0 */
  push32(0x1206f33au); f_120692b0();
  /* 1206f33a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f33d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f341 jne 0x1206f348 */
  if (!C.zf) goto L_1206f348;
  /* 1206f343 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f346 jmp 0x1206f34b */
  goto L_1206f34b;
L_1206f348:;
  /* 1206f348 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1206f34b:;
  /* 1206f34b mov esp, ebp */
  ESP = (EBP);
  /* 1206f34d pop ebp */
  EBP = (pop32());
  /* 1206f34e ret  */
  ESPCHK(0x1206f210u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1206f350 (15 bytes, 7 insns) */
void f_1206f350(void) {
  FTRACE(0x1206f350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f350 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f351 mov ebp, esp */
  EBP = (ESP);
  /* 1206f353 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f355 call 0x12064780 */
  push32(0x1206f35au); f_12064780();
  /* 1206f35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f35d pop ebp */
  EBP = (pop32());
  /* 1206f35e ret  */
  ESPCHK(0x1206f350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f360 @ 0x1206f360 (1007 bytes, 269 insns) */
void f_1206f360(void) {
  FTRACE(0x1206f360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f360 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f361 mov ebp, esp */
  EBP = (ESP);
  /* 1206f363 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f369 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f36d jl 0x1206f375 */
  if ((C.sf!=C.of)) goto L_1206f375;
  /* 1206f36f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f373 jle 0x1206f37c */
  if ((C.zf||C.sf!=C.of)) goto L_1206f37c;
L_1206f375:;
  /* 1206f375 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206f377 jmp 0x1206f74b */
  goto L_1206f74b;
L_1206f37c:;
  /* 1206f37c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1206f37e call 0x12069210 */
  push32(0x1206f383u); f_12069210();
  /* 1206f383 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f386 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1206f38d mov eax, dword ptr [0x12091934] */
  EAX = (r32((uint32_t)(0x12091934)));
  /* 1206f392 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f395 mov dword ptr [0x12091934], eax */
  w32((uint32_t)(0x12091934), (EAX));
L_1206f39a:;
  /* 1206f39a cmp dword ptr [0x12091944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12091944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f3a1 je 0x1206f3ad */
  if (C.zf) goto L_1206f3ad;
  /* 1206f3a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1206f3a5 call dword ptr [0x120942fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942fc))), 0x1206f3abu);
  /* 1206f3ab jmp 0x1206f39a */
  goto L_1206f39a;
L_1206f3ad:;
  /* 1206f3ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f3b1 je 0x1206f3f1 */
  if (C.zf) goto L_1206f3f1;
  /* 1206f3b3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f3b7 je 0x1206f3d1 */
  if (C.zf) goto L_1206f3d1;
  /* 1206f3b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206f3bc push ecx */
  push32((uint32_t)(ECX));
  /* 1206f3bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f3c0 push edx */
  push32((uint32_t)(EDX));
  /* 1206f3c1 call 0x1206f750 */
  push32(0x1206f3c6u); f_1206f750();
  /* 1206f3c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f3c9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1206f3cf jmp 0x1206f3e3 */
  goto L_1206f3e3;
L_1206f3d1:;
  /* 1206f3d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f3d4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f3d7 mov ecx, dword ptr [eax + 0x120904ec] */
  ECX = (r32((uint32_t)(EAX + 0x120904ec)));
  /* 1206f3dd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1206f3e3:;
  /* 1206f3e3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1206f3e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1206f3ec jmp 0x1206f72b */
  goto L_1206f72b;
L_1206f3f1:;
  /* 1206f3f1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1206f3f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1206f3ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f403 je 0x1206f723 */
  if (C.zf) goto L_1206f723;
  /* 1206f409 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206f40c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1206f40f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f412 jne 0x1206f634 */
  if (!C.zf) goto L_1206f634;
  /* 1206f418 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206f41b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1206f41f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f422 jne 0x1206f634 */
  if (!C.zf) goto L_1206f634;
  /* 1206f428 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206f42b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1206f42f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f432 jne 0x1206f634 */
  if (!C.zf) goto L_1206f634;
  /* 1206f438 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206f43b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1206f441:;
  /* 1206f441 push 0x1208d164 */
  push32((uint32_t)(0x1208d164u));
  /* 1206f446 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1206f44c push ecx */
  push32((uint32_t)(ECX));
  /* 1206f44d call 0x120715b0 */
  push32(0x1206f452u); f_120715b0();
  /* 1206f452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f455 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1206f45b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f462 je 0x1206f48d */
  if (C.zf) goto L_1206f48d;
  /* 1206f464 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1206f46a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f470 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1206f476 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f47d je 0x1206f48d */
  if (C.zf) goto L_1206f48d;
  /* 1206f47f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1206f485 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1206f488 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f48b jne 0x1206f4b3 */
  if (!C.zf) goto L_1206f4b3;
L_1206f48d:;
  /* 1206f48d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f491 je 0x1206f4ac */
  if (C.zf) goto L_1206f4ac;
  /* 1206f493 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1206f495 call 0x120692b0 */
  push32(0x1206f49au); f_120692b0();
  /* 1206f49a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f49d mov edx, dword ptr [0x12091934] */
  EDX = (r32((uint32_t)(0x12091934)));
  /* 1206f4a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f4a6 mov dword ptr [0x12091934], edx */
  w32((uint32_t)(0x12091934), (EDX));
L_1206f4ac:;
  /* 1206f4ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206f4ae jmp 0x1206f74b */
  goto L_1206f74b;
L_1206f4b3:;
  /* 1206f4b3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1206f4ba jmp 0x1206f4c5 */
  goto L_1206f4c5;
L_1206f4bc:;
  /* 1206f4bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206f4bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f4c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1206f4c5:;
  /* 1206f4c5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f4c9 jg 0x1206f513 */
  if ((!C.zf&&C.sf==C.of)) goto L_1206f513;
  /* 1206f4cb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1206f4d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f4d2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1206f4d8 push edx */
  push32((uint32_t)(EDX));
  /* 1206f4d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206f4dc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f4df mov ecx, dword ptr [eax + 0x120904e8] */
  ECX = (r32((uint32_t)(EAX + 0x120904e8)));
  /* 1206f4e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f4e6 call 0x12071570 */
  push32(0x1206f4ebu); f_12071570();
  /* 1206f4eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f4ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f4f0 jne 0x1206f511 */
  if (!C.zf) goto L_1206f511;
  /* 1206f4f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206f4f5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f4f8 mov eax, dword ptr [edx + 0x120904e8] */
  EAX = (r32((uint32_t)(EDX + 0x120904e8)));
  /* 1206f4fe push eax */
  push32((uint32_t)(EAX));
  /* 1206f4ff call 0x12068640 */
  push32(0x1206f504u); f_12068640();
  /* 1206f504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f507 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f50d jne 0x1206f511 */
  if (!C.zf) goto L_1206f511;
  /* 1206f50f jmp 0x1206f513 */
  goto L_1206f513;
L_1206f511:;
  /* 1206f511 jmp 0x1206f4bc */
  goto L_1206f4bc;
L_1206f513:;
  /* 1206f513 push 0x1208d160 */
  push32((uint32_t)(0x1208d160u));
  /* 1206f518 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1206f51e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f521 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1206f527 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1206f52d push edx */
  push32((uint32_t)(EDX));
  /* 1206f52e call 0x12071530 */
  push32(0x1206f533u); f_12071530();
  /* 1206f533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f536 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1206f53c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f543 jne 0x1206f579 */
  if (!C.zf) goto L_1206f579;
  /* 1206f545 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1206f54b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1206f54e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f551 je 0x1206f579 */
  if (C.zf) goto L_1206f579;
  /* 1206f553 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f557 je 0x1206f572 */
  if (C.zf) goto L_1206f572;
  /* 1206f559 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1206f55b call 0x120692b0 */
  push32(0x1206f560u); f_120692b0();
  /* 1206f560 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f563 mov edx, dword ptr [0x12091934] */
  EDX = (r32((uint32_t)(0x12091934)));
  /* 1206f569 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f56c mov dword ptr [0x12091934], edx */
  w32((uint32_t)(0x12091934), (EDX));
L_1206f572:;
  /* 1206f572 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206f574 jmp 0x1206f74b */
  goto L_1206f74b;
L_1206f579:;
  /* 1206f579 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f57d jg 0x1206f5ca */
  if ((!C.zf&&C.sf==C.of)) goto L_1206f5ca;
  /* 1206f57f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1206f585 push eax */
  push32((uint32_t)(EAX));
  /* 1206f586 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1206f58c push ecx */
  push32((uint32_t)(ECX));
  /* 1206f58d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1206f593 push edx */
  push32((uint32_t)(EDX));
  /* 1206f594 call 0x12069030 */
  push32(0x1206f599u); f_12069030();
  /* 1206f599 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f59c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1206f5a2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1206f5aa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1206f5b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f5b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206f5b4 push edx */
  push32((uint32_t)(EDX));
  /* 1206f5b5 call 0x1206f750 */
  push32(0x1206f5bau); f_1206f750();
  /* 1206f5ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f5bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f5bf je 0x1206f5ca */
  if (C.zf) goto L_1206f5ca;
  /* 1206f5c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f5c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f5c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1206f5ca:;
  /* 1206f5ca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1206f5d0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f5d6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1206f5dc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1206f5e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1206f5e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f5e7 je 0x1206f5f8 */
  if (C.zf) goto L_1206f5f8;
  /* 1206f5e9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1206f5ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f5f2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1206f5f8:;
  /* 1206f5f8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1206f5fe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1206f601 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f603 jne 0x1206f441 */
  if (!C.zf) goto L_1206f441;
  /* 1206f609 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f60d je 0x1206f61c */
  if (C.zf) goto L_1206f61c;
  /* 1206f60f call 0x1206f8f0 */
  push32(0x1206f614u); f_1206f8f0();
  /* 1206f614 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1206f61a jmp 0x1206f626 */
  goto L_1206f626;
L_1206f61c:;
  /* 1206f61c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1206f626:;
  /* 1206f626 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1206f62c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1206f62f jmp 0x1206f721 */
  goto L_1206f721;
L_1206f634:;
  /* 1206f634 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f637 push edx */
  push32((uint32_t)(EDX));
  /* 1206f638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206f63a push 0 */
  push32((uint32_t)(0x0u));
  /* 1206f63c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1206f642 push eax */
  push32((uint32_t)(EAX));
  /* 1206f643 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206f646 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f647 call 0x1206f9f0 */
  push32(0x1206f64cu); f_1206f9f0();
  /* 1206f64c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f64f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206f652 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f656 je 0x1206f721 */
  if (C.zf) goto L_1206f721;
  /* 1206f65c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1206f663 jmp 0x1206f66e */
  goto L_1206f66e;
L_1206f665:;
  /* 1206f665 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206f668 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f66b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1206f66e:;
  /* 1206f66e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f672 jg 0x1206f6d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1206f6d0;
  /* 1206f674 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f678 je 0x1206f6ce */
  if (C.zf) goto L_1206f6ce;
  /* 1206f67a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206f67d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f680 mov ecx, dword ptr [eax + 0x120904ec] */
  ECX = (r32((uint32_t)(EAX + 0x120904ec)));
  /* 1206f686 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f687 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1206f68d push edx */
  push32((uint32_t)(EDX));
  /* 1206f68e call 0x120714a0 */
  push32(0x1206f693u); f_120714a0();
  /* 1206f693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f698 je 0x1206f6c5 */
  if (C.zf) goto L_1206f6c5;
  /* 1206f69a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1206f6a0 push eax */
  push32((uint32_t)(EAX));
  /* 1206f6a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1206f6a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f6a5 call 0x1206f750 */
  push32(0x1206f6aau); f_1206f750();
  /* 1206f6aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f6ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f6af je 0x1206f6bc */
  if (C.zf) goto L_1206f6bc;
  /* 1206f6b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f6b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f6b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1206f6ba jmp 0x1206f6c3 */
  goto L_1206f6c3;
L_1206f6bc:;
  /* 1206f6bc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1206f6c3:;
  /* 1206f6c3 jmp 0x1206f6ce */
  goto L_1206f6ce;
L_1206f6c5:;
  /* 1206f6c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f6c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f6cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1206f6ce:;
  /* 1206f6ce jmp 0x1206f665 */
  goto L_1206f665;
L_1206f6d0:;
  /* 1206f6d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f6d4 je 0x1206f6fb */
  if (C.zf) goto L_1206f6fb;
  /* 1206f6d6 call 0x1206f8f0 */
  push32(0x1206f6dbu); f_1206f8f0();
  /* 1206f6db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206f6de push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f6e0 mov ecx, dword ptr [0x120904ec] */
  ECX = (r32((uint32_t)(0x120904ec)));
  /* 1206f6e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f6e7 call 0x120662a0 */
  push32(0x1206f6ecu); f_120662a0();
  /* 1206f6ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f6ef mov dword ptr [0x120904ec], 0 */
  w32((uint32_t)(0x120904ec), (0x0u));
  /* 1206f6f9 jmp 0x1206f721 */
  goto L_1206f721;
L_1206f6fb:;
  /* 1206f6fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f6ff je 0x1206f70e */
  if (C.zf) goto L_1206f70e;
  /* 1206f701 call 0x1206f8f0 */
  push32(0x1206f706u); f_1206f8f0();
  /* 1206f706 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1206f70c jmp 0x1206f718 */
  goto L_1206f718;
L_1206f70e:;
  /* 1206f70e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1206f718:;
  /* 1206f718 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1206f71e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1206f721:;
  /* 1206f721 jmp 0x1206f72b */
  goto L_1206f72b;
L_1206f723:;
  /* 1206f723 call 0x1206f8f0 */
  push32(0x1206f728u); f_1206f8f0();
  /* 1206f728 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1206f72b:;
  /* 1206f72b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f72f je 0x1206f748 */
  if (C.zf) goto L_1206f748;
  /* 1206f731 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1206f733 call 0x120692b0 */
  push32(0x1206f738u); f_120692b0();
  /* 1206f738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f73b mov eax, dword ptr [0x12091934] */
  EAX = (r32((uint32_t)(0x12091934)));
  /* 1206f740 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f743 mov dword ptr [0x12091934], eax */
  w32((uint32_t)(0x12091934), (EAX));
L_1206f748:;
  /* 1206f748 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1206f74b:;
  /* 1206f74b mov esp, ebp */
  ESP = (EBP);
  /* 1206f74d pop ebp */
  EBP = (pop32());
  /* 1206f74e ret  */
  ESPCHK(0x1206f360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f750 @ 0x1206f750 (403 bytes, 117 insns) */
void f_1206f750(void) {
  FTRACE(0x1206f750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f750 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f751 mov ebp, esp */
  EBP = (ESP);
  /* 1206f753 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f75c push eax */
  push32((uint32_t)(EAX));
  /* 1206f75d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1206f763 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f764 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1206f76a push edx */
  push32((uint32_t)(EDX));
  /* 1206f76b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1206f771 push eax */
  push32((uint32_t)(EAX));
  /* 1206f772 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206f775 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f776 call 0x1206f9f0 */
  push32(0x1206f77bu); f_1206f9f0();
  /* 1206f77b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f77e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f780 jne 0x1206f789 */
  if (!C.zf) goto L_1206f789;
  /* 1206f782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206f784 jmp 0x1206f8df */
  goto L_1206f8df;
L_1206f789:;
  /* 1206f789 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1206f78e push 0x1208d168 */
  push32((uint32_t)(0x1208d168u));
  /* 1206f793 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f795 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1206f79b push edx */
  push32((uint32_t)(EDX));
  /* 1206f79c call 0x12068640 */
  push32(0x1206f7a1u); f_12068640();
  /* 1206f7a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f7a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f7a7 push eax */
  push32((uint32_t)(EAX));
  /* 1206f7a8 call 0x12065810 */
  push32(0x1206f7adu); f_12065810();
  /* 1206f7ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f7b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1206f7b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f7b7 jne 0x1206f7c0 */
  if (!C.zf) goto L_1206f7c0;
  /* 1206f7b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206f7bb jmp 0x1206f8df */
  goto L_1206f8df;
L_1206f7c0:;
  /* 1206f7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f7c3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f7c6 mov ecx, dword ptr [eax + 0x120904ec] */
  ECX = (r32((uint32_t)(EAX + 0x120904ec)));
  /* 1206f7cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1206f7cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f7d2 mov eax, dword ptr [edx*4 + 0x120917b0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120917b0)));
  /* 1206f7d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206f7dc push 6 */
  push32((uint32_t)(0x6u));
  /* 1206f7de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f7e1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f7e4 add ecx, 0x12091800 */
  { uint32_t _a=(ECX),_b=(0x12091800u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f7ea push ecx */
  push32((uint32_t)(ECX));
  /* 1206f7eb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1206f7ee push edx */
  push32((uint32_t)(EDX));
  /* 1206f7ef call 0x1206c0f0 */
  push32(0x1206f7f4u); f_1206c0f0();
  /* 1206f7f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f7f7 mov eax, dword ptr [0x120917c8] */
  EAX = (r32((uint32_t)(0x120917c8)));
  /* 1206f7fc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1206f7ff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1206f805 push ecx */
  push32((uint32_t)(ECX));
  /* 1206f806 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f809 push edx */
  push32((uint32_t)(EDX));
  /* 1206f80a call 0x120687c0 */
  push32(0x1206f80fu); f_120687c0();
  /* 1206f80f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f812 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f815 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f818 mov dword ptr [ecx + 0x120904ec], eax */
  w32((uint32_t)(ECX + 0x120904ec), (EAX));
  /* 1206f81e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1206f824 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1206f82a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f82d mov dword ptr [eax*4 + 0x120917b0], edx */
  w32((uint32_t)(EAX*4 + 0x120917b0), (EDX));
  /* 1206f834 push 6 */
  push32((uint32_t)(0x6u));
  /* 1206f836 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1206f83c push ecx */
  push32((uint32_t)(ECX));
  /* 1206f83d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f840 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f843 add edx, 0x12091800 */
  { uint32_t _a=(EDX),_b=(0x12091800u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f849 push edx */
  push32((uint32_t)(EDX));
  /* 1206f84a call 0x1206c0f0 */
  push32(0x1206f84fu); f_1206c0f0();
  /* 1206f84f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f852 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f856 jne 0x1206f863 */
  if (!C.zf) goto L_1206f863;
  /* 1206f858 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1206f85e mov dword ptr [0x120917c8], eax */
  w32((uint32_t)(0x120917c8), (EAX));
L_1206f863:;
  /* 1206f863 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f867 jne 0x1206f875 */
  if (!C.zf) goto L_1206f875;
  /* 1206f869 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1206f86f mov dword ptr [0x120917cc], ecx */
  w32((uint32_t)(0x120917cc), (ECX));
L_1206f875:;
  /* 1206f875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f878 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f87b call dword ptr [edx + 0x120904f0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x120904f0))), 0x1206f881u);
  /* 1206f881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f883 je 0x1206f8bc */
  if (C.zf) goto L_1206f8bc;
  /* 1206f885 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f888 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f88b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f88e mov dword ptr [eax + 0x120904ec], ecx */
  w32((uint32_t)(EAX + 0x120904ec), (ECX));
  /* 1206f894 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f896 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206f899 push edx */
  push32((uint32_t)(EDX));
  /* 1206f89a call 0x120662a0 */
  push32(0x1206f89fu); f_120662a0();
  /* 1206f89f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f8a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f8a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f8a8 mov dword ptr [eax*4 + 0x120917b0], ecx */
  w32((uint32_t)(EAX*4 + 0x120917b0), (ECX));
  /* 1206f8af mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1206f8b2 mov dword ptr [0x120917c8], edx */
  w32((uint32_t)(0x120917c8), (EDX));
  /* 1206f8b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206f8ba jmp 0x1206f8df */
  goto L_1206f8df;
L_1206f8bc:;
  /* 1206f8bc cmp dword ptr [ebp - 0xc], 0x120903d8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x120903d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f8c3 je 0x1206f8d3 */
  if (C.zf) goto L_1206f8d3;
  /* 1206f8c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f8c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206f8ca push eax */
  push32((uint32_t)(EAX));
  /* 1206f8cb call 0x120662a0 */
  push32(0x1206f8d0u); f_120662a0();
  /* 1206f8d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206f8d3:;
  /* 1206f8d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206f8d6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f8d9 mov eax, dword ptr [ecx + 0x120904ec] */
  EAX = (r32((uint32_t)(ECX + 0x120904ec)));
L_1206f8df:;
  /* 1206f8df mov esp, ebp */
  ESP = (EBP);
  /* 1206f8e1 pop ebp */
  EBP = (pop32());
  /* 1206f8e2 ret  */
  ESPCHK(0x1206f750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8f0 @ 0x1206f8f0 (256 bytes, 72 insns) */
void f_1206f8f0(void) {
  FTRACE(0x1206f8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1206f8f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f8f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1206f8fd cmp dword ptr [0x120904ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120904ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f904 jne 0x1206f924 */
  if (!C.zf) goto L_1206f924;
  /* 1206f906 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1206f90b push 0x1208d168 */
  push32((uint32_t)(0x1208d168u));
  /* 1206f910 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f912 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1206f917 call 0x12065810 */
  push32(0x1206f91cu); f_12065810();
  /* 1206f91c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f91f mov dword ptr [0x120904ec], eax */
  w32((uint32_t)(0x120904ec), (EAX));
L_1206f924:;
  /* 1206f924 mov eax, dword ptr [0x120904ec] */
  EAX = (r32((uint32_t)(0x120904ec)));
  /* 1206f929 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1206f92c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1206f933 jmp 0x1206f93e */
  goto L_1206f93e;
L_1206f935:;
  /* 1206f935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f938 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f93b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1206f93e:;
  /* 1206f93e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f941 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f944 mov eax, dword ptr [edx + 0x120904ec] */
  EAX = (r32((uint32_t)(EDX + 0x120904ec)));
  /* 1206f94a push eax */
  push32((uint32_t)(EAX));
  /* 1206f94b push 0x1208d174 */
  push32((uint32_t)(0x1208d174u));
  /* 1206f950 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f953 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f956 mov edx, dword ptr [ecx + 0x120904e8] */
  EDX = (r32((uint32_t)(ECX + 0x120904e8)));
  /* 1206f95c push edx */
  push32((uint32_t)(EDX));
  /* 1206f95d push 3 */
  push32((uint32_t)(0x3u));
  /* 1206f95f mov eax, dword ptr [0x120904ec] */
  EAX = (r32((uint32_t)(0x120904ec)));
  /* 1206f964 push eax */
  push32((uint32_t)(EAX));
  /* 1206f965 call 0x1206fb90 */
  push32(0x1206f96au); f_1206fb90();
  /* 1206f96a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f96d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f971 jge 0x1206f9b9 */
  if ((C.sf==C.of)) goto L_1206f9b9;
  /* 1206f973 push 0x1208d160 */
  push32((uint32_t)(0x1208d160u));
  /* 1206f978 mov ecx, dword ptr [0x120904ec] */
  ECX = (r32((uint32_t)(0x120904ec)));
  /* 1206f97e push ecx */
  push32((uint32_t)(ECX));
  /* 1206f97f call 0x120687d0 */
  push32(0x1206f984u); f_120687d0();
  /* 1206f984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f987 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f98a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f98d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f990 mov eax, dword ptr [edx + 0x120904ec] */
  EAX = (r32((uint32_t)(EDX + 0x120904ec)));
  /* 1206f996 push eax */
  push32((uint32_t)(EAX));
  /* 1206f997 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206f99a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206f99d mov edx, dword ptr [ecx + 0x120904ec] */
  EDX = (r32((uint32_t)(ECX + 0x120904ec)));
  /* 1206f9a3 push edx */
  push32((uint32_t)(EDX));
  /* 1206f9a4 call 0x120714a0 */
  push32(0x1206f9a9u); f_120714a0();
  /* 1206f9a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f9ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206f9ae je 0x1206f9b7 */
  if (C.zf) goto L_1206f9b7;
  /* 1206f9b0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1206f9b7:;
  /* 1206f9b7 jmp 0x1206f9e7 */
  goto L_1206f9e7;
L_1206f9b9:;
  /* 1206f9b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f9bd jne 0x1206f9c6 */
  if (!C.zf) goto L_1206f9c6;
  /* 1206f9bf mov eax, dword ptr [0x120904ec] */
  EAX = (r32((uint32_t)(0x120904ec)));
  /* 1206f9c4 jmp 0x1206f9ec */
  goto L_1206f9ec;
L_1206f9c6:;
  /* 1206f9c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206f9c8 mov eax, dword ptr [0x120904ec] */
  EAX = (r32((uint32_t)(0x120904ec)));
  /* 1206f9cd push eax */
  push32((uint32_t)(EAX));
  /* 1206f9ce call 0x120662a0 */
  push32(0x1206f9d3u); f_120662a0();
  /* 1206f9d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206f9d6 mov dword ptr [0x120904ec], 0 */
  w32((uint32_t)(0x120904ec), (0x0u));
  /* 1206f9e0 mov eax, dword ptr [0x12090504] */
  EAX = (r32((uint32_t)(0x12090504)));
  /* 1206f9e5 jmp 0x1206f9ec */
  goto L_1206f9ec;
L_1206f9e7:;
  /* 1206f9e7 jmp 0x1206f935 */
  goto L_1206f935;
L_1206f9ec:;
  /* 1206f9ec mov esp, ebp */
  ESP = (EBP);
  /* 1206f9ee pop ebp */
  EBP = (pop32());
  /* 1206f9ef ret  */
  ESPCHK(0x1206f8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x1206f9f0 (388 bytes, 115 insns) */
void f_1206f9f0(void) {
  FTRACE(0x1206f9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206f9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206f9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1206f9f3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206f9f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206f9fd jne 0x1206fa06 */
  if (!C.zf) goto L_1206fa06;
  /* 1206f9ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206fa01 jmp 0x1206fb70 */
  goto L_1206fb70;
L_1206fa06:;
  /* 1206fa06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fa09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1206fa0c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fa0f jne 0x1206fa60 */
  if (!C.zf) goto L_1206fa60;
  /* 1206fa11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fa14 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1206fa18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206fa1a jne 0x1206fa60 */
  if (!C.zf) goto L_1206fa60;
  /* 1206fa1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fa1f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1206fa22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fa25 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1206fa29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fa2d je 0x1206fa49 */
  if (C.zf) goto L_1206fa49;
  /* 1206fa2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206fa32 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1206fa37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206fa3a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1206fa40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206fa43 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1206fa49:;
  /* 1206fa49 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fa4d je 0x1206fa58 */
  if (C.zf) goto L_1206fa58;
  /* 1206fa4f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206fa52 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1206fa58:;
  /* 1206fa58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fa5b jmp 0x1206fb70 */
  goto L_1206fb70;
L_1206fa60:;
  /* 1206fa60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fa63 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fa64 push 0x12090460 */
  push32((uint32_t)(0x12090460u));
  /* 1206fa69 call 0x120714a0 */
  push32(0x1206fa6eu); f_120714a0();
  /* 1206fa6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fa71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206fa73 je 0x1206fb28 */
  if (C.zf) goto L_1206fb28;
  /* 1206fa79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fa7c push edx */
  push32((uint32_t)(EDX));
  /* 1206fa7d push 0x120903dc */
  push32((uint32_t)(0x120903dcu));
  /* 1206fa82 call 0x120714a0 */
  push32(0x1206fa87u); f_120714a0();
  /* 1206fa87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fa8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206fa8c je 0x1206fb28 */
  if (C.zf) goto L_1206fb28;
  /* 1206fa92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fa95 push eax */
  push32((uint32_t)(EAX));
  /* 1206fa96 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1206fa9c push ecx */
  push32((uint32_t)(ECX));
  /* 1206fa9d call 0x1206fbe0 */
  push32(0x1206faa2u); f_1206fbe0();
  /* 1206faa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206faa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206faa7 je 0x1206fab0 */
  if (C.zf) goto L_1206fab0;
  /* 1206faa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206faab jmp 0x1206fb70 */
  goto L_1206fb70;
L_1206fab0:;
  /* 1206fab0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1206fab6 push edx */
  push32((uint32_t)(EDX));
  /* 1206fab7 push 0x120917d8 */
  push32((uint32_t)(0x120917d8u));
  /* 1206fabc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1206fac2 push eax */
  push32((uint32_t)(EAX));
  /* 1206fac3 call 0x120715f0 */
  push32(0x1206fac8u); f_120715f0();
  /* 1206fac8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206facb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206facd jne 0x1206fad6 */
  if (!C.zf) goto L_1206fad6;
  /* 1206facf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206fad1 jmp 0x1206fb70 */
  goto L_1206fb70;
L_1206fad6:;
  /* 1206fad6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206fad8 mov cx, word ptr [0x120917dc] */
  CX = (r16((uint32_t)(0x120917dc)));
  /* 1206fadf mov dword ptr [0x120917e0], ecx */
  w32((uint32_t)(0x120917e0), (ECX));
  /* 1206fae5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1206faeb push edx */
  push32((uint32_t)(EDX));
  /* 1206faec push 0x12090460 */
  push32((uint32_t)(0x12090460u));
  /* 1206faf1 call 0x1206fd40 */
  push32(0x1206faf6u); f_1206fd40();
  /* 1206faf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206faf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fafc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1206faff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206fb01 je 0x1206fb16 */
  if (C.zf) goto L_1206fb16;
  /* 1206fb03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fb06 push edx */
  push32((uint32_t)(EDX));
  /* 1206fb07 push 0x120903dc */
  push32((uint32_t)(0x120903dcu));
  /* 1206fb0c call 0x120687c0 */
  push32(0x1206fb11u); f_120687c0();
  /* 1206fb11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fb14 jmp 0x1206fb28 */
  goto L_1206fb28;
L_1206fb16:;
  /* 1206fb16 push 0x12090460 */
  push32((uint32_t)(0x12090460u));
  /* 1206fb1b push 0x120903dc */
  push32((uint32_t)(0x120903dcu));
  /* 1206fb20 call 0x120687c0 */
  push32(0x1206fb25u); f_120687c0();
  /* 1206fb25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206fb28:;
  /* 1206fb28 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fb2c je 0x1206fb41 */
  if (C.zf) goto L_1206fb41;
  /* 1206fb2e push 6 */
  push32((uint32_t)(0x6u));
  /* 1206fb30 push 0x120917d8 */
  push32((uint32_t)(0x120917d8u));
  /* 1206fb35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1206fb38 push eax */
  push32((uint32_t)(EAX));
  /* 1206fb39 call 0x1206c0f0 */
  push32(0x1206fb3eu); f_1206c0f0();
  /* 1206fb3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206fb41:;
  /* 1206fb41 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fb45 je 0x1206fb5a */
  if (C.zf) goto L_1206fb5a;
  /* 1206fb47 push 4 */
  push32((uint32_t)(0x4u));
  /* 1206fb49 push 0x120917e0 */
  push32((uint32_t)(0x120917e0u));
  /* 1206fb4e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1206fb51 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fb52 call 0x1206c0f0 */
  push32(0x1206fb57u); f_1206c0f0();
  /* 1206fb57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206fb5a:;
  /* 1206fb5a push 0x12090460 */
  push32((uint32_t)(0x12090460u));
  /* 1206fb5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fb62 push edx */
  push32((uint32_t)(EDX));
  /* 1206fb63 call 0x120687c0 */
  push32(0x1206fb68u); f_120687c0();
  /* 1206fb68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fb6b mov eax, 0x12090460 */
  EAX = (0x12090460u);
L_1206fb70:;
  /* 1206fb70 mov esp, ebp */
  ESP = (EBP);
  /* 1206fb72 pop ebp */
  EBP = (pop32());
  /* 1206fb73 ret  */
  ESPCHK(0x1206f9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb80 @ 0x1206fb80 (7 bytes, 5 insns) */
void f_1206fb80(void) {
  FTRACE(0x1206fb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206fb80 push ebp */
  push32((uint32_t)(EBP));
  /* 1206fb81 mov ebp, esp */
  EBP = (ESP);
  /* 1206fb83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206fb85 pop ebp */
  EBP = (pop32());
  /* 1206fb86 ret  */
  ESPCHK(0x1206fb80u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1206fb90 (79 bytes, 28 insns) */
void f_1206fb90(void) {
  FTRACE(0x1206fb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206fb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1206fb91 mov ebp, esp */
  EBP = (ESP);
  /* 1206fb93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206fb96 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1206fb99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206fb9c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1206fba3 jmp 0x1206fbae */
  goto L_1206fbae;
L_1206fba5:;
  /* 1206fba5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206fba8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fbab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1206fbae:;
  /* 1206fbae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206fbb1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fbb4 jge 0x1206fbd4 */
  if ((C.sf==C.of)) goto L_1206fbd4;
  /* 1206fbb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206fbb9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fbbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206fbbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206fbc2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1206fbc5 push edx */
  push32((uint32_t)(EDX));
  /* 1206fbc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fbc9 push eax */
  push32((uint32_t)(EAX));
  /* 1206fbca call 0x120687d0 */
  push32(0x1206fbcfu); f_120687d0();
  /* 1206fbcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fbd2 jmp 0x1206fba5 */
  goto L_1206fba5;
L_1206fbd4:;
  /* 1206fbd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206fbdb mov esp, ebp */
  ESP = (EBP);
  /* 1206fbdd pop ebp */
  EBP = (pop32());
  /* 1206fbde ret  */
  ESPCHK(0x1206fb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbe0 @ 0x1206fbe0 (349 bytes, 122 insns) */
void f_1206fbe0(void) {
  FTRACE(0x1206fbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206fbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206fbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1206fbe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206fbe6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1206fbeb push 0 */
  push32((uint32_t)(0x0u));
  /* 1206fbed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fbf0 push eax */
  push32((uint32_t)(EAX));
  /* 1206fbf1 call 0x12069580 */
  push32(0x1206fbf6u); f_12069580();
  /* 1206fbf6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fbf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fbfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1206fbff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206fc01 jne 0x1206fc0a */
  if (!C.zf) goto L_1206fc0a;
  /* 1206fc03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206fc05 jmp 0x1206fd39 */
  goto L_1206fd39;
L_1206fc0a:;
  /* 1206fc0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fc0d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1206fc10 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fc13 jne 0x1206fc40 */
  if (!C.zf) goto L_1206fc40;
  /* 1206fc15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fc18 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1206fc1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206fc1e je 0x1206fc40 */
  if (C.zf) goto L_1206fc40;
  /* 1206fc20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fc23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fc26 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fc27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fc2a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fc30 push edx */
  push32((uint32_t)(EDX));
  /* 1206fc31 call 0x120687c0 */
  push32(0x1206fc36u); f_120687c0();
  /* 1206fc36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fc39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206fc3b jmp 0x1206fd39 */
  goto L_1206fd39;
L_1206fc40:;
  /* 1206fc40 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1206fc47 jmp 0x1206fc52 */
  goto L_1206fc52;
L_1206fc49:;
  /* 1206fc49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206fc4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fc4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1206fc52:;
  /* 1206fc52 push 0x1208d178 */
  push32((uint32_t)(0x1208d178u));
  /* 1206fc57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fc5a push ecx */
  push32((uint32_t)(ECX));
  /* 1206fc5b call 0x12071530 */
  push32(0x1206fc60u); f_12071530();
  /* 1206fc60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fc63 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1206fc66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fc6a jne 0x1206fc74 */
  if (!C.zf) goto L_1206fc74;
  /* 1206fc6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206fc6f jmp 0x1206fd39 */
  goto L_1206fd39;
L_1206fc74:;
  /* 1206fc74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fc77 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fc7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1206fc7c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1206fc7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fc83 jne 0x1206fcaa */
  if (!C.zf) goto L_1206fcaa;
  /* 1206fc85 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fc89 jge 0x1206fcaa */
  if ((C.sf==C.of)) goto L_1206fcaa;
  /* 1206fc8b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1206fc8f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fc92 je 0x1206fcaa */
  if (C.zf) goto L_1206fcaa;
  /* 1206fc94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206fc97 push edx */
  push32((uint32_t)(EDX));
  /* 1206fc98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fc9b push eax */
  push32((uint32_t)(EAX));
  /* 1206fc9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fc9f push ecx */
  push32((uint32_t)(ECX));
  /* 1206fca0 call 0x12069030 */
  push32(0x1206fca5u); f_12069030();
  /* 1206fca5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fca8 jmp 0x1206fd10 */
  goto L_1206fd10;
L_1206fcaa:;
  /* 1206fcaa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fcae jne 0x1206fcd8 */
  if (!C.zf) goto L_1206fcd8;
  /* 1206fcb0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fcb4 jge 0x1206fcd8 */
  if ((C.sf==C.of)) goto L_1206fcd8;
  /* 1206fcb6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1206fcba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fcbd je 0x1206fcd8 */
  if (C.zf) goto L_1206fcd8;
  /* 1206fcbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206fcc2 push eax */
  push32((uint32_t)(EAX));
  /* 1206fcc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fcc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fcc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fcca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fccd push edx */
  push32((uint32_t)(EDX));
  /* 1206fcce call 0x12069030 */
  push32(0x1206fcd3u); f_12069030();
  /* 1206fcd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fcd6 jmp 0x1206fd10 */
  goto L_1206fd10;
L_1206fcd8:;
  /* 1206fcd8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fcdc jne 0x1206fd0b */
  if (!C.zf) goto L_1206fd0b;
  /* 1206fcde movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1206fce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206fce4 je 0x1206fcef */
  if (C.zf) goto L_1206fcef;
  /* 1206fce6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1206fcea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fced jne 0x1206fd0b */
  if (!C.zf) goto L_1206fd0b;
L_1206fcef:;
  /* 1206fcef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206fcf2 push edx */
  push32((uint32_t)(EDX));
  /* 1206fcf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fcf6 push eax */
  push32((uint32_t)(EAX));
  /* 1206fcf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fcfa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fd00 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fd01 call 0x12069030 */
  push32(0x1206fd06u); f_12069030();
  /* 1206fd06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fd09 jmp 0x1206fd10 */
  goto L_1206fd10;
L_1206fd0b:;
  /* 1206fd0b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206fd0e jmp 0x1206fd39 */
  goto L_1206fd39;
L_1206fd10:;
  /* 1206fd10 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1206fd14 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fd17 jne 0x1206fd1b */
  if (!C.zf) goto L_1206fd1b;
  /* 1206fd19 jmp 0x1206fd37 */
  goto L_1206fd37;
L_1206fd1b:;
  /* 1206fd1b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1206fd1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206fd21 jne 0x1206fd25 */
  if (!C.zf) goto L_1206fd25;
  /* 1206fd23 jmp 0x1206fd37 */
  goto L_1206fd37;
L_1206fd25:;
  /* 1206fd25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1206fd28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fd2b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1206fd2f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1206fd32 jmp 0x1206fc49 */
  goto L_1206fc49;
L_1206fd37:;
  /* 1206fd37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1206fd39:;
  /* 1206fd39 mov esp, ebp */
  ESP = (EBP);
  /* 1206fd3b pop ebp */
  EBP = (pop32());
  /* 1206fd3c ret  */
  ESPCHK(0x1206fbe0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1206fd40 (101 bytes, 36 insns) */
void f_1206fd40(void) {
  FTRACE(0x1206fd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206fd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1206fd41 mov ebp, esp */
  EBP = (ESP);
  /* 1206fd43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fd46 push eax */
  push32((uint32_t)(EAX));
  /* 1206fd47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fd4a push ecx */
  push32((uint32_t)(ECX));
  /* 1206fd4b call 0x120687c0 */
  push32(0x1206fd50u); f_120687c0();
  /* 1206fd50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fd53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fd56 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1206fd5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206fd5c je 0x1206fd78 */
  if (C.zf) goto L_1206fd78;
  /* 1206fd5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fd61 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fd64 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fd65 push 0x1208d180 */
  push32((uint32_t)(0x1208d180u));
  /* 1206fd6a push 2 */
  push32((uint32_t)(0x2u));
  /* 1206fd6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fd6f push edx */
  push32((uint32_t)(EDX));
  /* 1206fd70 call 0x1206fb90 */
  push32(0x1206fd75u); f_1206fb90();
  /* 1206fd75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206fd78:;
  /* 1206fd78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fd7b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1206fd82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206fd84 je 0x1206fda3 */
  if (C.zf) goto L_1206fda3;
  /* 1206fd86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1206fd89 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fd8f push edx */
  push32((uint32_t)(EDX));
  /* 1206fd90 push 0x1208d17c */
  push32((uint32_t)(0x1208d17cu));
  /* 1206fd95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206fd97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fd9a push eax */
  push32((uint32_t)(EAX));
  /* 1206fd9b call 0x1206fb90 */
  push32(0x1206fda0u); f_1206fb90();
  /* 1206fda0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206fda3:;
  /* 1206fda3 pop ebp */
  EBP = (pop32());
  /* 1206fda4 ret  */
  ESPCHK(0x1206fd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdb0 @ 0x1206fdb0 (130 bytes, 50 insns) */
void f_1206fdb0(void) {
  FTRACE(0x1206fdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206fdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206fdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1206fdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fdb4 push ebx */
  push32((uint32_t)(EBX));
  /* 1206fdb5 push esi */
  push32((uint32_t)(ESI));
  /* 1206fdb6 push edi */
  push32((uint32_t)(EDI));
  /* 1206fdb7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1206fdbe:;
  /* 1206fdbe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fdc2 jne 0x1206fde2 */
  if (!C.zf) goto L_1206fde2;
  /* 1206fdc4 push 0x1208d190 */
  push32((uint32_t)(0x1208d190u));
  /* 1206fdc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206fdcb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1206fdcd push 0x1208d184 */
  push32((uint32_t)(0x1208d184u));
  /* 1206fdd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206fdd4 call 0x120648d0 */
  push32(0x1206fdd9u); f_120648d0();
  /* 1206fdd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fddc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fddf jne 0x1206fde2 */
  if (!C.zf) goto L_1206fde2;
  /* 1206fde1 int3  */
  x86_unimpl("int3 @ 0x1206fde1");
L_1206fde2:;
  /* 1206fde2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1206fde4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206fde6 jne 0x1206fdbe */
  if (!C.zf) goto L_1206fdbe;
  /* 1206fde8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fdeb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1206fdee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1206fdf1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1206fdf3 je 0x1206fe01 */
  if (C.zf) goto L_1206fe01;
  /* 1206fdf5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fdf8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1206fdff jmp 0x1206fe28 */
  goto L_1206fe28;
L_1206fe01:;
  /* 1206fe01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fe04 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fe05 call 0x1206e620 */
  push32(0x1206fe0au); f_1206e620();
  /* 1206fe0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fe0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fe10 push edx */
  push32((uint32_t)(EDX));
  /* 1206fe11 call 0x1206fe40 */
  push32(0x1206fe16u); f_1206fe40();
  /* 1206fe16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fe19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206fe1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fe1f push eax */
  push32((uint32_t)(EAX));
  /* 1206fe20 call 0x1206e690 */
  push32(0x1206fe25u); f_1206e690();
  /* 1206fe25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1206fe28:;
  /* 1206fe28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206fe2b pop edi */
  EDI = (pop32());
  /* 1206fe2c pop esi */
  ESI = (pop32());
  /* 1206fe2d pop ebx */
  EBX = (pop32());
  /* 1206fe2e mov esp, ebp */
  ESP = (EBP);
  /* 1206fe30 pop ebp */
  EBP = (pop32());
  /* 1206fe31 ret  */
  ESPCHK(0x1206fdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe40 @ 0x1206fe40 (190 bytes, 67 insns) */
void f_1206fe40(void) {
  FTRACE(0x1206fe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206fe40 push ebp */
  push32((uint32_t)(EBP));
  /* 1206fe41 mov ebp, esp */
  EBP = (ESP);
  /* 1206fe43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1206fe46 push ebx */
  push32((uint32_t)(EBX));
  /* 1206fe47 push esi */
  push32((uint32_t)(ESI));
  /* 1206fe48 push edi */
  push32((uint32_t)(EDI));
  /* 1206fe49 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1206fe50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206fe53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1206fe56:;
  /* 1206fe56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fe5a jne 0x1206fe7a */
  if (!C.zf) goto L_1206fe7a;
  /* 1206fe5c push 0x1208d030 */
  push32((uint32_t)(0x1208d030u));
  /* 1206fe61 push 0 */
  push32((uint32_t)(0x0u));
  /* 1206fe63 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1206fe65 push 0x1208d184 */
  push32((uint32_t)(0x1208d184u));
  /* 1206fe6a push 2 */
  push32((uint32_t)(0x2u));
  /* 1206fe6c call 0x120648d0 */
  push32(0x1206fe71u); f_120648d0();
  /* 1206fe71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fe74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fe77 jne 0x1206fe7a */
  if (!C.zf) goto L_1206fe7a;
  /* 1206fe79 int3  */
  x86_unimpl("int3 @ 0x1206fe79");
L_1206fe7a:;
  /* 1206fe7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1206fe7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206fe7e jne 0x1206fe56 */
  if (!C.zf) goto L_1206fe56;
  /* 1206fe80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206fe83 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1206fe86 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1206fe8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206fe8d je 0x1206feea */
  if (C.zf) goto L_1206feea;
  /* 1206fe8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206fe92 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fe93 call 0x1206f140 */
  push32(0x1206fe98u); f_1206f140();
  /* 1206fe98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fe9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206fe9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206fea1 push edx */
  push32((uint32_t)(EDX));
  /* 1206fea2 call 0x120724c0 */
  push32(0x1206fea7u); f_120724c0();
  /* 1206fea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206feaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206fead mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1206feb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1206feb1 call 0x12072390 */
  push32(0x1206feb6u); f_12072390();
  /* 1206feb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206feb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206febb jge 0x1206fec6 */
  if ((C.sf==C.of)) goto L_1206fec6;
  /* 1206febd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1206fec4 jmp 0x1206feea */
  goto L_1206feea;
L_1206fec6:;
  /* 1206fec6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206fec9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206fecd je 0x1206feea */
  if (C.zf) goto L_1206feea;
  /* 1206fecf push 2 */
  push32((uint32_t)(0x2u));
  /* 1206fed1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206fed4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1206fed7 push ecx */
  push32((uint32_t)(ECX));
  /* 1206fed8 call 0x120662a0 */
  push32(0x1206feddu); f_120662a0();
  /* 1206fedd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206fee0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206fee3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1206feea:;
  /* 1206feea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1206feed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1206fef4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206fef7 pop edi */
  EDI = (pop32());
  /* 1206fef8 pop esi */
  ESI = (pop32());
  /* 1206fef9 pop ebx */
  EBX = (pop32());
  /* 1206fefa mov esp, ebp */
  ESP = (EBP);
  /* 1206fefc pop ebp */
  EBP = (pop32());
  /* 1206fefd ret  */
  ESPCHK(0x1206fe40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff00 @ 0x1206ff00 (210 bytes, 63 insns) */
void f_1206ff00(void) {
  FTRACE(0x1206ff00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206ff00 push ebp */
  push32((uint32_t)(EBP));
  /* 1206ff01 mov ebp, esp */
  EBP = (ESP);
  /* 1206ff03 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ff04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ff07 cmp eax, dword ptr [0x120930dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120930dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ff0d jae 0x1206ff31 */
  if (!C.cf) goto L_1206ff31;
  /* 1206ff0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ff12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1206ff15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ff18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1206ff1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ff1e mov eax, dword ptr [ecx*4 + 0x12092fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12092fa0)));
  /* 1206ff25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1206ff2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1206ff2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1206ff2f jne 0x1206ff44 */
  if (!C.zf) goto L_1206ff44;
L_1206ff31:;
  /* 1206ff31 call 0x1206d6e0 */
  push32(0x1206ff36u); f_1206d6e0();
  /* 1206ff36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1206ff3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1206ff3f jmp 0x1206ffce */
  goto L_1206ffce;
L_1206ff44:;
  /* 1206ff44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ff47 push edx */
  push32((uint32_t)(EDX));
  /* 1206ff48 call 0x1206ef00 */
  push32(0x1206ff4du); f_1206ef00();
  /* 1206ff4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ff50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ff53 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1206ff56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ff59 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1206ff5c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1206ff5f mov edx, dword ptr [eax*4 + 0x12092fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12092fa0)));
  /* 1206ff66 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1206ff6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1206ff6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206ff70 je 0x1206ffad */
  if (C.zf) goto L_1206ffad;
  /* 1206ff72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ff75 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ff76 call 0x1206ed80 */
  push32(0x1206ff7bu); f_1206ed80();
  /* 1206ff7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ff7e push eax */
  push32((uint32_t)(EAX));
  /* 1206ff7f call dword ptr [0x120942f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120942f8))), 0x1206ff85u);
  /* 1206ff85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1206ff87 jne 0x1206ff94 */
  if (!C.zf) goto L_1206ff94;
  /* 1206ff89 call dword ptr [0x120943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120943ac))), 0x1206ff8fu);
  /* 1206ff8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1206ff92 jmp 0x1206ff9b */
  goto L_1206ff9b;
L_1206ff94:;
  /* 1206ff94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1206ff9b:;
  /* 1206ff9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ff9f jne 0x1206ffa3 */
  if (!C.zf) goto L_1206ffa3;
  /* 1206ffa1 jmp 0x1206ffbf */
  goto L_1206ffbf;
L_1206ffa3:;
  /* 1206ffa3 call 0x1206d6f0 */
  push32(0x1206ffa8u); f_1206d6f0();
  /* 1206ffa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1206ffab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1206ffad:;
  /* 1206ffad call 0x1206d6e0 */
  push32(0x1206ffb2u); f_1206d6e0();
  /* 1206ffb2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1206ffb8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1206ffbf:;
  /* 1206ffbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1206ffc2 push eax */
  push32((uint32_t)(EAX));
  /* 1206ffc3 call 0x1206ef90 */
  push32(0x1206ffc8u); f_1206ef90();
  /* 1206ffc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1206ffcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1206ffce:;
  /* 1206ffce mov esp, ebp */
  ESP = (EBP);
  /* 1206ffd0 pop ebp */
  EBP = (pop32());
  /* 1206ffd1 ret  */
  ESPCHK(0x1206ff00u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1206ffe0 (219 bytes, 64 insns) */
void f_1206ffe0(void) {
  FTRACE(0x1206ffe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1206ffe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1206ffe1 mov ebp, esp */
  EBP = (ESP);
  /* 1206ffe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1206ffe4 cmp dword ptr [0x120917c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1206ffeb je 0x12070081 */
  if (C.zf) goto L_12070081;
  /* 1206fff1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1206fff3 push 0x1208d1a0 */
  push32((uint32_t)(0x1208d1a0u));
  /* 1206fff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1206fffa push 0xac */
  push32((uint32_t)(0xacu));
  /* 1206ffff push 1 */
  push32((uint32_t)(0x1u));
  /* 12070001 call 0x12065c20 */
  push32(0x12070006u); f_12065c20();
  /* 12070006 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070009 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1207000c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070010 jne 0x1207001c */
  if (!C.zf) goto L_1207001c;
  /* 12070012 mov eax, 1 */
  EAX = (0x1u);
  /* 12070017 jmp 0x120700b7 */
  goto L_120700b7;
L_1207001c:;
  /* 1207001c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207001f push eax */
  push32((uint32_t)(EAX));
  /* 12070020 call 0x120700c0 */
  push32(0x12070025u); f_120700c0();
  /* 12070025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207002a je 0x1207004d */
  if (C.zf) goto L_1207004d;
  /* 1207002c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207002f push ecx */
  push32((uint32_t)(ECX));
  /* 12070030 call 0x12070650 */
  push32(0x12070035u); f_12070650();
  /* 12070035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070038 push 2 */
  push32((uint32_t)(0x2u));
  /* 1207003a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207003d push edx */
  push32((uint32_t)(EDX));
  /* 1207003e call 0x120662a0 */
  push32(0x12070043u); f_120662a0();
  /* 12070043 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070046 mov eax, 1 */
  EAX = (0x1u);
  /* 1207004b jmp 0x120700b7 */
  goto L_120700b7;
L_1207004d:;
  /* 1207004d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070050 mov dword ptr [0x12090ca8], eax */
  w32((uint32_t)(0x12090ca8), (EAX));
  /* 12070055 mov ecx, dword ptr [0x120917e4] */
  ECX = (r32((uint32_t)(0x120917e4)));
  /* 1207005b push ecx */
  push32((uint32_t)(ECX));
  /* 1207005c call 0x12070650 */
  push32(0x12070061u); f_12070650();
  /* 12070061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070064 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070066 mov edx, dword ptr [0x120917e4] */
  EDX = (r32((uint32_t)(0x120917e4)));
  /* 1207006c push edx */
  push32((uint32_t)(EDX));
  /* 1207006d call 0x120662a0 */
  push32(0x12070072u); f_120662a0();
  /* 12070072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070078 mov dword ptr [0x120917e4], eax */
  w32((uint32_t)(0x120917e4), (EAX));
  /* 1207007d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207007f jmp 0x120700b7 */
  goto L_120700b7;
L_12070081:;
  /* 12070081 mov dword ptr [0x12090ca8], 0x12090cb0 */
  w32((uint32_t)(0x12090ca8), (0x12090cb0u));
  /* 1207008b mov ecx, dword ptr [0x120917e4] */
  ECX = (r32((uint32_t)(0x120917e4)));
  /* 12070091 push ecx */
  push32((uint32_t)(ECX));
  /* 12070092 call 0x12070650 */
  push32(0x12070097u); f_12070650();
  /* 12070097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207009a push 2 */
  push32((uint32_t)(0x2u));
  /* 1207009c mov edx, dword ptr [0x120917e4] */
  EDX = (r32((uint32_t)(0x120917e4)));
  /* 120700a2 push edx */
  push32((uint32_t)(EDX));
  /* 120700a3 call 0x120662a0 */
  push32(0x120700a8u); f_120662a0();
  /* 120700a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120700ab mov dword ptr [0x120917e4], 0 */
  w32((uint32_t)(0x120917e4), (0x0u));
  /* 120700b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120700b7:;
  /* 120700b7 mov esp, ebp */
  ESP = (EBP);
  /* 120700b9 pop ebp */
  EBP = (pop32());
  /* 120700ba ret  */
  ESPCHK(0x1206ffe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100100c0 @ 0x120700c0 (1423 bytes, 533 insns) */
void f_120700c0(void) {
  FTRACE(0x120700c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120700c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120700c1 mov ebp, esp */
  EBP = (ESP);
  /* 120700c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120700c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120700cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120700cf mov ax, word ptr [0x1209181e] */
  AX = (r16((uint32_t)(0x1209181e)));
  /* 120700d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120700d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120700da mov cx, word ptr [0x12091820] */
  CX = (r16((uint32_t)(0x12091820)));
  /* 120700e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120700e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120700e8 jne 0x120700f2 */
  if (!C.zf) goto L_120700f2;
  /* 120700ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120700ed jmp 0x1207064b */
  goto L_1207064b;
L_120700f2:;
  /* 120700f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120700f5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120700f8 push edx */
  push32((uint32_t)(EDX));
  /* 120700f9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 120700fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120700fe push eax */
  push32((uint32_t)(EAX));
  /* 120700ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12070101 call 0x120739d0 */
  push32(0x12070106u); f_120739d0();
  /* 12070106 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070109 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207010c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207010e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070114 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070117 push edx */
  push32((uint32_t)(EDX));
  /* 12070118 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1207011a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207011d push eax */
  push32((uint32_t)(EAX));
  /* 1207011e push 1 */
  push32((uint32_t)(0x1u));
  /* 12070120 call 0x120739d0 */
  push32(0x12070125u); f_120739d0();
  /* 12070125 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070128 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207012b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207012d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070130 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070133 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070136 push edx */
  push32((uint32_t)(EDX));
  /* 12070137 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12070139 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207013c push eax */
  push32((uint32_t)(EAX));
  /* 1207013d push 1 */
  push32((uint32_t)(0x1u));
  /* 1207013f call 0x120739d0 */
  push32(0x12070144u); f_120739d0();
  /* 12070144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070147 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207014a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207014c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1207014f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070152 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070155 push edx */
  push32((uint32_t)(EDX));
  /* 12070156 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12070158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207015b push eax */
  push32((uint32_t)(EAX));
  /* 1207015c push 1 */
  push32((uint32_t)(0x1u));
  /* 1207015e call 0x120739d0 */
  push32(0x12070163u); f_120739d0();
  /* 12070163 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070166 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070169 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207016b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1207016e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070171 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070174 push edx */
  push32((uint32_t)(EDX));
  /* 12070175 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12070177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207017a push eax */
  push32((uint32_t)(EAX));
  /* 1207017b push 1 */
  push32((uint32_t)(0x1u));
  /* 1207017d call 0x120739d0 */
  push32(0x12070182u); f_120739d0();
  /* 12070182 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070185 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070188 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207018a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1207018d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070190 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070193 push edx */
  push32((uint32_t)(EDX));
  /* 12070194 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12070196 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070199 push eax */
  push32((uint32_t)(EAX));
  /* 1207019a push 1 */
  push32((uint32_t)(0x1u));
  /* 1207019c call 0x120739d0 */
  push32(0x120701a1u); f_120739d0();
  /* 120701a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120701a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120701a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120701a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120701ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120701af push edx */
  push32((uint32_t)(EDX));
  /* 120701b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 120701b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120701b5 push eax */
  push32((uint32_t)(EAX));
  /* 120701b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120701b8 call 0x120739d0 */
  push32(0x120701bdu); f_120739d0();
  /* 120701bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120701c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120701c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120701c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120701c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120701cb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120701ce push edx */
  push32((uint32_t)(EDX));
  /* 120701cf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 120701d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120701d4 push eax */
  push32((uint32_t)(EAX));
  /* 120701d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120701d7 call 0x120739d0 */
  push32(0x120701dcu); f_120739d0();
  /* 120701dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120701df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120701e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120701e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120701e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120701ea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120701ed push edx */
  push32((uint32_t)(EDX));
  /* 120701ee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 120701f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120701f3 push eax */
  push32((uint32_t)(EAX));
  /* 120701f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120701f6 call 0x120739d0 */
  push32(0x120701fbu); f_120739d0();
  /* 120701fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120701fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070201 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070203 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070206 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070209 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207020c push edx */
  push32((uint32_t)(EDX));
  /* 1207020d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1207020f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070212 push eax */
  push32((uint32_t)(EAX));
  /* 12070213 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070215 call 0x120739d0 */
  push32(0x1207021au); f_120739d0();
  /* 1207021a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207021d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070220 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070222 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070225 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070228 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207022b push edx */
  push32((uint32_t)(EDX));
  /* 1207022c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1207022e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070231 push eax */
  push32((uint32_t)(EAX));
  /* 12070232 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070234 call 0x120739d0 */
  push32(0x12070239u); f_120739d0();
  /* 12070239 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207023c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207023f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070241 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070247 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207024a push edx */
  push32((uint32_t)(EDX));
  /* 1207024b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1207024d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070250 push eax */
  push32((uint32_t)(EAX));
  /* 12070251 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070253 call 0x120739d0 */
  push32(0x12070258u); f_120739d0();
  /* 12070258 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207025b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207025e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070260 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070263 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070266 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070269 push edx */
  push32((uint32_t)(EDX));
  /* 1207026a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1207026c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207026f push eax */
  push32((uint32_t)(EAX));
  /* 12070270 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070272 call 0x120739d0 */
  push32(0x12070277u); f_120739d0();
  /* 12070277 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207027a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207027d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207027f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070282 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070285 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070288 push edx */
  push32((uint32_t)(EDX));
  /* 12070289 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1207028b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207028e push eax */
  push32((uint32_t)(EAX));
  /* 1207028f push 1 */
  push32((uint32_t)(0x1u));
  /* 12070291 call 0x120739d0 */
  push32(0x12070296u); f_120739d0();
  /* 12070296 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070299 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207029c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207029e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120702a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120702a4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120702a7 push edx */
  push32((uint32_t)(EDX));
  /* 120702a8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 120702aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120702ad push eax */
  push32((uint32_t)(EAX));
  /* 120702ae push 1 */
  push32((uint32_t)(0x1u));
  /* 120702b0 call 0x120739d0 */
  push32(0x120702b5u); f_120739d0();
  /* 120702b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120702b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120702bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120702bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120702c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120702c3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120702c6 push edx */
  push32((uint32_t)(EDX));
  /* 120702c7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 120702c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120702cc push eax */
  push32((uint32_t)(EAX));
  /* 120702cd push 1 */
  push32((uint32_t)(0x1u));
  /* 120702cf call 0x120739d0 */
  push32(0x120702d4u); f_120739d0();
  /* 120702d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120702d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120702da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120702dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120702df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120702e2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120702e5 push edx */
  push32((uint32_t)(EDX));
  /* 120702e6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 120702e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120702eb push eax */
  push32((uint32_t)(EAX));
  /* 120702ec push 1 */
  push32((uint32_t)(0x1u));
  /* 120702ee call 0x120739d0 */
  push32(0x120702f3u); f_120739d0();
  /* 120702f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120702f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120702f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120702fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120702fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070301 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070304 push edx */
  push32((uint32_t)(EDX));
  /* 12070305 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12070307 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207030a push eax */
  push32((uint32_t)(EAX));
  /* 1207030b push 1 */
  push32((uint32_t)(0x1u));
  /* 1207030d call 0x120739d0 */
  push32(0x12070312u); f_120739d0();
  /* 12070312 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070315 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070318 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207031a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1207031d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070320 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070323 push edx */
  push32((uint32_t)(EDX));
  /* 12070324 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12070326 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070329 push eax */
  push32((uint32_t)(EAX));
  /* 1207032a push 1 */
  push32((uint32_t)(0x1u));
  /* 1207032c call 0x120739d0 */
  push32(0x12070331u); f_120739d0();
  /* 12070331 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070334 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070337 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070339 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1207033c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207033f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070342 push edx */
  push32((uint32_t)(EDX));
  /* 12070343 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12070345 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070348 push eax */
  push32((uint32_t)(EAX));
  /* 12070349 push 1 */
  push32((uint32_t)(0x1u));
  /* 1207034b call 0x120739d0 */
  push32(0x12070350u); f_120739d0();
  /* 12070350 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070353 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070356 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070358 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1207035b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207035e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070361 push edx */
  push32((uint32_t)(EDX));
  /* 12070362 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12070364 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070367 push eax */
  push32((uint32_t)(EAX));
  /* 12070368 push 1 */
  push32((uint32_t)(0x1u));
  /* 1207036a call 0x120739d0 */
  push32(0x1207036fu); f_120739d0();
  /* 1207036f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070372 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070375 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070377 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1207037a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207037d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070380 push edx */
  push32((uint32_t)(EDX));
  /* 12070381 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12070383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070386 push eax */
  push32((uint32_t)(EAX));
  /* 12070387 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070389 call 0x120739d0 */
  push32(0x1207038eu); f_120739d0();
  /* 1207038e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070391 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070394 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070396 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207039c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207039f push edx */
  push32((uint32_t)(EDX));
  /* 120703a0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 120703a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120703a5 push eax */
  push32((uint32_t)(EAX));
  /* 120703a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120703a8 call 0x120739d0 */
  push32(0x120703adu); f_120739d0();
  /* 120703ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120703b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120703b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120703b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120703b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120703bb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120703be push edx */
  push32((uint32_t)(EDX));
  /* 120703bf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 120703c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120703c4 push eax */
  push32((uint32_t)(EAX));
  /* 120703c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120703c7 call 0x120739d0 */
  push32(0x120703ccu); f_120739d0();
  /* 120703cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120703cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120703d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120703d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120703d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120703da add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120703dd push edx */
  push32((uint32_t)(EDX));
  /* 120703de push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 120703e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120703e3 push eax */
  push32((uint32_t)(EAX));
  /* 120703e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120703e6 call 0x120739d0 */
  push32(0x120703ebu); f_120739d0();
  /* 120703eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120703ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120703f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120703f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120703f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120703f9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120703fc push edx */
  push32((uint32_t)(EDX));
  /* 120703fd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 120703ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070402 push eax */
  push32((uint32_t)(EAX));
  /* 12070403 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070405 call 0x120739d0 */
  push32(0x1207040au); f_120739d0();
  /* 1207040a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207040d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070410 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070412 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070418 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207041b push edx */
  push32((uint32_t)(EDX));
  /* 1207041c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1207041e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070421 push eax */
  push32((uint32_t)(EAX));
  /* 12070422 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070424 call 0x120739d0 */
  push32(0x12070429u); f_120739d0();
  /* 12070429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207042c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207042f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070431 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070434 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070437 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207043a push edx */
  push32((uint32_t)(EDX));
  /* 1207043b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1207043d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070440 push eax */
  push32((uint32_t)(EAX));
  /* 12070441 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070443 call 0x120739d0 */
  push32(0x12070448u); f_120739d0();
  /* 12070448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207044b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207044e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070450 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070456 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070459 push edx */
  push32((uint32_t)(EDX));
  /* 1207045a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1207045c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207045f push eax */
  push32((uint32_t)(EAX));
  /* 12070460 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070462 call 0x120739d0 */
  push32(0x12070467u); f_120739d0();
  /* 12070467 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207046a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207046d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207046f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070475 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070478 push edx */
  push32((uint32_t)(EDX));
  /* 12070479 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1207047b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207047e push eax */
  push32((uint32_t)(EAX));
  /* 1207047f push 1 */
  push32((uint32_t)(0x1u));
  /* 12070481 call 0x120739d0 */
  push32(0x12070486u); f_120739d0();
  /* 12070486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070489 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207048c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1207048e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070494 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070497 push edx */
  push32((uint32_t)(EDX));
  /* 12070498 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1207049a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207049d push eax */
  push32((uint32_t)(EAX));
  /* 1207049e push 1 */
  push32((uint32_t)(0x1u));
  /* 120704a0 call 0x120739d0 */
  push32(0x120704a5u); f_120739d0();
  /* 120704a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120704a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120704ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120704ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120704b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120704b3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120704b6 push edx */
  push32((uint32_t)(EDX));
  /* 120704b7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 120704b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120704bc push eax */
  push32((uint32_t)(EAX));
  /* 120704bd push 1 */
  push32((uint32_t)(0x1u));
  /* 120704bf call 0x120739d0 */
  push32(0x120704c4u); f_120739d0();
  /* 120704c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120704c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120704ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120704cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120704cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120704d2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120704d8 push edx */
  push32((uint32_t)(EDX));
  /* 120704d9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 120704db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120704de push eax */
  push32((uint32_t)(EAX));
  /* 120704df push 1 */
  push32((uint32_t)(0x1u));
  /* 120704e1 call 0x120739d0 */
  push32(0x120704e6u); f_120739d0();
  /* 120704e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120704e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120704ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120704ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120704f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120704f4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120704fa push edx */
  push32((uint32_t)(EDX));
  /* 120704fb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120704fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070500 push eax */
  push32((uint32_t)(EAX));
  /* 12070501 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070503 call 0x120739d0 */
  push32(0x12070508u); f_120739d0();
  /* 12070508 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207050b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207050e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070510 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070513 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070516 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207051c push edx */
  push32((uint32_t)(EDX));
  /* 1207051d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1207051f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070522 push eax */
  push32((uint32_t)(EAX));
  /* 12070523 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070525 call 0x120739d0 */
  push32(0x1207052au); f_120739d0();
  /* 1207052a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207052d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070530 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070532 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070535 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070538 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207053e push edx */
  push32((uint32_t)(EDX));
  /* 1207053f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12070541 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070544 push eax */
  push32((uint32_t)(EAX));
  /* 12070545 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070547 call 0x120739d0 */
  push32(0x1207054cu); f_120739d0();
  /* 1207054c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207054f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070552 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070554 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070557 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207055a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070560 push edx */
  push32((uint32_t)(EDX));
  /* 12070561 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12070563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070566 push eax */
  push32((uint32_t)(EAX));
  /* 12070567 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070569 call 0x120739d0 */
  push32(0x1207056eu); f_120739d0();
  /* 1207056e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070571 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070574 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070576 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207057c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070582 push edx */
  push32((uint32_t)(EDX));
  /* 12070583 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12070585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070588 push eax */
  push32((uint32_t)(EAX));
  /* 12070589 push 1 */
  push32((uint32_t)(0x1u));
  /* 1207058b call 0x120739d0 */
  push32(0x12070590u); f_120739d0();
  /* 12070590 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070593 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070596 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070598 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1207059b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207059e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120705a4 push edx */
  push32((uint32_t)(EDX));
  /* 120705a5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 120705a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120705aa push eax */
  push32((uint32_t)(EAX));
  /* 120705ab push 1 */
  push32((uint32_t)(0x1u));
  /* 120705ad call 0x120739d0 */
  push32(0x120705b2u); f_120739d0();
  /* 120705b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120705b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120705b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120705ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120705bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120705c0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120705c6 push edx */
  push32((uint32_t)(EDX));
  /* 120705c7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 120705c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120705cc push eax */
  push32((uint32_t)(EAX));
  /* 120705cd push 1 */
  push32((uint32_t)(0x1u));
  /* 120705cf call 0x120739d0 */
  push32(0x120705d4u); f_120739d0();
  /* 120705d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120705d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120705da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120705dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120705df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120705e2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120705e8 push edx */
  push32((uint32_t)(EDX));
  /* 120705e9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 120705eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120705ee push eax */
  push32((uint32_t)(EAX));
  /* 120705ef push 1 */
  push32((uint32_t)(0x1u));
  /* 120705f1 call 0x120739d0 */
  push32(0x120705f6u); f_120739d0();
  /* 120705f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120705f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120705fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120705fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070604 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207060a push edx */
  push32((uint32_t)(EDX));
  /* 1207060b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1207060d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070610 push eax */
  push32((uint32_t)(EAX));
  /* 12070611 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070613 call 0x120739d0 */
  push32(0x12070618u); f_120739d0();
  /* 12070618 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207061b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1207061e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070620 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070626 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207062c push edx */
  push32((uint32_t)(EDX));
  /* 1207062d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12070632 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070635 push eax */
  push32((uint32_t)(EAX));
  /* 12070636 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070638 call 0x120739d0 */
  push32(0x1207063du); f_120739d0();
  /* 1207063d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070640 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12070643 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070645 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12070648 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1207064b:;
  /* 1207064b mov esp, ebp */
  ESP = (EBP);
  /* 1207064d pop ebp */
  EBP = (pop32());
  /* 1207064e ret  */
  ESPCHK(0x120700c0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12070650 (779 bytes, 265 insns) */
void f_12070650(void) {
  FTRACE(0x12070650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12070650 push ebp */
  push32((uint32_t)(EBP));
  /* 12070651 mov ebp, esp */
  EBP = (ESP);
  /* 12070653 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070657 jne 0x1207065e */
  if (!C.zf) goto L_1207065e;
  /* 12070659 jmp 0x12070959 */
  goto L_12070959;
L_1207065e:;
  /* 1207065e push 2 */
  push32((uint32_t)(0x2u));
  /* 12070660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070663 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12070666 push ecx */
  push32((uint32_t)(ECX));
  /* 12070667 call 0x120662a0 */
  push32(0x1207066cu); f_120662a0();
  /* 1207066c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207066f push 2 */
  push32((uint32_t)(0x2u));
  /* 12070671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070674 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12070677 push eax */
  push32((uint32_t)(EAX));
  /* 12070678 call 0x120662a0 */
  push32(0x1207067du); f_120662a0();
  /* 1207067d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070680 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070682 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070685 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12070688 push edx */
  push32((uint32_t)(EDX));
  /* 12070689 call 0x120662a0 */
  push32(0x1207068eu); f_120662a0();
  /* 1207068e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070691 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070696 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12070699 push ecx */
  push32((uint32_t)(ECX));
  /* 1207069a call 0x120662a0 */
  push32(0x1207069fu); f_120662a0();
  /* 1207069f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120706a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 120706a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120706a7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 120706aa push eax */
  push32((uint32_t)(EAX));
  /* 120706ab call 0x120662a0 */
  push32(0x120706b0u); f_120662a0();
  /* 120706b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120706b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120706b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120706b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120706bb push edx */
  push32((uint32_t)(EDX));
  /* 120706bc call 0x120662a0 */
  push32(0x120706c1u); f_120662a0();
  /* 120706c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120706c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120706c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120706c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120706cb push ecx */
  push32((uint32_t)(ECX));
  /* 120706cc call 0x120662a0 */
  push32(0x120706d1u); f_120662a0();
  /* 120706d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120706d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120706d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120706d9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 120706dc push eax */
  push32((uint32_t)(EAX));
  /* 120706dd call 0x120662a0 */
  push32(0x120706e2u); f_120662a0();
  /* 120706e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120706e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120706e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120706ea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 120706ed push edx */
  push32((uint32_t)(EDX));
  /* 120706ee call 0x120662a0 */
  push32(0x120706f3u); f_120662a0();
  /* 120706f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120706f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120706f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120706fb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 120706fe push ecx */
  push32((uint32_t)(ECX));
  /* 120706ff call 0x120662a0 */
  push32(0x12070704u); f_120662a0();
  /* 12070704 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070707 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207070c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1207070f push eax */
  push32((uint32_t)(EAX));
  /* 12070710 call 0x120662a0 */
  push32(0x12070715u); f_120662a0();
  /* 12070715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070718 push 2 */
  push32((uint32_t)(0x2u));
  /* 1207071a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207071d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12070720 push edx */
  push32((uint32_t)(EDX));
  /* 12070721 call 0x120662a0 */
  push32(0x12070726u); f_120662a0();
  /* 12070726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070729 push 2 */
  push32((uint32_t)(0x2u));
  /* 1207072b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207072e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12070731 push ecx */
  push32((uint32_t)(ECX));
  /* 12070732 call 0x120662a0 */
  push32(0x12070737u); f_120662a0();
  /* 12070737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207073a push 2 */
  push32((uint32_t)(0x2u));
  /* 1207073c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207073f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12070742 push eax */
  push32((uint32_t)(EAX));
  /* 12070743 call 0x120662a0 */
  push32(0x12070748u); f_120662a0();
  /* 12070748 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207074b push 2 */
  push32((uint32_t)(0x2u));
  /* 1207074d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070750 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12070753 push edx */
  push32((uint32_t)(EDX));
  /* 12070754 call 0x120662a0 */
  push32(0x12070759u); f_120662a0();
  /* 12070759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207075c push 2 */
  push32((uint32_t)(0x2u));
  /* 1207075e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070761 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12070764 push ecx */
  push32((uint32_t)(ECX));
  /* 12070765 call 0x120662a0 */
  push32(0x1207076au); f_120662a0();
  /* 1207076a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207076d push 2 */
  push32((uint32_t)(0x2u));
  /* 1207076f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070772 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12070775 push eax */
  push32((uint32_t)(EAX));
  /* 12070776 call 0x120662a0 */
  push32(0x1207077bu); f_120662a0();
  /* 1207077b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207077e push 2 */
  push32((uint32_t)(0x2u));
  /* 12070780 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070783 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12070786 push edx */
  push32((uint32_t)(EDX));
  /* 12070787 call 0x120662a0 */
  push32(0x1207078cu); f_120662a0();
  /* 1207078c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207078f push 2 */
  push32((uint32_t)(0x2u));
  /* 12070791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070794 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12070797 push ecx */
  push32((uint32_t)(ECX));
  /* 12070798 call 0x120662a0 */
  push32(0x1207079du); f_120662a0();
  /* 1207079d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120707a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 120707a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120707a5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 120707a8 push eax */
  push32((uint32_t)(EAX));
  /* 120707a9 call 0x120662a0 */
  push32(0x120707aeu); f_120662a0();
  /* 120707ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120707b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 120707b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120707b6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 120707b9 push edx */
  push32((uint32_t)(EDX));
  /* 120707ba call 0x120662a0 */
  push32(0x120707bfu); f_120662a0();
  /* 120707bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120707c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 120707c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120707c7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 120707ca push ecx */
  push32((uint32_t)(ECX));
  /* 120707cb call 0x120662a0 */
  push32(0x120707d0u); f_120662a0();
  /* 120707d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120707d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120707d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120707d8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 120707db push eax */
  push32((uint32_t)(EAX));
  /* 120707dc call 0x120662a0 */
  push32(0x120707e1u); f_120662a0();
  /* 120707e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120707e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120707e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120707e9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 120707ec push edx */
  push32((uint32_t)(EDX));
  /* 120707ed call 0x120662a0 */
  push32(0x120707f2u); f_120662a0();
  /* 120707f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120707f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120707f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120707fa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 120707fd push ecx */
  push32((uint32_t)(ECX));
  /* 120707fe call 0x120662a0 */
  push32(0x12070803u); f_120662a0();
  /* 12070803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070806 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070808 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207080b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1207080e push eax */
  push32((uint32_t)(EAX));
  /* 1207080f call 0x120662a0 */
  push32(0x12070814u); f_120662a0();
  /* 12070814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070817 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070819 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207081c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1207081f push edx */
  push32((uint32_t)(EDX));
  /* 12070820 call 0x120662a0 */
  push32(0x12070825u); f_120662a0();
  /* 12070825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070828 push 2 */
  push32((uint32_t)(0x2u));
  /* 1207082a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207082d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12070830 push ecx */
  push32((uint32_t)(ECX));
  /* 12070831 call 0x120662a0 */
  push32(0x12070836u); f_120662a0();
  /* 12070836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070839 push 2 */
  push32((uint32_t)(0x2u));
  /* 1207083b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207083e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12070841 push eax */
  push32((uint32_t)(EAX));
  /* 12070842 call 0x120662a0 */
  push32(0x12070847u); f_120662a0();
  /* 12070847 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207084a push 2 */
  push32((uint32_t)(0x2u));
  /* 1207084c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207084f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12070852 push edx */
  push32((uint32_t)(EDX));
  /* 12070853 call 0x120662a0 */
  push32(0x12070858u); f_120662a0();
  /* 12070858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207085b push 2 */
  push32((uint32_t)(0x2u));
  /* 1207085d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070860 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12070863 push ecx */
  push32((uint32_t)(ECX));
  /* 12070864 call 0x120662a0 */
  push32(0x12070869u); f_120662a0();
  /* 12070869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207086c push 2 */
  push32((uint32_t)(0x2u));
  /* 1207086e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070871 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12070874 push eax */
  push32((uint32_t)(EAX));
  /* 12070875 call 0x120662a0 */
  push32(0x1207087au); f_120662a0();
  /* 1207087a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207087d push 2 */
  push32((uint32_t)(0x2u));
  /* 1207087f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070882 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12070888 push edx */
  push32((uint32_t)(EDX));
  /* 12070889 call 0x120662a0 */
  push32(0x1207088eu); f_120662a0();
  /* 1207088e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070891 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070896 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1207089c push ecx */
  push32((uint32_t)(ECX));
  /* 1207089d call 0x120662a0 */
  push32(0x120708a2u); f_120662a0();
  /* 120708a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120708a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120708a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120708aa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 120708b0 push eax */
  push32((uint32_t)(EAX));
  /* 120708b1 call 0x120662a0 */
  push32(0x120708b6u); f_120662a0();
  /* 120708b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120708b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120708bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120708be mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 120708c4 push edx */
  push32((uint32_t)(EDX));
  /* 120708c5 call 0x120662a0 */
  push32(0x120708cau); f_120662a0();
  /* 120708ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120708cd push 2 */
  push32((uint32_t)(0x2u));
  /* 120708cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120708d2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 120708d8 push ecx */
  push32((uint32_t)(ECX));
  /* 120708d9 call 0x120662a0 */
  push32(0x120708deu); f_120662a0();
  /* 120708de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120708e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 120708e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120708e6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 120708ec push eax */
  push32((uint32_t)(EAX));
  /* 120708ed call 0x120662a0 */
  push32(0x120708f2u); f_120662a0();
  /* 120708f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120708f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120708f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120708fa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12070900 push edx */
  push32((uint32_t)(EDX));
  /* 12070901 call 0x120662a0 */
  push32(0x12070906u); f_120662a0();
  /* 12070906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070909 push 2 */
  push32((uint32_t)(0x2u));
  /* 1207090b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207090e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12070914 push ecx */
  push32((uint32_t)(ECX));
  /* 12070915 call 0x120662a0 */
  push32(0x1207091au); f_120662a0();
  /* 1207091a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207091d push 2 */
  push32((uint32_t)(0x2u));
  /* 1207091f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070922 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12070928 push eax */
  push32((uint32_t)(EAX));
  /* 12070929 call 0x120662a0 */
  push32(0x1207092eu); f_120662a0();
  /* 1207092e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070931 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070933 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070936 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1207093c push edx */
  push32((uint32_t)(EDX));
  /* 1207093d call 0x120662a0 */
  push32(0x12070942u); f_120662a0();
  /* 12070942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070945 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070947 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207094a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12070950 push ecx */
  push32((uint32_t)(ECX));
  /* 12070951 call 0x120662a0 */
  push32(0x12070956u); f_120662a0();
  /* 12070956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12070959:;
  /* 12070959 pop ebp */
  EBP = (pop32());
  /* 1207095a ret  */
  ESPCHK(0x12070650u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x12070960 (678 bytes, 180 insns) */
void f_12070960(void) {
  FTRACE(0x12070960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12070960 push ebp */
  push32((uint32_t)(EBP));
  /* 12070961 mov ebp, esp */
  EBP = (ESP);
  /* 12070963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12070966 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1207096d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207096f mov ax, word ptr [0x1209181a] */
  AX = (r16((uint32_t)(0x1209181a)));
  /* 12070975 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12070978 cmp dword ptr [0x120917c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207097f je 0x12070ada */
  if (C.zf) goto L_12070ada;
  /* 12070985 push 0x120917e8 */
  push32((uint32_t)(0x120917e8u));
  /* 1207098a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1207098c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207098f push ecx */
  push32((uint32_t)(ECX));
  /* 12070990 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070992 call 0x120739d0 */
  push32(0x12070997u); f_120739d0();
  /* 12070997 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207099a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1207099d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1207099f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120709a2 push 0x120917ec */
  push32((uint32_t)(0x120917ecu));
  /* 120709a7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 120709a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120709ac push eax */
  push32((uint32_t)(EAX));
  /* 120709ad push 1 */
  push32((uint32_t)(0x1u));
  /* 120709af call 0x120739d0 */
  push32(0x120709b4u); f_120739d0();
  /* 120709b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120709b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120709ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120709bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120709bf push 0x120917f0 */
  push32((uint32_t)(0x120917f0u));
  /* 120709c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120709c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120709c9 push edx */
  push32((uint32_t)(EDX));
  /* 120709ca push 1 */
  push32((uint32_t)(0x1u));
  /* 120709cc call 0x120739d0 */
  push32(0x120709d1u); f_120739d0();
  /* 120709d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120709d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120709d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120709d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120709dc mov edx, dword ptr [0x120917f0] */
  EDX = (r32((uint32_t)(0x120917f0)));
  /* 120709e2 push edx */
  push32((uint32_t)(EDX));
  /* 120709e3 call 0x12070c10 */
  push32(0x120709e8u); f_12070c10();
  /* 120709e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120709eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120709ef je 0x12070a49 */
  if (C.zf) goto L_12070a49;
  /* 120709f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 120709f3 mov eax, dword ptr [0x120917e8] */
  EAX = (r32((uint32_t)(0x120917e8)));
  /* 120709f8 push eax */
  push32((uint32_t)(EAX));
  /* 120709f9 call 0x120662a0 */
  push32(0x120709feu); f_120662a0();
  /* 120709fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070a01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070a03 mov ecx, dword ptr [0x120917ec] */
  ECX = (r32((uint32_t)(0x120917ec)));
  /* 12070a09 push ecx */
  push32((uint32_t)(ECX));
  /* 12070a0a call 0x120662a0 */
  push32(0x12070a0fu); f_120662a0();
  /* 12070a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070a12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070a14 mov edx, dword ptr [0x120917f0] */
  EDX = (r32((uint32_t)(0x120917f0)));
  /* 12070a1a push edx */
  push32((uint32_t)(EDX));
  /* 12070a1b call 0x120662a0 */
  push32(0x12070a20u); f_120662a0();
  /* 12070a20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070a23 mov dword ptr [0x120917e8], 0 */
  w32((uint32_t)(0x120917e8), (0x0u));
  /* 12070a2d mov dword ptr [0x120917ec], 0 */
  w32((uint32_t)(0x120917ec), (0x0u));
  /* 12070a37 mov dword ptr [0x120917f0], 0 */
  w32((uint32_t)(0x120917f0), (0x0u));
  /* 12070a41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12070a44 jmp 0x12070c02 */
  goto L_12070c02;
L_12070a49:;
  /* 12070a49 mov eax, dword ptr [0x12090d98] */
  EAX = (r32((uint32_t)(0x12090d98)));
  /* 12070a4e cmp dword ptr [eax], 0x12090d60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12090d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070a54 je 0x12070a90 */
  if (C.zf) goto L_12070a90;
  /* 12070a56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070a58 mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070a5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12070a60 push edx */
  push32((uint32_t)(EDX));
  /* 12070a61 call 0x120662a0 */
  push32(0x12070a66u); f_120662a0();
  /* 12070a66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070a69 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070a6b mov eax, dword ptr [0x12090d98] */
  EAX = (r32((uint32_t)(0x12090d98)));
  /* 12070a70 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12070a73 push ecx */
  push32((uint32_t)(ECX));
  /* 12070a74 call 0x120662a0 */
  push32(0x12070a79u); f_120662a0();
  /* 12070a79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070a7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12070a7e mov edx, dword ptr [0x12090d98] */
  EDX = (r32((uint32_t)(0x12090d98)));
  /* 12070a84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12070a87 push eax */
  push32((uint32_t)(EAX));
  /* 12070a88 call 0x120662a0 */
  push32(0x12070a8du); f_120662a0();
  /* 12070a8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12070a90:;
  /* 12070a90 mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070a96 mov edx, dword ptr [0x120917e8] */
  EDX = (r32((uint32_t)(0x120917e8)));
  /* 12070a9c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12070a9e mov eax, dword ptr [0x12090d98] */
  EAX = (r32((uint32_t)(0x12090d98)));
  /* 12070aa3 mov ecx, dword ptr [0x120917ec] */
  ECX = (r32((uint32_t)(0x120917ec)));
  /* 12070aa9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12070aac mov edx, dword ptr [0x12090d98] */
  EDX = (r32((uint32_t)(0x12090d98)));
  /* 12070ab2 mov eax, dword ptr [0x120917f0] */
  EAX = (r32((uint32_t)(0x120917f0)));
  /* 12070ab7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12070aba mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070ac0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12070ac2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12070ac4 mov byte ptr [0x1208feb8], al */
  w8((uint32_t)(0x1208feb8), (AL));
  /* 12070ac9 mov dword ptr [0x1208febc], 1 */
  w32((uint32_t)(0x1208febc), (0x1u));
  /* 12070ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12070ad5 jmp 0x12070c02 */
  goto L_12070c02;
L_12070ada:;
  /* 12070ada push 2 */
  push32((uint32_t)(0x2u));
  /* 12070adc mov ecx, dword ptr [0x120917e8] */
  ECX = (r32((uint32_t)(0x120917e8)));
  /* 12070ae2 push ecx */
  push32((uint32_t)(ECX));
  /* 12070ae3 call 0x120662a0 */
  push32(0x12070ae8u); f_120662a0();
  /* 12070ae8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070aeb push 2 */
  push32((uint32_t)(0x2u));
  /* 12070aed mov edx, dword ptr [0x120917ec] */
  EDX = (r32((uint32_t)(0x120917ec)));
  /* 12070af3 push edx */
  push32((uint32_t)(EDX));
  /* 12070af4 call 0x120662a0 */
  push32(0x12070af9u); f_120662a0();
  /* 12070af9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070afc push 2 */
  push32((uint32_t)(0x2u));
  /* 12070afe mov eax, dword ptr [0x120917f0] */
  EAX = (r32((uint32_t)(0x120917f0)));
  /* 12070b03 push eax */
  push32((uint32_t)(EAX));
  /* 12070b04 call 0x120662a0 */
  push32(0x12070b09u); f_120662a0();
  /* 12070b09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070b0c mov dword ptr [0x120917e8], 0 */
  w32((uint32_t)(0x120917e8), (0x0u));
  /* 12070b16 mov dword ptr [0x120917ec], 0 */
  w32((uint32_t)(0x120917ec), (0x0u));
  /* 12070b20 mov dword ptr [0x120917f0], 0 */
  w32((uint32_t)(0x120917f0), (0x0u));
  /* 12070b2a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12070b2f push 0x1208d1ac */
  push32((uint32_t)(0x1208d1acu));
  /* 12070b34 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070b36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070b38 call 0x12065810 */
  push32(0x12070b3du); f_12065810();
  /* 12070b3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070b40 mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070b46 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12070b48 mov edx, dword ptr [0x12090d98] */
  EDX = (r32((uint32_t)(0x12090d98)));
  /* 12070b4e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070b51 jne 0x12070b5b */
  if (!C.zf) goto L_12070b5b;
  /* 12070b53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12070b56 jmp 0x12070c02 */
  goto L_12070c02;
L_12070b5b:;
  /* 12070b5b push 0x1208d17c */
  push32((uint32_t)(0x1208d17cu));
  /* 12070b60 mov eax, dword ptr [0x12090d98] */
  EAX = (r32((uint32_t)(0x12090d98)));
  /* 12070b65 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12070b67 push ecx */
  push32((uint32_t)(ECX));
  /* 12070b68 call 0x120687c0 */
  push32(0x12070b6du); f_120687c0();
  /* 12070b6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070b70 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12070b75 push 0x1208d1ac */
  push32((uint32_t)(0x1208d1acu));
  /* 12070b7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12070b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12070b7e call 0x12065810 */
  push32(0x12070b83u); f_12065810();
  /* 12070b83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070b86 mov edx, dword ptr [0x12090d98] */
  EDX = (r32((uint32_t)(0x12090d98)));
  /* 12070b8c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12070b8f mov eax, dword ptr [0x12090d98] */
  EAX = (r32((uint32_t)(0x12090d98)));
  /* 12070b94 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070b98 jne 0x12070b9f */
  if (!C.zf) goto L_12070b9f;
  /* 12070b9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12070b9d jmp 0x12070c02 */
  goto L_12070c02;
L_12070b9f:;
  /* 12070b9f mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070ba5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12070ba8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12070bab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12070bb0 push 0x1208d1ac */
  push32((uint32_t)(0x1208d1acu));
  /* 12070bb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070bb9 call 0x12065810 */
  push32(0x12070bbeu); f_12065810();
  /* 12070bbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070bc1 mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070bc7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12070bca mov edx, dword ptr [0x12090d98] */
  EDX = (r32((uint32_t)(0x12090d98)));
  /* 12070bd0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070bd4 jne 0x12070bdb */
  if (!C.zf) goto L_12070bdb;
  /* 12070bd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12070bd9 jmp 0x12070c02 */
  goto L_12070c02;
L_12070bdb:;
  /* 12070bdb mov eax, dword ptr [0x12090d98] */
  EAX = (r32((uint32_t)(0x12090d98)));
  /* 12070be0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12070be3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12070be6 mov edx, dword ptr [0x12090d98] */
  EDX = (r32((uint32_t)(0x12090d98)));
  /* 12070bec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12070bee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12070bf0 mov byte ptr [0x1208feb8], cl */
  w8((uint32_t)(0x1208feb8), (CL));
  /* 12070bf6 mov dword ptr [0x1208febc], 1 */
  w32((uint32_t)(0x1208febc), (0x1u));
  /* 12070c00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12070c02:;
  /* 12070c02 mov esp, ebp */
  ESP = (EBP);
  /* 12070c04 pop ebp */
  EBP = (pop32());
  /* 12070c05 ret  */
  ESPCHK(0x12070960u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12070c10 (125 bytes, 49 insns) */
void f_12070c10(void) {
  FTRACE(0x12070c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12070c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12070c11 mov ebp, esp */
  EBP = (ESP);
  /* 12070c13 push ecx */
  push32((uint32_t)(ECX));
L_12070c14:;
  /* 12070c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070c17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12070c1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12070c1c je 0x12070c89 */
  if (C.zf) goto L_12070c89;
  /* 12070c1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070c21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12070c24 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070c27 jl 0x12070c4d */
  if ((C.sf!=C.of)) goto L_12070c4d;
  /* 12070c29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070c2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12070c2f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070c32 jg 0x12070c4d */
  if ((!C.zf&&C.sf==C.of)) goto L_12070c4d;
  /* 12070c34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070c37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12070c3a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12070c3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070c40 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12070c42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070c45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070c48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12070c4b jmp 0x12070c87 */
  goto L_12070c87;
L_12070c4d:;
  /* 12070c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070c50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12070c53 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070c56 jne 0x12070c7e */
  if (!C.zf) goto L_12070c7e;
  /* 12070c58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070c5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12070c5e:;
  /* 12070c5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070c64 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12070c67 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12070c69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070c6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070c6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12070c72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070c75 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12070c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12070c7a jne 0x12070c5e */
  if (!C.zf) goto L_12070c5e;
  /* 12070c7c jmp 0x12070c87 */
  goto L_12070c87;
L_12070c7e:;
  /* 12070c7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070c81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070c84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12070c87:;
  /* 12070c87 jmp 0x12070c14 */
  goto L_12070c14;
L_12070c89:;
  /* 12070c89 mov esp, ebp */
  ESP = (EBP);
  /* 12070c8b pop ebp */
  EBP = (pop32());
  /* 12070c8c ret  */
  ESPCHK(0x12070c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c90 @ 0x12070c90 (304 bytes, 85 insns) */
void f_12070c90(void) {
  FTRACE(0x12070c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12070c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12070c91 mov ebp, esp */
  EBP = (ESP);
  /* 12070c93 push ecx */
  push32((uint32_t)(ECX));
  /* 12070c94 cmp dword ptr [0x120917bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070c9b je 0x12070d5c */
  if (C.zf) goto L_12070d5c;
  /* 12070ca1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12070ca3 push 0x1208d1b8 */
  push32((uint32_t)(0x1208d1b8u));
  /* 12070ca8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070caa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12070cac push 1 */
  push32((uint32_t)(0x1u));
  /* 12070cae call 0x12065c20 */
  push32(0x12070cb3u); f_12065c20();
  /* 12070cb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070cb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12070cb9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070cbd jne 0x12070cc9 */
  if (!C.zf) goto L_12070cc9;
  /* 12070cbf mov eax, 1 */
  EAX = (0x1u);
  /* 12070cc4 jmp 0x12070dbc */
  goto L_12070dbc;
L_12070cc9:;
  /* 12070cc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070ccc push eax */
  push32((uint32_t)(EAX));
  /* 12070ccd call 0x12070dc0 */
  push32(0x12070cd2u); f_12070dc0();
  /* 12070cd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12070cd7 je 0x12070cfd */
  if (C.zf) goto L_12070cfd;
  /* 12070cd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070cdc push ecx */
  push32((uint32_t)(ECX));
  /* 12070cdd call 0x12071050 */
  push32(0x12070ce2u); f_12071050();
  /* 12070ce2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070ce5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12070ce7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070cea push edx */
  push32((uint32_t)(EDX));
  /* 12070ceb call 0x120662a0 */
  push32(0x12070cf0u); f_120662a0();
  /* 12070cf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070cf3 mov eax, 1 */
  EAX = (0x1u);
  /* 12070cf8 jmp 0x12070dbc */
  goto L_12070dbc;
L_12070cfd:;
  /* 12070cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070d00 mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070d06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12070d08 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12070d0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070d0d mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070d13 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12070d16 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12070d19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070d1c mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070d22 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12070d25 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12070d28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070d2b mov dword ptr [0x12090d98], eax */
  w32((uint32_t)(0x12090d98), (EAX));
  /* 12070d30 mov ecx, dword ptr [0x120917f4] */
  ECX = (r32((uint32_t)(0x120917f4)));
  /* 12070d36 push ecx */
  push32((uint32_t)(ECX));
  /* 12070d37 call 0x12071050 */
  push32(0x12070d3cu); f_12071050();
  /* 12070d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070d3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12070d41 mov edx, dword ptr [0x120917f4] */
  EDX = (r32((uint32_t)(0x120917f4)));
  /* 12070d47 push edx */
  push32((uint32_t)(EDX));
  /* 12070d48 call 0x120662a0 */
  push32(0x12070d4du); f_120662a0();
  /* 12070d4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070d50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070d53 mov dword ptr [0x120917f4], eax */
  w32((uint32_t)(0x120917f4), (EAX));
  /* 12070d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12070d5a jmp 0x12070dbc */
  goto L_12070dbc;
L_12070d5c:;
  /* 12070d5c mov ecx, dword ptr [0x12090d98] */
  ECX = (r32((uint32_t)(0x12090d98)));
  /* 12070d62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12070d64 mov dword ptr [0x12090d68], edx */
  w32((uint32_t)(0x12090d68), (EDX));
  /* 12070d6a mov eax, dword ptr [0x12090d98] */
  EAX = (r32((uint32_t)(0x12090d98)));
  /* 12070d6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12070d72 mov dword ptr [0x12090d6c], ecx */
  w32((uint32_t)(0x12090d6c), (ECX));
  /* 12070d78 mov edx, dword ptr [0x12090d98] */
  EDX = (r32((uint32_t)(0x12090d98)));
  /* 12070d7e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12070d81 mov dword ptr [0x12090d70], eax */
  w32((uint32_t)(0x12090d70), (EAX));
  /* 12070d86 mov dword ptr [0x12090d98], 0x12090d68 */
  w32((uint32_t)(0x12090d98), (0x12090d68u));
  /* 12070d90 mov ecx, dword ptr [0x120917f4] */
  ECX = (r32((uint32_t)(0x120917f4)));
  /* 12070d96 push ecx */
  push32((uint32_t)(ECX));
  /* 12070d97 call 0x12071050 */
  push32(0x12070d9cu); f_12071050();
  /* 12070d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 12070da1 mov edx, dword ptr [0x120917f4] */
  EDX = (r32((uint32_t)(0x120917f4)));
  /* 12070da7 push edx */
  push32((uint32_t)(EDX));
  /* 12070da8 call 0x120662a0 */
  push32(0x12070dadu); f_120662a0();
  /* 12070dad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070db0 mov dword ptr [0x120917f4], 0 */
  w32((uint32_t)(0x120917f4), (0x0u));
  /* 12070dba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12070dbc:;
  /* 12070dbc mov esp, ebp */
  ESP = (EBP);
  /* 12070dbe pop ebp */
  EBP = (pop32());
  /* 12070dbf ret  */
  ESPCHK(0x12070c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dc0 @ 0x12070dc0 (525 bytes, 200 insns) */
void f_12070dc0(void) {
  FTRACE(0x12070dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12070dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12070dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12070dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12070dc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12070dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12070dcf mov ax, word ptr [0x12091814] */
  AX = (r16((uint32_t)(0x12091814)));
  /* 12070dd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12070dd8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070ddc jne 0x12070de6 */
  if (!C.zf) goto L_12070de6;
  /* 12070dde or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12070de1 jmp 0x12070fc9 */
  goto L_12070fc9;
L_12070de6:;
  /* 12070de6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070de9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070dec push ecx */
  push32((uint32_t)(ECX));
  /* 12070ded push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12070def mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070df2 push edx */
  push32((uint32_t)(EDX));
  /* 12070df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070df5 call 0x120739d0 */
  push32(0x12070dfau); f_120739d0();
  /* 12070dfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070dfd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070e00 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070e02 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070e05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070e08 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e0b push edx */
  push32((uint32_t)(EDX));
  /* 12070e0c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12070e0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070e11 push eax */
  push32((uint32_t)(EAX));
  /* 12070e12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070e14 call 0x120739d0 */
  push32(0x12070e19u); f_120739d0();
  /* 12070e19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070e1f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070e21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070e24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070e27 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e2a push edx */
  push32((uint32_t)(EDX));
  /* 12070e2b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12070e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070e30 push eax */
  push32((uint32_t)(EAX));
  /* 12070e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070e33 call 0x120739d0 */
  push32(0x12070e38u); f_120739d0();
  /* 12070e38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070e3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070e40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070e43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070e46 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e49 push edx */
  push32((uint32_t)(EDX));
  /* 12070e4a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12070e4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070e4f push eax */
  push32((uint32_t)(EAX));
  /* 12070e50 push 1 */
  push32((uint32_t)(0x1u));
  /* 12070e52 call 0x120739d0 */
  push32(0x12070e57u); f_120739d0();
  /* 12070e57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070e5d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070e5f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070e62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070e65 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e68 push edx */
  push32((uint32_t)(EDX));
  /* 12070e69 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12070e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070e6e push eax */
  push32((uint32_t)(EAX));
  /* 12070e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12070e71 call 0x120739d0 */
  push32(0x12070e76u); f_120739d0();
  /* 12070e76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070e7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070e7e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070e81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070e84 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12070e87 push eax */
  push32((uint32_t)(EAX));
  /* 12070e88 call 0x12070fd0 */
  push32(0x12070e8du); f_12070fd0();
  /* 12070e8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070e93 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070e96 push ecx */
  push32((uint32_t)(ECX));
  /* 12070e97 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12070e99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070e9c push edx */
  push32((uint32_t)(EDX));
  /* 12070e9d push 1 */
  push32((uint32_t)(0x1u));
  /* 12070e9f call 0x120739d0 */
  push32(0x12070ea4u); f_120739d0();
  /* 12070ea4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070ea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070eaa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070eac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070eaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070eb2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070eb5 push edx */
  push32((uint32_t)(EDX));
  /* 12070eb6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12070eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070ebb push eax */
  push32((uint32_t)(EAX));
  /* 12070ebc push 1 */
  push32((uint32_t)(0x1u));
  /* 12070ebe call 0x120739d0 */
  push32(0x12070ec3u); f_120739d0();
  /* 12070ec3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070ec6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070ec9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070ecb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070ece mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070ed1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070ed4 push edx */
  push32((uint32_t)(EDX));
  /* 12070ed5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12070ed7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070eda push eax */
  push32((uint32_t)(EAX));
  /* 12070edb push 0 */
  push32((uint32_t)(0x0u));
  /* 12070edd call 0x120739d0 */
  push32(0x12070ee2u); f_120739d0();
  /* 12070ee2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070ee5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070ee8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070eea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070eed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070ef0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070ef3 push edx */
  push32((uint32_t)(EDX));
  /* 12070ef4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12070ef6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070ef9 push eax */
  push32((uint32_t)(EAX));
  /* 12070efa push 0 */
  push32((uint32_t)(0x0u));
  /* 12070efc call 0x120739d0 */
  push32(0x12070f01u); f_120739d0();
  /* 12070f01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070f07 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070f09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070f0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070f0f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f12 push edx */
  push32((uint32_t)(EDX));
  /* 12070f13 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12070f15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070f18 push eax */
  push32((uint32_t)(EAX));
  /* 12070f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12070f1b call 0x120739d0 */
  push32(0x12070f20u); f_120739d0();
  /* 12070f20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070f26 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070f28 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070f2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070f2e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f31 push edx */
  push32((uint32_t)(EDX));
  /* 12070f32 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12070f34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070f37 push eax */
  push32((uint32_t)(EAX));
  /* 12070f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12070f3a call 0x120739d0 */
  push32(0x12070f3fu); f_120739d0();
  /* 12070f3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070f45 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070f47 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070f4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070f4d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f50 push edx */
  push32((uint32_t)(EDX));
  /* 12070f51 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12070f53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070f56 push eax */
  push32((uint32_t)(EAX));
  /* 12070f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12070f59 call 0x120739d0 */
  push32(0x12070f5eu); f_120739d0();
  /* 12070f5e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070f64 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070f66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070f69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070f6c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f6f push edx */
  push32((uint32_t)(EDX));
  /* 12070f70 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12070f72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070f75 push eax */
  push32((uint32_t)(EAX));
  /* 12070f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12070f78 call 0x120739d0 */
  push32(0x12070f7du); f_120739d0();
  /* 12070f7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070f83 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070f85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070f88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070f8b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f8e push edx */
  push32((uint32_t)(EDX));
  /* 12070f8f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12070f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070f94 push eax */
  push32((uint32_t)(EAX));
  /* 12070f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12070f97 call 0x120739d0 */
  push32(0x12070f9cu); f_120739d0();
  /* 12070f9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070f9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070fa2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070fa4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070fa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070faa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12070fad push edx */
  push32((uint32_t)(EDX));
  /* 12070fae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12070fb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12070fb3 push eax */
  push32((uint32_t)(EAX));
  /* 12070fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12070fb6 call 0x120739d0 */
  push32(0x12070fbbu); f_120739d0();
  /* 12070fbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12070fbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12070fc1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12070fc3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12070fc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12070fc9:;
  /* 12070fc9 mov esp, ebp */
  ESP = (EBP);
  /* 12070fcb pop ebp */
  EBP = (pop32());
  /* 12070fcc ret  */
  ESPCHK(0x12070dc0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12070fd0 (125 bytes, 49 insns) */
void f_12070fd0(void) {
  FTRACE(0x12070fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12070fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12070fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12070fd3 push ecx */
  push32((uint32_t)(ECX));
L_12070fd4:;
  /* 12070fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070fd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12070fda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12070fdc je 0x12071049 */
  if (C.zf) goto L_12071049;
  /* 12070fde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070fe1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12070fe4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070fe7 jl 0x1207100d */
  if ((C.sf!=C.of)) goto L_1207100d;
  /* 12070fe9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070fec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12070fef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12070ff2 jg 0x1207100d */
  if ((!C.zf&&C.sf==C.of)) goto L_1207100d;
  /* 12070ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12070ff7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12070ffa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12070ffd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071000 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12071002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071005 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071008 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1207100b jmp 0x12071047 */
  goto L_12071047;
L_1207100d:;
  /* 1207100d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071010 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12071013 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071016 jne 0x1207103e */
  if (!C.zf) goto L_1207103e;
  /* 12071018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207101b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1207101e:;
  /* 1207101e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12071021 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12071024 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12071027 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12071029 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1207102c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207102f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12071032 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12071035 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12071038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207103a jne 0x1207101e */
  if (!C.zf) goto L_1207101e;
  /* 1207103c jmp 0x12071047 */
  goto L_12071047;
L_1207103e:;
  /* 1207103e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071041 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071044 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12071047:;
  /* 12071047 jmp 0x12070fd4 */
  goto L_12070fd4;
L_12071049:;
  /* 12071049 mov esp, ebp */
  ESP = (EBP);
  /* 1207104b pop ebp */
  EBP = (pop32());
  /* 1207104c ret  */
  ESPCHK(0x12070fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011050 @ 0x12071050 (147 bytes, 52 insns) */
void f_12071050(void) {
  FTRACE(0x12071050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071050 push ebp */
  push32((uint32_t)(EBP));
  /* 12071051 mov ebp, esp */
  EBP = (ESP);
  /* 12071053 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071057 jne 0x1207105e */
  if (!C.zf) goto L_1207105e;
  /* 12071059 jmp 0x120710e1 */
  goto L_120710e1;
L_1207105e:;
  /* 1207105e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071061 cmp dword ptr [eax + 0xc], 0x12091850 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12091850u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071068 je 0x120710e1 */
  if (C.zf) goto L_120710e1;
  /* 1207106a push 2 */
  push32((uint32_t)(0x2u));
  /* 1207106c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1207106f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12071072 push edx */
  push32((uint32_t)(EDX));
  /* 12071073 call 0x120662a0 */
  push32(0x12071078u); f_120662a0();
  /* 12071078 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207107b push 2 */
  push32((uint32_t)(0x2u));
  /* 1207107d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071080 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12071083 push ecx */
  push32((uint32_t)(ECX));
  /* 12071084 call 0x120662a0 */
  push32(0x12071089u); f_120662a0();
  /* 12071089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207108c push 2 */
  push32((uint32_t)(0x2u));
  /* 1207108e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12071091 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12071094 push eax */
  push32((uint32_t)(EAX));
  /* 12071095 call 0x120662a0 */
  push32(0x1207109au); f_120662a0();
  /* 1207109a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207109d push 2 */
  push32((uint32_t)(0x2u));
  /* 1207109f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120710a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 120710a5 push edx */
  push32((uint32_t)(EDX));
  /* 120710a6 call 0x120662a0 */
  push32(0x120710abu); f_120662a0();
  /* 120710ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120710ae push 2 */
  push32((uint32_t)(0x2u));
  /* 120710b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120710b3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 120710b6 push ecx */
  push32((uint32_t)(ECX));
  /* 120710b7 call 0x120662a0 */
  push32(0x120710bcu); f_120662a0();
  /* 120710bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120710bf push 2 */
  push32((uint32_t)(0x2u));
  /* 120710c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120710c4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 120710c7 push eax */
  push32((uint32_t)(EAX));
  /* 120710c8 call 0x120662a0 */
  push32(0x120710cdu); f_120662a0();
  /* 120710cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120710d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 120710d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120710d5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 120710d8 push edx */
  push32((uint32_t)(EDX));
  /* 120710d9 call 0x120662a0 */
  push32(0x120710deu); f_120662a0();
  /* 120710de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120710e1:;
  /* 120710e1 pop ebp */
  EBP = (pop32());
  /* 120710e2 ret  */
  ESPCHK(0x12071050u, _esp0);
  ESP += 4; return;
}

/* FUN_100110f0 @ 0x120710f0 (928 bytes, 284 insns) */
void f_120710f0(void) {
  FTRACE(0x120710f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120710f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120710f1 mov ebp, esp */
  EBP = (ESP);
  /* 120710f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120710f6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 120710fd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12071104 cmp dword ptr [0x120917b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207110b je 0x12071441 */
  if (C.zf) goto L_12071441;
  /* 12071111 cmp dword ptr [0x120917c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071118 jne 0x12071140 */
  if (!C.zf) goto L_12071140;
  /* 1207111a push 0x120917c8 */
  push32((uint32_t)(0x120917c8u));
  /* 1207111f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12071124 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071126 mov ax, word ptr [0x1209180c] */
  AX = (r16((uint32_t)(0x1209180c)));
  /* 1207112c push eax */
  push32((uint32_t)(EAX));
  /* 1207112d push 0 */
  push32((uint32_t)(0x0u));
  /* 1207112f call 0x120739d0 */
  push32(0x12071134u); f_120739d0();
  /* 12071134 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071139 je 0x12071140 */
  if (C.zf) goto L_12071140;
  /* 1207113b jmp 0x12071402 */
  goto L_12071402;
L_12071140:;
  /* 12071140 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12071142 push 0x1208d1c4 */
  push32((uint32_t)(0x1208d1c4u));
  /* 12071147 push 2 */
  push32((uint32_t)(0x2u));
  /* 12071149 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1207114e call 0x12065810 */
  push32(0x12071153u); f_12065810();
  /* 12071153 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071156 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12071159 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1207115b push 0x1208d1c4 */
  push32((uint32_t)(0x1208d1c4u));
  /* 12071160 push 2 */
  push32((uint32_t)(0x2u));
  /* 12071162 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12071167 call 0x12065810 */
  push32(0x1207116cu); f_12065810();
  /* 1207116c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207116f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12071172 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12071174 push 0x1208d1c4 */
  push32((uint32_t)(0x1208d1c4u));
  /* 12071179 push 2 */
  push32((uint32_t)(0x2u));
  /* 1207117b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12071180 call 0x12065810 */
  push32(0x12071185u); f_12065810();
  /* 12071185 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071188 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1207118b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1207118d push 0x1208d1c4 */
  push32((uint32_t)(0x1208d1c4u));
  /* 12071192 push 2 */
  push32((uint32_t)(0x2u));
  /* 12071194 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12071199 call 0x12065810 */
  push32(0x1207119eu); f_12065810();
  /* 1207119e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120711a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120711a4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120711a8 je 0x120711bc */
  if (C.zf) goto L_120711bc;
  /* 120711aa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120711ae je 0x120711bc */
  if (C.zf) goto L_120711bc;
  /* 120711b0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120711b4 je 0x120711bc */
  if (C.zf) goto L_120711bc;
  /* 120711b6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120711ba jne 0x120711c1 */
  if (!C.zf) goto L_120711c1;
L_120711bc:;
  /* 120711bc jmp 0x12071402 */
  goto L_12071402;
L_120711c1:;
  /* 120711c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120711c4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120711c7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120711ce jmp 0x120711d9 */
  goto L_120711d9;
L_120711d0:;
  /* 120711d0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120711d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120711d6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_120711d9:;
  /* 120711d9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120711e0 jge 0x120711f5 */
  if ((C.sf==C.of)) goto L_120711f5;
  /* 120711e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120711e5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 120711e8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 120711ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120711ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120711f0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120711f3 jmp 0x120711d0 */
  goto L_120711d0;
L_120711f5:;
  /* 120711f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 120711f8 push eax */
  push32((uint32_t)(EAX));
  /* 120711f9 mov ecx, dword ptr [0x120917c8] */
  ECX = (r32((uint32_t)(0x120917c8)));
  /* 120711ff push ecx */
  push32((uint32_t)(ECX));
  /* 12071200 call dword ptr [0x12094328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12094328))), 0x12071206u);
  /* 12071206 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071208 jne 0x1207120f */
  if (!C.zf) goto L_1207120f;
  /* 1207120a jmp 0x12071402 */
  goto L_12071402;
L_1207120f:;
  /* 1207120f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071213 jbe 0x1207121a */
  if ((C.cf||C.zf)) goto L_1207121a;
  /* 12071215 jmp 0x12071402 */
  goto L_12071402;
L_1207121a:;
  /* 1207121a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1207121d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12071223 mov dword ptr [0x1208feb4], edx */
  w32((uint32_t)(0x1208feb4), (EDX));
  /* 12071229 cmp dword ptr [0x1208feb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1208feb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071230 jle 0x12071289 */
  if ((C.zf||C.sf!=C.of)) goto L_12071289;
  /* 12071232 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12071235 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12071238 jmp 0x12071243 */
  goto L_12071243;
L_1207123a:;
  /* 1207123a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1207123d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071240 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12071243:;
  /* 12071243 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12071246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071248 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1207124a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1207124c je 0x12071289 */
  if (C.zf) goto L_12071289;
  /* 1207124e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12071251 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12071253 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12071256 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12071258 je 0x12071289 */
  if (C.zf) goto L_12071289;
  /* 1207125a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1207125d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1207125f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12071261 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12071264 jmp 0x1207126f */
  goto L_1207126f;
L_12071266:;
  /* 12071266 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12071269 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207126c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1207126f:;
  /* 1207126f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12071272 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12071274 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12071277 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1207127a jg 0x12071287 */
  if ((!C.zf&&C.sf==C.of)) goto L_12071287;
  /* 1207127c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1207127f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071282 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12071285 jmp 0x12071266 */
  goto L_12071266;
L_12071287:;
  /* 12071287 jmp 0x1207123a */
  goto L_1207123a;
L_12071289:;
  /* 12071289 push 0 */
  push32((uint32_t)(0x0u));
  /* 1207128b push 0 */
  push32((uint32_t)(0x0u));
  /* 1207128d push 0 */
  push32((uint32_t)(0x0u));
  /* 1207128f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12071292 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071295 push eax */
  push32((uint32_t)(EAX));
  /* 12071296 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1207129b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1207129e push ecx */
  push32((uint32_t)(ECX));
  /* 1207129f push 1 */
  push32((uint32_t)(0x1u));
  /* 120712a1 call 0x1206da40 */
  push32(0x120712a6u); f_1206da40();
  /* 120712a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120712a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120712ab jne 0x120712b2 */
  if (!C.zf) goto L_120712b2;
  /* 120712ad jmp 0x12071402 */
  goto L_12071402;
L_120712b2:;
  /* 120712b2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120712b5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 120712ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120712bd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120712c0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120712c7 jmp 0x120712d2 */
  goto L_120712d2;
L_120712c9:;
  /* 120712c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120712cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120712cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_120712d2:;
  /* 120712d2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120712d9 jge 0x120712f0 */
  if ((C.sf==C.of)) goto L_120712f0;
  /* 120712db mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120712de mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 120712e2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 120712e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120712e8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120712eb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120712ee jmp 0x120712c9 */
  goto L_120712c9;
L_120712f0:;
  /* 120712f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120712f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120712f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120712f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120712fa push edx */
  push32((uint32_t)(EDX));
  /* 120712fb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12071300 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12071303 push eax */
  push32((uint32_t)(EAX));
  /* 12071304 push 1 */
  push32((uint32_t)(0x1u));
  /* 12071306 call 0x12073c70 */
  push32(0x1207130bu); f_12073c70();
  /* 1207130b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207130e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12071310 jne 0x12071317 */
  if (!C.zf) goto L_12071317;
  /* 12071312 jmp 0x12071402 */
  goto L_12071402;
L_12071317:;
  /* 12071317 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1207131a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1207131f cmp dword ptr [0x1208feb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1208feb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071326 jle 0x12071383 */
  if ((C.zf||C.sf!=C.of)) goto L_12071383;
  /* 12071328 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1207132b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1207132e jmp 0x12071339 */
  goto L_12071339;
L_12071330:;
  /* 12071330 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12071333 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071336 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12071339:;
  /* 12071339 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1207133c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1207133e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12071340 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12071342 je 0x12071383 */
  if (C.zf) goto L_12071383;
  /* 12071344 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12071347 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12071349 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1207134c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1207134e je 0x12071383 */
  if (C.zf) goto L_12071383;
  /* 12071350 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12071353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071355 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12071357 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1207135a jmp 0x12071365 */
  goto L_12071365;
L_1207135c:;
  /* 1207135c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1207135f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071362 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12071365:;
  /* 12071365 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12071368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1207136a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1207136d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12071370 jg 0x12071381 */
  if ((!C.zf&&C.sf==C.of)) goto L_12071381;
  /* 12071372 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12071375 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12071378 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1207137f jmp 0x1207135c */
  goto L_1207135c;
L_12071381:;
  /* 12071381 jmp 0x12071330 */
  goto L_12071330;
L_12071383:;
  /* 12071383 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12071386 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071389 mov dword ptr [0x1208fca8], eax */
  w32((uint32_t)(0x1208fca8), (EAX));
  /* 1207138e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12071391 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071394 mov dword ptr [0x1208fcac], ecx */
  w32((uint32_t)(0x1208fcac), (ECX));
  /* 1207139a cmp dword ptr [0x120917f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120713a1 je 0x120713b4 */
  if (C.zf) goto L_120713b4;
  /* 120713a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120713a5 mov edx, dword ptr [0x120917f8] */
  EDX = (r32((uint32_t)(0x120917f8)));
  /* 120713ab push edx */
  push32((uint32_t)(EDX));
  /* 120713ac call 0x120662a0 */
  push32(0x120713b1u); f_120662a0();
  /* 120713b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120713b4:;
  /* 120713b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120713b7 mov dword ptr [0x120917f8], eax */
  w32((uint32_t)(0x120917f8), (EAX));
  /* 120713bc cmp dword ptr [0x120917fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120917fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120713c3 je 0x120713d6 */
  if (C.zf) goto L_120713d6;
  /* 120713c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 120713c7 mov ecx, dword ptr [0x120917fc] */
  ECX = (r32((uint32_t)(0x120917fc)));
  /* 120713cd push ecx */
  push32((uint32_t)(ECX));
  /* 120713ce call 0x120662a0 */
  push32(0x120713d3u); f_120662a0();
  /* 120713d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120713d6:;
  /* 120713d6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120713d9 mov dword ptr [0x120917fc], edx */
  w32((uint32_t)(0x120917fc), (EDX));
  /* 120713df push 2 */
  push32((uint32_t)(0x2u));
  /* 120713e1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120713e4 push eax */
  push32((uint32_t)(EAX));
  /* 120713e5 call 0x120662a0 */
  push32(0x120713eau); f_120662a0();
  /* 120713ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120713ed push 2 */
  push32((uint32_t)(0x2u));
  /* 120713ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120713f2 push ecx */
  push32((uint32_t)(ECX));
  /* 120713f3 call 0x120662a0 */
  push32(0x120713f8u); f_120662a0();
  /* 120713f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120713fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120713fd jmp 0x1207148c */
  goto L_1207148c;
L_12071402:;
  /* 12071402 push 2 */
  push32((uint32_t)(0x2u));
  /* 12071404 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12071407 push edx */
  push32((uint32_t)(EDX));
  /* 12071408 call 0x120662a0 */
  push32(0x1207140du); f_120662a0();
  /* 1207140d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071410 push 2 */
  push32((uint32_t)(0x2u));
  /* 12071412 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12071415 push eax */
  push32((uint32_t)(EAX));
  /* 12071416 call 0x120662a0 */
  push32(0x1207141bu); f_120662a0();
  /* 1207141b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207141e push 2 */
  push32((uint32_t)(0x2u));
  /* 12071420 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12071423 push ecx */
  push32((uint32_t)(ECX));
  /* 12071424 call 0x120662a0 */
  push32(0x12071429u); f_120662a0();
  /* 12071429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207142c push 2 */
  push32((uint32_t)(0x2u));
  /* 1207142e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12071431 push edx */
  push32((uint32_t)(EDX));
  /* 12071432 call 0x120662a0 */
  push32(0x12071437u); f_120662a0();
  /* 12071437 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207143a mov eax, 1 */
  EAX = (0x1u);
  /* 1207143f jmp 0x1207148c */
  goto L_1207148c;
L_12071441:;
  /* 12071441 mov dword ptr [0x1208fca8], 0x1208fcb2 */
  w32((uint32_t)(0x1208fca8), (0x1208fcb2u));
  /* 1207144b mov dword ptr [0x1208fcac], 0x1208fcb2 */
  w32((uint32_t)(0x1208fcac), (0x1208fcb2u));
  /* 12071455 push 2 */
  push32((uint32_t)(0x2u));
  /* 12071457 mov eax, dword ptr [0x120917f8] */
  EAX = (r32((uint32_t)(0x120917f8)));
  /* 1207145c push eax */
  push32((uint32_t)(EAX));
  /* 1207145d call 0x120662a0 */
  push32(0x12071462u); f_120662a0();
  /* 12071462 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071465 push 2 */
  push32((uint32_t)(0x2u));
  /* 12071467 mov ecx, dword ptr [0x120917fc] */
  ECX = (r32((uint32_t)(0x120917fc)));
  /* 1207146d push ecx */
  push32((uint32_t)(ECX));
  /* 1207146e call 0x120662a0 */
  push32(0x12071473u); f_120662a0();
  /* 12071473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12071476 mov dword ptr [0x120917f8], 0 */
  w32((uint32_t)(0x120917f8), (0x0u));
  /* 12071480 mov dword ptr [0x120917fc], 0 */
  w32((uint32_t)(0x120917fc), (0x0u));
  /* 1207148a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1207148c:;
  /* 1207148c mov esp, ebp */
  ESP = (EBP);
  /* 1207148e pop ebp */
  EBP = (pop32());
  /* 1207148f ret  */
  ESPCHK(0x120710f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011490 @ 0x12071490 (7 bytes, 5 insns) */
void f_12071490(void) {
  FTRACE(0x12071490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071490 push ebp */
  push32((uint32_t)(EBP));
  /* 12071491 mov ebp, esp */
  EBP = (ESP);
  /* 12071493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071495 pop ebp */
  EBP = (pop32());
  /* 12071496 ret  */
  ESPCHK(0x12071490u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x120714a0 (129 bytes, 56 insns) */
void f_120714a0(void) {
  FTRACE(0x120714a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120714a0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 120714a4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 120714a8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 120714ae jne 0x120714ec */
  if (!C.zf) goto L_120714ec;
L_120714b0:;
  /* 120714b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120714b2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120714b4 jne 0x120714e4 */
  if (!C.zf) goto L_120714e4;
  /* 120714b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120714b8 je 0x120714e0 */
  if (C.zf) goto L_120714e0;
  /* 120714ba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120714bd jne 0x120714e4 */
  if (!C.zf) goto L_120714e4;
  /* 120714bf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120714c1 je 0x120714e0 */
  if (C.zf) goto L_120714e0;
  /* 120714c3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120714c6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120714c9 jne 0x120714e4 */
  if (!C.zf) goto L_120714e4;
  /* 120714cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120714cd je 0x120714e0 */
  if (C.zf) goto L_120714e0;
  /* 120714cf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120714d2 jne 0x120714e4 */
  if (!C.zf) goto L_120714e4;
  /* 120714d4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120714d7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120714da or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120714dc jne 0x120714b0 */
  if (!C.zf) goto L_120714b0;
  /* 120714de mov edi, edi */
  EDI = (EDI);
L_120714e0:;
  /* 120714e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120714e2 ret  */
  ESPCHK(0x120714a0u, _esp0);
  ESP += 4; return;
  /* 120714e3 nop  */
  /* nop */
L_120714e4:;
  /* 120714e4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120714e6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120714e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120714e9 ret  */
  ESPCHK(0x120714a0u, _esp0);
  ESP += 4; return;
  /* 120714ea mov edi, edi */
  EDI = (EDI);
L_120714ec:;
  /* 120714ec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 120714f2 je 0x12071508 */
  if (C.zf) goto L_12071508;
  /* 120714f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120714f6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120714f7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120714f9 jne 0x120714e4 */
  if (!C.zf) goto L_120714e4;
  /* 120714fb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120714fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120714fe je 0x120714e0 */
  if (C.zf) goto L_120714e0;
  /* 12071500 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12071506 je 0x120714b0 */
  if (C.zf) goto L_120714b0;
L_12071508:;
  /* 12071508 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1207150b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207150e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12071510 jne 0x120714e4 */
  if (!C.zf) goto L_120714e4;
  /* 12071512 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12071514 je 0x120714e0 */
  if (C.zf) goto L_120714e0;
  /* 12071516 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12071519 jne 0x120714e4 */
  if (!C.zf) goto L_120714e4;
  /* 1207151b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1207151d je 0x120714e0 */
  if (C.zf) goto L_120714e0;
  /* 1207151f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12071522 jmp 0x120714b0 */
  goto L_120714b0;
}

/* FUN_10011530 @ 0x12071530 (62 bytes, 35 insns) */
void f_12071530(void) {
  FTRACE(0x12071530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071530 push ebp */
  push32((uint32_t)(EBP));
  /* 12071531 mov ebp, esp */
  EBP = (ESP);
  /* 12071533 push esi */
  push32((uint32_t)(ESI));
  /* 12071534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071536 push eax */
  push32((uint32_t)(EAX));
  /* 12071537 push eax */
  push32((uint32_t)(EAX));
  /* 12071538 push eax */
  push32((uint32_t)(EAX));
  /* 12071539 push eax */
  push32((uint32_t)(EAX));
  /* 1207153a push eax */
  push32((uint32_t)(EAX));
  /* 1207153b push eax */
  push32((uint32_t)(EAX));
  /* 1207153c push eax */
  push32((uint32_t)(EAX));
  /* 1207153d push eax */
  push32((uint32_t)(EAX));
  /* 1207153e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12071541 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12071544:;
  /* 12071544 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12071546 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12071548 je 0x12071551 */
  if (C.zf) goto L_12071551;
  /* 1207154a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1207154b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1207154b");
  /* 1207154f jmp 0x12071544 */
  goto L_12071544;
L_12071551:;
  /* 12071551 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12071554 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12071557 nop  */
  /* nop */
L_12071558:;
  /* 12071558 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12071559 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1207155b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1207155d je 0x12071566 */
  if (C.zf) goto L_12071566;
  /* 1207155f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12071560 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12071560");
  /* 12071564 jae 0x12071558 */
  if (!C.cf) goto L_12071558;
L_12071566:;
  /* 12071566 mov eax, ecx */
  EAX = (ECX);
  /* 12071568 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1207156b pop esi */
  ESI = (pop32());
  /* 1207156c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1207156d ret  */
  ESPCHK(0x12071530u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12071570 (56 bytes, 31 insns) */
void f_12071570(void) {
  FTRACE(0x12071570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12071570 push ebp */
  push32((uint32_t)(EBP));
  /* 12071571 mov ebp, esp */
  EBP = (ESP);
  /* 12071573 push edi */
  push32((uint32_t)(EDI));
  /* 12071574 push esi */
  push32((uint32_t)(ESI));
  /* 12071575 push ebx */
  push32((uint32_t)(EBX));
  /* 12071576 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12071579 jecxz 0x120715a1 */
  x86_unimpl("jecxz @ 0x12071579");
  /* 1207157b mov ebx, ecx */
  EBX = (ECX);
  /* 1207157d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12071580 mov esi, edi */
  ESI = (EDI);
  /* 12071582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12071584 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12071586 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12071588 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1207158a mov edi, esi */
  EDI = (ESI);
  /* 1207158c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1207158f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12071591 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12071594 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12071596 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12071599 ja 0x1207159f */
  if ((!C.cf&&!C.zf)) goto L_1207159f;
  /* 1207159b je 0x120715a1 */
  if (C.zf) goto L_120715a1;
  /* 1207159d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1207159e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1207159f:;
  /* 1207159f not ecx */
  ECX = (~(ECX));
L_120715a1:;
  /* 120715a1 mov eax, ecx */
  EAX = (ECX);
  /* 120715a3 pop ebx */
  EBX = (pop32());
  /* 120715a4 pop esi */
  ESI = (pop32());
  /* 120715a5 pop edi */
  EDI = (pop32());
  /* 120715a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120715a7 ret  */
  ESPCHK(0x12071570u, _esp0);
  ESP += 4; return;
}

