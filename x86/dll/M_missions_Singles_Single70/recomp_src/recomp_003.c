#include "recomp.h"

/* __ui64toa @ 0x11b9fe60 (31 bytes, 15 insns) */
void f_11b9fe60(void) {
  FTRACE(0x11b9fe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9fe60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9fe61 mov ebp, esp */
  EBP = (ESP);
  /* 11b9fe63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9fe65 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9fe68 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fe69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9fe6c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fe6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fe70 push edx */
  push32((uint32_t)(EDX));
  /* 11b9fe71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fe74 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fe75 call 0x11b9fd60 */
  push32(0x11b9fe7au); f_11b9fd60();
  /* 11b9fe7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9fe7d pop ebp */
  EBP = (pop32());
  /* 11b9fe7e ret  */
  ESPCHK(0x11b9fe60u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11b9fe80 (123 bytes, 44 insns) */
void f_11b9fe80(void) {
  FTRACE(0x11b9fe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9fe80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b9fe84 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b9fe8a je 0x11b9fea0 */
  if (C.zf) goto L_11b9fea0;
L_11b9fe8c:;
  /* 11b9fe8c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b9fe8e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b9fe8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b9fe91 je 0x11b9fed3 */
  if (C.zf) goto L_11b9fed3;
  /* 11b9fe93 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b9fe99 jne 0x11b9fe8c */
  if (!C.zf) goto L_11b9fe8c;
  /* 11b9fe9b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b9fea0:;
  /* 11b9fea0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b9fea2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b9fea7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fea9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9feac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9feae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9feb1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b9feb6 je 0x11b9fea0 */
  if (C.zf) goto L_11b9fea0;
  /* 11b9feb8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b9febb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b9febd je 0x11b9fef1 */
  if (C.zf) goto L_11b9fef1;
  /* 11b9febf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b9fec1 je 0x11b9fee7 */
  if (C.zf) goto L_11b9fee7;
  /* 11b9fec3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b9fec8 je 0x11b9fedd */
  if (C.zf) goto L_11b9fedd;
  /* 11b9feca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b9fecf je 0x11b9fed3 */
  if (C.zf) goto L_11b9fed3;
  /* 11b9fed1 jmp 0x11b9fea0 */
  goto L_11b9fea0;
L_11b9fed3:;
  /* 11b9fed3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11b9fed6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b9feda sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fedc ret  */
  ESPCHK(0x11b9fe80u, _esp0);
  ESP += 4; return;
L_11b9fedd:;
  /* 11b9fedd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11b9fee0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b9fee4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fee6 ret  */
  ESPCHK(0x11b9fe80u, _esp0);
  ESP += 4; return;
L_11b9fee7:;
  /* 11b9fee7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11b9feea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b9feee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fef0 ret  */
  ESPCHK(0x11b9fe80u, _esp0);
  ESP += 4; return;
L_11b9fef1:;
  /* 11b9fef1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11b9fef4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b9fef8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fefa ret  */
  ESPCHK(0x11b9fe80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff00 @ 0x11b9ff00 (249 bytes, 93 insns) */
void f_11b9ff00(void) {
  FTRACE(0x11b9ff00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9ff00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9ff01 mov ebp, esp */
  EBP = (ESP);
  /* 11b9ff03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9ff06 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9ff07 push esi */
  push32((uint32_t)(ESI));
  /* 11b9ff08 push edi */
  push32((uint32_t)(EDI));
  /* 11b9ff09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11b9ff0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b9ff0f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11b9ff12 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11b9ff15:;
  /* 11b9ff15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ff19 jne 0x11b9ff39 */
  if (!C.zf) goto L_11b9ff39;
  /* 11b9ff1b push 0x11bc8458 */
  push32((uint32_t)(0x11bc8458u));
  /* 11b9ff20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ff22 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11b9ff24 push 0x11bc844c */
  push32((uint32_t)(0x11bc844cu));
  /* 11b9ff29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9ff2b call 0x11b99390 */
  push32(0x11b9ff30u); f_11b99390();
  /* 11b9ff30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ff33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ff36 jne 0x11b9ff39 */
  if (!C.zf) goto L_11b9ff39;
  /* 11b9ff38 int3  */
  x86_unimpl("int3 @ 0x11b9ff38");
L_11b9ff39:;
  /* 11b9ff39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9ff3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9ff3d jne 0x11b9ff15 */
  if (!C.zf) goto L_11b9ff15;
L_11b9ff3f:;
  /* 11b9ff3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ff43 jne 0x11b9ff63 */
  if (!C.zf) goto L_11b9ff63;
  /* 11b9ff45 push 0x11bc843c */
  push32((uint32_t)(0x11bc843cu));
  /* 11b9ff4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ff4c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11b9ff4e push 0x11bc844c */
  push32((uint32_t)(0x11bc844cu));
  /* 11b9ff53 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9ff55 call 0x11b99390 */
  push32(0x11b9ff5au); f_11b99390();
  /* 11b9ff5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ff5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ff60 jne 0x11b9ff63 */
  if (!C.zf) goto L_11b9ff63;
  /* 11b9ff62 int3  */
  x86_unimpl("int3 @ 0x11b9ff62");
L_11b9ff63:;
  /* 11b9ff63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9ff65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9ff67 jne 0x11b9ff3f */
  if (!C.zf) goto L_11b9ff3f;
  /* 11b9ff69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ff6c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11b9ff73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ff76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ff79 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b9ff7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ff7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ff82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b9ff84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ff87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ff8a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b9ff8d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b9ff90 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ff91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ff94 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ff95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ff98 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ff99 call 0x11b9dd50 */
  push32(0x11b9ff9eu); f_11b9dd50();
  /* 11b9ff9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ffa1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b9ffa4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ffa7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9ffaa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9ffad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ffb0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b9ffb3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ffb6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ffba jl 0x11b9ffde */
  if ((C.sf!=C.of)) goto L_11b9ffde;
  /* 11b9ffbc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ffbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9ffc1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11b9ffc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9ffc6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9ffcc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11b9ffcf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ffd2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9ffd4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ffd7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ffda mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b9ffdc jmp 0x11b9ffef */
  goto L_11b9ffef;
L_11b9ffde:;
  /* 11b9ffde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9ffe1 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ffe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ffe4 call 0x11b9dad0 */
  push32(0x11b9ffe9u); f_11b9dad0();
  /* 11b9ffe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ffec mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11b9ffef:;
  /* 11b9ffef mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b9fff2 pop edi */
  EDI = (pop32());
  /* 11b9fff3 pop esi */
  ESI = (pop32());
  /* 11b9fff4 pop ebx */
  EBX = (pop32());
  /* 11b9fff5 mov esp, ebp */
  ESP = (EBP);
  /* 11b9fff7 pop ebp */
  EBP = (pop32());
  /* 11b9fff8 ret  */
  ESPCHK(0x11b9ff00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010000 @ 0x11ba0000 (7 bytes, 3 insns) */
void f_11ba0000(void) {
  FTRACE(0x11ba0000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0000 push edi */
  push32((uint32_t)(EDI));
  /* 11ba0001 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba0005 jmp 0x11ba0071 */
  jmp_ind(0x11ba0071u); return;
}

/* FUN_10010010 @ 0x11ba0010 (224 bytes, 84 insns) */
void f_11ba0010(void) {
  FTRACE(0x11ba0010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0010 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ba0014 push edi */
  push32((uint32_t)(EDI));
  /* 11ba0015 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ba001b je 0x11ba002c */
  if (C.zf) goto L_11ba002c;
L_11ba001d:;
  /* 11ba001d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11ba001f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ba0020 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ba0022 je 0x11ba005f */
  if (C.zf) goto L_11ba005f;
  /* 11ba0024 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ba002a jne 0x11ba001d */
  if (!C.zf) goto L_11ba001d;
L_11ba002c:;
  /* 11ba002c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ba002e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ba0033 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0035 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0038 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba003a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba003d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ba0042 je 0x11ba002c */
  if (C.zf) goto L_11ba002c;
  /* 11ba0044 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ba0047 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ba0049 je 0x11ba006e */
  if (C.zf) goto L_11ba006e;
  /* 11ba004b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11ba004d je 0x11ba0069 */
  if (C.zf) goto L_11ba0069;
  /* 11ba004f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ba0054 je 0x11ba0064 */
  if (C.zf) goto L_11ba0064;
  /* 11ba0056 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ba005b je 0x11ba005f */
  if (C.zf) goto L_11ba005f;
  /* 11ba005d jmp 0x11ba002c */
  goto L_11ba002c;
L_11ba005f:;
  /* 11ba005f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11ba0062 jmp 0x11ba0071 */
  goto L_11ba0071;
L_11ba0064:;
  /* 11ba0064 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11ba0067 jmp 0x11ba0071 */
  goto L_11ba0071;
L_11ba0069:;
  /* 11ba0069 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11ba006c jmp 0x11ba0071 */
  goto L_11ba0071;
L_11ba006e:;
  /* 11ba006e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11ba0071:;
  /* 11ba0071 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ba0075 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ba007b je 0x11ba0096 */
  if (C.zf) goto L_11ba0096;
L_11ba007d:;
  /* 11ba007d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba007f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ba0080 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ba0082 je 0x11ba00e8 */
  if (C.zf) goto L_11ba00e8;
  /* 11ba0084 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11ba0086 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ba0087 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11ba008d jne 0x11ba007d */
  if (!C.zf) goto L_11ba007d;
  /* 11ba008f jmp 0x11ba0096 */
  goto L_11ba0096;
L_11ba0091:;
  /* 11ba0091 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ba0093 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ba0096:;
  /* 11ba0096 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ba009b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11ba009d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba009f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba00a2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba00a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba00a6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba00a9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ba00ae je 0x11ba0091 */
  if (C.zf) goto L_11ba0091;
  /* 11ba00b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ba00b2 je 0x11ba00e8 */
  if (C.zf) goto L_11ba00e8;
  /* 11ba00b4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11ba00b6 je 0x11ba00df */
  if (C.zf) goto L_11ba00df;
  /* 11ba00b8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ba00be je 0x11ba00d2 */
  if (C.zf) goto L_11ba00d2;
  /* 11ba00c0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ba00c6 je 0x11ba00ca */
  if (C.zf) goto L_11ba00ca;
  /* 11ba00c8 jmp 0x11ba0091 */
  goto L_11ba0091;
L_11ba00ca:;
  /* 11ba00ca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ba00cc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba00d0 pop edi */
  EDI = (pop32());
  /* 11ba00d1 ret  */
  ESPCHK(0x11ba0010u, _esp0);
  ESP += 4; return;
L_11ba00d2:;
  /* 11ba00d2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11ba00d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba00d9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11ba00dd pop edi */
  EDI = (pop32());
  /* 11ba00de ret  */
  ESPCHK(0x11ba0010u, _esp0);
  ESP += 4; return;
L_11ba00df:;
  /* 11ba00df mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11ba00e2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba00e6 pop edi */
  EDI = (pop32());
  /* 11ba00e7 ret  */
  ESPCHK(0x11ba0010u, _esp0);
  ESP += 4; return;
L_11ba00e8:;
  /* 11ba00e8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11ba00ea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba00ee pop edi */
  EDI = (pop32());
  /* 11ba00ef ret  */
  ESPCHK(0x11ba0010u, _esp0);
  ESP += 4; return;
}

/* FUN_100100f0 @ 0x11ba00f0 (243 bytes, 91 insns) */
void f_11ba00f0(void) {
  FTRACE(0x11ba00f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba00f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba00f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba00f3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba00f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba00f7 push esi */
  push32((uint32_t)(ESI));
  /* 11ba00f8 push edi */
  push32((uint32_t)(EDI));
  /* 11ba00f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11ba00fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ba00ff:;
  /* 11ba00ff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0103 jne 0x11ba0123 */
  if (!C.zf) goto L_11ba0123;
  /* 11ba0105 push 0x11bc8458 */
  push32((uint32_t)(0x11bc8458u));
  /* 11ba010a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba010c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11ba010e push 0x11bc929c */
  push32((uint32_t)(0x11bc929cu));
  /* 11ba0113 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba0115 call 0x11b99390 */
  push32(0x11ba011au); f_11b99390();
  /* 11ba011a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba011d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0120 jne 0x11ba0123 */
  if (!C.zf) goto L_11ba0123;
  /* 11ba0122 int3  */
  x86_unimpl("int3 @ 0x11ba0122");
L_11ba0123:;
  /* 11ba0123 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0125 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba0127 jne 0x11ba00ff */
  if (!C.zf) goto L_11ba00ff;
L_11ba0129:;
  /* 11ba0129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba012d jne 0x11ba014d */
  if (!C.zf) goto L_11ba014d;
  /* 11ba012f push 0x11bc843c */
  push32((uint32_t)(0x11bc843cu));
  /* 11ba0134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba0136 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11ba0138 push 0x11bc929c */
  push32((uint32_t)(0x11bc929cu));
  /* 11ba013d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba013f call 0x11b99390 */
  push32(0x11ba0144u); f_11b99390();
  /* 11ba0144 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0147 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba014a jne 0x11ba014d */
  if (!C.zf) goto L_11ba014d;
  /* 11ba014c int3  */
  x86_unimpl("int3 @ 0x11ba014c");
L_11ba014d:;
  /* 11ba014d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba014f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba0151 jne 0x11ba0129 */
  if (!C.zf) goto L_11ba0129;
  /* 11ba0153 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba0156 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11ba015d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba0160 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0163 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ba0166 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba0169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba016c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ba016e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba0171 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0174 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11ba0177 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba017a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba017b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba017e push edx */
  push32((uint32_t)(EDX));
  /* 11ba017f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba0182 push eax */
  push32((uint32_t)(EAX));
  /* 11ba0183 call 0x11b9dd50 */
  push32(0x11ba0188u); f_11b9dd50();
  /* 11ba0188 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba018b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ba018e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba0191 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba0194 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0197 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba019a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ba019d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba01a0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba01a4 jl 0x11ba01c8 */
  if ((C.sf!=C.of)) goto L_11ba01c8;
  /* 11ba01a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba01a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba01ab mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11ba01ae xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba01b0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba01b6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ba01b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba01bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba01be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba01c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba01c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ba01c6 jmp 0x11ba01d9 */
  goto L_11ba01d9;
L_11ba01c8:;
  /* 11ba01c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba01cb push edx */
  push32((uint32_t)(EDX));
  /* 11ba01cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba01ce call 0x11b9dad0 */
  push32(0x11ba01d3u); f_11b9dad0();
  /* 11ba01d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba01d6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11ba01d9:;
  /* 11ba01d9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba01dc pop edi */
  EDI = (pop32());
  /* 11ba01dd pop esi */
  ESI = (pop32());
  /* 11ba01de pop ebx */
  EBX = (pop32());
  /* 11ba01df mov esp, ebp */
  ESP = (EBP);
  /* 11ba01e1 pop ebp */
  EBP = (pop32());
  /* 11ba01e2 ret  */
  ESPCHK(0x11ba00f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100101f0 @ 0x11ba01f0 (47 bytes, 17 insns) */
void f_11ba01f0(void) {
  FTRACE(0x11ba01f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba01f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba01f1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba01f6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11ba01fa jb 0x11ba0210 */
  if (C.cf) goto L_11ba0210;
L_11ba01fc:;
  /* 11ba01fc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0202 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0207 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11ba0209 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba020e jae 0x11ba01fc */
  if (!C.cf) goto L_11ba01fc;
L_11ba0210:;
  /* 11ba0210 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0212 mov eax, esp */
  EAX = (ESP);
  /* 11ba0214 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11ba0216 mov esp, ecx */
  ESP = (ECX);
  /* 11ba0218 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba021a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba021d push eax */
  push32((uint32_t)(EAX));
  /* 11ba021e ret  */
  ESPCHK(0x11ba01f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x11ba0220 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11ba0220(void) {
  FTRACE(0x11ba0220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0220 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0221 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0223 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0226 push esi */
  push32((uint32_t)(ESI));
  /* 11ba0227 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba022b je 0x11ba0233 */
  if (C.zf) goto L_11ba0233;
  /* 11ba022d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0231 jne 0x11ba0238 */
  if (!C.zf) goto L_11ba0238;
L_11ba0233:;
  /* 11ba0233 jmp 0x11ba0408 */
  goto L_11ba0408;
L_11ba0238:;
  /* 11ba0238 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba023c je 0x11ba0254 */
  if (C.zf) goto L_11ba0254;
  /* 11ba023e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0242 je 0x11ba0254 */
  if (C.zf) goto L_11ba0254;
  /* 11ba0244 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0248 je 0x11ba0254 */
  if (C.zf) goto L_11ba0254;
  /* 11ba024a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba024e jne 0x11ba0331 */
  if (!C.zf) goto L_11ba0331;
L_11ba0254:;
  /* 11ba0254 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba0256 call 0x11b9a6d0 */
  push32(0x11ba025bu); f_11b9a6d0();
  /* 11ba025b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba025e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0262 je 0x11ba026a */
  if (C.zf) goto L_11ba026a;
  /* 11ba0264 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0268 jne 0x11ba02af */
  if (!C.zf) goto L_11ba02af;
L_11ba026a:;
  /* 11ba026a cmp dword ptr [0x11bce540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0271 jne 0x11ba02af */
  if (!C.zf) goto L_11ba02af;
  /* 11ba0273 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba0275 push 0x11ba0450 */
  push32((uint32_t)(0x11ba0450u));
  /* 11ba027a call dword ptr [0x11bd0388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0388))), 0x11ba0280u);
  /* 11ba0280 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0283 jne 0x11ba0291 */
  if (!C.zf) goto L_11ba0291;
  /* 11ba0285 mov dword ptr [0x11bce540], 1 */
  w32((uint32_t)(0x11bce540), (0x1u));
  /* 11ba028f jmp 0x11ba02af */
  goto L_11ba02af;
L_11ba0291:;
  /* 11ba0291 call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11ba0297u);
  /* 11ba0297 mov esi, eax */
  ESI = (EAX);
  /* 11ba0299 call 0x11ba6630 */
  push32(0x11ba029eu); f_11ba6630();
  /* 11ba029e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11ba02a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba02a2 call 0x11b9a770 */
  push32(0x11ba02a7u); f_11b9a770();
  /* 11ba02a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba02aa jmp 0x11ba0408 */
  goto L_11ba0408;
L_11ba02af:;
  /* 11ba02af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba02b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba02b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba02b8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba02bb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba02be cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba02c2 ja 0x11ba0322 */
  if ((!C.cf&&!C.zf)) goto L_11ba0322;
  /* 11ba02c4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba02c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba02c9 mov dl, byte ptr [eax + 0x11ba042f] */
  DL = (r8((uint32_t)(EAX + 0x11ba042f)));
  /* 11ba02cf jmp dword ptr [edx*4 + 0x11ba041b] */
  switch (EDX) {
    case 0: goto L_11ba02d6;
    case 1: goto L_11ba0310;
    case 2: goto L_11ba02ea;
    case 3: goto L_11ba02fd;
    case 4: goto L_11ba0322;
    default: x86_unimpl("switch@0x11ba02cf out of table"); return;
  }
L_11ba02d6:;
  /* 11ba02d6 mov ecx, dword ptr [0x11bce530] */
  ECX = (r32((uint32_t)(0x11bce530)));
  /* 11ba02dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba02df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba02e2 mov dword ptr [0x11bce530], edx */
  w32((uint32_t)(0x11bce530), (EDX));
  /* 11ba02e8 jmp 0x11ba0322 */
  goto L_11ba0322;
L_11ba02ea:;
  /* 11ba02ea mov eax, dword ptr [0x11bce534] */
  EAX = (r32((uint32_t)(0x11bce534)));
  /* 11ba02ef mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba02f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba02f5 mov dword ptr [0x11bce534], ecx */
  w32((uint32_t)(0x11bce534), (ECX));
  /* 11ba02fb jmp 0x11ba0322 */
  goto L_11ba0322;
L_11ba02fd:;
  /* 11ba02fd mov edx, dword ptr [0x11bce538] */
  EDX = (r32((uint32_t)(0x11bce538)));
  /* 11ba0303 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ba0306 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0309 mov dword ptr [0x11bce538], eax */
  w32((uint32_t)(0x11bce538), (EAX));
  /* 11ba030e jmp 0x11ba0322 */
  goto L_11ba0322;
L_11ba0310:;
  /* 11ba0310 mov ecx, dword ptr [0x11bce53c] */
  ECX = (r32((uint32_t)(0x11bce53c)));
  /* 11ba0316 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba0319 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba031c mov dword ptr [0x11bce53c], edx */
  w32((uint32_t)(0x11bce53c), (EDX));
L_11ba0322:;
  /* 11ba0322 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba0324 call 0x11b9a770 */
  push32(0x11ba0329u); f_11b9a770();
  /* 11ba0329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba032c jmp 0x11ba0403 */
  goto L_11ba0403;
L_11ba0331:;
  /* 11ba0331 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0335 je 0x11ba0348 */
  if (C.zf) goto L_11ba0348;
  /* 11ba0337 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba033b je 0x11ba0348 */
  if (C.zf) goto L_11ba0348;
  /* 11ba033d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0341 je 0x11ba0348 */
  if (C.zf) goto L_11ba0348;
  /* 11ba0343 jmp 0x11ba0408 */
  goto L_11ba0408;
L_11ba0348:;
  /* 11ba0348 call 0x11b9d4d0 */
  push32(0x11ba034du); f_11b9d4d0();
  /* 11ba034d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba0350 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0353 cmp dword ptr [eax + 0x50], 0x11bcc260 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11bcc260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba035a jne 0x11ba03a5 */
  if (!C.zf) goto L_11ba03a5;
  /* 11ba035c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11ba0361 push 0x11bc92a8 */
  push32((uint32_t)(0x11bc92a8u));
  /* 11ba0366 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba0368 mov ecx, dword ptr [0x11bcc2e0] */
  ECX = (r32((uint32_t)(0x11bcc2e0)));
  /* 11ba036e push ecx */
  push32((uint32_t)(ECX));
  /* 11ba036f call 0x11b9a7d0 */
  push32(0x11ba0374u); f_11b9a7d0();
  /* 11ba0374 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0377 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba037a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11ba037d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0380 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0384 je 0x11ba03a3 */
  if (C.zf) goto L_11ba03a3;
  /* 11ba0386 mov ecx, dword ptr [0x11bcc2e0] */
  ECX = (r32((uint32_t)(0x11bcc2e0)));
  /* 11ba038c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba038d push 0x11bcc260 */
  push32((uint32_t)(0x11bcc260u));
  /* 11ba0392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0395 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11ba0398 push eax */
  push32((uint32_t)(EAX));
  /* 11ba0399 call 0x11ba6240 */
  push32(0x11ba039eu); f_11ba6240();
  /* 11ba039e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba03a1 jmp 0x11ba03a5 */
  goto L_11ba03a5;
L_11ba03a3:;
  /* 11ba03a3 jmp 0x11ba0408 */
  goto L_11ba0408;
L_11ba03a5:;
  /* 11ba03a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba03a8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11ba03ab push edx */
  push32((uint32_t)(EDX));
  /* 11ba03ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba03af push eax */
  push32((uint32_t)(EAX));
  /* 11ba03b0 call 0x11ba0730 */
  push32(0x11ba03b5u); f_11ba0730();
  /* 11ba03b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba03b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba03bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba03bf jne 0x11ba03c3 */
  if (!C.zf) goto L_11ba03c3;
  /* 11ba03c1 jmp 0x11ba0408 */
  goto L_11ba0408;
L_11ba03c3:;
  /* 11ba03c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba03c6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba03c9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ba03cc:;
  /* 11ba03cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba03cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba03d2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba03d5 jne 0x11ba0403 */
  if (!C.zf) goto L_11ba0403;
  /* 11ba03d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba03da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba03dd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ba03e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba03e3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba03e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba03e9 mov edx, dword ptr [0x11bcc2e4] */
  EDX = (r32((uint32_t)(0x11bcc2e4)));
  /* 11ba03ef imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba03f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba03f5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11ba03f8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba03fa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba03fd jb 0x11ba0401 */
  if (C.cf) goto L_11ba0401;
  /* 11ba03ff jmp 0x11ba0403 */
  goto L_11ba0403;
L_11ba0401:;
  /* 11ba0401 jmp 0x11ba03cc */
  goto L_11ba03cc;
L_11ba0403:;
  /* 11ba0403 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba0406 jmp 0x11ba0416 */
  goto L_11ba0416;
L_11ba0408:;
  /* 11ba0408 call 0x11ba6620 */
  push32(0x11ba040du); f_11ba6620();
  /* 11ba040d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11ba0413 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ba0416:;
  /* 11ba0416 pop esi */
  ESI = (pop32());
  /* 11ba0417 mov esp, ebp */
  ESP = (EBP);
  /* 11ba0419 pop ebp */
  EBP = (pop32());
  /* 11ba041a ret  */
  ESPCHK(0x11ba0220u, _esp0);
  ESP += 4; return;
}

/* FUN_10010450 @ 0x11ba0450 (146 bytes, 45 insns) */
void f_11ba0450(void) {
  FTRACE(0x11ba0450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0450 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0451 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0453 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0456 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba0458 call 0x11b9a6d0 */
  push32(0x11ba045du); f_11b9a6d0();
  /* 11ba045d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0460 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0464 jne 0x11ba047e */
  if (!C.zf) goto L_11ba047e;
  /* 11ba0466 mov dword ptr [ebp - 8], 0x11bce530 */
  w32((uint32_t)(EBP + -0x8), (0x11bce530u));
  /* 11ba046d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba0470 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba0472 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba0475 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ba047c jmp 0x11ba0494 */
  goto L_11ba0494;
L_11ba047e:;
  /* 11ba047e mov dword ptr [ebp - 8], 0x11bce534 */
  w32((uint32_t)(EBP + -0x8), (0x11bce534u));
  /* 11ba0485 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba0488 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba048a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba048d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11ba0494:;
  /* 11ba0494 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0498 jne 0x11ba04a8 */
  if (!C.zf) goto L_11ba04a8;
  /* 11ba049a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba049c call 0x11b9a770 */
  push32(0x11ba04a1u); f_11b9a770();
  /* 11ba04a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba04a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba04a6 jmp 0x11ba04dc */
  goto L_11ba04dc;
L_11ba04a8:;
  /* 11ba04a8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba04ac je 0x11ba04cd */
  if (C.zf) goto L_11ba04cd;
  /* 11ba04ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba04b1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11ba04b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba04b9 call 0x11b9a770 */
  push32(0x11ba04beu); f_11b9a770();
  /* 11ba04be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba04c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba04c4 push edx */
  push32((uint32_t)(EDX));
  /* 11ba04c5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11ba04c8u);
  /* 11ba04c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba04cb jmp 0x11ba04d7 */
  goto L_11ba04d7;
L_11ba04cd:;
  /* 11ba04cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba04cf call 0x11b9a770 */
  push32(0x11ba04d4u); f_11b9a770();
  /* 11ba04d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba04d7:;
  /* 11ba04d7 mov eax, 1 */
  EAX = (0x1u);
L_11ba04dc:;
  /* 11ba04dc mov esp, ebp */
  ESP = (EBP);
  /* 11ba04de pop ebp */
  EBP = (pop32());
  /* 11ba04df ret 4 */
  ESPCHK(0x11ba0450u, _esp0);
  ESP += 8; return;
}

/* FUN_100104f0 @ 0x11ba04f0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11ba04f0(void) {
  FTRACE(0x11ba04f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba04f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba04f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba04f3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba04f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba04fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0500 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ba0503 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba0506 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0509 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ba050c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0510 ja 0x11ba05be */
  if ((!C.cf&&!C.zf)) goto L_11ba05be;
  /* 11ba0516 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba0519 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba051b mov dl, byte ptr [eax + 0x11ba0712] */
  DL = (r8((uint32_t)(EAX + 0x11ba0712)));
  /* 11ba0521 jmp dword ptr [edx*4 + 0x11ba06fa] */
  switch (EDX) {
    case 0: goto L_11ba0528;
    case 1: goto L_11ba0593;
    case 2: goto L_11ba0579;
    case 3: goto L_11ba0545;
    case 4: goto L_11ba055f;
    case 5: goto L_11ba05be;
    default: x86_unimpl("switch@0x11ba0521 out of table"); return;
  }
L_11ba0528:;
  /* 11ba0528 mov dword ptr [ebp - 0x18], 0x11bce530 */
  w32((uint32_t)(EBP + -0x18), (0x11bce530u));
  /* 11ba052f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba0532 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba0534 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba0537 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba053a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba053d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba0540 jmp 0x11ba05c6 */
  goto L_11ba05c6;
L_11ba0545:;
  /* 11ba0545 mov dword ptr [ebp - 0x18], 0x11bce534 */
  w32((uint32_t)(EBP + -0x18), (0x11bce534u));
  /* 11ba054c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba054f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba0551 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba0554 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba0557 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba055a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba055d jmp 0x11ba05c6 */
  goto L_11ba05c6;
L_11ba055f:;
  /* 11ba055f mov dword ptr [ebp - 0x18], 0x11bce538 */
  w32((uint32_t)(EBP + -0x18), (0x11bce538u));
  /* 11ba0566 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba0569 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba056b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba056e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba0571 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0574 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba0577 jmp 0x11ba05c6 */
  goto L_11ba05c6;
L_11ba0579:;
  /* 11ba0579 mov dword ptr [ebp - 0x18], 0x11bce53c */
  w32((uint32_t)(EBP + -0x18), (0x11bce53cu));
  /* 11ba0580 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba0583 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba0585 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba0588 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba058b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba058e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba0591 jmp 0x11ba05c6 */
  goto L_11ba05c6;
L_11ba0593:;
  /* 11ba0593 call 0x11b9d4d0 */
  push32(0x11ba0598u); f_11b9d4d0();
  /* 11ba0598 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba059b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba059e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11ba05a1 push edx */
  push32((uint32_t)(EDX));
  /* 11ba05a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba05a5 push eax */
  push32((uint32_t)(EAX));
  /* 11ba05a6 call 0x11ba0730 */
  push32(0x11ba05abu); f_11ba0730();
  /* 11ba05ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba05ae add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba05b1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba05b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba05b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba05b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba05bc jmp 0x11ba05c6 */
  goto L_11ba05c6;
L_11ba05be:;
  /* 11ba05be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba05c1 jmp 0x11ba06f6 */
  goto L_11ba06f6;
L_11ba05c6:;
  /* 11ba05c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba05ca je 0x11ba05d6 */
  if (C.zf) goto L_11ba05d6;
  /* 11ba05cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba05ce call 0x11b9a6d0 */
  push32(0x11ba05d3u); f_11b9a6d0();
  /* 11ba05d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba05d6:;
  /* 11ba05d6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba05da jne 0x11ba05f3 */
  if (!C.zf) goto L_11ba05f3;
  /* 11ba05dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba05e0 je 0x11ba05ec */
  if (C.zf) goto L_11ba05ec;
  /* 11ba05e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba05e4 call 0x11b9a770 */
  push32(0x11ba05e9u); f_11b9a770();
  /* 11ba05e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba05ec:;
  /* 11ba05ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba05ee jmp 0x11ba06f6 */
  goto L_11ba06f6;
L_11ba05f3:;
  /* 11ba05f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba05f7 jne 0x11ba0610 */
  if (!C.zf) goto L_11ba0610;
  /* 11ba05f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba05fd je 0x11ba0609 */
  if (C.zf) goto L_11ba0609;
  /* 11ba05ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba0601 call 0x11b9a770 */
  push32(0x11ba0606u); f_11b9a770();
  /* 11ba0606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba0609:;
  /* 11ba0609 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ba060b call 0x11b9d840 */
  push32(0x11ba0610u); f_11b9d840();
L_11ba0610:;
  /* 11ba0610 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0614 je 0x11ba0622 */
  if (C.zf) goto L_11ba0622;
  /* 11ba0616 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba061a je 0x11ba0622 */
  if (C.zf) goto L_11ba0622;
  /* 11ba061c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0620 jne 0x11ba064e */
  if (!C.zf) goto L_11ba064e;
L_11ba0622:;
  /* 11ba0622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0625 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11ba0628 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ba062b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba062e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11ba0635 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0639 jne 0x11ba064e */
  if (!C.zf) goto L_11ba064e;
  /* 11ba063b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba063e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11ba0641 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba0644 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0647 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11ba064e:;
  /* 11ba064e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0652 jne 0x11ba0690 */
  if (!C.zf) goto L_11ba0690;
  /* 11ba0654 mov eax, dword ptr [0x11bcc2d8] */
  EAX = (r32((uint32_t)(0x11bcc2d8)));
  /* 11ba0659 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba065c jmp 0x11ba0667 */
  goto L_11ba0667;
L_11ba065e:;
  /* 11ba065e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba0661 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0664 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ba0667:;
  /* 11ba0667 mov edx, dword ptr [0x11bcc2d8] */
  EDX = (r32((uint32_t)(0x11bcc2d8)));
  /* 11ba066d add edx, dword ptr [0x11bcc2dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bcc2dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0673 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0676 jge 0x11ba068e */
  if ((C.sf==C.of)) goto L_11ba068e;
  /* 11ba0678 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba067b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba067e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0681 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11ba0684 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11ba068c jmp 0x11ba065e */
  goto L_11ba065e;
L_11ba068e:;
  /* 11ba068e jmp 0x11ba0699 */
  goto L_11ba0699;
L_11ba0690:;
  /* 11ba0690 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba0693 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11ba0699:;
  /* 11ba0699 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba069d je 0x11ba06a9 */
  if (C.zf) goto L_11ba06a9;
  /* 11ba069f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba06a1 call 0x11b9a770 */
  push32(0x11ba06a6u); f_11b9a770();
  /* 11ba06a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba06a9:;
  /* 11ba06a9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba06ad jne 0x11ba06c0 */
  if (!C.zf) goto L_11ba06c0;
  /* 11ba06af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba06b2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11ba06b5 push edx */
  push32((uint32_t)(EDX));
  /* 11ba06b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ba06b8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11ba06bbu);
  /* 11ba06bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba06be jmp 0x11ba06ca */
  goto L_11ba06ca;
L_11ba06c0:;
  /* 11ba06c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba06c3 push eax */
  push32((uint32_t)(EAX));
  /* 11ba06c4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11ba06c7u);
  /* 11ba06c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba06ca:;
  /* 11ba06ca cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba06ce je 0x11ba06dc */
  if (C.zf) goto L_11ba06dc;
  /* 11ba06d0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba06d4 je 0x11ba06dc */
  if (C.zf) goto L_11ba06dc;
  /* 11ba06d6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba06da jne 0x11ba06f4 */
  if (!C.zf) goto L_11ba06f4;
L_11ba06dc:;
  /* 11ba06dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba06df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba06e2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11ba06e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba06e9 jne 0x11ba06f4 */
  if (!C.zf) goto L_11ba06f4;
  /* 11ba06eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba06ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba06f1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11ba06f4:;
  /* 11ba06f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba06f6:;
  /* 11ba06f6 mov esp, ebp */
  ESP = (EBP);
  /* 11ba06f8 pop ebp */
  EBP = (pop32());
  /* 11ba06f9 ret  */
  ESPCHK(0x11ba04f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010730 @ 0x11ba0730 (91 bytes, 35 insns) */
void f_11ba0730(void) {
  FTRACE(0x11ba0730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0730 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0731 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0733 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0734 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0737 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba073a:;
  /* 11ba073a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba073d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba0740 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0743 je 0x11ba0763 */
  if (C.zf) goto L_11ba0763;
  /* 11ba0745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0748 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba074b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba074e mov ecx, dword ptr [0x11bcc2e4] */
  ECX = (r32((uint32_t)(0x11bcc2e4)));
  /* 11ba0754 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba0757 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba075a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba075c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba075f jae 0x11ba0763 */
  if (!C.cf) goto L_11ba0763;
  /* 11ba0761 jmp 0x11ba073a */
  goto L_11ba073a;
L_11ba0763:;
  /* 11ba0763 mov eax, dword ptr [0x11bcc2e4] */
  EAX = (r32((uint32_t)(0x11bcc2e4)));
  /* 11ba0768 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba076b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba076e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0770 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0773 jae 0x11ba0785 */
  if (!C.cf) goto L_11ba0785;
  /* 11ba0775 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0778 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba077b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba077e jne 0x11ba0785 */
  if (!C.zf) goto L_11ba0785;
  /* 11ba0780 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0783 jmp 0x11ba0787 */
  goto L_11ba0787;
L_11ba0785:;
  /* 11ba0785 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba0787:;
  /* 11ba0787 mov esp, ebp */
  ESP = (EBP);
  /* 11ba0789 pop ebp */
  EBP = (pop32());
  /* 11ba078a ret  */
  ESPCHK(0x11ba0730u, _esp0);
  ESP += 4; return;
}

/* FUN_10010790 @ 0x11ba0790 (13 bytes, 6 insns) */
void f_11ba0790(void) {
  FTRACE(0x11ba0790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0790 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0791 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0793 call 0x11b9d4d0 */
  push32(0x11ba0798u); f_11b9d4d0();
  /* 11ba0798 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba079b pop ebp */
  EBP = (pop32());
  /* 11ba079c ret  */
  ESPCHK(0x11ba0790u, _esp0);
  ESP += 4; return;
}

/* FUN_100107a0 @ 0x11ba07a0 (13 bytes, 6 insns) */
void f_11ba07a0(void) {
  FTRACE(0x11ba07a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba07a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba07a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba07a3 call 0x11b9d4d0 */
  push32(0x11ba07a8u); f_11b9d4d0();
  /* 11ba07a8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba07ab pop ebp */
  EBP = (pop32());
  /* 11ba07ac ret  */
  ESPCHK(0x11ba07a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107b0 @ 0x11ba07b0 (187 bytes, 54 insns) */
void f_11ba07b0(void) {
  FTRACE(0x11ba07b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba07b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba07b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba07b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba07b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba07bd cmp dword ptr [0x11bce544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba07c4 jne 0x11ba0823 */
  if (!C.zf) goto L_11ba0823;
  /* 11ba07c6 push 0x11bc8534 */
  push32((uint32_t)(0x11bc8534u));
  /* 11ba07cb call dword ptr [0x11bd0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0308))), 0x11ba07d1u);
  /* 11ba07d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba07d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba07d8 je 0x11ba07f7 */
  if (C.zf) goto L_11ba07f7;
  /* 11ba07da push 0x11bc92d8 */
  push32((uint32_t)(0x11bc92d8u));
  /* 11ba07df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba07e2 push eax */
  push32((uint32_t)(EAX));
  /* 11ba07e3 call dword ptr [0x11bd030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd030c))), 0x11ba07e9u);
  /* 11ba07e9 mov dword ptr [0x11bce544], eax */
  w32((uint32_t)(0x11bce544), (EAX));
  /* 11ba07ee cmp dword ptr [0x11bce544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba07f5 jne 0x11ba07fb */
  if (!C.zf) goto L_11ba07fb;
L_11ba07f7:;
  /* 11ba07f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba07f9 jmp 0x11ba0867 */
  goto L_11ba0867;
L_11ba07fb:;
  /* 11ba07fb push 0x11bc92c8 */
  push32((uint32_t)(0x11bc92c8u));
  /* 11ba0800 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba0803 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0804 call dword ptr [0x11bd030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd030c))), 0x11ba080au);
  /* 11ba080a mov dword ptr [0x11bce548], eax */
  w32((uint32_t)(0x11bce548), (EAX));
  /* 11ba080f push 0x11bc92b4 */
  push32((uint32_t)(0x11bc92b4u));
  /* 11ba0814 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba0817 push edx */
  push32((uint32_t)(EDX));
  /* 11ba0818 call dword ptr [0x11bd030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd030c))), 0x11ba081eu);
  /* 11ba081e mov dword ptr [0x11bce54c], eax */
  w32((uint32_t)(0x11bce54c), (EAX));
L_11ba0823:;
  /* 11ba0823 cmp dword ptr [0x11bce548], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce548))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba082a je 0x11ba0835 */
  if (C.zf) goto L_11ba0835;
  /* 11ba082c call dword ptr [0x11bce548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce548))), 0x11ba0832u);
  /* 11ba0832 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba0835:;
  /* 11ba0835 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0839 je 0x11ba0851 */
  if (C.zf) goto L_11ba0851;
  /* 11ba083b cmp dword ptr [0x11bce54c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce54c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0842 je 0x11ba0851 */
  if (C.zf) goto L_11ba0851;
  /* 11ba0844 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0847 push eax */
  push32((uint32_t)(EAX));
  /* 11ba0848 call dword ptr [0x11bce54c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce54c))), 0x11ba084eu);
  /* 11ba084e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba0851:;
  /* 11ba0851 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba0854 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0855 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0858 push edx */
  push32((uint32_t)(EDX));
  /* 11ba0859 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba085c push eax */
  push32((uint32_t)(EAX));
  /* 11ba085d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0860 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0861 call dword ptr [0x11bce544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce544))), 0x11ba0867u);
L_11ba0867:;
  /* 11ba0867 mov esp, ebp */
  ESP = (EBP);
  /* 11ba0869 pop ebp */
  EBP = (pop32());
  /* 11ba086a ret  */
  ESPCHK(0x11ba07b0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11ba0870 (254 bytes, 109 insns) */
void f_11ba0870(void) {
  FTRACE(0x11ba0870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0870 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ba0874 push edi */
  push32((uint32_t)(EDI));
  /* 11ba0875 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba0877 je 0x11ba08f3 */
  if (C.zf) goto L_11ba08f3;
  /* 11ba0879 push esi */
  push32((uint32_t)(ESI));
  /* 11ba087a push ebx */
  push32((uint32_t)(EBX));
  /* 11ba087b mov ebx, ecx */
  EBX = (ECX);
  /* 11ba087d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11ba0881 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11ba0887 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11ba088b jne 0x11ba0894 */
  if (!C.zf) goto L_11ba0894;
  /* 11ba088d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba0890 jne 0x11ba0901 */
  if (!C.zf) goto L_11ba0901;
  /* 11ba0892 jmp 0x11ba08b5 */
  goto L_11ba08b5;
L_11ba0894:;
  /* 11ba0894 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba0896 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ba0897 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba0899 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ba089a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ba089b je 0x11ba08c2 */
  if (C.zf) goto L_11ba08c2;
  /* 11ba089d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ba089f je 0x11ba08ca */
  if (C.zf) goto L_11ba08ca;
  /* 11ba08a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11ba08a7 jne 0x11ba0894 */
  if (!C.zf) goto L_11ba0894;
  /* 11ba08a9 mov ebx, ecx */
  EBX = (ECX);
  /* 11ba08ab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba08ae jne 0x11ba0901 */
  if (!C.zf) goto L_11ba0901;
L_11ba08b0:;
  /* 11ba08b0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11ba08b3 je 0x11ba08c2 */
  if (C.zf) goto L_11ba08c2;
L_11ba08b5:;
  /* 11ba08b5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba08b7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ba08b8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba08ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ba08bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ba08bd je 0x11ba08ee */
  if (C.zf) goto L_11ba08ee;
  /* 11ba08bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ba08c0 jne 0x11ba08b5 */
  if (!C.zf) goto L_11ba08b5;
L_11ba08c2:;
  /* 11ba08c2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ba08c6 pop ebx */
  EBX = (pop32());
  /* 11ba08c7 pop esi */
  ESI = (pop32());
  /* 11ba08c8 pop edi */
  EDI = (pop32());
  /* 11ba08c9 ret  */
  ESPCHK(0x11ba0870u, _esp0);
  ESP += 4; return;
L_11ba08ca:;
  /* 11ba08ca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ba08d0 je 0x11ba08e4 */
  if (C.zf) goto L_11ba08e4;
L_11ba08d2:;
  /* 11ba08d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba08d4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ba08d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ba08d6 je 0x11ba0966 */
  if (C.zf) goto L_11ba0966;
  /* 11ba08dc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ba08e2 jne 0x11ba08d2 */
  if (!C.zf) goto L_11ba08d2;
L_11ba08e4:;
  /* 11ba08e4 mov ebx, ecx */
  EBX = (ECX);
  /* 11ba08e6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba08e9 jne 0x11ba0957 */
  if (!C.zf) goto L_11ba0957;
L_11ba08eb:;
  /* 11ba08eb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba08ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11ba08ee:;
  /* 11ba08ee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11ba08ef jne 0x11ba08eb */
  if (!C.zf) goto L_11ba08eb;
  /* 11ba08f1 pop ebx */
  EBX = (pop32());
  /* 11ba08f2 pop esi */
  ESI = (pop32());
L_11ba08f3:;
  /* 11ba08f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba08f7 pop edi */
  EDI = (pop32());
  /* 11ba08f8 ret  */
  ESPCHK(0x11ba0870u, _esp0);
  ESP += 4; return;
L_11ba08f9:;
  /* 11ba08f9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ba08fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba08fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ba08ff je 0x11ba08b0 */
  if (C.zf) goto L_11ba08b0;
L_11ba0901:;
  /* 11ba0901 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11ba0906 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11ba0908 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba090a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba090d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba090f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11ba0911 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0914 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11ba0919 je 0x11ba08f9 */
  if (C.zf) goto L_11ba08f9;
  /* 11ba091b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11ba091d je 0x11ba094b */
  if (C.zf) goto L_11ba094b;
  /* 11ba091f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11ba0921 je 0x11ba0941 */
  if (C.zf) goto L_11ba0941;
  /* 11ba0923 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11ba0929 je 0x11ba0937 */
  if (C.zf) goto L_11ba0937;
  /* 11ba092b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11ba0931 jne 0x11ba08f9 */
  if (!C.zf) goto L_11ba08f9;
  /* 11ba0933 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ba0935 jmp 0x11ba094f */
  goto L_11ba094f;
L_11ba0937:;
  /* 11ba0937 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba093d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ba093f jmp 0x11ba094f */
  goto L_11ba094f;
L_11ba0941:;
  /* 11ba0941 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0947 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11ba0949 jmp 0x11ba094f */
  goto L_11ba094f;
L_11ba094b:;
  /* 11ba094b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba094d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11ba094f:;
  /* 11ba094f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0954 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ba0955 je 0x11ba0961 */
  if (C.zf) goto L_11ba0961;
L_11ba0957:;
  /* 11ba0957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba0959:;
  /* 11ba0959 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11ba095b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba095e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ba095f jne 0x11ba0959 */
  if (!C.zf) goto L_11ba0959;
L_11ba0961:;
  /* 11ba0961 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11ba0964 jne 0x11ba08eb */
  if (!C.zf) goto L_11ba08eb;
L_11ba0966:;
  /* 11ba0966 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ba096a pop ebx */
  EBX = (pop32());
  /* 11ba096b pop esi */
  ESI = (pop32());
  /* 11ba096c pop edi */
  EDI = (pop32());
  /* 11ba096d ret  */
  ESPCHK(0x11ba0870u, _esp0);
  ESP += 4; return;
}

/* FUN_10010970 @ 0x11ba0970 (348 bytes, 114 insns) [1 switch table(s)] */
void f_11ba0970(void) {
  FTRACE(0x11ba0970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0970 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0971 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0973 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0976 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba0979 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba097b mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11ba097e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba0981 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11ba0984 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ba0987 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba098a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba098c mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 11ba098f mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ba0992 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0995 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 11ba0998 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba099c ja 0x11ba09de */
  if ((!C.cf&&!C.zf)) goto L_11ba09de;
  /* 11ba099e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11ba09a1 jmp dword ptr [eax*4 + 0x11ba0acc] */
  switch (EAX) {
    case 0: goto L_11ba09a8;
    case 1: goto L_11ba09c3;
    case 2: goto L_11ba09b1;
    case 3: goto L_11ba09ba;
    case 4: goto L_11ba09a8;
    case 5: goto L_11ba09de;
    case 6: goto L_11ba09d5;
    case 7: goto L_11ba09cc;
    default: x86_unimpl("switch@0x11ba09a1 out of table"); return;
  }
L_11ba09a8:;
  /* 11ba09a8 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 11ba09af jmp 0x11ba09e5 */
  goto L_11ba09e5;
L_11ba09b1:;
  /* 11ba09b1 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 11ba09b8 jmp 0x11ba09e5 */
  goto L_11ba09e5;
L_11ba09ba:;
  /* 11ba09ba mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 11ba09c1 jmp 0x11ba09e5 */
  goto L_11ba09e5;
L_11ba09c3:;
  /* 11ba09c3 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11ba09ca jmp 0x11ba09e5 */
  goto L_11ba09e5;
L_11ba09cc:;
  /* 11ba09cc mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 11ba09d3 jmp 0x11ba09e5 */
  goto L_11ba09e5;
L_11ba09d5:;
  /* 11ba09d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba09d8 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_11ba09de:;
  /* 11ba09de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ba09e5:;
  /* 11ba09e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba09e9 je 0x11ba0a7a */
  if (C.zf) goto L_11ba0a7a;
  /* 11ba09ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba09f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba09f4 push eax */
  push32((uint32_t)(EAX));
  /* 11ba09f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba09f8 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba09fb push ecx */
  push32((uint32_t)(ECX));
  /* 11ba09fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba09ff push edx */
  push32((uint32_t)(EDX));
  /* 11ba0a00 call 0x11ba6d70 */
  push32(0x11ba0a05u); f_11ba6d70();
  /* 11ba0a05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0a0a jne 0x11ba0a7a */
  if (!C.zf) goto L_11ba0a7a;
  /* 11ba0a0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0a0f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 11ba0a12 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0a16 je 0x11ba0a26 */
  if (C.zf) goto L_11ba0a26;
  /* 11ba0a18 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0a1c je 0x11ba0a26 */
  if (C.zf) goto L_11ba0a26;
  /* 11ba0a1e cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0a22 je 0x11ba0a26 */
  if (C.zf) goto L_11ba0a26;
  /* 11ba0a24 jmp 0x11ba0a4c */
  goto L_11ba0a4c;
L_11ba0a26:;
  /* 11ba0a26 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba0a29 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0a2c mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11ba0a2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba0a32 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0a35 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0a38 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11ba0a3b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0a3e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba0a41 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 11ba0a44 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ba0a47 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 11ba0a4a jmp 0x11ba0a54 */
  goto L_11ba0a54;
L_11ba0a4c:;
  /* 11ba0a4c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba0a4f and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11ba0a51 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11ba0a54:;
  /* 11ba0a54 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0a57 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0a5a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0a5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0a5e add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0a61 push edx */
  push32((uint32_t)(EDX));
  /* 11ba0a62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0a65 push eax */
  push32((uint32_t)(EAX));
  /* 11ba0a66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0a69 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0a6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba0a6d push edx */
  push32((uint32_t)(EDX));
  /* 11ba0a6e lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 11ba0a71 push eax */
  push32((uint32_t)(EAX));
  /* 11ba0a72 call 0x11ba68a0 */
  push32(0x11ba0a77u); f_11ba68a0();
  /* 11ba0a77 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba0a7a:;
  /* 11ba0a7a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ba0a7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba0a82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba0a84 push edx */
  push32((uint32_t)(EDX));
  /* 11ba0a85 call 0x11ba72e0 */
  push32(0x11ba0a8au); f_11ba72e0();
  /* 11ba0a8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0a8d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba0a94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0a97 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0a9a je 0x11ba0ab4 */
  if (C.zf) goto L_11ba0ab4;
  /* 11ba0a9c cmp dword ptr [0x11bcc9d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc9d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0aa3 jne 0x11ba0ab4 */
  if (!C.zf) goto L_11ba0ab4;
  /* 11ba0aa5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0aa9 call 0x11ba7290 */
  push32(0x11ba0aaeu); f_11ba7290();
  /* 11ba0aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0ab1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ba0ab4:;
  /* 11ba0ab4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0ab8 jne 0x11ba0ac8 */
  if (!C.zf) goto L_11ba0ac8;
  /* 11ba0aba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0abd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba0abf push eax */
  push32((uint32_t)(EAX));
  /* 11ba0ac0 call 0x11ba7190 */
  push32(0x11ba0ac5u); f_11ba7190();
  /* 11ba0ac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba0ac8:;
  /* 11ba0ac8 mov esp, ebp */
  ESP = (EBP);
  /* 11ba0aca pop ebp */
  EBP = (pop32());
  /* 11ba0acb ret  */
  ESPCHK(0x11ba0970u, _esp0);
  ESP += 4; return;
}

/* FUN_10010af0 @ 0x11ba0af0 (31 bytes, 18 insns) */
void f_11ba0af0(void) {
  FTRACE(0x11ba0af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0af1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0af4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba0af5 push esi */
  push32((uint32_t)(ESI));
  /* 11ba0af6 push edi */
  push32((uint32_t)(EDI));
  /* 11ba0af7 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ba0af8 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11ba0afb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0aff push eax */
  push32((uint32_t)(EAX));
  /* 11ba0b00 call 0x11ba0ee0 */
  push32(0x11ba0b05u); f_11ba0ee0();
  /* 11ba0b05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0b08 pop edi */
  EDI = (pop32());
  /* 11ba0b09 pop esi */
  ESI = (pop32());
  /* 11ba0b0a pop ebx */
  EBX = (pop32());
  /* 11ba0b0b mov esp, ebp */
  ESP = (EBP);
  /* 11ba0b0d pop ebp */
  EBP = (pop32());
  /* 11ba0b0e ret  */
  ESPCHK(0x11ba0af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b10 @ 0x11ba0b10 (32 bytes, 18 insns) */
void f_11ba0b10(void) {
  FTRACE(0x11ba0b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0b11 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0b14 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba0b15 push esi */
  push32((uint32_t)(ESI));
  /* 11ba0b16 push edi */
  push32((uint32_t)(EDI));
  /* 11ba0b17 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11ba0b1a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11ba0b1c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0b20 push eax */
  push32((uint32_t)(EAX));
  /* 11ba0b21 call 0x11ba0ee0 */
  push32(0x11ba0b26u); f_11ba0ee0();
  /* 11ba0b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0b29 pop edi */
  EDI = (pop32());
  /* 11ba0b2a pop esi */
  ESI = (pop32());
  /* 11ba0b2b pop ebx */
  EBX = (pop32());
  /* 11ba0b2c mov esp, ebp */
  ESP = (EBP);
  /* 11ba0b2e pop ebp */
  EBP = (pop32());
  /* 11ba0b2f ret  */
  ESPCHK(0x11ba0b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b30 @ 0x11ba0b30 (79 bytes, 34 insns) */
void f_11ba0b30(void) {
  FTRACE(0x11ba0b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0b31 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0b33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0b36 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba0b37 push esi */
  push32((uint32_t)(ESI));
  /* 11ba0b38 push edi */
  push32((uint32_t)(EDI));
  /* 11ba0b39 wait  */
  /* wait (no observable integer/reg state) */
  /* 11ba0b3a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 11ba0b3d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 11ba0b41 push eax */
  push32((uint32_t)(EAX));
  /* 11ba0b42 call 0x11ba0c00 */
  push32(0x11ba0b47u); f_11ba0c00();
  /* 11ba0b47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0b4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba0b4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0b50 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0b53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0b56 not edx */
  EDX = (~(EDX));
  /* 11ba0b58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba0b5b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0b5d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0b5f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba0b62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba0b65 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0b66 call 0x11ba0d80 */
  push32(0x11ba0b6bu); f_11ba0d80();
  /* 11ba0b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0b6e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ba0b72 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11ba0b75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba0b78 pop edi */
  EDI = (pop32());
  /* 11ba0b79 pop esi */
  ESI = (pop32());
  /* 11ba0b7a pop ebx */
  EBX = (pop32());
  /* 11ba0b7b mov esp, ebp */
  ESP = (EBP);
  /* 11ba0b7d pop ebp */
  EBP = (pop32());
  /* 11ba0b7e ret  */
  ESPCHK(0x11ba0b30u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x11ba0b80 (26 bytes, 11 insns) */
void f_11ba0b80(void) {
  FTRACE(0x11ba0b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0b81 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0b83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba0b86 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0b8b push eax */
  push32((uint32_t)(EAX));
  /* 11ba0b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0b8f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0b90 call 0x11ba0b30 */
  push32(0x11ba0b95u); f_11ba0b30();
  /* 11ba0b95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0b98 pop ebp */
  EBP = (pop32());
  /* 11ba0b99 ret  */
  ESPCHK(0x11ba0b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ba0 @ 0x11ba0ba0 (88 bytes, 33 insns) */
void f_11ba0ba0(void) {
  FTRACE(0x11ba0ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0ba3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0ba6 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba0ba7 push esi */
  push32((uint32_t)(ESI));
  /* 11ba0ba8 push edi */
  push32((uint32_t)(EDI));
  /* 11ba0ba9 call 0x11ba07a0 */
  push32(0x11ba0baeu); f_11ba07a0();
  /* 11ba0bae mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11ba0bb0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba0bb3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 11ba0bb5 call 0x11b99df0 */
  push32(0x11ba0bbau); f_11b99df0();
  /* 11ba0bba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0bbe je 0x11ba0bf1 */
  if (C.zf) goto L_11ba0bf1;
  /* 11ba0bc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0bc3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba0bc6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba0bc8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0bcf je 0x11ba0bf1 */
  if (C.zf) goto L_11ba0bf1;
  /* 11ba0bd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0bd4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba0bd7 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0bda mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba0bdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba0be0 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ba0be7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba0bea mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_11ba0bf1:;
  /* 11ba0bf1 pop edi */
  EDI = (pop32());
  /* 11ba0bf2 pop esi */
  ESI = (pop32());
  /* 11ba0bf3 pop ebx */
  EBX = (pop32());
  /* 11ba0bf4 mov esp, ebp */
  ESP = (EBP);
  /* 11ba0bf6 pop ebp */
  EBP = (pop32());
  /* 11ba0bf7 ret  */
  ESPCHK(0x11ba0ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c00 @ 0x11ba0c00 (377 bytes, 115 insns) */
void f_11ba0c00(void) {
  FTRACE(0x11ba0c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0c01 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0c03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0c06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba0c0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0c10 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0c15 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0c1a je 0x11ba0c25 */
  if (C.zf) goto L_11ba0c25;
  /* 11ba0c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0c1f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0c22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba0c25:;
  /* 11ba0c25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0c28 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0c2e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0c31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba0c33 je 0x11ba0c3d */
  if (C.zf) goto L_11ba0c3d;
  /* 11ba0c35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0c38 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11ba0c3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba0c3d:;
  /* 11ba0c3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0c40 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0c46 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0c49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba0c4b je 0x11ba0c56 */
  if (C.zf) goto L_11ba0c56;
  /* 11ba0c4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0c50 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0c53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba0c56:;
  /* 11ba0c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0c59 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0c5e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0c63 je 0x11ba0c6e */
  if (C.zf) goto L_11ba0c6e;
  /* 11ba0c65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0c68 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0c6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba0c6e:;
  /* 11ba0c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0c71 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0c77 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0c7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba0c7c je 0x11ba0c86 */
  if (C.zf) goto L_11ba0c86;
  /* 11ba0c7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0c81 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ba0c83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba0c86:;
  /* 11ba0c86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0c89 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0c8f and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0c92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba0c94 je 0x11ba0ca2 */
  if (C.zf) goto L_11ba0ca2;
  /* 11ba0c96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0c99 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0c9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba0ca2:;
  /* 11ba0ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0ca5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0caa and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0caf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba0cb2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0cb9 jg 0x11ba0cd5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba0cd5;
  /* 11ba0cbb cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0cc2 je 0x11ba0ce8 */
  if (C.zf) goto L_11ba0ce8;
  /* 11ba0cc4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0cc8 je 0x11ba0ce0 */
  if (C.zf) goto L_11ba0ce0;
  /* 11ba0cca cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0cd1 je 0x11ba0cf3 */
  if (C.zf) goto L_11ba0cf3;
  /* 11ba0cd3 jmp 0x11ba0d07 */
  goto L_11ba0d07;
L_11ba0cd5:;
  /* 11ba0cd5 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0cdc je 0x11ba0cfe */
  if (C.zf) goto L_11ba0cfe;
  /* 11ba0cde jmp 0x11ba0d07 */
  goto L_11ba0d07;
L_11ba0ce0:;
  /* 11ba0ce0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0ce3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba0ce6 jmp 0x11ba0d07 */
  goto L_11ba0d07;
L_11ba0ce8:;
  /* 11ba0ce8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0ceb or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ba0cee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba0cf1 jmp 0x11ba0d07 */
  goto L_11ba0d07;
L_11ba0cf3:;
  /* 11ba0cf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0cf6 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11ba0cf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba0cfc jmp 0x11ba0d07 */
  goto L_11ba0d07;
L_11ba0cfe:;
  /* 11ba0cfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0d01 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ba0d04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba0d07:;
  /* 11ba0d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0d0a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0d10 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0d16 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ba0d19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0d1d je 0x11ba0d49 */
  if (C.zf) goto L_11ba0d49;
  /* 11ba0d1f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0d26 je 0x11ba0d3b */
  if (C.zf) goto L_11ba0d3b;
  /* 11ba0d28 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0d2f je 0x11ba0d33 */
  if (C.zf) goto L_11ba0d33;
  /* 11ba0d31 jmp 0x11ba0d55 */
  goto L_11ba0d55;
L_11ba0d33:;
  /* 11ba0d33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0d36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba0d39 jmp 0x11ba0d55 */
  goto L_11ba0d55;
L_11ba0d3b:;
  /* 11ba0d3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0d3e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0d44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba0d47 jmp 0x11ba0d55 */
  goto L_11ba0d55;
L_11ba0d49:;
  /* 11ba0d49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0d4c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0d52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba0d55:;
  /* 11ba0d55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0d58 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0d5d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0d64 je 0x11ba0d72 */
  if (C.zf) goto L_11ba0d72;
  /* 11ba0d66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0d69 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0d6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba0d72:;
  /* 11ba0d72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0d75 mov esp, ebp */
  ESP = (EBP);
  /* 11ba0d77 pop ebp */
  EBP = (pop32());
  /* 11ba0d78 ret  */
  ESPCHK(0x11ba0c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d80 @ 0x11ba0d80 (346 bytes, 106 insns) */
void f_11ba0d80(void) {
  FTRACE(0x11ba0d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0d81 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0d83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0d86 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba0d8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0d8f and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0d94 je 0x11ba0da1 */
  if (C.zf) goto L_11ba0da1;
  /* 11ba0d96 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0d9a or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11ba0d9d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11ba0da1:;
  /* 11ba0da1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0da4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0da7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba0da9 je 0x11ba0db5 */
  if (C.zf) goto L_11ba0db5;
  /* 11ba0dab mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0daf or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11ba0db1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11ba0db5:;
  /* 11ba0db5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0db8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0dbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba0dbd je 0x11ba0dca */
  if (C.zf) goto L_11ba0dca;
  /* 11ba0dbf mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0dc3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11ba0dc6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11ba0dca:;
  /* 11ba0dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0dcd and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0dd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0dd2 je 0x11ba0ddf */
  if (C.zf) goto L_11ba0ddf;
  /* 11ba0dd4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0dd8 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11ba0ddb mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11ba0ddf:;
  /* 11ba0ddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0de2 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0de5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba0de7 je 0x11ba0df3 */
  if (C.zf) goto L_11ba0df3;
  /* 11ba0de9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0ded or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ba0def mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11ba0df3:;
  /* 11ba0df3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0df6 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0dfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba0dfe je 0x11ba0e0b */
  if (C.zf) goto L_11ba0e0b;
  /* 11ba0e00 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0e04 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 11ba0e07 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11ba0e0b:;
  /* 11ba0e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0e0e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0e13 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba0e16 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0e1d ja 0x11ba0e39 */
  if ((!C.cf&&!C.zf)) goto L_11ba0e39;
  /* 11ba0e1f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0e26 je 0x11ba0e4e */
  if (C.zf) goto L_11ba0e4e;
  /* 11ba0e28 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0e2c je 0x11ba0e44 */
  if (C.zf) goto L_11ba0e44;
  /* 11ba0e2e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0e35 je 0x11ba0e5b */
  if (C.zf) goto L_11ba0e5b;
  /* 11ba0e37 jmp 0x11ba0e73 */
  goto L_11ba0e73;
L_11ba0e39:;
  /* 11ba0e39 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0e40 je 0x11ba0e68 */
  if (C.zf) goto L_11ba0e68;
  /* 11ba0e42 jmp 0x11ba0e73 */
  goto L_11ba0e73;
L_11ba0e44:;
  /* 11ba0e44 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0e48 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11ba0e4c jmp 0x11ba0e73 */
  goto L_11ba0e73;
L_11ba0e4e:;
  /* 11ba0e4e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0e52 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ba0e55 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11ba0e59 jmp 0x11ba0e73 */
  goto L_11ba0e73;
L_11ba0e5b:;
  /* 11ba0e5b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0e5f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11ba0e62 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ba0e66 jmp 0x11ba0e73 */
  goto L_11ba0e73;
L_11ba0e68:;
  /* 11ba0e68 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0e6c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ba0e6f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11ba0e73:;
  /* 11ba0e73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0e76 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0e7c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ba0e7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0e83 je 0x11ba0e99 */
  if (C.zf) goto L_11ba0e99;
  /* 11ba0e85 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0e8c je 0x11ba0ea6 */
  if (C.zf) goto L_11ba0ea6;
  /* 11ba0e8e cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0e95 je 0x11ba0eb3 */
  if (C.zf) goto L_11ba0eb3;
  /* 11ba0e97 jmp 0x11ba0ebb */
  goto L_11ba0ebb;
L_11ba0e99:;
  /* 11ba0e99 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0e9d or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 11ba0ea0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ba0ea4 jmp 0x11ba0ebb */
  goto L_11ba0ebb;
L_11ba0ea6:;
  /* 11ba0ea6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0eaa or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ba0ead mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11ba0eb1 jmp 0x11ba0ebb */
  goto L_11ba0ebb;
L_11ba0eb3:;
  /* 11ba0eb3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0eb7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11ba0ebb:;
  /* 11ba0ebb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0ebe and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0ec3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0ec5 je 0x11ba0ed2 */
  if (C.zf) goto L_11ba0ed2;
  /* 11ba0ec7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0ecb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ba0ece mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11ba0ed2:;
  /* 11ba0ed2 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba0ed6 mov esp, ebp */
  ESP = (EBP);
  /* 11ba0ed8 pop ebp */
  EBP = (pop32());
  /* 11ba0ed9 ret  */
  ESPCHK(0x11ba0d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ee0 @ 0x11ba0ee0 (167 bytes, 56 insns) */
void f_11ba0ee0(void) {
  FTRACE(0x11ba0ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba0ee4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba0eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0eee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0ef3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0ef6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0ef8 je 0x11ba0f03 */
  if (C.zf) goto L_11ba0f03;
  /* 11ba0efa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0efd or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0f00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba0f03:;
  /* 11ba0f03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0f06 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0f0c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0f0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba0f11 je 0x11ba0f1b */
  if (C.zf) goto L_11ba0f1b;
  /* 11ba0f13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0f16 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11ba0f18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba0f1b:;
  /* 11ba0f1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0f1e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0f24 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0f27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba0f29 je 0x11ba0f34 */
  if (C.zf) goto L_11ba0f34;
  /* 11ba0f2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0f2e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0f31 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba0f34:;
  /* 11ba0f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0f37 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0f3c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0f3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0f41 je 0x11ba0f4c */
  if (C.zf) goto L_11ba0f4c;
  /* 11ba0f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0f46 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0f49 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba0f4c:;
  /* 11ba0f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0f4f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0f55 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0f58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba0f5a je 0x11ba0f64 */
  if (C.zf) goto L_11ba0f64;
  /* 11ba0f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0f5f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ba0f61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba0f64:;
  /* 11ba0f64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0f67 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0f6d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0f70 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba0f72 je 0x11ba0f80 */
  if (C.zf) goto L_11ba0f80;
  /* 11ba0f74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0f77 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba0f7d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba0f80:;
  /* 11ba0f80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba0f83 mov esp, ebp */
  ESP = (EBP);
  /* 11ba0f85 pop ebp */
  EBP = (pop32());
  /* 11ba0f86 ret  */
  ESPCHK(0x11ba0ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x11ba0f90 (183 bytes, 58 insns) */
void f_11ba0f90(void) {
  FTRACE(0x11ba0f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba0f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba0f91 mov ebp, esp */
  EBP = (ESP);
  /* 11ba0f93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba0f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0f99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba0f9c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba0fa1 ja 0x11ba0fba */
  if ((!C.cf&&!C.zf)) goto L_11ba0fba;
  /* 11ba0fa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0fa6 mov edx, dword ptr [0x11bcc00c] */
  EDX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba0fac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0fae mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ba0fb2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0fb5 jmp 0x11ba1043 */
  goto L_11ba1043;
L_11ba0fba:;
  /* 11ba0fba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0fbd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ba0fc0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0fc6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0fcc mov edx, dword ptr [0x11bcc00c] */
  EDX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba0fd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0fd4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ba0fd8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba0fdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba0fdf je 0x11ba1003 */
  if (C.zf) goto L_11ba1003;
  /* 11ba0fe1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba0fe4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ba0fe7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba0fed mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11ba0ff0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ba0ff3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11ba0ff6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11ba0ffa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11ba1001 jmp 0x11ba1014 */
  goto L_11ba1014;
L_11ba1003:;
  /* 11ba1003 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ba1006 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11ba1009 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11ba100d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ba1014:;
  /* 11ba1014 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba1016 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba1018 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba101a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11ba101d push ecx */
  push32((uint32_t)(ECX));
  /* 11ba101e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1021 push edx */
  push32((uint32_t)(EDX));
  /* 11ba1022 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ba1025 push eax */
  push32((uint32_t)(EAX));
  /* 11ba1026 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba1028 call 0x11ba73a0 */
  push32(0x11ba102du); f_11ba73a0();
  /* 11ba102d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba1032 jne 0x11ba1038 */
  if (!C.zf) goto L_11ba1038;
  /* 11ba1034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1036 jmp 0x11ba1043 */
  goto L_11ba1043;
L_11ba1038:;
  /* 11ba1038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba103b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1040 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11ba1043:;
  /* 11ba1043 mov esp, ebp */
  ESP = (EBP);
  /* 11ba1045 pop ebp */
  EBP = (pop32());
  /* 11ba1046 ret  */
  ESPCHK(0x11ba0f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011050 @ 0x11ba1050 (11 bytes, 6 insns) */
void f_11ba1050(void) {
  FTRACE(0x11ba1050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1050 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1051 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1056 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1059 pop ebp */
  EBP = (pop32());
  /* 11ba105a ret  */
  ESPCHK(0x11ba1050u, _esp0);
  ESP += 4; return;
}

/* FUN_10011060 @ 0x11ba1060 (147 bytes, 43 insns) */
void f_11ba1060(void) {
  FTRACE(0x11ba1060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1060 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1061 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1063 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1064 cmp dword ptr [0x11bce63c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce63c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba106b jne 0x11ba1087 */
  if (!C.zf) goto L_11ba1087;
  /* 11ba106d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1071 jl 0x11ba1082 */
  if ((C.sf!=C.of)) goto L_11ba1082;
  /* 11ba1073 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1077 jg 0x11ba1082 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba1082;
  /* 11ba1079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba107c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba107f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ba1082:;
  /* 11ba1082 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1085 jmp 0x11ba10ef */
  goto L_11ba10ef;
L_11ba1087:;
  /* 11ba1087 push 0x11bce6fc */
  push32((uint32_t)(0x11bce6fcu));
  /* 11ba108c call dword ptr [0x11bd0414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0414))), 0x11ba1092u);
  /* 11ba1092 cmp dword ptr [0x11bce6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1099 je 0x11ba10b9 */
  if (C.zf) goto L_11ba10b9;
  /* 11ba109b push 0x11bce6fc */
  push32((uint32_t)(0x11bce6fcu));
  /* 11ba10a0 call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11ba10a6u);
  /* 11ba10a6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ba10a8 call 0x11b9a6d0 */
  push32(0x11ba10adu); f_11b9a6d0();
  /* 11ba10ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba10b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ba10b7 jmp 0x11ba10c0 */
  goto L_11ba10c0;
L_11ba10b9:;
  /* 11ba10b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ba10c0:;
  /* 11ba10c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba10c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba10c4 call 0x11ba1100 */
  push32(0x11ba10c9u); f_11ba1100();
  /* 11ba10c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba10cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ba10cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba10d3 je 0x11ba10e1 */
  if (C.zf) goto L_11ba10e1;
  /* 11ba10d5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ba10d7 call 0x11b9a770 */
  push32(0x11ba10dcu); f_11b9a770();
  /* 11ba10dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba10df jmp 0x11ba10ec */
  goto L_11ba10ec;
L_11ba10e1:;
  /* 11ba10e1 push 0x11bce6fc */
  push32((uint32_t)(0x11bce6fcu));
  /* 11ba10e6 call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11ba10ecu);
L_11ba10ec:;
  /* 11ba10ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11ba10ef:;
  /* 11ba10ef mov esp, ebp */
  ESP = (EBP);
  /* 11ba10f1 pop ebp */
  EBP = (pop32());
  /* 11ba10f2 ret  */
  ESPCHK(0x11ba1060u, _esp0);
  ESP += 4; return;
}

/* FUN_10011100 @ 0x11ba1100 (299 bytes, 91 insns) */
void f_11ba1100(void) {
  FTRACE(0x11ba1100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1100 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1101 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1103 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1106 cmp dword ptr [0x11bce63c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce63c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba110d jne 0x11ba112c */
  if (!C.zf) goto L_11ba112c;
  /* 11ba110f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1113 jl 0x11ba1124 */
  if ((C.sf!=C.of)) goto L_11ba1124;
  /* 11ba1115 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1119 jg 0x11ba1124 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba1124;
  /* 11ba111b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba111e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1121 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ba1124:;
  /* 11ba1124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1127 jmp 0x11ba1227 */
  goto L_11ba1227;
L_11ba112c:;
  /* 11ba112c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1133 jge 0x11ba1173 */
  if ((C.sf==C.of)) goto L_11ba1173;
  /* 11ba1135 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba113c jle 0x11ba1151 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba1151;
  /* 11ba113e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba1140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1143 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1144 call 0x11ba0f90 */
  push32(0x11ba1149u); f_11ba0f90();
  /* 11ba1149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba114c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba114f jmp 0x11ba1165 */
  goto L_11ba1165;
L_11ba1151:;
  /* 11ba1151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1154 mov eax, dword ptr [0x11bcc00c] */
  EAX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba1159 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba115b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ba115f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1162 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ba1165:;
  /* 11ba1165 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1169 jne 0x11ba1173 */
  if (!C.zf) goto L_11ba1173;
  /* 11ba116b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba116e jmp 0x11ba1227 */
  goto L_11ba1227;
L_11ba1173:;
  /* 11ba1173 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1176 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ba1179 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba117f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1185 mov eax, dword ptr [0x11bcc00c] */
  EAX = (r32((uint32_t)(0x11bcc00c)));
  /* 11ba118a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba118c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ba1190 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1196 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba1198 je 0x11ba11bc */
  if (C.zf) goto L_11ba11bc;
  /* 11ba119a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba119d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ba11a0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba11a6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11ba11a9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ba11ac mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11ba11af mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11ba11b3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ba11ba jmp 0x11ba11cd */
  goto L_11ba11cd;
L_11ba11bc:;
  /* 11ba11bc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ba11bf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ba11c2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11ba11c6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11ba11cd:;
  /* 11ba11cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba11cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba11d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ba11d3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ba11d6 push edx */
  push32((uint32_t)(EDX));
  /* 11ba11d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba11da push eax */
  push32((uint32_t)(EAX));
  /* 11ba11db lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11ba11de push ecx */
  push32((uint32_t)(ECX));
  /* 11ba11df push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ba11e4 mov edx, dword ptr [0x11bce63c] */
  EDX = (r32((uint32_t)(0x11bce63c)));
  /* 11ba11ea push edx */
  push32((uint32_t)(EDX));
  /* 11ba11eb call 0x11ba7fb0 */
  push32(0x11ba11f0u); f_11ba7fb0();
  /* 11ba11f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba11f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba11f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba11fa jne 0x11ba1201 */
  if (!C.zf) goto L_11ba1201;
  /* 11ba11fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba11ff jmp 0x11ba1227 */
  goto L_11ba1227;
L_11ba1201:;
  /* 11ba1201 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1205 jne 0x11ba1211 */
  if (!C.zf) goto L_11ba1211;
  /* 11ba1207 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba120a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba120f jmp 0x11ba1227 */
  goto L_11ba1227;
L_11ba1211:;
  /* 11ba1211 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1214 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1219 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11ba121c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1222 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ba1225 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11ba1227:;
  /* 11ba1227 mov esp, ebp */
  ESP = (EBP);
  /* 11ba1229 pop ebp */
  EBP = (pop32());
  /* 11ba122a ret  */
  ESPCHK(0x11ba1100u, _esp0);
  ESP += 4; return;
}

/* FUN_10011230 @ 0x11ba1230 (132 bytes, 51 insns) */
void f_11ba1230(void) {
  FTRACE(0x11ba1230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1230 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1231 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1236 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1239 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ba123a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba123d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba123f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba1242 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba1245 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1248 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba124d jns 0x11ba1254 */
  if (!C.sf) goto L_11ba1254;
  /* 11ba124f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ba1250 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1253 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ba1254:;
  /* 11ba1254 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11ba1259 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba125b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba125e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1261 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1264 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba1266 not edx */
  EDX = (~(EDX));
  /* 11ba1268 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba126b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba126e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1271 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ba1274 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1277 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba1279 je 0x11ba127f */
  if (C.zf) goto L_11ba127f;
  /* 11ba127b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba127d jmp 0x11ba12b0 */
  goto L_11ba12b0;
L_11ba127f:;
  /* 11ba127f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1282 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1285 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba1288 jmp 0x11ba1293 */
  goto L_11ba1293;
L_11ba128a:;
  /* 11ba128a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba128d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1290 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ba1293:;
  /* 11ba1293 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1297 jge 0x11ba12ab */
  if ((C.sf==C.of)) goto L_11ba12ab;
  /* 11ba1299 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba129c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba129f cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba12a3 je 0x11ba12a9 */
  if (C.zf) goto L_11ba12a9;
  /* 11ba12a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba12a7 jmp 0x11ba12b0 */
  goto L_11ba12b0;
L_11ba12a9:;
  /* 11ba12a9 jmp 0x11ba128a */
  goto L_11ba128a;
L_11ba12ab:;
  /* 11ba12ab mov eax, 1 */
  EAX = (0x1u);
L_11ba12b0:;
  /* 11ba12b0 mov esp, ebp */
  ESP = (EBP);
  /* 11ba12b2 pop ebp */
  EBP = (pop32());
  /* 11ba12b3 ret  */
  ESPCHK(0x11ba1230u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x11ba12c0 (168 bytes, 63 insns) */
void f_11ba12c0(void) {
  FTRACE(0x11ba12c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba12c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba12c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba12c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba12c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba12c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ba12ca and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba12cd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba12cf sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba12d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba12d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba12d8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba12dd jns 0x11ba12e4 */
  if (!C.sf) goto L_11ba12e4;
  /* 11ba12df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ba12e0 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba12e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ba12e4:;
  /* 11ba12e4 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11ba12e9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba12eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba12ee mov edx, 1 */
  EDX = (0x1u);
  /* 11ba12f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba12f6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba12f8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba12fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba12fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1301 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11ba1304 push edx */
  push32((uint32_t)(EDX));
  /* 11ba1305 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1308 push eax */
  push32((uint32_t)(EAX));
  /* 11ba1309 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba130c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba130f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ba1312 push eax */
  push32((uint32_t)(EAX));
  /* 11ba1313 call 0x11ba8310 */
  push32(0x11ba1318u); f_11ba8310();
  /* 11ba1318 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba131b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba131e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1321 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1324 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba1327 jmp 0x11ba1332 */
  goto L_11ba1332;
L_11ba1329:;
  /* 11ba1329 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba132c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba132f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ba1332:;
  /* 11ba1332 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1336 jl 0x11ba1361 */
  if ((C.sf!=C.of)) goto L_11ba1361;
  /* 11ba1338 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba133c je 0x11ba1361 */
  if (C.zf) goto L_11ba1361;
  /* 11ba133e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1341 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1344 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11ba1347 push edx */
  push32((uint32_t)(EDX));
  /* 11ba1348 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba134a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba134d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1350 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ba1353 push edx */
  push32((uint32_t)(EDX));
  /* 11ba1354 call 0x11ba8310 */
  push32(0x11ba1359u); f_11ba8310();
  /* 11ba1359 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba135c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba135f jmp 0x11ba1329 */
  goto L_11ba1329;
L_11ba1361:;
  /* 11ba1361 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba1364 mov esp, ebp */
  ESP = (EBP);
  /* 11ba1366 pop ebp */
  EBP = (pop32());
  /* 11ba1367 ret  */
  ESPCHK(0x11ba12c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011370 @ 0x11ba1370 (219 bytes, 78 insns) */
void f_11ba1370(void) {
  FTRACE(0x11ba1370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1370 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1371 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1373 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1376 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11ba137d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1380 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1383 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba1386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1389 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba138c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba138f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1392 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ba1393 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1396 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1398 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba139b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ba139e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba13a1 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba13a7 jns 0x11ba13ae */
  if (!C.sf) goto L_11ba13ae;
  /* 11ba13a9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ba13aa or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba13ad inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_11ba13ae:;
  /* 11ba13ae mov eax, 0x1f */
  EAX = (0x1fu);
  /* 11ba13b3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba13b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba13b8 mov edx, 1 */
  EDX = (0x1u);
  /* 11ba13bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba13c0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba13c2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba13c5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba13c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba13cb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ba13ce and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba13d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba13d3 je 0x11ba13ff */
  if (C.zf) goto L_11ba13ff;
  /* 11ba13d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba13d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba13db push eax */
  push32((uint32_t)(EAX));
  /* 11ba13dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba13df push ecx */
  push32((uint32_t)(ECX));
  /* 11ba13e0 call 0x11ba1230 */
  push32(0x11ba13e5u); f_11ba1230();
  /* 11ba13e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba13e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba13ea jne 0x11ba13ff */
  if (!C.zf) goto L_11ba13ff;
  /* 11ba13ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba13ef push edx */
  push32((uint32_t)(EDX));
  /* 11ba13f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba13f3 push eax */
  push32((uint32_t)(EAX));
  /* 11ba13f4 call 0x11ba12c0 */
  push32(0x11ba13f9u); f_11ba12c0();
  /* 11ba13f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba13fc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ba13ff:;
  /* 11ba13ff or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1402 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1405 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba1407 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba140a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba140d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ba1410 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1412 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba1415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1418 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11ba141b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba141e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1421 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba1424 jmp 0x11ba142f */
  goto L_11ba142f;
L_11ba1426:;
  /* 11ba1426 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba1429 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba142c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ba142f:;
  /* 11ba142f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1433 jge 0x11ba1444 */
  if ((C.sf==C.of)) goto L_11ba1444;
  /* 11ba1435 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba1438 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba143b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 11ba1442 jmp 0x11ba1426 */
  goto L_11ba1426;
L_11ba1444:;
  /* 11ba1444 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba1447 mov esp, ebp */
  ESP = (EBP);
  /* 11ba1449 pop ebp */
  EBP = (pop32());
  /* 11ba144a ret  */
  ESPCHK(0x11ba1370u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x11ba1450 (76 bytes, 28 insns) */
void f_11ba1450(void) {
  FTRACE(0x11ba1450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1450 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1451 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1453 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1456 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba145c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba145f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba1462 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba1469 jmp 0x11ba1474 */
  goto L_11ba1474;
L_11ba146b:;
  /* 11ba146b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba146e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1471 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ba1474:;
  /* 11ba1474 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1478 jge 0x11ba1498 */
  if ((C.sf==C.of)) goto L_11ba1498;
  /* 11ba147a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba147d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1480 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba1482 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba1484 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1487 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba148a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba148d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1490 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1493 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba1496 jmp 0x11ba146b */
  goto L_11ba146b;
L_11ba1498:;
  /* 11ba1498 mov esp, ebp */
  ESP = (EBP);
  /* 11ba149a pop ebp */
  EBP = (pop32());
  /* 11ba149b ret  */
  ESPCHK(0x11ba1450u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x11ba14a0 (47 bytes, 17 insns) */
void f_11ba14a0(void) {
  FTRACE(0x11ba14a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba14a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba14a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba14a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba14a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba14ab jmp 0x11ba14b6 */
  goto L_11ba14b6;
L_11ba14ad:;
  /* 11ba14ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba14b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba14b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba14b6:;
  /* 11ba14b6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba14ba jge 0x11ba14cb */
  if ((C.sf==C.of)) goto L_11ba14cb;
  /* 11ba14bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba14bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba14c2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 11ba14c9 jmp 0x11ba14ad */
  goto L_11ba14ad;
L_11ba14cb:;
  /* 11ba14cb mov esp, ebp */
  ESP = (EBP);
  /* 11ba14cd pop ebp */
  EBP = (pop32());
  /* 11ba14ce ret  */
  ESPCHK(0x11ba14a0u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x11ba14d0 (55 bytes, 21 insns) */
void f_11ba14d0(void) {
  FTRACE(0x11ba14d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba14d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba14d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba14d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba14d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba14db jmp 0x11ba14e6 */
  goto L_11ba14e6;
L_11ba14dd:;
  /* 11ba14dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba14e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba14e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba14e6:;
  /* 11ba14e6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba14ea jge 0x11ba14fe */
  if ((C.sf==C.of)) goto L_11ba14fe;
  /* 11ba14ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba14ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba14f2 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba14f6 je 0x11ba14fc */
  if (C.zf) goto L_11ba14fc;
  /* 11ba14f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba14fa jmp 0x11ba1503 */
  goto L_11ba1503;
L_11ba14fc:;
  /* 11ba14fc jmp 0x11ba14dd */
  goto L_11ba14dd;
L_11ba14fe:;
  /* 11ba14fe mov eax, 1 */
  EAX = (0x1u);
L_11ba1503:;
  /* 11ba1503 mov esp, ebp */
  ESP = (EBP);
  /* 11ba1505 pop ebp */
  EBP = (pop32());
  /* 11ba1506 ret  */
  ESPCHK(0x11ba14d0u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x11ba1510 (236 bytes, 82 insns) */
void f_11ba1510(void) {
  FTRACE(0x11ba1510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1510 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1511 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1513 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1516 push esi */
  push32((uint32_t)(ESI));
  /* 11ba1517 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba151a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ba151b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba151e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1520 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba1523 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba1526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1529 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba152e jns 0x11ba1535 */
  if (!C.sf) goto L_11ba1535;
  /* 11ba1530 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ba1531 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1534 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ba1535:;
  /* 11ba1535 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba1538 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba153b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba153e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba1540 not edx */
  EDX = (~(EDX));
  /* 11ba1542 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ba1545 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba154c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba1553 jmp 0x11ba155e */
  goto L_11ba155e;
L_11ba1555:;
  /* 11ba1555 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1558 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba155b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ba155e:;
  /* 11ba155e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1562 jge 0x11ba15b1 */
  if ((C.sf==C.of)) goto L_11ba15b1;
  /* 11ba1564 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1567 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba156a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ba156d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1570 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba1573 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1576 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1579 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ba157c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba157f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba1581 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1587 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11ba158a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba158d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1590 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ba1593 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1596 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1599 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba159c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11ba159f mov ecx, 0x20 */
  ECX = (0x20u);
  /* 11ba15a4 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba15a7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba15aa shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba15ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba15af jmp 0x11ba1555 */
  goto L_11ba1555;
L_11ba15b1:;
  /* 11ba15b1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 11ba15b8 jmp 0x11ba15c3 */
  goto L_11ba15c3;
L_11ba15ba:;
  /* 11ba15ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba15bd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba15c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ba15c3:;
  /* 11ba15c3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba15c7 jl 0x11ba15f7 */
  if ((C.sf!=C.of)) goto L_11ba15f7;
  /* 11ba15c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba15cc cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba15cf jl 0x11ba15e8 */
  if ((C.sf!=C.of)) goto L_11ba15e8;
  /* 11ba15d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba15d4 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba15d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba15da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba15dd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba15e0 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 11ba15e3 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11ba15e6 jmp 0x11ba15f5 */
  goto L_11ba15f5;
L_11ba15e8:;
  /* 11ba15e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba15eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba15ee mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11ba15f5:;
  /* 11ba15f5 jmp 0x11ba15ba */
  goto L_11ba15ba;
L_11ba15f7:;
  /* 11ba15f7 pop esi */
  ESI = (pop32());
  /* 11ba15f8 mov esp, ebp */
  ESP = (EBP);
  /* 11ba15fa pop ebp */
  EBP = (pop32());
  /* 11ba15fb ret  */
  ESPCHK(0x11ba1510u, _esp0);
  ESP += 4; return;
}

/* FUN_10011600 @ 0x11ba1600 (578 bytes, 188 insns) */
void f_11ba1600(void) {
  FTRACE(0x11ba1600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1600 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1601 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1603 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1609 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba160b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11ba160f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1615 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba161b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba161e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1621 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1623 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11ba1627 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba162c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ba162f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1632 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11ba1635 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ba1638 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba163b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11ba163e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ba1641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1646 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ba1649 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ba164c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba164f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1656 jne 0x11ba1690 */
  if (!C.zf) goto L_11ba1690;
  /* 11ba1658 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba165f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11ba1662 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1663 call 0x11ba14d0 */
  push32(0x11ba1668u); f_11ba14d0();
  /* 11ba1668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba166b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba166d je 0x11ba1678 */
  if (C.zf) goto L_11ba1678;
  /* 11ba166f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ba1676 jmp 0x11ba168b */
  goto L_11ba168b;
L_11ba1678:;
  /* 11ba1678 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ba167b push edx */
  push32((uint32_t)(EDX));
  /* 11ba167c call 0x11ba14a0 */
  push32(0x11ba1681u); f_11ba14a0();
  /* 11ba1681 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1684 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_11ba168b:;
  /* 11ba168b jmp 0x11ba17dc */
  goto L_11ba17dc;
L_11ba1690:;
  /* 11ba1690 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ba1693 push eax */
  push32((uint32_t)(EAX));
  /* 11ba1694 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11ba1697 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1698 call 0x11ba1450 */
  push32(0x11ba169du); f_11ba1450();
  /* 11ba169d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba16a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba16a3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba16a6 push eax */
  push32((uint32_t)(EAX));
  /* 11ba16a7 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11ba16aa push ecx */
  push32((uint32_t)(ECX));
  /* 11ba16ab call 0x11ba1370 */
  push32(0x11ba16b0u); f_11ba1370();
  /* 11ba16b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba16b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba16b5 je 0x11ba16c0 */
  if (C.zf) goto L_11ba16c0;
  /* 11ba16b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba16ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba16bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba16c0:;
  /* 11ba16c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba16c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba16c6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba16c9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba16cc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba16cf jge 0x11ba16f0 */
  if ((C.sf==C.of)) goto L_11ba16f0;
  /* 11ba16d1 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ba16d4 push eax */
  push32((uint32_t)(EAX));
  /* 11ba16d5 call 0x11ba14a0 */
  push32(0x11ba16dau); f_11ba14a0();
  /* 11ba16da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba16dd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba16e4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11ba16eb jmp 0x11ba17dc */
  goto L_11ba17dc;
L_11ba16f0:;
  /* 11ba16f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba16f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba16f6 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba16f9 jg 0x11ba1760 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba1760;
  /* 11ba16fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba16fe mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba1701 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1704 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11ba1707 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11ba170a push edx */
  push32((uint32_t)(EDX));
  /* 11ba170b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ba170e push eax */
  push32((uint32_t)(EAX));
  /* 11ba170f call 0x11ba1450 */
  push32(0x11ba1714u); f_11ba1450();
  /* 11ba1714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1717 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba171a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba171b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ba171e push edx */
  push32((uint32_t)(EDX));
  /* 11ba171f call 0x11ba1510 */
  push32(0x11ba1724u); f_11ba1510();
  /* 11ba1724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1727 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba172a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba172d push ecx */
  push32((uint32_t)(ECX));
  /* 11ba172e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ba1731 push edx */
  push32((uint32_t)(EDX));
  /* 11ba1732 call 0x11ba1370 */
  push32(0x11ba1737u); f_11ba1370();
  /* 11ba1737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba173a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba173d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ba1740 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1743 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1744 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ba1747 push edx */
  push32((uint32_t)(EDX));
  /* 11ba1748 call 0x11ba1510 */
  push32(0x11ba174du); f_11ba1510();
  /* 11ba174d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1750 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba1757 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11ba175e jmp 0x11ba17dc */
  goto L_11ba17dc;
L_11ba1760:;
  /* 11ba1760 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1766 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1768 jl 0x11ba17ab */
  if ((C.sf!=C.of)) goto L_11ba17ab;
  /* 11ba176a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ba176d push edx */
  push32((uint32_t)(EDX));
  /* 11ba176e call 0x11ba14a0 */
  push32(0x11ba1773u); f_11ba14a0();
  /* 11ba1773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1776 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba1779 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba177e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba1781 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1784 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ba1787 push edx */
  push32((uint32_t)(EDX));
  /* 11ba1788 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ba178b push eax */
  push32((uint32_t)(EAX));
  /* 11ba178c call 0x11ba1510 */
  push32(0x11ba1791u); f_11ba1510();
  /* 11ba1791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1794 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1797 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba1799 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba179c add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba179f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba17a2 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ba17a9 jmp 0x11ba17dc */
  goto L_11ba17dc;
L_11ba17ab:;
  /* 11ba17ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba17ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba17b1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba17b4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba17b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba17ba and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba17bf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba17c2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba17c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ba17c8 push edx */
  push32((uint32_t)(EDX));
  /* 11ba17c9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ba17cc push eax */
  push32((uint32_t)(EAX));
  /* 11ba17cd call 0x11ba1510 */
  push32(0x11ba17d2u); f_11ba1510();
  /* 11ba17d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba17d5 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11ba17dc:;
  /* 11ba17dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba17df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ba17e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba17e5 mov eax, 0x20 */
  EAX = (0x20u);
  /* 11ba17ea sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba17ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba17ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba17f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba17f5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba17f7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba17fa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba17fc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba17ff neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba1801 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1803 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1809 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba180b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ba180e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1811 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1815 jne 0x11ba182a */
  if (!C.zf) goto L_11ba182a;
  /* 11ba1817 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba181a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba181d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ba1820 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1823 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba1826 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ba1828 jmp 0x11ba183b */
  goto L_11ba183b;
L_11ba182a:;
  /* 11ba182a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba182d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1831 jne 0x11ba183b */
  if (!C.zf) goto L_11ba183b;
  /* 11ba1833 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1836 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba1839 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_11ba183b:;
  /* 11ba183b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba183e mov esp, ebp */
  ESP = (EBP);
  /* 11ba1840 pop ebp */
  EBP = (pop32());
  /* 11ba1841 ret  */
  ESPCHK(0x11ba1600u, _esp0);
  ESP += 4; return;
}

/* FUN_10011850 @ 0x11ba1850 (26 bytes, 11 insns) */
void f_11ba1850(void) {
  FTRACE(0x11ba1850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1850 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1851 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1853 push 0x11bcc218 */
  push32((uint32_t)(0x11bcc218u));
  /* 11ba1858 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba185b push eax */
  push32((uint32_t)(EAX));
  /* 11ba185c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba185f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1860 call 0x11ba1600 */
  push32(0x11ba1865u); f_11ba1600();
  /* 11ba1865 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1868 pop ebp */
  EBP = (pop32());
  /* 11ba1869 ret  */
  ESPCHK(0x11ba1850u, _esp0);
  ESP += 4; return;
}

/* FUN_10011870 @ 0x11ba1870 (26 bytes, 11 insns) */
void f_11ba1870(void) {
  FTRACE(0x11ba1870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1870 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1871 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1873 push 0x11bcc230 */
  push32((uint32_t)(0x11bcc230u));
  /* 11ba1878 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba187b push eax */
  push32((uint32_t)(EAX));
  /* 11ba187c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba187f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1880 call 0x11ba1600 */
  push32(0x11ba1885u); f_11ba1600();
  /* 11ba1885 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1888 pop ebp */
  EBP = (pop32());
  /* 11ba1889 ret  */
  ESPCHK(0x11ba1870u, _esp0);
  ESP += 4; return;
}

/* FUN_10011890 @ 0x11ba1890 (191 bytes, 58 insns) */
void f_11ba1890(void) {
  FTRACE(0x11ba1890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1890 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1891 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1893 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1896 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ba189d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba18a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba18a2 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11ba18a6 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba18ac mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11ba18b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba18b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba18b5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11ba18b9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba18be mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11ba18c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba18c5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11ba18c8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ba18cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba18ce mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11ba18d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba18d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba18d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba18d9 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ba18dc shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ba18df mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba18e2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11ba18e4 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11ba18e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba18e8 call 0x11ba1370 */
  push32(0x11ba18edu); f_11ba1370();
  /* 11ba18ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba18f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba18f2 je 0x11ba1907 */
  if (C.zf) goto L_11ba1907;
  /* 11ba18f4 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11ba18fb mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba18ff add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11ba1903 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11ba1907:;
  /* 11ba1907 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba190a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba190f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1914 jne 0x11ba191d */
  if (!C.zf) goto L_11ba191d;
  /* 11ba1916 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11ba191d:;
  /* 11ba191d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1920 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba1923 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ba1926 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1929 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba192c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ba192e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba1931 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba193a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba193f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1941 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1944 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 11ba1948 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba194b mov esp, ebp */
  ESP = (EBP);
  /* 11ba194d pop ebp */
  EBP = (pop32());
  /* 11ba194e ret  */
  ESPCHK(0x11ba1890u, _esp0);
  ESP += 4; return;
}

/* FUN_10011950 @ 0x11ba1950 (54 bytes, 24 insns) */
void f_11ba1950(void) {
  FTRACE(0x11ba1950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1950 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1951 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1953 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1956 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba1958 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba195a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba195c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba195e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1961 push eax */
  push32((uint32_t)(EAX));
  /* 11ba1962 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11ba1965 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1966 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ba1969 push edx */
  push32((uint32_t)(EDX));
  /* 11ba196a call 0x11ba8610 */
  push32(0x11ba196fu); f_11ba8610();
  /* 11ba196f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1972 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1975 push eax */
  push32((uint32_t)(EAX));
  /* 11ba1976 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11ba1979 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba197a call 0x11ba1850 */
  push32(0x11ba197fu); f_11ba1850();
  /* 11ba197f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1982 mov esp, ebp */
  ESP = (EBP);
  /* 11ba1984 pop ebp */
  EBP = (pop32());
  /* 11ba1985 ret  */
  ESPCHK(0x11ba1950u, _esp0);
  ESP += 4; return;
}

/* FUN_10011990 @ 0x11ba1990 (54 bytes, 24 insns) */
void f_11ba1990(void) {
  FTRACE(0x11ba1990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1990 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1991 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1993 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1996 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba1998 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba199a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba199c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba199e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba19a1 push eax */
  push32((uint32_t)(EAX));
  /* 11ba19a2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11ba19a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba19a6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ba19a9 push edx */
  push32((uint32_t)(EDX));
  /* 11ba19aa call 0x11ba8610 */
  push32(0x11ba19afu); f_11ba8610();
  /* 11ba19af add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba19b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba19b5 push eax */
  push32((uint32_t)(EAX));
  /* 11ba19b6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11ba19b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba19ba call 0x11ba1890 */
  push32(0x11ba19bfu); f_11ba1890();
  /* 11ba19bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba19c2 mov esp, ebp */
  ESP = (EBP);
  /* 11ba19c4 pop ebp */
  EBP = (pop32());
  /* 11ba19c5 ret  */
  ESPCHK(0x11ba1990u, _esp0);
  ESP += 4; return;
}

/* FUN_100119d0 @ 0x11ba19d0 (54 bytes, 24 insns) */
void f_11ba19d0(void) {
  FTRACE(0x11ba19d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba19d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba19d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba19d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba19d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba19d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba19da push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba19dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba19de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba19e1 push eax */
  push32((uint32_t)(EAX));
  /* 11ba19e2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11ba19e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba19e6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ba19e9 push edx */
  push32((uint32_t)(EDX));
  /* 11ba19ea call 0x11ba8610 */
  push32(0x11ba19efu); f_11ba8610();
  /* 11ba19ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba19f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba19f5 push eax */
  push32((uint32_t)(EAX));
  /* 11ba19f6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11ba19f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba19fa call 0x11ba1870 */
  push32(0x11ba19ffu); f_11ba1870();
  /* 11ba19ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1a02 mov esp, ebp */
  ESP = (EBP);
  /* 11ba1a04 pop ebp */
  EBP = (pop32());
  /* 11ba1a05 ret  */
  ESPCHK(0x11ba19d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a10 @ 0x11ba1a10 (250 bytes, 90 insns) */
void f_11ba1a10(void) {
  FTRACE(0x11ba1a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1a11 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1a19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba1a1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1a1f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ba1a22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba1a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1a28 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11ba1a2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1a2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1a31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ba1a34:;
  /* 11ba1a34 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1a38 jle 0x11ba1a7b */
  if ((C.zf||C.sf!=C.of)) goto L_11ba1a7b;
  /* 11ba1a3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1a3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba1a40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba1a42 je 0x11ba1a58 */
  if (C.zf) goto L_11ba1a58;
  /* 11ba1a44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1a47 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba1a4a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ba1a4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1a50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1a53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba1a56 jmp 0x11ba1a5f */
  goto L_11ba1a5f;
L_11ba1a58:;
  /* 11ba1a58 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_11ba1a5f:;
  /* 11ba1a5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1a62 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11ba1a65 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ba1a67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1a6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1a6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba1a70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1a73 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1a76 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ba1a79 jmp 0x11ba1a34 */
  goto L_11ba1a34;
L_11ba1a7b:;
  /* 11ba1a7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1a7e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11ba1a81 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1a85 jl 0x11ba1ac4 */
  if ((C.sf!=C.of)) goto L_11ba1ac4;
  /* 11ba1a87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1a8a movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba1a8d cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1a90 jl 0x11ba1ac4 */
  if ((C.sf!=C.of)) goto L_11ba1ac4;
  /* 11ba1a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1a95 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1a98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba1a9b:;
  /* 11ba1a9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1a9e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba1aa1 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1aa4 jne 0x11ba1ab7 */
  if (!C.zf) goto L_11ba1ab7;
  /* 11ba1aa6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1aa9 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11ba1aac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1aaf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1ab2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba1ab5 jmp 0x11ba1a9b */
  goto L_11ba1a9b;
L_11ba1ab7:;
  /* 11ba1ab7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1aba mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba1abc add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba1abf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1ac2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_11ba1ac4:;
  /* 11ba1ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1ac7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba1aca cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1acd jne 0x11ba1ae0 */
  if (!C.zf) goto L_11ba1ae0;
  /* 11ba1acf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1ad2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba1ad5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1ad8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1adb mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ba1ade jmp 0x11ba1b06 */
  goto L_11ba1b06;
L_11ba1ae0:;
  /* 11ba1ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1ae3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1ae6 push eax */
  push32((uint32_t)(EAX));
  /* 11ba1ae7 call 0x11b9fe80 */
  push32(0x11ba1aecu); f_11b9fe80();
  /* 11ba1aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1aef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1af2 push eax */
  push32((uint32_t)(EAX));
  /* 11ba1af3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1af6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1af9 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1afa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1afd push edx */
  push32((uint32_t)(EDX));
  /* 11ba1afe call 0x11ba1d60 */
  push32(0x11ba1b03u); f_11ba1d60();
  /* 11ba1b03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba1b06:;
  /* 11ba1b06 mov esp, ebp */
  ESP = (EBP);
  /* 11ba1b08 pop ebp */
  EBP = (pop32());
  /* 11ba1b09 ret  */
  ESPCHK(0x11ba1a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b10 @ 0x11ba1b10 (119 bytes, 44 insns) */
void f_11ba1b10(void) {
  FTRACE(0x11ba1b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1b11 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1b13 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1b16 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ba1b19 push eax */
  push32((uint32_t)(EAX));
  /* 11ba1b1a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11ba1b1d push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1b1e call 0x11ba1b90 */
  push32(0x11ba1b23u); f_11ba1b90();
  /* 11ba1b23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1b26 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 11ba1b29 push edx */
  push32((uint32_t)(EDX));
  /* 11ba1b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba1b2c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11ba1b2e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1b31 mov eax, esp */
  EAX = (ESP);
  /* 11ba1b33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1b36 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ba1b38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1b3b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ba1b3e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba1b42 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 11ba1b46 call 0x11ba9190 */
  push32(0x11ba1b4bu); f_11ba9190();
  /* 11ba1b4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1b4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1b51 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ba1b54 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11ba1b58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1b5b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ba1b5d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11ba1b61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1b64 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ba1b67 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 11ba1b6a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba1b6b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba1b6e push edx */
  push32((uint32_t)(EDX));
  /* 11ba1b6f call 0x11ba0000 */
  push32(0x11ba1b74u); f_11ba0000();
  /* 11ba1b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1b77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1b7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba1b7d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11ba1b80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1b83 mov esp, ebp */
  ESP = (EBP);
  /* 11ba1b85 pop ebp */
  EBP = (pop32());
  /* 11ba1b86 ret  */
  ESPCHK(0x11ba1b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x11ba1b90 (354 bytes, 104 insns) */
void f_11ba1b90(void) {
  FTRACE(0x11ba1b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1b91 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1b93 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1b96 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 11ba1b9d mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba1ba3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1ba6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1ba8 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 11ba1bac and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1bb2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ba1bb5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11ba1bb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1bbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1bbe mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11ba1bc2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1bc7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11ba1bcb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1bce mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba1bd1 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1bd7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba1bda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1bdd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba1bdf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba1be2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba1be5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1beb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba1bee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1bf2 je 0x11ba1c07 */
  if (C.zf) goto L_11ba1c07;
  /* 11ba1bf4 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1bfb je 0x11ba1bff */
  if (C.zf) goto L_11ba1bff;
  /* 11ba1bfd jmp 0x11ba1c4a */
  goto L_11ba1c4a;
L_11ba1bff:;
  /* 11ba1bff mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 11ba1c05 jmp 0x11ba1c65 */
  goto L_11ba1c65;
L_11ba1c07:;
  /* 11ba1c07 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1c0b jne 0x11ba1c34 */
  if (!C.zf) goto L_11ba1c34;
  /* 11ba1c0d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1c11 jne 0x11ba1c34 */
  if (!C.zf) goto L_11ba1c34;
  /* 11ba1c13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1c16 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11ba1c1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1c20 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11ba1c26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1c29 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 11ba1c2f jmp 0x11ba1cee */
  goto L_11ba1cee;
L_11ba1c34:;
  /* 11ba1c34 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11ba1c38 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1c3d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ba1c41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba1c48 jmp 0x11ba1c65 */
  goto L_11ba1c65;
L_11ba1c4a:;
  /* 11ba1c4a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11ba1c4e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ba1c53 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11ba1c57 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11ba1c5b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1c61 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11ba1c65:;
  /* 11ba1c65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba1c68 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11ba1c6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba1c6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1c70 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba1c73 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 11ba1c76 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1c78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1c7b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ba1c7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba1c81 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11ba1c84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1c87 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ba1c89:;
  /* 11ba1c89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1c8c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba1c8f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1c95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba1c97 jne 0x11ba1cd4 */
  if (!C.zf) goto L_11ba1cd4;
  /* 11ba1c99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1c9c mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba1c9f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ba1ca1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1ca4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba1ca6 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1cac neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba1cae sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1cb0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba1cb2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1cb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1cb7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ba1cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1cbd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba1cbf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ba1cc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1cc4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ba1cc6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ba1cca sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11ba1cce mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11ba1cd2 jmp 0x11ba1c89 */
  goto L_11ba1c89;
L_11ba1cd4:;
  /* 11ba1cd4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba1cd7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1cdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba1cdf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1ce5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1cea mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_11ba1cee:;
  /* 11ba1cee mov esp, ebp */
  ESP = (EBP);
  /* 11ba1cf0 pop ebp */
  EBP = (pop32());
  /* 11ba1cf1 ret  */
  ESPCHK(0x11ba1b90u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11ba1d00 (88 bytes, 40 insns) */
void f_11ba1d00(void) {
  FTRACE(0x11ba1d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1d00 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ba1d04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ba1d08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba1d0a je 0x11ba1d53 */
  if (C.zf) goto L_11ba1d53;
  /* 11ba1d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1d0e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11ba1d12 push edi */
  push32((uint32_t)(EDI));
  /* 11ba1d13 mov edi, ecx */
  EDI = (ECX);
  /* 11ba1d15 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1d18 jb 0x11ba1d47 */
  if (C.cf) goto L_11ba1d47;
  /* 11ba1d1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba1d1c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba1d1f je 0x11ba1d29 */
  if (C.zf) goto L_11ba1d29;
  /* 11ba1d21 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11ba1d23:;
  /* 11ba1d23 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba1d25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ba1d26 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ba1d27 jne 0x11ba1d23 */
  if (!C.zf) goto L_11ba1d23;
L_11ba1d29:;
  /* 11ba1d29 mov ecx, eax */
  ECX = (EAX);
  /* 11ba1d2b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ba1d2e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1d30 mov ecx, eax */
  ECX = (EAX);
  /* 11ba1d32 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ba1d35 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1d37 mov ecx, edx */
  ECX = (EDX);
  /* 11ba1d39 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1d3c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba1d3f je 0x11ba1d47 */
  if (C.zf) goto L_11ba1d47;
  /* 11ba1d41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11ba1d43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba1d45 je 0x11ba1d4d */
  if (C.zf) goto L_11ba1d4d;
L_11ba1d47:;
  /* 11ba1d47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba1d49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ba1d4a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ba1d4b jne 0x11ba1d47 */
  if (!C.zf) goto L_11ba1d47;
L_11ba1d4d:;
  /* 11ba1d4d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba1d51 pop edi */
  EDI = (pop32());
  /* 11ba1d52 ret  */
  ESPCHK(0x11ba1d00u, _esp0);
  ESP += 4; return;
L_11ba1d53:;
  /* 11ba1d53 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ba1d57 ret  */
  ESPCHK(0x11ba1d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d60 @ 0x11ba1d60 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11ba1d60(void) {
  FTRACE(0x11ba1d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba1d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba1d61 mov ebp, esp */
  EBP = (ESP);
  /* 11ba1d63 push edi */
  push32((uint32_t)(EDI));
  /* 11ba1d64 push esi */
  push32((uint32_t)(ESI));
  /* 11ba1d65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba1d68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba1d6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1d6e mov eax, ecx */
  EAX = (ECX);
  /* 11ba1d70 mov edx, ecx */
  EDX = (ECX);
  /* 11ba1d72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1d74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1d76 jbe 0x11ba1d80 */
  if ((C.cf||C.zf)) goto L_11ba1d80;
  /* 11ba1d78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1d7a jb 0x11ba1ef8 */
  if (C.cf) goto L_11ba1ef8;
L_11ba1d80:;
  /* 11ba1d80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ba1d86 jne 0x11ba1d9c */
  if (!C.zf) goto L_11ba1d9c;
  /* 11ba1d88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba1d8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1d8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1d91 jb 0x11ba1dbc */
  if (C.cf) goto L_11ba1dbc;
  /* 11ba1d93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba1d95 jmp dword ptr [edx*4 + 0x11ba1ea8] */
  switch (EDX) {
    case 0: goto L_11ba1eb8;
    case 1: goto L_11ba1ec0;
    case 2: goto L_11ba1ecc;
    case 3: goto L_11ba1ee0;
    default: x86_unimpl("switch@0x11ba1d95 out of table"); return;
  }
L_11ba1d9c:;
  /* 11ba1d9c mov eax, edi */
  EAX = (EDI);
  /* 11ba1d9e mov edx, 3 */
  EDX = (0x3u);
  /* 11ba1da3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1da6 jb 0x11ba1db4 */
  if (C.cf) goto L_11ba1db4;
  /* 11ba1da8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1dab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1dad jmp dword ptr [eax*4 + 0x11ba1dc0] */
  switch (EAX) {
    case 1: goto L_11ba1dd0;
    case 2: goto L_11ba1dfc;
    case 3: goto L_11ba1e20;
    default: x86_unimpl("switch@0x11ba1dad out of table"); return;
  }
L_11ba1db4:;
  /* 11ba1db4 jmp dword ptr [ecx*4 + 0x11ba1eb8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11ba1eb8)))); return;
  /* 11ba1dbb nop  */
  /* nop */
L_11ba1dbc:;
  /* 11ba1dbc jmp dword ptr [ecx*4 + 0x11ba1e3c] */
  switch (ECX) {
    case 0: goto L_11ba1e9f;
    case 1: goto L_11ba1e8c;
    case 2: goto L_11ba1e84;
    case 3: goto L_11ba1e7c;
    case 4: goto L_11ba1e74;
    case 5: goto L_11ba1e6c;
    case 6: goto L_11ba1e64;
    case 7: goto L_11ba1e5c;
    default: x86_unimpl("switch@0x11ba1dbc out of table"); return;
  }
  /* 11ba1dc3 nop  */
  /* nop */
L_11ba1dd0:;
  /* 11ba1dd0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1dd2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba1dd4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba1dd6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba1dd9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba1ddc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba1ddf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba1de2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba1de5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1de8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1deb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1dee jb 0x11ba1dbc */
  if (C.cf) goto L_11ba1dbc;
  /* 11ba1df0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba1df2 jmp dword ptr [edx*4 + 0x11ba1ea8] */
  switch (EDX) {
    case 0: goto L_11ba1eb8;
    case 1: goto L_11ba1ec0;
    case 2: goto L_11ba1ecc;
    case 3: goto L_11ba1ee0;
    default: x86_unimpl("switch@0x11ba1df2 out of table"); return;
  }
  /* 11ba1df9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba1dfc:;
  /* 11ba1dfc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1dfe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba1e00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba1e02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba1e05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba1e08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba1e0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1e0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1e11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1e14 jb 0x11ba1dbc */
  if (C.cf) goto L_11ba1dbc;
  /* 11ba1e16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba1e18 jmp dword ptr [edx*4 + 0x11ba1ea8] */
  switch (EDX) {
    case 0: goto L_11ba1eb8;
    case 1: goto L_11ba1ec0;
    case 2: goto L_11ba1ecc;
    case 3: goto L_11ba1ee0;
    default: x86_unimpl("switch@0x11ba1e18 out of table"); return;
  }
  /* 11ba1e1f nop  */
  /* nop */
L_11ba1e20:;
  /* 11ba1e20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1e22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba1e24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba1e26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ba1e27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba1e2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ba1e2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1e2e jb 0x11ba1dbc */
  if (C.cf) goto L_11ba1dbc;
  /* 11ba1e30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba1e32 jmp dword ptr [edx*4 + 0x11ba1ea8] */
  switch (EDX) {
    case 0: goto L_11ba1eb8;
    case 1: goto L_11ba1ec0;
    case 2: goto L_11ba1ecc;
    case 3: goto L_11ba1ee0;
    default: x86_unimpl("switch@0x11ba1e32 out of table"); return;
  }
  /* 11ba1e39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba1e5c:;
  /* 11ba1e5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11ba1e60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11ba1e64:;
  /* 11ba1e64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11ba1e68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11ba1e6c:;
  /* 11ba1e6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11ba1e70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11ba1e74:;
  /* 11ba1e74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11ba1e78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11ba1e7c:;
  /* 11ba1e7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11ba1e80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11ba1e84:;
  /* 11ba1e84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11ba1e88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11ba1e8c:;
  /* 11ba1e8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11ba1e90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11ba1e94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ba1e9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba1e9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ba1e9f:;
  /* 11ba1e9f jmp dword ptr [edx*4 + 0x11ba1ea8] */
  switch (EDX) {
    case 0: goto L_11ba1eb8;
    case 1: goto L_11ba1ec0;
    case 2: goto L_11ba1ecc;
    case 3: goto L_11ba1ee0;
    default: x86_unimpl("switch@0x11ba1e9f out of table"); return;
  }
  /* 11ba1ea6 mov edi, edi */
  EDI = (EDI);
L_11ba1eb8:;
  /* 11ba1eb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1ebb pop esi */
  ESI = (pop32());
  /* 11ba1ebc pop edi */
  EDI = (pop32());
  /* 11ba1ebd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba1ebe ret  */
  ESPCHK(0x11ba1d60u, _esp0);
  ESP += 4; return;
  /* 11ba1ebf nop  */
  /* nop */
L_11ba1ec0:;
  /* 11ba1ec0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba1ec2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba1ec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1ec7 pop esi */
  ESI = (pop32());
  /* 11ba1ec8 pop edi */
  EDI = (pop32());
  /* 11ba1ec9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba1eca ret  */
  ESPCHK(0x11ba1d60u, _esp0);
  ESP += 4; return;
  /* 11ba1ecb nop  */
  /* nop */
L_11ba1ecc:;
  /* 11ba1ecc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba1ece mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba1ed0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba1ed3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba1ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1ed9 pop esi */
  ESI = (pop32());
  /* 11ba1eda pop edi */
  EDI = (pop32());
  /* 11ba1edb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba1edc ret  */
  ESPCHK(0x11ba1d60u, _esp0);
  ESP += 4; return;
  /* 11ba1edd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba1ee0:;
  /* 11ba1ee0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba1ee2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba1ee4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba1ee7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba1eea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba1eed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba1ef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba1ef3 pop esi */
  ESI = (pop32());
  /* 11ba1ef4 pop edi */
  EDI = (pop32());
  /* 11ba1ef5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba1ef6 ret  */
  ESPCHK(0x11ba1d60u, _esp0);
  ESP += 4; return;
  /* 11ba1ef7 nop  */
  /* nop */
L_11ba1ef8:;
  /* 11ba1ef8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ba1efc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ba1f00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ba1f06 jne 0x11ba1f2c */
  if (!C.zf) goto L_11ba1f2c;
  /* 11ba1f08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba1f0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1f0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1f11 jb 0x11ba1f20 */
  if (C.cf) goto L_11ba1f20;
  /* 11ba1f13 std  */
  C.df=1;
  /* 11ba1f14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba1f16 cld  */
  C.df=0;
  /* 11ba1f17 jmp dword ptr [edx*4 + 0x11ba2040] */
  switch (EDX) {
    case 0: goto L_11ba2050;
    case 1: goto L_11ba2058;
    case 2: goto L_11ba2068;
    case 3: goto L_11ba207c;
    default: x86_unimpl("switch@0x11ba1f17 out of table"); return;
  }
  /* 11ba1f1e mov edi, edi */
  EDI = (EDI);
L_11ba1f20:;
  /* 11ba1f20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba1f22 jmp dword ptr [ecx*4 + 0x11ba1ff0] */
  switch (ECX) {
    case 0: goto L_11ba2037;
    default: x86_unimpl("switch@0x11ba1f22 out of table"); return;
  }
  /* 11ba1f29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba1f2c:;
  /* 11ba1f2c mov eax, edi */
  EAX = (EDI);
  /* 11ba1f2e mov edx, 3 */
  EDX = (0x3u);
  /* 11ba1f33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1f36 jb 0x11ba1f44 */
  if (C.cf) goto L_11ba1f44;
  /* 11ba1f38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba1f3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1f3d jmp dword ptr [eax*4 + 0x11ba1f48] */
  switch (EAX) {
    case 1: goto L_11ba1f58;
    case 2: goto L_11ba1f78;
    case 3: goto L_11ba1fa0;
    default: x86_unimpl("switch@0x11ba1f3d out of table"); return;
  }
L_11ba1f44:;
  /* 11ba1f44 jmp dword ptr [ecx*4 + 0x11ba2040] */
  switch (ECX) {
    case 0: goto L_11ba2050;
    case 1: goto L_11ba2058;
    case 2: goto L_11ba2068;
    case 3: goto L_11ba207c;
    default: x86_unimpl("switch@0x11ba1f44 out of table"); return;
  }
  /* 11ba1f4b nop  */
  /* nop */
L_11ba1f58:;
  /* 11ba1f58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba1f5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1f5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba1f60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ba1f61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba1f64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ba1f65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1f68 jb 0x11ba1f20 */
  if (C.cf) goto L_11ba1f20;
  /* 11ba1f6a std  */
  C.df=1;
  /* 11ba1f6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba1f6d cld  */
  C.df=0;
  /* 11ba1f6e jmp dword ptr [edx*4 + 0x11ba2040] */
  switch (EDX) {
    case 0: goto L_11ba2050;
    case 1: goto L_11ba2058;
    case 2: goto L_11ba2068;
    case 3: goto L_11ba207c;
    default: x86_unimpl("switch@0x11ba1f6e out of table"); return;
  }
  /* 11ba1f75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba1f78:;
  /* 11ba1f78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba1f7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1f7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba1f80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba1f83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba1f86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba1f89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1f8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1f8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1f92 jb 0x11ba1f20 */
  if (C.cf) goto L_11ba1f20;
  /* 11ba1f94 std  */
  C.df=1;
  /* 11ba1f95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba1f97 cld  */
  C.df=0;
  /* 11ba1f98 jmp dword ptr [edx*4 + 0x11ba2040] */
  switch (EDX) {
    case 0: goto L_11ba2050;
    case 1: goto L_11ba2058;
    case 2: goto L_11ba2068;
    case 3: goto L_11ba207c;
    default: x86_unimpl("switch@0x11ba1f98 out of table"); return;
  }
  /* 11ba1f9f nop  */
  /* nop */
L_11ba1fa0:;
  /* 11ba1fa0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba1fa3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba1fa5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba1fa8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba1fab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba1fae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba1fb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba1fb4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba1fb7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1fba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba1fbd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba1fc0 jb 0x11ba1f20 */
  if (C.cf) goto L_11ba1f20;
  /* 11ba1fc6 std  */
  C.df=1;
  /* 11ba1fc7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba1fc9 cld  */
  C.df=0;
  /* 11ba1fca jmp dword ptr [edx*4 + 0x11ba2040] */
  switch (EDX) {
    case 0: goto L_11ba2050;
    case 1: goto L_11ba2058;
    case 2: goto L_11ba2068;
    case 3: goto L_11ba207c;
    default: x86_unimpl("switch@0x11ba1fca out of table"); return;
  }
  /* 11ba1fd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11ba1fd4 hlt  */
  x86_unimpl("hlt @ 0x11ba1fd4");
  /* 11ba1fd5 pop ds */
  C.seg_ds = (pop32());
  /* 11ba1fd6 mov edx, 0xba1ffc11 */
  EDX = (0xba1ffc11u);
  /* 11ba1fdb adc dword ptr [eax], eax */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ba1fde mov edx, 0xba200c11 */
  EDX = (0xba200c11u);
  /* 11ba1fe3 adc dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ba1fe6 mov edx, 0xba201c11 */
  EDX = (0xba201c11u);
  /* 11ba1feb adc dword ptr [eax], esp */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11ba1ff4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11ba1ff8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11ba1ffc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11ba2000 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11ba2004 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11ba2008 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11ba200c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11ba2010 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11ba2014 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11ba2018 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11ba201c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11ba2020 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11ba2024 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11ba2028 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11ba202c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ba2033 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2035 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ba2037:;
  /* 11ba2037 jmp dword ptr [edx*4 + 0x11ba2040] */
  switch (EDX) {
    case 0: goto L_11ba2050;
    case 1: goto L_11ba2058;
    case 2: goto L_11ba2068;
    case 3: goto L_11ba207c;
    default: x86_unimpl("switch@0x11ba2037 out of table"); return;
  }
  /* 11ba203e mov edi, edi */
  EDI = (EDI);
L_11ba2050:;
  /* 11ba2050 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2053 pop esi */
  ESI = (pop32());
  /* 11ba2054 pop edi */
  EDI = (pop32());
  /* 11ba2055 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba2056 ret  */
  ESPCHK(0x11ba1d60u, _esp0);
  ESP += 4; return;
  /* 11ba2057 nop  */
  /* nop */
L_11ba2058:;
  /* 11ba2058 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba205b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba205e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2061 pop esi */
  ESI = (pop32());
  /* 11ba2062 pop edi */
  EDI = (pop32());
  /* 11ba2063 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba2064 ret  */
  ESPCHK(0x11ba1d60u, _esp0);
  ESP += 4; return;
  /* 11ba2065 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba2068:;
  /* 11ba2068 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba206b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba206e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba2071 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba2074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2077 pop esi */
  ESI = (pop32());
  /* 11ba2078 pop edi */
  EDI = (pop32());
  /* 11ba2079 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba207a ret  */
  ESPCHK(0x11ba1d60u, _esp0);
  ESP += 4; return;
  /* 11ba207b nop  */
  /* nop */
L_11ba207c:;
  /* 11ba207c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba207f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba2082 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba2085 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba2088 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba208b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba208e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2091 pop esi */
  ESI = (pop32());
  /* 11ba2092 pop edi */
  EDI = (pop32());
  /* 11ba2093 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba2094 ret  */
  ESPCHK(0x11ba1d60u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11ba20a0 (15 bytes, 7 insns) */
void f_11ba20a0(void) {
  FTRACE(0x11ba20a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba20a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba20a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba20a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba20a5 call 0x11b99240 */
  push32(0x11ba20aau); f_11b99240();
  /* 11ba20aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba20ad pop ebp */
  EBP = (pop32());
  /* 11ba20ae ret  */
  ESPCHK(0x11ba20a0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11ba20b0 (48 bytes, 17 insns) */
void f_11ba20b0(void) {
  FTRACE(0x11ba20b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba20b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba20b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba20b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba20b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba20b6 call 0x11b9a6d0 */
  push32(0x11ba20bbu); f_11b9a6d0();
  /* 11ba20bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba20be mov eax, dword ptr [0x11bce554] */
  EAX = (r32((uint32_t)(0x11bce554)));
  /* 11ba20c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba20c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba20c9 mov dword ptr [0x11bce554], ecx */
  w32((uint32_t)(0x11bce554), (ECX));
  /* 11ba20cf push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba20d1 call 0x11b9a770 */
  push32(0x11ba20d6u); f_11b9a770();
  /* 11ba20d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba20d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba20dc mov esp, ebp */
  ESP = (EBP);
  /* 11ba20de pop ebp */
  EBP = (pop32());
  /* 11ba20df ret  */
  ESPCHK(0x11ba20b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x11ba20e0 (10 bytes, 5 insns) */
void f_11ba20e0(void) {
  FTRACE(0x11ba20e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba20e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba20e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba20e3 mov eax, dword ptr [0x11bce554] */
  EAX = (r32((uint32_t)(0x11bce554)));
  /* 11ba20e8 pop ebp */
  EBP = (pop32());
  /* 11ba20e9 ret  */
  ESPCHK(0x11ba20e0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11ba20f0 (45 bytes, 19 insns) */
void f_11ba20f0(void) {
  FTRACE(0x11ba20f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba20f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba20f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba20f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba20f4 mov eax, dword ptr [0x11bce554] */
  EAX = (r32((uint32_t)(0x11bce554)));
  /* 11ba20f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba20fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2100 je 0x11ba2110 */
  if (C.zf) goto L_11ba2110;
  /* 11ba2102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2105 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2106 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11ba2109u);
  /* 11ba2109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba210c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba210e jne 0x11ba2114 */
  if (!C.zf) goto L_11ba2114;
L_11ba2110:;
  /* 11ba2110 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2112 jmp 0x11ba2119 */
  goto L_11ba2119;
L_11ba2114:;
  /* 11ba2114 mov eax, 1 */
  EAX = (0x1u);
L_11ba2119:;
  /* 11ba2119 mov esp, ebp */
  ESP = (EBP);
  /* 11ba211b pop ebp */
  EBP = (pop32());
  /* 11ba211c ret  */
  ESPCHK(0x11ba20f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012120 @ 0x11ba2120 (23 bytes, 10 insns) */
void f_11ba2120(void) {
  FTRACE(0x11ba2120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba2120 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba2121 mov ebp, esp */
  EBP = (ESP);
  /* 11ba2123 mov eax, dword ptr [0x11bce550] */
  EAX = (r32((uint32_t)(0x11bce550)));
  /* 11ba2128 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba212c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba212d call 0x11ba2140 */
  push32(0x11ba2132u); f_11ba2140();
  /* 11ba2132 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2135 pop ebp */
  EBP = (pop32());
  /* 11ba2136 ret  */
  ESPCHK(0x11ba2120u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11ba2140 (87 bytes, 34 insns) */
void f_11ba2140(void) {
  FTRACE(0x11ba2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba2140 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba2141 mov ebp, esp */
  EBP = (ESP);
  /* 11ba2143 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2144 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2148 jbe 0x11ba214e */
  if ((C.cf||C.zf)) goto L_11ba214e;
  /* 11ba214a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba214c jmp 0x11ba2193 */
  goto L_11ba2193;
L_11ba214e:;
  /* 11ba214e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2152 ja 0x11ba2165 */
  if ((!C.cf&&!C.zf)) goto L_11ba2165;
  /* 11ba2154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2157 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2158 call 0x11ba21a0 */
  push32(0x11ba215du); f_11ba21a0();
  /* 11ba215d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2160 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba2163 jmp 0x11ba216c */
  goto L_11ba216c;
L_11ba2165:;
  /* 11ba2165 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ba216c:;
  /* 11ba216c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2170 jne 0x11ba2178 */
  if (!C.zf) goto L_11ba2178;
  /* 11ba2172 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2176 jne 0x11ba217d */
  if (!C.zf) goto L_11ba217d;
L_11ba2178:;
  /* 11ba2178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba217b jmp 0x11ba2193 */
  goto L_11ba2193;
L_11ba217d:;
  /* 11ba217d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2180 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2181 call 0x11ba20f0 */
  push32(0x11ba2186u); f_11ba20f0();
  /* 11ba2186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba218b jne 0x11ba2191 */
  if (!C.zf) goto L_11ba2191;
  /* 11ba218d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba218f jmp 0x11ba2193 */
  goto L_11ba2193;
L_11ba2191:;
  /* 11ba2191 jmp 0x11ba214e */
  goto L_11ba214e;
L_11ba2193:;
  /* 11ba2193 mov esp, ebp */
  ESP = (EBP);
  /* 11ba2195 pop ebp */
  EBP = (pop32());
  /* 11ba2196 ret  */
  ESPCHK(0x11ba2140u, _esp0);
  ESP += 4; return;
}

/* FUN_100121a0 @ 0x11ba21a0 (109 bytes, 37 insns) */
void f_11ba21a0(void) {
  FTRACE(0x11ba21a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba21a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba21a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba21a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba21a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba21a7 cmp eax, dword ptr [0x11bcc254] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcc254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba21ad ja 0x11ba21dd */
  if ((!C.cf&&!C.zf)) goto L_11ba21dd;
  /* 11ba21af push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba21b1 call 0x11b9a6d0 */
  push32(0x11ba21b6u); f_11b9a6d0();
  /* 11ba21b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba21b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba21bc push ecx */
  push32((uint32_t)(ECX));
  /* 11ba21bd call 0x11ba2ce0 */
  push32(0x11ba21c2u); f_11ba2ce0();
  /* 11ba21c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba21c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba21c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba21ca call 0x11b9a770 */
  push32(0x11ba21cfu); f_11b9a770();
  /* 11ba21cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba21d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba21d6 je 0x11ba21dd */
  if (C.zf) goto L_11ba21dd;
  /* 11ba21d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba21db jmp 0x11ba2209 */
  goto L_11ba2209;
L_11ba21dd:;
  /* 11ba21dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba21e1 jne 0x11ba21ea */
  if (!C.zf) goto L_11ba21ea;
  /* 11ba21e3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11ba21ea:;
  /* 11ba21ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba21ed add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba21f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba21f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11ba21f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba21f9 push eax */
  push32((uint32_t)(EAX));
  /* 11ba21fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba21fc mov ecx, dword ptr [0x11bcfd28] */
  ECX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba2202 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2203 call dword ptr [0x11bd0384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0384))), 0x11ba2209u);
L_11ba2209:;
  /* 11ba2209 mov esp, ebp */
  ESP = (EBP);
  /* 11ba220b pop ebp */
  EBP = (pop32());
  /* 11ba220c ret  */
  ESPCHK(0x11ba21a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012210 @ 0x11ba2210 (10 bytes, 5 insns) */
void f_11ba2210(void) {
  FTRACE(0x11ba2210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba2210 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba2211 mov ebp, esp */
  EBP = (ESP);
  /* 11ba2213 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba2218 pop ebp */
  EBP = (pop32());
  /* 11ba2219 ret  */
  ESPCHK(0x11ba2210u, _esp0);
  ESP += 4; return;
}

/* FUN_10012220 @ 0x11ba2220 (173 bytes, 59 insns) */
void f_11ba2220(void) {
  FTRACE(0x11ba2220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba2220 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba2221 mov ebp, esp */
  EBP = (ESP);
  /* 11ba2223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2226 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba222a jbe 0x11ba2233 */
  if ((C.cf||C.zf)) goto L_11ba2233;
  /* 11ba222c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba222e jmp 0x11ba22c9 */
  goto L_11ba22c9;
L_11ba2233:;
  /* 11ba2233 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba2235 call 0x11b9a6d0 */
  push32(0x11ba223au); f_11b9a6d0();
  /* 11ba223a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba223d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2240 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2241 call 0x11ba2650 */
  push32(0x11ba2246u); f_11ba2650();
  /* 11ba2246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2249 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba224c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2250 je 0x11ba2291 */
  if (C.zf) goto L_11ba2291;
  /* 11ba2252 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba2259 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba225c cmp ecx, dword ptr [0x11bcc254] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcc254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2262 ja 0x11ba2282 */
  if ((!C.cf&&!C.zf)) goto L_11ba2282;
  /* 11ba2264 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba2267 push edx */
  push32((uint32_t)(EDX));
  /* 11ba2268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba226b push eax */
  push32((uint32_t)(EAX));
  /* 11ba226c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba226f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2270 call 0x11ba3520 */
  push32(0x11ba2275u); f_11ba3520();
  /* 11ba2275 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2278 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba227a je 0x11ba2282 */
  if (C.zf) goto L_11ba2282;
  /* 11ba227c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba227f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba2282:;
  /* 11ba2282 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba2284 call 0x11b9a770 */
  push32(0x11ba2289u); f_11b9a770();
  /* 11ba2289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba228c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba228f jmp 0x11ba22c9 */
  goto L_11ba22c9;
L_11ba2291:;
  /* 11ba2291 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba2293 call 0x11b9a770 */
  push32(0x11ba2298u); f_11b9a770();
  /* 11ba2298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba229b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba229f jne 0x11ba22a8 */
  if (!C.zf) goto L_11ba22a8;
  /* 11ba22a1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11ba22a8:;
  /* 11ba22a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba22ab add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba22ae and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11ba22b0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11ba22b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba22b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba22b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba22ba push edx */
  push32((uint32_t)(EDX));
  /* 11ba22bb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11ba22bd mov eax, dword ptr [0x11bcfd28] */
  EAX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba22c2 push eax */
  push32((uint32_t)(EAX));
  /* 11ba22c3 call dword ptr [0x11bd0380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0380))), 0x11ba22c9u);
L_11ba22c9:;
  /* 11ba22c9 mov esp, ebp */
  ESP = (EBP);
  /* 11ba22cb pop ebp */
  EBP = (pop32());
  /* 11ba22cc ret  */
  ESPCHK(0x11ba2220u, _esp0);
  ESP += 4; return;
}

/* FUN_100122d0 @ 0x11ba22d0 (490 bytes, 165 insns) */
void f_11ba22d0(void) {
  FTRACE(0x11ba22d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba22d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba22d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba22d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba22d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba22da jne 0x11ba22ed */
  if (!C.zf) goto L_11ba22ed;
  /* 11ba22dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba22df push eax */
  push32((uint32_t)(EAX));
  /* 11ba22e0 call 0x11ba2120 */
  push32(0x11ba22e5u); f_11ba2120();
  /* 11ba22e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba22e8 jmp 0x11ba24b6 */
  goto L_11ba24b6;
L_11ba22ed:;
  /* 11ba22ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba22f1 jne 0x11ba2306 */
  if (!C.zf) goto L_11ba2306;
  /* 11ba22f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba22f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba22f7 call 0x11ba24c0 */
  push32(0x11ba22fcu); f_11ba24c0();
  /* 11ba22fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba22ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2301 jmp 0x11ba24b6 */
  goto L_11ba24b6;
L_11ba2306:;
  /* 11ba2306 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba230d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2311 ja 0x11ba2489 */
  if ((!C.cf&&!C.zf)) goto L_11ba2489;
  /* 11ba2317 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba2319 call 0x11b9a6d0 */
  push32(0x11ba231eu); f_11b9a6d0();
  /* 11ba231e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2324 push edx */
  push32((uint32_t)(EDX));
  /* 11ba2325 call 0x11ba2650 */
  push32(0x11ba232au); f_11ba2650();
  /* 11ba232a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba232d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba2330 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2334 je 0x11ba244c */
  if (C.zf) goto L_11ba244c;
  /* 11ba233a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba233d cmp eax, dword ptr [0x11bcc254] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcc254))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2343 ja 0x11ba23c0 */
  if ((!C.cf&&!C.zf)) goto L_11ba23c0;
  /* 11ba2345 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba2348 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2349 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba234c push edx */
  push32((uint32_t)(EDX));
  /* 11ba234d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba2350 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2351 call 0x11ba3520 */
  push32(0x11ba2356u); f_11ba3520();
  /* 11ba2356 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba235b je 0x11ba2365 */
  if (C.zf) goto L_11ba2365;
  /* 11ba235d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2360 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba2363 jmp 0x11ba23c0 */
  goto L_11ba23c0;
L_11ba2365:;
  /* 11ba2365 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba2368 push edx */
  push32((uint32_t)(EDX));
  /* 11ba2369 call 0x11ba2ce0 */
  push32(0x11ba236eu); f_11ba2ce0();
  /* 11ba236e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2371 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba2374 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2378 je 0x11ba23c0 */
  if (C.zf) goto L_11ba23c0;
  /* 11ba237a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba237d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11ba2380 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2383 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba2386 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2389 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba238c jae 0x11ba2396 */
  if (!C.cf) goto L_11ba2396;
  /* 11ba238e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2391 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba2394 jmp 0x11ba239c */
  goto L_11ba239c;
L_11ba2396:;
  /* 11ba2396 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba2399 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ba239c:;
  /* 11ba239c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba239f push edx */
  push32((uint32_t)(EDX));
  /* 11ba23a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba23a3 push eax */
  push32((uint32_t)(EAX));
  /* 11ba23a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba23a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba23a8 call 0x11ba6240 */
  push32(0x11ba23adu); f_11ba6240();
  /* 11ba23ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba23b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba23b3 push edx */
  push32((uint32_t)(EDX));
  /* 11ba23b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba23b7 push eax */
  push32((uint32_t)(EAX));
  /* 11ba23b8 call 0x11ba2710 */
  push32(0x11ba23bdu); f_11ba2710();
  /* 11ba23bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba23c0:;
  /* 11ba23c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba23c4 jne 0x11ba2440 */
  if (!C.zf) goto L_11ba2440;
  /* 11ba23c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba23ca jne 0x11ba23d3 */
  if (!C.zf) goto L_11ba23d3;
  /* 11ba23cc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11ba23d3:;
  /* 11ba23d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba23d6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba23d9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba23dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11ba23df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba23e2 push edx */
  push32((uint32_t)(EDX));
  /* 11ba23e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba23e5 mov eax, dword ptr [0x11bcfd28] */
  EAX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba23ea push eax */
  push32((uint32_t)(EAX));
  /* 11ba23eb call dword ptr [0x11bd0384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0384))), 0x11ba23f1u);
  /* 11ba23f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba23f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba23f8 je 0x11ba2440 */
  if (C.zf) goto L_11ba2440;
  /* 11ba23fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba23fd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ba2400 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2403 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba2406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2409 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba240c jae 0x11ba2416 */
  if (!C.cf) goto L_11ba2416;
  /* 11ba240e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2411 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ba2414 jmp 0x11ba241c */
  goto L_11ba241c;
L_11ba2416:;
  /* 11ba2416 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba2419 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11ba241c:;
  /* 11ba241c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba241f push eax */
  push32((uint32_t)(EAX));
  /* 11ba2420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2423 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2424 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba2427 push edx */
  push32((uint32_t)(EDX));
  /* 11ba2428 call 0x11ba6240 */
  push32(0x11ba242du); f_11ba6240();
  /* 11ba242d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2433 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2434 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba2437 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2438 call 0x11ba2710 */
  push32(0x11ba243du); f_11ba2710();
  /* 11ba243d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba2440:;
  /* 11ba2440 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba2442 call 0x11b9a770 */
  push32(0x11ba2447u); f_11b9a770();
  /* 11ba2447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba244a jmp 0x11ba2489 */
  goto L_11ba2489;
L_11ba244c:;
  /* 11ba244c push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba244e call 0x11b9a770 */
  push32(0x11ba2453u); f_11b9a770();
  /* 11ba2453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2456 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba245a jne 0x11ba2463 */
  if (!C.zf) goto L_11ba2463;
  /* 11ba245c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11ba2463:;
  /* 11ba2463 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba2466 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2469 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba246c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11ba246f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba2472 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2473 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2476 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2477 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba2479 mov edx, dword ptr [0x11bcfd28] */
  EDX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba247f push edx */
  push32((uint32_t)(EDX));
  /* 11ba2480 call dword ptr [0x11bd0380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0380))), 0x11ba2486u);
  /* 11ba2486 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ba2489:;
  /* 11ba2489 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba248d jne 0x11ba2498 */
  if (!C.zf) goto L_11ba2498;
  /* 11ba248f cmp dword ptr [0x11bce550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2496 jne 0x11ba249d */
  if (!C.zf) goto L_11ba249d;
L_11ba2498:;
  /* 11ba2498 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba249b jmp 0x11ba24b6 */
  goto L_11ba24b6;
L_11ba249d:;
  /* 11ba249d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba24a0 push eax */
  push32((uint32_t)(EAX));
  /* 11ba24a1 call 0x11ba20f0 */
  push32(0x11ba24a6u); f_11ba20f0();
  /* 11ba24a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba24a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba24ab jne 0x11ba24b1 */
  if (!C.zf) goto L_11ba24b1;
  /* 11ba24ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba24af jmp 0x11ba24b6 */
  goto L_11ba24b6;
L_11ba24b1:;
  /* 11ba24b1 jmp 0x11ba2306 */
  goto L_11ba2306;
L_11ba24b6:;
  /* 11ba24b6 mov esp, ebp */
  ESP = (EBP);
  /* 11ba24b8 pop ebp */
  EBP = (pop32());
  /* 11ba24b9 ret  */
  ESPCHK(0x11ba22d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124c0 @ 0x11ba24c0 (104 bytes, 38 insns) */
void f_11ba24c0(void) {
  FTRACE(0x11ba24c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba24c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba24c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba24c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba24c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba24c8 jne 0x11ba24cc */
  if (!C.zf) goto L_11ba24cc;
  /* 11ba24ca jmp 0x11ba2524 */
  goto L_11ba2524;
L_11ba24cc:;
  /* 11ba24cc push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba24ce call 0x11b9a6d0 */
  push32(0x11ba24d3u); f_11b9a6d0();
  /* 11ba24d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba24d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba24d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ba24da call 0x11ba2650 */
  push32(0x11ba24dfu); f_11ba2650();
  /* 11ba24df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba24e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba24e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba24e9 je 0x11ba2507 */
  if (C.zf) goto L_11ba2507;
  /* 11ba24eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba24ee push ecx */
  push32((uint32_t)(ECX));
  /* 11ba24ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba24f2 push edx */
  push32((uint32_t)(EDX));
  /* 11ba24f3 call 0x11ba2710 */
  push32(0x11ba24f8u); f_11ba2710();
  /* 11ba24f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba24fb push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba24fd call 0x11b9a770 */
  push32(0x11ba2502u); f_11b9a770();
  /* 11ba2502 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2505 jmp 0x11ba2524 */
  goto L_11ba2524;
L_11ba2507:;
  /* 11ba2507 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba2509 call 0x11b9a770 */
  push32(0x11ba250eu); f_11b9a770();
  /* 11ba250e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2511 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2514 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2515 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba2517 mov ecx, dword ptr [0x11bcfd28] */
  ECX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba251d push ecx */
  push32((uint32_t)(ECX));
  /* 11ba251e call dword ptr [0x11bd0390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0390))), 0x11ba2524u);
L_11ba2524:;
  /* 11ba2524 mov esp, ebp */
  ESP = (EBP);
  /* 11ba2526 pop ebp */
  EBP = (pop32());
  /* 11ba2527 ret  */
  ESPCHK(0x11ba24c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012530 @ 0x11ba2530 (116 bytes, 34 insns) */
void f_11ba2530(void) {
  FTRACE(0x11ba2530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba2530 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba2531 mov ebp, esp */
  EBP = (ESP);
  /* 11ba2533 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2534 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11ba253b push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba253d call 0x11b9a6d0 */
  push32(0x11ba2542u); f_11b9a6d0();
  /* 11ba2542 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2545 call 0x11ba3c40 */
  push32(0x11ba254au); f_11ba3c40();
  /* 11ba254a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba254c jge 0x11ba2555 */
  if ((C.sf==C.of)) goto L_11ba2555;
  /* 11ba254e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11ba2555:;
  /* 11ba2555 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ba2557 call 0x11b9a770 */
  push32(0x11ba255cu); f_11b9a770();
  /* 11ba255c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba255f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba2561 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba2563 mov eax, dword ptr [0x11bcfd28] */
  EAX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba2568 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2569 call dword ptr [0x11bd043c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd043c))), 0x11ba256fu);
  /* 11ba256f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba2571 jne 0x11ba259d */
  if (!C.zf) goto L_11ba259d;
  /* 11ba2573 call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11ba2579u);
  /* 11ba2579 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba257c jne 0x11ba2596 */
  if (!C.zf) goto L_11ba2596;
  /* 11ba257e call 0x11ba6630 */
  push32(0x11ba2583u); f_11ba6630();
  /* 11ba2583 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11ba2589 call 0x11ba6620 */
  push32(0x11ba258eu); f_11ba6620();
  /* 11ba258e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11ba2594 jmp 0x11ba259d */
  goto L_11ba259d;
L_11ba2596:;
  /* 11ba2596 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11ba259d:;
  /* 11ba259d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba25a0 mov esp, ebp */
  ESP = (EBP);
  /* 11ba25a2 pop ebp */
  EBP = (pop32());
  /* 11ba25a3 ret  */
  ESPCHK(0x11ba2530u, _esp0);
  ESP += 4; return;
}

/* FUN_100125b0 @ 0x11ba25b0 (10 bytes, 5 insns) */
void f_11ba25b0(void) {
  FTRACE(0x11ba25b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba25b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba25b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba25b3 call 0x11ba2530 */
  push32(0x11ba25b8u); f_11ba2530();
  /* 11ba25b8 pop ebp */
  EBP = (pop32());
  /* 11ba25b9 ret  */
  ESPCHK(0x11ba25b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x11ba25c0 (10 bytes, 5 insns) */
void f_11ba25c0(void) {
  FTRACE(0x11ba25c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba25c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba25c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba25c3 mov eax, dword ptr [0x11bcc254] */
  EAX = (r32((uint32_t)(0x11bcc254)));
  /* 11ba25c8 pop ebp */
  EBP = (pop32());
  /* 11ba25c9 ret  */
  ESPCHK(0x11ba25c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125d0 @ 0x11ba25d0 (31 bytes, 11 insns) */
void f_11ba25d0(void) {
  FTRACE(0x11ba25d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba25d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba25d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba25d3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba25da jbe 0x11ba25e0 */
  if ((C.cf||C.zf)) goto L_11ba25e0;
  /* 11ba25dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba25de jmp 0x11ba25ed */
  goto L_11ba25ed;
L_11ba25e0:;
  /* 11ba25e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba25e3 mov dword ptr [0x11bcc254], eax */
  w32((uint32_t)(0x11bcc254), (EAX));
  /* 11ba25e8 mov eax, 1 */
  EAX = (0x1u);
L_11ba25ed:;
  /* 11ba25ed pop ebp */
  EBP = (pop32());
  /* 11ba25ee ret  */
  ESPCHK(0x11ba25d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125f0 @ 0x11ba25f0 (89 bytes, 20 insns) */
void f_11ba25f0(void) {
  FTRACE(0x11ba25f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba25f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba25f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba25f3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11ba25f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba25fa mov eax, dword ptr [0x11bcfd28] */
  EAX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba25ff push eax */
  push32((uint32_t)(EAX));
  /* 11ba2600 call dword ptr [0x11bd0384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0384))), 0x11ba2606u);
  /* 11ba2606 mov dword ptr [0x11bcfd24], eax */
  w32((uint32_t)(0x11bcfd24), (EAX));
  /* 11ba260b cmp dword ptr [0x11bcfd24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfd24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2612 jne 0x11ba2618 */
  if (!C.zf) goto L_11ba2618;
  /* 11ba2614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2616 jmp 0x11ba2647 */
  goto L_11ba2647;
L_11ba2618:;
  /* 11ba2618 mov ecx, dword ptr [0x11bcfd24] */
  ECX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba261e mov dword ptr [0x11bcfd18], ecx */
  w32((uint32_t)(0x11bcfd18), (ECX));
  /* 11ba2624 mov dword ptr [0x11bcfd1c], 0 */
  w32((uint32_t)(0x11bcfd1c), (0x0u));
  /* 11ba262e mov dword ptr [0x11bcfd20], 0 */
  w32((uint32_t)(0x11bcfd20), (0x0u));
  /* 11ba2638 mov dword ptr [0x11bcfd04], 0x10 */
  w32((uint32_t)(0x11bcfd04), (0x10u));
  /* 11ba2642 mov eax, 1 */
  EAX = (0x1u);
L_11ba2647:;
  /* 11ba2647 pop ebp */
  EBP = (pop32());
  /* 11ba2648 ret  */
  ESPCHK(0x11ba25f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012650 @ 0x11ba2650 (85 bytes, 29 insns) */
void f_11ba2650(void) {
  FTRACE(0x11ba2650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba2650 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba2651 mov ebp, esp */
  EBP = (ESP);
  /* 11ba2653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2656 mov eax, dword ptr [0x11bcfd20] */
  EAX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba265b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba265e mov ecx, dword ptr [0x11bcfd24] */
  ECX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba2664 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2666 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba2669 mov edx, dword ptr [0x11bcfd24] */
  EDX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba266f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ba2672:;
  /* 11ba2672 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba2675 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2678 jae 0x11ba269f */
  if (!C.cf) goto L_11ba269f;
  /* 11ba267a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba267d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2680 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2683 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba2686 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba268d jae 0x11ba2694 */
  if (!C.cf) goto L_11ba2694;
  /* 11ba268f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba2692 jmp 0x11ba26a1 */
  goto L_11ba26a1;
L_11ba2694:;
  /* 11ba2694 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba2697 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba269a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba269d jmp 0x11ba2672 */
  goto L_11ba2672;
L_11ba269f:;
  /* 11ba269f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba26a1:;
  /* 11ba26a1 mov esp, ebp */
  ESP = (EBP);
  /* 11ba26a3 pop ebp */
  EBP = (pop32());
  /* 11ba26a4 ret  */
  ESPCHK(0x11ba2650u, _esp0);
  ESP += 4; return;
}

/* FUN_100126b0 @ 0x11ba26b0 (95 bytes, 33 insns) */
void f_11ba26b0(void) {
  FTRACE(0x11ba26b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba26b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba26b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba26b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba26b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba26b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba26bc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba26bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba26c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba26c5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11ba26c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba26cb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba26d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba26d3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba26d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba26d8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba26db and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba26dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba26df jne 0x11ba2701 */
  if (!C.zf) goto L_11ba2701;
  /* 11ba26e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba26e4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba26e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba26e9 jne 0x11ba2701 */
  if (!C.zf) goto L_11ba2701;
  /* 11ba26eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba26ee and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba26f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba26f6 je 0x11ba2701 */
  if (C.zf) goto L_11ba2701;
  /* 11ba26f8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11ba26ff jmp 0x11ba2708 */
  goto L_11ba2708;
L_11ba2701:;
  /* 11ba2701 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11ba2708:;
  /* 11ba2708 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba270b mov esp, ebp */
  ESP = (EBP);
  /* 11ba270d pop ebp */
  EBP = (pop32());
  /* 11ba270e ret  */
  ESPCHK(0x11ba26b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012710 @ 0x11ba2710 (1485 bytes, 453 insns) */
void f_11ba2710(void) {
  FTRACE(0x11ba2710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba2710 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba2711 mov ebp, esp */
  EBP = (ESP);
  /* 11ba2713 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2719 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba271c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11ba271f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2722 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba2725 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2728 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba272b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba272e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11ba2731 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba2734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2737 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba273d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2740 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11ba2747 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba274a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba274d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2750 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba2753 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2756 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba2758 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba275b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11ba275e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2761 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2764 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11ba2767 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba276a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba276c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ba276f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2772 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11ba2775 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba2778 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba277b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba277e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba2780 jne 0x11ba28a8 */
  if (!C.zf) goto L_11ba28a8;
  /* 11ba2786 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba2789 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ba278c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba278f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ba2792 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2796 jbe 0x11ba279f */
  if ((C.cf||C.zf)) goto L_11ba279f;
  /* 11ba2798 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11ba279f:;
  /* 11ba279f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba27a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba27a5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba27a8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba27ab jne 0x11ba2881 */
  if (!C.zf) goto L_11ba2881;
  /* 11ba27b1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba27b5 jae 0x11ba2816 */
  if (!C.cf) goto L_11ba2816;
  /* 11ba27b7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba27bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba27bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba27c1 not eax */
  EAX = (~(EAX));
  /* 11ba27c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba27c6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba27c9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11ba27cd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba27cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba27d2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba27d5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11ba27d9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba27dc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba27df mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ba27e2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba27e5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba27e8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba27eb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ba27ee mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba27f1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba27f4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba27f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba27fa jne 0x11ba2814 */
  if (!C.zf) goto L_11ba2814;
  /* 11ba27fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba2801 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba2804 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba2806 not eax */
  EAX = (~(EAX));
  /* 11ba2808 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba280b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba280d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba280f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2812 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ba2814:;
  /* 11ba2814 jmp 0x11ba2881 */
  goto L_11ba2881;
L_11ba2816:;
  /* 11ba2816 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba2819 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba281c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba2821 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba2823 not edx */
  EDX = (~(EDX));
  /* 11ba2825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2828 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba282b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ba2832 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2834 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2837 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba283a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11ba2841 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2844 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2847 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ba284a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba284d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2850 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2853 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ba2856 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2859 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba285c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ba2860 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba2862 jne 0x11ba2881 */
  if (!C.zf) goto L_11ba2881;
  /* 11ba2864 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba2867 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba286a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba286f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba2871 not edx */
  EDX = (~(EDX));
  /* 11ba2873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2876 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba2879 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba287b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba287e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ba2881:;
  /* 11ba2881 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2884 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba2887 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba288a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba288d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ba2890 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2893 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba2896 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2899 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba289c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ba289f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba28a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba28a5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11ba28a8:;
  /* 11ba28a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba28ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ba28ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba28b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ba28b4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba28b8 jbe 0x11ba28c1 */
  if ((C.cf||C.zf)) goto L_11ba28c1;
  /* 11ba28ba mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11ba28c1:;
  /* 11ba28c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba28c4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba28c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba28c9 jne 0x11ba2a25 */
  if (!C.zf) goto L_11ba2a25;
  /* 11ba28cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba28d2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba28d5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11ba28d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba28db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ba28de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba28e1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ba28e4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba28e8 jbe 0x11ba28f1 */
  if ((C.cf||C.zf)) goto L_11ba28f1;
  /* 11ba28ea mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11ba28f1:;
  /* 11ba28f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba28f4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba28f7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11ba28fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba28fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ba2900 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2903 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ba2906 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba290a jbe 0x11ba2913 */
  if ((C.cf||C.zf)) goto L_11ba2913;
  /* 11ba290c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11ba2913:;
  /* 11ba2913 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba2916 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2919 je 0x11ba2a1f */
  if (C.zf) goto L_11ba2a1f;
  /* 11ba291f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2922 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2925 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba2928 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba292b jne 0x11ba2a01 */
  if (!C.zf) goto L_11ba2a01;
  /* 11ba2931 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2935 jae 0x11ba2996 */
  if (!C.cf) goto L_11ba2996;
  /* 11ba2937 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba293c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba293f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba2941 not edx */
  EDX = (~(EDX));
  /* 11ba2943 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2946 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2949 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ba294d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba294f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2952 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2955 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ba2959 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba295c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba295f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ba2962 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba2965 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2968 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba296b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ba296e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2971 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2974 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ba2978 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba297a jne 0x11ba2994 */
  if (!C.zf) goto L_11ba2994;
  /* 11ba297c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba2981 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba2984 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba2986 not edx */
  EDX = (~(EDX));
  /* 11ba2988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba298b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba298d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba298f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2992 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ba2994:;
  /* 11ba2994 jmp 0x11ba2a01 */
  goto L_11ba2a01;
L_11ba2996:;
  /* 11ba2996 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba2999 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba299c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba29a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba29a3 not eax */
  EAX = (~(EAX));
  /* 11ba29a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba29a8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba29ab mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ba29b2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba29b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba29b7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba29ba mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11ba29c1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba29c4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba29c7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ba29ca sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba29cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba29d0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba29d3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ba29d6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba29d9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba29dc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba29e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba29e2 jne 0x11ba2a01 */
  if (!C.zf) goto L_11ba2a01;
  /* 11ba29e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba29e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba29ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba29ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba29f1 not eax */
  EAX = (~(EAX));
  /* 11ba29f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba29f6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba29f9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba29fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba29fe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ba2a01:;
  /* 11ba2a01 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2a04 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba2a07 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2a0a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba2a0d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ba2a10 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2a13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba2a16 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2a19 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba2a1c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11ba2a1f:;
  /* 11ba2a1f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2a22 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11ba2a25:;
  /* 11ba2a25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba2a28 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba2a2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba2a2d jne 0x11ba2a3b */
  if (!C.zf) goto L_11ba2a3b;
  /* 11ba2a2f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba2a32 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2a35 je 0x11ba2b4b */
  if (C.zf) goto L_11ba2b4b;
L_11ba2a3b:;
  /* 11ba2a3b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba2a3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba2a41 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11ba2a44 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ba2a47 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2a4a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2a4d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba2a50 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ba2a53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2a56 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2a59 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ba2a5c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2a5f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2a62 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11ba2a65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2a68 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba2a6b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2a6e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ba2a71 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2a74 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2a77 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba2a7a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2a7d jne 0x11ba2b4b */
  if (!C.zf) goto L_11ba2b4b;
  /* 11ba2a83 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2a87 jae 0x11ba2ae4 */
  if (!C.cf) goto L_11ba2ae4;
  /* 11ba2a89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2a8c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2a8f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba2a93 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2a96 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2a99 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ba2a9c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba2a9f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2aa2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2aa5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ba2aa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba2aaa jne 0x11ba2ac2 */
  if (!C.zf) goto L_11ba2ac2;
  /* 11ba2aac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba2ab1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba2ab4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba2ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2ab9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba2abb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba2abd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2ac0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ba2ac2:;
  /* 11ba2ac2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba2ac7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba2aca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba2acc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2acf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2ad2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11ba2ad6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba2ad8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2adb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2ade mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11ba2ae2 jmp 0x11ba2b4b */
  goto L_11ba2b4b;
L_11ba2ae4:;
  /* 11ba2ae4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2ae7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2aea movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba2aee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2af1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2af4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ba2af7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba2afa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2afd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2b00 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ba2b03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba2b05 jne 0x11ba2b22 */
  if (!C.zf) goto L_11ba2b22;
  /* 11ba2b07 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba2b0a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2b0d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba2b12 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba2b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2b17 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba2b1a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba2b1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2b1f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ba2b22:;
  /* 11ba2b22 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba2b25 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2b28 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba2b2d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba2b2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2b32 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2b35 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ba2b3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba2b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2b41 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11ba2b44 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11ba2b4b:;
  /* 11ba2b4b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2b4e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2b51 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ba2b53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2b56 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2b59 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2b5c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11ba2b5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba2b62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba2b64 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2b67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba2b6a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ba2b6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba2b6f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2b72 jne 0x11ba2cd9 */
  if (!C.zf) goto L_11ba2cd9;
  /* 11ba2b78 cmp dword ptr [0x11bcfd1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfd1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2b7f je 0x11ba2cc8 */
  if (C.zf) goto L_11ba2cc8;
  /* 11ba2b85 mov eax, dword ptr [0x11bcfd14] */
  EAX = (r32((uint32_t)(0x11bcfd14)));
  /* 11ba2b8a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11ba2b8d mov ecx, dword ptr [0x11bcfd1c] */
  ECX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2b93 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ba2b96 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2b98 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ba2b9b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ba2ba0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ba2ba5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2ba8 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2ba9 call dword ptr [0x11bd038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd038c))), 0x11ba2bafu);
  /* 11ba2baf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba2bb4 mov ecx, dword ptr [0x11bcfd14] */
  ECX = (r32((uint32_t)(0x11bcfd14)));
  /* 11ba2bba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba2bbc mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2bc1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba2bc4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba2bc6 mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2bcc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ba2bcf mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2bd4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba2bd7 mov edx, dword ptr [0x11bcfd14] */
  EDX = (r32((uint32_t)(0x11bcfd14)));
  /* 11ba2bdd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11ba2be8 mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2bed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba2bf0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11ba2bf3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba2bf6 mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2bfb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba2bfe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11ba2c01 mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2c07 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ba2c0a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11ba2c0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba2c10 jne 0x11ba2c26 */
  if (!C.zf) goto L_11ba2c26;
  /* 11ba2c12 mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2c18 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba2c1b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11ba2c1d mov ecx, dword ptr [0x11bcfd1c] */
  ECX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2c23 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ba2c26:;
  /* 11ba2c26 mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2c2c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2c30 jne 0x11ba2cc8 */
  if (!C.zf) goto L_11ba2cc8;
  /* 11ba2c36 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ba2c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba2c3d mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2c42 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ba2c45 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2c46 call dword ptr [0x11bd038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd038c))), 0x11ba2c4cu);
  /* 11ba2c4c mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2c52 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ba2c55 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba2c58 mov ecx, dword ptr [0x11bcfd28] */
  ECX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba2c5e push ecx */
  push32((uint32_t)(ECX));
  /* 11ba2c5f call dword ptr [0x11bd0390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0390))), 0x11ba2c65u);
  /* 11ba2c65 mov edx, dword ptr [0x11bcfd20] */
  EDX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba2c6b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba2c6e mov eax, dword ptr [0x11bcfd24] */
  EAX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba2c73 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2c75 mov ecx, dword ptr [0x11bcfd1c] */
  ECX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2c7b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2c7e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2c80 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2c81 mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2c87 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2c8a push edx */
  push32((uint32_t)(EDX));
  /* 11ba2c8b mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba2c90 push eax */
  push32((uint32_t)(EAX));
  /* 11ba2c91 call 0x11ba1d60 */
  push32(0x11ba2c96u); f_11ba1d60();
  /* 11ba2c96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2c99 mov ecx, dword ptr [0x11bcfd20] */
  ECX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba2c9f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2ca2 mov dword ptr [0x11bcfd20], ecx */
  w32((uint32_t)(0x11bcfd20), (ECX));
  /* 11ba2ca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2cab cmp edx, dword ptr [0x11bcfd1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bcfd1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2cb1 jbe 0x11ba2cbc */
  if ((C.cf||C.zf)) goto L_11ba2cbc;
  /* 11ba2cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2cb6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2cb9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ba2cbc:;
  /* 11ba2cbc mov ecx, dword ptr [0x11bcfd24] */
  ECX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba2cc2 mov dword ptr [0x11bcfd18], ecx */
  w32((uint32_t)(0x11bcfd18), (ECX));
L_11ba2cc8:;
  /* 11ba2cc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2ccb mov dword ptr [0x11bcfd1c], edx */
  w32((uint32_t)(0x11bcfd1c), (EDX));
  /* 11ba2cd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2cd4 mov dword ptr [0x11bcfd14], eax */
  w32((uint32_t)(0x11bcfd14), (EAX));
L_11ba2cd9:;
  /* 11ba2cd9 mov esp, ebp */
  ESP = (EBP);
  /* 11ba2cdb pop ebp */
  EBP = (pop32());
  /* 11ba2cdc ret  */
  ESPCHK(0x11ba2710u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x11ba2ce0 (1334 bytes, 427 insns) */
void f_11ba2ce0(void) {
  FTRACE(0x11ba2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba2ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba2ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba2ce3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2ce6 push esi */
  push32((uint32_t)(ESI));
  /* 11ba2ce7 mov eax, dword ptr [0x11bcfd20] */
  EAX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba2cec imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba2cef mov ecx, dword ptr [0x11bcfd24] */
  ECX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba2cf5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2cf7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ba2cfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba2cfd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2d00 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba2d03 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ba2d06 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba2d09 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ba2d0c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2d0f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ba2d12 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2d16 jge 0x11ba2d2c */
  if ((C.sf==C.of)) goto L_11ba2d2c;
  /* 11ba2d18 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba2d1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2d1e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba2d20 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ba2d23 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11ba2d2a jmp 0x11ba2d41 */
  goto L_11ba2d41;
L_11ba2d2c:;
  /* 11ba2d2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ba2d33 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2d36 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2d39 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2d3c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba2d3e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11ba2d41:;
  /* 11ba2d41 mov ecx, dword ptr [0x11bcfd18] */
  ECX = (r32((uint32_t)(0x11bcfd18)));
  /* 11ba2d47 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11ba2d4a:;
  /* 11ba2d4a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2d4d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2d50 jae 0x11ba2d76 */
  if (!C.cf) goto L_11ba2d76;
  /* 11ba2d52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2d55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba2d58 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11ba2d5a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2d5d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2d60 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2d63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba2d65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba2d67 je 0x11ba2d6b */
  if (C.zf) goto L_11ba2d6b;
  /* 11ba2d69 jmp 0x11ba2d76 */
  goto L_11ba2d76;
L_11ba2d6b:;
  /* 11ba2d6b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2d6e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2d71 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ba2d74 jmp 0x11ba2d4a */
  goto L_11ba2d4a;
L_11ba2d76:;
  /* 11ba2d76 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2d79 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2d7c jne 0x11ba2e5d */
  if (!C.zf) goto L_11ba2e5d;
  /* 11ba2d82 mov eax, dword ptr [0x11bcfd24] */
  EAX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba2d87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ba2d8a:;
  /* 11ba2d8a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2d8d cmp ecx, dword ptr [0x11bcfd18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfd18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2d93 jae 0x11ba2db9 */
  if (!C.cf) goto L_11ba2db9;
  /* 11ba2d95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2d98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba2d9b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2d9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2da0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2da3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba2da6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2da8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba2daa je 0x11ba2dae */
  if (C.zf) goto L_11ba2dae;
  /* 11ba2dac jmp 0x11ba2db9 */
  goto L_11ba2db9;
L_11ba2dae:;
  /* 11ba2dae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2db1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2db4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba2db7 jmp 0x11ba2d8a */
  goto L_11ba2d8a;
L_11ba2db9:;
  /* 11ba2db9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2dbc cmp ecx, dword ptr [0x11bcfd18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfd18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2dc2 jne 0x11ba2e5d */
  if (!C.zf) goto L_11ba2e5d;
L_11ba2dc8:;
  /* 11ba2dc8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2dcb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2dce jae 0x11ba2de6 */
  if (!C.cf) goto L_11ba2de6;
  /* 11ba2dd0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2dd3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2dd7 je 0x11ba2ddb */
  if (C.zf) goto L_11ba2ddb;
  /* 11ba2dd9 jmp 0x11ba2de6 */
  goto L_11ba2de6;
L_11ba2ddb:;
  /* 11ba2ddb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2dde add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2de1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ba2de4 jmp 0x11ba2dc8 */
  goto L_11ba2dc8;
L_11ba2de6:;
  /* 11ba2de6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2de9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2dec jne 0x11ba2e37 */
  if (!C.zf) goto L_11ba2e37;
  /* 11ba2dee mov eax, dword ptr [0x11bcfd24] */
  EAX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba2df3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ba2df6:;
  /* 11ba2df6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2df9 cmp ecx, dword ptr [0x11bcfd18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfd18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2dff jae 0x11ba2e17 */
  if (!C.cf) goto L_11ba2e17;
  /* 11ba2e01 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2e04 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2e08 je 0x11ba2e0c */
  if (C.zf) goto L_11ba2e0c;
  /* 11ba2e0a jmp 0x11ba2e17 */
  goto L_11ba2e17;
L_11ba2e0c:;
  /* 11ba2e0c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2e0f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2e12 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba2e15 jmp 0x11ba2df6 */
  goto L_11ba2df6;
L_11ba2e17:;
  /* 11ba2e17 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2e1a cmp ecx, dword ptr [0x11bcfd18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfd18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2e20 jne 0x11ba2e37 */
  if (!C.zf) goto L_11ba2e37;
  /* 11ba2e22 call 0x11ba3220 */
  push32(0x11ba2e27u); f_11ba3220();
  /* 11ba2e27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba2e2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2e2e jne 0x11ba2e37 */
  if (!C.zf) goto L_11ba2e37;
  /* 11ba2e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2e32 jmp 0x11ba3211 */
  goto L_11ba3211;
L_11ba2e37:;
  /* 11ba2e37 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2e3a push edx */
  push32((uint32_t)(EDX));
  /* 11ba2e3b call 0x11ba3330 */
  push32(0x11ba2e40u); f_11ba3330();
  /* 11ba2e40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2e43 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2e46 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ba2e49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ba2e4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2e4e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba2e51 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2e54 jne 0x11ba2e5d */
  if (!C.zf) goto L_11ba2e5d;
  /* 11ba2e56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2e58 jmp 0x11ba3211 */
  goto L_11ba3211;
L_11ba2e5d:;
  /* 11ba2e5d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2e60 mov dword ptr [0x11bcfd18], edx */
  w32((uint32_t)(0x11bcfd18), (EDX));
  /* 11ba2e66 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2e69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba2e6c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11ba2e6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2e72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba2e74 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ba2e77 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2e7b je 0x11ba2ea0 */
  if (C.zf) goto L_11ba2ea0;
  /* 11ba2e7d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2e80 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2e83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba2e86 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2e8a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2e8d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2e90 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2e93 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11ba2e9a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11ba2e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba2e9e jne 0x11ba2ed5 */
  if (!C.zf) goto L_11ba2ed5;
L_11ba2ea0:;
  /* 11ba2ea0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11ba2ea7:;
  /* 11ba2ea7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2eaa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2ead mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba2eb0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba2eb4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2eb7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2eba mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2ebd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11ba2ec4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11ba2ec6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba2ec8 jne 0x11ba2ed5 */
  if (!C.zf) goto L_11ba2ed5;
  /* 11ba2eca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2ecd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2ed0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11ba2ed3 jmp 0x11ba2ea7 */
  goto L_11ba2ea7;
L_11ba2ed5:;
  /* 11ba2ed5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2ed8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba2ede mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2ee1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ba2ee8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba2eeb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ba2ef2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2ef5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2ef8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba2efb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba2eff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ba2f02 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2f06 jne 0x11ba2f22 */
  if (!C.zf) goto L_11ba2f22;
  /* 11ba2f08 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11ba2f0f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2f12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2f15 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ba2f18 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ba2f1f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11ba2f22:;
  /* 11ba2f22 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2f26 jl 0x11ba2f3b */
  if ((C.sf!=C.of)) goto L_11ba2f3b;
  /* 11ba2f28 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba2f2b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ba2f2d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ba2f30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2f33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2f36 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ba2f39 jmp 0x11ba2f22 */
  goto L_11ba2f22;
L_11ba2f3b:;
  /* 11ba2f3b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2f3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba2f41 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11ba2f45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba2f48 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba2f4b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba2f4d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2f50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba2f53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba2f56 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ba2f59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2f5c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ba2f5f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2f63 jle 0x11ba2f6c */
  if ((C.zf||C.sf!=C.of)) goto L_11ba2f6c;
  /* 11ba2f65 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11ba2f6c:;
  /* 11ba2f6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba2f6f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2f72 je 0x11ba3190 */
  if (C.zf) goto L_11ba3190;
  /* 11ba2f78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba2f7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba2f7e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba2f81 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2f84 jne 0x11ba305a */
  if (!C.zf) goto L_11ba305a;
  /* 11ba2f8a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba2f8e jge 0x11ba2fef */
  if ((C.sf==C.of)) goto L_11ba2fef;
  /* 11ba2f90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba2f95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2f98 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba2f9a not eax */
  EAX = (~(EAX));
  /* 11ba2f9c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2f9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2fa2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11ba2fa6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba2fa8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba2fab mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2fae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11ba2fb2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2fb5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2fb8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ba2fbb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba2fbe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2fc1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2fc4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ba2fc7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba2fca add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba2fcd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba2fd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba2fd3 jne 0x11ba2fed */
  if (!C.zf) goto L_11ba2fed;
  /* 11ba2fd5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba2fda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2fdd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba2fdf not eax */
  EAX = (~(EAX));
  /* 11ba2fe1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2fe4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba2fe6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba2fe8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba2feb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ba2fed:;
  /* 11ba2fed jmp 0x11ba305a */
  goto L_11ba305a;
L_11ba2fef:;
  /* 11ba2fef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba2ff2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba2ff5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba2ffa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba2ffc not edx */
  EDX = (~(EDX));
  /* 11ba2ffe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3001 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3004 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ba300b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba300d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3010 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3013 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11ba301a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba301d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3020 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ba3023 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba3026 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3029 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba302c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ba302f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3032 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3035 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ba3039 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba303b jne 0x11ba305a */
  if (!C.zf) goto L_11ba305a;
  /* 11ba303d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3040 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3043 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba3048 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba304a not edx */
  EDX = (~(EDX));
  /* 11ba304c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba304f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba3052 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba3054 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3057 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ba305a:;
  /* 11ba305a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba305d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba3060 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba3063 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba3066 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ba3069 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba306c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba306f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba3072 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba3075 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ba3078 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba307c je 0x11ba3190 */
  if (C.zf) goto L_11ba3190;
  /* 11ba3082 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3088 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11ba308b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba308e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba3091 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba3094 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba3097 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ba309a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba309d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba30a0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ba30a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba30a6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba30a9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ba30ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba30af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba30b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba30b5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ba30b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba30bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba30be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba30c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba30c4 jne 0x11ba3190 */
  if (!C.zf) goto L_11ba3190;
  /* 11ba30ca cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba30ce jge 0x11ba312a */
  if ((C.sf==C.of)) goto L_11ba312a;
  /* 11ba30d0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba30d3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba30d6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ba30da mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba30dd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba30e0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ba30e3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba30e5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba30e8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba30eb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ba30ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba30f0 jne 0x11ba3108 */
  if (!C.zf) goto L_11ba3108;
  /* 11ba30f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba30f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba30fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba30fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba30ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba3101 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba3103 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3106 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ba3108:;
  /* 11ba3108 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba310d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3110 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba3112 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3115 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3118 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ba311c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba311e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3121 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3124 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ba3128 jmp 0x11ba3190 */
  goto L_11ba3190;
L_11ba312a:;
  /* 11ba312a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba312d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3130 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ba3134 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3137 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba313a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ba313d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba313f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3142 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3145 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ba3148 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba314a jne 0x11ba3167 */
  if (!C.zf) goto L_11ba3167;
  /* 11ba314c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba314f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3152 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba3157 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba3159 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba315c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba315f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba3161 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3164 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ba3167:;
  /* 11ba3167 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba316a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba316d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba3172 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba3174 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3177 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba317a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ba3181 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba3183 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3186 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3189 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11ba3190:;
  /* 11ba3190 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3194 je 0x11ba31aa */
  if (C.zf) goto L_11ba31aa;
  /* 11ba3196 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba3199 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba319c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ba319e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba31a1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba31a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba31a7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11ba31aa:;
  /* 11ba31aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba31ad add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba31b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba31b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba31b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba31b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba31bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba31be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba31c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba31c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba31c7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba31ca mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11ba31cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba31d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba31d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba31d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba31d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba31da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba31dd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ba31df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba31e1 jne 0x11ba3203 */
  if (!C.zf) goto L_11ba3203;
  /* 11ba31e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba31e6 cmp eax, dword ptr [0x11bcfd1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfd1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba31ec jne 0x11ba3203 */
  if (!C.zf) goto L_11ba3203;
  /* 11ba31ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba31f1 cmp ecx, dword ptr [0x11bcfd14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfd14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba31f7 jne 0x11ba3203 */
  if (!C.zf) goto L_11ba3203;
  /* 11ba31f9 mov dword ptr [0x11bcfd1c], 0 */
  w32((uint32_t)(0x11bcfd1c), (0x0u));
L_11ba3203:;
  /* 11ba3203 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ba3206 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3209 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ba320b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba320e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ba3211:;
  /* 11ba3211 pop esi */
  ESI = (pop32());
  /* 11ba3212 mov esp, ebp */
  ESP = (EBP);
  /* 11ba3214 pop ebp */
  EBP = (pop32());
  /* 11ba3215 ret  */
  ESPCHK(0x11ba2ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013220 @ 0x11ba3220 (271 bytes, 78 insns) */
void f_11ba3220(void) {
  FTRACE(0x11ba3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba3220 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba3221 mov ebp, esp */
  EBP = (ESP);
  /* 11ba3223 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba3224 mov eax, dword ptr [0x11bcfd20] */
  EAX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba3229 cmp eax, dword ptr [0x11bcfd04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfd04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba322f jne 0x11ba327b */
  if (!C.zf) goto L_11ba327b;
  /* 11ba3231 mov ecx, dword ptr [0x11bcfd04] */
  ECX = (r32((uint32_t)(0x11bcfd04)));
  /* 11ba3237 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba323a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba323d push ecx */
  push32((uint32_t)(ECX));
  /* 11ba323e mov edx, dword ptr [0x11bcfd24] */
  EDX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba3244 push edx */
  push32((uint32_t)(EDX));
  /* 11ba3245 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba3247 mov eax, dword ptr [0x11bcfd28] */
  EAX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba324c push eax */
  push32((uint32_t)(EAX));
  /* 11ba324d call dword ptr [0x11bd0380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0380))), 0x11ba3253u);
  /* 11ba3253 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba3256 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba325a jne 0x11ba3263 */
  if (!C.zf) goto L_11ba3263;
  /* 11ba325c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba325e jmp 0x11ba332b */
  goto L_11ba332b;
L_11ba3263:;
  /* 11ba3263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3266 mov dword ptr [0x11bcfd24], ecx */
  w32((uint32_t)(0x11bcfd24), (ECX));
  /* 11ba326c mov edx, dword ptr [0x11bcfd04] */
  EDX = (r32((uint32_t)(0x11bcfd04)));
  /* 11ba3272 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3275 mov dword ptr [0x11bcfd04], edx */
  w32((uint32_t)(0x11bcfd04), (EDX));
L_11ba327b:;
  /* 11ba327b mov eax, dword ptr [0x11bcfd20] */
  EAX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba3280 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba3283 mov ecx, dword ptr [0x11bcfd24] */
  ECX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba3289 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba328b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba328e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11ba3293 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ba3295 mov edx, dword ptr [0x11bcfd28] */
  EDX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba329b push edx */
  push32((uint32_t)(EDX));
  /* 11ba329c call dword ptr [0x11bd0384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0384))), 0x11ba32a2u);
  /* 11ba32a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba32a5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11ba32a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba32ab cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba32af jne 0x11ba32b5 */
  if (!C.zf) goto L_11ba32b5;
  /* 11ba32b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba32b3 jmp 0x11ba332b */
  goto L_11ba332b;
L_11ba32b5:;
  /* 11ba32b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba32b7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11ba32bc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11ba32c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba32c3 call dword ptr [0x11bd037c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd037c))), 0x11ba32c9u);
  /* 11ba32c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba32cc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11ba32cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba32d2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba32d6 jne 0x11ba32f2 */
  if (!C.zf) goto L_11ba32f2;
  /* 11ba32d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba32db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba32de push ecx */
  push32((uint32_t)(ECX));
  /* 11ba32df push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba32e1 mov edx, dword ptr [0x11bcfd28] */
  EDX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba32e7 push edx */
  push32((uint32_t)(EDX));
  /* 11ba32e8 call dword ptr [0x11bd0390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0390))), 0x11ba32eeu);
  /* 11ba32ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba32f0 jmp 0x11ba332b */
  goto L_11ba332b;
L_11ba32f2:;
  /* 11ba32f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba32f5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ba32fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba32fe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ba3305 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3308 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11ba330f mov eax, dword ptr [0x11bcfd20] */
  EAX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba3314 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3317 mov dword ptr [0x11bcfd20], eax */
  w32((uint32_t)(0x11bcfd20), (EAX));
  /* 11ba331c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba331f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ba3322 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11ba3328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ba332b:;
  /* 11ba332b mov esp, ebp */
  ESP = (EBP);
  /* 11ba332d pop ebp */
  EBP = (pop32());
  /* 11ba332e ret  */
  ESPCHK(0x11ba3220u, _esp0);
  ESP += 4; return;
}

/* FUN_10013330 @ 0x11ba3330 (494 bytes, 149 insns) */
void f_11ba3330(void) {
  FTRACE(0x11ba3330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba3330 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba3331 mov ebp, esp */
  EBP = (ESP);
  /* 11ba3333 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3339 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba333c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ba333f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3342 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba3345 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba3348 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11ba334f:;
  /* 11ba334f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3353 jl 0x11ba3368 */
  if ((C.sf!=C.of)) goto L_11ba3368;
  /* 11ba3355 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba3358 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ba335a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba335d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba3360 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3363 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ba3366 jmp 0x11ba334f */
  goto L_11ba334f;
L_11ba3368:;
  /* 11ba3368 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba336b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba3371 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba3374 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ba337b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ba337e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ba3385 jmp 0x11ba3390 */
  goto L_11ba3390;
L_11ba3387:;
  /* 11ba3387 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba338a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba338d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11ba3390:;
  /* 11ba3390 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3394 jge 0x11ba33b6 */
  if ((C.sf==C.of)) goto L_11ba33b6;
  /* 11ba3396 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba339c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11ba339f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba33a2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba33a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba33a8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ba33ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba33ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba33b1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ba33b4 jmp 0x11ba3387 */
  goto L_11ba3387;
L_11ba33b6:;
  /* 11ba33b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba33b9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11ba33bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba33bf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ba33c2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba33c4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba33c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba33c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ba33ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ba33d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba33d6 push edx */
  push32((uint32_t)(EDX));
  /* 11ba33d7 call dword ptr [0x11bd037c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd037c))), 0x11ba33ddu);
  /* 11ba33dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba33df jne 0x11ba33e9 */
  if (!C.zf) goto L_11ba33e9;
  /* 11ba33e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba33e4 jmp 0x11ba351a */
  goto L_11ba351a;
L_11ba33e9:;
  /* 11ba33e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba33ec add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba33f1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ba33f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba33f7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba33fa jmp 0x11ba3408 */
  goto L_11ba3408;
L_11ba33fc:;
  /* 11ba33fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba33ff add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3405 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba3408:;
  /* 11ba3408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba340b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba340e ja 0x11ba346d */
  if ((!C.cf&&!C.zf)) goto L_11ba346d;
  /* 11ba3410 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3413 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11ba341a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba341d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11ba3427 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba342a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba342d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba3430 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3433 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11ba3439 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba343c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3442 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3445 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ba3448 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba344b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3451 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3454 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ba3457 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba345a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba345f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ba3462 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba3465 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11ba346b jmp 0x11ba33fc */
  goto L_11ba33fc;
L_11ba346d:;
  /* 11ba346d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba3470 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3476 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ba3479 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba347c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba347f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3482 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ba3485 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3488 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba348b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba348e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3491 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3494 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ba3497 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba349a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba349d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba34a0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ba34a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba34a6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba34a9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba34ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba34af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba34b2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ba34b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba34b8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba34bb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11ba34c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba34c6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba34c9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11ba34d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba34d7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11ba34db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba34de mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11ba34e1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba34e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba34e7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11ba34ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba34ec jne 0x11ba34fd */
  if (!C.zf) goto L_11ba34fd;
  /* 11ba34ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba34f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba34f4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba34f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba34fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ba34fd:;
  /* 11ba34fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba3502 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba3505 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba3507 not edx */
  EDX = (~(EDX));
  /* 11ba3509 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba350c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba350f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba3511 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3514 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ba3517 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11ba351a:;
  /* 11ba351a mov esp, ebp */
  ESP = (EBP);
  /* 11ba351c pop ebp */
  EBP = (pop32());
  /* 11ba351d ret  */
  ESPCHK(0x11ba3330u, _esp0);
  ESP += 4; return;
}

/* FUN_10013520 @ 0x11ba3520 (1515 bytes, 489 insns) */
void f_11ba3520(void) {
  FTRACE(0x11ba3520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba3520 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba3521 mov ebp, esp */
  EBP = (ESP);
  /* 11ba3523 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3526 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba3529 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba352c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11ba352e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ba3531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3534 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ba3537 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11ba353a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba353d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba3540 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3543 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba3546 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba3549 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11ba354c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba354f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3552 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba3558 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba355b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ba3562 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba3565 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba3568 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba356b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ba356e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3571 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba3573 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3576 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ba3579 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba357c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba357f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ba3582 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba3585 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba3587 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ba358a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba358d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3590 jle 0x11ba3846 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba3846;
  /* 11ba3596 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba3599 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba359c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba359e jne 0x11ba35ab */
  if (!C.zf) goto L_11ba35ab;
  /* 11ba35a0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba35a3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba35a6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba35a9 jle 0x11ba35b2 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba35b2;
L_11ba35ab:;
  /* 11ba35ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba35ad jmp 0x11ba3b07 */
  goto L_11ba3b07;
L_11ba35b2:;
  /* 11ba35b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba35b5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ba35b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba35bb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ba35be cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba35c2 jbe 0x11ba35cb */
  if ((C.cf||C.zf)) goto L_11ba35cb;
  /* 11ba35c4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11ba35cb:;
  /* 11ba35cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba35ce mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba35d1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba35d4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba35d7 jne 0x11ba36ad */
  if (!C.zf) goto L_11ba36ad;
  /* 11ba35dd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba35e1 jae 0x11ba3642 */
  if (!C.cf) goto L_11ba3642;
  /* 11ba35e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba35e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba35eb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba35ed not edx */
  EDX = (~(EDX));
  /* 11ba35ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba35f2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba35f5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ba35f9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba35fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba35fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3601 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ba3605 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3608 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba360b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ba360e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba3611 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3614 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3617 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ba361a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba361d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3620 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ba3624 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba3626 jne 0x11ba3640 */
  if (!C.zf) goto L_11ba3640;
  /* 11ba3628 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba362d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3630 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba3632 not edx */
  EDX = (~(EDX));
  /* 11ba3634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3637 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba3639 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba363b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba363e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ba3640:;
  /* 11ba3640 jmp 0x11ba36ad */
  goto L_11ba36ad;
L_11ba3642:;
  /* 11ba3642 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3645 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3648 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba364d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba364f not eax */
  EAX = (~(EAX));
  /* 11ba3651 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3654 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3657 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ba365e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba3660 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3663 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3666 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11ba366d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3670 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3673 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ba3676 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba3679 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba367c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba367f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ba3682 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3685 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3688 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba368c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba368e jne 0x11ba36ad */
  if (!C.zf) goto L_11ba36ad;
  /* 11ba3690 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3693 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3696 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba369b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba369d not eax */
  EAX = (~(EAX));
  /* 11ba369f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba36a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba36a5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba36a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba36aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ba36ad:;
  /* 11ba36ad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba36b0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba36b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba36b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba36b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ba36bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba36bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba36c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba36c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba36c8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ba36cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba36ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba36d1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba36d4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba36d7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba36db jle 0x11ba3827 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba3827;
  /* 11ba36e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba36e4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba36e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ba36ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba36ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ba36f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba36f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ba36f6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba36fa jbe 0x11ba3703 */
  if ((C.cf||C.zf)) goto L_11ba3703;
  /* 11ba36fc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11ba3703:;
  /* 11ba3703 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3706 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba3709 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11ba370c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ba370f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba3712 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3715 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba3718 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ba371b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba371e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3721 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ba3724 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3727 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba372a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11ba372d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba3730 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba3733 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba3736 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ba3739 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba373c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba373f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba3742 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3745 jne 0x11ba3813 */
  if (!C.zf) goto L_11ba3813;
  /* 11ba374b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba374f jae 0x11ba37ac */
  if (!C.cf) goto L_11ba37ac;
  /* 11ba3751 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3754 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3757 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba375b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba375e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3761 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ba3764 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba3767 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba376a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba376d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ba3770 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba3772 jne 0x11ba378a */
  if (!C.zf) goto L_11ba378a;
  /* 11ba3774 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba3779 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba377c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba377e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3781 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba3783 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba3785 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3788 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ba378a:;
  /* 11ba378a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba378f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3792 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba3794 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3797 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba379a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11ba379e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba37a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba37a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba37a6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11ba37aa jmp 0x11ba3813 */
  goto L_11ba3813;
L_11ba37ac:;
  /* 11ba37ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba37af add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba37b2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba37b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba37b9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba37bc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ba37bf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba37c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba37c5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba37c8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ba37cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba37cd jne 0x11ba37ea */
  if (!C.zf) goto L_11ba37ea;
  /* 11ba37cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba37d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba37d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba37da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba37dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba37df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba37e2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba37e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba37e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ba37ea:;
  /* 11ba37ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba37ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba37f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba37f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba37f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba37fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba37fd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ba3804 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba3806 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3809 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba380c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11ba3813:;
  /* 11ba3813 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba3816 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba3819 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ba381b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba381e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3821 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba3824 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11ba3827:;
  /* 11ba3827 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba382a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba382d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3830 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ba3832 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba3835 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3838 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba383b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba383e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11ba3841 jmp 0x11ba3b02 */
  goto L_11ba3b02;
L_11ba3846:;
  /* 11ba3846 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba3849 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba384c jge 0x11ba3b02 */
  if ((C.sf==C.of)) goto L_11ba3b02;
  /* 11ba3852 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba3855 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3858 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba385b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ba385d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ba3860 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3863 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3866 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3869 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11ba386c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba386f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3872 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ba3875 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba3878 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba387b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ba387e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba3881 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ba3884 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3887 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ba388a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba388e jbe 0x11ba3897 */
  if ((C.cf||C.zf)) goto L_11ba3897;
  /* 11ba3890 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11ba3897:;
  /* 11ba3897 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba389a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba389d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba389f jne 0x11ba39e0 */
  if (!C.zf) goto L_11ba39e0;
  /* 11ba38a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba38a8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ba38ab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba38ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ba38b1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba38b5 jbe 0x11ba38be */
  if ((C.cf||C.zf)) goto L_11ba38be;
  /* 11ba38b7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11ba38be:;
  /* 11ba38be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba38c1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba38c4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba38c7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba38ca jne 0x11ba39a0 */
  if (!C.zf) goto L_11ba39a0;
  /* 11ba38d0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba38d4 jae 0x11ba3935 */
  if (!C.cf) goto L_11ba3935;
  /* 11ba38d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba38db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba38de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba38e0 not edx */
  EDX = (~(EDX));
  /* 11ba38e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba38e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba38e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ba38ec and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba38ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba38f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba38f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ba38f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba38fb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba38fe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ba3901 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba3904 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3907 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba390a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ba390d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3910 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3913 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ba3917 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba3919 jne 0x11ba3933 */
  if (!C.zf) goto L_11ba3933;
  /* 11ba391b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba3920 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3923 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba3925 not edx */
  EDX = (~(EDX));
  /* 11ba3927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba392a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba392c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba392e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3931 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ba3933:;
  /* 11ba3933 jmp 0x11ba39a0 */
  goto L_11ba39a0;
L_11ba3935:;
  /* 11ba3935 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3938 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba393b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba3940 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba3942 not eax */
  EAX = (~(EAX));
  /* 11ba3944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3947 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba394a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ba3951 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba3953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3956 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3959 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11ba3960 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3963 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3966 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ba3969 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba396c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba396f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3972 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ba3975 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3978 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba397b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ba397f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba3981 jne 0x11ba39a0 */
  if (!C.zf) goto L_11ba39a0;
  /* 11ba3983 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ba3986 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3989 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba398e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba3990 not eax */
  EAX = (~(EAX));
  /* 11ba3992 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3995 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba3998 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba399a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba399d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ba39a0:;
  /* 11ba39a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba39a3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba39a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba39a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba39ac mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ba39af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba39b2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba39b5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ba39b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba39bb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ba39be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba39c1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba39c4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ba39c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba39ca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ba39cd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba39d0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ba39d3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba39d7 jbe 0x11ba39e0 */
  if ((C.cf||C.zf)) goto L_11ba39e0;
  /* 11ba39d9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11ba39e0:;
  /* 11ba39e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba39e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba39e6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11ba39e9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ba39ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba39ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba39f2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba39f5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ba39f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba39fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba39fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ba3a01 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3a04 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3a07 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ba3a0a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3a0d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba3a10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3a13 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ba3a16 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3a19 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3a1c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba3a1f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3a22 jne 0x11ba3aee */
  if (!C.zf) goto L_11ba3aee;
  /* 11ba3a28 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3a2c jae 0x11ba3a88 */
  if (!C.cf) goto L_11ba3a88;
  /* 11ba3a2e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3a31 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3a34 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ba3a38 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3a3b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3a3e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ba3a41 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba3a43 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3a46 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3a49 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ba3a4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba3a4e jne 0x11ba3a66 */
  if (!C.zf) goto L_11ba3a66;
  /* 11ba3a50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba3a55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba3a58 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba3a5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3a5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba3a5f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba3a61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3a64 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ba3a66:;
  /* 11ba3a66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba3a6b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba3a6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba3a70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3a73 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3a76 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ba3a7a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba3a7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3a7f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3a82 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ba3a86 jmp 0x11ba3aee */
  goto L_11ba3aee;
L_11ba3a88:;
  /* 11ba3a88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3a8b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3a8e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ba3a92 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3a95 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3a98 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ba3a9b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba3a9d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3aa0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3aa3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ba3aa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba3aa8 jne 0x11ba3ac5 */
  if (!C.zf) goto L_11ba3ac5;
  /* 11ba3aaa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba3aad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3ab0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ba3ab5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ba3ab7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3aba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba3abd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba3abf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba3ac2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ba3ac5:;
  /* 11ba3ac5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba3ac8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3acb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba3ad0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba3ad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3ad5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3ad8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ba3adf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba3ae1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3ae4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ba3ae7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11ba3aee:;
  /* 11ba3aee mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3af1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba3af4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ba3af6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3af9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3afc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba3aff mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11ba3b02:;
  /* 11ba3b02 mov eax, 1 */
  EAX = (0x1u);
L_11ba3b07:;
  /* 11ba3b07 mov esp, ebp */
  ESP = (EBP);
  /* 11ba3b09 pop ebp */
  EBP = (pop32());
  /* 11ba3b0a ret  */
  ESPCHK(0x11ba3520u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b10 @ 0x11ba3b10 (304 bytes, 79 insns) */
void f_11ba3b10(void) {
  FTRACE(0x11ba3b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba3b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba3b11 mov ebp, esp */
  EBP = (ESP);
  /* 11ba3b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba3b14 cmp dword ptr [0x11bcfd1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfd1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3b1b je 0x11ba3c3c */
  if (C.zf) goto L_11ba3c3c;
  /* 11ba3b21 mov eax, dword ptr [0x11bcfd14] */
  EAX = (r32((uint32_t)(0x11bcfd14)));
  /* 11ba3b26 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11ba3b29 mov ecx, dword ptr [0x11bcfd1c] */
  ECX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3b2f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ba3b32 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3b34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba3b37 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11ba3b3c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ba3b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba3b44 push eax */
  push32((uint32_t)(EAX));
  /* 11ba3b45 call dword ptr [0x11bd038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd038c))), 0x11ba3b4bu);
  /* 11ba3b4b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba3b50 mov ecx, dword ptr [0x11bcfd14] */
  ECX = (r32((uint32_t)(0x11bcfd14)));
  /* 11ba3b56 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba3b58 mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3b5d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ba3b60 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba3b62 mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3b68 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ba3b6b mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3b70 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba3b73 mov edx, dword ptr [0x11bcfd14] */
  EDX = (r32((uint32_t)(0x11bcfd14)));
  /* 11ba3b79 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11ba3b84 mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3b89 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba3b8c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11ba3b8f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ba3b92 mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3b97 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba3b9a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11ba3b9d mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3ba3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ba3ba6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11ba3baa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba3bac jne 0x11ba3bc2 */
  if (!C.zf) goto L_11ba3bc2;
  /* 11ba3bae mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3bb4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ba3bb7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11ba3bb9 mov ecx, dword ptr [0x11bcfd1c] */
  ECX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3bbf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11ba3bc2:;
  /* 11ba3bc2 mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3bc8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3bcc jne 0x11ba3c32 */
  if (!C.zf) goto L_11ba3c32;
  /* 11ba3bce cmp dword ptr [0x11bcfd20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfd20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3bd5 jle 0x11ba3c32 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba3c32;
  /* 11ba3bd7 mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3bdc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ba3bdf push ecx */
  push32((uint32_t)(ECX));
  /* 11ba3be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba3be2 mov edx, dword ptr [0x11bcfd28] */
  EDX = (r32((uint32_t)(0x11bcfd28)));
  /* 11ba3be8 push edx */
  push32((uint32_t)(EDX));
  /* 11ba3be9 call dword ptr [0x11bd0390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0390))), 0x11ba3befu);
  /* 11ba3bef mov eax, dword ptr [0x11bcfd20] */
  EAX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba3bf4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba3bf7 mov ecx, dword ptr [0x11bcfd24] */
  ECX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba3bfd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3bff mov edx, dword ptr [0x11bcfd1c] */
  EDX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3c05 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3c08 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3c0a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba3c0b mov eax, dword ptr [0x11bcfd1c] */
  EAX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3c10 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3c13 push eax */
  push32((uint32_t)(EAX));
  /* 11ba3c14 mov ecx, dword ptr [0x11bcfd1c] */
  ECX = (r32((uint32_t)(0x11bcfd1c)));
  /* 11ba3c1a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba3c1b call 0x11ba1d60 */
  push32(0x11ba3c20u); f_11ba1d60();
  /* 11ba3c20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3c23 mov edx, dword ptr [0x11bcfd20] */
  EDX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba3c29 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3c2c mov dword ptr [0x11bcfd20], edx */
  w32((uint32_t)(0x11bcfd20), (EDX));
L_11ba3c32:;
  /* 11ba3c32 mov dword ptr [0x11bcfd1c], 0 */
  w32((uint32_t)(0x11bcfd1c), (0x0u));
L_11ba3c3c:;
  /* 11ba3c3c mov esp, ebp */
  ESP = (EBP);
  /* 11ba3c3e pop ebp */
  EBP = (pop32());
  /* 11ba3c3f ret  */
  ESPCHK(0x11ba3b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c40 @ 0x11ba3c40 (1565 bytes, 343 insns) */
void f_11ba3c40(void) {
  FTRACE(0x11ba3c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba3c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba3c41 mov ebp, esp */
  EBP = (ESP);
  /* 11ba3c43 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3c49 mov eax, dword ptr [0x11bcfd20] */
  EAX = (r32((uint32_t)(0x11bcfd20)));
  /* 11ba3c4e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba3c51 push eax */
  push32((uint32_t)(EAX));
  /* 11ba3c52 mov ecx, dword ptr [0x11bcfd24] */
  ECX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba3c58 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba3c59 call dword ptr [0x11bd0434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0434))), 0x11ba3c5fu);
  /* 11ba3c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba3c61 je 0x11ba3c6b */
  if (C.zf) goto L_11ba3c6b;
  /* 11ba3c63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba3c66 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba3c6b:;
  /* 11ba3c6b mov edx, dword ptr [0x11bcfd24] */
  EDX = (r32((uint32_t)(0x11bcfd24)));
  /* 11ba3c71 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11ba3c77 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11ba3c81 jmp 0x11ba3c92 */
  goto L_11ba3c92;
L_11ba3c83:;
  /* 11ba3c83 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11ba3c89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3c8c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11ba3c92:;
  /* 11ba3c92 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11ba3c98 cmp ecx, dword ptr [0x11bcfd20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfd20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3c9e jge 0x11ba4257 */
  if ((C.sf==C.of)) goto L_11ba4257;
  /* 11ba3ca4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ba3caa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11ba3cad mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11ba3cb3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11ba3cb8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ba3cbe push ecx */
  push32((uint32_t)(ECX));
  /* 11ba3cbf call dword ptr [0x11bd0434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0434))), 0x11ba3cc5u);
  /* 11ba3cc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba3cc7 je 0x11ba3cd3 */
  if (C.zf) goto L_11ba3cd3;
  /* 11ba3cc9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11ba3cce jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba3cd3:;
  /* 11ba3cd3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ba3cd9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11ba3cdc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11ba3ce2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ba3ce8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3cee mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ba3cf1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ba3cf7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba3cfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba3cfd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11ba3d07 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11ba3d11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba3d18 jmp 0x11ba3d23 */
  goto L_11ba3d23;
L_11ba3d1a:;
  /* 11ba3d1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba3d1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3d20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ba3d23:;
  /* 11ba3d23 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3d27 jge 0x11ba421b */
  if ((C.sf==C.of)) goto L_11ba421b;
  /* 11ba3d2d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11ba3d37 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11ba3d41 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11ba3d4b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11ba3d55 jmp 0x11ba3d66 */
  goto L_11ba3d66;
L_11ba3d57:;
  /* 11ba3d57 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ba3d5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3d60 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11ba3d66:;
  /* 11ba3d66 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3d6d jge 0x11ba3d82 */
  if ((C.sf==C.of)) goto L_11ba3d82;
  /* 11ba3d6f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ba3d75 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11ba3d80 jmp 0x11ba3d57 */
  goto L_11ba3d57;
L_11ba3d82:;
  /* 11ba3d82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3d86 jl 0x11ba41bd */
  if ((C.sf!=C.of)) goto L_11ba41bd;
  /* 11ba3d8c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ba3d91 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ba3d97 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba3d98 call dword ptr [0x11bd0434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0434))), 0x11ba3d9eu);
  /* 11ba3d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba3da0 je 0x11ba3dac */
  if (C.zf) goto L_11ba3dac;
  /* 11ba3da2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11ba3da7 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba3dac:;
  /* 11ba3dac mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ba3db2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba3db5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11ba3dbf jmp 0x11ba3dd0 */
  goto L_11ba3dd0;
L_11ba3dc1:;
  /* 11ba3dc1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11ba3dc7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3dca mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11ba3dd0:;
  /* 11ba3dd0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3dd7 jge 0x11ba3f54 */
  if ((C.sf==C.of)) goto L_11ba3f54;
  /* 11ba3ddd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba3de0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3de3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11ba3de9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ba3def add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3df5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11ba3dfb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ba3e01 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3e05 jne 0x11ba3e12 */
  if (!C.zf) goto L_11ba3e12;
  /* 11ba3e07 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11ba3e0d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3e10 je 0x11ba3e1c */
  if (C.zf) goto L_11ba3e1c;
L_11ba3e12:;
  /* 11ba3e12 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11ba3e17 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba3e1c:;
  /* 11ba3e1c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ba3e22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba3e24 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11ba3e2a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ba3e30 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11ba3e36 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11ba3e3c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba3e3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba3e41 je 0x11ba3e79 */
  if (C.zf) goto L_11ba3e79;
  /* 11ba3e43 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ba3e49 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3e4c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11ba3e52 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3e5c jle 0x11ba3e68 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba3e68;
  /* 11ba3e5e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11ba3e63 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba3e68:;
  /* 11ba3e68 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11ba3e6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3e71 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11ba3e77 jmp 0x11ba3ebb */
  goto L_11ba3ebb;
L_11ba3e79:;
  /* 11ba3e79 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ba3e7f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ba3e82 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba3e85 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11ba3e8b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3e92 jle 0x11ba3e9e */
  if ((C.zf||C.sf!=C.of)) goto L_11ba3e9e;
  /* 11ba3e94 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11ba3e9e:;
  /* 11ba3e9e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ba3ea4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11ba3eab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3eae mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ba3eb4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11ba3ebb:;
  /* 11ba3ebb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3ec2 jl 0x11ba3edd */
  if ((C.sf!=C.of)) goto L_11ba3edd;
  /* 11ba3ec4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11ba3eca and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba3ecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba3ecf jne 0x11ba3edd */
  if (!C.zf) goto L_11ba3edd;
  /* 11ba3ed1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3edb jle 0x11ba3ee7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba3ee7;
L_11ba3edd:;
  /* 11ba3edd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11ba3ee2 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba3ee7:;
  /* 11ba3ee7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ba3eed add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3ef3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11ba3ef6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3efc je 0x11ba3f08 */
  if (C.zf) goto L_11ba3f08;
  /* 11ba3efe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11ba3f03 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba3f08:;
  /* 11ba3f08 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ba3f0e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3f14 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11ba3f1a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ba3f20 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3f26 jb 0x11ba3e1c */
  if (C.cf) goto L_11ba3e1c;
  /* 11ba3f2c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ba3f32 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3f38 je 0x11ba3f44 */
  if (C.zf) goto L_11ba3f44;
  /* 11ba3f3a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11ba3f3f jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba3f44:;
  /* 11ba3f44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba3f47 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3f4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba3f4f jmp 0x11ba3dc1 */
  goto L_11ba3dc1;
L_11ba3f54:;
  /* 11ba3f54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3f57 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba3f59 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3f5f je 0x11ba3f6b */
  if (C.zf) goto L_11ba3f6b;
  /* 11ba3f61 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11ba3f66 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba3f6b:;
  /* 11ba3f6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba3f6e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11ba3f74 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11ba3f7b jmp 0x11ba3f86 */
  goto L_11ba3f86;
L_11ba3f7d:;
  /* 11ba3f7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3f80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3f83 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ba3f86:;
  /* 11ba3f86 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3f8a jge 0x11ba41bd */
  if ((C.sf==C.of)) goto L_11ba41bd;
  /* 11ba3f90 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11ba3f9a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11ba3fa0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11ba3fa6:;
  /* 11ba3fa6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ba3fac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba3faf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11ba3fb5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ba3fbb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3fc1 je 0x11ba40ea */
  if (C.zf) goto L_11ba40ea;
  /* 11ba3fc7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba3fca mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11ba3fd0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3fd7 je 0x11ba40ea */
  if (C.zf) goto L_11ba40ea;
  /* 11ba3fdd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ba3fe3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3fe9 jb 0x11ba3ffe */
  if (C.cf) goto L_11ba3ffe;
  /* 11ba3feb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ba3ff1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba3ff6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba3ffc jb 0x11ba4008 */
  if (C.cf) goto L_11ba4008;
L_11ba3ffe:;
  /* 11ba3ffe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11ba4003 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba4008:;
  /* 11ba4008 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ba400e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4014 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11ba401a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11ba4020 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4023 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ba4026 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4029 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba402e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11ba4034:;
  /* 11ba4034 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4037 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba403d je 0x11ba405e */
  if (C.zf) goto L_11ba405e;
  /* 11ba403f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4042 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4048 jne 0x11ba404c */
  if (!C.zf) goto L_11ba404c;
  /* 11ba404a jmp 0x11ba405e */
  goto L_11ba405e;
L_11ba404c:;
  /* 11ba404c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba404f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba4051 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4054 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4057 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4059 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ba405c jmp 0x11ba4034 */
  goto L_11ba4034;
L_11ba405e:;
  /* 11ba405e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4061 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4067 jne 0x11ba4073 */
  if (!C.zf) goto L_11ba4073;
  /* 11ba4069 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11ba406e jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba4073:;
  /* 11ba4073 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ba4079 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba407b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ba407e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4081 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11ba4087 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba408e jle 0x11ba409a */
  if ((C.zf||C.sf!=C.of)) goto L_11ba409a;
  /* 11ba4090 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11ba409a:;
  /* 11ba409a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11ba40a0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba40a3 je 0x11ba40af */
  if (C.zf) goto L_11ba40af;
  /* 11ba40a5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11ba40aa jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba40af:;
  /* 11ba40af mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ba40b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ba40b8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba40be je 0x11ba40ca */
  if (C.zf) goto L_11ba40ca;
  /* 11ba40c0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11ba40c5 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba40ca:;
  /* 11ba40ca mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11ba40d0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11ba40d6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11ba40dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba40df mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11ba40e5 jmp 0x11ba3fa6 */
  goto L_11ba3fa6;
L_11ba40ea:;
  /* 11ba40ea cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba40f1 je 0x11ba4161 */
  if (C.zf) goto L_11ba4161;
  /* 11ba40f3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba40f7 jge 0x11ba412b */
  if ((C.sf==C.of)) goto L_11ba412b;
  /* 11ba40f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba40fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba4101 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba4103 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11ba4109 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba410b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11ba4111 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba4116 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba4119 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba411b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11ba4121 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4123 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11ba4129 jmp 0x11ba4161 */
  goto L_11ba4161;
L_11ba412b:;
  /* 11ba412b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba412e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4131 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba4136 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba4138 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11ba413e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4140 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11ba4146 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba4149 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba414c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ba4151 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ba4153 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11ba4159 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba415b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11ba4161:;
  /* 11ba4161 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11ba4167 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba416a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4170 jne 0x11ba4184 */
  if (!C.zf) goto L_11ba4184;
  /* 11ba4172 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba4175 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11ba417b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4182 je 0x11ba418e */
  if (C.zf) goto L_11ba418e;
L_11ba4184:;
  /* 11ba4184 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11ba4189 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba418e:;
  /* 11ba418e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11ba4194 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba4197 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba419d je 0x11ba41a9 */
  if (C.zf) goto L_11ba41a9;
  /* 11ba419f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11ba41a4 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba41a9:;
  /* 11ba41a9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11ba41af add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba41b2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11ba41b8 jmp 0x11ba3f7d */
  goto L_11ba3f7d;
L_11ba41bd:;
  /* 11ba41bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba41c0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ba41c6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11ba41cc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba41d0 jne 0x11ba41ea */
  if (!C.zf) goto L_11ba41ea;
  /* 11ba41d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba41d5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11ba41db mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11ba41e1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba41e8 je 0x11ba41f1 */
  if (C.zf) goto L_11ba41f1;
L_11ba41ea:;
  /* 11ba41ea mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11ba41ef jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba41f1:;
  /* 11ba41f1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11ba41f7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba41fd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11ba4203 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba4206 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba420b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ba420e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba4211 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ba4213 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba4216 jmp 0x11ba3d1a */
  goto L_11ba3d1a;
L_11ba421b:;
  /* 11ba421b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ba4221 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11ba4227 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4229 jne 0x11ba423c */
  if (!C.zf) goto L_11ba423c;
  /* 11ba422b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ba4231 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11ba4237 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba423a je 0x11ba4243 */
  if (C.zf) goto L_11ba4243;
L_11ba423c:;
  /* 11ba423c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11ba4241 jmp 0x11ba4259 */
  goto L_11ba4259;
L_11ba4243:;
  /* 11ba4243 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11ba4249 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba424c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11ba4252 jmp 0x11ba3c83 */
  goto L_11ba3c83;
L_11ba4257:;
  /* 11ba4257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba4259:;
  /* 11ba4259 mov esp, ebp */
  ESP = (EBP);
  /* 11ba425b pop ebp */
  EBP = (pop32());
  /* 11ba425c ret  */
  ESPCHK(0x11ba3c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014260 @ 0x11ba4260 (91 bytes, 30 insns) */
void f_11ba4260(void) {
  FTRACE(0x11ba4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4260 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4261 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4266 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba4268 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba426e jne 0x11ba428e */
  if (!C.zf) goto L_11ba428e;
  /* 11ba4270 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4273 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba4275 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4279 jne 0x11ba428e */
  if (!C.zf) goto L_11ba428e;
  /* 11ba427b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba427e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba4280 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4287 jne 0x11ba428e */
  if (!C.zf) goto L_11ba428e;
  /* 11ba4289 call 0x11b9d6a0 */
  push32(0x11ba428eu); f_11b9d6a0();
L_11ba428e:;
  /* 11ba428e cmp dword ptr [0x11bce558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4295 je 0x11ba42b5 */
  if (C.zf) goto L_11ba42b5;
  /* 11ba4297 mov eax, dword ptr [0x11bce558] */
  EAX = (r32((uint32_t)(0x11bce558)));
  /* 11ba429c push eax */
  push32((uint32_t)(EAX));
  /* 11ba429d call 0x11ba4360 */
  push32(0x11ba42a2u); f_11ba4360();
  /* 11ba42a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba42a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba42a7 je 0x11ba42b5 */
  if (C.zf) goto L_11ba42b5;
  /* 11ba42a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba42ac push ecx */
  push32((uint32_t)(ECX));
  /* 11ba42ad call dword ptr [0x11bce558] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce558))), 0x11ba42b3u);
  /* 11ba42b3 jmp 0x11ba42b7 */
  goto L_11ba42b7;
L_11ba42b5:;
  /* 11ba42b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba42b7:;
  /* 11ba42b7 pop ebp */
  EBP = (pop32());
  /* 11ba42b8 ret 4 */
  ESPCHK(0x11ba4260u, _esp0);
  ESP += 8; return;
}

/* FUN_100142c0 @ 0x11ba42c0 (21 bytes, 7 insns) */
void f_11ba42c0(void) {
  FTRACE(0x11ba42c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba42c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba42c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba42c3 push 0x11ba4260 */
  push32((uint32_t)(0x11ba4260u));
  /* 11ba42c8 call dword ptr [0x11bd0378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0378))), 0x11ba42ceu);
  /* 11ba42ce mov dword ptr [0x11bce558], eax */
  w32((uint32_t)(0x11bce558), (EAX));
  /* 11ba42d3 pop ebp */
  EBP = (pop32());
  /* 11ba42d4 ret  */
  ESPCHK(0x11ba42c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100142e0 @ 0x11ba42e0 (17 bytes, 7 insns) */
void f_11ba42e0(void) {
  FTRACE(0x11ba42e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba42e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba42e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba42e3 mov eax, dword ptr [0x11bce558] */
  EAX = (r32((uint32_t)(0x11bce558)));
  /* 11ba42e8 push eax */
  push32((uint32_t)(EAX));
  /* 11ba42e9 call dword ptr [0x11bd0378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0378))), 0x11ba42efu);
  /* 11ba42ef pop ebp */
  EBP = (pop32());
  /* 11ba42f0 ret  */
  ESPCHK(0x11ba42e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014300 @ 0x11ba4300 (43 bytes, 16 insns) */
void f_11ba4300(void) {
  FTRACE(0x11ba4300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4300 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4301 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4303 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4304 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ba430b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba430e push eax */
  push32((uint32_t)(EAX));
  /* 11ba430f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4312 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4313 call dword ptr [0x11bd0438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0438))), 0x11ba4319u);
  /* 11ba4319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba431b je 0x11ba4324 */
  if (C.zf) goto L_11ba4324;
  /* 11ba431d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ba4324:;
  /* 11ba4324 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba4327 mov esp, ebp */
  ESP = (EBP);
  /* 11ba4329 pop ebp */
  EBP = (pop32());
  /* 11ba432a ret  */
  ESPCHK(0x11ba4300u, _esp0);
  ESP += 4; return;
}

/* FUN_10014330 @ 0x11ba4330 (43 bytes, 16 insns) */
void f_11ba4330(void) {
  FTRACE(0x11ba4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4330 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4331 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4333 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4334 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ba433b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba433e push eax */
  push32((uint32_t)(EAX));
  /* 11ba433f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4342 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4343 call dword ptr [0x11bd0434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0434))), 0x11ba4349u);
  /* 11ba4349 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba434b je 0x11ba4354 */
  if (C.zf) goto L_11ba4354;
  /* 11ba434d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ba4354:;
  /* 11ba4354 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba4357 mov esp, ebp */
  ESP = (EBP);
  /* 11ba4359 pop ebp */
  EBP = (pop32());
  /* 11ba435a ret  */
  ESPCHK(0x11ba4330u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x11ba4360 (39 bytes, 14 insns) */
void f_11ba4360(void) {
  FTRACE(0x11ba4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4360 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4361 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4363 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4364 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ba436b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba436e push eax */
  push32((uint32_t)(EAX));
  /* 11ba436f call dword ptr [0x11bd0374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0374))), 0x11ba4375u);
  /* 11ba4375 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba4377 je 0x11ba4380 */
  if (C.zf) goto L_11ba4380;
  /* 11ba4379 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ba4380:;
  /* 11ba4380 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba4383 mov esp, ebp */
  ESP = (EBP);
  /* 11ba4385 pop ebp */
  EBP = (pop32());
  /* 11ba4386 ret  */
  ESPCHK(0x11ba4360u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11ba4390 (129 bytes, 56 insns) */
void f_11ba4390(void) {
  FTRACE(0x11ba4390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4390 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11ba4394 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba4398 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11ba439e jne 0x11ba43dc */
  if (!C.zf) goto L_11ba43dc;
L_11ba43a0:;
  /* 11ba43a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba43a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba43a4 jne 0x11ba43d4 */
  if (!C.zf) goto L_11ba43d4;
  /* 11ba43a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ba43a8 je 0x11ba43d0 */
  if (C.zf) goto L_11ba43d0;
  /* 11ba43aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba43ad jne 0x11ba43d4 */
  if (!C.zf) goto L_11ba43d4;
  /* 11ba43af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ba43b1 je 0x11ba43d0 */
  if (C.zf) goto L_11ba43d0;
  /* 11ba43b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ba43b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba43b9 jne 0x11ba43d4 */
  if (!C.zf) goto L_11ba43d4;
  /* 11ba43bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ba43bd je 0x11ba43d0 */
  if (C.zf) goto L_11ba43d0;
  /* 11ba43bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba43c2 jne 0x11ba43d4 */
  if (!C.zf) goto L_11ba43d4;
  /* 11ba43c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba43c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba43ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ba43cc jne 0x11ba43a0 */
  if (!C.zf) goto L_11ba43a0;
  /* 11ba43ce mov edi, edi */
  EDI = (EDI);
L_11ba43d0:;
  /* 11ba43d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba43d2 ret  */
  ESPCHK(0x11ba4390u, _esp0);
  ESP += 4; return;
  /* 11ba43d3 nop  */
  /* nop */
L_11ba43d4:;
  /* 11ba43d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba43d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ba43d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ba43d9 ret  */
  ESPCHK(0x11ba4390u, _esp0);
  ESP += 4; return;
  /* 11ba43da mov edi, edi */
  EDI = (EDI);
L_11ba43dc:;
  /* 11ba43dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11ba43e2 je 0x11ba43f8 */
  if (C.zf) goto L_11ba43f8;
  /* 11ba43e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11ba43e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11ba43e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba43e9 jne 0x11ba43d4 */
  if (!C.zf) goto L_11ba43d4;
  /* 11ba43eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11ba43ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ba43ee je 0x11ba43d0 */
  if (C.zf) goto L_11ba43d0;
  /* 11ba43f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11ba43f6 je 0x11ba43a0 */
  if (C.zf) goto L_11ba43a0;
L_11ba43f8:;
  /* 11ba43f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ba43fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba43fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba4400 jne 0x11ba43d4 */
  if (!C.zf) goto L_11ba43d4;
  /* 11ba4402 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ba4404 je 0x11ba43d0 */
  if (C.zf) goto L_11ba43d0;
  /* 11ba4406 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ba4409 jne 0x11ba43d4 */
  if (!C.zf) goto L_11ba43d4;
  /* 11ba440b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ba440d je 0x11ba43d0 */
  if (C.zf) goto L_11ba43d0;
  /* 11ba440f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4412 jmp 0x11ba43a0 */
  goto L_11ba43a0;
}

/* FUN_100144d9 @ 0x11ba44d9 (27 bytes, 11 insns) */
void f_11ba44d9(void) {
  FTRACE(0x11ba44d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba44d9 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba44da mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba44de mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11ba44e0 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ba44e3 push eax */
  push32((uint32_t)(EAX));
  /* 11ba44e4 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11ba44e7 push eax */
  push32((uint32_t)(EAX));
  /* 11ba44e8 call 0x11b98b42 */
  push32(0x11ba44edu); f_11b98b42();
  /* 11ba44ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba44f0 pop ebp */
  EBP = (pop32());
  /* 11ba44f1 ret 4 */
  ESPCHK(0x11ba44d9u, _esp0);
  ESP += 8; return;
}

/* __XcptFilter @ 0x11ba4500 (446 bytes, 130 insns) */
void f_11ba4500(void) {
  FTRACE(0x11ba4500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4500 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4501 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4503 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4506 call 0x11b9d4d0 */
  push32(0x11ba450bu); f_11b9d4d0();
  /* 11ba450b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba450e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4511 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11ba4514 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4515 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4518 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4519 call 0x11ba46c0 */
  push32(0x11ba451eu); f_11ba46c0();
  /* 11ba451e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4521 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba4524 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4528 je 0x11ba4533 */
  if (C.zf) goto L_11ba4533;
  /* 11ba452a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba452d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4531 jne 0x11ba4542 */
  if (!C.zf) goto L_11ba4542;
L_11ba4533:;
  /* 11ba4533 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba4536 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4537 call dword ptr [0x11bd0370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0370))), 0x11ba453du);
  /* 11ba453d jmp 0x11ba46ba */
  goto L_11ba46ba;
L_11ba4542:;
  /* 11ba4542 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4545 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4549 jne 0x11ba455f */
  if (!C.zf) goto L_11ba455f;
  /* 11ba454b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba454e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11ba4555 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba455a jmp 0x11ba46ba */
  goto L_11ba46ba;
L_11ba455f:;
  /* 11ba455f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4562 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4566 jne 0x11ba4570 */
  if (!C.zf) goto L_11ba4570;
  /* 11ba4568 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba456b jmp 0x11ba46ba */
  goto L_11ba46ba;
L_11ba4570:;
  /* 11ba4570 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4573 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba4576 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba4579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba457c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11ba457f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ba4582 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4585 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba4588 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11ba458b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba458e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4592 jne 0x11ba4697 */
  if (!C.zf) goto L_11ba4697;
  /* 11ba4598 mov eax, dword ptr [0x11bcc2d8] */
  EAX = (r32((uint32_t)(0x11bcc2d8)));
  /* 11ba459d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ba45a0 jmp 0x11ba45ab */
  goto L_11ba45ab;
L_11ba45a2:;
  /* 11ba45a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba45a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba45a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11ba45ab:;
  /* 11ba45ab mov edx, dword ptr [0x11bcc2d8] */
  EDX = (r32((uint32_t)(0x11bcc2d8)));
  /* 11ba45b1 add edx, dword ptr [0x11bcc2dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bcc2dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba45b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba45ba jge 0x11ba45d2 */
  if ((C.sf==C.of)) goto L_11ba45d2;
  /* 11ba45bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba45bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba45c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba45c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11ba45c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11ba45d0 jmp 0x11ba45a2 */
  goto L_11ba45a2;
L_11ba45d2:;
  /* 11ba45d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba45d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11ba45d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba45db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba45de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba45e4 jne 0x11ba45f5 */
  if (!C.zf) goto L_11ba45f5;
  /* 11ba45e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba45e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11ba45f0 jmp 0x11ba467d */
  goto L_11ba467d;
L_11ba45f5:;
  /* 11ba45f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba45f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba45fe jne 0x11ba460c */
  if (!C.zf) goto L_11ba460c;
  /* 11ba4600 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4603 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11ba460a jmp 0x11ba467d */
  goto L_11ba467d;
L_11ba460c:;
  /* 11ba460c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba460f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4615 jne 0x11ba4623 */
  if (!C.zf) goto L_11ba4623;
  /* 11ba4617 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba461a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11ba4621 jmp 0x11ba467d */
  goto L_11ba467d;
L_11ba4623:;
  /* 11ba4623 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4626 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba462c jne 0x11ba463a */
  if (!C.zf) goto L_11ba463a;
  /* 11ba462e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4631 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11ba4638 jmp 0x11ba467d */
  goto L_11ba467d;
L_11ba463a:;
  /* 11ba463a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba463d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4643 jne 0x11ba4651 */
  if (!C.zf) goto L_11ba4651;
  /* 11ba4645 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4648 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11ba464f jmp 0x11ba467d */
  goto L_11ba467d;
L_11ba4651:;
  /* 11ba4651 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba4654 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba465a jne 0x11ba4668 */
  if (!C.zf) goto L_11ba4668;
  /* 11ba465c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba465f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11ba4666 jmp 0x11ba467d */
  goto L_11ba467d;
L_11ba4668:;
  /* 11ba4668 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba466b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4671 jne 0x11ba467d */
  if (!C.zf) goto L_11ba467d;
  /* 11ba4673 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4676 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11ba467d:;
  /* 11ba467d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4680 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11ba4683 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4684 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ba4686 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11ba4689u);
  /* 11ba4689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba468c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba468f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4692 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11ba4695 jmp 0x11ba46ae */
  goto L_11ba46ae;
L_11ba4697:;
  /* 11ba4697 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba469a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11ba46a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba46a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ba46a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba46a8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11ba46abu);
  /* 11ba46ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba46ae:;
  /* 11ba46ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba46b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ba46b4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11ba46b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ba46ba:;
  /* 11ba46ba mov esp, ebp */
  ESP = (EBP);
  /* 11ba46bc pop ebp */
  EBP = (pop32());
  /* 11ba46bd ret  */
  ESPCHK(0x11ba4500u, _esp0);
  ESP += 4; return;
}

/* FUN_100146c0 @ 0x11ba46c0 (89 bytes, 35 insns) */
void f_11ba46c0(void) {
  FTRACE(0x11ba46c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba46c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba46c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba46c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba46c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba46c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba46ca:;
  /* 11ba46ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba46cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ba46cf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba46d2 je 0x11ba46f2 */
  if (C.zf) goto L_11ba46f2;
  /* 11ba46d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba46d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba46da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba46dd mov ecx, dword ptr [0x11bcc2e4] */
  ECX = (r32((uint32_t)(0x11bcc2e4)));
  /* 11ba46e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba46e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba46e9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba46eb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba46ee jae 0x11ba46f2 */
  if (!C.cf) goto L_11ba46f2;
  /* 11ba46f0 jmp 0x11ba46ca */
  goto L_11ba46ca;
L_11ba46f2:;
  /* 11ba46f2 mov eax, dword ptr [0x11bcc2e4] */
  EAX = (r32((uint32_t)(0x11bcc2e4)));
  /* 11ba46f7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba46fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba46fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba46ff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4702 jae 0x11ba470e */
  if (!C.cf) goto L_11ba470e;
  /* 11ba4704 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba4707 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ba4709 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba470c je 0x11ba4712 */
  if (C.zf) goto L_11ba4712;
L_11ba470e:;
  /* 11ba470e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4710 jmp 0x11ba4715 */
  goto L_11ba4715;
L_11ba4712:;
  /* 11ba4712 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ba4715:;
  /* 11ba4715 mov esp, ebp */
  ESP = (EBP);
  /* 11ba4717 pop ebp */
  EBP = (pop32());
  /* 11ba4718 ret  */
  ESPCHK(0x11ba46c0u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x11ba4720 (30 bytes, 12 insns) */
void f_11ba4720(void) {
  FTRACE(0x11ba4720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4720 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4721 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4723 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ba4725 call 0x11b9f980 */
  push32(0x11ba472au); f_11b9f980();
  /* 11ba472a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba472d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11ba472f call 0x11ba04f0 */
  push32(0x11ba4734u); f_11ba04f0();
  /* 11ba4734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4737 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ba4739 call 0x11b9d840 */
  push32(0x11ba473eu); f_11b9d840();
  /* 11ba473e pop ebp */
  EBP = (pop32());
  /* 11ba473f ret  */
  ESPCHK(0x11ba4720u, _esp0);
  ESP += 4; return;
}

/* FUN_10014740 @ 0x11ba4740 (61 bytes, 18 insns) */
void f_11ba4740(void) {
  FTRACE(0x11ba4740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4740 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4741 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4743 cmp dword ptr [0x11bce618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba474a jne 0x11ba477b */
  if (!C.zf) goto L_11ba477b;
  /* 11ba474c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ba474e call 0x11b9a6d0 */
  push32(0x11ba4753u); f_11b9a6d0();
  /* 11ba4753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4756 cmp dword ptr [0x11bce618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba475d jne 0x11ba4771 */
  if (!C.zf) goto L_11ba4771;
  /* 11ba475f call 0x11ba47a0 */
  push32(0x11ba4764u); f_11ba47a0();
  /* 11ba4764 mov eax, dword ptr [0x11bce618] */
  EAX = (r32((uint32_t)(0x11bce618)));
  /* 11ba4769 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba476c mov dword ptr [0x11bce618], eax */
  w32((uint32_t)(0x11bce618), (EAX));
L_11ba4771:;
  /* 11ba4771 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ba4773 call 0x11b9a770 */
  push32(0x11ba4778u); f_11b9a770();
  /* 11ba4778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba477b:;
  /* 11ba477b pop ebp */
  EBP = (pop32());
  /* 11ba477c ret  */
  ESPCHK(0x11ba4740u, _esp0);
  ESP += 4; return;
}

/* FUN_10014780 @ 0x11ba4780 (30 bytes, 11 insns) */
void f_11ba4780(void) {
  FTRACE(0x11ba4780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4780 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4781 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4783 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ba4785 call 0x11b9a6d0 */
  push32(0x11ba478au); f_11b9a6d0();
  /* 11ba478a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba478d call 0x11ba47a0 */
  push32(0x11ba4792u); f_11ba47a0();
  /* 11ba4792 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ba4794 call 0x11b9a770 */
  push32(0x11ba4799u); f_11b9a770();
  /* 11ba4799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba479c pop ebp */
  EBP = (pop32());
  /* 11ba479d ret  */
  ESPCHK(0x11ba4780u, _esp0);
  ESP += 4; return;
}

/* FUN_100147a0 @ 0x11ba47a0 (939 bytes, 266 insns) */
void f_11ba47a0(void) {
  FTRACE(0x11ba47a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba47a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba47a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba47a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba47a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba47ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ba47af call 0x11b9a6d0 */
  push32(0x11ba47b4u); f_11b9a6d0();
  /* 11ba47b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba47b7 mov dword ptr [0x11bce560], 0 */
  w32((uint32_t)(0x11bce560), (0x0u));
  /* 11ba47c1 mov dword ptr [0x11bcc390], 0xffffffff */
  w32((uint32_t)(0x11bcc390), (0xffffffffu));
  /* 11ba47cb mov eax, dword ptr [0x11bcc390] */
  EAX = (r32((uint32_t)(0x11bcc390)));
  /* 11ba47d0 mov dword ptr [0x11bcc380], eax */
  w32((uint32_t)(0x11bcc380), (EAX));
  /* 11ba47d5 push 0x11bc932c */
  push32((uint32_t)(0x11bc932cu));
  /* 11ba47da call 0x11ba9930 */
  push32(0x11ba47dfu); f_11ba9930();
  /* 11ba47df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba47e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba47e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba47e9 jne 0x11ba4923 */
  if (!C.zf) goto L_11ba4923;
  /* 11ba47ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ba47f1 call 0x11b9a770 */
  push32(0x11ba47f6u); f_11b9a770();
  /* 11ba47f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba47f9 push 0x11bce568 */
  push32((uint32_t)(0x11bce568u));
  /* 11ba47fe call dword ptr [0x11bd03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03e4))), 0x11ba4804u);
  /* 11ba4804 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4807 je 0x11ba491e */
  if (C.zf) goto L_11ba491e;
  /* 11ba480d mov dword ptr [0x11bce560], 1 */
  w32((uint32_t)(0x11bce560), (0x1u));
  /* 11ba4817 mov ecx, dword ptr [0x11bce568] */
  ECX = (r32((uint32_t)(0x11bce568)));
  /* 11ba481d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4820 mov dword ptr [0x11bcc2e8], ecx */
  w32((uint32_t)(0x11bcc2e8), (ECX));
  /* 11ba4826 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4828 mov dx, word ptr [0x11bce5ae] */
  DX = (r16((uint32_t)(0x11bce5ae)));
  /* 11ba482f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba4831 je 0x11ba4849 */
  if (C.zf) goto L_11ba4849;
  /* 11ba4833 mov eax, dword ptr [0x11bce5bc] */
  EAX = (r32((uint32_t)(0x11bce5bc)));
  /* 11ba4838 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba483b mov ecx, dword ptr [0x11bcc2e8] */
  ECX = (r32((uint32_t)(0x11bcc2e8)));
  /* 11ba4841 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4843 mov dword ptr [0x11bcc2e8], ecx */
  w32((uint32_t)(0x11bcc2e8), (ECX));
L_11ba4849:;
  /* 11ba4849 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba484b mov dx, word ptr [0x11bce602] */
  DX = (r16((uint32_t)(0x11bce602)));
  /* 11ba4852 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba4854 je 0x11ba487e */
  if (C.zf) goto L_11ba487e;
  /* 11ba4856 cmp dword ptr [0x11bce610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba485d je 0x11ba487e */
  if (C.zf) goto L_11ba487e;
  /* 11ba485f mov dword ptr [0x11bcc2ec], 1 */
  w32((uint32_t)(0x11bcc2ec), (0x1u));
  /* 11ba4869 mov eax, dword ptr [0x11bce610] */
  EAX = (r32((uint32_t)(0x11bce610)));
  /* 11ba486e sub eax, dword ptr [0x11bce5bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bce5bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4874 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4877 mov dword ptr [0x11bcc2f0], eax */
  w32((uint32_t)(0x11bcc2f0), (EAX));
  /* 11ba487c jmp 0x11ba4892 */
  goto L_11ba4892;
L_11ba487e:;
  /* 11ba487e mov dword ptr [0x11bcc2ec], 0 */
  w32((uint32_t)(0x11bcc2ec), (0x0u));
  /* 11ba4888 mov dword ptr [0x11bcc2f0], 0 */
  w32((uint32_t)(0x11bcc2f0), (0x0u));
L_11ba4892:;
  /* 11ba4892 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11ba4895 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4896 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4898 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ba489a mov edx, dword ptr [0x11bcc374] */
  EDX = (r32((uint32_t)(0x11bcc374)));
  /* 11ba48a0 push edx */
  push32((uint32_t)(EDX));
  /* 11ba48a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ba48a3 push 0x11bce56c */
  push32((uint32_t)(0x11bce56cu));
  /* 11ba48a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ba48ad mov eax, dword ptr [0x11bce64c] */
  EAX = (r32((uint32_t)(0x11bce64c)));
  /* 11ba48b2 push eax */
  push32((uint32_t)(EAX));
  /* 11ba48b3 call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11ba48b9u);
  /* 11ba48b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba48bb je 0x11ba48cf */
  if (C.zf) goto L_11ba48cf;
  /* 11ba48bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba48c1 jne 0x11ba48cf */
  if (!C.zf) goto L_11ba48cf;
  /* 11ba48c3 mov ecx, dword ptr [0x11bcc374] */
  ECX = (r32((uint32_t)(0x11bcc374)));
  /* 11ba48c9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11ba48cd jmp 0x11ba48d8 */
  goto L_11ba48d8;
L_11ba48cf:;
  /* 11ba48cf mov edx, dword ptr [0x11bcc374] */
  EDX = (r32((uint32_t)(0x11bcc374)));
  /* 11ba48d5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11ba48d8:;
  /* 11ba48d8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ba48db push eax */
  push32((uint32_t)(EAX));
  /* 11ba48dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba48de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11ba48e0 mov ecx, dword ptr [0x11bcc378] */
  ECX = (r32((uint32_t)(0x11bcc378)));
  /* 11ba48e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba48e7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11ba48e9 push 0x11bce5c0 */
  push32((uint32_t)(0x11bce5c0u));
  /* 11ba48ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ba48f3 mov edx, dword ptr [0x11bce64c] */
  EDX = (r32((uint32_t)(0x11bce64c)));
  /* 11ba48f9 push edx */
  push32((uint32_t)(EDX));
  /* 11ba48fa call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11ba4900u);
  /* 11ba4900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba4902 je 0x11ba4915 */
  if (C.zf) goto L_11ba4915;
  /* 11ba4904 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4908 jne 0x11ba4915 */
  if (!C.zf) goto L_11ba4915;
  /* 11ba490a mov eax, dword ptr [0x11bcc378] */
  EAX = (r32((uint32_t)(0x11bcc378)));
  /* 11ba490f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11ba4913 jmp 0x11ba491e */
  goto L_11ba491e;
L_11ba4915:;
  /* 11ba4915 mov ecx, dword ptr [0x11bcc378] */
  ECX = (r32((uint32_t)(0x11bcc378)));
  /* 11ba491b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11ba491e:;
  /* 11ba491e jmp 0x11ba4b47 */
  goto L_11ba4b47;
L_11ba4923:;
  /* 11ba4923 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4926 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba4929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba492b je 0x11ba494d */
  if (C.zf) goto L_11ba494d;
  /* 11ba492d cmp dword ptr [0x11bce614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4934 je 0x11ba495c */
  if (C.zf) goto L_11ba495c;
  /* 11ba4936 mov ecx, dword ptr [0x11bce614] */
  ECX = (r32((uint32_t)(0x11bce614)));
  /* 11ba493c push ecx */
  push32((uint32_t)(ECX));
  /* 11ba493d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4940 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4941 call 0x11ba4390 */
  push32(0x11ba4946u); f_11ba4390();
  /* 11ba4946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba494b jne 0x11ba495c */
  if (!C.zf) goto L_11ba495c;
L_11ba494d:;
  /* 11ba494d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ba494f call 0x11b9a770 */
  push32(0x11ba4954u); f_11b9a770();
  /* 11ba4954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4957 jmp 0x11ba4b47 */
  goto L_11ba4b47;
L_11ba495c:;
  /* 11ba495c push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba495e mov eax, dword ptr [0x11bce614] */
  EAX = (r32((uint32_t)(0x11bce614)));
  /* 11ba4963 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4964 call 0x11b9b260 */
  push32(0x11ba4969u); f_11b9b260();
  /* 11ba4969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba496c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11ba4971 push 0x11bc9324 */
  push32((uint32_t)(0x11bc9324u));
  /* 11ba4976 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba4978 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba497b push ecx */
  push32((uint32_t)(ECX));
  /* 11ba497c call 0x11b9fe80 */
  push32(0x11ba4981u); f_11b9fe80();
  /* 11ba4981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4987 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4988 call 0x11b9a7d0 */
  push32(0x11ba498du); f_11b9a7d0();
  /* 11ba498d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4990 mov dword ptr [0x11bce614], eax */
  w32((uint32_t)(0x11bce614), (EAX));
  /* 11ba4995 cmp dword ptr [0x11bce614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba499c jne 0x11ba49ad */
  if (!C.zf) goto L_11ba49ad;
  /* 11ba499e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ba49a0 call 0x11b9a770 */
  push32(0x11ba49a5u); f_11b9a770();
  /* 11ba49a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba49a8 jmp 0x11ba4b47 */
  goto L_11ba4b47;
L_11ba49ad:;
  /* 11ba49ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba49b0 push edx */
  push32((uint32_t)(EDX));
  /* 11ba49b1 mov eax, dword ptr [0x11bce614] */
  EAX = (r32((uint32_t)(0x11bce614)));
  /* 11ba49b6 push eax */
  push32((uint32_t)(EAX));
  /* 11ba49b7 call 0x11ba0000 */
  push32(0x11ba49bcu); f_11ba0000();
  /* 11ba49bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba49bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11ba49c1 call 0x11b9a770 */
  push32(0x11ba49c6u); f_11b9a770();
  /* 11ba49c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba49c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ba49cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba49ce push ecx */
  push32((uint32_t)(ECX));
  /* 11ba49cf mov edx, dword ptr [0x11bcc374] */
  EDX = (r32((uint32_t)(0x11bcc374)));
  /* 11ba49d5 push edx */
  push32((uint32_t)(EDX));
  /* 11ba49d6 call 0x11ba0870 */
  push32(0x11ba49dbu); f_11ba0870();
  /* 11ba49db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba49de mov eax, dword ptr [0x11bcc374] */
  EAX = (r32((uint32_t)(0x11bcc374)));
  /* 11ba49e3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11ba49e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba49ea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba49ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba49f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba49f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba49f6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba49f9 jne 0x11ba4a0d */
  if (!C.zf) goto L_11ba4a0d;
  /* 11ba49fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba49fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4a01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba4a04 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4a0a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ba4a0d:;
  /* 11ba4a0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a10 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4a11 call 0x11ba96b0 */
  push32(0x11ba4a16u); f_11ba96b0();
  /* 11ba4a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4a19 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4a1f mov dword ptr [0x11bcc2e8], eax */
  w32((uint32_t)(0x11bcc2e8), (EAX));
L_11ba4a24:;
  /* 11ba4a24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a27 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba4a2a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4a2d je 0x11ba4a45 */
  if (C.zf) goto L_11ba4a45;
  /* 11ba4a2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a32 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba4a35 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4a38 jl 0x11ba4a50 */
  if ((C.sf!=C.of)) goto L_11ba4a50;
  /* 11ba4a3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba4a40 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4a43 jg 0x11ba4a50 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba4a50;
L_11ba4a45:;
  /* 11ba4a45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4a4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba4a4e jmp 0x11ba4a24 */
  goto L_11ba4a24;
L_11ba4a50:;
  /* 11ba4a50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a53 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba4a56 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4a59 jne 0x11ba4af5 */
  if (!C.zf) goto L_11ba4af5;
  /* 11ba4a5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4a65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba4a68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a6b push edx */
  push32((uint32_t)(EDX));
  /* 11ba4a6c call 0x11ba96b0 */
  push32(0x11ba4a71u); f_11ba96b0();
  /* 11ba4a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4a74 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4a77 mov ecx, dword ptr [0x11bcc2e8] */
  ECX = (r32((uint32_t)(0x11bcc2e8)));
  /* 11ba4a7d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4a7f mov dword ptr [0x11bcc2e8], ecx */
  w32((uint32_t)(0x11bcc2e8), (ECX));
L_11ba4a85:;
  /* 11ba4a85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a88 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba4a8b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4a8e jl 0x11ba4aa6 */
  if ((C.sf!=C.of)) goto L_11ba4aa6;
  /* 11ba4a90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a93 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba4a96 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4a99 jg 0x11ba4aa6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba4aa6;
  /* 11ba4a9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4a9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4aa1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba4aa4 jmp 0x11ba4a85 */
  goto L_11ba4a85;
L_11ba4aa6:;
  /* 11ba4aa6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4aa9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba4aac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4aaf jne 0x11ba4af5 */
  if (!C.zf) goto L_11ba4af5;
  /* 11ba4ab1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4ab4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4ab7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba4aba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4abd push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4abe call 0x11ba96b0 */
  push32(0x11ba4ac3u); f_11ba96b0();
  /* 11ba4ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4ac6 mov edx, dword ptr [0x11bcc2e8] */
  EDX = (r32((uint32_t)(0x11bcc2e8)));
  /* 11ba4acc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4ace mov dword ptr [0x11bcc2e8], edx */
  w32((uint32_t)(0x11bcc2e8), (EDX));
L_11ba4ad4:;
  /* 11ba4ad4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4ad7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba4ada cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4add jl 0x11ba4af5 */
  if ((C.sf!=C.of)) goto L_11ba4af5;
  /* 11ba4adf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4ae2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11ba4ae5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4ae8 jg 0x11ba4af5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ba4af5;
  /* 11ba4aea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4aed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4af0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ba4af3 jmp 0x11ba4ad4 */
  goto L_11ba4ad4;
L_11ba4af5:;
  /* 11ba4af5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4af9 je 0x11ba4b09 */
  if (C.zf) goto L_11ba4b09;
  /* 11ba4afb mov edx, dword ptr [0x11bcc2e8] */
  EDX = (r32((uint32_t)(0x11bcc2e8)));
  /* 11ba4b01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba4b03 mov dword ptr [0x11bcc2e8], edx */
  w32((uint32_t)(0x11bcc2e8), (EDX));
L_11ba4b09:;
  /* 11ba4b09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4b0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11ba4b0f mov dword ptr [0x11bcc2ec], ecx */
  w32((uint32_t)(0x11bcc2ec), (ECX));
  /* 11ba4b15 cmp dword ptr [0x11bcc2ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc2ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4b1c je 0x11ba4b3e */
  if (C.zf) goto L_11ba4b3e;
  /* 11ba4b1e push 3 */
  push32((uint32_t)(0x3u));
  /* 11ba4b20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4b23 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4b24 mov eax, dword ptr [0x11bcc378] */
  EAX = (r32((uint32_t)(0x11bcc378)));
  /* 11ba4b29 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4b2a call 0x11ba0870 */
  push32(0x11ba4b2fu); f_11ba0870();
  /* 11ba4b2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4b32 mov ecx, dword ptr [0x11bcc378] */
  ECX = (r32((uint32_t)(0x11bcc378)));
  /* 11ba4b38 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11ba4b3c jmp 0x11ba4b47 */
  goto L_11ba4b47;
L_11ba4b3e:;
  /* 11ba4b3e mov edx, dword ptr [0x11bcc378] */
  EDX = (r32((uint32_t)(0x11bcc378)));
  /* 11ba4b44 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11ba4b47:;
  /* 11ba4b47 mov esp, ebp */
  ESP = (EBP);
  /* 11ba4b49 pop ebp */
  EBP = (pop32());
  /* 11ba4b4a ret  */
  ESPCHK(0x11ba47a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b50 @ 0x11ba4b50 (46 bytes, 18 insns) */
void f_11ba4b50(void) {
  FTRACE(0x11ba4b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4b51 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4b54 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ba4b56 call 0x11b9a6d0 */
  push32(0x11ba4b5bu); f_11b9a6d0();
  /* 11ba4b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4b5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4b61 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4b62 call 0x11ba4b80 */
  push32(0x11ba4b67u); f_11ba4b80();
  /* 11ba4b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4b6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba4b6d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11ba4b6f call 0x11b9a770 */
  push32(0x11ba4b74u); f_11b9a770();
  /* 11ba4b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba4b7a mov esp, ebp */
  ESP = (EBP);
  /* 11ba4b7c pop ebp */
  EBP = (pop32());
  /* 11ba4b7d ret  */
  ESPCHK(0x11ba4b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b80 @ 0x11ba4b80 (762 bytes, 246 insns) */
void f_11ba4b80(void) {
  FTRACE(0x11ba4b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4b81 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4b83 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4b84 cmp dword ptr [0x11bcc2ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc2ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4b8b jne 0x11ba4b94 */
  if (!C.zf) goto L_11ba4b94;
  /* 11ba4b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4b8f jmp 0x11ba4e76 */
  goto L_11ba4e76;
L_11ba4b94:;
  /* 11ba4b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4b97 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ba4b9a cmp ecx, dword ptr [0x11bcc380] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcc380))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4ba0 jne 0x11ba4bb4 */
  if (!C.zf) goto L_11ba4bb4;
  /* 11ba4ba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4ba5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ba4ba8 cmp eax, dword ptr [0x11bcc390] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcc390))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4bae je 0x11ba4d7b */
  if (C.zf) goto L_11ba4d7b;
L_11ba4bb4:;
  /* 11ba4bb4 cmp dword ptr [0x11bce560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4bbb je 0x11ba4d35 */
  if (C.zf) goto L_11ba4d35;
  /* 11ba4bc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4bc3 mov cx, word ptr [0x11bce600] */
  CX = (r16((uint32_t)(0x11bce600)));
  /* 11ba4bca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba4bcc jne 0x11ba4c29 */
  if (!C.zf) goto L_11ba4c29;
  /* 11ba4bce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4bd0 mov dx, word ptr [0x11bce60e] */
  DX = (r16((uint32_t)(0x11bce60e)));
  /* 11ba4bd7 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4bd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4bda mov ax, word ptr [0x11bce60c] */
  AX = (r16((uint32_t)(0x11bce60c)));
  /* 11ba4be0 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4be1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4be3 mov cx, word ptr [0x11bce60a] */
  CX = (r16((uint32_t)(0x11bce60a)));
  /* 11ba4bea push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4beb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4bed mov dx, word ptr [0x11bce608] */
  DX = (r16((uint32_t)(0x11bce608)));
  /* 11ba4bf4 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4bf9 mov ax, word ptr [0x11bce604] */
  AX = (r16((uint32_t)(0x11bce604)));
  /* 11ba4bff push eax */
  push32((uint32_t)(EAX));
  /* 11ba4c00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4c02 mov cx, word ptr [0x11bce606] */
  CX = (r16((uint32_t)(0x11bce606)));
  /* 11ba4c09 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4c0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4c0c mov dx, word ptr [0x11bce602] */
  DX = (r16((uint32_t)(0x11bce602)));
  /* 11ba4c13 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4c17 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ba4c1a push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4c1b push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba4c1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba4c1f call 0x11ba4e80 */
  push32(0x11ba4c24u); f_11ba4e80();
  /* 11ba4c24 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4c27 jmp 0x11ba4c7a */
  goto L_11ba4c7a;
L_11ba4c29:;
  /* 11ba4c29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4c2b mov dx, word ptr [0x11bce60e] */
  DX = (r16((uint32_t)(0x11bce60e)));
  /* 11ba4c32 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4c35 mov ax, word ptr [0x11bce60c] */
  AX = (r16((uint32_t)(0x11bce60c)));
  /* 11ba4c3b push eax */
  push32((uint32_t)(EAX));
  /* 11ba4c3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4c3e mov cx, word ptr [0x11bce60a] */
  CX = (r16((uint32_t)(0x11bce60a)));
  /* 11ba4c45 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4c46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4c48 mov dx, word ptr [0x11bce608] */
  DX = (r16((uint32_t)(0x11bce608)));
  /* 11ba4c4f push edx */
  push32((uint32_t)(EDX));
  /* 11ba4c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4c52 mov ax, word ptr [0x11bce606] */
  AX = (r16((uint32_t)(0x11bce606)));
  /* 11ba4c58 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4c5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4c5f mov cx, word ptr [0x11bce602] */
  CX = (r16((uint32_t)(0x11bce602)));
  /* 11ba4c66 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4c67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4c6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ba4c6d push eax */
  push32((uint32_t)(EAX));
  /* 11ba4c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4c70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba4c72 call 0x11ba4e80 */
  push32(0x11ba4c77u); f_11ba4e80();
  /* 11ba4c77 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba4c7a:;
  /* 11ba4c7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4c7c mov cx, word ptr [0x11bce5ac] */
  CX = (r16((uint32_t)(0x11bce5ac)));
  /* 11ba4c83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba4c85 jne 0x11ba4ce2 */
  if (!C.zf) goto L_11ba4ce2;
  /* 11ba4c87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4c89 mov dx, word ptr [0x11bce5ba] */
  DX = (r16((uint32_t)(0x11bce5ba)));
  /* 11ba4c90 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4c93 mov ax, word ptr [0x11bce5b8] */
  AX = (r16((uint32_t)(0x11bce5b8)));
  /* 11ba4c99 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4c9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4c9c mov cx, word ptr [0x11bce5b6] */
  CX = (r16((uint32_t)(0x11bce5b6)));
  /* 11ba4ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4ca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4ca6 mov dx, word ptr [0x11bce5b4] */
  DX = (r16((uint32_t)(0x11bce5b4)));
  /* 11ba4cad push edx */
  push32((uint32_t)(EDX));
  /* 11ba4cae push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4cb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4cb2 mov ax, word ptr [0x11bce5b0] */
  AX = (r16((uint32_t)(0x11bce5b0)));
  /* 11ba4cb8 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4cb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4cbb mov cx, word ptr [0x11bce5b2] */
  CX = (r16((uint32_t)(0x11bce5b2)));
  /* 11ba4cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4cc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4cc5 mov dx, word ptr [0x11bce5ae] */
  DX = (r16((uint32_t)(0x11bce5ae)));
  /* 11ba4ccc push edx */
  push32((uint32_t)(EDX));
  /* 11ba4ccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4cd0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ba4cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba4cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4cd8 call 0x11ba4e80 */
  push32(0x11ba4cddu); f_11ba4e80();
  /* 11ba4cdd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4ce0 jmp 0x11ba4d33 */
  goto L_11ba4d33;
L_11ba4ce2:;
  /* 11ba4ce2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4ce4 mov dx, word ptr [0x11bce5ba] */
  DX = (r16((uint32_t)(0x11bce5ba)));
  /* 11ba4ceb push edx */
  push32((uint32_t)(EDX));
  /* 11ba4cec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4cee mov ax, word ptr [0x11bce5b8] */
  AX = (r16((uint32_t)(0x11bce5b8)));
  /* 11ba4cf4 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4cf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4cf7 mov cx, word ptr [0x11bce5b6] */
  CX = (r16((uint32_t)(0x11bce5b6)));
  /* 11ba4cfe push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4cff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4d01 mov dx, word ptr [0x11bce5b4] */
  DX = (r16((uint32_t)(0x11bce5b4)));
  /* 11ba4d08 push edx */
  push32((uint32_t)(EDX));
  /* 11ba4d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4d0b mov ax, word ptr [0x11bce5b2] */
  AX = (r16((uint32_t)(0x11bce5b2)));
  /* 11ba4d11 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4d18 mov cx, word ptr [0x11bce5ae] */
  CX = (r16((uint32_t)(0x11bce5ae)));
  /* 11ba4d1f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4d20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4d23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11ba4d26 push eax */
  push32((uint32_t)(EAX));
  /* 11ba4d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d2b call 0x11ba4e80 */
  push32(0x11ba4d30u); f_11ba4e80();
  /* 11ba4d30 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba4d33:;
  /* 11ba4d33 jmp 0x11ba4d7b */
  goto L_11ba4d7b;
L_11ba4d35:;
  /* 11ba4d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d3b push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba4d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba4d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba4d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4d48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11ba4d4b push edx */
  push32((uint32_t)(EDX));
  /* 11ba4d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba4d4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba4d50 call 0x11ba4e80 */
  push32(0x11ba4d55u); f_11ba4e80();
  /* 11ba4d55 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d5e push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba4d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d64 push 5 */
  push32((uint32_t)(0x5u));
  /* 11ba4d66 push 0xa */
  push32((uint32_t)(0xau));
  /* 11ba4d68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4d6b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11ba4d6e push ecx */
  push32((uint32_t)(ECX));
  /* 11ba4d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba4d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba4d73 call 0x11ba4e80 */
  push32(0x11ba4d78u); f_11ba4e80();
  /* 11ba4d78 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba4d7b:;
  /* 11ba4d7b mov edx, dword ptr [0x11bcc384] */
  EDX = (r32((uint32_t)(0x11bcc384)));
  /* 11ba4d81 cmp edx, dword ptr [0x11bcc394] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bcc394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4d87 jge 0x11ba4dd4 */
  if ((C.sf==C.of)) goto L_11ba4dd4;
  /* 11ba4d89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4d8c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ba4d8f cmp ecx, dword ptr [0x11bcc384] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcc384))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4d95 jl 0x11ba4da5 */
  if ((C.sf!=C.of)) goto L_11ba4da5;
  /* 11ba4d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4d9a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ba4d9d cmp eax, dword ptr [0x11bcc394] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcc394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4da3 jle 0x11ba4dac */
  if ((C.zf||C.sf!=C.of)) goto L_11ba4dac;
L_11ba4da5:;
  /* 11ba4da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4da7 jmp 0x11ba4e76 */
  goto L_11ba4e76;
L_11ba4dac:;
  /* 11ba4dac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4daf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ba4db2 cmp edx, dword ptr [0x11bcc384] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bcc384))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4db8 jle 0x11ba4dd2 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba4dd2;
  /* 11ba4dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4dbd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ba4dc0 cmp ecx, dword ptr [0x11bcc394] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcc394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4dc6 jge 0x11ba4dd2 */
  if ((C.sf==C.of)) goto L_11ba4dd2;
  /* 11ba4dc8 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba4dcd jmp 0x11ba4e76 */
  goto L_11ba4e76;
L_11ba4dd2:;
  /* 11ba4dd2 jmp 0x11ba4e17 */
  goto L_11ba4e17;
L_11ba4dd4:;
  /* 11ba4dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4dd7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ba4dda cmp eax, dword ptr [0x11bcc394] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcc394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4de0 jl 0x11ba4df0 */
  if ((C.sf!=C.of)) goto L_11ba4df0;
  /* 11ba4de2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4de5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ba4de8 cmp edx, dword ptr [0x11bcc384] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bcc384))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4dee jle 0x11ba4df7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba4df7;
L_11ba4df0:;
  /* 11ba4df0 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba4df5 jmp 0x11ba4e76 */
  goto L_11ba4e76;
L_11ba4df7:;
  /* 11ba4df7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4dfa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11ba4dfd cmp ecx, dword ptr [0x11bcc394] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcc394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4e03 jle 0x11ba4e17 */
  if ((C.zf||C.sf!=C.of)) goto L_11ba4e17;
  /* 11ba4e05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4e08 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11ba4e0b cmp eax, dword ptr [0x11bcc384] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcc384))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4e11 jge 0x11ba4e17 */
  if ((C.sf==C.of)) goto L_11ba4e17;
  /* 11ba4e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4e15 jmp 0x11ba4e76 */
  goto L_11ba4e76;
L_11ba4e17:;
  /* 11ba4e17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4e1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ba4e1d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4e23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ba4e25 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4e27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4e2a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba4e2d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4e33 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4e35 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4e3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba4e3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba4e41 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11ba4e44 cmp edx, dword ptr [0x11bcc384] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bcc384))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4e4a jne 0x11ba4e62 */
  if (!C.zf) goto L_11ba4e62;
  /* 11ba4e4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba4e4f cmp eax, dword ptr [0x11bcc388] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcc388))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4e55 jl 0x11ba4e5e */
  if ((C.sf!=C.of)) goto L_11ba4e5e;
  /* 11ba4e57 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba4e5c jmp 0x11ba4e76 */
  goto L_11ba4e76;
L_11ba4e5e:;
  /* 11ba4e5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4e60 jmp 0x11ba4e76 */
  goto L_11ba4e76;
L_11ba4e62:;
  /* 11ba4e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba4e65 cmp ecx, dword ptr [0x11bcc398] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcc398))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4e6b jge 0x11ba4e74 */
  if ((C.sf==C.of)) goto L_11ba4e74;
  /* 11ba4e6d mov eax, 1 */
  EAX = (0x1u);
  /* 11ba4e72 jmp 0x11ba4e76 */
  goto L_11ba4e76;
L_11ba4e74:;
  /* 11ba4e74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba4e76:;
  /* 11ba4e76 mov esp, ebp */
  ESP = (EBP);
  /* 11ba4e78 pop ebp */
  EBP = (pop32());
  /* 11ba4e79 ret  */
  ESPCHK(0x11ba4b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e80 @ 0x11ba4e80 (504 bytes, 145 insns) */
void f_11ba4e80(void) {
  FTRACE(0x11ba4e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba4e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba4e81 mov ebp, esp */
  EBP = (ESP);
  /* 11ba4e83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4e86 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4e8a jne 0x11ba4f5c */
  if (!C.zf) goto L_11ba4f5c;
  /* 11ba4e90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba4e93 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba4e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba4e98 jne 0x11ba4ea9 */
  if (!C.zf) goto L_11ba4ea9;
  /* 11ba4e9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba4e9d mov edx, dword ptr [ecx*4 + 0x11bcc398] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcc398)));
  /* 11ba4ea4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ba4ea7 jmp 0x11ba4eb6 */
  goto L_11ba4eb6;
L_11ba4ea9:;
  /* 11ba4ea9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba4eac mov ecx, dword ptr [eax*4 + 0x11bcc3cc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11bcc3cc)));
  /* 11ba4eb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ba4eb6:;
  /* 11ba4eb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba4eb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4ebc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ba4ebf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba4ec2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4ec5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4ecb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4ece add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4ed0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba4ed3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4ed6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11ba4ed9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11ba4edd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ba4ede mov ecx, 7 */
  ECX = (0x7u);
  /* 11ba4ee3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ba4ee5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba4ee8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba4eeb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4eee jge 0x11ba4f09 */
  if ((C.sf==C.of)) goto L_11ba4f09;
  /* 11ba4ef0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba4ef3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4ef6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba4ef9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4efc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4eff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4f02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4f04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba4f07 jmp 0x11ba4f1d */
  goto L_11ba4f1d;
L_11ba4f09:;
  /* 11ba4f09 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba4f0c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4f0f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba4f12 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4f15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4f18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4f1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ba4f1d:;
  /* 11ba4f1d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4f21 jne 0x11ba4f5a */
  if (!C.zf) goto L_11ba4f5a;
  /* 11ba4f23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba4f26 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba4f29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba4f2b jne 0x11ba4f3c */
  if (!C.zf) goto L_11ba4f3c;
  /* 11ba4f2d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba4f30 mov eax, dword ptr [edx*4 + 0x11bcc39c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bcc39c)));
  /* 11ba4f37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ba4f3a jmp 0x11ba4f49 */
  goto L_11ba4f49;
L_11ba4f3c:;
  /* 11ba4f3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba4f3f mov edx, dword ptr [ecx*4 + 0x11bcc3d0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcc3d0)));
  /* 11ba4f46 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11ba4f49:;
  /* 11ba4f49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4f4c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4f4f jle 0x11ba4f5a */
  if ((C.zf||C.sf!=C.of)) goto L_11ba4f5a;
  /* 11ba4f51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4f54 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba4f57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ba4f5a:;
  /* 11ba4f5a jmp 0x11ba4f91 */
  goto L_11ba4f91;
L_11ba4f5c:;
  /* 11ba4f5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba4f5f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba4f62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba4f64 jne 0x11ba4f75 */
  if (!C.zf) goto L_11ba4f75;
  /* 11ba4f66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba4f69 mov ecx, dword ptr [eax*4 + 0x11bcc398] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11bcc398)));
  /* 11ba4f70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ba4f73 jmp 0x11ba4f82 */
  goto L_11ba4f82;
L_11ba4f75:;
  /* 11ba4f75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba4f78 mov eax, dword ptr [edx*4 + 0x11bcc3cc] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bcc3cc)));
  /* 11ba4f7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11ba4f82:;
  /* 11ba4f82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ba4f85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba4f88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4f8b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4f8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ba4f91:;
  /* 11ba4f91 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba4f95 jne 0x11ba4fd1 */
  if (!C.zf) goto L_11ba4fd1;
  /* 11ba4f97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4f9a mov dword ptr [0x11bcc384], eax */
  w32((uint32_t)(0x11bcc384), (EAX));
  /* 11ba4f9f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ba4fa2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4fa5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ba4fa8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4faa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4fad mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11ba4fb0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4fb2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4fb8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11ba4fbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4fbd mov dword ptr [0x11bcc388], ecx */
  w32((uint32_t)(0x11bcc388), (ECX));
  /* 11ba4fc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba4fc6 mov dword ptr [0x11bcc380], edx */
  w32((uint32_t)(0x11bcc380), (EDX));
  /* 11ba4fcc jmp 0x11ba5074 */
  goto L_11ba5074;
L_11ba4fd1:;
  /* 11ba4fd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba4fd4 mov dword ptr [0x11bcc394], eax */
  w32((uint32_t)(0x11bcc394), (EAX));
  /* 11ba4fd9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ba4fdc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4fdf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ba4fe2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4fe4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4fe7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11ba4fea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4fec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba4ff2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11ba4ff5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba4ff7 mov dword ptr [0x11bcc398], ecx */
  w32((uint32_t)(0x11bcc398), (ECX));
  /* 11ba4ffd mov edx, dword ptr [0x11bcc2f0] */
  EDX = (r32((uint32_t)(0x11bcc2f0)));
  /* 11ba5003 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba5009 mov eax, dword ptr [0x11bcc398] */
  EAX = (r32((uint32_t)(0x11bcc398)));
  /* 11ba500e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5010 mov dword ptr [0x11bcc398], eax */
  w32((uint32_t)(0x11bcc398), (EAX));
  /* 11ba5015 cmp dword ptr [0x11bcc398], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc398))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba501c jge 0x11ba5041 */
  if ((C.sf==C.of)) goto L_11ba5041;
  /* 11ba501e mov ecx, dword ptr [0x11bcc398] */
  ECX = (r32((uint32_t)(0x11bcc398)));
  /* 11ba5024 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba502a mov dword ptr [0x11bcc398], ecx */
  w32((uint32_t)(0x11bcc398), (ECX));
  /* 11ba5030 mov edx, dword ptr [0x11bcc394] */
  EDX = (r32((uint32_t)(0x11bcc394)));
  /* 11ba5036 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5039 mov dword ptr [0x11bcc394], edx */
  w32((uint32_t)(0x11bcc394), (EDX));
  /* 11ba503f jmp 0x11ba506b */
  goto L_11ba506b;
L_11ba5041:;
  /* 11ba5041 cmp dword ptr [0x11bcc398], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc398))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba504b jl 0x11ba506b */
  if ((C.sf!=C.of)) goto L_11ba506b;
  /* 11ba504d mov eax, dword ptr [0x11bcc398] */
  EAX = (r32((uint32_t)(0x11bcc398)));
  /* 11ba5052 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5057 mov dword ptr [0x11bcc398], eax */
  w32((uint32_t)(0x11bcc398), (EAX));
  /* 11ba505c mov ecx, dword ptr [0x11bcc394] */
  ECX = (r32((uint32_t)(0x11bcc394)));
  /* 11ba5062 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5065 mov dword ptr [0x11bcc394], ecx */
  w32((uint32_t)(0x11bcc394), (ECX));
L_11ba506b:;
  /* 11ba506b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba506e mov dword ptr [0x11bcc390], edx */
  w32((uint32_t)(0x11bcc390), (EDX));
L_11ba5074:;
  /* 11ba5074 mov esp, ebp */
  ESP = (EBP);
  /* 11ba5076 pop ebp */
  EBP = (pop32());
  /* 11ba5077 ret  */
  ESPCHK(0x11ba4e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015080 @ 0x11ba5080 (130 bytes, 43 insns) */
void f_11ba5080(void) {
  FTRACE(0x11ba5080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5080 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5081 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5083 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5087 cmp eax, dword ptr [0x11bcfe7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfe7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba508d jae 0x11ba50b1 */
  if (!C.cf) goto L_11ba50b1;
  /* 11ba508f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5092 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba5095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5098 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba509b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba509e mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba50a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ba50aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba50ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba50af jne 0x11ba50cc */
  if (!C.zf) goto L_11ba50cc;
L_11ba50b1:;
  /* 11ba50b1 call 0x11ba6620 */
  push32(0x11ba50b6u); f_11ba6620();
  /* 11ba50b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ba50bc call 0x11ba6630 */
  push32(0x11ba50c1u); f_11ba6630();
  /* 11ba50c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ba50c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba50ca jmp 0x11ba50fe */
  goto L_11ba50fe;
L_11ba50cc:;
  /* 11ba50cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba50cf push edx */
  push32((uint32_t)(EDX));
  /* 11ba50d0 call 0x11ba9f10 */
  push32(0x11ba50d5u); f_11ba9f10();
  /* 11ba50d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba50d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba50db push eax */
  push32((uint32_t)(EAX));
  /* 11ba50dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba50df push ecx */
  push32((uint32_t)(ECX));
  /* 11ba50e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba50e3 push edx */
  push32((uint32_t)(EDX));
  /* 11ba50e4 call 0x11ba5110 */
  push32(0x11ba50e9u); f_11ba5110();
  /* 11ba50e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba50ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba50ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba50f2 push eax */
  push32((uint32_t)(EAX));
  /* 11ba50f3 call 0x11ba9fa0 */
  push32(0x11ba50f8u); f_11ba9fa0();
  /* 11ba50f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba50fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ba50fe:;
  /* 11ba50fe mov esp, ebp */
  ESP = (EBP);
  /* 11ba5100 pop ebp */
  EBP = (pop32());
  /* 11ba5101 ret  */
  ESPCHK(0x11ba5080u, _esp0);
  ESP += 4; return;
}

/* FUN_10015110 @ 0x11ba5110 (178 bytes, 56 insns) */
void f_11ba5110(void) {
  FTRACE(0x11ba5110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5110 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5111 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5119 push eax */
  push32((uint32_t)(EAX));
  /* 11ba511a call 0x11ba9d90 */
  push32(0x11ba511fu); f_11ba9d90();
  /* 11ba511f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5122 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba5125 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5129 jne 0x11ba513e */
  if (!C.zf) goto L_11ba513e;
  /* 11ba512b call 0x11ba6620 */
  push32(0x11ba5130u); f_11ba6620();
  /* 11ba5130 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ba5136 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5139 jmp 0x11ba51be */
  goto L_11ba51be;
L_11ba513e:;
  /* 11ba513e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba5141 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5142 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba5144 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba5147 push edx */
  push32((uint32_t)(EDX));
  /* 11ba5148 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba514b push eax */
  push32((uint32_t)(EAX));
  /* 11ba514c call dword ptr [0x11bd036c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd036c))), 0x11ba5152u);
  /* 11ba5152 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba5155 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5159 jne 0x11ba5166 */
  if (!C.zf) goto L_11ba5166;
  /* 11ba515b call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11ba5161u);
  /* 11ba5161 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba5164 jmp 0x11ba516d */
  goto L_11ba516d;
L_11ba5166:;
  /* 11ba5166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ba516d:;
  /* 11ba516d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5171 je 0x11ba5184 */
  if (C.zf) goto L_11ba5184;
  /* 11ba5173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5176 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5177 call 0x11ba6580 */
  push32(0x11ba517cu); f_11ba6580();
  /* 11ba517c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba517f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5182 jmp 0x11ba51be */
  goto L_11ba51be;
L_11ba5184:;
  /* 11ba5184 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5187 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11ba518a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba518d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5190 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba5193 mov ecx, dword ptr [edx*4 + 0x11bcfd40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11bcfd40)));
  /* 11ba519a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11ba519e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11ba51a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba51a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba51a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba51aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba51ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba51b0 mov eax, dword ptr [eax*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11ba51b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11ba51bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11ba51be:;
  /* 11ba51be mov esp, ebp */
  ESP = (EBP);
  /* 11ba51c0 pop ebp */
  EBP = (pop32());
  /* 11ba51c1 ret  */
  ESPCHK(0x11ba5110u, _esp0);
  ESP += 4; return;
}

/* FUN_100151d0 @ 0x11ba51d0 (130 bytes, 43 insns) */
void f_11ba51d0(void) {
  FTRACE(0x11ba51d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba51d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba51d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba51d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba51d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba51d7 cmp eax, dword ptr [0x11bcfe7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfe7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba51dd jae 0x11ba5201 */
  if (!C.cf) goto L_11ba5201;
  /* 11ba51df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba51e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba51e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba51e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba51eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba51ee mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba51f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ba51fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba51fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba51ff jne 0x11ba521c */
  if (!C.zf) goto L_11ba521c;
L_11ba5201:;
  /* 11ba5201 call 0x11ba6620 */
  push32(0x11ba5206u); f_11ba6620();
  /* 11ba5206 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ba520c call 0x11ba6630 */
  push32(0x11ba5211u); f_11ba6630();
  /* 11ba5211 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ba5217 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba521a jmp 0x11ba524e */
  goto L_11ba524e;
L_11ba521c:;
  /* 11ba521c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba521f push edx */
  push32((uint32_t)(EDX));
  /* 11ba5220 call 0x11ba9f10 */
  push32(0x11ba5225u); f_11ba9f10();
  /* 11ba5225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5228 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba522b push eax */
  push32((uint32_t)(EAX));
  /* 11ba522c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba522f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5230 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5233 push edx */
  push32((uint32_t)(EDX));
  /* 11ba5234 call 0x11ba5260 */
  push32(0x11ba5239u); f_11ba5260();
  /* 11ba5239 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba523c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba523f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5242 push eax */
  push32((uint32_t)(EAX));
  /* 11ba5243 call 0x11ba9fa0 */
  push32(0x11ba5248u); f_11ba9fa0();
  /* 11ba5248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba524b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ba524e:;
  /* 11ba524e mov esp, ebp */
  ESP = (EBP);
  /* 11ba5250 pop ebp */
  EBP = (pop32());
  /* 11ba5251 ret  */
  ESPCHK(0x11ba51d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015260 @ 0x11ba5260 (627 bytes, 182 insns) */
void f_11ba5260(void) {
  FTRACE(0x11ba5260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5260 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5261 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5263 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5269 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11ba5270 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba5273 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11ba5279 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba527d jne 0x11ba5286 */
  if (!C.zf) goto L_11ba5286;
  /* 11ba527f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5281 jmp 0x11ba54cf */
  goto L_11ba54cf;
L_11ba5286:;
  /* 11ba5286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5289 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba528c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba528f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba5292 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba5295 mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba529c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ba52a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba52a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba52a6 je 0x11ba52b8 */
  if (C.zf) goto L_11ba52b8;
  /* 11ba52a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba52aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba52ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba52af push edx */
  push32((uint32_t)(EDX));
  /* 11ba52b0 call 0x11ba5110 */
  push32(0x11ba52b5u); f_11ba5110();
  /* 11ba52b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba52b8:;
  /* 11ba52b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba52bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba52be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba52c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba52c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba52c7 mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11ba52ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11ba52d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba52d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba52da je 0x11ba53ec */
  if (C.zf) goto L_11ba53ec;
  /* 11ba52e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba52e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba52e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11ba52ed:;
  /* 11ba52ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba52f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba52f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba52f6 jae 0x11ba53ea */
  if (!C.cf) goto L_11ba53ea;
  /* 11ba52fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11ba5302 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11ba5305:;
  /* 11ba5305 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5308 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11ba530e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5310 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5316 jge 0x11ba5377 */
  if ((C.sf==C.of)) goto L_11ba5377;
  /* 11ba5318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba531b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba531e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5321 jae 0x11ba5377 */
  if (!C.cf) goto L_11ba5377;
  /* 11ba5323 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5326 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba5328 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11ba532e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5331 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5334 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba5337 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11ba533e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5341 jne 0x11ba5361 */
  if (!C.zf) goto L_11ba5361;
  /* 11ba5343 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11ba5349 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba534c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11ba5352 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5355 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11ba5358 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba535b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba535e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11ba5361:;
  /* 11ba5361 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5364 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11ba536a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11ba536c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba536f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5372 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba5375 jmp 0x11ba5305 */
  goto L_11ba5305;
L_11ba5377:;
  /* 11ba5377 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba5379 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11ba537f push edx */
  push32((uint32_t)(EDX));
  /* 11ba5380 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5383 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11ba5389 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba538b push eax */
  push32((uint32_t)(EAX));
  /* 11ba538c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11ba5392 push edx */
  push32((uint32_t)(EDX));
  /* 11ba5393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5396 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba5399 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba539c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba539f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba53a2 mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11ba53a9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11ba53ac push eax */
  push32((uint32_t)(EAX));
  /* 11ba53ad call dword ptr [0x11bd0400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0400))), 0x11ba53b3u);
  /* 11ba53b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba53b5 je 0x11ba53da */
  if (C.zf) goto L_11ba53da;
  /* 11ba53b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba53ba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba53c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ba53c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba53c6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11ba53cc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba53ce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba53d4 jge 0x11ba53d8 */
  if ((C.sf==C.of)) goto L_11ba53d8;
  /* 11ba53d6 jmp 0x11ba53ea */
  goto L_11ba53ea;
L_11ba53d8:;
  /* 11ba53d8 jmp 0x11ba53e5 */
  goto L_11ba53e5;
L_11ba53da:;
  /* 11ba53da call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11ba53e0u);
  /* 11ba53e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ba53e3 jmp 0x11ba53ea */
  goto L_11ba53ea;
L_11ba53e5:;
  /* 11ba53e5 jmp 0x11ba52ed */
  goto L_11ba52ed;
L_11ba53ea:;
  /* 11ba53ea jmp 0x11ba543c */
  goto L_11ba543c;
L_11ba53ec:;
  /* 11ba53ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba53ee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11ba53f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba53f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba53f8 push edx */
  push32((uint32_t)(EDX));
  /* 11ba53f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba53fc push eax */
  push32((uint32_t)(EAX));
  /* 11ba53fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5400 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba5403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5406 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba5409 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba540c mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba5413 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11ba5416 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5417 call dword ptr [0x11bd0400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0400))), 0x11ba541du);
  /* 11ba541d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba541f je 0x11ba5433 */
  if (C.zf) goto L_11ba5433;
  /* 11ba5421 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba5428 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11ba542e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ba5431 jmp 0x11ba543c */
  goto L_11ba543c;
L_11ba5433:;
  /* 11ba5433 call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11ba5439u);
  /* 11ba5439 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ba543c:;
  /* 11ba543c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5440 jne 0x11ba54c6 */
  if (!C.zf) goto L_11ba54c6;
  /* 11ba5446 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba544a je 0x11ba547a */
  if (C.zf) goto L_11ba547a;
  /* 11ba544c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5450 jne 0x11ba5469 */
  if (!C.zf) goto L_11ba5469;
  /* 11ba5452 call 0x11ba6620 */
  push32(0x11ba5457u); f_11ba6620();
  /* 11ba5457 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11ba545d call 0x11ba6630 */
  push32(0x11ba5462u); f_11ba6630();
  /* 11ba5462 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba5465 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ba5467 jmp 0x11ba5475 */
  goto L_11ba5475;
L_11ba5469:;
  /* 11ba5469 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba546c push edx */
  push32((uint32_t)(EDX));
  /* 11ba546d call 0x11ba6580 */
  push32(0x11ba5472u); f_11ba6580();
  /* 11ba5472 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba5475:;
  /* 11ba5475 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5478 jmp 0x11ba54cf */
  goto L_11ba54cf;
L_11ba547a:;
  /* 11ba547a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba547d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba5480 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5483 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11ba5486 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba5489 mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11ba5490 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11ba5495 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba549a je 0x11ba54ab */
  if (C.zf) goto L_11ba54ab;
  /* 11ba549c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba549f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11ba54a2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba54a5 jne 0x11ba54ab */
  if (!C.zf) goto L_11ba54ab;
  /* 11ba54a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba54a9 jmp 0x11ba54cf */
  goto L_11ba54cf;
L_11ba54ab:;
  /* 11ba54ab call 0x11ba6620 */
  push32(0x11ba54b0u); f_11ba6620();
  /* 11ba54b0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11ba54b6 call 0x11ba6630 */
  push32(0x11ba54bbu); f_11ba6630();
  /* 11ba54bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ba54c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba54c4 jmp 0x11ba54cf */
  goto L_11ba54cf;
L_11ba54c6:;
  /* 11ba54c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ba54c9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11ba54cf:;
  /* 11ba54cf mov esp, ebp */
  ESP = (EBP);
  /* 11ba54d1 pop ebp */
  EBP = (pop32());
  /* 11ba54d2 ret  */
  ESPCHK(0x11ba5260u, _esp0);
  ESP += 4; return;
}

/* FUN_100154e0 @ 0x11ba54e0 (199 bytes, 68 insns) */
void f_11ba54e0(void) {
  FTRACE(0x11ba54e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba54e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba54e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba54e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba54e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba54e5 push esi */
  push32((uint32_t)(ESI));
  /* 11ba54e6 push edi */
  push32((uint32_t)(EDI));
L_11ba54e7:;
  /* 11ba54e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba54eb jne 0x11ba550b */
  if (!C.zf) goto L_11ba550b;
  /* 11ba54ed push 0x11bc8f04 */
  push32((uint32_t)(0x11bc8f04u));
  /* 11ba54f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba54f4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11ba54f6 push 0x11bc9330 */
  push32((uint32_t)(0x11bc9330u));
  /* 11ba54fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba54fd call 0x11b99390 */
  push32(0x11ba5502u); f_11b99390();
  /* 11ba5502 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5505 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5508 jne 0x11ba550b */
  if (!C.zf) goto L_11ba550b;
  /* 11ba550a int3  */
  x86_unimpl("int3 @ 0x11ba550a");
L_11ba550b:;
  /* 11ba550b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba550d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba550f jne 0x11ba54e7 */
  if (!C.zf) goto L_11ba54e7;
  /* 11ba5511 mov ecx, dword ptr [0x11bce61c] */
  ECX = (r32((uint32_t)(0x11bce61c)));
  /* 11ba5517 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba551a mov dword ptr [0x11bce61c], ecx */
  w32((uint32_t)(0x11bce61c), (ECX));
  /* 11ba5520 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5523 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba5526 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11ba5528 push 0x11bc9330 */
  push32((uint32_t)(0x11bc9330u));
  /* 11ba552d push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba552f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ba5534 call 0x11b9a7d0 */
  push32(0x11ba5539u); f_11b9a7d0();
  /* 11ba5539 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba553c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba553f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ba5542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5545 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5549 je 0x11ba5566 */
  if (C.zf) goto L_11ba5566;
  /* 11ba554b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba554e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ba5551 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba5554 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5557 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11ba555a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba555d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11ba5564 jmp 0x11ba558b */
  goto L_11ba558b;
L_11ba5566:;
  /* 11ba5566 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5569 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ba556c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba556f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5572 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11ba5575 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5578 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba557b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba557e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ba5581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5584 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11ba558b:;
  /* 11ba558b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba558e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5591 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ba5594 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11ba5596 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5599 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ba55a0 pop edi */
  EDI = (pop32());
  /* 11ba55a1 pop esi */
  ESI = (pop32());
  /* 11ba55a2 pop ebx */
  EBX = (pop32());
  /* 11ba55a3 mov esp, ebp */
  ESP = (EBP);
  /* 11ba55a5 pop ebp */
  EBP = (pop32());
  /* 11ba55a6 ret  */
  ESPCHK(0x11ba54e0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11ba55b0 (50 bytes, 17 insns) */
void f_11ba55b0(void) {
  FTRACE(0x11ba55b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba55b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba55b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba55b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba55b6 cmp eax, dword ptr [0x11bcfe7c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcfe7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba55bc jb 0x11ba55c2 */
  if (C.cf) goto L_11ba55c2;
  /* 11ba55be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba55c0 jmp 0x11ba55e0 */
  goto L_11ba55e0;
L_11ba55c2:;
  /* 11ba55c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba55c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba55c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba55cb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba55ce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba55d1 mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba55d8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11ba55dd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11ba55e0:;
  /* 11ba55e0 pop ebp */
  EBP = (pop32());
  /* 11ba55e1 ret  */
  ESPCHK(0x11ba55b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100155f0 @ 0x11ba55f0 (300 bytes, 80 insns) */
void f_11ba55f0(void) {
  FTRACE(0x11ba55f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba55f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba55f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba55f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba55f4 cmp dword ptr [0x11bcfd00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfd00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba55fb jne 0x11ba5609 */
  if (!C.zf) goto L_11ba5609;
  /* 11ba55fd mov dword ptr [0x11bcfd00], 0x200 */
  w32((uint32_t)(0x11bcfd00), (0x200u));
  /* 11ba5607 jmp 0x11ba561c */
  goto L_11ba561c;
L_11ba5609:;
  /* 11ba5609 cmp dword ptr [0x11bcfd00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfd00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5610 jge 0x11ba561c */
  if ((C.sf==C.of)) goto L_11ba561c;
  /* 11ba5612 mov dword ptr [0x11bcfd00], 0x14 */
  w32((uint32_t)(0x11bcfd00), (0x14u));
L_11ba561c:;
  /* 11ba561c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11ba5621 push 0x11bc933c */
  push32((uint32_t)(0x11bc933cu));
  /* 11ba5626 push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba5628 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba562a mov eax, dword ptr [0x11bcfd00] */
  EAX = (r32((uint32_t)(0x11bcfd00)));
  /* 11ba562f push eax */
  push32((uint32_t)(EAX));
  /* 11ba5630 call 0x11b9abe0 */
  push32(0x11ba5635u); f_11b9abe0();
  /* 11ba5635 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5638 mov dword ptr [0x11bce9a8], eax */
  w32((uint32_t)(0x11bce9a8), (EAX));
  /* 11ba563d cmp dword ptr [0x11bce9a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce9a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5644 jne 0x11ba5685 */
  if (!C.zf) goto L_11ba5685;
  /* 11ba5646 mov dword ptr [0x11bcfd00], 0x14 */
  w32((uint32_t)(0x11bcfd00), (0x14u));
  /* 11ba5650 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11ba5655 push 0x11bc933c */
  push32((uint32_t)(0x11bc933cu));
  /* 11ba565a push 2 */
  push32((uint32_t)(0x2u));
  /* 11ba565c push 4 */
  push32((uint32_t)(0x4u));
  /* 11ba565e mov ecx, dword ptr [0x11bcfd00] */
  ECX = (r32((uint32_t)(0x11bcfd00)));
  /* 11ba5664 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5665 call 0x11b9abe0 */
  push32(0x11ba566au); f_11b9abe0();
  /* 11ba566a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba566d mov dword ptr [0x11bce9a8], eax */
  w32((uint32_t)(0x11bce9a8), (EAX));
  /* 11ba5672 cmp dword ptr [0x11bce9a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce9a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5679 jne 0x11ba5685 */
  if (!C.zf) goto L_11ba5685;
  /* 11ba567b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11ba567d call 0x11b99240 */
  push32(0x11ba5682u); f_11b99240();
  /* 11ba5682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba5685:;
  /* 11ba5685 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba568c jmp 0x11ba5697 */
  goto L_11ba5697;
L_11ba568e:;
  /* 11ba568e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5691 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5694 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba5697:;
  /* 11ba5697 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba569b jge 0x11ba56b6 */
  if ((C.sf==C.of)) goto L_11ba56b6;
  /* 11ba569d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba56a0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba56a3 add eax, 0x11bcc408 */
  { uint32_t _a=(EAX),_b=(0x11bcc408u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba56a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba56ab mov edx, dword ptr [0x11bce9a8] */
  EDX = (r32((uint32_t)(0x11bce9a8)));
  /* 11ba56b1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11ba56b4 jmp 0x11ba568e */
  goto L_11ba568e;
L_11ba56b6:;
  /* 11ba56b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba56bd jmp 0x11ba56c8 */
  goto L_11ba56c8;
L_11ba56bf:;
  /* 11ba56bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba56c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba56c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba56c8:;
  /* 11ba56c8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba56cc jge 0x11ba5718 */
  if ((C.sf==C.of)) goto L_11ba5718;
  /* 11ba56ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba56d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba56d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba56d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba56da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba56dd mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba56e4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba56e8 je 0x11ba5706 */
  if (C.zf) goto L_11ba5706;
  /* 11ba56ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba56ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba56f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba56f3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ba56f6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba56f9 mov eax, dword ptr [ecx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11ba5700 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5704 jne 0x11ba5716 */
  if (!C.zf) goto L_11ba5716;
L_11ba5706:;
  /* 11ba5706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5709 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11ba570c mov dword ptr [ecx + 0x11bcc418], 0xffffffff */
  w32((uint32_t)(ECX + 0x11bcc418), (0xffffffffu));
L_11ba5716:;
  /* 11ba5716 jmp 0x11ba56bf */
  goto L_11ba56bf;
L_11ba5718:;
  /* 11ba5718 mov esp, ebp */
  ESP = (EBP);
  /* 11ba571a pop ebp */
  EBP = (pop32());
  /* 11ba571b ret  */
  ESPCHK(0x11ba55f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015720 @ 0x11ba5720 (26 bytes, 9 insns) */
void f_11ba5720(void) {
  FTRACE(0x11ba5720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5720 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5721 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5723 call 0x11baa210 */
  push32(0x11ba5728u); f_11baa210();
  /* 11ba5728 movsx eax, byte ptr [0x11bce414] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11bce414))));
  /* 11ba572f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba5731 je 0x11ba5738 */
  if (C.zf) goto L_11ba5738;
  /* 11ba5733 call 0x11ba9fd0 */
  push32(0x11ba5738u); f_11ba9fd0();
L_11ba5738:;
  /* 11ba5738 pop ebp */
  EBP = (pop32());
  /* 11ba5739 ret  */
  ESPCHK(0x11ba5720u, _esp0);
  ESP += 4; return;
}

/* FUN_10015740 @ 0x11ba5740 (61 bytes, 20 insns) */
void f_11ba5740(void) {
  FTRACE(0x11ba5740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5740 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5741 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5743 cmp dword ptr [ebp + 8], 0x11bcc408 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11bcc408u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba574a jb 0x11ba576e */
  if (C.cf) goto L_11ba576e;
  /* 11ba574c cmp dword ptr [ebp + 8], 0x11bcc668 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11bcc668u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5753 ja 0x11ba576e */
  if ((!C.cf&&!C.zf)) goto L_11ba576e;
  /* 11ba5755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5758 sub eax, 0x11bcc408 */
  { uint32_t _a=(EAX),_b=(0x11bcc408u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba575d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba5760 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5763 push eax */
  push32((uint32_t)(EAX));
  /* 11ba5764 call 0x11b9a6d0 */
  push32(0x11ba5769u); f_11b9a6d0();
  /* 11ba5769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba576c jmp 0x11ba577b */
  goto L_11ba577b;
L_11ba576e:;
  /* 11ba576e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5771 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5774 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5775 call dword ptr [0x11bd0410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0410))), 0x11ba577bu);
L_11ba577b:;
  /* 11ba577b pop ebp */
  EBP = (pop32());
  /* 11ba577c ret  */
  ESPCHK(0x11ba5740u, _esp0);
  ESP += 4; return;
}

/* FUN_10015780 @ 0x11ba5780 (41 bytes, 16 insns) */
void f_11ba5780(void) {
  FTRACE(0x11ba5780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5780 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5781 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5783 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5787 jge 0x11ba579a */
  if ((C.sf==C.of)) goto L_11ba579a;
  /* 11ba5789 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba578c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba578f push eax */
  push32((uint32_t)(EAX));
  /* 11ba5790 call 0x11b9a6d0 */
  push32(0x11ba5795u); f_11b9a6d0();
  /* 11ba5795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5798 jmp 0x11ba57a7 */
  goto L_11ba57a7;
L_11ba579a:;
  /* 11ba579a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba579d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba57a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba57a1 call dword ptr [0x11bd0410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0410))), 0x11ba57a7u);
L_11ba57a7:;
  /* 11ba57a7 pop ebp */
  EBP = (pop32());
  /* 11ba57a8 ret  */
  ESPCHK(0x11ba5780u, _esp0);
  ESP += 4; return;
}

/* FUN_100157b0 @ 0x11ba57b0 (61 bytes, 20 insns) */
void f_11ba57b0(void) {
  FTRACE(0x11ba57b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba57b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba57b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba57b3 cmp dword ptr [ebp + 8], 0x11bcc408 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11bcc408u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba57ba jb 0x11ba57de */
  if (C.cf) goto L_11ba57de;
  /* 11ba57bc cmp dword ptr [ebp + 8], 0x11bcc668 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11bcc668u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba57c3 ja 0x11ba57de */
  if ((!C.cf&&!C.zf)) goto L_11ba57de;
  /* 11ba57c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba57c8 sub eax, 0x11bcc408 */
  { uint32_t _a=(EAX),_b=(0x11bcc408u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba57cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ba57d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba57d3 push eax */
  push32((uint32_t)(EAX));
  /* 11ba57d4 call 0x11b9a770 */
  push32(0x11ba57d9u); f_11b9a770();
  /* 11ba57d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba57dc jmp 0x11ba57eb */
  goto L_11ba57eb;
L_11ba57de:;
  /* 11ba57de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba57e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba57e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba57e5 call dword ptr [0x11bd0428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0428))), 0x11ba57ebu);
L_11ba57eb:;
  /* 11ba57eb pop ebp */
  EBP = (pop32());
  /* 11ba57ec ret  */
  ESPCHK(0x11ba57b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100157f0 @ 0x11ba57f0 (41 bytes, 16 insns) */
void f_11ba57f0(void) {
  FTRACE(0x11ba57f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba57f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba57f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba57f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba57f7 jge 0x11ba580a */
  if ((C.sf==C.of)) goto L_11ba580a;
  /* 11ba57f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba57fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba57ff push eax */
  push32((uint32_t)(EAX));
  /* 11ba5800 call 0x11b9a770 */
  push32(0x11ba5805u); f_11b9a770();
  /* 11ba5805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5808 jmp 0x11ba5817 */
  goto L_11ba5817;
L_11ba580a:;
  /* 11ba580a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba580d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5810 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5811 call dword ptr [0x11bd0428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0428))), 0x11ba5817u);
L_11ba5817:;
  /* 11ba5817 pop ebp */
  EBP = (pop32());
  /* 11ba5818 ret  */
  ESPCHK(0x11ba57f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015820 @ 0x11ba5820 (119 bytes, 34 insns) */
void f_11ba5820(void) {
  FTRACE(0x11ba5820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5820 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5821 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5826 push 0x11bce6fc */
  push32((uint32_t)(0x11bce6fcu));
  /* 11ba582b call dword ptr [0x11bd0414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0414))), 0x11ba5831u);
  /* 11ba5831 cmp dword ptr [0x11bce6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5838 je 0x11ba5858 */
  if (C.zf) goto L_11ba5858;
  /* 11ba583a push 0x11bce6fc */
  push32((uint32_t)(0x11bce6fcu));
  /* 11ba583f call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11ba5845u);
  /* 11ba5845 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ba5847 call 0x11b9a6d0 */
  push32(0x11ba584cu); f_11b9a6d0();
  /* 11ba584c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba584f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ba5856 jmp 0x11ba585f */
  goto L_11ba585f;
L_11ba5858:;
  /* 11ba5858 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ba585f:;
  /* 11ba585f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11ba5863 push eax */
  push32((uint32_t)(EAX));
  /* 11ba5864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5867 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5868 call 0x11ba58a0 */
  push32(0x11ba586du); f_11ba58a0();
  /* 11ba586d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5870 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ba5873 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5877 je 0x11ba5885 */
  if (C.zf) goto L_11ba5885;
  /* 11ba5879 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ba587b call 0x11b9a770 */
  push32(0x11ba5880u); f_11b9a770();
  /* 11ba5880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5883 jmp 0x11ba5890 */
  goto L_11ba5890;
L_11ba5885:;
  /* 11ba5885 push 0x11bce6fc */
  push32((uint32_t)(0x11bce6fcu));
  /* 11ba588a call dword ptr [0x11bd0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0404))), 0x11ba5890u);
L_11ba5890:;
  /* 11ba5890 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5893 mov esp, ebp */
  ESP = (EBP);
  /* 11ba5895 pop ebp */
  EBP = (pop32());
  /* 11ba5896 ret  */
  ESPCHK(0x11ba5820u, _esp0);
  ESP += 4; return;
}

/* FUN_100158a0 @ 0x11ba58a0 (160 bytes, 50 insns) */
void f_11ba58a0(void) {
  FTRACE(0x11ba58a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba58a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba58a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba58a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba58a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba58aa jne 0x11ba58b3 */
  if (!C.zf) goto L_11ba58b3;
  /* 11ba58ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba58ae jmp 0x11ba593c */
  goto L_11ba593c;
L_11ba58b3:;
  /* 11ba58b3 cmp dword ptr [0x11bce63c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce63c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba58ba jne 0x11ba58ea */
  if (!C.zf) goto L_11ba58ea;
  /* 11ba58bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba58bf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba58c4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba58c9 jle 0x11ba58db */
  if ((C.zf||C.sf!=C.of)) goto L_11ba58db;
  /* 11ba58cb call 0x11ba6620 */
  push32(0x11ba58d0u); f_11ba6620();
  /* 11ba58d0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11ba58d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba58d9 jmp 0x11ba593c */
  goto L_11ba593c;
L_11ba58db:;
  /* 11ba58db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba58de mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11ba58e1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11ba58e3 mov eax, 1 */
  EAX = (0x1u);
  /* 11ba58e8 jmp 0x11ba593c */
  goto L_11ba593c;
L_11ba58ea:;
  /* 11ba58ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ba58f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11ba58f4 push eax */
  push32((uint32_t)(EAX));
  /* 11ba58f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba58f7 mov ecx, dword ptr [0x11bcc000] */
  ECX = (r32((uint32_t)(0x11bcc000)));
  /* 11ba58fd push ecx */
  push32((uint32_t)(ECX));
  /* 11ba58fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5901 push edx */
  push32((uint32_t)(EDX));
  /* 11ba5902 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba5904 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11ba5907 push eax */
  push32((uint32_t)(EAX));
  /* 11ba5908 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11ba590d mov ecx, dword ptr [0x11bce64c] */
  ECX = (r32((uint32_t)(0x11bce64c)));
  /* 11ba5913 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5914 call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11ba591au);
  /* 11ba591a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba591d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5921 je 0x11ba5929 */
  if (C.zf) goto L_11ba5929;
  /* 11ba5923 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5927 je 0x11ba5939 */
  if (C.zf) goto L_11ba5939;
L_11ba5929:;
  /* 11ba5929 call 0x11ba6620 */
  push32(0x11ba592eu); f_11ba6620();
  /* 11ba592e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11ba5934 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5937 jmp 0x11ba593c */
  goto L_11ba593c;
L_11ba5939:;
  /* 11ba5939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ba593c:;
  /* 11ba593c mov esp, ebp */
  ESP = (EBP);
  /* 11ba593e pop ebp */
  EBP = (pop32());
  /* 11ba593f ret  */
  ESPCHK(0x11ba58a0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11ba5940 (104 bytes, 43 insns) */
void f_11ba5940(void) {
  FTRACE(0x11ba5940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5940 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba5941 push esi */
  push32((uint32_t)(ESI));
  /* 11ba5942 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11ba5946 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5948 jne 0x11ba5962 */
  if (!C.zf) goto L_11ba5962;
  /* 11ba594a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ba594e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ba5952 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba5954 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ba5956 mov ebx, eax */
  EBX = (EAX);
  /* 11ba5958 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ba595c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ba595e mov edx, ebx */
  EDX = (EBX);
  /* 11ba5960 jmp 0x11ba59a3 */
  goto L_11ba59a3;
L_11ba5962:;
  /* 11ba5962 mov ecx, eax */
  ECX = (EAX);
  /* 11ba5964 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ba5968 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ba596c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11ba5970:;
  /* 11ba5970 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ba5972 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11ba5974 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba5976 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11ba5978 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba597a jne 0x11ba5970 */
  if (!C.zf) goto L_11ba5970;
  /* 11ba597c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ba597e mov esi, eax */
  ESI = (EAX);
  /* 11ba5980 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ba5984 mov ecx, eax */
  ECX = (EAX);
  /* 11ba5986 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ba598a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ba598c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba598e jb 0x11ba599e */
  if (C.cf) goto L_11ba599e;
  /* 11ba5990 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5994 ja 0x11ba599e */
  if ((!C.cf&&!C.zf)) goto L_11ba599e;
  /* 11ba5996 jb 0x11ba599f */
  if (C.cf) goto L_11ba599f;
  /* 11ba5998 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba599c jbe 0x11ba599f */
  if ((C.cf||C.zf)) goto L_11ba599f;
L_11ba599e:;
  /* 11ba599e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11ba599f:;
  /* 11ba599f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba59a1 mov eax, esi */
  EAX = (ESI);
L_11ba59a3:;
  /* 11ba59a3 pop esi */
  ESI = (pop32());
  /* 11ba59a4 pop ebx */
  EBX = (pop32());
  /* 11ba59a5 ret 0x10 */
  ESPCHK(0x11ba5940u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11ba59b0 (117 bytes, 44 insns) */
void f_11ba59b0(void) {
  FTRACE(0x11ba59b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba59b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11ba59b1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11ba59b5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba59b7 jne 0x11ba59d1 */
  if (!C.zf) goto L_11ba59d1;
  /* 11ba59b9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ba59bd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ba59c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba59c3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ba59c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11ba59c9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ba59cb mov eax, edx */
  EAX = (EDX);
  /* 11ba59cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba59cf jmp 0x11ba5a21 */
  goto L_11ba5a21;
L_11ba59d1:;
  /* 11ba59d1 mov ecx, eax */
  ECX = (EAX);
  /* 11ba59d3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11ba59d7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11ba59db mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11ba59df:;
  /* 11ba59df shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ba59e1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11ba59e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11ba59e5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11ba59e7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba59e9 jne 0x11ba59df */
  if (!C.zf) goto L_11ba59df;
  /* 11ba59eb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11ba59ed mov ecx, eax */
  ECX = (EAX);
  /* 11ba59ef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ba59f3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11ba59f4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11ba59f8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba59fa jb 0x11ba5a0a */
  if (C.cf) goto L_11ba5a0a;
  /* 11ba59fc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5a00 ja 0x11ba5a0a */
  if ((!C.cf&&!C.zf)) goto L_11ba5a0a;
  /* 11ba5a02 jb 0x11ba5a12 */
  if (C.cf) goto L_11ba5a12;
  /* 11ba5a04 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5a08 jbe 0x11ba5a12 */
  if ((C.cf||C.zf)) goto L_11ba5a12;
L_11ba5a0a:;
  /* 11ba5a0a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5a0e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11ba5a12:;
  /* 11ba5a12 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5a16 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5a1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba5a1c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba5a1e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11ba5a21:;
  /* 11ba5a21 pop ebx */
  EBX = (pop32());
  /* 11ba5a22 ret 0x10 */
  ESPCHK(0x11ba59b0u, _esp0);
  ESP += 20; return;
}

/* FUN_10015a30 @ 0x11ba5a30 (836 bytes, 238 insns) */
void f_11ba5a30(void) {
  FTRACE(0x11ba5a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5a31 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5a33 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5a36 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ba5a38 call 0x11b9a6d0 */
  push32(0x11ba5a3du); f_11b9a6d0();
  /* 11ba5a3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5a43 push eax */
  push32((uint32_t)(EAX));
  /* 11ba5a44 call 0x11ba5d80 */
  push32(0x11ba5a49u); f_11ba5d80();
  /* 11ba5a49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5a4c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ba5a4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5a52 cmp ecx, dword ptr [0x11bce700] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bce700))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5a58 jne 0x11ba5a6b */
  if (!C.zf) goto L_11ba5a6b;
  /* 11ba5a5a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ba5a5c call 0x11b9a770 */
  push32(0x11ba5a61u); f_11b9a770();
  /* 11ba5a61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5a64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5a66 jmp 0x11ba5d70 */
  goto L_11ba5d70;
L_11ba5a6b:;
  /* 11ba5a6b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5a6f jne 0x11ba5a8c */
  if (!C.zf) goto L_11ba5a8c;
  /* 11ba5a71 call 0x11ba5e60 */
  push32(0x11ba5a76u); f_11ba5e60();
  /* 11ba5a76 call 0x11ba5ee0 */
  push32(0x11ba5a7bu); f_11ba5ee0();
  /* 11ba5a7b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ba5a7d call 0x11b9a770 */
  push32(0x11ba5a82u); f_11b9a770();
  /* 11ba5a82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5a85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5a87 jmp 0x11ba5d70 */
  goto L_11ba5d70;
L_11ba5a8c:;
  /* 11ba5a8c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba5a93 jmp 0x11ba5a9e */
  goto L_11ba5a9e;
L_11ba5a95:;
  /* 11ba5a95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5a98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5a9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba5a9e:;
  /* 11ba5a9e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5aa2 jae 0x11ba5bef */
  if (!C.cf) goto L_11ba5bef;
  /* 11ba5aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5aab imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba5aae mov ecx, dword ptr [eax + 0x11bcc698] */
  ECX = (r32((uint32_t)(EAX + 0x11bcc698)));
  /* 11ba5ab4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5ab7 jne 0x11ba5bea */
  if (!C.zf) goto L_11ba5bea;
  /* 11ba5abd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ba5ac4 jmp 0x11ba5acf */
  goto L_11ba5acf;
L_11ba5ac6:;
  /* 11ba5ac6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5ac9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5acc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11ba5acf:;
  /* 11ba5acf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5ad6 jae 0x11ba5ae4 */
  if (!C.cf) goto L_11ba5ae4;
  /* 11ba5ad8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5adb mov byte ptr [eax + 0x11bce8a0], 0 */
  w8((uint32_t)(EAX + 0x11bce8a0), (0x0u));
  /* 11ba5ae2 jmp 0x11ba5ac6 */
  goto L_11ba5ac6;
L_11ba5ae4:;
  /* 11ba5ae4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba5aeb jmp 0x11ba5af6 */
  goto L_11ba5af6;
L_11ba5aed:;
  /* 11ba5aed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba5af0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5af3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ba5af6:;
  /* 11ba5af6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5afa jae 0x11ba5b77 */
  if (!C.cf) goto L_11ba5b77;
  /* 11ba5afc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5aff imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba5b02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba5b05 lea ecx, [edx + eax*8 + 0x11bcc6a8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11bcc6a8));
  /* 11ba5b0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ba5b0f jmp 0x11ba5b1a */
  goto L_11ba5b1a;
L_11ba5b11:;
  /* 11ba5b11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5b14 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5b17 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11ba5b1a:;
  /* 11ba5b1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5b1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba5b1f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ba5b21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba5b23 je 0x11ba5b72 */
  if (C.zf) goto L_11ba5b72;
  /* 11ba5b25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5b28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5b2a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ba5b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba5b2f je 0x11ba5b72 */
  if (C.zf) goto L_11ba5b72;
  /* 11ba5b31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5b34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba5b36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba5b38 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ba5b3b jmp 0x11ba5b46 */
  goto L_11ba5b46;
L_11ba5b3d:;
  /* 11ba5b3d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5b40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5b43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ba5b46:;
  /* 11ba5b46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba5b49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba5b4b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ba5b4e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5b51 ja 0x11ba5b70 */
  if ((!C.cf&&!C.zf)) goto L_11ba5b70;
  /* 11ba5b53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5b56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba5b59 mov dl, byte ptr [eax + 0x11bce8a1] */
  DL = (r8((uint32_t)(EAX + 0x11bce8a1)));
  /* 11ba5b5f or dl, byte ptr [ecx + 0x11bcc690] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11bcc690))); DL = (_r); fl_logic(_r,8); }
  /* 11ba5b65 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5b68 mov byte ptr [eax + 0x11bce8a1], dl */
  w8((uint32_t)(EAX + 0x11bce8a1), (DL));
  /* 11ba5b6e jmp 0x11ba5b3d */
  goto L_11ba5b3d;
L_11ba5b70:;
  /* 11ba5b70 jmp 0x11ba5b11 */
  goto L_11ba5b11;
L_11ba5b72:;
  /* 11ba5b72 jmp 0x11ba5aed */
  goto L_11ba5aed;
L_11ba5b77:;
  /* 11ba5b77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5b7a mov dword ptr [0x11bce700], ecx */
  w32((uint32_t)(0x11bce700), (ECX));
  /* 11ba5b80 mov dword ptr [0x11bce78c], 1 */
  w32((uint32_t)(0x11bce78c), (0x1u));
  /* 11ba5b8a mov edx, dword ptr [0x11bce700] */
  EDX = (r32((uint32_t)(0x11bce700)));
  /* 11ba5b90 push edx */
  push32((uint32_t)(EDX));
  /* 11ba5b91 call 0x11ba5de0 */
  push32(0x11ba5b96u); f_11ba5de0();
  /* 11ba5b96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5b99 mov dword ptr [0x11bce9a4], eax */
  w32((uint32_t)(0x11bce9a4), (EAX));
  /* 11ba5b9e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba5ba5 jmp 0x11ba5bb0 */
  goto L_11ba5bb0;
L_11ba5ba7:;
  /* 11ba5ba7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba5baa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5bad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ba5bb0:;
  /* 11ba5bb0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5bb4 jae 0x11ba5bd4 */
  if (!C.cf) goto L_11ba5bd4;
  /* 11ba5bb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5bb9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ba5bbc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba5bbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba5bc2 mov cx, word ptr [ecx + eax*2 + 0x11bcc69c] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11bcc69c)));
  /* 11ba5bca mov word ptr [edx*2 + 0x11bce780], cx */
  w16((uint32_t)(EDX*2 + 0x11bce780), (CX));
  /* 11ba5bd2 jmp 0x11ba5ba7 */
  goto L_11ba5ba7;
L_11ba5bd4:;
  /* 11ba5bd4 call 0x11ba5ee0 */
  push32(0x11ba5bd9u); f_11ba5ee0();
  /* 11ba5bd9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ba5bdb call 0x11b9a770 */
  push32(0x11ba5be0u); f_11b9a770();
  /* 11ba5be0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5be3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5be5 jmp 0x11ba5d70 */
  goto L_11ba5d70;
L_11ba5bea:;
  /* 11ba5bea jmp 0x11ba5a95 */
  goto L_11ba5a95;
L_11ba5bef:;
  /* 11ba5bef lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11ba5bf2 push edx */
  push32((uint32_t)(EDX));
  /* 11ba5bf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5bf6 push eax */
  push32((uint32_t)(EAX));
  /* 11ba5bf7 call dword ptr [0x11bd0368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0368))), 0x11ba5bfdu);
  /* 11ba5bfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5c00 jne 0x11ba5d42 */
  if (!C.zf) goto L_11ba5d42;
  /* 11ba5c06 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ba5c0d jmp 0x11ba5c18 */
  goto L_11ba5c18;
L_11ba5c0f:;
  /* 11ba5c0f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5c12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5c15 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11ba5c18:;
  /* 11ba5c18 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5c1f jae 0x11ba5c2d */
  if (!C.cf) goto L_11ba5c2d;
  /* 11ba5c21 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5c24 mov byte ptr [edx + 0x11bce8a0], 0 */
  w8((uint32_t)(EDX + 0x11bce8a0), (0x0u));
  /* 11ba5c2b jmp 0x11ba5c0f */
  goto L_11ba5c0f;
L_11ba5c2d:;
  /* 11ba5c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5c30 mov dword ptr [0x11bce700], eax */
  w32((uint32_t)(0x11bce700), (EAX));
  /* 11ba5c35 mov dword ptr [0x11bce9a4], 0 */
  w32((uint32_t)(0x11bce9a4), (0x0u));
  /* 11ba5c3f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5c43 jbe 0x11ba5cfe */
  if ((C.cf||C.zf)) goto L_11ba5cfe;
  /* 11ba5c49 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11ba5c4c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11ba5c4f jmp 0x11ba5c5a */
  goto L_11ba5c5a;
L_11ba5c51:;
  /* 11ba5c51 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba5c54 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5c57 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11ba5c5a:;
  /* 11ba5c5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba5c5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba5c5f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ba5c61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba5c63 je 0x11ba5cac */
  if (C.zf) goto L_11ba5cac;
  /* 11ba5c65 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba5c68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5c6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11ba5c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba5c6f je 0x11ba5cac */
  if (C.zf) goto L_11ba5cac;
  /* 11ba5c71 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba5c74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba5c76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba5c78 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ba5c7b jmp 0x11ba5c86 */
  goto L_11ba5c86;
L_11ba5c7d:;
  /* 11ba5c7d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5c80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5c83 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ba5c86:;
  /* 11ba5c86 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ba5c89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba5c8b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11ba5c8e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5c91 ja 0x11ba5caa */
  if ((!C.cf&&!C.zf)) goto L_11ba5caa;
  /* 11ba5c93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5c96 mov cl, byte ptr [eax + 0x11bce8a1] */
  CL = (r8((uint32_t)(EAX + 0x11bce8a1)));
  /* 11ba5c9c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11ba5c9f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5ca2 mov byte ptr [edx + 0x11bce8a1], cl */
  w8((uint32_t)(EDX + 0x11bce8a1), (CL));
  /* 11ba5ca8 jmp 0x11ba5c7d */
  goto L_11ba5c7d;
L_11ba5caa:;
  /* 11ba5caa jmp 0x11ba5c51 */
  goto L_11ba5c51;
L_11ba5cac:;
  /* 11ba5cac mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11ba5cb3 jmp 0x11ba5cbe */
  goto L_11ba5cbe;
L_11ba5cb5:;
  /* 11ba5cb5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5cb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5cbb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11ba5cbe:;
  /* 11ba5cbe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5cc5 jae 0x11ba5cde */
  if (!C.cf) goto L_11ba5cde;
  /* 11ba5cc7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5cca mov dl, byte ptr [ecx + 0x11bce8a1] */
  DL = (r8((uint32_t)(ECX + 0x11bce8a1)));
  /* 11ba5cd0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11ba5cd3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba5cd6 mov byte ptr [eax + 0x11bce8a1], dl */
  w8((uint32_t)(EAX + 0x11bce8a1), (DL));
  /* 11ba5cdc jmp 0x11ba5cb5 */
  goto L_11ba5cb5;
L_11ba5cde:;
  /* 11ba5cde mov ecx, dword ptr [0x11bce700] */
  ECX = (r32((uint32_t)(0x11bce700)));
  /* 11ba5ce4 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5ce5 call 0x11ba5de0 */
  push32(0x11ba5ceau); f_11ba5de0();
  /* 11ba5cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5ced mov dword ptr [0x11bce9a4], eax */
  w32((uint32_t)(0x11bce9a4), (EAX));
  /* 11ba5cf2 mov dword ptr [0x11bce78c], 1 */
  w32((uint32_t)(0x11bce78c), (0x1u));
  /* 11ba5cfc jmp 0x11ba5d08 */
  goto L_11ba5d08;
L_11ba5cfe:;
  /* 11ba5cfe mov dword ptr [0x11bce78c], 0 */
  w32((uint32_t)(0x11bce78c), (0x0u));
L_11ba5d08:;
  /* 11ba5d08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ba5d0f jmp 0x11ba5d1a */
  goto L_11ba5d1a;
L_11ba5d11:;
  /* 11ba5d11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba5d14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5d17 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ba5d1a:;
  /* 11ba5d1a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5d1e jae 0x11ba5d2f */
  if (!C.cf) goto L_11ba5d2f;
  /* 11ba5d20 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ba5d23 mov word ptr [eax*2 + 0x11bce780], 0 */
  w16((uint32_t)(EAX*2 + 0x11bce780), (0x0u));
  /* 11ba5d2d jmp 0x11ba5d11 */
  goto L_11ba5d11;
L_11ba5d2f:;
  /* 11ba5d2f call 0x11ba5ee0 */
  push32(0x11ba5d34u); f_11ba5ee0();
  /* 11ba5d34 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ba5d36 call 0x11b9a770 */
  push32(0x11ba5d3bu); f_11b9a770();
  /* 11ba5d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5d3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5d40 jmp 0x11ba5d70 */
  goto L_11ba5d70;
L_11ba5d42:;
  /* 11ba5d42 cmp dword ptr [0x11bce620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5d49 je 0x11ba5d63 */
  if (C.zf) goto L_11ba5d63;
  /* 11ba5d4b call 0x11ba5e60 */
  push32(0x11ba5d50u); f_11ba5e60();
  /* 11ba5d50 call 0x11ba5ee0 */
  push32(0x11ba5d55u); f_11ba5ee0();
  /* 11ba5d55 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ba5d57 call 0x11b9a770 */
  push32(0x11ba5d5cu); f_11b9a770();
  /* 11ba5d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5d5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ba5d61 jmp 0x11ba5d70 */
  goto L_11ba5d70;
L_11ba5d63:;
  /* 11ba5d63 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ba5d65 call 0x11b9a770 */
  push32(0x11ba5d6au); f_11b9a770();
  /* 11ba5d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5d6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11ba5d70:;
  /* 11ba5d70 mov esp, ebp */
  ESP = (EBP);
  /* 11ba5d72 pop ebp */
  EBP = (pop32());
  /* 11ba5d73 ret  */
  ESPCHK(0x11ba5a30u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11ba5d80 (89 bytes, 21 insns) */
void f_11ba5d80(void) {
  FTRACE(0x11ba5d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5d81 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5d83 mov dword ptr [0x11bce620], 0 */
  w32((uint32_t)(0x11bce620), (0x0u));
  /* 11ba5d8d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5d91 jne 0x11ba5da5 */
  if (!C.zf) goto L_11ba5da5;
  /* 11ba5d93 mov dword ptr [0x11bce620], 1 */
  w32((uint32_t)(0x11bce620), (0x1u));
  /* 11ba5d9d call dword ptr [0x11bd0360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0360))), 0x11ba5da3u);
  /* 11ba5da3 jmp 0x11ba5dd7 */
  goto L_11ba5dd7;
L_11ba5da5:;
  /* 11ba5da5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5da9 jne 0x11ba5dbd */
  if (!C.zf) goto L_11ba5dbd;
  /* 11ba5dab mov dword ptr [0x11bce620], 1 */
  w32((uint32_t)(0x11bce620), (0x1u));
  /* 11ba5db5 call dword ptr [0x11bd0364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0364))), 0x11ba5dbbu);
  /* 11ba5dbb jmp 0x11ba5dd7 */
  goto L_11ba5dd7;
L_11ba5dbd:;
  /* 11ba5dbd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5dc1 jne 0x11ba5dd4 */
  if (!C.zf) goto L_11ba5dd4;
  /* 11ba5dc3 mov dword ptr [0x11bce620], 1 */
  w32((uint32_t)(0x11bce620), (0x1u));
  /* 11ba5dcd mov eax, dword ptr [0x11bce64c] */
  EAX = (r32((uint32_t)(0x11bce64c)));
  /* 11ba5dd2 jmp 0x11ba5dd7 */
  goto L_11ba5dd7;
L_11ba5dd4:;
  /* 11ba5dd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11ba5dd7:;
  /* 11ba5dd7 pop ebp */
  EBP = (pop32());
  /* 11ba5dd8 ret  */
  ESPCHK(0x11ba5d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015de0 @ 0x11ba5de0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11ba5de0(void) {
  FTRACE(0x11ba5de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5de1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba5de7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba5dea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5ded sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5df3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ba5df6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5dfa ja 0x11ba5e2a */
  if ((!C.cf&&!C.zf)) goto L_11ba5e2a;
  /* 11ba5dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5dff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba5e01 mov dl, byte ptr [eax + 0x11ba5e44] */
  DL = (r8((uint32_t)(EAX + 0x11ba5e44)));
  /* 11ba5e07 jmp dword ptr [edx*4 + 0x11ba5e30] */
  switch (EDX) {
    case 0: goto L_11ba5e0e;
    case 1: goto L_11ba5e15;
    case 2: goto L_11ba5e1c;
    case 3: goto L_11ba5e23;
    case 4: goto L_11ba5e2a;
    default: x86_unimpl("switch@0x11ba5e07 out of table"); return;
  }
L_11ba5e0e:;
  /* 11ba5e0e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11ba5e13 jmp 0x11ba5e2c */
  goto L_11ba5e2c;
L_11ba5e15:;
  /* 11ba5e15 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11ba5e1a jmp 0x11ba5e2c */
  goto L_11ba5e2c;
L_11ba5e1c:;
  /* 11ba5e1c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11ba5e21 jmp 0x11ba5e2c */
  goto L_11ba5e2c;
L_11ba5e23:;
  /* 11ba5e23 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11ba5e28 jmp 0x11ba5e2c */
  goto L_11ba5e2c;
L_11ba5e2a:;
  /* 11ba5e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba5e2c:;
  /* 11ba5e2c mov esp, ebp */
  ESP = (EBP);
  /* 11ba5e2e pop ebp */
  EBP = (pop32());
  /* 11ba5e2f ret  */
  ESPCHK(0x11ba5de0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11ba5e60 (116 bytes, 29 insns) */
void f_11ba5e60(void) {
  FTRACE(0x11ba5e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5e61 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5e63 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5e64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba5e6b jmp 0x11ba5e76 */
  goto L_11ba5e76;
L_11ba5e6d:;
  /* 11ba5e6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5e70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5e73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba5e76:;
  /* 11ba5e76 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5e7d jge 0x11ba5e8b */
  if ((C.sf==C.of)) goto L_11ba5e8b;
  /* 11ba5e7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5e82 mov byte ptr [ecx + 0x11bce8a0], 0 */
  w8((uint32_t)(ECX + 0x11bce8a0), (0x0u));
  /* 11ba5e89 jmp 0x11ba5e6d */
  goto L_11ba5e6d;
L_11ba5e8b:;
  /* 11ba5e8b mov dword ptr [0x11bce700], 0 */
  w32((uint32_t)(0x11bce700), (0x0u));
  /* 11ba5e95 mov dword ptr [0x11bce78c], 0 */
  w32((uint32_t)(0x11bce78c), (0x0u));
  /* 11ba5e9f mov dword ptr [0x11bce9a4], 0 */
  w32((uint32_t)(0x11bce9a4), (0x0u));
  /* 11ba5ea9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba5eb0 jmp 0x11ba5ebb */
  goto L_11ba5ebb;
L_11ba5eb2:;
  /* 11ba5eb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5eb5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5eb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba5ebb:;
  /* 11ba5ebb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5ebf jge 0x11ba5ed0 */
  if ((C.sf==C.of)) goto L_11ba5ed0;
  /* 11ba5ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5ec4 mov word ptr [eax*2 + 0x11bce780], 0 */
  w16((uint32_t)(EAX*2 + 0x11bce780), (0x0u));
  /* 11ba5ece jmp 0x11ba5eb2 */
  goto L_11ba5eb2;
L_11ba5ed0:;
  /* 11ba5ed0 mov esp, ebp */
  ESP = (EBP);
  /* 11ba5ed2 pop ebp */
  EBP = (pop32());
  /* 11ba5ed3 ret  */
  ESPCHK(0x11ba5e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ee0 @ 0x11ba5ee0 (770 bytes, 175 insns) */
void f_11ba5ee0(void) {
  FTRACE(0x11ba5ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba5ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba5ee1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba5ee3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba5ee9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11ba5eef push eax */
  push32((uint32_t)(EAX));
  /* 11ba5ef0 mov ecx, dword ptr [0x11bce700] */
  ECX = (r32((uint32_t)(0x11bce700)));
  /* 11ba5ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5ef7 call dword ptr [0x11bd0368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0368))), 0x11ba5efdu);
  /* 11ba5efd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5f00 jne 0x11ba6119 */
  if (!C.zf) goto L_11ba6119;
  /* 11ba5f06 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11ba5f10 jmp 0x11ba5f21 */
  goto L_11ba5f21;
L_11ba5f12:;
  /* 11ba5f12 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba5f18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5f1b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11ba5f21:;
  /* 11ba5f21 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5f2b jae 0x11ba5f42 */
  if (!C.cf) goto L_11ba5f42;
  /* 11ba5f2d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba5f33 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11ba5f39 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11ba5f40 jmp 0x11ba5f12 */
  goto L_11ba5f12;
L_11ba5f42:;
  /* 11ba5f42 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11ba5f49 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11ba5f4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ba5f52 jmp 0x11ba5f5d */
  goto L_11ba5f5d;
L_11ba5f54:;
  /* 11ba5f54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5f57 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5f5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ba5f5d:;
  /* 11ba5f5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5f60 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba5f62 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11ba5f64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba5f66 je 0x11ba5fa8 */
  if (C.zf) goto L_11ba5fa8;
  /* 11ba5f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5f6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba5f6d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11ba5f6f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11ba5f75 jmp 0x11ba5f86 */
  goto L_11ba5f86;
L_11ba5f77:;
  /* 11ba5f77 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba5f7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5f80 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11ba5f86:;
  /* 11ba5f86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba5f89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba5f8b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11ba5f8e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba5f94 ja 0x11ba5fa6 */
  if ((!C.cf&&!C.zf)) goto L_11ba5fa6;
  /* 11ba5f96 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba5f9c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11ba5fa4 jmp 0x11ba5f77 */
  goto L_11ba5f77;
L_11ba5fa6:;
  /* 11ba5fa6 jmp 0x11ba5f54 */
  goto L_11ba5f54;
L_11ba5fa8:;
  /* 11ba5fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba5faa mov eax, dword ptr [0x11bce9a4] */
  EAX = (r32((uint32_t)(0x11bce9a4)));
  /* 11ba5faf push eax */
  push32((uint32_t)(EAX));
  /* 11ba5fb0 mov ecx, dword ptr [0x11bce700] */
  ECX = (r32((uint32_t)(0x11bce700)));
  /* 11ba5fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5fb7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11ba5fbd push edx */
  push32((uint32_t)(EDX));
  /* 11ba5fbe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ba5fc3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11ba5fc9 push eax */
  push32((uint32_t)(EAX));
  /* 11ba5fca push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba5fcc call 0x11ba73a0 */
  push32(0x11ba5fd1u); f_11ba73a0();
  /* 11ba5fd1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba5fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba5fd6 mov ecx, dword ptr [0x11bce700] */
  ECX = (r32((uint32_t)(0x11bce700)));
  /* 11ba5fdc push ecx */
  push32((uint32_t)(ECX));
  /* 11ba5fdd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ba5fe2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11ba5fe8 push edx */
  push32((uint32_t)(EDX));
  /* 11ba5fe9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ba5fee lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11ba5ff4 push eax */
  push32((uint32_t)(EAX));
  /* 11ba5ff5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ba5ffa mov ecx, dword ptr [0x11bce9a4] */
  ECX = (r32((uint32_t)(0x11bce9a4)));
  /* 11ba6000 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6001 call 0x11ba7fb0 */
  push32(0x11ba6006u); f_11ba7fb0();
  /* 11ba6006 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6009 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba600b mov edx, dword ptr [0x11bce700] */
  EDX = (r32((uint32_t)(0x11bce700)));
  /* 11ba6011 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6012 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ba6017 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11ba601d push eax */
  push32((uint32_t)(EAX));
  /* 11ba601e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ba6023 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11ba6029 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba602a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11ba602f mov edx, dword ptr [0x11bce9a4] */
  EDX = (r32((uint32_t)(0x11bce9a4)));
  /* 11ba6035 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6036 call 0x11ba7fb0 */
  push32(0x11ba603bu); f_11ba7fb0();
  /* 11ba603b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba603e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11ba6048 jmp 0x11ba6059 */
  goto L_11ba6059;
L_11ba604a:;
  /* 11ba604a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba6050 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6053 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11ba6059:;
  /* 11ba6059 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6063 jae 0x11ba6114 */
  if (!C.cf) goto L_11ba6114;
  /* 11ba6069 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba606f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6071 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11ba6079 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba607c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ba607e je 0x11ba60b6 */
  if (C.zf) goto L_11ba60b6;
  /* 11ba6080 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba6086 mov cl, byte ptr [eax + 0x11bce8a1] */
  CL = (r8((uint32_t)(EAX + 0x11bce8a1)));
  /* 11ba608c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11ba608f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba6095 mov byte ptr [edx + 0x11bce8a1], cl */
  w8((uint32_t)(EDX + 0x11bce8a1), (CL));
  /* 11ba609b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba60a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba60a7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11ba60ae mov byte ptr [eax + 0x11bce7a0], dl */
  w8((uint32_t)(EAX + 0x11bce7a0), (DL));
  /* 11ba60b4 jmp 0x11ba610f */
  goto L_11ba610f;
L_11ba60b6:;
  /* 11ba60b6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba60bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ba60be mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11ba60c6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba60c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ba60cb je 0x11ba6102 */
  if (C.zf) goto L_11ba6102;
  /* 11ba60cd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba60d3 mov al, byte ptr [edx + 0x11bce8a1] */
  AL = (r8((uint32_t)(EDX + 0x11bce8a1)));
  /* 11ba60d9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ba60db mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba60e1 mov byte ptr [ecx + 0x11bce8a1], al */
  w8((uint32_t)(ECX + 0x11bce8a1), (AL));
  /* 11ba60e7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba60ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba60f3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11ba60fa mov byte ptr [edx + 0x11bce7a0], cl */
  w8((uint32_t)(EDX + 0x11bce7a0), (CL));
  /* 11ba6100 jmp 0x11ba610f */
  goto L_11ba610f;
L_11ba6102:;
  /* 11ba6102 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba6108 mov byte ptr [edx + 0x11bce7a0], 0 */
  w8((uint32_t)(EDX + 0x11bce7a0), (0x0u));
L_11ba610f:;
  /* 11ba610f jmp 0x11ba604a */
  goto L_11ba604a;
L_11ba6114:;
  /* 11ba6114 jmp 0x11ba61de */
  goto L_11ba61de;
L_11ba6119:;
  /* 11ba6119 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11ba6123 jmp 0x11ba6134 */
  goto L_11ba6134;
L_11ba6125:;
  /* 11ba6125 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba612b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba612e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11ba6134:;
  /* 11ba6134 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba613e jae 0x11ba61de */
  if (!C.cf) goto L_11ba61de;
  /* 11ba6144 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba614b jb 0x11ba6188 */
  if (C.cf) goto L_11ba6188;
  /* 11ba614d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6154 ja 0x11ba6188 */
  if ((!C.cf&&!C.zf)) goto L_11ba6188;
  /* 11ba6156 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba615c mov dl, byte ptr [ecx + 0x11bce8a1] */
  DL = (r8((uint32_t)(ECX + 0x11bce8a1)));
  /* 11ba6162 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11ba6165 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba616b mov byte ptr [eax + 0x11bce8a1], dl */
  w8((uint32_t)(EAX + 0x11bce8a1), (DL));
  /* 11ba6171 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba6177 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba617a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba6180 mov byte ptr [edx + 0x11bce7a0], cl */
  w8((uint32_t)(EDX + 0x11bce7a0), (CL));
  /* 11ba6186 jmp 0x11ba61d9 */
  goto L_11ba61d9;
L_11ba6188:;
  /* 11ba6188 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba618f jb 0x11ba61cc */
  if (C.cf) goto L_11ba61cc;
  /* 11ba6191 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6198 ja 0x11ba61cc */
  if ((!C.cf&&!C.zf)) goto L_11ba61cc;
  /* 11ba619a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba61a0 mov cl, byte ptr [eax + 0x11bce8a1] */
  CL = (r8((uint32_t)(EAX + 0x11bce8a1)));
  /* 11ba61a6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ba61a9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba61af mov byte ptr [edx + 0x11bce8a1], cl */
  w8((uint32_t)(EDX + 0x11bce8a1), (CL));
  /* 11ba61b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba61bb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba61be mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba61c4 mov byte ptr [ecx + 0x11bce7a0], al */
  w8((uint32_t)(ECX + 0x11bce7a0), (AL));
  /* 11ba61ca jmp 0x11ba61d9 */
  goto L_11ba61d9;
L_11ba61cc:;
  /* 11ba61cc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11ba61d2 mov byte ptr [edx + 0x11bce7a0], 0 */
  w8((uint32_t)(EDX + 0x11bce7a0), (0x0u));
L_11ba61d9:;
  /* 11ba61d9 jmp 0x11ba6125 */
  goto L_11ba6125;
L_11ba61de:;
  /* 11ba61de mov esp, ebp */
  ESP = (EBP);
  /* 11ba61e0 pop ebp */
  EBP = (pop32());
  /* 11ba61e1 ret  */
  ESPCHK(0x11ba5ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_100161f0 @ 0x11ba61f0 (23 bytes, 9 insns) */
void f_11ba61f0(void) {
  FTRACE(0x11ba61f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba61f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba61f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba61f3 cmp dword ptr [0x11bce78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba61fa je 0x11ba6203 */
  if (C.zf) goto L_11ba6203;
  /* 11ba61fc mov eax, dword ptr [0x11bce700] */
  EAX = (r32((uint32_t)(0x11bce700)));
  /* 11ba6201 jmp 0x11ba6205 */
  goto L_11ba6205;
L_11ba6203:;
  /* 11ba6203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11ba6205:;
  /* 11ba6205 pop ebp */
  EBP = (pop32());
  /* 11ba6206 ret  */
  ESPCHK(0x11ba61f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016210 @ 0x11ba6210 (34 bytes, 10 insns) */
void f_11ba6210(void) {
  FTRACE(0x11ba6210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba6210 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba6211 mov ebp, esp */
  EBP = (ESP);
  /* 11ba6213 cmp dword ptr [0x11bcfe90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfe90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba621a jne 0x11ba6230 */
  if (!C.zf) goto L_11ba6230;
  /* 11ba621c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11ba621e call 0x11ba5a30 */
  push32(0x11ba6223u); f_11ba5a30();
  /* 11ba6223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6226 mov dword ptr [0x11bcfe90], 1 */
  w32((uint32_t)(0x11bcfe90), (0x1u));
L_11ba6230:;
  /* 11ba6230 pop ebp */
  EBP = (pop32());
  /* 11ba6231 ret  */
  ESPCHK(0x11ba6210u, _esp0);
  ESP += 4; return;
}

/* FUN_10016240 @ 0x11ba6240 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11ba6240(void) {
  FTRACE(0x11ba6240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba6240 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba6241 mov ebp, esp */
  EBP = (ESP);
  /* 11ba6243 push edi */
  push32((uint32_t)(EDI));
  /* 11ba6244 push esi */
  push32((uint32_t)(ESI));
  /* 11ba6245 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6248 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba624b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba624e mov eax, ecx */
  EAX = (ECX);
  /* 11ba6250 mov edx, ecx */
  EDX = (ECX);
  /* 11ba6252 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6254 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6256 jbe 0x11ba6260 */
  if ((C.cf||C.zf)) goto L_11ba6260;
  /* 11ba6258 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba625a jb 0x11ba63d8 */
  if (C.cf) goto L_11ba63d8;
L_11ba6260:;
  /* 11ba6260 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ba6266 jne 0x11ba627c */
  if (!C.zf) goto L_11ba627c;
  /* 11ba6268 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba626b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba626e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6271 jb 0x11ba629c */
  if (C.cf) goto L_11ba629c;
  /* 11ba6273 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba6275 jmp dword ptr [edx*4 + 0x11ba6388] */
  switch (EDX) {
    case 0: goto L_11ba6398;
    case 1: goto L_11ba63a0;
    case 2: goto L_11ba63ac;
    case 3: goto L_11ba63c0;
    default: x86_unimpl("switch@0x11ba6275 out of table"); return;
  }
L_11ba627c:;
  /* 11ba627c mov eax, edi */
  EAX = (EDI);
  /* 11ba627e mov edx, 3 */
  EDX = (0x3u);
  /* 11ba6283 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba6286 jb 0x11ba6294 */
  if (C.cf) goto L_11ba6294;
  /* 11ba6288 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba628b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba628d jmp dword ptr [eax*4 + 0x11ba62a0] */
  switch (EAX) {
    case 1: goto L_11ba62b0;
    case 2: goto L_11ba62dc;
    case 3: goto L_11ba6300;
    default: x86_unimpl("switch@0x11ba628d out of table"); return;
  }
L_11ba6294:;
  /* 11ba6294 jmp dword ptr [ecx*4 + 0x11ba6398] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11ba6398)))); return;
  /* 11ba629b nop  */
  /* nop */
L_11ba629c:;
  /* 11ba629c jmp dword ptr [ecx*4 + 0x11ba631c] */
  switch (ECX) {
    case 0: goto L_11ba637f;
    case 1: goto L_11ba636c;
    case 2: goto L_11ba6364;
    case 3: goto L_11ba635c;
    case 4: goto L_11ba6354;
    case 5: goto L_11ba634c;
    case 6: goto L_11ba6344;
    case 7: goto L_11ba633c;
    default: x86_unimpl("switch@0x11ba629c out of table"); return;
  }
  /* 11ba62a3 nop  */
  /* nop */
L_11ba62b0:;
  /* 11ba62b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba62b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba62b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba62b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba62b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba62bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba62bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba62c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba62c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba62c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba62cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba62ce jb 0x11ba629c */
  if (C.cf) goto L_11ba629c;
  /* 11ba62d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba62d2 jmp dword ptr [edx*4 + 0x11ba6388] */
  switch (EDX) {
    case 0: goto L_11ba6398;
    case 1: goto L_11ba63a0;
    case 2: goto L_11ba63ac;
    case 3: goto L_11ba63c0;
    default: x86_unimpl("switch@0x11ba62d2 out of table"); return;
  }
  /* 11ba62d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba62dc:;
  /* 11ba62dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba62de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba62e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba62e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba62e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba62e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba62eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba62ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba62f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba62f4 jb 0x11ba629c */
  if (C.cf) goto L_11ba629c;
  /* 11ba62f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba62f8 jmp dword ptr [edx*4 + 0x11ba6388] */
  switch (EDX) {
    case 0: goto L_11ba6398;
    case 1: goto L_11ba63a0;
    case 2: goto L_11ba63ac;
    case 3: goto L_11ba63c0;
    default: x86_unimpl("switch@0x11ba62f8 out of table"); return;
  }
  /* 11ba62ff nop  */
  /* nop */
L_11ba6300:;
  /* 11ba6300 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6302 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba6304 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba6306 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ba6307 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba630a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ba630b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba630e jb 0x11ba629c */
  if (C.cf) goto L_11ba629c;
  /* 11ba6310 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba6312 jmp dword ptr [edx*4 + 0x11ba6388] */
  switch (EDX) {
    case 0: goto L_11ba6398;
    case 1: goto L_11ba63a0;
    case 2: goto L_11ba63ac;
    case 3: goto L_11ba63c0;
    default: x86_unimpl("switch@0x11ba6312 out of table"); return;
  }
  /* 11ba6319 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba633c:;
  /* 11ba633c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11ba6340 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11ba6344:;
  /* 11ba6344 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11ba6348 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11ba634c:;
  /* 11ba634c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11ba6350 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11ba6354:;
  /* 11ba6354 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11ba6358 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11ba635c:;
  /* 11ba635c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11ba6360 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11ba6364:;
  /* 11ba6364 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11ba6368 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11ba636c:;
  /* 11ba636c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11ba6370 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11ba6374 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ba637b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba637d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ba637f:;
  /* 11ba637f jmp dword ptr [edx*4 + 0x11ba6388] */
  switch (EDX) {
    case 0: goto L_11ba6398;
    case 1: goto L_11ba63a0;
    case 2: goto L_11ba63ac;
    case 3: goto L_11ba63c0;
    default: x86_unimpl("switch@0x11ba637f out of table"); return;
  }
  /* 11ba6386 mov edi, edi */
  EDI = (EDI);
L_11ba6398:;
  /* 11ba6398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba639b pop esi */
  ESI = (pop32());
  /* 11ba639c pop edi */
  EDI = (pop32());
  /* 11ba639d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba639e ret  */
  ESPCHK(0x11ba6240u, _esp0);
  ESP += 4; return;
  /* 11ba639f nop  */
  /* nop */
L_11ba63a0:;
  /* 11ba63a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba63a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba63a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba63a7 pop esi */
  ESI = (pop32());
  /* 11ba63a8 pop edi */
  EDI = (pop32());
  /* 11ba63a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba63aa ret  */
  ESPCHK(0x11ba6240u, _esp0);
  ESP += 4; return;
  /* 11ba63ab nop  */
  /* nop */
L_11ba63ac:;
  /* 11ba63ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba63ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba63b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba63b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba63b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba63b9 pop esi */
  ESI = (pop32());
  /* 11ba63ba pop edi */
  EDI = (pop32());
  /* 11ba63bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba63bc ret  */
  ESPCHK(0x11ba6240u, _esp0);
  ESP += 4; return;
  /* 11ba63bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba63c0:;
  /* 11ba63c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ba63c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11ba63c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba63c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba63ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba63cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba63d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba63d3 pop esi */
  ESI = (pop32());
  /* 11ba63d4 pop edi */
  EDI = (pop32());
  /* 11ba63d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba63d6 ret  */
  ESPCHK(0x11ba6240u, _esp0);
  ESP += 4; return;
  /* 11ba63d7 nop  */
  /* nop */
L_11ba63d8:;
  /* 11ba63d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11ba63dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11ba63e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11ba63e6 jne 0x11ba640c */
  if (!C.zf) goto L_11ba640c;
  /* 11ba63e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba63eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11ba63ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba63f1 jb 0x11ba6400 */
  if (C.cf) goto L_11ba6400;
  /* 11ba63f3 std  */
  C.df=1;
  /* 11ba63f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba63f6 cld  */
  C.df=0;
  /* 11ba63f7 jmp dword ptr [edx*4 + 0x11ba6520] */
  switch (EDX) {
    case 0: goto L_11ba6530;
    case 1: goto L_11ba6538;
    case 2: goto L_11ba6548;
    case 3: goto L_11ba655c;
    default: x86_unimpl("switch@0x11ba63f7 out of table"); return;
  }
  /* 11ba63fe mov edi, edi */
  EDI = (EDI);
L_11ba6400:;
  /* 11ba6400 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ba6402 jmp dword ptr [ecx*4 + 0x11ba64d0] */
  switch (ECX) {
    case 0: goto L_11ba6517;
    default: x86_unimpl("switch@0x11ba6402 out of table"); return;
  }
  /* 11ba6409 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba640c:;
  /* 11ba640c mov eax, edi */
  EAX = (EDI);
  /* 11ba640e mov edx, 3 */
  EDX = (0x3u);
  /* 11ba6413 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6416 jb 0x11ba6424 */
  if (C.cf) goto L_11ba6424;
  /* 11ba6418 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11ba641b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba641d jmp dword ptr [eax*4 + 0x11ba6428] */
  switch (EAX) {
    case 1: goto L_11ba6438;
    case 2: goto L_11ba6458;
    case 3: goto L_11ba6480;
    default: x86_unimpl("switch@0x11ba641d out of table"); return;
  }
L_11ba6424:;
  /* 11ba6424 jmp dword ptr [ecx*4 + 0x11ba6520] */
  switch (ECX) {
    case 0: goto L_11ba6530;
    case 1: goto L_11ba6538;
    case 2: goto L_11ba6548;
    case 3: goto L_11ba655c;
    default: x86_unimpl("switch@0x11ba6424 out of table"); return;
  }
  /* 11ba642b nop  */
  /* nop */
L_11ba6438:;
  /* 11ba6438 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba643b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba643d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba6440 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11ba6441 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba6444 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11ba6445 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6448 jb 0x11ba6400 */
  if (C.cf) goto L_11ba6400;
  /* 11ba644a std  */
  C.df=1;
  /* 11ba644b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba644d cld  */
  C.df=0;
  /* 11ba644e jmp dword ptr [edx*4 + 0x11ba6520] */
  switch (EDX) {
    case 0: goto L_11ba6530;
    case 1: goto L_11ba6538;
    case 2: goto L_11ba6548;
    case 3: goto L_11ba655c;
    default: x86_unimpl("switch@0x11ba644e out of table"); return;
  }
  /* 11ba6455 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba6458:;
  /* 11ba6458 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba645b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba645d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba6460 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba6463 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba6466 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba6469 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba646c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba646f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6472 jb 0x11ba6400 */
  if (C.cf) goto L_11ba6400;
  /* 11ba6474 std  */
  C.df=1;
  /* 11ba6475 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba6477 cld  */
  C.df=0;
  /* 11ba6478 jmp dword ptr [edx*4 + 0x11ba6520] */
  switch (EDX) {
    case 0: goto L_11ba6530;
    case 1: goto L_11ba6538;
    case 2: goto L_11ba6548;
    case 3: goto L_11ba655c;
    default: x86_unimpl("switch@0x11ba6478 out of table"); return;
  }
  /* 11ba647f nop  */
  /* nop */
L_11ba6480:;
  /* 11ba6480 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba6483 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11ba6485 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba6488 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba648b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba648e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba6491 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11ba6494 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba6497 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba649a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba649d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba64a0 jb 0x11ba6400 */
  if (C.cf) goto L_11ba6400;
  /* 11ba64a6 std  */
  C.df=1;
  /* 11ba64a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11ba64a9 cld  */
  C.df=0;
  /* 11ba64aa jmp dword ptr [edx*4 + 0x11ba6520] */
  switch (EDX) {
    case 0: goto L_11ba6530;
    case 1: goto L_11ba6538;
    case 2: goto L_11ba6548;
    case 3: goto L_11ba655c;
    default: x86_unimpl("switch@0x11ba64aa out of table"); return;
  }
  /* 11ba64b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11ba64b4 aam 0x64 */
  x86_unimpl("aam @ 0x11ba64b4");
  /* 11ba64b6 mov edx, 0xba64dc11 */
  EDX = (0xba64dc11u);
  /* 11ba64bb adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba64bd mov edx, 0xba64ec11 */
  EDX = (0xba64ec11u);
  /* 11ba64c3 adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba64c5 mov edx, 0xba64fc11 */
  EDX = (0xba64fc11u);
  /* 11ba64cc add al, 0x65 */
  { uint32_t _a=(AL),_b=(0x65u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ba64d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11ba64d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11ba64dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11ba64e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11ba64e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11ba64e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11ba64ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11ba64f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11ba64f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11ba64f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11ba64fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11ba6500 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11ba6504 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11ba6508 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11ba650c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11ba6513 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6515 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11ba6517:;
  /* 11ba6517 jmp dword ptr [edx*4 + 0x11ba6520] */
  switch (EDX) {
    case 0: goto L_11ba6530;
    case 1: goto L_11ba6538;
    case 2: goto L_11ba6548;
    case 3: goto L_11ba655c;
    default: x86_unimpl("switch@0x11ba6517 out of table"); return;
  }
  /* 11ba651e mov edi, edi */
  EDI = (EDI);
L_11ba6530:;
  /* 11ba6530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6533 pop esi */
  ESI = (pop32());
  /* 11ba6534 pop edi */
  EDI = (pop32());
  /* 11ba6535 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba6536 ret  */
  ESPCHK(0x11ba6240u, _esp0);
  ESP += 4; return;
  /* 11ba6537 nop  */
  /* nop */
L_11ba6538:;
  /* 11ba6538 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba653b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba653e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6541 pop esi */
  ESI = (pop32());
  /* 11ba6542 pop edi */
  EDI = (pop32());
  /* 11ba6543 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba6544 ret  */
  ESPCHK(0x11ba6240u, _esp0);
  ESP += 4; return;
  /* 11ba6545 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ba6548:;
  /* 11ba6548 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba654b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba654e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba6551 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba6554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6557 pop esi */
  ESI = (pop32());
  /* 11ba6558 pop edi */
  EDI = (pop32());
  /* 11ba6559 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba655a ret  */
  ESPCHK(0x11ba6240u, _esp0);
  ESP += 4; return;
  /* 11ba655b nop  */
  /* nop */
L_11ba655c:;
  /* 11ba655c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11ba655f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11ba6562 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11ba6565 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11ba6568 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ba656b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11ba656e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6571 pop esi */
  ESI = (pop32());
  /* 11ba6572 pop edi */
  EDI = (pop32());
  /* 11ba6573 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ba6574 ret  */
  ESPCHK(0x11ba6240u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11ba6580 (145 bytes, 42 insns) */
void f_11ba6580(void) {
  FTRACE(0x11ba6580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba6580 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba6581 mov ebp, esp */
  EBP = (ESP);
  /* 11ba6583 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6584 call 0x11ba6630 */
  push32(0x11ba6589u); f_11ba6630();
  /* 11ba6589 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba658c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ba658e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ba6595 jmp 0x11ba65a0 */
  goto L_11ba65a0;
L_11ba6597:;
  /* 11ba6597 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba659a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba659d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ba65a0:;
  /* 11ba65a0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba65a4 jae 0x11ba65ca */
  if (!C.cf) goto L_11ba65ca;
  /* 11ba65a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba65a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba65ac cmp ecx, dword ptr [eax*8 + 0x11bcc790] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11bcc790))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba65b3 jne 0x11ba65c8 */
  if (!C.zf) goto L_11ba65c8;
  /* 11ba65b5 call 0x11ba6620 */
  push32(0x11ba65bau); f_11ba6620();
  /* 11ba65ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba65bd mov ecx, dword ptr [edx*8 + 0x11bcc794] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11bcc794)));
  /* 11ba65c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ba65c6 jmp 0x11ba660d */
  goto L_11ba660d;
L_11ba65c8:;
  /* 11ba65c8 jmp 0x11ba6597 */
  goto L_11ba6597;
L_11ba65ca:;
  /* 11ba65ca cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba65ce jb 0x11ba65e3 */
  if (C.cf) goto L_11ba65e3;
  /* 11ba65d0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba65d4 ja 0x11ba65e3 */
  if ((!C.cf&&!C.zf)) goto L_11ba65e3;
  /* 11ba65d6 call 0x11ba6620 */
  push32(0x11ba65dbu); f_11ba6620();
  /* 11ba65db mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11ba65e1 jmp 0x11ba660d */
  goto L_11ba660d;
L_11ba65e3:;
  /* 11ba65e3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba65ea jb 0x11ba6602 */
  if (C.cf) goto L_11ba6602;
  /* 11ba65ec cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba65f3 ja 0x11ba6602 */
  if ((!C.cf&&!C.zf)) goto L_11ba6602;
  /* 11ba65f5 call 0x11ba6620 */
  push32(0x11ba65fau); f_11ba6620();
  /* 11ba65fa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11ba6600 jmp 0x11ba660d */
  goto L_11ba660d;
L_11ba6602:;
  /* 11ba6602 call 0x11ba6620 */
  push32(0x11ba6607u); f_11ba6620();
  /* 11ba6607 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11ba660d:;
  /* 11ba660d mov esp, ebp */
  ESP = (EBP);
  /* 11ba660f pop ebp */
  EBP = (pop32());
  /* 11ba6610 ret  */
  ESPCHK(0x11ba6580u, _esp0);
  ESP += 4; return;
}

/* FUN_10016620 @ 0x11ba6620 (13 bytes, 6 insns) */
void f_11ba6620(void) {
  FTRACE(0x11ba6620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba6620 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba6621 mov ebp, esp */
  EBP = (ESP);
  /* 11ba6623 call 0x11b9d4d0 */
  push32(0x11ba6628u); f_11b9d4d0();
  /* 11ba6628 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba662b pop ebp */
  EBP = (pop32());
  /* 11ba662c ret  */
  ESPCHK(0x11ba6620u, _esp0);
  ESP += 4; return;
}

/* FUN_10016630 @ 0x11ba6630 (13 bytes, 6 insns) */
void f_11ba6630(void) {
  FTRACE(0x11ba6630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba6630 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba6631 mov ebp, esp */
  EBP = (ESP);
  /* 11ba6633 call 0x11b9d4d0 */
  push32(0x11ba6638u); f_11b9d4d0();
  /* 11ba6638 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba663b pop ebp */
  EBP = (pop32());
  /* 11ba663c ret  */
  ESPCHK(0x11ba6630u, _esp0);
  ESP += 4; return;
}

/* FUN_10016640 @ 0x11ba6640 (85 bytes, 32 insns) */
void f_11ba6640(void) {
  FTRACE(0x11ba6640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba6640 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba6641 mov ebp, esp */
  EBP = (ESP);
  /* 11ba6643 cmp dword ptr [0x11bcc9d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc9d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba664a jne 0x11ba6674 */
  if (!C.zf) goto L_11ba6674;
  /* 11ba664c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba664f push eax */
  push32((uint32_t)(EAX));
  /* 11ba6650 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6653 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6654 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6657 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6658 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba665a push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba665c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba665f push eax */
  push32((uint32_t)(EAX));
  /* 11ba6660 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6663 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6664 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6667 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6668 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba666a call 0x11ba70f0 */
  push32(0x11ba666fu); f_11ba70f0();
  /* 11ba666f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6672 jmp 0x11ba6693 */
  goto L_11ba6693;
L_11ba6674:;
  /* 11ba6674 call 0x11ba6620 */
  push32(0x11ba6679u); f_11ba6620();
  /* 11ba6679 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11ba667f push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ba6684 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba6687 push eax */
  push32((uint32_t)(EAX));
  /* 11ba6688 call 0x11ba72e0 */
  push32(0x11ba668du); f_11ba72e0();
  /* 11ba668d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6690 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
L_11ba6693:;
  /* 11ba6693 pop ebp */
  EBP = (pop32());
  /* 11ba6694 ret  */
  ESPCHK(0x11ba6640u, _esp0);
  ESP += 4; return;
}

/* FUN_100166a0 @ 0x11ba66a0 (103 bytes, 39 insns) */
void f_11ba66a0(void) {
  FTRACE(0x11ba66a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba66a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba66a1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba66a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba66a6 fld qword ptr [ebp + 0xc] */
  fpu_push(rf64((uint32_t)(EBP + 0xc)));
  /* 11ba66a9 fadd qword ptr [ebp + 0x14] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + 0x14)));
  /* 11ba66ac fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11ba66af cmp dword ptr [0x11bcc9d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc9d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba66b6 jne 0x11ba66e4 */
  if (!C.zf) goto L_11ba66e4;
  /* 11ba66b8 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba66bb push eax */
  push32((uint32_t)(EAX));
  /* 11ba66bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba66bf push ecx */
  push32((uint32_t)(ECX));
  /* 11ba66c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ba66c3 push edx */
  push32((uint32_t)(EDX));
  /* 11ba66c4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba66c7 push eax */
  push32((uint32_t)(EAX));
  /* 11ba66c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba66cb push ecx */
  push32((uint32_t)(ECX));
  /* 11ba66cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba66cf push edx */
  push32((uint32_t)(EDX));
  /* 11ba66d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba66d3 push eax */
  push32((uint32_t)(EAX));
  /* 11ba66d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba66d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba66d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ba66da call 0x11ba70f0 */
  push32(0x11ba66dfu); f_11ba70f0();
  /* 11ba66df add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba66e2 jmp 0x11ba6703 */
  goto L_11ba6703;
L_11ba66e4:;
  /* 11ba66e4 call 0x11ba6620 */
  push32(0x11ba66e9u); f_11ba6620();
  /* 11ba66e9 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
  /* 11ba66ef push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ba66f4 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba66f7 push edx */
  push32((uint32_t)(EDX));
  /* 11ba66f8 call 0x11ba72e0 */
  push32(0x11ba66fdu); f_11ba72e0();
  /* 11ba66fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6700 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
L_11ba6703:;
  /* 11ba6703 mov esp, ebp */
  ESP = (EBP);
  /* 11ba6705 pop ebp */
  EBP = (pop32());
  /* 11ba6706 ret  */
  ESPCHK(0x11ba66a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016710 @ 0x11ba6710 (178 bytes, 71 insns) */
void f_11ba6710(void) {
  FTRACE(0x11ba6710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba6710 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba6711 mov ebp, esp */
  EBP = (ESP);
  /* 11ba6713 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba6716 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba6719 push eax */
  push32((uint32_t)(EAX));
  /* 11ba671a lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11ba671d push ecx */
  push32((uint32_t)(ECX));
  /* 11ba671e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6721 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6722 call 0x11ba6d70 */
  push32(0x11ba6727u); f_11ba6d70();
  /* 11ba6727 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba672a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba672c jne 0x11ba6756 */
  if (!C.zf) goto L_11ba6756;
  /* 11ba672e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba6731 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11ba6733 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ba6736 lea ecx, [ebp + 0x18] */
  ECX = ((uint32_t)(EBP + 0x18));
  /* 11ba6739 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba673a lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ba673d push edx */
  push32((uint32_t)(EDX));
  /* 11ba673e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6741 push eax */
  push32((uint32_t)(EAX));
  /* 11ba6742 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6745 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6746 lea edx, [ebp + 0x20] */
  EDX = ((uint32_t)(EBP + 0x20));
  /* 11ba6749 push edx */
  push32((uint32_t)(EDX));
  /* 11ba674a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11ba674d push eax */
  push32((uint32_t)(EAX));
  /* 11ba674e call 0x11ba68a0 */
  push32(0x11ba6753u); f_11ba68a0();
  /* 11ba6753 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba6756:;
  /* 11ba6756 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6759 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba675a call 0x11ba7210 */
  push32(0x11ba675fu); f_11ba7210();
  /* 11ba675f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba6765 cmp dword ptr [0x11bcc9d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc9d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba676c jne 0x11ba679e */
  if (!C.zf) goto L_11ba679e;
  /* 11ba676e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6772 je 0x11ba679e */
  if (C.zf) goto L_11ba679e;
  /* 11ba6774 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba6777 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6778 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba677b push eax */
  push32((uint32_t)(EAX));
  /* 11ba677c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba677f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6780 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba6782 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ba6784 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba6787 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6788 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba678b push eax */
  push32((uint32_t)(EAX));
  /* 11ba678c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba678f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6790 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba6793 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6794 call 0x11ba70f0 */
  push32(0x11ba6799u); f_11ba70f0();
  /* 11ba6799 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba679c jmp 0x11ba67be */
  goto L_11ba67be;
L_11ba679e:;
  /* 11ba679e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba67a1 push eax */
  push32((uint32_t)(EAX));
  /* 11ba67a2 call 0x11ba7190 */
  push32(0x11ba67a7u); f_11ba7190();
  /* 11ba67a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba67aa push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ba67af mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba67b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba67b3 call 0x11ba72e0 */
  push32(0x11ba67b8u); f_11ba72e0();
  /* 11ba67b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba67bb fld qword ptr [ebp + 0x18] */
  fpu_push(rf64((uint32_t)(EBP + 0x18)));
L_11ba67be:;
  /* 11ba67be mov esp, ebp */
  ESP = (EBP);
  /* 11ba67c0 pop ebp */
  EBP = (pop32());
  /* 11ba67c1 ret  */
  ESPCHK(0x11ba6710u, _esp0);
  ESP += 4; return;
}

/* FUN_100167d0 @ 0x11ba67d0 (206 bytes, 81 insns) */
void f_11ba67d0(void) {
  FTRACE(0x11ba67d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ba67d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ba67d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ba67d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ba67d6 mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ba67d9 push eax */
  push32((uint32_t)(EAX));
  /* 11ba67da lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11ba67dd push ecx */
  push32((uint32_t)(ECX));
  /* 11ba67de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba67e1 push edx */
  push32((uint32_t)(EDX));
  /* 11ba67e2 call 0x11ba6d70 */
  push32(0x11ba67e7u); f_11ba6d70();
  /* 11ba67e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba67ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ba67ec jne 0x11ba682e */
  if (!C.zf) goto L_11ba682e;
  /* 11ba67ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba67f1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ba67f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ba67f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ba67f9 and ecx, 0xffffffe1 */
  { uint32_t _r=(ECX)&(0xffffffe1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba67fc or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ba67ff mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ba6802 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba6805 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11ba6808 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba680b mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ba680e lea ecx, [ebp + 0x20] */
  ECX = ((uint32_t)(EBP + 0x20));
  /* 11ba6811 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6812 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11ba6815 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6816 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba6819 push eax */
  push32((uint32_t)(EAX));
  /* 11ba681a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba681d push ecx */
  push32((uint32_t)(ECX));
  /* 11ba681e lea edx, [ebp + 0x28] */
  EDX = ((uint32_t)(EBP + 0x28));
  /* 11ba6821 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6822 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11ba6825 push eax */
  push32((uint32_t)(EAX));
  /* 11ba6826 call 0x11ba68a0 */
  push32(0x11ba682bu); f_11ba68a0();
  /* 11ba682b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ba682e:;
  /* 11ba682e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ba6831 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6832 call 0x11ba7210 */
  push32(0x11ba6837u); f_11ba7210();
  /* 11ba6837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba683a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ba683d cmp dword ptr [0x11bcc9d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc9d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba6844 jne 0x11ba687a */
  if (!C.zf) goto L_11ba687a;
  /* 11ba6846 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ba684a je 0x11ba687a */
  if (C.zf) goto L_11ba687a;
  /* 11ba684c mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ba684f push edx */
  push32((uint32_t)(EDX));
  /* 11ba6850 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11ba6853 push eax */
  push32((uint32_t)(EAX));
  /* 11ba6854 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11ba6857 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6858 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11ba685b push edx */
  push32((uint32_t)(EDX));
  /* 11ba685c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11ba685f push eax */
  push32((uint32_t)(EAX));
  /* 11ba6860 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11ba6863 push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6864 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ba6867 push edx */
  push32((uint32_t)(EDX));
  /* 11ba6868 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ba686b push eax */
  push32((uint32_t)(EAX));
  /* 11ba686c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba686f push ecx */
  push32((uint32_t)(ECX));
  /* 11ba6870 call 0x11ba70f0 */
  push32(0x11ba6875u); f_11ba70f0();
  /* 11ba6875 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6878 jmp 0x11ba689a */
  goto L_11ba689a;
L_11ba687a:;
  /* 11ba687a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ba687d push edx */
  push32((uint32_t)(EDX));
  /* 11ba687e call 0x11ba7190 */
  push32(0x11ba6883u); f_11ba7190();
  /* 11ba6883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6886 push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11ba688b mov eax, dword ptr [ebp + 0x28] */
  EAX = (r32((uint32_t)(EBP + 0x28)));
  /* 11ba688e push eax */
  push32((uint32_t)(EAX));
  /* 11ba688f call 0x11ba72e0 */
  push32(0x11ba6894u); f_11ba72e0();
  /* 11ba6894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ba6897 fld qword ptr [ebp + 0x20] */
  fpu_push(rf64((uint32_t)(EBP + 0x20)));
L_11ba689a:;
  /* 11ba689a mov esp, ebp */
  ESP = (EBP);
  /* 11ba689c pop ebp */
  EBP = (pop32());
  /* 11ba689d ret  */
  ESPCHK(0x11ba67d0u, _esp0);
  ESP += 4; return;
}

