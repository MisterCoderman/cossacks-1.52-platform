#include "recomp.h"

/* FUN_10001000 @ 0x11681000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_11681000(void) {
  FTRACE(0x11681000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681002 call dword ptr [0x11688160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688160))), 0x11681008u);
  /* 11681008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168100e ja 0x1168102f */
  if ((!C.cf&&!C.zf)) goto L_1168102f;
  /* 11681010 jmp dword ptr [eax*4 + 0x11681038] */
  switch (EAX) {
    case 0: goto L_11681017;
    case 1: goto L_1168101d;
    case 2: goto L_11681023;
    case 3: goto L_11681029;
    default: x86_unimpl("switch@0x11681010 out of table"); return;
  }
L_11681017:;
  /* 11681017 mov eax, 0x61a8 */
  EAX = (0x61a8u);
  /* 1168101c ret  */
  ESPCHK(0x11681000u, _esp0);
  ESP += 4; return;
L_1168101d:;
  /* 1168101d mov eax, 0x3a98 */
  EAX = (0x3a98u);
  /* 11681022 ret  */
  ESPCHK(0x11681000u, _esp0);
  ESP += 4; return;
L_11681023:;
  /* 11681023 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 11681028 ret  */
  ESPCHK(0x11681000u, _esp0);
  ESP += 4; return;
L_11681029:;
  /* 11681029 mov eax, 0x1770 */
  EAX = (0x1770u);
  /* 1168102e ret  */
  ESPCHK(0x11681000u, _esp0);
  ESP += 4; return;
L_1168102f:;
  /* 1168102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 11681034 ret  */
  ESPCHK(0x11681000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001050 @ 0x11681050 (59 bytes, 29 insns) */
void f_11681050(void) {
  FTRACE(0x11681050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681050 push esi */
  push32((uint32_t)(ESI));
  /* 11681051 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11681055 push edi */
  push32((uint32_t)(EDI));
  /* 11681056 mov edi, dword ptr [0x11688164] */
  EDI = (r32((uint32_t)(0x11688164)));
  /* 1168105c push esi */
  push32((uint32_t)(ESI));
  /* 1168105d call edi */
  call_ind((uint32_t)(EDI), 0x1168105fu);
  /* 1168105f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11681064 je 0x1168107d */
  if (C.zf) goto L_1168107d;
  /* 11681066 push ebx */
  push32((uint32_t)(EBX));
  /* 11681067 mov ebx, dword ptr [0x11688168] */
  EBX = (r32((uint32_t)(0x11688168)));
L_1168106d:;
  /* 1168106d push 0 */
  push32((uint32_t)(0x0u));
  /* 1168106f push esi */
  push32((uint32_t)(ESI));
  /* 11681070 call ebx */
  call_ind((uint32_t)(EBX), 0x11681072u);
  /* 11681072 push esi */
  push32((uint32_t)(ESI));
  /* 11681073 call edi */
  call_ind((uint32_t)(EDI), 0x11681075u);
  /* 11681075 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168107a jne 0x1168106d */
  if (!C.zf) goto L_1168106d;
  /* 1168107c pop ebx */
  EBX = (pop32());
L_1168107d:;
  /* 1168107d push esi */
  push32((uint32_t)(ESI));
  /* 1168107e call edi */
  call_ind((uint32_t)(EDI), 0x11681080u);
  /* 11681080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681083 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11681085 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11681087 pop edi */
  EDI = (pop32());
  /* 11681088 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11681089 pop esi */
  ESI = (pop32());
  /* 1168108a ret  */
  ESPCHK(0x11681050u, _esp0);
  ESP += 4; return;
}

/* FUN_10001090 @ 0x11681090 (449 bytes, 151 insns) */
void f_11681090(void) {
  FTRACE(0x11681090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681090 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11681094 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11681097 push ebx */
  push32((uint32_t)(EBX));
  /* 11681098 mov ebx, dword ptr [0x11688164] */
  EBX = (r32((uint32_t)(0x11688164)));
  /* 1168109e push ebp */
  push32((uint32_t)(EBP));
  /* 1168109f push esi */
  push32((uint32_t)(ESI));
  /* 116810a0 push edi */
  push32((uint32_t)(EDI));
  /* 116810a1 push eax */
  push32((uint32_t)(EAX));
  /* 116810a2 call ebx */
  call_ind((uint32_t)(EBX), 0x116810a4u);
  /* 116810a4 mov ecx, dword ptr [esp + 0x54] */
  ECX = (r32((uint32_t)(ESP + 0x54)));
  /* 116810a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116810ab cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116810ad jge 0x116810b5 */
  if ((C.sf==C.of)) goto L_116810b5;
  /* 116810af sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116810b1 mov edi, eax */
  EDI = (EAX);
  /* 116810b3 jmp 0x116810b7 */
  goto L_116810b7;
L_116810b5:;
  /* 116810b5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_116810b7:;
  /* 116810b7 mov esi, dword ptr [esp + 0x58] */
  ESI = (r32((uint32_t)(ESP + 0x58)));
  /* 116810bb mov ebp, dword ptr [esp + 0x4c] */
  EBP = (r32((uint32_t)(ESP + 0x4c)));
  /* 116810bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116810c1 mov dword ptr [esp + 0x14], 0x4000000a */
  w32((uint32_t)(ESP + 0x14), (0x4000000au));
  /* 116810c9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116810cb mov word ptr [esp + 0x10], ax */
  w16((uint32_t)(ESP + 0x10), (AX));
  /* 116810d0 mov word ptr [esp + 0x12], ax */
  w16((uint32_t)(ESP + 0x12), (AX));
  /* 116810d5 je 0x11681123 */
  if (C.zf) goto L_11681123;
  /* 116810d7 push ebp */
  push32((uint32_t)(EBP));
  /* 116810d8 call dword ptr [0x1168814c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168814c))), 0x116810deu);
  /* 116810de mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 116810e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116810e4 push ecx */
  push32((uint32_t)(ECX));
  /* 116810e5 call dword ptr [0x11688150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688150))), 0x116810ebu);
  /* 116810eb push 0 */
  push32((uint32_t)(0x0u));
  /* 116810ed push esi */
  push32((uint32_t)(ESI));
  /* 116810ee push ebp */
  push32((uint32_t)(EBP));
  /* 116810ef call dword ptr [0x11688148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688148))), 0x116810f5u);
  /* 116810f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116810f8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 116810fa jle 0x11681123 */
  if ((C.zf||C.sf!=C.of)) goto L_11681123;
  /* 116810fc mov dword ptr [esp + 0x48], edi */
  w32((uint32_t)(ESP + 0x48), (EDI));
L_11681100:;
  /* 11681100 push esi */
  push32((uint32_t)(ESI));
  /* 11681101 call ebx */
  call_ind((uint32_t)(EBX), 0x11681103u);
  /* 11681103 mov edi, eax */
  EDI = (EAX);
  /* 11681105 call 0x11681d96 */
  push32(0x1168110au); f_11681d96();
  /* 1168110a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1168110b idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1168110d push edx */
  push32((uint32_t)(EDX));
  /* 1168110e push esi */
  push32((uint32_t)(ESI));
  /* 1168110f call dword ptr [0x11688168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688168))), 0x11681115u);
  /* 11681115 mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 11681119 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168111c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1168111d mov dword ptr [esp + 0x48], eax */
  w32((uint32_t)(ESP + 0x48), (EAX));
  /* 11681121 jne 0x11681100 */
  if (!C.zf) goto L_11681100;
L_11681123:;
  /* 11681123 push esi */
  push32((uint32_t)(ESI));
  /* 11681124 call ebx */
  call_ind((uint32_t)(EBX), 0x11681126u);
  /* 11681126 mov ebx, eax */
  EBX = (EAX);
  /* 11681128 lea edx, [ebx*4] */
  EDX = ((uint32_t)(EBX*4));
  /* 1168112f push edx */
  push32((uint32_t)(EDX));
  /* 11681130 call 0x11681d7b */
  push32(0x11681135u); f_11681d7b();
  /* 11681135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681138 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1168113a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1168113c mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 11681140 jle 0x11681172 */
  if ((C.zf||C.sf!=C.of)) goto L_11681172;
  /* 11681142 mov dword ptr [esp + 0x48], eax */
  w32((uint32_t)(ESP + 0x48), (EAX));
L_11681146:;
  /* 11681146 lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 1168114a push eax */
  push32((uint32_t)(EAX));
  /* 1168114b push edi */
  push32((uint32_t)(EDI));
  /* 1168114c push esi */
  push32((uint32_t)(ESI));
  /* 1168114d call dword ptr [0x11688158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688158))), 0x11681153u);
  /* 11681153 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11681157 mov eax, dword ptr [esp + 0x54] */
  EAX = (r32((uint32_t)(ESP + 0x54)));
  /* 1168115b and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11681161 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681164 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11681166 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11681167 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168116a cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168116c mov dword ptr [esp + 0x48], eax */
  w32((uint32_t)(ESP + 0x48), (EAX));
  /* 11681170 jl 0x11681146 */
  if ((C.sf!=C.of)) goto L_11681146;
L_11681172:;
  /* 11681172 push esi */
  push32((uint32_t)(ESI));
  /* 11681173 call 0x11681050 */
  push32(0x11681178u); f_11681050();
  /* 11681178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168117b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1168117d jle 0x1168123c */
  if ((C.zf||C.sf!=C.of)) goto L_1168123c;
  /* 11681183 fild dword ptr [esp + 0x54] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x54)));
  /* 11681187 mov edi, dword ptr [esp + 0x50] */
  EDI = (r32((uint32_t)(ESP + 0x50)));
  /* 1168118b fstp dword ptr [esp + 0x48] */
  wf32((uint32_t)(ESP + 0x48), (float)FPU_ST(0));
  (void)fpu_pop();
L_1168118f:;
  /* 1168118f mov edx, dword ptr [edi] */
  EDX = (r32((uint32_t)(EDI)));
  /* 11681191 push edx */
  push32((uint32_t)(EDX));
  /* 11681192 push esi */
  push32((uint32_t)(ESI));
  /* 11681193 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681195 call dword ptr [0x1168815c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168815c))), 0x1168119bu);
  /* 1168119b lea eax, [esp + 0x24] */
  EAX = ((uint32_t)(ESP + 0x24));
  /* 1168119f push eax */
  push32((uint32_t)(EAX));
  /* 116811a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116811a2 push esi */
  push32((uint32_t)(ESI));
  /* 116811a3 call dword ptr [0x11688158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688158))), 0x116811a9u);
  /* 116811a9 call 0x11681d96 */
  push32(0x116811aeu); f_11681d96();
  /* 116811ae and eax, 0x800000ff */
  { uint32_t _r=(EAX)&(0x800000ffu); EAX = (_r); fl_logic(_r,32); }
  /* 116811b3 jns 0x116811bc */
  if (!C.sf) goto L_116811bc;
  /* 116811b5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116811b6 or eax, 0xffffff00 */
  { uint32_t _r=(EAX)|(0xffffff00u); EAX = (_r); fl_logic(_r,32); }
  /* 116811bb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_116811bc:;
  /* 116811bc mov dword ptr [esp + 0x70], eax */
  w32((uint32_t)(ESP + 0x70), (EAX));
  /* 116811c0 fild dword ptr [esp + 0x70] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x70)));
  /* 116811c4 fmul qword ptr [0x11688178] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11688178)));
  /* 116811ca fmul qword ptr [0x11688170] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11688170)));
  /* 116811d0 fld st(0) */
  { double _v=FPU_ST(0); fpu_push(_v); }
  /* 116811d2 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 116811d4 fmul dword ptr [esp + 0x60] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(ESP + 0x60)));
  /* 116811d8 fiadd dword ptr [esp + 0x44] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(ESP + 0x44)));
  /* 116811dc call 0x11681e08 */
  push32(0x116811e1u); f_11681e08();
  /* 116811e1 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 116811e3 mov word ptr [esp + 0x28], ax */
  w16((uint32_t)(ESP + 0x28), (AX));
  /* 116811e8 fmul dword ptr [esp + 0x60] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(ESP + 0x60)));
  /* 116811ec fiadd dword ptr [esp + 0x48] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(ESP + 0x48)));
  /* 116811f0 call 0x11681e08 */
  push32(0x116811f5u); f_11681e08();
  /* 116811f5 push ebp */
  push32((uint32_t)(EBP));
  /* 116811f6 mov word ptr [esp + 0x2e], ax */
  w16((uint32_t)(ESP + 0x2e), (AX));
  /* 116811fb call dword ptr [0x1168814c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168814c))), 0x11681201u);
  /* 11681201 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681203 push esi */
  push32((uint32_t)(ESI));
  /* 11681204 call dword ptr [0x11688150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688150))), 0x1168120au);
  /* 1168120a add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168120d push 0 */
  push32((uint32_t)(0x0u));
  /* 1168120f call 0x11681d96 */
  push32(0x11681214u); f_11681d96();
  /* 11681214 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11681215 mov ecx, 0xfa */
  ECX = (0xfau);
  /* 1168121a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1168121c push edx */
  push32((uint32_t)(EDX));
  /* 1168121d lea edx, [esp + 0x18] */
  EDX = ((uint32_t)(ESP + 0x18));
  /* 11681221 push edx */
  push32((uint32_t)(EDX));
  /* 11681222 push ebp */
  push32((uint32_t)(EBP));
  /* 11681223 call dword ptr [0x11688154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688154))), 0x11681229u);
  /* 11681229 push esi */
  push32((uint32_t)(ESI));
  /* 1168122a call 0x11681050 */
  push32(0x1168122fu); f_11681050();
  /* 1168122f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681232 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11681235 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11681236 jne 0x1168118f */
  if (!C.zf) goto L_1168118f;
L_1168123c:;
  /* 1168123c mov eax, dword ptr [esp + 0x50] */
  EAX = (r32((uint32_t)(ESP + 0x50)));
  /* 11681240 push eax */
  push32((uint32_t)(EAX));
  /* 11681241 call 0x11681d70 */
  push32(0x11681246u); f_11681d70();
  /* 11681246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681249 pop edi */
  EDI = (pop32());
  /* 1168124a pop esi */
  ESI = (pop32());
  /* 1168124b pop ebp */
  EBP = (pop32());
  /* 1168124c pop ebx */
  EBX = (pop32());
  /* 1168124d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681250 ret  */
  ESPCHK(0x11681090u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11681260 (596 bytes, 164 insns) */
void f_11681260(void) {
  FTRACE(0x11681260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681260 push esi */
  push32((uint32_t)(ESI));
  /* 11681261 push edi */
  push32((uint32_t)(EDI));
  /* 11681262 push 0x11689140 */
  push32((uint32_t)(0x11689140u));
  /* 11681267 push 0x11689ec8 */
  push32((uint32_t)(0x11689ec8u));
  /* 1168126c call dword ptr [0x11688124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688124))), 0x11681272u);
  /* 11681272 mov esi, dword ptr [0x11688134] */
  ESI = (r32((uint32_t)(0x11688134)));
  /* 11681278 push 0x1168913c */
  push32((uint32_t)(0x1168913cu));
  /* 1168127d push 0x11689f70 */
  push32((uint32_t)(0x11689f70u));
  /* 11681282 call esi */
  call_ind((uint32_t)(ESI), 0x11681284u);
  /* 11681284 push 0x11689138 */
  push32((uint32_t)(0x11689138u));
  /* 11681289 push 0x11689f78 */
  push32((uint32_t)(0x11689f78u));
  /* 1168128e call esi */
  call_ind((uint32_t)(ESI), 0x11681290u);
  /* 11681290 push 0x11689134 */
  push32((uint32_t)(0x11689134u));
  /* 11681295 push 0x11689f80 */
  push32((uint32_t)(0x11689f80u));
  /* 1168129a call esi */
  call_ind((uint32_t)(ESI), 0x1168129cu);
  /* 1168129c push 0x11689130 */
  push32((uint32_t)(0x11689130u));
  /* 116812a1 push 0x11689f88 */
  push32((uint32_t)(0x11689f88u));
  /* 116812a6 call esi */
  call_ind((uint32_t)(ESI), 0x116812a8u);
  /* 116812a8 push 0x1168912c */
  push32((uint32_t)(0x1168912cu));
  /* 116812ad push 0x11689f90 */
  push32((uint32_t)(0x11689f90u));
  /* 116812b2 call esi */
  call_ind((uint32_t)(ESI), 0x116812b4u);
  /* 116812b4 push 0x11689124 */
  push32((uint32_t)(0x11689124u));
  /* 116812b9 push 0x11689ed8 */
  push32((uint32_t)(0x11689ed8u));
  /* 116812be call esi */
  call_ind((uint32_t)(ESI), 0x116812c0u);
  /* 116812c0 push 0x1168911c */
  push32((uint32_t)(0x1168911cu));
  /* 116812c5 push 0x11689fa0 */
  push32((uint32_t)(0x11689fa0u));
  /* 116812ca call esi */
  call_ind((uint32_t)(ESI), 0x116812ccu);
  /* 116812cc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116812cf push 0x11689114 */
  push32((uint32_t)(0x11689114u));
  /* 116812d4 push 0x11689ec0 */
  push32((uint32_t)(0x11689ec0u));
  /* 116812d9 call esi */
  call_ind((uint32_t)(ESI), 0x116812dbu);
  /* 116812db push 0x1168910c */
  push32((uint32_t)(0x1168910cu));
  /* 116812e0 push 0x11689ef0 */
  push32((uint32_t)(0x11689ef0u));
  /* 116812e5 call esi */
  call_ind((uint32_t)(ESI), 0x116812e7u);
  /* 116812e7 push 0x11689104 */
  push32((uint32_t)(0x11689104u));
  /* 116812ec push 0x11689ef8 */
  push32((uint32_t)(0x11689ef8u));
  /* 116812f1 call esi */
  call_ind((uint32_t)(ESI), 0x116812f3u);
  /* 116812f3 push 0x116890fc */
  push32((uint32_t)(0x116890fcu));
  /* 116812f8 push 0x11689f00 */
  push32((uint32_t)(0x11689f00u));
  /* 116812fd call esi */
  call_ind((uint32_t)(ESI), 0x116812ffu);
  /* 116812ff push 0x116890f4 */
  push32((uint32_t)(0x116890f4u));
  /* 11681304 push 0x11689f08 */
  push32((uint32_t)(0x11689f08u));
  /* 11681309 call esi */
  call_ind((uint32_t)(ESI), 0x1168130bu);
  /* 1168130b push 0x116890f0 */
  push32((uint32_t)(0x116890f0u));
  /* 11681310 push 0x11689f58 */
  push32((uint32_t)(0x11689f58u));
  /* 11681315 call esi */
  call_ind((uint32_t)(ESI), 0x11681317u);
  /* 11681317 push 0x116890e8 */
  push32((uint32_t)(0x116890e8u));
  /* 1168131c push 0x11689f28 */
  push32((uint32_t)(0x11689f28u));
  /* 11681321 call esi */
  call_ind((uint32_t)(ESI), 0x11681323u);
  /* 11681323 push 0x116890e4 */
  push32((uint32_t)(0x116890e4u));
  /* 11681328 push 0x11689f60 */
  push32((uint32_t)(0x11689f60u));
  /* 1168132d call esi */
  call_ind((uint32_t)(ESI), 0x1168132fu);
  /* 1168132f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681332 push 0x116890dc */
  push32((uint32_t)(0x116890dcu));
  /* 11681337 push 0x11689f30 */
  push32((uint32_t)(0x11689f30u));
  /* 1168133c call esi */
  call_ind((uint32_t)(ESI), 0x1168133eu);
  /* 1168133e mov esi, dword ptr [0x11688138] */
  ESI = (r32((uint32_t)(0x11688138)));
  /* 11681344 push 0x116890d0 */
  push32((uint32_t)(0x116890d0u));
  /* 11681349 push 0x11689ee0 */
  push32((uint32_t)(0x11689ee0u));
  /* 1168134e call esi */
  call_ind((uint32_t)(ESI), 0x11681350u);
  /* 11681350 push 0x116890c4 */
  push32((uint32_t)(0x116890c4u));
  /* 11681355 push 0x11689e88 */
  push32((uint32_t)(0x11689e88u));
  /* 1168135a call esi */
  call_ind((uint32_t)(ESI), 0x1168135cu);
  /* 1168135c push 0x116890b8 */
  push32((uint32_t)(0x116890b8u));
  /* 11681361 push 0x11689f50 */
  push32((uint32_t)(0x11689f50u));
  /* 11681366 call esi */
  call_ind((uint32_t)(ESI), 0x11681368u);
  /* 11681368 push 0x116890ac */
  push32((uint32_t)(0x116890acu));
  /* 1168136d push 0x11689e90 */
  push32((uint32_t)(0x11689e90u));
  /* 11681372 call esi */
  call_ind((uint32_t)(ESI), 0x11681374u);
  /* 11681374 push 0x11689098 */
  push32((uint32_t)(0x11689098u));
  /* 11681379 push 0x11689f98 */
  push32((uint32_t)(0x11689f98u));
  /* 1168137e call esi */
  call_ind((uint32_t)(ESI), 0x11681380u);
  /* 11681380 push 0x11689080 */
  push32((uint32_t)(0x11689080u));
  /* 11681385 push 0x11689f20 */
  push32((uint32_t)(0x11689f20u));
  /* 1168138a call esi */
  call_ind((uint32_t)(ESI), 0x1168138cu);
  /* 1168138c push 0x11689068 */
  push32((uint32_t)(0x11689068u));
  /* 11681391 push 0x11689ed0 */
  push32((uint32_t)(0x11689ed0u));
  /* 11681396 call esi */
  call_ind((uint32_t)(ESI), 0x11681398u);
  /* 11681398 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168139b push 0x11689060 */
  push32((uint32_t)(0x11689060u));
  /* 116813a0 push 0x11689ea8 */
  push32((uint32_t)(0x11689ea8u));
  /* 116813a5 mov esi, dword ptr [0x11688130] */
  ESI = (r32((uint32_t)(0x11688130)));
  /* 116813ab call esi */
  call_ind((uint32_t)(ESI), 0x116813adu);
  /* 116813ad push 0x11689054 */
  push32((uint32_t)(0x11689054u));
  /* 116813b2 push 0x11689ea0 */
  push32((uint32_t)(0x11689ea0u));
  /* 116813b7 call esi */
  call_ind((uint32_t)(ESI), 0x116813b9u);
  /* 116813b9 push 0x11689048 */
  push32((uint32_t)(0x11689048u));
  /* 116813be push 0x11689eb0 */
  push32((uint32_t)(0x11689eb0u));
  /* 116813c3 call esi */
  call_ind((uint32_t)(ESI), 0x116813c5u);
  /* 116813c5 mov esi, dword ptr [0x11688140] */
  ESI = (r32((uint32_t)(0x11688140)));
  /* 116813cb push 0x11689040 */
  push32((uint32_t)(0x11689040u));
  /* 116813d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116813d2 call esi */
  call_ind((uint32_t)(ESI), 0x116813d4u);
  /* 116813d4 push 0x11689038 */
  push32((uint32_t)(0x11689038u));
  /* 116813d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 116813db call esi */
  call_ind((uint32_t)(ESI), 0x116813ddu);
  /* 116813dd push 0x11689040 */
  push32((uint32_t)(0x11689040u));
  /* 116813e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 116813e4 call esi */
  call_ind((uint32_t)(ESI), 0x116813e6u);
  /* 116813e6 push 0x11689030 */
  push32((uint32_t)(0x11689030u));
  /* 116813eb push 5 */
  push32((uint32_t)(0x5u));
  /* 116813ed call esi */
  call_ind((uint32_t)(ESI), 0x116813efu);
  /* 116813ef mov esi, dword ptr [0x11688144] */
  ESI = (r32((uint32_t)(0x11688144)));
  /* 116813f5 push 0x11689f10 */
  push32((uint32_t)(0x11689f10u));
  /* 116813fa call esi */
  call_ind((uint32_t)(ESI), 0x116813fcu);
  /* 116813fc mov edi, dword ptr [0x1168813c] */
  EDI = (r32((uint32_t)(0x1168813c)));
  /* 11681402 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681404 push 0x11689f10 */
  push32((uint32_t)(0x11689f10u));
  /* 11681409 call edi */
  call_ind((uint32_t)(EDI), 0x1168140bu);
  /* 1168140b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168140e push 0x11689f40 */
  push32((uint32_t)(0x11689f40u));
  /* 11681413 call esi */
  call_ind((uint32_t)(ESI), 0x11681415u);
  /* 11681415 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681417 push 0x11689f40 */
  push32((uint32_t)(0x11689f40u));
  /* 1168141c call edi */
  call_ind((uint32_t)(EDI), 0x1168141eu);
  /* 1168141e push 0x11689f38 */
  push32((uint32_t)(0x11689f38u));
  /* 11681423 call esi */
  call_ind((uint32_t)(ESI), 0x11681425u);
  /* 11681425 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681427 push 0x11689f38 */
  push32((uint32_t)(0x11689f38u));
  /* 1168142c call edi */
  call_ind((uint32_t)(EDI), 0x1168142eu);
  /* 1168142e push 0x11689e80 */
  push32((uint32_t)(0x11689e80u));
  /* 11681433 call esi */
  call_ind((uint32_t)(ESI), 0x11681435u);
  /* 11681435 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681437 push 0x11689e80 */
  push32((uint32_t)(0x11689e80u));
  /* 1168143c call edi */
  call_ind((uint32_t)(EDI), 0x1168143eu);
  /* 1168143e push 0x11689eb8 */
  push32((uint32_t)(0x11689eb8u));
  /* 11681443 call esi */
  call_ind((uint32_t)(ESI), 0x11681445u);
  /* 11681445 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681447 push 0x11689eb8 */
  push32((uint32_t)(0x11689eb8u));
  /* 1168144c call edi */
  call_ind((uint32_t)(EDI), 0x1168144eu);
  /* 1168144e push 0x11689ee8 */
  push32((uint32_t)(0x11689ee8u));
  /* 11681453 call esi */
  call_ind((uint32_t)(ESI), 0x11681455u);
  /* 11681455 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681457 push 0x11689ee8 */
  push32((uint32_t)(0x11689ee8u));
  /* 1168145c call edi */
  call_ind((uint32_t)(EDI), 0x1168145eu);
  /* 1168145e push 0x11689f68 */
  push32((uint32_t)(0x11689f68u));
  /* 11681463 call esi */
  call_ind((uint32_t)(ESI), 0x11681465u);
  /* 11681465 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681468 push 8 */
  push32((uint32_t)(0x8u));
  /* 1168146a push 0x11689f68 */
  push32((uint32_t)(0x11689f68u));
  /* 1168146f call edi */
  call_ind((uint32_t)(EDI), 0x11681471u);
  /* 11681471 push 0x11689f18 */
  push32((uint32_t)(0x11689f18u));
  /* 11681476 call esi */
  call_ind((uint32_t)(ESI), 0x11681478u);
  /* 11681478 push 8 */
  push32((uint32_t)(0x8u));
  /* 1168147a push 0x11689f18 */
  push32((uint32_t)(0x11689f18u));
  /* 1168147f call edi */
  call_ind((uint32_t)(EDI), 0x11681481u);
  /* 11681481 push 0x11689e98 */
  push32((uint32_t)(0x11689e98u));
  /* 11681486 call esi */
  call_ind((uint32_t)(ESI), 0x11681488u);
  /* 11681488 push 8 */
  push32((uint32_t)(0x8u));
  /* 1168148a push 0x11689e98 */
  push32((uint32_t)(0x11689e98u));
  /* 1168148f call edi */
  call_ind((uint32_t)(EDI), 0x11681491u);
  /* 11681491 push 0x11689fa8 */
  push32((uint32_t)(0x11689fa8u));
  /* 11681496 call esi */
  call_ind((uint32_t)(ESI), 0x11681498u);
  /* 11681498 push 8 */
  push32((uint32_t)(0x8u));
  /* 1168149a push 0x11689fa8 */
  push32((uint32_t)(0x11689fa8u));
  /* 1168149f call edi */
  call_ind((uint32_t)(EDI), 0x116814a1u);
  /* 116814a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116814a3 call 0x11681e2f */
  push32(0x116814a8u); f_11681e2f();
  /* 116814a8 push eax */
  push32((uint32_t)(EAX));
  /* 116814a9 call 0x11681d89 */
  push32(0x116814aeu); f_11681d89();
  /* 116814ae add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116814b1 pop edi */
  EDI = (pop32());
  /* 116814b2 pop esi */
  ESI = (pop32());
  /* 116814b3 ret  */
  ESPCHK(0x11681260u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x116814c0 (2178 bytes, 709 insns) */
void f_116814c0(void) {
  FTRACE(0x116814c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116814c0 push ebx */
  push32((uint32_t)(EBX));
  /* 116814c1 push ebp */
  push32((uint32_t)(EBP));
  /* 116814c2 push esi */
  push32((uint32_t)(ESI));
  /* 116814c3 mov esi, dword ptr [0x116880e0] */
  ESI = (r32((uint32_t)(0x116880e0)));
  /* 116814c9 push edi */
  push32((uint32_t)(EDI));
  /* 116814ca push 1 */
  push32((uint32_t)(0x1u));
  /* 116814cc call esi */
  call_ind((uint32_t)(ESI), 0x116814ceu);
  /* 116814ce mov edi, dword ptr [0x116880e4] */
  EDI = (r32((uint32_t)(0x116880e4)));
  /* 116814d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116814d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116814d9 je 0x11681d37 */
  if (C.zf) goto L_11681d37;
  /* 116814df push 0 */
  push32((uint32_t)(0x0u));
  /* 116814e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 116814e3 call edi */
  call_ind((uint32_t)(EDI), 0x116814e5u);
  /* 116814e5 mov esi, dword ptr [0x116880dc] */
  ESI = (r32((uint32_t)(0x116880dc)));
  /* 116814eb push 0x11689180 */
  push32((uint32_t)(0x11689180u));
  /* 116814f0 call esi */
  call_ind((uint32_t)(ESI), 0x116814f2u);
  /* 116814f2 push 0x11689178 */
  push32((uint32_t)(0x11689178u));
  /* 116814f7 call esi */
  call_ind((uint32_t)(ESI), 0x116814f9u);
  /* 116814f9 mov ebx, dword ptr [0x116880ec] */
  EBX = (r32((uint32_t)(0x116880ec)));
  /* 116814ff push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11681504 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681506 call ebx */
  call_ind((uint32_t)(EBX), 0x11681508u);
  /* 11681508 call 0x11681000 */
  push32(0x1168150du); f_11681000();
  /* 1168150d add eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11681512 push eax */
  push32((uint32_t)(EAX));
  /* 11681513 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681515 call ebx */
  call_ind((uint32_t)(EBX), 0x11681517u);
  /* 11681517 call 0x11681000 */
  push32(0x1168151cu); f_11681000();
  /* 1168151c add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11681521 push eax */
  push32((uint32_t)(EAX));
  /* 11681522 push 3 */
  push32((uint32_t)(0x3u));
  /* 11681524 call ebx */
  call_ind((uint32_t)(EBX), 0x11681526u);
  /* 11681526 call 0x11681000 */
  push32(0x1168152bu); f_11681000();
  /* 1168152b add eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11681530 push eax */
  push32((uint32_t)(EAX));
  /* 11681531 push 4 */
  push32((uint32_t)(0x4u));
  /* 11681533 call ebx */
  call_ind((uint32_t)(EBX), 0x11681535u);
  /* 11681535 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11681537 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681539 call ebx */
  call_ind((uint32_t)(EBX), 0x1168153bu);
  /* 1168153b mov esi, dword ptr [0x116880f0] */
  ESI = (r32((uint32_t)(0x116880f0)));
  /* 11681541 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11681543 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681545 call esi */
  call_ind((uint32_t)(ESI), 0x11681547u);
  /* 11681547 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168154a push 0x26 */
  push32((uint32_t)(0x26u));
  /* 1168154c push 2 */
  push32((uint32_t)(0x2u));
  /* 1168154e call esi */
  call_ind((uint32_t)(ESI), 0x11681550u);
  /* 11681550 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11681552 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681554 call esi */
  call_ind((uint32_t)(ESI), 0x11681556u);
  /* 11681556 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11681558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1168155a call esi */
  call_ind((uint32_t)(ESI), 0x1168155cu);
  /* 1168155c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1168155e push 4 */
  push32((uint32_t)(0x4u));
  /* 11681560 call esi */
  call_ind((uint32_t)(ESI), 0x11681562u);
  /* 11681562 mov esi, dword ptr [0x116880e8] */
  ESI = (r32((uint32_t)(0x116880e8)));
  /* 11681568 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1168156d push 3 */
  push32((uint32_t)(0x3u));
  /* 1168156f push 1 */
  push32((uint32_t)(0x1u));
  /* 11681571 call esi */
  call_ind((uint32_t)(ESI), 0x11681573u);
  /* 11681573 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11681578 push 1 */
  push32((uint32_t)(0x1u));
  /* 1168157a push 1 */
  push32((uint32_t)(0x1u));
  /* 1168157c call esi */
  call_ind((uint32_t)(ESI), 0x1168157eu);
  /* 1168157e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11681583 push 4 */
  push32((uint32_t)(0x4u));
  /* 11681585 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681587 call esi */
  call_ind((uint32_t)(ESI), 0x11681589u);
  /* 11681589 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168158c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11681591 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681593 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681595 call esi */
  call_ind((uint32_t)(ESI), 0x11681597u);
  /* 11681597 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1168159c push 0 */
  push32((uint32_t)(0x0u));
  /* 1168159e push 1 */
  push32((uint32_t)(0x1u));
  /* 116815a0 call esi */
  call_ind((uint32_t)(ESI), 0x116815a2u);
  /* 116815a2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 116815a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 116815a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 116815ab call esi */
  call_ind((uint32_t)(ESI), 0x116815adu);
  /* 116815ad push 0 */
  push32((uint32_t)(0x0u));
  /* 116815af call dword ptr [0x11688160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688160))), 0x116815b5u);
  /* 116815b5 mov ebp, dword ptr [0x116880f8] */
  EBP = (r32((uint32_t)(0x116880f8)));
  /* 116815bb add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116815be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116815c0 jne 0x1168161b */
  if (!C.zf) goto L_1168161b;
  /* 116815c2 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 116815c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 116815c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116815cb call esi */
  call_ind((uint32_t)(ESI), 0x116815cdu);
  /* 116815cd push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 116815d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 116815d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116815d6 call esi */
  call_ind((uint32_t)(ESI), 0x116815d8u);
  /* 116815d8 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 116815dd push 4 */
  push32((uint32_t)(0x4u));
  /* 116815df push 0 */
  push32((uint32_t)(0x0u));
  /* 116815e1 call esi */
  call_ind((uint32_t)(ESI), 0x116815e3u);
  /* 116815e3 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 116815e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 116815ea push 0 */
  push32((uint32_t)(0x0u));
  /* 116815ec call esi */
  call_ind((uint32_t)(ESI), 0x116815eeu);
  /* 116815ee push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 116815f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116815f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116815f7 call esi */
  call_ind((uint32_t)(ESI), 0x116815f9u);
  /* 116815f9 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 116815fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11681600 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681602 call esi */
  call_ind((uint32_t)(ESI), 0x11681604u);
  /* 11681604 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681607 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681609 push 1 */
  push32((uint32_t)(0x1u));
  /* 1168160b push 1 */
  push32((uint32_t)(0x1u));
  /* 1168160d push 1 */
  push32((uint32_t)(0x1u));
  /* 1168160f push 0x1168916c */
  push32((uint32_t)(0x1168916cu));
  /* 11681614 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681616 call ebp */
  call_ind((uint32_t)(EBP), 0x11681618u);
  /* 11681618 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1168161b:;
  /* 1168161b push 0 */
  push32((uint32_t)(0x0u));
  /* 1168161d call dword ptr [0x11688160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688160))), 0x11681623u);
  /* 11681623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681626 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681629 jne 0x11681684 */
  if (!C.zf) goto L_11681684;
  /* 1168162b push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11681630 push 3 */
  push32((uint32_t)(0x3u));
  /* 11681632 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681634 call esi */
  call_ind((uint32_t)(ESI), 0x11681636u);
  /* 11681636 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 1168163b push 1 */
  push32((uint32_t)(0x1u));
  /* 1168163d push 0 */
  push32((uint32_t)(0x0u));
  /* 1168163f call esi */
  call_ind((uint32_t)(ESI), 0x11681641u);
  /* 11681641 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11681646 push 4 */
  push32((uint32_t)(0x4u));
  /* 11681648 push 0 */
  push32((uint32_t)(0x0u));
  /* 1168164a call esi */
  call_ind((uint32_t)(ESI), 0x1168164cu);
  /* 1168164c push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11681651 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681653 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681655 call esi */
  call_ind((uint32_t)(ESI), 0x11681657u);
  /* 11681657 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 1168165c push 0 */
  push32((uint32_t)(0x0u));
  /* 1168165e push 0 */
  push32((uint32_t)(0x0u));
  /* 11681660 call esi */
  call_ind((uint32_t)(ESI), 0x11681662u);
  /* 11681662 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11681667 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681669 push 0 */
  push32((uint32_t)(0x0u));
  /* 1168166b call esi */
  call_ind((uint32_t)(ESI), 0x1168166du);
  /* 1168166d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681670 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681672 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681674 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681676 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681678 push 0x1168916c */
  push32((uint32_t)(0x1168916cu));
  /* 1168167d push 1 */
  push32((uint32_t)(0x1u));
  /* 1168167f call ebp */
  call_ind((uint32_t)(EBP), 0x11681681u);
  /* 11681681 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681684:;
  /* 11681684 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681686 call dword ptr [0x11688160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688160))), 0x1168168cu);
  /* 1168168c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168168f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681692 jne 0x116816ed */
  if (!C.zf) goto L_116816ed;
  /* 11681694 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11681699 push 3 */
  push32((uint32_t)(0x3u));
  /* 1168169b push 0 */
  push32((uint32_t)(0x0u));
  /* 1168169d call esi */
  call_ind((uint32_t)(ESI), 0x1168169fu);
  /* 1168169f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 116816a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116816a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 116816a8 call esi */
  call_ind((uint32_t)(ESI), 0x116816aau);
  /* 116816aa push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 116816af push 4 */
  push32((uint32_t)(0x4u));
  /* 116816b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 116816b3 call esi */
  call_ind((uint32_t)(ESI), 0x116816b5u);
  /* 116816b5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 116816ba push 5 */
  push32((uint32_t)(0x5u));
  /* 116816bc push 0 */
  push32((uint32_t)(0x0u));
  /* 116816be call esi */
  call_ind((uint32_t)(ESI), 0x116816c0u);
  /* 116816c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 116816c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116816c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116816c9 call esi */
  call_ind((uint32_t)(ESI), 0x116816cbu);
  /* 116816cb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 116816d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116816d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116816d4 call esi */
  call_ind((uint32_t)(ESI), 0x116816d6u);
  /* 116816d6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116816d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 116816db push 1 */
  push32((uint32_t)(0x1u));
  /* 116816dd push 1 */
  push32((uint32_t)(0x1u));
  /* 116816df push 1 */
  push32((uint32_t)(0x1u));
  /* 116816e1 push 0x1168916c */
  push32((uint32_t)(0x1168916cu));
  /* 116816e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116816e8 call ebp */
  call_ind((uint32_t)(EBP), 0x116816eau);
  /* 116816ea add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116816ed:;
  /* 116816ed push 0 */
  push32((uint32_t)(0x0u));
  /* 116816ef call dword ptr [0x11688160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688160))), 0x116816f5u);
  /* 116816f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116816f8 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116816fb jne 0x11681755 */
  if (!C.zf) goto L_11681755;
  /* 116816fd push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11681702 push eax */
  push32((uint32_t)(EAX));
  /* 11681703 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681705 call esi */
  call_ind((uint32_t)(ESI), 0x11681707u);
  /* 11681707 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1168170c push 1 */
  push32((uint32_t)(0x1u));
  /* 1168170e push 0 */
  push32((uint32_t)(0x0u));
  /* 11681710 call esi */
  call_ind((uint32_t)(ESI), 0x11681712u);
  /* 11681712 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11681717 push 4 */
  push32((uint32_t)(0x4u));
  /* 11681719 push 0 */
  push32((uint32_t)(0x0u));
  /* 1168171b call esi */
  call_ind((uint32_t)(ESI), 0x1168171du);
  /* 1168171d push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11681722 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681724 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681726 call esi */
  call_ind((uint32_t)(ESI), 0x11681728u);
  /* 11681728 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1168172d push 0 */
  push32((uint32_t)(0x0u));
  /* 1168172f push 0 */
  push32((uint32_t)(0x0u));
  /* 11681731 call esi */
  call_ind((uint32_t)(ESI), 0x11681733u);
  /* 11681733 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11681738 push 2 */
  push32((uint32_t)(0x2u));
  /* 1168173a push 0 */
  push32((uint32_t)(0x0u));
  /* 1168173c call esi */
  call_ind((uint32_t)(ESI), 0x1168173eu);
  /* 1168173e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681741 push 3 */
  push32((uint32_t)(0x3u));
  /* 11681743 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681745 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681747 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681749 push 0x1168916c */
  push32((uint32_t)(0x1168916cu));
  /* 1168174e push 1 */
  push32((uint32_t)(0x1u));
  /* 11681750 call ebp */
  call_ind((uint32_t)(EBP), 0x11681752u);
  /* 11681752 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681755:;
  /* 11681755 mov esi, dword ptr [0x116880e0] */
  ESI = (r32((uint32_t)(0x116880e0)));
L_1168175b:;
  /* 1168175b push 5 */
  push32((uint32_t)(0x5u));
  /* 1168175d call dword ptr [0x116880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880fc))), 0x11681763u);
  /* 11681763 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681766 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681768 je 0x1168178e */
  if (C.zf) goto L_1168178e;
  /* 1168176a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1168176f push 5 */
  push32((uint32_t)(0x5u));
  /* 11681771 call ebx */
  call_ind((uint32_t)(EBX), 0x11681773u);
  /* 11681773 push 0x11689fa8 */
  push32((uint32_t)(0x11689fa8u));
  /* 11681778 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1168177d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1168177f push 5 */
  push32((uint32_t)(0x5u));
  /* 11681781 push 0x11689ec8 */
  push32((uint32_t)(0x11689ec8u));
  /* 11681786 call 0x11681090 */
  push32(0x1168178bu); f_11681090();
  /* 1168178b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1168178e:;
  /* 1168178e push 2 */
  push32((uint32_t)(0x2u));
  /* 11681790 call esi */
  call_ind((uint32_t)(ESI), 0x11681792u);
  /* 11681792 mov ebx, dword ptr [0x116880f4] */
  EBX = (r32((uint32_t)(0x116880f4)));
  /* 11681798 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168179b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1168179d je 0x116817c4 */
  if (C.zf) goto L_116817c4;
  /* 1168179f push 1 */
  push32((uint32_t)(0x1u));
  /* 116817a1 call ebx */
  call_ind((uint32_t)(EBX), 0x116817a3u);
  /* 116817a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116817a6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116817a8 je 0x116817c4 */
  if (C.zf) goto L_116817c4;
  /* 116817aa push 0 */
  push32((uint32_t)(0x0u));
  /* 116817ac push 2 */
  push32((uint32_t)(0x2u));
  /* 116817ae call edi */
  call_ind((uint32_t)(EDI), 0x116817b0u);
  /* 116817b0 push 0x11689164 */
  push32((uint32_t)(0x11689164u));
  /* 116817b5 call dword ptr [0x116880dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880dc))), 0x116817bbu);
  /* 116817bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116817be call dword ptr [0x11688104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688104))), 0x116817c4u);
L_116817c4:;
  /* 116817c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 116817c6 call esi */
  call_ind((uint32_t)(ESI), 0x116817c8u);
  /* 116817c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116817cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116817cd je 0x116817f4 */
  if (C.zf) goto L_116817f4;
  /* 116817cf push 0 */
  push32((uint32_t)(0x0u));
  /* 116817d1 call ebx */
  call_ind((uint32_t)(EBX), 0x116817d3u);
  /* 116817d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116817d6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116817d8 je 0x116817f4 */
  if (C.zf) goto L_116817f4;
  /* 116817da push 0 */
  push32((uint32_t)(0x0u));
  /* 116817dc push 3 */
  push32((uint32_t)(0x3u));
  /* 116817de call edi */
  call_ind((uint32_t)(EDI), 0x116817e0u);
  /* 116817e0 push 0x1168915c */
  push32((uint32_t)(0x1168915cu));
  /* 116817e5 call dword ptr [0x116880dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880dc))), 0x116817ebu);
  /* 116817eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116817ee call dword ptr [0x11688108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688108))), 0x116817f4u);
L_116817f4:;
  /* 116817f4 push 3 */
  push32((uint32_t)(0x3u));
  /* 116817f6 call esi */
  call_ind((uint32_t)(ESI), 0x116817f8u);
  /* 116817f8 mov ebp, dword ptr [0x11688100] */
  EBP = (r32((uint32_t)(0x11688100)));
  /* 116817fe mov ebx, dword ptr [0x11688150] */
  EBX = (r32((uint32_t)(0x11688150)));
  /* 11681804 mov esi, dword ptr [0x11688110] */
  ESI = (r32((uint32_t)(0x11688110)));
  /* 1168180a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168180d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1168180f je 0x1168187d */
  if (C.zf) goto L_1168187d;
  /* 11681811 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681813 call dword ptr [0x116880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880fc))), 0x11681819u);
  /* 11681819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168181c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1168181e je 0x1168187d */
  if (C.zf) goto L_1168187d;
  /* 11681820 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681822 push 3 */
  push32((uint32_t)(0x3u));
  /* 11681824 call edi */
  call_ind((uint32_t)(EDI), 0x11681826u);
  /* 11681826 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681828 push 4 */
  push32((uint32_t)(0x4u));
  /* 1168182a call edi */
  call_ind((uint32_t)(EDI), 0x1168182cu);
  /* 1168182c push 1 */
  push32((uint32_t)(0x1u));
  /* 1168182e push 5 */
  push32((uint32_t)(0x5u));
  /* 11681830 call edi */
  call_ind((uint32_t)(EDI), 0x11681832u);
  /* 11681832 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11681834 push 0x11689f70 */
  push32((uint32_t)(0x11689f70u));
  /* 11681839 push 4 */
  push32((uint32_t)(0x4u));
  /* 1168183b push 0x11689f50 */
  push32((uint32_t)(0x11689f50u));
  /* 11681840 push 0x11689ea8 */
  push32((uint32_t)(0x11689ea8u));
  /* 11681845 push 0x11689f10 */
  push32((uint32_t)(0x11689f10u));
  /* 1168184a call ebp */
  call_ind((uint32_t)(EBP), 0x1168184cu);
  /* 1168184c push 0 */
  push32((uint32_t)(0x0u));
  /* 1168184e push 0x11689f10 */
  push32((uint32_t)(0x11689f10u));
  /* 11681853 call ebx */
  call_ind((uint32_t)(EBX), 0x11681855u);
  /* 11681855 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681857 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11681859 push 0x11689f78 */
  push32((uint32_t)(0x11689f78u));
  /* 1168185e push 4 */
  push32((uint32_t)(0x4u));
  /* 11681860 call esi */
  call_ind((uint32_t)(ESI), 0x11681862u);
  /* 11681862 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681865 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681867 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11681869 push 0x11689f80 */
  push32((uint32_t)(0x11689f80u));
  /* 1168186e push 4 */
  push32((uint32_t)(0x4u));
  /* 11681870 call esi */
  call_ind((uint32_t)(ESI), 0x11681872u);
  /* 11681872 push 4 */
  push32((uint32_t)(0x4u));
  /* 11681874 call dword ptr [0x1168814c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168814c))), 0x1168187au);
  /* 1168187a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1168187d:;
  /* 1168187d push 4 */
  push32((uint32_t)(0x4u));
  /* 1168187f call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x11681885u);
  /* 11681885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681888 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1168188a je 0x11681948 */
  if (C.zf) goto L_11681948;
  /* 11681890 push 0x11689f10 */
  push32((uint32_t)(0x11689f10u));
  /* 11681895 push 0x11689f80 */
  push32((uint32_t)(0x11689f80u));
  /* 1168189a call dword ptr [0x11688114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688114))), 0x116818a0u);
  /* 116818a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116818a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116818a5 je 0x11681948 */
  if (C.zf) goto L_11681948;
  /* 116818ab push 0 */
  push32((uint32_t)(0x0u));
  /* 116818ad push 4 */
  push32((uint32_t)(0x4u));
  /* 116818af call edi */
  call_ind((uint32_t)(EDI), 0x116818b1u);
  /* 116818b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 116818b3 push 6 */
  push32((uint32_t)(0x6u));
  /* 116818b5 call edi */
  call_ind((uint32_t)(EDI), 0x116818b7u);
  /* 116818b7 push 0x11689154 */
  push32((uint32_t)(0x11689154u));
  /* 116818bc call dword ptr [0x116880dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880dc))), 0x116818c2u);
  /* 116818c2 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 116818c7 push 0x11689ec0 */
  push32((uint32_t)(0x11689ec0u));
  /* 116818cc push 0 */
  push32((uint32_t)(0x0u));
  /* 116818ce push 0x11689e88 */
  push32((uint32_t)(0x11689e88u));
  /* 116818d3 push 0x11689ea8 */
  push32((uint32_t)(0x11689ea8u));
  /* 116818d8 push 0x11689e80 */
  push32((uint32_t)(0x11689e80u));
  /* 116818dd call ebp */
  call_ind((uint32_t)(EBP), 0x116818dfu);
  /* 116818df push 0x80 */
  push32((uint32_t)(0x80u));
  /* 116818e4 push 0x11689ec0 */
  push32((uint32_t)(0x11689ec0u));
  /* 116818e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 116818eb push 0x11689f98 */
  push32((uint32_t)(0x11689f98u));
  /* 116818f0 push 0x11689ea0 */
  push32((uint32_t)(0x11689ea0u));
  /* 116818f5 push 0x11689ee8 */
  push32((uint32_t)(0x11689ee8u));
  /* 116818fa call ebp */
  call_ind((uint32_t)(EBP), 0x116818fcu);
  /* 116818fc add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116818ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11681901 push 0x11689f10 */
  push32((uint32_t)(0x11689f10u));
  /* 11681906 call ebx */
  call_ind((uint32_t)(EBX), 0x11681908u);
  /* 11681908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1168190a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1168190c push 0x11689f88 */
  push32((uint32_t)(0x11689f88u));
  /* 11681911 push 4 */
  push32((uint32_t)(0x4u));
  /* 11681913 call esi */
  call_ind((uint32_t)(ESI), 0x11681915u);
  /* 11681915 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681917 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11681919 push 0x11689f90 */
  push32((uint32_t)(0x11689f90u));
  /* 1168191e push 4 */
  push32((uint32_t)(0x4u));
  /* 11681920 call esi */
  call_ind((uint32_t)(ESI), 0x11681922u);
  /* 11681922 push 0x11689ec0 */
  push32((uint32_t)(0x11689ec0u));
  /* 11681927 call dword ptr [0x1168810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168810c))), 0x1168192du);
  /* 1168192d push 0x11689eb8 */
  push32((uint32_t)(0x11689eb8u));
  /* 11681932 push 0x11689e80 */
  push32((uint32_t)(0x11689e80u));
  /* 11681937 call dword ptr [0x1168811c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168811c))), 0x1168193du);
  /* 1168193d push 4 */
  push32((uint32_t)(0x4u));
  /* 1168193f call dword ptr [0x1168814c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168814c))), 0x11681945u);
  /* 11681945 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681948:;
  /* 11681948 push 5 */
  push32((uint32_t)(0x5u));
  /* 1168194a call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x11681950u);
  /* 11681950 mov esi, dword ptr [0x11688120] */
  ESI = (r32((uint32_t)(0x11688120)));
  /* 11681956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681959 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1168195b je 0x1168199d */
  if (C.zf) goto L_1168199d;
  /* 1168195d push 0x11689f10 */
  push32((uint32_t)(0x11689f10u));
  /* 11681962 push 0x11689f90 */
  push32((uint32_t)(0x11689f90u));
  /* 11681967 call dword ptr [0x11688114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688114))), 0x1168196du);
  /* 1168196d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11681972 je 0x1168199d */
  if (C.zf) goto L_1168199d;
  /* 11681974 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681976 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681978 call edi */
  call_ind((uint32_t)(EDI), 0x1168197au);
  /* 1168197a push 1 */
  push32((uint32_t)(0x1u));
  /* 1168197c push 3 */
  push32((uint32_t)(0x3u));
  /* 1168197e call edi */
  call_ind((uint32_t)(EDI), 0x11681980u);
  /* 11681980 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681982 push 0x11689f10 */
  push32((uint32_t)(0x11689f10u));
  /* 11681987 call ebx */
  call_ind((uint32_t)(EBX), 0x11681989u);
  /* 11681989 push 4 */
  push32((uint32_t)(0x4u));
  /* 1168198b call esi */
  call_ind((uint32_t)(ESI), 0x1168198du);
  /* 1168198d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11681992 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681994 call dword ptr [0x116880ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880ec))), 0x1168199au);
  /* 1168199a add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1168199d:;
  /* 1168199d push 6 */
  push32((uint32_t)(0x6u));
  /* 1168199f call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x116819a5u);
  /* 116819a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116819a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116819aa je 0x116819f3 */
  if (C.zf) goto L_116819f3;
  /* 116819ac push 0x11689eb8 */
  push32((uint32_t)(0x11689eb8u));
  /* 116819b1 push 0x11689ed8 */
  push32((uint32_t)(0x11689ed8u));
  /* 116819b6 call dword ptr [0x11688114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688114))), 0x116819bcu);
  /* 116819bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116819bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116819c1 je 0x116819f3 */
  if (C.zf) goto L_116819f3;
  /* 116819c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116819c5 push 6 */
  push32((uint32_t)(0x6u));
  /* 116819c7 call edi */
  call_ind((uint32_t)(EDI), 0x116819c9u);
  /* 116819c9 push 0x1168914c */
  push32((uint32_t)(0x1168914cu));
  /* 116819ce call dword ptr [0x116880dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880dc))), 0x116819d4u);
  /* 116819d4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 116819d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 116819db push 0 */
  push32((uint32_t)(0x0u));
  /* 116819dd call dword ptr [0x11688118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688118))), 0x116819e3u);
  /* 116819e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116819e5 push 0x11689eb8 */
  push32((uint32_t)(0x11689eb8u));
  /* 116819ea call ebx */
  call_ind((uint32_t)(EBX), 0x116819ecu);
  /* 116819ec push 0 */
  push32((uint32_t)(0x0u));
  /* 116819ee call esi */
  call_ind((uint32_t)(ESI), 0x116819f0u);
  /* 116819f0 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116819f3:;
  /* 116819f3 push 7 */
  push32((uint32_t)(0x7u));
  /* 116819f5 call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x116819fbu);
  /* 116819fb mov esi, dword ptr [0x11688154] */
  ESI = (r32((uint32_t)(0x11688154)));
  /* 11681a01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681a04 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681a06 je 0x11681ad5 */
  if (C.zf) goto L_11681ad5;
  /* 11681a0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11681a0e call dword ptr [0x116880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880fc))), 0x11681a14u);
  /* 11681a14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681a17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681a19 je 0x11681ad5 */
  if (C.zf) goto L_11681ad5;
  /* 11681a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11681a21 push 7 */
  push32((uint32_t)(0x7u));
  /* 11681a23 call edi */
  call_ind((uint32_t)(EDI), 0x11681a25u);
  /* 11681a25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681a27 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681a29 call edi */
  call_ind((uint32_t)(EDI), 0x11681a2bu);
  /* 11681a2b call 0x11681000 */
  push32(0x11681a30u); f_11681000();
  /* 11681a30 push eax */
  push32((uint32_t)(EAX));
  /* 11681a31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681a33 call dword ptr [0x116880ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880ec))), 0x11681a39u);
  /* 11681a39 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11681a3e push 0x11689fa0 */
  push32((uint32_t)(0x11689fa0u));
  /* 11681a43 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681a45 push 0x11689f20 */
  push32((uint32_t)(0x11689f20u));
  /* 11681a4a push 0x11689eb0 */
  push32((uint32_t)(0x11689eb0u));
  /* 11681a4f push 0x11689f68 */
  push32((uint32_t)(0x11689f68u));
  /* 11681a54 call ebp */
  call_ind((uint32_t)(EBP), 0x11681a56u);
  /* 11681a56 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11681a5b push 0x11689fa0 */
  push32((uint32_t)(0x11689fa0u));
  /* 11681a60 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681a62 push 0x11689ed0 */
  push32((uint32_t)(0x11689ed0u));
  /* 11681a67 push 0x11689eb0 */
  push32((uint32_t)(0x11689eb0u));
  /* 11681a6c push 0x11689e98 */
  push32((uint32_t)(0x11689e98u));
  /* 11681a71 call ebp */
  call_ind((uint32_t)(EBP), 0x11681a73u);
  /* 11681a73 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681a78 push 0x11689f68 */
  push32((uint32_t)(0x11689f68u));
  /* 11681a7d call ebx */
  call_ind((uint32_t)(EBX), 0x11681a7fu);
  /* 11681a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11681a81 push 0x11689e98 */
  push32((uint32_t)(0x11689e98u));
  /* 11681a86 call ebx */
  call_ind((uint32_t)(EBX), 0x11681a88u);
  /* 11681a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681a8a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11681a8c push 0x11689ef0 */
  push32((uint32_t)(0x11689ef0u));
  /* 11681a91 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681a93 call esi */
  call_ind((uint32_t)(ESI), 0x11681a95u);
  /* 11681a95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681a97 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11681a99 push 0x11689ef8 */
  push32((uint32_t)(0x11689ef8u));
  /* 11681a9e push 5 */
  push32((uint32_t)(0x5u));
  /* 11681aa0 call esi */
  call_ind((uint32_t)(ESI), 0x11681aa2u);
  /* 11681aa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681aa4 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11681aa9 push 0x11689f00 */
  push32((uint32_t)(0x11689f00u));
  /* 11681aae push 5 */
  push32((uint32_t)(0x5u));
  /* 11681ab0 call esi */
  call_ind((uint32_t)(ESI), 0x11681ab2u);
  /* 11681ab2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681ab5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681ab7 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11681ab9 push 0x11689f08 */
  push32((uint32_t)(0x11689f08u));
  /* 11681abe push 5 */
  push32((uint32_t)(0x5u));
  /* 11681ac0 call esi */
  call_ind((uint32_t)(ESI), 0x11681ac2u);
  /* 11681ac2 push 0x11689f18 */
  push32((uint32_t)(0x11689f18u));
  /* 11681ac7 push 0x11689f68 */
  push32((uint32_t)(0x11689f68u));
  /* 11681acc call dword ptr [0x1168811c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168811c))), 0x11681ad2u);
  /* 11681ad2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681ad5:;
  /* 11681ad5 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681ad7 call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x11681addu);
  /* 11681add add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681ae0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681ae2 je 0x11681b02 */
  if (C.zf) goto L_11681b02;
  /* 11681ae4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681ae6 call dword ptr [0x116880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880fc))), 0x11681aecu);
  /* 11681aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681aef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681af1 je 0x11681b02 */
  if (C.zf) goto L_11681b02;
  /* 11681af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681af5 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681af7 call edi */
  call_ind((uint32_t)(EDI), 0x11681af9u);
  /* 11681af9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681afb push 7 */
  push32((uint32_t)(0x7u));
  /* 11681afd call edi */
  call_ind((uint32_t)(EDI), 0x11681affu);
  /* 11681aff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681b02:;
  /* 11681b02 push 0x11689f18 */
  push32((uint32_t)(0x11689f18u));
  /* 11681b07 push 0x11689ef8 */
  push32((uint32_t)(0x11689ef8u));
  /* 11681b0c call dword ptr [0x11688114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688114))), 0x11681b12u);
  /* 11681b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681b15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11681b17 je 0x11681b2e */
  if (C.zf) goto L_11681b2e;
  /* 11681b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681b1b push 0x11689ef8 */
  push32((uint32_t)(0x11689ef8u));
  /* 11681b20 push 0x11689f18 */
  push32((uint32_t)(0x11689f18u));
  /* 11681b25 call dword ptr [0x11688128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688128))), 0x11681b2bu);
  /* 11681b2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681b2e:;
  /* 11681b2e push 0x11689f18 */
  push32((uint32_t)(0x11689f18u));
  /* 11681b33 push 0x11689f00 */
  push32((uint32_t)(0x11689f00u));
  /* 11681b38 call dword ptr [0x11688114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688114))), 0x11681b3eu);
  /* 11681b3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11681b43 je 0x11681b5a */
  if (C.zf) goto L_11681b5a;
  /* 11681b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681b47 push 0x11689f00 */
  push32((uint32_t)(0x11689f00u));
  /* 11681b4c push 0x11689f18 */
  push32((uint32_t)(0x11689f18u));
  /* 11681b51 call dword ptr [0x11688128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688128))), 0x11681b57u);
  /* 11681b57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681b5a:;
  /* 11681b5a push 9 */
  push32((uint32_t)(0x9u));
  /* 11681b5c call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x11681b62u);
  /* 11681b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681b65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681b67 je 0x11681b9c */
  if (C.zf) goto L_11681b9c;
  /* 11681b69 push 5 */
  push32((uint32_t)(0x5u));
  /* 11681b6b push 0x11689fa0 */
  push32((uint32_t)(0x11689fa0u));
  /* 11681b70 call dword ptr [0x1168812c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168812c))), 0x11681b76u);
  /* 11681b76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681b79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11681b7b jne 0x11681b9c */
  if (!C.zf) goto L_11681b9c;
  /* 11681b7d push eax */
  push32((uint32_t)(EAX));
  /* 11681b7e push 9 */
  push32((uint32_t)(0x9u));
  /* 11681b80 call edi */
  call_ind((uint32_t)(EDI), 0x11681b82u);
  /* 11681b82 push 0x11689144 */
  push32((uint32_t)(0x11689144u));
  /* 11681b87 call dword ptr [0x116880dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880dc))), 0x11681b8du);
  /* 11681b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11681b8f push 7 */
  push32((uint32_t)(0x7u));
  /* 11681b91 call edi */
  call_ind((uint32_t)(EDI), 0x11681b93u);
  /* 11681b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681b95 push 8 */
  push32((uint32_t)(0x8u));
  /* 11681b97 call edi */
  call_ind((uint32_t)(EDI), 0x11681b99u);
  /* 11681b99 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681b9c:;
  /* 11681b9c push 0xa */
  push32((uint32_t)(0xau));
  /* 11681b9e call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x11681ba4u);
  /* 11681ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681ba7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681ba9 je 0x11681c0c */
  if (C.zf) goto L_11681c0c;
  /* 11681bab push 3 */
  push32((uint32_t)(0x3u));
  /* 11681bad call dword ptr [0x116880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880fc))), 0x11681bb3u);
  /* 11681bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681bb6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681bb8 je 0x11681c0c */
  if (C.zf) goto L_11681c0c;
  /* 11681bba push 0 */
  push32((uint32_t)(0x0u));
  /* 11681bbc push 0xa */
  push32((uint32_t)(0xau));
  /* 11681bbe call edi */
  call_ind((uint32_t)(EDI), 0x11681bc0u);
  /* 11681bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681bc2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11681bc4 call edi */
  call_ind((uint32_t)(EDI), 0x11681bc6u);
  /* 11681bc6 call 0x11681000 */
  push32(0x11681bcbu); f_11681000();
  /* 11681bcb add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11681bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11681bd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11681bd3 call dword ptr [0x116880ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880ec))), 0x11681bd9u);
  /* 11681bd9 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11681bdb push 0x11689f58 */
  push32((uint32_t)(0x11689f58u));
  /* 11681be0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681be2 push 0x11689e90 */
  push32((uint32_t)(0x11689e90u));
  /* 11681be7 push 0x11689ea8 */
  push32((uint32_t)(0x11689ea8u));
  /* 11681bec push 0x11689f40 */
  push32((uint32_t)(0x11689f40u));
  /* 11681bf1 call ebp */
  call_ind((uint32_t)(EBP), 0x11681bf3u);
  /* 11681bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681bf5 push 0x11689f40 */
  push32((uint32_t)(0x11689f40u));
  /* 11681bfa call ebx */
  call_ind((uint32_t)(EBX), 0x11681bfcu);
  /* 11681bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11681bfe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11681c00 push 0x11689f28 */
  push32((uint32_t)(0x11689f28u));
  /* 11681c05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681c07 call esi */
  call_ind((uint32_t)(ESI), 0x11681c09u);
  /* 11681c09 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681c0c:;
  /* 11681c0c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11681c0e call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x11681c14u);
  /* 11681c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681c17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681c19 je 0x11681c39 */
  if (C.zf) goto L_11681c39;
  /* 11681c1b push 3 */
  push32((uint32_t)(0x3u));
  /* 11681c1d call dword ptr [0x116880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880fc))), 0x11681c23u);
  /* 11681c23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681c26 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681c28 je 0x11681c39 */
  if (C.zf) goto L_11681c39;
  /* 11681c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11681c2c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11681c2e call edi */
  call_ind((uint32_t)(EDI), 0x11681c30u);
  /* 11681c30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681c32 push 0xa */
  push32((uint32_t)(0xau));
  /* 11681c34 call edi */
  call_ind((uint32_t)(EDI), 0x11681c36u);
  /* 11681c36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681c39:;
  /* 11681c39 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11681c3b call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x11681c41u);
  /* 11681c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681c44 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681c46 je 0x11681caf */
  if (C.zf) goto L_11681caf;
  /* 11681c48 push 4 */
  push32((uint32_t)(0x4u));
  /* 11681c4a call dword ptr [0x116880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880fc))), 0x11681c50u);
  /* 11681c50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681c53 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681c55 je 0x11681caf */
  if (C.zf) goto L_11681caf;
  /* 11681c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681c59 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11681c5b call edi */
  call_ind((uint32_t)(EDI), 0x11681c5du);
  /* 11681c5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11681c5f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11681c61 call edi */
  call_ind((uint32_t)(EDI), 0x11681c63u);
  /* 11681c63 call 0x11681000 */
  push32(0x11681c68u); f_11681000();
  /* 11681c68 add eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11681c6d push eax */
  push32((uint32_t)(EAX));
  /* 11681c6e push 4 */
  push32((uint32_t)(0x4u));
  /* 11681c70 call dword ptr [0x116880ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880ec))), 0x11681c76u);
  /* 11681c76 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11681c7b push 0x11689f60 */
  push32((uint32_t)(0x11689f60u));
  /* 11681c80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681c82 push 0x11689e90 */
  push32((uint32_t)(0x11689e90u));
  /* 11681c87 push 0x11689ea8 */
  push32((uint32_t)(0x11689ea8u));
  /* 11681c8c push 0x11689f38 */
  push32((uint32_t)(0x11689f38u));
  /* 11681c91 call ebp */
  call_ind((uint32_t)(EBP), 0x11681c93u);
  /* 11681c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681c95 push 0x11689f38 */
  push32((uint32_t)(0x11689f38u));
  /* 11681c9a call ebx */
  call_ind((uint32_t)(EBX), 0x11681c9cu);
  /* 11681c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11681c9e push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11681ca3 push 0x11689f30 */
  push32((uint32_t)(0x11689f30u));
  /* 11681ca8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11681caa call esi */
  call_ind((uint32_t)(ESI), 0x11681cacu);
  /* 11681cac add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681caf:;
  /* 11681caf push 0xd */
  push32((uint32_t)(0xdu));
  /* 11681cb1 call dword ptr [0x116880e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880e0))), 0x11681cb7u);
  /* 11681cb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681cba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681cbc je 0x11681cdc */
  if (C.zf) goto L_11681cdc;
  /* 11681cbe push 4 */
  push32((uint32_t)(0x4u));
  /* 11681cc0 call dword ptr [0x116880fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880fc))), 0x11681cc6u);
  /* 11681cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681cc9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11681ccb je 0x11681cdc */
  if (C.zf) goto L_11681cdc;
  /* 11681ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 11681ccf push 0xd */
  push32((uint32_t)(0xdu));
  /* 11681cd1 call edi */
  call_ind((uint32_t)(EDI), 0x11681cd3u);
  /* 11681cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681cd5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11681cd7 call edi */
  call_ind((uint32_t)(EDI), 0x11681cd9u);
  /* 11681cd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681cdc:;
  /* 11681cdc mov esi, dword ptr [0x11688114] */
  ESI = (r32((uint32_t)(0x11688114)));
  /* 11681ce2 push 0x11689f40 */
  push32((uint32_t)(0x11689f40u));
  /* 11681ce7 push 0x11689f28 */
  push32((uint32_t)(0x11689f28u));
  /* 11681cec call esi */
  call_ind((uint32_t)(ESI), 0x11681ceeu);
  /* 11681cee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681cf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11681cf3 je 0x11681d0a */
  if (C.zf) goto L_11681d0a;
  /* 11681cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681cf7 push 0x11689f28 */
  push32((uint32_t)(0x11689f28u));
  /* 11681cfc push 0x11689f40 */
  push32((uint32_t)(0x11689f40u));
  /* 11681d01 call dword ptr [0x11688128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688128))), 0x11681d07u);
  /* 11681d07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681d0a:;
  /* 11681d0a push 0x11689f38 */
  push32((uint32_t)(0x11689f38u));
  /* 11681d0f push 0x11689f30 */
  push32((uint32_t)(0x11689f30u));
  /* 11681d14 call esi */
  call_ind((uint32_t)(ESI), 0x11681d16u);
  /* 11681d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681d19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11681d1b pop edi */
  EDI = (pop32());
  /* 11681d1c pop esi */
  ESI = (pop32());
  /* 11681d1d pop ebp */
  EBP = (pop32());
  /* 11681d1e pop ebx */
  EBX = (pop32());
  /* 11681d1f je 0x11681d36 */
  if (C.zf) goto L_11681d36;
  /* 11681d21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11681d23 push 0x11689f30 */
  push32((uint32_t)(0x11689f30u));
  /* 11681d28 push 0x11689f38 */
  push32((uint32_t)(0x11689f38u));
  /* 11681d2d call dword ptr [0x11688128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688128))), 0x11681d33u);
  /* 11681d33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11681d36:;
  /* 11681d36 ret  */
  ESPCHK(0x116814c0u, _esp0);
  ESP += 4; return;
L_11681d37:;
  /* 11681d37 mov ebx, dword ptr [0x116880ec] */
  EBX = (r32((uint32_t)(0x116880ec)));
  /* 11681d3d jmp 0x1168175b */
  goto L_1168175b;
}

/* FUN_10001d50 @ 0x11681d50 (20 bytes, 6 insns) */
void f_11681d50(void) {
  FTRACE(0x11681d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681d50 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11681d54 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11681d55 jne 0x11681d5c */
  if (!C.zf) goto L_11681d5c;
  /* 11681d57 call 0x11681260 */
  push32(0x11681d5cu); f_11681260();
L_11681d5c:;
  /* 11681d5c mov eax, 1 */
  EAX = (0x1u);
  /* 11681d61 ret 0xc */
  ESPCHK(0x11681d50u, _esp0);
  ESP += 16; return;
}

/* FUN_10001d70 @ 0x11681d70 (11 bytes, 4 insns) */
void f_11681d70(void) {
  FTRACE(0x11681d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681d70 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11681d74 call 0x116820b4 */
  push32(0x11681d79u); f_116820b4();
  /* 11681d79 pop ecx */
  ECX = (pop32());
  /* 11681d7a ret  */
  ESPCHK(0x11681d70u, _esp0);
  ESP += 4; return;
}

/* operator_new @ 0x11681d7b (14 bytes, 6 insns) */
void f_11681d7b(void) {
  FTRACE(0x11681d7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681d7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11681d7d push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11681d81 call 0x1168210e */
  push32(0x11681d86u); f_1168210e();
  /* 11681d86 pop ecx */
  ECX = (pop32());
  /* 11681d87 pop ecx */
  ECX = (pop32());
  /* 11681d88 ret  */
  ESPCHK(0x11681d7bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001d89 @ 0x11681d89 (13 bytes, 4 insns) */
void f_11681d89(void) {
  FTRACE(0x11681d89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681d89 call 0x1168220d */
  push32(0x11681d8eu); f_1168220d();
  /* 11681d8e mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11681d92 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11681d95 ret  */
  ESPCHK(0x11681d89u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11681d96 (34 bytes, 9 insns) */
void f_11681d96(void) {
  FTRACE(0x11681d96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681d96 call 0x1168220d */
  push32(0x11681d9bu); f_1168220d();
  /* 11681d9b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11681d9e imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11681da4 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11681daa mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11681dad mov eax, ecx */
  EAX = (ECX);
  /* 11681daf shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11681db2 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11681db7 ret  */
  ESPCHK(0x11681d96u, _esp0);
  ESP += 4; return;
}

/* FUN_10001db8 @ 0x11681db8 (23 bytes, 6 insns) */
void f_11681db8(void) {
  FTRACE(0x11681db8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681db8 call 0x11681dd0 */
  push32(0x11681dbdu); f_11681dd0();
  /* 11681dbd call 0x11682364 */
  push32(0x11681dc2u); f_11682364();
  /* 11681dc2 mov dword ptr [0x11689fb8], eax */
  w32((uint32_t)(0x11689fb8), (EAX));
  /* 11681dc7 call 0x11682314 */
  push32(0x11681dccu); f_11682314();
  /* 11681dcc fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11681dce ret  */
  ESPCHK(0x11681db8u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dd0 @ 0x11681dd0 (56 bytes, 8 insns) */
void f_11681dd0(void) {
  FTRACE(0x11681dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681dd0 mov eax, 0x1168273d */
  EAX = (0x1168273du);
  /* 11681dd5 mov dword ptr [0x116891a8], 0x116823e7 */
  w32((uint32_t)(0x116891a8), (0x116823e7u));
  /* 11681ddf mov dword ptr [0x116891a4], eax */
  w32((uint32_t)(0x116891a4), (EAX));
  /* 11681de4 mov dword ptr [0x116891ac], 0x1168244d */
  w32((uint32_t)(0x116891ac), (0x1168244du));
  /* 11681dee mov dword ptr [0x116891b0], 0x1168238d */
  w32((uint32_t)(0x116891b0), (0x1168238du));
  /* 11681df8 mov dword ptr [0x116891b4], 0x11682435 */
  w32((uint32_t)(0x116891b4), (0x11682435u));
  /* 11681e02 mov dword ptr [0x116891b8], eax */
  w32((uint32_t)(0x116891b8), (EAX));
  /* 11681e07 ret  */
  ESPCHK(0x11681dd0u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11681e08 (39 bytes, 16 insns) */
void f_11681e08(void) {
  FTRACE(0x11681e08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681e08 push ebp */
  push32((uint32_t)(EBP));
  /* 11681e09 mov ebp, esp */
  EBP = (ESP);
  /* 11681e0b add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681e0e wait  */
  /* wait (no observable integer/reg state) */
  /* 11681e0f fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11681e12 wait  */
  /* wait (no observable integer/reg state) */
  /* 11681e13 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11681e17 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11681e1a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11681e1e fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11681e21 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11681e24 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11681e27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11681e2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11681e2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11681e2e ret  */
  ESPCHK(0x11681e08u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e2f @ 0x11681e2f (220 bytes, 75 insns) */
void f_11681e2f(void) {
  FTRACE(0x11681e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681e2f push ebp */
  push32((uint32_t)(EBP));
  /* 11681e30 mov ebp, esp */
  EBP = (ESP);
  /* 11681e32 sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11681e38 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11681e3b push eax */
  push32((uint32_t)(EAX));
  /* 11681e3c call dword ptr [0x11688068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688068))), 0x11681e42u);
  /* 11681e42 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11681e45 push eax */
  push32((uint32_t)(EAX));
  /* 11681e46 call dword ptr [0x11688064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688064))), 0x11681e4cu);
  /* 11681e4c mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 11681e50 cmp ax, word ptr [0x11689fd2] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11689fd2))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11681e57 jne 0x11681e94 */
  if (!C.zf) goto L_11681e94;
  /* 11681e59 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 11681e5d cmp ax, word ptr [0x11689fd0] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11689fd0))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11681e64 jne 0x11681e94 */
  if (!C.zf) goto L_11681e94;
  /* 11681e66 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 11681e6a cmp ax, word ptr [0x11689fce] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11689fce))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11681e71 jne 0x11681e94 */
  if (!C.zf) goto L_11681e94;
  /* 11681e73 mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 11681e77 cmp ax, word ptr [0x11689fca] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11689fca))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11681e7e jne 0x11681e94 */
  if (!C.zf) goto L_11681e94;
  /* 11681e80 mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11681e84 cmp ax, word ptr [0x11689fc8] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11689fc8))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11681e8b jne 0x11681e94 */
  if (!C.zf) goto L_11681e94;
  /* 11681e8d mov eax, dword ptr [0x11689fc0] */
  EAX = (r32((uint32_t)(0x11689fc0)));
  /* 11681e92 jmp 0x11681ed9 */
  goto L_11681ed9;
L_11681e94:;
  /* 11681e94 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 11681e9a push eax */
  push32((uint32_t)(EAX));
  /* 11681e9b call dword ptr [0x11688060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688060))), 0x11681ea1u);
  /* 11681ea1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681ea4 je 0x11681ec1 */
  if (C.zf) goto L_11681ec1;
  /* 11681ea6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681ea9 jne 0x11681ebd */
  if (!C.zf) goto L_11681ebd;
  /* 11681eab cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11681eb0 je 0x11681ebd */
  if (C.zf) goto L_11681ebd;
  /* 11681eb2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681eb6 je 0x11681ebd */
  if (C.zf) goto L_11681ebd;
  /* 11681eb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11681eba pop eax */
  EAX = (pop32());
  /* 11681ebb jmp 0x11681ec4 */
  goto L_11681ec4;
L_11681ebd:;
  /* 11681ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11681ebf jmp 0x11681ec4 */
  goto L_11681ec4;
L_11681ec1:;
  /* 11681ec1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11681ec4:;
  /* 11681ec4 push esi */
  push32((uint32_t)(ESI));
  /* 11681ec5 push edi */
  push32((uint32_t)(EDI));
  /* 11681ec6 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 11681ec9 mov edi, 0x11689fc8 */
  EDI = (0x11689fc8u);
  /* 11681ece movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11681ecf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11681ed0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11681ed1 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11681ed2 pop edi */
  EDI = (pop32());
  /* 11681ed3 mov dword ptr [0x11689fc0], eax */
  w32((uint32_t)(0x11689fc0), (EAX));
  /* 11681ed8 pop esi */
  ESI = (pop32());
L_11681ed9:;
  /* 11681ed9 push eax */
  push32((uint32_t)(EAX));
  /* 11681eda movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 11681ede push eax */
  push32((uint32_t)(EAX));
  /* 11681edf movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11681ee3 push eax */
  push32((uint32_t)(EAX));
  /* 11681ee4 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 11681ee8 push eax */
  push32((uint32_t)(EAX));
  /* 11681ee9 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 11681eed push eax */
  push32((uint32_t)(EAX));
  /* 11681eee movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 11681ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11681ef3 movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 11681ef7 push eax */
  push32((uint32_t)(EAX));
  /* 11681ef8 call 0x116827b3 */
  push32(0x11681efdu); f_116827b3();
  /* 11681efd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11681f00 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11681f03 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11681f05 je 0x11681f09 */
  if (C.zf) goto L_11681f09;
  /* 11681f07 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11681f09:;
  /* 11681f09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11681f0a ret  */
  ESPCHK(0x11681e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f0b @ 0x11681f0b (217 bytes, 57 insns) */
void f_11681f0b(void) {
  FTRACE(0x11681f0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681f0b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11681f0f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681f12 jne 0x11681fa0 */
  if (!C.zf) goto L_11681fa0;
  /* 11681f18 call dword ptr [0x11688070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688070))), 0x11681f1eu);
  /* 11681f1e push 1 */
  push32((uint32_t)(0x1u));
  /* 11681f20 mov dword ptr [0x11689ff0], eax */
  w32((uint32_t)(0x11689ff0), (EAX));
  /* 11681f25 call 0x11682fdb */
  push32(0x11681f2au); f_11682fdb();
  /* 11681f2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11681f2c pop ecx */
  ECX = (pop32());
  /* 11681f2d je 0x11681f6b */
  if (C.zf) goto L_11681f6b;
  /* 11681f2f mov eax, dword ptr [0x11689ff0] */
  EAX = (r32((uint32_t)(0x11689ff0)));
  /* 11681f34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11681f36 mov cl, byte ptr [0x11689ff1] */
  CL = (r8((uint32_t)(0x11689ff1)));
  /* 11681f3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11681f41 shr dword ptr [0x11689ff0], 0x10 */
  w32((uint32_t)(0x11689ff0), (sh_shr((uint32_t)(r32((uint32_t)(0x11689ff0))), (0x10u)&0x1f, 32)));
  /* 11681f48 mov dword ptr [0x11689ff8], eax */
  w32((uint32_t)(0x11689ff8), (EAX));
  /* 11681f4d mov dword ptr [0x11689ffc], ecx */
  w32((uint32_t)(0x11689ffc), (ECX));
  /* 11681f53 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11681f56 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11681f58 mov dword ptr [0x11689ff4], eax */
  w32((uint32_t)(0x11689ff4), (EAX));
  /* 11681f5d call 0x11682188 */
  push32(0x11681f62u); f_11682188();
  /* 11681f62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11681f64 jne 0x11681f6f */
  if (!C.zf) goto L_11681f6f;
  /* 11681f66 call 0x11683017 */
  push32(0x11681f6bu); f_11683017();
L_11681f6b:;
  /* 11681f6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11681f6d jmp 0x11681fe1 */
  goto L_11681fe1;
L_11681f6f:;
  /* 11681f6f call dword ptr [0x1168806c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168806c))), 0x11681f75u);
  /* 11681f75 mov dword ptr [0x1168a6b4], eax */
  w32((uint32_t)(0x1168a6b4), (EAX));
  /* 11681f7a call 0x11682ea9 */
  push32(0x11681f7fu); f_11682ea9();
  /* 11681f7f mov dword ptr [0x11689fdc], eax */
  w32((uint32_t)(0x11689fdc), (EAX));
  /* 11681f84 call 0x11682993 */
  push32(0x11681f89u); f_11682993();
  /* 11681f89 call 0x11682c5c */
  push32(0x11681f8eu); f_11682c5c();
  /* 11681f8e call 0x11682ba3 */
  push32(0x11681f93u); f_11682ba3();
  /* 11681f93 call 0x11682875 */
  push32(0x11681f98u); f_11682875();
  /* 11681f98 inc dword ptr [0x11689fd8] */
  { uint32_t _r=(r32((uint32_t)(0x11689fd8)))+1; w32((uint32_t)(0x11689fd8), (_r)); fl_inc(_r,32); }
  /* 11681f9e jmp 0x11681fde */
  goto L_11681fde;
L_11681fa0:;
  /* 11681fa0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11681fa2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681fa4 jne 0x11681fd2 */
  if (!C.zf) goto L_11681fd2;
  /* 11681fa6 cmp dword ptr [0x11689fd8], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11689fd8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681fac jle 0x11681f6b */
  if ((C.zf||C.sf!=C.of)) goto L_11681f6b;
  /* 11681fae dec dword ptr [0x11689fd8] */
  { uint32_t _r=(r32((uint32_t)(0x11689fd8)))-1; w32((uint32_t)(0x11689fd8), (_r)); fl_dec(_r,32); }
  /* 11681fb4 cmp dword ptr [0x1168a028], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1168a028))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681fba jne 0x11681fc1 */
  if (!C.zf) goto L_11681fc1;
  /* 11681fbc call 0x116828b3 */
  push32(0x11681fc1u); f_116828b3();
L_11681fc1:;
  /* 11681fc1 call 0x11682b4f */
  push32(0x11681fc6u); f_11682b4f();
  /* 11681fc6 call 0x116821dc */
  push32(0x11681fcbu); f_116821dc();
  /* 11681fcb call 0x11683017 */
  push32(0x11681fd0u); f_11683017();
  /* 11681fd0 jmp 0x11681fde */
  goto L_11681fde;
L_11681fd2:;
  /* 11681fd2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681fd5 jne 0x11681fde */
  if (!C.zf) goto L_11681fde;
  /* 11681fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11681fd8 call 0x11682274 */
  push32(0x11681fddu); f_11682274();
  /* 11681fdd pop ecx */
  ECX = (pop32());
L_11681fde:;
  /* 11681fde push 1 */
  push32((uint32_t)(0x1u));
  /* 11681fe0 pop eax */
  EAX = (pop32());
L_11681fe1:;
  /* 11681fe1 ret 0xc */
  ESPCHK(0x11681f0bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11681fe4 (157 bytes, 73 insns) */
void f_11681fe4(void) {
  FTRACE(0x11681fe4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11681fe4 push ebp */
  push32((uint32_t)(EBP));
  /* 11681fe5 mov ebp, esp */
  EBP = (ESP);
  /* 11681fe7 push ebx */
  push32((uint32_t)(EBX));
  /* 11681fe8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11681feb push esi */
  push32((uint32_t)(ESI));
  /* 11681fec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11681fef push edi */
  push32((uint32_t)(EDI));
  /* 11681ff0 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11681ff3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11681ff5 jne 0x11682000 */
  if (!C.zf) goto L_11682000;
  /* 11681ff7 cmp dword ptr [0x11689fd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11689fd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11681ffe jmp 0x11682026 */
  goto L_11682026;
L_11682000:;
  /* 11682000 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682003 je 0x1168200a */
  if (C.zf) goto L_1168200a;
  /* 11682005 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682008 jne 0x1168202c */
  if (!C.zf) goto L_1168202c;
L_1168200a:;
  /* 1168200a mov eax, dword ptr [0x1168a6b8] */
  EAX = (r32((uint32_t)(0x1168a6b8)));
  /* 1168200f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682011 je 0x1168201c */
  if (C.zf) goto L_1168201c;
  /* 11682013 push edi */
  push32((uint32_t)(EDI));
  /* 11682014 push esi */
  push32((uint32_t)(ESI));
  /* 11682015 push ebx */
  push32((uint32_t)(EBX));
  /* 11682016 call eax */
  call_ind((uint32_t)(EAX), 0x11682018u);
  /* 11682018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168201a je 0x11682028 */
  if (C.zf) goto L_11682028;
L_1168201c:;
  /* 1168201c push edi */
  push32((uint32_t)(EDI));
  /* 1168201d push esi */
  push32((uint32_t)(ESI));
  /* 1168201e push ebx */
  push32((uint32_t)(EBX));
  /* 1168201f call 0x11681f0b */
  push32(0x11682024u); f_11681f0b();
  /* 11682024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11682026:;
  /* 11682026 jne 0x1168202c */
  if (!C.zf) goto L_1168202c;
L_11682028:;
  /* 11682028 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1168202a jmp 0x1168207a */
  goto L_1168207a;
L_1168202c:;
  /* 1168202c push edi */
  push32((uint32_t)(EDI));
  /* 1168202d push esi */
  push32((uint32_t)(ESI));
  /* 1168202e push ebx */
  push32((uint32_t)(EBX));
  /* 1168202f call 0x11681d50 */
  push32(0x11682034u); f_11681d50();
  /* 11682034 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682037 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1168203a jne 0x11682048 */
  if (!C.zf) goto L_11682048;
  /* 1168203c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168203e jne 0x11682077 */
  if (!C.zf) goto L_11682077;
  /* 11682040 push edi */
  push32((uint32_t)(EDI));
  /* 11682041 push eax */
  push32((uint32_t)(EAX));
  /* 11682042 push ebx */
  push32((uint32_t)(EBX));
  /* 11682043 call 0x11681f0b */
  push32(0x11682048u); f_11681f0b();
L_11682048:;
  /* 11682048 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1168204a je 0x11682051 */
  if (C.zf) goto L_11682051;
  /* 1168204c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168204f jne 0x11682077 */
  if (!C.zf) goto L_11682077;
L_11682051:;
  /* 11682051 push edi */
  push32((uint32_t)(EDI));
  /* 11682052 push esi */
  push32((uint32_t)(ESI));
  /* 11682053 push ebx */
  push32((uint32_t)(EBX));
  /* 11682054 call 0x11681f0b */
  push32(0x11682059u); f_11681f0b();
  /* 11682059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168205b jne 0x11682060 */
  if (!C.zf) goto L_11682060;
  /* 1168205d and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11682060:;
  /* 11682060 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682064 je 0x11682077 */
  if (C.zf) goto L_11682077;
  /* 11682066 mov eax, dword ptr [0x1168a6b8] */
  EAX = (r32((uint32_t)(0x1168a6b8)));
  /* 1168206b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168206d je 0x11682077 */
  if (C.zf) goto L_11682077;
  /* 1168206f push edi */
  push32((uint32_t)(EDI));
  /* 11682070 push esi */
  push32((uint32_t)(ESI));
  /* 11682071 push ebx */
  push32((uint32_t)(EBX));
  /* 11682072 call eax */
  call_ind((uint32_t)(EAX), 0x11682074u);
  /* 11682074 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11682077:;
  /* 11682077 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1168207a:;
  /* 1168207a pop edi */
  EDI = (pop32());
  /* 1168207b pop esi */
  ESI = (pop32());
  /* 1168207c pop ebx */
  EBX = (pop32());
  /* 1168207d pop ebp */
  EBP = (pop32());
  /* 1168207e ret 0xc */
  ESPCHK(0x11681fe4u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11682081 (48 bytes, 15 insns) */
void f_11682081(void) {
  FTRACE(0x11682081u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682081 mov eax, dword ptr [0x11689fe4] */
  EAX = (r32((uint32_t)(0x11689fe4)));
  /* 11682086 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682089 je 0x11682098 */
  if (C.zf) goto L_11682098;
  /* 1168208b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168208d jne 0x1168209d */
  if (!C.zf) goto L_1168209d;
  /* 1168208f cmp dword ptr [0x11689fe8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11689fe8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682096 jne 0x1168209d */
  if (!C.zf) goto L_1168209d;
L_11682098:;
  /* 11682098 call 0x1168308c */
  push32(0x1168209du); f_1168308c();
L_1168209d:;
  /* 1168209d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 116820a1 call 0x116830c5 */
  push32(0x116820a6u); f_116830c5();
  /* 116820a6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 116820ab call dword ptr [0x1168919c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168919c))), 0x116820b1u);
  /* 116820b1 pop ecx */
  ECX = (pop32());
  /* 116820b2 pop ecx */
  ECX = (pop32());
  /* 116820b3 ret  */
  ESPCHK(0x11682081u, _esp0);
  ESP += 4; return;
}

/* FUN_100020b4 @ 0x116820b4 (72 bytes, 29 insns) */
void f_116820b4(void) {
  FTRACE(0x116820b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116820b4 push esi */
  push32((uint32_t)(ESI));
  /* 116820b5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 116820b9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116820bb je 0x116820fa */
  if (C.zf) goto L_116820fa;
  /* 116820bd push 9 */
  push32((uint32_t)(0x9u));
  /* 116820bf call 0x116832ad */
  push32(0x116820c4u); f_116832ad();
  /* 116820c4 push esi */
  push32((uint32_t)(ESI));
  /* 116820c5 call 0x11683361 */
  push32(0x116820cau); f_11683361();
  /* 116820ca pop ecx */
  ECX = (pop32());
  /* 116820cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116820cd pop ecx */
  ECX = (pop32());
  /* 116820ce je 0x116820e3 */
  if (C.zf) goto L_116820e3;
  /* 116820d0 push esi */
  push32((uint32_t)(ESI));
  /* 116820d1 push eax */
  push32((uint32_t)(EAX));
  /* 116820d2 call 0x1168338c */
  push32(0x116820d7u); f_1168338c();
  /* 116820d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 116820d9 call 0x1168330e */
  push32(0x116820deu); f_1168330e();
  /* 116820de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116820e1 pop esi */
  ESI = (pop32());
  /* 116820e2 ret  */
  ESPCHK(0x116820b4u, _esp0);
  ESP += 4; return;
L_116820e3:;
  /* 116820e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 116820e5 call 0x1168330e */
  push32(0x116820eau); f_1168330e();
  /* 116820ea pop ecx */
  ECX = (pop32());
  /* 116820eb push esi */
  push32((uint32_t)(ESI));
  /* 116820ec push 0 */
  push32((uint32_t)(0x0u));
  /* 116820ee push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 116820f4 call dword ptr [0x11688074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688074))), 0x116820fau);
L_116820fa:;
  /* 116820fa pop esi */
  ESI = (pop32());
  /* 116820fb ret  */
  ESPCHK(0x116820b4u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x116820fc (18 bytes, 6 insns) */
void f_116820fc(void) {
  FTRACE(0x116820fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116820fc push dword ptr [0x1168a1a0] */
  push32((uint32_t)(r32((uint32_t)(0x1168a1a0))));
  /* 11682102 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11682106 call 0x1168210e */
  push32(0x1168210bu); f_1168210e();
  /* 1168210b pop ecx */
  ECX = (pop32());
  /* 1168210c pop ecx */
  ECX = (pop32());
  /* 1168210d ret  */
  ESPCHK(0x116820fcu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1168210e (44 bytes, 16 insns) */
void f_1168210e(void) {
  FTRACE(0x1168210eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168210e cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682113 ja 0x11682137 */
  if ((!C.cf&&!C.zf)) goto L_11682137;
L_11682115:;
  /* 11682115 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11682119 call 0x1168213a */
  push32(0x1168211eu); f_1168213a();
  /* 1168211e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682120 pop ecx */
  ECX = (pop32());
  /* 11682121 jne 0x11682139 */
  if (!C.zf) goto L_11682139;
  /* 11682123 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682127 je 0x11682139 */
  if (C.zf) goto L_11682139;
  /* 11682129 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1168212d call 0x11683e62 */
  push32(0x11682132u); f_11683e62();
  /* 11682132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682134 pop ecx */
  ECX = (pop32());
  /* 11682135 jne 0x11682115 */
  if (!C.zf) goto L_11682115;
L_11682137:;
  /* 11682137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11682139:;
  /* 11682139 ret  */
  ESPCHK(0x1168210eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000213a @ 0x1168213a (78 bytes, 30 insns) */
void f_1168213a(void) {
  FTRACE(0x1168213au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168213a push esi */
  push32((uint32_t)(ESI));
  /* 1168213b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1168213f cmp esi, dword ptr [0x11689338] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11689338))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682145 push edi */
  push32((uint32_t)(EDI));
  /* 11682146 ja 0x11682169 */
  if ((!C.cf&&!C.zf)) goto L_11682169;
  /* 11682148 push 9 */
  push32((uint32_t)(0x9u));
  /* 1168214a call 0x116832ad */
  push32(0x1168214fu); f_116832ad();
  /* 1168214f push esi */
  push32((uint32_t)(ESI));
  /* 11682150 call 0x116836b7 */
  push32(0x11682155u); f_116836b7();
  /* 11682155 push 9 */
  push32((uint32_t)(0x9u));
  /* 11682157 mov edi, eax */
  EDI = (EAX);
  /* 11682159 call 0x1168330e */
  push32(0x1168215eu); f_1168330e();
  /* 1168215e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11682161 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11682163 je 0x11682169 */
  if (C.zf) goto L_11682169;
  /* 11682165 mov eax, edi */
  EAX = (EDI);
  /* 11682167 jmp 0x11682185 */
  goto L_11682185;
L_11682169:;
  /* 11682169 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1168216b jne 0x11682170 */
  if (!C.zf) goto L_11682170;
  /* 1168216d push 1 */
  push32((uint32_t)(0x1u));
  /* 1168216f pop esi */
  ESI = (pop32());
L_11682170:;
  /* 11682170 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11682173 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11682176 push esi */
  push32((uint32_t)(ESI));
  /* 11682177 push 0 */
  push32((uint32_t)(0x0u));
  /* 11682179 push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 1168217f call dword ptr [0x11688078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688078))), 0x11682185u);
L_11682185:;
  /* 11682185 pop edi */
  EDI = (pop32());
  /* 11682186 pop esi */
  ESI = (pop32());
  /* 11682187 ret  */
  ESPCHK(0x1168213au, _esp0);
  ESP += 4; return;
}

/* FUN_10002188 @ 0x11682188 (84 bytes, 32 insns) */
void f_11682188(void) {
  FTRACE(0x11682188u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682188 push esi */
  push32((uint32_t)(ESI));
  /* 11682189 call 0x11683218 */
  push32(0x1168218eu); f_11683218();
  /* 1168218e call dword ptr [0x11688084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688084))), 0x11682194u);
  /* 11682194 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682197 mov dword ptr [0x116891a0], eax */
  w32((uint32_t)(0x116891a0), (EAX));
  /* 1168219c je 0x116821d8 */
  if (C.zf) goto L_116821d8;
  /* 1168219e push 0x74 */
  push32((uint32_t)(0x74u));
  /* 116821a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116821a2 call 0x11683e7d */
  push32(0x116821a7u); f_11683e7d();
  /* 116821a7 mov esi, eax */
  ESI = (EAX);
  /* 116821a9 pop ecx */
  ECX = (pop32());
  /* 116821aa test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116821ac pop ecx */
  ECX = (pop32());
  /* 116821ad je 0x116821d8 */
  if (C.zf) goto L_116821d8;
  /* 116821af push esi */
  push32((uint32_t)(ESI));
  /* 116821b0 push dword ptr [0x116891a0] */
  push32((uint32_t)(r32((uint32_t)(0x116891a0))));
  /* 116821b6 call dword ptr [0x11688080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688080))), 0x116821bcu);
  /* 116821bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116821be je 0x116821d8 */
  if (C.zf) goto L_116821d8;
  /* 116821c0 push esi */
  push32((uint32_t)(ESI));
  /* 116821c1 call 0x116821fa */
  push32(0x116821c6u); f_116821fa();
  /* 116821c6 pop ecx */
  ECX = (pop32());
  /* 116821c7 call dword ptr [0x1168807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168807c))), 0x116821cdu);
  /* 116821cd or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 116821d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 116821d3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 116821d5 pop eax */
  EAX = (pop32());
  /* 116821d6 pop esi */
  ESI = (pop32());
  /* 116821d7 ret  */
  ESPCHK(0x11682188u, _esp0);
  ESP += 4; return;
L_116821d8:;
  /* 116821d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116821da pop esi */
  ESI = (pop32());
  /* 116821db ret  */
  ESPCHK(0x11682188u, _esp0);
  ESP += 4; return;
}

/* FUN_100021dc @ 0x116821dc (30 bytes, 8 insns) */
void f_116821dc(void) {
  FTRACE(0x116821dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116821dc call 0x11683241 */
  push32(0x116821e1u); f_11683241();
  /* 116821e1 mov eax, dword ptr [0x116891a0] */
  EAX = (r32((uint32_t)(0x116891a0)));
  /* 116821e6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116821e9 je 0x116821f9 */
  if (C.zf) goto L_116821f9;
  /* 116821eb push eax */
  push32((uint32_t)(EAX));
  /* 116821ec call dword ptr [0x11688088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688088))), 0x116821f2u);
  /* 116821f2 or dword ptr [0x116891a0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x116891a0)))|(0xffffffffu); w32((uint32_t)(0x116891a0), (_r)); fl_logic(_r,32); }
L_116821f9:;
  /* 116821f9 ret  */
  ESPCHK(0x116821dcu, _esp0);
  ESP += 4; return;
}

/* FUN_100021fa @ 0x116821fa (19 bytes, 4 insns) */
void f_116821fa(void) {
  FTRACE(0x116821fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116821fa mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 116821fe mov dword ptr [eax + 0x50], 0x11689340 */
  w32((uint32_t)(EAX + 0x50), (0x11689340u));
  /* 11682205 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 1168220c ret  */
  ESPCHK(0x116821fau, _esp0);
  ESP += 4; return;
}

/* FUN_1000220d @ 0x1168220d (103 bytes, 38 insns) */
void f_1168220d(void) {
  FTRACE(0x1168220du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168220d push esi */
  push32((uint32_t)(ESI));
  /* 1168220e push edi */
  push32((uint32_t)(EDI));
  /* 1168220f call dword ptr [0x11688094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688094))), 0x11682215u);
  /* 11682215 push dword ptr [0x116891a0] */
  push32((uint32_t)(r32((uint32_t)(0x116891a0))));
  /* 1168221b mov edi, eax */
  EDI = (EAX);
  /* 1168221d call dword ptr [0x11688090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688090))), 0x11682223u);
  /* 11682223 mov esi, eax */
  ESI = (EAX);
  /* 11682225 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682227 jne 0x11682268 */
  if (!C.zf) goto L_11682268;
  /* 11682229 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1168222b push 1 */
  push32((uint32_t)(0x1u));
  /* 1168222d call 0x11683e7d */
  push32(0x11682232u); f_11683e7d();
  /* 11682232 mov esi, eax */
  ESI = (EAX);
  /* 11682234 pop ecx */
  ECX = (pop32());
  /* 11682235 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682237 pop ecx */
  ECX = (pop32());
  /* 11682238 je 0x11682260 */
  if (C.zf) goto L_11682260;
  /* 1168223a push esi */
  push32((uint32_t)(ESI));
  /* 1168223b push dword ptr [0x116891a0] */
  push32((uint32_t)(r32((uint32_t)(0x116891a0))));
  /* 11682241 call dword ptr [0x11688080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688080))), 0x11682247u);
  /* 11682247 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682249 je 0x11682260 */
  if (C.zf) goto L_11682260;
  /* 1168224b push esi */
  push32((uint32_t)(ESI));
  /* 1168224c call 0x116821fa */
  push32(0x11682251u); f_116821fa();
  /* 11682251 pop ecx */
  ECX = (pop32());
  /* 11682252 call dword ptr [0x1168807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168807c))), 0x11682258u);
  /* 11682258 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1168225c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1168225e jmp 0x11682268 */
  goto L_11682268;
L_11682260:;
  /* 11682260 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11682262 call 0x11682081 */
  push32(0x11682267u); f_11682081();
  /* 11682267 pop ecx */
  ECX = (pop32());
L_11682268:;
  /* 11682268 push edi */
  push32((uint32_t)(EDI));
  /* 11682269 call dword ptr [0x1168808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168808c))), 0x1168226fu);
  /* 1168226f mov eax, esi */
  EAX = (ESI);
  /* 11682271 pop edi */
  EDI = (pop32());
  /* 11682272 pop esi */
  ESI = (pop32());
  /* 11682273 ret  */
  ESPCHK(0x1168220du, _esp0);
  ESP += 4; return;
}

/* FUN_10002274 @ 0x11682274 (160 bytes, 62 insns) */
void f_11682274(void) {
  FTRACE(0x11682274u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682274 mov eax, dword ptr [0x116891a0] */
  EAX = (r32((uint32_t)(0x116891a0)));
  /* 11682279 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168227c je 0x11682313 */
  if (C.zf) goto L_11682313;
  /* 11682282 push esi */
  push32((uint32_t)(ESI));
  /* 11682283 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11682287 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682289 jne 0x11682298 */
  if (!C.zf) goto L_11682298;
  /* 1168228b push eax */
  push32((uint32_t)(EAX));
  /* 1168228c call dword ptr [0x11688090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688090))), 0x11682292u);
  /* 11682292 mov esi, eax */
  ESI = (EAX);
  /* 11682294 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682296 je 0x11682304 */
  if (C.zf) goto L_11682304;
L_11682298:;
  /* 11682298 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 1168229b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168229d je 0x116822a6 */
  if (C.zf) goto L_116822a6;
  /* 1168229f push eax */
  push32((uint32_t)(EAX));
  /* 116822a0 call 0x116820b4 */
  push32(0x116822a5u); f_116820b4();
  /* 116822a5 pop ecx */
  ECX = (pop32());
L_116822a6:;
  /* 116822a6 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 116822a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116822ab je 0x116822b4 */
  if (C.zf) goto L_116822b4;
  /* 116822ad push eax */
  push32((uint32_t)(EAX));
  /* 116822ae call 0x116820b4 */
  push32(0x116822b3u); f_116820b4();
  /* 116822b3 pop ecx */
  ECX = (pop32());
L_116822b4:;
  /* 116822b4 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 116822b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116822b9 je 0x116822c2 */
  if (C.zf) goto L_116822c2;
  /* 116822bb push eax */
  push32((uint32_t)(EAX));
  /* 116822bc call 0x116820b4 */
  push32(0x116822c1u); f_116820b4();
  /* 116822c1 pop ecx */
  ECX = (pop32());
L_116822c2:;
  /* 116822c2 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 116822c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116822c7 je 0x116822d0 */
  if (C.zf) goto L_116822d0;
  /* 116822c9 push eax */
  push32((uint32_t)(EAX));
  /* 116822ca call 0x116820b4 */
  push32(0x116822cfu); f_116820b4();
  /* 116822cf pop ecx */
  ECX = (pop32());
L_116822d0:;
  /* 116822d0 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 116822d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116822d5 je 0x116822de */
  if (C.zf) goto L_116822de;
  /* 116822d7 push eax */
  push32((uint32_t)(EAX));
  /* 116822d8 call 0x116820b4 */
  push32(0x116822ddu); f_116820b4();
  /* 116822dd pop ecx */
  ECX = (pop32());
L_116822de:;
  /* 116822de mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 116822e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116822e3 je 0x116822ec */
  if (C.zf) goto L_116822ec;
  /* 116822e5 push eax */
  push32((uint32_t)(EAX));
  /* 116822e6 call 0x116820b4 */
  push32(0x116822ebu); f_116820b4();
  /* 116822eb pop ecx */
  ECX = (pop32());
L_116822ec:;
  /* 116822ec mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 116822ef cmp eax, 0x11689340 */
  { uint32_t _a=(EAX),_b=(0x11689340u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116822f4 je 0x116822fd */
  if (C.zf) goto L_116822fd;
  /* 116822f6 push eax */
  push32((uint32_t)(EAX));
  /* 116822f7 call 0x116820b4 */
  push32(0x116822fcu); f_116820b4();
  /* 116822fc pop ecx */
  ECX = (pop32());
L_116822fd:;
  /* 116822fd push esi */
  push32((uint32_t)(ESI));
  /* 116822fe call 0x116820b4 */
  push32(0x11682303u); f_116820b4();
  /* 11682303 pop ecx */
  ECX = (pop32());
L_11682304:;
  /* 11682304 push 0 */
  push32((uint32_t)(0x0u));
  /* 11682306 push dword ptr [0x116891a0] */
  push32((uint32_t)(r32((uint32_t)(0x116891a0))));
  /* 1168230c call dword ptr [0x11688080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688080))), 0x11682312u);
  /* 11682312 pop esi */
  ESI = (pop32());
L_11682313:;
  /* 11682313 ret  */
  ESPCHK(0x11682274u, _esp0);
  ESP += 4; return;
}

/* FUN_10002314 @ 0x11682314 (18 bytes, 6 insns) */
void f_11682314(void) {
  FTRACE(0x11682314u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682314 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11682319 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 1168231e call 0x11683f3f */
  push32(0x11682323u); f_11683f3f();
  /* 11682323 pop ecx */
  ECX = (pop32());
  /* 11682324 pop ecx */
  ECX = (pop32());
  /* 11682325 ret  */
  ESPCHK(0x11682314u, _esp0);
  ESP += 4; return;
}

/* FUN_10002326 @ 0x11682326 (62 bytes, 24 insns) */
void f_11682326(void) {
  FTRACE(0x11682326u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682326 push ebp */
  push32((uint32_t)(EBP));
  /* 11682327 mov ebp, esp */
  EBP = (ESP);
  /* 11682329 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168232c fld qword ptr [0x11688190] */
  fpu_push(rf64((uint32_t)(0x11688190)));
  /* 11682332 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11682335 fld qword ptr [0x11688188] */
  fpu_push(rf64((uint32_t)(0x11688188)));
  /* 1168233b fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 1168233e fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11682341 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 11682344 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 11682347 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 1168234a fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 1168234d fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 11682350 fcomp qword ptr [0x11688180] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11688180)));
  (void)fpu_pop();
  /* 11682356 fnstsw ax */
  AX = fpu_status();
  /* 11682358 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11682359 jbe 0x11682360 */
  if ((C.cf||C.zf)) goto L_11682360;
  /* 1168235b push 1 */
  push32((uint32_t)(0x1u));
  /* 1168235d pop eax */
  EAX = (pop32());
  /* 1168235e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1168235f ret  */
  ESPCHK(0x11682326u, _esp0);
  ESP += 4; return;
L_11682360:;
  /* 11682360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11682362 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11682363 ret  */
  ESPCHK(0x11682326u, _esp0);
  ESP += 4; return;
}

/* FUN_10002364 @ 0x11682364 (41 bytes, 13 insns) */
void f_11682364(void) {
  FTRACE(0x11682364u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682364 push 0x116881b4 */
  push32((uint32_t)(0x116881b4u));
  /* 11682369 call dword ptr [0x11688004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688004))), 0x1168236fu);
  /* 1168236f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682371 je 0x11682388 */
  if (C.zf) goto L_11682388;
  /* 11682373 push 0x11688198 */
  push32((uint32_t)(0x11688198u));
  /* 11682378 push eax */
  push32((uint32_t)(EAX));
  /* 11682379 call dword ptr [0x11688000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688000))), 0x1168237fu);
  /* 1168237f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682381 je 0x11682388 */
  if (C.zf) goto L_11682388;
  /* 11682383 push 0 */
  push32((uint32_t)(0x0u));
  /* 11682385 call eax */
  call_ind((uint32_t)(EAX), 0x11682387u);
  /* 11682387 ret  */
  ESPCHK(0x11682364u, _esp0);
  ESP += 4; return;
L_11682388:;
  /* 11682388 jmp 0x11682326 */
  f_11682326(); return;
}

/* FUN_1000238d @ 0x1168238d (90 bytes, 37 insns) */
void f_1168238d(void) {
  FTRACE(0x1168238du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168238d push esi */
  push32((uint32_t)(ESI));
  /* 1168238e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11682392 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11682395 push eax */
  push32((uint32_t)(EAX));
  /* 11682396 call 0x116840e5 */
  push32(0x1168239bu); f_116840e5();
  /* 1168239b cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168239e pop ecx */
  ECX = (pop32());
  /* 1168239f je 0x116823cd */
  if (C.zf) goto L_116823cd;
L_116823a1:;
  /* 116823a1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116823a2 cmp dword ptr [0x116893c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116893c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116823a9 jle 0x116823ba */
  if ((C.zf||C.sf!=C.of)) goto L_116823ba;
  /* 116823ab movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 116823ae push 4 */
  push32((uint32_t)(0x4u));
  /* 116823b0 push eax */
  push32((uint32_t)(EAX));
  /* 116823b1 call 0x11684070 */
  push32(0x116823b6u); f_11684070();
  /* 116823b6 pop ecx */
  ECX = (pop32());
  /* 116823b7 pop ecx */
  ECX = (pop32());
  /* 116823b8 jmp 0x116823c9 */
  goto L_116823c9;
L_116823ba:;
  /* 116823ba movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 116823bd mov ecx, dword ptr [0x116893d4] */
  ECX = (r32((uint32_t)(0x116893d4)));
  /* 116823c3 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 116823c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_116823c9:;
  /* 116823c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116823cb jne 0x116823a1 */
  if (!C.zf) goto L_116823a1;
L_116823cd:;
  /* 116823cd mov cl, byte ptr [0x116893cc] */
  CL = (r8((uint32_t)(0x116893cc)));
  /* 116823d3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116823d5 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 116823d7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_116823d8:;
  /* 116823d8 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 116823da mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 116823dc mov al, cl */
  AL = (CL);
  /* 116823de mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 116823e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116823e1 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 116823e3 jne 0x116823d8 */
  if (!C.zf) goto L_116823d8;
  /* 116823e5 pop esi */
  ESI = (pop32());
  /* 116823e6 ret  */
  ESPCHK(0x1168238du, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x1168244d (62 bytes, 29 insns) */
void f_1168244d(void) {
  FTRACE(0x1168244du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168244d push ebp */
  push32((uint32_t)(EBP));
  /* 1168244e mov ebp, esp */
  EBP = (ESP);
  /* 11682450 push ecx */
  push32((uint32_t)(ECX));
  /* 11682451 push ecx */
  push32((uint32_t)(ECX));
  /* 11682452 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682456 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11682459 je 0x11682476 */
  if (C.zf) goto L_11682476;
  /* 1168245b lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1168245e push eax */
  push32((uint32_t)(EAX));
  /* 1168245f call 0x116845b1 */
  push32(0x11682464u); f_116845b1();
  /* 11682464 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11682467 pop ecx */
  ECX = (pop32());
  /* 11682468 pop ecx */
  ECX = (pop32());
  /* 11682469 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1168246c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1168246e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11682471 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11682474 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11682475 ret  */
  ESPCHK(0x1168244du, _esp0);
  ESP += 4; return;
L_11682476:;
  /* 11682476 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11682479 push eax */
  push32((uint32_t)(EAX));
  /* 1168247a call 0x116845de */
  push32(0x1168247fu); f_116845de();
  /* 1168247f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11682482 pop ecx */
  ECX = (pop32());
  /* 11682483 pop ecx */
  ECX = (pop32());
  /* 11682484 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11682487 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11682489 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1168248a ret  */
  ESPCHK(0x1168244du, _esp0);
  ESP += 4; return;
}

/* FUN_1000248b @ 0x1168248b (97 bytes, 42 insns) */
void f_1168248b(void) {
  FTRACE(0x1168248bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168248b push ebp */
  push32((uint32_t)(EBP));
  /* 1168248c mov ebp, esp */
  EBP = (ESP);
  /* 1168248e sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11682491 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11682494 push esi */
  push32((uint32_t)(ESI));
  /* 11682495 push eax */
  push32((uint32_t)(EAX));
  /* 11682496 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11682499 push eax */
  push32((uint32_t)(EAX));
  /* 1168249a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1168249d push ecx */
  push32((uint32_t)(ECX));
  /* 1168249e push ecx */
  push32((uint32_t)(ECX));
  /* 1168249f fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 116824a1 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 116824a4 call 0x11684682 */
  push32(0x116824a9u); f_11684682();
  /* 116824a9 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 116824ac lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116824af push eax */
  push32((uint32_t)(EAX));
  /* 116824b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116824b3 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 116824b6 push eax */
  push32((uint32_t)(EAX));
  /* 116824b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116824b9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116824bd sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 116824c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116824c2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116824c4 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 116824c7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116824c9 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116824cb push ecx */
  push32((uint32_t)(ECX));
  /* 116824cc call 0x1168460b */
  push32(0x116824d1u); f_1168460b();
  /* 116824d1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116824d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116824d6 push eax */
  push32((uint32_t)(EAX));
  /* 116824d7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 116824da push esi */
  push32((uint32_t)(ESI));
  /* 116824db push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 116824de call 0x116824ec */
  push32(0x116824e3u); f_116824ec();
  /* 116824e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116824e6 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116824e9 pop esi */
  ESI = (pop32());
  /* 116824ea leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116824eb ret  */
  ESPCHK(0x1168248bu, _esp0);
  ESP += 4; return;
}

/* FUN_100024ec @ 0x116824ec (194 bytes, 91 insns) */
void f_116824ec(void) {
  FTRACE(0x116824ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116824ec push ebp */
  push32((uint32_t)(EBP));
  /* 116824ed mov ebp, esp */
  EBP = (ESP);
  /* 116824ef push ebx */
  push32((uint32_t)(EBX));
  /* 116824f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116824f2 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116824f5 push esi */
  push32((uint32_t)(ESI));
  /* 116824f6 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 116824f9 push edi */
  push32((uint32_t)(EDI));
  /* 116824fa mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116824fd je 0x1168251a */
  if (C.zf) goto L_1168251a;
  /* 116824ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11682501 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682504 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11682507 push eax */
  push32((uint32_t)(EAX));
  /* 11682508 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1168250a cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168250d sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11682510 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682512 push eax */
  push32((uint32_t)(EAX));
  /* 11682513 call 0x1168278e */
  push32(0x11682518u); f_1168278e();
  /* 11682518 pop ecx */
  ECX = (pop32());
  /* 11682519 pop ecx */
  ECX = (pop32());
L_1168251a:;
  /* 1168251a cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168251d mov eax, edi */
  EAX = (EDI);
  /* 1168251f jne 0x11682527 */
  if (!C.zf) goto L_11682527;
  /* 11682521 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 11682524 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_11682527:;
  /* 11682527 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168252a jle 0x1168253e */
  if ((C.zf||C.sf!=C.of)) goto L_1168253e;
  /* 1168252c mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 1168252f lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11682532 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11682534 mov eax, ecx */
  EAX = (ECX);
  /* 11682536 mov cl, byte ptr [0x116893cc] */
  CL = (r8((uint32_t)(0x116893cc)));
  /* 1168253c mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_1168253e:;
  /* 1168253e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11682540 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682543 push 0x116881c8 */
  push32((uint32_t)(0x116881c8u));
  /* 11682548 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1168254b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168254d add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682550 push ecx */
  push32((uint32_t)(ECX));
  /* 11682551 call 0x116847a0 */
  push32(0x11682556u); f_116847a0();
  /* 11682556 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682559 pop ecx */
  ECX = (pop32());
  /* 1168255a pop ecx */
  ECX = (pop32());
  /* 1168255b mov ecx, eax */
  ECX = (EAX);
  /* 1168255d je 0x11682562 */
  if (C.zf) goto L_11682562;
  /* 1168255f mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_11682562:;
  /* 11682562 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11682565 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11682566 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682569 je 0x116825a7 */
  if (C.zf) goto L_116825a7;
  /* 1168256b mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 1168256e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1168256f jns 0x11682576 */
  if (!C.sf) goto L_11682576;
  /* 11682571 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11682573 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_11682576:;
  /* 11682576 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11682577 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168257a jl 0x1168258d */
  if ((C.sf!=C.of)) goto L_1168258d;
  /* 1168257c mov eax, ebx */
  EAX = (EBX);
  /* 1168257e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11682580 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11682581 pop esi */
  ESI = (pop32());
  /* 11682582 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11682584 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11682586 mov eax, ebx */
  EAX = (EBX);
  /* 11682588 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11682589 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1168258b mov ebx, edx */
  EBX = (EDX);
L_1168258d:;
  /* 1168258d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1168258e cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682591 jl 0x116825a4 */
  if ((C.sf!=C.of)) goto L_116825a4;
  /* 11682593 mov eax, ebx */
  EAX = (EBX);
  /* 11682595 push 0xa */
  push32((uint32_t)(0xau));
  /* 11682597 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11682598 pop esi */
  ESI = (pop32());
  /* 11682599 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1168259b add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1168259d mov eax, ebx */
  EAX = (EBX);
  /* 1168259f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116825a0 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116825a2 mov ebx, edx */
  EBX = (EDX);
L_116825a4:;
  /* 116825a4 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_116825a7:;
  /* 116825a7 mov eax, edi */
  EAX = (EDI);
  /* 116825a9 pop edi */
  EDI = (pop32());
  /* 116825aa pop esi */
  ESI = (pop32());
  /* 116825ab pop ebx */
  EBX = (pop32());
  /* 116825ac pop ebp */
  EBP = (pop32());
  /* 116825ad ret  */
  ESPCHK(0x116824ecu, _esp0);
  ESP += 4; return;
}

/* FUN_100025ae @ 0x116825ae (85 bytes, 37 insns) */
void f_116825ae(void) {
  FTRACE(0x116825aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116825ae push ebp */
  push32((uint32_t)(EBP));
  /* 116825af mov ebp, esp */
  EBP = (ESP);
  /* 116825b1 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116825b4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 116825b7 push esi */
  push32((uint32_t)(ESI));
  /* 116825b8 push eax */
  push32((uint32_t)(EAX));
  /* 116825b9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116825bc push eax */
  push32((uint32_t)(EAX));
  /* 116825bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116825c0 push ecx */
  push32((uint32_t)(ECX));
  /* 116825c1 push ecx */
  push32((uint32_t)(ECX));
  /* 116825c2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 116825c4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 116825c7 call 0x11684682 */
  push32(0x116825ccu); f_11684682();
  /* 116825cc mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 116825cf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116825d2 push eax */
  push32((uint32_t)(EAX));
  /* 116825d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116825d6 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116825d8 push eax */
  push32((uint32_t)(EAX));
  /* 116825d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116825db cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116825df sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 116825e2 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116825e5 push eax */
  push32((uint32_t)(EAX));
  /* 116825e6 call 0x1168460b */
  push32(0x116825ebu); f_1168460b();
  /* 116825eb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116825ee push 0 */
  push32((uint32_t)(0x0u));
  /* 116825f0 push eax */
  push32((uint32_t)(EAX));
  /* 116825f1 push esi */
  push32((uint32_t)(ESI));
  /* 116825f2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 116825f5 call 0x11682603 */
  push32(0x116825fau); f_11682603();
  /* 116825fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116825fd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11682600 pop esi */
  ESI = (pop32());
  /* 11682601 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11682602 ret  */
  ESPCHK(0x116825aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002603 @ 0x11682603 (167 bytes, 73 insns) */
void f_11682603(void) {
  FTRACE(0x11682603u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682603 push ebp */
  push32((uint32_t)(EBP));
  /* 11682604 mov ebp, esp */
  EBP = (ESP);
  /* 11682606 push ebx */
  push32((uint32_t)(EBX));
  /* 11682607 push esi */
  push32((uint32_t)(ESI));
  /* 11682608 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1168260b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1168260e push edi */
  push32((uint32_t)(EDI));
  /* 1168260f mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11682612 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11682613 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682617 je 0x11682633 */
  if (C.zf) goto L_11682633;
  /* 11682619 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168261c jne 0x11682633 */
  if (!C.zf) goto L_11682633;
  /* 1168261e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11682620 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682623 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11682626 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682628 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168262a mov eax, ecx */
  EAX = (ECX);
  /* 1168262c mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1168262f and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_11682633:;
  /* 11682633 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682636 mov edi, ebx */
  EDI = (EBX);
  /* 11682638 jne 0x11682640 */
  if (!C.zf) goto L_11682640;
  /* 1168263a mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 1168263d lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_11682640:;
  /* 11682640 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11682643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682645 jg 0x11682657 */
  if ((!C.zf&&C.sf==C.of)) goto L_11682657;
  /* 11682647 push 1 */
  push32((uint32_t)(0x1u));
  /* 11682649 push edi */
  push32((uint32_t)(EDI));
  /* 1168264a call 0x1168278e */
  push32(0x1168264fu); f_1168278e();
  /* 1168264f pop ecx */
  ECX = (pop32());
  /* 11682650 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 11682653 pop ecx */
  ECX = (pop32());
  /* 11682654 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11682655 jmp 0x11682659 */
  goto L_11682659;
L_11682657:;
  /* 11682657 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11682659:;
  /* 11682659 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168265d jle 0x116826a3 */
  if ((C.zf||C.sf!=C.of)) goto L_116826a3;
  /* 1168265f push 1 */
  push32((uint32_t)(0x1u));
  /* 11682661 push edi */
  push32((uint32_t)(EDI));
  /* 11682662 call 0x1168278e */
  push32(0x11682667u); f_1168278e();
  /* 11682667 mov al, byte ptr [0x116893cc] */
  AL = (r8((uint32_t)(0x116893cc)));
  /* 1168266c pop ecx */
  ECX = (pop32());
  /* 1168266d mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1168266f mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11682672 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11682673 pop ecx */
  ECX = (pop32());
  /* 11682674 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682676 jge 0x116826a3 */
  if ((C.sf==C.of)) goto L_116826a3;
  /* 11682678 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168267c je 0x11682682 */
  if (C.zf) goto L_11682682;
  /* 1168267e neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11682680 jmp 0x11682689 */
  goto L_11682689;
L_11682682:;
  /* 11682682 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11682684 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682687 jl 0x1168268c */
  if ((C.sf!=C.of)) goto L_1168268c;
L_11682689:;
  /* 11682689 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_1168268c:;
  /* 1168268c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1168268f push edi */
  push32((uint32_t)(EDI));
  /* 11682690 call 0x1168278e */
  push32(0x11682695u); f_1168278e();
  /* 11682695 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11682698 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1168269a push edi */
  push32((uint32_t)(EDI));
  /* 1168269b call 0x11684890 */
  push32(0x116826a0u); f_11684890();
  /* 116826a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116826a3:;
  /* 116826a3 pop edi */
  EDI = (pop32());
  /* 116826a4 mov eax, ebx */
  EAX = (EBX);
  /* 116826a6 pop esi */
  ESI = (pop32());
  /* 116826a7 pop ebx */
  EBX = (pop32());
  /* 116826a8 pop ebp */
  EBP = (pop32());
  /* 116826a9 ret  */
  ESPCHK(0x11682603u, _esp0);
  ESP += 4; return;
}

/* FUN_100026aa @ 0x116826aa (147 bytes, 66 insns) */
void f_116826aa(void) {
  FTRACE(0x116826aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116826aa push ebp */
  push32((uint32_t)(EBP));
  /* 116826ab mov ebp, esp */
  EBP = (ESP);
  /* 116826ad sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116826b0 push ebx */
  push32((uint32_t)(EBX));
  /* 116826b1 push esi */
  push32((uint32_t)(ESI));
  /* 116826b2 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 116826b5 push edi */
  push32((uint32_t)(EDI));
  /* 116826b6 push eax */
  push32((uint32_t)(EAX));
  /* 116826b7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116826ba push eax */
  push32((uint32_t)(EAX));
  /* 116826bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116826be push ecx */
  push32((uint32_t)(ECX));
  /* 116826bf push ecx */
  push32((uint32_t)(ECX));
  /* 116826c0 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 116826c2 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 116826c5 call 0x11684682 */
  push32(0x116826cau); f_11684682();
  /* 116826ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116826cd mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 116826d0 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 116826d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116826d5 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116826d9 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 116826dc add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116826df mov edi, eax */
  EDI = (EAX);
  /* 116826e1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116826e4 push eax */
  push32((uint32_t)(EAX));
  /* 116826e5 push ebx */
  push32((uint32_t)(EBX));
  /* 116826e6 push edi */
  push32((uint32_t)(EDI));
  /* 116826e7 call 0x1168460b */
  push32(0x116826ecu); f_1168460b();
  /* 116826ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116826ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116826f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116826f3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116826f5 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 116826f8 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116826fb jl 0x11682723 */
  if ((C.sf!=C.of)) goto L_11682723;
  /* 116826fd cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116826ff jge 0x11682723 */
  if ((C.sf==C.of)) goto L_11682723;
  /* 11682701 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11682703 je 0x1168270f */
  if (C.zf) goto L_1168270f;
L_11682705:;
  /* 11682705 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11682707 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11682708 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1168270a jne 0x11682705 */
  if (!C.zf) goto L_11682705;
  /* 1168270c and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_1168270f:;
  /* 1168270f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11682712 push 1 */
  push32((uint32_t)(0x1u));
  /* 11682714 push eax */
  push32((uint32_t)(EAX));
  /* 11682715 push ebx */
  push32((uint32_t)(EBX));
  /* 11682716 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11682719 call 0x11682603 */
  push32(0x1168271eu); f_11682603();
  /* 1168271e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11682721 jmp 0x11682738 */
  goto L_11682738;
L_11682723:;
  /* 11682723 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11682726 push 1 */
  push32((uint32_t)(0x1u));
  /* 11682728 push eax */
  push32((uint32_t)(EAX));
  /* 11682729 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1168272c push ebx */
  push32((uint32_t)(EBX));
  /* 1168272d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11682730 call 0x116824ec */
  push32(0x11682735u); f_116824ec();
  /* 11682735 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11682738:;
  /* 11682738 pop edi */
  EDI = (pop32());
  /* 11682739 pop esi */
  ESI = (pop32());
  /* 1168273a pop ebx */
  EBX = (pop32());
  /* 1168273b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1168273c ret  */
  ESPCHK(0x116826aau, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x1168273d (81 bytes, 29 insns) */
void f_1168273d(void) {
  FTRACE(0x1168273du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168273d push ebp */
  push32((uint32_t)(EBP));
  /* 1168273e mov ebp, esp */
  EBP = (ESP);
  /* 11682740 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682744 je 0x11682778 */
  if (C.zf) goto L_11682778;
  /* 11682746 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168274a je 0x11682778 */
  if (C.zf) goto L_11682778;
  /* 1168274c cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682750 jne 0x11682765 */
  if (!C.zf) goto L_11682765;
  /* 11682752 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11682755 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11682758 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1168275b call 0x116825ae */
  push32(0x11682760u); f_116825ae();
  /* 11682760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11682763 pop ebp */
  EBP = (pop32());
  /* 11682764 ret  */
  ESPCHK(0x1168273du, _esp0);
  ESP += 4; return;
L_11682765:;
  /* 11682765 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11682768 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1168276b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1168276e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11682771 call 0x116826aa */
  push32(0x11682776u); f_116826aa();
  /* 11682776 jmp 0x11682789 */
  goto L_11682789;
L_11682778:;
  /* 11682778 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1168277b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1168277e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11682781 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11682784 call 0x1168248b */
  push32(0x11682789u); f_1168248b();
L_11682789:;
  /* 11682789 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168278c pop ebp */
  EBP = (pop32());
  /* 1168278d ret  */
  ESPCHK(0x1168273du, _esp0);
  ESP += 4; return;
}

/* FUN_1000278e @ 0x1168278e (37 bytes, 18 insns) */
void f_1168278e(void) {
  FTRACE(0x1168278eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168278e push edi */
  push32((uint32_t)(EDI));
  /* 1168278f mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11682793 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11682795 je 0x116827b1 */
  if (C.zf) goto L_116827b1;
  /* 11682797 push esi */
  push32((uint32_t)(ESI));
  /* 11682798 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1168279c push esi */
  push32((uint32_t)(ESI));
  /* 1168279d call 0x11684c30 */
  push32(0x116827a2u); f_11684c30();
  /* 116827a2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116827a3 push eax */
  push32((uint32_t)(EAX));
  /* 116827a4 push esi */
  push32((uint32_t)(ESI));
  /* 116827a5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116827a7 push esi */
  push32((uint32_t)(ESI));
  /* 116827a8 call 0x116848f0 */
  push32(0x116827adu); f_116848f0();
  /* 116827ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116827b0 pop esi */
  ESI = (pop32());
L_116827b1:;
  /* 116827b1 pop edi */
  EDI = (pop32());
  /* 116827b2 ret  */
  ESPCHK(0x1168278eu, _esp0);
  ESP += 4; return;
}

/* FUN_100027b3 @ 0x116827b3 (194 bytes, 65 insns) */
void f_116827b3(void) {
  FTRACE(0x116827b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116827b3 push ebp */
  push32((uint32_t)(EBP));
  /* 116827b4 mov ebp, esp */
  EBP = (ESP);
  /* 116827b6 sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116827b9 push ebx */
  push32((uint32_t)(EBX));
  /* 116827ba mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 116827bd sub ebx, 0x76c */
  { uint32_t _a=(EBX),_b=(0x76cu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116827c3 cmp ebx, 0x46 */
  { uint32_t _a=(EBX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116827c6 jl 0x1168286f */
  if ((C.sf!=C.of)) goto L_1168286f;
  /* 116827cc cmp ebx, 0x8a */
  { uint32_t _a=(EBX),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116827d2 jg 0x1168286f */
  if ((!C.zf&&C.sf==C.of)) goto L_1168286f;
  /* 116827d8 push esi */
  push32((uint32_t)(ESI));
  /* 116827d9 push edi */
  push32((uint32_t)(EDI));
  /* 116827da mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 116827dd mov esi, dword ptr [edi*4 + 0x116896f4] */
  ESI = (r32((uint32_t)(EDI*4 + 0x116896f4)));
  /* 116827e4 add esi, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116827e7 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 116827ea jne 0x116827f2 */
  if (!C.zf) goto L_116827f2;
  /* 116827ec cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116827ef jle 0x116827f2 */
  if ((C.zf||C.sf!=C.of)) goto L_116827f2;
  /* 116827f1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_116827f2:;
  /* 116827f2 call 0x11684cb4 */
  push32(0x116827f7u); f_11684cb4();
  /* 116827f7 mov eax, ebx */
  EAX = (EBX);
  /* 116827f9 lea ecx, [ebx - 1] */
  ECX = ((uint32_t)(EBX + -0x1));
  /* 116827fc imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11682802 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11682805 mov edx, esi */
  EDX = (ESI);
  /* 11682807 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 1168280a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168280c mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 1168280f add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682811 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11682814 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 11682817 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1168281a mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1168281d lea ecx, [eax + ecx*8] */
  ECX = ((uint32_t)(EAX + ECX*8));
  /* 11682820 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11682823 add ecx, dword ptr [ebp + 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682826 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11682829 add ecx, dword ptr [0x11689610] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11689610))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168282f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11682830 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682834 mov dword ptr [ebp - 0x14], edi */
  w32((uint32_t)(EBP + -0x14), (EDI));
  /* 11682837 pop edi */
  EDI = (pop32());
  /* 11682838 pop esi */
  ESI = (pop32());
  /* 11682839 lea ecx, [ecx + edx + 0x7c558180] */
  ECX = ((uint32_t)(ECX + EDX*1 + 0x7c558180));
  /* 11682840 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11682843 je 0x11682865 */
  if (C.zf) goto L_11682865;
  /* 11682845 cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682849 jne 0x1168286b */
  if (!C.zf) goto L_1168286b;
  /* 1168284b cmp dword ptr [0x11689614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11689614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682852 je 0x1168286b */
  if (C.zf) goto L_1168286b;
  /* 11682854 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11682857 push eax */
  push32((uint32_t)(EAX));
  /* 11682858 call 0x11684f69 */
  push32(0x1168285du); f_11684f69();
  /* 1168285d pop ecx */
  ECX = (pop32());
  /* 1168285e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11682861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682863 je 0x1168286b */
  if (C.zf) goto L_1168286b;
L_11682865:;
  /* 11682865 add ecx, dword ptr [0x11689618] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11689618))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_1168286b:;
  /* 1168286b mov eax, ecx */
  EAX = (ECX);
  /* 1168286d jmp 0x11682872 */
  goto L_11682872;
L_1168286f:;
  /* 1168286f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11682872:;
  /* 11682872 pop ebx */
  EBX = (pop32());
  /* 11682873 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11682874 ret  */
  ESPCHK(0x116827b3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002875 @ 0x11682875 (45 bytes, 12 insns) */
void f_11682875(void) {
  FTRACE(0x11682875u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682875 mov eax, dword ptr [0x11689190] */
  EAX = (r32((uint32_t)(0x11689190)));
  /* 1168287a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168287c je 0x11682880 */
  if (C.zf) goto L_11682880;
  /* 1168287e call eax */
  call_ind((uint32_t)(EAX), 0x11682880u);
L_11682880:;
  /* 11682880 push 0x11689010 */
  push32((uint32_t)(0x11689010u));
  /* 11682885 push 0x11689008 */
  push32((uint32_t)(0x11689008u));
  /* 1168288a call 0x11682979 */
  push32(0x1168288fu); f_11682979();
  /* 1168288f push 0x11689004 */
  push32((uint32_t)(0x11689004u));
  /* 11682894 push 0x11689000 */
  push32((uint32_t)(0x11689000u));
  /* 11682899 call 0x11682979 */
  push32(0x1168289eu); f_11682979();
  /* 1168289e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116828a1 ret  */
  ESPCHK(0x11682875u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x116828a2 (17 bytes, 6 insns) */
void f_116828a2(void) {
  FTRACE(0x116828a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116828a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116828a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 116828a6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 116828aa call 0x116828c2 */
  push32(0x116828afu); f_116828c2();
  /* 116828af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116828b2 ret  */
  ESPCHK(0x116828a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100028b3 @ 0x116828b3 (15 bytes, 6 insns) */
void f_116828b3(void) {
  FTRACE(0x116828b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116828b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 116828b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 116828b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 116828b9 call 0x116828c2 */
  push32(0x116828beu); f_116828c2();
  /* 116828be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116828c1 ret  */
  ESPCHK(0x116828b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100028c2 @ 0x116828c2 (163 bytes, 53 insns) */
void f_116828c2(void) {
  FTRACE(0x116828c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116828c2 push edi */
  push32((uint32_t)(EDI));
  /* 116828c3 call 0x11682967 */
  push32(0x116828c8u); f_11682967();
  /* 116828c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 116828ca pop edi */
  EDI = (pop32());
  /* 116828cb cmp dword ptr [0x1168a02c], edi */
  { uint32_t _a=(r32((uint32_t)(0x1168a02c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116828d1 jne 0x116828e4 */
  if (!C.zf) goto L_116828e4;
  /* 116828d3 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 116828d7 call dword ptr [0x116880a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880a8))), 0x116828ddu);
  /* 116828dd push eax */
  push32((uint32_t)(EAX));
  /* 116828de call dword ptr [0x116880a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880a4))), 0x116828e4u);
L_116828e4:;
  /* 116828e4 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116828e9 push ebx */
  push32((uint32_t)(EBX));
  /* 116828ea mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 116828ee mov dword ptr [0x1168a028], edi */
  w32((uint32_t)(0x1168a028), (EDI));
  /* 116828f4 mov byte ptr [0x1168a024], bl */
  w8((uint32_t)(0x1168a024), (BL));
  /* 116828fa jne 0x11682938 */
  if (!C.zf) goto L_11682938;
  /* 116828fc mov eax, dword ptr [0x1168a6b0] */
  EAX = (r32((uint32_t)(0x1168a6b0)));
  /* 11682901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682903 je 0x11682927 */
  if (C.zf) goto L_11682927;
  /* 11682905 mov ecx, dword ptr [0x1168a6ac] */
  ECX = (r32((uint32_t)(0x1168a6ac)));
  /* 1168290b push esi */
  push32((uint32_t)(ESI));
  /* 1168290c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 1168290f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682911 jb 0x11682926 */
  if (C.cf) goto L_11682926;
L_11682913:;
  /* 11682913 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11682915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682917 je 0x1168291b */
  if (C.zf) goto L_1168291b;
  /* 11682919 call eax */
  call_ind((uint32_t)(EAX), 0x1168291bu);
L_1168291b:;
  /* 1168291b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168291e cmp esi, dword ptr [0x1168a6b0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1168a6b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682924 jae 0x11682913 */
  if (!C.cf) goto L_11682913;
L_11682926:;
  /* 11682926 pop esi */
  ESI = (pop32());
L_11682927:;
  /* 11682927 push 0x11689018 */
  push32((uint32_t)(0x11689018u));
  /* 1168292c push 0x11689014 */
  push32((uint32_t)(0x11689014u));
  /* 11682931 call 0x11682979 */
  push32(0x11682936u); f_11682979();
  /* 11682936 pop ecx */
  ECX = (pop32());
  /* 11682937 pop ecx */
  ECX = (pop32());
L_11682938:;
  /* 11682938 push 0x11689020 */
  push32((uint32_t)(0x11689020u));
  /* 1168293d push 0x1168901c */
  push32((uint32_t)(0x1168901cu));
  /* 11682942 call 0x11682979 */
  push32(0x11682947u); f_11682979();
  /* 11682947 pop ecx */
  ECX = (pop32());
  /* 11682948 pop ecx */
  ECX = (pop32());
  /* 11682949 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1168294b pop ebx */
  EBX = (pop32());
  /* 1168294c je 0x11682955 */
  if (C.zf) goto L_11682955;
  /* 1168294e call 0x11682970 */
  push32(0x11682953u); f_11682970();
  /* 11682953 pop edi */
  EDI = (pop32());
  /* 11682954 ret  */
  ESPCHK(0x116828c2u, _esp0);
  ESP += 4; return;
L_11682955:;
  /* 11682955 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11682959 mov dword ptr [0x1168a02c], edi */
  w32((uint32_t)(0x1168a02c), (EDI));
  /* 1168295f call dword ptr [0x116880a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880a0))), 0x11682965u);
  /* 11682965 pop edi */
  EDI = (pop32());
  /* 11682966 ret  */
  ESPCHK(0x116828c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002967 @ 0x11682967 (9 bytes, 4 insns) */
void f_11682967(void) {
  FTRACE(0x11682967u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682967 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11682969 call 0x116832ad */
  push32(0x1168296eu); f_116832ad();
  /* 1168296e pop ecx */
  ECX = (pop32());
  /* 1168296f ret  */
  ESPCHK(0x11682967u, _esp0);
  ESP += 4; return;
}

/* FUN_10002970 @ 0x11682970 (9 bytes, 4 insns) */
void f_11682970(void) {
  FTRACE(0x11682970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682970 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11682972 call 0x1168330e */
  push32(0x11682977u); f_1168330e();
  /* 11682977 pop ecx */
  ECX = (pop32());
  /* 11682978 ret  */
  ESPCHK(0x11682970u, _esp0);
  ESP += 4; return;
}

/* FUN_10002979 @ 0x11682979 (26 bytes, 12 insns) */
void f_11682979(void) {
  FTRACE(0x11682979u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682979 push esi */
  push32((uint32_t)(ESI));
  /* 1168297a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_1168297e:;
  /* 1168297e cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682982 jae 0x11682991 */
  if (!C.cf) goto L_11682991;
  /* 11682984 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11682986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682988 je 0x1168298c */
  if (C.zf) goto L_1168298c;
  /* 1168298a call eax */
  call_ind((uint32_t)(EAX), 0x1168298cu);
L_1168298c:;
  /* 1168298c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1168298f jmp 0x1168297e */
  goto L_1168297e;
L_11682991:;
  /* 11682991 pop esi */
  ESI = (pop32());
  /* 11682992 ret  */
  ESPCHK(0x11682979u, _esp0);
  ESP += 4; return;
}

/* FUN_10002993 @ 0x11682993 (444 bytes, 150 insns) */
void f_11682993(void) {
  FTRACE(0x11682993u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682993 push ebp */
  push32((uint32_t)(EBP));
  /* 11682994 mov ebp, esp */
  EBP = (ESP);
  /* 11682996 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11682999 push ebx */
  push32((uint32_t)(EBX));
  /* 1168299a push esi */
  push32((uint32_t)(ESI));
  /* 1168299b push edi */
  push32((uint32_t)(EDI));
  /* 1168299c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 116829a1 call 0x116820fc */
  push32(0x116829a6u); f_116820fc();
  /* 116829a6 mov esi, eax */
  ESI = (EAX);
  /* 116829a8 pop ecx */
  ECX = (pop32());
  /* 116829a9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116829ab jne 0x116829b5 */
  if (!C.zf) goto L_116829b5;
  /* 116829ad push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 116829af call 0x11682081 */
  push32(0x116829b4u); f_11682081();
  /* 116829b4 pop ecx */
  ECX = (pop32());
L_116829b5:;
  /* 116829b5 mov dword ptr [0x1168a5a0], esi */
  w32((uint32_t)(0x1168a5a0), (ESI));
  /* 116829bb mov dword ptr [0x1168a6a0], 0x20 */
  w32((uint32_t)(0x1168a6a0), (0x20u));
  /* 116829c5 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_116829cb:;
  /* 116829cb cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116829cd jae 0x116829ed */
  if (!C.cf) goto L_116829ed;
  /* 116829cf and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 116829d3 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 116829d6 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 116829da mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 116829de mov eax, dword ptr [0x1168a5a0] */
  EAX = (r32((uint32_t)(0x1168a5a0)));
  /* 116829e3 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116829e6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116829eb jmp 0x116829cb */
  goto L_116829cb;
L_116829ed:;
  /* 116829ed lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 116829f0 push eax */
  push32((uint32_t)(EAX));
  /* 116829f1 call dword ptr [0x11688098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688098))), 0x116829f7u);
  /* 116829f7 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 116829fc je 0x11682ad3 */
  if (C.zf) goto L_11682ad3;
  /* 11682a02 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11682a05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682a07 je 0x11682ad3 */
  if (C.zf) goto L_11682ad3;
  /* 11682a0d mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11682a0f lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11682a12 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11682a15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11682a18 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11682a1d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682a1f jl 0x11682a23 */
  if ((C.sf!=C.of)) goto L_11682a23;
  /* 11682a21 mov edi, eax */
  EDI = (EAX);
L_11682a23:;
  /* 11682a23 cmp dword ptr [0x1168a6a0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1168a6a0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682a29 jge 0x11682a81 */
  if ((C.sf==C.of)) goto L_11682a81;
  /* 11682a2b mov esi, 0x1168a5a4 */
  ESI = (0x1168a5a4u);
L_11682a30:;
  /* 11682a30 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11682a35 call 0x116820fc */
  push32(0x11682a3au); f_116820fc();
  /* 11682a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682a3c pop ecx */
  ECX = (pop32());
  /* 11682a3d je 0x11682a7b */
  if (C.zf) goto L_11682a7b;
  /* 11682a3f add dword ptr [0x1168a6a0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1168a6a0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x1168a6a0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11682a46 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11682a48 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11682a4e:;
  /* 11682a4e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682a50 jae 0x11682a6e */
  if (!C.cf) goto L_11682a6e;
  /* 11682a52 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11682a56 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11682a59 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11682a5d mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11682a61 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11682a63 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682a66 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682a6c jmp 0x11682a4e */
  goto L_11682a4e;
L_11682a6e:;
  /* 11682a6e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11682a71 cmp dword ptr [0x1168a6a0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1168a6a0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682a77 jl 0x11682a30 */
  if ((C.sf!=C.of)) goto L_11682a30;
  /* 11682a79 jmp 0x11682a81 */
  goto L_11682a81;
L_11682a7b:;
  /* 11682a7b mov edi, dword ptr [0x1168a6a0] */
  EDI = (r32((uint32_t)(0x1168a6a0)));
L_11682a81:;
  /* 11682a81 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11682a83 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11682a85 jle 0x11682ad3 */
  if ((C.zf||C.sf!=C.of)) goto L_11682ad3;
L_11682a87:;
  /* 11682a87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11682a8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11682a8c cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682a8f je 0x11682ac9 */
  if (C.zf) goto L_11682ac9;
  /* 11682a91 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11682a93 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11682a95 je 0x11682ac9 */
  if (C.zf) goto L_11682ac9;
  /* 11682a97 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11682a99 jne 0x11682aa6 */
  if (!C.zf) goto L_11682aa6;
  /* 11682a9b push ecx */
  push32((uint32_t)(ECX));
  /* 11682a9c call dword ptr [0x116880b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880b4))), 0x11682aa2u);
  /* 11682aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682aa4 je 0x11682ac9 */
  if (C.zf) goto L_11682ac9;
L_11682aa6:;
  /* 11682aa6 mov ecx, esi */
  ECX = (ESI);
  /* 11682aa8 mov eax, esi */
  EAX = (ESI);
  /* 11682aaa sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11682aad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11682ab0 mov ecx, dword ptr [ecx*4 + 0x1168a5a0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1168a5a0)));
  /* 11682ab7 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11682aba lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11682abd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11682ac0 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11682ac2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11682ac4 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11682ac6 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11682ac9:;
  /* 11682ac9 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11682acd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11682ace inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11682acf cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682ad1 jl 0x11682a87 */
  if ((C.sf!=C.of)) goto L_11682a87;
L_11682ad3:;
  /* 11682ad3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11682ad5:;
  /* 11682ad5 mov ecx, dword ptr [0x1168a5a0] */
  ECX = (r32((uint32_t)(0x1168a5a0)));
  /* 11682adb lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11682ade cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682ae2 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11682ae5 jne 0x11682b34 */
  if (!C.zf) goto L_11682b34;
  /* 11682ae7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11682ae9 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11682aed jne 0x11682af4 */
  if (!C.zf) goto L_11682af4;
  /* 11682aef push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11682af1 pop eax */
  EAX = (pop32());
  /* 11682af2 jmp 0x11682afe */
  goto L_11682afe;
L_11682af4:;
  /* 11682af4 mov eax, ebx */
  EAX = (EBX);
  /* 11682af6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11682af7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11682af9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11682afb add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11682afe:;
  /* 11682afe push eax */
  push32((uint32_t)(EAX));
  /* 11682aff call dword ptr [0x116880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880b0))), 0x11682b05u);
  /* 11682b05 mov edi, eax */
  EDI = (EAX);
  /* 11682b07 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682b0a je 0x11682b23 */
  if (C.zf) goto L_11682b23;
  /* 11682b0c push edi */
  push32((uint32_t)(EDI));
  /* 11682b0d call dword ptr [0x116880b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880b4))), 0x11682b13u);
  /* 11682b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682b15 je 0x11682b23 */
  if (C.zf) goto L_11682b23;
  /* 11682b17 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11682b1c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11682b1e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682b21 jne 0x11682b29 */
  if (!C.zf) goto L_11682b29;
L_11682b23:;
  /* 11682b23 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11682b27 jmp 0x11682b38 */
  goto L_11682b38;
L_11682b29:;
  /* 11682b29 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682b2c jne 0x11682b38 */
  if (!C.zf) goto L_11682b38;
  /* 11682b2e or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11682b32 jmp 0x11682b38 */
  goto L_11682b38;
L_11682b34:;
  /* 11682b34 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11682b38:;
  /* 11682b38 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11682b39 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682b3c jl 0x11682ad5 */
  if ((C.sf!=C.of)) goto L_11682ad5;
  /* 11682b3e push dword ptr [0x1168a6a0] */
  push32((uint32_t)(r32((uint32_t)(0x1168a6a0))));
  /* 11682b44 call dword ptr [0x116880ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880ac))), 0x11682b4au);
  /* 11682b4a pop edi */
  EDI = (pop32());
  /* 11682b4b pop esi */
  ESI = (pop32());
  /* 11682b4c pop ebx */
  EBX = (pop32());
  /* 11682b4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11682b4e ret  */
  ESPCHK(0x11682993u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b4f @ 0x11682b4f (84 bytes, 33 insns) */
void f_11682b4f(void) {
  FTRACE(0x11682b4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682b4f push ebx */
  push32((uint32_t)(EBX));
  /* 11682b50 push esi */
  push32((uint32_t)(ESI));
  /* 11682b51 push edi */
  push32((uint32_t)(EDI));
  /* 11682b52 mov esi, 0x1168a5a0 */
  ESI = (0x1168a5a0u);
L_11682b57:;
  /* 11682b57 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11682b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682b5b je 0x11682b94 */
  if (C.zf) goto L_11682b94;
  /* 11682b5d mov edi, eax */
  EDI = (EAX);
  /* 11682b5f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682b64 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682b66 jae 0x11682b89 */
  if (!C.cf) goto L_11682b89;
  /* 11682b68 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11682b6b:;
  /* 11682b6b cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682b6f je 0x11682b78 */
  if (C.zf) goto L_11682b78;
  /* 11682b71 push ebx */
  push32((uint32_t)(EBX));
  /* 11682b72 call dword ptr [0x116880bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880bc))), 0x11682b78u);
L_11682b78:;
  /* 11682b78 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11682b7a add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11682b7d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682b82 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11682b85 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682b87 jb 0x11682b6b */
  if (C.cf) goto L_11682b6b;
L_11682b89:;
  /* 11682b89 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11682b8b call 0x116820b4 */
  push32(0x11682b90u); f_116820b4();
  /* 11682b90 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11682b93 pop ecx */
  ECX = (pop32());
L_11682b94:;
  /* 11682b94 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11682b97 cmp esi, 0x1168a6a0 */
  { uint32_t _a=(ESI),_b=(0x1168a6a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682b9d jl 0x11682b57 */
  if ((C.sf!=C.of)) goto L_11682b57;
  /* 11682b9f pop edi */
  EDI = (pop32());
  /* 11682ba0 pop esi */
  ESI = (pop32());
  /* 11682ba1 pop ebx */
  EBX = (pop32());
  /* 11682ba2 ret  */
  ESPCHK(0x11682b4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba3 @ 0x11682ba3 (185 bytes, 71 insns) */
void f_11682ba3(void) {
  FTRACE(0x11682ba3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682ba3 push ebx */
  push32((uint32_t)(EBX));
  /* 11682ba4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11682ba6 cmp dword ptr [0x1168a6a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1168a6a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682bac push esi */
  push32((uint32_t)(ESI));
  /* 11682bad push edi */
  push32((uint32_t)(EDI));
  /* 11682bae jne 0x11682bb5 */
  if (!C.zf) goto L_11682bb5;
  /* 11682bb0 call 0x1168564e */
  push32(0x11682bb5u); f_1168564e();
L_11682bb5:;
  /* 11682bb5 mov esi, dword ptr [0x11689fdc] */
  ESI = (r32((uint32_t)(0x11689fdc)));
  /* 11682bbb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11682bbd:;
  /* 11682bbd mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11682bbf cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682bc1 je 0x11682bd5 */
  if (C.zf) goto L_11682bd5;
  /* 11682bc3 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682bc5 je 0x11682bc8 */
  if (C.zf) goto L_11682bc8;
  /* 11682bc7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11682bc8:;
  /* 11682bc8 push esi */
  push32((uint32_t)(ESI));
  /* 11682bc9 call 0x11684c30 */
  push32(0x11682bceu); f_11684c30();
  /* 11682bce pop ecx */
  ECX = (pop32());
  /* 11682bcf lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11682bd3 jmp 0x11682bbd */
  goto L_11682bbd;
L_11682bd5:;
  /* 11682bd5 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11682bdc push eax */
  push32((uint32_t)(EAX));
  /* 11682bdd call 0x116820fc */
  push32(0x11682be2u); f_116820fc();
  /* 11682be2 mov esi, eax */
  ESI = (EAX);
  /* 11682be4 pop ecx */
  ECX = (pop32());
  /* 11682be5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682be7 mov dword ptr [0x1168a00c], esi */
  w32((uint32_t)(0x1168a00c), (ESI));
  /* 11682bed jne 0x11682bf7 */
  if (!C.zf) goto L_11682bf7;
  /* 11682bef push 9 */
  push32((uint32_t)(0x9u));
  /* 11682bf1 call 0x11682081 */
  push32(0x11682bf6u); f_11682081();
  /* 11682bf6 pop ecx */
  ECX = (pop32());
L_11682bf7:;
  /* 11682bf7 mov edi, dword ptr [0x11689fdc] */
  EDI = (r32((uint32_t)(0x11689fdc)));
  /* 11682bfd cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682bff je 0x11682c3a */
  if (C.zf) goto L_11682c3a;
  /* 11682c01 push ebp */
  push32((uint32_t)(EBP));
L_11682c02:;
  /* 11682c02 push edi */
  push32((uint32_t)(EDI));
  /* 11682c03 call 0x11684c30 */
  push32(0x11682c08u); f_11684c30();
  /* 11682c08 mov ebp, eax */
  EBP = (EAX);
  /* 11682c0a pop ecx */
  ECX = (pop32());
  /* 11682c0b inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11682c0c cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682c0f je 0x11682c33 */
  if (C.zf) goto L_11682c33;
  /* 11682c11 push ebp */
  push32((uint32_t)(EBP));
  /* 11682c12 call 0x116820fc */
  push32(0x11682c17u); f_116820fc();
  /* 11682c17 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682c19 pop ecx */
  ECX = (pop32());
  /* 11682c1a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11682c1c jne 0x11682c26 */
  if (!C.zf) goto L_11682c26;
  /* 11682c1e push 9 */
  push32((uint32_t)(0x9u));
  /* 11682c20 call 0x11682081 */
  push32(0x11682c25u); f_11682081();
  /* 11682c25 pop ecx */
  ECX = (pop32());
L_11682c26:;
  /* 11682c26 push edi */
  push32((uint32_t)(EDI));
  /* 11682c27 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11682c29 call 0x116847a0 */
  push32(0x11682c2eu); f_116847a0();
  /* 11682c2e pop ecx */
  ECX = (pop32());
  /* 11682c2f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11682c32 pop ecx */
  ECX = (pop32());
L_11682c33:;
  /* 11682c33 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11682c35 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682c37 jne 0x11682c02 */
  if (!C.zf) goto L_11682c02;
  /* 11682c39 pop ebp */
  EBP = (pop32());
L_11682c3a:;
  /* 11682c3a push dword ptr [0x11689fdc] */
  push32((uint32_t)(r32((uint32_t)(0x11689fdc))));
  /* 11682c40 call 0x116820b4 */
  push32(0x11682c45u); f_116820b4();
  /* 11682c45 pop ecx */
  ECX = (pop32());
  /* 11682c46 mov dword ptr [0x11689fdc], ebx */
  w32((uint32_t)(0x11689fdc), (EBX));
  /* 11682c4c mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11682c4e pop edi */
  EDI = (pop32());
  /* 11682c4f pop esi */
  ESI = (pop32());
  /* 11682c50 mov dword ptr [0x1168a6a4], 1 */
  w32((uint32_t)(0x1168a6a4), (0x1u));
  /* 11682c5a pop ebx */
  EBX = (pop32());
  /* 11682c5b ret  */
  ESPCHK(0x11682ba3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c5c @ 0x11682c5c (153 bytes, 62 insns) */
void f_11682c5c(void) {
  FTRACE(0x11682c5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682c5c push ebp */
  push32((uint32_t)(EBP));
  /* 11682c5d mov ebp, esp */
  EBP = (ESP);
  /* 11682c5f push ecx */
  push32((uint32_t)(ECX));
  /* 11682c60 push ecx */
  push32((uint32_t)(ECX));
  /* 11682c61 push ebx */
  push32((uint32_t)(EBX));
  /* 11682c62 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11682c64 cmp dword ptr [0x1168a6a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1168a6a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682c6a push esi */
  push32((uint32_t)(ESI));
  /* 11682c6b push edi */
  push32((uint32_t)(EDI));
  /* 11682c6c jne 0x11682c73 */
  if (!C.zf) goto L_11682c73;
  /* 11682c6e call 0x1168564e */
  push32(0x11682c73u); f_1168564e();
L_11682c73:;
  /* 11682c73 mov esi, 0x1168a030 */
  ESI = (0x1168a030u);
  /* 11682c78 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11682c7d push esi */
  push32((uint32_t)(ESI));
  /* 11682c7e push ebx */
  push32((uint32_t)(EBX));
  /* 11682c7f call dword ptr [0x116880c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880c0))), 0x11682c85u);
  /* 11682c85 mov eax, dword ptr [0x1168a6b4] */
  EAX = (r32((uint32_t)(0x1168a6b4)));
  /* 11682c8a mov dword ptr [0x1168a01c], esi */
  w32((uint32_t)(0x1168a01c), (ESI));
  /* 11682c90 mov edi, esi */
  EDI = (ESI);
  /* 11682c92 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682c94 je 0x11682c98 */
  if (C.zf) goto L_11682c98;
  /* 11682c96 mov edi, eax */
  EDI = (EAX);
L_11682c98:;
  /* 11682c98 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11682c9b push eax */
  push32((uint32_t)(EAX));
  /* 11682c9c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11682c9f push eax */
  push32((uint32_t)(EAX));
  /* 11682ca0 push ebx */
  push32((uint32_t)(EBX));
  /* 11682ca1 push ebx */
  push32((uint32_t)(EBX));
  /* 11682ca2 push edi */
  push32((uint32_t)(EDI));
  /* 11682ca3 call 0x11682cf5 */
  push32(0x11682ca8u); f_11682cf5();
  /* 11682ca8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11682cab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11682cae lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11682cb1 push eax */
  push32((uint32_t)(EAX));
  /* 11682cb2 call 0x116820fc */
  push32(0x11682cb7u); f_116820fc();
  /* 11682cb7 mov esi, eax */
  ESI = (EAX);
  /* 11682cb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11682cbc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682cbe jne 0x11682cc8 */
  if (!C.zf) goto L_11682cc8;
  /* 11682cc0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11682cc2 call 0x11682081 */
  push32(0x11682cc7u); f_11682081();
  /* 11682cc7 pop ecx */
  ECX = (pop32());
L_11682cc8:;
  /* 11682cc8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11682ccb push eax */
  push32((uint32_t)(EAX));
  /* 11682ccc lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11682ccf push eax */
  push32((uint32_t)(EAX));
  /* 11682cd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11682cd3 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11682cd6 push eax */
  push32((uint32_t)(EAX));
  /* 11682cd7 push esi */
  push32((uint32_t)(ESI));
  /* 11682cd8 push edi */
  push32((uint32_t)(EDI));
  /* 11682cd9 call 0x11682cf5 */
  push32(0x11682cdeu); f_11682cf5();
  /* 11682cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11682ce1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11682ce4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11682ce5 mov dword ptr [0x1168a004], esi */
  w32((uint32_t)(0x1168a004), (ESI));
  /* 11682ceb pop edi */
  EDI = (pop32());
  /* 11682cec pop esi */
  ESI = (pop32());
  /* 11682ced mov dword ptr [0x1168a000], eax */
  w32((uint32_t)(0x1168a000), (EAX));
  /* 11682cf2 pop ebx */
  EBX = (pop32());
  /* 11682cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11682cf4 ret  */
  ESPCHK(0x11682c5cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf5 @ 0x11682cf5 (436 bytes, 187 insns) */
void f_11682cf5(void) {
  FTRACE(0x11682cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682cf5 push ebp */
  push32((uint32_t)(EBP));
  /* 11682cf6 mov ebp, esp */
  EBP = (ESP);
  /* 11682cf8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11682cfb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11682cfe push ebx */
  push32((uint32_t)(EBX));
  /* 11682cff push esi */
  push32((uint32_t)(ESI));
  /* 11682d00 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11682d03 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11682d06 push edi */
  push32((uint32_t)(EDI));
  /* 11682d07 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11682d0a mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11682d10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11682d13 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11682d15 je 0x11682d1f */
  if (C.zf) goto L_11682d1f;
  /* 11682d17 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11682d19 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11682d1c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11682d1f:;
  /* 11682d1f cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682d22 jne 0x11682d68 */
  if (!C.zf) goto L_11682d68;
L_11682d24:;
  /* 11682d24 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11682d27 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682d28 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682d2b je 0x11682d56 */
  if (C.zf) goto L_11682d56;
  /* 11682d2d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11682d2f je 0x11682d56 */
  if (C.zf) goto L_11682d56;
  /* 11682d31 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11682d34 test byte ptr [edx + 0x1168a461], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1168a461)))&(0x4u); fl_logic(_r,8); }
  /* 11682d3b je 0x11682d49 */
  if (C.zf) goto L_11682d49;
  /* 11682d3d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11682d3f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682d41 je 0x11682d49 */
  if (C.zf) goto L_11682d49;
  /* 11682d43 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11682d45 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11682d47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11682d48 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11682d49:;
  /* 11682d49 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11682d4b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682d4d je 0x11682d24 */
  if (C.zf) goto L_11682d24;
  /* 11682d4f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11682d51 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11682d53 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11682d54 jmp 0x11682d24 */
  goto L_11682d24;
L_11682d56:;
  /* 11682d56 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11682d58 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682d5a je 0x11682d60 */
  if (C.zf) goto L_11682d60;
  /* 11682d5c and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11682d5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11682d60:;
  /* 11682d60 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682d63 jne 0x11682dab */
  if (!C.zf) goto L_11682dab;
  /* 11682d65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682d66 jmp 0x11682dab */
  goto L_11682dab;
L_11682d68:;
  /* 11682d68 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11682d6a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682d6c je 0x11682d73 */
  if (C.zf) goto L_11682d73;
  /* 11682d6e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11682d70 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11682d72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11682d73:;
  /* 11682d73 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11682d75 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682d76 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11682d79 test byte ptr [ebx + 0x1168a461], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1168a461)))&(0x4u); fl_logic(_r,8); }
  /* 11682d80 je 0x11682d8e */
  if (C.zf) goto L_11682d8e;
  /* 11682d82 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11682d84 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682d86 je 0x11682d8d */
  if (C.zf) goto L_11682d8d;
  /* 11682d88 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11682d8a mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11682d8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11682d8d:;
  /* 11682d8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11682d8e:;
  /* 11682d8e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682d91 je 0x11682d9c */
  if (C.zf) goto L_11682d9c;
  /* 11682d93 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11682d95 je 0x11682da0 */
  if (C.zf) goto L_11682da0;
  /* 11682d97 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682d9a jne 0x11682d68 */
  if (!C.zf) goto L_11682d68;
L_11682d9c:;
  /* 11682d9c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11682d9e jne 0x11682da3 */
  if (!C.zf) goto L_11682da3;
L_11682da0:;
  /* 11682da0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11682da1 jmp 0x11682dab */
  goto L_11682dab;
L_11682da3:;
  /* 11682da3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682da5 je 0x11682dab */
  if (C.zf) goto L_11682dab;
  /* 11682da7 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11682dab:;
  /* 11682dab and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11682daf:;
  /* 11682daf cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682db2 je 0x11682e98 */
  if (C.zf) goto L_11682e98;
L_11682db8:;
  /* 11682db8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11682dba cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682dbd je 0x11682dc4 */
  if (C.zf) goto L_11682dc4;
  /* 11682dbf cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682dc2 jne 0x11682dc7 */
  if (!C.zf) goto L_11682dc7;
L_11682dc4:;
  /* 11682dc4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682dc5 jmp 0x11682db8 */
  goto L_11682db8;
L_11682dc7:;
  /* 11682dc7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682dca je 0x11682e98 */
  if (C.zf) goto L_11682e98;
  /* 11682dd0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11682dd2 je 0x11682ddc */
  if (C.zf) goto L_11682ddc;
  /* 11682dd4 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11682dd6 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11682dd9 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11682ddc:;
  /* 11682ddc mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11682ddf inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11682de1:;
  /* 11682de1 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11682de8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11682dea:;
  /* 11682dea cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682ded jne 0x11682df3 */
  if (!C.zf) goto L_11682df3;
  /* 11682def inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682df0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11682df1 jmp 0x11682dea */
  goto L_11682dea;
L_11682df3:;
  /* 11682df3 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682df6 jne 0x11682e24 */
  if (!C.zf) goto L_11682e24;
  /* 11682df8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11682dfb jne 0x11682e22 */
  if (!C.zf) goto L_11682e22;
  /* 11682dfd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11682dff cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682e02 je 0x11682e11 */
  if (C.zf) goto L_11682e11;
  /* 11682e04 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682e08 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11682e0b jne 0x11682e11 */
  if (!C.zf) goto L_11682e11;
  /* 11682e0d mov eax, edx */
  EAX = (EDX);
  /* 11682e0f jmp 0x11682e14 */
  goto L_11682e14;
L_11682e11:;
  /* 11682e11 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11682e14:;
  /* 11682e14 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11682e17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11682e19 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682e1c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11682e1f mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11682e22:;
  /* 11682e22 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11682e24:;
  /* 11682e24 mov edx, ebx */
  EDX = (EBX);
  /* 11682e26 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11682e27 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11682e29 je 0x11682e39 */
  if (C.zf) goto L_11682e39;
  /* 11682e2b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11682e2c:;
  /* 11682e2c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682e2e je 0x11682e34 */
  if (C.zf) goto L_11682e34;
  /* 11682e30 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11682e33 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11682e34:;
  /* 11682e34 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11682e36 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11682e37 jne 0x11682e2c */
  if (!C.zf) goto L_11682e2c;
L_11682e39:;
  /* 11682e39 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11682e3b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11682e3d je 0x11682e89 */
  if (C.zf) goto L_11682e89;
  /* 11682e3f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682e43 jne 0x11682e4f */
  if (!C.zf) goto L_11682e4f;
  /* 11682e45 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682e48 je 0x11682e89 */
  if (C.zf) goto L_11682e89;
  /* 11682e4a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682e4d je 0x11682e89 */
  if (C.zf) goto L_11682e89;
L_11682e4f:;
  /* 11682e4f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682e53 je 0x11682e83 */
  if (C.zf) goto L_11682e83;
  /* 11682e55 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682e57 je 0x11682e72 */
  if (C.zf) goto L_11682e72;
  /* 11682e59 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11682e5c test byte ptr [ebx + 0x1168a461], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1168a461)))&(0x4u); fl_logic(_r,8); }
  /* 11682e63 je 0x11682e6b */
  if (C.zf) goto L_11682e6b;
  /* 11682e65 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11682e67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11682e68 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682e69 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11682e6b:;
  /* 11682e6b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11682e6d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11682e6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11682e70 jmp 0x11682e81 */
  goto L_11682e81;
L_11682e72:;
  /* 11682e72 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11682e75 test byte ptr [edx + 0x1168a461], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1168a461)))&(0x4u); fl_logic(_r,8); }
  /* 11682e7c je 0x11682e81 */
  if (C.zf) goto L_11682e81;
  /* 11682e7e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682e7f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11682e81:;
  /* 11682e81 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11682e83:;
  /* 11682e83 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682e84 jmp 0x11682de1 */
  goto L_11682de1;
L_11682e89:;
  /* 11682e89 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11682e8b je 0x11682e91 */
  if (C.zf) goto L_11682e91;
  /* 11682e8d and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11682e90 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11682e91:;
  /* 11682e91 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11682e93 jmp 0x11682daf */
  goto L_11682daf;
L_11682e98:;
  /* 11682e98 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11682e9a je 0x11682e9f */
  if (C.zf) goto L_11682e9f;
  /* 11682e9c and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11682e9f:;
  /* 11682e9f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11682ea2 pop edi */
  EDI = (pop32());
  /* 11682ea3 pop esi */
  ESI = (pop32());
  /* 11682ea4 pop ebx */
  EBX = (pop32());
  /* 11682ea5 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11682ea7 pop ebp */
  EBP = (pop32());
  /* 11682ea8 ret  */
  ESPCHK(0x11682cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ea9 @ 0x11682ea9 (306 bytes, 132 insns) */
void f_11682ea9(void) {
  FTRACE(0x11682ea9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 11682eaa push ecx */
  push32((uint32_t)(ECX));
  /* 11682eab mov eax, dword ptr [0x1168a134] */
  EAX = (r32((uint32_t)(0x1168a134)));
  /* 11682eb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11682eb1 push ebp */
  push32((uint32_t)(EBP));
  /* 11682eb2 mov ebp, dword ptr [0x116880d0] */
  EBP = (r32((uint32_t)(0x116880d0)));
  /* 11682eb8 push esi */
  push32((uint32_t)(ESI));
  /* 11682eb9 push edi */
  push32((uint32_t)(EDI));
  /* 11682eba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11682ebc xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11682ebe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11682ec0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682ec2 jne 0x11682ef7 */
  if (!C.zf) goto L_11682ef7;
  /* 11682ec4 call ebp */
  call_ind((uint32_t)(EBP), 0x11682ec6u);
  /* 11682ec6 mov esi, eax */
  ESI = (EAX);
  /* 11682ec8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682eca je 0x11682ed8 */
  if (C.zf) goto L_11682ed8;
  /* 11682ecc mov dword ptr [0x1168a134], 1 */
  w32((uint32_t)(0x1168a134), (0x1u));
  /* 11682ed6 jmp 0x11682f00 */
  goto L_11682f00;
L_11682ed8:;
  /* 11682ed8 call dword ptr [0x116880cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880cc))), 0x11682edeu);
  /* 11682ede mov edi, eax */
  EDI = (EAX);
  /* 11682ee0 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682ee2 je 0x11682fd2 */
  if (C.zf) goto L_11682fd2;
  /* 11682ee8 mov dword ptr [0x1168a134], 2 */
  w32((uint32_t)(0x1168a134), (0x2u));
  /* 11682ef2 jmp 0x11682f86 */
  goto L_11682f86;
L_11682ef7:;
  /* 11682ef7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682efa jne 0x11682f81 */
  if (!C.zf) goto L_11682f81;
L_11682f00:;
  /* 11682f00 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682f02 jne 0x11682f10 */
  if (!C.zf) goto L_11682f10;
  /* 11682f04 call ebp */
  call_ind((uint32_t)(EBP), 0x11682f06u);
  /* 11682f06 mov esi, eax */
  ESI = (EAX);
  /* 11682f08 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682f0a je 0x11682fd2 */
  if (C.zf) goto L_11682fd2;
L_11682f10:;
  /* 11682f10 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11682f13 mov eax, esi */
  EAX = (ESI);
  /* 11682f15 je 0x11682f25 */
  if (C.zf) goto L_11682f25;
L_11682f17:;
  /* 11682f17 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682f18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682f19 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11682f1c jne 0x11682f17 */
  if (!C.zf) goto L_11682f17;
  /* 11682f1e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682f1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682f20 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11682f23 jne 0x11682f17 */
  if (!C.zf) goto L_11682f17;
L_11682f25:;
  /* 11682f25 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11682f27 mov edi, dword ptr [0x116880c8] */
  EDI = (r32((uint32_t)(0x116880c8)));
  /* 11682f2d sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11682f2f push ebx */
  push32((uint32_t)(EBX));
  /* 11682f30 push ebx */
  push32((uint32_t)(EBX));
  /* 11682f31 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682f32 push ebx */
  push32((uint32_t)(EBX));
  /* 11682f33 push ebx */
  push32((uint32_t)(EBX));
  /* 11682f34 push eax */
  push32((uint32_t)(EAX));
  /* 11682f35 push esi */
  push32((uint32_t)(ESI));
  /* 11682f36 push ebx */
  push32((uint32_t)(EBX));
  /* 11682f37 push ebx */
  push32((uint32_t)(EBX));
  /* 11682f38 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11682f3c call edi */
  call_ind((uint32_t)(EDI), 0x11682f3eu);
  /* 11682f3e mov ebp, eax */
  EBP = (EAX);
  /* 11682f40 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682f42 je 0x11682f76 */
  if (C.zf) goto L_11682f76;
  /* 11682f44 push ebp */
  push32((uint32_t)(EBP));
  /* 11682f45 call 0x116820fc */
  push32(0x11682f4au); f_116820fc();
  /* 11682f4a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682f4c pop ecx */
  ECX = (pop32());
  /* 11682f4d mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11682f51 je 0x11682f76 */
  if (C.zf) goto L_11682f76;
  /* 11682f53 push ebx */
  push32((uint32_t)(EBX));
  /* 11682f54 push ebx */
  push32((uint32_t)(EBX));
  /* 11682f55 push ebp */
  push32((uint32_t)(EBP));
  /* 11682f56 push eax */
  push32((uint32_t)(EAX));
  /* 11682f57 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11682f5b push esi */
  push32((uint32_t)(ESI));
  /* 11682f5c push ebx */
  push32((uint32_t)(EBX));
  /* 11682f5d push ebx */
  push32((uint32_t)(EBX));
  /* 11682f5e call edi */
  call_ind((uint32_t)(EDI), 0x11682f60u);
  /* 11682f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682f62 jne 0x11682f72 */
  if (!C.zf) goto L_11682f72;
  /* 11682f64 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11682f68 call 0x116820b4 */
  push32(0x11682f6du); f_116820b4();
  /* 11682f6d pop ecx */
  ECX = (pop32());
  /* 11682f6e mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11682f72:;
  /* 11682f72 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11682f76:;
  /* 11682f76 push esi */
  push32((uint32_t)(ESI));
  /* 11682f77 call dword ptr [0x116880b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880b8))), 0x11682f7du);
  /* 11682f7d mov eax, ebx */
  EAX = (EBX);
  /* 11682f7f jmp 0x11682fd4 */
  goto L_11682fd4;
L_11682f81:;
  /* 11682f81 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682f84 jne 0x11682fd2 */
  if (!C.zf) goto L_11682fd2;
L_11682f86:;
  /* 11682f86 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682f88 jne 0x11682f96 */
  if (!C.zf) goto L_11682f96;
  /* 11682f8a call dword ptr [0x116880cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880cc))), 0x11682f90u);
  /* 11682f90 mov edi, eax */
  EDI = (EAX);
  /* 11682f92 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682f94 je 0x11682fd2 */
  if (C.zf) goto L_11682fd2;
L_11682f96:;
  /* 11682f96 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682f98 mov eax, edi */
  EAX = (EDI);
  /* 11682f9a je 0x11682fa6 */
  if (C.zf) goto L_11682fa6;
L_11682f9c:;
  /* 11682f9c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682f9d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682f9f jne 0x11682f9c */
  if (!C.zf) goto L_11682f9c;
  /* 11682fa1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682fa2 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11682fa4 jne 0x11682f9c */
  if (!C.zf) goto L_11682f9c;
L_11682fa6:;
  /* 11682fa6 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11682fa8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11682fa9 mov ebp, eax */
  EBP = (EAX);
  /* 11682fab push ebp */
  push32((uint32_t)(EBP));
  /* 11682fac call 0x116820fc */
  push32(0x11682fb1u); f_116820fc();
  /* 11682fb1 mov esi, eax */
  ESI = (EAX);
  /* 11682fb3 pop ecx */
  ECX = (pop32());
  /* 11682fb4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682fb6 jne 0x11682fbc */
  if (!C.zf) goto L_11682fbc;
  /* 11682fb8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11682fba jmp 0x11682fc7 */
  goto L_11682fc7;
L_11682fbc:;
  /* 11682fbc push ebp */
  push32((uint32_t)(EBP));
  /* 11682fbd push edi */
  push32((uint32_t)(EDI));
  /* 11682fbe push esi */
  push32((uint32_t)(ESI));
  /* 11682fbf call 0x11685670 */
  push32(0x11682fc4u); f_11685670();
  /* 11682fc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11682fc7:;
  /* 11682fc7 push edi */
  push32((uint32_t)(EDI));
  /* 11682fc8 call dword ptr [0x116880c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880c4))), 0x11682fceu);
  /* 11682fce mov eax, esi */
  EAX = (ESI);
  /* 11682fd0 jmp 0x11682fd4 */
  goto L_11682fd4;
L_11682fd2:;
  /* 11682fd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11682fd4:;
  /* 11682fd4 pop edi */
  EDI = (pop32());
  /* 11682fd5 pop esi */
  ESI = (pop32());
  /* 11682fd6 pop ebp */
  EBP = (pop32());
  /* 11682fd7 pop ebx */
  EBX = (pop32());
  /* 11682fd8 pop ecx */
  ECX = (pop32());
  /* 11682fd9 pop ecx */
  ECX = (pop32());
  /* 11682fda ret  */
  ESPCHK(0x11682ea9u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fdb @ 0x11682fdb (60 bytes, 20 insns) */
void f_11682fdb(void) {
  FTRACE(0x11682fdbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11682fdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11682fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11682fdf cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11682fe3 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11682fe8 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11682feb push eax */
  push32((uint32_t)(EAX));
  /* 11682fec call dword ptr [0x1168805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168805c))), 0x11682ff2u);
  /* 11682ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11682ff4 mov dword ptr [0x1168a580], eax */
  w32((uint32_t)(0x1168a580), (EAX));
  /* 11682ff9 je 0x11683010 */
  if (C.zf) goto L_11683010;
  /* 11682ffb call 0x11683323 */
  push32(0x11683000u); f_11683323();
  /* 11683000 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683002 jne 0x11683013 */
  if (!C.zf) goto L_11683013;
  /* 11683004 push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 1168300a call dword ptr [0x116880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880d4))), 0x11683010u);
L_11683010:;
  /* 11683010 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11683012 ret  */
  ESPCHK(0x11682fdbu, _esp0);
  ESP += 4; return;
L_11683013:;
  /* 11683013 push 1 */
  push32((uint32_t)(0x1u));
  /* 11683015 pop eax */
  EAX = (pop32());
  /* 11683016 ret  */
  ESPCHK(0x11682fdbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003017 @ 0x11683017 (117 bytes, 38 insns) */
void f_11683017(void) {
  FTRACE(0x11683017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683017 push ebx */
  push32((uint32_t)(EBX));
  /* 11683018 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1168301a cmp dword ptr [0x1168a578], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1168a578))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683020 push ebp */
  push32((uint32_t)(EBP));
  /* 11683021 mov ebp, dword ptr [0x11688074] */
  EBP = (r32((uint32_t)(0x11688074)));
  /* 11683027 jle 0x1168306d */
  if ((C.zf||C.sf!=C.of)) goto L_1168306d;
  /* 11683029 mov eax, dword ptr [0x1168a57c] */
  EAX = (r32((uint32_t)(0x1168a57c)));
  /* 1168302e push esi */
  push32((uint32_t)(ESI));
  /* 1168302f push edi */
  push32((uint32_t)(EDI));
  /* 11683030 mov edi, dword ptr [0x11688058] */
  EDI = (r32((uint32_t)(0x11688058)));
  /* 11683036 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11683039:;
  /* 11683039 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1168303e push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11683043 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11683045 call edi */
  call_ind((uint32_t)(EDI), 0x11683047u);
  /* 11683047 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1168304c push 0 */
  push32((uint32_t)(0x0u));
  /* 1168304e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11683050 call edi */
  call_ind((uint32_t)(EDI), 0x11683052u);
  /* 11683052 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11683055 push 0 */
  push32((uint32_t)(0x0u));
  /* 11683057 push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 1168305d call ebp */
  call_ind((uint32_t)(EBP), 0x1168305fu);
  /* 1168305f add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11683062 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11683063 cmp ebx, dword ptr [0x1168a578] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1168a578))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683069 jl 0x11683039 */
  if ((C.sf!=C.of)) goto L_11683039;
  /* 1168306b pop edi */
  EDI = (pop32());
  /* 1168306c pop esi */
  ESI = (pop32());
L_1168306d:;
  /* 1168306d push dword ptr [0x1168a57c] */
  push32((uint32_t)(r32((uint32_t)(0x1168a57c))));
  /* 11683073 push 0 */
  push32((uint32_t)(0x0u));
  /* 11683075 push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 1168307b call ebp */
  call_ind((uint32_t)(EBP), 0x1168307du);
  /* 1168307d push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 11683083 call dword ptr [0x116880d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880d4))), 0x11683089u);
  /* 11683089 pop ebp */
  EBP = (pop32());
  /* 1168308a pop ebx */
  EBX = (pop32());
  /* 1168308b ret  */
  ESPCHK(0x11683017u, _esp0);
  ESP += 4; return;
}

/* FUN_1000308c @ 0x1168308c (57 bytes, 18 insns) */
void f_1168308c(void) {
  FTRACE(0x1168308cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168308c mov eax, dword ptr [0x11689fe4] */
  EAX = (r32((uint32_t)(0x11689fe4)));
  /* 11683091 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683094 je 0x116830a3 */
  if (C.zf) goto L_116830a3;
  /* 11683096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683098 jne 0x116830c4 */
  if (!C.zf) goto L_116830c4;
  /* 1168309a cmp dword ptr [0x11689fe8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11689fe8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116830a1 jne 0x116830c4 */
  if (!C.zf) goto L_116830c4;
L_116830a3:;
  /* 116830a3 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 116830a8 call 0x116830c5 */
  push32(0x116830adu); f_116830c5();
  /* 116830ad mov eax, dword ptr [0x1168a138] */
  EAX = (r32((uint32_t)(0x1168a138)));
  /* 116830b2 pop ecx */
  ECX = (pop32());
  /* 116830b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116830b5 je 0x116830b9 */
  if (C.zf) goto L_116830b9;
  /* 116830b7 call eax */
  call_ind((uint32_t)(EAX), 0x116830b9u);
L_116830b9:;
  /* 116830b9 push 0xff */
  push32((uint32_t)(0xffu));
  /* 116830be call 0x116830c5 */
  push32(0x116830c3u); f_116830c5();
  /* 116830c3 pop ecx */
  ECX = (pop32());
L_116830c4:;
  /* 116830c4 ret  */
  ESPCHK(0x1168308cu, _esp0);
  ESP += 4; return;
}

/* FUN_100030c5 @ 0x116830c5 (339 bytes, 100 insns) */
void f_116830c5(void) {
  FTRACE(0x116830c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116830c5 push ebp */
  push32((uint32_t)(EBP));
  /* 116830c6 mov ebp, esp */
  EBP = (ESP);
  /* 116830c8 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116830ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116830d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 116830d3 mov eax, 0x116891e8 */
  EAX = (0x116891e8u);
L_116830d8:;
  /* 116830d8 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116830da je 0x116830e7 */
  if (C.zf) goto L_116830e7;
  /* 116830dc add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116830df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116830e0 cmp eax, 0x11689278 */
  { uint32_t _a=(EAX),_b=(0x11689278u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116830e5 jl 0x116830d8 */
  if ((C.sf!=C.of)) goto L_116830d8;
L_116830e7:;
  /* 116830e7 push esi */
  push32((uint32_t)(ESI));
  /* 116830e8 mov esi, ecx */
  ESI = (ECX);
  /* 116830ea shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 116830ed cmp edx, dword ptr [esi + 0x116891e8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x116891e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116830f3 jne 0x11683215 */
  if (!C.zf) goto L_11683215;
  /* 116830f9 mov eax, dword ptr [0x11689fe4] */
  EAX = (r32((uint32_t)(0x11689fe4)));
  /* 116830fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683101 je 0x116831ef */
  if (C.zf) goto L_116831ef;
  /* 11683107 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683109 jne 0x11683118 */
  if (!C.zf) goto L_11683118;
  /* 1168310b cmp dword ptr [0x11689fe8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11689fe8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683112 je 0x116831ef */
  if (C.zf) goto L_116831ef;
L_11683118:;
  /* 11683118 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168311e je 0x11683215 */
  if (C.zf) goto L_11683215;
  /* 11683124 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1168312a push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1168312f push eax */
  push32((uint32_t)(EAX));
  /* 11683130 push 0 */
  push32((uint32_t)(0x0u));
  /* 11683132 call dword ptr [0x116880c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880c0))), 0x11683138u);
  /* 11683138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168313a jne 0x1168314f */
  if (!C.zf) goto L_1168314f;
  /* 1168313c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11683142 push 0x116884a8 */
  push32((uint32_t)(0x116884a8u));
  /* 11683147 push eax */
  push32((uint32_t)(EAX));
  /* 11683148 call 0x116847a0 */
  push32(0x1168314du); f_116847a0();
  /* 1168314d pop ecx */
  ECX = (pop32());
  /* 1168314e pop ecx */
  ECX = (pop32());
L_1168314f:;
  /* 1168314f lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11683155 push edi */
  push32((uint32_t)(EDI));
  /* 11683156 push eax */
  push32((uint32_t)(EAX));
  /* 11683157 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 1168315d call 0x11684c30 */
  push32(0x11683162u); f_11684c30();
  /* 11683162 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11683163 pop ecx */
  ECX = (pop32());
  /* 11683164 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683167 jbe 0x11683192 */
  if ((C.cf||C.zf)) goto L_11683192;
  /* 11683169 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1168316f push eax */
  push32((uint32_t)(EAX));
  /* 11683170 call 0x11684c30 */
  push32(0x11683175u); f_11684c30();
  /* 11683175 mov edi, eax */
  EDI = (EAX);
  /* 11683177 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1168317d sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11683180 push 3 */
  push32((uint32_t)(0x3u));
  /* 11683182 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11683184 push 0x116884a4 */
  push32((uint32_t)(0x116884a4u));
  /* 11683189 push edi */
  push32((uint32_t)(EDI));
  /* 1168318a call 0x11685a30 */
  push32(0x1168318fu); f_11685a30();
  /* 1168318f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11683192:;
  /* 11683192 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11683198 push 0x11688488 */
  push32((uint32_t)(0x11688488u));
  /* 1168319d push eax */
  push32((uint32_t)(EAX));
  /* 1168319e call 0x116847a0 */
  push32(0x116831a3u); f_116847a0();
  /* 116831a3 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 116831a9 push edi */
  push32((uint32_t)(EDI));
  /* 116831aa push eax */
  push32((uint32_t)(EAX));
  /* 116831ab call 0x116847b0 */
  push32(0x116831b0u); f_116847b0();
  /* 116831b0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 116831b6 push 0x11688484 */
  push32((uint32_t)(0x11688484u));
  /* 116831bb push eax */
  push32((uint32_t)(EAX));
  /* 116831bc call 0x116847b0 */
  push32(0x116831c1u); f_116847b0();
  /* 116831c1 push dword ptr [esi + 0x116891ec] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x116891ec))));
  /* 116831c7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 116831cd push eax */
  push32((uint32_t)(EAX));
  /* 116831ce call 0x116847b0 */
  push32(0x116831d3u); f_116847b0();
  /* 116831d3 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 116831d8 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 116831de push 0x1168845c */
  push32((uint32_t)(0x1168845cu));
  /* 116831e3 push eax */
  push32((uint32_t)(EAX));
  /* 116831e4 call 0x116859a5 */
  push32(0x116831e9u); f_116859a5();
  /* 116831e9 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116831ec pop edi */
  EDI = (pop32());
  /* 116831ed jmp 0x11683215 */
  goto L_11683215;
L_116831ef:;
  /* 116831ef lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 116831f2 lea esi, [esi + 0x116891ec] */
  ESI = ((uint32_t)(ESI + 0x116891ec));
  /* 116831f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 116831fa push eax */
  push32((uint32_t)(EAX));
  /* 116831fb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 116831fd call 0x11684c30 */
  push32(0x11683202u); f_11684c30();
  /* 11683202 pop ecx */
  ECX = (pop32());
  /* 11683203 push eax */
  push32((uint32_t)(EAX));
  /* 11683204 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11683206 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11683208 call dword ptr [0x116880b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880b0))), 0x1168320eu);
  /* 1168320e push eax */
  push32((uint32_t)(EAX));
  /* 1168320f call dword ptr [0x1168809c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168809c))), 0x11683215u);
L_11683215:;
  /* 11683215 pop esi */
  ESI = (pop32());
  /* 11683216 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11683217 ret  */
  ESPCHK(0x116830c5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003218 @ 0x11683218 (41 bytes, 12 insns) */
void f_11683218(void) {
  FTRACE(0x11683218u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683218 push esi */
  push32((uint32_t)(ESI));
  /* 11683219 mov esi, dword ptr [0x11688050] */
  ESI = (r32((uint32_t)(0x11688050)));
  /* 1168321f push dword ptr [0x116892bc] */
  push32((uint32_t)(r32((uint32_t)(0x116892bc))));
  /* 11683225 call esi */
  call_ind((uint32_t)(ESI), 0x11683227u);
  /* 11683227 push dword ptr [0x116892ac] */
  push32((uint32_t)(r32((uint32_t)(0x116892ac))));
  /* 1168322d call esi */
  call_ind((uint32_t)(ESI), 0x1168322fu);
  /* 1168322f push dword ptr [0x1168929c] */
  push32((uint32_t)(r32((uint32_t)(0x1168929c))));
  /* 11683235 call esi */
  call_ind((uint32_t)(ESI), 0x11683237u);
  /* 11683237 push dword ptr [0x1168927c] */
  push32((uint32_t)(r32((uint32_t)(0x1168927c))));
  /* 1168323d call esi */
  call_ind((uint32_t)(ESI), 0x1168323fu);
  /* 1168323f pop esi */
  ESI = (pop32());
  /* 11683240 ret  */
  ESPCHK(0x11683218u, _esp0);
  ESP += 4; return;
}

/* FUN_10003241 @ 0x11683241 (108 bytes, 34 insns) */
void f_11683241(void) {
  FTRACE(0x11683241u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683241 push esi */
  push32((uint32_t)(ESI));
  /* 11683242 push edi */
  push32((uint32_t)(EDI));
  /* 11683243 mov edi, dword ptr [0x116880bc] */
  EDI = (r32((uint32_t)(0x116880bc)));
  /* 11683249 mov esi, 0x11689278 */
  ESI = (0x11689278u);
L_1168324e:;
  /* 1168324e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11683250 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683252 je 0x1168327f */
  if (C.zf) goto L_1168327f;
  /* 11683254 cmp esi, 0x116892bc */
  { uint32_t _a=(ESI),_b=(0x116892bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168325a je 0x1168327f */
  if (C.zf) goto L_1168327f;
  /* 1168325c cmp esi, 0x116892ac */
  { uint32_t _a=(ESI),_b=(0x116892acu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683262 je 0x1168327f */
  if (C.zf) goto L_1168327f;
  /* 11683264 cmp esi, 0x1168929c */
  { uint32_t _a=(ESI),_b=(0x1168929cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168326a je 0x1168327f */
  if (C.zf) goto L_1168327f;
  /* 1168326c cmp esi, 0x1168927c */
  { uint32_t _a=(ESI),_b=(0x1168927cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683272 je 0x1168327f */
  if (C.zf) goto L_1168327f;
  /* 11683274 push eax */
  push32((uint32_t)(EAX));
  /* 11683275 call edi */
  call_ind((uint32_t)(EDI), 0x11683277u);
  /* 11683277 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11683279 call 0x116820b4 */
  push32(0x1168327eu); f_116820b4();
  /* 1168327e pop ecx */
  ECX = (pop32());
L_1168327f:;
  /* 1168327f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11683282 cmp esi, 0x11689338 */
  { uint32_t _a=(ESI),_b=(0x11689338u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683288 jl 0x1168324e */
  if ((C.sf!=C.of)) goto L_1168324e;
  /* 1168328a push dword ptr [0x1168929c] */
  push32((uint32_t)(r32((uint32_t)(0x1168929c))));
  /* 11683290 call edi */
  call_ind((uint32_t)(EDI), 0x11683292u);
  /* 11683292 push dword ptr [0x116892ac] */
  push32((uint32_t)(r32((uint32_t)(0x116892ac))));
  /* 11683298 call edi */
  call_ind((uint32_t)(EDI), 0x1168329au);
  /* 1168329a push dword ptr [0x116892bc] */
  push32((uint32_t)(r32((uint32_t)(0x116892bc))));
  /* 116832a0 call edi */
  call_ind((uint32_t)(EDI), 0x116832a2u);
  /* 116832a2 push dword ptr [0x1168927c] */
  push32((uint32_t)(r32((uint32_t)(0x1168927c))));
  /* 116832a8 call edi */
  call_ind((uint32_t)(EDI), 0x116832aau);
  /* 116832aa pop edi */
  EDI = (pop32());
  /* 116832ab pop esi */
  ESI = (pop32());
  /* 116832ac ret  */
  ESPCHK(0x11683241u, _esp0);
  ESP += 4; return;
}

/* FUN_100032ad @ 0x116832ad (97 bytes, 37 insns) */
void f_116832ad(void) {
  FTRACE(0x116832adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116832ad push ebp */
  push32((uint32_t)(EBP));
  /* 116832ae mov ebp, esp */
  EBP = (ESP);
  /* 116832b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116832b3 push esi */
  push32((uint32_t)(ESI));
  /* 116832b4 cmp dword ptr [eax*4 + 0x11689278], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11689278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116832bc lea esi, [eax*4 + 0x11689278] */
  ESI = ((uint32_t)(EAX*4 + 0x11689278));
  /* 116832c3 jne 0x11683303 */
  if (!C.zf) goto L_11683303;
  /* 116832c5 push edi */
  push32((uint32_t)(EDI));
  /* 116832c6 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 116832c8 call 0x116820fc */
  push32(0x116832cdu); f_116820fc();
  /* 116832cd mov edi, eax */
  EDI = (EAX);
  /* 116832cf pop ecx */
  ECX = (pop32());
  /* 116832d0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 116832d2 jne 0x116832dc */
  if (!C.zf) goto L_116832dc;
  /* 116832d4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116832d6 call 0x11682081 */
  push32(0x116832dbu); f_11682081();
  /* 116832db pop ecx */
  ECX = (pop32());
L_116832dc:;
  /* 116832dc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116832de call 0x116832ad */
  push32(0x116832e3u); f_116832ad();
  /* 116832e3 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116832e6 pop ecx */
  ECX = (pop32());
  /* 116832e7 push edi */
  push32((uint32_t)(EDI));
  /* 116832e8 jne 0x116832f4 */
  if (!C.zf) goto L_116832f4;
  /* 116832ea call dword ptr [0x11688050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688050))), 0x116832f0u);
  /* 116832f0 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 116832f2 jmp 0x116832fa */
  goto L_116832fa;
L_116832f4:;
  /* 116832f4 call 0x116820b4 */
  push32(0x116832f9u); f_116820b4();
  /* 116832f9 pop ecx */
  ECX = (pop32());
L_116832fa:;
  /* 116832fa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116832fc call 0x1168330e */
  push32(0x11683301u); f_1168330e();
  /* 11683301 pop ecx */
  ECX = (pop32());
  /* 11683302 pop edi */
  EDI = (pop32());
L_11683303:;
  /* 11683303 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11683305 call dword ptr [0x1168804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168804c))), 0x1168330bu);
  /* 1168330b pop esi */
  ESI = (pop32());
  /* 1168330c pop ebp */
  EBP = (pop32());
  /* 1168330d ret  */
  ESPCHK(0x116832adu, _esp0);
  ESP += 4; return;
}

/* FUN_1000330e @ 0x1168330e (21 bytes, 7 insns) */
void f_1168330e(void) {
  FTRACE(0x1168330eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168330e push ebp */
  push32((uint32_t)(EBP));
  /* 1168330f mov ebp, esp */
  EBP = (ESP);
  /* 11683311 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683314 push dword ptr [eax*4 + 0x11689278] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11689278))));
  /* 1168331b call dword ptr [0x11688054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688054))), 0x11683321u);
  /* 11683321 pop ebp */
  EBP = (pop32());
  /* 11683322 ret  */
  ESPCHK(0x1168330eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003323 @ 0x11683323 (62 bytes, 15 insns) */
void f_11683323(void) {
  FTRACE(0x11683323u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683323 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11683328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1168332a push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 11683330 call dword ptr [0x11688078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688078))), 0x11683336u);
  /* 11683336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683338 mov dword ptr [0x1168a57c], eax */
  w32((uint32_t)(0x1168a57c), (EAX));
  /* 1168333d jne 0x11683340 */
  if (!C.zf) goto L_11683340;
  /* 1168333f ret  */
  ESPCHK(0x11683323u, _esp0);
  ESP += 4; return;
L_11683340:;
  /* 11683340 and dword ptr [0x1168a574], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1168a574)))&(0x0u); w32((uint32_t)(0x1168a574), (_r)); fl_logic(_r,32); }
  /* 11683347 and dword ptr [0x1168a578], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1168a578)))&(0x0u); w32((uint32_t)(0x1168a578), (_r)); fl_logic(_r,32); }
  /* 1168334e push 1 */
  push32((uint32_t)(0x1u));
  /* 11683350 mov dword ptr [0x1168a570], eax */
  w32((uint32_t)(0x1168a570), (EAX));
  /* 11683355 mov dword ptr [0x1168a568], 0x10 */
  w32((uint32_t)(0x1168a568), (0x10u));
  /* 1168335f pop eax */
  EAX = (pop32());
  /* 11683360 ret  */
  ESPCHK(0x11683323u, _esp0);
  ESP += 4; return;
}

/* FUN_10003361 @ 0x11683361 (43 bytes, 14 insns) */
void f_11683361(void) {
  FTRACE(0x11683361u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683361 mov eax, dword ptr [0x1168a578] */
  EAX = (r32((uint32_t)(0x1168a578)));
  /* 11683366 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11683369 mov eax, dword ptr [0x1168a57c] */
  EAX = (r32((uint32_t)(0x1168a57c)));
  /* 1168336e lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11683371:;
  /* 11683371 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683373 jae 0x11683389 */
  if (!C.cf) goto L_11683389;
  /* 11683375 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11683379 sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168337c cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683382 jb 0x1168338b */
  if (C.cf) goto L_1168338b;
  /* 11683384 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683387 jmp 0x11683371 */
  goto L_11683371;
L_11683389:;
  /* 11683389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1168338b:;
  /* 1168338b ret  */
  ESPCHK(0x11683361u, _esp0);
  ESP += 4; return;
}

/* FUN_1000338c @ 0x1168338c (811 bytes, 264 insns) */
void f_1168338c(void) {
  FTRACE(0x1168338cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168338c push ebp */
  push32((uint32_t)(EBP));
  /* 1168338d mov ebp, esp */
  EBP = (ESP);
  /* 1168338f sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11683392 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11683395 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683398 push ebx */
  push32((uint32_t)(EBX));
  /* 11683399 push esi */
  push32((uint32_t)(ESI));
  /* 1168339a mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1168339d mov esi, edx */
  ESI = (EDX);
  /* 1168339f sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116833a2 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 116833a5 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116833a8 push edi */
  push32((uint32_t)(EDI));
  /* 116833a9 shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 116833ac mov ecx, esi */
  ECX = (ESI);
  /* 116833ae mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 116833b1 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116833b7 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 116833b8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 116833bb lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 116833c2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 116833c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116833c8 mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 116833cb test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 116833ce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116833d1 jne 0x11683452 */
  if (!C.zf) goto L_11683452;
  /* 116833d3 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116833d6 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 116833d8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116833d9 pop edi */
  EDI = (pop32());
  /* 116833da mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 116833dd cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116833df jbe 0x116833e4 */
  if ((C.cf||C.zf)) goto L_116833e4;
  /* 116833e1 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_116833e4:;
  /* 116833e4 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 116833e8 cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116833ec jne 0x11683436 */
  if (!C.zf) goto L_11683436;
  /* 116833ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116833f1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116833f4 jae 0x11683412 */
  if (!C.cf) goto L_11683412;
  /* 116833f6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 116833fb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 116833fd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11683401 not edi */
  EDI = (~(EDI));
  /* 11683403 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11683407 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11683409 jne 0x11683436 */
  if (!C.zf) goto L_11683436;
  /* 1168340b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1168340e and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11683410 jmp 0x11683436 */
  goto L_11683436;
L_11683412:;
  /* 11683412 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683415 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1168341a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1168341c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1168341f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11683423 not edi */
  EDI = (~(EDI));
  /* 11683425 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1168342c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1168342e jne 0x11683436 */
  if (!C.zf) goto L_11683436;
  /* 11683430 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683433 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11683436:;
  /* 11683436 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1168343a mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1168343e mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11683441 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11683445 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11683449 add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168344c mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1168344f mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11683452:;
  /* 11683452 mov edi, ebx */
  EDI = (EBX);
  /* 11683454 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11683457 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11683458 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168345b jbe 0x11683460 */
  if ((C.cf||C.zf)) goto L_11683460;
  /* 1168345d push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1168345f pop edi */
  EDI = (pop32());
L_11683460:;
  /* 11683460 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11683463 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11683466 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11683469 jne 0x1168350f */
  if (!C.zf) goto L_1168350f;
  /* 1168346f sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11683472 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11683475 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11683478 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1168347a mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1168347d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1168347e pop edx */
  EDX = (pop32());
  /* 1168347f cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683481 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11683484 jbe 0x1168348b */
  if ((C.cf||C.zf)) goto L_1168348b;
  /* 11683486 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11683489 mov ecx, edx */
  ECX = (EDX);
L_1168348b:;
  /* 1168348b add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168348e mov edi, ebx */
  EDI = (EBX);
  /* 11683490 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11683493 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11683496 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11683497 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683499 jbe 0x1168349d */
  if ((C.cf||C.zf)) goto L_1168349d;
  /* 1168349b mov edi, edx */
  EDI = (EDX);
L_1168349d:;
  /* 1168349d cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168349f je 0x1168350c */
  if (C.zf) goto L_1168350c;
  /* 116834a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116834a4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 116834a7 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116834aa jne 0x116834f4 */
  if (!C.zf) goto L_116834f4;
  /* 116834ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116834af cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116834b2 jae 0x116834d0 */
  if (!C.cf) goto L_116834d0;
  /* 116834b4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116834b9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116834bb lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 116834bf not edx */
  EDX = (~(EDX));
  /* 116834c1 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 116834c5 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 116834c7 jne 0x116834f4 */
  if (!C.zf) goto L_116834f4;
  /* 116834c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116834cc and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 116834ce jmp 0x116834f4 */
  goto L_116834f4;
L_116834d0:;
  /* 116834d0 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116834d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116834d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116834da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 116834dd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 116834e1 not edx */
  EDX = (~(EDX));
  /* 116834e3 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 116834ea dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 116834ec jne 0x116834f4 */
  if (!C.zf) goto L_116834f4;
  /* 116834ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116834f1 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_116834f4:;
  /* 116834f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 116834f7 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 116834fa mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 116834fd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11683500 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11683503 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11683506 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11683509 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1168350c:;
  /* 1168350c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_1168350f:;
  /* 1168350f cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683513 jne 0x1168351e */
  if (!C.zf) goto L_1168351e;
  /* 11683515 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683518 je 0x116835a7 */
  if (C.zf) goto L_116835a7;
L_1168351e:;
  /* 1168351e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11683521 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11683524 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11683527 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1168352a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1168352d lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11683530 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11683533 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11683536 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11683539 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1168353c mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1168353f cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683542 jne 0x116835a7 */
  if (!C.zf) goto L_116835a7;
  /* 11683544 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11683548 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168354b mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1168354e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11683550 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11683554 jae 0x1168357b */
  if (!C.cf) goto L_1168357b;
  /* 11683556 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168355a jne 0x1168356a */
  if (!C.zf) goto L_1168356a;
  /* 1168355c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11683561 mov ecx, edi */
  ECX = (EDI);
  /* 11683563 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11683565 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683568 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1168356a:;
  /* 1168356a mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1168356f mov ecx, edi */
  ECX = (EDI);
  /* 11683571 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11683573 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11683577 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11683579 jmp 0x116835a4 */
  goto L_116835a4;
L_1168357b:;
  /* 1168357b cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168357f jne 0x11683591 */
  if (!C.zf) goto L_11683591;
  /* 11683581 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11683584 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11683589 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1168358b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1168358e or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11683591:;
  /* 11683591 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11683594 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11683599 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1168359b lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 116835a2 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_116835a4:;
  /* 116835a4 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_116835a7:;
  /* 116835a7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 116835aa mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 116835ac mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 116835b0 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 116835b2 jne 0x116836b2 */
  if (!C.zf) goto L_116836b2;
  /* 116835b8 mov eax, dword ptr [0x1168a574] */
  EAX = (r32((uint32_t)(0x1168a574)));
  /* 116835bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116835bf je 0x116836a4 */
  if (C.zf) goto L_116836a4;
  /* 116835c5 mov ecx, dword ptr [0x1168a56c] */
  ECX = (r32((uint32_t)(0x1168a56c)));
  /* 116835cb mov edi, dword ptr [0x11688058] */
  EDI = (r32((uint32_t)(0x11688058)));
  /* 116835d1 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 116835d4 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116835d7 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 116835dc push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 116835e1 push ebx */
  push32((uint32_t)(EBX));
  /* 116835e2 push ecx */
  push32((uint32_t)(ECX));
  /* 116835e3 call edi */
  call_ind((uint32_t)(EDI), 0x116835e5u);
  /* 116835e5 mov ecx, dword ptr [0x1168a56c] */
  ECX = (r32((uint32_t)(0x1168a56c)));
  /* 116835eb mov eax, dword ptr [0x1168a574] */
  EAX = (r32((uint32_t)(0x1168a574)));
  /* 116835f0 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 116835f5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116835f7 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 116835fa mov eax, dword ptr [0x1168a574] */
  EAX = (r32((uint32_t)(0x1168a574)));
  /* 116835ff mov ecx, dword ptr [0x1168a56c] */
  ECX = (r32((uint32_t)(0x1168a56c)));
  /* 11683605 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11683608 and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11683610 mov eax, dword ptr [0x1168a574] */
  EAX = (r32((uint32_t)(0x1168a574)));
  /* 11683615 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11683618 dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1168361b mov eax, dword ptr [0x1168a574] */
  EAX = (r32((uint32_t)(0x1168a574)));
  /* 11683620 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11683623 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11683627 jne 0x11683632 */
  if (!C.zf) goto L_11683632;
  /* 11683629 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1168362d mov eax, dword ptr [0x1168a574] */
  EAX = (r32((uint32_t)(0x1168a574)));
L_11683632:;
  /* 11683632 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683636 jne 0x116836a4 */
  if (!C.zf) goto L_116836a4;
  /* 11683638 push ebx */
  push32((uint32_t)(EBX));
  /* 11683639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1168363b push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1168363e call edi */
  call_ind((uint32_t)(EDI), 0x11683640u);
  /* 11683640 mov eax, dword ptr [0x1168a574] */
  EAX = (r32((uint32_t)(0x1168a574)));
  /* 11683645 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11683648 push 0 */
  push32((uint32_t)(0x0u));
  /* 1168364a push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 11683650 call dword ptr [0x11688074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688074))), 0x11683656u);
  /* 11683656 mov eax, dword ptr [0x1168a578] */
  EAX = (r32((uint32_t)(0x1168a578)));
  /* 1168365b mov edx, dword ptr [0x1168a57c] */
  EDX = (r32((uint32_t)(0x1168a57c)));
  /* 11683661 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11683664 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11683667 mov ecx, eax */
  ECX = (EAX);
  /* 11683669 mov eax, dword ptr [0x1168a574] */
  EAX = (r32((uint32_t)(0x1168a574)));
  /* 1168366e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11683670 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11683674 push ecx */
  push32((uint32_t)(ECX));
  /* 11683675 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11683678 push ecx */
  push32((uint32_t)(ECX));
  /* 11683679 push eax */
  push32((uint32_t)(EAX));
  /* 1168367a call 0x116848f0 */
  push32(0x1168367fu); f_116848f0();
  /* 1168367f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683682 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11683685 dec dword ptr [0x1168a578] */
  { uint32_t _r=(r32((uint32_t)(0x1168a578)))-1; w32((uint32_t)(0x1168a578), (_r)); fl_dec(_r,32); }
  /* 1168368b cmp eax, dword ptr [0x1168a574] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1168a574))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683691 jbe 0x11683696 */
  if ((C.cf||C.zf)) goto L_11683696;
  /* 11683693 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11683696:;
  /* 11683696 mov ecx, dword ptr [0x1168a57c] */
  ECX = (r32((uint32_t)(0x1168a57c)));
  /* 1168369c mov dword ptr [0x1168a570], ecx */
  w32((uint32_t)(0x1168a570), (ECX));
  /* 116836a2 jmp 0x116836a7 */
  goto L_116836a7;
L_116836a4:;
  /* 116836a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_116836a7:;
  /* 116836a7 mov dword ptr [0x1168a574], eax */
  w32((uint32_t)(0x1168a574), (EAX));
  /* 116836ac mov dword ptr [0x1168a56c], esi */
  w32((uint32_t)(0x1168a56c), (ESI));
L_116836b2:;
  /* 116836b2 pop edi */
  EDI = (pop32());
  /* 116836b3 pop esi */
  ESI = (pop32());
  /* 116836b4 pop ebx */
  EBX = (pop32());
  /* 116836b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116836b6 ret  */
  ESPCHK(0x1168338cu, _esp0);
  ESP += 4; return;
}

/* FUN_100036b7 @ 0x116836b7 (777 bytes, 275 insns) */
void f_116836b7(void) {
  FTRACE(0x116836b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116836b7 push ebp */
  push32((uint32_t)(EBP));
  /* 116836b8 mov ebp, esp */
  EBP = (ESP);
  /* 116836ba sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116836bd mov eax, dword ptr [0x1168a578] */
  EAX = (r32((uint32_t)(0x1168a578)));
  /* 116836c2 mov edx, dword ptr [0x1168a57c] */
  EDX = (r32((uint32_t)(0x1168a57c)));
  /* 116836c8 push ebx */
  push32((uint32_t)(EBX));
  /* 116836c9 push esi */
  push32((uint32_t)(ESI));
  /* 116836ca lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 116836cd push edi */
  push32((uint32_t)(EDI));
  /* 116836ce lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 116836d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116836d4 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 116836d7 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 116836da and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 116836dd mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 116836e0 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116836e3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116836e4 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116836e7 jge 0x116836f7 */
  if ((C.sf==C.of)) goto L_116836f7;
  /* 116836e9 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 116836ec shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 116836ee or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 116836f2 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 116836f5 jmp 0x11683707 */
  goto L_11683707;
L_116836f7:;
  /* 116836f7 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116836fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116836fd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 116836ff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11683701 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11683704 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11683707:;
  /* 11683707 mov eax, dword ptr [0x1168a570] */
  EAX = (r32((uint32_t)(0x1168a570)));
  /* 1168370c mov ebx, eax */
  EBX = (EAX);
  /* 1168370e cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683710 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11683713 jae 0x1168372e */
  if (!C.cf) goto L_1168372e;
L_11683715:;
  /* 11683715 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11683718 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1168371a and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1168371d and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1168371f or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11683721 jne 0x1168372e */
  if (!C.zf) goto L_1168372e;
  /* 11683723 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683726 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683729 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1168372c jb 0x11683715 */
  if (C.cf) goto L_11683715;
L_1168372e:;
  /* 1168372e cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683731 jne 0x116837ac */
  if (!C.zf) goto L_116837ac;
  /* 11683733 mov ebx, edx */
  EBX = (EDX);
L_11683735:;
  /* 11683735 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683737 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1168373a jae 0x11683751 */
  if (!C.cf) goto L_11683751;
  /* 1168373c mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1168373f mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11683741 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11683744 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11683746 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11683748 jne 0x1168374f */
  if (!C.zf) goto L_1168374f;
  /* 1168374a add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168374d jmp 0x11683735 */
  goto L_11683735;
L_1168374f:;
  /* 1168374f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11683751:;
  /* 11683751 jne 0x116837ac */
  if (!C.zf) goto L_116837ac;
L_11683753:;
  /* 11683753 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683756 jae 0x11683769 */
  if (!C.cf) goto L_11683769;
  /* 11683758 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168375c jne 0x11683766 */
  if (!C.zf) goto L_11683766;
  /* 1168375e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683761 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11683764 jmp 0x11683753 */
  goto L_11683753;
L_11683766:;
  /* 11683766 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11683769:;
  /* 11683769 jne 0x11683791 */
  if (!C.zf) goto L_11683791;
  /* 1168376b mov ebx, edx */
  EBX = (EDX);
L_1168376d:;
  /* 1168376d cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168376f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11683772 jae 0x11683781 */
  if (!C.cf) goto L_11683781;
  /* 11683774 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683778 jne 0x1168377f */
  if (!C.zf) goto L_1168377f;
  /* 1168377a add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168377d jmp 0x1168376d */
  goto L_1168376d;
L_1168377f:;
  /* 1168377f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11683781:;
  /* 11683781 jne 0x11683791 */
  if (!C.zf) goto L_11683791;
  /* 11683783 call 0x116839c0 */
  push32(0x11683788u); f_116839c0();
  /* 11683788 mov ebx, eax */
  EBX = (EAX);
  /* 1168378a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1168378c mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1168378f je 0x116837a5 */
  if (C.zf) goto L_116837a5;
L_11683791:;
  /* 11683791 push ebx */
  push32((uint32_t)(EBX));
  /* 11683792 call 0x11683a71 */
  push32(0x11683797u); f_11683a71();
  /* 11683797 pop ecx */
  ECX = (pop32());
  /* 11683798 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1168379b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1168379d mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 116837a0 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116837a3 jne 0x116837ac */
  if (!C.zf) goto L_116837ac;
L_116837a5:;
  /* 116837a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116837a7 jmp 0x116839bb */
  goto L_116839bb;
L_116837ac:;
  /* 116837ac mov dword ptr [0x1168a570], ebx */
  w32((uint32_t)(0x1168a570), (EBX));
  /* 116837b2 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 116837b5 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 116837b7 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116837ba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 116837bd je 0x116837d3 */
  if (C.zf) goto L_116837d3;
  /* 116837bf mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 116837c6 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 116837ca and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 116837cd and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 116837cf or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 116837d1 jne 0x1168380a */
  if (!C.zf) goto L_1168380a;
L_116837d3:;
  /* 116837d3 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 116837d9 mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 116837dc and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 116837df and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 116837e2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 116837e6 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 116837e9 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 116837eb mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 116837ee jne 0x11683807 */
  if (!C.zf) goto L_11683807;
L_116837f0:;
  /* 116837f0 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 116837f6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 116837f9 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 116837fc add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116837ff mov edi, esi */
  EDI = (ESI);
  /* 11683801 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11683803 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11683805 je 0x116837f0 */
  if (C.zf) goto L_116837f0;
L_11683807:;
  /* 11683807 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1168380a:;
  /* 1168380a mov ecx, edx */
  ECX = (EDX);
  /* 1168380c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1168380e imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11683814 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1168381b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1168381e mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11683822 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11683824 jne 0x11683833 */
  if (!C.zf) goto L_11683833;
  /* 11683826 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1168382d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1168382f and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11683832 pop edi */
  EDI = (pop32());
L_11683833:;
  /* 11683833 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11683835 jl 0x1168383c */
  if ((C.sf!=C.of)) goto L_1168383c;
  /* 11683837 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11683839 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1168383a jmp 0x11683833 */
  goto L_11683833;
L_1168383c:;
  /* 1168383c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1168383f mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11683843 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11683845 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11683848 mov esi, ecx */
  ESI = (ECX);
  /* 1168384a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1168384d sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11683850 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11683851 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683854 jle 0x11683859 */
  if ((C.zf||C.sf!=C.of)) goto L_11683859;
  /* 11683856 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11683858 pop esi */
  ESI = (pop32());
L_11683859:;
  /* 11683859 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168385b je 0x1168396e */
  if (C.zf) goto L_1168396e;
  /* 11683861 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11683864 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683867 jne 0x116838ca */
  if (!C.zf) goto L_116838ca;
  /* 11683869 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168386c jge 0x11683899 */
  if ((C.sf==C.of)) goto L_11683899;
  /* 1168386e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11683873 mov ecx, edi */
  ECX = (EDI);
  /* 11683875 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11683877 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1168387a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1168387e not ebx */
  EBX = (~(EBX));
  /* 11683880 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11683883 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11683887 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1168388b dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1168388d jne 0x116838c7 */
  if (!C.zf) goto L_116838c7;
  /* 1168388f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683892 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11683895 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11683897 jmp 0x116838ca */
  goto L_116838ca;
L_11683899:;
  /* 11683899 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1168389c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 116838a1 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 116838a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116838a6 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 116838aa lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 116838b1 not ebx */
  EBX = (~(EBX));
  /* 116838b3 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 116838b5 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 116838b7 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 116838ba jne 0x116838c7 */
  if (!C.zf) goto L_116838c7;
  /* 116838bc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 116838bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 116838c2 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 116838c5 jmp 0x116838ca */
  goto L_116838ca;
L_116838c7:;
  /* 116838c7 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_116838ca:;
  /* 116838ca mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 116838cd mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 116838d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116838d4 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 116838d7 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 116838da mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 116838dd mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 116838e0 je 0x1168397a */
  if (C.zf) goto L_1168397a;
  /* 116838e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 116838e9 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 116838ed lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 116838f0 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 116838f3 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 116838f6 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 116838f9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 116838fc mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 116838ff mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11683902 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683905 jne 0x1168396b */
  if (!C.zf) goto L_1168396b;
  /* 11683907 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1168390b cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168390e mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11683911 jge 0x1168393c */
  if ((C.sf==C.of)) goto L_1168393c;
  /* 11683913 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11683915 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11683919 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1168391d jne 0x1168392a */
  if (!C.zf) goto L_1168392a;
  /* 1168391f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11683924 mov ecx, esi */
  ECX = (ESI);
  /* 11683926 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11683928 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1168392a:;
  /* 1168392a mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1168392f mov ecx, esi */
  ECX = (ESI);
  /* 11683931 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11683933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11683936 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1168393a jmp 0x1168396b */
  goto L_1168396b;
L_1168393c:;
  /* 1168393c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1168393e cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11683942 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11683946 jne 0x11683955 */
  if (!C.zf) goto L_11683955;
  /* 11683948 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1168394b mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11683950 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11683952 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11683955:;
  /* 11683955 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11683958 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1168395f lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11683962 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11683967 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11683969 or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1168396b:;
  /* 1168396b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1168396e:;
  /* 1168396e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11683970 je 0x1168397d */
  if (C.zf) goto L_1168397d;
  /* 11683972 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11683974 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11683978 jmp 0x1168397d */
  goto L_1168397d;
L_1168397a:;
  /* 1168397a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1168397d:;
  /* 1168397d mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11683980 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683982 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11683985 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11683987 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1168398b mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1168398e mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11683990 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11683992 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11683995 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11683997 jne 0x116839b3 */
  if (!C.zf) goto L_116839b3;
  /* 11683999 cmp ebx, dword ptr [0x1168a574] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1168a574))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168399f jne 0x116839b3 */
  if (!C.zf) goto L_116839b3;
  /* 116839a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116839a4 cmp ecx, dword ptr [0x1168a56c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1168a56c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116839aa jne 0x116839b3 */
  if (!C.zf) goto L_116839b3;
  /* 116839ac and dword ptr [0x1168a574], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1168a574)))&(0x0u); w32((uint32_t)(0x1168a574), (_r)); fl_logic(_r,32); }
L_116839b3:;
  /* 116839b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 116839b6 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 116839b8 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_116839bb:;
  /* 116839bb pop edi */
  EDI = (pop32());
  /* 116839bc pop esi */
  ESI = (pop32());
  /* 116839bd pop ebx */
  EBX = (pop32());
  /* 116839be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116839bf ret  */
  ESPCHK(0x116836b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100039c0 @ 0x116839c0 (177 bytes, 53 insns) */
void f_116839c0(void) {
  FTRACE(0x116839c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116839c0 mov eax, dword ptr [0x1168a578] */
  EAX = (r32((uint32_t)(0x1168a578)));
  /* 116839c5 mov ecx, dword ptr [0x1168a568] */
  ECX = (r32((uint32_t)(0x1168a568)));
  /* 116839cb push esi */
  push32((uint32_t)(ESI));
  /* 116839cc push edi */
  push32((uint32_t)(EDI));
  /* 116839cd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 116839cf cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116839d1 jne 0x11683a03 */
  if (!C.zf) goto L_11683a03;
  /* 116839d3 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 116839d7 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 116839da push eax */
  push32((uint32_t)(EAX));
  /* 116839db push dword ptr [0x1168a57c] */
  push32((uint32_t)(r32((uint32_t)(0x1168a57c))));
  /* 116839e1 push edi */
  push32((uint32_t)(EDI));
  /* 116839e2 push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 116839e8 call dword ptr [0x11688048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688048))), 0x116839eeu);
  /* 116839ee cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116839f0 je 0x11683a53 */
  if (C.zf) goto L_11683a53;
  /* 116839f2 add dword ptr [0x1168a568], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x1168a568))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x1168a568), (_r)); fl_add(_a,_b,_r,32); }
  /* 116839f9 mov dword ptr [0x1168a57c], eax */
  w32((uint32_t)(0x1168a57c), (EAX));
  /* 116839fe mov eax, dword ptr [0x1168a578] */
  EAX = (r32((uint32_t)(0x1168a578)));
L_11683a03:;
  /* 11683a03 mov ecx, dword ptr [0x1168a57c] */
  ECX = (r32((uint32_t)(0x1168a57c)));
  /* 11683a09 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11683a0e push 8 */
  push32((uint32_t)(0x8u));
  /* 11683a10 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11683a13 push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 11683a19 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11683a1c call dword ptr [0x11688078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688078))), 0x11683a22u);
  /* 11683a22 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683a24 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11683a27 je 0x11683a53 */
  if (C.zf) goto L_11683a53;
  /* 11683a29 push 4 */
  push32((uint32_t)(0x4u));
  /* 11683a2b push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11683a30 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11683a35 push edi */
  push32((uint32_t)(EDI));
  /* 11683a36 call dword ptr [0x11688044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688044))), 0x11683a3cu);
  /* 11683a3c cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683a3e mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11683a41 jne 0x11683a57 */
  if (!C.zf) goto L_11683a57;
  /* 11683a43 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11683a46 push edi */
  push32((uint32_t)(EDI));
  /* 11683a47 push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 11683a4d call dword ptr [0x11688074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688074))), 0x11683a53u);
L_11683a53:;
  /* 11683a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11683a55 jmp 0x11683a6e */
  goto L_11683a6e;
L_11683a57:;
  /* 11683a57 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11683a5b mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11683a5d mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11683a60 inc dword ptr [0x1168a578] */
  { uint32_t _r=(r32((uint32_t)(0x1168a578)))+1; w32((uint32_t)(0x1168a578), (_r)); fl_inc(_r,32); }
  /* 11683a66 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11683a69 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11683a6c mov eax, esi */
  EAX = (ESI);
L_11683a6e:;
  /* 11683a6e pop edi */
  EDI = (pop32());
  /* 11683a6f pop esi */
  ESI = (pop32());
  /* 11683a70 ret  */
  ESPCHK(0x116839c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a71 @ 0x11683a71 (251 bytes, 85 insns) */
void f_11683a71(void) {
  FTRACE(0x11683a71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683a71 push ebp */
  push32((uint32_t)(EBP));
  /* 11683a72 mov ebp, esp */
  EBP = (ESP);
  /* 11683a74 push ecx */
  push32((uint32_t)(ECX));
  /* 11683a75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683a78 push ebx */
  push32((uint32_t)(EBX));
  /* 11683a79 push esi */
  push32((uint32_t)(ESI));
  /* 11683a7a push edi */
  push32((uint32_t)(EDI));
  /* 11683a7b mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11683a7e mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11683a81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11683a83:;
  /* 11683a83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683a85 jl 0x11683a8c */
  if ((C.sf!=C.of)) goto L_11683a8c;
  /* 11683a87 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11683a89 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11683a8a jmp 0x11683a83 */
  goto L_11683a83;
L_11683a8c:;
  /* 11683a8c mov eax, ebx */
  EAX = (EBX);
  /* 11683a8e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11683a90 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11683a96 pop edx */
  EDX = (pop32());
  /* 11683a97 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11683a9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11683aa1:;
  /* 11683aa1 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11683aa4 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11683aa7 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683aaa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11683aab jne 0x11683aa1 */
  if (!C.zf) goto L_11683aa1;
  /* 11683aad mov edi, ebx */
  EDI = (EBX);
  /* 11683aaf push 4 */
  push32((uint32_t)(0x4u));
  /* 11683ab1 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11683ab4 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11683ab7 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11683abc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11683ac1 push edi */
  push32((uint32_t)(EDI));
  /* 11683ac2 call dword ptr [0x11688044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688044))), 0x11683ac8u);
  /* 11683ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683aca jne 0x11683ad4 */
  if (!C.zf) goto L_11683ad4;
  /* 11683acc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11683acf jmp 0x11683b67 */
  goto L_11683b67;
L_11683ad4:;
  /* 11683ad4 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11683ada cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683adc ja 0x11683b1a */
  if ((!C.cf&&!C.zf)) goto L_11683b1a;
  /* 11683ade lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11683ae1:;
  /* 11683ae1 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11683ae5 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11683aec lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11683af2 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11683af9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11683afb lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11683b01 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11683b04 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11683b0e add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683b13 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11683b16 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683b18 jbe 0x11683ae1 */
  if ((C.cf||C.zf)) goto L_11683ae1;
L_11683b1a:;
  /* 11683b1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11683b1d lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11683b20 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683b25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11683b27 pop edi */
  EDI = (pop32());
  /* 11683b28 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11683b2b mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11683b2e lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11683b31 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11683b34 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11683b37 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11683b3c mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11683b43 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11683b46 mov cl, al */
  CL = (AL);
  /* 11683b48 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11683b4a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11683b4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683b4f mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11683b52 jne 0x11683b57 */
  if (!C.zf) goto L_11683b57;
  /* 11683b54 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11683b57:;
  /* 11683b57 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11683b5c mov ecx, ebx */
  ECX = (EBX);
  /* 11683b5e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11683b60 not edx */
  EDX = (~(EDX));
  /* 11683b62 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11683b65 mov eax, ebx */
  EAX = (EBX);
L_11683b67:;
  /* 11683b67 pop edi */
  EDI = (pop32());
  /* 11683b68 pop esi */
  ESI = (pop32());
  /* 11683b69 pop ebx */
  EBX = (pop32());
  /* 11683b6a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11683b6b ret  */
  ESPCHK(0x11683a71u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b6c @ 0x11683b6c (758 bytes, 259 insns) */
void f_11683b6c(void) {
  FTRACE(0x11683b6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683b6c push ebp */
  push32((uint32_t)(EBP));
  /* 11683b6d mov ebp, esp */
  EBP = (ESP);
  /* 11683b6f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11683b72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683b75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11683b78 push ebx */
  push32((uint32_t)(EBX));
  /* 11683b79 push esi */
  push32((uint32_t)(ESI));
  /* 11683b7a push edi */
  push32((uint32_t)(EDI));
  /* 11683b7b mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11683b7e mov edx, edi */
  EDX = (EDI);
  /* 11683b80 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11683b83 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11683b86 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11683b89 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11683b8c shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11683b8f mov ecx, edx */
  ECX = (EDX);
  /* 11683b91 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11683b97 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11683b9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11683ba1 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11683ba4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11683ba5 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683ba7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11683baa mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11683bae lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11683bb2 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11683bb5 jle 0x11683d1a */
  if ((C.zf||C.sf!=C.of)) goto L_11683d1a;
  /* 11683bbb test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11683bbe jne 0x11683d13 */
  if (!C.zf) goto L_11683d13;
  /* 11683bc4 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683bc6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683bc8 jg 0x11683d13 */
  if ((!C.zf&&C.sf==C.of)) goto L_11683d13;
  /* 11683bce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11683bd1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11683bd4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11683bd5 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683bd8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11683bdb jbe 0x11683be3 */
  if ((C.cf||C.zf)) goto L_11683be3;
  /* 11683bdd push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11683bdf pop ecx */
  ECX = (pop32());
  /* 11683be0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11683be3:;
  /* 11683be3 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11683be6 cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683be9 jne 0x11683c33 */
  if (!C.zf) goto L_11683c33;
  /* 11683beb cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683bee jae 0x11683c0f */
  if (!C.cf) goto L_11683c0f;
  /* 11683bf0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11683bf5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11683bf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11683bfa lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11683bfe not ebx */
  EBX = (~(EBX));
  /* 11683c00 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11683c04 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11683c06 jne 0x11683c33 */
  if (!C.zf) goto L_11683c33;
  /* 11683c08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683c0b and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11683c0d jmp 0x11683c33 */
  goto L_11683c33;
L_11683c0f:;
  /* 11683c0f add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11683c12 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11683c17 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11683c19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11683c1c lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11683c20 not ebx */
  EBX = (~(EBX));
  /* 11683c22 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11683c29 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11683c2b jne 0x11683c33 */
  if (!C.zf) goto L_11683c33;
  /* 11683c2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683c30 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11683c33:;
  /* 11683c33 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11683c36 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11683c39 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11683c3c mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11683c3f mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11683c42 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11683c45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11683c48 sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11683c4a add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11683c4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683c51 jle 0x11683d01 */
  if ((C.zf||C.sf!=C.of)) goto L_11683d01;
  /* 11683c57 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11683c5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11683c5d sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11683c60 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11683c61 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11683c65 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683c68 jbe 0x11683c6d */
  if ((C.cf||C.zf)) goto L_11683c6d;
  /* 11683c6a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11683c6c pop edi */
  EDI = (pop32());
L_11683c6d:;
  /* 11683c6d mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11683c70 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11683c73 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11683c76 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11683c79 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11683c7c mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11683c7f mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11683c82 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11683c85 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11683c88 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11683c8b mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11683c8e cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683c91 jne 0x11683cef */
  if (!C.zf) goto L_11683cef;
  /* 11683c93 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11683c97 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683c9a mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11683c9d inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11683c9f mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11683ca3 jae 0x11683cc6 */
  if (!C.cf) goto L_11683cc6;
  /* 11683ca5 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11683ca9 jne 0x11683cb9 */
  if (!C.zf) goto L_11683cb9;
  /* 11683cab mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11683cb0 mov ecx, edi */
  ECX = (EDI);
  /* 11683cb2 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11683cb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683cb7 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11683cb9:;
  /* 11683cb9 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11683cbd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11683cc2 mov ecx, edi */
  ECX = (EDI);
  /* 11683cc4 jmp 0x11683ceb */
  goto L_11683ceb;
L_11683cc6:;
  /* 11683cc6 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11683cca jne 0x11683cdc */
  if (!C.zf) goto L_11683cdc;
  /* 11683ccc lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11683ccf mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11683cd4 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11683cd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683cd9 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11683cdc:;
  /* 11683cdc lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11683ce3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11683ce6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11683ceb:;
  /* 11683ceb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11683ced or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11683cef:;
  /* 11683cef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11683cf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11683cf5 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11683cf9 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11683cfb mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11683cff jmp 0x11683d04 */
  goto L_11683d04;
L_11683d01:;
  /* 11683d01 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11683d04:;
  /* 11683d04 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11683d07 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11683d0a mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11683d0e jmp 0x11683e5a */
  goto L_11683e5a;
L_11683d13:;
  /* 11683d13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11683d15 jmp 0x11683e5d */
  goto L_11683e5d;
L_11683d1a:;
  /* 11683d1a jge 0x11683e5a */
  if ((C.sf==C.of)) goto L_11683e5a;
  /* 11683d20 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11683d23 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11683d26 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11683d29 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11683d2c lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11683d30 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11683d33 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11683d36 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11683d39 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11683d3a mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11683d3d cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683d40 jbe 0x11683d45 */
  if ((C.cf||C.zf)) goto L_11683d45;
  /* 11683d42 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11683d44 pop esi */
  ESI = (pop32());
L_11683d45:;
  /* 11683d45 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11683d49 jne 0x11683dd4 */
  if (!C.zf) goto L_11683dd4;
  /* 11683d4f mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11683d52 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11683d55 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11683d56 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683d59 jbe 0x11683d5e */
  if ((C.cf||C.zf)) goto L_11683d5e;
  /* 11683d5b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11683d5d pop esi */
  ESI = (pop32());
L_11683d5e:;
  /* 11683d5e mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11683d61 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683d64 jne 0x11683dad */
  if (!C.zf) goto L_11683dad;
  /* 11683d66 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683d69 jae 0x11683d89 */
  if (!C.cf) goto L_11683d89;
  /* 11683d6b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11683d70 mov ecx, esi */
  ECX = (ESI);
  /* 11683d72 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11683d74 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11683d78 not ebx */
  EBX = (~(EBX));
  /* 11683d7a and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11683d7e dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11683d80 jne 0x11683daa */
  if (!C.zf) goto L_11683daa;
  /* 11683d82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683d85 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11683d87 jmp 0x11683daa */
  goto L_11683daa;
L_11683d89:;
  /* 11683d89 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11683d8c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11683d91 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11683d93 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11683d97 not ebx */
  EBX = (~(EBX));
  /* 11683d99 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11683da0 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11683da2 jne 0x11683daa */
  if (!C.zf) goto L_11683daa;
  /* 11683da4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683da7 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11683daa:;
  /* 11683daa mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11683dad:;
  /* 11683dad mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11683db0 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11683db3 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11683db6 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11683db9 mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11683dbc mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11683dbf mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11683dc2 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11683dc5 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11683dc8 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11683dcb dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11683dcc cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683dcf jbe 0x11683dd4 */
  if ((C.cf||C.zf)) goto L_11683dd4;
  /* 11683dd1 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11683dd3 pop esi */
  ESI = (pop32());
L_11683dd4:;
  /* 11683dd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11683dd7 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11683ddb lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11683dde mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11683de1 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11683de4 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11683de7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11683dea mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11683ded mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11683df0 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683df3 jne 0x11683e51 */
  if (!C.zf) goto L_11683e51;
  /* 11683df5 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11683df9 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683dfc mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11683dff inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11683e01 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11683e05 jae 0x11683e28 */
  if (!C.cf) goto L_11683e28;
  /* 11683e07 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11683e0b jne 0x11683e1b */
  if (!C.zf) goto L_11683e1b;
  /* 11683e0d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11683e12 mov ecx, esi */
  ECX = (ESI);
  /* 11683e14 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11683e16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683e19 or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11683e1b:;
  /* 11683e1b lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11683e1f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11683e24 mov ecx, esi */
  ECX = (ESI);
  /* 11683e26 jmp 0x11683e4d */
  goto L_11683e4d;
L_11683e28:;
  /* 11683e28 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11683e2c jne 0x11683e3e */
  if (!C.zf) goto L_11683e3e;
  /* 11683e2e lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11683e31 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11683e36 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11683e38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683e3b or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11683e3e:;
  /* 11683e3e lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11683e45 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11683e48 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11683e4d:;
  /* 11683e4d shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11683e4f or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11683e51:;
  /* 11683e51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11683e54 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11683e56 mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11683e5a:;
  /* 11683e5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11683e5c pop eax */
  EAX = (pop32());
L_11683e5d:;
  /* 11683e5d pop edi */
  EDI = (pop32());
  /* 11683e5e pop esi */
  ESI = (pop32());
  /* 11683e5f pop ebx */
  EBX = (pop32());
  /* 11683e60 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11683e61 ret  */
  ESPCHK(0x11683b6cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e62 @ 0x11683e62 (27 bytes, 13 insns) */
void f_11683e62(void) {
  FTRACE(0x11683e62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683e62 mov eax, dword ptr [0x1168a1a4] */
  EAX = (r32((uint32_t)(0x1168a1a4)));
  /* 11683e67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683e69 je 0x11683e7a */
  if (C.zf) goto L_11683e7a;
  /* 11683e6b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11683e6f call eax */
  call_ind((uint32_t)(EAX), 0x11683e71u);
  /* 11683e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683e73 pop ecx */
  ECX = (pop32());
  /* 11683e74 je 0x11683e7a */
  if (C.zf) goto L_11683e7a;
  /* 11683e76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11683e78 pop eax */
  EAX = (pop32());
  /* 11683e79 ret  */
  ESPCHK(0x11683e62u, _esp0);
  ESP += 4; return;
L_11683e7a:;
  /* 11683e7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11683e7c ret  */
  ESPCHK(0x11683e62u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e7d @ 0x11683e7d (141 bytes, 56 insns) */
void f_11683e7d(void) {
  FTRACE(0x11683e7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683e7d push ebx */
  push32((uint32_t)(EBX));
  /* 11683e7e push esi */
  push32((uint32_t)(ESI));
  /* 11683e7f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11683e83 push edi */
  push32((uint32_t)(EDI));
  /* 11683e84 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11683e89 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683e8c mov ebx, esi */
  EBX = (ESI);
  /* 11683e8e ja 0x11683e9d */
  if ((!C.cf&&!C.zf)) goto L_11683e9d;
  /* 11683e90 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11683e92 jne 0x11683e97 */
  if (!C.zf) goto L_11683e97;
  /* 11683e94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11683e96 pop esi */
  ESI = (pop32());
L_11683e97:;
  /* 11683e97 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11683e9a and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11683e9d:;
  /* 11683e9d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11683e9f cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683ea2 ja 0x11683ede */
  if ((!C.cf&&!C.zf)) goto L_11683ede;
  /* 11683ea4 cmp ebx, dword ptr [0x11689338] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11689338))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683eaa ja 0x11683ec9 */
  if ((!C.cf&&!C.zf)) goto L_11683ec9;
  /* 11683eac push 9 */
  push32((uint32_t)(0x9u));
  /* 11683eae call 0x116832ad */
  push32(0x11683eb3u); f_116832ad();
  /* 11683eb3 push ebx */
  push32((uint32_t)(EBX));
  /* 11683eb4 call 0x116836b7 */
  push32(0x11683eb9u); f_116836b7();
  /* 11683eb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11683ebb mov edi, eax */
  EDI = (EAX);
  /* 11683ebd call 0x1168330e */
  push32(0x11683ec2u); f_1168330e();
  /* 11683ec2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11683ec5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11683ec7 jne 0x11683ef4 */
  if (!C.zf) goto L_11683ef4;
L_11683ec9:;
  /* 11683ec9 push esi */
  push32((uint32_t)(ESI));
  /* 11683eca push 8 */
  push32((uint32_t)(0x8u));
  /* 11683ecc push dword ptr [0x1168a580] */
  push32((uint32_t)(r32((uint32_t)(0x1168a580))));
  /* 11683ed2 call dword ptr [0x11688078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688078))), 0x11683ed8u);
  /* 11683ed8 mov edi, eax */
  EDI = (EAX);
  /* 11683eda test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11683edc jne 0x11683f00 */
  if (!C.zf) goto L_11683f00;
L_11683ede:;
  /* 11683ede cmp dword ptr [0x1168a1a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a1a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683ee5 je 0x11683f00 */
  if (C.zf) goto L_11683f00;
  /* 11683ee7 push esi */
  push32((uint32_t)(ESI));
  /* 11683ee8 call 0x11683e62 */
  push32(0x11683eedu); f_11683e62();
  /* 11683eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11683eef pop ecx */
  ECX = (pop32());
  /* 11683ef0 je 0x11683f06 */
  if (C.zf) goto L_11683f06;
  /* 11683ef2 jmp 0x11683e9d */
  goto L_11683e9d;
L_11683ef4:;
  /* 11683ef4 push ebx */
  push32((uint32_t)(EBX));
  /* 11683ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11683ef7 push edi */
  push32((uint32_t)(EDI));
  /* 11683ef8 call 0x11684890 */
  push32(0x11683efdu); f_11684890();
  /* 11683efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11683f00:;
  /* 11683f00 mov eax, edi */
  EAX = (EDI);
L_11683f02:;
  /* 11683f02 pop edi */
  EDI = (pop32());
  /* 11683f03 pop esi */
  ESI = (pop32());
  /* 11683f04 pop ebx */
  EBX = (pop32());
  /* 11683f05 ret  */
  ESPCHK(0x11683e7du, _esp0);
  ESP += 4; return;
L_11683f06:;
  /* 11683f06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11683f08 jmp 0x11683f02 */
  goto L_11683f02;
}

/* FUN_10003f0a @ 0x11683f0a (53 bytes, 25 insns) */
void f_11683f0a(void) {
  FTRACE(0x11683f0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683f0a push ebp */
  push32((uint32_t)(EBP));
  /* 11683f0b mov ebp, esp */
  EBP = (ESP);
  /* 11683f0d push ecx */
  push32((uint32_t)(ECX));
  /* 11683f0e push esi */
  push32((uint32_t)(ESI));
  /* 11683f0f wait  */
  /* wait (no observable integer/reg state) */
  /* 11683f10 fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 11683f13 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11683f16 call 0x11683f55 */
  push32(0x11683f1bu); f_11683f55();
  /* 11683f1b mov esi, eax */
  ESI = (EAX);
  /* 11683f1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11683f20 not eax */
  EAX = (~(EAX));
  /* 11683f22 and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11683f24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11683f27 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11683f2a or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11683f2c push esi */
  push32((uint32_t)(ESI));
  /* 11683f2d call 0x11683fe7 */
  push32(0x11683f32u); f_11683fe7();
  /* 11683f32 pop ecx */
  ECX = (pop32());
  /* 11683f33 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11683f36 pop ecx */
  ECX = (pop32());
  /* 11683f37 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 11683f3a mov eax, esi */
  EAX = (ESI);
  /* 11683f3c pop esi */
  ESI = (pop32());
  /* 11683f3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11683f3e ret  */
  ESPCHK(0x11683f0au, _esp0);
  ESP += 4; return;
}

/* FUN_10003f3f @ 0x11683f3f (22 bytes, 8 insns) */
void f_11683f3f(void) {
  FTRACE(0x11683f3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683f3f mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11683f43 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11683f48 push eax */
  push32((uint32_t)(EAX));
  /* 11683f49 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11683f4d call 0x11683f0a */
  push32(0x11683f52u); f_11683f0a();
  /* 11683f52 pop ecx */
  ECX = (pop32());
  /* 11683f53 pop ecx */
  ECX = (pop32());
  /* 11683f54 ret  */
  ESPCHK(0x11683f3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f55 @ 0x11683f55 (146 bytes, 58 insns) */
void f_11683f55(void) {
  FTRACE(0x11683f55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683f55 push ebx */
  push32((uint32_t)(EBX));
  /* 11683f56 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11683f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11683f5c push ebp */
  push32((uint32_t)(EBP));
  /* 11683f5d test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11683f60 push edi */
  push32((uint32_t)(EDI));
  /* 11683f61 je 0x11683f66 */
  if (C.zf) goto L_11683f66;
  /* 11683f63 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11683f65 pop eax */
  EAX = (pop32());
L_11683f66:;
  /* 11683f66 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11683f69 je 0x11683f6d */
  if (C.zf) goto L_11683f6d;
  /* 11683f6b or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11683f6d:;
  /* 11683f6d test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11683f70 je 0x11683f74 */
  if (C.zf) goto L_11683f74;
  /* 11683f72 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11683f74:;
  /* 11683f74 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11683f77 je 0x11683f7b */
  if (C.zf) goto L_11683f7b;
  /* 11683f79 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11683f7b:;
  /* 11683f7b test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 11683f7e je 0x11683f82 */
  if (C.zf) goto L_11683f82;
  /* 11683f80 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_11683f82:;
  /* 11683f82 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11683f85 je 0x11683f8c */
  if (C.zf) goto L_11683f8c;
  /* 11683f87 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_11683f8c:;
  /* 11683f8c movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11683f8f push esi */
  push32((uint32_t)(ESI));
  /* 11683f90 mov edx, ecx */
  EDX = (ECX);
  /* 11683f92 mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 11683f97 mov edi, 0x300 */
  EDI = (0x300u);
  /* 11683f9c and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11683f9e mov ebp, 0x200 */
  EBP = (0x200u);
  /* 11683fa3 je 0x11683fc4 */
  if (C.zf) goto L_11683fc4;
  /* 11683fa5 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683fab je 0x11683fc1 */
  if (C.zf) goto L_11683fc1;
  /* 11683fad cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683fb3 je 0x11683fbd */
  if (C.zf) goto L_11683fbd;
  /* 11683fb5 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683fb7 jne 0x11683fc4 */
  if (!C.zf) goto L_11683fc4;
  /* 11683fb9 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11683fbb jmp 0x11683fc4 */
  goto L_11683fc4;
L_11683fbd:;
  /* 11683fbd or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 11683fbf jmp 0x11683fc4 */
  goto L_11683fc4;
L_11683fc1:;
  /* 11683fc1 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_11683fc4:;
  /* 11683fc4 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11683fc6 pop esi */
  ESI = (pop32());
  /* 11683fc7 je 0x11683fd4 */
  if (C.zf) goto L_11683fd4;
  /* 11683fc9 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11683fcb jne 0x11683fd9 */
  if (!C.zf) goto L_11683fd9;
  /* 11683fcd or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 11683fd2 jmp 0x11683fd9 */
  goto L_11683fd9;
L_11683fd4:;
  /* 11683fd4 or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_11683fd9:;
  /* 11683fd9 pop edi */
  EDI = (pop32());
  /* 11683fda pop ebp */
  EBP = (pop32());
  /* 11683fdb test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 11683fde pop ebx */
  EBX = (pop32());
  /* 11683fdf je 0x11683fe6 */
  if (C.zf) goto L_11683fe6;
  /* 11683fe1 or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_11683fe6:;
  /* 11683fe6 ret  */
  ESPCHK(0x11683f55u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe7 @ 0x11683fe7 (137 bytes, 53 insns) */
void f_11683fe7(void) {
  FTRACE(0x11683fe7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11683fe7 push ebx */
  push32((uint32_t)(EBX));
  /* 11683fe8 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11683fec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11683fee push esi */
  push32((uint32_t)(ESI));
  /* 11683fef test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11683ff2 je 0x11683ff7 */
  if (C.zf) goto L_11683ff7;
  /* 11683ff4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11683ff6 pop eax */
  EAX = (pop32());
L_11683ff7:;
  /* 11683ff7 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11683ffa je 0x11683ffe */
  if (C.zf) goto L_11683ffe;
  /* 11683ffc or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11683ffe:;
  /* 11683ffe test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11684001 je 0x11684005 */
  if (C.zf) goto L_11684005;
  /* 11684003 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11684005:;
  /* 11684005 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11684008 je 0x1168400c */
  if (C.zf) goto L_1168400c;
  /* 1168400a or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_1168400c:;
  /* 1168400c test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1168400f je 0x11684013 */
  if (C.zf) goto L_11684013;
  /* 11684011 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_11684013:;
  /* 11684013 test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 11684019 je 0x1168401d */
  if (C.zf) goto L_1168401d;
  /* 1168401b or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_1168401d:;
  /* 1168401d mov ecx, ebx */
  ECX = (EBX);
  /* 1168401f mov edx, 0x300 */
  EDX = (0x300u);
  /* 11684024 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11684026 mov esi, 0x200 */
  ESI = (0x200u);
  /* 1168402b je 0x1168404a */
  if (C.zf) goto L_1168404a;
  /* 1168402d cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684033 je 0x11684047 */
  if (C.zf) goto L_11684047;
  /* 11684035 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684037 je 0x11684042 */
  if (C.zf) goto L_11684042;
  /* 11684039 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168403b jne 0x1168404a */
  if (!C.zf) goto L_1168404a;
  /* 1168403d or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11684040 jmp 0x1168404a */
  goto L_1168404a;
L_11684042:;
  /* 11684042 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11684045 jmp 0x1168404a */
  goto L_1168404a;
L_11684047:;
  /* 11684047 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_1168404a:;
  /* 1168404a mov ecx, ebx */
  ECX = (EBX);
  /* 1168404c and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 11684052 je 0x11684060 */
  if (C.zf) goto L_11684060;
  /* 11684054 cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168405a jne 0x11684062 */
  if (!C.zf) goto L_11684062;
  /* 1168405c or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1168405e jmp 0x11684062 */
  goto L_11684062;
L_11684060:;
  /* 11684060 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_11684062:;
  /* 11684062 pop esi */
  ESI = (pop32());
  /* 11684063 test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 11684069 pop ebx */
  EBX = (pop32());
  /* 1168406a je 0x1168406f */
  if (C.zf) goto L_1168406f;
  /* 1168406c or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_1168406f:;
  /* 1168406f ret  */
  ESPCHK(0x11683fe7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004070 @ 0x11684070 (117 bytes, 46 insns) */
void f_11684070(void) {
  FTRACE(0x11684070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684070 push ebp */
  push32((uint32_t)(EBP));
  /* 11684071 mov ebp, esp */
  EBP = (ESP);
  /* 11684073 push ecx */
  push32((uint32_t)(ECX));
  /* 11684074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684077 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 1168407a cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684080 ja 0x1168408e */
  if ((!C.cf&&!C.zf)) goto L_1168408e;
  /* 11684082 mov ecx, dword ptr [0x116893d4] */
  ECX = (r32((uint32_t)(0x116893d4)));
  /* 11684088 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 1168408c jmp 0x116840e0 */
  goto L_116840e0;
L_1168408e:;
  /* 1168408e mov ecx, eax */
  ECX = (EAX);
  /* 11684090 push esi */
  push32((uint32_t)(ESI));
  /* 11684091 mov esi, dword ptr [0x116893d4] */
  ESI = (r32((uint32_t)(0x116893d4)));
  /* 11684097 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1168409a movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 1168409d test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 116840a2 pop esi */
  ESI = (pop32());
  /* 116840a3 je 0x116840b3 */
  if (C.zf) goto L_116840b3;
  /* 116840a5 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 116840a9 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 116840ac mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 116840af push 2 */
  push32((uint32_t)(0x2u));
  /* 116840b1 jmp 0x116840bc */
  goto L_116840bc;
L_116840b3:;
  /* 116840b3 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 116840b7 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 116840ba push 1 */
  push32((uint32_t)(0x1u));
L_116840bc:;
  /* 116840bc pop eax */
  EAX = (pop32());
  /* 116840bd lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 116840c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 116840c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 116840c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 116840c6 push ecx */
  push32((uint32_t)(ECX));
  /* 116840c7 push eax */
  push32((uint32_t)(EAX));
  /* 116840c8 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 116840cb push eax */
  push32((uint32_t)(EAX));
  /* 116840cc push 1 */
  push32((uint32_t)(0x1u));
  /* 116840ce call 0x11685b2e */
  push32(0x116840d3u); f_11685b2e();
  /* 116840d3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116840d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116840d8 jne 0x116840dc */
  if (!C.zf) goto L_116840dc;
  /* 116840da leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116840db ret  */
  ESPCHK(0x11684070u, _esp0);
  ESP += 4; return;
L_116840dc:;
  /* 116840dc movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_116840e0:;
  /* 116840e0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 116840e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116840e4 ret  */
  ESPCHK(0x11684070u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e5 @ 0x116840e5 (111 bytes, 44 insns) */
void f_116840e5(void) {
  FTRACE(0x116840e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116840e5 push ebx */
  push32((uint32_t)(EBX));
  /* 116840e6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116840e8 cmp dword ptr [0x1168a2a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1168a2a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116840ee jne 0x11684103 */
  if (!C.zf) goto L_11684103;
  /* 116840f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116840f4 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116840f7 jl 0x11684152 */
  if ((C.sf!=C.of)) goto L_11684152;
  /* 116840f9 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116840fc jg 0x11684152 */
  if ((!C.zf&&C.sf==C.of)) goto L_11684152;
  /* 116840fe add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684101 pop ebx */
  EBX = (pop32());
  /* 11684102 ret  */
  ESPCHK(0x116840e5u, _esp0);
  ESP += 4; return;
L_11684103:;
  /* 11684103 push esi */
  push32((uint32_t)(ESI));
  /* 11684104 mov esi, 0x1168a340 */
  ESI = (0x1168a340u);
  /* 11684109 push edi */
  push32((uint32_t)(EDI));
  /* 1168410a push esi */
  push32((uint32_t)(ESI));
  /* 1168410b call dword ptr [0x11688038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688038))), 0x11684111u);
  /* 11684111 cmp dword ptr [0x1168a33c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1168a33c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684117 mov edi, dword ptr [0x11688040] */
  EDI = (r32((uint32_t)(0x11688040)));
  /* 1168411d je 0x1168412d */
  if (C.zf) goto L_1168412d;
  /* 1168411f push esi */
  push32((uint32_t)(ESI));
  /* 11684120 call edi */
  call_ind((uint32_t)(EDI), 0x11684122u);
  /* 11684122 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11684124 call 0x116832ad */
  push32(0x11684129u); f_116832ad();
  /* 11684129 pop ecx */
  ECX = (pop32());
  /* 1168412a push 1 */
  push32((uint32_t)(0x1u));
  /* 1168412c pop ebx */
  EBX = (pop32());
L_1168412d:;
  /* 1168412d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11684131 call 0x11684154 */
  push32(0x11684136u); f_11684154();
  /* 11684136 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11684138 pop ecx */
  ECX = (pop32());
  /* 11684139 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1168413d je 0x11684149 */
  if (C.zf) goto L_11684149;
  /* 1168413f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11684141 call 0x1168330e */
  push32(0x11684146u); f_1168330e();
  /* 11684146 pop ecx */
  ECX = (pop32());
  /* 11684147 jmp 0x1168414c */
  goto L_1168414c;
L_11684149:;
  /* 11684149 push esi */
  push32((uint32_t)(ESI));
  /* 1168414a call edi */
  call_ind((uint32_t)(EDI), 0x1168414cu);
L_1168414c:;
  /* 1168414c mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11684150 pop edi */
  EDI = (pop32());
  /* 11684151 pop esi */
  ESI = (pop32());
L_11684152:;
  /* 11684152 pop ebx */
  EBX = (pop32());
  /* 11684153 ret  */
  ESPCHK(0x116840e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004154 @ 0x11684154 (203 bytes, 78 insns) */
void f_11684154(void) {
  FTRACE(0x11684154u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684154 push ebp */
  push32((uint32_t)(EBP));
  /* 11684155 mov ebp, esp */
  EBP = (ESP);
  /* 11684157 push ecx */
  push32((uint32_t)(ECX));
  /* 11684158 cmp dword ptr [0x1168a2a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a2a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168415f push ebx */
  push32((uint32_t)(EBX));
  /* 11684160 push esi */
  push32((uint32_t)(ESI));
  /* 11684161 push edi */
  push32((uint32_t)(EDI));
  /* 11684162 jne 0x11684181 */
  if (!C.zf) goto L_11684181;
  /* 11684164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684167 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168416a jl 0x1168421a */
  if ((C.sf!=C.of)) goto L_1168421a;
  /* 11684170 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684173 jg 0x1168421a */
  if ((!C.zf&&C.sf==C.of)) goto L_1168421a;
  /* 11684179 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168417c jmp 0x1168421a */
  goto L_1168421a;
L_11684181:;
  /* 11684181 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684184 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11684189 push 1 */
  push32((uint32_t)(0x1u));
  /* 1168418b cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168418d pop esi */
  ESI = (pop32());
  /* 1168418e jge 0x116841b5 */
  if ((C.sf==C.of)) goto L_116841b5;
  /* 11684190 cmp dword ptr [0x116893c8], esi */
  { uint32_t _a=(r32((uint32_t)(0x116893c8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684196 jle 0x116841a3 */
  if ((C.zf||C.sf!=C.of)) goto L_116841a3;
  /* 11684198 push esi */
  push32((uint32_t)(ESI));
  /* 11684199 push ebx */
  push32((uint32_t)(EBX));
  /* 1168419a call 0x11684070 */
  push32(0x1168419fu); f_11684070();
  /* 1168419f pop ecx */
  ECX = (pop32());
  /* 116841a0 pop ecx */
  ECX = (pop32());
  /* 116841a1 jmp 0x116841ad */
  goto L_116841ad;
L_116841a3:;
  /* 116841a3 mov eax, dword ptr [0x116893d4] */
  EAX = (r32((uint32_t)(0x116893d4)));
  /* 116841a8 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 116841ab and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_116841ad:;
  /* 116841ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116841af jne 0x116841b5 */
  if (!C.zf) goto L_116841b5;
L_116841b1:;
  /* 116841b1 mov eax, ebx */
  EAX = (EBX);
  /* 116841b3 jmp 0x1168421a */
  goto L_1168421a;
L_116841b5:;
  /* 116841b5 mov edx, dword ptr [0x116893d4] */
  EDX = (r32((uint32_t)(0x116893d4)));
  /* 116841bb mov eax, ebx */
  EAX = (EBX);
  /* 116841bd sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 116841c0 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 116841c3 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 116841c8 je 0x116841d9 */
  if (C.zf) goto L_116841d9;
  /* 116841ca and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 116841ce push 2 */
  push32((uint32_t)(0x2u));
  /* 116841d0 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 116841d3 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 116841d6 pop eax */
  EAX = (pop32());
  /* 116841d7 jmp 0x116841e2 */
  goto L_116841e2;
L_116841d9:;
  /* 116841d9 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 116841dd mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 116841e0 mov eax, esi */
  EAX = (ESI);
L_116841e2:;
  /* 116841e2 push esi */
  push32((uint32_t)(ESI));
  /* 116841e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 116841e5 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 116841e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 116841ea push ecx */
  push32((uint32_t)(ECX));
  /* 116841eb push eax */
  push32((uint32_t)(EAX));
  /* 116841ec lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 116841ef push eax */
  push32((uint32_t)(EAX));
  /* 116841f0 push edi */
  push32((uint32_t)(EDI));
  /* 116841f1 push dword ptr [0x1168a2a0] */
  push32((uint32_t)(r32((uint32_t)(0x1168a2a0))));
  /* 116841f7 call 0x11685c77 */
  push32(0x116841fcu); f_11685c77();
  /* 116841fc add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116841ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11684201 je 0x116841b1 */
  if (C.zf) goto L_116841b1;
  /* 11684203 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684205 jne 0x1168420d */
  if (!C.zf) goto L_1168420d;
  /* 11684207 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1168420b jmp 0x1168421a */
  goto L_1168421a;
L_1168420d:;
  /* 1168420d movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11684211 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11684215 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11684218 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1168421a:;
  /* 1168421a pop edi */
  EDI = (pop32());
  /* 1168421b pop esi */
  ESI = (pop32());
  /* 1168421c pop ebx */
  EBX = (pop32());
  /* 1168421d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1168421e ret  */
  ESPCHK(0x11684154u, _esp0);
  ESP += 4; return;
}

/* FUN_1000421f @ 0x1168421f (73 bytes, 36 insns) */
void f_1168421f(void) {
  FTRACE(0x1168421fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168421f mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11684223 push esi */
  push32((uint32_t)(ESI));
  /* 11684224 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11684226 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11684227 pop ecx */
  ECX = (pop32());
  /* 11684228 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1168422a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1168422c mov esi, eax */
  ESI = (EAX);
  /* 1168422e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11684232 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11684233 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11684235 pop ecx */
  ECX = (pop32());
  /* 11684236 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1168423a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168423c or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1168423f shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11684241 not edx */
  EDX = (~(EDX));
  /* 11684243 test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 11684246 jne 0x11684264 */
  if (!C.zf) goto L_11684264;
  /* 11684248 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11684249 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168424c jge 0x1168425f */
  if ((C.sf==C.of)) goto L_1168425f;
  /* 1168424e lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_11684251:;
  /* 11684251 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684254 jne 0x11684264 */
  if (!C.zf) goto L_11684264;
  /* 11684256 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11684257 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168425a cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168425d jl 0x11684251 */
  if ((C.sf!=C.of)) goto L_11684251;
L_1168425f:;
  /* 1168425f push 1 */
  push32((uint32_t)(0x1u));
  /* 11684261 pop eax */
  EAX = (pop32());
  /* 11684262 pop esi */
  ESI = (pop32());
  /* 11684263 ret  */
  ESPCHK(0x1168421fu, _esp0);
  ESP += 4; return;
L_11684264:;
  /* 11684264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11684266 pop esi */
  ESI = (pop32());
  /* 11684267 ret  */
  ESPCHK(0x1168421fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004268 @ 0x11684268 (86 bytes, 43 insns) */
void f_11684268(void) {
  FTRACE(0x11684268u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684268 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1168426c push ebx */
  push32((uint32_t)(EBX));
  /* 1168426d push esi */
  push32((uint32_t)(ESI));
  /* 1168426e push edi */
  push32((uint32_t)(EDI));
  /* 1168426f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11684271 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11684275 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11684276 pop ecx */
  ECX = (pop32());
  /* 11684277 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11684279 mov esi, eax */
  ESI = (EAX);
  /* 1168427b mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1168427f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11684280 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11684282 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 11684285 push edi */
  push32((uint32_t)(EDI));
  /* 11684286 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11684288 pop ecx */
  ECX = (pop32());
  /* 11684289 push 1 */
  push32((uint32_t)(0x1u));
  /* 1168428b pop eax */
  EAX = (pop32());
  /* 1168428c sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168428e shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11684290 push eax */
  push32((uint32_t)(EAX));
  /* 11684291 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11684293 call 0x11685e9b */
  push32(0x11684298u); f_11685e9b();
  /* 11684298 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168429b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1168429c js 0x116842ba */
  if (C.sf) goto L_116842ba;
  /* 1168429e lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_116842a1:;
  /* 116842a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116842a3 je 0x116842ba */
  if (C.zf) goto L_116842ba;
  /* 116842a5 push edi */
  push32((uint32_t)(EDI));
  /* 116842a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 116842a8 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 116842aa call 0x11685e9b */
  push32(0x116842afu); f_11685e9b();
  /* 116842af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116842b2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 116842b3 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116842b6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116842b8 jge 0x116842a1 */
  if ((C.sf==C.of)) goto L_116842a1;
L_116842ba:;
  /* 116842ba pop edi */
  EDI = (pop32());
  /* 116842bb pop esi */
  ESI = (pop32());
  /* 116842bc pop ebx */
  EBX = (pop32());
  /* 116842bd ret  */
  ESPCHK(0x11684268u, _esp0);
  ESP += 4; return;
}

/* FUN_100042be @ 0x116842be (140 bytes, 71 insns) */
void f_116842be(void) {
  FTRACE(0x116842beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116842be push ebp */
  push32((uint32_t)(EBP));
  /* 116842bf mov ebp, esp */
  EBP = (ESP);
  /* 116842c1 push ecx */
  push32((uint32_t)(ECX));
  /* 116842c2 push ecx */
  push32((uint32_t)(ECX));
  /* 116842c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116842c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116842c7 push esi */
  push32((uint32_t)(ESI));
  /* 116842c8 push edi */
  push32((uint32_t)(EDI));
  /* 116842c9 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 116842cc push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116842ce pop ecx */
  ECX = (pop32());
  /* 116842cf and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 116842d3 lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 116842d6 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 116842d8 mov eax, ebx */
  EAX = (EBX);
  /* 116842da pop esi */
  ESI = (pop32());
  /* 116842db cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116842dc idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116842de push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 116842e0 mov ecx, eax */
  ECX = (EAX);
  /* 116842e2 mov eax, ebx */
  EAX = (EBX);
  /* 116842e4 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116842e5 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116842e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116842ea pop esi */
  ESI = (pop32());
  /* 116842eb push 1 */
  push32((uint32_t)(0x1u));
  /* 116842ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116842f0 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 116842f3 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116842f6 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116842f8 pop edx */
  EDX = (pop32());
  /* 116842f9 mov ecx, esi */
  ECX = (ESI);
  /* 116842fb shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 116842fd test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 116842ff je 0x11684322 */
  if (C.zf) goto L_11684322;
  /* 11684301 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11684302 push ebx */
  push32((uint32_t)(EBX));
  /* 11684303 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11684306 call 0x1168421f */
  push32(0x1168430bu); f_1168421f();
  /* 1168430b pop ecx */
  ECX = (pop32());
  /* 1168430c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168430e pop ecx */
  ECX = (pop32());
  /* 1168430f jne 0x1168431f */
  if (!C.zf) goto L_1168431f;
  /* 11684311 push edi */
  push32((uint32_t)(EDI));
  /* 11684312 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11684315 call 0x11684268 */
  push32(0x1168431au); f_11684268();
  /* 1168431a pop ecx */
  ECX = (pop32());
  /* 1168431b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1168431e pop ecx */
  ECX = (pop32());
L_1168431f:;
  /* 1168431f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11684322:;
  /* 11684322 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11684325 mov ecx, esi */
  ECX = (ESI);
  /* 11684327 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11684329 push 3 */
  push32((uint32_t)(0x3u));
  /* 1168432b pop ecx */
  ECX = (pop32());
  /* 1168432c and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1168432e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11684331 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11684332 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684334 jge 0x11684342 */
  if ((C.sf==C.of)) goto L_11684342;
  /* 11684336 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684339 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168433b lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1168433e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11684340 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11684342:;
  /* 11684342 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11684345 pop edi */
  EDI = (pop32());
  /* 11684346 pop esi */
  ESI = (pop32());
  /* 11684347 pop ebx */
  EBX = (pop32());
  /* 11684348 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684349 ret  */
  ESPCHK(0x116842beu, _esp0);
  ESP += 4; return;
}

/* FUN_1000434a @ 0x1168434a (27 bytes, 13 insns) */
void f_1168434a(void) {
  FTRACE(0x1168434au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168434a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1168434e mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11684352 push esi */
  push32((uint32_t)(ESI));
  /* 11684353 push 3 */
  push32((uint32_t)(0x3u));
  /* 11684355 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684357 pop edx */
  EDX = (pop32());
L_11684358:;
  /* 11684358 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1168435a mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 1168435d add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684360 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11684361 jne 0x11684358 */
  if (!C.zf) goto L_11684358;
  /* 11684363 pop esi */
  ESI = (pop32());
  /* 11684364 ret  */
  ESPCHK(0x1168434au, _esp0);
  ESP += 4; return;
}

/* FUN_10004365 @ 0x11684365 (12 bytes, 8 insns) */
void f_11684365(void) {
  FTRACE(0x11684365u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684365 push edi */
  push32((uint32_t)(EDI));
  /* 11684366 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1168436a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1168436c stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1168436d stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1168436e stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1168436f pop edi */
  EDI = (pop32());
  /* 11684370 ret  */
  ESPCHK(0x11684365u, _esp0);
  ESP += 4; return;
}

/* FUN_10004371 @ 0x11684371 (27 bytes, 13 insns) */
void f_11684371(void) {
  FTRACE(0x11684371u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684371 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11684375 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11684377:;
  /* 11684377 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168437a jne 0x11684389 */
  if (!C.zf) goto L_11684389;
  /* 1168437c inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1168437d add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684380 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684383 jl 0x11684377 */
  if ((C.sf!=C.of)) goto L_11684377;
  /* 11684385 push 1 */
  push32((uint32_t)(0x1u));
  /* 11684387 pop eax */
  EAX = (pop32());
  /* 11684388 ret  */
  ESPCHK(0x11684371u, _esp0);
  ESP += 4; return;
L_11684389:;
  /* 11684389 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1168438b ret  */
  ESPCHK(0x11684371u, _esp0);
  ESP += 4; return;
}

/* FUN_1000438c @ 0x1168438c (141 bytes, 64 insns) */
void f_1168438c(void) {
  FTRACE(0x1168438cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168438c push ebp */
  push32((uint32_t)(EBP));
  /* 1168438d mov ebp, esp */
  EBP = (ESP);
  /* 1168438f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684392 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11684395 push ebx */
  push32((uint32_t)(EBX));
  /* 11684396 push esi */
  push32((uint32_t)(ESI));
  /* 11684397 push edi */
  push32((uint32_t)(EDI));
  /* 11684398 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1168439a mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1168439d pop ebx */
  EBX = (pop32());
  /* 1168439e or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 116843a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116843a2 mov ecx, ebx */
  ECX = (EBX);
  /* 116843a4 mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 116843ab idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116843ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 116843b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116843b3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 116843b4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 116843b6 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 116843ba mov ecx, edx */
  ECX = (EDX);
  /* 116843bc shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 116843be sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116843c0 not esi */
  ESI = (~(ESI));
L_116843c2:;
  /* 116843c2 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 116843c4 mov ecx, eax */
  ECX = (EAX);
  /* 116843c6 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 116843c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 116843cb mov ecx, edx */
  ECX = (EDX);
  /* 116843cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116843cf or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 116843d2 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 116843d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 116843d7 mov ecx, ebx */
  ECX = (EBX);
  /* 116843d9 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116843dc shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 116843de dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 116843e1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 116843e4 jne 0x116843c2 */
  if (!C.zf) goto L_116843c2;
  /* 116843e6 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 116843e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 116843eb pop ebx */
  EBX = (pop32());
  /* 116843ec mov esi, edi */
  ESI = (EDI);
  /* 116843ee push 8 */
  push32((uint32_t)(0x8u));
  /* 116843f0 pop ecx */
  ECX = (pop32());
  /* 116843f1 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_116843f4:;
  /* 116843f4 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116843f6 jl 0x11684407 */
  if ((C.sf!=C.of)) goto L_11684407;
  /* 116843f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 116843fb mov eax, ecx */
  EAX = (ECX);
  /* 116843fd sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116843ff mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11684402 mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 11684405 jmp 0x1168440e */
  goto L_1168440e;
L_11684407:;
  /* 11684407 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1168440a and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_1168440e:;
  /* 1168440e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1168440f sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684412 jns 0x116843f4 */
  if (!C.sf) goto L_116843f4;
  /* 11684414 pop edi */
  EDI = (pop32());
  /* 11684415 pop esi */
  ESI = (pop32());
  /* 11684416 pop ebx */
  EBX = (pop32());
  /* 11684417 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684418 ret  */
  ESPCHK(0x1168438cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004419 @ 0x11684419 (364 bytes, 138 insns) */
void f_11684419(void) {
  FTRACE(0x11684419u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684419 push ebp */
  push32((uint32_t)(EBP));
  /* 1168441a mov ebp, esp */
  EBP = (ESP);
  /* 1168441c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168441f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684422 push ebx */
  push32((uint32_t)(EBX));
  /* 11684423 push esi */
  push32((uint32_t)(ESI));
  /* 11684424 push edi */
  push32((uint32_t)(EDI));
  /* 11684425 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 11684429 mov ebx, ecx */
  EBX = (ECX);
  /* 1168442b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11684431 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11684434 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11684437 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1168443a mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 1168443d movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11684440 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11684443 and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 11684449 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168444f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11684452 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11684455 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168445b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1168445e jne 0x11684486 */
  if (!C.zf) goto L_11684486;
  /* 11684460 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11684463 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11684465 push eax */
  push32((uint32_t)(EAX));
  /* 11684466 call 0x11684371 */
  push32(0x1168446bu); f_11684371();
  /* 1168446b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168446d pop ecx */
  ECX = (pop32());
  /* 1168446e jne 0x11684545 */
  if (!C.zf) goto L_11684545;
  /* 11684474 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11684477 push eax */
  push32((uint32_t)(EAX));
  /* 11684478 call 0x11684365 */
  push32(0x1168447du); f_11684365();
  /* 1168447d pop ecx */
  ECX = (pop32());
L_1168447e:;
  /* 1168447e push 2 */
  push32((uint32_t)(0x2u));
L_11684480:;
  /* 11684480 pop eax */
  EAX = (pop32());
  /* 11684481 jmp 0x11684547 */
  goto L_11684547;
L_11684486:;
  /* 11684486 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11684489 push eax */
  push32((uint32_t)(EAX));
  /* 1168448a lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1168448d push eax */
  push32((uint32_t)(EAX));
  /* 1168448e call 0x1168434a */
  push32(0x11684493u); f_1168434a();
  /* 11684493 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11684496 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11684499 push eax */
  push32((uint32_t)(EAX));
  /* 1168449a call 0x116842be */
  push32(0x1168449fu); f_116842be();
  /* 1168449f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116844a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116844a4 je 0x116844a7 */
  if (C.zf) goto L_116844a7;
  /* 116844a6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_116844a7:;
  /* 116844a7 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 116844aa mov ecx, eax */
  ECX = (EAX);
  /* 116844ac sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116844af cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116844b1 jge 0x116844bf */
  if ((C.sf==C.of)) goto L_116844bf;
  /* 116844b3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116844b6 push eax */
  push32((uint32_t)(EAX));
  /* 116844b7 call 0x11684365 */
  push32(0x116844bcu); f_11684365();
  /* 116844bc pop ecx */
  ECX = (pop32());
  /* 116844bd jmp 0x116844fb */
  goto L_116844fb;
L_116844bf:;
  /* 116844bf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116844c1 jg 0x11684502 */
  if ((!C.zf&&C.sf==C.of)) goto L_11684502;
  /* 116844c3 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116844c5 mov esi, eax */
  ESI = (EAX);
  /* 116844c7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 116844ca push eax */
  push32((uint32_t)(EAX));
  /* 116844cb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116844ce push eax */
  push32((uint32_t)(EAX));
  /* 116844cf call 0x1168434a */
  push32(0x116844d4u); f_1168434a();
  /* 116844d4 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116844d7 push esi */
  push32((uint32_t)(ESI));
  /* 116844d8 push eax */
  push32((uint32_t)(EAX));
  /* 116844d9 call 0x1168438c */
  push32(0x116844deu); f_1168438c();
  /* 116844de push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 116844e1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116844e4 push eax */
  push32((uint32_t)(EAX));
  /* 116844e5 call 0x116842be */
  push32(0x116844eau); f_116842be();
  /* 116844ea mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 116844ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116844ee push eax */
  push32((uint32_t)(EAX));
  /* 116844ef lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116844f2 push eax */
  push32((uint32_t)(EAX));
  /* 116844f3 call 0x1168438c */
  push32(0x116844f8u); f_1168438c();
  /* 116844f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116844fb:;
  /* 116844fb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 116844fd jmp 0x1168447e */
  goto L_1168447e;
L_11684502:;
  /* 11684502 cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684504 jl 0x1168452e */
  if ((C.sf!=C.of)) goto L_1168452e;
  /* 11684506 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11684509 push eax */
  push32((uint32_t)(EAX));
  /* 1168450a call 0x11684365 */
  push32(0x1168450fu); f_11684365();
  /* 1168450f push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11684512 or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11684516 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11684519 push eax */
  push32((uint32_t)(EAX));
  /* 1168451a call 0x1168438c */
  push32(0x1168451fu); f_1168438c();
  /* 1168451f mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11684522 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11684525 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11684527 push 1 */
  push32((uint32_t)(0x1u));
  /* 11684529 jmp 0x11684480 */
  goto L_11684480;
L_1168452e:;
  /* 1168452e push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11684531 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11684534 and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11684538 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1168453b push eax */
  push32((uint32_t)(EAX));
  /* 1168453c add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1168453e call 0x1168438c */
  push32(0x11684543u); f_1168438c();
  /* 11684543 pop ecx */
  ECX = (pop32());
  /* 11684544 pop ecx */
  ECX = (pop32());
L_11684545:;
  /* 11684545 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11684547:;
  /* 11684547 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11684549 pop ecx */
  ECX = (pop32());
  /* 1168454a sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168454d mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 11684550 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11684552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684555 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11684557 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684559 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 1168455f or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11684561 or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11684564 cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684567 jne 0x11684576 */
  if (!C.zf) goto L_11684576;
  /* 11684569 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1168456c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1168456f mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11684572 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11684574 jmp 0x11684580 */
  goto L_11684580;
L_11684576:;
  /* 11684576 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684579 jne 0x11684580 */
  if (!C.zf) goto L_11684580;
  /* 1168457b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1168457e mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11684580:;
  /* 11684580 pop edi */
  EDI = (pop32());
  /* 11684581 pop esi */
  ESI = (pop32());
  /* 11684582 pop ebx */
  EBX = (pop32());
  /* 11684583 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684584 ret  */
  ESPCHK(0x11684419u, _esp0);
  ESP += 4; return;
}

/* FUN_10004585 @ 0x11684585 (22 bytes, 6 insns) */
void f_11684585(void) {
  FTRACE(0x11684585u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684585 push 0x116895e0 */
  push32((uint32_t)(0x116895e0u));
  /* 1168458a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1168458e push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11684592 call 0x11684419 */
  push32(0x11684597u); f_11684419();
  /* 11684597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168459a ret  */
  ESPCHK(0x11684585u, _esp0);
  ESP += 4; return;
}

/* FUN_1000459b @ 0x1168459b (22 bytes, 6 insns) */
void f_1168459b(void) {
  FTRACE(0x1168459bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168459b push 0x116895f8 */
  push32((uint32_t)(0x116895f8u));
  /* 116845a0 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 116845a4 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 116845a8 call 0x11684419 */
  push32(0x116845adu); f_11684419();
  /* 116845ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116845b0 ret  */
  ESPCHK(0x1168459bu, _esp0);
  ESP += 4; return;
}

/* FUN_100045b1 @ 0x116845b1 (45 bytes, 21 insns) */
void f_116845b1(void) {
  FTRACE(0x116845b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116845b1 push ebp */
  push32((uint32_t)(EBP));
  /* 116845b2 mov ebp, esp */
  EBP = (ESP);
  /* 116845b4 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116845b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116845b9 push eax */
  push32((uint32_t)(EAX));
  /* 116845ba push eax */
  push32((uint32_t)(EAX));
  /* 116845bb push eax */
  push32((uint32_t)(EAX));
  /* 116845bc push eax */
  push32((uint32_t)(EAX));
  /* 116845bd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 116845c0 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 116845c3 push eax */
  push32((uint32_t)(EAX));
  /* 116845c4 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116845c7 push eax */
  push32((uint32_t)(EAX));
  /* 116845c8 call 0x1168603c */
  push32(0x116845cdu); f_1168603c();
  /* 116845cd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 116845d0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116845d3 push eax */
  push32((uint32_t)(EAX));
  /* 116845d4 call 0x11684585 */
  push32(0x116845d9u); f_11684585();
  /* 116845d9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116845dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116845dd ret  */
  ESPCHK(0x116845b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100045de @ 0x116845de (45 bytes, 21 insns) */
void f_116845de(void) {
  FTRACE(0x116845deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116845de push ebp */
  push32((uint32_t)(EBP));
  /* 116845df mov ebp, esp */
  EBP = (ESP);
  /* 116845e1 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116845e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116845e6 push eax */
  push32((uint32_t)(EAX));
  /* 116845e7 push eax */
  push32((uint32_t)(EAX));
  /* 116845e8 push eax */
  push32((uint32_t)(EAX));
  /* 116845e9 push eax */
  push32((uint32_t)(EAX));
  /* 116845ea push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 116845ed lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 116845f0 push eax */
  push32((uint32_t)(EAX));
  /* 116845f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 116845f4 push eax */
  push32((uint32_t)(EAX));
  /* 116845f5 call 0x1168603c */
  push32(0x116845fau); f_1168603c();
  /* 116845fa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 116845fd lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11684600 push eax */
  push32((uint32_t)(EAX));
  /* 11684601 call 0x1168459b */
  push32(0x11684606u); f_1168459b();
  /* 11684606 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11684609 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1168460a ret  */
  ESPCHK(0x116845deu, _esp0);
  ESP += 4; return;
}

/* FUN_1000460b @ 0x1168460b (119 bytes, 57 insns) */
void f_1168460b(void) {
  FTRACE(0x1168460bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168460b push ebp */
  push32((uint32_t)(EBP));
  /* 1168460c mov ebp, esp */
  EBP = (ESP);
  /* 1168460e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11684611 push ebx */
  push32((uint32_t)(EBX));
  /* 11684612 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11684615 push esi */
  push32((uint32_t)(ESI));
  /* 11684616 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11684619 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 1168461c push edi */
  push32((uint32_t)(EDI));
  /* 1168461d lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 11684620 mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 11684623 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11684625 mov eax, edi */
  EAX = (EDI);
  /* 11684627 jle 0x11684648 */
  if ((C.zf||C.sf!=C.of)) goto L_11684648;
  /* 11684629 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1168462c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1168462e:;
  /* 1168462e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11684630 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11684632 je 0x1168463a */
  if (C.zf) goto L_1168463a;
  /* 11684634 movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 11684637 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11684638 jmp 0x1168463d */
  goto L_1168463d;
L_1168463a:;
  /* 1168463a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1168463c pop edx */
  EDX = (pop32());
L_1168463d:;
  /* 1168463d mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1168463f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11684640 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11684643 jne 0x1168462e */
  if (!C.zf) goto L_1168462e;
  /* 11684645 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11684648:;
  /* 11684648 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1168464b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1168464d jl 0x11684661 */
  if ((C.sf!=C.of)) goto L_11684661;
  /* 1168464f cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684652 jl 0x11684661 */
  if ((C.sf!=C.of)) goto L_11684661;
L_11684654:;
  /* 11684654 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11684655 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684658 jne 0x1168465f */
  if (!C.zf) goto L_1168465f;
  /* 1168465a mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1168465d jmp 0x11684654 */
  goto L_11684654;
L_1168465f:;
  /* 1168465f inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11684661:;
  /* 11684661 cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684664 jne 0x1168466b */
  if (!C.zf) goto L_1168466b;
  /* 11684666 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 11684669 jmp 0x1168467d */
  goto L_1168467d;
L_1168466b:;
  /* 1168466b push edi */
  push32((uint32_t)(EDI));
  /* 1168466c call 0x11684c30 */
  push32(0x11684671u); f_11684c30();
  /* 11684671 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11684672 push eax */
  push32((uint32_t)(EAX));
  /* 11684673 push edi */
  push32((uint32_t)(EDI));
  /* 11684674 push esi */
  push32((uint32_t)(ESI));
  /* 11684675 call 0x116848f0 */
  push32(0x1168467au); f_116848f0();
  /* 1168467a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1168467d:;
  /* 1168467d pop edi */
  EDI = (pop32());
  /* 1168467e pop esi */
  ESI = (pop32());
  /* 1168467f pop ebx */
  EBX = (pop32());
  /* 11684680 pop ebp */
  EBP = (pop32());
  /* 11684681 ret  */
  ESPCHK(0x1168460bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004682 @ 0x11684682 (92 bytes, 41 insns) */
void f_11684682(void) {
  FTRACE(0x11684682u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684682 push ebp */
  push32((uint32_t)(EBP));
  /* 11684683 mov ebp, esp */
  EBP = (ESP);
  /* 11684685 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684688 push esi */
  push32((uint32_t)(ESI));
  /* 11684689 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1168468c push edi */
  push32((uint32_t)(EDI));
  /* 1168468d push eax */
  push32((uint32_t)(EAX));
  /* 1168468e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11684691 push eax */
  push32((uint32_t)(EAX));
  /* 11684692 call 0x116846de */
  push32(0x11684697u); f_116846de();
  /* 11684697 pop ecx */
  ECX = (pop32());
  /* 11684698 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1168469b pop ecx */
  ECX = (pop32());
  /* 1168469c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 1168469f push eax */
  push32((uint32_t)(EAX));
  /* 116846a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 116846a2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 116846a4 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116846a7 mov edi, esp */
  EDI = (ESP);
  /* 116846a9 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 116846aa movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 116846ab movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 116846ad call 0x1168650d */
  push32(0x116846b2u); f_1168650d();
  /* 116846b2 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 116846b5 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 116846b8 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 116846bb movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 116846bf mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 116846c1 movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 116846c5 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 116846c8 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 116846cb push eax */
  push32((uint32_t)(EAX));
  /* 116846cc push edi */
  push32((uint32_t)(EDI));
  /* 116846cd call 0x116847a0 */
  push32(0x116846d2u); f_116847a0();
  /* 116846d2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116846d5 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 116846d8 mov eax, esi */
  EAX = (ESI);
  /* 116846da pop edi */
  EDI = (pop32());
  /* 116846db pop esi */
  ESI = (pop32());
  /* 116846dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116846dd ret  */
  ESPCHK(0x11684682u, _esp0);
  ESP += 4; return;
}

/* FUN_100046de @ 0x116846de (182 bytes, 70 insns) */
void f_116846de(void) {
  FTRACE(0x116846deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116846de push ebp */
  push32((uint32_t)(EBP));
  /* 116846df mov ebp, esp */
  EBP = (ESP);
  /* 116846e1 push ecx */
  push32((uint32_t)(ECX));
  /* 116846e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 116846e5 push ebx */
  push32((uint32_t)(EBX));
  /* 116846e6 push esi */
  push32((uint32_t)(ESI));
  /* 116846e7 push edi */
  push32((uint32_t)(EDI));
  /* 116846e8 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 116846ec mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 116846f1 mov ecx, eax */
  ECX = (EAX);
  /* 116846f3 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 116846f8 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 116846fb and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 116846fd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11684700 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11684703 mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 11684705 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 11684708 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1168470d and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11684712 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11684714 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11684717 je 0x1168472c */
  if (C.zf) goto L_1168472c;
  /* 11684719 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168471b je 0x11684725 */
  if (C.zf) goto L_11684725;
  /* 1168471d lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 11684723 jmp 0x1168474d */
  goto L_1168474d;
L_11684725:;
  /* 11684725 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 1168472a jmp 0x1168474d */
  goto L_1168474d;
L_1168472c:;
  /* 1168472c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1168472e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684730 jne 0x11684744 */
  if (!C.zf) goto L_11684744;
  /* 11684732 cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684734 jne 0x11684744 */
  if (!C.zf) goto L_11684744;
  /* 11684736 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684739 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 1168473c mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 1168473e mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 11684742 jmp 0x1168478f */
  goto L_1168478f;
L_11684744:;
  /* 11684744 lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 1168474a mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_1168474d:;
  /* 1168474d mov ecx, edx */
  ECX = (EDX);
  /* 1168474f shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 11684752 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11684755 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11684757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1168475a or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 1168475d shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 11684760 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11684763 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11684765:;
  /* 11684765 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 11684767 jne 0x11684786 */
  if (!C.zf) goto L_11684786;
  /* 11684769 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1168476b add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168476d mov ebx, edx */
  EBX = (EDX);
  /* 1168476f shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 11684772 or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 11684774 lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 11684777 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11684779 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 1168477c add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11684782 mov ecx, ebx */
  ECX = (EBX);
  /* 11684784 jmp 0x11684765 */
  goto L_11684765;
L_11684786:;
  /* 11684786 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11684789 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1168478b mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_1168478f:;
  /* 1168478f pop edi */
  EDI = (pop32());
  /* 11684790 pop esi */
  ESI = (pop32());
  /* 11684791 pop ebx */
  EBX = (pop32());
  /* 11684792 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684793 ret  */
  ESPCHK(0x116846deu, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x116847a0 (7 bytes, 3 insns) */
void f_116847a0(void) {
  FTRACE(0x116847a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116847a0 push edi */
  push32((uint32_t)(EDI));
  /* 116847a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 116847a5 jmp 0x11684811 */
  jmp_ind(0x11684811u); return;
}

/* FUN_100047b0 @ 0x116847b0 (224 bytes, 84 insns) */
void f_116847b0(void) {
  FTRACE(0x116847b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116847b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 116847b4 push edi */
  push32((uint32_t)(EDI));
  /* 116847b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116847bb je 0x116847cc */
  if (C.zf) goto L_116847cc;
L_116847bd:;
  /* 116847bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 116847bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116847c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116847c2 je 0x116847ff */
  if (C.zf) goto L_116847ff;
  /* 116847c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 116847ca jne 0x116847bd */
  if (!C.zf) goto L_116847bd;
L_116847cc:;
  /* 116847cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 116847ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 116847d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 116847d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 116847d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 116847da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116847dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 116847e2 je 0x116847cc */
  if (C.zf) goto L_116847cc;
  /* 116847e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 116847e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 116847e9 je 0x1168480e */
  if (C.zf) goto L_1168480e;
  /* 116847eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 116847ed je 0x11684809 */
  if (C.zf) goto L_11684809;
  /* 116847ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 116847f4 je 0x11684804 */
  if (C.zf) goto L_11684804;
  /* 116847f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 116847fb je 0x116847ff */
  if (C.zf) goto L_116847ff;
  /* 116847fd jmp 0x116847cc */
  goto L_116847cc;
L_116847ff:;
  /* 116847ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11684802 jmp 0x11684811 */
  goto L_11684811;
L_11684804:;
  /* 11684804 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11684807 jmp 0x11684811 */
  goto L_11684811;
L_11684809:;
  /* 11684809 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1168480c jmp 0x11684811 */
  goto L_11684811;
L_1168480e:;
  /* 1168480e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11684811:;
  /* 11684811 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11684815 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1168481b je 0x11684836 */
  if (C.zf) goto L_11684836;
L_1168481d:;
  /* 1168481d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1168481f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11684820 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11684822 je 0x11684888 */
  if (C.zf) goto L_11684888;
  /* 11684824 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11684826 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11684827 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1168482d jne 0x1168481d */
  if (!C.zf) goto L_1168481d;
  /* 1168482f jmp 0x11684836 */
  goto L_11684836;
L_11684831:;
  /* 11684831 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11684833 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11684836:;
  /* 11684836 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1168483b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1168483d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168483f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11684842 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11684844 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11684846 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684849 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1168484e je 0x11684831 */
  if (C.zf) goto L_11684831;
  /* 11684850 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11684852 je 0x11684888 */
  if (C.zf) goto L_11684888;
  /* 11684854 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11684856 je 0x1168487f */
  if (C.zf) goto L_1168487f;
  /* 11684858 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1168485e je 0x11684872 */
  if (C.zf) goto L_11684872;
  /* 11684860 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11684866 je 0x1168486a */
  if (C.zf) goto L_1168486a;
  /* 11684868 jmp 0x11684831 */
  goto L_11684831;
L_1168486a:;
  /* 1168486a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1168486c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11684870 pop edi */
  EDI = (pop32());
  /* 11684871 ret  */
  ESPCHK(0x116847b0u, _esp0);
  ESP += 4; return;
L_11684872:;
  /* 11684872 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11684875 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11684879 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1168487d pop edi */
  EDI = (pop32());
  /* 1168487e ret  */
  ESPCHK(0x116847b0u, _esp0);
  ESP += 4; return;
L_1168487f:;
  /* 1168487f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11684882 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11684886 pop edi */
  EDI = (pop32());
  /* 11684887 ret  */
  ESPCHK(0x116847b0u, _esp0);
  ESP += 4; return;
L_11684888:;
  /* 11684888 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1168488a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1168488e pop edi */
  EDI = (pop32());
  /* 1168488f ret  */
  ESPCHK(0x116847b0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11684890 (88 bytes, 40 insns) */
void f_11684890(void) {
  FTRACE(0x11684890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684890 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11684894 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11684898 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1168489a je 0x116848e3 */
  if (C.zf) goto L_116848e3;
  /* 1168489c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1168489e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 116848a2 push edi */
  push32((uint32_t)(EDI));
  /* 116848a3 mov edi, ecx */
  EDI = (ECX);
  /* 116848a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116848a8 jb 0x116848d7 */
  if (C.cf) goto L_116848d7;
  /* 116848aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 116848ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 116848af je 0x116848b9 */
  if (C.zf) goto L_116848b9;
  /* 116848b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_116848b3:;
  /* 116848b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116848b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116848b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 116848b7 jne 0x116848b3 */
  if (!C.zf) goto L_116848b3;
L_116848b9:;
  /* 116848b9 mov ecx, eax */
  ECX = (EAX);
  /* 116848bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 116848be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116848c0 mov ecx, eax */
  ECX = (EAX);
  /* 116848c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 116848c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116848c7 mov ecx, edx */
  ECX = (EDX);
  /* 116848c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 116848cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116848cf je 0x116848d7 */
  if (C.zf) goto L_116848d7;
  /* 116848d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116848d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 116848d5 je 0x116848dd */
  if (C.zf) goto L_116848dd;
L_116848d7:;
  /* 116848d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116848d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116848da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 116848db jne 0x116848d7 */
  if (!C.zf) goto L_116848d7;
L_116848dd:;
  /* 116848dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 116848e1 pop edi */
  EDI = (pop32());
  /* 116848e2 ret  */
  ESPCHK(0x11684890u, _esp0);
  ESP += 4; return;
L_116848e3:;
  /* 116848e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 116848e7 ret  */
  ESPCHK(0x11684890u, _esp0);
  ESP += 4; return;
}

/* FUN_100048f0 @ 0x116848f0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_116848f0(void) {
  FTRACE(0x116848f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116848f0 push ebp */
  push32((uint32_t)(EBP));
  /* 116848f1 mov ebp, esp */
  EBP = (ESP);
  /* 116848f3 push edi */
  push32((uint32_t)(EDI));
  /* 116848f4 push esi */
  push32((uint32_t)(ESI));
  /* 116848f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 116848f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 116848fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 116848fe mov eax, ecx */
  EAX = (ECX);
  /* 11684900 mov edx, ecx */
  EDX = (ECX);
  /* 11684902 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684904 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684906 jbe 0x11684910 */
  if ((C.cf||C.zf)) goto L_11684910;
  /* 11684908 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168490a jb 0x11684a88 */
  if (C.cf) goto L_11684a88;
L_11684910:;
  /* 11684910 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11684916 jne 0x1168492c */
  if (!C.zf) goto L_1168492c;
  /* 11684918 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1168491b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1168491e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684921 jb 0x1168494c */
  if (C.cf) goto L_1168494c;
  /* 11684923 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11684925 jmp dword ptr [edx*4 + 0x11684a38] */
  switch (EDX) {
    case 0: goto L_11684a48;
    case 1: goto L_11684a50;
    case 2: goto L_11684a5c;
    case 3: goto L_11684a70;
    default: x86_unimpl("switch@0x11684925 out of table"); return;
  }
L_1168492c:;
  /* 1168492c mov eax, edi */
  EAX = (EDI);
  /* 1168492e mov edx, 3 */
  EDX = (0x3u);
  /* 11684933 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684936 jb 0x11684944 */
  if (C.cf) goto L_11684944;
  /* 11684938 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1168493b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168493d jmp dword ptr [eax*4 + 0x11684950] */
  switch (EAX) {
    case 1: goto L_11684960;
    case 2: goto L_1168498c;
    case 3: goto L_116849b0;
    default: x86_unimpl("switch@0x1168493d out of table"); return;
  }
L_11684944:;
  /* 11684944 jmp dword ptr [ecx*4 + 0x11684a48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11684a48)))); return;
  /* 1168494b nop  */
  /* nop */
L_1168494c:;
  /* 1168494c jmp dword ptr [ecx*4 + 0x116849cc] */
  switch (ECX) {
    case 0: goto L_11684a2f;
    case 1: goto L_11684a1c;
    case 2: goto L_11684a14;
    case 3: goto L_11684a0c;
    case 4: goto L_11684a04;
    case 5: goto L_116849fc;
    case 6: goto L_116849f4;
    case 7: goto L_116849ec;
    default: x86_unimpl("switch@0x1168494c out of table"); return;
  }
  /* 11684953 nop  */
  /* nop */
L_11684960:;
  /* 11684960 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11684962 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11684964 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11684966 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11684969 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1168496c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1168496f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11684972 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11684975 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11684978 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1168497b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168497e jb 0x1168494c */
  if (C.cf) goto L_1168494c;
  /* 11684980 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11684982 jmp dword ptr [edx*4 + 0x11684a38] */
  switch (EDX) {
    case 0: goto L_11684a48;
    case 1: goto L_11684a50;
    case 2: goto L_11684a5c;
    case 3: goto L_11684a70;
    default: x86_unimpl("switch@0x11684982 out of table"); return;
  }
  /* 11684989 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1168498c:;
  /* 1168498c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1168498e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11684990 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11684992 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11684995 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11684998 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1168499b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1168499e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116849a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116849a4 jb 0x1168494c */
  if (C.cf) goto L_1168494c;
  /* 116849a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116849a8 jmp dword ptr [edx*4 + 0x11684a38] */
  switch (EDX) {
    case 0: goto L_11684a48;
    case 1: goto L_11684a50;
    case 2: goto L_11684a5c;
    case 3: goto L_11684a70;
    default: x86_unimpl("switch@0x116849a8 out of table"); return;
  }
  /* 116849af nop  */
  /* nop */
L_116849b0:;
  /* 116849b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116849b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116849b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116849b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 116849b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116849ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116849bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116849be jb 0x1168494c */
  if (C.cf) goto L_1168494c;
  /* 116849c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116849c2 jmp dword ptr [edx*4 + 0x11684a38] */
  switch (EDX) {
    case 0: goto L_11684a48;
    case 1: goto L_11684a50;
    case 2: goto L_11684a5c;
    case 3: goto L_11684a70;
    default: x86_unimpl("switch@0x116849c2 out of table"); return;
  }
  /* 116849c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116849ec:;
  /* 116849ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 116849f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_116849f4:;
  /* 116849f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 116849f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_116849fc:;
  /* 116849fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11684a00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11684a04:;
  /* 11684a04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11684a08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11684a0c:;
  /* 11684a0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11684a10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11684a14:;
  /* 11684a14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11684a18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11684a1c:;
  /* 11684a1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11684a20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11684a24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11684a2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11684a2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11684a2f:;
  /* 11684a2f jmp dword ptr [edx*4 + 0x11684a38] */
  switch (EDX) {
    case 0: goto L_11684a48;
    case 1: goto L_11684a50;
    case 2: goto L_11684a5c;
    case 3: goto L_11684a70;
    default: x86_unimpl("switch@0x11684a2f out of table"); return;
  }
  /* 11684a36 mov edi, edi */
  EDI = (EDI);
L_11684a48:;
  /* 11684a48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684a4b pop esi */
  ESI = (pop32());
  /* 11684a4c pop edi */
  EDI = (pop32());
  /* 11684a4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684a4e ret  */
  ESPCHK(0x116848f0u, _esp0);
  ESP += 4; return;
  /* 11684a4f nop  */
  /* nop */
L_11684a50:;
  /* 11684a50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11684a52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11684a54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684a57 pop esi */
  ESI = (pop32());
  /* 11684a58 pop edi */
  EDI = (pop32());
  /* 11684a59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684a5a ret  */
  ESPCHK(0x116848f0u, _esp0);
  ESP += 4; return;
  /* 11684a5b nop  */
  /* nop */
L_11684a5c:;
  /* 11684a5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11684a5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11684a60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11684a63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11684a66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684a69 pop esi */
  ESI = (pop32());
  /* 11684a6a pop edi */
  EDI = (pop32());
  /* 11684a6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684a6c ret  */
  ESPCHK(0x116848f0u, _esp0);
  ESP += 4; return;
  /* 11684a6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11684a70:;
  /* 11684a70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11684a72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11684a74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11684a77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11684a7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11684a7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11684a80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684a83 pop esi */
  ESI = (pop32());
  /* 11684a84 pop edi */
  EDI = (pop32());
  /* 11684a85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684a86 ret  */
  ESPCHK(0x116848f0u, _esp0);
  ESP += 4; return;
  /* 11684a87 nop  */
  /* nop */
L_11684a88:;
  /* 11684a88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11684a8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11684a90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11684a96 jne 0x11684abc */
  if (!C.zf) goto L_11684abc;
  /* 11684a98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11684a9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11684a9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684aa1 jb 0x11684ab0 */
  if (C.cf) goto L_11684ab0;
  /* 11684aa3 std  */
  C.df=1;
  /* 11684aa4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11684aa6 cld  */
  C.df=0;
  /* 11684aa7 jmp dword ptr [edx*4 + 0x11684bd0] */
  switch (EDX) {
    case 0: goto L_11684be0;
    case 1: goto L_11684be8;
    case 2: goto L_11684bf8;
    case 3: goto L_11684c0c;
    default: x86_unimpl("switch@0x11684aa7 out of table"); return;
  }
  /* 11684aae mov edi, edi */
  EDI = (EDI);
L_11684ab0:;
  /* 11684ab0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11684ab2 jmp dword ptr [ecx*4 + 0x11684b80] */
  switch (ECX) {
    case 0: goto L_11684bc7;
    default: x86_unimpl("switch@0x11684ab2 out of table"); return;
  }
  /* 11684ab9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11684abc:;
  /* 11684abc mov eax, edi */
  EAX = (EDI);
  /* 11684abe mov edx, 3 */
  EDX = (0x3u);
  /* 11684ac3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684ac6 jb 0x11684ad4 */
  if (C.cf) goto L_11684ad4;
  /* 11684ac8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11684acb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684acd jmp dword ptr [eax*4 + 0x11684ad8] */
  switch (EAX) {
    case 1: goto L_11684ae8;
    case 2: goto L_11684b08;
    case 3: goto L_11684b30;
    default: x86_unimpl("switch@0x11684acd out of table"); return;
  }
L_11684ad4:;
  /* 11684ad4 jmp dword ptr [ecx*4 + 0x11684bd0] */
  switch (ECX) {
    case 0: goto L_11684be0;
    case 1: goto L_11684be8;
    case 2: goto L_11684bf8;
    case 3: goto L_11684c0c;
    default: x86_unimpl("switch@0x11684ad4 out of table"); return;
  }
  /* 11684adb nop  */
  /* nop */
L_11684ae8:;
  /* 11684ae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11684aeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11684aed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11684af0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11684af1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11684af4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11684af5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684af8 jb 0x11684ab0 */
  if (C.cf) goto L_11684ab0;
  /* 11684afa std  */
  C.df=1;
  /* 11684afb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11684afd cld  */
  C.df=0;
  /* 11684afe jmp dword ptr [edx*4 + 0x11684bd0] */
  switch (EDX) {
    case 0: goto L_11684be0;
    case 1: goto L_11684be8;
    case 2: goto L_11684bf8;
    case 3: goto L_11684c0c;
    default: x86_unimpl("switch@0x11684afe out of table"); return;
  }
  /* 11684b05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11684b08:;
  /* 11684b08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11684b0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11684b0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11684b10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11684b13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11684b16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11684b19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684b1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684b1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684b22 jb 0x11684ab0 */
  if (C.cf) goto L_11684ab0;
  /* 11684b24 std  */
  C.df=1;
  /* 11684b25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11684b27 cld  */
  C.df=0;
  /* 11684b28 jmp dword ptr [edx*4 + 0x11684bd0] */
  switch (EDX) {
    case 0: goto L_11684be0;
    case 1: goto L_11684be8;
    case 2: goto L_11684bf8;
    case 3: goto L_11684c0c;
    default: x86_unimpl("switch@0x11684b28 out of table"); return;
  }
  /* 11684b2f nop  */
  /* nop */
L_11684b30:;
  /* 11684b30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11684b33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11684b35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11684b38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11684b3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11684b3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11684b41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11684b44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11684b47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684b4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684b4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684b50 jb 0x11684ab0 */
  if (C.cf) goto L_11684ab0;
  /* 11684b56 std  */
  C.df=1;
  /* 11684b57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11684b59 cld  */
  C.df=0;
  /* 11684b5a jmp dword ptr [edx*4 + 0x11684bd0] */
  switch (EDX) {
    case 0: goto L_11684be0;
    case 1: goto L_11684be8;
    case 2: goto L_11684bf8;
    case 3: goto L_11684c0c;
    default: x86_unimpl("switch@0x11684b5a out of table"); return;
  }
  /* 11684b61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11684b64 test byte ptr [ebx + 0x68], cl */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x68)))&(CL); fl_logic(_r,8); }
  /* 11684b67 adc dword ptr [ebx + ecx*2 + 0x4b941168], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*2 + 0x4b941168))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*2 + 0x4b941168), (_r)); fl_add(_a,_b,_r,32); }
  /* 11684b6e push 0x684b9c11 */
  push32((uint32_t)(0x684b9c11u));
  /* 11684b73 adc dword ptr [ebx + ecx*2 + 0x4bac1168], esp */
  { uint32_t _a=(r32((uint32_t)(EBX + ECX*2 + 0x4bac1168))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EBX + ECX*2 + 0x4bac1168), (_r)); fl_add(_a,_b,_r,32); }
  /* 11684b7a push 0x684bb411 */
  push32((uint32_t)(0x684bb411u));
  /* 11684b84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11684b88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11684b8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11684b90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11684b94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11684b98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11684b9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11684ba0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11684ba4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11684ba8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11684bac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11684bb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11684bb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11684bb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11684bbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11684bc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11684bc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11684bc7:;
  /* 11684bc7 jmp dword ptr [edx*4 + 0x11684bd0] */
  switch (EDX) {
    case 0: goto L_11684be0;
    case 1: goto L_11684be8;
    case 2: goto L_11684bf8;
    case 3: goto L_11684c0c;
    default: x86_unimpl("switch@0x11684bc7 out of table"); return;
  }
  /* 11684bce mov edi, edi */
  EDI = (EDI);
L_11684be0:;
  /* 11684be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684be3 pop esi */
  ESI = (pop32());
  /* 11684be4 pop edi */
  EDI = (pop32());
  /* 11684be5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684be6 ret  */
  ESPCHK(0x116848f0u, _esp0);
  ESP += 4; return;
  /* 11684be7 nop  */
  /* nop */
L_11684be8:;
  /* 11684be8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11684beb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11684bee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684bf1 pop esi */
  ESI = (pop32());
  /* 11684bf2 pop edi */
  EDI = (pop32());
  /* 11684bf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684bf4 ret  */
  ESPCHK(0x116848f0u, _esp0);
  ESP += 4; return;
  /* 11684bf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11684bf8:;
  /* 11684bf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11684bfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11684bfe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11684c01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11684c04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684c07 pop esi */
  ESI = (pop32());
  /* 11684c08 pop edi */
  EDI = (pop32());
  /* 11684c09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684c0a ret  */
  ESPCHK(0x116848f0u, _esp0);
  ESP += 4; return;
  /* 11684c0b nop  */
  /* nop */
L_11684c0c:;
  /* 11684c0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11684c0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11684c12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11684c15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11684c18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11684c1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11684c1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11684c21 pop esi */
  ESI = (pop32());
  /* 11684c22 pop edi */
  EDI = (pop32());
  /* 11684c23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684c24 ret  */
  ESPCHK(0x116848f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11684c30 (123 bytes, 44 insns) */
void f_11684c30(void) {
  FTRACE(0x11684c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684c30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11684c34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11684c3a je 0x11684c50 */
  if (C.zf) goto L_11684c50;
L_11684c3c:;
  /* 11684c3c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11684c3e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11684c3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11684c41 je 0x11684c83 */
  if (C.zf) goto L_11684c83;
  /* 11684c43 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11684c49 jne 0x11684c3c */
  if (!C.zf) goto L_11684c3c;
  /* 11684c4b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11684c50:;
  /* 11684c50 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11684c52 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11684c57 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684c59 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11684c5c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11684c5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684c61 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11684c66 je 0x11684c50 */
  if (C.zf) goto L_11684c50;
  /* 11684c68 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11684c6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11684c6d je 0x11684ca1 */
  if (C.zf) goto L_11684ca1;
  /* 11684c6f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11684c71 je 0x11684c97 */
  if (C.zf) goto L_11684c97;
  /* 11684c73 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11684c78 je 0x11684c8d */
  if (C.zf) goto L_11684c8d;
  /* 11684c7a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11684c7f je 0x11684c83 */
  if (C.zf) goto L_11684c83;
  /* 11684c81 jmp 0x11684c50 */
  goto L_11684c50;
L_11684c83:;
  /* 11684c83 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11684c86 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11684c8a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684c8c ret  */
  ESPCHK(0x11684c30u, _esp0);
  ESP += 4; return;
L_11684c8d:;
  /* 11684c8d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11684c90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11684c94 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684c96 ret  */
  ESPCHK(0x11684c30u, _esp0);
  ESP += 4; return;
L_11684c97:;
  /* 11684c97 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11684c9a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11684c9e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684ca0 ret  */
  ESPCHK(0x11684c30u, _esp0);
  ESP += 4; return;
L_11684ca1:;
  /* 11684ca1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11684ca4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11684ca8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684caa ret  */
  ESPCHK(0x11684c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cb4 @ 0x11684cb4 (46 bytes, 13 insns) */
void f_11684cb4(void) {
  FTRACE(0x11684cb4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684cb4 cmp dword ptr [0x1168a260], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684cbb jne 0x11684ce1 */
  if (!C.zf) goto L_11684ce1;
  /* 11684cbd push 0xb */
  push32((uint32_t)(0xbu));
  /* 11684cbf call 0x116832ad */
  push32(0x11684cc4u); f_116832ad();
  /* 11684cc4 cmp dword ptr [0x1168a260], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684ccb pop ecx */
  ECX = (pop32());
  /* 11684ccc jne 0x11684cd9 */
  if (!C.zf) goto L_11684cd9;
  /* 11684cce call 0x11684ce2 */
  push32(0x11684cd3u); f_11684ce2();
  /* 11684cd3 inc dword ptr [0x1168a260] */
  { uint32_t _r=(r32((uint32_t)(0x1168a260)))+1; w32((uint32_t)(0x1168a260), (_r)); fl_inc(_r,32); }
L_11684cd9:;
  /* 11684cd9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11684cdb call 0x1168330e */
  push32(0x11684ce0u); f_1168330e();
  /* 11684ce0 pop ecx */
  ECX = (pop32());
L_11684ce1:;
  /* 11684ce1 ret  */
  ESPCHK(0x11684cb4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ce2 @ 0x11684ce2 (647 bytes, 207 insns) */
void f_11684ce2(void) {
  FTRACE(0x11684ce2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684ce2 push ebp */
  push32((uint32_t)(EBP));
  /* 11684ce3 mov ebp, esp */
  EBP = (ESP);
  /* 11684ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 11684ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 11684ce7 push ebx */
  push32((uint32_t)(EBX));
  /* 11684ce8 push esi */
  push32((uint32_t)(ESI));
  /* 11684ce9 push edi */
  push32((uint32_t)(EDI));
  /* 11684cea push 0xc */
  push32((uint32_t)(0xcu));
  /* 11684cec pop edi */
  EDI = (pop32());
  /* 11684ced xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11684cef push edi */
  push32((uint32_t)(EDI));
  /* 11684cf0 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11684cf3 call 0x116832ad */
  push32(0x11684cf8u); f_116832ad();
  /* 11684cf8 or dword ptr [0x116896b8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x116896b8)))|(0xffffffffu); w32((uint32_t)(0x116896b8), (_r)); fl_logic(_r,32); }
  /* 11684cff or dword ptr [0x116896a8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x116896a8)))|(0xffffffffu); w32((uint32_t)(0x116896a8), (_r)); fl_logic(_r,32); }
  /* 11684d06 mov dword ptr [0x1168a1a8], ebx */
  w32((uint32_t)(0x1168a1a8), (EBX));
  /* 11684d0c mov dword ptr [esp], 0x11688500 */
  w32((uint32_t)(ESP), (0x11688500u));
  /* 11684d13 call 0x116868b4 */
  push32(0x11684d18u); f_116868b4();
  /* 11684d18 mov esi, eax */
  ESI = (EAX);
  /* 11684d1a pop ecx */
  ECX = (pop32());
  /* 11684d1b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684d1d jne 0x11684e20 */
  if (!C.zf) goto L_11684e20;
  /* 11684d23 push edi */
  push32((uint32_t)(EDI));
  /* 11684d24 call 0x1168330e */
  push32(0x11684d29u); f_1168330e();
  /* 11684d29 mov dword ptr [esp], 0x1168a1b0 */
  w32((uint32_t)(ESP), (0x1168a1b0u));
  /* 11684d30 call dword ptr [0x11688060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688060))), 0x11684d36u);
  /* 11684d36 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684d39 je 0x11684f64 */
  if (C.zf) goto L_11684f64;
  /* 11684d3f mov eax, dword ptr [0x1168a1b0] */
  EAX = (r32((uint32_t)(0x1168a1b0)));
  /* 11684d44 mov ecx, dword ptr [0x1168a204] */
  ECX = (r32((uint32_t)(0x1168a204)));
  /* 11684d4a imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11684d4d cmp word ptr [0x1168a1f6], bx */
  { uint32_t _a=(r16((uint32_t)(0x1168a1f6))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11684d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11684d56 pop edx */
  EDX = (pop32());
  /* 11684d57 mov dword ptr [0x11689610], eax */
  w32((uint32_t)(0x11689610), (EAX));
  /* 11684d5c mov dword ptr [0x1168a1a8], edx */
  w32((uint32_t)(0x1168a1a8), (EDX));
  /* 11684d62 je 0x11684d70 */
  if (C.zf) goto L_11684d70;
  /* 11684d64 mov esi, ecx */
  ESI = (ECX);
  /* 11684d66 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11684d69 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684d6b mov dword ptr [0x11689610], eax */
  w32((uint32_t)(0x11689610), (EAX));
L_11684d70:;
  /* 11684d70 cmp word ptr [0x1168a24a], bx */
  { uint32_t _a=(r16((uint32_t)(0x1168a24a))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11684d77 je 0x11684d94 */
  if (C.zf) goto L_11684d94;
  /* 11684d79 mov eax, dword ptr [0x1168a258] */
  EAX = (r32((uint32_t)(0x1168a258)));
  /* 11684d7e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684d80 je 0x11684d94 */
  if (C.zf) goto L_11684d94;
  /* 11684d82 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11684d84 mov dword ptr [0x11689614], edx */
  w32((uint32_t)(0x11689614), (EDX));
  /* 11684d8a imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11684d8d mov dword ptr [0x11689618], eax */
  w32((uint32_t)(0x11689618), (EAX));
  /* 11684d92 jmp 0x11684da0 */
  goto L_11684da0;
L_11684d94:;
  /* 11684d94 mov dword ptr [0x11689614], ebx */
  w32((uint32_t)(0x11689614), (EBX));
  /* 11684d9a mov dword ptr [0x11689618], ebx */
  w32((uint32_t)(0x11689618), (EBX));
L_11684da0:;
  /* 11684da0 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11684da3 mov esi, dword ptr [0x116880c8] */
  ESI = (r32((uint32_t)(0x116880c8)));
  /* 11684da9 push eax */
  push32((uint32_t)(EAX));
  /* 11684daa push ebx */
  push32((uint32_t)(EBX));
  /* 11684dab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11684dad mov edi, 0x220 */
  EDI = (0x220u);
  /* 11684db2 push dword ptr [0x1168969c] */
  push32((uint32_t)(r32((uint32_t)(0x1168969c))));
  /* 11684db8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11684dba push 0x1168a1b4 */
  push32((uint32_t)(0x1168a1b4u));
  /* 11684dbf push edi */
  push32((uint32_t)(EDI));
  /* 11684dc0 push dword ptr [0x1168a2b0] */
  push32((uint32_t)(r32((uint32_t)(0x1168a2b0))));
  /* 11684dc6 call esi */
  call_ind((uint32_t)(ESI), 0x11684dc8u);
  /* 11684dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11684dca je 0x11684ddc */
  if (C.zf) goto L_11684ddc;
  /* 11684dcc cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684dcf jne 0x11684ddc */
  if (!C.zf) goto L_11684ddc;
  /* 11684dd1 mov eax, dword ptr [0x1168969c] */
  EAX = (r32((uint32_t)(0x1168969c)));
  /* 11684dd6 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11684dda jmp 0x11684de4 */
  goto L_11684de4;
L_11684ddc:;
  /* 11684ddc mov eax, dword ptr [0x1168969c] */
  EAX = (r32((uint32_t)(0x1168969c)));
  /* 11684de1 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_11684de4:;
  /* 11684de4 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11684de7 push eax */
  push32((uint32_t)(EAX));
  /* 11684de8 push ebx */
  push32((uint32_t)(EBX));
  /* 11684de9 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11684deb push dword ptr [0x116896a0] */
  push32((uint32_t)(r32((uint32_t)(0x116896a0))));
  /* 11684df1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11684df3 push 0x1168a208 */
  push32((uint32_t)(0x1168a208u));
  /* 11684df8 push edi */
  push32((uint32_t)(EDI));
  /* 11684df9 push dword ptr [0x1168a2b0] */
  push32((uint32_t)(r32((uint32_t)(0x1168a2b0))));
  /* 11684dff call esi */
  call_ind((uint32_t)(ESI), 0x11684e01u);
  /* 11684e01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11684e03 je 0x11684f53 */
  if (C.zf) goto L_11684f53;
  /* 11684e09 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684e0c jne 0x11684f53 */
  if (!C.zf) goto L_11684f53;
  /* 11684e12 mov eax, dword ptr [0x116896a0] */
  EAX = (r32((uint32_t)(0x116896a0)));
  /* 11684e17 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 11684e1b jmp 0x11684f64 */
  goto L_11684f64;
L_11684e20:;
  /* 11684e20 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684e23 je 0x11684f5d */
  if (C.zf) goto L_11684f5d;
  /* 11684e29 mov eax, dword ptr [0x1168a25c] */
  EAX = (r32((uint32_t)(0x1168a25c)));
  /* 11684e2e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684e30 je 0x11684e43 */
  if (C.zf) goto L_11684e43;
  /* 11684e32 push eax */
  push32((uint32_t)(EAX));
  /* 11684e33 push esi */
  push32((uint32_t)(ESI));
  /* 11684e34 call 0x11686830 */
  push32(0x11684e39u); f_11686830();
  /* 11684e39 pop ecx */
  ECX = (pop32());
  /* 11684e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11684e3c pop ecx */
  ECX = (pop32());
  /* 11684e3d je 0x11684f5d */
  if (C.zf) goto L_11684f5d;
L_11684e43:;
  /* 11684e43 push dword ptr [0x1168a25c] */
  push32((uint32_t)(r32((uint32_t)(0x1168a25c))));
  /* 11684e49 call 0x116820b4 */
  push32(0x11684e4eu); f_116820b4();
  /* 11684e4e push esi */
  push32((uint32_t)(ESI));
  /* 11684e4f call 0x11684c30 */
  push32(0x11684e54u); f_11684c30();
  /* 11684e54 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11684e55 push eax */
  push32((uint32_t)(EAX));
  /* 11684e56 call 0x116820fc */
  push32(0x11684e5bu); f_116820fc();
  /* 11684e5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11684e5e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684e60 mov dword ptr [0x1168a25c], eax */
  w32((uint32_t)(0x1168a25c), (EAX));
  /* 11684e65 je 0x11684f5d */
  if (C.zf) goto L_11684f5d;
  /* 11684e6b push esi */
  push32((uint32_t)(ESI));
  /* 11684e6c push eax */
  push32((uint32_t)(EAX));
  /* 11684e6d call 0x116847a0 */
  push32(0x11684e72u); f_116847a0();
  /* 11684e72 push edi */
  push32((uint32_t)(EDI));
  /* 11684e73 call 0x1168330e */
  push32(0x11684e78u); f_1168330e();
  /* 11684e78 push 3 */
  push32((uint32_t)(0x3u));
  /* 11684e7a push esi */
  push32((uint32_t)(ESI));
  /* 11684e7b push dword ptr [0x1168969c] */
  push32((uint32_t)(r32((uint32_t)(0x1168969c))));
  /* 11684e81 call 0x11685a30 */
  push32(0x11684e86u); f_11685a30();
  /* 11684e86 mov eax, dword ptr [0x1168969c] */
  EAX = (r32((uint32_t)(0x1168969c)));
  /* 11684e8b add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11684e8e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11684e91 and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11684e95 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684e98 jne 0x11684ea2 */
  if (!C.zf) goto L_11684ea2;
  /* 11684e9a mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11684ea1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11684ea2:;
  /* 11684ea2 push esi */
  push32((uint32_t)(ESI));
  /* 11684ea3 call 0x116867a0 */
  push32(0x11684ea8u); f_116867a0();
  /* 11684ea8 pop ecx */
  ECX = (pop32());
  /* 11684ea9 mov bl, 0x30 */
  BL = (0x30u);
  /* 11684eab mov ecx, eax */
  ECX = (EAX);
  /* 11684ead imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11684eb3 mov dword ptr [0x11689610], ecx */
  w32((uint32_t)(0x11689610), (ECX));
L_11684eb9:;
  /* 11684eb9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11684ebb cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684ebd je 0x11684ec7 */
  if (C.zf) goto L_11684ec7;
  /* 11684ebf cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684ec1 jl 0x11684eca */
  if ((C.sf!=C.of)) goto L_11684eca;
  /* 11684ec3 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684ec5 jg 0x11684eca */
  if ((!C.zf&&C.sf==C.of)) goto L_11684eca;
L_11684ec7:;
  /* 11684ec7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11684ec8 jmp 0x11684eb9 */
  goto L_11684eb9;
L_11684eca:;
  /* 11684eca cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684ecd jne 0x11684f1d */
  if (!C.zf) goto L_11684f1d;
  /* 11684ecf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11684ed0 push esi */
  push32((uint32_t)(ESI));
  /* 11684ed1 call 0x116867a0 */
  push32(0x11684ed6u); f_116867a0();
  /* 11684ed6 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11684ed9 pop ecx */
  ECX = (pop32());
  /* 11684eda mov ecx, dword ptr [0x11689610] */
  ECX = (r32((uint32_t)(0x11689610)));
  /* 11684ee0 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684ee2 mov dword ptr [0x11689610], ecx */
  w32((uint32_t)(0x11689610), (ECX));
L_11684ee8:;
  /* 11684ee8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11684eea cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684eec jl 0x11684ef5 */
  if ((C.sf!=C.of)) goto L_11684ef5;
  /* 11684eee cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684ef0 jg 0x11684ef5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11684ef5;
  /* 11684ef2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11684ef3 jmp 0x11684ee8 */
  goto L_11684ee8;
L_11684ef5:;
  /* 11684ef5 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684ef8 jne 0x11684f1d */
  if (!C.zf) goto L_11684f1d;
  /* 11684efa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11684efb push esi */
  push32((uint32_t)(ESI));
  /* 11684efc call 0x116867a0 */
  push32(0x11684f01u); f_116867a0();
  /* 11684f01 pop ecx */
  ECX = (pop32());
  /* 11684f02 mov ecx, dword ptr [0x11689610] */
  ECX = (r32((uint32_t)(0x11689610)));
  /* 11684f08 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11684f0a mov dword ptr [0x11689610], ecx */
  w32((uint32_t)(0x11689610), (ECX));
L_11684f10:;
  /* 11684f10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11684f12 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684f14 jl 0x11684f1d */
  if ((C.sf!=C.of)) goto L_11684f1d;
  /* 11684f16 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11684f18 jg 0x11684f1d */
  if ((!C.zf&&C.sf==C.of)) goto L_11684f1d;
  /* 11684f1a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11684f1b jmp 0x11684f10 */
  goto L_11684f10;
L_11684f1d:;
  /* 11684f1d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684f21 je 0x11684f2b */
  if (C.zf) goto L_11684f2b;
  /* 11684f23 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11684f25 mov dword ptr [0x11689610], ecx */
  w32((uint32_t)(0x11689610), (ECX));
L_11684f2b:;
  /* 11684f2b movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11684f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11684f30 mov dword ptr [0x11689614], eax */
  w32((uint32_t)(0x11689614), (EAX));
  /* 11684f35 je 0x11684f53 */
  if (C.zf) goto L_11684f53;
  /* 11684f37 push 3 */
  push32((uint32_t)(0x3u));
  /* 11684f39 push esi */
  push32((uint32_t)(ESI));
  /* 11684f3a push dword ptr [0x116896a0] */
  push32((uint32_t)(r32((uint32_t)(0x116896a0))));
  /* 11684f40 call 0x11685a30 */
  push32(0x11684f45u); f_11685a30();
  /* 11684f45 mov eax, dword ptr [0x116896a0] */
  EAX = (r32((uint32_t)(0x116896a0)));
  /* 11684f4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11684f4d and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 11684f51 jmp 0x11684f64 */
  goto L_11684f64;
L_11684f53:;
  /* 11684f53 mov eax, dword ptr [0x116896a0] */
  EAX = (r32((uint32_t)(0x116896a0)));
  /* 11684f58 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11684f5b jmp 0x11684f64 */
  goto L_11684f64;
L_11684f5d:;
  /* 11684f5d push edi */
  push32((uint32_t)(EDI));
  /* 11684f5e call 0x1168330e */
  push32(0x11684f63u); f_1168330e();
  /* 11684f63 pop ecx */
  ECX = (pop32());
L_11684f64:;
  /* 11684f64 pop edi */
  EDI = (pop32());
  /* 11684f65 pop esi */
  ESI = (pop32());
  /* 11684f66 pop ebx */
  EBX = (pop32());
  /* 11684f67 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11684f68 ret  */
  ESPCHK(0x11684ce2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f69 @ 0x11684f69 (33 bytes, 12 insns) */
void f_11684f69(void) {
  FTRACE(0x11684f69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684f69 push esi */
  push32((uint32_t)(ESI));
  /* 11684f6a push 0xb */
  push32((uint32_t)(0xbu));
  /* 11684f6c call 0x116832ad */
  push32(0x11684f71u); f_116832ad();
  /* 11684f71 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11684f75 call 0x11684f8a */
  push32(0x11684f7au); f_11684f8a();
  /* 11684f7a push 0xb */
  push32((uint32_t)(0xbu));
  /* 11684f7c mov esi, eax */
  ESI = (EAX);
  /* 11684f7e call 0x1168330e */
  push32(0x11684f83u); f_1168330e();
  /* 11684f83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11684f86 mov eax, esi */
  EAX = (ESI);
  /* 11684f88 pop esi */
  ESI = (pop32());
  /* 11684f89 ret  */
  ESPCHK(0x11684f69u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f8a @ 0x11684f8a (428 bytes, 149 insns) */
void f_11684f8a(void) {
  FTRACE(0x11684f8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11684f8a push ebx */
  push32((uint32_t)(EBX));
  /* 11684f8b push esi */
  push32((uint32_t)(ESI));
  /* 11684f8c push edi */
  push32((uint32_t)(EDI));
  /* 11684f8d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11684f8f cmp dword ptr [0x11689614], edi */
  { uint32_t _a=(r32((uint32_t)(0x11689614))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684f95 jne 0x11684f9e */
  if (!C.zf) goto L_11684f9e;
L_11684f97:;
  /* 11684f97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11684f99 jmp 0x116850ea */
  goto L_116850ea;
L_11684f9e:;
  /* 11684f9e mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11684fa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11684fa4 pop ebx */
  EBX = (pop32());
  /* 11684fa5 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11684fa8 cmp eax, dword ptr [0x116896a8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116896a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684fae jne 0x11684fbc */
  if (!C.zf) goto L_11684fbc;
  /* 11684fb0 cmp eax, dword ptr [0x116896b8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116896b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684fb6 je 0x116850be */
  if (C.zf) goto L_116850be;
L_11684fbc:;
  /* 11684fbc cmp dword ptr [0x1168a1a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x1168a1a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11684fc2 je 0x11685094 */
  if (C.zf) goto L_11685094;
  /* 11684fc8 movzx ecx, word ptr [0x1168a256] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1168a256))));
  /* 11684fcf push ecx */
  push32((uint32_t)(ECX));
  /* 11684fd0 cmp word ptr [0x1168a248], di */
  { uint32_t _a=(r16((uint32_t)(0x1168a248))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11684fd7 movzx ecx, word ptr [0x1168a254] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1168a254))));
  /* 11684fde push ecx */
  push32((uint32_t)(ECX));
  /* 11684fdf movzx ecx, word ptr [0x1168a252] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1168a252))));
  /* 11684fe6 push ecx */
  push32((uint32_t)(ECX));
  /* 11684fe7 movzx ecx, word ptr [0x1168a250] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1168a250))));
  /* 11684fee push ecx */
  push32((uint32_t)(ECX));
  /* 11684fef jne 0x1168500e */
  if (!C.zf) goto L_1168500e;
  /* 11684ff1 movzx ecx, word ptr [0x1168a24c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1168a24c))));
  /* 11684ff8 push edi */
  push32((uint32_t)(EDI));
  /* 11684ff9 push ecx */
  push32((uint32_t)(ECX));
  /* 11684ffa movzx ecx, word ptr [0x1168a24e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1168a24e))));
  /* 11685001 push ecx */
  push32((uint32_t)(ECX));
  /* 11685002 movzx ecx, word ptr [0x1168a24a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1168a24a))));
  /* 11685009 push ecx */
  push32((uint32_t)(ECX));
  /* 1168500a push eax */
  push32((uint32_t)(EAX));
  /* 1168500b push ebx */
  push32((uint32_t)(EBX));
  /* 1168500c jmp 0x11685022 */
  goto L_11685022;
L_1168500e:;
  /* 1168500e movzx ecx, word ptr [0x1168a24e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1168a24e))));
  /* 11685015 push ecx */
  push32((uint32_t)(ECX));
  /* 11685016 push edi */
  push32((uint32_t)(EDI));
  /* 11685017 movzx ecx, word ptr [0x1168a24a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1168a24a))));
  /* 1168501e push edi */
  push32((uint32_t)(EDI));
  /* 1168501f push ecx */
  push32((uint32_t)(ECX));
  /* 11685020 push eax */
  push32((uint32_t)(EAX));
  /* 11685021 push edi */
  push32((uint32_t)(EDI));
L_11685022:;
  /* 11685022 push ebx */
  push32((uint32_t)(EBX));
  /* 11685023 call 0x11685136 */
  push32(0x11685028u); f_11685136();
  /* 11685028 movzx eax, word ptr [0x1168a202] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1168a202))));
  /* 1168502f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11685032 cmp word ptr [0x1168a1f4], di */
  { uint32_t _a=(r16((uint32_t)(0x1168a1f4))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11685039 push eax */
  push32((uint32_t)(EAX));
  /* 1168503a movzx eax, word ptr [0x1168a200] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1168a200))));
  /* 11685041 push eax */
  push32((uint32_t)(EAX));
  /* 11685042 movzx eax, word ptr [0x1168a1fe] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1168a1fe))));
  /* 11685049 push eax */
  push32((uint32_t)(EAX));
  /* 1168504a movzx eax, word ptr [0x1168a1fc] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1168a1fc))));
  /* 11685051 push eax */
  push32((uint32_t)(EAX));
  /* 11685052 jne 0x1168507c */
  if (!C.zf) goto L_1168507c;
  /* 11685054 movzx eax, word ptr [0x1168a1f8] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1168a1f8))));
  /* 1168505b push edi */
  push32((uint32_t)(EDI));
  /* 1168505c push eax */
  push32((uint32_t)(EAX));
  /* 1168505d movzx eax, word ptr [0x1168a1fa] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1168a1fa))));
  /* 11685064 push eax */
  push32((uint32_t)(EAX));
  /* 11685065 movzx eax, word ptr [0x1168a1f6] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1168a1f6))));
  /* 1168506c push eax */
  push32((uint32_t)(EAX));
  /* 1168506d push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11685070 push ebx */
  push32((uint32_t)(EBX));
L_11685071:;
  /* 11685071 push edi */
  push32((uint32_t)(EDI));
  /* 11685072 call 0x11685136 */
  push32(0x11685077u); f_11685136();
  /* 11685077 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168507a jmp 0x116850be */
  goto L_116850be;
L_1168507c:;
  /* 1168507c movzx eax, word ptr [0x1168a1fa] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1168a1fa))));
  /* 11685083 push eax */
  push32((uint32_t)(EAX));
  /* 11685084 push edi */
  push32((uint32_t)(EDI));
  /* 11685085 movzx eax, word ptr [0x1168a1f6] */
  EAX = ((uint32_t)(r16((uint32_t)(0x1168a1f6))));
  /* 1168508c push edi */
  push32((uint32_t)(EDI));
  /* 1168508d push eax */
  push32((uint32_t)(EAX));
  /* 1168508e push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11685091 push edi */
  push32((uint32_t)(EDI));
  /* 11685092 jmp 0x11685071 */
  goto L_11685071;
L_11685094:;
  /* 11685094 push edi */
  push32((uint32_t)(EDI));
  /* 11685095 push edi */
  push32((uint32_t)(EDI));
  /* 11685096 push edi */
  push32((uint32_t)(EDI));
  /* 11685097 push 2 */
  push32((uint32_t)(0x2u));
  /* 11685099 push edi */
  push32((uint32_t)(EDI));
  /* 1168509a push edi */
  push32((uint32_t)(EDI));
  /* 1168509b push ebx */
  push32((uint32_t)(EBX));
  /* 1168509c push 4 */
  push32((uint32_t)(0x4u));
  /* 1168509e push eax */
  push32((uint32_t)(EAX));
  /* 1168509f push ebx */
  push32((uint32_t)(EBX));
  /* 116850a0 push ebx */
  push32((uint32_t)(EBX));
  /* 116850a1 call 0x11685136 */
  push32(0x116850a6u); f_11685136();
  /* 116850a6 push edi */
  push32((uint32_t)(EDI));
  /* 116850a7 push edi */
  push32((uint32_t)(EDI));
  /* 116850a8 push edi */
  push32((uint32_t)(EDI));
  /* 116850a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 116850ab push edi */
  push32((uint32_t)(EDI));
  /* 116850ac push edi */
  push32((uint32_t)(EDI));
  /* 116850ad push 5 */
  push32((uint32_t)(0x5u));
  /* 116850af push 0xa */
  push32((uint32_t)(0xau));
  /* 116850b1 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 116850b4 push ebx */
  push32((uint32_t)(EBX));
  /* 116850b5 push edi */
  push32((uint32_t)(EDI));
  /* 116850b6 call 0x11685136 */
  push32(0x116850bbu); f_11685136();
  /* 116850bb add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_116850be:;
  /* 116850be mov edx, dword ptr [0x116896ac] */
  EDX = (r32((uint32_t)(0x116896ac)));
  /* 116850c4 mov eax, dword ptr [0x116896bc] */
  EAX = (r32((uint32_t)(0x116896bc)));
  /* 116850c9 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 116850cc cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116850ce jge 0x116850ee */
  if ((C.sf==C.of)) goto L_116850ee;
  /* 116850d0 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116850d2 jl 0x11684f97 */
  if ((C.sf!=C.of)) goto L_11684f97;
  /* 116850d8 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116850da jg 0x11684f97 */
  if ((!C.zf&&C.sf==C.of)) goto L_11684f97;
  /* 116850e0 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116850e2 jle 0x11685102 */
  if ((C.zf||C.sf!=C.of)) goto L_11685102;
  /* 116850e4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116850e6 jge 0x11685102 */
  if ((C.sf==C.of)) goto L_11685102;
L_116850e8:;
  /* 116850e8 mov eax, ebx */
  EAX = (EBX);
L_116850ea:;
  /* 116850ea pop edi */
  EDI = (pop32());
  /* 116850eb pop esi */
  ESI = (pop32());
  /* 116850ec pop ebx */
  EBX = (pop32());
  /* 116850ed ret  */
  ESPCHK(0x11684f8au, _esp0);
  ESP += 4; return;
L_116850ee:;
  /* 116850ee cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116850f0 jl 0x116850e8 */
  if ((C.sf!=C.of)) goto L_116850e8;
  /* 116850f2 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116850f4 jg 0x116850e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_116850e8;
  /* 116850f6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116850f8 jle 0x11685102 */
  if ((C.zf||C.sf!=C.of)) goto L_11685102;
  /* 116850fa cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116850fc jl 0x11684f97 */
  if ((C.sf!=C.of)) goto L_11684f97;
L_11685102:;
  /* 11685102 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11685105 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11685108 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168510b imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1168510e add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685110 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11685116 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685118 jne 0x11685129 */
  if (!C.zf) goto L_11685129;
  /* 1168511a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1168511c cmp eax, dword ptr [0x116896b0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116896b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685122 setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_11685125:;
  /* 11685125 mov eax, ecx */
  EAX = (ECX);
  /* 11685127 jmp 0x116850ea */
  goto L_116850ea;
L_11685129:;
  /* 11685129 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1168512b cmp eax, dword ptr [0x116896c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x116896c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685131 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11685134 jmp 0x11685125 */
  goto L_11685125;
}

/* FUN_10005136 @ 0x11685136 (320 bytes, 101 insns) */
void f_11685136(void) {
  FTRACE(0x11685136u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685136 push ebp */
  push32((uint32_t)(EBP));
  /* 11685137 mov ebp, esp */
  EBP = (ESP);
  /* 11685139 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168513d push ebx */
  push32((uint32_t)(EBX));
  /* 1168513e mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11685141 push esi */
  push32((uint32_t)(ESI));
  /* 11685142 jne 0x116851d1 */
  if (!C.zf) goto L_116851d1;
  /* 11685148 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1168514b mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 1168514e and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11685152 mov esi, eax */
  ESI = (EAX);
  /* 11685154 jne 0x11685161 */
  if (!C.zf) goto L_11685161;
  /* 11685156 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11685159 mov eax, dword ptr [esi + 0x116896c0] */
  EAX = (r32((uint32_t)(ESI + 0x116896c0)));
  /* 1168515f jmp 0x1168516a */
  goto L_1168516a;
L_11685161:;
  /* 11685161 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11685164 mov eax, dword ptr [esi + 0x116896f4] */
  EAX = (r32((uint32_t)(ESI + 0x116896f4)));
L_1168516a:;
  /* 1168516a mov edx, ebx */
  EDX = (EBX);
  /* 1168516c lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 1168516f imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11685175 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 11685178 push edi */
  push32((uint32_t)(EDI));
  /* 11685179 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1168517c mov edi, ecx */
  EDI = (ECX);
  /* 1168517e push 7 */
  push32((uint32_t)(0x7u));
  /* 11685180 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11685182 lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 11685189 pop edi */
  EDI = (pop32());
  /* 1168518a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1168518b idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1168518d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11685190 pop edi */
  EDI = (pop32());
  /* 11685191 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685194 jge 0x116851a4 */
  if ((C.sf==C.of)) goto L_116851a4;
  /* 11685196 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11685199 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168519b add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168519e lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 116851a2 jmp 0x116851ae */
  goto L_116851ae;
L_116851a4:;
  /* 116851a4 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116851a7 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116851a9 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116851ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_116851ae:;
  /* 116851ae cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116851b2 jne 0x116851ec */
  if (!C.zf) goto L_116851ec;
  /* 116851b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116851b8 jne 0x116851c2 */
  if (!C.zf) goto L_116851c2;
  /* 116851ba mov esi, dword ptr [esi + 0x116896c4] */
  ESI = (r32((uint32_t)(ESI + 0x116896c4)));
  /* 116851c0 jmp 0x116851c8 */
  goto L_116851c8;
L_116851c2:;
  /* 116851c2 mov esi, dword ptr [esi + 0x116896f8] */
  ESI = (r32((uint32_t)(ESI + 0x116896f8)));
L_116851c8:;
  /* 116851c8 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116851ca jle 0x116851ec */
  if ((C.zf||C.sf!=C.of)) goto L_116851ec;
  /* 116851cc sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116851cf jmp 0x116851ec */
  goto L_116851ec;
L_116851d1:;
  /* 116851d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 116851d4 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 116851d7 jne 0x116851e2 */
  if (!C.zf) goto L_116851e2;
  /* 116851d9 mov ecx, dword ptr [eax*4 + 0x116896c0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116896c0)));
  /* 116851e0 jmp 0x116851e9 */
  goto L_116851e9;
L_116851e2:;
  /* 116851e2 mov ecx, dword ptr [eax*4 + 0x116896f4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x116896f4)));
L_116851e9:;
  /* 116851e9 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_116851ec:;
  /* 116851ec cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116851f0 jne 0x1168521d */
  if (!C.zf) goto L_1168521d;
  /* 116851f2 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 116851f5 mov dword ptr [0x116896ac], ecx */
  w32((uint32_t)(0x116896ac), (ECX));
  /* 116851fb imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 116851fe add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685201 mov dword ptr [0x116896a8], ebx */
  w32((uint32_t)(0x116896a8), (EBX));
  /* 11685207 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1168520a add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168520d imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11685213 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685216 mov dword ptr [0x116896b0], eax */
  w32((uint32_t)(0x116896b0), (EAX));
  /* 1168521b jmp 0x11685272 */
  goto L_11685272;
L_1168521d:;
  /* 1168521d mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11685220 mov dword ptr [0x116896bc], ecx */
  w32((uint32_t)(0x116896bc), (ECX));
  /* 11685226 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11685229 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168522c imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1168522f add eax, dword ptr [0x11689618] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11689618))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685235 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685238 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1168523e add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685241 mov dword ptr [0x116896c0], eax */
  w32((uint32_t)(0x116896c0), (EAX));
  /* 11685246 jns 0x11685255 */
  if (!C.sf) goto L_11685255;
  /* 11685248 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168524d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1168524e mov dword ptr [0x116896c0], eax */
  w32((uint32_t)(0x116896c0), (EAX));
  /* 11685253 jmp 0x11685266 */
  goto L_11685266;
L_11685255:;
  /* 11685255 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 1168525a cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168525c jl 0x1168526c */
  if ((C.sf!=C.of)) goto L_1168526c;
  /* 1168525e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11685260 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11685261 mov dword ptr [0x116896c0], eax */
  w32((uint32_t)(0x116896c0), (EAX));
L_11685266:;
  /* 11685266 mov dword ptr [0x116896bc], ecx */
  w32((uint32_t)(0x116896bc), (ECX));
L_1168526c:;
  /* 1168526c mov dword ptr [0x116896b8], ebx */
  w32((uint32_t)(0x116896b8), (EBX));
L_11685272:;
  /* 11685272 pop esi */
  ESI = (pop32());
  /* 11685273 pop ebx */
  EBX = (pop32());
  /* 11685274 pop ebp */
  EBP = (pop32());
  /* 11685275 ret  */
  ESPCHK(0x11685136u, _esp0);
  ESP += 4; return;
}

/* FUN_10005276 @ 0x11685276 (429 bytes, 143 insns) */
void f_11685276(void) {
  FTRACE(0x11685276u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685276 push ebp */
  push32((uint32_t)(EBP));
  /* 11685277 mov ebp, esp */
  EBP = (ESP);
  /* 11685279 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168527c push ebx */
  push32((uint32_t)(EBX));
  /* 1168527d push esi */
  push32((uint32_t)(ESI));
  /* 1168527e push edi */
  push32((uint32_t)(EDI));
  /* 1168527f push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11685281 call 0x116832ad */
  push32(0x11685286u); f_116832ad();
  /* 11685286 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11685289 call 0x11685423 */
  push32(0x1168528eu); f_11685423();
  /* 1168528e mov ebx, eax */
  EBX = (EAX);
  /* 11685290 pop ecx */
  ECX = (pop32());
  /* 11685291 cmp ebx, dword ptr [0x1168a344] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1168a344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685297 pop ecx */
  ECX = (pop32());
  /* 11685298 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1168529b jne 0x116852a4 */
  if (!C.zf) goto L_116852a4;
L_1168529d:;
  /* 1168529d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1168529f jmp 0x11685414 */
  goto L_11685414;
L_116852a4:;
  /* 116852a4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 116852a6 je 0x11685402 */
  if (C.zf) goto L_11685402;
  /* 116852ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116852ae mov eax, 0x11689738 */
  EAX = (0x11689738u);
L_116852b3:;
  /* 116852b3 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116852b5 je 0x1168532b */
  if (C.zf) goto L_1168532b;
  /* 116852b7 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 116852ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 116852bb cmp eax, 0x11689828 */
  { uint32_t _a=(EAX),_b=(0x11689828u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116852c0 jl 0x116852b3 */
  if ((C.sf!=C.of)) goto L_116852b3;
  /* 116852c2 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 116852c5 push eax */
  push32((uint32_t)(EAX));
  /* 116852c6 push ebx */
  push32((uint32_t)(EBX));
  /* 116852c7 call dword ptr [0x11688034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688034))), 0x116852cdu);
  /* 116852cd push 1 */
  push32((uint32_t)(0x1u));
  /* 116852cf pop esi */
  ESI = (pop32());
  /* 116852d0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116852d2 jne 0x116853f9 */
  if (!C.zf) goto L_116853f9;
  /* 116852d8 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116852da and dword ptr [0x1168a564], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1168a564)))&(0x0u); w32((uint32_t)(0x1168a564), (_r)); fl_logic(_r,32); }
  /* 116852e1 pop ecx */
  ECX = (pop32());
  /* 116852e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116852e4 mov edi, 0x1168a460 */
  EDI = (0x1168a460u);
  /* 116852e9 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116852ec rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116852ee stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 116852ef mov dword ptr [0x1168a344], ebx */
  w32((uint32_t)(0x1168a344), (EBX));
  /* 116852f5 jbe 0x116853e6 */
  if ((C.cf||C.zf)) goto L_116853e6;
  /* 116852fb cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116852ff je 0x116853c1 */
  if (C.zf) goto L_116853c1;
  /* 11685305 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11685308:;
  /* 11685308 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1168530a test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1168530c je 0x116853c1 */
  if (C.zf) goto L_116853c1;
  /* 11685312 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11685316 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11685319:;
  /* 11685319 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168531b ja 0x116853b5 */
  if ((!C.cf&&!C.zf)) goto L_116853b5;
  /* 11685321 or byte ptr [eax + 0x1168a461], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a461)))|(0x4u); w8((uint32_t)(EAX + 0x1168a461), (_r)); fl_logic(_r,8); }
  /* 11685328 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11685329 jmp 0x11685319 */
  goto L_11685319;
L_1168532b:;
  /* 1168532b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1168532f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11685331 pop ecx */
  ECX = (pop32());
  /* 11685332 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11685334 mov edi, 0x1168a460 */
  EDI = (0x1168a460u);
  /* 11685339 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1168533c rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1168533e shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11685341 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11685342 lea ebx, [esi + 0x11689748] */
  EBX = ((uint32_t)(ESI + 0x11689748));
L_11685348:;
  /* 11685348 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168534b mov ecx, ebx */
  ECX = (EBX);
  /* 1168534d je 0x1168537b */
  if (C.zf) goto L_1168537b;
L_1168534f:;
  /* 1168534f mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11685352 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11685354 je 0x1168537b */
  if (C.zf) goto L_1168537b;
  /* 11685356 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11685359 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1168535c cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168535e ja 0x11685374 */
  if ((!C.cf&&!C.zf)) goto L_11685374;
  /* 11685360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11685363 mov dl, byte ptr [edx + 0x11689730] */
  DL = (r8((uint32_t)(EDX + 0x11689730)));
L_11685369:;
  /* 11685369 or byte ptr [eax + 0x1168a461], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a461)))|(DL); w8((uint32_t)(EAX + 0x1168a461), (_r)); fl_logic(_r,8); }
  /* 1168536f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11685370 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685372 jbe 0x11685369 */
  if ((C.cf||C.zf)) goto L_11685369;
L_11685374:;
  /* 11685374 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11685375 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11685376 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11685379 jne 0x1168534f */
  if (!C.zf) goto L_1168534f;
L_1168537b:;
  /* 1168537b inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1168537e add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685381 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685385 jb 0x11685348 */
  if (C.cf) goto L_11685348;
  /* 11685387 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1168538a mov dword ptr [0x1168a35c], 1 */
  w32((uint32_t)(0x1168a35c), (0x1u));
  /* 11685394 push eax */
  push32((uint32_t)(EAX));
  /* 11685395 mov dword ptr [0x1168a344], eax */
  w32((uint32_t)(0x1168a344), (EAX));
  /* 1168539a call 0x1168546d */
  push32(0x1168539fu); f_1168546d();
  /* 1168539f lea esi, [esi + 0x1168973c] */
  ESI = ((uint32_t)(ESI + 0x1168973c));
  /* 116853a5 mov edi, 0x1168a350 */
  EDI = (0x1168a350u);
  /* 116853aa movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 116853ab movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 116853ac pop ecx */
  ECX = (pop32());
  /* 116853ad mov dword ptr [0x1168a564], eax */
  w32((uint32_t)(0x1168a564), (EAX));
  /* 116853b2 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 116853b3 jmp 0x11685407 */
  goto L_11685407;
L_116853b5:;
  /* 116853b5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116853b6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116853b7 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116853bb jne 0x11685308 */
  if (!C.zf) goto L_11685308;
L_116853c1:;
  /* 116853c1 mov eax, esi */
  EAX = (ESI);
L_116853c3:;
  /* 116853c3 or byte ptr [eax + 0x1168a461], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a461)))|(0x8u); w8((uint32_t)(EAX + 0x1168a461), (_r)); fl_logic(_r,8); }
  /* 116853ca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116853cb cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116853d0 jb 0x116853c3 */
  if (C.cf) goto L_116853c3;
  /* 116853d2 push ebx */
  push32((uint32_t)(EBX));
  /* 116853d3 call 0x1168546d */
  push32(0x116853d8u); f_1168546d();
  /* 116853d8 pop ecx */
  ECX = (pop32());
  /* 116853d9 mov dword ptr [0x1168a564], eax */
  w32((uint32_t)(0x1168a564), (EAX));
  /* 116853de mov dword ptr [0x1168a35c], esi */
  w32((uint32_t)(0x1168a35c), (ESI));
  /* 116853e4 jmp 0x116853ed */
  goto L_116853ed;
L_116853e6:;
  /* 116853e6 and dword ptr [0x1168a35c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1168a35c)))&(0x0u); w32((uint32_t)(0x1168a35c), (_r)); fl_logic(_r,32); }
L_116853ed:;
  /* 116853ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116853ef mov edi, 0x1168a350 */
  EDI = (0x1168a350u);
  /* 116853f4 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 116853f5 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 116853f6 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 116853f7 jmp 0x11685407 */
  goto L_11685407;
L_116853f9:;
  /* 116853f9 cmp dword ptr [0x1168a264], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a264))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685400 je 0x11685411 */
  if (C.zf) goto L_11685411;
L_11685402:;
  /* 11685402 call 0x116854a0 */
  push32(0x11685407u); f_116854a0();
L_11685407:;
  /* 11685407 call 0x116854c9 */
  push32(0x1168540cu); f_116854c9();
  /* 1168540c jmp 0x1168529d */
  goto L_1168529d;
L_11685411:;
  /* 11685411 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11685414:;
  /* 11685414 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11685416 call 0x1168330e */
  push32(0x1168541bu); f_1168330e();
  /* 1168541b pop ecx */
  ECX = (pop32());
  /* 1168541c mov eax, esi */
  EAX = (ESI);
  /* 1168541e pop edi */
  EDI = (pop32());
  /* 1168541f pop esi */
  ESI = (pop32());
  /* 11685420 pop ebx */
  EBX = (pop32());
  /* 11685421 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11685422 ret  */
  ESPCHK(0x11685276u, _esp0);
  ESP += 4; return;
}

/* FUN_10005423 @ 0x11685423 (74 bytes, 15 insns) */
void f_11685423(void) {
  FTRACE(0x11685423u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685423 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11685427 and dword ptr [0x1168a264], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1168a264)))&(0x0u); w32((uint32_t)(0x1168a264), (_r)); fl_logic(_r,32); }
  /* 1168542e cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685431 jne 0x11685443 */
  if (!C.zf) goto L_11685443;
  /* 11685433 mov dword ptr [0x1168a264], 1 */
  w32((uint32_t)(0x1168a264), (0x1u));
  /* 1168543d jmp dword ptr [0x11688030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11688030)))); return;
L_11685443:;
  /* 11685443 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685446 jne 0x11685458 */
  if (!C.zf) goto L_11685458;
  /* 11685448 mov dword ptr [0x1168a264], 1 */
  w32((uint32_t)(0x1168a264), (0x1u));
  /* 11685452 jmp dword ptr [0x1168803c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1168803c)))); return;
L_11685458:;
  /* 11685458 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168545b jne 0x1168546c */
  if (!C.zf) goto L_1168546c;
  /* 1168545d mov eax, dword ptr [0x1168a2b0] */
  EAX = (r32((uint32_t)(0x1168a2b0)));
  /* 11685462 mov dword ptr [0x1168a264], 1 */
  w32((uint32_t)(0x1168a264), (0x1u));
L_1168546c:;
  /* 1168546c ret  */
  ESPCHK(0x11685423u, _esp0);
  ESP += 4; return;
}

/* FUN_1000546d @ 0x1168546d (51 bytes, 19 insns) */
void f_1168546d(void) {
  FTRACE(0x1168546du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168546d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11685471 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11685476 je 0x1168549a */
  if (C.zf) goto L_1168549a;
  /* 11685478 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168547b je 0x11685494 */
  if (C.zf) goto L_11685494;
  /* 1168547d sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11685480 je 0x1168548e */
  if (C.zf) goto L_1168548e;
  /* 11685482 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11685483 je 0x11685488 */
  if (C.zf) goto L_11685488;
  /* 11685485 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11685487 ret  */
  ESPCHK(0x1168546du, _esp0);
  ESP += 4; return;
L_11685488:;
  /* 11685488 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1168548d ret  */
  ESPCHK(0x1168546du, _esp0);
  ESP += 4; return;
L_1168548e:;
  /* 1168548e mov eax, 0x412 */
  EAX = (0x412u);
  /* 11685493 ret  */
  ESPCHK(0x1168546du, _esp0);
  ESP += 4; return;
L_11685494:;
  /* 11685494 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11685499 ret  */
  ESPCHK(0x1168546du, _esp0);
  ESP += 4; return;
L_1168549a:;
  /* 1168549a mov eax, 0x411 */
  EAX = (0x411u);
  /* 1168549f ret  */
  ESPCHK(0x1168546du, _esp0);
  ESP += 4; return;
}

/* FUN_100054a0 @ 0x116854a0 (41 bytes, 17 insns) */
void f_116854a0(void) {
  FTRACE(0x116854a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116854a0 push edi */
  push32((uint32_t)(EDI));
  /* 116854a1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 116854a3 pop ecx */
  ECX = (pop32());
  /* 116854a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116854a6 mov edi, 0x1168a460 */
  EDI = (0x1168a460u);
  /* 116854ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 116854ad stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 116854ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116854b0 mov edi, 0x1168a350 */
  EDI = (0x1168a350u);
  /* 116854b5 mov dword ptr [0x1168a344], eax */
  w32((uint32_t)(0x1168a344), (EAX));
  /* 116854ba mov dword ptr [0x1168a35c], eax */
  w32((uint32_t)(0x1168a35c), (EAX));
  /* 116854bf mov dword ptr [0x1168a564], eax */
  w32((uint32_t)(0x1168a564), (EAX));
  /* 116854c4 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 116854c5 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 116854c6 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 116854c7 pop edi */
  EDI = (pop32());
  /* 116854c8 ret  */
  ESPCHK(0x116854a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054c9 @ 0x116854c9 (389 bytes, 124 insns) */
void f_116854c9(void) {
  FTRACE(0x116854c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116854c9 push ebp */
  push32((uint32_t)(EBP));
  /* 116854ca mov ebp, esp */
  EBP = (ESP);
  /* 116854cc sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 116854d2 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 116854d5 push esi */
  push32((uint32_t)(ESI));
  /* 116854d6 push eax */
  push32((uint32_t)(EAX));
  /* 116854d7 push dword ptr [0x1168a344] */
  push32((uint32_t)(r32((uint32_t)(0x1168a344))));
  /* 116854dd call dword ptr [0x11688034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688034))), 0x116854e3u);
  /* 116854e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116854e6 jne 0x11685602 */
  if (!C.zf) goto L_11685602;
  /* 116854ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116854ee mov esi, 0x100 */
  ESI = (0x100u);
L_116854f3:;
  /* 116854f3 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 116854fa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116854fb cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116854fd jb 0x116854f3 */
  if (C.cf) goto L_116854f3;
  /* 116854ff mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11685502 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11685509 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1168550b je 0x11685544 */
  if (C.zf) goto L_11685544;
  /* 1168550d push ebx */
  push32((uint32_t)(EBX));
  /* 1168550e push edi */
  push32((uint32_t)(EDI));
  /* 1168550f lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11685512:;
  /* 11685512 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11685515 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11685518 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168551a ja 0x11685539 */
  if ((!C.cf&&!C.zf)) goto L_11685539;
  /* 1168551c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168551e lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11685525 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11685526 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1168552b mov ebx, ecx */
  EBX = (ECX);
  /* 1168552d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11685530 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11685532 mov ecx, ebx */
  ECX = (EBX);
  /* 11685534 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11685537 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11685539:;
  /* 11685539 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1168553a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1168553b mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1168553e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11685540 jne 0x11685512 */
  if (!C.zf) goto L_11685512;
  /* 11685542 pop edi */
  EDI = (pop32());
  /* 11685543 pop ebx */
  EBX = (pop32());
L_11685544:;
  /* 11685544 push 0 */
  push32((uint32_t)(0x0u));
  /* 11685546 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1168554c push dword ptr [0x1168a564] */
  push32((uint32_t)(r32((uint32_t)(0x1168a564))));
  /* 11685552 push dword ptr [0x1168a344] */
  push32((uint32_t)(r32((uint32_t)(0x1168a344))));
  /* 11685558 push eax */
  push32((uint32_t)(EAX));
  /* 11685559 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1168555f push esi */
  push32((uint32_t)(ESI));
  /* 11685560 push eax */
  push32((uint32_t)(EAX));
  /* 11685561 push 1 */
  push32((uint32_t)(0x1u));
  /* 11685563 call 0x11685b2e */
  push32(0x11685568u); f_11685b2e();
  /* 11685568 push 0 */
  push32((uint32_t)(0x0u));
  /* 1168556a lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11685570 push dword ptr [0x1168a344] */
  push32((uint32_t)(r32((uint32_t)(0x1168a344))));
  /* 11685576 push esi */
  push32((uint32_t)(ESI));
  /* 11685577 push eax */
  push32((uint32_t)(EAX));
  /* 11685578 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1168557e push esi */
  push32((uint32_t)(ESI));
  /* 1168557f push eax */
  push32((uint32_t)(EAX));
  /* 11685580 push esi */
  push32((uint32_t)(ESI));
  /* 11685581 push dword ptr [0x1168a564] */
  push32((uint32_t)(r32((uint32_t)(0x1168a564))));
  /* 11685587 call 0x11685c77 */
  push32(0x1168558cu); f_11685c77();
  /* 1168558c push 0 */
  push32((uint32_t)(0x0u));
  /* 1168558e lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11685594 push dword ptr [0x1168a344] */
  push32((uint32_t)(r32((uint32_t)(0x1168a344))));
  /* 1168559a push esi */
  push32((uint32_t)(ESI));
  /* 1168559b push eax */
  push32((uint32_t)(EAX));
  /* 1168559c lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 116855a2 push esi */
  push32((uint32_t)(ESI));
  /* 116855a3 push eax */
  push32((uint32_t)(EAX));
  /* 116855a4 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 116855a9 push dword ptr [0x1168a564] */
  push32((uint32_t)(r32((uint32_t)(0x1168a564))));
  /* 116855af call 0x11685c77 */
  push32(0x116855b4u); f_11685c77();
  /* 116855b4 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 116855b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116855b9 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_116855bf:;
  /* 116855bf mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 116855c2 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 116855c5 je 0x116855dd */
  if (C.zf) goto L_116855dd;
  /* 116855c7 or byte ptr [eax + 0x1168a461], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a461)))|(0x10u); w8((uint32_t)(EAX + 0x1168a461), (_r)); fl_logic(_r,8); }
  /* 116855ce mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_116855d5:;
  /* 116855d5 mov byte ptr [eax + 0x1168a360], dl */
  w8((uint32_t)(EAX + 0x1168a360), (DL));
  /* 116855db jmp 0x116855f9 */
  goto L_116855f9;
L_116855dd:;
  /* 116855dd test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 116855e0 je 0x116855f2 */
  if (C.zf) goto L_116855f2;
  /* 116855e2 or byte ptr [eax + 0x1168a461], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a461)))|(0x20u); w8((uint32_t)(EAX + 0x1168a461), (_r)); fl_logic(_r,8); }
  /* 116855e9 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 116855f0 jmp 0x116855d5 */
  goto L_116855d5;
L_116855f2:;
  /* 116855f2 and byte ptr [eax + 0x1168a360], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a360)))&(0x0u); w8((uint32_t)(EAX + 0x1168a360), (_r)); fl_logic(_r,8); }
L_116855f9:;
  /* 116855f9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 116855fa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116855fb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 116855fc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116855fe jb 0x116855bf */
  if (C.cf) goto L_116855bf;
  /* 11685600 jmp 0x1168564b */
  goto L_1168564b;
L_11685602:;
  /* 11685602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11685604 mov esi, 0x100 */
  ESI = (0x100u);
L_11685609:;
  /* 11685609 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168560c jb 0x11685627 */
  if (C.cf) goto L_11685627;
  /* 1168560e cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685611 ja 0x11685627 */
  if ((!C.cf&&!C.zf)) goto L_11685627;
  /* 11685613 or byte ptr [eax + 0x1168a461], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a461)))|(0x10u); w8((uint32_t)(EAX + 0x1168a461), (_r)); fl_logic(_r,8); }
  /* 1168561a mov cl, al */
  CL = (AL);
  /* 1168561c add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1168561f:;
  /* 1168561f mov byte ptr [eax + 0x1168a360], cl */
  w8((uint32_t)(EAX + 0x1168a360), (CL));
  /* 11685625 jmp 0x11685646 */
  goto L_11685646;
L_11685627:;
  /* 11685627 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168562a jb 0x1168563f */
  if (C.cf) goto L_1168563f;
  /* 1168562c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168562f ja 0x1168563f */
  if ((!C.cf&&!C.zf)) goto L_1168563f;
  /* 11685631 or byte ptr [eax + 0x1168a461], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a461)))|(0x20u); w8((uint32_t)(EAX + 0x1168a461), (_r)); fl_logic(_r,8); }
  /* 11685638 mov cl, al */
  CL = (AL);
  /* 1168563a sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1168563d jmp 0x1168561f */
  goto L_1168561f;
L_1168563f:;
  /* 1168563f and byte ptr [eax + 0x1168a360], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1168a360)))&(0x0u); w8((uint32_t)(EAX + 0x1168a360), (_r)); fl_logic(_r,8); }
L_11685646:;
  /* 11685646 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11685647 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685649 jb 0x11685609 */
  if (C.cf) goto L_11685609;
L_1168564b:;
  /* 1168564b pop esi */
  ESI = (pop32());
  /* 1168564c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1168564d ret  */
  ESPCHK(0x116854c9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000564e @ 0x1168564e (28 bytes, 7 insns) */
void f_1168564e(void) {
  FTRACE(0x1168564eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168564e cmp dword ptr [0x1168a6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1168a6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685655 jne 0x11685669 */
  if (!C.zf) goto L_11685669;
  /* 11685657 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11685659 call 0x11685276 */
  push32(0x1168565eu); f_11685276();
  /* 1168565e pop ecx */
  ECX = (pop32());
  /* 1168565f mov dword ptr [0x1168a6a8], 1 */
  w32((uint32_t)(0x1168a6a8), (0x1u));
L_11685669:;
  /* 11685669 ret  */
  ESPCHK(0x1168564eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005670 @ 0x11685670 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11685670(void) {
  FTRACE(0x11685670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685670 push ebp */
  push32((uint32_t)(EBP));
  /* 11685671 mov ebp, esp */
  EBP = (ESP);
  /* 11685673 push edi */
  push32((uint32_t)(EDI));
  /* 11685674 push esi */
  push32((uint32_t)(ESI));
  /* 11685675 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11685678 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1168567b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1168567e mov eax, ecx */
  EAX = (ECX);
  /* 11685680 mov edx, ecx */
  EDX = (ECX);
  /* 11685682 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685684 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685686 jbe 0x11685690 */
  if ((C.cf||C.zf)) goto L_11685690;
  /* 11685688 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168568a jb 0x11685808 */
  if (C.cf) goto L_11685808;
L_11685690:;
  /* 11685690 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11685696 jne 0x116856ac */
  if (!C.zf) goto L_116856ac;
  /* 11685698 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1168569b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1168569e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116856a1 jb 0x116856cc */
  if (C.cf) goto L_116856cc;
  /* 116856a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116856a5 jmp dword ptr [edx*4 + 0x116857b8] */
  switch (EDX) {
    case 0: goto L_116857c8;
    case 1: goto L_116857d0;
    case 2: goto L_116857dc;
    case 3: goto L_116857f0;
    default: x86_unimpl("switch@0x116856a5 out of table"); return;
  }
L_116856ac:;
  /* 116856ac mov eax, edi */
  EAX = (EDI);
  /* 116856ae mov edx, 3 */
  EDX = (0x3u);
  /* 116856b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116856b6 jb 0x116856c4 */
  if (C.cf) goto L_116856c4;
  /* 116856b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 116856bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 116856bd jmp dword ptr [eax*4 + 0x116856d0] */
  switch (EAX) {
    case 1: goto L_116856e0;
    case 2: goto L_1168570c;
    case 3: goto L_11685730;
    default: x86_unimpl("switch@0x116856bd out of table"); return;
  }
L_116856c4:;
  /* 116856c4 jmp dword ptr [ecx*4 + 0x116857c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x116857c8)))); return;
  /* 116856cb nop  */
  /* nop */
L_116856cc:;
  /* 116856cc jmp dword ptr [ecx*4 + 0x1168574c] */
  switch (ECX) {
    case 0: goto L_116857af;
    case 1: goto L_1168579c;
    case 2: goto L_11685794;
    case 3: goto L_1168578c;
    case 4: goto L_11685784;
    case 5: goto L_1168577c;
    case 6: goto L_11685774;
    case 7: goto L_1168576c;
    default: x86_unimpl("switch@0x116856cc out of table"); return;
  }
  /* 116856d3 nop  */
  /* nop */
L_116856e0:;
  /* 116856e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116856e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116856e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116856e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116856e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116856ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116856ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116856f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116856f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116856f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 116856fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116856fe jb 0x116856cc */
  if (C.cf) goto L_116856cc;
  /* 11685700 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11685702 jmp dword ptr [edx*4 + 0x116857b8] */
  switch (EDX) {
    case 0: goto L_116857c8;
    case 1: goto L_116857d0;
    case 2: goto L_116857dc;
    case 3: goto L_116857f0;
    default: x86_unimpl("switch@0x11685702 out of table"); return;
  }
  /* 11685709 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1168570c:;
  /* 1168570c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1168570e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11685710 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11685712 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11685715 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11685718 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1168571b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1168571e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11685721 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685724 jb 0x116856cc */
  if (C.cf) goto L_116856cc;
  /* 11685726 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11685728 jmp dword ptr [edx*4 + 0x116857b8] */
  switch (EDX) {
    case 0: goto L_116857c8;
    case 1: goto L_116857d0;
    case 2: goto L_116857dc;
    case 3: goto L_116857f0;
    default: x86_unimpl("switch@0x11685728 out of table"); return;
  }
  /* 1168572f nop  */
  /* nop */
L_11685730:;
  /* 11685730 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11685732 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11685734 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11685736 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11685737 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1168573a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1168573b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168573e jb 0x116856cc */
  if (C.cf) goto L_116856cc;
  /* 11685740 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11685742 jmp dword ptr [edx*4 + 0x116857b8] */
  switch (EDX) {
    case 0: goto L_116857c8;
    case 1: goto L_116857d0;
    case 2: goto L_116857dc;
    case 3: goto L_116857f0;
    default: x86_unimpl("switch@0x11685742 out of table"); return;
  }
  /* 11685749 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1168576c:;
  /* 1168576c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11685770 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11685774:;
  /* 11685774 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11685778 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1168577c:;
  /* 1168577c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11685780 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11685784:;
  /* 11685784 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11685788 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1168578c:;
  /* 1168578c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11685790 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11685794:;
  /* 11685794 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11685798 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1168579c:;
  /* 1168579c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 116857a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 116857a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 116857ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 116857ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_116857af:;
  /* 116857af jmp dword ptr [edx*4 + 0x116857b8] */
  switch (EDX) {
    case 0: goto L_116857c8;
    case 1: goto L_116857d0;
    case 2: goto L_116857dc;
    case 3: goto L_116857f0;
    default: x86_unimpl("switch@0x116857af out of table"); return;
  }
  /* 116857b6 mov edi, edi */
  EDI = (EDI);
L_116857c8:;
  /* 116857c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116857cb pop esi */
  ESI = (pop32());
  /* 116857cc pop edi */
  EDI = (pop32());
  /* 116857cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116857ce ret  */
  ESPCHK(0x11685670u, _esp0);
  ESP += 4; return;
  /* 116857cf nop  */
  /* nop */
L_116857d0:;
  /* 116857d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116857d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116857d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116857d7 pop esi */
  ESI = (pop32());
  /* 116857d8 pop edi */
  EDI = (pop32());
  /* 116857d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116857da ret  */
  ESPCHK(0x11685670u, _esp0);
  ESP += 4; return;
  /* 116857db nop  */
  /* nop */
L_116857dc:;
  /* 116857dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116857de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116857e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116857e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116857e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116857e9 pop esi */
  ESI = (pop32());
  /* 116857ea pop edi */
  EDI = (pop32());
  /* 116857eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116857ec ret  */
  ESPCHK(0x11685670u, _esp0);
  ESP += 4; return;
  /* 116857ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_116857f0:;
  /* 116857f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 116857f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 116857f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116857f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116857fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116857fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11685800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11685803 pop esi */
  ESI = (pop32());
  /* 11685804 pop edi */
  EDI = (pop32());
  /* 11685805 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11685806 ret  */
  ESPCHK(0x11685670u, _esp0);
  ESP += 4; return;
  /* 11685807 nop  */
  /* nop */
L_11685808:;
  /* 11685808 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1168580c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11685810 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11685816 jne 0x1168583c */
  if (!C.zf) goto L_1168583c;
  /* 11685818 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1168581b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1168581e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685821 jb 0x11685830 */
  if (C.cf) goto L_11685830;
  /* 11685823 std  */
  C.df=1;
  /* 11685824 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11685826 cld  */
  C.df=0;
  /* 11685827 jmp dword ptr [edx*4 + 0x11685950] */
  switch (EDX) {
    case 0: goto L_11685960;
    case 1: goto L_11685968;
    case 2: goto L_11685978;
    case 3: goto L_1168598c;
    default: x86_unimpl("switch@0x11685827 out of table"); return;
  }
  /* 1168582e mov edi, edi */
  EDI = (EDI);
L_11685830:;
  /* 11685830 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11685832 jmp dword ptr [ecx*4 + 0x11685900] */
  switch (ECX) {
    case 0: goto L_11685947;
    default: x86_unimpl("switch@0x11685832 out of table"); return;
  }
  /* 11685839 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1168583c:;
  /* 1168583c mov eax, edi */
  EAX = (EDI);
  /* 1168583e mov edx, 3 */
  EDX = (0x3u);
  /* 11685843 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685846 jb 0x11685854 */
  if (C.cf) goto L_11685854;
  /* 11685848 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1168584b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168584d jmp dword ptr [eax*4 + 0x11685858] */
  switch (EAX) {
    case 1: goto L_11685868;
    case 2: goto L_11685888;
    case 3: goto L_116858b0;
    default: x86_unimpl("switch@0x1168584d out of table"); return;
  }
L_11685854:;
  /* 11685854 jmp dword ptr [ecx*4 + 0x11685950] */
  switch (ECX) {
    case 0: goto L_11685960;
    case 1: goto L_11685968;
    case 2: goto L_11685978;
    case 3: goto L_1168598c;
    default: x86_unimpl("switch@0x11685854 out of table"); return;
  }
  /* 1168585b nop  */
  /* nop */
L_11685868:;
  /* 11685868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1168586b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1168586d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11685870 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11685871 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11685874 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11685875 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685878 jb 0x11685830 */
  if (C.cf) goto L_11685830;
  /* 1168587a std  */
  C.df=1;
  /* 1168587b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1168587d cld  */
  C.df=0;
  /* 1168587e jmp dword ptr [edx*4 + 0x11685950] */
  switch (EDX) {
    case 0: goto L_11685960;
    case 1: goto L_11685968;
    case 2: goto L_11685978;
    case 3: goto L_1168598c;
    default: x86_unimpl("switch@0x1168587e out of table"); return;
  }
  /* 11685885 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11685888:;
  /* 11685888 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1168588b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1168588d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11685890 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11685893 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11685896 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11685899 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168589c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168589f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116858a2 jb 0x11685830 */
  if (C.cf) goto L_11685830;
  /* 116858a4 std  */
  C.df=1;
  /* 116858a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116858a7 cld  */
  C.df=0;
  /* 116858a8 jmp dword ptr [edx*4 + 0x11685950] */
  switch (EDX) {
    case 0: goto L_11685960;
    case 1: goto L_11685968;
    case 2: goto L_11685978;
    case 3: goto L_1168598c;
    default: x86_unimpl("switch@0x116858a8 out of table"); return;
  }
  /* 116858af nop  */
  /* nop */
L_116858b0:;
  /* 116858b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 116858b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 116858b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 116858b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 116858bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 116858be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 116858c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 116858c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 116858c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116858ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116858cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116858d0 jb 0x11685830 */
  if (C.cf) goto L_11685830;
  /* 116858d6 std  */
  C.df=1;
  /* 116858d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 116858d9 cld  */
  C.df=0;
  /* 116858da jmp dword ptr [edx*4 + 0x11685950] */
  switch (EDX) {
    case 0: goto L_11685960;
    case 1: goto L_11685968;
    case 2: goto L_11685978;
    case 3: goto L_1168598c;
    default: x86_unimpl("switch@0x116858da out of table"); return;
  }
  /* 116858e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 116858e4 add al, 0x59 */
  { uint32_t _a=(AL),_b=(0x59u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 116858e6 push 0x68590c11 */
  push32((uint32_t)(0x68590c11u));
  /* 116858eb adc dword ptr [ecx + ebx*2], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + EBX*2))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 116858ee push 0x68591c11 */
  push32((uint32_t)(0x68591c11u));
  /* 116858f3 adc dword ptr [ecx + ebx*2], esp */
  { uint32_t _a=(r32((uint32_t)(ECX + EBX*2))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 116858f6 push 0x68592c11 */
  push32((uint32_t)(0x68592c11u));
  /* 116858fb adc dword ptr [ecx + ebx*2], esi */
  { uint32_t _a=(r32((uint32_t)(ECX + EBX*2))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11685904 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11685908 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1168590c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11685910 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11685914 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11685918 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1168591c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11685920 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11685924 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11685928 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1168592c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11685930 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11685934 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11685938 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1168593c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11685943 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11685945 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11685947:;
  /* 11685947 jmp dword ptr [edx*4 + 0x11685950] */
  switch (EDX) {
    case 0: goto L_11685960;
    case 1: goto L_11685968;
    case 2: goto L_11685978;
    case 3: goto L_1168598c;
    default: x86_unimpl("switch@0x11685947 out of table"); return;
  }
  /* 1168594e mov edi, edi */
  EDI = (EDI);
L_11685960:;
  /* 11685960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11685963 pop esi */
  ESI = (pop32());
  /* 11685964 pop edi */
  EDI = (pop32());
  /* 11685965 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11685966 ret  */
  ESPCHK(0x11685670u, _esp0);
  ESP += 4; return;
  /* 11685967 nop  */
  /* nop */
L_11685968:;
  /* 11685968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1168596b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1168596e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11685971 pop esi */
  ESI = (pop32());
  /* 11685972 pop edi */
  EDI = (pop32());
  /* 11685973 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11685974 ret  */
  ESPCHK(0x11685670u, _esp0);
  ESP += 4; return;
  /* 11685975 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11685978:;
  /* 11685978 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1168597b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1168597e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11685981 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11685984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11685987 pop esi */
  ESI = (pop32());
  /* 11685988 pop edi */
  EDI = (pop32());
  /* 11685989 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1168598a ret  */
  ESPCHK(0x11685670u, _esp0);
  ESP += 4; return;
  /* 1168598b nop  */
  /* nop */
L_1168598c:;
  /* 1168598c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1168598f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11685992 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11685995 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11685998 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1168599b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1168599e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 116859a1 pop esi */
  ESI = (pop32());
  /* 116859a2 pop edi */
  EDI = (pop32());
  /* 116859a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116859a4 ret  */
  ESPCHK(0x11685670u, _esp0);
  ESP += 4; return;
}

/* FUN_100059a5 @ 0x116859a5 (137 bytes, 50 insns) */
void f_116859a5(void) {
  FTRACE(0x116859a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116859a5 push ebx */
  push32((uint32_t)(EBX));
  /* 116859a6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116859a8 cmp dword ptr [0x1168a268], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1168a268))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116859ae push esi */
  push32((uint32_t)(ESI));
  /* 116859af push edi */
  push32((uint32_t)(EDI));
  /* 116859b0 jne 0x116859f4 */
  if (!C.zf) goto L_116859f4;
  /* 116859b2 push 0x11688534 */
  push32((uint32_t)(0x11688534u));
  /* 116859b7 call dword ptr [0x1168802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168802c))), 0x116859bdu);
  /* 116859bd mov edi, eax */
  EDI = (EAX);
  /* 116859bf cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116859c1 je 0x11685a2a */
  if (C.zf) goto L_11685a2a;
  /* 116859c3 mov esi, dword ptr [0x11688000] */
  ESI = (r32((uint32_t)(0x11688000)));
  /* 116859c9 push 0x11688528 */
  push32((uint32_t)(0x11688528u));
  /* 116859ce push edi */
  push32((uint32_t)(EDI));
  /* 116859cf call esi */
  call_ind((uint32_t)(ESI), 0x116859d1u);
  /* 116859d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116859d3 mov dword ptr [0x1168a268], eax */
  w32((uint32_t)(0x1168a268), (EAX));
  /* 116859d8 je 0x11685a2a */
  if (C.zf) goto L_11685a2a;
  /* 116859da push 0x11688518 */
  push32((uint32_t)(0x11688518u));
  /* 116859df push edi */
  push32((uint32_t)(EDI));
  /* 116859e0 call esi */
  call_ind((uint32_t)(ESI), 0x116859e2u);
  /* 116859e2 push 0x11688504 */
  push32((uint32_t)(0x11688504u));
  /* 116859e7 push edi */
  push32((uint32_t)(EDI));
  /* 116859e8 mov dword ptr [0x1168a26c], eax */
  w32((uint32_t)(0x1168a26c), (EAX));
  /* 116859ed call esi */
  call_ind((uint32_t)(ESI), 0x116859efu);
  /* 116859ef mov dword ptr [0x1168a270], eax */
  w32((uint32_t)(0x1168a270), (EAX));
L_116859f4:;
  /* 116859f4 mov eax, dword ptr [0x1168a26c] */
  EAX = (r32((uint32_t)(0x1168a26c)));
  /* 116859f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116859fb je 0x11685a13 */
  if (C.zf) goto L_11685a13;
  /* 116859fd call eax */
  call_ind((uint32_t)(EAX), 0x116859ffu);
  /* 116859ff mov ebx, eax */
  EBX = (EAX);
  /* 11685a01 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11685a03 je 0x11685a13 */
  if (C.zf) goto L_11685a13;
  /* 11685a05 mov eax, dword ptr [0x1168a270] */
  EAX = (r32((uint32_t)(0x1168a270)));
  /* 11685a0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685a0c je 0x11685a13 */
  if (C.zf) goto L_11685a13;
  /* 11685a0e push ebx */
  push32((uint32_t)(EBX));
  /* 11685a0f call eax */
  call_ind((uint32_t)(EAX), 0x11685a11u);
  /* 11685a11 mov ebx, eax */
  EBX = (EAX);
L_11685a13:;
  /* 11685a13 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11685a17 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11685a1b push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11685a1f push ebx */
  push32((uint32_t)(EBX));
  /* 11685a20 call dword ptr [0x1168a268] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168a268))), 0x11685a26u);
L_11685a26:;
  /* 11685a26 pop edi */
  EDI = (pop32());
  /* 11685a27 pop esi */
  ESI = (pop32());
  /* 11685a28 pop ebx */
  EBX = (pop32());
  /* 11685a29 ret  */
  ESPCHK(0x116859a5u, _esp0);
  ESP += 4; return;
L_11685a2a:;
  /* 11685a2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11685a2c jmp 0x11685a26 */
  goto L_11685a26;
}

/* _strncpy @ 0x11685a30 (254 bytes, 109 insns) */
void f_11685a30(void) {
  FTRACE(0x11685a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685a30 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11685a34 push edi */
  push32((uint32_t)(EDI));
  /* 11685a35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11685a37 je 0x11685ab3 */
  if (C.zf) goto L_11685ab3;
  /* 11685a39 push esi */
  push32((uint32_t)(ESI));
  /* 11685a3a push ebx */
  push32((uint32_t)(EBX));
  /* 11685a3b mov ebx, ecx */
  EBX = (ECX);
  /* 11685a3d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11685a41 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11685a47 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11685a4b jne 0x11685a54 */
  if (!C.zf) goto L_11685a54;
  /* 11685a4d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11685a50 jne 0x11685ac1 */
  if (!C.zf) goto L_11685ac1;
  /* 11685a52 jmp 0x11685a75 */
  goto L_11685a75;
L_11685a54:;
  /* 11685a54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11685a56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11685a57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11685a59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11685a5a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11685a5b je 0x11685a82 */
  if (C.zf) goto L_11685a82;
  /* 11685a5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11685a5f je 0x11685a8a */
  if (C.zf) goto L_11685a8a;
  /* 11685a61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11685a67 jne 0x11685a54 */
  if (!C.zf) goto L_11685a54;
  /* 11685a69 mov ebx, ecx */
  EBX = (ECX);
  /* 11685a6b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11685a6e jne 0x11685ac1 */
  if (!C.zf) goto L_11685ac1;
L_11685a70:;
  /* 11685a70 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11685a73 je 0x11685a82 */
  if (C.zf) goto L_11685a82;
L_11685a75:;
  /* 11685a75 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11685a77 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11685a78 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11685a7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11685a7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11685a7d je 0x11685aae */
  if (C.zf) goto L_11685aae;
  /* 11685a7f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11685a80 jne 0x11685a75 */
  if (!C.zf) goto L_11685a75;
L_11685a82:;
  /* 11685a82 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11685a86 pop ebx */
  EBX = (pop32());
  /* 11685a87 pop esi */
  ESI = (pop32());
  /* 11685a88 pop edi */
  EDI = (pop32());
  /* 11685a89 ret  */
  ESPCHK(0x11685a30u, _esp0);
  ESP += 4; return;
L_11685a8a:;
  /* 11685a8a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11685a90 je 0x11685aa4 */
  if (C.zf) goto L_11685aa4;
L_11685a92:;
  /* 11685a92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11685a94 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11685a95 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11685a96 je 0x11685b26 */
  if (C.zf) goto L_11685b26;
  /* 11685a9c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11685aa2 jne 0x11685a92 */
  if (!C.zf) goto L_11685a92;
L_11685aa4:;
  /* 11685aa4 mov ebx, ecx */
  EBX = (ECX);
  /* 11685aa6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11685aa9 jne 0x11685b17 */
  if (!C.zf) goto L_11685b17;
L_11685aab:;
  /* 11685aab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11685aad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11685aae:;
  /* 11685aae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11685aaf jne 0x11685aab */
  if (!C.zf) goto L_11685aab;
  /* 11685ab1 pop ebx */
  EBX = (pop32());
  /* 11685ab2 pop esi */
  ESI = (pop32());
L_11685ab3:;
  /* 11685ab3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11685ab7 pop edi */
  EDI = (pop32());
  /* 11685ab8 ret  */
  ESPCHK(0x11685a30u, _esp0);
  ESP += 4; return;
L_11685ab9:;
  /* 11685ab9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11685abb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11685abe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11685abf je 0x11685a70 */
  if (C.zf) goto L_11685a70;
L_11685ac1:;
  /* 11685ac1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11685ac6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11685ac8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685aca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11685acd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11685acf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11685ad1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11685ad4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11685ad9 je 0x11685ab9 */
  if (C.zf) goto L_11685ab9;
  /* 11685adb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11685add je 0x11685b0b */
  if (C.zf) goto L_11685b0b;
  /* 11685adf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11685ae1 je 0x11685b01 */
  if (C.zf) goto L_11685b01;
  /* 11685ae3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11685ae9 je 0x11685af7 */
  if (C.zf) goto L_11685af7;
  /* 11685aeb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11685af1 jne 0x11685ab9 */
  if (!C.zf) goto L_11685ab9;
  /* 11685af3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11685af5 jmp 0x11685b0f */
  goto L_11685b0f;
L_11685af7:;
  /* 11685af7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11685afd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11685aff jmp 0x11685b0f */
  goto L_11685b0f;
L_11685b01:;
  /* 11685b01 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11685b07 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11685b09 jmp 0x11685b0f */
  goto L_11685b0f;
L_11685b0b:;
  /* 11685b0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11685b0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11685b0f:;
  /* 11685b0f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11685b12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11685b14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11685b15 je 0x11685b21 */
  if (C.zf) goto L_11685b21;
L_11685b17:;
  /* 11685b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11685b19:;
  /* 11685b19 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11685b1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11685b1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11685b1f jne 0x11685b19 */
  if (!C.zf) goto L_11685b19;
L_11685b21:;
  /* 11685b21 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11685b24 jne 0x11685aab */
  if (!C.zf) goto L_11685aab;
L_11685b26:;
  /* 11685b26 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11685b2a pop ebx */
  EBX = (pop32());
  /* 11685b2b pop esi */
  ESI = (pop32());
  /* 11685b2c pop edi */
  EDI = (pop32());
  /* 11685b2d ret  */
  ESPCHK(0x11685a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b2e @ 0x11685b2e (318 bytes, 123 insns) */
void f_11685b2e(void) {
  FTRACE(0x11685b2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685b2e push ebp */
  push32((uint32_t)(EBP));
  /* 11685b2f mov ebp, esp */
  EBP = (ESP);
  /* 11685b31 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11685b33 push 0x11688548 */
  push32((uint32_t)(0x11688548u));
  /* 11685b38 push 0x11686a2c */
  push32((uint32_t)(0x11686a2cu));
  /* 11685b3d mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11685b43 push eax */
  push32((uint32_t)(EAX));
  /* 11685b44 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11685b4b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11685b4e push ebx */
  push32((uint32_t)(EBX));
  /* 11685b4f push esi */
  push32((uint32_t)(ESI));
  /* 11685b50 push edi */
  push32((uint32_t)(EDI));
  /* 11685b51 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11685b54 mov eax, dword ptr [0x1168a288] */
  EAX = (r32((uint32_t)(0x1168a288)));
  /* 11685b59 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11685b5b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685b5d jne 0x11685b9d */
  if (!C.zf) goto L_11685b9d;
  /* 11685b5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11685b62 push eax */
  push32((uint32_t)(EAX));
  /* 11685b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11685b65 pop esi */
  ESI = (pop32());
  /* 11685b66 push esi */
  push32((uint32_t)(ESI));
  /* 11685b67 push 0x11688544 */
  push32((uint32_t)(0x11688544u));
  /* 11685b6c push esi */
  push32((uint32_t)(ESI));
  /* 11685b6d call dword ptr [0x11688028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688028))), 0x11685b73u);
  /* 11685b73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685b75 je 0x11685b7b */
  if (C.zf) goto L_11685b7b;
  /* 11685b77 mov eax, esi */
  EAX = (ESI);
  /* 11685b79 jmp 0x11685b98 */
  goto L_11685b98;
L_11685b7b:;
  /* 11685b7b lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11685b7e push eax */
  push32((uint32_t)(EAX));
  /* 11685b7f push esi */
  push32((uint32_t)(ESI));
  /* 11685b80 push 0x11688540 */
  push32((uint32_t)(0x11688540u));
  /* 11685b85 push esi */
  push32((uint32_t)(ESI));
  /* 11685b86 push ebx */
  push32((uint32_t)(EBX));
  /* 11685b87 call dword ptr [0x11688020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688020))), 0x11685b8du);
  /* 11685b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685b8f je 0x11685c63 */
  if (C.zf) goto L_11685c63;
  /* 11685b95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11685b97 pop eax */
  EAX = (pop32());
L_11685b98:;
  /* 11685b98 mov dword ptr [0x1168a288], eax */
  w32((uint32_t)(0x1168a288), (EAX));
L_11685b9d:;
  /* 11685b9d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685ba0 jne 0x11685bc6 */
  if (!C.zf) goto L_11685bc6;
  /* 11685ba2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11685ba5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685ba7 jne 0x11685bae */
  if (!C.zf) goto L_11685bae;
  /* 11685ba9 mov eax, dword ptr [0x1168a2a0] */
  EAX = (r32((uint32_t)(0x1168a2a0)));
L_11685bae:;
  /* 11685bae push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11685bb1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11685bb4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11685bb7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11685bba push eax */
  push32((uint32_t)(EAX));
  /* 11685bbb call dword ptr [0x11688020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688020))), 0x11685bc1u);
  /* 11685bc1 jmp 0x11685c65 */
  goto L_11685c65;
L_11685bc6:;
  /* 11685bc6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685bc9 jne 0x11685c63 */
  if (!C.zf) goto L_11685c63;
  /* 11685bcf cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685bd2 jne 0x11685bdc */
  if (!C.zf) goto L_11685bdc;
  /* 11685bd4 mov eax, dword ptr [0x1168a2b0] */
  EAX = (r32((uint32_t)(0x1168a2b0)));
  /* 11685bd9 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11685bdc:;
  /* 11685bdc push ebx */
  push32((uint32_t)(EBX));
  /* 11685bdd push ebx */
  push32((uint32_t)(EBX));
  /* 11685bde push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11685be1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11685be4 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11685be7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11685be9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11685beb and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11685bee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11685bef push eax */
  push32((uint32_t)(EAX));
  /* 11685bf0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11685bf3 call dword ptr [0x11688024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688024))), 0x11685bf9u);
  /* 11685bf9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11685bfc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685bfe je 0x11685c63 */
  if (C.zf) goto L_11685c63;
  /* 11685c00 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11685c03 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11685c06 mov eax, edi */
  EAX = (EDI);
  /* 11685c08 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685c0b and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11685c0d call 0x11686b10 */
  push32(0x11685c12u); f_11686b10();
  /* 11685c12 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11685c15 mov esi, esp */
  ESI = (ESP);
  /* 11685c17 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11685c1a push edi */
  push32((uint32_t)(EDI));
  /* 11685c1b push ebx */
  push32((uint32_t)(EBX));
  /* 11685c1c push esi */
  push32((uint32_t)(ESI));
  /* 11685c1d call 0x11684890 */
  push32(0x11685c22u); f_11684890();
  /* 11685c22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11685c25 jmp 0x11685c32 */
  goto L_11685c32;
  /* 11685c27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11685c29 pop eax */
  EAX = (pop32());
  /* 11685c2a ret  */
  ESPCHK(0x11685b2eu, _esp0);
  ESP += 4; return;
  /* 11685c2b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11685c2e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11685c30 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11685c32:;
  /* 11685c32 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11685c36 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685c38 je 0x11685c63 */
  if (C.zf) goto L_11685c63;
  /* 11685c3a push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11685c3d push esi */
  push32((uint32_t)(ESI));
  /* 11685c3e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11685c41 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11685c44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11685c46 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11685c49 call dword ptr [0x11688024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688024))), 0x11685c4fu);
  /* 11685c4f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685c51 je 0x11685c63 */
  if (C.zf) goto L_11685c63;
  /* 11685c53 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11685c56 push eax */
  push32((uint32_t)(EAX));
  /* 11685c57 push esi */
  push32((uint32_t)(ESI));
  /* 11685c58 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11685c5b call dword ptr [0x11688028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688028))), 0x11685c61u);
  /* 11685c61 jmp 0x11685c65 */
  goto L_11685c65;
L_11685c63:;
  /* 11685c63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11685c65:;
  /* 11685c65 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11685c68 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11685c6b mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11685c72 pop edi */
  EDI = (pop32());
  /* 11685c73 pop esi */
  ESI = (pop32());
  /* 11685c74 pop ebx */
  EBX = (pop32());
  /* 11685c75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11685c76 ret  */
  ESPCHK(0x11685b2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c77 @ 0x11685c77 (511 bytes, 193 insns) */
void f_11685c77(void) {
  FTRACE(0x11685c77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685c77 push ebp */
  push32((uint32_t)(EBP));
  /* 11685c78 mov ebp, esp */
  EBP = (ESP);
  /* 11685c7a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11685c7c push 0x11688558 */
  push32((uint32_t)(0x11688558u));
  /* 11685c81 push 0x11686a2c */
  push32((uint32_t)(0x11686a2cu));
  /* 11685c86 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11685c8c push eax */
  push32((uint32_t)(EAX));
  /* 11685c8d mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11685c94 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11685c97 push ebx */
  push32((uint32_t)(EBX));
  /* 11685c98 push esi */
  push32((uint32_t)(ESI));
  /* 11685c99 push edi */
  push32((uint32_t)(EDI));
  /* 11685c9a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11685c9d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11685c9f cmp dword ptr [0x1168a2b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x1168a2b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685ca5 jne 0x11685ced */
  if (!C.zf) goto L_11685ced;
  /* 11685ca7 push edi */
  push32((uint32_t)(EDI));
  /* 11685ca8 push edi */
  push32((uint32_t)(EDI));
  /* 11685ca9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11685cab pop ebx */
  EBX = (pop32());
  /* 11685cac push ebx */
  push32((uint32_t)(EBX));
  /* 11685cad push 0x11688544 */
  push32((uint32_t)(0x11688544u));
  /* 11685cb2 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11685cb7 push esi */
  push32((uint32_t)(ESI));
  /* 11685cb8 push edi */
  push32((uint32_t)(EDI));
  /* 11685cb9 call dword ptr [0x1168801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168801c))), 0x11685cbfu);
  /* 11685cbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685cc1 je 0x11685ccb */
  if (C.zf) goto L_11685ccb;
  /* 11685cc3 mov dword ptr [0x1168a2b8], ebx */
  w32((uint32_t)(0x1168a2b8), (EBX));
  /* 11685cc9 jmp 0x11685ced */
  goto L_11685ced;
L_11685ccb:;
  /* 11685ccb push edi */
  push32((uint32_t)(EDI));
  /* 11685ccc push edi */
  push32((uint32_t)(EDI));
  /* 11685ccd push ebx */
  push32((uint32_t)(EBX));
  /* 11685cce push 0x11688540 */
  push32((uint32_t)(0x11688540u));
  /* 11685cd3 push esi */
  push32((uint32_t)(ESI));
  /* 11685cd4 push edi */
  push32((uint32_t)(EDI));
  /* 11685cd5 call dword ptr [0x11688018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688018))), 0x11685cdbu);
  /* 11685cdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685cdd je 0x11685e05 */
  if (C.zf) goto L_11685e05;
  /* 11685ce3 mov dword ptr [0x1168a2b8], 2 */
  w32((uint32_t)(0x1168a2b8), (0x2u));
L_11685ced:;
  /* 11685ced cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685cf0 jle 0x11685d02 */
  if ((C.zf||C.sf!=C.of)) goto L_11685d02;
  /* 11685cf2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11685cf5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11685cf8 call 0x116873de */
  push32(0x11685cfdu); f_116873de();
  /* 11685cfd pop ecx */
  ECX = (pop32());
  /* 11685cfe pop ecx */
  ECX = (pop32());
  /* 11685cff mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11685d02:;
  /* 11685d02 mov eax, dword ptr [0x1168a2b8] */
  EAX = (r32((uint32_t)(0x1168a2b8)));
  /* 11685d07 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685d0a jne 0x11685d29 */
  if (!C.zf) goto L_11685d29;
  /* 11685d0c push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11685d0f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11685d12 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11685d15 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11685d18 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11685d1b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11685d1e call dword ptr [0x11688018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688018))), 0x11685d24u);
  /* 11685d24 jmp 0x11685e07 */
  goto L_11685e07;
L_11685d29:;
  /* 11685d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685d2c jne 0x11685e05 */
  if (!C.zf) goto L_11685e05;
  /* 11685d32 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685d35 jne 0x11685d3f */
  if (!C.zf) goto L_11685d3f;
  /* 11685d37 mov eax, dword ptr [0x1168a2b0] */
  EAX = (r32((uint32_t)(0x1168a2b0)));
  /* 11685d3c mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11685d3f:;
  /* 11685d3f push edi */
  push32((uint32_t)(EDI));
  /* 11685d40 push edi */
  push32((uint32_t)(EDI));
  /* 11685d41 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11685d44 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11685d47 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11685d4a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11685d4c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11685d4e and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11685d51 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11685d52 push eax */
  push32((uint32_t)(EAX));
  /* 11685d53 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11685d56 call dword ptr [0x11688024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688024))), 0x11685d5cu);
  /* 11685d5c mov ebx, eax */
  EBX = (EAX);
  /* 11685d5e mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11685d61 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685d63 je 0x11685e05 */
  if (C.zf) goto L_11685e05;
  /* 11685d69 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11685d6c lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11685d6f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685d72 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11685d74 call 0x11686b10 */
  push32(0x11685d79u); f_11686b10();
  /* 11685d79 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11685d7c mov eax, esp */
  EAX = (ESP);
  /* 11685d7e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11685d81 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11685d85 jmp 0x11685d9a */
  goto L_11685d9a;
  /* 11685d87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11685d89 pop eax */
  EAX = (pop32());
  /* 11685d8a ret  */
  ESPCHK(0x11685c77u, _esp0);
  ESP += 4; return;
  /* 11685d8b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11685d8e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11685d90 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11685d93 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11685d97 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11685d9a:;
  /* 11685d9a cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685d9d je 0x11685e05 */
  if (C.zf) goto L_11685e05;
  /* 11685d9f push ebx */
  push32((uint32_t)(EBX));
  /* 11685da0 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11685da3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11685da6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11685da9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11685dab push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11685dae call dword ptr [0x11688024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11688024))), 0x11685db4u);
  /* 11685db4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685db6 je 0x11685e05 */
  if (C.zf) goto L_11685e05;
  /* 11685db8 push edi */
  push32((uint32_t)(EDI));
  /* 11685db9 push edi */
  push32((uint32_t)(EDI));
  /* 11685dba push ebx */
  push32((uint32_t)(EBX));
  /* 11685dbb push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11685dbe push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11685dc1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11685dc4 call dword ptr [0x1168801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168801c))), 0x11685dcau);
  /* 11685dca mov esi, eax */
  ESI = (EAX);
  /* 11685dcc mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11685dcf cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685dd1 je 0x11685e05 */
  if (C.zf) goto L_11685e05;
  /* 11685dd3 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11685dd7 je 0x11685e19 */
  if (C.zf) goto L_11685e19;
  /* 11685dd9 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685ddc je 0x11685e94 */
  if (C.zf) goto L_11685e94;
  /* 11685de2 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685de5 jg 0x11685e05 */
  if ((!C.zf&&C.sf==C.of)) goto L_11685e05;
  /* 11685de7 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11685dea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11685ded push ebx */
  push32((uint32_t)(EBX));
  /* 11685dee push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11685df1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11685df4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11685df7 call dword ptr [0x1168801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168801c))), 0x11685dfdu);
  /* 11685dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685dff jne 0x11685e94 */
  if (!C.zf) goto L_11685e94;
L_11685e05:;
  /* 11685e05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11685e07:;
  /* 11685e07 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11685e0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11685e0d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11685e14 pop edi */
  EDI = (pop32());
  /* 11685e15 pop esi */
  ESI = (pop32());
  /* 11685e16 pop ebx */
  EBX = (pop32());
  /* 11685e17 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11685e18 ret  */
  ESPCHK(0x11685c77u, _esp0);
  ESP += 4; return;
L_11685e19:;
  /* 11685e19 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11685e20 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11685e23 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11685e26 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11685e28 call 0x11686b10 */
  push32(0x11685e2du); f_11686b10();
  /* 11685e2d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11685e30 mov ebx, esp */
  EBX = (ESP);
  /* 11685e32 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11685e35 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11685e39 jmp 0x11685e4d */
  goto L_11685e4d;
  /* 11685e3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11685e3d pop eax */
  EAX = (pop32());
  /* 11685e3e ret  */
  ESPCHK(0x11685c77u, _esp0);
  ESP += 4; return;
  /* 11685e3f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11685e42 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11685e44 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11685e46 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11685e4a mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11685e4d:;
  /* 11685e4d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685e4f je 0x11685e05 */
  if (C.zf) goto L_11685e05;
  /* 11685e51 push esi */
  push32((uint32_t)(ESI));
  /* 11685e52 push ebx */
  push32((uint32_t)(EBX));
  /* 11685e53 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11685e56 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11685e59 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11685e5c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11685e5f call dword ptr [0x1168801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1168801c))), 0x11685e65u);
  /* 11685e65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685e67 je 0x11685e05 */
  if (C.zf) goto L_11685e05;
  /* 11685e69 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685e6c push edi */
  push32((uint32_t)(EDI));
  /* 11685e6d push edi */
  push32((uint32_t)(EDI));
  /* 11685e6e jne 0x11685e74 */
  if (!C.zf) goto L_11685e74;
  /* 11685e70 push edi */
  push32((uint32_t)(EDI));
  /* 11685e71 push edi */
  push32((uint32_t)(EDI));
  /* 11685e72 jmp 0x11685e7a */
  goto L_11685e7a;
L_11685e74:;
  /* 11685e74 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11685e77 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11685e7a:;
  /* 11685e7a push esi */
  push32((uint32_t)(ESI));
  /* 11685e7b push ebx */
  push32((uint32_t)(EBX));
  /* 11685e7c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11685e81 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11685e84 call dword ptr [0x116880c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x116880c8))), 0x11685e8au);
  /* 11685e8a mov esi, eax */
  ESI = (EAX);
  /* 11685e8c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685e8e je 0x11685e05 */
  if (C.zf) goto L_11685e05;
L_11685e94:;
  /* 11685e94 mov eax, esi */
  EAX = (ESI);
  /* 11685e96 jmp 0x11685e07 */
  goto L_11685e07;
}

/* FUN_10005e9b @ 0x11685e9b (33 bytes, 15 insns) */
void f_11685e9b(void) {
  FTRACE(0x11685e9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685e9b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11685e9f push esi */
  push32((uint32_t)(ESI));
  /* 11685ea0 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11685ea4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11685ea6 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 11685ea9 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685eab jb 0x11685eb1 */
  if (C.cf) goto L_11685eb1;
  /* 11685ead cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685eaf jae 0x11685eb4 */
  if (!C.cf) goto L_11685eb4;
L_11685eb1:;
  /* 11685eb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11685eb3 pop eax */
  EAX = (pop32());
L_11685eb4:;
  /* 11685eb4 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11685eb8 pop esi */
  ESI = (pop32());
  /* 11685eb9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11685ebb ret  */
  ESPCHK(0x11685e9bu, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11685ebc (94 bytes, 38 insns) */
void f_11685ebc(void) {
  FTRACE(0x11685ebcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685ebc push esi */
  push32((uint32_t)(ESI));
  /* 11685ebd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11685ec1 push edi */
  push32((uint32_t)(EDI));
  /* 11685ec2 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11685ec6 push esi */
  push32((uint32_t)(ESI));
  /* 11685ec7 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11685ec9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11685ecb call 0x11685e9b */
  push32(0x11685ed0u); f_11685e9b();
  /* 11685ed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11685ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685ed5 je 0x11685eee */
  if (C.zf) goto L_11685eee;
  /* 11685ed7 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11685eda push eax */
  push32((uint32_t)(EAX));
  /* 11685edb push 1 */
  push32((uint32_t)(0x1u));
  /* 11685edd push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11685edf call 0x11685e9b */
  push32(0x11685ee4u); f_11685e9b();
  /* 11685ee4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11685ee7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685ee9 je 0x11685eee */
  if (C.zf) goto L_11685eee;
  /* 11685eeb inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11685eee:;
  /* 11685eee lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11685ef1 push eax */
  push32((uint32_t)(EAX));
  /* 11685ef2 push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 11685ef5 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11685ef7 call 0x11685e9b */
  push32(0x11685efcu); f_11685e9b();
  /* 11685efc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11685eff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11685f01 je 0x11685f06 */
  if (C.zf) goto L_11685f06;
  /* 11685f03 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11685f06:;
  /* 11685f06 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11685f09 push eax */
  push32((uint32_t)(EAX));
  /* 11685f0a push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11685f0d push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11685f0f call 0x11685e9b */
  push32(0x11685f14u); f_11685e9b();
  /* 11685f14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11685f17 pop edi */
  EDI = (pop32());
  /* 11685f18 pop esi */
  ESI = (pop32());
  /* 11685f19 ret  */
  ESPCHK(0x11685ebcu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f1a @ 0x11685f1a (46 bytes, 21 insns) */
void f_11685f1a(void) {
  FTRACE(0x11685f1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685f1a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11685f1e push esi */
  push32((uint32_t)(ESI));
  /* 11685f1f push edi */
  push32((uint32_t)(EDI));
  /* 11685f20 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11685f22 mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 11685f25 mov ecx, esi */
  ECX = (ESI);
  /* 11685f27 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11685f29 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11685f2b lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 11685f2e shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 11685f31 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11685f33 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11685f36 mov edx, edi */
  EDX = (EDI);
  /* 11685f38 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 11685f3b shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 11685f3e shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11685f40 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11685f42 pop edi */
  EDI = (pop32());
  /* 11685f43 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11685f46 pop esi */
  ESI = (pop32());
  /* 11685f47 ret  */
  ESPCHK(0x11685f1au, _esp0);
  ESP += 4; return;
}

/* FUN_10005f48 @ 0x11685f48 (45 bytes, 21 insns) */
void f_11685f48(void) {
  FTRACE(0x11685f48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685f48 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11685f4c push esi */
  push32((uint32_t)(ESI));
  /* 11685f4d push edi */
  push32((uint32_t)(EDI));
  /* 11685f4e mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 11685f51 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11685f54 mov esi, edx */
  ESI = (EDX);
  /* 11685f56 mov edi, ecx */
  EDI = (ECX);
  /* 11685f58 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 11685f5b shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11685f5d or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11685f5f mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11685f62 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11685f64 shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 11685f67 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11685f69 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11685f6b or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11685f6d pop edi */
  EDI = (pop32());
  /* 11685f6e mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11685f71 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11685f73 pop esi */
  ESI = (pop32());
  /* 11685f74 ret  */
  ESPCHK(0x11685f48u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f75 @ 0x11685f75 (199 bytes, 76 insns) */
void f_11685f75(void) {
  FTRACE(0x11685f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11685f75 push ebp */
  push32((uint32_t)(EBP));
  /* 11685f76 mov ebp, esp */
  EBP = (ESP);
  /* 11685f78 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11685f7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11685f7e push ebx */
  push32((uint32_t)(EBX));
  /* 11685f7f mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11685f82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11685f84 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685f86 push esi */
  push32((uint32_t)(ESI));
  /* 11685f87 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 11685f8e mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 11685f90 mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 11685f93 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 11685f96 jbe 0x11685fe9 */
  if ((C.cf||C.zf)) goto L_11685fe9;
  /* 11685f98 push edi */
  push32((uint32_t)(EDI));
  /* 11685f99 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11685f9c:;
  /* 11685f9c mov esi, ebx */
  ESI = (EBX);
  /* 11685f9e lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 11685fa1 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11685fa2 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11685fa3 push ebx */
  push32((uint32_t)(EBX));
  /* 11685fa4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11685fa5 call 0x11685f1a */
  push32(0x11685faau); f_11685f1a();
  /* 11685faa push ebx */
  push32((uint32_t)(EBX));
  /* 11685fab call 0x11685f1a */
  push32(0x11685fb0u); f_11685f1a();
  /* 11685fb0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11685fb3 push eax */
  push32((uint32_t)(EAX));
  /* 11685fb4 push ebx */
  push32((uint32_t)(EBX));
  /* 11685fb5 call 0x11685ebc */
  push32(0x11685fbau); f_11685ebc();
  /* 11685fba push ebx */
  push32((uint32_t)(EBX));
  /* 11685fbb call 0x11685f1a */
  push32(0x11685fc0u); f_11685f1a();
  /* 11685fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11685fc3 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11685fc7 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11685fcb movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11685fce mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11685fd1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11685fd4 push eax */
  push32((uint32_t)(EAX));
  /* 11685fd5 push ebx */
  push32((uint32_t)(EBX));
  /* 11685fd6 call 0x11685ebc */
  push32(0x11685fdbu); f_11685ebc();
  /* 11685fdb add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11685fde inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11685fe1 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11685fe4 jne 0x11685f9c */
  if (!C.zf) goto L_11685f9c;
  /* 11685fe6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11685fe8 pop edi */
  EDI = (pop32());
L_11685fe9:;
  /* 11685fe9 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11685fec jne 0x11686016 */
  if (!C.zf) goto L_11686016;
  /* 11685fee mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11685ff1 mov eax, ecx */
  EAX = (ECX);
  /* 11685ff3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11685ff6 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 11685ff9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11685ffb mov esi, eax */
  ESI = (EAX);
  /* 11685ffd shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11686000 shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11686003 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11686005 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11686008 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1168600f mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 11686012 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11686014 jmp 0x11685fe9 */
  goto L_11685fe9;
L_11686016:;
  /* 11686016 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1168601b:;
  /* 1168601b test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1168601e jne 0x11686030 */
  if (!C.zf) goto L_11686030;
  /* 11686020 push ebx */
  push32((uint32_t)(EBX));
  /* 11686021 call 0x11685f1a */
  push32(0x11686026u); f_11685f1a();
  /* 11686026 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1168602d pop ecx */
  ECX = (pop32());
  /* 1168602e jmp 0x1168601b */
  goto L_1168601b;
L_11686030:;
  /* 11686030 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11686034 pop esi */
  ESI = (pop32());
  /* 11686035 mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 11686039 pop ebx */
  EBX = (pop32());
  /* 1168603a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1168603b ret  */
  ESPCHK(0x11685f75u, _esp0);
  ESP += 4; return;
}

/* FUN_1000603c @ 0x1168603c (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1168603c(void) {
  FTRACE(0x1168603cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168603c push ebp */
  push32((uint32_t)(EBP));
  /* 1168603d mov ebp, esp */
  EBP = (ESP);
  /* 1168603f sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686042 push ebx */
  push32((uint32_t)(EBX));
  /* 11686043 push esi */
  push32((uint32_t)(ESI));
  /* 11686044 push edi */
  push32((uint32_t)(EDI));
  /* 11686045 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11686048 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1168604b push 1 */
  push32((uint32_t)(0x1u));
  /* 1168604d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11686050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686052 pop edx */
  EDX = (pop32());
  /* 11686053 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11686056 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11686059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1168605c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1168605f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11686062 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11686065 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11686068 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1168606b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1168606e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11686071 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11686074 mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_11686077:;
  /* 11686077 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11686079 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168607c je 0x1168608d */
  if (C.zf) goto L_1168608d;
  /* 1168607e cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686081 je 0x1168608d */
  if (C.zf) goto L_1168608d;
  /* 11686083 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686086 je 0x1168608d */
  if (C.zf) goto L_1168608d;
  /* 11686088 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168608b jne 0x11686090 */
  if (!C.zf) goto L_11686090;
L_1168608d:;
  /* 1168608d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1168608e jmp 0x11686077 */
  goto L_11686077;
L_11686090:;
  /* 11686090 push 4 */
  push32((uint32_t)(0x4u));
  /* 11686092 pop esi */
  ESI = (pop32());
L_11686093:;
  /* 11686093 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11686095 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11686096 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686099 ja 0x11686316 */
  if ((!C.cf&&!C.zf)) goto L_11686316;
  /* 1168609f jmp dword ptr [eax*4 + 0x116864dd] */
  switch (EAX) {
    case 0: goto L_116860a6;
    case 1: goto L_116860f5;
    case 2: goto L_1168614c;
    case 3: goto L_11686176;
    case 4: goto L_116861d1;
    case 5: goto L_11686248;
    case 6: goto L_1168627e;
    case 7: goto L_116862c8;
    case 8: goto L_116862a7;
    case 9: goto L_1168632c;
    case 10: goto L_11686316;
    case 11: goto L_116862e2;
    default: x86_unimpl("switch@0x1168609f out of table"); return;
  }
L_116860a6:;
  /* 116860a6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116860a9 jl 0x116860b7 */
  if ((C.sf!=C.of)) goto L_116860b7;
  /* 116860ab cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116860ae jg 0x116860b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_116860b7;
L_116860b0:;
  /* 116860b0 push 3 */
  push32((uint32_t)(0x3u));
  /* 116860b2 jmp 0x116862d4 */
  goto L_116862d4;
L_116860b7:;
  /* 116860b7 cmp bl, byte ptr [0x116893cc] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x116893cc))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116860bd jne 0x116860c6 */
  if (!C.zf) goto L_116860c6;
L_116860bf:;
  /* 116860bf push 5 */
  push32((uint32_t)(0x5u));
  /* 116860c1 jmp 0x1168630c */
  goto L_1168630c;
L_116860c6:;
  /* 116860c6 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 116860c9 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116860cc je 0x116860ec */
  if (C.zf) goto L_116860ec;
  /* 116860ce dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116860cf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116860d0 je 0x116860e0 */
  if (C.zf) goto L_116860e0;
  /* 116860d2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116860d5 jne 0x116863af */
  if (!C.zf) goto L_116863af;
  /* 116860db jmp 0x1168616f */
  goto L_1168616f;
L_116860e0:;
  /* 116860e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116860e2 mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 116860e9 pop eax */
  EAX = (pop32());
  /* 116860ea jmp 0x11686093 */
  goto L_11686093;
L_116860ec:;
  /* 116860ec and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 116860f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 116860f2 pop eax */
  EAX = (pop32());
  /* 116860f3 jmp 0x11686093 */
  goto L_11686093;
L_116860f5:;
  /* 116860f5 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116860f8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116860fb jl 0x11686102 */
  if ((C.sf!=C.of)) goto L_11686102;
  /* 116860fd cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686100 jle 0x116860b0 */
  if ((C.zf||C.sf!=C.of)) goto L_116860b0;
L_11686102:;
  /* 11686102 cmp bl, byte ptr [0x116893cc] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x116893cc))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686108 je 0x116861ca */
  if (C.zf) goto L_116861ca;
  /* 1168610e cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686111 je 0x11686144 */
  if (C.zf) goto L_11686144;
  /* 11686113 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686116 je 0x11686144 */
  if (C.zf) goto L_11686144;
  /* 11686118 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168611b je 0x1168616f */
  if (C.zf) goto L_1168616f;
L_1168611d:;
  /* 1168611d cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686120 jle 0x116863af */
  if ((C.zf||C.sf!=C.of)) goto L_116863af;
  /* 11686126 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686129 jle 0x1168613d */
  if ((C.zf||C.sf!=C.of)) goto L_1168613d;
  /* 1168612b cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168612e jle 0x116863af */
  if ((C.zf||C.sf!=C.of)) goto L_116863af;
  /* 11686134 cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686137 jg 0x116863af */
  if ((!C.zf&&C.sf==C.of)) goto L_116863af;
L_1168613d:;
  /* 1168613d push 6 */
  push32((uint32_t)(0x6u));
  /* 1168613f jmp 0x1168630c */
  goto L_1168630c;
L_11686144:;
  /* 11686144 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11686145 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11686147 jmp 0x1168630c */
  goto L_1168630c;
L_1168614c:;
  /* 1168614c cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168614f jl 0x1168615a */
  if ((C.sf!=C.of)) goto L_1168615a;
  /* 11686151 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686154 jle 0x116860b0 */
  if ((C.zf||C.sf!=C.of)) goto L_116860b0;
L_1168615a:;
  /* 1168615a cmp bl, byte ptr [0x116893cc] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x116893cc))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686160 je 0x116860bf */
  if (C.zf) goto L_116860bf;
  /* 11686166 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686169 jne 0x11686324 */
  if (!C.zf) goto L_11686324;
L_1168616f:;
  /* 1168616f mov eax, edx */
  EAX = (EDX);
  /* 11686171 jmp 0x11686093 */
  goto L_11686093;
L_11686176:;
  /* 11686176 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11686179:;
  /* 11686179 cmp dword ptr [0x116893c8], edx */
  { uint32_t _a=(r32((uint32_t)(0x116893c8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168617f jle 0x11686192 */
  if ((C.zf||C.sf!=C.of)) goto L_11686192;
  /* 11686181 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11686184 push esi */
  push32((uint32_t)(ESI));
  /* 11686185 push eax */
  push32((uint32_t)(EAX));
  /* 11686186 call 0x11684070 */
  push32(0x1168618bu); f_11684070();
  /* 1168618b pop ecx */
  ECX = (pop32());
  /* 1168618c pop ecx */
  ECX = (pop32());
  /* 1168618d push 1 */
  push32((uint32_t)(0x1u));
  /* 1168618f pop edx */
  EDX = (pop32());
  /* 11686190 jmp 0x116861a0 */
  goto L_116861a0;
L_11686192:;
  /* 11686192 mov ecx, dword ptr [0x116893d4] */
  ECX = (r32((uint32_t)(0x116893d4)));
  /* 11686198 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1168619b mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1168619e and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_116861a0:;
  /* 116861a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116861a2 je 0x116861c2 */
  if (C.zf) goto L_116861c2;
  /* 116861a4 cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116861a8 jae 0x116861ba */
  if (!C.cf) goto L_116861ba;
  /* 116861aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116861ad inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 116861b0 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 116861b3 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 116861b6 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 116861b8 jmp 0x116861bd */
  goto L_116861bd;
L_116861ba:;
  /* 116861ba inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_116861bd:;
  /* 116861bd mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 116861bf inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116861c0 jmp 0x11686179 */
  goto L_11686179;
L_116861c2:;
  /* 116861c2 cmp bl, byte ptr [0x116893cc] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x116893cc))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116861c8 jne 0x11686231 */
  if (!C.zf) goto L_11686231;
L_116861ca:;
  /* 116861ca mov eax, esi */
  EAX = (ESI);
  /* 116861cc jmp 0x11686093 */
  goto L_11686093;
L_116861d1:;
  /* 116861d1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116861d5 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 116861d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 116861db jne 0x116861ea */
  if (!C.zf) goto L_116861ea;
L_116861dd:;
  /* 116861dd cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116861e0 jne 0x116861ea */
  if (!C.zf) goto L_116861ea;
  /* 116861e2 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 116861e5 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 116861e7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116861e8 jmp 0x116861dd */
  goto L_116861dd;
L_116861ea:;
  /* 116861ea cmp dword ptr [0x116893c8], edx */
  { uint32_t _a=(r32((uint32_t)(0x116893c8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116861f0 jle 0x11686203 */
  if ((C.zf||C.sf!=C.of)) goto L_11686203;
  /* 116861f2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 116861f5 push esi */
  push32((uint32_t)(ESI));
  /* 116861f6 push eax */
  push32((uint32_t)(EAX));
  /* 116861f7 call 0x11684070 */
  push32(0x116861fcu); f_11684070();
  /* 116861fc pop ecx */
  ECX = (pop32());
  /* 116861fd pop ecx */
  ECX = (pop32());
  /* 116861fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11686200 pop edx */
  EDX = (pop32());
  /* 11686201 jmp 0x11686211 */
  goto L_11686211;
L_11686203:;
  /* 11686203 mov ecx, dword ptr [0x116893d4] */
  ECX = (r32((uint32_t)(0x116893d4)));
  /* 11686209 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1168620c mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1168620f and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11686211:;
  /* 11686211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11686213 je 0x11686231 */
  if (C.zf) goto L_11686231;
  /* 11686215 cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686219 jae 0x1168622c */
  if (!C.cf) goto L_1168622c;
  /* 1168621b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1168621e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11686221 sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11686224 inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11686227 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1168622a mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1168622c:;
  /* 1168622c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1168622e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1168622f jmp 0x116861ea */
  goto L_116861ea;
L_11686231:;
  /* 11686231 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686234 je 0x11686144 */
  if (C.zf) goto L_11686144;
  /* 1168623a cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168623d je 0x11686144 */
  if (C.zf) goto L_11686144;
  /* 11686243 jmp 0x1168611d */
  goto L_1168611d;
L_11686248:;
  /* 11686248 cmp dword ptr [0x116893c8], edx */
  { uint32_t _a=(r32((uint32_t)(0x116893c8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168624e mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11686251 jle 0x11686264 */
  if ((C.zf||C.sf!=C.of)) goto L_11686264;
  /* 11686253 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11686256 push esi */
  push32((uint32_t)(ESI));
  /* 11686257 push eax */
  push32((uint32_t)(EAX));
  /* 11686258 call 0x11684070 */
  push32(0x1168625du); f_11684070();
  /* 1168625d pop ecx */
  ECX = (pop32());
  /* 1168625e pop ecx */
  ECX = (pop32());
  /* 1168625f push 1 */
  push32((uint32_t)(0x1u));
  /* 11686261 pop edx */
  EDX = (pop32());
  /* 11686262 jmp 0x11686272 */
  goto L_11686272;
L_11686264:;
  /* 11686264 mov ecx, dword ptr [0x116893d4] */
  ECX = (r32((uint32_t)(0x116893d4)));
  /* 1168626a movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1168626d mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11686270 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11686272:;
  /* 11686272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11686274 je 0x11686324 */
  if (C.zf) goto L_11686324;
  /* 1168627a mov eax, esi */
  EAX = (ESI);
  /* 1168627c jmp 0x116862d5 */
  goto L_116862d5;
L_1168627e:;
  /* 1168627e lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 11686281 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686284 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11686287 jl 0x1168628e */
  if ((C.sf!=C.of)) goto L_1168628e;
  /* 11686289 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168628c jle 0x116862d2 */
  if ((C.zf||C.sf!=C.of)) goto L_116862d2;
L_1168628e:;
  /* 1168628e movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11686291 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686294 je 0x1168630a */
  if (C.zf) goto L_1168630a;
  /* 11686296 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11686297 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11686298 je 0x116862fe */
  if (C.zf) goto L_116862fe;
  /* 1168629a sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1168629d jne 0x116863b2 */
  if (!C.zf) goto L_116863b2;
L_116862a3:;
  /* 116862a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 116862a5 jmp 0x1168630c */
  goto L_1168630c;
L_116862a7:;
  /* 116862a7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_116862aa:;
  /* 116862aa cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116862ad jne 0x116862b4 */
  if (!C.zf) goto L_116862b4;
  /* 116862af mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 116862b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116862b2 jmp 0x116862aa */
  goto L_116862aa;
L_116862b4:;
  /* 116862b4 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116862b7 jl 0x116863af */
  if ((C.sf!=C.of)) goto L_116863af;
  /* 116862bd cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116862c0 jg 0x116863af */
  if ((!C.zf&&C.sf==C.of)) goto L_116863af;
  /* 116862c6 jmp 0x116862d2 */
  goto L_116862d2;
L_116862c8:;
  /* 116862c8 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116862cb jl 0x116862db */
  if ((C.sf!=C.of)) goto L_116862db;
  /* 116862cd cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116862d0 jg 0x116862db */
  if ((!C.zf&&C.sf==C.of)) goto L_116862db;
L_116862d2:;
  /* 116862d2 push 9 */
  push32((uint32_t)(0x9u));
L_116862d4:;
  /* 116862d4 pop eax */
  EAX = (pop32());
L_116862d5:;
  /* 116862d5 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 116862d6 jmp 0x11686093 */
  goto L_11686093;
L_116862db:;
  /* 116862db cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116862de jne 0x11686324 */
  if (!C.zf) goto L_11686324;
  /* 116862e0 jmp 0x116862a3 */
  goto L_116862a3;
L_116862e2:;
  /* 116862e2 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116862e6 je 0x11686312 */
  if (C.zf) goto L_11686312;
  /* 116862e8 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 116862eb lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 116862ee sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 116862f1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 116862f4 je 0x1168630a */
  if (C.zf) goto L_1168630a;
  /* 116862f6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116862f7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116862f8 jne 0x116863b2 */
  if (!C.zf) goto L_116863b2;
L_116862fe:;
  /* 116862fe or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 11686302 push 7 */
  push32((uint32_t)(0x7u));
  /* 11686304 pop eax */
  EAX = (pop32());
  /* 11686305 jmp 0x11686093 */
  goto L_11686093;
L_1168630a:;
  /* 1168630a push 7 */
  push32((uint32_t)(0x7u));
L_1168630c:;
  /* 1168630c pop eax */
  EAX = (pop32());
  /* 1168630d jmp 0x11686093 */
  goto L_11686093;
L_11686312:;
  /* 11686312 push 0xa */
  push32((uint32_t)(0xau));
  /* 11686314 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11686315 pop eax */
  EAX = (pop32());
L_11686316:;
  /* 11686316 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686319 je 0x116863b4 */
  if (C.zf) goto L_116863b4;
  /* 1168631f jmp 0x11686093 */
  goto L_11686093;
L_11686324:;
  /* 11686324 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11686327 jmp 0x116863b4 */
  goto L_116863b4;
L_1168632c:;
  /* 1168632c mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 11686333 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11686335:;
  /* 11686335 cmp dword ptr [0x116893c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116893c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168633c jle 0x1168634d */
  if ((C.zf||C.sf!=C.of)) goto L_1168634d;
  /* 1168633e movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11686341 push 4 */
  push32((uint32_t)(0x4u));
  /* 11686343 push eax */
  push32((uint32_t)(EAX));
  /* 11686344 call 0x11684070 */
  push32(0x11686349u); f_11684070();
  /* 11686349 pop ecx */
  ECX = (pop32());
  /* 1168634a pop ecx */
  ECX = (pop32());
  /* 1168634b jmp 0x1168635c */
  goto L_1168635c;
L_1168634d:;
  /* 1168634d mov ecx, dword ptr [0x116893d4] */
  ECX = (r32((uint32_t)(0x116893d4)));
  /* 11686353 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11686356 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11686359 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1168635c:;
  /* 1168635c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168635e je 0x1168637c */
  if (C.zf) goto L_1168637c;
  /* 11686360 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11686363 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11686366 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1168636a cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686370 jg 0x11686377 */
  if ((!C.zf&&C.sf==C.of)) goto L_11686377;
  /* 11686372 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11686374 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11686375 jmp 0x11686335 */
  goto L_11686335;
L_11686377:;
  /* 11686377 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1168637c:;
  /* 1168637c mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1168637f:;
  /* 1168637f cmp dword ptr [0x116893c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116893c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686386 jle 0x11686397 */
  if ((C.zf||C.sf!=C.of)) goto L_11686397;
  /* 11686388 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1168638b push 4 */
  push32((uint32_t)(0x4u));
  /* 1168638d push eax */
  push32((uint32_t)(EAX));
  /* 1168638e call 0x11684070 */
  push32(0x11686393u); f_11684070();
  /* 11686393 pop ecx */
  ECX = (pop32());
  /* 11686394 pop ecx */
  ECX = (pop32());
  /* 11686395 jmp 0x116863a6 */
  goto L_116863a6;
L_11686397:;
  /* 11686397 mov ecx, dword ptr [0x116893d4] */
  ECX = (r32((uint32_t)(0x116893d4)));
  /* 1168639d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 116863a0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 116863a3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_116863a6:;
  /* 116863a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116863a8 je 0x116863af */
  if (C.zf) goto L_116863af;
  /* 116863aa mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 116863ac inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116863ad jmp 0x1168637f */
  goto L_1168637f;
L_116863af:;
  /* 116863af dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 116863b0 jmp 0x116863b4 */
  goto L_116863b4;
L_116863b2:;
  /* 116863b2 mov edi, ecx */
  EDI = (ECX);
L_116863b4:;
  /* 116863b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 116863b7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116863bb mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 116863bd je 0x1168649c */
  if (C.zf) goto L_1168649c;
  /* 116863c3 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 116863c5 pop eax */
  EAX = (pop32());
  /* 116863c6 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116863c9 jbe 0x116863e0 */
  if ((C.cf||C.zf)) goto L_116863e0;
  /* 116863cb cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116863cf jl 0x116863d4 */
  if ((C.sf!=C.of)) goto L_116863d4;
  /* 116863d1 inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_116863d4:;
  /* 116863d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 116863d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 116863da dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116863db inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 116863de jmp 0x116863e3 */
  goto L_116863e3;
L_116863e0:;
  /* 116863e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_116863e3:;
  /* 116863e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116863e7 jbe 0x11686492 */
  if ((C.cf||C.zf)) goto L_11686492;
L_116863ed:;
  /* 116863ed dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 116863ee cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 116863f1 jne 0x116863fb */
  if (!C.zf) goto L_116863fb;
  /* 116863f3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 116863f6 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 116863f9 jmp 0x116863ed */
  goto L_116863ed;
L_116863fb:;
  /* 116863fb lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 116863fe push eax */
  push32((uint32_t)(EAX));
  /* 116863ff lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11686402 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11686405 push eax */
  push32((uint32_t)(EAX));
  /* 11686406 call 0x11685f75 */
  push32(0x1168640bu); f_11685f75();
  /* 1168640b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1168640e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11686410 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11686413 cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686416 jge 0x1168641a */
  if ((C.sf==C.of)) goto L_1168641a;
  /* 11686418 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1168641a:;
  /* 1168641a add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1168641d cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686420 jne 0x11686425 */
  if (!C.zf) goto L_11686425;
  /* 11686422 add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11686425:;
  /* 11686425 cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686428 jne 0x1168642d */
  if (!C.zf) goto L_1168642d;
  /* 1168642a sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1168642d:;
  /* 1168642d cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686432 jle 0x11686464 */
  if ((C.zf||C.sf!=C.of)) goto L_11686464;
  /* 11686434 mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1168643b:;
  /* 1168643b mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1168643e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11686441 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11686444 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11686447:;
  /* 11686447 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168644b je 0x116864ad */
  if (C.zf) goto L_116864ad;
  /* 1168644d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1168644f mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 11686454 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11686459 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1168645b mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 11686462 jmp 0x116864c2 */
  goto L_116864c2;
L_11686464:;
  /* 11686464 cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686469 jge 0x11686474 */
  if ((C.sf==C.of)) goto L_11686474;
  /* 1168646b mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 11686472 jmp 0x1168643b */
  goto L_1168643b;
L_11686474:;
  /* 11686474 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11686477 push eax */
  push32((uint32_t)(EAX));
  /* 11686478 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1168647b push eax */
  push32((uint32_t)(EAX));
  /* 1168647c call 0x11686e1a */
  push32(0x11686481u); f_11686e1a();
  /* 11686481 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11686484 mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 11686487 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1168648a mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1168648d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11686490 jmp 0x11686447 */
  goto L_11686447;
L_11686492:;
  /* 11686492 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11686494 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11686496 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11686498 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1168649a jmp 0x11686447 */
  goto L_11686447;
L_1168649c:;
  /* 1168649c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1168649e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116864a0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 116864a2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116864a4 mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 116864ab jmp 0x116864c2 */
  goto L_116864c2;
L_116864ad:;
  /* 116864ad cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116864b1 je 0x116864c2 */
  if (C.zf) goto L_116864c2;
  /* 116864b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 116864b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 116864b7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 116864b9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 116864bb mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_116864c2:;
  /* 116864c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 116864c5 or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 116864c8 pop edi */
  EDI = (pop32());
  /* 116864c9 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 116864cc mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 116864cf mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 116864d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 116864d6 pop esi */
  ESI = (pop32());
  /* 116864d7 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 116864da pop ebx */
  EBX = (pop32());
  /* 116864db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 116864dc ret  */
  ESPCHK(0x1168603cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000650d @ 0x1168650d (659 bytes, 232 insns) */
void f_1168650d(void) {
  FTRACE(0x1168650du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1168650d push ebp */
  push32((uint32_t)(EBP));
  /* 1168650e mov ebp, esp */
  EBP = (ESP);
  /* 11686510 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11686513 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11686516 push ebx */
  push32((uint32_t)(EBX));
  /* 11686517 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1168651a push esi */
  push32((uint32_t)(ESI));
  /* 1168651b mov ecx, eax */
  ECX = (EAX);
  /* 1168651d mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 11686522 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11686528 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1168652a test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1168652d push edi */
  push32((uint32_t)(EDI));
  /* 1168652e mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 11686532 mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 11686536 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1168653a mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1168653e mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 11686542 mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 11686546 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1168654a mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1168654e mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 11686552 mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 11686556 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1168655a mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1168655e mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11686565 mov edx, eax */
  EDX = (EAX);
  /* 11686567 je 0x1168656f */
  if (C.zf) goto L_1168656f;
  /* 11686569 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1168656d jmp 0x11686573 */
  goto L_11686573;
L_1168656f:;
  /* 1168656f mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_11686573:;
  /* 11686573 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11686576 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 11686579 jne 0x11686599 */
  if (!C.zf) goto L_11686599;
  /* 1168657b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1168657d jne 0x11686599 */
  if (!C.zf) goto L_11686599;
  /* 1168657f cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686582 jne 0x11686599 */
  if (!C.zf) goto L_11686599;
L_11686584:;
  /* 11686584 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11686588 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1168658c mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11686590 mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 11686594 jmp 0x11686797 */
  goto L_11686797;
L_11686599:;
  /* 11686599 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1168659c jne 0x11686618 */
  if (!C.zf) goto L_11686618;
  /* 1168659e mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 116865a3 mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 116865a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116865aa jne 0x116865b2 */
  if (!C.zf) goto L_116865b2;
  /* 116865ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116865b0 je 0x116865c1 */
  if (C.zf) goto L_116865c1;
L_116865b2:;
  /* 116865b2 test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 116865b8 jne 0x116865c1 */
  if (!C.zf) goto L_116865c1;
  /* 116865ba push 0x11688588 */
  push32((uint32_t)(0x11688588u));
  /* 116865bf jmp 0x11686607 */
  goto L_11686607;
L_116865c1:;
  /* 116865c1 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 116865c4 je 0x116865db */
  if (C.zf) goto L_116865db;
  /* 116865c6 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116865cc jne 0x116865db */
  if (!C.zf) goto L_116865db;
  /* 116865ce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116865d2 jne 0x11686602 */
  if (!C.zf) goto L_11686602;
  /* 116865d4 push 0x11688580 */
  push32((uint32_t)(0x11688580u));
  /* 116865d9 jmp 0x116865ea */
  goto L_116865ea;
L_116865db:;
  /* 116865db cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116865dd jne 0x11686602 */
  if (!C.zf) goto L_11686602;
  /* 116865df cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116865e3 jne 0x11686602 */
  if (!C.zf) goto L_11686602;
  /* 116865e5 push 0x11688578 */
  push32((uint32_t)(0x11688578u));
L_116865ea:;
  /* 116865ea lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 116865ed push eax */
  push32((uint32_t)(EAX));
  /* 116865ee call 0x116847a0 */
  push32(0x116865f3u); f_116847a0();
  /* 116865f3 pop ecx */
  ECX = (pop32());
  /* 116865f4 mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 116865f8 pop ecx */
  ECX = (pop32());
L_116865f9:;
  /* 116865f9 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 116865fd jmp 0x11686770 */
  goto L_11686770;
L_11686602:;
  /* 11686602 push 0x11688570 */
  push32((uint32_t)(0x11688570u));
L_11686607:;
  /* 11686607 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1168660a push eax */
  push32((uint32_t)(EAX));
  /* 1168660b call 0x116847a0 */
  push32(0x11686610u); f_116847a0();
  /* 11686610 pop ecx */
  ECX = (pop32());
  /* 11686611 mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 11686615 pop ecx */
  ECX = (pop32());
  /* 11686616 jmp 0x116865f9 */
  goto L_116865f9;
L_11686618:;
  /* 11686618 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1168661b mov ecx, edi */
  ECX = (EDI);
  /* 1168661d mov esi, eax */
  ESI = (EAX);
  /* 1168661f shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11686622 imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11686628 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1168662b and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 11686630 push 1 */
  push32((uint32_t)(0x1u));
  /* 11686632 lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 11686635 mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 11686639 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1168663c mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1168663f lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 11686646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11686649 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1168664c mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1168664f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11686652 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11686654 push eax */
  push32((uint32_t)(EAX));
  /* 11686655 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11686658 push eax */
  push32((uint32_t)(EAX));
  /* 11686659 call 0x11686e1a */
  push32(0x1168665eu); f_11686e1a();
  /* 1168665e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11686661 cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11686667 jb 0x11686679 */
  if (C.cf) goto L_11686679;
  /* 11686669 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1168666c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1168666d push eax */
  push32((uint32_t)(EAX));
  /* 1168666e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11686671 push eax */
  push32((uint32_t)(EAX));
  /* 11686672 call 0x11686bfa */
  push32(0x11686677u); f_11686bfa();
  /* 11686677 pop ecx */
  ECX = (pop32());
  /* 11686678 pop ecx */
  ECX = (pop32());
L_11686679:;
  /* 11686679 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1168667d mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 11686680 je 0x11686693 */
  if (C.zf) goto L_11686693;
  /* 11686682 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11686685 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11686688 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1168668a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1168668c jg 0x11686696 */
  if ((!C.zf&&C.sf==C.of)) goto L_11686696;
  /* 1168668e jmp 0x11686584 */
  goto L_11686584;
L_11686693:;
  /* 11686693 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_11686696:;
  /* 11686696 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686699 jle 0x1168669e */
  if ((C.zf||C.sf!=C.of)) goto L_1168669e;
  /* 1168669b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1168669d pop edi */
  EDI = (pop32());
L_1168669e:;
  /* 1168669e movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 116866a2 sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 116866a8 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 116866ad mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_116866b4:;
  /* 116866b4 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116866b7 push eax */
  push32((uint32_t)(EAX));
  /* 116866b8 call 0x11685f1a */
  push32(0x116866bdu); f_11685f1a();
  /* 116866bd dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 116866c0 pop ecx */
  ECX = (pop32());
  /* 116866c1 jne 0x116866b4 */
  if (!C.zf) goto L_116866b4;
  /* 116866c3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 116866c5 jge 0x116866de */
  if ((C.sf==C.of)) goto L_116866de;
  /* 116866c7 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 116866c9 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 116866cf jle 0x116866de */
  if ((C.zf||C.sf!=C.of)) goto L_116866de;
L_116866d1:;
  /* 116866d1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116866d4 push eax */
  push32((uint32_t)(EAX));
  /* 116866d5 call 0x11685f48 */
  push32(0x116866dau); f_11685f48();
  /* 116866da dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 116866db pop ecx */
  ECX = (pop32());
  /* 116866dc jne 0x116866d1 */
  if (!C.zf) goto L_116866d1;
L_116866de:;
  /* 116866de lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 116866e1 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 116866e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 116866e6 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 116866e9 jle 0x1168673b */
  if ((C.zf||C.sf!=C.of)) goto L_1168673b;
  /* 116866eb mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_116866ee:;
  /* 116866ee lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 116866f1 lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 116866f4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 116866f5 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 116866f6 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 116866f9 push eax */
  push32((uint32_t)(EAX));
  /* 116866fa movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 116866fb call 0x11685f1a */
  push32(0x11686700u); f_11685f1a();
  /* 11686700 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11686703 push eax */
  push32((uint32_t)(EAX));
  /* 11686704 call 0x11685f1a */
  push32(0x11686709u); f_11685f1a();
  /* 11686709 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1168670c push eax */
  push32((uint32_t)(EAX));
  /* 1168670d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11686710 push eax */
  push32((uint32_t)(EAX));
  /* 11686711 call 0x11685ebc */
  push32(0x11686716u); f_11685ebc();
  /* 11686716 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11686719 push eax */
  push32((uint32_t)(EAX));
  /* 1168671a call 0x11685f1a */
  push32(0x1168671fu); f_11685f1a();
  /* 1168671f mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 11686722 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11686725 and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 11686729 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1168672c add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1168672e inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11686731 dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 11686734 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11686736 jne 0x116866ee */
  if (!C.zf) goto L_116866ee;
  /* 11686738 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1168673b:;
  /* 1168673b mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1168673e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1168673f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11686740 cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11686743 lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 11686746 jl 0x11686778 */
  if ((C.sf!=C.of)) goto L_11686778;
L_11686748:;
  /* 11686748 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168674a jb 0x1168675b */
  if (C.cf) goto L_1168675b;
  /* 1168674c cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168674f jne 0x11686757 */
  if (!C.zf) goto L_11686757;
  /* 11686751 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11686754 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11686755 jmp 0x11686748 */
  goto L_11686748;
L_11686757:;
  /* 11686757 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686759 jae 0x1168675f */
  if (!C.cf) goto L_1168675f;
L_1168675b:;
  /* 1168675b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1168675c inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1168675f:;
  /* 1168675f inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11686761:;
  /* 11686761 sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11686763 sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11686765 mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 11686768 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1168676b and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_11686770:;
  /* 11686770 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11686773:;
  /* 11686773 pop edi */
  EDI = (pop32());
  /* 11686774 pop esi */
  ESI = (pop32());
  /* 11686775 pop ebx */
  EBX = (pop32());
  /* 11686776 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11686777 ret  */
  ESPCHK(0x1168650du, _esp0);
  ESP += 4; return;
L_11686778:;
  /* 11686778 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1168677a jb 0x11686788 */
  if (C.cf) goto L_11686788;
  /* 1168677c cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1168677f jne 0x11686784 */
  if (!C.zf) goto L_11686784;
  /* 11686781 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11686782 jmp 0x11686778 */
  goto L_11686778;
L_11686784:;
  /* 11686784 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686786 jae 0x11686761 */
  if (!C.cf) goto L_11686761;
L_11686788:;
  /* 11686788 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1168678c mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11686790 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11686794 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_11686797:;
  /* 11686797 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1168679b push 1 */
  push32((uint32_t)(0x1u));
  /* 1168679d pop eax */
  EAX = (pop32());
  /* 1168679e jmp 0x11686773 */
  goto L_11686773;
}

/* FUN_100067a0 @ 0x116867a0 (139 bytes, 59 insns) */
void f_116867a0(void) {
  FTRACE(0x116867a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 116867a0 push ebx */
  push32((uint32_t)(EBX));
  /* 116867a1 push ebp */
  push32((uint32_t)(EBP));
  /* 116867a2 push esi */
  push32((uint32_t)(ESI));
  /* 116867a3 push edi */
  push32((uint32_t)(EDI));
  /* 116867a4 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_116867a8:;
  /* 116867a8 cmp dword ptr [0x116893c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116893c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116867af jle 0x116867c0 */
  if ((C.zf||C.sf!=C.of)) goto L_116867c0;
  /* 116867b1 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 116867b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 116867b6 push eax */
  push32((uint32_t)(EAX));
  /* 116867b7 call 0x11684070 */
  push32(0x116867bcu); f_11684070();
  /* 116867bc pop ecx */
  ECX = (pop32());
  /* 116867bd pop ecx */
  ECX = (pop32());
  /* 116867be jmp 0x116867cf */
  goto L_116867cf;
L_116867c0:;
  /* 116867c0 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 116867c3 mov ecx, dword ptr [0x116893d4] */
  ECX = (r32((uint32_t)(0x116893d4)));
  /* 116867c9 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 116867cc and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_116867cf:;
  /* 116867cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 116867d1 je 0x116867d6 */
  if (C.zf) goto L_116867d6;
  /* 116867d3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116867d4 jmp 0x116867a8 */
  goto L_116867a8;
L_116867d6:;
  /* 116867d6 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 116867d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 116867da cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116867dd mov ebp, esi */
  EBP = (ESI);
  /* 116867df je 0x116867e6 */
  if (C.zf) goto L_116867e6;
  /* 116867e1 cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116867e4 jne 0x116867ea */
  if (!C.zf) goto L_116867ea;
L_116867e6:;
  /* 116867e6 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 116867e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_116867ea:;
  /* 116867ea xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_116867ec:;
  /* 116867ec cmp dword ptr [0x116893c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x116893c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 116867f3 jle 0x11686801 */
  if ((C.zf||C.sf!=C.of)) goto L_11686801;
  /* 116867f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 116867f7 push esi */
  push32((uint32_t)(ESI));
  /* 116867f8 call 0x11684070 */
  push32(0x116867fdu); f_11684070();
  /* 116867fd pop ecx */
  ECX = (pop32());
  /* 116867fe pop ecx */
  ECX = (pop32());
  /* 116867ff jmp 0x1168680c */
  goto L_1168680c;
L_11686801:;
  /* 11686801 mov eax, dword ptr [0x116893d4] */
  EAX = (r32((uint32_t)(0x116893d4)));
  /* 11686806 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11686809 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1168680c:;
  /* 1168680c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1168680e je 0x1168681d */
  if (C.zf) goto L_1168681d;
  /* 11686810 lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 11686813 lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 11686817 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 1168681a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1168681b jmp 0x116867ec */
  goto L_116867ec;
L_1168681d:;
  /* 1168681d cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11686820 mov eax, ebx */
  EAX = (EBX);
  /* 11686822 jne 0x11686826 */
  if (!C.zf) goto L_11686826;
  /* 11686824 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11686826:;
  /* 11686826 pop edi */
  EDI = (pop32());
  /* 11686827 pop esi */
  ESI = (pop32());
  /* 11686828 pop ebp */
  EBP = (pop32());
  /* 11686829 pop ebx */
  EBX = (pop32());
  /* 1168682a ret  */
  ESPCHK(0x116867a0u, _esp0);
  ESP += 4; return;
}

