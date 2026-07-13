#include "recomp.h"

/* FUN_1001fd00 @ 0x11e0fd00 (46 bytes, 18 insns) */
void f_11e0fd00(void) {
  FTRACE(0x11e0fd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0fd00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0fd01 mov ebp, esp */
  EBP = (ESP);
  /* 11e0fd03 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fd04 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e0fd06 call 0x11dfbd50 */
  push32(0x11e0fd0bu); f_11dfbd50();
  /* 11e0fd0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fd0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0fd11 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fd12 call 0x11e0fd30 */
  push32(0x11e0fd17u); f_11e0fd30();
  /* 11e0fd17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fd1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e0fd1d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e0fd1f call 0x11dfbdf0 */
  push32(0x11e0fd24u); f_11dfbdf0();
  /* 11e0fd24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fd27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0fd2a mov esp, ebp */
  ESP = (EBP);
  /* 11e0fd2c pop ebp */
  EBP = (pop32());
  /* 11e0fd2d ret  */
  ESPCHK(0x11e0fd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001fd30 @ 0x11e0fd30 (762 bytes, 246 insns) */
void f_11e0fd30(void) {
  FTRACE(0x11e0fd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e0fd30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e0fd31 mov ebp, esp */
  EBP = (ESP);
  /* 11e0fd33 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fd34 cmp dword ptr [0x11e2f580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2f580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fd3b jne 0x11e0fd44 */
  if (!C.zf) goto L_11e0fd44;
  /* 11e0fd3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0fd3f jmp 0x11e10026 */
  goto L_11e10026;
L_11e0fd44:;
  /* 11e0fd44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0fd47 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11e0fd4a cmp ecx, dword ptr [0x11e2f610] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e2f610))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fd50 jne 0x11e0fd64 */
  if (!C.zf) goto L_11e0fd64;
  /* 11e0fd52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0fd55 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11e0fd58 cmp eax, dword ptr [0x11e2f620] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e2f620))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fd5e je 0x11e0ff2b */
  if (C.zf) goto L_11e0ff2b;
L_11e0fd64:;
  /* 11e0fd64 cmp dword ptr [0x11e308c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e308c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fd6b je 0x11e0fee5 */
  if (C.zf) goto L_11e0fee5;
  /* 11e0fd71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fd73 mov cx, word ptr [0x11e30960] */
  CX = (r16((uint32_t)(0x11e30960)));
  /* 11e0fd7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0fd7c jne 0x11e0fdd9 */
  if (!C.zf) goto L_11e0fdd9;
  /* 11e0fd7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0fd80 mov dx, word ptr [0x11e3096e] */
  DX = (r16((uint32_t)(0x11e3096e)));
  /* 11e0fd87 push edx */
  push32((uint32_t)(EDX));
  /* 11e0fd88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0fd8a mov ax, word ptr [0x11e3096c] */
  AX = (r16((uint32_t)(0x11e3096c)));
  /* 11e0fd90 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fd91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fd93 mov cx, word ptr [0x11e3096a] */
  CX = (r16((uint32_t)(0x11e3096a)));
  /* 11e0fd9a push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fd9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0fd9d mov dx, word ptr [0x11e30968] */
  DX = (r16((uint32_t)(0x11e30968)));
  /* 11e0fda4 push edx */
  push32((uint32_t)(EDX));
  /* 11e0fda5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fda7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0fda9 mov ax, word ptr [0x11e30964] */
  AX = (r16((uint32_t)(0x11e30964)));
  /* 11e0fdaf push eax */
  push32((uint32_t)(EAX));
  /* 11e0fdb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fdb2 mov cx, word ptr [0x11e30966] */
  CX = (r16((uint32_t)(0x11e30966)));
  /* 11e0fdb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fdba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0fdbc mov dx, word ptr [0x11e30962] */
  DX = (r16((uint32_t)(0x11e30962)));
  /* 11e0fdc3 push edx */
  push32((uint32_t)(EDX));
  /* 11e0fdc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0fdc7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11e0fdca push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fdcb push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0fdcd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0fdcf call 0x11e10030 */
  push32(0x11e0fdd4u); f_11e10030();
  /* 11e0fdd4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fdd7 jmp 0x11e0fe2a */
  goto L_11e0fe2a;
L_11e0fdd9:;
  /* 11e0fdd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0fddb mov dx, word ptr [0x11e3096e] */
  DX = (r16((uint32_t)(0x11e3096e)));
  /* 11e0fde2 push edx */
  push32((uint32_t)(EDX));
  /* 11e0fde3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0fde5 mov ax, word ptr [0x11e3096c] */
  AX = (r16((uint32_t)(0x11e3096c)));
  /* 11e0fdeb push eax */
  push32((uint32_t)(EAX));
  /* 11e0fdec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fdee mov cx, word ptr [0x11e3096a] */
  CX = (r16((uint32_t)(0x11e3096a)));
  /* 11e0fdf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fdf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0fdf8 mov dx, word ptr [0x11e30968] */
  DX = (r16((uint32_t)(0x11e30968)));
  /* 11e0fdff push edx */
  push32((uint32_t)(EDX));
  /* 11e0fe00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0fe02 mov ax, word ptr [0x11e30966] */
  AX = (r16((uint32_t)(0x11e30966)));
  /* 11e0fe08 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fe09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fe0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fe0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fe0f mov cx, word ptr [0x11e30962] */
  CX = (r16((uint32_t)(0x11e30962)));
  /* 11e0fe16 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fe17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0fe1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11e0fe1d push eax */
  push32((uint32_t)(EAX));
  /* 11e0fe1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fe20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0fe22 call 0x11e10030 */
  push32(0x11e0fe27u); f_11e10030();
  /* 11e0fe27 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0fe2a:;
  /* 11e0fe2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fe2c mov cx, word ptr [0x11e3090c] */
  CX = (r16((uint32_t)(0x11e3090c)));
  /* 11e0fe33 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e0fe35 jne 0x11e0fe92 */
  if (!C.zf) goto L_11e0fe92;
  /* 11e0fe37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0fe39 mov dx, word ptr [0x11e3091a] */
  DX = (r16((uint32_t)(0x11e3091a)));
  /* 11e0fe40 push edx */
  push32((uint32_t)(EDX));
  /* 11e0fe41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0fe43 mov ax, word ptr [0x11e30918] */
  AX = (r16((uint32_t)(0x11e30918)));
  /* 11e0fe49 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fe4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fe4c mov cx, word ptr [0x11e30916] */
  CX = (r16((uint32_t)(0x11e30916)));
  /* 11e0fe53 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fe54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0fe56 mov dx, word ptr [0x11e30914] */
  DX = (r16((uint32_t)(0x11e30914)));
  /* 11e0fe5d push edx */
  push32((uint32_t)(EDX));
  /* 11e0fe5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fe60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0fe62 mov ax, word ptr [0x11e30910] */
  AX = (r16((uint32_t)(0x11e30910)));
  /* 11e0fe68 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fe69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fe6b mov cx, word ptr [0x11e30912] */
  CX = (r16((uint32_t)(0x11e30912)));
  /* 11e0fe72 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fe73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0fe75 mov dx, word ptr [0x11e3090e] */
  DX = (r16((uint32_t)(0x11e3090e)));
  /* 11e0fe7c push edx */
  push32((uint32_t)(EDX));
  /* 11e0fe7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0fe80 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11e0fe83 push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fe84 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0fe86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fe88 call 0x11e10030 */
  push32(0x11e0fe8du); f_11e10030();
  /* 11e0fe8d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0fe90 jmp 0x11e0fee3 */
  goto L_11e0fee3;
L_11e0fe92:;
  /* 11e0fe92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0fe94 mov dx, word ptr [0x11e3091a] */
  DX = (r16((uint32_t)(0x11e3091a)));
  /* 11e0fe9b push edx */
  push32((uint32_t)(EDX));
  /* 11e0fe9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0fe9e mov ax, word ptr [0x11e30918] */
  AX = (r16((uint32_t)(0x11e30918)));
  /* 11e0fea4 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fea5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fea7 mov cx, word ptr [0x11e30916] */
  CX = (r16((uint32_t)(0x11e30916)));
  /* 11e0feae push ecx */
  push32((uint32_t)(ECX));
  /* 11e0feaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e0feb1 mov dx, word ptr [0x11e30914] */
  DX = (r16((uint32_t)(0x11e30914)));
  /* 11e0feb8 push edx */
  push32((uint32_t)(EDX));
  /* 11e0feb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0febb mov ax, word ptr [0x11e30912] */
  AX = (r16((uint32_t)(0x11e30912)));
  /* 11e0fec1 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fec6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e0fec8 mov cx, word ptr [0x11e3090e] */
  CX = (r16((uint32_t)(0x11e3090e)));
  /* 11e0fecf push ecx */
  push32((uint32_t)(ECX));
  /* 11e0fed0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0fed3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11e0fed6 push eax */
  push32((uint32_t)(EAX));
  /* 11e0fed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fedb call 0x11e10030 */
  push32(0x11e0fee0u); f_11e10030();
  /* 11e0fee0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0fee3:;
  /* 11e0fee3 jmp 0x11e0ff2b */
  goto L_11e0ff2b;
L_11e0fee5:;
  /* 11e0fee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0feeb push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0feed push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0feef push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0fef1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0fef3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e0fef5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0fef8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11e0fefb push edx */
  push32((uint32_t)(EDX));
  /* 11e0fefc push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0fefe push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0ff00 call 0x11e10030 */
  push32(0x11e0ff05u); f_11e10030();
  /* 11e0ff05 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ff08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ff0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ff0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ff0e push 2 */
  push32((uint32_t)(0x2u));
  /* 11e0ff10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ff12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ff14 push 5 */
  push32((uint32_t)(0x5u));
  /* 11e0ff16 push 0xa */
  push32((uint32_t)(0xau));
  /* 11e0ff18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ff1b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11e0ff1e push ecx */
  push32((uint32_t)(ECX));
  /* 11e0ff1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11e0ff21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e0ff23 call 0x11e10030 */
  push32(0x11e0ff28u); f_11e10030();
  /* 11e0ff28 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e0ff2b:;
  /* 11e0ff2b mov edx, dword ptr [0x11e2f614] */
  EDX = (r32((uint32_t)(0x11e2f614)));
  /* 11e0ff31 cmp edx, dword ptr [0x11e2f624] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e2f624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ff37 jge 0x11e0ff84 */
  if ((C.sf==C.of)) goto L_11e0ff84;
  /* 11e0ff39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ff3c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11e0ff3f cmp ecx, dword ptr [0x11e2f614] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e2f614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ff45 jl 0x11e0ff55 */
  if ((C.sf!=C.of)) goto L_11e0ff55;
  /* 11e0ff47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ff4a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e0ff4d cmp eax, dword ptr [0x11e2f624] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e2f624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ff53 jle 0x11e0ff5c */
  if ((C.zf||C.sf!=C.of)) goto L_11e0ff5c;
L_11e0ff55:;
  /* 11e0ff55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ff57 jmp 0x11e10026 */
  goto L_11e10026;
L_11e0ff5c:;
  /* 11e0ff5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ff5f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11e0ff62 cmp edx, dword ptr [0x11e2f614] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e2f614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ff68 jle 0x11e0ff82 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0ff82;
  /* 11e0ff6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ff6d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11e0ff70 cmp ecx, dword ptr [0x11e2f624] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e2f624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ff76 jge 0x11e0ff82 */
  if ((C.sf==C.of)) goto L_11e0ff82;
  /* 11e0ff78 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0ff7d jmp 0x11e10026 */
  goto L_11e10026;
L_11e0ff82:;
  /* 11e0ff82 jmp 0x11e0ffc7 */
  goto L_11e0ffc7;
L_11e0ff84:;
  /* 11e0ff84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ff87 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e0ff8a cmp eax, dword ptr [0x11e2f624] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e2f624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ff90 jl 0x11e0ffa0 */
  if ((C.sf!=C.of)) goto L_11e0ffa0;
  /* 11e0ff92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ff95 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11e0ff98 cmp edx, dword ptr [0x11e2f614] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e2f614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ff9e jle 0x11e0ffa7 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0ffa7;
L_11e0ffa0:;
  /* 11e0ffa0 mov eax, 1 */
  EAX = (0x1u);
  /* 11e0ffa5 jmp 0x11e10026 */
  goto L_11e10026;
L_11e0ffa7:;
  /* 11e0ffa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ffaa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11e0ffad cmp ecx, dword ptr [0x11e2f624] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e2f624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ffb3 jle 0x11e0ffc7 */
  if ((C.zf||C.sf!=C.of)) goto L_11e0ffc7;
  /* 11e0ffb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ffb8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e0ffbb cmp eax, dword ptr [0x11e2f614] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e2f614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0ffc1 jge 0x11e0ffc7 */
  if ((C.sf==C.of)) goto L_11e0ffc7;
  /* 11e0ffc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e0ffc5 jmp 0x11e10026 */
  goto L_11e10026;
L_11e0ffc7:;
  /* 11e0ffc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ffca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11e0ffcd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0ffd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ffd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e0ffd5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ffd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0ffda mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e0ffdd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0ffe3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e0ffe5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e0ffeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e0ffee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e0fff1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11e0fff4 cmp edx, dword ptr [0x11e2f614] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11e2f614))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e0fffa jne 0x11e10012 */
  if (!C.zf) goto L_11e10012;
  /* 11e0fffc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e0ffff cmp eax, dword ptr [0x11e2f618] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e2f618))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10005 jl 0x11e1000e */
  if ((C.sf!=C.of)) goto L_11e1000e;
  /* 11e10007 mov eax, 1 */
  EAX = (0x1u);
  /* 11e1000c jmp 0x11e10026 */
  goto L_11e10026;
L_11e1000e:;
  /* 11e1000e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10010 jmp 0x11e10026 */
  goto L_11e10026;
L_11e10012:;
  /* 11e10012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10015 cmp ecx, dword ptr [0x11e2f628] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e2f628))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1001b jge 0x11e10024 */
  if ((C.sf==C.of)) goto L_11e10024;
  /* 11e1001d mov eax, 1 */
  EAX = (0x1u);
  /* 11e10022 jmp 0x11e10026 */
  goto L_11e10026;
L_11e10024:;
  /* 11e10024 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e10026:;
  /* 11e10026 mov esp, ebp */
  ESP = (EBP);
  /* 11e10028 pop ebp */
  EBP = (pop32());
  /* 11e10029 ret  */
  ESPCHK(0x11e0fd30u, _esp0);
  ESP += 4; return;
}

/* FUN_10020030 @ 0x11e10030 (504 bytes, 145 insns) */
void f_11e10030(void) {
  FTRACE(0x11e10030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e10030 push ebp */
  push32((uint32_t)(EBP));
  /* 11e10031 mov ebp, esp */
  EBP = (ESP);
  /* 11e10033 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10036 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1003a jne 0x11e1010c */
  if (!C.zf) goto L_11e1010c;
  /* 11e10040 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10043 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11e10046 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10048 jne 0x11e10059 */
  if (!C.zf) goto L_11e10059;
  /* 11e1004a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e1004d mov edx, dword ptr [ecx*4 + 0x11e2f62c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2f62c)));
  /* 11e10054 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e10057 jmp 0x11e10066 */
  goto L_11e10066;
L_11e10059:;
  /* 11e10059 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e1005c mov ecx, dword ptr [eax*4 + 0x11e2f660] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e2f660)));
  /* 11e10063 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11e10066:;
  /* 11e10066 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10069 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1006c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e1006f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10072 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10075 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e1007b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e1007e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10080 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10083 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10086 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 11e10089 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 11e1008d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e1008e mov ecx, 7 */
  ECX = (0x7u);
  /* 11e10093 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e10095 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e10098 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e1009b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1009e jge 0x11e100b9 */
  if ((C.sf==C.of)) goto L_11e100b9;
  /* 11e100a0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e100a3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e100a6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e100a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e100ac imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e100af add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e100b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e100b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e100b7 jmp 0x11e100cd */
  goto L_11e100cd;
L_11e100b9:;
  /* 11e100b9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e100bc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e100bf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e100c2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e100c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e100c8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e100ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e100cd:;
  /* 11e100cd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e100d1 jne 0x11e1010a */
  if (!C.zf) goto L_11e1010a;
  /* 11e100d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e100d6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11e100d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e100db jne 0x11e100ec */
  if (!C.zf) goto L_11e100ec;
  /* 11e100dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e100e0 mov eax, dword ptr [edx*4 + 0x11e2f630] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e2f630)));
  /* 11e100e7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e100ea jmp 0x11e100f9 */
  goto L_11e100f9;
L_11e100ec:;
  /* 11e100ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e100ef mov edx, dword ptr [ecx*4 + 0x11e2f664] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11e2f664)));
  /* 11e100f6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e100f9:;
  /* 11e100f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e100fc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e100ff jle 0x11e1010a */
  if ((C.zf||C.sf!=C.of)) goto L_11e1010a;
  /* 11e10101 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10104 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10107 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e1010a:;
  /* 11e1010a jmp 0x11e10141 */
  goto L_11e10141;
L_11e1010c:;
  /* 11e1010c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e1010f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11e10112 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e10114 jne 0x11e10125 */
  if (!C.zf) goto L_11e10125;
  /* 11e10116 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e10119 mov ecx, dword ptr [eax*4 + 0x11e2f62c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e2f62c)));
  /* 11e10120 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e10123 jmp 0x11e10132 */
  goto L_11e10132;
L_11e10125:;
  /* 11e10125 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e10128 mov eax, dword ptr [edx*4 + 0x11e2f660] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11e2f660)));
  /* 11e1012f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11e10132:;
  /* 11e10132 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e10135 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e10138 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e1013b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1013e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11e10141:;
  /* 11e10141 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10145 jne 0x11e10181 */
  if (!C.zf) goto L_11e10181;
  /* 11e10147 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e1014a mov dword ptr [0x11e2f614], eax */
  w32((uint32_t)(0x11e2f614), (EAX));
  /* 11e1014f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11e10152 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e10155 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11e10158 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1015a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e1015d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11e10160 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10162 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e10168 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11e1016b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1016d mov dword ptr [0x11e2f618], ecx */
  w32((uint32_t)(0x11e2f618), (ECX));
  /* 11e10173 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10176 mov dword ptr [0x11e2f610], edx */
  w32((uint32_t)(0x11e2f610), (EDX));
  /* 11e1017c jmp 0x11e10224 */
  goto L_11e10224;
L_11e10181:;
  /* 11e10181 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10184 mov dword ptr [0x11e2f624], eax */
  w32((uint32_t)(0x11e2f624), (EAX));
  /* 11e10189 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11e1018c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e1018f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11e10192 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10194 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e10197 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11e1019a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1019c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e101a2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 11e101a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e101a7 mov dword ptr [0x11e2f628], ecx */
  w32((uint32_t)(0x11e2f628), (ECX));
  /* 11e101ad mov edx, dword ptr [0x11e2f584] */
  EDX = (r32((uint32_t)(0x11e2f584)));
  /* 11e101b3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e101b9 mov eax, dword ptr [0x11e2f628] */
  EAX = (r32((uint32_t)(0x11e2f628)));
  /* 11e101be add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e101c0 mov dword ptr [0x11e2f628], eax */
  w32((uint32_t)(0x11e2f628), (EAX));
  /* 11e101c5 cmp dword ptr [0x11e2f628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e2f628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e101cc jge 0x11e101f1 */
  if ((C.sf==C.of)) goto L_11e101f1;
  /* 11e101ce mov ecx, dword ptr [0x11e2f628] */
  ECX = (r32((uint32_t)(0x11e2f628)));
  /* 11e101d4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e101da mov dword ptr [0x11e2f628], ecx */
  w32((uint32_t)(0x11e2f628), (ECX));
  /* 11e101e0 mov edx, dword ptr [0x11e2f624] */
  EDX = (r32((uint32_t)(0x11e2f624)));
  /* 11e101e6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e101e9 mov dword ptr [0x11e2f624], edx */
  w32((uint32_t)(0x11e2f624), (EDX));
  /* 11e101ef jmp 0x11e1021b */
  goto L_11e1021b;
L_11e101f1:;
  /* 11e101f1 cmp dword ptr [0x11e2f628], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11e2f628))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e101fb jl 0x11e1021b */
  if ((C.sf!=C.of)) goto L_11e1021b;
  /* 11e101fd mov eax, dword ptr [0x11e2f628] */
  EAX = (r32((uint32_t)(0x11e2f628)));
  /* 11e10202 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10207 mov dword ptr [0x11e2f628], eax */
  w32((uint32_t)(0x11e2f628), (EAX));
  /* 11e1020c mov ecx, dword ptr [0x11e2f624] */
  ECX = (r32((uint32_t)(0x11e2f624)));
  /* 11e10212 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10215 mov dword ptr [0x11e2f624], ecx */
  w32((uint32_t)(0x11e2f624), (ECX));
L_11e1021b:;
  /* 11e1021b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e1021e mov dword ptr [0x11e2f620], edx */
  w32((uint32_t)(0x11e2f620), (EDX));
L_11e10224:;
  /* 11e10224 mov esp, ebp */
  ESP = (EBP);
  /* 11e10226 pop ebp */
  EBP = (pop32());
  /* 11e10227 ret  */
  ESPCHK(0x11e10030u, _esp0);
  ESP += 4; return;
}

/* FUN_10020230 @ 0x11e10230 (382 bytes, 135 insns) */
void f_11e10230(void) {
  FTRACE(0x11e10230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e10230 push ebp */
  push32((uint32_t)(EBP));
  /* 11e10231 mov ebp, esp */
  EBP = (ESP);
  /* 11e10233 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e10235 push 0x11e2bcf0 */
  push32((uint32_t)(0x11e2bcf0u));
  /* 11e1023a push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11e1023f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e10245 push eax */
  push32((uint32_t)(EAX));
  /* 11e10246 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e1024d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10250 push ebx */
  push32((uint32_t)(EBX));
  /* 11e10251 push esi */
  push32((uint32_t)(ESI));
  /* 11e10252 push edi */
  push32((uint32_t)(EDI));
  /* 11e10253 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e10256 cmp dword ptr [0x11e3097c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e3097c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1025d jne 0x11e102a2 */
  if (!C.zf) goto L_11e102a2;
  /* 11e1025f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10261 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10263 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e10265 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10267 call dword ptr [0x11e33304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33304))), 0x11e1026du);
  /* 11e1026d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e1026f je 0x11e1027d */
  if (C.zf) goto L_11e1027d;
  /* 11e10271 mov dword ptr [0x11e3097c], 1 */
  w32((uint32_t)(0x11e3097c), (0x1u));
  /* 11e1027b jmp 0x11e102a2 */
  goto L_11e102a2;
L_11e1027d:;
  /* 11e1027d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1027f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10281 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e10283 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10285 call dword ptr [0x11e33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33320))), 0x11e1028bu);
  /* 11e1028b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e1028d je 0x11e1029b */
  if (C.zf) goto L_11e1029b;
  /* 11e1028f mov dword ptr [0x11e3097c], 2 */
  w32((uint32_t)(0x11e3097c), (0x2u));
  /* 11e10299 jmp 0x11e102a2 */
  goto L_11e102a2;
L_11e1029b:;
  /* 11e1029b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e1029d jmp 0x11e103b1 */
  goto L_11e103b1;
L_11e102a2:;
  /* 11e102a2 cmp dword ptr [0x11e3097c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e3097c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e102a9 jne 0x11e102c6 */
  if (!C.zf) goto L_11e102c6;
  /* 11e102ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e102ae push eax */
  push32((uint32_t)(EAX));
  /* 11e102af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e102b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e102b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e102b6 push edx */
  push32((uint32_t)(EDX));
  /* 11e102b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e102ba push eax */
  push32((uint32_t)(EAX));
  /* 11e102bb call dword ptr [0x11e33304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33304))), 0x11e102c1u);
  /* 11e102c1 jmp 0x11e103b1 */
  goto L_11e103b1;
L_11e102c6:;
  /* 11e102c6 cmp dword ptr [0x11e3097c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e3097c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e102cd jne 0x11e103af */
  if (!C.zf) goto L_11e103af;
  /* 11e102d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e102d7 jne 0x11e102e2 */
  if (!C.zf) goto L_11e102e2;
  /* 11e102d9 mov ecx, dword ptr [0x11e3083c] */
  ECX = (r32((uint32_t)(0x11e3083c)));
  /* 11e102df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11e102e2:;
  /* 11e102e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e102e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e102e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e102e9 push edx */
  push32((uint32_t)(EDX));
  /* 11e102ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e102ed push eax */
  push32((uint32_t)(EAX));
  /* 11e102ee call dword ptr [0x11e33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33320))), 0x11e102f4u);
  /* 11e102f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e102f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e102fb jne 0x11e10304 */
  if (!C.zf) goto L_11e10304;
  /* 11e102fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e102ff jmp 0x11e103b1 */
  goto L_11e103b1;
L_11e10304:;
  /* 11e10304 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e1030b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e1030e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10311 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e10313 call 0x11e01780 */
  push32(0x11e10318u); f_11e01780();
  /* 11e10318 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11e1031b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e1031e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e10321 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e10324 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e1032b jmp 0x11e10344 */
  goto L_11e10344;
  /* 11e1032d mov eax, 1 */
  EAX = (0x1u);
  /* 11e10332 ret  */
  ESPCHK(0x11e10230u, _esp0);
  ESP += 4; return;
  /* 11e10333 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e10336 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e1033d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e10344:;
  /* 11e10344 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10348 jne 0x11e1034e */
  if (!C.zf) goto L_11e1034e;
  /* 11e1034a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e1034c jmp 0x11e103b1 */
  goto L_11e103b1;
L_11e1034e:;
  /* 11e1034e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e10351 push edx */
  push32((uint32_t)(EDX));
  /* 11e10352 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e10355 push eax */
  push32((uint32_t)(EAX));
  /* 11e10356 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e10359 push ecx */
  push32((uint32_t)(ECX));
  /* 11e1035a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e1035d push edx */
  push32((uint32_t)(EDX));
  /* 11e1035e call dword ptr [0x11e33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33320))), 0x11e10364u);
  /* 11e10364 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10366 jne 0x11e1036c */
  if (!C.zf) goto L_11e1036c;
  /* 11e10368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e1036a jmp 0x11e103b1 */
  goto L_11e103b1;
L_11e1036c:;
  /* 11e1036c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10370 jne 0x11e1038d */
  if (!C.zf) goto L_11e1038d;
  /* 11e10372 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10374 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10376 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e10378 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e1037b push eax */
  push32((uint32_t)(EAX));
  /* 11e1037c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e1037e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e10381 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10382 call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e10388u);
  /* 11e10388 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e1038b jmp 0x11e103aa */
  goto L_11e103aa;
L_11e1038d:;
  /* 11e1038d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e10390 push edx */
  push32((uint32_t)(EDX));
  /* 11e10391 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10394 push eax */
  push32((uint32_t)(EAX));
  /* 11e10395 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e10397 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e1039a push ecx */
  push32((uint32_t)(ECX));
  /* 11e1039b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e1039d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e103a0 push edx */
  push32((uint32_t)(EDX));
  /* 11e103a1 call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e103a7u);
  /* 11e103a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e103aa:;
  /* 11e103aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e103ad jmp 0x11e103b1 */
  goto L_11e103b1;
L_11e103af:;
  /* 11e103af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e103b1:;
  /* 11e103b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11e103b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e103b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e103be pop edi */
  EDI = (pop32());
  /* 11e103bf pop esi */
  ESI = (pop32());
  /* 11e103c0 pop ebx */
  EBX = (pop32());
  /* 11e103c1 mov esp, ebp */
  ESP = (EBP);
  /* 11e103c3 pop ebp */
  EBP = (pop32());
  /* 11e103c4 ret  */
  ESPCHK(0x11e10230u, _esp0);
  ESP += 4; return;
}

/* FUN_100203d0 @ 0x11e103d0 (398 bytes, 140 insns) */
void f_11e103d0(void) {
  FTRACE(0x11e103d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e103d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e103d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e103d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e103d5 push 0x11e2bd00 */
  push32((uint32_t)(0x11e2bd00u));
  /* 11e103da push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11e103df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e103e5 push eax */
  push32((uint32_t)(EAX));
  /* 11e103e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e103ed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e103f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e103f1 push esi */
  push32((uint32_t)(ESI));
  /* 11e103f2 push edi */
  push32((uint32_t)(EDI));
  /* 11e103f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e103f6 cmp dword ptr [0x11e30980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e103fd jne 0x11e10442 */
  if (!C.zf) goto L_11e10442;
  /* 11e103ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10401 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10403 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e10405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10407 call dword ptr [0x11e33304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33304))), 0x11e1040du);
  /* 11e1040d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e1040f je 0x11e1041d */
  if (C.zf) goto L_11e1041d;
  /* 11e10411 mov dword ptr [0x11e30980], 1 */
  w32((uint32_t)(0x11e30980), (0x1u));
  /* 11e1041b jmp 0x11e10442 */
  goto L_11e10442;
L_11e1041d:;
  /* 11e1041d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1041f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10421 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e10423 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10425 call dword ptr [0x11e33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33320))), 0x11e1042bu);
  /* 11e1042b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e1042d je 0x11e1043b */
  if (C.zf) goto L_11e1043b;
  /* 11e1042f mov dword ptr [0x11e30980], 2 */
  w32((uint32_t)(0x11e30980), (0x2u));
  /* 11e10439 jmp 0x11e10442 */
  goto L_11e10442;
L_11e1043b:;
  /* 11e1043b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e1043d jmp 0x11e10561 */
  goto L_11e10561;
L_11e10442:;
  /* 11e10442 cmp dword ptr [0x11e30980], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e30980))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10449 jne 0x11e10466 */
  if (!C.zf) goto L_11e10466;
  /* 11e1044b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e1044e push eax */
  push32((uint32_t)(EAX));
  /* 11e1044f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10452 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10453 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e10456 push edx */
  push32((uint32_t)(EDX));
  /* 11e10457 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e1045a push eax */
  push32((uint32_t)(EAX));
  /* 11e1045b call dword ptr [0x11e33320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33320))), 0x11e10461u);
  /* 11e10461 jmp 0x11e10561 */
  goto L_11e10561;
L_11e10466:;
  /* 11e10466 cmp dword ptr [0x11e30980], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e30980))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1046d jne 0x11e1055f */
  if (!C.zf) goto L_11e1055f;
  /* 11e10473 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10477 jne 0x11e10482 */
  if (!C.zf) goto L_11e10482;
  /* 11e10479 mov ecx, dword ptr [0x11e3083c] */
  ECX = (r32((uint32_t)(0x11e3083c)));
  /* 11e1047f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11e10482:;
  /* 11e10482 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10484 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10486 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e10489 push edx */
  push32((uint32_t)(EDX));
  /* 11e1048a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e1048d push eax */
  push32((uint32_t)(EAX));
  /* 11e1048e call dword ptr [0x11e33304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33304))), 0x11e10494u);
  /* 11e10494 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e10497 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1049b jne 0x11e104a4 */
  if (!C.zf) goto L_11e104a4;
  /* 11e1049d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e1049f jmp 0x11e10561 */
  goto L_11e10561;
L_11e104a4:;
  /* 11e104a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e104ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e104ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e104b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e104b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e104b5 call 0x11e01780 */
  push32(0x11e104bau); f_11e01780();
  /* 11e104ba mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11e104bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e104c0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e104c3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e104c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e104cd jmp 0x11e104e6 */
  goto L_11e104e6;
  /* 11e104cf mov eax, 1 */
  EAX = (0x1u);
  /* 11e104d4 ret  */
  ESPCHK(0x11e103d0u, _esp0);
  ESP += 4; return;
  /* 11e104d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e104d8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e104df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e104e6:;
  /* 11e104e6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e104ea jne 0x11e104f0 */
  if (!C.zf) goto L_11e104f0;
  /* 11e104ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e104ee jmp 0x11e10561 */
  goto L_11e10561;
L_11e104f0:;
  /* 11e104f0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e104f3 push edx */
  push32((uint32_t)(EDX));
  /* 11e104f4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e104f7 push eax */
  push32((uint32_t)(EAX));
  /* 11e104f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e104fb push ecx */
  push32((uint32_t)(ECX));
  /* 11e104fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e104ff push edx */
  push32((uint32_t)(EDX));
  /* 11e10500 call dword ptr [0x11e33304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33304))), 0x11e10506u);
  /* 11e10506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10508 jne 0x11e1050e */
  if (!C.zf) goto L_11e1050e;
  /* 11e1050a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e1050c jmp 0x11e10561 */
  goto L_11e10561;
L_11e1050e:;
  /* 11e1050e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10512 jne 0x11e10536 */
  if (!C.zf) goto L_11e10536;
  /* 11e10514 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10516 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10518 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1051a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1051c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e1051e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e10521 push eax */
  push32((uint32_t)(EAX));
  /* 11e10522 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e10527 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e1052a push ecx */
  push32((uint32_t)(ECX));
  /* 11e1052b call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e10531u);
  /* 11e10531 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e10534 jmp 0x11e1055a */
  goto L_11e1055a;
L_11e10536:;
  /* 11e10536 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10538 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1053a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e1053d push edx */
  push32((uint32_t)(EDX));
  /* 11e1053e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10541 push eax */
  push32((uint32_t)(EAX));
  /* 11e10542 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e10544 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e10547 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10548 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e1054d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e10550 push edx */
  push32((uint32_t)(EDX));
  /* 11e10551 call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e10557u);
  /* 11e10557 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e1055a:;
  /* 11e1055a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e1055d jmp 0x11e10561 */
  goto L_11e10561;
L_11e1055f:;
  /* 11e1055f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e10561:;
  /* 11e10561 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11e10564 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e10567 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e1056e pop edi */
  EDI = (pop32());
  /* 11e1056f pop esi */
  ESI = (pop32());
  /* 11e10570 pop ebx */
  EBX = (pop32());
  /* 11e10571 mov esp, ebp */
  ESP = (EBP);
  /* 11e10573 pop ebp */
  EBP = (pop32());
  /* 11e10574 ret  */
  ESPCHK(0x11e103d0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11e10580 (52 bytes, 19 insns) */
void f_11e10580(void) {
  FTRACE(0x11e10580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e10580 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e10584 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11e10588 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11e1058a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11e1058e jne 0x11e10599 */
  if (!C.zf) goto L_11e10599;
  /* 11e10590 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11e10594 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e10596 ret 0x10 */
  ESPCHK(0x11e10580u, _esp0);
  ESP += 20; return;
L_11e10599:;
  /* 11e10599 push ebx */
  push32((uint32_t)(EBX));
  /* 11e1059a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e1059c mov ebx, eax */
  EBX = (EAX);
  /* 11e1059e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e105a2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e105a6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e105a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e105ac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11e105ae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e105b0 pop ebx */
  EBX = (pop32());
  /* 11e105b1 ret 0x10 */
  ESPCHK(0x11e10580u, _esp0);
  ESP += 20; return;
}

/* FUN_100205c0 @ 0x11e105c0 (46 bytes, 18 insns) */
void f_11e105c0(void) {
  FTRACE(0x11e105c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e105c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e105c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e105c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e105c4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e105c6 call 0x11dfbd50 */
  push32(0x11e105cbu); f_11dfbd50();
  /* 11e105cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e105ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e105d1 push eax */
  push32((uint32_t)(EAX));
  /* 11e105d2 call 0x11e105f0 */
  push32(0x11e105d7u); f_11e105f0();
  /* 11e105d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e105da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e105dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11e105df call 0x11dfbdf0 */
  push32(0x11e105e4u); f_11dfbdf0();
  /* 11e105e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e105e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e105ea mov esp, ebp */
  ESP = (EBP);
  /* 11e105ec pop ebp */
  EBP = (pop32());
  /* 11e105ed ret  */
  ESPCHK(0x11e105c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11e105f0 (198 bytes, 69 insns) */
void f_11e105f0(void) {
  FTRACE(0x11e105f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e105f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e105f1 mov ebp, esp */
  EBP = (ESP);
  /* 11e105f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e105f6 mov eax, dword ptr [0x11e306ac] */
  EAX = (r32((uint32_t)(0x11e306ac)));
  /* 11e105fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e105fe cmp dword ptr [0x11e32120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e32120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10605 jne 0x11e1060e */
  if (!C.zf) goto L_11e1060e;
  /* 11e10607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10609 jmp 0x11e106b2 */
  goto L_11e106b2;
L_11e1060e:;
  /* 11e1060e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10612 jne 0x11e10636 */
  if (!C.zf) goto L_11e10636;
  /* 11e10614 cmp dword ptr [0x11e306b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1061b je 0x11e10636 */
  if (C.zf) goto L_11e10636;
  /* 11e1061d call 0x11e10710 */
  push32(0x11e10622u); f_11e10710();
  /* 11e10622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10624 je 0x11e1062d */
  if (C.zf) goto L_11e1062d;
  /* 11e10626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10628 jmp 0x11e106b2 */
  goto L_11e106b2;
L_11e1062d:;
  /* 11e1062d mov ecx, dword ptr [0x11e306ac] */
  ECX = (r32((uint32_t)(0x11e306ac)));
  /* 11e10633 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e10636:;
  /* 11e10636 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1063a je 0x11e106b0 */
  if (C.zf) goto L_11e106b0;
  /* 11e1063c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10640 je 0x11e106b0 */
  if (C.zf) goto L_11e106b0;
  /* 11e10642 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10645 push edx */
  push32((uint32_t)(EDX));
  /* 11e10646 call 0x11e01410 */
  push32(0x11e1064bu); f_11e01410();
  /* 11e1064b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1064e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e10651:;
  /* 11e10651 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10654 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10657 je 0x11e106b0 */
  if (C.zf) goto L_11e106b0;
  /* 11e10659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e1065c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e1065e push edx */
  push32((uint32_t)(EDX));
  /* 11e1065f call 0x11e01410 */
  push32(0x11e10664u); f_11e01410();
  /* 11e10664 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10667 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1066a jbe 0x11e106a5 */
  if ((C.cf||C.zf)) goto L_11e106a5;
  /* 11e1066c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e1066f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e10671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10674 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11e10678 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1067b jne 0x11e106a5 */
  if (!C.zf) goto L_11e106a5;
  /* 11e1067d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10680 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10684 push edx */
  push32((uint32_t)(EDX));
  /* 11e10685 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10688 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e1068a push ecx */
  push32((uint32_t)(ECX));
  /* 11e1068b call 0x11e106c0 */
  push32(0x11e10690u); f_11e106c0();
  /* 11e10690 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10695 jne 0x11e106a5 */
  if (!C.zf) goto L_11e106a5;
  /* 11e10697 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e1069a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e1069c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e1069f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11e106a3 jmp 0x11e106b2 */
  goto L_11e106b2;
L_11e106a5:;
  /* 11e106a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e106a8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e106ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e106ae jmp 0x11e10651 */
  goto L_11e10651;
L_11e106b0:;
  /* 11e106b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e106b2:;
  /* 11e106b2 mov esp, ebp */
  ESP = (EBP);
  /* 11e106b4 pop ebp */
  EBP = (pop32());
  /* 11e106b5 ret  */
  ESPCHK(0x11e105f0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11e106c0 (79 bytes, 32 insns) */
void f_11e106c0(void) {
  FTRACE(0x11e106c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e106c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e106c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e106c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e106c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e106c8 jne 0x11e106ce */
  if (!C.zf) goto L_11e106ce;
  /* 11e106ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e106cc jmp 0x11e1070b */
  goto L_11e1070b;
L_11e106ce:;
  /* 11e106ce mov eax, dword ptr [0x11e309b0] */
  EAX = (r32((uint32_t)(0x11e309b0)));
  /* 11e106d3 push eax */
  push32((uint32_t)(EAX));
  /* 11e106d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e106d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e106d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e106db push edx */
  push32((uint32_t)(EDX));
  /* 11e106dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e106df push eax */
  push32((uint32_t)(EAX));
  /* 11e106e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e106e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e106e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e106e6 mov edx, dword ptr [0x11e30c44] */
  EDX = (r32((uint32_t)(0x11e30c44)));
  /* 11e106ec push edx */
  push32((uint32_t)(EDX));
  /* 11e106ed call 0x11e107c0 */
  push32(0x11e106f2u); f_11e107c0();
  /* 11e106f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e106f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e106f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e106fc jne 0x11e10705 */
  if (!C.zf) goto L_11e10705;
  /* 11e106fe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11e10703 jmp 0x11e1070b */
  goto L_11e1070b;
L_11e10705:;
  /* 11e10705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10708 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11e1070b:;
  /* 11e1070b mov esp, ebp */
  ESP = (EBP);
  /* 11e1070d pop ebp */
  EBP = (pop32());
  /* 11e1070e ret  */
  ESPCHK(0x11e106c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020710 @ 0x11e10710 (174 bytes, 66 insns) */
void f_11e10710(void) {
  FTRACE(0x11e10710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e10710 push ebp */
  push32((uint32_t)(EBP));
  /* 11e10711 mov ebp, esp */
  EBP = (ESP);
  /* 11e10713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10716 mov eax, dword ptr [0x11e306b4] */
  EAX = (r32((uint32_t)(0x11e306b4)));
  /* 11e1071b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e1071e:;
  /* 11e1071e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10721 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10724 je 0x11e107b8 */
  if (C.zf) goto L_11e107b8;
  /* 11e1072a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1072c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1072e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10730 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10732 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e10734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10737 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e10739 push eax */
  push32((uint32_t)(EAX));
  /* 11e1073a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1073c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e1073e call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e10744u);
  /* 11e10744 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e10747 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1074b jne 0x11e10752 */
  if (!C.zf) goto L_11e10752;
  /* 11e1074d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e10750 jmp 0x11e107ba */
  goto L_11e107ba;
L_11e10752:;
  /* 11e10752 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11e10754 push 0x11e2bd0c */
  push32((uint32_t)(0x11e2bd0cu));
  /* 11e10759 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e1075b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e1075e push ecx */
  push32((uint32_t)(ECX));
  /* 11e1075f call 0x11dfbe50 */
  push32(0x11e10764u); f_11dfbe50();
  /* 11e10764 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10767 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e1076a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1076e jne 0x11e10775 */
  if (!C.zf) goto L_11e10775;
  /* 11e10770 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e10773 jmp 0x11e107ba */
  goto L_11e107ba;
L_11e10775:;
  /* 11e10775 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10777 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10779 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e1077c push edx */
  push32((uint32_t)(EDX));
  /* 11e1077d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10780 push eax */
  push32((uint32_t)(EAX));
  /* 11e10781 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e10783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10786 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e10788 push edx */
  push32((uint32_t)(EDX));
  /* 11e10789 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1078b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e1078d call dword ptr [0x11e33390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33390))), 0x11e10793u);
  /* 11e10793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10795 jne 0x11e1079c */
  if (!C.zf) goto L_11e1079c;
  /* 11e10797 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e1079a jmp 0x11e107ba */
  goto L_11e107ba;
L_11e1079c:;
  /* 11e1079c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1079e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e107a1 push eax */
  push32((uint32_t)(EAX));
  /* 11e107a2 call 0x11e10c10 */
  push32(0x11e107a7u); f_11e10c10();
  /* 11e107a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e107aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e107ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e107b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e107b3 jmp 0x11e1071e */
  goto L_11e1071e;
L_11e107b8:;
  /* 11e107b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e107ba:;
  /* 11e107ba mov esp, ebp */
  ESP = (EBP);
  /* 11e107bc pop ebp */
  EBP = (pop32());
  /* 11e107bd ret  */
  ESPCHK(0x11e10710u, _esp0);
  ESP += 4; return;
}

/* FUN_100207c0 @ 0x11e107c0 (970 bytes, 340 insns) */
void f_11e107c0(void) {
  FTRACE(0x11e107c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e107c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e107c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e107c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e107c5 push 0x11e2bd60 */
  push32((uint32_t)(0x11e2bd60u));
  /* 11e107ca push 0x11e059ac */
  push32((uint32_t)(0x11e059acu));
  /* 11e107cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e107d5 push eax */
  push32((uint32_t)(EAX));
  /* 11e107d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e107dd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e107e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e107e1 push esi */
  push32((uint32_t)(ESI));
  /* 11e107e2 push edi */
  push32((uint32_t)(EDI));
  /* 11e107e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e107e6 cmp dword ptr [0x11e30984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e107ed jne 0x11e10846 */
  if (!C.zf) goto L_11e10846;
  /* 11e107ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11e107f1 push 0x11e2b3b0 */
  push32((uint32_t)(0x11e2b3b0u));
  /* 11e107f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e107f8 push 0x11e2b3b0 */
  push32((uint32_t)(0x11e2b3b0u));
  /* 11e107fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11e107ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10801 call dword ptr [0x11e332fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332fc))), 0x11e10807u);
  /* 11e10807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10809 je 0x11e10817 */
  if (C.zf) goto L_11e10817;
  /* 11e1080b mov dword ptr [0x11e30984], 1 */
  w32((uint32_t)(0x11e30984), (0x1u));
  /* 11e10815 jmp 0x11e10846 */
  goto L_11e10846;
L_11e10817:;
  /* 11e10817 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e10819 push 0x11e2b3ac */
  push32((uint32_t)(0x11e2b3acu));
  /* 11e1081e push 1 */
  push32((uint32_t)(0x1u));
  /* 11e10820 push 0x11e2b3ac */
  push32((uint32_t)(0x11e2b3acu));
  /* 11e10825 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10827 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10829 call dword ptr [0x11e33300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33300))), 0x11e1082fu);
  /* 11e1082f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10831 je 0x11e1083f */
  if (C.zf) goto L_11e1083f;
  /* 11e10833 mov dword ptr [0x11e30984], 2 */
  w32((uint32_t)(0x11e30984), (0x2u));
  /* 11e1083d jmp 0x11e10846 */
  goto L_11e10846;
L_11e1083f:;
  /* 11e1083f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10841 jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10846:;
  /* 11e10846 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1084a jle 0x11e1085f */
  if ((C.zf||C.sf!=C.of)) goto L_11e1085f;
  /* 11e1084c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e1084f push eax */
  push32((uint32_t)(EAX));
  /* 11e10850 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10853 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10854 call 0x11e10bc0 */
  push32(0x11e10859u); f_11e10bc0();
  /* 11e10859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1085c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11e1085f:;
  /* 11e1085f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10863 jle 0x11e10878 */
  if ((C.zf||C.sf!=C.of)) goto L_11e10878;
  /* 11e10865 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e10868 push edx */
  push32((uint32_t)(EDX));
  /* 11e10869 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e1086c push eax */
  push32((uint32_t)(EAX));
  /* 11e1086d call 0x11e10bc0 */
  push32(0x11e10872u); f_11e10bc0();
  /* 11e10872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10875 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11e10878:;
  /* 11e10878 cmp dword ptr [0x11e30984], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e30984))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1087f jne 0x11e108a4 */
  if (!C.zf) goto L_11e108a4;
  /* 11e10881 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e10884 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10885 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e10888 push edx */
  push32((uint32_t)(EDX));
  /* 11e10889 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e1088c push eax */
  push32((uint32_t)(EAX));
  /* 11e1088d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10890 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10891 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e10894 push edx */
  push32((uint32_t)(EDX));
  /* 11e10895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10898 push eax */
  push32((uint32_t)(EAX));
  /* 11e10899 call dword ptr [0x11e33300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33300))), 0x11e1089fu);
  /* 11e1089f jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e108a4:;
  /* 11e108a4 cmp dword ptr [0x11e30984], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e30984))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e108ab jne 0x11e10ba2 */
  if (!C.zf) goto L_11e10ba2;
  /* 11e108b1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e108b5 jne 0x11e108c0 */
  if (!C.zf) goto L_11e108c0;
  /* 11e108b7 mov ecx, dword ptr [0x11e3083c] */
  ECX = (r32((uint32_t)(0x11e3083c)));
  /* 11e108bd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11e108c0:;
  /* 11e108c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e108c4 je 0x11e108d0 */
  if (C.zf) goto L_11e108d0;
  /* 11e108c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e108ca jne 0x11e10a4c */
  if (!C.zf) goto L_11e10a4c;
L_11e108d0:;
  /* 11e108d0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e108d3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e108d6 jne 0x11e108e2 */
  if (!C.zf) goto L_11e108e2;
  /* 11e108d8 mov eax, 2 */
  EAX = (0x2u);
  /* 11e108dd jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e108e2:;
  /* 11e108e2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e108e6 jle 0x11e108f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11e108f2;
  /* 11e108e8 mov eax, 1 */
  EAX = (0x1u);
  /* 11e108ed jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e108f2:;
  /* 11e108f2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e108f6 jle 0x11e10902 */
  if ((C.zf||C.sf!=C.of)) goto L_11e10902;
  /* 11e108f8 mov eax, 3 */
  EAX = (0x3u);
  /* 11e108fd jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10902:;
  /* 11e10902 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11e10905 push eax */
  push32((uint32_t)(EAX));
  /* 11e10906 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e10909 push ecx */
  push32((uint32_t)(ECX));
  /* 11e1090a call dword ptr [0x11e33354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33354))), 0x11e10910u);
  /* 11e10910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10912 jne 0x11e1091b */
  if (!C.zf) goto L_11e1091b;
  /* 11e10914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10916 jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e1091b:;
  /* 11e1091b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1091f jne 0x11e10927 */
  if (!C.zf) goto L_11e10927;
  /* 11e10921 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10925 je 0x11e10954 */
  if (C.zf) goto L_11e10954;
L_11e10927:;
  /* 11e10927 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1092b jne 0x11e10933 */
  if (!C.zf) goto L_11e10933;
  /* 11e1092d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10931 je 0x11e10954 */
  if (C.zf) goto L_11e10954;
L_11e10933:;
  /* 11e10933 push 0x11e2bd20 */
  push32((uint32_t)(0x11e2bd20u));
  /* 11e10938 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e1093a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11e1093f push 0x11e2bd18 */
  push32((uint32_t)(0x11e2bd18u));
  /* 11e10944 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10946 call 0x11dfaa10 */
  push32(0x11e1094bu); f_11dfaa10();
  /* 11e1094b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1094e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10951 jne 0x11e10954 */
  if (!C.zf) goto L_11e10954;
  /* 11e10953 int3  */
  x86_unimpl("int3 @ 0x11e10953");
L_11e10954:;
  /* 11e10954 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e10956 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e10958 jne 0x11e1091b */
  if (!C.zf) goto L_11e1091b;
  /* 11e1095a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1095e jle 0x11e109d3 */
  if ((C.zf||C.sf!=C.of)) goto L_11e109d3;
  /* 11e10960 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10964 jae 0x11e10970 */
  if (!C.cf) goto L_11e10970;
  /* 11e10966 mov eax, 3 */
  EAX = (0x3u);
  /* 11e1096b jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10970:;
  /* 11e10970 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11e10973 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11e10976 jmp 0x11e10981 */
  goto L_11e10981;
L_11e10978:;
  /* 11e10978 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e1097b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1097e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11e10981:;
  /* 11e10981 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e10984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10986 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e10988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e1098a je 0x11e109c9 */
  if (C.zf) goto L_11e109c9;
  /* 11e1098c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e1098f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e10991 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11e10994 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e10996 je 0x11e109c9 */
  if (C.zf) goto L_11e109c9;
  /* 11e10998 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e1099b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e1099d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e1099f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e109a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e109a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e109a6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e109a8 jl 0x11e109c7 */
  if ((C.sf!=C.of)) goto L_11e109c7;
  /* 11e109aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e109ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e109af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e109b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e109b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e109b6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e109b9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e109bb jg 0x11e109c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e109c7;
  /* 11e109bd mov eax, 2 */
  EAX = (0x2u);
  /* 11e109c2 jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e109c7:;
  /* 11e109c7 jmp 0x11e10978 */
  goto L_11e10978;
L_11e109c9:;
  /* 11e109c9 mov eax, 3 */
  EAX = (0x3u);
  /* 11e109ce jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e109d3:;
  /* 11e109d3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e109d7 jle 0x11e10a4c */
  if ((C.zf||C.sf!=C.of)) goto L_11e10a4c;
  /* 11e109d9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e109dd jae 0x11e109e9 */
  if (!C.cf) goto L_11e109e9;
  /* 11e109df mov eax, 1 */
  EAX = (0x1u);
  /* 11e109e4 jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e109e9:;
  /* 11e109e9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11e109ec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11e109ef jmp 0x11e109fa */
  goto L_11e109fa;
L_11e109f1:;
  /* 11e109f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e109f4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e109f7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11e109fa:;
  /* 11e109fa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e109fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e109ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e10a01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e10a03 je 0x11e10a42 */
  if (C.zf) goto L_11e10a42;
  /* 11e10a05 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e10a08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e10a0a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11e10a0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e10a0f je 0x11e10a42 */
  if (C.zf) goto L_11e10a42;
  /* 11e10a11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e10a14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10a16 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e10a18 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e10a1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e10a1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e10a1f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10a21 jl 0x11e10a40 */
  if ((C.sf!=C.of)) goto L_11e10a40;
  /* 11e10a23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e10a26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e10a28 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e10a2a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11e10a2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10a2f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11e10a32 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10a34 jg 0x11e10a40 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e10a40;
  /* 11e10a36 mov eax, 2 */
  EAX = (0x2u);
  /* 11e10a3b jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10a40:;
  /* 11e10a40 jmp 0x11e109f1 */
  goto L_11e109f1;
L_11e10a42:;
  /* 11e10a42 mov eax, 1 */
  EAX = (0x1u);
  /* 11e10a47 jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10a4c:;
  /* 11e10a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10a50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e10a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10a54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10a57 push edx */
  push32((uint32_t)(EDX));
  /* 11e10a58 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e10a5a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e10a5d push eax */
  push32((uint32_t)(EAX));
  /* 11e10a5e call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e10a64u);
  /* 11e10a64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e10a67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10a6b jne 0x11e10a74 */
  if (!C.zf) goto L_11e10a74;
  /* 11e10a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10a6f jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10a74:;
  /* 11e10a74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e10a7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e10a7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e10a80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10a83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e10a85 call 0x11e01780 */
  push32(0x11e10a8au); f_11e01780();
  /* 11e10a8a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11e10a8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e10a90 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11e10a93 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e10a96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e10a9d jmp 0x11e10ab6 */
  goto L_11e10ab6;
  /* 11e10a9f mov eax, 1 */
  EAX = (0x1u);
  /* 11e10aa4 ret  */
  ESPCHK(0x11e107c0u, _esp0);
  ESP += 4; return;
  /* 11e10aa5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e10aa8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e10aaf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e10ab6:;
  /* 11e10ab6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10aba jne 0x11e10ac3 */
  if (!C.zf) goto L_11e10ac3;
  /* 11e10abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10abe jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10ac3:;
  /* 11e10ac3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e10ac6 push edx */
  push32((uint32_t)(EDX));
  /* 11e10ac7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e10aca push eax */
  push32((uint32_t)(EAX));
  /* 11e10acb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e10ace push ecx */
  push32((uint32_t)(ECX));
  /* 11e10acf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e10ad2 push edx */
  push32((uint32_t)(EDX));
  /* 11e10ad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e10ad5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e10ad8 push eax */
  push32((uint32_t)(EAX));
  /* 11e10ad9 call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e10adfu);
  /* 11e10adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10ae1 jne 0x11e10aea */
  if (!C.zf) goto L_11e10aea;
  /* 11e10ae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10ae5 jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10aea:;
  /* 11e10aea push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10aec push 0 */
  push32((uint32_t)(0x0u));
  /* 11e10aee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e10af1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10af2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e10af5 push edx */
  push32((uint32_t)(EDX));
  /* 11e10af6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11e10af8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e10afb push eax */
  push32((uint32_t)(EAX));
  /* 11e10afc call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e10b02u);
  /* 11e10b02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e10b05 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10b09 jne 0x11e10b12 */
  if (!C.zf) goto L_11e10b12;
  /* 11e10b0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10b0d jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10b12:;
  /* 11e10b12 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e10b19 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e10b1c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e10b1e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10b21 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e10b23 call 0x11e01780 */
  push32(0x11e10b28u); f_11e01780();
  /* 11e10b28 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11e10b2b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e10b2e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11e10b31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11e10b34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e10b3b jmp 0x11e10b54 */
  goto L_11e10b54;
  /* 11e10b3d mov eax, 1 */
  EAX = (0x1u);
  /* 11e10b42 ret  */
  ESPCHK(0x11e107c0u, _esp0);
  ESP += 4; return;
  /* 11e10b43 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e10b46 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11e10b4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e10b54:;
  /* 11e10b54 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10b58 jne 0x11e10b5e */
  if (!C.zf) goto L_11e10b5e;
  /* 11e10b5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10b5c jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10b5e:;
  /* 11e10b5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e10b61 push edx */
  push32((uint32_t)(EDX));
  /* 11e10b62 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e10b65 push eax */
  push32((uint32_t)(EAX));
  /* 11e10b66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e10b69 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10b6a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e10b6d push edx */
  push32((uint32_t)(EDX));
  /* 11e10b6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11e10b70 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11e10b73 push eax */
  push32((uint32_t)(EAX));
  /* 11e10b74 call dword ptr [0x11e33344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e33344))), 0x11e10b7au);
  /* 11e10b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10b7c jne 0x11e10b82 */
  if (!C.zf) goto L_11e10b82;
  /* 11e10b7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10b80 jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10b82:;
  /* 11e10b82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e10b85 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10b86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e10b89 push edx */
  push32((uint32_t)(EDX));
  /* 11e10b8a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e10b8d push eax */
  push32((uint32_t)(EAX));
  /* 11e10b8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e10b91 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10b92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e10b95 push edx */
  push32((uint32_t)(EDX));
  /* 11e10b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10b99 push eax */
  push32((uint32_t)(EAX));
  /* 11e10b9a call dword ptr [0x11e332fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332fc))), 0x11e10ba0u);
  /* 11e10ba0 jmp 0x11e10ba4 */
  goto L_11e10ba4;
L_11e10ba2:;
  /* 11e10ba2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e10ba4:;
  /* 11e10ba4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11e10ba7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e10baa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e10bb1 pop edi */
  EDI = (pop32());
  /* 11e10bb2 pop esi */
  ESI = (pop32());
  /* 11e10bb3 pop ebx */
  EBX = (pop32());
  /* 11e10bb4 mov esp, ebp */
  ESP = (EBP);
  /* 11e10bb6 pop ebp */
  EBP = (pop32());
  /* 11e10bb7 ret  */
  ESPCHK(0x11e107c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020bc0 @ 0x11e10bc0 (80 bytes, 32 insns) */
void f_11e10bc0(void) {
  FTRACE(0x11e10bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e10bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e10bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11e10bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10bc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e10bc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e10bcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10bcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e10bd2:;
  /* 11e10bd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10bd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10bd8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10bdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e10bde test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e10be0 je 0x11e10bf7 */
  if (C.zf) goto L_11e10bf7;
  /* 11e10be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10be5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e10be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e10bea je 0x11e10bf7 */
  if (C.zf) goto L_11e10bf7;
  /* 11e10bec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10bef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10bf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e10bf5 jmp 0x11e10bd2 */
  goto L_11e10bd2;
L_11e10bf7:;
  /* 11e10bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10bfa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e10bfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e10bff jne 0x11e10c09 */
  if (!C.zf) goto L_11e10c09;
  /* 11e10c01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10c04 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10c07 jmp 0x11e10c0c */
  goto L_11e10c0c;
L_11e10c09:;
  /* 11e10c09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11e10c0c:;
  /* 11e10c0c mov esp, ebp */
  ESP = (EBP);
  /* 11e10c0e pop ebp */
  EBP = (pop32());
  /* 11e10c0f ret  */
  ESPCHK(0x11e10bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10020c10 @ 0x11e10c10 (736 bytes, 224 insns) */
void f_11e10c10(void) {
  FTRACE(0x11e10c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e10c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e10c11 mov ebp, esp */
  EBP = (ESP);
  /* 11e10c13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10c16 push esi */
  push32((uint32_t)(ESI));
  /* 11e10c17 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10c1b je 0x11e10c3c */
  if (C.zf) goto L_11e10c3c;
  /* 11e10c1d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11e10c1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10c22 push eax */
  push32((uint32_t)(EAX));
  /* 11e10c23 call 0x11e11060 */
  push32(0x11e10c28u); f_11e11060();
  /* 11e10c28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10c2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e10c2e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10c32 je 0x11e10c3c */
  if (C.zf) goto L_11e10c3c;
  /* 11e10c34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10c37 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10c3a jne 0x11e10c44 */
  if (!C.zf) goto L_11e10c44;
L_11e10c3c:;
  /* 11e10c3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e10c3f jmp 0x11e10eeb */
  goto L_11e10eeb;
L_11e10c44:;
  /* 11e10c44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e10c47 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11e10c4b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e10c4d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10c4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11e10c50 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e10c53 mov ecx, dword ptr [0x11e306ac] */
  ECX = (r32((uint32_t)(0x11e306ac)));
  /* 11e10c59 cmp ecx, dword ptr [0x11e306b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11e306b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10c5f jne 0x11e10c75 */
  if (!C.zf) goto L_11e10c75;
  /* 11e10c61 mov edx, dword ptr [0x11e306ac] */
  EDX = (r32((uint32_t)(0x11e306ac)));
  /* 11e10c67 push edx */
  push32((uint32_t)(EDX));
  /* 11e10c68 call 0x11e10f70 */
  push32(0x11e10c6du); f_11e10f70();
  /* 11e10c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10c70 mov dword ptr [0x11e306ac], eax */
  w32((uint32_t)(0x11e306ac), (EAX));
L_11e10c75:;
  /* 11e10c75 cmp dword ptr [0x11e306ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10c7c jne 0x11e10d35 */
  if (!C.zf) goto L_11e10d35;
  /* 11e10c82 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10c86 je 0x11e10ca7 */
  if (C.zf) goto L_11e10ca7;
  /* 11e10c88 cmp dword ptr [0x11e306b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10c8f je 0x11e10ca7 */
  if (C.zf) goto L_11e10ca7;
  /* 11e10c91 call 0x11e10710 */
  push32(0x11e10c96u); f_11e10710();
  /* 11e10c96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10c98 je 0x11e10ca2 */
  if (C.zf) goto L_11e10ca2;
  /* 11e10c9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e10c9d jmp 0x11e10eeb */
  goto L_11e10eeb;
L_11e10ca2:;
  /* 11e10ca2 jmp 0x11e10d35 */
  goto L_11e10d35;
L_11e10ca7:;
  /* 11e10ca7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10cab je 0x11e10cb4 */
  if (C.zf) goto L_11e10cb4;
  /* 11e10cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10caf jmp 0x11e10eeb */
  goto L_11e10eeb;
L_11e10cb4:;
  /* 11e10cb4 cmp dword ptr [0x11e306ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10cbb jne 0x11e10cf4 */
  if (!C.zf) goto L_11e10cf4;
  /* 11e10cbd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11e10cc2 push 0x11e2bd78 */
  push32((uint32_t)(0x11e2bd78u));
  /* 11e10cc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10cc9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e10ccb call 0x11dfbe50 */
  push32(0x11e10cd0u); f_11dfbe50();
  /* 11e10cd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10cd3 mov dword ptr [0x11e306ac], eax */
  w32((uint32_t)(0x11e306ac), (EAX));
  /* 11e10cd8 cmp dword ptr [0x11e306ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10cdf jne 0x11e10ce9 */
  if (!C.zf) goto L_11e10ce9;
  /* 11e10ce1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e10ce4 jmp 0x11e10eeb */
  goto L_11e10eeb;
L_11e10ce9:;
  /* 11e10ce9 mov eax, dword ptr [0x11e306ac] */
  EAX = (r32((uint32_t)(0x11e306ac)));
  /* 11e10cee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11e10cf4:;
  /* 11e10cf4 cmp dword ptr [0x11e306b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10cfb jne 0x11e10d35 */
  if (!C.zf) goto L_11e10d35;
  /* 11e10cfd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11e10d02 push 0x11e2bd78 */
  push32((uint32_t)(0x11e2bd78u));
  /* 11e10d07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10d09 push 4 */
  push32((uint32_t)(0x4u));
  /* 11e10d0b call 0x11dfbe50 */
  push32(0x11e10d10u); f_11dfbe50();
  /* 11e10d10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10d13 mov dword ptr [0x11e306b4], eax */
  w32((uint32_t)(0x11e306b4), (EAX));
  /* 11e10d18 cmp dword ptr [0x11e306b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e306b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10d1f jne 0x11e10d29 */
  if (!C.zf) goto L_11e10d29;
  /* 11e10d21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e10d24 jmp 0x11e10eeb */
  goto L_11e10eeb;
L_11e10d29:;
  /* 11e10d29 mov ecx, dword ptr [0x11e306b4] */
  ECX = (r32((uint32_t)(0x11e306b4)));
  /* 11e10d2f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11e10d35:;
  /* 11e10d35 mov edx, dword ptr [0x11e306ac] */
  EDX = (r32((uint32_t)(0x11e306ac)));
  /* 11e10d3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e10d3e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e10d41 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10d44 push eax */
  push32((uint32_t)(EAX));
  /* 11e10d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10d48 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10d49 call 0x11e10ef0 */
  push32(0x11e10d4eu); f_11e10ef0();
  /* 11e10d4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10d51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e10d54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10d58 jl 0x11e10df1 */
  if ((C.sf!=C.of)) goto L_11e10df1;
  /* 11e10d5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10d61 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10d64 je 0x11e10df1 */
  if (C.zf) goto L_11e10df1;
  /* 11e10d6a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10d6e je 0x11e10de3 */
  if (C.zf) goto L_11e10de3;
  /* 11e10d70 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10d72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10d75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10d78 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e10d7b push edx */
  push32((uint32_t)(EDX));
  /* 11e10d7c call 0x11dfc8e0 */
  push32(0x11e10d81u); f_11dfc8e0();
  /* 11e10d81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10d84 jmp 0x11e10d8f */
  goto L_11e10d8f;
L_11e10d86:;
  /* 11e10d86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10d89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10d8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e10d8f:;
  /* 11e10d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10d92 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10d95 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10d99 je 0x11e10db0 */
  if (C.zf) goto L_11e10db0;
  /* 11e10d9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10d9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10da1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10da4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10da7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11e10dab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11e10dae jmp 0x11e10d86 */
  goto L_11e10d86;
L_11e10db0:;
  /* 11e10db0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11e10db5 push 0x11e2bd78 */
  push32((uint32_t)(0x11e2bd78u));
  /* 11e10dba push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10dbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10dbf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e10dc2 push eax */
  push32((uint32_t)(EAX));
  /* 11e10dc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10dc7 call 0x11dfc2e0 */
  push32(0x11e10dccu); f_11dfc2e0();
  /* 11e10dcc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10dcf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e10dd2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10dd6 je 0x11e10de1 */
  if (C.zf) goto L_11e10de1;
  /* 11e10dd8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10ddb mov dword ptr [0x11e306ac], edx */
  w32((uint32_t)(0x11e306ac), (EDX));
L_11e10de1:;
  /* 11e10de1 jmp 0x11e10def */
  goto L_11e10def;
L_11e10de3:;
  /* 11e10de3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10de6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10de9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10dec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11e10def:;
  /* 11e10def jmp 0x11e10e64 */
  goto L_11e10e64;
L_11e10df1:;
  /* 11e10df1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10df5 jne 0x11e10e5d */
  if (!C.zf) goto L_11e10e5d;
  /* 11e10df7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10dfb jge 0x11e10e05 */
  if ((C.sf==C.of)) goto L_11e10e05;
  /* 11e10dfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10e00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e10e02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e10e05:;
  /* 11e10e05 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11e10e0a push 0x11e2bd78 */
  push32((uint32_t)(0x11e2bd78u));
  /* 11e10e0f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10e11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10e14 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11e10e1b push edx */
  push32((uint32_t)(EDX));
  /* 11e10e1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10e1f push eax */
  push32((uint32_t)(EAX));
  /* 11e10e20 call 0x11dfc2e0 */
  push32(0x11e10e25u); f_11dfc2e0();
  /* 11e10e25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10e28 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e10e2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10e2f jne 0x11e10e39 */
  if (!C.zf) goto L_11e10e39;
  /* 11e10e31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e10e34 jmp 0x11e10eeb */
  goto L_11e10eeb;
L_11e10e39:;
  /* 11e10e39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10e3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10e3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10e42 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11e10e45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10e48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10e4b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11e10e53 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10e56 mov dword ptr [0x11e306ac], eax */
  w32((uint32_t)(0x11e306ac), (EAX));
  /* 11e10e5b jmp 0x11e10e64 */
  goto L_11e10e64;
L_11e10e5d:;
  /* 11e10e5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10e5f jmp 0x11e10eeb */
  goto L_11e10eeb;
L_11e10e64:;
  /* 11e10e64 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10e68 je 0x11e10ee9 */
  if (C.zf) goto L_11e10ee9;
  /* 11e10e6a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11e10e6f push 0x11e2bd78 */
  push32((uint32_t)(0x11e2bd78u));
  /* 11e10e74 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10e76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10e79 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10e7a call 0x11e01410 */
  push32(0x11e10e7fu); f_11e01410();
  /* 11e10e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10e82 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10e85 push eax */
  push32((uint32_t)(EAX));
  /* 11e10e86 call 0x11dfbe50 */
  push32(0x11e10e8bu); f_11dfbe50();
  /* 11e10e8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10e8e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e10e91 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10e95 je 0x11e10ee9 */
  if (C.zf) goto L_11e10ee9;
  /* 11e10e97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10e9a push edx */
  push32((uint32_t)(EDX));
  /* 11e10e9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e10e9e push eax */
  push32((uint32_t)(EAX));
  /* 11e10e9f call 0x11e01590 */
  push32(0x11e10ea4u); f_11e01590();
  /* 11e10ea4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10ea7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e10eaa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10ead mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e10eb0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10eb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e10eb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10eb8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e10ebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10ebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10ec1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e10ec4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e10ec7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e10ec9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10ecb not edx */
  EDX = (~(EDX));
  /* 11e10ecd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11e10ed0 push edx */
  push32((uint32_t)(EDX));
  /* 11e10ed1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e10ed4 push eax */
  push32((uint32_t)(EAX));
  /* 11e10ed5 call dword ptr [0x11e332f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e332f8))), 0x11e10edbu);
  /* 11e10edb push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10edd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e10ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10ee1 call 0x11dfc8e0 */
  push32(0x11e10ee6u); f_11dfc8e0();
  /* 11e10ee6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e10ee9:;
  /* 11e10ee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e10eeb:;
  /* 11e10eeb pop esi */
  ESI = (pop32());
  /* 11e10eec mov esp, ebp */
  ESP = (EBP);
  /* 11e10eee pop ebp */
  EBP = (pop32());
  /* 11e10eef ret  */
  ESPCHK(0x11e10c10u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11e10ef0 (124 bytes, 47 insns) */
void f_11e10ef0(void) {
  FTRACE(0x11e10ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e10ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e10ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11e10ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e10ef4 mov eax, dword ptr [0x11e306ac] */
  EAX = (r32((uint32_t)(0x11e306ac)));
  /* 11e10ef9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e10efc jmp 0x11e10f07 */
  goto L_11e10f07;
L_11e10efe:;
  /* 11e10efe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10f01 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10f04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e10f07:;
  /* 11e10f07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10f0a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10f0d je 0x11e10f5a */
  if (C.zf) goto L_11e10f5a;
  /* 11e10f0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e10f12 push eax */
  push32((uint32_t)(EAX));
  /* 11e10f13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10f16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e10f18 push edx */
  push32((uint32_t)(EDX));
  /* 11e10f19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10f1c push eax */
  push32((uint32_t)(EAX));
  /* 11e10f1d call 0x11e106c0 */
  push32(0x11e10f22u); f_11e106c0();
  /* 11e10f22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10f25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e10f27 jne 0x11e10f58 */
  if (!C.zf) goto L_11e10f58;
  /* 11e10f29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10f2c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e10f2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e10f31 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11e10f35 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10f38 je 0x11e10f4a */
  if (C.zf) goto L_11e10f4a;
  /* 11e10f3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10f3d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e10f3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e10f42 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11e10f46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e10f48 jne 0x11e10f58 */
  if (!C.zf) goto L_11e10f58;
L_11e10f4a:;
  /* 11e10f4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10f4d sub eax, dword ptr [0x11e306ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e306ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10f53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e10f56 jmp 0x11e10f68 */
  goto L_11e10f68;
L_11e10f58:;
  /* 11e10f58 jmp 0x11e10efe */
  goto L_11e10efe;
L_11e10f5a:;
  /* 11e10f5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e10f5d sub eax, dword ptr [0x11e306ac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e306ac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10f63 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11e10f66 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11e10f68:;
  /* 11e10f68 mov esp, ebp */
  ESP = (EBP);
  /* 11e10f6a pop ebp */
  EBP = (pop32());
  /* 11e10f6b ret  */
  ESPCHK(0x11e10ef0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11e10f70 (238 bytes, 80 insns) */
void f_11e10f70(void) {
  FTRACE(0x11e10f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e10f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11e10f71 mov ebp, esp */
  EBP = (ESP);
  /* 11e10f73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e10f76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e10f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10f80 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e10f83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10f87 jne 0x11e10f90 */
  if (!C.zf) goto L_11e10f90;
  /* 11e10f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e10f8b jmp 0x11e1105a */
  goto L_11e1105a;
L_11e10f90:;
  /* 11e10f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10f93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e10f95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10f98 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10f9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e10f9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e10fa0 je 0x11e10fad */
  if (C.zf) goto L_11e10fad;
  /* 11e10fa2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e10fa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10fa8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e10fab jmp 0x11e10f90 */
  goto L_11e10f90;
L_11e10fad:;
  /* 11e10fad push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11e10fb2 push 0x11e2bd78 */
  push32((uint32_t)(0x11e2bd78u));
  /* 11e10fb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10fb9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e10fbc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11e10fc3 push eax */
  push32((uint32_t)(EAX));
  /* 11e10fc4 call 0x11dfbe50 */
  push32(0x11e10fc9u); f_11dfbe50();
  /* 11e10fc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e10fcc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e10fcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e10fd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e10fd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10fd9 jne 0x11e10fe5 */
  if (!C.zf) goto L_11e10fe5;
  /* 11e10fdb push 9 */
  push32((uint32_t)(0x9u));
  /* 11e10fdd call 0x11dfa8c0 */
  push32(0x11e10fe2u); f_11dfa8c0();
  /* 11e10fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e10fe5:;
  /* 11e10fe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e10fe8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e10feb:;
  /* 11e10feb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e10fee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e10ff1 je 0x11e1104e */
  if (C.zf) goto L_11e1104e;
  /* 11e10ff3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11e10ff8 push 0x11e2bd78 */
  push32((uint32_t)(0x11e2bd78u));
  /* 11e10ffd push 2 */
  push32((uint32_t)(0x2u));
  /* 11e10fff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e11002 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e11004 push edx */
  push32((uint32_t)(EDX));
  /* 11e11005 call 0x11e01410 */
  push32(0x11e1100au); f_11e01410();
  /* 11e1100a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1100d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e11010 push eax */
  push32((uint32_t)(EAX));
  /* 11e11011 call 0x11dfbe50 */
  push32(0x11e11016u); f_11dfbe50();
  /* 11e11016 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e11019 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e1101c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e1101e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e11021 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e11024 je 0x11e1103a */
  if (C.zf) goto L_11e1103a;
  /* 11e11026 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e11029 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e1102b push ecx */
  push32((uint32_t)(ECX));
  /* 11e1102c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e1102f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e11031 push eax */
  push32((uint32_t)(EAX));
  /* 11e11032 call 0x11e01590 */
  push32(0x11e11037u); f_11e01590();
  /* 11e11037 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e1103a:;
  /* 11e1103a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e1103d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e11040 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e11043 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e11046 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e11049 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e1104c jmp 0x11e10feb */
  goto L_11e10feb;
L_11e1104e:;
  /* 11e1104e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e11051 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e11057 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e1105a:;
  /* 11e1105a mov esp, ebp */
  ESP = (EBP);
  /* 11e1105c pop ebp */
  EBP = (pop32());
  /* 11e1105d ret  */
  ESPCHK(0x11e10f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10021060 @ 0x11e11060 (237 bytes, 81 insns) */
void f_11e11060(void) {
  FTRACE(0x11e11060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e11060 push ebp */
  push32((uint32_t)(EBP));
  /* 11e11061 mov ebp, esp */
  EBP = (ESP);
  /* 11e11063 push ecx */
  push32((uint32_t)(ECX));
  /* 11e11064 cmp dword ptr [0x11e30a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e30a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e1106b jne 0x11e11082 */
  if (!C.zf) goto L_11e11082;
  /* 11e1106d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e11070 push eax */
  push32((uint32_t)(EAX));
  /* 11e11071 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e11074 push ecx */
  push32((uint32_t)(ECX));
  /* 11e11075 call 0x11e11160 */
  push32(0x11e1107au); f_11e11160();
  /* 11e1107a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1107d jmp 0x11e11149 */
  goto L_11e11149;
L_11e11082:;
  /* 11e11082 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e11084 call 0x11dfbd50 */
  push32(0x11e11089u); f_11dfbd50();
  /* 11e11089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1108c jmp 0x11e11097 */
  goto L_11e11097;
L_11e1108e:;
  /* 11e1108e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e11091 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e11094 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11e11097:;
  /* 11e11097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e1109a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11e1109e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11e110a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e110a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e110ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e110ad je 0x11e1112b */
  if (C.zf) goto L_11e1112b;
  /* 11e110af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e110b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e110b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e110b9 mov cl, byte ptr [eax + 0x11e30b41] */
  CL = (r8((uint32_t)(EAX + 0x11e30b41)));
  /* 11e110bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e110c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e110c4 je 0x11e11116 */
  if (C.zf) goto L_11e11116;
  /* 11e110c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e110c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e110cc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e110cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e110d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e110d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e110d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e110d8 jne 0x11e110e8 */
  if (!C.zf) goto L_11e110e8;
  /* 11e110da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e110dc call 0x11dfbdf0 */
  push32(0x11e110e1u); f_11dfbdf0();
  /* 11e110e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e110e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e110e6 jmp 0x11e11149 */
  goto L_11e11149;
L_11e110e8:;
  /* 11e110e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e110eb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e110f1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11e110f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e110f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e110f9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e110fb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11e110fd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e11100 jne 0x11e11114 */
  if (!C.zf) goto L_11e11114;
  /* 11e11102 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e11104 call 0x11dfbdf0 */
  push32(0x11e11109u); f_11dfbdf0();
  /* 11e11109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e1110c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e1110f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e11112 jmp 0x11e11149 */
  goto L_11e11149;
L_11e11114:;
  /* 11e11114 jmp 0x11e11126 */
  goto L_11e11126;
L_11e11116:;
  /* 11e11116 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e11119 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e1111f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e11122 jne 0x11e11126 */
  if (!C.zf) goto L_11e11126;
  /* 11e11124 jmp 0x11e1112b */
  goto L_11e1112b;
L_11e11126:;
  /* 11e11126 jmp 0x11e1108e */
  goto L_11e1108e;
L_11e1112b:;
  /* 11e1112b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11e1112d call 0x11dfbdf0 */
  push32(0x11e11132u); f_11dfbdf0();
  /* 11e11132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e11135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e11138 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e1113d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e11140 jne 0x11e11147 */
  if (!C.zf) goto L_11e11147;
  /* 11e11142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e11145 jmp 0x11e11149 */
  goto L_11e11149;
L_11e11147:;
  /* 11e11147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e11149:;
  /* 11e11149 mov esp, ebp */
  ESP = (EBP);
  /* 11e1114b pop ebp */
  EBP = (pop32());
  /* 11e1114c ret  */
  ESPCHK(0x11e11060u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11e11160 (193 bytes, 87 insns) */
void f_11e11160(void) {
  FTRACE(0x11e11160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e11160 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e11162 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11e11166 push ebx */
  push32((uint32_t)(EBX));
  /* 11e11167 mov ebx, eax */
  EBX = (EAX);
  /* 11e11169 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e1116c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e11170 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11e11176 je 0x11e1118b */
  if (C.zf) goto L_11e1118b;
L_11e11178:;
  /* 11e11178 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11e1117a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e1117b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e1117d je 0x11e11150 */
  if (C.zf) { jmp_ind(0x11e11150u); return; }
  /* 11e1117f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11e11181 je 0x11e111d4 */
  if (C.zf) goto L_11e111d4;
  /* 11e11183 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11e11189 jne 0x11e11178 */
  if (!C.zf) goto L_11e11178;
L_11e1118b:;
  /* 11e1118b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11e1118d push edi */
  push32((uint32_t)(EDI));
  /* 11e1118e mov eax, ebx */
  EAX = (EBX);
  /* 11e11190 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11e11193 push esi */
  push32((uint32_t)(ESI));
  /* 11e11194 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11e11196:;
  /* 11e11196 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11e11198 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11e1119d mov eax, ecx */
  EAX = (ECX);
  /* 11e1119f mov esi, edi */
  ESI = (EDI);
  /* 11e111a1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11e111a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e111a5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e111a7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e111aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e111ad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e111af xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11e111b1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e111b4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11e111ba jne 0x11e111d8 */
  if (!C.zf) goto L_11e111d8;
  /* 11e111bc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11e111c1 je 0x11e11196 */
  if (C.zf) goto L_11e11196;
  /* 11e111c3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11e111c8 jne 0x11e111d2 */
  if (!C.zf) goto L_11e111d2;
  /* 11e111ca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11e111d0 jne 0x11e11196 */
  if (!C.zf) goto L_11e11196;
L_11e111d2:;
  /* 11e111d2 pop esi */
  ESI = (pop32());
  /* 11e111d3 pop edi */
  EDI = (pop32());
L_11e111d4:;
  /* 11e111d4 pop ebx */
  EBX = (pop32());
  /* 11e111d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e111d7 ret  */
  ESPCHK(0x11e11160u, _esp0);
  ESP += 4; return;
L_11e111d8:;
  /* 11e111d8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11e111db cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e111dd je 0x11e11215 */
  if (C.zf) goto L_11e11215;
  /* 11e111df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e111e1 je 0x11e111d2 */
  if (C.zf) goto L_11e111d2;
  /* 11e111e3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e111e5 je 0x11e1120e */
  if (C.zf) goto L_11e1120e;
  /* 11e111e7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e111e9 je 0x11e111d2 */
  if (C.zf) goto L_11e111d2;
  /* 11e111eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e111ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e111f0 je 0x11e11207 */
  if (C.zf) goto L_11e11207;
  /* 11e111f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e111f4 je 0x11e111d2 */
  if (C.zf) goto L_11e111d2;
  /* 11e111f6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e111f8 je 0x11e11200 */
  if (C.zf) goto L_11e11200;
  /* 11e111fa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e111fc je 0x11e111d2 */
  if (C.zf) goto L_11e111d2;
  /* 11e111fe jmp 0x11e11196 */
  goto L_11e11196;
L_11e11200:;
  /* 11e11200 pop esi */
  ESI = (pop32());
  /* 11e11201 pop edi */
  EDI = (pop32());
  /* 11e11202 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11e11205 pop ebx */
  EBX = (pop32());
  /* 11e11206 ret  */
  ESPCHK(0x11e11160u, _esp0);
  ESP += 4; return;
L_11e11207:;
  /* 11e11207 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11e1120a pop esi */
  ESI = (pop32());
  /* 11e1120b pop edi */
  EDI = (pop32());
  /* 11e1120c pop ebx */
  EBX = (pop32());
  /* 11e1120d ret  */
  ESPCHK(0x11e11160u, _esp0);
  ESP += 4; return;
L_11e1120e:;
  /* 11e1120e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11e11211 pop esi */
  ESI = (pop32());
  /* 11e11212 pop edi */
  EDI = (pop32());
  /* 11e11213 pop ebx */
  EBX = (pop32());
  /* 11e11214 ret  */
  ESPCHK(0x11e11160u, _esp0);
  ESP += 4; return;
L_11e11215:;
  /* 11e11215 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11e11218 pop esi */
  ESI = (pop32());
  /* 11e11219 pop edi */
  EDI = (pop32());
  /* 11e1121a pop ebx */
  EBX = (pop32());
  /* 11e1121b ret  */
  ESPCHK(0x11e11160u, _esp0);
  ESP += 4; return;
  /* 11e1121f xor esp, ebx */
  { uint32_t _r=(ESP)^(EBX); ESP = (_r); fl_logic(_r,32); }
}

/* RtlUnwind @ 0x11e1121c (6 bytes, 1 insns) */
void f_11e1121c(void) {
  FTRACE(0x11e1121cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e1121c jmp dword ptr [0x11e333b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11e333b8)))); return;
}

/* Unwind@100281b0 @ 0x11e181b0 (11 bytes, 5 insns) */
void f_11e181b0(void) {
  FTRACE(0x11e181b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e181b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e181b3 push eax */
  push32((uint32_t)(EAX));
  /* 11e181b4 call 0x11df9eb0 */
  push32(0x11e181b9u); f_11df9eb0();
  /* 11e181b9 pop ecx */
  ECX = (pop32());
  /* 11e181ba ret  */
  ESPCHK(0x11e181b0u, _esp0);
  ESP += 4; return;
}

