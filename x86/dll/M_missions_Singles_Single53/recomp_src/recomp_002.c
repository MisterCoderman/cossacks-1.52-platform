#include "recomp.h"

/* FUN_10009e8f @ 0x118e9e8f (517 bytes, 195 insns) */
void f_118e9e8f(void) {
  FTRACE(0x118e9e8fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e9e8f push ebp */
  push32((uint32_t)(EBP));
  /* 118e9e90 mov ebp, esp */
  EBP = (ESP);
  /* 118e9e92 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9e95 push ebx */
  push32((uint32_t)(EBX));
  /* 118e9e96 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118e9e9a push esi */
  push32((uint32_t)(ESI));
  /* 118e9e9b push edi */
  push32((uint32_t)(EDI));
  /* 118e9e9c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e9e9f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118e9ea1 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 118e9ea4 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_118e9ea7:;
  /* 118e9ea7 cmp dword ptr [0x118f1858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9eae jle 0x118e9ebf */
  if ((C.zf||C.sf!=C.of)) goto L_118e9ebf;
  /* 118e9eb0 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118e9eb3 push 8 */
  push32((uint32_t)(0x8u));
  /* 118e9eb5 push eax */
  push32((uint32_t)(EAX));
  /* 118e9eb6 call 0x118e6832 */
  push32(0x118e9ebbu); f_118e6832();
  /* 118e9ebb pop ecx */
  ECX = (pop32());
  /* 118e9ebc pop ecx */
  ECX = (pop32());
  /* 118e9ebd jmp 0x118e9ece */
  goto L_118e9ece;
L_118e9ebf:;
  /* 118e9ebf mov ecx, dword ptr [0x118f1864] */
  ECX = (r32((uint32_t)(0x118f1864)));
  /* 118e9ec5 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118e9ec8 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118e9ecb and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_118e9ece:;
  /* 118e9ece test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e9ed0 je 0x118e9ed7 */
  if (C.zf) goto L_118e9ed7;
  /* 118e9ed2 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 118e9ed4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e9ed5 jmp 0x118e9ea7 */
  goto L_118e9ea7;
L_118e9ed7:;
  /* 118e9ed7 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9eda mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 118e9edd jne 0x118e9ee5 */
  if (!C.zf) goto L_118e9ee5;
  /* 118e9edf or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 118e9ee3 jmp 0x118e9eea */
  goto L_118e9eea;
L_118e9ee5:;
  /* 118e9ee5 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9ee8 jne 0x118e9ef0 */
  if (!C.zf) goto L_118e9ef0;
L_118e9eea:;
  /* 118e9eea mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 118e9eec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e9eed mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_118e9ef0:;
  /* 118e9ef0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e9ef3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e9ef5 jl 0x118ea084 */
  if ((C.sf!=C.of)) goto L_118ea084;
  /* 118e9efb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9efe je 0x118ea084 */
  if (C.zf) goto L_118ea084;
  /* 118e9f04 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9f07 jg 0x118ea084 */
  if ((!C.zf&&C.sf==C.of)) goto L_118ea084;
  /* 118e9f0d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118e9f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e9f11 pop ecx */
  ECX = (pop32());
  /* 118e9f12 jne 0x118e9f38 */
  if (!C.zf) goto L_118e9f38;
  /* 118e9f14 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9f17 je 0x118e9f22 */
  if (C.zf) goto L_118e9f22;
  /* 118e9f19 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 118e9f20 jmp 0x118e9f54 */
  goto L_118e9f54;
L_118e9f22:;
  /* 118e9f22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e9f24 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9f26 je 0x118e9f35 */
  if (C.zf) goto L_118e9f35;
  /* 118e9f28 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9f2a je 0x118e9f35 */
  if (C.zf) goto L_118e9f35;
  /* 118e9f2c mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 118e9f33 jmp 0x118e9f54 */
  goto L_118e9f54;
L_118e9f35:;
  /* 118e9f35 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_118e9f38:;
  /* 118e9f38 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9f3b jne 0x118e9f54 */
  if (!C.zf) goto L_118e9f54;
  /* 118e9f3d cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9f40 jne 0x118e9f54 */
  if (!C.zf) goto L_118e9f54;
  /* 118e9f42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e9f44 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9f46 je 0x118e9f4c */
  if (C.zf) goto L_118e9f4c;
  /* 118e9f48 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e9f4a jne 0x118e9f54 */
  if (!C.zf) goto L_118e9f54;
L_118e9f4c:;
  /* 118e9f4c mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e9f4f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e9f50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e9f51 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_118e9f54:;
  /* 118e9f54 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e9f57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118e9f59 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e9f5c mov edi, 0x103 */
  EDI = (0x103u);
  /* 118e9f61 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_118e9f64:;
  /* 118e9f64 cmp dword ptr [0x118f1858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9f6b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 118e9f6e jle 0x118e9f7c */
  if ((C.zf||C.sf!=C.of)) goto L_118e9f7c;
  /* 118e9f70 push 4 */
  push32((uint32_t)(0x4u));
  /* 118e9f72 push esi */
  push32((uint32_t)(ESI));
  /* 118e9f73 call 0x118e6832 */
  push32(0x118e9f78u); f_118e6832();
  /* 118e9f78 pop ecx */
  ECX = (pop32());
  /* 118e9f79 pop ecx */
  ECX = (pop32());
  /* 118e9f7a jmp 0x118e9f87 */
  goto L_118e9f87;
L_118e9f7c:;
  /* 118e9f7c mov eax, dword ptr [0x118f1864] */
  EAX = (r32((uint32_t)(0x118f1864)));
  /* 118e9f81 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 118e9f84 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_118e9f87:;
  /* 118e9f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e9f89 je 0x118e9f93 */
  if (C.zf) goto L_118e9f93;
  /* 118e9f8b movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118e9f8e sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e9f91 jmp 0x118e9fc5 */
  goto L_118e9fc5;
L_118e9f93:;
  /* 118e9f93 cmp dword ptr [0x118f1858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9f9a jle 0x118e9fa7 */
  if ((C.zf||C.sf!=C.of)) goto L_118e9fa7;
  /* 118e9f9c push edi */
  push32((uint32_t)(EDI));
  /* 118e9f9d push esi */
  push32((uint32_t)(ESI));
  /* 118e9f9e call 0x118e6832 */
  push32(0x118e9fa3u); f_118e6832();
  /* 118e9fa3 pop ecx */
  ECX = (pop32());
  /* 118e9fa4 pop ecx */
  ECX = (pop32());
  /* 118e9fa5 jmp 0x118e9fb2 */
  goto L_118e9fb2;
L_118e9fa7:;
  /* 118e9fa7 mov eax, dword ptr [0x118f1864] */
  EAX = (r32((uint32_t)(0x118f1864)));
  /* 118e9fac mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 118e9fb0 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_118e9fb2:;
  /* 118e9fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e9fb4 je 0x118ea000 */
  if (C.zf) goto L_118ea000;
  /* 118e9fb6 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118e9fb9 push eax */
  push32((uint32_t)(EAX));
  /* 118e9fba call 0x118ebce1 */
  push32(0x118e9fbfu); f_118ebce1();
  /* 118e9fbf pop ecx */
  ECX = (pop32());
  /* 118e9fc0 mov ecx, eax */
  ECX = (EAX);
  /* 118e9fc2 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_118e9fc5:;
  /* 118e9fc5 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9fc8 jae 0x118ea000 */
  if (!C.cf) goto L_118ea000;
  /* 118e9fca mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 118e9fcd or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 118e9fd1 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9fd4 jb 0x118e9fea */
  if (C.cf) goto L_118e9fea;
  /* 118e9fd6 jne 0x118e9fe4 */
  if (!C.zf) goto L_118e9fe4;
  /* 118e9fd8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e9fdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118e9fdd div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e9fe0 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e9fe2 jbe 0x118e9fea */
  if ((C.cf||C.zf)) goto L_118e9fea;
L_118e9fe4:;
  /* 118e9fe4 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 118e9fe8 jmp 0x118e9ff3 */
  goto L_118e9ff3;
L_118e9fea:;
  /* 118e9fea imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e9fee add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e9ff0 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_118e9ff3:;
  /* 118e9ff3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e9ff6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118e9ff9 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 118e9ffb jmp 0x118e9f64 */
  goto L_118e9f64;
L_118ea000:;
  /* 118ea000 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118ea003 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 118ea006 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ea009 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 118ea00b jne 0x118ea01d */
  if (!C.zf) goto L_118ea01d;
  /* 118ea00d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118ea00f je 0x118ea017 */
  if (C.zf) goto L_118ea017;
  /* 118ea011 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ea014 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118ea017:;
  /* 118ea017 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118ea01b jmp 0x118ea068 */
  goto L_118ea068;
L_118ea01d:;
  /* 118ea01d test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 118ea01f mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 118ea024 jne 0x118ea041 */
  if (!C.zf) goto L_118ea041;
  /* 118ea026 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 118ea028 jne 0x118ea068 */
  if (!C.zf) goto L_118ea068;
  /* 118ea02a and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 118ea02d je 0x118ea038 */
  if (C.zf) goto L_118ea038;
  /* 118ea02f cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea036 ja 0x118ea041 */
  if ((!C.cf&&!C.zf)) goto L_118ea041;
L_118ea038:;
  /* 118ea038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea03a jne 0x118ea068 */
  if (!C.zf) goto L_118ea068;
  /* 118ea03c cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea03f jbe 0x118ea068 */
  if ((C.cf||C.zf)) goto L_118ea068;
L_118ea041:;
  /* 118ea041 call 0x118eb2bd */
  push32(0x118ea046u); f_118eb2bd();
  /* 118ea046 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 118ea04a mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 118ea050 je 0x118ea058 */
  if (C.zf) goto L_118ea058;
  /* 118ea052 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118ea056 jmp 0x118ea068 */
  goto L_118ea068;
L_118ea058:;
  /* 118ea058 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118ea05b and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 118ea05d neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 118ea05f sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea061 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ea063 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea065 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118ea068:;
  /* 118ea068 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118ea06a je 0x118ea071 */
  if (C.zf) goto L_118ea071;
  /* 118ea06c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118ea06f mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_118ea071:;
  /* 118ea071 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 118ea075 je 0x118ea07f */
  if (C.zf) goto L_118ea07f;
  /* 118ea077 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118ea07a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ea07c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118ea07f:;
  /* 118ea07f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118ea082 jmp 0x118ea08f */
  goto L_118ea08f;
L_118ea084:;
  /* 118ea084 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ea087 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea089 je 0x118ea08d */
  if (C.zf) goto L_118ea08d;
  /* 118ea08b mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_118ea08d:;
  /* 118ea08d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ea08f:;
  /* 118ea08f pop edi */
  EDI = (pop32());
  /* 118ea090 pop esi */
  ESI = (pop32());
  /* 118ea091 pop ebx */
  EBX = (pop32());
  /* 118ea092 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ea093 ret  */
  ESPCHK(0x118e9e8fu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x118ea0b0 (193 bytes, 90 insns) */
void f_118ea0b0(void) {
  FTRACE(0x118ea0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea0b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ea0b2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 118ea0b6 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea0b7 mov ebx, eax */
  EBX = (EAX);
  /* 118ea0b9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118ea0bc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ea0c0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 118ea0c6 je 0x118ea0db */
  if (C.zf) goto L_118ea0db;
L_118ea0c8:;
  /* 118ea0c8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 118ea0ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118ea0cb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea0cd je 0x118ea0a0 */
  if (C.zf) { jmp_ind(0x118ea0a0u); return; }
  /* 118ea0cf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 118ea0d1 je 0x118ea124 */
  if (C.zf) goto L_118ea124;
  /* 118ea0d3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 118ea0d9 jne 0x118ea0c8 */
  if (!C.zf) goto L_118ea0c8;
L_118ea0db:;
  /* 118ea0db or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 118ea0dd push edi */
  push32((uint32_t)(EDI));
  /* 118ea0de mov eax, ebx */
  EAX = (EBX);
  /* 118ea0e0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 118ea0e3 push esi */
  push32((uint32_t)(ESI));
  /* 118ea0e4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_118ea0e6:;
  /* 118ea0e6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 118ea0e8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 118ea0ed mov eax, ecx */
  EAX = (ECX);
  /* 118ea0ef mov esi, edi */
  ESI = (EDI);
  /* 118ea0f1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 118ea0f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea0f5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea0f7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 118ea0fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ea0fd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118ea0ff xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 118ea101 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea104 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 118ea10a jne 0x118ea128 */
  if (!C.zf) goto L_118ea128;
  /* 118ea10c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 118ea111 je 0x118ea0e6 */
  if (C.zf) goto L_118ea0e6;
  /* 118ea113 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 118ea118 jne 0x118ea122 */
  if (!C.zf) goto L_118ea122;
  /* 118ea11a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 118ea120 jne 0x118ea0e6 */
  if (!C.zf) goto L_118ea0e6;
L_118ea122:;
  /* 118ea122 pop esi */
  ESI = (pop32());
  /* 118ea123 pop edi */
  EDI = (pop32());
L_118ea124:;
  /* 118ea124 pop ebx */
  EBX = (pop32());
  /* 118ea125 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ea127 ret  */
  ESPCHK(0x118ea0b0u, _esp0);
  ESP += 4; return;
L_118ea128:;
  /* 118ea128 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 118ea12b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea12d je 0x118ea165 */
  if (C.zf) goto L_118ea165;
  /* 118ea12f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118ea131 je 0x118ea122 */
  if (C.zf) goto L_118ea122;
  /* 118ea133 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea135 je 0x118ea15e */
  if (C.zf) goto L_118ea15e;
  /* 118ea137 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118ea139 je 0x118ea122 */
  if (C.zf) goto L_118ea122;
  /* 118ea13b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118ea13e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea140 je 0x118ea157 */
  if (C.zf) goto L_118ea157;
  /* 118ea142 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118ea144 je 0x118ea122 */
  if (C.zf) goto L_118ea122;
  /* 118ea146 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea148 je 0x118ea150 */
  if (C.zf) goto L_118ea150;
  /* 118ea14a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118ea14c je 0x118ea122 */
  if (C.zf) goto L_118ea122;
  /* 118ea14e jmp 0x118ea0e6 */
  goto L_118ea0e6;
L_118ea150:;
  /* 118ea150 pop esi */
  ESI = (pop32());
  /* 118ea151 pop edi */
  EDI = (pop32());
  /* 118ea152 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 118ea155 pop ebx */
  EBX = (pop32());
  /* 118ea156 ret  */
  ESPCHK(0x118ea0b0u, _esp0);
  ESP += 4; return;
L_118ea157:;
  /* 118ea157 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 118ea15a pop esi */
  ESI = (pop32());
  /* 118ea15b pop edi */
  EDI = (pop32());
  /* 118ea15c pop ebx */
  EBX = (pop32());
  /* 118ea15d ret  */
  ESPCHK(0x118ea0b0u, _esp0);
  ESP += 4; return;
L_118ea15e:;
  /* 118ea15e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 118ea161 pop esi */
  ESI = (pop32());
  /* 118ea162 pop edi */
  EDI = (pop32());
  /* 118ea163 pop ebx */
  EBX = (pop32());
  /* 118ea164 ret  */
  ESPCHK(0x118ea0b0u, _esp0);
  ESP += 4; return;
L_118ea165:;
  /* 118ea165 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 118ea168 pop esi */
  ESI = (pop32());
  /* 118ea169 pop edi */
  EDI = (pop32());
  /* 118ea16a pop ebx */
  EBX = (pop32());
  /* 118ea16b ret  */
  ESPCHK(0x118ea0b0u, _esp0);
  ESP += 4; return;
  /* 118ea16c int3  */
  x86_unimpl("int3 @ 0x118ea16c");
  /* 118ea16d int3  */
  x86_unimpl("int3 @ 0x118ea16d");
  /* 118ea16e int3  */
  x86_unimpl("int3 @ 0x118ea16e");
  /* 118ea16f int3  */
  x86_unimpl("int3 @ 0x118ea16f");
}

/* _strstr @ 0x118ea170 (128 bytes, 66 insns) */
void f_118ea170(void) {
  FTRACE(0x118ea170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea170 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ea174 push edi */
  push32((uint32_t)(EDI));
  /* 118ea175 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea176 push esi */
  push32((uint32_t)(ESI));
  /* 118ea177 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118ea179 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 118ea17d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118ea17f je 0x118ea1ea */
  if (C.zf) goto L_118ea1ea;
  /* 118ea181 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 118ea184 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 118ea186 je 0x118ea1d7 */
  if (C.zf) goto L_118ea1d7;
L_118ea188:;
  /* 118ea188 mov esi, edi */
  ESI = (EDI);
  /* 118ea18a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 118ea18e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 118ea190 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ea191 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea193 je 0x118ea1aa */
  if (C.zf) goto L_118ea1aa;
  /* 118ea195 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118ea197 je 0x118ea1a4 */
  if (C.zf) goto L_118ea1a4;
L_118ea199:;
  /* 118ea199 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ea19b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118ea19c:;
  /* 118ea19c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea19e je 0x118ea1aa */
  if (C.zf) goto L_118ea1aa;
  /* 118ea1a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118ea1a2 jne 0x118ea199 */
  if (!C.zf) goto L_118ea199;
L_118ea1a4:;
  /* 118ea1a4 pop esi */
  ESI = (pop32());
  /* 118ea1a5 pop ebx */
  EBX = (pop32());
  /* 118ea1a6 pop edi */
  EDI = (pop32());
  /* 118ea1a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ea1a9 ret  */
  ESPCHK(0x118ea170u, _esp0);
  ESP += 4; return;
L_118ea1aa:;
  /* 118ea1aa mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ea1ac inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ea1ad cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea1af jne 0x118ea19c */
  if (!C.zf) goto L_118ea19c;
  /* 118ea1b1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_118ea1b4:;
  /* 118ea1b4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 118ea1b7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 118ea1b9 je 0x118ea1e3 */
  if (C.zf) goto L_118ea1e3;
  /* 118ea1bb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ea1bd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea1c0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea1c2 jne 0x118ea188 */
  if (!C.zf) goto L_118ea188;
  /* 118ea1c4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 118ea1c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118ea1c9 je 0x118ea1e3 */
  if (C.zf) goto L_118ea1e3;
  /* 118ea1cb mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 118ea1ce add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea1d1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea1d3 je 0x118ea1b4 */
  if (C.zf) goto L_118ea1b4;
  /* 118ea1d5 jmp 0x118ea188 */
  goto L_118ea188;
L_118ea1d7:;
  /* 118ea1d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ea1d9 pop esi */
  ESI = (pop32());
  /* 118ea1da pop ebx */
  EBX = (pop32());
  /* 118ea1db pop edi */
  EDI = (pop32());
  /* 118ea1dc mov al, dl */
  AL = (DL);
  /* 118ea1de jmp 0x118ea0b6 */
  jmp_ind(0x118ea0b6u); return;
L_118ea1e3:;
  /* 118ea1e3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 118ea1e6 pop esi */
  ESI = (pop32());
  /* 118ea1e7 pop ebx */
  EBX = (pop32());
  /* 118ea1e8 pop edi */
  EDI = (pop32());
  /* 118ea1e9 ret  */
  ESPCHK(0x118ea170u, _esp0);
  ESP += 4; return;
L_118ea1ea:;
  /* 118ea1ea mov eax, edi */
  EAX = (EDI);
  /* 118ea1ec pop esi */
  ESI = (pop32());
  /* 118ea1ed pop ebx */
  EBX = (pop32());
  /* 118ea1ee pop edi */
  EDI = (pop32());
  /* 118ea1ef ret  */
  ESPCHK(0x118ea170u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x118ea1f0 (56 bytes, 31 insns) */
void f_118ea1f0(void) {
  FTRACE(0x118ea1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118ea1f1 mov ebp, esp */
  EBP = (ESP);
  /* 118ea1f3 push edi */
  push32((uint32_t)(EDI));
  /* 118ea1f4 push esi */
  push32((uint32_t)(ESI));
  /* 118ea1f5 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea1f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ea1f9 jecxz 0x118ea221 */
  x86_unimpl("jecxz @ 0x118ea1f9");
  /* 118ea1fb mov ebx, ecx */
  EBX = (ECX);
  /* 118ea1fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118ea200 mov esi, edi */
  ESI = (EDI);
  /* 118ea202 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ea204 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 118ea206 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ea208 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea20a mov edi, esi */
  EDI = (ESI);
  /* 118ea20c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118ea20f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 118ea211 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 118ea214 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118ea216 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea219 ja 0x118ea21f */
  if ((!C.cf&&!C.zf)) goto L_118ea21f;
  /* 118ea21b je 0x118ea221 */
  if (C.zf) goto L_118ea221;
  /* 118ea21d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118ea21e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_118ea21f:;
  /* 118ea21f not ecx */
  ECX = (~(ECX));
L_118ea221:;
  /* 118ea221 mov eax, ecx */
  EAX = (ECX);
  /* 118ea223 pop ebx */
  EBX = (pop32());
  /* 118ea224 pop esi */
  ESI = (pop32());
  /* 118ea225 pop edi */
  EDI = (pop32());
  /* 118ea226 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ea227 ret  */
  ESPCHK(0x118ea1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a230 @ 0x118ea230 (47 bytes, 17 insns) */
void f_118ea230(void) {
  FTRACE(0x118ea230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea230 push ecx */
  push32((uint32_t)(ECX));
  /* 118ea231 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea236 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 118ea23a jb 0x118ea250 */
  if (C.cf) goto L_118ea250;
L_118ea23c:;
  /* 118ea23c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea242 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea247 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 118ea249 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea24e jae 0x118ea23c */
  if (!C.cf) goto L_118ea23c;
L_118ea250:;
  /* 118ea250 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea252 mov eax, esp */
  EAX = (ESP);
  /* 118ea254 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 118ea256 mov esp, ecx */
  ESP = (ECX);
  /* 118ea258 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118ea25a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ea25d push eax */
  push32((uint32_t)(EAX));
  /* 118ea25e ret  */
  ESPCHK(0x118ea230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a25f @ 0x118ea25f (137 bytes, 50 insns) */
void f_118ea25f(void) {
  FTRACE(0x118ea25fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea25f push ebx */
  push32((uint32_t)(EBX));
  /* 118ea260 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ea262 cmp dword ptr [0x119096a8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119096a8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea268 push esi */
  push32((uint32_t)(ESI));
  /* 118ea269 push edi */
  push32((uint32_t)(EDI));
  /* 118ea26a jne 0x118ea2ae */
  if (!C.zf) goto L_118ea2ae;
  /* 118ea26c push 0x118ef73c */
  push32((uint32_t)(0x118ef73cu));
  /* 118ea271 call dword ptr [0x118ef048] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef048))), 0x118ea277u);
  /* 118ea277 mov edi, eax */
  EDI = (EAX);
  /* 118ea279 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea27b je 0x118ea2e4 */
  if (C.zf) goto L_118ea2e4;
  /* 118ea27d mov esi, dword ptr [0x118ef0e8] */
  ESI = (r32((uint32_t)(0x118ef0e8)));
  /* 118ea283 push 0x118ef730 */
  push32((uint32_t)(0x118ef730u));
  /* 118ea288 push edi */
  push32((uint32_t)(EDI));
  /* 118ea289 call esi */
  call_ind((uint32_t)(ESI), 0x118ea28bu);
  /* 118ea28b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea28d mov dword ptr [0x119096a8], eax */
  w32((uint32_t)(0x119096a8), (EAX));
  /* 118ea292 je 0x118ea2e4 */
  if (C.zf) goto L_118ea2e4;
  /* 118ea294 push 0x118ef720 */
  push32((uint32_t)(0x118ef720u));
  /* 118ea299 push edi */
  push32((uint32_t)(EDI));
  /* 118ea29a call esi */
  call_ind((uint32_t)(ESI), 0x118ea29cu);
  /* 118ea29c push 0x118ef70c */
  push32((uint32_t)(0x118ef70cu));
  /* 118ea2a1 push edi */
  push32((uint32_t)(EDI));
  /* 118ea2a2 mov dword ptr [0x119096ac], eax */
  w32((uint32_t)(0x119096ac), (EAX));
  /* 118ea2a7 call esi */
  call_ind((uint32_t)(ESI), 0x118ea2a9u);
  /* 118ea2a9 mov dword ptr [0x119096b0], eax */
  w32((uint32_t)(0x119096b0), (EAX));
L_118ea2ae:;
  /* 118ea2ae mov eax, dword ptr [0x119096ac] */
  EAX = (r32((uint32_t)(0x119096ac)));
  /* 118ea2b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea2b5 je 0x118ea2cd */
  if (C.zf) goto L_118ea2cd;
  /* 118ea2b7 call eax */
  call_ind((uint32_t)(EAX), 0x118ea2b9u);
  /* 118ea2b9 mov ebx, eax */
  EBX = (EAX);
  /* 118ea2bb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118ea2bd je 0x118ea2cd */
  if (C.zf) goto L_118ea2cd;
  /* 118ea2bf mov eax, dword ptr [0x119096b0] */
  EAX = (r32((uint32_t)(0x119096b0)));
  /* 118ea2c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea2c6 je 0x118ea2cd */
  if (C.zf) goto L_118ea2cd;
  /* 118ea2c8 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea2c9 call eax */
  call_ind((uint32_t)(EAX), 0x118ea2cbu);
  /* 118ea2cb mov ebx, eax */
  EBX = (EAX);
L_118ea2cd:;
  /* 118ea2cd push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118ea2d1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118ea2d5 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118ea2d9 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea2da call dword ptr [0x119096a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119096a8))), 0x118ea2e0u);
L_118ea2e0:;
  /* 118ea2e0 pop edi */
  EDI = (pop32());
  /* 118ea2e1 pop esi */
  ESI = (pop32());
  /* 118ea2e2 pop ebx */
  EBX = (pop32());
  /* 118ea2e3 ret  */
  ESPCHK(0x118ea25fu, _esp0);
  ESP += 4; return;
L_118ea2e4:;
  /* 118ea2e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ea2e6 jmp 0x118ea2e0 */
  goto L_118ea2e0;
}

/* _strncpy @ 0x118ea2f0 (254 bytes, 109 insns) */
void f_118ea2f0(void) {
  FTRACE(0x118ea2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea2f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118ea2f4 push edi */
  push32((uint32_t)(EDI));
  /* 118ea2f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118ea2f7 je 0x118ea373 */
  if (C.zf) goto L_118ea373;
  /* 118ea2f9 push esi */
  push32((uint32_t)(ESI));
  /* 118ea2fa push ebx */
  push32((uint32_t)(EBX));
  /* 118ea2fb mov ebx, ecx */
  EBX = (ECX);
  /* 118ea2fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 118ea301 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 118ea307 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 118ea30b jne 0x118ea314 */
  if (!C.zf) goto L_118ea314;
  /* 118ea30d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118ea310 jne 0x118ea381 */
  if (!C.zf) goto L_118ea381;
  /* 118ea312 jmp 0x118ea335 */
  goto L_118ea335;
L_118ea314:;
  /* 118ea314 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ea316 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ea317 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118ea319 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ea31a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118ea31b je 0x118ea342 */
  if (C.zf) goto L_118ea342;
  /* 118ea31d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118ea31f je 0x118ea34a */
  if (C.zf) goto L_118ea34a;
  /* 118ea321 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 118ea327 jne 0x118ea314 */
  if (!C.zf) goto L_118ea314;
  /* 118ea329 mov ebx, ecx */
  EBX = (ECX);
  /* 118ea32b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118ea32e jne 0x118ea381 */
  if (!C.zf) goto L_118ea381;
L_118ea330:;
  /* 118ea330 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 118ea333 je 0x118ea342 */
  if (C.zf) goto L_118ea342;
L_118ea335:;
  /* 118ea335 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ea337 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ea338 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118ea33a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ea33b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118ea33d je 0x118ea36e */
  if (C.zf) goto L_118ea36e;
  /* 118ea33f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118ea340 jne 0x118ea335 */
  if (!C.zf) goto L_118ea335;
L_118ea342:;
  /* 118ea342 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118ea346 pop ebx */
  EBX = (pop32());
  /* 118ea347 pop esi */
  ESI = (pop32());
  /* 118ea348 pop edi */
  EDI = (pop32());
  /* 118ea349 ret  */
  ESPCHK(0x118ea2f0u, _esp0);
  ESP += 4; return;
L_118ea34a:;
  /* 118ea34a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118ea350 je 0x118ea364 */
  if (C.zf) goto L_118ea364;
L_118ea352:;
  /* 118ea352 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118ea354 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ea355 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118ea356 je 0x118ea3e6 */
  if (C.zf) goto L_118ea3e6;
  /* 118ea35c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118ea362 jne 0x118ea352 */
  if (!C.zf) goto L_118ea352;
L_118ea364:;
  /* 118ea364 mov ebx, ecx */
  EBX = (ECX);
  /* 118ea366 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118ea369 jne 0x118ea3d7 */
  if (!C.zf) goto L_118ea3d7;
L_118ea36b:;
  /* 118ea36b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118ea36d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_118ea36e:;
  /* 118ea36e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118ea36f jne 0x118ea36b */
  if (!C.zf) goto L_118ea36b;
  /* 118ea371 pop ebx */
  EBX = (pop32());
  /* 118ea372 pop esi */
  ESI = (pop32());
L_118ea373:;
  /* 118ea373 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ea377 pop edi */
  EDI = (pop32());
  /* 118ea378 ret  */
  ESPCHK(0x118ea2f0u, _esp0);
  ESP += 4; return;
L_118ea379:;
  /* 118ea379 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118ea37b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea37e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118ea37f je 0x118ea330 */
  if (C.zf) goto L_118ea330;
L_118ea381:;
  /* 118ea381 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 118ea386 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ea388 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea38a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ea38d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118ea38f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 118ea391 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea394 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 118ea399 je 0x118ea379 */
  if (C.zf) goto L_118ea379;
  /* 118ea39b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 118ea39d je 0x118ea3cb */
  if (C.zf) goto L_118ea3cb;
  /* 118ea39f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 118ea3a1 je 0x118ea3c1 */
  if (C.zf) goto L_118ea3c1;
  /* 118ea3a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 118ea3a9 je 0x118ea3b7 */
  if (C.zf) goto L_118ea3b7;
  /* 118ea3ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 118ea3b1 jne 0x118ea379 */
  if (!C.zf) goto L_118ea379;
  /* 118ea3b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118ea3b5 jmp 0x118ea3cf */
  goto L_118ea3cf;
L_118ea3b7:;
  /* 118ea3b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118ea3bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118ea3bf jmp 0x118ea3cf */
  goto L_118ea3cf;
L_118ea3c1:;
  /* 118ea3c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 118ea3c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 118ea3c9 jmp 0x118ea3cf */
  goto L_118ea3cf;
L_118ea3cb:;
  /* 118ea3cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118ea3cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_118ea3cf:;
  /* 118ea3cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea3d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ea3d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118ea3d5 je 0x118ea3e1 */
  if (C.zf) goto L_118ea3e1;
L_118ea3d7:;
  /* 118ea3d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ea3d9:;
  /* 118ea3d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118ea3db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea3de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118ea3df jne 0x118ea3d9 */
  if (!C.zf) goto L_118ea3d9;
L_118ea3e1:;
  /* 118ea3e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 118ea3e4 jne 0x118ea36b */
  if (!C.zf) goto L_118ea36b;
L_118ea3e6:;
  /* 118ea3e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118ea3ea pop ebx */
  EBX = (pop32());
  /* 118ea3eb pop esi */
  ESI = (pop32());
  /* 118ea3ec pop edi */
  EDI = (pop32());
  /* 118ea3ed ret  */
  ESPCHK(0x118ea2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3ee @ 0x118ea3ee (386 bytes, 138 insns) */
void f_118ea3ee(void) {
  FTRACE(0x118ea3eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea3ee push ebp */
  push32((uint32_t)(EBP));
  /* 118ea3ef mov ebp, esp */
  EBP = (ESP);
  /* 118ea3f1 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ea3f7 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ea3fb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ea3fc push ebx */
  push32((uint32_t)(EBX));
  /* 118ea3fd push esi */
  push32((uint32_t)(ESI));
  /* 118ea3fe dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ea3ff push edi */
  push32((uint32_t)(EDI));
  /* 118ea400 je 0x118ea469 */
  if (C.zf) goto L_118ea469;
  /* 118ea402 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ea403 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ea404 je 0x118ea44c */
  if (C.zf) goto L_118ea44c;
  /* 118ea406 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea409 je 0x118ea44c */
  if (C.zf) goto L_118ea44c;
  /* 118ea40b sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea40e je 0x118ea44c */
  if (C.zf) goto L_118ea44c;
  /* 118ea410 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea413 je 0x118ea43f */
  if (C.zf) goto L_118ea43f;
  /* 118ea415 sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea418 je 0x118ea432 */
  if (C.zf) goto L_118ea432;
  /* 118ea41a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ea41b je 0x118ea425 */
  if (C.zf) goto L_118ea425;
  /* 118ea41d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ea420 jmp 0x118ea56b */
  goto L_118ea56b;
L_118ea425:;
  /* 118ea425 mov ebx, dword ptr [0x119096bc] */
  EBX = (r32((uint32_t)(0x119096bc)));
  /* 118ea42b mov edi, 0x119096bc */
  EDI = (0x119096bcu);
  /* 118ea430 jmp 0x118ea474 */
  goto L_118ea474;
L_118ea432:;
  /* 118ea432 mov ebx, dword ptr [0x119096b8] */
  EBX = (r32((uint32_t)(0x119096b8)));
  /* 118ea438 mov edi, 0x119096b8 */
  EDI = (0x119096b8u);
  /* 118ea43d jmp 0x118ea474 */
  goto L_118ea474;
L_118ea43f:;
  /* 118ea43f mov ebx, dword ptr [0x119096c0] */
  EBX = (r32((uint32_t)(0x119096c0)));
  /* 118ea445 mov edi, 0x119096c0 */
  EDI = (0x119096c0u);
  /* 118ea44a jmp 0x118ea474 */
  goto L_118ea474;
L_118ea44c:;
  /* 118ea44c call 0x118e56f9 */
  push32(0x118ea451u); f_118e56f9();
  /* 118ea451 mov esi, eax */
  ESI = (EAX);
  /* 118ea453 push dword ptr [esi + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x50))));
  /* 118ea456 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ea459 call 0x118ea570 */
  push32(0x118ea45eu); f_118ea570();
  /* 118ea45e mov edi, eax */
  EDI = (EAX);
  /* 118ea460 pop ecx */
  ECX = (pop32());
  /* 118ea461 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea464 pop ecx */
  ECX = (pop32());
  /* 118ea465 mov ebx, dword ptr [edi] */
  EBX = (r32((uint32_t)(EDI)));
  /* 118ea467 jmp 0x118ea486 */
  goto L_118ea486;
L_118ea469:;
  /* 118ea469 mov ebx, dword ptr [0x119096b4] */
  EBX = (r32((uint32_t)(0x119096b4)));
  /* 118ea46f mov edi, 0x119096b4 */
  EDI = (0x119096b4u);
L_118ea474:;
  /* 118ea474 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea476 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118ea47d call 0x118e7509 */
  push32(0x118ea482u); f_118e7509();
  /* 118ea482 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118ea485 pop ecx */
  ECX = (pop32());
L_118ea486:;
  /* 118ea486 cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea489 jne 0x118ea4a1 */
  if (!C.zf) goto L_118ea4a1;
  /* 118ea48b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea48f je 0x118ea569 */
  if (C.zf) goto L_118ea569;
  /* 118ea495 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea496 call 0x118e756a */
  push32(0x118ea49bu); f_118e756a();
  /* 118ea49b pop ecx */
  ECX = (pop32());
  /* 118ea49c jmp 0x118ea569 */
  goto L_118ea569;
L_118ea4a1:;
  /* 118ea4a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118ea4a3 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea4a5 jne 0x118ea4bb */
  if (!C.zf) goto L_118ea4bb;
  /* 118ea4a7 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea4aa je 0x118ea4b4 */
  if (C.zf) goto L_118ea4b4;
  /* 118ea4ac push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea4ae call 0x118e756a */
  push32(0x118ea4b3u); f_118e756a();
  /* 118ea4b3 pop ecx */
  ECX = (pop32());
L_118ea4b4:;
  /* 118ea4b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 118ea4b6 call 0x118e502c */
  push32(0x118ea4bbu); f_118e502c();
L_118ea4bb:;
  /* 118ea4bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ea4be cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea4c1 je 0x118ea4cd */
  if (C.zf) goto L_118ea4cd;
  /* 118ea4c3 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea4c6 je 0x118ea4cd */
  if (C.zf) goto L_118ea4cd;
  /* 118ea4c8 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea4cb jne 0x118ea4e8 */
  if (!C.zf) goto L_118ea4e8;
L_118ea4cd:;
  /* 118ea4cd mov edx, dword ptr [esi + 0x54] */
  EDX = (r32((uint32_t)(ESI + 0x54)));
  /* 118ea4d0 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea4d3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118ea4d6 mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 118ea4d9 jne 0x118ea524 */
  if (!C.zf) goto L_118ea524;
  /* 118ea4db mov edx, dword ptr [esi + 0x58] */
  EDX = (r32((uint32_t)(ESI + 0x58)));
  /* 118ea4de mov dword ptr [esi + 0x58], 0x8c */
  w32((uint32_t)(ESI + 0x58), (0x8cu));
  /* 118ea4e5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_118ea4e8:;
  /* 118ea4e8 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea4eb jne 0x118ea524 */
  if (!C.zf) goto L_118ea524;
  /* 118ea4ed mov ecx, dword ptr [0x118f3e98] */
  ECX = (r32((uint32_t)(0x118f3e98)));
  /* 118ea4f3 mov eax, dword ptr [0x118f3e9c] */
  EAX = (r32((uint32_t)(0x118f3e9c)));
  /* 118ea4f8 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea4fa cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea4fc jge 0x118ea526 */
  if ((C.sf==C.of)) goto L_118ea526;
  /* 118ea4fe lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 118ea501 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_118ea504:;
  /* 118ea504 mov edx, dword ptr [esi + 0x50] */
  EDX = (r32((uint32_t)(ESI + 0x50)));
  /* 118ea507 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea50a and dword ptr [edx + eax - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EDX + EAX*1 + -0x4)))&(0x0u); w32((uint32_t)(EDX + EAX*1 + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ea50f mov edx, dword ptr [0x118f3e98] */
  EDX = (r32((uint32_t)(0x118f3e98)));
  /* 118ea515 mov edi, dword ptr [0x118f3e9c] */
  EDI = (r32((uint32_t)(0x118f3e9c)));
  /* 118ea51b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118ea51c add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea51e cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea520 jl 0x118ea504 */
  if ((C.sf!=C.of)) goto L_118ea504;
  /* 118ea522 jmp 0x118ea526 */
  goto L_118ea526;
L_118ea524:;
  /* 118ea524 mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
L_118ea526:;
  /* 118ea526 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea52a je 0x118ea534 */
  if (C.zf) goto L_118ea534;
  /* 118ea52c push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea52e call 0x118e756a */
  push32(0x118ea533u); f_118e756a();
  /* 118ea533 pop ecx */
  ECX = (pop32());
L_118ea534:;
  /* 118ea534 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea538 jne 0x118ea545 */
  if (!C.zf) goto L_118ea545;
  /* 118ea53a push dword ptr [esi + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x58))));
  /* 118ea53d push 8 */
  push32((uint32_t)(0x8u));
  /* 118ea53f call ebx */
  call_ind((uint32_t)(EBX), 0x118ea541u);
  /* 118ea541 pop ecx */
  ECX = (pop32());
  /* 118ea542 pop ecx */
  ECX = (pop32());
  /* 118ea543 jmp 0x118ea557 */
  goto L_118ea557;
L_118ea545:;
  /* 118ea545 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ea548 call ebx */
  call_ind((uint32_t)(EBX), 0x118ea54au);
  /* 118ea54a cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea54e pop ecx */
  ECX = (pop32());
  /* 118ea54f je 0x118ea557 */
  if (C.zf) goto L_118ea557;
  /* 118ea551 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea555 jne 0x118ea569 */
  if (!C.zf) goto L_118ea569;
L_118ea557:;
  /* 118ea557 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118ea55a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea55e mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
  /* 118ea561 jne 0x118ea569 */
  if (!C.zf) goto L_118ea569;
  /* 118ea563 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118ea566 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
L_118ea569:;
  /* 118ea569 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ea56b:;
  /* 118ea56b pop edi */
  EDI = (pop32());
  /* 118ea56c pop esi */
  ESI = (pop32());
  /* 118ea56d pop ebx */
  EBX = (pop32());
  /* 118ea56e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ea56f ret  */
  ESPCHK(0x118ea3eeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a570 @ 0x118ea570 (61 bytes, 25 insns) */
void f_118ea570(void) {
  FTRACE(0x118ea570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea570 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ea574 mov ecx, dword ptr [0x118f3ea4] */
  ECX = (r32((uint32_t)(0x118f3ea4)));
  /* 118ea57a push esi */
  push32((uint32_t)(ESI));
  /* 118ea57b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ea57f cmp dword ptr [edx + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea582 push edi */
  push32((uint32_t)(EDI));
  /* 118ea583 mov eax, edx */
  EAX = (EDX);
  /* 118ea585 je 0x118ea599 */
  if (C.zf) goto L_118ea599;
  /* 118ea587 lea edi, [ecx + ecx*2] */
  EDI = ((uint32_t)(ECX + ECX*2));
  /* 118ea58a lea edi, [edx + edi*4] */
  EDI = ((uint32_t)(EDX + EDI*4));
L_118ea58d:;
  /* 118ea58d add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea590 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea592 jae 0x118ea599 */
  if (!C.cf) goto L_118ea599;
  /* 118ea594 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea597 jne 0x118ea58d */
  if (!C.zf) goto L_118ea58d;
L_118ea599:;
  /* 118ea599 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 118ea59c lea ecx, [edx + ecx*4] */
  ECX = ((uint32_t)(EDX + ECX*4));
  /* 118ea59f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea5a1 jae 0x118ea5a8 */
  if (!C.cf) goto L_118ea5a8;
  /* 118ea5a3 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea5a6 je 0x118ea5aa */
  if (C.zf) goto L_118ea5aa;
L_118ea5a8:;
  /* 118ea5a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ea5aa:;
  /* 118ea5aa pop edi */
  EDI = (pop32());
  /* 118ea5ab pop esi */
  ESI = (pop32());
  /* 118ea5ac ret  */
  ESPCHK(0x118ea570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5ad @ 0x118ea5ad (318 bytes, 123 insns) */
void f_118ea5ad(void) {
  FTRACE(0x118ea5adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea5ad push ebp */
  push32((uint32_t)(EBP));
  /* 118ea5ae mov ebp, esp */
  EBP = (ESP);
  /* 118ea5b0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ea5b2 push 0x118ef750 */
  push32((uint32_t)(0x118ef750u));
  /* 118ea5b7 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118ea5bc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ea5c2 push eax */
  push32((uint32_t)(EAX));
  /* 118ea5c3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118ea5ca sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea5cd push ebx */
  push32((uint32_t)(EBX));
  /* 118ea5ce push esi */
  push32((uint32_t)(ESI));
  /* 118ea5cf push edi */
  push32((uint32_t)(EDI));
  /* 118ea5d0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ea5d3 mov eax, dword ptr [0x119096c8] */
  EAX = (r32((uint32_t)(0x119096c8)));
  /* 118ea5d8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ea5da cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea5dc jne 0x118ea61c */
  if (!C.zf) goto L_118ea61c;
  /* 118ea5de lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 118ea5e1 push eax */
  push32((uint32_t)(EAX));
  /* 118ea5e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea5e4 pop esi */
  ESI = (pop32());
  /* 118ea5e5 push esi */
  push32((uint32_t)(ESI));
  /* 118ea5e6 push 0x118ef74c */
  push32((uint32_t)(0x118ef74cu));
  /* 118ea5eb push esi */
  push32((uint32_t)(ESI));
  /* 118ea5ec call dword ptr [0x118ef03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef03c))), 0x118ea5f2u);
  /* 118ea5f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea5f4 je 0x118ea5fa */
  if (C.zf) goto L_118ea5fa;
  /* 118ea5f6 mov eax, esi */
  EAX = (ESI);
  /* 118ea5f8 jmp 0x118ea617 */
  goto L_118ea617;
L_118ea5fa:;
  /* 118ea5fa lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 118ea5fd push eax */
  push32((uint32_t)(EAX));
  /* 118ea5fe push esi */
  push32((uint32_t)(ESI));
  /* 118ea5ff push 0x118ef748 */
  push32((uint32_t)(0x118ef748u));
  /* 118ea604 push esi */
  push32((uint32_t)(ESI));
  /* 118ea605 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea606 call dword ptr [0x118ef040] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef040))), 0x118ea60cu);
  /* 118ea60c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea60e je 0x118ea6e2 */
  if (C.zf) goto L_118ea6e2;
  /* 118ea614 push 2 */
  push32((uint32_t)(0x2u));
  /* 118ea616 pop eax */
  EAX = (pop32());
L_118ea617:;
  /* 118ea617 mov dword ptr [0x119096c8], eax */
  w32((uint32_t)(0x119096c8), (EAX));
L_118ea61c:;
  /* 118ea61c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea61f jne 0x118ea645 */
  if (!C.zf) goto L_118ea645;
  /* 118ea621 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118ea624 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea626 jne 0x118ea62d */
  if (!C.zf) goto L_118ea62d;
  /* 118ea628 mov eax, dword ptr [0x119096e0] */
  EAX = (r32((uint32_t)(0x119096e0)));
L_118ea62d:;
  /* 118ea62d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118ea630 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ea633 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ea636 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ea639 push eax */
  push32((uint32_t)(EAX));
  /* 118ea63a call dword ptr [0x118ef040] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef040))), 0x118ea640u);
  /* 118ea640 jmp 0x118ea6e4 */
  goto L_118ea6e4;
L_118ea645:;
  /* 118ea645 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea648 jne 0x118ea6e2 */
  if (!C.zf) goto L_118ea6e2;
  /* 118ea64e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea651 jne 0x118ea65b */
  if (!C.zf) goto L_118ea65b;
  /* 118ea653 mov eax, dword ptr [0x119096f0] */
  EAX = (r32((uint32_t)(0x119096f0)));
  /* 118ea658 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_118ea65b:;
  /* 118ea65b push ebx */
  push32((uint32_t)(EBX));
  /* 118ea65c push ebx */
  push32((uint32_t)(EBX));
  /* 118ea65d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ea660 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ea663 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118ea666 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ea668 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea66a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 118ea66d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ea66e push eax */
  push32((uint32_t)(EAX));
  /* 118ea66f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ea672 call dword ptr [0x118ef044] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef044))), 0x118ea678u);
  /* 118ea678 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118ea67b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea67d je 0x118ea6e2 */
  if (C.zf) goto L_118ea6e2;
  /* 118ea67f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 118ea682 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 118ea685 mov eax, edi */
  EAX = (EDI);
  /* 118ea687 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea68a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118ea68c call 0x118ea230 */
  push32(0x118ea691u); f_118ea230();
  /* 118ea691 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ea694 mov esi, esp */
  ESI = (ESP);
  /* 118ea696 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 118ea699 push edi */
  push32((uint32_t)(EDI));
  /* 118ea69a push ebx */
  push32((uint32_t)(EBX));
  /* 118ea69b push esi */
  push32((uint32_t)(ESI));
  /* 118ea69c call 0x118e7050 */
  push32(0x118ea6a1u); f_118e7050();
  /* 118ea6a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea6a4 jmp 0x118ea6b1 */
  goto L_118ea6b1;
  /* 118ea6a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea6a8 pop eax */
  EAX = (pop32());
  /* 118ea6a9 ret  */
  ESPCHK(0x118ea5adu, _esp0);
  ESP += 4; return;
  /* 118ea6aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118ea6ad xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ea6af xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118ea6b1:;
  /* 118ea6b1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ea6b5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea6b7 je 0x118ea6e2 */
  if (C.zf) goto L_118ea6e2;
  /* 118ea6b9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 118ea6bc push esi */
  push32((uint32_t)(ESI));
  /* 118ea6bd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ea6c0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ea6c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea6c5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ea6c8 call dword ptr [0x118ef044] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef044))), 0x118ea6ceu);
  /* 118ea6ce cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea6d0 je 0x118ea6e2 */
  if (C.zf) goto L_118ea6e2;
  /* 118ea6d2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118ea6d5 push eax */
  push32((uint32_t)(EAX));
  /* 118ea6d6 push esi */
  push32((uint32_t)(ESI));
  /* 118ea6d7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ea6da call dword ptr [0x118ef03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef03c))), 0x118ea6e0u);
  /* 118ea6e0 jmp 0x118ea6e4 */
  goto L_118ea6e4;
L_118ea6e2:;
  /* 118ea6e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ea6e4:;
  /* 118ea6e4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 118ea6e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ea6ea mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ea6f1 pop edi */
  EDI = (pop32());
  /* 118ea6f2 pop esi */
  ESI = (pop32());
  /* 118ea6f3 pop ebx */
  EBX = (pop32());
  /* 118ea6f4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ea6f5 ret  */
  ESPCHK(0x118ea5adu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6f6 @ 0x118ea6f6 (511 bytes, 193 insns) */
void f_118ea6f6(void) {
  FTRACE(0x118ea6f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea6f6 push ebp */
  push32((uint32_t)(EBP));
  /* 118ea6f7 mov ebp, esp */
  EBP = (ESP);
  /* 118ea6f9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ea6fb push 0x118ef760 */
  push32((uint32_t)(0x118ef760u));
  /* 118ea700 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118ea705 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ea70b push eax */
  push32((uint32_t)(EAX));
  /* 118ea70c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118ea713 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea716 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea717 push esi */
  push32((uint32_t)(ESI));
  /* 118ea718 push edi */
  push32((uint32_t)(EDI));
  /* 118ea719 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ea71c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118ea71e cmp dword ptr [0x119096f8], edi */
  { uint32_t _a=(r32((uint32_t)(0x119096f8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea724 jne 0x118ea76c */
  if (!C.zf) goto L_118ea76c;
  /* 118ea726 push edi */
  push32((uint32_t)(EDI));
  /* 118ea727 push edi */
  push32((uint32_t)(EDI));
  /* 118ea728 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea72a pop ebx */
  EBX = (pop32());
  /* 118ea72b push ebx */
  push32((uint32_t)(EBX));
  /* 118ea72c push 0x118ef74c */
  push32((uint32_t)(0x118ef74cu));
  /* 118ea731 mov esi, 0x100 */
  ESI = (0x100u);
  /* 118ea736 push esi */
  push32((uint32_t)(ESI));
  /* 118ea737 push edi */
  push32((uint32_t)(EDI));
  /* 118ea738 call dword ptr [0x118ef034] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef034))), 0x118ea73eu);
  /* 118ea73e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea740 je 0x118ea74a */
  if (C.zf) goto L_118ea74a;
  /* 118ea742 mov dword ptr [0x119096f8], ebx */
  w32((uint32_t)(0x119096f8), (EBX));
  /* 118ea748 jmp 0x118ea76c */
  goto L_118ea76c;
L_118ea74a:;
  /* 118ea74a push edi */
  push32((uint32_t)(EDI));
  /* 118ea74b push edi */
  push32((uint32_t)(EDI));
  /* 118ea74c push ebx */
  push32((uint32_t)(EBX));
  /* 118ea74d push 0x118ef748 */
  push32((uint32_t)(0x118ef748u));
  /* 118ea752 push esi */
  push32((uint32_t)(ESI));
  /* 118ea753 push edi */
  push32((uint32_t)(EDI));
  /* 118ea754 call dword ptr [0x118ef038] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef038))), 0x118ea75au);
  /* 118ea75a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea75c je 0x118ea884 */
  if (C.zf) goto L_118ea884;
  /* 118ea762 mov dword ptr [0x119096f8], 2 */
  w32((uint32_t)(0x119096f8), (0x2u));
L_118ea76c:;
  /* 118ea76c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea76f jle 0x118ea781 */
  if ((C.zf||C.sf!=C.of)) goto L_118ea781;
  /* 118ea771 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118ea774 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ea777 call 0x118ea91a */
  push32(0x118ea77cu); f_118ea91a();
  /* 118ea77c pop ecx */
  ECX = (pop32());
  /* 118ea77d pop ecx */
  ECX = (pop32());
  /* 118ea77e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_118ea781:;
  /* 118ea781 mov eax, dword ptr [0x119096f8] */
  EAX = (r32((uint32_t)(0x119096f8)));
  /* 118ea786 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea789 jne 0x118ea7a8 */
  if (!C.zf) goto L_118ea7a8;
  /* 118ea78b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118ea78e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ea791 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118ea794 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ea797 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ea79a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ea79d call dword ptr [0x118ef038] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef038))), 0x118ea7a3u);
  /* 118ea7a3 jmp 0x118ea886 */
  goto L_118ea886;
L_118ea7a8:;
  /* 118ea7a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea7ab jne 0x118ea884 */
  if (!C.zf) goto L_118ea884;
  /* 118ea7b1 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea7b4 jne 0x118ea7be */
  if (!C.zf) goto L_118ea7be;
  /* 118ea7b6 mov eax, dword ptr [0x119096f0] */
  EAX = (r32((uint32_t)(0x119096f0)));
  /* 118ea7bb mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_118ea7be:;
  /* 118ea7be push edi */
  push32((uint32_t)(EDI));
  /* 118ea7bf push edi */
  push32((uint32_t)(EDI));
  /* 118ea7c0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118ea7c3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ea7c6 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 118ea7c9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ea7cb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea7cd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 118ea7d0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ea7d1 push eax */
  push32((uint32_t)(EAX));
  /* 118ea7d2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ea7d5 call dword ptr [0x118ef044] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef044))), 0x118ea7dbu);
  /* 118ea7db mov ebx, eax */
  EBX = (EAX);
  /* 118ea7dd mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 118ea7e0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea7e2 je 0x118ea884 */
  if (C.zf) goto L_118ea884;
  /* 118ea7e8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118ea7eb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 118ea7ee add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea7f1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118ea7f3 call 0x118ea230 */
  push32(0x118ea7f8u); f_118ea230();
  /* 118ea7f8 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ea7fb mov eax, esp */
  EAX = (ESP);
  /* 118ea7fd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118ea800 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ea804 jmp 0x118ea819 */
  goto L_118ea819;
  /* 118ea806 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea808 pop eax */
  EAX = (pop32());
  /* 118ea809 ret  */
  ESPCHK(0x118ea6f6u, _esp0);
  ESP += 4; return;
  /* 118ea80a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118ea80d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118ea80f mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 118ea812 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ea816 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_118ea819:;
  /* 118ea819 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea81c je 0x118ea884 */
  if (C.zf) goto L_118ea884;
  /* 118ea81e push ebx */
  push32((uint32_t)(EBX));
  /* 118ea81f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118ea822 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118ea825 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ea828 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea82a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ea82d call dword ptr [0x118ef044] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef044))), 0x118ea833u);
  /* 118ea833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea835 je 0x118ea884 */
  if (C.zf) goto L_118ea884;
  /* 118ea837 push edi */
  push32((uint32_t)(EDI));
  /* 118ea838 push edi */
  push32((uint32_t)(EDI));
  /* 118ea839 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea83a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118ea83d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ea840 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ea843 call dword ptr [0x118ef034] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef034))), 0x118ea849u);
  /* 118ea849 mov esi, eax */
  ESI = (EAX);
  /* 118ea84b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 118ea84e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea850 je 0x118ea884 */
  if (C.zf) goto L_118ea884;
  /* 118ea852 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 118ea856 je 0x118ea898 */
  if (C.zf) goto L_118ea898;
  /* 118ea858 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea85b je 0x118ea913 */
  if (C.zf) goto L_118ea913;
  /* 118ea861 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea864 jg 0x118ea884 */
  if ((!C.zf&&C.sf==C.of)) goto L_118ea884;
  /* 118ea866 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118ea869 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ea86c push ebx */
  push32((uint32_t)(EBX));
  /* 118ea86d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118ea870 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ea873 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ea876 call dword ptr [0x118ef034] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef034))), 0x118ea87cu);
  /* 118ea87c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea87e jne 0x118ea913 */
  if (!C.zf) goto L_118ea913;
L_118ea884:;
  /* 118ea884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ea886:;
  /* 118ea886 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 118ea889 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ea88c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ea893 pop edi */
  EDI = (pop32());
  /* 118ea894 pop esi */
  ESI = (pop32());
  /* 118ea895 pop ebx */
  EBX = (pop32());
  /* 118ea896 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ea897 ret  */
  ESPCHK(0x118ea6f6u, _esp0);
  ESP += 4; return;
L_118ea898:;
  /* 118ea898 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118ea89f lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 118ea8a2 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea8a5 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118ea8a7 call 0x118ea230 */
  push32(0x118ea8acu); f_118ea230();
  /* 118ea8ac mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ea8af mov ebx, esp */
  EBX = (ESP);
  /* 118ea8b1 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 118ea8b4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ea8b8 jmp 0x118ea8cc */
  goto L_118ea8cc;
  /* 118ea8ba push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea8bc pop eax */
  EAX = (pop32());
  /* 118ea8bd ret  */
  ESPCHK(0x118ea6f6u, _esp0);
  ESP += 4; return;
  /* 118ea8be mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118ea8c1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118ea8c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ea8c5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ea8c9 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_118ea8cc:;
  /* 118ea8cc cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea8ce je 0x118ea884 */
  if (C.zf) goto L_118ea884;
  /* 118ea8d0 push esi */
  push32((uint32_t)(ESI));
  /* 118ea8d1 push ebx */
  push32((uint32_t)(EBX));
  /* 118ea8d2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 118ea8d5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118ea8d8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ea8db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ea8de call dword ptr [0x118ef034] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef034))), 0x118ea8e4u);
  /* 118ea8e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea8e6 je 0x118ea884 */
  if (C.zf) goto L_118ea884;
  /* 118ea8e8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea8eb push edi */
  push32((uint32_t)(EDI));
  /* 118ea8ec push edi */
  push32((uint32_t)(EDI));
  /* 118ea8ed jne 0x118ea8f3 */
  if (!C.zf) goto L_118ea8f3;
  /* 118ea8ef push edi */
  push32((uint32_t)(EDI));
  /* 118ea8f0 push edi */
  push32((uint32_t)(EDI));
  /* 118ea8f1 jmp 0x118ea8f9 */
  goto L_118ea8f9;
L_118ea8f3:;
  /* 118ea8f3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118ea8f6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_118ea8f9:;
  /* 118ea8f9 push esi */
  push32((uint32_t)(ESI));
  /* 118ea8fa push ebx */
  push32((uint32_t)(EBX));
  /* 118ea8fb push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118ea900 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ea903 call dword ptr [0x118ef0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0a0))), 0x118ea909u);
  /* 118ea909 mov esi, eax */
  ESI = (EAX);
  /* 118ea90b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea90d je 0x118ea884 */
  if (C.zf) goto L_118ea884;
L_118ea913:;
  /* 118ea913 mov eax, esi */
  EAX = (ESI);
  /* 118ea915 jmp 0x118ea886 */
  goto L_118ea886;
}

/* FUN_1000a91a @ 0x118ea91a (43 bytes, 20 insns) */
void f_118ea91a(void) {
  FTRACE(0x118ea91au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea91a mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ea91e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118ea922 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118ea924 push esi */
  push32((uint32_t)(ESI));
  /* 118ea925 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 118ea928 je 0x118ea937 */
  if (C.zf) goto L_118ea937;
L_118ea92a:;
  /* 118ea92a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea92d je 0x118ea937 */
  if (C.zf) goto L_118ea937;
  /* 118ea92f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ea930 mov esi, ecx */
  ESI = (ECX);
  /* 118ea932 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118ea933 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118ea935 jne 0x118ea92a */
  if (!C.zf) goto L_118ea92a;
L_118ea937:;
  /* 118ea937 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ea93a pop esi */
  ESI = (pop32());
  /* 118ea93b jne 0x118ea942 */
  if (!C.zf) goto L_118ea942;
  /* 118ea93d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ea941 ret  */
  ESPCHK(0x118ea91au, _esp0);
  ESP += 4; return;
L_118ea942:;
  /* 118ea942 mov eax, edx */
  EAX = (EDX);
  /* 118ea944 ret  */
  ESPCHK(0x118ea91au, _esp0);
  ESP += 4; return;
}

/* FUN_1000a945 @ 0x118ea945 (33 bytes, 15 insns) */
void f_118ea945(void) {
  FTRACE(0x118ea945u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea945 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 118ea949 push esi */
  push32((uint32_t)(ESI));
  /* 118ea94a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 118ea94e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ea950 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 118ea953 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea955 jb 0x118ea95b */
  if (C.cf) goto L_118ea95b;
  /* 118ea957 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ea959 jae 0x118ea95e */
  if (!C.cf) goto L_118ea95e;
L_118ea95b:;
  /* 118ea95b push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea95d pop eax */
  EAX = (pop32());
L_118ea95e:;
  /* 118ea95e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 118ea962 pop esi */
  ESI = (pop32());
  /* 118ea963 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118ea965 ret  */
  ESPCHK(0x118ea945u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x118ea966 (94 bytes, 38 insns) */
void f_118ea966(void) {
  FTRACE(0x118ea966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea966 push esi */
  push32((uint32_t)(ESI));
  /* 118ea967 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ea96b push edi */
  push32((uint32_t)(EDI));
  /* 118ea96c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 118ea970 push esi */
  push32((uint32_t)(ESI));
  /* 118ea971 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 118ea973 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118ea975 call 0x118ea945 */
  push32(0x118ea97au); f_118ea945();
  /* 118ea97a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea97d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea97f je 0x118ea998 */
  if (C.zf) goto L_118ea998;
  /* 118ea981 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 118ea984 push eax */
  push32((uint32_t)(EAX));
  /* 118ea985 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ea987 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 118ea989 call 0x118ea945 */
  push32(0x118ea98eu); f_118ea945();
  /* 118ea98e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea991 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea993 je 0x118ea998 */
  if (C.zf) goto L_118ea998;
  /* 118ea995 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_118ea998:;
  /* 118ea998 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 118ea99b push eax */
  push32((uint32_t)(EAX));
  /* 118ea99c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 118ea99f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 118ea9a1 call 0x118ea945 */
  push32(0x118ea9a6u); f_118ea945();
  /* 118ea9a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea9a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ea9ab je 0x118ea9b0 */
  if (C.zf) goto L_118ea9b0;
  /* 118ea9ad inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_118ea9b0:;
  /* 118ea9b0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 118ea9b3 push eax */
  push32((uint32_t)(EAX));
  /* 118ea9b4 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 118ea9b7 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 118ea9b9 call 0x118ea945 */
  push32(0x118ea9beu); f_118ea945();
  /* 118ea9be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea9c1 pop edi */
  EDI = (pop32());
  /* 118ea9c2 pop esi */
  ESI = (pop32());
  /* 118ea9c3 ret  */
  ESPCHK(0x118ea966u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c4 @ 0x118ea9c4 (46 bytes, 21 insns) */
void f_118ea9c4(void) {
  FTRACE(0x118ea9c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea9c4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118ea9c8 push esi */
  push32((uint32_t)(ESI));
  /* 118ea9c9 push edi */
  push32((uint32_t)(EDI));
  /* 118ea9ca mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 118ea9cc mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 118ea9cf mov ecx, esi */
  ECX = (ESI);
  /* 118ea9d1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ea9d3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 118ea9d5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 118ea9d8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 118ea9db or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 118ea9dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 118ea9e0 mov edx, edi */
  EDX = (EDI);
  /* 118ea9e2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 118ea9e5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 118ea9e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118ea9ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118ea9ec pop edi */
  EDI = (pop32());
  /* 118ea9ed mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 118ea9f0 pop esi */
  ESI = (pop32());
  /* 118ea9f1 ret  */
  ESPCHK(0x118ea9c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9f2 @ 0x118ea9f2 (45 bytes, 21 insns) */
void f_118ea9f2(void) {
  FTRACE(0x118ea9f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ea9f2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118ea9f6 push esi */
  push32((uint32_t)(ESI));
  /* 118ea9f7 push edi */
  push32((uint32_t)(EDI));
  /* 118ea9f8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 118ea9fb mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ea9fe mov esi, edx */
  ESI = (EDX);
  /* 118eaa00 mov edi, ecx */
  EDI = (ECX);
  /* 118eaa02 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 118eaa05 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118eaa07 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 118eaa09 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118eaa0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118eaa0e shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 118eaa11 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118eaa13 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 118eaa15 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118eaa17 pop edi */
  EDI = (pop32());
  /* 118eaa18 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 118eaa1b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118eaa1d pop esi */
  ESI = (pop32());
  /* 118eaa1e ret  */
  ESPCHK(0x118ea9f2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa1f @ 0x118eaa1f (199 bytes, 76 insns) */
void f_118eaa1f(void) {
  FTRACE(0x118eaa1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eaa1f push ebp */
  push32((uint32_t)(EBP));
  /* 118eaa20 mov ebp, esp */
  EBP = (ESP);
  /* 118eaa22 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eaa25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118eaa28 push ebx */
  push32((uint32_t)(EBX));
  /* 118eaa29 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 118eaa2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118eaa2e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eaa30 push esi */
  push32((uint32_t)(ESI));
  /* 118eaa31 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 118eaa38 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 118eaa3a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 118eaa3d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 118eaa40 jbe 0x118eaa93 */
  if ((C.cf||C.zf)) goto L_118eaa93;
  /* 118eaa42 push edi */
  push32((uint32_t)(EDI));
  /* 118eaa43 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_118eaa46:;
  /* 118eaa46 mov esi, ebx */
  ESI = (EBX);
  /* 118eaa48 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 118eaa4b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118eaa4c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118eaa4d push ebx */
  push32((uint32_t)(EBX));
  /* 118eaa4e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118eaa4f call 0x118ea9c4 */
  push32(0x118eaa54u); f_118ea9c4();
  /* 118eaa54 push ebx */
  push32((uint32_t)(EBX));
  /* 118eaa55 call 0x118ea9c4 */
  push32(0x118eaa5au); f_118ea9c4();
  /* 118eaa5a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eaa5d push eax */
  push32((uint32_t)(EAX));
  /* 118eaa5e push ebx */
  push32((uint32_t)(EBX));
  /* 118eaa5f call 0x118ea966 */
  push32(0x118eaa64u); f_118ea966();
  /* 118eaa64 push ebx */
  push32((uint32_t)(EBX));
  /* 118eaa65 call 0x118ea9c4 */
  push32(0x118eaa6au); f_118ea9c4();
  /* 118eaa6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eaa6d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 118eaa71 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118eaa75 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118eaa78 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118eaa7b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eaa7e push eax */
  push32((uint32_t)(EAX));
  /* 118eaa7f push ebx */
  push32((uint32_t)(EBX));
  /* 118eaa80 call 0x118ea966 */
  push32(0x118eaa85u); f_118ea966();
  /* 118eaa85 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118eaa88 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 118eaa8b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 118eaa8e jne 0x118eaa46 */
  if (!C.zf) goto L_118eaa46;
  /* 118eaa90 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118eaa92 pop edi */
  EDI = (pop32());
L_118eaa93:;
  /* 118eaa93 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eaa96 jne 0x118eaac0 */
  if (!C.zf) goto L_118eaac0;
  /* 118eaa98 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 118eaa9b mov eax, ecx */
  EAX = (ECX);
  /* 118eaa9d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118eaaa0 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 118eaaa3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118eaaa5 mov esi, eax */
  ESI = (EAX);
  /* 118eaaa7 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 118eaaaa shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 118eaaad or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 118eaaaf shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118eaab2 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118eaab9 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 118eaabc mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 118eaabe jmp 0x118eaa93 */
  goto L_118eaa93;
L_118eaac0:;
  /* 118eaac0 mov esi, 0x8000 */
  ESI = (0x8000u);
L_118eaac5:;
  /* 118eaac5 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 118eaac8 jne 0x118eaada */
  if (!C.zf) goto L_118eaada;
  /* 118eaaca push ebx */
  push32((uint32_t)(EBX));
  /* 118eaacb call 0x118ea9c4 */
  push32(0x118eaad0u); f_118ea9c4();
  /* 118eaad0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118eaad7 pop ecx */
  ECX = (pop32());
  /* 118eaad8 jmp 0x118eaac5 */
  goto L_118eaac5;
L_118eaada:;
  /* 118eaada mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 118eaade pop esi */
  ESI = (pop32());
  /* 118eaadf mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 118eaae3 pop ebx */
  EBX = (pop32());
  /* 118eaae4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118eaae5 ret  */
  ESPCHK(0x118eaa1fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae6 @ 0x118eaae6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_118eaae6(void) {
  FTRACE(0x118eaae6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eaae6 push ebp */
  push32((uint32_t)(EBP));
  /* 118eaae7 mov ebp, esp */
  EBP = (ESP);
  /* 118eaae9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eaaec push ebx */
  push32((uint32_t)(EBX));
  /* 118eaaed push esi */
  push32((uint32_t)(ESI));
  /* 118eaaee push edi */
  push32((uint32_t)(EDI));
  /* 118eaaef mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 118eaaf2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 118eaaf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118eaaf7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118eaafa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118eaafc pop edx */
  EDX = (pop32());
  /* 118eaafd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118eab00 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 118eab03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118eab06 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118eab09 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118eab0c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118eab0f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 118eab12 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 118eab15 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118eab18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118eab1b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118eab1e mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_118eab21:;
  /* 118eab21 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 118eab23 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eab26 je 0x118eab37 */
  if (C.zf) goto L_118eab37;
  /* 118eab28 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eab2b je 0x118eab37 */
  if (C.zf) goto L_118eab37;
  /* 118eab2d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eab30 je 0x118eab37 */
  if (C.zf) goto L_118eab37;
  /* 118eab32 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eab35 jne 0x118eab3a */
  if (!C.zf) goto L_118eab3a;
L_118eab37:;
  /* 118eab37 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118eab38 jmp 0x118eab21 */
  goto L_118eab21;
L_118eab3a:;
  /* 118eab3a push 4 */
  push32((uint32_t)(0x4u));
  /* 118eab3c pop esi */
  ESI = (pop32());
L_118eab3d:;
  /* 118eab3d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118eab3f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118eab40 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eab43 ja 0x118eadc0 */
  if ((!C.cf&&!C.zf)) goto L_118eadc0;
  /* 118eab49 jmp dword ptr [eax*4 + 0x118eaf87] */
  switch (EAX) {
    case 0: goto L_118eab50;
    case 1: goto L_118eab9f;
    case 2: goto L_118eabf6;
    case 3: goto L_118eac20;
    case 4: goto L_118eac7b;
    case 5: goto L_118eacf2;
    case 6: goto L_118ead28;
    case 7: goto L_118ead72;
    case 8: goto L_118ead51;
    case 9: goto L_118eadd6;
    case 10: goto L_118eadc0;
    case 11: goto L_118ead8c;
    default: x86_unimpl("switch@0x118eab49 out of table"); return;
  }
L_118eab50:;
  /* 118eab50 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eab53 jl 0x118eab61 */
  if ((C.sf!=C.of)) goto L_118eab61;
  /* 118eab55 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eab58 jg 0x118eab61 */
  if ((!C.zf&&C.sf==C.of)) goto L_118eab61;
L_118eab5a:;
  /* 118eab5a push 3 */
  push32((uint32_t)(0x3u));
  /* 118eab5c jmp 0x118ead7e */
  goto L_118ead7e;
L_118eab61:;
  /* 118eab61 cmp bl, byte ptr [0x118f185c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x118f185c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eab67 jne 0x118eab70 */
  if (!C.zf) goto L_118eab70;
L_118eab69:;
  /* 118eab69 push 5 */
  push32((uint32_t)(0x5u));
  /* 118eab6b jmp 0x118eadb6 */
  goto L_118eadb6;
L_118eab70:;
  /* 118eab70 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118eab73 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eab76 je 0x118eab96 */
  if (C.zf) goto L_118eab96;
  /* 118eab78 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eab79 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eab7a je 0x118eab8a */
  if (C.zf) goto L_118eab8a;
  /* 118eab7c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eab7f jne 0x118eae59 */
  if (!C.zf) goto L_118eae59;
  /* 118eab85 jmp 0x118eac19 */
  goto L_118eac19;
L_118eab8a:;
  /* 118eab8a push 2 */
  push32((uint32_t)(0x2u));
  /* 118eab8c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 118eab93 pop eax */
  EAX = (pop32());
  /* 118eab94 jmp 0x118eab3d */
  goto L_118eab3d;
L_118eab96:;
  /* 118eab96 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 118eab9a push 2 */
  push32((uint32_t)(0x2u));
  /* 118eab9c pop eax */
  EAX = (pop32());
  /* 118eab9d jmp 0x118eab3d */
  goto L_118eab3d;
L_118eab9f:;
  /* 118eab9f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eaba2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 118eaba5 jl 0x118eabac */
  if ((C.sf!=C.of)) goto L_118eabac;
  /* 118eaba7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabaa jle 0x118eab5a */
  if ((C.zf||C.sf!=C.of)) goto L_118eab5a;
L_118eabac:;
  /* 118eabac cmp bl, byte ptr [0x118f185c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x118f185c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabb2 je 0x118eac74 */
  if (C.zf) goto L_118eac74;
  /* 118eabb8 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabbb je 0x118eabee */
  if (C.zf) goto L_118eabee;
  /* 118eabbd cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabc0 je 0x118eabee */
  if (C.zf) goto L_118eabee;
  /* 118eabc2 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabc5 je 0x118eac19 */
  if (C.zf) goto L_118eac19;
L_118eabc7:;
  /* 118eabc7 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabca jle 0x118eae59 */
  if ((C.zf||C.sf!=C.of)) goto L_118eae59;
  /* 118eabd0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabd3 jle 0x118eabe7 */
  if ((C.zf||C.sf!=C.of)) goto L_118eabe7;
  /* 118eabd5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabd8 jle 0x118eae59 */
  if ((C.zf||C.sf!=C.of)) goto L_118eae59;
  /* 118eabde cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabe1 jg 0x118eae59 */
  if ((!C.zf&&C.sf==C.of)) goto L_118eae59;
L_118eabe7:;
  /* 118eabe7 push 6 */
  push32((uint32_t)(0x6u));
  /* 118eabe9 jmp 0x118eadb6 */
  goto L_118eadb6;
L_118eabee:;
  /* 118eabee dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118eabef push 0xb */
  push32((uint32_t)(0xbu));
  /* 118eabf1 jmp 0x118eadb6 */
  goto L_118eadb6;
L_118eabf6:;
  /* 118eabf6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabf9 jl 0x118eac04 */
  if ((C.sf!=C.of)) goto L_118eac04;
  /* 118eabfb cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eabfe jle 0x118eab5a */
  if ((C.zf||C.sf!=C.of)) goto L_118eab5a;
L_118eac04:;
  /* 118eac04 cmp bl, byte ptr [0x118f185c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x118f185c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eac0a je 0x118eab69 */
  if (C.zf) goto L_118eab69;
  /* 118eac10 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eac13 jne 0x118eadce */
  if (!C.zf) goto L_118eadce;
L_118eac19:;
  /* 118eac19 mov eax, edx */
  EAX = (EDX);
  /* 118eac1b jmp 0x118eab3d */
  goto L_118eab3d;
L_118eac20:;
  /* 118eac20 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118eac23:;
  /* 118eac23 cmp dword ptr [0x118f1858], edx */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eac29 jle 0x118eac3c */
  if ((C.zf||C.sf!=C.of)) goto L_118eac3c;
  /* 118eac2b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118eac2e push esi */
  push32((uint32_t)(ESI));
  /* 118eac2f push eax */
  push32((uint32_t)(EAX));
  /* 118eac30 call 0x118e6832 */
  push32(0x118eac35u); f_118e6832();
  /* 118eac35 pop ecx */
  ECX = (pop32());
  /* 118eac36 pop ecx */
  ECX = (pop32());
  /* 118eac37 push 1 */
  push32((uint32_t)(0x1u));
  /* 118eac39 pop edx */
  EDX = (pop32());
  /* 118eac3a jmp 0x118eac4a */
  goto L_118eac4a;
L_118eac3c:;
  /* 118eac3c mov ecx, dword ptr [0x118f1864] */
  ECX = (r32((uint32_t)(0x118f1864)));
  /* 118eac42 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118eac45 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118eac48 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_118eac4a:;
  /* 118eac4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118eac4c je 0x118eac6c */
  if (C.zf) goto L_118eac6c;
  /* 118eac4e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eac52 jae 0x118eac64 */
  if (!C.cf) goto L_118eac64;
  /* 118eac54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118eac57 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118eac5a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118eac5d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 118eac60 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 118eac62 jmp 0x118eac67 */
  goto L_118eac67;
L_118eac64:;
  /* 118eac64 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_118eac67:;
  /* 118eac67 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118eac69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118eac6a jmp 0x118eac23 */
  goto L_118eac23;
L_118eac6c:;
  /* 118eac6c cmp bl, byte ptr [0x118f185c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x118f185c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eac72 jne 0x118eacdb */
  if (!C.zf) goto L_118eacdb;
L_118eac74:;
  /* 118eac74 mov eax, esi */
  EAX = (ESI);
  /* 118eac76 jmp 0x118eab3d */
  goto L_118eab3d;
L_118eac7b:;
  /* 118eac7b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eac7f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 118eac82 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 118eac85 jne 0x118eac94 */
  if (!C.zf) goto L_118eac94;
L_118eac87:;
  /* 118eac87 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eac8a jne 0x118eac94 */
  if (!C.zf) goto L_118eac94;
  /* 118eac8c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 118eac8f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118eac91 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118eac92 jmp 0x118eac87 */
  goto L_118eac87;
L_118eac94:;
  /* 118eac94 cmp dword ptr [0x118f1858], edx */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eac9a jle 0x118eacad */
  if ((C.zf||C.sf!=C.of)) goto L_118eacad;
  /* 118eac9c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118eac9f push esi */
  push32((uint32_t)(ESI));
  /* 118eaca0 push eax */
  push32((uint32_t)(EAX));
  /* 118eaca1 call 0x118e6832 */
  push32(0x118eaca6u); f_118e6832();
  /* 118eaca6 pop ecx */
  ECX = (pop32());
  /* 118eaca7 pop ecx */
  ECX = (pop32());
  /* 118eaca8 push 1 */
  push32((uint32_t)(0x1u));
  /* 118eacaa pop edx */
  EDX = (pop32());
  /* 118eacab jmp 0x118eacbb */
  goto L_118eacbb;
L_118eacad:;
  /* 118eacad mov ecx, dword ptr [0x118f1864] */
  ECX = (r32((uint32_t)(0x118f1864)));
  /* 118eacb3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118eacb6 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118eacb9 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_118eacbb:;
  /* 118eacbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118eacbd je 0x118eacdb */
  if (C.zf) goto L_118eacdb;
  /* 118eacbf cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eacc3 jae 0x118eacd6 */
  if (!C.cf) goto L_118eacd6;
  /* 118eacc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118eacc8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118eaccb sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118eacce inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 118eacd1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 118eacd4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_118eacd6:;
  /* 118eacd6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118eacd8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118eacd9 jmp 0x118eac94 */
  goto L_118eac94;
L_118eacdb:;
  /* 118eacdb cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eacde je 0x118eabee */
  if (C.zf) goto L_118eabee;
  /* 118eace4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eace7 je 0x118eabee */
  if (C.zf) goto L_118eabee;
  /* 118eaced jmp 0x118eabc7 */
  goto L_118eabc7;
L_118eacf2:;
  /* 118eacf2 cmp dword ptr [0x118f1858], edx */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eacf8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 118eacfb jle 0x118ead0e */
  if ((C.zf||C.sf!=C.of)) goto L_118ead0e;
  /* 118eacfd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118ead00 push esi */
  push32((uint32_t)(ESI));
  /* 118ead01 push eax */
  push32((uint32_t)(EAX));
  /* 118ead02 call 0x118e6832 */
  push32(0x118ead07u); f_118e6832();
  /* 118ead07 pop ecx */
  ECX = (pop32());
  /* 118ead08 pop ecx */
  ECX = (pop32());
  /* 118ead09 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ead0b pop edx */
  EDX = (pop32());
  /* 118ead0c jmp 0x118ead1c */
  goto L_118ead1c;
L_118ead0e:;
  /* 118ead0e mov ecx, dword ptr [0x118f1864] */
  ECX = (r32((uint32_t)(0x118f1864)));
  /* 118ead14 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118ead17 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118ead1a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_118ead1c:;
  /* 118ead1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ead1e je 0x118eadce */
  if (C.zf) goto L_118eadce;
  /* 118ead24 mov eax, esi */
  EAX = (ESI);
  /* 118ead26 jmp 0x118ead7f */
  goto L_118ead7f;
L_118ead28:;
  /* 118ead28 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 118ead2b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ead2e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 118ead31 jl 0x118ead38 */
  if ((C.sf!=C.of)) goto L_118ead38;
  /* 118ead33 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ead36 jle 0x118ead7c */
  if ((C.zf||C.sf!=C.of)) goto L_118ead7c;
L_118ead38:;
  /* 118ead38 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118ead3b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ead3e je 0x118eadb4 */
  if (C.zf) goto L_118eadb4;
  /* 118ead40 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ead41 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ead42 je 0x118eada8 */
  if (C.zf) goto L_118eada8;
  /* 118ead44 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ead47 jne 0x118eae5c */
  if (!C.zf) goto L_118eae5c;
L_118ead4d:;
  /* 118ead4d push 8 */
  push32((uint32_t)(0x8u));
  /* 118ead4f jmp 0x118eadb6 */
  goto L_118eadb6;
L_118ead51:;
  /* 118ead51 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_118ead54:;
  /* 118ead54 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ead57 jne 0x118ead5e */
  if (!C.zf) goto L_118ead5e;
  /* 118ead59 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118ead5b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ead5c jmp 0x118ead54 */
  goto L_118ead54;
L_118ead5e:;
  /* 118ead5e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ead61 jl 0x118eae59 */
  if ((C.sf!=C.of)) goto L_118eae59;
  /* 118ead67 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ead6a jg 0x118eae59 */
  if ((!C.zf&&C.sf==C.of)) goto L_118eae59;
  /* 118ead70 jmp 0x118ead7c */
  goto L_118ead7c;
L_118ead72:;
  /* 118ead72 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ead75 jl 0x118ead85 */
  if ((C.sf!=C.of)) goto L_118ead85;
  /* 118ead77 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ead7a jg 0x118ead85 */
  if ((!C.zf&&C.sf==C.of)) goto L_118ead85;
L_118ead7c:;
  /* 118ead7c push 9 */
  push32((uint32_t)(0x9u));
L_118ead7e:;
  /* 118ead7e pop eax */
  EAX = (pop32());
L_118ead7f:;
  /* 118ead7f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118ead80 jmp 0x118eab3d */
  goto L_118eab3d;
L_118ead85:;
  /* 118ead85 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ead88 jne 0x118eadce */
  if (!C.zf) goto L_118eadce;
  /* 118ead8a jmp 0x118ead4d */
  goto L_118ead4d;
L_118ead8c:;
  /* 118ead8c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ead90 je 0x118eadbc */
  if (C.zf) goto L_118eadbc;
  /* 118ead92 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118ead95 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 118ead98 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ead9b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 118ead9e je 0x118eadb4 */
  if (C.zf) goto L_118eadb4;
  /* 118eada0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eada1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eada2 jne 0x118eae5c */
  if (!C.zf) goto L_118eae5c;
L_118eada8:;
  /* 118eada8 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 118eadac push 7 */
  push32((uint32_t)(0x7u));
  /* 118eadae pop eax */
  EAX = (pop32());
  /* 118eadaf jmp 0x118eab3d */
  goto L_118eab3d;
L_118eadb4:;
  /* 118eadb4 push 7 */
  push32((uint32_t)(0x7u));
L_118eadb6:;
  /* 118eadb6 pop eax */
  EAX = (pop32());
  /* 118eadb7 jmp 0x118eab3d */
  goto L_118eab3d;
L_118eadbc:;
  /* 118eadbc push 0xa */
  push32((uint32_t)(0xau));
  /* 118eadbe dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118eadbf pop eax */
  EAX = (pop32());
L_118eadc0:;
  /* 118eadc0 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eadc3 je 0x118eae5e */
  if (C.zf) goto L_118eae5e;
  /* 118eadc9 jmp 0x118eab3d */
  goto L_118eab3d;
L_118eadce:;
  /* 118eadce mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 118eadd1 jmp 0x118eae5e */
  goto L_118eae5e;
L_118eadd6:;
  /* 118eadd6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 118eaddd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118eaddf:;
  /* 118eaddf cmp dword ptr [0x118f1858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eade6 jle 0x118eadf7 */
  if ((C.zf||C.sf!=C.of)) goto L_118eadf7;
  /* 118eade8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118eadeb push 4 */
  push32((uint32_t)(0x4u));
  /* 118eaded push eax */
  push32((uint32_t)(EAX));
  /* 118eadee call 0x118e6832 */
  push32(0x118eadf3u); f_118e6832();
  /* 118eadf3 pop ecx */
  ECX = (pop32());
  /* 118eadf4 pop ecx */
  ECX = (pop32());
  /* 118eadf5 jmp 0x118eae06 */
  goto L_118eae06;
L_118eadf7:;
  /* 118eadf7 mov ecx, dword ptr [0x118f1864] */
  ECX = (r32((uint32_t)(0x118f1864)));
  /* 118eadfd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118eae00 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118eae03 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_118eae06:;
  /* 118eae06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118eae08 je 0x118eae26 */
  if (C.zf) goto L_118eae26;
  /* 118eae0a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 118eae0d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 118eae10 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 118eae14 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eae1a jg 0x118eae21 */
  if ((!C.zf&&C.sf==C.of)) goto L_118eae21;
  /* 118eae1c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118eae1e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118eae1f jmp 0x118eaddf */
  goto L_118eaddf;
L_118eae21:;
  /* 118eae21 mov esi, 0x1451 */
  ESI = (0x1451u);
L_118eae26:;
  /* 118eae26 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_118eae29:;
  /* 118eae29 cmp dword ptr [0x118f1858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eae30 jle 0x118eae41 */
  if ((C.zf||C.sf!=C.of)) goto L_118eae41;
  /* 118eae32 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118eae35 push 4 */
  push32((uint32_t)(0x4u));
  /* 118eae37 push eax */
  push32((uint32_t)(EAX));
  /* 118eae38 call 0x118e6832 */
  push32(0x118eae3du); f_118e6832();
  /* 118eae3d pop ecx */
  ECX = (pop32());
  /* 118eae3e pop ecx */
  ECX = (pop32());
  /* 118eae3f jmp 0x118eae50 */
  goto L_118eae50;
L_118eae41:;
  /* 118eae41 mov ecx, dword ptr [0x118f1864] */
  ECX = (r32((uint32_t)(0x118f1864)));
  /* 118eae47 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118eae4a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118eae4d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_118eae50:;
  /* 118eae50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118eae52 je 0x118eae59 */
  if (C.zf) goto L_118eae59;
  /* 118eae54 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118eae56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118eae57 jmp 0x118eae29 */
  goto L_118eae29;
L_118eae59:;
  /* 118eae59 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118eae5a jmp 0x118eae5e */
  goto L_118eae5e;
L_118eae5c:;
  /* 118eae5c mov edi, ecx */
  EDI = (ECX);
L_118eae5e:;
  /* 118eae5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118eae61 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eae65 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 118eae67 je 0x118eaf46 */
  if (C.zf) goto L_118eaf46;
  /* 118eae6d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 118eae6f pop eax */
  EAX = (pop32());
  /* 118eae70 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eae73 jbe 0x118eae8a */
  if ((C.cf||C.zf)) goto L_118eae8a;
  /* 118eae75 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eae79 jl 0x118eae7e */
  if ((C.sf!=C.of)) goto L_118eae7e;
  /* 118eae7b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_118eae7e:;
  /* 118eae7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118eae81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118eae84 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eae85 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 118eae88 jmp 0x118eae8d */
  goto L_118eae8d;
L_118eae8a:;
  /* 118eae8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_118eae8d:;
  /* 118eae8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eae91 jbe 0x118eaf3c */
  if ((C.cf||C.zf)) goto L_118eaf3c;
L_118eae97:;
  /* 118eae97 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eae98 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eae9b jne 0x118eaea5 */
  if (!C.zf) goto L_118eaea5;
  /* 118eae9d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 118eaea0 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 118eaea3 jmp 0x118eae97 */
  goto L_118eae97;
L_118eaea5:;
  /* 118eaea5 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 118eaea8 push eax */
  push32((uint32_t)(EAX));
  /* 118eaea9 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 118eaeac push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 118eaeaf push eax */
  push32((uint32_t)(EAX));
  /* 118eaeb0 call 0x118eaa1f */
  push32(0x118eaeb5u); f_118eaa1f();
  /* 118eaeb5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118eaeb8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118eaeba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118eaebd cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eaec0 jge 0x118eaec4 */
  if ((C.sf==C.of)) goto L_118eaec4;
  /* 118eaec2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_118eaec4:;
  /* 118eaec4 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118eaec7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eaeca jne 0x118eaecf */
  if (!C.zf) goto L_118eaecf;
  /* 118eaecc add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_118eaecf:;
  /* 118eaecf cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eaed2 jne 0x118eaed7 */
  if (!C.zf) goto L_118eaed7;
  /* 118eaed4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118eaed7:;
  /* 118eaed7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eaedc jle 0x118eaf0e */
  if ((C.zf||C.sf!=C.of)) goto L_118eaf0e;
  /* 118eaede mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_118eaee5:;
  /* 118eaee5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 118eaee8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118eaeeb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118eaeee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_118eaef1:;
  /* 118eaef1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eaef5 je 0x118eaf57 */
  if (C.zf) goto L_118eaf57;
  /* 118eaef7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118eaef9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 118eaefe mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 118eaf03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118eaf05 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 118eaf0c jmp 0x118eaf6c */
  goto L_118eaf6c;
L_118eaf0e:;
  /* 118eaf0e cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eaf13 jge 0x118eaf1e */
  if ((C.sf==C.of)) goto L_118eaf1e;
  /* 118eaf15 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 118eaf1c jmp 0x118eaee5 */
  goto L_118eaee5;
L_118eaf1e:;
  /* 118eaf1e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118eaf21 push eax */
  push32((uint32_t)(EAX));
  /* 118eaf22 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 118eaf25 push eax */
  push32((uint32_t)(EAX));
  /* 118eaf26 call 0x118ec0ba */
  push32(0x118eaf2bu); f_118ec0ba();
  /* 118eaf2b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 118eaf2e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 118eaf31 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 118eaf34 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 118eaf37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118eaf3a jmp 0x118eaef1 */
  goto L_118eaef1;
L_118eaf3c:;
  /* 118eaf3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118eaf3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118eaf40 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118eaf42 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118eaf44 jmp 0x118eaef1 */
  goto L_118eaef1;
L_118eaf46:;
  /* 118eaf46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118eaf48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118eaf4a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118eaf4c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118eaf4e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 118eaf55 jmp 0x118eaf6c */
  goto L_118eaf6c;
L_118eaf57:;
  /* 118eaf57 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eaf5b je 0x118eaf6c */
  if (C.zf) goto L_118eaf6c;
  /* 118eaf5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118eaf5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118eaf61 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118eaf63 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118eaf65 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_118eaf6c:;
  /* 118eaf6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eaf6f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 118eaf72 pop edi */
  EDI = (pop32());
  /* 118eaf73 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 118eaf76 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 118eaf79 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 118eaf7d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118eaf80 pop esi */
  ESI = (pop32());
  /* 118eaf81 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 118eaf84 pop ebx */
  EBX = (pop32());
  /* 118eaf85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118eaf86 ret  */
  ESPCHK(0x118eaae6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb7 @ 0x118eafb7 (659 bytes, 232 insns) */
void f_118eafb7(void) {
  FTRACE(0x118eafb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eafb7 push ebp */
  push32((uint32_t)(EBP));
  /* 118eafb8 mov ebp, esp */
  EBP = (ESP);
  /* 118eafba sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eafbd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118eafc0 push ebx */
  push32((uint32_t)(EBX));
  /* 118eafc1 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118eafc4 push esi */
  push32((uint32_t)(ESI));
  /* 118eafc5 mov ecx, eax */
  ECX = (EAX);
  /* 118eafc7 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 118eafcc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 118eafd2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 118eafd4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 118eafd7 push edi */
  push32((uint32_t)(EDI));
  /* 118eafd8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 118eafdc mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 118eafe0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 118eafe4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 118eafe8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 118eafec mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 118eaff0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 118eaff4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 118eaff8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 118eaffc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 118eb000 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 118eb004 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 118eb008 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118eb00f mov edx, eax */
  EDX = (EAX);
  /* 118eb011 je 0x118eb019 */
  if (C.zf) goto L_118eb019;
  /* 118eb013 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 118eb017 jmp 0x118eb01d */
  goto L_118eb01d;
L_118eb019:;
  /* 118eb019 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_118eb01d:;
  /* 118eb01d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118eb020 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 118eb023 jne 0x118eb043 */
  if (!C.zf) goto L_118eb043;
  /* 118eb025 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118eb027 jne 0x118eb043 */
  if (!C.zf) goto L_118eb043;
  /* 118eb029 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb02c jne 0x118eb043 */
  if (!C.zf) goto L_118eb043;
L_118eb02e:;
  /* 118eb02e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 118eb032 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 118eb036 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 118eb03a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 118eb03e jmp 0x118eb241 */
  goto L_118eb241;
L_118eb043:;
  /* 118eb043 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118eb046 jne 0x118eb0c2 */
  if (!C.zf) goto L_118eb0c2;
  /* 118eb048 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 118eb04d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 118eb052 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb054 jne 0x118eb05c */
  if (!C.zf) goto L_118eb05c;
  /* 118eb056 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb05a je 0x118eb06b */
  if (C.zf) goto L_118eb06b;
L_118eb05c:;
  /* 118eb05c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 118eb062 jne 0x118eb06b */
  if (!C.zf) goto L_118eb06b;
  /* 118eb064 push 0x118ef790 */
  push32((uint32_t)(0x118ef790u));
  /* 118eb069 jmp 0x118eb0b1 */
  goto L_118eb0b1;
L_118eb06b:;
  /* 118eb06b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 118eb06e je 0x118eb085 */
  if (C.zf) goto L_118eb085;
  /* 118eb070 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb076 jne 0x118eb085 */
  if (!C.zf) goto L_118eb085;
  /* 118eb078 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb07c jne 0x118eb0ac */
  if (!C.zf) goto L_118eb0ac;
  /* 118eb07e push 0x118ef788 */
  push32((uint32_t)(0x118ef788u));
  /* 118eb083 jmp 0x118eb094 */
  goto L_118eb094;
L_118eb085:;
  /* 118eb085 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb087 jne 0x118eb0ac */
  if (!C.zf) goto L_118eb0ac;
  /* 118eb089 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb08d jne 0x118eb0ac */
  if (!C.zf) goto L_118eb0ac;
  /* 118eb08f push 0x118ef780 */
  push32((uint32_t)(0x118ef780u));
L_118eb094:;
  /* 118eb094 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 118eb097 push eax */
  push32((uint32_t)(EAX));
  /* 118eb098 call 0x118e6f60 */
  push32(0x118eb09du); f_118e6f60();
  /* 118eb09d pop ecx */
  ECX = (pop32());
  /* 118eb09e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 118eb0a2 pop ecx */
  ECX = (pop32());
L_118eb0a3:;
  /* 118eb0a3 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118eb0a7 jmp 0x118eb21a */
  goto L_118eb21a;
L_118eb0ac:;
  /* 118eb0ac push 0x118ef778 */
  push32((uint32_t)(0x118ef778u));
L_118eb0b1:;
  /* 118eb0b1 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 118eb0b4 push eax */
  push32((uint32_t)(EAX));
  /* 118eb0b5 call 0x118e6f60 */
  push32(0x118eb0bau); f_118e6f60();
  /* 118eb0ba pop ecx */
  ECX = (pop32());
  /* 118eb0bb mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 118eb0bf pop ecx */
  ECX = (pop32());
  /* 118eb0c0 jmp 0x118eb0a3 */
  goto L_118eb0a3;
L_118eb0c2:;
  /* 118eb0c2 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 118eb0c5 mov ecx, edi */
  ECX = (EDI);
  /* 118eb0c7 mov esi, eax */
  ESI = (EAX);
  /* 118eb0c9 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 118eb0cc imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118eb0d2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 118eb0d5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 118eb0da push 1 */
  push32((uint32_t)(0x1u));
  /* 118eb0dc lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 118eb0df mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 118eb0e3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118eb0e6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 118eb0e9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 118eb0f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb0f3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 118eb0f6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 118eb0f9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 118eb0fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118eb0fe push eax */
  push32((uint32_t)(EAX));
  /* 118eb0ff lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eb102 push eax */
  push32((uint32_t)(EAX));
  /* 118eb103 call 0x118ec0ba */
  push32(0x118eb108u); f_118ec0ba();
  /* 118eb108 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb10b cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118eb111 jb 0x118eb123 */
  if (C.cf) goto L_118eb123;
  /* 118eb113 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 118eb116 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118eb117 push eax */
  push32((uint32_t)(EAX));
  /* 118eb118 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eb11b push eax */
  push32((uint32_t)(EAX));
  /* 118eb11c call 0x118ebe9a */
  push32(0x118eb121u); f_118ebe9a();
  /* 118eb121 pop ecx */
  ECX = (pop32());
  /* 118eb122 pop ecx */
  ECX = (pop32());
L_118eb123:;
  /* 118eb123 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 118eb127 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 118eb12a je 0x118eb13d */
  if (C.zf) goto L_118eb13d;
  /* 118eb12c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 118eb12f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 118eb132 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb134 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118eb136 jg 0x118eb140 */
  if ((!C.zf&&C.sf==C.of)) goto L_118eb140;
  /* 118eb138 jmp 0x118eb02e */
  goto L_118eb02e;
L_118eb13d:;
  /* 118eb13d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_118eb140:;
  /* 118eb140 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb143 jle 0x118eb148 */
  if ((C.zf||C.sf!=C.of)) goto L_118eb148;
  /* 118eb145 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 118eb147 pop edi */
  EDI = (pop32());
L_118eb148:;
  /* 118eb148 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 118eb14c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eb152 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 118eb157 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_118eb15e:;
  /* 118eb15e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eb161 push eax */
  push32((uint32_t)(EAX));
  /* 118eb162 call 0x118ea9c4 */
  push32(0x118eb167u); f_118ea9c4();
  /* 118eb167 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 118eb16a pop ecx */
  ECX = (pop32());
  /* 118eb16b jne 0x118eb15e */
  if (!C.zf) goto L_118eb15e;
  /* 118eb16d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118eb16f jge 0x118eb188 */
  if ((C.sf==C.of)) goto L_118eb188;
  /* 118eb171 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 118eb173 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 118eb179 jle 0x118eb188 */
  if ((C.zf||C.sf!=C.of)) goto L_118eb188;
L_118eb17b:;
  /* 118eb17b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eb17e push eax */
  push32((uint32_t)(EAX));
  /* 118eb17f call 0x118ea9f2 */
  push32(0x118eb184u); f_118ea9f2();
  /* 118eb184 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118eb185 pop ecx */
  ECX = (pop32());
  /* 118eb186 jne 0x118eb17b */
  if (!C.zf) goto L_118eb17b;
L_118eb188:;
  /* 118eb188 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 118eb18b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 118eb18e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118eb190 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 118eb193 jle 0x118eb1e5 */
  if ((C.zf||C.sf!=C.of)) goto L_118eb1e5;
  /* 118eb195 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_118eb198:;
  /* 118eb198 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 118eb19b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 118eb19e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118eb19f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118eb1a0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eb1a3 push eax */
  push32((uint32_t)(EAX));
  /* 118eb1a4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118eb1a5 call 0x118ea9c4 */
  push32(0x118eb1aau); f_118ea9c4();
  /* 118eb1aa lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eb1ad push eax */
  push32((uint32_t)(EAX));
  /* 118eb1ae call 0x118ea9c4 */
  push32(0x118eb1b3u); f_118ea9c4();
  /* 118eb1b3 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118eb1b6 push eax */
  push32((uint32_t)(EAX));
  /* 118eb1b7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eb1ba push eax */
  push32((uint32_t)(EAX));
  /* 118eb1bb call 0x118ea966 */
  push32(0x118eb1c0u); f_118ea966();
  /* 118eb1c0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118eb1c3 push eax */
  push32((uint32_t)(EAX));
  /* 118eb1c4 call 0x118ea9c4 */
  push32(0x118eb1c9u); f_118ea9c4();
  /* 118eb1c9 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 118eb1cc mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118eb1cf and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 118eb1d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb1d6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118eb1d8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 118eb1db dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 118eb1de mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118eb1e0 jne 0x118eb198 */
  if (!C.zf) goto L_118eb198;
  /* 118eb1e2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_118eb1e5:;
  /* 118eb1e5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 118eb1e8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eb1e9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eb1ea cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eb1ed lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 118eb1f0 jl 0x118eb222 */
  if ((C.sf!=C.of)) goto L_118eb222;
L_118eb1f2:;
  /* 118eb1f2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb1f4 jb 0x118eb205 */
  if (C.cf) goto L_118eb205;
  /* 118eb1f6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eb1f9 jne 0x118eb201 */
  if (!C.zf) goto L_118eb201;
  /* 118eb1fb mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 118eb1fe dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eb1ff jmp 0x118eb1f2 */
  goto L_118eb1f2;
L_118eb201:;
  /* 118eb201 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb203 jae 0x118eb209 */
  if (!C.cf) goto L_118eb209;
L_118eb205:;
  /* 118eb205 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118eb206 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_118eb209:;
  /* 118eb209 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_118eb20b:;
  /* 118eb20b sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118eb20d sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118eb20f mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 118eb212 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 118eb215 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_118eb21a:;
  /* 118eb21a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118eb21d:;
  /* 118eb21d pop edi */
  EDI = (pop32());
  /* 118eb21e pop esi */
  ESI = (pop32());
  /* 118eb21f pop ebx */
  EBX = (pop32());
  /* 118eb220 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118eb221 ret  */
  ESPCHK(0x118eafb7u, _esp0);
  ESP += 4; return;
L_118eb222:;
  /* 118eb222 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb224 jb 0x118eb232 */
  if (C.cf) goto L_118eb232;
  /* 118eb226 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eb229 jne 0x118eb22e */
  if (!C.zf) goto L_118eb22e;
  /* 118eb22b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eb22c jmp 0x118eb222 */
  goto L_118eb222;
L_118eb22e:;
  /* 118eb22e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb230 jae 0x118eb20b */
  if (!C.cf) goto L_118eb20b;
L_118eb232:;
  /* 118eb232 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 118eb236 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 118eb23a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 118eb23e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_118eb241:;
  /* 118eb241 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 118eb245 push 1 */
  push32((uint32_t)(0x1u));
  /* 118eb247 pop eax */
  EAX = (pop32());
  /* 118eb248 jmp 0x118eb21d */
  goto L_118eb21d;
}

/* FUN_1000b24a @ 0x118eb24a (115 bytes, 37 insns) */
void f_118eb24a(void) {
  FTRACE(0x118eb24au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb24a push esi */
  push32((uint32_t)(ESI));
  /* 118eb24b call 0x118eb2c6 */
  push32(0x118eb250u); f_118eb2c6();
  /* 118eb250 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118eb254 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118eb256 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118eb258 mov eax, 0x118f41d0 */
  EAX = (0x118f41d0u);
L_118eb25d:;
  /* 118eb25d cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb25f je 0x118eb283 */
  if (C.zf) goto L_118eb283;
  /* 118eb261 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb264 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118eb265 cmp eax, 0x118f4338 */
  { uint32_t _a=(EAX),_b=(0x118f4338u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb26a jl 0x118eb25d */
  if ((C.sf!=C.of)) goto L_118eb25d;
  /* 118eb26c cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb26f jb 0x118eb293 */
  if (C.cf) goto L_118eb293;
  /* 118eb271 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb274 ja 0x118eb293 */
  if ((!C.cf&&!C.zf)) goto L_118eb293;
  /* 118eb276 call 0x118eb2bd */
  push32(0x118eb27bu); f_118eb2bd();
  /* 118eb27b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 118eb281 pop esi */
  ESI = (pop32());
  /* 118eb282 ret  */
  ESPCHK(0x118eb24au, _esp0);
  ESP += 4; return;
L_118eb283:;
  /* 118eb283 call 0x118eb2bd */
  push32(0x118eb288u); f_118eb2bd();
  /* 118eb288 mov ecx, dword ptr [esi*8 + 0x118f41d4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x118f41d4)));
  /* 118eb28f pop esi */
  ESI = (pop32());
  /* 118eb290 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118eb292 ret  */
  ESPCHK(0x118eb24au, _esp0);
  ESP += 4; return;
L_118eb293:;
  /* 118eb293 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb299 jb 0x118eb2b0 */
  if (C.cf) goto L_118eb2b0;
  /* 118eb29b cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb2a1 ja 0x118eb2b0 */
  if ((!C.cf&&!C.zf)) goto L_118eb2b0;
  /* 118eb2a3 call 0x118eb2bd */
  push32(0x118eb2a8u); f_118eb2bd();
  /* 118eb2a8 mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 118eb2ae pop esi */
  ESI = (pop32());
  /* 118eb2af ret  */
  ESPCHK(0x118eb24au, _esp0);
  ESP += 4; return;
L_118eb2b0:;
  /* 118eb2b0 call 0x118eb2bd */
  push32(0x118eb2b5u); f_118eb2bd();
  /* 118eb2b5 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 118eb2bb pop esi */
  ESI = (pop32());
  /* 118eb2bc ret  */
  ESPCHK(0x118eb24au, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2bd @ 0x118eb2bd (9 bytes, 3 insns) */
void f_118eb2bd(void) {
  FTRACE(0x118eb2bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb2bd call 0x118e56f9 */
  push32(0x118eb2c2u); f_118e56f9();
  /* 118eb2c2 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb2c5 ret  */
  ESPCHK(0x118eb2bdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2c6 @ 0x118eb2c6 (9 bytes, 3 insns) */
void f_118eb2c6(void) {
  FTRACE(0x118eb2c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb2c6 call 0x118e56f9 */
  push32(0x118eb2cbu); f_118e56f9();
  /* 118eb2cb add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb2ce ret  */
  ESPCHK(0x118eb2c6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2cf @ 0x118eb2cf (127 bytes, 48 insns) */
void f_118eb2cf(void) {
  FTRACE(0x118eb2cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb2cf mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118eb2d3 push esi */
  push32((uint32_t)(ESI));
  /* 118eb2d4 cmp ecx, dword ptr [0x1190ab40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1190ab40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb2da push edi */
  push32((uint32_t)(EDI));
  /* 118eb2db jae 0x118eb335 */
  if (!C.cf) goto L_118eb335;
  /* 118eb2dd mov eax, ecx */
  EAX = (ECX);
  /* 118eb2df sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118eb2e2 lea edi, [eax*4 + 0x1190aa40] */
  EDI = ((uint32_t)(EAX*4 + 0x1190aa40));
  /* 118eb2e9 mov eax, ecx */
  EAX = (ECX);
  /* 118eb2eb and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118eb2ee lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 118eb2f1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118eb2f3 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 118eb2f6 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb2f8 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118eb2fc je 0x118eb335 */
  if (C.zf) goto L_118eb335;
  /* 118eb2fe cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb301 je 0x118eb335 */
  if (C.zf) goto L_118eb335;
  /* 118eb303 cmp dword ptr [0x11909420], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11909420))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb30a jne 0x118eb32b */
  if (!C.zf) goto L_118eb32b;
  /* 118eb30c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118eb30e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eb310 je 0x118eb322 */
  if (C.zf) goto L_118eb322;
  /* 118eb312 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118eb313 je 0x118eb31d */
  if (C.zf) goto L_118eb31d;
  /* 118eb315 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118eb316 jne 0x118eb32b */
  if (!C.zf) goto L_118eb32b;
  /* 118eb318 push eax */
  push32((uint32_t)(EAX));
  /* 118eb319 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 118eb31b jmp 0x118eb325 */
  goto L_118eb325;
L_118eb31d:;
  /* 118eb31d push eax */
  push32((uint32_t)(EAX));
  /* 118eb31e push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 118eb320 jmp 0x118eb325 */
  goto L_118eb325;
L_118eb322:;
  /* 118eb322 push eax */
  push32((uint32_t)(EAX));
  /* 118eb323 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_118eb325:;
  /* 118eb325 call dword ptr [0x118ef030] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef030))), 0x118eb32bu);
L_118eb32b:;
  /* 118eb32b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118eb32d or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 118eb331 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118eb333 jmp 0x118eb34b */
  goto L_118eb34b;
L_118eb335:;
  /* 118eb335 call 0x118eb2bd */
  push32(0x118eb33au); f_118eb2bd();
  /* 118eb33a mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118eb340 call 0x118eb2c6 */
  push32(0x118eb345u); f_118eb2c6();
  /* 118eb345 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118eb348 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118eb34b:;
  /* 118eb34b pop edi */
  EDI = (pop32());
  /* 118eb34c pop esi */
  ESI = (pop32());
  /* 118eb34d ret  */
  ESPCHK(0x118eb2cfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b34e @ 0x118eb34e (66 bytes, 19 insns) */
void f_118eb34e(void) {
  FTRACE(0x118eb34eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb34e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118eb352 cmp eax, dword ptr [0x1190ab40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1190ab40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb358 jae 0x118eb379 */
  if (!C.cf) goto L_118eb379;
  /* 118eb35a mov ecx, eax */
  ECX = (EAX);
  /* 118eb35c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118eb35f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118eb362 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118eb365 mov ecx, dword ptr [ecx*4 + 0x1190aa40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118eb36c test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118eb371 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 118eb374 je 0x118eb379 */
  if (C.zf) goto L_118eb379;
  /* 118eb376 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 118eb378 ret  */
  ESPCHK(0x118eb34eu, _esp0);
  ESP += 4; return;
L_118eb379:;
  /* 118eb379 call 0x118eb2bd */
  push32(0x118eb37eu); f_118eb2bd();
  /* 118eb37e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118eb384 call 0x118eb2c6 */
  push32(0x118eb389u); f_118eb2c6();
  /* 118eb389 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118eb38c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118eb38f ret  */
  ESPCHK(0x118eb34eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b390 @ 0x118eb390 (95 bytes, 34 insns) */
void f_118eb390(void) {
  FTRACE(0x118eb390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb390 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118eb394 push ebx */
  push32((uint32_t)(EBX));
  /* 118eb395 mov ecx, eax */
  ECX = (EAX);
  /* 118eb397 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118eb39a sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118eb39d push esi */
  push32((uint32_t)(ESI));
  /* 118eb39e push edi */
  push32((uint32_t)(EDI));
  /* 118eb39f mov esi, dword ptr [ecx*4 + 0x1190aa40] */
  ESI = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118eb3a6 lea ebx, [ecx*4 + 0x1190aa40] */
  EBX = ((uint32_t)(ECX*4 + 0x1190aa40));
  /* 118eb3ad lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 118eb3b0 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 118eb3b3 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb3b5 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb3b9 jne 0x118eb3de */
  if (!C.zf) goto L_118eb3de;
  /* 118eb3bb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118eb3bd call 0x118e7509 */
  push32(0x118eb3c2u); f_118e7509();
  /* 118eb3c2 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb3c6 pop ecx */
  ECX = (pop32());
  /* 118eb3c7 jne 0x118eb3d6 */
  if (!C.zf) goto L_118eb3d6;
  /* 118eb3c9 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118eb3cc push eax */
  push32((uint32_t)(EAX));
  /* 118eb3cd call dword ptr [0x118ef070] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef070))), 0x118eb3d3u);
  /* 118eb3d3 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_118eb3d6:;
  /* 118eb3d6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 118eb3d8 call 0x118e756a */
  push32(0x118eb3ddu); f_118e756a();
  /* 118eb3dd pop ecx */
  ECX = (pop32());
L_118eb3de:;
  /* 118eb3de mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118eb3e0 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 118eb3e4 push eax */
  push32((uint32_t)(EAX));
  /* 118eb3e5 call dword ptr [0x118ef06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef06c))), 0x118eb3ebu);
  /* 118eb3eb pop edi */
  EDI = (pop32());
  /* 118eb3ec pop esi */
  ESI = (pop32());
  /* 118eb3ed pop ebx */
  EBX = (pop32());
  /* 118eb3ee ret  */
  ESPCHK(0x118eb390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3ef @ 0x118eb3ef (34 bytes, 10 insns) */
void f_118eb3ef(void) {
  FTRACE(0x118eb3efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb3ef mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118eb3f3 mov ecx, eax */
  ECX = (EAX);
  /* 118eb3f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118eb3f8 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118eb3fb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118eb3fe mov ecx, dword ptr [ecx*4 + 0x1190aa40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118eb405 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 118eb409 push eax */
  push32((uint32_t)(EAX));
  /* 118eb40a call dword ptr [0x118ef068] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef068))), 0x118eb410u);
  /* 118eb410 ret  */
  ESPCHK(0x118eb3efu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b492 @ 0x118eb492 (46 bytes, 22 insns) */
void f_118eb492(void) {
  FTRACE(0x118eb492u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb492 push esi */
  push32((uint32_t)(ESI));
  /* 118eb493 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118eb497 push esi */
  push32((uint32_t)(ESI));
  /* 118eb498 call 0x118eb4c0 */
  push32(0x118eb49du); f_118eb4c0();
  /* 118eb49d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118eb49f pop ecx */
  ECX = (pop32());
  /* 118eb4a0 je 0x118eb4a7 */
  if (C.zf) goto L_118eb4a7;
  /* 118eb4a2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118eb4a5 pop esi */
  ESI = (pop32());
  /* 118eb4a6 ret  */
  ESPCHK(0x118eb492u, _esp0);
  ESP += 4; return;
L_118eb4a7:;
  /* 118eb4a7 test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 118eb4ab je 0x118eb4bc */
  if (C.zf) goto L_118eb4bc;
  /* 118eb4ad push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118eb4b0 call 0x118ec1b3 */
  push32(0x118eb4b5u); f_118ec1b3();
  /* 118eb4b5 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118eb4b7 pop ecx */
  ECX = (pop32());
  /* 118eb4b8 pop esi */
  ESI = (pop32());
  /* 118eb4b9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eb4bb ret  */
  ESPCHK(0x118eb492u, _esp0);
  ESP += 4; return;
L_118eb4bc:;
  /* 118eb4bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118eb4be pop esi */
  ESI = (pop32());
  /* 118eb4bf ret  */
  ESPCHK(0x118eb492u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4c0 @ 0x118eb4c0 (92 bytes, 40 insns) */
void f_118eb4c0(void) {
  FTRACE(0x118eb4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb4c0 push ebx */
  push32((uint32_t)(EBX));
  /* 118eb4c1 push esi */
  push32((uint32_t)(ESI));
  /* 118eb4c2 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 118eb4c6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118eb4c8 push edi */
  push32((uint32_t)(EDI));
  /* 118eb4c9 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118eb4cc mov ecx, eax */
  ECX = (EAX);
  /* 118eb4ce and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118eb4d1 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118eb4d4 jne 0x118eb50d */
  if (!C.zf) goto L_118eb50d;
  /* 118eb4d6 test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 118eb4da je 0x118eb50d */
  if (C.zf) goto L_118eb50d;
  /* 118eb4dc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118eb4df mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 118eb4e1 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eb4e3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118eb4e5 jle 0x118eb50d */
  if ((C.zf||C.sf!=C.of)) goto L_118eb50d;
  /* 118eb4e7 push edi */
  push32((uint32_t)(EDI));
  /* 118eb4e8 push eax */
  push32((uint32_t)(EAX));
  /* 118eb4e9 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118eb4ec call 0x118e8e78 */
  push32(0x118eb4f1u); f_118e8e78();
  /* 118eb4f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb4f4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb4f6 jne 0x118eb506 */
  if (!C.zf) goto L_118eb506;
  /* 118eb4f8 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118eb4fb test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 118eb4fd je 0x118eb50d */
  if (C.zf) goto L_118eb50d;
  /* 118eb4ff and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 118eb501 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 118eb504 jmp 0x118eb50d */
  goto L_118eb50d;
L_118eb506:;
  /* 118eb506 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118eb50a or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_118eb50d:;
  /* 118eb50d mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 118eb510 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118eb514 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118eb516 pop edi */
  EDI = (pop32());
  /* 118eb517 mov eax, ebx */
  EAX = (EBX);
  /* 118eb519 pop esi */
  ESI = (pop32());
  /* 118eb51a pop ebx */
  EBX = (pop32());
  /* 118eb51b ret  */
  ESPCHK(0x118eb4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b525 @ 0x118eb525 (164 bytes, 66 insns) */
void f_118eb525(void) {
  FTRACE(0x118eb525u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb525 push ebx */
  push32((uint32_t)(EBX));
  /* 118eb526 push esi */
  push32((uint32_t)(ESI));
  /* 118eb527 push edi */
  push32((uint32_t)(EDI));
  /* 118eb528 push 2 */
  push32((uint32_t)(0x2u));
  /* 118eb52a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118eb52c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118eb52e call 0x118e7509 */
  push32(0x118eb533u); f_118e7509();
  /* 118eb533 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118eb535 pop ecx */
  ECX = (pop32());
  /* 118eb536 cmp dword ptr [0x1190aa00], esi */
  { uint32_t _a=(r32((uint32_t)(0x1190aa00))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb53c jle 0x118eb5b2 */
  if ((C.zf||C.sf!=C.of)) goto L_118eb5b2;
L_118eb53e:;
  /* 118eb53e mov eax, dword ptr [0x119099e8] */
  EAX = (r32((uint32_t)(0x119099e8)));
  /* 118eb543 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 118eb546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118eb548 je 0x118eb5a9 */
  if (C.zf) goto L_118eb5a9;
  /* 118eb54a test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 118eb54e je 0x118eb5a9 */
  if (C.zf) goto L_118eb5a9;
  /* 118eb550 push eax */
  push32((uint32_t)(EAX));
  /* 118eb551 push esi */
  push32((uint32_t)(ESI));
  /* 118eb552 call 0x118e9153 */
  push32(0x118eb557u); f_118e9153();
  /* 118eb557 mov eax, dword ptr [0x119099e8] */
  EAX = (r32((uint32_t)(0x119099e8)));
  /* 118eb55c pop ecx */
  ECX = (pop32());
  /* 118eb55d pop ecx */
  ECX = (pop32());
  /* 118eb55e mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 118eb561 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118eb564 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 118eb567 je 0x118eb599 */
  if (C.zf) goto L_118eb599;
  /* 118eb569 cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb56e jne 0x118eb57f */
  if (!C.zf) goto L_118eb57f;
  /* 118eb570 push eax */
  push32((uint32_t)(EAX));
  /* 118eb571 call 0x118eb492 */
  push32(0x118eb576u); f_118eb492();
  /* 118eb576 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb579 pop ecx */
  ECX = (pop32());
  /* 118eb57a je 0x118eb599 */
  if (C.zf) goto L_118eb599;
  /* 118eb57c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118eb57d jmp 0x118eb599 */
  goto L_118eb599;
L_118eb57f:;
  /* 118eb57f cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb584 jne 0x118eb599 */
  if (!C.zf) goto L_118eb599;
  /* 118eb586 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 118eb589 je 0x118eb599 */
  if (C.zf) goto L_118eb599;
  /* 118eb58b push eax */
  push32((uint32_t)(EAX));
  /* 118eb58c call 0x118eb492 */
  push32(0x118eb591u); f_118eb492();
  /* 118eb591 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb594 pop ecx */
  ECX = (pop32());
  /* 118eb595 jne 0x118eb599 */
  if (!C.zf) goto L_118eb599;
  /* 118eb597 or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_118eb599:;
  /* 118eb599 mov eax, dword ptr [0x119099e8] */
  EAX = (r32((uint32_t)(0x119099e8)));
  /* 118eb59e push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 118eb5a1 push esi */
  push32((uint32_t)(ESI));
  /* 118eb5a2 call 0x118e91a5 */
  push32(0x118eb5a7u); f_118e91a5();
  /* 118eb5a7 pop ecx */
  ECX = (pop32());
  /* 118eb5a8 pop ecx */
  ECX = (pop32());
L_118eb5a9:;
  /* 118eb5a9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118eb5aa cmp esi, dword ptr [0x1190aa00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1190aa00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb5b0 jl 0x118eb53e */
  if ((C.sf!=C.of)) goto L_118eb53e;
L_118eb5b2:;
  /* 118eb5b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118eb5b4 call 0x118e756a */
  push32(0x118eb5b9u); f_118e756a();
  /* 118eb5b9 cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb5be pop ecx */
  ECX = (pop32());
  /* 118eb5bf mov eax, ebx */
  EAX = (EBX);
  /* 118eb5c1 je 0x118eb5c5 */
  if (C.zf) goto L_118eb5c5;
  /* 118eb5c3 mov eax, edi */
  EAX = (EDI);
L_118eb5c5:;
  /* 118eb5c5 pop edi */
  EDI = (pop32());
  /* 118eb5c6 pop esi */
  ESI = (pop32());
  /* 118eb5c7 pop ebx */
  EBX = (pop32());
  /* 118eb5c8 ret  */
  ESPCHK(0x118eb525u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5c9 @ 0x118eb5c9 (691 bytes, 258 insns) */
void f_118eb5c9(void) {
  FTRACE(0x118eb5c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb5c9 push ebp */
  push32((uint32_t)(EBP));
  /* 118eb5ca mov ebp, esp */
  EBP = (ESP);
  /* 118eb5cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb5cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118eb5d1 push ebx */
  push32((uint32_t)(EBX));
  /* 118eb5d2 push esi */
  push32((uint32_t)(ESI));
  /* 118eb5d3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 118eb5d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb5d9 push edi */
  push32((uint32_t)(EDI));
  /* 118eb5da push 1 */
  push32((uint32_t)(0x1u));
  /* 118eb5dc mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 118eb5df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb5e2 pop ebx */
  EBX = (pop32());
  /* 118eb5e3 mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 118eb5e6 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 118eb5e9 test cl, 0x10 */
  { uint32_t _r=(CL)&(0x10u); fl_logic(_r,8); }
  /* 118eb5ec je 0x118eb5fb */
  if (C.zf) goto L_118eb5fb;
  /* 118eb5ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb5f1 mov dword ptr [ebp + 0x10], 0xc000008f */
  w32((uint32_t)(EBP + 0x10), (0xc000008fu));
  /* 118eb5f8 or dword ptr [eax + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EBX); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_118eb5fb:;
  /* 118eb5fb test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 118eb5fe je 0x118eb60e */
  if (C.zf) goto L_118eb60e;
  /* 118eb600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb603 mov dword ptr [ebp + 0x10], 0xc0000093 */
  w32((uint32_t)(EBP + 0x10), (0xc0000093u));
  /* 118eb60a or dword ptr [eax + 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(0x2u); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_118eb60e:;
  /* 118eb60e test bl, cl */
  { uint32_t _r=(BL)&(CL); fl_logic(_r,8); }
  /* 118eb610 je 0x118eb620 */
  if (C.zf) goto L_118eb620;
  /* 118eb612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb615 mov dword ptr [ebp + 0x10], 0xc0000091 */
  w32((uint32_t)(EBP + 0x10), (0xc0000091u));
  /* 118eb61c or dword ptr [eax + 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(0x4u); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_118eb620:;
  /* 118eb620 test cl, 4 */
  { uint32_t _r=(CL)&(0x4u); fl_logic(_r,8); }
  /* 118eb623 je 0x118eb633 */
  if (C.zf) goto L_118eb633;
  /* 118eb625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb628 mov dword ptr [ebp + 0x10], 0xc000008e */
  w32((uint32_t)(EBP + 0x10), (0xc000008eu));
  /* 118eb62f or dword ptr [eax + 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(0x8u); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_118eb633:;
  /* 118eb633 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 118eb636 je 0x118eb646 */
  if (C.zf) goto L_118eb646;
  /* 118eb638 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb63b mov dword ptr [ebp + 0x10], 0xc0000090 */
  w32((uint32_t)(EBP + 0x10), (0xc0000090u));
  /* 118eb642 or dword ptr [eax + 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(0x10u); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_118eb646:;
  /* 118eb646 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118eb649 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb64c push 2 */
  push32((uint32_t)(0x2u));
  /* 118eb64e mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118eb650 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 118eb653 not ecx */
  ECX = (~(ECX));
  /* 118eb655 and ecx, ebx */
  { uint32_t _r=(ECX)&(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb657 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 118eb65a shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 118eb65d or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb65f pop edi */
  EDI = (pop32());
  /* 118eb660 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 118eb663 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118eb665 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb668 not ecx */
  ECX = (~(ECX));
  /* 118eb66a mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 118eb66d and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 118eb670 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118eb672 and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 118eb675 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb677 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 118eb67a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118eb67c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb67f not ecx */
  ECX = (~(ECX));
  /* 118eb681 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 118eb684 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118eb686 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 118eb689 and edx, 0xfffffffb */
  { uint32_t _r=(EDX)&(0xfffffffbu); EDX = (_r); fl_logic(_r,32); }
  /* 118eb68c or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb68e mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 118eb691 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118eb693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb696 not ecx */
  ECX = (~(ECX));
  /* 118eb698 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 118eb69b shr ecx, 3 */
  ECX = (sh_shr((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 118eb69e and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118eb6a0 and edx, 0xfffffffd */
  { uint32_t _r=(EDX)&(0xfffffffdu); EDX = (_r); fl_logic(_r,32); }
  /* 118eb6a3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb6a5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 118eb6a8 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118eb6aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb6ad not ecx */
  ECX = (~(ECX));
  /* 118eb6af mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 118eb6b2 shr ecx, 5 */
  ECX = (sh_shr((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118eb6b5 and ecx, ebx */
  { uint32_t _r=(ECX)&(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb6b7 and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 118eb6ba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb6bc mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 118eb6bf call 0x118ebabe */
  push32(0x118eb6c4u); f_118ebabe();
  /* 118eb6c4 test bl, al */
  { uint32_t _r=(BL)&(AL); fl_logic(_r,8); }
  /* 118eb6c6 je 0x118eb6cf */
  if (C.zf) goto L_118eb6cf;
  /* 118eb6c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb6cb or dword ptr [ecx + 0xc], 0x10 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x10u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
L_118eb6cf:;
  /* 118eb6cf test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 118eb6d1 je 0x118eb6da */
  if (C.zf) goto L_118eb6da;
  /* 118eb6d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb6d6 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
L_118eb6da:;
  /* 118eb6da test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 118eb6dc je 0x118eb6e5 */
  if (C.zf) goto L_118eb6e5;
  /* 118eb6de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb6e1 or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
L_118eb6e5:;
  /* 118eb6e5 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 118eb6e7 je 0x118eb6ef */
  if (C.zf) goto L_118eb6ef;
  /* 118eb6e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb6ec or dword ptr [ecx + 0xc], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(EDI); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
L_118eb6ef:;
  /* 118eb6ef test al, 0x20 */
  { uint32_t _r=(AL)&(0x20u); fl_logic(_r,8); }
  /* 118eb6f1 je 0x118eb6f9 */
  if (C.zf) goto L_118eb6f9;
  /* 118eb6f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb6f6 or dword ptr [eax + 0xc], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xc)))|(EBX); w32((uint32_t)(EAX + 0xc), (_r)); fl_logic(_r,32); }
L_118eb6f9:;
  /* 118eb6f9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118eb6fb mov ecx, 0xc00 */
  ECX = (0xc00u);
  /* 118eb700 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 118eb702 je 0x118eb738 */
  if (C.zf) goto L_118eb738;
  /* 118eb704 cmp eax, 0x400 */
  { uint32_t _a=(EAX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb709 je 0x118eb72a */
  if (C.zf) goto L_118eb72a;
  /* 118eb70b cmp eax, 0x800 */
  { uint32_t _a=(EAX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb710 je 0x118eb71e */
  if (C.zf) goto L_118eb71e;
  /* 118eb712 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb714 jne 0x118eb73e */
  if (!C.zf) goto L_118eb73e;
  /* 118eb716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb719 or dword ptr [eax], 3 */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0x3u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118eb71c jmp 0x118eb73e */
  goto L_118eb73e;
L_118eb71e:;
  /* 118eb71e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb721 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118eb723 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 118eb726 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118eb728 jmp 0x118eb734 */
  goto L_118eb734;
L_118eb72a:;
  /* 118eb72a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb72d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118eb72f and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 118eb732 or ecx, ebx */
  { uint32_t _r=(ECX)|(EBX); ECX = (_r); fl_logic(_r,32); }
L_118eb734:;
  /* 118eb734 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118eb736 jmp 0x118eb73e */
  goto L_118eb73e;
L_118eb738:;
  /* 118eb738 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb73b and dword ptr [eax], 0xfffffffc */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0xfffffffcu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_118eb73e:;
  /* 118eb73e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118eb740 mov ecx, 0x300 */
  ECX = (0x300u);
  /* 118eb745 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 118eb747 je 0x118eb769 */
  if (C.zf) goto L_118eb769;
  /* 118eb749 cmp eax, 0x200 */
  { uint32_t _a=(EAX),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb74e je 0x118eb75c */
  if (C.zf) goto L_118eb75c;
  /* 118eb750 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb752 jne 0x118eb776 */
  if (!C.zf) goto L_118eb776;
  /* 118eb754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb757 and dword ptr [eax], 0xffffffe3 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0xffffffe3u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118eb75a jmp 0x118eb776 */
  goto L_118eb776;
L_118eb75c:;
  /* 118eb75c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb75f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118eb761 and ecx, 0xffffffe7 */
  { uint32_t _r=(ECX)&(0xffffffe7u); ECX = (_r); fl_logic(_r,32); }
  /* 118eb764 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 118eb767 jmp 0x118eb774 */
  goto L_118eb774;
L_118eb769:;
  /* 118eb769 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb76c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118eb76e and ecx, 0xffffffeb */
  { uint32_t _r=(ECX)&(0xffffffebu); ECX = (_r); fl_logic(_r,32); }
  /* 118eb771 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
L_118eb774:;
  /* 118eb774 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_118eb776:;
  /* 118eb776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb779 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118eb77c and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 118eb782 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 118eb784 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118eb787 and edx, 0xfffe001f */
  { uint32_t _r=(EDX)&(0xfffe001fu); EDX = (_r); fl_logic(_r,32); }
  /* 118eb78d or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb78f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118eb791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb794 or dword ptr [eax + 0x20], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x20)))|(EBX); w32((uint32_t)(EAX + 0x20), (_r)); fl_logic(_r,32); }
  /* 118eb797 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb79a mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 118eb79d and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 118eb7a0 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118eb7a2 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 118eb7a5 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118eb7a8 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 118eb7aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb7ad fstp qword ptr [eax + 0x10] */
  wf64((uint32_t)(EAX + 0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb7b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb7b3 or dword ptr [eax + 0x50], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x50)))|(EBX); w32((uint32_t)(EAX + 0x50), (_r)); fl_logic(_r,32); }
  /* 118eb7b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb7b9 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 118eb7bc and ecx, 0xffffffe3 */
  { uint32_t _r=(ECX)&(0xffffffe3u); ECX = (_r); fl_logic(_r,32); }
  /* 118eb7bf or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 118eb7c1 mov edi, dword ptr [ebp + 0x1c] */
  EDI = (r32((uint32_t)(EBP + 0x1c)));
  /* 118eb7c4 mov dword ptr [eax + 0x50], ecx */
  w32((uint32_t)(EAX + 0x50), (ECX));
  /* 118eb7c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb7ca fld qword ptr [edi] */
  fpu_push(rf64((uint32_t)(EDI)));
  /* 118eb7cc fstp qword ptr [eax + 0x40] */
  wf64((uint32_t)(EAX + 0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb7cf call 0x118ebacc */
  push32(0x118eb7d4u); f_118ebacc();
  /* 118eb7d4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118eb7d7 push eax */
  push32((uint32_t)(EAX));
  /* 118eb7d8 push ebx */
  push32((uint32_t)(EBX));
  /* 118eb7d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118eb7db push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118eb7de call dword ptr [0x118ef02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef02c))), 0x118eb7e4u);
  /* 118eb7e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb7e7 test byte ptr [eax + 8], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x8)))&(0x10u); fl_logic(_r,8); }
  /* 118eb7eb je 0x118eb7f0 */
  if (C.zf) goto L_118eb7f0;
  /* 118eb7ed and dword ptr [esi], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0xfffffffeu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
L_118eb7f0:;
  /* 118eb7f0 test byte ptr [eax + 8], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x8)))&(0x8u); fl_logic(_r,8); }
  /* 118eb7f4 je 0x118eb7f9 */
  if (C.zf) goto L_118eb7f9;
  /* 118eb7f6 and dword ptr [esi], 0xfffffffb */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0xfffffffbu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
L_118eb7f9:;
  /* 118eb7f9 test byte ptr [eax + 8], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x8)))&(0x4u); fl_logic(_r,8); }
  /* 118eb7fd je 0x118eb802 */
  if (C.zf) goto L_118eb802;
  /* 118eb7ff and dword ptr [esi], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0xfffffff7u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
L_118eb802:;
  /* 118eb802 test byte ptr [eax + 8], 2 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x8)))&(0x2u); fl_logic(_r,8); }
  /* 118eb806 je 0x118eb80b */
  if (C.zf) goto L_118eb80b;
  /* 118eb808 and dword ptr [esi], 0xffffffef */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0xffffffefu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
L_118eb80b:;
  /* 118eb80b test byte ptr [eax + 8], bl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x8)))&(BL); fl_logic(_r,8); }
  /* 118eb80e je 0x118eb813 */
  if (C.zf) goto L_118eb813;
  /* 118eb810 and dword ptr [esi], 0xffffffdf */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0xffffffdfu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
L_118eb813:;
  /* 118eb813 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118eb815 mov edx, 0xfffff3ff */
  EDX = (0xfffff3ffu);
  /* 118eb81a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 118eb81d sub ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eb820 je 0x118eb847 */
  if (C.zf) goto L_118eb847;
  /* 118eb822 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118eb823 je 0x118eb83b */
  if (C.zf) goto L_118eb83b;
  /* 118eb825 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118eb826 je 0x118eb831 */
  if (C.zf) goto L_118eb831;
  /* 118eb828 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118eb829 jne 0x118eb849 */
  if (!C.zf) goto L_118eb849;
  /* 118eb82b or byte ptr [esi + 1], 0xc */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x1)))|(0xcu); w8((uint32_t)(ESI + 0x1), (_r)); fl_logic(_r,8); }
  /* 118eb82f jmp 0x118eb849 */
  goto L_118eb849;
L_118eb831:;
  /* 118eb831 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118eb833 and ch, 0xfb */
  { uint32_t _r=(C.c.b.h)&(0xfbu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 118eb836 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 118eb839 jmp 0x118eb843 */
  goto L_118eb843;
L_118eb83b:;
  /* 118eb83b mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118eb83d and ch, 0xf7 */
  { uint32_t _r=(C.c.b.h)&(0xf7u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 118eb840 or ch, 4 */
  { uint32_t _r=(C.c.b.h)|(0x4u); C.c.b.h = (_r); fl_logic(_r,8); }
L_118eb843:;
  /* 118eb843 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 118eb845 jmp 0x118eb849 */
  goto L_118eb849;
L_118eb847:;
  /* 118eb847 and dword ptr [esi], edx */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(EDX); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
L_118eb849:;
  /* 118eb849 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118eb84b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118eb84e and ecx, 7 */
  { uint32_t _r=(ECX)&(0x7u); ECX = (_r); fl_logic(_r,32); }
  /* 118eb851 sub ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eb854 je 0x118eb869 */
  if (C.zf) goto L_118eb869;
  /* 118eb856 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118eb857 je 0x118eb860 */
  if (C.zf) goto L_118eb860;
  /* 118eb859 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118eb85a jne 0x118eb872 */
  if (!C.zf) goto L_118eb872;
  /* 118eb85c and dword ptr [esi], edx */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(EDX); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 118eb85e jmp 0x118eb872 */
  goto L_118eb872;
L_118eb860:;
  /* 118eb860 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118eb862 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb864 or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 118eb867 jmp 0x118eb870 */
  goto L_118eb870;
L_118eb869:;
  /* 118eb869 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118eb86b and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb86d or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
L_118eb870:;
  /* 118eb870 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
L_118eb872:;
  /* 118eb872 fld qword ptr [eax + 0x40] */
  fpu_push(rf64((uint32_t)(EAX + 0x40)));
  /* 118eb875 fstp qword ptr [edi] */
  wf64((uint32_t)(EDI), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb877 pop edi */
  EDI = (pop32());
  /* 118eb878 pop esi */
  ESI = (pop32());
  /* 118eb879 pop ebx */
  EBX = (pop32());
  /* 118eb87a pop ebp */
  EBP = (pop32());
  /* 118eb87b ret  */
  ESPCHK(0x118eb5c9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b87c @ 0x118eb87c (535 bytes, 189 insns) */
void f_118eb87c(void) {
  FTRACE(0x118eb87cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eb87c push ebp */
  push32((uint32_t)(EBP));
  /* 118eb87d mov ebp, esp */
  EBP = (ESP);
  /* 118eb87f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eb882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eb885 push ebx */
  push32((uint32_t)(EBX));
  /* 118eb886 push edi */
  push32((uint32_t)(EDI));
  /* 118eb887 mov edi, eax */
  EDI = (EAX);
  /* 118eb889 and edi, 0x1f */
  { uint32_t _r=(EDI)&(0x1fu); EDI = (_r); fl_logic(_r,32); }
  /* 118eb88c push 1 */
  push32((uint32_t)(0x1u));
  /* 118eb88e test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 118eb890 pop ebx */
  EBX = (pop32());
  /* 118eb891 je 0x118eb8a7 */
  if (C.zf) goto L_118eb8a7;
  /* 118eb893 test byte ptr [ebp + 0x10], bl */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x10)))&(BL); fl_logic(_r,8); }
  /* 118eb896 je 0x118eb8a7 */
  if (C.zf) goto L_118eb8a7;
  /* 118eb898 push ebx */
  push32((uint32_t)(EBX));
  /* 118eb899 call 0x118ebafe */
  push32(0x118eb89eu); f_118ebafe();
  /* 118eb89e pop ecx */
  ECX = (pop32());
  /* 118eb89f and edi, 0xfffffff7 */
  { uint32_t _r=(EDI)&(0xfffffff7u); EDI = (_r); fl_logic(_r,32); }
  /* 118eb8a2 jmp 0x118eba71 */
  goto L_118eba71;
L_118eb8a7:;
  /* 118eb8a7 test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 118eb8a9 je 0x118eb8c1 */
  if (C.zf) goto L_118eb8c1;
  /* 118eb8ab test byte ptr [ebp + 0x10], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x10)))&(0x4u); fl_logic(_r,8); }
  /* 118eb8af je 0x118eb8c1 */
  if (C.zf) goto L_118eb8c1;
  /* 118eb8b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 118eb8b3 call 0x118ebafe */
  push32(0x118eb8b8u); f_118ebafe();
  /* 118eb8b8 pop ecx */
  ECX = (pop32());
  /* 118eb8b9 and edi, 0xfffffffb */
  { uint32_t _r=(EDI)&(0xfffffffbu); EDI = (_r); fl_logic(_r,32); }
  /* 118eb8bc jmp 0x118eba71 */
  goto L_118eba71;
L_118eb8c1:;
  /* 118eb8c1 test bl, al */
  { uint32_t _r=(BL)&(AL); fl_logic(_r,8); }
  /* 118eb8c3 je 0x118eb99b */
  if (C.zf) goto L_118eb99b;
  /* 118eb8c9 test byte ptr [ebp + 0x10], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x10)))&(0x8u); fl_logic(_r,8); }
  /* 118eb8cd je 0x118eb99b */
  if (C.zf) goto L_118eb99b;
  /* 118eb8d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 118eb8d5 call 0x118ebafe */
  push32(0x118eb8dau); f_118ebafe();
  /* 118eb8da pop ecx */
  ECX = (pop32());
  /* 118eb8db mov eax, 0xc00 */
  EAX = (0xc00u);
  /* 118eb8e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118eb8e3 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118eb8e5 je 0x118eb973 */
  if (C.zf) goto L_118eb973;
  /* 118eb8eb cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb8f1 je 0x118eb94b */
  if (C.zf) goto L_118eb94b;
  /* 118eb8f3 cmp ecx, 0x800 */
  { uint32_t _a=(ECX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb8f9 je 0x118eb923 */
  if (C.zf) goto L_118eb923;
  /* 118eb8fb cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb8fd jne 0x118eb993 */
  if (!C.zf) goto L_118eb993;
  /* 118eb903 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118eb906 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 118eb908 fcomp qword ptr [0x118ef210] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef210)));
  (void)fpu_pop();
  /* 118eb90e fld qword ptr [0x118f4440] */
  fpu_push(rf64((uint32_t)(0x118f4440)));
  /* 118eb914 fnstsw ax */
  AX = fpu_status();
  /* 118eb916 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 118eb917 ja 0x118eb91b */
  if ((!C.cf&&!C.zf)) goto L_118eb91b;
  /* 118eb919 fchs  */
  FPU_ST(0) = -FPU_ST(0);
L_118eb91b:;
  /* 118eb91b fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb91e fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 118eb921 jmp 0x118eb991 */
  goto L_118eb991;
L_118eb923:;
  /* 118eb923 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118eb926 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 118eb928 fcomp qword ptr [0x118ef210] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef210)));
  (void)fpu_pop();
  /* 118eb92e fnstsw ax */
  AX = fpu_status();
  /* 118eb930 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 118eb931 jbe 0x118eb93b */
  if ((C.cf||C.zf)) goto L_118eb93b;
  /* 118eb933 fld qword ptr [0x118f4430] */
  fpu_push(rf64((uint32_t)(0x118f4430)));
  /* 118eb939 jmp 0x118eb943 */
  goto L_118eb943;
L_118eb93b:;
  /* 118eb93b fld qword ptr [0x118f4440] */
  fpu_push(rf64((uint32_t)(0x118f4440)));
  /* 118eb941 fchs  */
  FPU_ST(0) = -FPU_ST(0);
L_118eb943:;
  /* 118eb943 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb946 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 118eb949 jmp 0x118eb991 */
  goto L_118eb991;
L_118eb94b:;
  /* 118eb94b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118eb94e fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 118eb950 fcomp qword ptr [0x118ef210] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef210)));
  (void)fpu_pop();
  /* 118eb956 fnstsw ax */
  AX = fpu_status();
  /* 118eb958 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 118eb959 jbe 0x118eb963 */
  if ((C.cf||C.zf)) goto L_118eb963;
  /* 118eb95b fld qword ptr [0x118f4440] */
  fpu_push(rf64((uint32_t)(0x118f4440)));
  /* 118eb961 jmp 0x118eb96b */
  goto L_118eb96b;
L_118eb963:;
  /* 118eb963 fld qword ptr [0x118f4430] */
  fpu_push(rf64((uint32_t)(0x118f4430)));
  /* 118eb969 fchs  */
  FPU_ST(0) = -FPU_ST(0);
L_118eb96b:;
  /* 118eb96b fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb96e fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 118eb971 jmp 0x118eb991 */
  goto L_118eb991;
L_118eb973:;
  /* 118eb973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118eb976 fld qword ptr [ecx] */
  fpu_push(rf64((uint32_t)(ECX)));
  /* 118eb978 fcomp qword ptr [0x118ef210] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef210)));
  (void)fpu_pop();
  /* 118eb97e fld qword ptr [0x118f4430] */
  fpu_push(rf64((uint32_t)(0x118f4430)));
  /* 118eb984 fnstsw ax */
  AX = fpu_status();
  /* 118eb986 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 118eb987 ja 0x118eb98b */
  if ((!C.cf&&!C.zf)) goto L_118eb98b;
  /* 118eb989 fchs  */
  FPU_ST(0) = -FPU_ST(0);
L_118eb98b:;
  /* 118eb98b fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb98e fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
L_118eb991:;
  /* 118eb991 fstp qword ptr [ecx] */
  wf64((uint32_t)(ECX), FPU_ST(0));
  (void)fpu_pop();
L_118eb993:;
  /* 118eb993 and edi, 0xfffffffe */
  { uint32_t _r=(EDI)&(0xfffffffeu); EDI = (_r); fl_logic(_r,32); }
  /* 118eb996 jmp 0x118eba71 */
  goto L_118eba71;
L_118eb99b:;
  /* 118eb99b test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 118eb99d je 0x118eba71 */
  if (C.zf) goto L_118eba71;
  /* 118eb9a3 test byte ptr [ebp + 0x10], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x10)))&(0x10u); fl_logic(_r,8); }
  /* 118eb9a7 je 0x118eba71 */
  if (C.zf) goto L_118eba71;
  /* 118eb9ad push esi */
  push32((uint32_t)(ESI));
  /* 118eb9ae xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118eb9b0 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 118eb9b2 je 0x118eb9b6 */
  if (C.zf) goto L_118eb9b6;
  /* 118eb9b4 mov esi, ebx */
  ESI = (EBX);
L_118eb9b6:;
  /* 118eb9b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118eb9b9 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 118eb9bb fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb9be fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 118eb9c1 fcomp qword ptr [0x118ef210] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef210)));
  (void)fpu_pop();
  /* 118eb9c7 fnstsw ax */
  AX = fpu_status();
  /* 118eb9c9 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 118eb9ca je 0x118eba5f */
  if (C.zf) goto L_118eba5f;
  /* 118eb9d0 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 118eb9d3 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 118eb9d6 push eax */
  push32((uint32_t)(EAX));
  /* 118eb9d7 push ecx */
  push32((uint32_t)(ECX));
  /* 118eb9d8 push ecx */
  push32((uint32_t)(ECX));
  /* 118eb9d9 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb9dc call 0x118ec26f */
  push32(0x118eb9e1u); f_118ec26f();
  /* 118eb9e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118eb9e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118eb9e7 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb9ea lea ecx, [eax - 0x600] */
  ECX = ((uint32_t)(EAX + -0x600));
  /* 118eb9f0 cmp ecx, 0xfffffbce */
  { uint32_t _a=(ECX),_b=(0xfffffbceu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eb9f6 jge 0x118eba01 */
  if ((C.sf==C.of)) goto L_118eba01;
  /* 118eb9f8 fldz  */
  fpu_push(0.0);
  /* 118eb9fa mov esi, ebx */
  ESI = (EBX);
  /* 118eb9fc fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
  /* 118eb9ff jmp 0x118eba55 */
  goto L_118eba55;
L_118eba01:;
  /* 118eba01 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 118eba04 fcomp qword ptr [0x118ef210] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef210)));
  (void)fpu_pop();
  /* 118eba0a fnstsw ax */
  AX = fpu_status();
  /* 118eba0c sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 118eba0d jae 0x118eba13 */
  if (!C.cf) goto L_118eba13;
  /* 118eba0f mov edx, ebx */
  EDX = (EBX);
  /* 118eba11 jmp 0x118eba15 */
  goto L_118eba15;
L_118eba13:;
  /* 118eba13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_118eba15:;
  /* 118eba15 mov al, byte ptr [ebp - 6] */
  AL = (r8((uint32_t)(EBP + -0x6)));
  /* 118eba18 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 118eba1b or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
  /* 118eba1d mov word ptr [ebp - 6], ax */
  w16((uint32_t)(EBP + -0x6), (AX));
  /* 118eba21 mov eax, 0xfffffc03 */
  EAX = (0xfffffc03u);
  /* 118eba26 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eba28 jge 0x118eba49 */
  if ((C.sf==C.of)) goto L_118eba49;
  /* 118eba2a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118eba2c:;
  /* 118eba2c test byte ptr [ebp - 0xc], bl */
  { uint32_t _r=(r8((uint32_t)(EBP + -0xc)))&(BL); fl_logic(_r,8); }
  /* 118eba2f je 0x118eba37 */
  if (C.zf) goto L_118eba37;
  /* 118eba31 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118eba33 jne 0x118eba37 */
  if (!C.zf) goto L_118eba37;
  /* 118eba35 mov esi, ebx */
  ESI = (EBX);
L_118eba37:;
  /* 118eba37 shr dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (sh_shr((uint32_t)(r32((uint32_t)(EBP + -0xc))), (0x1u)&0x1f, 32)));
  /* 118eba3a test byte ptr [ebp - 8], bl */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x8)))&(BL); fl_logic(_r,8); }
  /* 118eba3d je 0x118eba43 */
  if (C.zf) goto L_118eba43;
  /* 118eba3f or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
L_118eba43:;
  /* 118eba43 shr dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (sh_shr((uint32_t)(r32((uint32_t)(EBP + -0x8))), (0x1u)&0x1f, 32)));
  /* 118eba46 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118eba47 jne 0x118eba2c */
  if (!C.zf) goto L_118eba2c;
L_118eba49:;
  /* 118eba49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118eba4b je 0x118eba55 */
  if (C.zf) goto L_118eba55;
  /* 118eba4d fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 118eba50 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 118eba52 fstp qword ptr [ebp - 0xc] */
  wf64((uint32_t)(EBP + -0xc), FPU_ST(0));
  (void)fpu_pop();
L_118eba55:;
  /* 118eba55 fld qword ptr [ebp - 0xc] */
  fpu_push(rf64((uint32_t)(EBP + -0xc)));
  /* 118eba58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118eba5b fstp qword ptr [eax] */
  wf64((uint32_t)(EAX), FPU_ST(0));
  (void)fpu_pop();
  /* 118eba5d jmp 0x118eba61 */
  goto L_118eba61;
L_118eba5f:;
  /* 118eba5f mov esi, ebx */
  ESI = (EBX);
L_118eba61:;
  /* 118eba61 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118eba63 pop esi */
  ESI = (pop32());
  /* 118eba64 je 0x118eba6e */
  if (C.zf) goto L_118eba6e;
  /* 118eba66 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 118eba68 call 0x118ebafe */
  push32(0x118eba6du); f_118ebafe();
  /* 118eba6d pop ecx */
  ECX = (pop32());
L_118eba6e:;
  /* 118eba6e and edi, 0xfffffffd */
  { uint32_t _r=(EDI)&(0xfffffffdu); EDI = (_r); fl_logic(_r,32); }
L_118eba71:;
  /* 118eba71 test byte ptr [ebp + 8], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x8)))&(0x10u); fl_logic(_r,8); }
  /* 118eba75 je 0x118eba88 */
  if (C.zf) goto L_118eba88;
  /* 118eba77 test byte ptr [ebp + 0x10], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x10)))&(0x20u); fl_logic(_r,8); }
  /* 118eba7b je 0x118eba88 */
  if (C.zf) goto L_118eba88;
  /* 118eba7d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118eba7f call 0x118ebafe */
  push32(0x118eba84u); f_118ebafe();
  /* 118eba84 pop ecx */
  ECX = (pop32());
  /* 118eba85 and edi, 0xffffffef */
  { uint32_t _r=(EDI)&(0xffffffefu); EDI = (_r); fl_logic(_r,32); }
L_118eba88:;
  /* 118eba88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118eba8a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118eba8c pop edi */
  EDI = (pop32());
  /* 118eba8d pop ebx */
  EBX = (pop32());
  /* 118eba8e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 118eba91 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118eba92 ret  */
  ESPCHK(0x118eb87cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba93 @ 0x118eba93 (40 bytes, 12 insns) */
void f_118eba93(void) {
  FTRACE(0x118eba93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eba93 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118eba97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eba9a je 0x118ebaaf */
  if (C.zf) goto L_118ebaaf;
  /* 118eba9c jle 0x118ebaba */
  if ((C.zf||C.sf!=C.of)) goto L_118ebaba;
  /* 118eba9e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebaa1 jg 0x118ebaba */
  if ((!C.zf&&C.sf==C.of)) goto L_118ebaba;
  /* 118ebaa3 call 0x118eb2bd */
  push32(0x118ebaa8u); f_118eb2bd();
  /* 118ebaa8 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 118ebaae ret  */
  ESPCHK(0x118eba93u, _esp0);
  ESP += 4; return;
L_118ebaaf:;
  /* 118ebaaf call 0x118eb2bd */
  push32(0x118ebab4u); f_118eb2bd();
  /* 118ebab4 mov dword ptr [eax], 0x21 */
  w32((uint32_t)(EAX), (0x21u));
L_118ebaba:;
  /* 118ebaba ret  */
  ESPCHK(0x118eba93u, _esp0);
  ESP += 4; return;
}

/* FUN_1000babb @ 0x118ebabb (3 bytes, 2 insns) */
void f_118ebabb(void) {
  FTRACE(0x118ebabbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebabb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ebabd ret  */
  ESPCHK(0x118ebabbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000babe @ 0x118ebabe (14 bytes, 8 insns) */
void f_118ebabe(void) {
  FTRACE(0x118ebabeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebabe push ebp */
  push32((uint32_t)(EBP));
  /* 118ebabf mov ebp, esp */
  EBP = (ESP);
  /* 118ebac1 push ecx */
  push32((uint32_t)(ECX));
  /* 118ebac2 wait  */
  /* wait (no observable integer/reg state) */
  /* 118ebac3 fnstsw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), fpu_status());
  /* 118ebac6 movsx eax, word ptr [ebp - 2] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x2))));
  /* 118ebaca leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ebacb ret  */
  ESPCHK(0x118ebabeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bacc @ 0x118ebacc (15 bytes, 8 insns) */
void f_118ebacc(void) {
  FTRACE(0x118ebaccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebacc push ebp */
  push32((uint32_t)(EBP));
  /* 118ebacd mov ebp, esp */
  EBP = (ESP);
  /* 118ebacf push ecx */
  push32((uint32_t)(ECX));
  /* 118ebad0 fnstsw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), fpu_status());
  /* 118ebad3 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 118ebad5 movsx eax, word ptr [ebp - 2] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x2))));
  /* 118ebad9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ebada ret  */
  ESPCHK(0x118ebaccu, _esp0);
  ESP += 4; return;
}

/* FUN_1000badb @ 0x118ebadb (35 bytes, 16 insns) */
void f_118ebadb(void) {
  FTRACE(0x118ebadbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebadb push ebp */
  push32((uint32_t)(EBP));
  /* 118ebadc mov ebp, esp */
  EBP = (ESP);
  /* 118ebade push ecx */
  push32((uint32_t)(ECX));
  /* 118ebadf wait  */
  /* wait (no observable integer/reg state) */
  /* 118ebae0 fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 118ebae3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ebae6 mov ecx, eax */
  ECX = (EAX);
  /* 118ebae8 and eax, dword ptr [ebp + 8] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0x8))); EAX = (_r); fl_logic(_r,32); }
  /* 118ebaeb not ecx */
  ECX = (~(ECX));
  /* 118ebaed and ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 118ebaf0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118ebaf2 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 118ebaf5 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 118ebaf8 movsx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x4))));
  /* 118ebafc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ebafd ret  */
  ESPCHK(0x118ebadbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bafe @ 0x118ebafe (86 bytes, 38 insns) */
void f_118ebafe(void) {
  FTRACE(0x118ebafeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebafe push ebp */
  push32((uint32_t)(EBP));
  /* 118ebaff mov ebp, esp */
  EBP = (ESP);
  /* 118ebb01 push ecx */
  push32((uint32_t)(ECX));
  /* 118ebb02 push ecx */
  push32((uint32_t)(ECX));
  /* 118ebb03 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 118ebb06 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 118ebb09 je 0x118ebb15 */
  if (C.zf) goto L_118ebb15;
  /* 118ebb0b fld xword ptr [0x118f4414] */
  fpu_push(rf80((uint32_t)(0x118f4414)));
  /* 118ebb11 fistp dword ptr [ebp + 8] */
  w32((uint32_t)(EBP + 0x8), (uint32_t)fpu_to_i32(FPU_ST(0)));
  (void)fpu_pop();
  /* 118ebb14 wait  */
  /* wait (no observable integer/reg state) */
L_118ebb15:;
  /* 118ebb15 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 118ebb18 je 0x118ebb2a */
  if (C.zf) goto L_118ebb2a;
  /* 118ebb1a wait  */
  /* wait (no observable integer/reg state) */
  /* 118ebb1b fnstsw ax */
  AX = fpu_status();
  /* 118ebb1d fld xword ptr [0x118f4414] */
  fpu_push(rf80((uint32_t)(0x118f4414)));
  /* 118ebb23 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 118ebb26 wait  */
  /* wait (no observable integer/reg state) */
  /* 118ebb27 wait  */
  /* wait (no observable integer/reg state) */
  /* 118ebb28 fnstsw ax */
  AX = fpu_status();
L_118ebb2a:;
  /* 118ebb2a test cl, 0x10 */
  { uint32_t _r=(CL)&(0x10u); fl_logic(_r,8); }
  /* 118ebb2d je 0x118ebb39 */
  if (C.zf) goto L_118ebb39;
  /* 118ebb2f fld xword ptr [0x118f4420] */
  fpu_push(rf80((uint32_t)(0x118f4420)));
  /* 118ebb35 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 118ebb38 wait  */
  /* wait (no observable integer/reg state) */
L_118ebb39:;
  /* 118ebb39 test cl, 4 */
  { uint32_t _r=(CL)&(0x4u); fl_logic(_r,8); }
  /* 118ebb3c je 0x118ebb47 */
  if (C.zf) goto L_118ebb47;
  /* 118ebb3e fldz  */
  fpu_push(0.0);
  /* 118ebb40 fld1  */
  fpu_push(1.0);
  /* 118ebb42 fdivrp st(1) */
  FPU_ST(1) = FPU_ST(0) / FPU_ST(1);
  (void)fpu_pop();
  /* 118ebb44 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 118ebb46 wait  */
  /* wait (no observable integer/reg state) */
L_118ebb47:;
  /* 118ebb47 test cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); fl_logic(_r,8); }
  /* 118ebb4a je 0x118ebb52 */
  if (C.zf) goto L_118ebb52;
  /* 118ebb4c fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 118ebb4e fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 118ebb51 wait  */
  /* wait (no observable integer/reg state) */
L_118ebb52:;
  /* 118ebb52 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ebb53 ret  */
  ESPCHK(0x118ebafeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb54 @ 0x118ebb54 (139 bytes, 59 insns) */
void f_118ebb54(void) {
  FTRACE(0x118ebb54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebb54 push ebx */
  push32((uint32_t)(EBX));
  /* 118ebb55 push ebp */
  push32((uint32_t)(EBP));
  /* 118ebb56 push esi */
  push32((uint32_t)(ESI));
  /* 118ebb57 push edi */
  push32((uint32_t)(EDI));
  /* 118ebb58 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_118ebb5c:;
  /* 118ebb5c cmp dword ptr [0x118f1858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebb63 jle 0x118ebb74 */
  if ((C.zf||C.sf!=C.of)) goto L_118ebb74;
  /* 118ebb65 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 118ebb68 push 8 */
  push32((uint32_t)(0x8u));
  /* 118ebb6a push eax */
  push32((uint32_t)(EAX));
  /* 118ebb6b call 0x118e6832 */
  push32(0x118ebb70u); f_118e6832();
  /* 118ebb70 pop ecx */
  ECX = (pop32());
  /* 118ebb71 pop ecx */
  ECX = (pop32());
  /* 118ebb72 jmp 0x118ebb83 */
  goto L_118ebb83;
L_118ebb74:;
  /* 118ebb74 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 118ebb77 mov ecx, dword ptr [0x118f1864] */
  ECX = (r32((uint32_t)(0x118f1864)));
  /* 118ebb7d mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118ebb80 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_118ebb83:;
  /* 118ebb83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ebb85 je 0x118ebb8a */
  if (C.zf) goto L_118ebb8a;
  /* 118ebb87 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ebb88 jmp 0x118ebb5c */
  goto L_118ebb5c;
L_118ebb8a:;
  /* 118ebb8a movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 118ebb8d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ebb8e cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebb91 mov ebp, esi */
  EBP = (ESI);
  /* 118ebb93 je 0x118ebb9a */
  if (C.zf) goto L_118ebb9a;
  /* 118ebb95 cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebb98 jne 0x118ebb9e */
  if (!C.zf) goto L_118ebb9e;
L_118ebb9a:;
  /* 118ebb9a movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 118ebb9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_118ebb9e:;
  /* 118ebb9e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118ebba0:;
  /* 118ebba0 cmp dword ptr [0x118f1858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebba7 jle 0x118ebbb5 */
  if ((C.zf||C.sf!=C.of)) goto L_118ebbb5;
  /* 118ebba9 push 4 */
  push32((uint32_t)(0x4u));
  /* 118ebbab push esi */
  push32((uint32_t)(ESI));
  /* 118ebbac call 0x118e6832 */
  push32(0x118ebbb1u); f_118e6832();
  /* 118ebbb1 pop ecx */
  ECX = (pop32());
  /* 118ebbb2 pop ecx */
  ECX = (pop32());
  /* 118ebbb3 jmp 0x118ebbc0 */
  goto L_118ebbc0;
L_118ebbb5:;
  /* 118ebbb5 mov eax, dword ptr [0x118f1864] */
  EAX = (r32((uint32_t)(0x118f1864)));
  /* 118ebbba mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 118ebbbd and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_118ebbc0:;
  /* 118ebbc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ebbc2 je 0x118ebbd1 */
  if (C.zf) goto L_118ebbd1;
  /* 118ebbc4 lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 118ebbc7 lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 118ebbcb movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 118ebbce inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ebbcf jmp 0x118ebba0 */
  goto L_118ebba0;
L_118ebbd1:;
  /* 118ebbd1 cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebbd4 mov eax, ebx */
  EAX = (EBX);
  /* 118ebbd6 jne 0x118ebbda */
  if (!C.zf) goto L_118ebbda;
  /* 118ebbd8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_118ebbda:;
  /* 118ebbda pop edi */
  EDI = (pop32());
  /* 118ebbdb pop esi */
  ESI = (pop32());
  /* 118ebbdc pop ebp */
  EBP = (pop32());
  /* 118ebbdd pop ebx */
  EBX = (pop32());
  /* 118ebbde ret  */
  ESPCHK(0x118ebb54u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x118ebbe0 (129 bytes, 56 insns) */
void f_118ebbe0(void) {
  FTRACE(0x118ebbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebbe0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 118ebbe4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ebbe8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 118ebbee jne 0x118ebc2c */
  if (!C.zf) goto L_118ebc2c;
L_118ebbf0:;
  /* 118ebbf0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118ebbf2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ebbf4 jne 0x118ebc24 */
  if (!C.zf) goto L_118ebc24;
  /* 118ebbf6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ebbf8 je 0x118ebc20 */
  if (C.zf) goto L_118ebc20;
  /* 118ebbfa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ebbfd jne 0x118ebc24 */
  if (!C.zf) goto L_118ebc24;
  /* 118ebbff or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118ebc01 je 0x118ebc20 */
  if (C.zf) goto L_118ebc20;
  /* 118ebc03 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118ebc06 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ebc09 jne 0x118ebc24 */
  if (!C.zf) goto L_118ebc24;
  /* 118ebc0b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ebc0d je 0x118ebc20 */
  if (C.zf) goto L_118ebc20;
  /* 118ebc0f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ebc12 jne 0x118ebc24 */
  if (!C.zf) goto L_118ebc24;
  /* 118ebc14 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebc17 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebc1a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118ebc1c jne 0x118ebbf0 */
  if (!C.zf) goto L_118ebbf0;
  /* 118ebc1e mov edi, edi */
  EDI = (EDI);
L_118ebc20:;
  /* 118ebc20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ebc22 ret  */
  ESPCHK(0x118ebbe0u, _esp0);
  ESP += 4; return;
  /* 118ebc23 nop  */
  /* nop */
L_118ebc24:;
  /* 118ebc24 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ebc26 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118ebc28 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ebc29 ret  */
  ESPCHK(0x118ebbe0u, _esp0);
  ESP += 4; return;
  /* 118ebc2a mov edi, edi */
  EDI = (EDI);
L_118ebc2c:;
  /* 118ebc2c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 118ebc32 je 0x118ebc48 */
  if (C.zf) goto L_118ebc48;
  /* 118ebc34 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118ebc36 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118ebc37 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ebc39 jne 0x118ebc24 */
  if (!C.zf) goto L_118ebc24;
  /* 118ebc3b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118ebc3c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ebc3e je 0x118ebc20 */
  if (C.zf) goto L_118ebc20;
  /* 118ebc40 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 118ebc46 je 0x118ebbf0 */
  if (C.zf) goto L_118ebbf0;
L_118ebc48:;
  /* 118ebc48 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 118ebc4b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebc4e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ebc50 jne 0x118ebc24 */
  if (!C.zf) goto L_118ebc24;
  /* 118ebc52 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ebc54 je 0x118ebc20 */
  if (C.zf) goto L_118ebc20;
  /* 118ebc56 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ebc59 jne 0x118ebc24 */
  if (!C.zf) goto L_118ebc24;
  /* 118ebc5b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118ebc5d je 0x118ebc20 */
  if (C.zf) goto L_118ebc20;
  /* 118ebc5f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebc62 jmp 0x118ebbf0 */
  goto L_118ebbf0;
}

/* FUN_1000bc64 @ 0x118ebc64 (125 bytes, 51 insns) */
void f_118ebc64(void) {
  FTRACE(0x118ebc64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebc64 cmp dword ptr [0x1190ab44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1190ab44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebc6b push ebx */
  push32((uint32_t)(EBX));
  /* 118ebc6c push esi */
  push32((uint32_t)(ESI));
  /* 118ebc6d mov esi, dword ptr [0x11909444] */
  ESI = (r32((uint32_t)(0x11909444)));
  /* 118ebc73 push edi */
  push32((uint32_t)(EDI));
  /* 118ebc74 je 0x118ebcdb */
  if (C.zf) goto L_118ebcdb;
  /* 118ebc76 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118ebc78 jne 0x118ebc95 */
  if (!C.zf) goto L_118ebc95;
  /* 118ebc7a cmp dword ptr [0x1190944c], esi */
  { uint32_t _a=(r32((uint32_t)(0x1190944c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebc80 je 0x118ebcdb */
  if (C.zf) goto L_118ebcdb;
  /* 118ebc82 call 0x118ec3a3 */
  push32(0x118ebc87u); f_118ec3a3();
  /* 118ebc87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ebc89 jne 0x118ebcdb */
  if (!C.zf) goto L_118ebcdb;
  /* 118ebc8b mov esi, dword ptr [0x11909444] */
  ESI = (r32((uint32_t)(0x11909444)));
  /* 118ebc91 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118ebc93 je 0x118ebcdb */
  if (C.zf) goto L_118ebcdb;
L_118ebc95:;
  /* 118ebc95 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 118ebc99 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118ebc9b je 0x118ebcdb */
  if (C.zf) goto L_118ebcdb;
  /* 118ebc9d push ebx */
  push32((uint32_t)(EBX));
  /* 118ebc9e call 0x118e73f0 */
  push32(0x118ebca3u); f_118e73f0();
  /* 118ebca3 pop ecx */
  ECX = (pop32());
  /* 118ebca4 mov edi, eax */
  EDI = (EAX);
L_118ebca6:;
  /* 118ebca6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ebca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ebcaa je 0x118ebcdb */
  if (C.zf) goto L_118ebcdb;
  /* 118ebcac push eax */
  push32((uint32_t)(EAX));
  /* 118ebcad call 0x118e73f0 */
  push32(0x118ebcb2u); f_118e73f0();
  /* 118ebcb2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebcb4 pop ecx */
  ECX = (pop32());
  /* 118ebcb5 jbe 0x118ebcce */
  if ((C.cf||C.zf)) goto L_118ebcce;
  /* 118ebcb7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ebcb9 cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ebcbd jne 0x118ebcce */
  if (!C.zf) goto L_118ebcce;
  /* 118ebcbf push edi */
  push32((uint32_t)(EDI));
  /* 118ebcc0 push ebx */
  push32((uint32_t)(EBX));
  /* 118ebcc1 push eax */
  push32((uint32_t)(EAX));
  /* 118ebcc2 call 0x118ec364 */
  push32(0x118ebcc7u); f_118ec364();
  /* 118ebcc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebcca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ebccc je 0x118ebcd3 */
  if (C.zf) goto L_118ebcd3;
L_118ebcce:;
  /* 118ebcce add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebcd1 jmp 0x118ebca6 */
  goto L_118ebca6;
L_118ebcd3:;
  /* 118ebcd3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ebcd5 lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 118ebcd9 jmp 0x118ebcdd */
  goto L_118ebcdd;
L_118ebcdb:;
  /* 118ebcdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ebcdd:;
  /* 118ebcdd pop edi */
  EDI = (pop32());
  /* 118ebcde pop esi */
  ESI = (pop32());
  /* 118ebcdf pop ebx */
  EBX = (pop32());
  /* 118ebce0 ret  */
  ESPCHK(0x118ebc64u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce1 @ 0x118ebce1 (111 bytes, 44 insns) */
void f_118ebce1(void) {
  FTRACE(0x118ebce1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebce1 push ebx */
  push32((uint32_t)(EBX));
  /* 118ebce2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ebce4 cmp dword ptr [0x119096e0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119096e0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebcea jne 0x118ebcff */
  if (!C.zf) goto L_118ebcff;
  /* 118ebcec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ebcf0 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebcf3 jl 0x118ebd4e */
  if ((C.sf!=C.of)) goto L_118ebd4e;
  /* 118ebcf5 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebcf8 jg 0x118ebd4e */
  if ((!C.zf&&C.sf==C.of)) goto L_118ebd4e;
  /* 118ebcfa sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ebcfd pop ebx */
  EBX = (pop32());
  /* 118ebcfe ret  */
  ESPCHK(0x118ebce1u, _esp0);
  ESP += 4; return;
L_118ebcff:;
  /* 118ebcff push esi */
  push32((uint32_t)(ESI));
  /* 118ebd00 mov esi, 0x119097c8 */
  ESI = (0x119097c8u);
  /* 118ebd05 push edi */
  push32((uint32_t)(EDI));
  /* 118ebd06 push esi */
  push32((uint32_t)(ESI));
  /* 118ebd07 call dword ptr [0x118ef074] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef074))), 0x118ebd0du);
  /* 118ebd0d cmp dword ptr [0x119097c4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x119097c4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebd13 mov edi, dword ptr [0x118ef078] */
  EDI = (r32((uint32_t)(0x118ef078)));
  /* 118ebd19 je 0x118ebd29 */
  if (C.zf) goto L_118ebd29;
  /* 118ebd1b push esi */
  push32((uint32_t)(ESI));
  /* 118ebd1c call edi */
  call_ind((uint32_t)(EDI), 0x118ebd1eu);
  /* 118ebd1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118ebd20 call 0x118e7509 */
  push32(0x118ebd25u); f_118e7509();
  /* 118ebd25 pop ecx */
  ECX = (pop32());
  /* 118ebd26 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ebd28 pop ebx */
  EBX = (pop32());
L_118ebd29:;
  /* 118ebd29 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 118ebd2d call 0x118ebd50 */
  push32(0x118ebd32u); f_118ebd50();
  /* 118ebd32 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118ebd34 pop ecx */
  ECX = (pop32());
  /* 118ebd35 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 118ebd39 je 0x118ebd45 */
  if (C.zf) goto L_118ebd45;
  /* 118ebd3b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118ebd3d call 0x118e756a */
  push32(0x118ebd42u); f_118e756a();
  /* 118ebd42 pop ecx */
  ECX = (pop32());
  /* 118ebd43 jmp 0x118ebd48 */
  goto L_118ebd48;
L_118ebd45:;
  /* 118ebd45 push esi */
  push32((uint32_t)(ESI));
  /* 118ebd46 call edi */
  call_ind((uint32_t)(EDI), 0x118ebd48u);
L_118ebd48:;
  /* 118ebd48 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118ebd4c pop edi */
  EDI = (pop32());
  /* 118ebd4d pop esi */
  ESI = (pop32());
L_118ebd4e:;
  /* 118ebd4e pop ebx */
  EBX = (pop32());
  /* 118ebd4f ret  */
  ESPCHK(0x118ebce1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd50 @ 0x118ebd50 (204 bytes, 71 insns) */
void f_118ebd50(void) {
  FTRACE(0x118ebd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebd50 push ebp */
  push32((uint32_t)(EBP));
  /* 118ebd51 mov ebp, esp */
  EBP = (ESP);
  /* 118ebd53 push ecx */
  push32((uint32_t)(ECX));
  /* 118ebd54 cmp dword ptr [0x119096e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119096e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebd5b push ebx */
  push32((uint32_t)(EBX));
  /* 118ebd5c jne 0x118ebd7b */
  if (!C.zf) goto L_118ebd7b;
  /* 118ebd5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ebd61 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebd64 jl 0x118ebe19 */
  if ((C.sf!=C.of)) goto L_118ebe19;
  /* 118ebd6a cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebd6d jg 0x118ebe19 */
  if ((!C.zf&&C.sf==C.of)) goto L_118ebe19;
  /* 118ebd73 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ebd76 jmp 0x118ebe19 */
  goto L_118ebe19;
L_118ebd7b:;
  /* 118ebd7b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ebd7e cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebd84 jge 0x118ebdae */
  if ((C.sf==C.of)) goto L_118ebdae;
  /* 118ebd86 cmp dword ptr [0x118f1858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebd8d jle 0x118ebd9b */
  if ((C.zf||C.sf!=C.of)) goto L_118ebd9b;
  /* 118ebd8f push 2 */
  push32((uint32_t)(0x2u));
  /* 118ebd91 push ebx */
  push32((uint32_t)(EBX));
  /* 118ebd92 call 0x118e6832 */
  push32(0x118ebd97u); f_118e6832();
  /* 118ebd97 pop ecx */
  ECX = (pop32());
  /* 118ebd98 pop ecx */
  ECX = (pop32());
  /* 118ebd99 jmp 0x118ebda6 */
  goto L_118ebda6;
L_118ebd9b:;
  /* 118ebd9b mov eax, dword ptr [0x118f1864] */
  EAX = (r32((uint32_t)(0x118f1864)));
  /* 118ebda0 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 118ebda3 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_118ebda6:;
  /* 118ebda6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ebda8 jne 0x118ebdae */
  if (!C.zf) goto L_118ebdae;
L_118ebdaa:;
  /* 118ebdaa mov eax, ebx */
  EAX = (EBX);
  /* 118ebdac jmp 0x118ebe19 */
  goto L_118ebe19;
L_118ebdae:;
  /* 118ebdae mov edx, dword ptr [0x118f1864] */
  EDX = (r32((uint32_t)(0x118f1864)));
  /* 118ebdb4 mov eax, ebx */
  EAX = (EBX);
  /* 118ebdb6 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118ebdb9 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 118ebdbc test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 118ebdc1 je 0x118ebdd1 */
  if (C.zf) goto L_118ebdd1;
  /* 118ebdc3 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 118ebdc7 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 118ebdca mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 118ebdcd push 2 */
  push32((uint32_t)(0x2u));
  /* 118ebdcf jmp 0x118ebdda */
  goto L_118ebdda;
L_118ebdd1:;
  /* 118ebdd1 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 118ebdd5 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 118ebdd8 push 1 */
  push32((uint32_t)(0x1u));
L_118ebdda:;
  /* 118ebdda pop eax */
  EAX = (pop32());
  /* 118ebddb lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 118ebdde push 1 */
  push32((uint32_t)(0x1u));
  /* 118ebde0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118ebde2 push 3 */
  push32((uint32_t)(0x3u));
  /* 118ebde4 push ecx */
  push32((uint32_t)(ECX));
  /* 118ebde5 push eax */
  push32((uint32_t)(EAX));
  /* 118ebde6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 118ebde9 push eax */
  push32((uint32_t)(EAX));
  /* 118ebdea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 118ebdef push dword ptr [0x119096e0] */
  push32((uint32_t)(r32((uint32_t)(0x119096e0))));
  /* 118ebdf5 call 0x118ea6f6 */
  push32(0x118ebdfau); f_118ea6f6();
  /* 118ebdfa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebdfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ebdff je 0x118ebdaa */
  if (C.zf) goto L_118ebdaa;
  /* 118ebe01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebe04 jne 0x118ebe0c */
  if (!C.zf) goto L_118ebe0c;
  /* 118ebe06 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118ebe0a jmp 0x118ebe19 */
  goto L_118ebe19;
L_118ebe0c:;
  /* 118ebe0c movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 118ebe10 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118ebe14 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118ebe17 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_118ebe19:;
  /* 118ebe19 pop ebx */
  EBX = (pop32());
  /* 118ebe1a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ebe1b ret  */
  ESPCHK(0x118ebd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be20 @ 0x118ebe20 (62 bytes, 35 insns) */
void f_118ebe20(void) {
  FTRACE(0x118ebe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebe20 push ebp */
  push32((uint32_t)(EBP));
  /* 118ebe21 mov ebp, esp */
  EBP = (ESP);
  /* 118ebe23 push esi */
  push32((uint32_t)(ESI));
  /* 118ebe24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ebe26 push eax */
  push32((uint32_t)(EAX));
  /* 118ebe27 push eax */
  push32((uint32_t)(EAX));
  /* 118ebe28 push eax */
  push32((uint32_t)(EAX));
  /* 118ebe29 push eax */
  push32((uint32_t)(EAX));
  /* 118ebe2a push eax */
  push32((uint32_t)(EAX));
  /* 118ebe2b push eax */
  push32((uint32_t)(EAX));
  /* 118ebe2c push eax */
  push32((uint32_t)(EAX));
  /* 118ebe2d push eax */
  push32((uint32_t)(EAX));
  /* 118ebe2e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ebe31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118ebe34:;
  /* 118ebe34 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118ebe36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ebe38 je 0x118ebe41 */
  if (C.zf) goto L_118ebe41;
  /* 118ebe3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118ebe3b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x118ebe3b");
  /* 118ebe3f jmp 0x118ebe34 */
  goto L_118ebe34;
L_118ebe41:;
  /* 118ebe41 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118ebe44 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 118ebe47 nop  */
  /* nop */
L_118ebe48:;
  /* 118ebe48 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118ebe49 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ebe4b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ebe4d je 0x118ebe56 */
  if (C.zf) goto L_118ebe56;
  /* 118ebe4f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ebe50 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x118ebe50");
  /* 118ebe54 jae 0x118ebe48 */
  if (!C.cf) goto L_118ebe48;
L_118ebe56:;
  /* 118ebe56 mov eax, ecx */
  EAX = (ECX);
  /* 118ebe58 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebe5b pop esi */
  ESI = (pop32());
  /* 118ebe5c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ebe5d ret  */
  ESPCHK(0x118ebe20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be60 @ 0x118ebe60 (58 bytes, 32 insns) */
void f_118ebe60(void) {
  FTRACE(0x118ebe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebe60 push ebp */
  push32((uint32_t)(EBP));
  /* 118ebe61 mov ebp, esp */
  EBP = (ESP);
  /* 118ebe63 push esi */
  push32((uint32_t)(ESI));
  /* 118ebe64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ebe66 push eax */
  push32((uint32_t)(EAX));
  /* 118ebe67 push eax */
  push32((uint32_t)(EAX));
  /* 118ebe68 push eax */
  push32((uint32_t)(EAX));
  /* 118ebe69 push eax */
  push32((uint32_t)(EAX));
  /* 118ebe6a push eax */
  push32((uint32_t)(EAX));
  /* 118ebe6b push eax */
  push32((uint32_t)(EAX));
  /* 118ebe6c push eax */
  push32((uint32_t)(EAX));
  /* 118ebe6d push eax */
  push32((uint32_t)(EAX));
  /* 118ebe6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ebe71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118ebe74:;
  /* 118ebe74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118ebe76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ebe78 je 0x118ebe81 */
  if (C.zf) goto L_118ebe81;
  /* 118ebe7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118ebe7b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x118ebe7b");
  /* 118ebe7f jmp 0x118ebe74 */
  goto L_118ebe74;
L_118ebe81:;
  /* 118ebe81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_118ebe84:;
  /* 118ebe84 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ebe86 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ebe88 je 0x118ebe94 */
  if (C.zf) goto L_118ebe94;
  /* 118ebe8a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ebe8b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x118ebe8b");
  /* 118ebe8f jae 0x118ebe84 */
  if (!C.cf) goto L_118ebe84;
  /* 118ebe91 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_118ebe94:;
  /* 118ebe94 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebe97 pop esi */
  ESI = (pop32());
  /* 118ebe98 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ebe99 ret  */
  ESPCHK(0x118ebe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be9a @ 0x118ebe9a (544 bytes, 177 insns) */
void f_118ebe9a(void) {
  FTRACE(0x118ebe9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ebe9a push ebp */
  push32((uint32_t)(EBP));
  /* 118ebe9b mov ebp, esp */
  EBP = (ESP);
  /* 118ebe9d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ebea0 push ebx */
  push32((uint32_t)(EBX));
  /* 118ebea1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ebea4 push esi */
  push32((uint32_t)(ESI));
  /* 118ebea5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118ebea8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 118ebeac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ebeae push edi */
  push32((uint32_t)(EDI));
  /* 118ebeaf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118ebeb2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118ebeb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118ebeb8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118ebebb mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 118ebebf mov edi, ecx */
  EDI = (ECX);
  /* 118ebec1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 118ebec6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 118ebec8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118ebeca and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118ebecc and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 118ebed2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ebed6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 118ebed9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 118ebedc jae 0x118ec09a */
  if (!C.cf) goto L_118ec09a;
  /* 118ebee2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ebee7 jae 0x118ec09a */
  if (!C.cf) goto L_118ec09a;
  /* 118ebeed cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ebef2 ja 0x118ec09a */
  if ((!C.cf&&!C.zf)) goto L_118ec09a;
  /* 118ebef8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ebefd ja 0x118ebf03 */
  if ((!C.cf&&!C.zf)) goto L_118ebf03;
  /* 118ebeff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ebf01 jmp 0x118ebf3d */
  goto L_118ebf3d;
L_118ebf03:;
  /* 118ebf03 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 118ebf06 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 118ebf0b jne 0x118ebf25 */
  if (!C.zf) goto L_118ebf25;
  /* 118ebf0d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 118ebf10 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 118ebf13 jne 0x118ebf25 */
  if (!C.zf) goto L_118ebf25;
  /* 118ebf15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ebf17 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebf1a jne 0x118ebf27 */
  if (!C.zf) goto L_118ebf27;
  /* 118ebf1c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebf1e jne 0x118ebf27 */
  if (!C.zf) goto L_118ebf27;
  /* 118ebf20 jmp 0x118ec094 */
  goto L_118ec094;
L_118ebf25:;
  /* 118ebf25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ebf27:;
  /* 118ebf27 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ebf2a jne 0x118ebf4a */
  if (!C.zf) goto L_118ebf4a;
  /* 118ebf2c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 118ebf2f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 118ebf32 jne 0x118ebf4a */
  if (!C.zf) goto L_118ebf4a;
  /* 118ebf34 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebf37 jne 0x118ebf4a */
  if (!C.zf) goto L_118ebf4a;
  /* 118ebf39 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebf3b jne 0x118ebf4a */
  if (!C.zf) goto L_118ebf4a;
L_118ebf3d:;
  /* 118ebf3d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 118ebf40 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 118ebf43 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118ebf45 jmp 0x118ec0b5 */
  goto L_118ec0b5;
L_118ebf4a:;
  /* 118ebf4a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 118ebf4d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 118ebf50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118ebf53 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_118ebf5a:;
  /* 118ebf5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ebf5d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebf5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebf63 jle 0x118ebfae */
  if ((C.zf||C.sf!=C.of)) goto L_118ebfae;
  /* 118ebf65 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebf67 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 118ebf6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118ebf6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ebf70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118ebf73 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_118ebf76:;
  /* 118ebf76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118ebf79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118ebf7c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 118ebf7f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 118ebf82 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118ebf85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118ebf88 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebf8b push ecx */
  push32((uint32_t)(ECX));
  /* 118ebf8c push eax */
  push32((uint32_t)(EAX));
  /* 118ebf8d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 118ebf8f call 0x118ea945 */
  push32(0x118ebf94u); f_118ea945();
  /* 118ebf94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ebf97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ebf99 je 0x118ebfa1 */
  if (C.zf) goto L_118ebfa1;
  /* 118ebf9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118ebf9e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_118ebfa1:;
  /* 118ebfa1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118ebfa5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 118ebfa9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 118ebfac jne 0x118ebf76 */
  if (!C.zf) goto L_118ebf76;
L_118ebfae:;
  /* 118ebfae add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118ebfb2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 118ebfb5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 118ebfb8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ebfbc jg 0x118ebf5a */
  if ((!C.zf&&C.sf==C.of)) goto L_118ebf5a;
  /* 118ebfbe add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118ebfc5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ebfca jle 0x118ebff1 */
  if ((C.zf||C.sf!=C.of)) goto L_118ebff1;
L_118ebfcc:;
  /* 118ebfcc test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 118ebfd0 jne 0x118ebfea */
  if (!C.zf) goto L_118ebfea;
  /* 118ebfd2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 118ebfd5 push eax */
  push32((uint32_t)(EAX));
  /* 118ebfd6 call 0x118ea9c4 */
  push32(0x118ebfdbu); f_118ea9c4();
  /* 118ebfdb add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118ebfe2 pop ecx */
  ECX = (pop32());
  /* 118ebfe3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ebfe8 jg 0x118ebfcc */
  if ((!C.zf&&C.sf==C.of)) goto L_118ebfcc;
L_118ebfea:;
  /* 118ebfea cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ebfef jg 0x118ec02a */
  if ((!C.zf&&C.sf==C.of)) goto L_118ec02a;
L_118ebff1:;
  /* 118ebff1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118ebff8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ebffd jge 0x118ec02a */
  if ((C.sf==C.of)) goto L_118ec02a;
  /* 118ebfff movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 118ec003 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ec005 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118ec008 mov ebx, eax */
  EBX = (EAX);
L_118ec00a:;
  /* 118ec00a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 118ec00e je 0x118ec013 */
  if (C.zf) goto L_118ec013;
  /* 118ec010 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_118ec013:;
  /* 118ec013 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 118ec016 push eax */
  push32((uint32_t)(EAX));
  /* 118ec017 call 0x118ea9f2 */
  push32(0x118ec01cu); f_118ea9f2();
  /* 118ec01c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118ec01d pop ecx */
  ECX = (pop32());
  /* 118ec01e jne 0x118ec00a */
  if (!C.zf) goto L_118ec00a;
  /* 118ec020 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec024 je 0x118ec02a */
  if (C.zf) goto L_118ec02a;
  /* 118ec026 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_118ec02a:;
  /* 118ec02a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ec030 ja 0x118ec041 */
  if ((!C.cf&&!C.zf)) goto L_118ec041;
  /* 118ec032 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 118ec035 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ec03a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec03f jne 0x118ec076 */
  if (!C.zf) goto L_118ec076;
L_118ec041:;
  /* 118ec041 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec045 jne 0x118ec073 */
  if (!C.zf) goto L_118ec073;
  /* 118ec047 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 118ec04b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec04f jne 0x118ec06e */
  if (!C.zf) goto L_118ec06e;
  /* 118ec051 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 118ec055 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ec05b jne 0x118ec068 */
  if (!C.zf) goto L_118ec068;
  /* 118ec05d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 118ec060 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 118ec066 jmp 0x118ec076 */
  goto L_118ec076;
L_118ec068:;
  /* 118ec068 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 118ec06c jmp 0x118ec076 */
  goto L_118ec076;
L_118ec06e:;
  /* 118ec06e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 118ec071 jmp 0x118ec076 */
  goto L_118ec076;
L_118ec073:;
  /* 118ec073 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_118ec076:;
  /* 118ec076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ec079 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ec07d jae 0x118ec09a */
  if (!C.cf) goto L_118ec09a;
  /* 118ec07f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 118ec083 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 118ec085 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 118ec088 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118ec08b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 118ec08e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118ec091 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_118ec094:;
  /* 118ec094 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 118ec098 jmp 0x118ec0b5 */
  goto L_118ec0b5;
L_118ec09a:;
  /* 118ec09a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 118ec09d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ec09f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118ec0a3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 118ec0a9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec0af and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 118ec0b2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_118ec0b5:;
  /* 118ec0b5 pop edi */
  EDI = (pop32());
  /* 118ec0b6 pop esi */
  ESI = (pop32());
  /* 118ec0b7 pop ebx */
  EBX = (pop32());
  /* 118ec0b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ec0b9 ret  */
  ESPCHK(0x118ebe9au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0ba @ 0x118ec0ba (124 bytes, 52 insns) */
void f_118ec0ba(void) {
  FTRACE(0x118ec0bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec0ba push ebp */
  push32((uint32_t)(EBP));
  /* 118ec0bb mov ebp, esp */
  EBP = (ESP);
  /* 118ec0bd sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ec0c0 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec0c1 mov ebx, 0x118f4560 */
  EBX = (0x118f4560u);
  /* 118ec0c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118ec0c8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ec0cb cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec0ce je 0x118ec133 */
  if (C.zf) goto L_118ec133;
  /* 118ec0d0 jge 0x118ec0e2 */
  if ((C.sf==C.of)) goto L_118ec0e2;
  /* 118ec0d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ec0d5 mov ebx, 0x118f46c0 */
  EBX = (0x118f46c0u);
  /* 118ec0da neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ec0dc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118ec0df sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_118ec0e2:;
  /* 118ec0e2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec0e5 jne 0x118ec0ed */
  if (!C.zf) goto L_118ec0ed;
  /* 118ec0e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ec0ea mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_118ec0ed:;
  /* 118ec0ed cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec0f0 je 0x118ec133 */
  if (C.zf) goto L_118ec133;
  /* 118ec0f2 push esi */
  push32((uint32_t)(ESI));
  /* 118ec0f3 push edi */
  push32((uint32_t)(EDI));
L_118ec0f4:;
  /* 118ec0f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ec0f7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec0fa sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 118ec0fe and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 118ec101 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec103 je 0x118ec12c */
  if (C.zf) goto L_118ec12c;
  /* 118ec105 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 118ec108 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118ec10e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 118ec111 jb 0x118ec11f */
  if (C.cf) goto L_118ec11f;
  /* 118ec113 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 118ec116 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118ec117 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118ec118 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118ec119 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 118ec11c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_118ec11f:;
  /* 118ec11f push esi */
  push32((uint32_t)(ESI));
  /* 118ec120 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ec123 call 0x118ebe9a */
  push32(0x118ec128u); f_118ebe9a();
  /* 118ec128 pop ecx */
  ECX = (pop32());
  /* 118ec129 pop ecx */
  ECX = (pop32());
  /* 118ec12a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_118ec12c:;
  /* 118ec12c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec12f jne 0x118ec0f4 */
  if (!C.zf) goto L_118ec0f4;
  /* 118ec131 pop edi */
  EDI = (pop32());
  /* 118ec132 pop esi */
  ESI = (pop32());
L_118ec133:;
  /* 118ec133 pop ebx */
  EBX = (pop32());
  /* 118ec134 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ec135 ret  */
  ESPCHK(0x118ec0bau, _esp0);
  ESP += 4; return;
}

/* FUN_1000c136 @ 0x118ec136 (49 bytes, 20 insns) */
void f_118ec136(void) {
  FTRACE(0x118ec136u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec136 push esi */
  push32((uint32_t)(ESI));
  /* 118ec137 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ec13b push edi */
  push32((uint32_t)(EDI));
  /* 118ec13c or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118ec13f test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 118ec143 je 0x118ec14b */
  if (C.zf) goto L_118ec14b;
  /* 118ec145 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118ec149 jmp 0x118ec162 */
  goto L_118ec162;
L_118ec14b:;
  /* 118ec14b push esi */
  push32((uint32_t)(ESI));
  /* 118ec14c call 0x118e9124 */
  push32(0x118ec151u); f_118e9124();
  /* 118ec151 push esi */
  push32((uint32_t)(ESI));
  /* 118ec152 call 0x118ec167 */
  push32(0x118ec157u); f_118ec167();
  /* 118ec157 push esi */
  push32((uint32_t)(ESI));
  /* 118ec158 mov edi, eax */
  EDI = (EAX);
  /* 118ec15a call 0x118e9176 */
  push32(0x118ec15fu); f_118e9176();
  /* 118ec15f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118ec162:;
  /* 118ec162 mov eax, edi */
  EAX = (EDI);
  /* 118ec164 pop edi */
  EDI = (pop32());
  /* 118ec165 pop esi */
  ESI = (pop32());
  /* 118ec166 ret  */
  ESPCHK(0x118ec136u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c167 @ 0x118ec167 (76 bytes, 30 insns) */
void f_118ec167(void) {
  FTRACE(0x118ec167u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec167 push esi */
  push32((uint32_t)(ESI));
  /* 118ec168 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ec16c push edi */
  push32((uint32_t)(EDI));
  /* 118ec16d or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118ec170 test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 118ec174 je 0x118ec1aa */
  if (C.zf) goto L_118ec1aa;
  /* 118ec176 push esi */
  push32((uint32_t)(ESI));
  /* 118ec177 call 0x118eb4c0 */
  push32(0x118ec17cu); f_118eb4c0();
  /* 118ec17c push esi */
  push32((uint32_t)(ESI));
  /* 118ec17d mov edi, eax */
  EDI = (EAX);
  /* 118ec17f call 0x118ec6d1 */
  push32(0x118ec184u); f_118ec6d1();
  /* 118ec184 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 118ec187 call 0x118ec5f1 */
  push32(0x118ec18cu); f_118ec5f1();
  /* 118ec18c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec18f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec191 jge 0x118ec198 */
  if ((C.sf==C.of)) goto L_118ec198;
  /* 118ec193 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118ec196 jmp 0x118ec1aa */
  goto L_118ec1aa;
L_118ec198:;
  /* 118ec198 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 118ec19b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec19d je 0x118ec1aa */
  if (C.zf) goto L_118ec1aa;
  /* 118ec19f push eax */
  push32((uint32_t)(EAX));
  /* 118ec1a0 call 0x118e8ae5 */
  push32(0x118ec1a5u); f_118e8ae5();
  /* 118ec1a5 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 118ec1a9 pop ecx */
  ECX = (pop32());
L_118ec1aa:;
  /* 118ec1aa and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118ec1ae mov eax, edi */
  EAX = (EDI);
  /* 118ec1b0 pop edi */
  EDI = (pop32());
  /* 118ec1b1 pop esi */
  ESI = (pop32());
  /* 118ec1b2 ret  */
  ESPCHK(0x118ec167u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b3 @ 0x118ec1b3 (147 bytes, 52 insns) */
void f_118ec1b3(void) {
  FTRACE(0x118ec1b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec1b3 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec1b4 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ec1b8 cmp ebx, dword ptr [0x1190ab40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1190ab40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec1be push esi */
  push32((uint32_t)(ESI));
  /* 118ec1bf push edi */
  push32((uint32_t)(EDI));
  /* 118ec1c0 jae 0x118ec234 */
  if (!C.cf) goto L_118ec234;
  /* 118ec1c2 mov eax, ebx */
  EAX = (EBX);
  /* 118ec1c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118ec1c7 lea edi, [eax*4 + 0x1190aa40] */
  EDI = ((uint32_t)(EAX*4 + 0x1190aa40));
  /* 118ec1ce mov eax, ebx */
  EAX = (EBX);
  /* 118ec1d0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118ec1d3 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 118ec1d6 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118ec1d8 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 118ec1db test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118ec1e0 je 0x118ec234 */
  if (C.zf) goto L_118ec234;
  /* 118ec1e2 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec1e3 call 0x118eb390 */
  push32(0x118ec1e8u); f_118eb390();
  /* 118ec1e8 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118ec1ea pop ecx */
  ECX = (pop32());
  /* 118ec1eb test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118ec1f0 je 0x118ec21b */
  if (C.zf) goto L_118ec21b;
  /* 118ec1f2 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec1f3 call 0x118eb34e */
  push32(0x118ec1f8u); f_118eb34e();
  /* 118ec1f8 pop ecx */
  ECX = (pop32());
  /* 118ec1f9 push eax */
  push32((uint32_t)(EAX));
  /* 118ec1fa call dword ptr [0x118ef028] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef028))), 0x118ec200u);
  /* 118ec200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec202 jne 0x118ec20e */
  if (!C.zf) goto L_118ec20e;
  /* 118ec204 call dword ptr [0x118ef0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c4))), 0x118ec20au);
  /* 118ec20a mov esi, eax */
  ESI = (EAX);
  /* 118ec20c jmp 0x118ec210 */
  goto L_118ec210;
L_118ec20e:;
  /* 118ec20e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118ec210:;
  /* 118ec210 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118ec212 je 0x118ec229 */
  if (C.zf) goto L_118ec229;
  /* 118ec214 call 0x118eb2c6 */
  push32(0x118ec219u); f_118eb2c6();
  /* 118ec219 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_118ec21b:;
  /* 118ec21b call 0x118eb2bd */
  push32(0x118ec220u); f_118eb2bd();
  /* 118ec220 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118ec226 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_118ec229:;
  /* 118ec229 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec22a call 0x118eb3ef */
  push32(0x118ec22fu); f_118eb3ef();
  /* 118ec22f pop ecx */
  ECX = (pop32());
  /* 118ec230 mov eax, esi */
  EAX = (ESI);
  /* 118ec232 jmp 0x118ec242 */
  goto L_118ec242;
L_118ec234:;
  /* 118ec234 call 0x118eb2bd */
  push32(0x118ec239u); f_118eb2bd();
  /* 118ec239 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118ec23f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118ec242:;
  /* 118ec242 pop edi */
  EDI = (pop32());
  /* 118ec243 pop esi */
  ESI = (pop32());
  /* 118ec244 pop ebx */
  EBX = (pop32());
  /* 118ec245 ret  */
  ESPCHK(0x118ec1b3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c246 @ 0x118ec246 (41 bytes, 16 insns) */
void f_118ec246(void) {
  FTRACE(0x118ec246u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec246 push ebp */
  push32((uint32_t)(EBP));
  /* 118ec247 mov ebp, esp */
  EBP = (ESP);
  /* 118ec249 push ecx */
  push32((uint32_t)(ECX));
  /* 118ec24a push ecx */
  push32((uint32_t)(ECX));
  /* 118ec24b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ec24e mov ecx, dword ptr [ebp + 0xe] */
  ECX = (r32((uint32_t)(EBP + 0xe)));
  /* 118ec251 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 118ec254 add eax, 0x3fe */
  { uint32_t _a=(EAX),_b=(0x3feu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec259 and cx, 0x800f */
  { uint32_t _r=(CX)&(0x800fu); CX = (_r); fl_logic(_r,16); }
  /* 118ec25e fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 118ec261 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118ec264 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 118ec266 mov word ptr [ebp - 2], ax */
  w16((uint32_t)(EBP + -0x2), (AX));
  /* 118ec26a fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 118ec26d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ec26e ret  */
  ESPCHK(0x118ec246u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c26f @ 0x118ec26f (193 bytes, 72 insns) */
void f_118ec26f(void) {
  FTRACE(0x118ec26fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec26f push ebp */
  push32((uint32_t)(EBP));
  /* 118ec270 mov ebp, esp */
  EBP = (ESP);
  /* 118ec272 push ecx */
  push32((uint32_t)(ECX));
  /* 118ec273 push ecx */
  push32((uint32_t)(ECX));
  /* 118ec274 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 118ec277 fcomp qword ptr [0x118ef210] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef210)));
  (void)fpu_pop();
  /* 118ec27d push esi */
  push32((uint32_t)(ESI));
  /* 118ec27e fnstsw ax */
  AX = fpu_status();
  /* 118ec280 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 118ec281 jne 0x118ec28f */
  if (!C.zf) goto L_118ec28f;
  /* 118ec283 fldz  */
  fpu_push(0.0);
  /* 118ec285 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118ec287 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 118ec28a jmp 0x118ec325 */
  goto L_118ec325;
L_118ec28f:;
  /* 118ec28f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118ec291 test word ptr [ebp + 0xe], 0x7ff0 */
  { uint32_t _r=(r16((uint32_t)(EBP + 0xe)))&(0x7ff0u); fl_logic(_r,16); }
  /* 118ec297 jne 0x118ec2fe */
  if (!C.zf) goto L_118ec2fe;
  /* 118ec299 test dword ptr [ebp + 0xc], 0xfffff */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0xfffffu); fl_logic(_r,32); }
  /* 118ec2a0 jne 0x118ec2a7 */
  if (!C.zf) goto L_118ec2a7;
  /* 118ec2a2 cmp dword ptr [ebp + 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec2a5 je 0x118ec2fe */
  if (C.zf) goto L_118ec2fe;
L_118ec2a7:;
  /* 118ec2a7 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 118ec2aa fcomp qword ptr [0x118ef210] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef210)));
  (void)fpu_pop();
  /* 118ec2b0 mov esi, 0xfffffc03 */
  ESI = (0xfffffc03u);
  /* 118ec2b5 fnstsw ax */
  AX = fpu_status();
  /* 118ec2b7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 118ec2b8 jae 0x118ec2bf */
  if (!C.cf) goto L_118ec2bf;
  /* 118ec2ba push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec2bc pop eax */
  EAX = (pop32());
  /* 118ec2bd jmp 0x118ec2c1 */
  goto L_118ec2c1;
L_118ec2bf:;
  /* 118ec2bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ec2c1:;
  /* 118ec2c1 test byte ptr [ebp + 0xe], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xe)))&(0x10u); fl_logic(_r,8); }
  /* 118ec2c5 jne 0x118ec2da */
  if (!C.zf) goto L_118ec2da;
  /* 118ec2c7 shl dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (sh_shl((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x1u)&0x1f, 32)));
  /* 118ec2ca test byte ptr [ebp + 0xb], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xb)))&(0x80u); fl_logic(_r,8); }
  /* 118ec2ce je 0x118ec2d4 */
  if (C.zf) goto L_118ec2d4;
  /* 118ec2d0 or dword ptr [ebp + 0xc], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))|(0x1u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_118ec2d4:;
  /* 118ec2d4 shl dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (sh_shl((uint32_t)(r32((uint32_t)(EBP + 0x8))), (0x1u)&0x1f, 32)));
  /* 118ec2d7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118ec2d8 jmp 0x118ec2c1 */
  goto L_118ec2c1;
L_118ec2da:;
  /* 118ec2da and word ptr [ebp + 0xe], 0xffef */
  { uint32_t _r=(r16((uint32_t)(EBP + 0xe)))&(0xffefu); w16((uint32_t)(EBP + 0xe), (_r)); fl_logic(_r,16); }
  /* 118ec2e0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec2e2 je 0x118ec2e8 */
  if (C.zf) goto L_118ec2e8;
  /* 118ec2e4 or byte ptr [ebp + 0xf], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xf)))|(0x80u); w8((uint32_t)(EBP + 0xf), (_r)); fl_logic(_r,8); }
L_118ec2e8:;
  /* 118ec2e8 fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 118ec2eb push ecx */
  push32((uint32_t)(ECX));
  /* 118ec2ec push ecx */
  push32((uint32_t)(ECX));
  /* 118ec2ed push ecx */
  push32((uint32_t)(ECX));
  /* 118ec2ee fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 118ec2f1 call 0x118ec246 */
  push32(0x118ec2f6u); f_118ec246();
  /* 118ec2f6 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 118ec2f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec2fc jmp 0x118ec325 */
  goto L_118ec325;
L_118ec2fe:;
  /* 118ec2fe fld qword ptr [ebp + 8] */
  fpu_push(rf64((uint32_t)(EBP + 0x8)));
  /* 118ec301 push ecx */
  push32((uint32_t)(ECX));
  /* 118ec302 push ecx */
  push32((uint32_t)(ECX));
  /* 118ec303 push ecx */
  push32((uint32_t)(ECX));
  /* 118ec304 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 118ec307 call 0x118ec246 */
  push32(0x118ec30cu); f_118ec246();
  /* 118ec30c mov eax, dword ptr [ebp + 0xe] */
  EAX = (r32((uint32_t)(EBP + 0xe)));
  /* 118ec30f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec312 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 118ec315 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 118ec318 and ax, 0x7ff */
  { uint32_t _r=(AX)&(0x7ffu); AX = (_r); fl_logic(_r,16); }
  /* 118ec31c movsx esi, ax */
  ESI = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 118ec31f sub esi, 0x3fe */
  { uint32_t _a=(ESI),_b=(0x3feu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_118ec325:;
  /* 118ec325 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ec328 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 118ec32b mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 118ec32d pop esi */
  ESI = (pop32());
  /* 118ec32e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ec32f ret  */
  ESPCHK(0x118ec26fu, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x118ec364 (63 bytes, 24 insns) */
void f_118ec364(void) {
  FTRACE(0x118ec364u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec364 push ebp */
  push32((uint32_t)(EBP));
  /* 118ec365 mov ebp, esp */
  EBP = (ESP);
  /* 118ec367 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec36b jne 0x118ec371 */
  if (!C.zf) goto L_118ec371;
  /* 118ec36d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ec36f pop ebp */
  EBP = (pop32());
  /* 118ec370 ret  */
  ESPCHK(0x118ec364u, _esp0);
  ESP += 4; return;
L_118ec371:;
  /* 118ec371 push dword ptr [0x119097cc] */
  push32((uint32_t)(r32((uint32_t)(0x119097cc))));
  /* 118ec377 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ec37a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ec37d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ec380 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ec383 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec385 push dword ptr [0x119099e4] */
  push32((uint32_t)(r32((uint32_t)(0x119099e4))));
  /* 118ec38b call 0x118ec6fc */
  push32(0x118ec390u); f_118ec6fc();
  /* 118ec390 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec393 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec395 jne 0x118ec39e */
  if (!C.zf) goto L_118ec39e;
  /* 118ec397 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 118ec39c pop ebp */
  EBP = (pop32());
  /* 118ec39d ret  */
  ESPCHK(0x118ec364u, _esp0);
  ESP += 4; return;
L_118ec39e:;
  /* 118ec39e add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec3a1 pop ebp */
  EBP = (pop32());
  /* 118ec3a2 ret  */
  ESPCHK(0x118ec364u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3a3 @ 0x118ec3a3 (110 bytes, 58 insns) */
void f_118ec3a3(void) {
  FTRACE(0x118ec3a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118ec3a4 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec3a5 push ebp */
  push32((uint32_t)(EBP));
  /* 118ec3a6 push esi */
  push32((uint32_t)(ESI));
  /* 118ec3a7 mov esi, dword ptr [0x1190944c] */
  ESI = (r32((uint32_t)(0x1190944c)));
  /* 118ec3ad push edi */
  push32((uint32_t)(EDI));
  /* 118ec3ae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118ec3b0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ec3b2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec3b4 je 0x118ec404 */
  if (C.zf) goto L_118ec404;
  /* 118ec3b6 mov ebx, dword ptr [0x118ef0a0] */
  EBX = (r32((uint32_t)(0x118ef0a0)));
L_118ec3bc:;
  /* 118ec3bc push edi */
  push32((uint32_t)(EDI));
  /* 118ec3bd push edi */
  push32((uint32_t)(EDI));
  /* 118ec3be push edi */
  push32((uint32_t)(EDI));
  /* 118ec3bf push edi */
  push32((uint32_t)(EDI));
  /* 118ec3c0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ec3c2 push eax */
  push32((uint32_t)(EAX));
  /* 118ec3c3 push edi */
  push32((uint32_t)(EDI));
  /* 118ec3c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec3c6 call ebx */
  call_ind((uint32_t)(EBX), 0x118ec3c8u);
  /* 118ec3c8 mov ebp, eax */
  EBP = (EAX);
  /* 118ec3ca cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec3cc je 0x118ec40c */
  if (C.zf) goto L_118ec40c;
  /* 118ec3ce push ebp */
  push32((uint32_t)(EBP));
  /* 118ec3cf call 0x118e553a */
  push32(0x118ec3d4u); f_118e553a();
  /* 118ec3d4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec3d6 pop ecx */
  ECX = (pop32());
  /* 118ec3d7 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 118ec3db je 0x118ec40c */
  if (C.zf) goto L_118ec40c;
  /* 118ec3dd push edi */
  push32((uint32_t)(EDI));
  /* 118ec3de push edi */
  push32((uint32_t)(EDI));
  /* 118ec3df push ebp */
  push32((uint32_t)(EBP));
  /* 118ec3e0 push eax */
  push32((uint32_t)(EAX));
  /* 118ec3e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ec3e3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 118ec3e5 push edi */
  push32((uint32_t)(EDI));
  /* 118ec3e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec3e8 call ebx */
  call_ind((uint32_t)(EBX), 0x118ec3eau);
  /* 118ec3ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec3ec je 0x118ec40c */
  if (C.zf) goto L_118ec40c;
  /* 118ec3ee push edi */
  push32((uint32_t)(EDI));
  /* 118ec3ef push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 118ec3f3 call 0x118ec979 */
  push32(0x118ec3f8u); f_118ec979();
  /* 118ec3f8 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118ec3fb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec3fe pop ecx */
  ECX = (pop32());
  /* 118ec3ff cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec401 pop ecx */
  ECX = (pop32());
  /* 118ec402 jne 0x118ec3bc */
  if (!C.zf) goto L_118ec3bc;
L_118ec404:;
  /* 118ec404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ec406:;
  /* 118ec406 pop edi */
  EDI = (pop32());
  /* 118ec407 pop esi */
  ESI = (pop32());
  /* 118ec408 pop ebp */
  EBP = (pop32());
  /* 118ec409 pop ebx */
  EBX = (pop32());
  /* 118ec40a pop ecx */
  ECX = (pop32());
  /* 118ec40b ret  */
  ESPCHK(0x118ec3a3u, _esp0);
  ESP += 4; return;
L_118ec40c:;
  /* 118ec40c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ec40f jmp 0x118ec406 */
  goto L_118ec406;
}

/* FUN_1000c420 @ 0x118ec420 (208 bytes, 85 insns) */
void f_118ec420(void) {
  FTRACE(0x118ec420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec420 push ebp */
  push32((uint32_t)(EBP));
  /* 118ec421 mov ebp, esp */
  EBP = (ESP);
  /* 118ec423 push edi */
  push32((uint32_t)(EDI));
  /* 118ec424 push esi */
  push32((uint32_t)(ESI));
  /* 118ec425 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec426 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118ec429 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118ec42c lea eax, [0x119096d8] */
  EAX = ((uint32_t)(0x119096d8));
  /* 118ec432 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec436 jne 0x118ec473 */
  if (!C.zf) goto L_118ec473;
  /* 118ec438 mov al, 0xff */
  AL = (0xffu);
  /* 118ec43a mov edi, edi */
  EDI = (EDI);
L_118ec43c:;
  /* 118ec43c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ec43e je 0x118ec46e */
  if (C.zf) goto L_118ec46e;
  /* 118ec440 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ec442 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ec443 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 118ec445 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ec446 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec448 je 0x118ec43c */
  if (C.zf) goto L_118ec43c;
  /* 118ec44a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118ec44c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec44e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118ec450 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 118ec453 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118ec455 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118ec457 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 118ec459 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118ec45b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec45d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118ec45f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 118ec462 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118ec464 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118ec466 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec468 je 0x118ec43c */
  if (C.zf) goto L_118ec43c;
  /* 118ec46a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 118ec46c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_118ec46e:;
  /* 118ec46e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 118ec471 jmp 0x118ec4eb */
  goto L_118ec4eb;
L_118ec473:;
  /* 118ec473 lock inc dword ptr [0x119097c8] */
  x86_unimpl("lock inc @ 0x118ec473");
  /* 118ec47a cmp dword ptr [0x119097c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119097c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec481 jg 0x118ec487 */
  if ((!C.zf&&C.sf==C.of)) goto L_118ec487;
  /* 118ec483 push 0 */
  push32((uint32_t)(0x0u));
  /* 118ec485 jmp 0x118ec49c */
  goto L_118ec49c;
L_118ec487:;
  /* 118ec487 lock dec dword ptr [0x119097c8] */
  x86_unimpl("lock dec @ 0x118ec487");
  /* 118ec48e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118ec490 call 0x118e7509 */
  push32(0x118ec495u); f_118e7509();
  /* 118ec495 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_118ec49c:;
  /* 118ec49c mov eax, 0xff */
  EAX = (0xffu);
  /* 118ec4a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ec4a3 nop  */
  /* nop */
L_118ec4a4:;
  /* 118ec4a4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ec4a6 je 0x118ec4cf */
  if (C.zf) goto L_118ec4cf;
  /* 118ec4a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ec4aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ec4ab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118ec4ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ec4ae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec4b0 je 0x118ec4a4 */
  if (C.zf) goto L_118ec4a4;
  /* 118ec4b2 push eax */
  push32((uint32_t)(EAX));
  /* 118ec4b3 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec4b4 call 0x118e6916 */
  push32(0x118ec4b9u); f_118e6916();
  /* 118ec4b9 mov ebx, eax */
  EBX = (EAX);
  /* 118ec4bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec4be call 0x118e6916 */
  push32(0x118ec4c3u); f_118e6916();
  /* 118ec4c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec4c6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec4c8 je 0x118ec4a4 */
  if (C.zf) goto L_118ec4a4;
  /* 118ec4ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ec4cc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118ec4cf:;
  /* 118ec4cf mov ebx, eax */
  EBX = (EAX);
  /* 118ec4d1 pop eax */
  EAX = (pop32());
  /* 118ec4d2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ec4d4 jne 0x118ec4df */
  if (!C.zf) goto L_118ec4df;
  /* 118ec4d6 lock dec dword ptr [0x119097c8] */
  x86_unimpl("lock dec @ 0x118ec4d6");
  /* 118ec4dd jmp 0x118ec4e9 */
  goto L_118ec4e9;
L_118ec4df:;
  /* 118ec4df push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118ec4e1 call 0x118e756a */
  push32(0x118ec4e6u); f_118e756a();
  /* 118ec4e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118ec4e9:;
  /* 118ec4e9 mov eax, ebx */
  EAX = (EBX);
L_118ec4eb:;
  /* 118ec4eb pop ebx */
  EBX = (pop32());
  /* 118ec4ec pop esi */
  ESI = (pop32());
  /* 118ec4ed pop edi */
  EDI = (pop32());
  /* 118ec4ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ec4ef ret  */
  ESPCHK(0x118ec420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4f0 @ 0x118ec4f0 (257 bytes, 103 insns) */
void f_118ec4f0(void) {
  FTRACE(0x118ec4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118ec4f1 mov ebp, esp */
  EBP = (ESP);
  /* 118ec4f3 push edi */
  push32((uint32_t)(EDI));
  /* 118ec4f4 push esi */
  push32((uint32_t)(ESI));
  /* 118ec4f5 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec4f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ec4f9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118ec4fb je 0x118ec5ea */
  if (C.zf) goto L_118ec5ea;
  /* 118ec501 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118ec504 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 118ec507 lea eax, [0x119096d8] */
  EAX = ((uint32_t)(0x119096d8));
  /* 118ec50d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec511 jne 0x118ec561 */
  if (!C.zf) goto L_118ec561;
  /* 118ec513 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 118ec515 mov bl, 0x5a */
  BL = (0x5au);
  /* 118ec517 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 118ec519 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118ec51c:;
  /* 118ec51c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 118ec51e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118ec520 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 118ec522 je 0x118ec545 */
  if (C.zf) goto L_118ec545;
  /* 118ec524 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118ec526 je 0x118ec545 */
  if (C.zf) goto L_118ec545;
  /* 118ec528 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ec529 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ec52a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec52c jb 0x118ec534 */
  if (C.cf) goto L_118ec534;
  /* 118ec52e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec530 ja 0x118ec534 */
  if ((!C.cf&&!C.zf)) goto L_118ec534;
  /* 118ec532 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_118ec534:;
  /* 118ec534 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec536 jb 0x118ec53e */
  if (C.cf) goto L_118ec53e;
  /* 118ec538 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec53a ja 0x118ec53e */
  if ((!C.cf&&!C.zf)) goto L_118ec53e;
  /* 118ec53c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_118ec53e:;
  /* 118ec53e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec540 jne 0x118ec54f */
  if (!C.zf) goto L_118ec54f;
  /* 118ec542 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118ec543 jne 0x118ec51c */
  if (!C.zf) goto L_118ec51c;
L_118ec545:;
  /* 118ec545 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118ec547 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec549 je 0x118ec5ea */
  if (C.zf) goto L_118ec5ea;
L_118ec54f:;
  /* 118ec54f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 118ec554 jb 0x118ec5ea */
  if (C.cf) goto L_118ec5ea;
  /* 118ec55a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ec55c jmp 0x118ec5ea */
  goto L_118ec5ea;
L_118ec561:;
  /* 118ec561 lock inc dword ptr [0x119097c8] */
  x86_unimpl("lock inc @ 0x118ec561");
  /* 118ec568 cmp dword ptr [0x119097c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119097c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec56f jg 0x118ec575 */
  if ((!C.zf&&C.sf==C.of)) goto L_118ec575;
  /* 118ec571 push 0 */
  push32((uint32_t)(0x0u));
  /* 118ec573 jmp 0x118ec58e */
  goto L_118ec58e;
L_118ec575:;
  /* 118ec575 lock dec dword ptr [0x119097c8] */
  x86_unimpl("lock dec @ 0x118ec575");
  /* 118ec57c mov ebx, ecx */
  EBX = (ECX);
  /* 118ec57e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118ec580 call 0x118e7509 */
  push32(0x118ec585u); f_118e7509();
  /* 118ec585 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 118ec58c mov ecx, ebx */
  ECX = (EBX);
L_118ec58e:;
  /* 118ec58e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ec590 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ec592 mov edi, edi */
  EDI = (EDI);
L_118ec594:;
  /* 118ec594 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118ec596 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ec598 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 118ec59a je 0x118ec5bf */
  if (C.zf) goto L_118ec5bf;
  /* 118ec59c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ec59e je 0x118ec5bf */
  if (C.zf) goto L_118ec5bf;
  /* 118ec5a0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ec5a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ec5a2 push ecx */
  push32((uint32_t)(ECX));
  /* 118ec5a3 push eax */
  push32((uint32_t)(EAX));
  /* 118ec5a4 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec5a5 call 0x118e6916 */
  push32(0x118ec5aau); f_118e6916();
  /* 118ec5aa mov ebx, eax */
  EBX = (EAX);
  /* 118ec5ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec5af call 0x118e6916 */
  push32(0x118ec5b4u); f_118e6916();
  /* 118ec5b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec5b7 pop ecx */
  ECX = (pop32());
  /* 118ec5b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec5ba jne 0x118ec5c5 */
  if (!C.zf) goto L_118ec5c5;
  /* 118ec5bc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118ec5bd jne 0x118ec594 */
  if (!C.zf) goto L_118ec594;
L_118ec5bf:;
  /* 118ec5bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118ec5c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec5c3 je 0x118ec5ce */
  if (C.zf) goto L_118ec5ce;
L_118ec5c5:;
  /* 118ec5c5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 118ec5ca jb 0x118ec5ce */
  if (C.cf) goto L_118ec5ce;
  /* 118ec5cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_118ec5ce:;
  /* 118ec5ce pop eax */
  EAX = (pop32());
  /* 118ec5cf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ec5d1 jne 0x118ec5dc */
  if (!C.zf) goto L_118ec5dc;
  /* 118ec5d3 lock dec dword ptr [0x119097c8] */
  x86_unimpl("lock dec @ 0x118ec5d3");
  /* 118ec5da jmp 0x118ec5ea */
  goto L_118ec5ea;
L_118ec5dc:;
  /* 118ec5dc mov ebx, ecx */
  EBX = (ECX);
  /* 118ec5de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118ec5e0 call 0x118e756a */
  push32(0x118ec5e5u); f_118e756a();
  /* 118ec5e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec5e8 mov ecx, ebx */
  ECX = (EBX);
L_118ec5ea:;
  /* 118ec5ea mov eax, ecx */
  EAX = (ECX);
  /* 118ec5ec pop ebx */
  EBX = (pop32());
  /* 118ec5ed pop esi */
  ESI = (pop32());
  /* 118ec5ee pop edi */
  EDI = (pop32());
  /* 118ec5ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ec5f0 ret  */
  ESPCHK(0x118ec4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5f1 @ 0x118ec5f1 (93 bytes, 32 insns) */
void f_118ec5f1(void) {
  FTRACE(0x118ec5f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec5f1 push esi */
  push32((uint32_t)(ESI));
  /* 118ec5f2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ec5f6 cmp esi, dword ptr [0x1190ab40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1190ab40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec5fc jae 0x118ec636 */
  if (!C.cf) goto L_118ec636;
  /* 118ec5fe mov ecx, esi */
  ECX = (ESI);
  /* 118ec600 mov eax, esi */
  EAX = (ESI);
  /* 118ec602 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118ec605 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118ec608 mov ecx, dword ptr [ecx*4 + 0x1190aa40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118ec60f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118ec612 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118ec617 je 0x118ec636 */
  if (C.zf) goto L_118ec636;
  /* 118ec619 push edi */
  push32((uint32_t)(EDI));
  /* 118ec61a push esi */
  push32((uint32_t)(ESI));
  /* 118ec61b call 0x118eb390 */
  push32(0x118ec620u); f_118eb390();
  /* 118ec620 push esi */
  push32((uint32_t)(ESI));
  /* 118ec621 call 0x118ec64e */
  push32(0x118ec626u); f_118ec64e();
  /* 118ec626 push esi */
  push32((uint32_t)(ESI));
  /* 118ec627 mov edi, eax */
  EDI = (EAX);
  /* 118ec629 call 0x118eb3ef */
  push32(0x118ec62eu); f_118eb3ef();
  /* 118ec62e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec631 mov eax, edi */
  EAX = (EDI);
  /* 118ec633 pop edi */
  EDI = (pop32());
  /* 118ec634 pop esi */
  ESI = (pop32());
  /* 118ec635 ret  */
  ESPCHK(0x118ec5f1u, _esp0);
  ESP += 4; return;
L_118ec636:;
  /* 118ec636 call 0x118eb2bd */
  push32(0x118ec63bu); f_118eb2bd();
  /* 118ec63b mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118ec641 call 0x118eb2c6 */
  push32(0x118ec646u); f_118eb2c6();
  /* 118ec646 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118ec649 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ec64c pop esi */
  ESI = (pop32());
  /* 118ec64d ret  */
  ESPCHK(0x118ec5f1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c64e @ 0x118ec64e (131 bytes, 52 insns) */
void f_118ec64e(void) {
  FTRACE(0x118ec64eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec64e push esi */
  push32((uint32_t)(ESI));
  /* 118ec64f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ec653 push edi */
  push32((uint32_t)(EDI));
  /* 118ec654 push esi */
  push32((uint32_t)(ESI));
  /* 118ec655 call 0x118eb34e */
  push32(0x118ec65au); f_118eb34e();
  /* 118ec65a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec65d pop ecx */
  ECX = (pop32());
  /* 118ec65e je 0x118ec69c */
  if (C.zf) goto L_118ec69c;
  /* 118ec660 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec663 je 0x118ec66a */
  if (C.zf) goto L_118ec66a;
  /* 118ec665 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec668 jne 0x118ec680 */
  if (!C.zf) goto L_118ec680;
L_118ec66a:;
  /* 118ec66a push 2 */
  push32((uint32_t)(0x2u));
  /* 118ec66c call 0x118eb34e */
  push32(0x118ec671u); f_118eb34e();
  /* 118ec671 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec673 mov edi, eax */
  EDI = (EAX);
  /* 118ec675 call 0x118eb34e */
  push32(0x118ec67au); f_118eb34e();
  /* 118ec67a pop ecx */
  ECX = (pop32());
  /* 118ec67b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec67d pop ecx */
  ECX = (pop32());
  /* 118ec67e je 0x118ec69c */
  if (C.zf) goto L_118ec69c;
L_118ec680:;
  /* 118ec680 push esi */
  push32((uint32_t)(ESI));
  /* 118ec681 call 0x118eb34e */
  push32(0x118ec686u); f_118eb34e();
  /* 118ec686 pop ecx */
  ECX = (pop32());
  /* 118ec687 push eax */
  push32((uint32_t)(EAX));
  /* 118ec688 call dword ptr [0x118ef024] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef024))), 0x118ec68eu);
  /* 118ec68e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec690 jne 0x118ec69c */
  if (!C.zf) goto L_118ec69c;
  /* 118ec692 call dword ptr [0x118ef0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c4))), 0x118ec698u);
  /* 118ec698 mov edi, eax */
  EDI = (EAX);
  /* 118ec69a jmp 0x118ec69e */
  goto L_118ec69e;
L_118ec69c:;
  /* 118ec69c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_118ec69e:;
  /* 118ec69e push esi */
  push32((uint32_t)(ESI));
  /* 118ec69f call 0x118eb2cf */
  push32(0x118ec6a4u); f_118eb2cf();
  /* 118ec6a4 mov eax, esi */
  EAX = (ESI);
  /* 118ec6a6 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 118ec6a9 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118ec6ac pop ecx */
  ECX = (pop32());
  /* 118ec6ad mov eax, dword ptr [eax*4 + 0x1190aa40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1190aa40)));
  /* 118ec6b4 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 118ec6b7 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 118ec6bc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118ec6be je 0x118ec6cc */
  if (C.zf) goto L_118ec6cc;
  /* 118ec6c0 push edi */
  push32((uint32_t)(EDI));
  /* 118ec6c1 call 0x118eb24a */
  push32(0x118ec6c6u); f_118eb24a();
  /* 118ec6c6 pop ecx */
  ECX = (pop32());
  /* 118ec6c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ec6ca jmp 0x118ec6ce */
  goto L_118ec6ce;
L_118ec6cc:;
  /* 118ec6cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ec6ce:;
  /* 118ec6ce pop edi */
  EDI = (pop32());
  /* 118ec6cf pop esi */
  ESI = (pop32());
  /* 118ec6d0 ret  */
  ESPCHK(0x118ec64eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6d1 @ 0x118ec6d1 (43 bytes, 17 insns) */
void f_118ec6d1(void) {
  FTRACE(0x118ec6d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec6d1 push esi */
  push32((uint32_t)(ESI));
  /* 118ec6d2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ec6d6 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118ec6d9 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 118ec6db je 0x118ec6fa */
  if (C.zf) goto L_118ec6fa;
  /* 118ec6dd test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 118ec6df je 0x118ec6fa */
  if (C.zf) goto L_118ec6fa;
  /* 118ec6e1 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 118ec6e4 call 0x118e8ae5 */
  push32(0x118ec6e9u); f_118e8ae5();
  /* 118ec6e9 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 118ec6ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ec6f1 pop ecx */
  ECX = (pop32());
  /* 118ec6f2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118ec6f4 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 118ec6f7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_118ec6fa:;
  /* 118ec6fa pop esi */
  ESI = (pop32());
  /* 118ec6fb ret  */
  ESPCHK(0x118ec6d1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6fc @ 0x118ec6fc (597 bytes, 239 insns) */
void f_118ec6fc(void) {
  FTRACE(0x118ec6fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec6fc push ebp */
  push32((uint32_t)(EBP));
  /* 118ec6fd mov ebp, esp */
  EBP = (ESP);
  /* 118ec6ff push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ec701 push 0x118ef970 */
  push32((uint32_t)(0x118ef970u));
  /* 118ec706 push 0x118e8cc8 */
  push32((uint32_t)(0x118e8cc8u));
  /* 118ec70b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ec711 push eax */
  push32((uint32_t)(EAX));
  /* 118ec712 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118ec719 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ec71c push ebx */
  push32((uint32_t)(EBX));
  /* 118ec71d push esi */
  push32((uint32_t)(ESI));
  /* 118ec71e push edi */
  push32((uint32_t)(EDI));
  /* 118ec71f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ec722 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ec724 cmp dword ptr [0x11909770], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11909770))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec72a push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec72c pop edi */
  EDI = (pop32());
  /* 118ec72d jne 0x118ec76f */
  if (!C.zf) goto L_118ec76f;
  /* 118ec72f push edi */
  push32((uint32_t)(EDI));
  /* 118ec730 mov eax, 0x118ef74c */
  EAX = (0x118ef74cu);
  /* 118ec735 push eax */
  push32((uint32_t)(EAX));
  /* 118ec736 push edi */
  push32((uint32_t)(EDI));
  /* 118ec737 push eax */
  push32((uint32_t)(EAX));
  /* 118ec738 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec739 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec73a call dword ptr [0x118ef01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef01c))), 0x118ec740u);
  /* 118ec740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec742 je 0x118ec74c */
  if (C.zf) goto L_118ec74c;
  /* 118ec744 mov dword ptr [0x11909770], edi */
  w32((uint32_t)(0x11909770), (EDI));
  /* 118ec74a jmp 0x118ec76f */
  goto L_118ec76f;
L_118ec74c:;
  /* 118ec74c push edi */
  push32((uint32_t)(EDI));
  /* 118ec74d mov eax, 0x118ef748 */
  EAX = (0x118ef748u);
  /* 118ec752 push eax */
  push32((uint32_t)(EAX));
  /* 118ec753 push edi */
  push32((uint32_t)(EDI));
  /* 118ec754 push eax */
  push32((uint32_t)(EAX));
  /* 118ec755 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec756 push ebx */
  push32((uint32_t)(EBX));
  /* 118ec757 call dword ptr [0x118ef020] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef020))), 0x118ec75du);
  /* 118ec75d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec75f je 0x118ec965 */
  if (C.zf) goto L_118ec965;
  /* 118ec765 mov dword ptr [0x11909770], 2 */
  w32((uint32_t)(0x11909770), (0x2u));
L_118ec76f:;
  /* 118ec76f mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 118ec772 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec774 jle 0x118ec786 */
  if ((C.zf||C.sf!=C.of)) goto L_118ec786;
  /* 118ec776 push esi */
  push32((uint32_t)(ESI));
  /* 118ec777 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ec77a call 0x118ea91a */
  push32(0x118ec77fu); f_118ea91a();
  /* 118ec77f pop ecx */
  ECX = (pop32());
  /* 118ec780 pop ecx */
  ECX = (pop32());
  /* 118ec781 mov esi, eax */
  ESI = (EAX);
  /* 118ec783 mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_118ec786:;
  /* 118ec786 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec789 jle 0x118ec79b */
  if ((C.zf||C.sf!=C.of)) goto L_118ec79b;
  /* 118ec78b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118ec78e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ec791 call 0x118ea91a */
  push32(0x118ec796u); f_118ea91a();
  /* 118ec796 pop ecx */
  ECX = (pop32());
  /* 118ec797 pop ecx */
  ECX = (pop32());
  /* 118ec798 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_118ec79b:;
  /* 118ec79b mov eax, dword ptr [0x11909770] */
  EAX = (r32((uint32_t)(0x11909770)));
  /* 118ec7a0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec7a3 jne 0x118ec7c0 */
  if (!C.zf) goto L_118ec7c0;
  /* 118ec7a5 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118ec7a8 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ec7ab push esi */
  push32((uint32_t)(ESI));
  /* 118ec7ac push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ec7af push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ec7b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ec7b5 call dword ptr [0x118ef020] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef020))), 0x118ec7bbu);
  /* 118ec7bb jmp 0x118ec967 */
  goto L_118ec967;
L_118ec7c0:;
  /* 118ec7c0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec7c2 jne 0x118ec965 */
  if (!C.zf) goto L_118ec965;
  /* 118ec7c8 cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec7cb jne 0x118ec7d5 */
  if (!C.zf) goto L_118ec7d5;
  /* 118ec7cd mov eax, dword ptr [0x119096f0] */
  EAX = (r32((uint32_t)(0x119096f0)));
  /* 118ec7d2 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_118ec7d5:;
  /* 118ec7d5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec7d7 je 0x118ec7e2 */
  if (C.zf) goto L_118ec7e2;
  /* 118ec7d9 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec7dc jne 0x118ec87a */
  if (!C.zf) goto L_118ec87a;
L_118ec7e2:;
  /* 118ec7e2 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec7e5 jne 0x118ec7ef */
  if (!C.zf) goto L_118ec7ef;
L_118ec7e7:;
  /* 118ec7e7 push 2 */
  push32((uint32_t)(0x2u));
L_118ec7e9:;
  /* 118ec7e9 pop eax */
  EAX = (pop32());
  /* 118ec7ea jmp 0x118ec967 */
  goto L_118ec967;
L_118ec7ef:;
  /* 118ec7ef cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec7f2 jle 0x118ec7fb */
  if ((C.zf||C.sf!=C.of)) goto L_118ec7fb;
L_118ec7f4:;
  /* 118ec7f4 mov eax, edi */
  EAX = (EDI);
  /* 118ec7f6 jmp 0x118ec967 */
  goto L_118ec967;
L_118ec7fb:;
  /* 118ec7fb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec7fd jg 0x118ec840 */
  if ((!C.zf&&C.sf==C.of)) goto L_118ec840;
  /* 118ec7ff lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 118ec802 push eax */
  push32((uint32_t)(EAX));
  /* 118ec803 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ec806 call dword ptr [0x118ef054] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef054))), 0x118ec80cu);
  /* 118ec80c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec80e je 0x118ec965 */
  if (C.zf) goto L_118ec965;
  /* 118ec814 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec816 jle 0x118ec844 */
  if ((C.zf||C.sf!=C.of)) goto L_118ec844;
  /* 118ec818 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec81c jb 0x118ec840 */
  if (C.cf) goto L_118ec840;
  /* 118ec81e lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 118ec821 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec824 je 0x118ec840 */
  if (C.zf) goto L_118ec840;
L_118ec826:;
  /* 118ec826 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 118ec829 cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec82b je 0x118ec840 */
  if (C.zf) goto L_118ec840;
  /* 118ec82d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ec830 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 118ec832 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec834 jb 0x118ec83a */
  if (C.cf) goto L_118ec83a;
  /* 118ec836 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec838 jbe 0x118ec7e7 */
  if ((C.cf||C.zf)) goto L_118ec7e7;
L_118ec83a:;
  /* 118ec83a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ec83b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ec83c cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec83e jne 0x118ec826 */
  if (!C.zf) goto L_118ec826;
L_118ec840:;
  /* 118ec840 push 3 */
  push32((uint32_t)(0x3u));
  /* 118ec842 jmp 0x118ec7e9 */
  goto L_118ec7e9;
L_118ec844:;
  /* 118ec844 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec847 jle 0x118ec87a */
  if ((C.zf||C.sf!=C.of)) goto L_118ec87a;
  /* 118ec849 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec84d jb 0x118ec7f4 */
  if (C.cf) goto L_118ec7f4;
  /* 118ec84f lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 118ec852 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec855 je 0x118ec7f4 */
  if (C.zf) goto L_118ec7f4;
L_118ec857:;
  /* 118ec857 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 118ec85a cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec85c je 0x118ec7f4 */
  if (C.zf) goto L_118ec7f4;
  /* 118ec85e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118ec861 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 118ec863 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec865 jb 0x118ec86f */
  if (C.cf) goto L_118ec86f;
  /* 118ec867 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec869 jbe 0x118ec7e7 */
  if ((C.cf||C.zf)) goto L_118ec7e7;
L_118ec86f:;
  /* 118ec86f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ec870 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ec871 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec873 jne 0x118ec857 */
  if (!C.zf) goto L_118ec857;
  /* 118ec875 jmp 0x118ec7f4 */
  goto L_118ec7f4;
L_118ec87a:;
  /* 118ec87a push ebx */
  push32((uint32_t)(EBX));
  /* 118ec87b push ebx */
  push32((uint32_t)(EBX));
  /* 118ec87c push esi */
  push32((uint32_t)(ESI));
  /* 118ec87d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ec880 push 9 */
  push32((uint32_t)(0x9u));
  /* 118ec882 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ec885 call dword ptr [0x118ef044] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef044))), 0x118ec88bu);
  /* 118ec88b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118ec88e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec890 je 0x118ec965 */
  if (C.zf) goto L_118ec965;
  /* 118ec896 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 118ec899 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec89b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec89e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118ec8a0 call 0x118ea230 */
  push32(0x118ec8a5u); f_118ea230();
  /* 118ec8a5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ec8a8 mov eax, esp */
  EAX = (ESP);
  /* 118ec8aa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 118ec8ad or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ec8b1 jmp 0x118ec8c9 */
  goto L_118ec8c9;
  /* 118ec8b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec8b5 pop eax */
  EAX = (pop32());
  /* 118ec8b6 ret  */
  ESPCHK(0x118ec6fcu, _esp0);
  ESP += 4; return;
  /* 118ec8b7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118ec8ba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ec8bc mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 118ec8bf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ec8c3 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 118ec8c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec8c8 pop edi */
  EDI = (pop32());
L_118ec8c9:;
  /* 118ec8c9 cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec8cc je 0x118ec965 */
  if (C.zf) goto L_118ec965;
  /* 118ec8d2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 118ec8d5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118ec8d8 push esi */
  push32((uint32_t)(ESI));
  /* 118ec8d9 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ec8dc push edi */
  push32((uint32_t)(EDI));
  /* 118ec8dd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ec8e0 mov esi, dword ptr [0x118ef044] */
  ESI = (r32((uint32_t)(0x118ef044)));
  /* 118ec8e6 call esi */
  call_ind((uint32_t)(ESI), 0x118ec8e8u);
  /* 118ec8e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec8ea je 0x118ec965 */
  if (C.zf) goto L_118ec965;
  /* 118ec8ec push ebx */
  push32((uint32_t)(EBX));
  /* 118ec8ed push ebx */
  push32((uint32_t)(EBX));
  /* 118ec8ee push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118ec8f1 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ec8f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 118ec8f6 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ec8f9 call esi */
  call_ind((uint32_t)(ESI), 0x118ec8fbu);
  /* 118ec8fb mov esi, eax */
  ESI = (EAX);
  /* 118ec8fd mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 118ec900 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec902 je 0x118ec965 */
  if (C.zf) goto L_118ec965;
  /* 118ec904 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118ec907 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 118ec90a add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ec90d and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 118ec90f call 0x118ea230 */
  push32(0x118ec914u); f_118ea230();
  /* 118ec914 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 118ec917 mov edi, esp */
  EDI = (ESP);
  /* 118ec919 mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 118ec91c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ec920 jmp 0x118ec934 */
  goto L_118ec934;
  /* 118ec922 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec924 pop eax */
  EAX = (pop32());
  /* 118ec925 ret  */
  ESPCHK(0x118ec6fcu, _esp0);
  ESP += 4; return;
  /* 118ec926 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 118ec929 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ec92b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118ec92d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ec931 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_118ec934:;
  /* 118ec934 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec936 je 0x118ec965 */
  if (C.zf) goto L_118ec965;
  /* 118ec938 push esi */
  push32((uint32_t)(ESI));
  /* 118ec939 push edi */
  push32((uint32_t)(EDI));
  /* 118ec93a push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118ec93d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ec940 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ec942 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118ec945 call dword ptr [0x118ef044] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef044))), 0x118ec94bu);
  /* 118ec94b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec94d je 0x118ec965 */
  if (C.zf) goto L_118ec965;
  /* 118ec94f push esi */
  push32((uint32_t)(ESI));
  /* 118ec950 push edi */
  push32((uint32_t)(EDI));
  /* 118ec951 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 118ec954 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 118ec957 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ec95a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ec95d call dword ptr [0x118ef01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef01c))), 0x118ec963u);
  /* 118ec963 jmp 0x118ec967 */
  goto L_118ec967;
L_118ec965:;
  /* 118ec965 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ec967:;
  /* 118ec967 lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 118ec96a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118ec96d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ec974 pop edi */
  EDI = (pop32());
  /* 118ec975 pop esi */
  ESI = (pop32());
  /* 118ec976 pop ebx */
  EBX = (pop32());
  /* 118ec977 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ec978 ret  */
  ESPCHK(0x118ec6fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c979 @ 0x118ec979 (391 bytes, 155 insns) */
void f_118ec979(void) {
  FTRACE(0x118ec979u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ec979 push ebp */
  push32((uint32_t)(EBP));
  /* 118ec97a mov ebp, esp */
  EBP = (ESP);
  /* 118ec97c push ecx */
  push32((uint32_t)(ECX));
  /* 118ec97d push ecx */
  push32((uint32_t)(ECX));
  /* 118ec97e push ebx */
  push32((uint32_t)(EBX));
  /* 118ec97f push esi */
  push32((uint32_t)(ESI));
  /* 118ec980 push edi */
  push32((uint32_t)(EDI));
  /* 118ec981 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118ec983 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec986 je 0x118ec9dd */
  if (C.zf) goto L_118ec9dd;
  /* 118ec988 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 118ec98a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ec98d call 0x118ecbbf */
  push32(0x118ec992u); f_118ecbbf();
  /* 118ec992 mov esi, eax */
  ESI = (EAX);
  /* 118ec994 pop ecx */
  ECX = (pop32());
  /* 118ec995 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec997 pop ecx */
  ECX = (pop32());
  /* 118ec998 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 118ec99b je 0x118ec9dd */
  if (C.zf) goto L_118ec9dd;
  /* 118ec99d cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec9a0 je 0x118ec9dd */
  if (C.zf) goto L_118ec9dd;
  /* 118ec9a2 mov eax, dword ptr [0x11909444] */
  EAX = (r32((uint32_t)(0x11909444)));
  /* 118ec9a7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ec9a9 cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ec9ac sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 118ec9af cmp eax, dword ptr [0x11909448] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11909448))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec9b5 jne 0x118ec9c3 */
  if (!C.zf) goto L_118ec9c3;
  /* 118ec9b7 push eax */
  push32((uint32_t)(EAX));
  /* 118ec9b8 call 0x118ecb58 */
  push32(0x118ec9bdu); f_118ecb58();
  /* 118ec9bd pop ecx */
  ECX = (pop32());
  /* 118ec9be mov dword ptr [0x11909444], eax */
  w32((uint32_t)(0x11909444), (EAX));
L_118ec9c3:;
  /* 118ec9c3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec9c5 jne 0x118eca1b */
  if (!C.zf) goto L_118eca1b;
  /* 118ec9c7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec9ca je 0x118ec9e5 */
  if (C.zf) goto L_118ec9e5;
  /* 118ec9cc cmp dword ptr [0x1190944c], edi */
  { uint32_t _a=(r32((uint32_t)(0x1190944c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec9d2 je 0x118ec9e5 */
  if (C.zf) goto L_118ec9e5;
  /* 118ec9d4 call 0x118ec3a3 */
  push32(0x118ec9d9u); f_118ec3a3();
  /* 118ec9d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ec9db je 0x118eca1b */
  if (C.zf) goto L_118eca1b;
L_118ec9dd:;
  /* 118ec9dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118ec9e0:;
  /* 118ec9e0 pop edi */
  EDI = (pop32());
  /* 118ec9e1 pop esi */
  ESI = (pop32());
  /* 118ec9e2 pop ebx */
  EBX = (pop32());
  /* 118ec9e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ec9e4 ret  */
  ESPCHK(0x118ec979u, _esp0);
  ESP += 4; return;
L_118ec9e5:;
  /* 118ec9e5 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec9e7 jne 0x118ecaf9 */
  if (!C.zf) goto L_118ecaf9;
  /* 118ec9ed push 4 */
  push32((uint32_t)(0x4u));
  /* 118ec9ef call 0x118e553a */
  push32(0x118ec9f4u); f_118e553a();
  /* 118ec9f4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ec9f6 pop ecx */
  ECX = (pop32());
  /* 118ec9f7 mov dword ptr [0x11909444], eax */
  w32((uint32_t)(0x11909444), (EAX));
  /* 118ec9fc je 0x118ec9dd */
  if (C.zf) goto L_118ec9dd;
  /* 118ec9fe mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 118eca00 cmp dword ptr [0x1190944c], edi */
  { uint32_t _a=(r32((uint32_t)(0x1190944c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eca06 jne 0x118eca1b */
  if (!C.zf) goto L_118eca1b;
  /* 118eca08 push 4 */
  push32((uint32_t)(0x4u));
  /* 118eca0a call 0x118e553a */
  push32(0x118eca0fu); f_118e553a();
  /* 118eca0f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eca11 pop ecx */
  ECX = (pop32());
  /* 118eca12 mov dword ptr [0x1190944c], eax */
  w32((uint32_t)(0x1190944c), (EAX));
  /* 118eca17 je 0x118ec9dd */
  if (C.zf) goto L_118ec9dd;
  /* 118eca19 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_118eca1b:;
  /* 118eca1b sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118eca1e mov edi, dword ptr [0x11909444] */
  EDI = (r32((uint32_t)(0x11909444)));
  /* 118eca24 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118eca27 push esi */
  push32((uint32_t)(ESI));
  /* 118eca28 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118eca2b call 0x118ecb00 */
  push32(0x118eca30u); f_118ecb00();
  /* 118eca30 mov esi, eax */
  ESI = (EAX);
  /* 118eca32 pop ecx */
  ECX = (pop32());
  /* 118eca33 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118eca35 pop ecx */
  ECX = (pop32());
  /* 118eca36 jl 0x118eca7b */
  if ((C.sf!=C.of)) goto L_118eca7b;
  /* 118eca38 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eca3b je 0x118eca7b */
  if (C.zf) goto L_118eca7b;
  /* 118eca3d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118eca3f je 0x118eca73 */
  if (C.zf) goto L_118eca73;
  /* 118eca41 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 118eca44 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 118eca47 call 0x118e8ae5 */
  push32(0x118eca4cu); f_118e8ae5();
  /* 118eca4c pop ecx */
  ECX = (pop32());
L_118eca4d:;
  /* 118eca4d cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eca50 je 0x118eca5d */
  if (C.zf) goto L_118eca5d;
  /* 118eca52 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 118eca55 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118eca56 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118eca58 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118eca5b jmp 0x118eca4d */
  goto L_118eca4d;
L_118eca5d:;
  /* 118eca5d mov eax, esi */
  EAX = (ESI);
  /* 118eca5f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118eca62 push eax */
  push32((uint32_t)(EAX));
  /* 118eca63 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 118eca66 call 0x118e511d */
  push32(0x118eca6bu); f_118e511d();
  /* 118eca6b pop ecx */
  ECX = (pop32());
  /* 118eca6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118eca6e pop ecx */
  ECX = (pop32());
  /* 118eca6f je 0x118ecaad */
  if (C.zf) goto L_118ecaad;
  /* 118eca71 jmp 0x118ecaa8 */
  goto L_118ecaa8;
L_118eca73:;
  /* 118eca73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eca76 mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 118eca79 jmp 0x118ecaad */
  goto L_118ecaad;
L_118eca7b:;
  /* 118eca7b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118eca7d jne 0x118ecaf9 */
  if (!C.zf) goto L_118ecaf9;
  /* 118eca7f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118eca81 jge 0x118eca85 */
  if ((C.sf==C.of)) goto L_118eca85;
  /* 118eca83 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_118eca85:;
  /* 118eca85 lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 118eca8c push eax */
  push32((uint32_t)(EAX));
  /* 118eca8d push edi */
  push32((uint32_t)(EDI));
  /* 118eca8e call 0x118e511d */
  push32(0x118eca93u); f_118e511d();
  /* 118eca93 pop ecx */
  ECX = (pop32());
  /* 118eca94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118eca96 pop ecx */
  ECX = (pop32());
  /* 118eca97 je 0x118ec9dd */
  if (C.zf) goto L_118ec9dd;
  /* 118eca9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ecaa0 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 118ecaa3 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_118ecaa8:;
  /* 118ecaa8 mov dword ptr [0x11909444], eax */
  w32((uint32_t)(0x11909444), (EAX));
L_118ecaad:;
  /* 118ecaad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecab1 je 0x118ecaf9 */
  if (C.zf) goto L_118ecaf9;
  /* 118ecab3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ecab6 call 0x118e73f0 */
  push32(0x118ecabbu); f_118e73f0();
  /* 118ecabb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ecabc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ecabd push eax */
  push32((uint32_t)(EAX));
  /* 118ecabe call 0x118e553a */
  push32(0x118ecac3u); f_118e553a();
  /* 118ecac3 mov esi, eax */
  ESI = (EAX);
  /* 118ecac5 pop ecx */
  ECX = (pop32());
  /* 118ecac6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118ecac8 pop ecx */
  ECX = (pop32());
  /* 118ecac9 je 0x118ecaf9 */
  if (C.zf) goto L_118ecaf9;
  /* 118ecacb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ecace push esi */
  push32((uint32_t)(ESI));
  /* 118ecacf call 0x118e6f60 */
  push32(0x118ecad4u); f_118e6f60();
  /* 118ecad4 mov eax, esi */
  EAX = (ESI);
  /* 118ecad6 pop ecx */
  ECX = (pop32());
  /* 118ecad7 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ecada pop ecx */
  ECX = (pop32());
  /* 118ecadb add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ecade and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 118ecae1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ecae2 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ecae4 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ecae6 not ebx */
  EBX = (~(EBX));
  /* 118ecae8 and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 118ecaea push ebx */
  push32((uint32_t)(EBX));
  /* 118ecaeb push esi */
  push32((uint32_t)(ESI));
  /* 118ecaec call dword ptr [0x118ef018] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef018))), 0x118ecaf2u);
  /* 118ecaf2 push esi */
  push32((uint32_t)(ESI));
  /* 118ecaf3 call 0x118e8ae5 */
  push32(0x118ecaf8u); f_118e8ae5();
  /* 118ecaf8 pop ecx */
  ECX = (pop32());
L_118ecaf9:;
  /* 118ecaf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ecafb jmp 0x118ec9e0 */
  goto L_118ec9e0;
}

/* FUN_1000cb00 @ 0x118ecb00 (88 bytes, 35 insns) */
void f_118ecb00(void) {
  FTRACE(0x118ecb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecb00 push esi */
  push32((uint32_t)(ESI));
  /* 118ecb01 mov esi, dword ptr [0x11909444] */
  ESI = (r32((uint32_t)(0x11909444)));
  /* 118ecb07 push edi */
  push32((uint32_t)(EDI));
  /* 118ecb08 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ecb0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ecb0c je 0x118ecb3b */
  if (C.zf) goto L_118ecb3b;
  /* 118ecb0e mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_118ecb12:;
  /* 118ecb12 push edi */
  push32((uint32_t)(EDI));
  /* 118ecb13 push eax */
  push32((uint32_t)(EAX));
  /* 118ecb14 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 118ecb18 call 0x118ec364 */
  push32(0x118ecb1du); f_118ec364();
  /* 118ecb1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ecb20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ecb22 jne 0x118ecb31 */
  if (!C.zf) goto L_118ecb31;
  /* 118ecb24 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ecb26 mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 118ecb29 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ecb2b je 0x118ecb4b */
  if (C.zf) goto L_118ecb4b;
  /* 118ecb2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118ecb2f je 0x118ecb4b */
  if (C.zf) goto L_118ecb4b;
L_118ecb31:;
  /* 118ecb31 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118ecb34 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ecb37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ecb39 jne 0x118ecb12 */
  if (!C.zf) goto L_118ecb12;
L_118ecb3b:;
  /* 118ecb3b mov eax, esi */
  EAX = (ESI);
  /* 118ecb3d sub eax, dword ptr [0x11909444] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11909444))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ecb43 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118ecb46 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_118ecb48:;
  /* 118ecb48 pop edi */
  EDI = (pop32());
  /* 118ecb49 pop esi */
  ESI = (pop32());
  /* 118ecb4a ret  */
  ESPCHK(0x118ecb00u, _esp0);
  ESP += 4; return;
L_118ecb4b:;
  /* 118ecb4b mov eax, esi */
  EAX = (ESI);
  /* 118ecb4d sub eax, dword ptr [0x11909444] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11909444))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ecb53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 118ecb56 jmp 0x118ecb48 */
  goto L_118ecb48;
}

/* FUN_1000cb58 @ 0x118ecb58 (103 bytes, 49 insns) */
void f_118ecb58(void) {
  FTRACE(0x118ecb58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecb58 push edi */
  push32((uint32_t)(EDI));
  /* 118ecb59 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ecb5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118ecb5f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118ecb61 jne 0x118ecb67 */
  if (!C.zf) goto L_118ecb67;
  /* 118ecb63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ecb65 pop edi */
  EDI = (pop32());
  /* 118ecb66 ret  */
  ESPCHK(0x118ecb58u, _esp0);
  ESP += 4; return;
L_118ecb67:;
  /* 118ecb67 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecb6a lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 118ecb6d je 0x118ecb79 */
  if (C.zf) goto L_118ecb79;
L_118ecb6f:;
  /* 118ecb6f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 118ecb71 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118ecb72 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ecb75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118ecb77 jne 0x118ecb6f */
  if (!C.zf) goto L_118ecb6f;
L_118ecb79:;
  /* 118ecb79 push ebx */
  push32((uint32_t)(EBX));
  /* 118ecb7a push ebp */
  push32((uint32_t)(EBP));
  /* 118ecb7b lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 118ecb82 push esi */
  push32((uint32_t)(ESI));
  /* 118ecb83 push eax */
  push32((uint32_t)(EAX));
  /* 118ecb84 call 0x118e553a */
  push32(0x118ecb89u); f_118e553a();
  /* 118ecb89 mov esi, eax */
  ESI = (EAX);
  /* 118ecb8b pop ecx */
  ECX = (pop32());
  /* 118ecb8c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118ecb8e mov ebp, esi */
  EBP = (ESI);
  /* 118ecb90 jne 0x118ecb9a */
  if (!C.zf) goto L_118ecb9a;
  /* 118ecb92 push 9 */
  push32((uint32_t)(0x9u));
  /* 118ecb94 call 0x118e4b2d */
  push32(0x118ecb99u); f_118e4b2d();
  /* 118ecb99 pop ecx */
  ECX = (pop32());
L_118ecb9a:;
  /* 118ecb9a mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118ecb9c mov ebx, edi */
  EBX = (EDI);
L_118ecb9e:;
  /* 118ecb9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ecba0 je 0x118ecbb5 */
  if (C.zf) goto L_118ecbb5;
  /* 118ecba2 push eax */
  push32((uint32_t)(EAX));
  /* 118ecba3 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ecba6 call 0x118ecc56 */
  push32(0x118ecbabu); f_118ecc56();
  /* 118ecbab mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118ecbad mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118ecbaf pop ecx */
  ECX = (pop32());
  /* 118ecbb0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ecbb3 jmp 0x118ecb9e */
  goto L_118ecb9e;
L_118ecbb5:;
  /* 118ecbb5 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 118ecbb8 mov eax, ebp */
  EAX = (EBP);
  /* 118ecbba pop esi */
  ESI = (pop32());
  /* 118ecbbb pop ebp */
  EBP = (pop32());
  /* 118ecbbc pop ebx */
  EBX = (pop32());
  /* 118ecbbd pop edi */
  EDI = (pop32());
  /* 118ecbbe ret  */
  ESPCHK(0x118ecb58u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbbf @ 0x118ecbbf (151 bytes, 62 insns) */
void f_118ecbbf(void) {
  FTRACE(0x118ecbbfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecbbf push ebp */
  push32((uint32_t)(EBP));
  /* 118ecbc0 mov ebp, esp */
  EBP = (ESP);
  /* 118ecbc2 cmp dword ptr [0x119097dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119097dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecbc9 push ebx */
  push32((uint32_t)(EBX));
  /* 118ecbca push esi */
  push32((uint32_t)(ESI));
  /* 118ecbcb jne 0x118ecbdc */
  if (!C.zf) goto L_118ecbdc;
  /* 118ecbcd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ecbd0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ecbd3 call 0x118ea0b0 */
  push32(0x118ecbd8u); f_118ea0b0();
  /* 118ecbd8 pop ecx */
  ECX = (pop32());
  /* 118ecbd9 pop ecx */
  ECX = (pop32());
  /* 118ecbda jmp 0x118ecc52 */
  goto L_118ecc52;
L_118ecbdc:;
  /* 118ecbdc push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118ecbde call 0x118e7509 */
  push32(0x118ecbe3u); f_118e7509();
  /* 118ecbe3 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118ecbe6 pop ecx */
  ECX = (pop32());
L_118ecbe7:;
  /* 118ecbe7 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 118ecbeb test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 118ecbee je 0x118ecc3a */
  if (C.zf) goto L_118ecc3a;
  /* 118ecbf0 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 118ecbf3 test byte ptr [eax + 0x119098e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x119098e1)))&(0x4u); fl_logic(_r,8); }
  /* 118ecbfa je 0x118ecc16 */
  if (C.zf) goto L_118ecc16;
  /* 118ecbfc mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118ecbff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ecc00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118ecc02 je 0x118ecc21 */
  if (C.zf) goto L_118ecc21;
  /* 118ecc04 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 118ecc07 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 118ecc0a shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 118ecc0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118ecc0f cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecc12 je 0x118ecc2d */
  if (C.zf) goto L_118ecc2d;
  /* 118ecc14 jmp 0x118ecc1e */
  goto L_118ecc1e;
L_118ecc16:;
  /* 118ecc16 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 118ecc19 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecc1c je 0x118ecc3a */
  if (C.zf) goto L_118ecc3a;
L_118ecc1e:;
  /* 118ecc1e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118ecc1f jmp 0x118ecbe7 */
  goto L_118ecbe7;
L_118ecc21:;
  /* 118ecc21 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118ecc23 call 0x118e756a */
  push32(0x118ecc28u); f_118e756a();
  /* 118ecc28 pop ecx */
  ECX = (pop32());
  /* 118ecc29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ecc2b jmp 0x118ecc52 */
  goto L_118ecc52;
L_118ecc2d:;
  /* 118ecc2d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118ecc2f call 0x118e756a */
  push32(0x118ecc34u); f_118e756a();
  /* 118ecc34 pop ecx */
  ECX = (pop32());
  /* 118ecc35 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 118ecc38 jmp 0x118ecc52 */
  goto L_118ecc52;
L_118ecc3a:;
  /* 118ecc3a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 118ecc3c call 0x118e756a */
  push32(0x118ecc41u); f_118e756a();
  /* 118ecc41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ecc44 pop ecx */
  ECX = (pop32());
  /* 118ecc45 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 118ecc48 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ecc4a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ecc4c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ecc4e not eax */
  EAX = (~(EAX));
  /* 118ecc50 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_118ecc52:;
  /* 118ecc52 pop esi */
  ESI = (pop32());
  /* 118ecc53 pop ebx */
  EBX = (pop32());
  /* 118ecc54 pop ebp */
  EBP = (pop32());
  /* 118ecc55 ret  */
  ESPCHK(0x118ecbbfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc56 @ 0x118ecc56 (43 bytes, 23 insns) */
void f_118ecc56(void) {
  FTRACE(0x118ecc56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecc56 push esi */
  push32((uint32_t)(ESI));
  /* 118ecc57 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118ecc5b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118ecc5d je 0x118ecc7d */
  if (C.zf) goto L_118ecc7d;
  /* 118ecc5f push esi */
  push32((uint32_t)(ESI));
  /* 118ecc60 call 0x118e73f0 */
  push32(0x118ecc65u); f_118e73f0();
  /* 118ecc65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ecc66 push eax */
  push32((uint32_t)(EAX));
  /* 118ecc67 call 0x118e553a */
  push32(0x118ecc6cu); f_118e553a();
  /* 118ecc6c pop ecx */
  ECX = (pop32());
  /* 118ecc6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ecc6f pop ecx */
  ECX = (pop32());
  /* 118ecc70 je 0x118ecc7d */
  if (C.zf) goto L_118ecc7d;
  /* 118ecc72 push esi */
  push32((uint32_t)(ESI));
  /* 118ecc73 push eax */
  push32((uint32_t)(EAX));
  /* 118ecc74 call 0x118e6f60 */
  push32(0x118ecc79u); f_118e6f60();
  /* 118ecc79 pop ecx */
  ECX = (pop32());
  /* 118ecc7a pop ecx */
  ECX = (pop32());
  /* 118ecc7b pop esi */
  ESI = (pop32());
  /* 118ecc7c ret  */
  ESPCHK(0x118ecc56u, _esp0);
  ESP += 4; return;
L_118ecc7d:;
  /* 118ecc7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ecc7f pop esi */
  ESI = (pop32());
  /* 118ecc80 ret  */
  ESPCHK(0x118ecc56u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc81 @ 0x118ecc81 (150 bytes, 54 insns) */
void f_118ecc81(void) {
  FTRACE(0x118ecc81u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecc81 mov eax, 0x118ee6f4 */
  EAX = (0x118ee6f4u);
  /* 118ecc86 call 0x118eda78 */
  push32(0x118ecc8bu); f_118eda78();
  /* 118ecc8b push ecx */
  push32((uint32_t)(ECX));
  /* 118ecc8c push ecx */
  push32((uint32_t)(ECX));
  /* 118ecc8d push ebx */
  push32((uint32_t)(EBX));
  /* 118ecc8e push esi */
  push32((uint32_t)(ESI));
  /* 118ecc8f push edi */
  push32((uint32_t)(EDI));
  /* 118ecc90 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ecc92 cmp dword ptr [ebp + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecc95 mov esi, ecx */
  ESI = (ECX);
  /* 118ecc97 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ecc99 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 118ecc9c mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 118ecc9f pop edi */
  EDI = (pop32());
  /* 118ecca0 je 0x118eccbd */
  if (C.zf) goto L_118eccbd;
  /* 118ecca2 lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 118ecca5 mov dword ptr [esi], 0x118ef998 */
  w32((uint32_t)(ESI), (0x118ef998u));
  /* 118eccab mov dword ptr [esi + 0xc], 0x118ef990 */
  w32((uint32_t)(ESI + 0xc), (0x118ef990u));
  /* 118eccb2 call 0x118ecd55 */
  push32(0x118eccb7u); f_118ecd55();
  /* 118eccb7 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 118eccba mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_118eccbd:;
  /* 118eccbd push 0x54 */
  push32((uint32_t)(0x54u));
  /* 118eccbf call 0x118ed783 */
  push32(0x118eccc4u); f_118ed783();
  /* 118eccc4 pop ecx */
  ECX = (pop32());
  /* 118eccc5 mov ecx, eax */
  ECX = (EAX);
  /* 118eccc7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118eccca cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecccc mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118ecccf je 0x118eccd8 */
  if (C.zf) goto L_118eccd8;
  /* 118eccd1 call 0x118ecf35 */
  push32(0x118eccd6u); f_118ecf35();
  /* 118eccd6 jmp 0x118eccda */
  goto L_118eccda;
L_118eccd8:;
  /* 118eccd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118eccda:;
  /* 118eccda push ebx */
  push32((uint32_t)(EBX));
  /* 118eccdb push eax */
  push32((uint32_t)(EAX));
  /* 118eccdc mov ecx, esi */
  ECX = (ESI);
  /* 118eccde mov byte ptr [ebp - 4], bl */
  w8((uint32_t)(EBP + -0x4), (BL));
  /* 118ecce1 call 0x118ece73 */
  push32(0x118ecce6u); f_118ece73();
  /* 118ecce6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ecce8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118ecceb mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118eccee mov dword ptr [eax + esi], 0x118ef98c */
  w32((uint32_t)(EAX + ESI*1), (0x118ef98cu));
  /* 118eccf5 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118eccf7 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118eccfa mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 118eccfe mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ecd00 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ecd03 mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 118ecd07 mov eax, esi */
  EAX = (ESI);
  /* 118ecd09 pop edi */
  EDI = (pop32());
  /* 118ecd0a pop esi */
  ESI = (pop32());
  /* 118ecd0b pop ebx */
  EBX = (pop32());
  /* 118ecd0c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ecd13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ecd14 ret 4 */
  ESPCHK(0x118ecc81u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cd42 @ 0x118ecd42 (19 bytes, 4 insns) */
void f_118ecd42(void) {
  FTRACE(0x118ecd42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecd42 mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 118ecd45 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ecd48 mov dword ptr [eax + ecx - 0x14], 0x118ef98c */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x118ef98cu));
  /* 118ecd50 jmp 0x118ecee8 */
  f_118ecee8(); return;
}

/* FUN_1000cd55 @ 0x118ecd55 (94 bytes, 29 insns) */
void f_118ecd55(void) {
  FTRACE(0x118ecd55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecd55 push esi */
  push32((uint32_t)(ESI));
  /* 118ecd56 mov esi, ecx */
  ESI = (ECX);
  /* 118ecd58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ecd5a or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 118ecd5e mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 118ecd61 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 118ecd64 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 118ecd67 mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 118ecd6a mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 118ecd6d mov dword ptr [esi + 0x30], eax */
  w32((uint32_t)(ESI + 0x30), (EAX));
  /* 118ecd70 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 118ecd73 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 118ecd76 mov dword ptr [esi], 0x118ef9b0 */
  w32((uint32_t)(ESI), (0x118ef9b0u));
  /* 118ecd7c push eax */
  push32((uint32_t)(EAX));
  /* 118ecd7d mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 118ecd84 mov dword ptr [esi + 0x28], 6 */
  w32((uint32_t)(ESI + 0x28), (0x6u));
  /* 118ecd8b mov byte ptr [esi + 0x2c], 0x20 */
  w8((uint32_t)(ESI + 0x2c), (0x20u));
  /* 118ecd8f call 0x118ed2db */
  push32(0x118ecd94u); f_118ed2db();
  /* 118ecd94 mov eax, dword ptr [0x119097b8] */
  EAX = (r32((uint32_t)(0x119097b8)));
  /* 118ecd99 inc dword ptr [0x119097b8] */
  { uint32_t _r=(r32((uint32_t)(0x119097b8)))+1; w32((uint32_t)(0x119097b8), (_r)); fl_inc(_r,32); }
  /* 118ecd9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ecda1 pop ecx */
  ECX = (pop32());
  /* 118ecda2 jne 0x118ecdaf */
  if (!C.zf) goto L_118ecdaf;
  /* 118ecda4 push 0x11909780 */
  push32((uint32_t)(0x11909780u));
  /* 118ecda9 call 0x118ed2db */
  push32(0x118ecdaeu); f_118ed2db();
  /* 118ecdae pop ecx */
  ECX = (pop32());
L_118ecdaf:;
  /* 118ecdaf mov eax, esi */
  EAX = (ESI);
  /* 118ecdb1 pop esi */
  ESI = (pop32());
  /* 118ecdb2 ret  */
  ESPCHK(0x118ecd55u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdb3 @ 0x118ecdb3 (28 bytes, 11 insns) */
void f_118ecdb3(void) {
  FTRACE(0x118ecdb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecdb3 push esi */
  push32((uint32_t)(ESI));
  /* 118ecdb4 mov esi, ecx */
  ESI = (ECX);
  /* 118ecdb6 call 0x118ecdcf */
  push32(0x118ecdbbu); f_118ecdcf();
  /* 118ecdbb test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 118ecdc0 je 0x118ecdc9 */
  if (C.zf) goto L_118ecdc9;
  /* 118ecdc2 push esi */
  push32((uint32_t)(ESI));
  /* 118ecdc3 call 0x118ed72d */
  push32(0x118ecdc8u); f_118ed72d();
  /* 118ecdc8 pop ecx */
  ECX = (pop32());
L_118ecdc9:;
  /* 118ecdc9 mov eax, esi */
  EAX = (ESI);
  /* 118ecdcb pop esi */
  ESI = (pop32());
  /* 118ecdcc ret 4 */
  ESPCHK(0x118ecdb3u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cdcf @ 0x118ecdcf (74 bytes, 25 insns) */
void f_118ecdcf(void) {
  FTRACE(0x118ecdcfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecdcf push esi */
  push32((uint32_t)(ESI));
  /* 118ecdd0 mov esi, ecx */
  ESI = (ECX);
  /* 118ecdd2 or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 118ecdd6 mov dword ptr [esi], 0x118ef9b0 */
  w32((uint32_t)(ESI), (0x118ef9b0u));
  /* 118ecddc dec dword ptr [0x119097b8] */
  { uint32_t _r=(r32((uint32_t)(0x119097b8)))-1; w32((uint32_t)(0x119097b8), (_r)); fl_dec(_r,32); }
  /* 118ecde2 jne 0x118ecdef */
  if (!C.zf) goto L_118ecdef;
  /* 118ecde4 push 0x11909780 */
  push32((uint32_t)(0x11909780u));
  /* 118ecde9 call 0x118ed2e6 */
  push32(0x118ecdeeu); f_118ed2e6();
  /* 118ecdee pop ecx */
  ECX = (pop32());
L_118ecdef:;
  /* 118ecdef lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 118ecdf2 push eax */
  push32((uint32_t)(EAX));
  /* 118ecdf3 call 0x118ed2e6 */
  push32(0x118ecdf8u); f_118ed2e6();
  /* 118ecdf8 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecdfc pop ecx */
  ECX = (pop32());
  /* 118ecdfd je 0x118ece0c */
  if (C.zf) goto L_118ece0c;
  /* 118ecdff mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 118ece02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118ece04 je 0x118ece0c */
  if (C.zf) goto L_118ece0c;
  /* 118ece06 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118ece08 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ece0a call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x118ece0cu);
L_118ece0c:;
  /* 118ece0c and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118ece10 mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 118ece17 pop esi */
  ESI = (pop32());
  /* 118ece18 ret  */
  ESPCHK(0x118ecdcfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce19 @ 0x118ece19 (47 bytes, 19 insns) */
void f_118ece19(void) {
  FTRACE(0x118ece19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ece19 push esi */
  push32((uint32_t)(ESI));
  /* 118ece1a mov esi, ecx */
  ESI = (ECX);
  /* 118ece1c cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ece20 je 0x118ece2f */
  if (C.zf) goto L_118ece2f;
  /* 118ece22 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 118ece25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118ece27 je 0x118ece2f */
  if (C.zf) goto L_118ece2f;
  /* 118ece29 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118ece2b push 1 */
  push32((uint32_t)(0x1u));
  /* 118ece2d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x118ece2fu);
L_118ece2f:;
  /* 118ece2f mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ece33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ece35 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 118ece38 je 0x118ece40 */
  if (C.zf) goto L_118ece40;
  /* 118ece3a and dword ptr [esi + 8], 0xfffffffb */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0xfffffffbu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 118ece3e jmp 0x118ece44 */
  goto L_118ece44;
L_118ece40:;
  /* 118ece40 or dword ptr [esi + 8], 4 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0x4u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
L_118ece44:;
  /* 118ece44 pop esi */
  ESI = (pop32());
  /* 118ece45 ret 4 */
  ESPCHK(0x118ece19u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ce73 @ 0x118ece73 (117 bytes, 41 insns) */
void f_118ece73(void) {
  FTRACE(0x118ece73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ece73 mov eax, 0x118ee725 */
  EAX = (0x118ee725u);
  /* 118ece78 call 0x118eda78 */
  push32(0x118ece7du); f_118eda78();
  /* 118ece7d push ecx */
  push32((uint32_t)(ECX));
  /* 118ece7e push ecx */
  push32((uint32_t)(ECX));
  /* 118ece7f push ebx */
  push32((uint32_t)(EBX));
  /* 118ece80 push esi */
  push32((uint32_t)(ESI));
  /* 118ece81 push edi */
  push32((uint32_t)(EDI));
  /* 118ece82 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ece84 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ece87 mov esi, ecx */
  ESI = (ECX);
  /* 118ece89 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ece8b mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 118ece8e mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 118ece91 pop edi */
  EDI = (pop32());
  /* 118ece92 je 0x118eceaf */
  if (C.zf) goto L_118eceaf;
  /* 118ece94 lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 118ece97 mov dword ptr [esi], 0x118ef9c4 */
  w32((uint32_t)(ESI), (0x118ef9c4u));
  /* 118ece9d mov dword ptr [esi + 0xc], 0x118ef9bc */
  w32((uint32_t)(ESI + 0xc), (0x118ef9bcu));
  /* 118ecea4 call 0x118ecd55 */
  push32(0x118ecea9u); f_118ecd55();
  /* 118ecea9 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 118eceac mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_118eceaf:;
  /* 118eceaf push ebx */
  push32((uint32_t)(EBX));
  /* 118eceb0 mov ecx, esi */
  ECX = (ESI);
  /* 118eceb2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118eceb5 call 0x118ed332 */
  push32(0x118ecebau); f_118ed332();
  /* 118eceba push ebx */
  push32((uint32_t)(EBX));
  /* 118ecebb lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 118ecebe push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ecec1 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 118ecec4 call 0x118ed407 */
  push32(0x118ecec9u); f_118ed407();
  /* 118ecec9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ececb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118ecece pop edi */
  EDI = (pop32());
  /* 118ececf mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118eced2 mov dword ptr [eax + esi], 0x118ef9b8 */
  w32((uint32_t)(EAX + ESI*1), (0x118ef9b8u));
  /* 118eced9 mov eax, esi */
  EAX = (ESI);
  /* 118ecedb pop esi */
  ESI = (pop32());
  /* 118ecedc pop ebx */
  EBX = (pop32());
  /* 118ecedd mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ecee4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ecee5 ret 8 */
  ESPCHK(0x118ece73u, _esp0);
  ESP += 12; return;
}

/* FUN_1000cee8 @ 0x118ecee8 (77 bytes, 24 insns) */
void f_118ecee8(void) {
  FTRACE(0x118ecee8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecee8 mov eax, 0x118ee73b */
  EAX = (0x118ee73bu);
  /* 118eceed call 0x118eda78 */
  push32(0x118ecef2u); f_118eda78();
  /* 118ecef2 push ecx */
  push32((uint32_t)(ECX));
  /* 118ecef3 mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 118ecef6 push esi */
  push32((uint32_t)(ESI));
  /* 118ecef7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 118ecefa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ecefd mov dword ptr [eax + ecx - 0x14], 0x118ef9b8 */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x118ef9b8u));
  /* 118ecf05 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ecf09 lea esi, [ecx - 8] */
  ESI = ((uint32_t)(ECX + -0x8));
  /* 118ecf0c add ecx, -0x14 */
  { uint32_t _a=(ECX),_b=(0xffffffecu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ecf0f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ecf11 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ecf13 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 118ecf15 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ecf18 call 0x118ed46c */
  push32(0x118ecf1du); f_118ed46c();
  /* 118ecf1d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ecf21 mov ecx, esi */
  ECX = (ESI);
  /* 118ecf23 call 0x118ed3a8 */
  push32(0x118ecf28u); f_118ed3a8();
  /* 118ecf28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118ecf2b pop esi */
  ESI = (pop32());
  /* 118ecf2c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ecf33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ecf34 ret  */
  ESPCHK(0x118ecee8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf35 @ 0x118ecf35 (26 bytes, 9 insns) */
void f_118ecf35(void) {
  FTRACE(0x118ecf35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecf35 push esi */
  push32((uint32_t)(ESI));
  /* 118ecf36 mov esi, ecx */
  ESI = (ECX);
  /* 118ecf38 call 0x118ed47b */
  push32(0x118ecf3du); f_118ed47b();
  /* 118ecf3d and dword ptr [esi + 0x50], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x50)))&(0x0u); w32((uint32_t)(ESI + 0x50), (_r)); fl_logic(_r,32); }
  /* 118ecf41 or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 118ecf45 mov dword ptr [esi], 0x118ef9e8 */
  w32((uint32_t)(ESI), (0x118ef9e8u));
  /* 118ecf4b mov eax, esi */
  EAX = (ESI);
  /* 118ecf4d pop esi */
  ESI = (pop32());
  /* 118ecf4e ret  */
  ESPCHK(0x118ecf35u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf4f @ 0x118ecf4f (28 bytes, 11 insns) */
void f_118ecf4f(void) {
  FTRACE(0x118ecf4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecf4f push esi */
  push32((uint32_t)(ESI));
  /* 118ecf50 mov esi, ecx */
  ESI = (ECX);
  /* 118ecf52 call 0x118ecf6b */
  push32(0x118ecf57u); f_118ecf6b();
  /* 118ecf57 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 118ecf5c je 0x118ecf65 */
  if (C.zf) goto L_118ecf65;
  /* 118ecf5e push esi */
  push32((uint32_t)(ESI));
  /* 118ecf5f call 0x118ed72d */
  push32(0x118ecf64u); f_118ed72d();
  /* 118ecf64 pop ecx */
  ECX = (pop32());
L_118ecf65:;
  /* 118ecf65 mov eax, esi */
  EAX = (ESI);
  /* 118ecf67 pop esi */
  ESI = (pop32());
  /* 118ecf68 ret 4 */
  ESPCHK(0x118ecf4fu, _esp0);
  ESP += 8; return;
}

/* FUN_1000cf6b @ 0x118ecf6b (87 bytes, 28 insns) */
void f_118ecf6b(void) {
  FTRACE(0x118ecf6bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecf6b mov eax, 0x118ee750 */
  EAX = (0x118ee750u);
  /* 118ecf70 call 0x118eda78 */
  push32(0x118ecf75u); f_118eda78();
  /* 118ecf75 push ecx */
  push32((uint32_t)(ECX));
  /* 118ecf76 push esi */
  push32((uint32_t)(ESI));
  /* 118ecf77 mov esi, ecx */
  ESI = (ECX);
  /* 118ecf79 mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 118ecf7c mov dword ptr [esi], 0x118ef9e8 */
  w32((uint32_t)(ESI), (0x118ef9e8u));
  /* 118ecf82 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ecf86 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecf8a jge 0x118ecf96 */
  if ((C.sf==C.of)) goto L_118ecf96;
  /* 118ecf8c lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118ecf8f push eax */
  push32((uint32_t)(EAX));
  /* 118ecf90 call 0x118ed2f1 */
  push32(0x118ecf95u); f_118ed2f1();
  /* 118ecf95 pop ecx */
  ECX = (pop32());
L_118ecf96:;
  /* 118ecf96 cmp dword ptr [esi + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecf9a mov ecx, esi */
  ECX = (ESI);
  /* 118ecf9c je 0x118ecfa5 */
  if (C.zf) goto L_118ecfa5;
  /* 118ecf9e call 0x118ecfc2 */
  push32(0x118ecfa3u); f_118ecfc2();
  /* 118ecfa3 jmp 0x118ecfaa */
  goto L_118ecfaa;
L_118ecfa5:;
  /* 118ecfa5 call 0x118ed19c */
  push32(0x118ecfaau); f_118ed19c();
L_118ecfaa:;
  /* 118ecfaa or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ecfae mov ecx, esi */
  ECX = (ESI);
  /* 118ecfb0 call 0x118ed4d6 */
  push32(0x118ecfb5u); f_118ed4d6();
  /* 118ecfb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118ecfb8 pop esi */
  ESI = (pop32());
  /* 118ecfb9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ecfc0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ecfc1 ret  */
  ESPCHK(0x118ecf6bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfc2 @ 0x118ecfc2 (99 bytes, 41 insns) */
void f_118ecfc2(void) {
  FTRACE(0x118ecfc2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ecfc2 push esi */
  push32((uint32_t)(ESI));
  /* 118ecfc3 mov esi, ecx */
  ESI = (ECX);
  /* 118ecfc5 push edi */
  push32((uint32_t)(EDI));
  /* 118ecfc6 cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecfca je 0x118ed020 */
  if (C.zf) goto L_118ed020;
  /* 118ecfcc cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecfd0 jge 0x118ecfdc */
  if ((C.sf==C.of)) goto L_118ecfdc;
  /* 118ecfd2 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118ecfd5 push eax */
  push32((uint32_t)(EAX));
  /* 118ecfd6 call 0x118ed2f1 */
  push32(0x118ecfdbu); f_118ed2f1();
  /* 118ecfdb pop ecx */
  ECX = (pop32());
L_118ecfdc:;
  /* 118ecfdc mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ecfde mov ecx, esi */
  ECX = (ESI);
  /* 118ecfe0 call dword ptr [eax + 4] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x4))), 0x118ecfe3u);
  /* 118ecfe3 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 118ecfe6 mov edi, eax */
  EDI = (EAX);
  /* 118ecfe8 call 0x118ec5f1 */
  push32(0x118ecfedu); f_118ec5f1();
  /* 118ecfed cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecff0 pop ecx */
  ECX = (pop32());
  /* 118ecff1 je 0x118ed010 */
  if (C.zf) goto L_118ed010;
  /* 118ecff3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ecff6 je 0x118ed010 */
  if (C.zf) goto L_118ed010;
  /* 118ecff8 or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 118ecffc cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed000 jge 0x118ed00c */
  if ((C.sf==C.of)) goto L_118ed00c;
  /* 118ed002 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118ed005 push eax */
  push32((uint32_t)(EAX));
  /* 118ed006 call 0x118ed2fc */
  push32(0x118ed00bu); f_118ed2fc();
  /* 118ed00b pop ecx */
  ECX = (pop32());
L_118ed00c:;
  /* 118ed00c mov eax, esi */
  EAX = (ESI);
  /* 118ed00e jmp 0x118ed022 */
  goto L_118ed022;
L_118ed010:;
  /* 118ed010 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed014 jge 0x118ed020 */
  if ((C.sf==C.of)) goto L_118ed020;
  /* 118ed016 add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed019 push esi */
  push32((uint32_t)(ESI));
  /* 118ed01a call 0x118ed2fc */
  push32(0x118ed01fu); f_118ed2fc();
  /* 118ed01f pop ecx */
  ECX = (pop32());
L_118ed020:;
  /* 118ed020 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ed022:;
  /* 118ed022 pop edi */
  EDI = (pop32());
  /* 118ed023 pop esi */
  ESI = (pop32());
  /* 118ed024 ret  */
  ESPCHK(0x118ecfc2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d025 @ 0x118ed025 (113 bytes, 44 insns) */
void f_118ed025(void) {
  FTRACE(0x118ed025u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed025 push esi */
  push32((uint32_t)(ESI));
  /* 118ed026 push edi */
  push32((uint32_t)(EDI));
  /* 118ed027 mov esi, ecx */
  ESI = (ECX);
  /* 118ed029 call 0x118ed63e */
  push32(0x118ed02eu); f_118ed63e();
  /* 118ed02e or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118ed031 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed033 je 0x118ed092 */
  if (C.zf) goto L_118ed092;
  /* 118ed035 mov ecx, esi */
  ECX = (ESI);
  /* 118ed037 call 0x118ed19c */
  push32(0x118ed03cu); f_118ed19c();
  /* 118ed03c cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed03e je 0x118ed092 */
  if (C.zf) goto L_118ed092;
  /* 118ed040 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 118ed043 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118ed045 jne 0x118ed056 */
  if (!C.zf) goto L_118ed056;
  /* 118ed047 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118ed04a mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 118ed04d mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 118ed050 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 118ed053 mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
L_118ed056:;
  /* 118ed056 cmp dword ptr [esp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed05a je 0x118ed073 */
  if (C.zf) goto L_118ed073;
  /* 118ed05c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118ed05e jne 0x118ed07b */
  if (!C.zf) goto L_118ed07b;
  /* 118ed060 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 118ed063 cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed066 jae 0x118ed07b */
  if (!C.cf) goto L_118ed07b;
  /* 118ed068 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118ed06c mov ecx, esi */
  ECX = (ESI);
  /* 118ed06e call 0x118ed096 */
  push32(0x118ed073u); f_118ed096();
L_118ed073:;
  /* 118ed073 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed075 pop eax */
  EAX = (pop32());
L_118ed076:;
  /* 118ed076 pop edi */
  EDI = (pop32());
  /* 118ed077 pop esi */
  ESI = (pop32());
  /* 118ed078 ret 4 */
  ESPCHK(0x118ed025u, _esp0);
  ESP += 8; return;
L_118ed07b:;
  /* 118ed07b lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 118ed07f push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed081 push eax */
  push32((uint32_t)(EAX));
  /* 118ed082 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 118ed085 call 0x118e8e78 */
  push32(0x118ed08au); f_118e8e78();
  /* 118ed08a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed08d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed090 je 0x118ed073 */
  if (C.zf) goto L_118ed073;
L_118ed092:;
  /* 118ed092 mov eax, edi */
  EAX = (EDI);
  /* 118ed094 jmp 0x118ed076 */
  goto L_118ed076;
}

/* FUN_1000d096 @ 0x118ed096 (34 bytes, 12 insns) */
void f_118ed096(void) {
  FTRACE(0x118ed096u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed096 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118ed099 cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed09c jae 0x118ed0ac */
  if (!C.cf) goto L_118ed0ac;
  /* 118ed09e mov dl, byte ptr [esp + 4] */
  DL = (r8((uint32_t)(ESP + 0x4)));
  /* 118ed0a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118ed0a4 inc dword ptr [ecx + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x1c)))+1; w32((uint32_t)(ECX + 0x1c), (_r)); fl_inc(_r,32); }
  /* 118ed0a7 movzx eax, dl */
  EAX = ((uint32_t)(DL));
  /* 118ed0aa jmp 0x118ed0b5 */
  goto L_118ed0b5;
L_118ed0ac:;
  /* 118ed0ac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118ed0ae push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118ed0b2 call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x118ed0b5u);
L_118ed0b5:;
  /* 118ed0b5 ret 4 */
  ESPCHK(0x118ed096u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d0b8 @ 0x118ed0b8 (144 bytes, 60 insns) */
void f_118ed0b8(void) {
  FTRACE(0x118ed0b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed0b8 push ebp */
  push32((uint32_t)(EBP));
  /* 118ed0b9 mov ebp, esp */
  EBP = (ESP);
  /* 118ed0bb push ecx */
  push32((uint32_t)(ECX));
  /* 118ed0bc push esi */
  push32((uint32_t)(ESI));
  /* 118ed0bd push edi */
  push32((uint32_t)(EDI));
  /* 118ed0be mov esi, ecx */
  ESI = (ECX);
  /* 118ed0c0 call 0x118ed148 */
  push32(0x118ed0c5u); f_118ed148();
  /* 118ed0c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed0c7 je 0x118ed0d1 */
  if (C.zf) goto L_118ed0d1;
  /* 118ed0c9 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 118ed0cc movzx eax, byte ptr [eax] */
  EAX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 118ed0cf jmp 0x118ed144 */
  goto L_118ed144;
L_118ed0d1:;
  /* 118ed0d1 mov ecx, esi */
  ECX = (ESI);
  /* 118ed0d3 call 0x118ed63e */
  push32(0x118ed0d8u); f_118ed63e();
  /* 118ed0d8 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 118ed0db cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed0dd je 0x118ed12c */
  if (C.zf) goto L_118ed12c;
  /* 118ed0df mov ecx, esi */
  ECX = (ESI);
  /* 118ed0e1 call 0x118ed19c */
  push32(0x118ed0e6u); f_118ed19c();
  /* 118ed0e6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed0e8 je 0x118ed12c */
  if (C.zf) goto L_118ed12c;
  /* 118ed0ea cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed0ee je 0x118ed10b */
  if (C.zf) goto L_118ed10b;
  /* 118ed0f0 lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 118ed0f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed0f5 push eax */
  push32((uint32_t)(EAX));
  /* 118ed0f6 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 118ed0f9 call 0x118eda97 */
  push32(0x118ed0feu); f_118eda97();
  /* 118ed0fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed103 jle 0x118ed12c */
  if ((C.zf||C.sf!=C.of)) goto L_118ed12c;
  /* 118ed105 movzx eax, byte ptr [ebp - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x1))));
  /* 118ed109 jmp 0x118ed144 */
  goto L_118ed144;
L_118ed10b:;
  /* 118ed10b mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 118ed10e mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 118ed111 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed113 jbe 0x118ed119 */
  if ((C.cf||C.zf)) goto L_118ed119;
  /* 118ed115 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed117 jmp 0x118ed11b */
  goto L_118ed11b;
L_118ed119:;
  /* 118ed119 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ed11b:;
  /* 118ed11b push eax */
  push32((uint32_t)(EAX));
  /* 118ed11c push ecx */
  push32((uint32_t)(ECX));
  /* 118ed11d push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 118ed120 call 0x118eda97 */
  push32(0x118ed125u); f_118eda97();
  /* 118ed125 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed12a jg 0x118ed130 */
  if ((!C.zf&&C.sf==C.of)) goto L_118ed130;
L_118ed12c:;
  /* 118ed12c mov eax, edi */
  EAX = (EDI);
  /* 118ed12e jmp 0x118ed144 */
  goto L_118ed144;
L_118ed130:;
  /* 118ed130 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 118ed133 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 118ed136 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed138 mov dword ptr [esi + 0x24], ecx */
  w32((uint32_t)(ESI + 0x24), (ECX));
  /* 118ed13b mov dword ptr [esi + 0x28], ecx */
  w32((uint32_t)(ESI + 0x28), (ECX));
  /* 118ed13e mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 118ed141 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
L_118ed144:;
  /* 118ed144 pop edi */
  EDI = (pop32());
  /* 118ed145 pop esi */
  ESI = (pop32());
  /* 118ed146 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ed147 ret  */
  ESPCHK(0x118ed0b8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d148 @ 0x118ed148 (16 bytes, 8 insns) */
void f_118ed148(void) {
  FTRACE(0x118ed148u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed148 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 118ed14b mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 118ed14e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed150 jae 0x118ed155 */
  if (!C.cf) goto L_118ed155;
  /* 118ed152 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed154 ret  */
  ESPCHK(0x118ed148u, _esp0);
  ESP += 4; return;
L_118ed155:;
  /* 118ed155 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ed157 ret  */
  ESPCHK(0x118ed148u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d19c @ 0x118ed19c (219 bytes, 90 insns) */
void f_118ed19c(void) {
  FTRACE(0x118ed19cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed19c push ebx */
  push32((uint32_t)(EBX));
  /* 118ed19d push esi */
  push32((uint32_t)(ESI));
  /* 118ed19e mov esi, ecx */
  ESI = (ECX);
  /* 118ed1a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ed1a3 push edi */
  push32((uint32_t)(EDI));
  /* 118ed1a4 mov ecx, dword ptr [esi + 0x4c] */
  ECX = (r32((uint32_t)(ESI + 0x4c)));
  /* 118ed1a7 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed1a9 je 0x118ed273 */
  if (C.zf) goto L_118ed273;
  /* 118ed1af xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118ed1b1 cmp dword ptr [esi + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed1b4 jne 0x118ed271 */
  if (!C.zf) goto L_118ed271;
  /* 118ed1ba mov edi, dword ptr [esi + 0x1c] */
  EDI = (r32((uint32_t)(ESI + 0x1c)));
  /* 118ed1bd mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 118ed1c0 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed1c2 jb 0x118ed1c8 */
  if (C.cf) goto L_118ed1c8;
  /* 118ed1c4 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed1c6 jmp 0x118ed1ca */
  goto L_118ed1ca;
L_118ed1c8:;
  /* 118ed1c8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_118ed1ca:;
  /* 118ed1ca cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed1cc je 0x118ed1fd */
  if (C.zf) goto L_118ed1fd;
  /* 118ed1ce push edi */
  push32((uint32_t)(EDI));
  /* 118ed1cf push eax */
  push32((uint32_t)(EAX));
  /* 118ed1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed1d1 call 0x118e8e78 */
  push32(0x118ed1d6u); f_118e8e78();
  /* 118ed1d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed1d9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed1db je 0x118ed1fd */
  if (C.zf) goto L_118ed1fd;
  /* 118ed1dd cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed1df jle 0x118ed25d */
  if ((C.zf||C.sf!=C.of)) goto L_118ed25d;
  /* 118ed1e1 cmp dword ptr [esi + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed1e4 je 0x118ed1e9 */
  if (C.zf) goto L_118ed1e9;
  /* 118ed1e6 sub dword ptr [esi + 0x1c], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x1c), (_r)); fl_sub(_a,_b,_r,32); }
L_118ed1e9:;
  /* 118ed1e9 mov esi, dword ptr [esi + 0x18] */
  ESI = (r32((uint32_t)(ESI + 0x18)));
  /* 118ed1ec sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed1ee add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed1f0 push edi */
  push32((uint32_t)(EDI));
  /* 118ed1f1 push eax */
  push32((uint32_t)(EAX));
  /* 118ed1f2 push esi */
  push32((uint32_t)(ESI));
  /* 118ed1f3 call 0x118e70b0 */
  push32(0x118ed1f8u); f_118e70b0();
  /* 118ed1f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed1fb jmp 0x118ed25d */
  goto L_118ed25d;
L_118ed1fd:;
  /* 118ed1fd mov ecx, esi */
  ECX = (ESI);
  /* 118ed1ff mov dword ptr [esi + 0x18], ebx */
  w32((uint32_t)(ESI + 0x18), (EBX));
  /* 118ed202 mov dword ptr [esi + 0x1c], ebx */
  w32((uint32_t)(ESI + 0x1c), (EBX));
  /* 118ed205 mov dword ptr [esi + 0x20], ebx */
  w32((uint32_t)(ESI + 0x20), (EBX));
  /* 118ed208 call 0x118ed148 */
  push32(0x118ed20du); f_118ed148();
  /* 118ed20d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed20f jle 0x118ed264 */
  if ((C.zf||C.sf!=C.of)) goto L_118ed264;
  /* 118ed211 mov edx, dword ptr [esi + 0x4c] */
  EDX = (r32((uint32_t)(ESI + 0x4c)));
  /* 118ed214 mov edi, edx */
  EDI = (EDX);
  /* 118ed216 mov ecx, edx */
  ECX = (EDX);
  /* 118ed218 sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 118ed21b and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 118ed21e mov edi, dword ptr [edi*4 + 0x1190aa40] */
  EDI = (r32((uint32_t)(EDI*4 + 0x1190aa40)));
  /* 118ed225 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 118ed228 mov bl, byte ptr [edi + ecx*4 + 4] */
  BL = (r8((uint32_t)(EDI + ECX*4 + 0x4)));
  /* 118ed22c test bl, 0x80 */
  { uint32_t _r=(BL)&(0x80u); fl_logic(_r,8); }
  /* 118ed22f je 0x118ed24a */
  if (C.zf) goto L_118ed24a;
  /* 118ed231 mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 118ed234 mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
L_118ed237:;
  /* 118ed237 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed239 jae 0x118ed244 */
  if (!C.cf) goto L_118ed244;
  /* 118ed23b cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118ed23e jne 0x118ed241 */
  if (!C.zf) goto L_118ed241;
  /* 118ed240 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118ed241:;
  /* 118ed241 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118ed242 jmp 0x118ed237 */
  goto L_118ed237;
L_118ed244:;
  /* 118ed244 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 118ed247 je 0x118ed24a */
  if (C.zf) goto L_118ed24a;
  /* 118ed249 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_118ed24a:;
  /* 118ed24a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ed24c push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed24e push eax */
  push32((uint32_t)(EAX));
  /* 118ed24f push edx */
  push32((uint32_t)(EDX));
  /* 118ed250 call 0x118e8da0 */
  push32(0x118ed255u); f_118e8da0();
  /* 118ed255 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed258 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed25b jne 0x118ed262 */
  if (!C.zf) goto L_118ed262;
L_118ed25d:;
  /* 118ed25d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ed260 jmp 0x118ed273 */
  goto L_118ed273;
L_118ed262:;
  /* 118ed262 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_118ed264:;
  /* 118ed264 or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118ed268 mov dword ptr [esi + 0x24], ebx */
  w32((uint32_t)(ESI + 0x24), (EBX));
  /* 118ed26b mov dword ptr [esi + 0x28], ebx */
  w32((uint32_t)(ESI + 0x28), (EBX));
  /* 118ed26e mov dword ptr [esi + 0x2c], ebx */
  w32((uint32_t)(ESI + 0x2c), (EBX));
L_118ed271:;
  /* 118ed271 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118ed273:;
  /* 118ed273 pop edi */
  EDI = (pop32());
  /* 118ed274 pop esi */
  ESI = (pop32());
  /* 118ed275 pop ebx */
  EBX = (pop32());
  /* 118ed276 ret  */
  ESPCHK(0x118ed19cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d277 @ 0x118ed277 (100 bytes, 41 insns) */
void f_118ed277(void) {
  FTRACE(0x118ed277u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed277 push esi */
  push32((uint32_t)(ESI));
  /* 118ed278 mov esi, ecx */
  ESI = (ECX);
  /* 118ed27a cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed27e je 0x118ed28a */
  if (C.zf) goto L_118ed28a;
  /* 118ed280 cmp dword ptr [esi + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed284 je 0x118ed28a */
  if (C.zf) goto L_118ed28a;
  /* 118ed286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ed288 jmp 0x118ed2d7 */
  goto L_118ed2d7;
L_118ed28a:;
  /* 118ed28a push ebx */
  push32((uint32_t)(EBX));
  /* 118ed28b push edi */
  push32((uint32_t)(EDI));
  /* 118ed28c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 118ed290 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118ed292 je 0x118ed2cc */
  if (C.zf) goto L_118ed2cc;
  /* 118ed294 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 118ed298 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118ed29a jle 0x118ed2cc */
  if ((C.zf||C.sf!=C.of)) goto L_118ed2cc;
  /* 118ed29c cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed2a0 jge 0x118ed2ac */
  if ((C.sf==C.of)) goto L_118ed2ac;
  /* 118ed2a2 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118ed2a5 push eax */
  push32((uint32_t)(EAX));
  /* 118ed2a6 call 0x118ed2f1 */
  push32(0x118ed2abu); f_118ed2f1();
  /* 118ed2ab pop ecx */
  ECX = (pop32());
L_118ed2ac:;
  /* 118ed2ac lea eax, [edi + ebx] */
  EAX = ((uint32_t)(EDI + EBX*1));
  /* 118ed2af push 0 */
  push32((uint32_t)(0x0u));
  /* 118ed2b1 push eax */
  push32((uint32_t)(EAX));
  /* 118ed2b2 push edi */
  push32((uint32_t)(EDI));
  /* 118ed2b3 mov ecx, esi */
  ECX = (ESI);
  /* 118ed2b5 call 0x118ed689 */
  push32(0x118ed2bau); f_118ed689();
  /* 118ed2ba cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed2be jge 0x118ed2d3 */
  if ((C.sf==C.of)) goto L_118ed2d3;
  /* 118ed2c0 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118ed2c3 push eax */
  push32((uint32_t)(EAX));
  /* 118ed2c4 call 0x118ed2fc */
  push32(0x118ed2c9u); f_118ed2fc();
  /* 118ed2c9 pop ecx */
  ECX = (pop32());
  /* 118ed2ca jmp 0x118ed2d3 */
  goto L_118ed2d3;
L_118ed2cc:;
  /* 118ed2cc mov dword ptr [esi + 8], 1 */
  w32((uint32_t)(ESI + 0x8), (0x1u));
L_118ed2d3:;
  /* 118ed2d3 pop edi */
  EDI = (pop32());
  /* 118ed2d4 mov eax, esi */
  EAX = (ESI);
  /* 118ed2d6 pop ebx */
  EBX = (pop32());
L_118ed2d7:;
  /* 118ed2d7 pop esi */
  ESI = (pop32());
  /* 118ed2d8 ret 8 */
  ESPCHK(0x118ed277u, _esp0);
  ESP += 12; return;
}

/* FUN_1000d2db @ 0x118ed2db (11 bytes, 3 insns) */
void f_118ed2db(void) {
  FTRACE(0x118ed2dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed2db push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118ed2df call dword ptr [0x118ef070] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef070))), 0x118ed2e5u);
  /* 118ed2e5 ret  */
  ESPCHK(0x118ed2dbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e6 @ 0x118ed2e6 (11 bytes, 3 insns) */
void f_118ed2e6(void) {
  FTRACE(0x118ed2e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed2e6 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118ed2ea call dword ptr [0x118ef0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0b0))), 0x118ed2f0u);
  /* 118ed2f0 ret  */
  ESPCHK(0x118ed2e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2f1 @ 0x118ed2f1 (11 bytes, 3 insns) */
void f_118ed2f1(void) {
  FTRACE(0x118ed2f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed2f1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118ed2f5 call dword ptr [0x118ef06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef06c))), 0x118ed2fbu);
  /* 118ed2fb ret  */
  ESPCHK(0x118ed2f1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2fc @ 0x118ed2fc (11 bytes, 3 insns) */
void f_118ed2fc(void) {
  FTRACE(0x118ed2fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed2fc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118ed300 call dword ptr [0x118ef068] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef068))), 0x118ed306u);
  /* 118ed306 ret  */
  ESPCHK(0x118ed2fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d332 @ 0x118ed332 (118 bytes, 38 insns) */
void f_118ed332(void) {
  FTRACE(0x118ed332u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed332 mov eax, 0x118ee776 */
  EAX = (0x118ee776u);
  /* 118ed337 call 0x118eda78 */
  push32(0x118ed33cu); f_118eda78();
  /* 118ed33c push ecx */
  push32((uint32_t)(ECX));
  /* 118ed33d push ecx */
  push32((uint32_t)(ECX));
  /* 118ed33e push esi */
  push32((uint32_t)(ESI));
  /* 118ed33f push edi */
  push32((uint32_t)(EDI));
  /* 118ed340 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 118ed342 mov esi, ecx */
  ESI = (ECX);
  /* 118ed344 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed347 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 118ed34a mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 118ed34d je 0x118ed367 */
  if (C.zf) goto L_118ed367;
  /* 118ed34f lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 118ed352 mov dword ptr [esi], 0x118efa1c */
  w32((uint32_t)(ESI), (0x118efa1cu));
  /* 118ed358 call 0x118ecd55 */
  push32(0x118ed35du); f_118ecd55();
  /* 118ed35d mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 118ed364 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
L_118ed367:;
  /* 118ed367 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed369 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ed36c mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ed36f mov dword ptr [eax + esi], 0x118efa18 */
  w32((uint32_t)(EAX + ESI*1), (0x118efa18u));
  /* 118ed376 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed378 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ed37b add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed37d call 0x118ece19 */
  push32(0x118ed382u); f_118ece19();
  /* 118ed382 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed384 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118ed387 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ed38a or dword ptr [eax + esi + 0x24], 1 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1 + 0x24)))|(0x1u); w32((uint32_t)(EAX + ESI*1 + 0x24), (_r)); fl_logic(_r,32); }
  /* 118ed38f mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 118ed392 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 118ed395 lea eax, [eax + esi + 0x24] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x24));
  /* 118ed399 pop edi */
  EDI = (pop32());
  /* 118ed39a mov eax, esi */
  EAX = (ESI);
  /* 118ed39c pop esi */
  ESI = (pop32());
  /* 118ed39d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ed3a4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ed3a5 ret 8 */
  ESPCHK(0x118ed332u, _esp0);
  ESP += 12; return;
}

/* FUN_1000d3a8 @ 0x118ed3a8 (15 bytes, 4 insns) */
void f_118ed3a8(void) {
  FTRACE(0x118ed3a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed3a8 mov eax, dword ptr [ecx - 0xc] */
  EAX = (r32((uint32_t)(ECX + -0xc)));
  /* 118ed3ab mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ed3ae mov dword ptr [eax + ecx - 0xc], 0x118efa18 */
  w32((uint32_t)(EAX + ECX*1 + -0xc), (0x118efa18u));
  /* 118ed3b6 ret  */
  ESPCHK(0x118ed3a8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3b7 @ 0x118ed3b7 (37 bytes, 14 insns) */
void f_118ed3b7(void) {
  FTRACE(0x118ed3b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed3b7 mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 118ed3ba cmp dword ptr [ecx + 0x24], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed3bd jae 0x118ed3ce */
  if (!C.cf) goto L_118ed3ce;
  /* 118ed3bf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ed3c0 mov dword ptr [ecx + 0x28], eax */
  w32((uint32_t)(ECX + 0x28), (EAX));
  /* 118ed3c3 mov cl, byte ptr [esp + 4] */
  CL = (r8((uint32_t)(ESP + 0x4)));
  /* 118ed3c7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 118ed3c9 movsx eax, cl */
  EAX = ((uint32_t)(int32_t)(int8_t)(CL));
  /* 118ed3cc jmp 0x118ed3d9 */
  goto L_118ed3d9;
L_118ed3ce:;
  /* 118ed3ce movsx edx, byte ptr [esp + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESP + 0x4))));
  /* 118ed3d3 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118ed3d5 push edx */
  push32((uint32_t)(EDX));
  /* 118ed3d6 call dword ptr [eax + 0x24] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x24))), 0x118ed3d9u);
L_118ed3d9:;
  /* 118ed3d9 ret 4 */
  ESPCHK(0x118ed3b7u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d407 @ 0x118ed407 (101 bytes, 30 insns) */
void f_118ed407(void) {
  FTRACE(0x118ed407u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed407 mov eax, 0x118ee79a */
  EAX = (0x118ee79au);
  /* 118ed40c call 0x118eda78 */
  push32(0x118ed411u); f_118eda78();
  /* 118ed411 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed412 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed413 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 118ed417 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed41b push esi */
  push32((uint32_t)(ESI));
  /* 118ed41c mov esi, ecx */
  ESI = (ECX);
  /* 118ed41e mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 118ed421 je 0x118ed43c */
  if (C.zf) goto L_118ed43c;
  /* 118ed423 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 118ed426 mov dword ptr [esi], 0x118efa2c */
  w32((uint32_t)(ESI), (0x118efa2cu));
  /* 118ed42c call 0x118ecd55 */
  push32(0x118ed431u); f_118ecd55();
  /* 118ed431 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 118ed438 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_118ed43c:;
  /* 118ed43c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed43e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ed441 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ed444 mov dword ptr [eax + esi], 0x118efa28 */
  w32((uint32_t)(EAX + ESI*1), (0x118efa28u));
  /* 118ed44b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed44d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ed450 add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed452 call 0x118ece19 */
  push32(0x118ed457u); f_118ece19();
  /* 118ed457 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118ed45a and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 118ed45e mov eax, esi */
  EAX = (ESI);
  /* 118ed460 pop esi */
  ESI = (pop32());
  /* 118ed461 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 118ed468 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ed469 ret 8 */
  ESPCHK(0x118ed407u, _esp0);
  ESP += 12; return;
}

/* FUN_1000d46c @ 0x118ed46c (15 bytes, 4 insns) */
void f_118ed46c(void) {
  FTRACE(0x118ed46cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed46c mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 118ed46f mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ed472 mov dword ptr [eax + ecx - 8], 0x118efa28 */
  w32((uint32_t)(EAX + ECX*1 + -0x8), (0x118efa28u));
  /* 118ed47a ret  */
  ESPCHK(0x118ed46cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d47b @ 0x118ed47b (63 bytes, 23 insns) */
void f_118ed47b(void) {
  FTRACE(0x118ed47bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed47b push esi */
  push32((uint32_t)(ESI));
  /* 118ed47c mov esi, ecx */
  ESI = (ECX);
  /* 118ed47e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ed480 or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 118ed484 or dword ptr [esi + 0x30], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x30)))|(0xffffffffu); w32((uint32_t)(ESI + 0x30), (_r)); fl_logic(_r,32); }
  /* 118ed488 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 118ed48b mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 118ed48e mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 118ed491 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 118ed494 mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 118ed497 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 118ed49a mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 118ed49d mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 118ed4a0 mov dword ptr [esi + 0x28], eax */
  w32((uint32_t)(ESI + 0x28), (EAX));
  /* 118ed4a3 mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 118ed4a6 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118ed4a9 mov dword ptr [esi], 0x118efa38 */
  w32((uint32_t)(ESI), (0x118efa38u));
  /* 118ed4af push eax */
  push32((uint32_t)(EAX));
  /* 118ed4b0 call 0x118ed2db */
  push32(0x118ed4b5u); f_118ed2db();
  /* 118ed4b5 pop ecx */
  ECX = (pop32());
  /* 118ed4b6 mov eax, esi */
  EAX = (ESI);
  /* 118ed4b8 pop esi */
  ESI = (pop32());
  /* 118ed4b9 ret  */
  ESPCHK(0x118ed47bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4ba @ 0x118ed4ba (28 bytes, 11 insns) */
void f_118ed4ba(void) {
  FTRACE(0x118ed4bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed4ba push esi */
  push32((uint32_t)(ESI));
  /* 118ed4bb mov esi, ecx */
  ESI = (ECX);
  /* 118ed4bd call 0x118ed4d6 */
  push32(0x118ed4c2u); f_118ed4d6();
  /* 118ed4c2 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 118ed4c7 je 0x118ed4d0 */
  if (C.zf) goto L_118ed4d0;
  /* 118ed4c9 push esi */
  push32((uint32_t)(ESI));
  /* 118ed4ca call 0x118ed72d */
  push32(0x118ed4cfu); f_118ed72d();
  /* 118ed4cf pop ecx */
  ECX = (pop32());
L_118ed4d0:;
  /* 118ed4d0 mov eax, esi */
  EAX = (ESI);
  /* 118ed4d2 pop esi */
  ESI = (pop32());
  /* 118ed4d3 ret 4 */
  ESPCHK(0x118ed4bau, _esp0);
  ESP += 8; return;
}

/* FUN_1000d4d6 @ 0x118ed4d6 (48 bytes, 19 insns) */
void f_118ed4d6(void) {
  FTRACE(0x118ed4d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed4d6 push esi */
  push32((uint32_t)(ESI));
  /* 118ed4d7 mov esi, ecx */
  ESI = (ECX);
  /* 118ed4d9 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118ed4dc mov dword ptr [esi], 0x118efa38 */
  w32((uint32_t)(ESI), (0x118efa38u));
  /* 118ed4e2 push eax */
  push32((uint32_t)(EAX));
  /* 118ed4e3 call 0x118ed2e6 */
  push32(0x118ed4e8u); f_118ed2e6();
  /* 118ed4e8 pop ecx */
  ECX = (pop32());
  /* 118ed4e9 mov ecx, esi */
  ECX = (ESI);
  /* 118ed4eb call 0x118ed627 */
  push32(0x118ed4f0u); f_118ed627();
  /* 118ed4f0 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed4f4 je 0x118ed504 */
  if (C.zf) goto L_118ed504;
  /* 118ed4f6 mov esi, dword ptr [esi + 0x10] */
  ESI = (r32((uint32_t)(ESI + 0x10)));
  /* 118ed4f9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118ed4fb je 0x118ed504 */
  if (C.zf) goto L_118ed504;
  /* 118ed4fd push esi */
  push32((uint32_t)(ESI));
  /* 118ed4fe call 0x118ed72d */
  push32(0x118ed503u); f_118ed72d();
  /* 118ed503 pop ecx */
  ECX = (pop32());
L_118ed504:;
  /* 118ed504 pop esi */
  ESI = (pop32());
  /* 118ed505 ret  */
  ESPCHK(0x118ed4d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d53a @ 0x118ed53a (86 bytes, 42 insns) */
void f_118ed53a(void) {
  FTRACE(0x118ed53au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed53a push ebp */
  push32((uint32_t)(EBP));
  /* 118ed53b mov ebp, esp */
  EBP = (ESP);
  /* 118ed53d push ecx */
  push32((uint32_t)(ECX));
  /* 118ed53e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ed542 push ebx */
  push32((uint32_t)(EBX));
  /* 118ed543 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed546 push esi */
  push32((uint32_t)(ESI));
  /* 118ed547 mov eax, ebx */
  EAX = (EBX);
  /* 118ed549 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118ed54a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed54c push edi */
  push32((uint32_t)(EDI));
  /* 118ed54d mov esi, ecx */
  ESI = (ECX);
  /* 118ed54f je 0x118ed586 */
  if (C.zf) goto L_118ed586;
  /* 118ed551 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_118ed554:;
  /* 118ed554 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed558 jne 0x118ed56b */
  if (!C.zf) goto L_118ed56b;
  /* 118ed55a mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 118ed55d cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed560 jae 0x118ed56b */
  if (!C.cf) goto L_118ed56b;
  /* 118ed562 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 118ed564 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 118ed566 inc dword ptr [esi + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))+1; w32((uint32_t)(ESI + 0x1c), (_r)); fl_inc(_r,32); }
  /* 118ed569 jmp 0x118ed57b */
  goto L_118ed57b;
L_118ed56b:;
  /* 118ed56b movzx ecx, byte ptr [edi] */
  ECX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 118ed56e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed570 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed571 mov ecx, esi */
  ECX = (ESI);
  /* 118ed573 call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x118ed576u);
  /* 118ed576 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed579 je 0x118ed586 */
  if (C.zf) goto L_118ed586;
L_118ed57b:;
  /* 118ed57b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ed57c inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118ed57f mov eax, ebx */
  EAX = (EBX);
  /* 118ed581 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118ed582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed584 jne 0x118ed554 */
  if (!C.zf) goto L_118ed554;
L_118ed586:;
  /* 118ed586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118ed589 pop edi */
  EDI = (pop32());
  /* 118ed58a pop esi */
  ESI = (pop32());
  /* 118ed58b pop ebx */
  EBX = (pop32());
  /* 118ed58c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ed58d ret 8 */
  ESPCHK(0x118ed53au, _esp0);
  ESP += 12; return;
}

/* FUN_1000d590 @ 0x118ed590 (151 bytes, 67 insns) */
void f_118ed590(void) {
  FTRACE(0x118ed590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed590 push ebp */
  push32((uint32_t)(EBP));
  /* 118ed591 mov ebp, esp */
  EBP = (ESP);
  /* 118ed593 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed594 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ed598 push ebx */
  push32((uint32_t)(EBX));
  /* 118ed599 push esi */
  push32((uint32_t)(ESI));
  /* 118ed59a mov esi, ecx */
  ESI = (ECX);
  /* 118ed59c push edi */
  push32((uint32_t)(EDI));
  /* 118ed59d cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed5a1 je 0x118ed5e8 */
  if (C.zf) goto L_118ed5e8;
  /* 118ed5a3 cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed5a7 jne 0x118ed5b1 */
  if (!C.zf) goto L_118ed5b1;
  /* 118ed5a9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed5ab call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x118ed5aeu);
  /* 118ed5ae mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_118ed5b1:;
  /* 118ed5b1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed5b4 mov eax, ebx */
  EAX = (EBX);
  /* 118ed5b6 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118ed5b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed5b9 je 0x118ed5de */
  if (C.zf) goto L_118ed5de;
  /* 118ed5bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_118ed5be:;
  /* 118ed5be cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed5c2 je 0x118ed5de */
  if (C.zf) goto L_118ed5de;
  /* 118ed5c4 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 118ed5c7 mov ecx, esi */
  ECX = (ESI);
  /* 118ed5c9 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118ed5cb mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed5cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118ed5ce inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 118ed5d1 call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x118ed5d4u);
  /* 118ed5d4 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 118ed5d7 mov eax, ebx */
  EAX = (EBX);
  /* 118ed5d9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118ed5da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed5dc jne 0x118ed5be */
  if (!C.zf) goto L_118ed5be;
L_118ed5de:;
  /* 118ed5de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118ed5e1 pop edi */
  EDI = (pop32());
  /* 118ed5e2 pop esi */
  ESI = (pop32());
  /* 118ed5e3 pop ebx */
  EBX = (pop32());
  /* 118ed5e4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ed5e5 ret 8 */
  ESPCHK(0x118ed590u, _esp0);
  ESP += 12; return;
L_118ed5e8:;
  /* 118ed5e8 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_118ed5eb:;
  /* 118ed5eb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118ed5ed je 0x118ed5de */
  if (C.zf) goto L_118ed5de;
  /* 118ed5ef mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed5f1 mov ecx, esi */
  ECX = (ESI);
  /* 118ed5f3 call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x118ed5f6u);
  /* 118ed5f6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed5f9 je 0x118ed5de */
  if (C.zf) goto L_118ed5de;
  /* 118ed5fb mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 118ed5fe mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
  /* 118ed601 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed603 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed605 jl 0x118ed609 */
  if ((C.sf!=C.of)) goto L_118ed609;
  /* 118ed607 mov edi, ebx */
  EDI = (EBX);
L_118ed609:;
  /* 118ed609 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118ed60b jle 0x118ed5eb */
  if ((C.zf||C.sf!=C.of)) goto L_118ed5eb;
  /* 118ed60d push edi */
  push32((uint32_t)(EDI));
  /* 118ed60e push eax */
  push32((uint32_t)(EAX));
  /* 118ed60f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ed612 call 0x118e87b0 */
  push32(0x118ed617u); f_118e87b0();
  /* 118ed617 add dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118ed61a add dword ptr [esi + 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x28))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI + 0x28), (_r)); fl_add(_a,_b,_r,32); }
  /* 118ed61d add dword ptr [ebp - 4], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 118ed620 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed623 sub ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed625 jmp 0x118ed5eb */
  goto L_118ed5eb;
}

/* FUN_1000d627 @ 0x118ed627 (23 bytes, 10 insns) */
void f_118ed627(void) {
  FTRACE(0x118ed627u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed627 mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 118ed62a cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed62d jb 0x118ed63a */
  if (C.cf) goto L_118ed63a;
  /* 118ed62f mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118ed632 cmp eax, dword ptr [ecx + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed635 ja 0x118ed63a */
  if ((!C.cf&&!C.zf)) goto L_118ed63a;
  /* 118ed637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ed639 ret  */
  ESPCHK(0x118ed627u, _esp0);
  ESP += 4; return;
L_118ed63a:;
  /* 118ed63a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ed63d ret  */
  ESPCHK(0x118ed627u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d63e @ 0x118ed63e (30 bytes, 14 insns) */
void f_118ed63e(void) {
  FTRACE(0x118ed63eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed63e cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed642 jne 0x118ed659 */
  if (!C.zf) goto L_118ed659;
  /* 118ed644 cmp dword ptr [ecx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed648 jne 0x118ed659 */
  if (!C.zf) goto L_118ed659;
  /* 118ed64a mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118ed64c call dword ptr [eax + 0x28] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x28))), 0x118ed64fu);
  /* 118ed64f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ed650 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118ed652 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed654 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 118ed657 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ed658 ret  */
  ESPCHK(0x118ed63eu, _esp0);
  ESP += 4; return;
L_118ed659:;
  /* 118ed659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ed65b ret  */
  ESPCHK(0x118ed63eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d65c @ 0x118ed65c (45 bytes, 20 insns) */
void f_118ed65c(void) {
  FTRACE(0x118ed65cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed65c push esi */
  push32((uint32_t)(ESI));
  /* 118ed65d mov esi, ecx */
  ESI = (ECX);
  /* 118ed65f push 0x200 */
  push32((uint32_t)(0x200u));
  /* 118ed664 call 0x118ed783 */
  push32(0x118ed669u); f_118ed783();
  /* 118ed669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed66b pop ecx */
  ECX = (pop32());
  /* 118ed66c jne 0x118ed673 */
  if (!C.zf) goto L_118ed673;
  /* 118ed66e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118ed671 pop esi */
  ESI = (pop32());
  /* 118ed672 ret  */
  ESPCHK(0x118ed65cu, _esp0);
  ESP += 4; return;
L_118ed673:;
  /* 118ed673 lea ecx, [eax + 0x200] */
  ECX = ((uint32_t)(EAX + 0x200));
  /* 118ed679 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed67b push ecx */
  push32((uint32_t)(ECX));
  /* 118ed67c push eax */
  push32((uint32_t)(EAX));
  /* 118ed67d mov ecx, esi */
  ECX = (ESI);
  /* 118ed67f call 0x118ed689 */
  push32(0x118ed684u); f_118ed689();
  /* 118ed684 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed686 pop eax */
  EAX = (pop32());
  /* 118ed687 pop esi */
  ESI = (pop32());
  /* 118ed688 ret  */
  ESPCHK(0x118ed65cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d689 @ 0x118ed689 (48 bytes, 18 insns) */
void f_118ed689(void) {
  FTRACE(0x118ed689u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed689 push esi */
  push32((uint32_t)(ESI));
  /* 118ed68a mov esi, ecx */
  ESI = (ECX);
  /* 118ed68c cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed690 je 0x118ed6a0 */
  if (C.zf) goto L_118ed6a0;
  /* 118ed692 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 118ed695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed697 je 0x118ed6a0 */
  if (C.zf) goto L_118ed6a0;
  /* 118ed699 push eax */
  push32((uint32_t)(EAX));
  /* 118ed69a call 0x118ed72d */
  push32(0x118ed69fu); f_118ed72d();
  /* 118ed69f pop ecx */
  ECX = (pop32());
L_118ed6a0:;
  /* 118ed6a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118ed6a4 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 118ed6a7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118ed6ab mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 118ed6ae mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 118ed6b2 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 118ed6b5 pop esi */
  ESI = (pop32());
  /* 118ed6b6 ret 0xc */
  ESPCHK(0x118ed689u, _esp0);
  ESP += 16; return;
}

/* FUN_1000d6d1 @ 0x118ed6d1 (92 bytes, 40 insns) */
void f_118ed6d1(void) {
  FTRACE(0x118ed6d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed6d1 push esi */
  push32((uint32_t)(ESI));
  /* 118ed6d2 mov esi, ecx */
  ESI = (ECX);
  /* 118ed6d4 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 118ed6d7 cmp eax, dword ptr [esi + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed6da jae 0x118ed6e7 */
  if (!C.cf) goto L_118ed6e7;
  /* 118ed6dc push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118ed6e0 call 0x118ed3b7 */
  push32(0x118ed6e5u); f_118ed3b7();
  /* 118ed6e5 jmp 0x118ed729 */
  goto L_118ed729;
L_118ed6e7:;
  /* 118ed6e7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118ed6e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed6eb push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed6ed push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118ed6ef mov ecx, esi */
  ECX = (ESI);
  /* 118ed6f1 call dword ptr [eax + 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0xc))), 0x118ed6f4u);
  /* 118ed6f4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed6f7 jne 0x118ed6fd */
  if (!C.zf) goto L_118ed6fd;
  /* 118ed6f9 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ed6fb jmp 0x118ed729 */
  goto L_118ed729;
L_118ed6fd:;
  /* 118ed6fd cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed701 push ebx */
  push32((uint32_t)(EBX));
  /* 118ed702 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 118ed706 jne 0x118ed726 */
  if (!C.zf) goto L_118ed726;
  /* 118ed708 mov eax, dword ptr [esi + 0x2c] */
  EAX = (r32((uint32_t)(ESI + 0x2c)));
  /* 118ed70b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed70d je 0x118ed726 */
  if (C.zf) goto L_118ed726;
  /* 118ed70f mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 118ed712 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed714 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118ed715 push eax */
  push32((uint32_t)(EAX));
  /* 118ed716 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed717 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118ed718 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed719 call 0x118e70b0 */
  push32(0x118ed71eu); f_118e70b0();
  /* 118ed71e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 118ed721 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed724 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_118ed726:;
  /* 118ed726 mov eax, ebx */
  EAX = (EBX);
  /* 118ed728 pop ebx */
  EBX = (pop32());
L_118ed729:;
  /* 118ed729 pop esi */
  ESI = (pop32());
  /* 118ed72a ret 4 */
  ESPCHK(0x118ed6d1u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d72d @ 0x118ed72d (11 bytes, 4 insns) */
void f_118ed72d(void) {
  FTRACE(0x118ed72du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed72d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118ed731 call 0x118e8ae5 */
  push32(0x118ed736u); f_118e8ae5();
  /* 118ed736 pop ecx */
  ECX = (pop32());
  /* 118ed737 ret  */
  ESPCHK(0x118ed72du, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x118ed738 (6 bytes, 1 insns) */
void f_118ed738(void) {
  FTRACE(0x118ed738u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed738 jmp dword ptr [0x118ef05c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x118ef05c)))); return;
}

/* FUN_1000d73e @ 0x118ed73e (41 bytes, 17 insns) */
void f_118ed73e(void) {
  FTRACE(0x118ed73eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed73e push esi */
  push32((uint32_t)(ESI));
  /* 118ed73f mov esi, ecx */
  ESI = (ECX);
  /* 118ed741 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 118ed743 mov dword ptr [esi], 0x118efa68 */
  w32((uint32_t)(ESI), (0x118efa68u));
  /* 118ed749 call 0x118e7509 */
  push32(0x118ed74eu); f_118e7509();
  /* 118ed74e mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 118ed751 pop ecx */
  ECX = (pop32());
  /* 118ed752 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118ed754 je 0x118ed75d */
  if (C.zf) goto L_118ed75d;
  /* 118ed756 push esi */
  push32((uint32_t)(ESI));
  /* 118ed757 call 0x118e8ae5 */
  push32(0x118ed75cu); f_118e8ae5();
  /* 118ed75c pop ecx */
  ECX = (pop32());
L_118ed75d:;
  /* 118ed75d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 118ed75f call 0x118e756a */
  push32(0x118ed764u); f_118e756a();
  /* 118ed764 pop ecx */
  ECX = (pop32());
  /* 118ed765 pop esi */
  ESI = (pop32());
  /* 118ed766 ret  */
  ESPCHK(0x118ed73eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d767 @ 0x118ed767 (28 bytes, 11 insns) */
void f_118ed767(void) {
  FTRACE(0x118ed767u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed767 push esi */
  push32((uint32_t)(ESI));
  /* 118ed768 mov esi, ecx */
  ESI = (ECX);
  /* 118ed76a call 0x118ed73e */
  push32(0x118ed76fu); f_118ed73e();
  /* 118ed76f test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 118ed774 je 0x118ed77d */
  if (C.zf) goto L_118ed77d;
  /* 118ed776 push esi */
  push32((uint32_t)(ESI));
  /* 118ed777 call 0x118ed72d */
  push32(0x118ed77cu); f_118ed72d();
  /* 118ed77c pop ecx */
  ECX = (pop32());
L_118ed77d:;
  /* 118ed77d mov eax, esi */
  EAX = (ESI);
  /* 118ed77f pop esi */
  ESI = (pop32());
  /* 118ed780 ret 4 */
  ESPCHK(0x118ed767u, _esp0);
  ESP += 8; return;
}

/* operator_new @ 0x118ed783 (14 bytes, 6 insns) */
void f_118ed783(void) {
  FTRACE(0x118ed783u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed783 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed785 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 118ed789 call 0x118e554c */
  push32(0x118ed78eu); f_118e554c();
  /* 118ed78e pop ecx */
  ECX = (pop32());
  /* 118ed78f pop ecx */
  ECX = (pop32());
  /* 118ed790 ret  */
  ESPCHK(0x118ed783u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d791 @ 0x118ed791 (45 bytes, 17 insns) */
void f_118ed791(void) {
  FTRACE(0x118ed791u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed791 push ebp */
  push32((uint32_t)(EBP));
  /* 118ed792 mov ebp, esp */
  EBP = (ESP);
  /* 118ed794 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed795 push ebx */
  push32((uint32_t)(EBX));
  /* 118ed796 push esi */
  push32((uint32_t)(ESI));
  /* 118ed797 push edi */
  push32((uint32_t)(EDI));
  /* 118ed798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed79b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed79e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118ed7a1 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 118ed7a8 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118ed7aa mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 118ed7b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ed7b3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed7b6 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 118ed7b9 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 118ed7bc jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000d7c5 @ 0x118ed7c5 (7 bytes, 4 insns) */
void f_118ed7c5(void) {
  FTRACE(0x118ed7c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed7c5 pop eax */
  EAX = (pop32());
  /* 118ed7c6 pop ecx */
  ECX = (pop32());
  /* 118ed7c7 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 118ed7ca jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000d7cc @ 0x118ed7cc (7 bytes, 4 insns) */
void f_118ed7cc(void) {
  FTRACE(0x118ed7ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed7cc pop eax */
  EAX = (pop32());
  /* 118ed7cd pop ecx */
  ECX = (pop32());
  /* 118ed7ce xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 118ed7d1 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000d7d3 @ 0x118ed7d3 (79 bytes, 29 insns) */
void f_118ed7d3(void) {
  FTRACE(0x118ed7d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed7d3 push ebp */
  push32((uint32_t)(EBP));
  /* 118ed7d4 mov ebp, esp */
  EBP = (ESP);
  /* 118ed7d6 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed7d7 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed7d8 push ebx */
  push32((uint32_t)(EBX));
  /* 118ed7d9 push esi */
  push32((uint32_t)(ESI));
  /* 118ed7da push edi */
  push32((uint32_t)(EDI));
  /* 118ed7db mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ed7e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118ed7e4 mov dword ptr [ebp - 4], 0x118ed7fb */
  w32((uint32_t)(EBP + -0x4), (0x118ed7fbu));
  /* 118ed7eb push 0 */
  push32((uint32_t)(0x0u));
  /* 118ed7ed push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ed7f0 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 118ed7f3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ed7f6 call 0x118ed738 */
  push32(0x118ed7fbu); f_118ed738();
  /* 118ed7fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed7fe mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ed801 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 118ed803 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed806 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 118ed809 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ed80f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 118ed812 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 118ed814 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 118ed81b pop edi */
  EDI = (pop32());
  /* 118ed81c pop esi */
  ESI = (pop32());
  /* 118ed81d pop ebx */
  EBX = (pop32());
  /* 118ed81e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ed81f ret 8 */
  ESPCHK(0x118ed7d3u, _esp0);
  ESP += 12; return;
}

/* FUN_1000d822 @ 0x118ed822 (54 bytes, 27 insns) */
void f_118ed822(void) {
  FTRACE(0x118ed822u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed822 push ebp */
  push32((uint32_t)(EBP));
  /* 118ed823 mov ebp, esp */
  EBP = (ESP);
  /* 118ed825 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed828 push ebx */
  push32((uint32_t)(EBX));
  /* 118ed829 push esi */
  push32((uint32_t)(ESI));
  /* 118ed82a push edi */
  push32((uint32_t)(EDI));
  /* 118ed82b cld  */
  C.df=0;
  /* 118ed82c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118ed82f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118ed831 push eax */
  push32((uint32_t)(EAX));
  /* 118ed832 push eax */
  push32((uint32_t)(EAX));
  /* 118ed833 push eax */
  push32((uint32_t)(EAX));
  /* 118ed834 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 118ed837 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118ed83a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ed83d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ed840 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ed843 call 0x118edcde */
  push32(0x118ed848u); f_118edcde();
  /* 118ed848 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed84b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 118ed84e pop edi */
  EDI = (pop32());
  /* 118ed84f pop esi */
  ESI = (pop32());
  /* 118ed850 pop ebx */
  EBX = (pop32());
  /* 118ed851 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118ed854 mov esp, ebp */
  ESP = (EBP);
  /* 118ed856 pop ebp */
  EBP = (pop32());
  /* 118ed857 ret  */
  ESPCHK(0x118ed822u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d858 @ 0x118ed858 (84 bytes, 26 insns) */
void f_118ed858(void) {
  FTRACE(0x118ed858u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed858 push ebp */
  push32((uint32_t)(EBP));
  /* 118ed859 mov ebp, esp */
  EBP = (ESP);
  /* 118ed85b sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed85e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed861 and dword ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))&(0x0u); w32((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,32); }
  /* 118ed865 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ed868 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118ed86b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118ed86e mov dword ptr [ebp - 0x10], 0x118ed8ac */
  w32((uint32_t)(EBP + -0x10), (0x118ed8acu));
  /* 118ed875 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118ed876 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118ed879 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118ed87c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ed882 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118ed885 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118ed88b mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 118ed891 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118ed894 push ecx */
  push32((uint32_t)(ECX));
  /* 118ed895 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ed898 call 0x118ee500 */
  push32(0x118ed89du); f_118ee500();
  /* 118ed89d mov ecx, eax */
  ECX = (EAX);
  /* 118ed89f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118ed8a2 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 118ed8a8 mov eax, ecx */
  EAX = (ECX);
  /* 118ed8aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ed8ab ret  */
  ESPCHK(0x118ed858u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8ac @ 0x118ed8ac (37 bytes, 16 insns) */
void f_118ed8ac(void) {
  FTRACE(0x118ed8acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed8ac push ebp */
  push32((uint32_t)(EBP));
  /* 118ed8ad mov ebp, esp */
  EBP = (ESP);
  /* 118ed8af cld  */
  C.df=0;
  /* 118ed8b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118ed8b5 push eax */
  push32((uint32_t)(EAX));
  /* 118ed8b6 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 118ed8b9 push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 118ed8bc push 0 */
  push32((uint32_t)(0x0u));
  /* 118ed8be push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ed8c1 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 118ed8c4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ed8c7 call 0x118edcde */
  push32(0x118ed8ccu); f_118edcde();
  /* 118ed8cc add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed8cf pop ebp */
  EBP = (pop32());
  /* 118ed8d0 ret  */
  ESPCHK(0x118ed8acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8d1 @ 0x118ed8d1 (182 bytes, 57 insns) */
void f_118ed8d1(void) {
  FTRACE(0x118ed8d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed8d1 push ebp */
  push32((uint32_t)(EBP));
  /* 118ed8d2 mov ebp, esp */
  EBP = (ESP);
  /* 118ed8d4 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118ed8d7 push ebx */
  push32((uint32_t)(EBX));
  /* 118ed8d8 push esi */
  push32((uint32_t)(ESI));
  /* 118ed8d9 push edi */
  push32((uint32_t)(EDI));
  /* 118ed8da and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 118ed8de mov dword ptr [ebp - 0x24], 0x118ed987 */
  w32((uint32_t)(EBP + -0x24), (0x118ed987u));
  /* 118ed8e5 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118ed8e8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118ed8eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed8ee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118ed8f1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118ed8f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118ed8f7 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 118ed8fa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118ed8fd and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 118ed901 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 118ed905 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118ed909 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 118ed90d mov dword ptr [ebp - 0x10], 0x118ed959 */
  w32((uint32_t)(EBP + -0x10), (0x118ed959u));
  /* 118ed914 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 118ed917 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 118ed91a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118ed920 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118ed923 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 118ed929 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 118ed92f mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 118ed936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ed939 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 118ed93c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118ed93f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 118ed942 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 118ed945 push eax */
  push32((uint32_t)(EAX));
  /* 118ed946 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ed949 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 118ed94b call 0x118e56f9 */
  push32(0x118ed950u); f_118e56f9();
  /* 118ed950 call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x118ed953u);
  /* 118ed953 pop ecx */
  ECX = (pop32());
  /* 118ed954 pop ecx */
  ECX = (pop32());
  /* 118ed955 and dword ptr [ebp - 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))&(0x0u); w32((uint32_t)(EBP + -0x34), (_r)); fl_logic(_r,32); }
  /* 118ed959 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed95d je 0x118ed976 */
  if (C.zf) goto L_118ed976;
  /* 118ed95f mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 118ed966 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 118ed968 mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 118ed96b mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 118ed96d mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 118ed974 jmp 0x118ed97f */
  goto L_118ed97f;
L_118ed976:;
  /* 118ed976 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 118ed979 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_118ed97f:;
  /* 118ed97f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 118ed982 pop edi */
  EDI = (pop32());
  /* 118ed983 pop esi */
  ESI = (pop32());
  /* 118ed984 pop ebx */
  EBX = (pop32());
  /* 118ed985 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118ed986 ret  */
  ESPCHK(0x118ed8d1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d987 @ 0x118ed987 (114 bytes, 47 insns) */
void f_118ed987(void) {
  FTRACE(0x118ed987u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed987 push ebp */
  push32((uint32_t)(EBP));
  /* 118ed988 mov ebp, esp */
  EBP = (ESP);
  /* 118ed98a push ebx */
  push32((uint32_t)(EBX));
  /* 118ed98b push esi */
  push32((uint32_t)(ESI));
  /* 118ed98c push edi */
  push32((uint32_t)(EDI));
  /* 118ed98d cld  */
  C.df=0;
  /* 118ed98e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118ed991 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118ed994 and eax, 0x66 */
  { uint32_t _r=(EAX)&(0x66u); EAX = (_r); fl_logic(_r,32); }
  /* 118ed997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118ed999 je 0x118ed9aa */
  if (C.zf) goto L_118ed9aa;
  /* 118ed99b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed99e mov dword ptr [eax + 0x24], 1 */
  w32((uint32_t)(EAX + 0x24), (0x1u));
  /* 118ed9a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed9a7 pop eax */
  EAX = (pop32());
  /* 118ed9a8 jmp 0x118ed9f7 */
  goto L_118ed9f7;
L_118ed9aa:;
  /* 118ed9aa push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed9ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed9af push dword ptr [eax + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x14))));
  /* 118ed9b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed9b5 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 118ed9b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed9bb push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 118ed9be push 0 */
  push32((uint32_t)(0x0u));
  /* 118ed9c0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118ed9c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed9c6 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 118ed9c9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ed9cc call 0x118edcde */
  push32(0x118ed9d1u); f_118edcde();
  /* 118ed9d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118ed9d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed9d7 cmp dword ptr [eax + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118ed9db jne 0x118ed9e8 */
  if (!C.zf) goto L_118ed9e8;
  /* 118ed9dd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118ed9e0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118ed9e3 call 0x118ed7d3 */
  push32(0x118ed9e8u); f_118ed7d3();
L_118ed9e8:;
  /* 118ed9e8 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118ed9eb mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 118ed9ee mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 118ed9f1 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 118ed9f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118ed9f6 pop eax */
  EAX = (pop32());
L_118ed9f7:;
  /* 118ed9f7 pop edi */
  EDI = (pop32());
  /* 118ed9f8 pop esi */
  ESI = (pop32());
  /* 118ed9f9 pop ebx */
  EBX = (pop32());
  /* 118ed9fa pop ebp */
  EBP = (pop32());
  /* 118ed9fb ret  */
  ESPCHK(0x118ed987u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9fc @ 0x118ed9fc (123 bytes, 51 insns) */
void f_118ed9fc(void) {
  FTRACE(0x118ed9fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118ed9fc push ebp */
  push32((uint32_t)(EBP));
  /* 118ed9fd mov ebp, esp */
  EBP = (ESP);
  /* 118ed9ff push ecx */
  push32((uint32_t)(ECX));
  /* 118eda00 push ebx */
  push32((uint32_t)(EBX));
  /* 118eda01 push esi */
  push32((uint32_t)(ESI));
  /* 118eda02 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eda06 push edi */
  push32((uint32_t)(EDI));
  /* 118eda07 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118eda0a mov esi, dword ptr [edi + 0xc] */
  ESI = (r32((uint32_t)(EDI + 0xc)));
  /* 118eda0d mov ebx, dword ptr [edi + 0x10] */
  EBX = (r32((uint32_t)(EDI + 0x10)));
  /* 118eda10 mov eax, esi */
  EAX = (ESI);
  /* 118eda12 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 118eda15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118eda18 jl 0x118eda53 */
  if ((C.sf!=C.of)) goto L_118eda53;
L_118eda1a:;
  /* 118eda1a cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eda1d jne 0x118eda24 */
  if (!C.zf) goto L_118eda24;
  /* 118eda1f call 0x118ee5ad */
  push32(0x118eda24u); f_118ee5ad();
L_118eda24:;
  /* 118eda24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118eda27 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118eda28 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 118eda2b cmp dword ptr [ebx + eax*4 + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*4 + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eda2f lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 118eda32 jge 0x118eda39 */
  if ((C.sf==C.of)) goto L_118eda39;
  /* 118eda34 cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eda37 jle 0x118eda3e */
  if ((C.zf||C.sf!=C.of)) goto L_118eda3e;
L_118eda39:;
  /* 118eda39 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eda3c jne 0x118eda4a */
  if (!C.zf) goto L_118eda4a;
L_118eda3e:;
  /* 118eda3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118eda41 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 118eda44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118eda47 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
L_118eda4a:;
  /* 118eda4a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eda4e jge 0x118eda1a */
  if ((C.sf==C.of)) goto L_118eda1a;
  /* 118eda50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118eda53:;
  /* 118eda53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118eda56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118eda57 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 118eda59 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 118eda5c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118eda5e cmp eax, dword ptr [edi + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eda61 ja 0x118eda67 */
  if ((!C.cf&&!C.zf)) goto L_118eda67;
  /* 118eda63 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118eda65 jbe 0x118eda6c */
  if ((C.cf||C.zf)) goto L_118eda6c;
L_118eda67:;
  /* 118eda67 call 0x118ee5ad */
  push32(0x118eda6cu); f_118ee5ad();
L_118eda6c:;
  /* 118eda6c lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 118eda6f pop edi */
  EDI = (pop32());
  /* 118eda70 pop esi */
  ESI = (pop32());
  /* 118eda71 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 118eda74 pop ebx */
  EBX = (pop32());
  /* 118eda75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118eda76 ret  */
  ESPCHK(0x118ed9fcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000da78 @ 0x118eda78 (31 bytes, 10 insns) */
void f_118eda78(void) {
  FTRACE(0x118eda78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eda78 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118eda7a push eax */
  push32((uint32_t)(EAX));
  /* 118eda7b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 118eda81 push eax */
  push32((uint32_t)(EAX));
  /* 118eda82 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 118eda86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 118eda8d mov dword ptr [esp + 0xc], ebp */
  w32((uint32_t)(ESP + 0xc), (EBP));
  /* 118eda91 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 118eda95 push eax */
  push32((uint32_t)(EAX));
  /* 118eda96 ret  */
  ESPCHK(0x118eda78u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da97 @ 0x118eda97 (101 bytes, 34 insns) */
void f_118eda97(void) {
  FTRACE(0x118eda97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118eda97 push esi */
  push32((uint32_t)(ESI));
  /* 118eda98 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118eda9c cmp esi, dword ptr [0x1190ab40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1190ab40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edaa2 jae 0x118edae4 */
  if (!C.cf) goto L_118edae4;
  /* 118edaa4 mov ecx, esi */
  ECX = (ESI);
  /* 118edaa6 mov eax, esi */
  EAX = (ESI);
  /* 118edaa8 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118edaab and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118edaae mov ecx, dword ptr [ecx*4 + 0x1190aa40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118edab5 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 118edab8 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 118edabd je 0x118edae4 */
  if (C.zf) goto L_118edae4;
  /* 118edabf push edi */
  push32((uint32_t)(EDI));
  /* 118edac0 push esi */
  push32((uint32_t)(ESI));
  /* 118edac1 call 0x118eb390 */
  push32(0x118edac6u); f_118eb390();
  /* 118edac6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118edaca push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 118edace push esi */
  push32((uint32_t)(ESI));
  /* 118edacf call 0x118edafc */
  push32(0x118edad4u); f_118edafc();
  /* 118edad4 push esi */
  push32((uint32_t)(ESI));
  /* 118edad5 mov edi, eax */
  EDI = (EAX);
  /* 118edad7 call 0x118eb3ef */
  push32(0x118edadcu); f_118eb3ef();
  /* 118edadc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118edadf mov eax, edi */
  EAX = (EDI);
  /* 118edae1 pop edi */
  EDI = (pop32());
  /* 118edae2 pop esi */
  ESI = (pop32());
  /* 118edae3 ret  */
  ESPCHK(0x118eda97u, _esp0);
  ESP += 4; return;
L_118edae4:;
  /* 118edae4 call 0x118eb2bd */
  push32(0x118edae9u); f_118eb2bd();
  /* 118edae9 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118edaef call 0x118eb2c6 */
  push32(0x118edaf4u); f_118eb2c6();
  /* 118edaf4 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 118edaf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118edafa pop esi */
  ESI = (pop32());
  /* 118edafb ret  */
  ESPCHK(0x118eda97u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dafc @ 0x118edafc (473 bytes, 170 insns) */
void f_118edafc(void) {
  FTRACE(0x118edafcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118edafc push ebp */
  push32((uint32_t)(EBP));
  /* 118edafd mov ebp, esp */
  EBP = (ESP);
  /* 118edaff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118edb02 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 118edb06 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edb0a push ebx */
  push32((uint32_t)(EBX));
  /* 118edb0b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 118edb0e push esi */
  push32((uint32_t)(ESI));
  /* 118edb0f push edi */
  push32((uint32_t)(EDI));
  /* 118edb10 mov edx, ebx */
  EDX = (EBX);
  /* 118edb12 je 0x118edcce */
  if (C.zf) goto L_118edcce;
  /* 118edb18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118edb1b mov ecx, eax */
  ECX = (EAX);
  /* 118edb1d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 118edb20 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118edb23 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 118edb26 mov eax, dword ptr [ecx*4 + 0x1190aa40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1190aa40)));
  /* 118edb2d lea edi, [ecx*4 + 0x1190aa40] */
  EDI = ((uint32_t)(ECX*4 + 0x1190aa40));
  /* 118edb34 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 118edb37 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118edb39 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 118edb3c test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 118edb3f jne 0x118edcce */
  if (!C.zf) goto L_118edcce;
  /* 118edb45 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 118edb48 je 0x118edb67 */
  if (C.zf) goto L_118edb67;
  /* 118edb4a mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 118edb4d cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edb4f je 0x118edb67 */
  if (C.zf) goto L_118edb67;
  /* 118edb51 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 118edb54 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 118edb56 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118edb58 lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 118edb5b mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 118edb62 mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_118edb67:;
  /* 118edb67 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118edb6a push 0 */
  push32((uint32_t)(0x0u));
  /* 118edb6c push eax */
  push32((uint32_t)(EAX));
  /* 118edb6d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118edb6f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118edb72 push edx */
  push32((uint32_t)(EDX));
  /* 118edb73 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 118edb76 call dword ptr [0x118ef014] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef014))), 0x118edb7cu);
  /* 118edb7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118edb7e jne 0x118edbb9 */
  if (!C.zf) goto L_118edbb9;
  /* 118edb80 call dword ptr [0x118ef0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c4))), 0x118edb86u);
  /* 118edb86 push 5 */
  push32((uint32_t)(0x5u));
  /* 118edb88 pop esi */
  ESI = (pop32());
  /* 118edb89 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edb8b jne 0x118edba1 */
  if (!C.zf) goto L_118edba1;
  /* 118edb8d call 0x118eb2bd */
  push32(0x118edb92u); f_118eb2bd();
  /* 118edb92 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 118edb98 call 0x118eb2c6 */
  push32(0x118edb9du); f_118eb2c6();
  /* 118edb9d mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 118edb9f jmp 0x118edbb1 */
  goto L_118edbb1;
L_118edba1:;
  /* 118edba1 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edba4 je 0x118edcce */
  if (C.zf) goto L_118edcce;
  /* 118edbaa push eax */
  push32((uint32_t)(EAX));
  /* 118edbab call 0x118eb24a */
  push32(0x118edbb0u); f_118eb24a();
  /* 118edbb0 pop ecx */
  ECX = (pop32());
L_118edbb1:;
  /* 118edbb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118edbb4 jmp 0x118edcd0 */
  goto L_118edcd0;
L_118edbb9:;
  /* 118edbb9 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118edbbb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118edbbe add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 118edbc1 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 118edbc5 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 118edbc9 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 118edbcb je 0x118edcc9 */
  if (C.zf) goto L_118edcc9;
  /* 118edbd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118edbd3 je 0x118edbde */
  if (C.zf) goto L_118edbde;
  /* 118edbd5 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edbd8 jne 0x118edbde */
  if (!C.zf) goto L_118edbde;
  /* 118edbda or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 118edbdc jmp 0x118edbe0 */
  goto L_118edbe0;
L_118edbde:;
  /* 118edbde and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_118edbe0:;
  /* 118edbe0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 118edbe2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118edbe5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118edbe8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 118edbeb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118edbed cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edbef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118edbf2 jae 0x118edcc3 */
  if (!C.cf) goto L_118edcc3;
L_118edbf8:;
  /* 118edbf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118edbfb mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 118edbfd cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edbff je 0x118edcb3 */
  if (C.zf) goto L_118edcb3;
  /* 118edc05 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edc07 je 0x118edc14 */
  if (C.zf) goto L_118edc14;
  /* 118edc09 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 118edc0b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118edc0c inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 118edc0f jmp 0x118edca5 */
  goto L_118edca5;
L_118edc14:;
  /* 118edc14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118edc15 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edc18 jae 0x118edc32 */
  if (!C.cf) goto L_118edc32;
  /* 118edc1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118edc1d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118edc1e cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edc21 jne 0x118edc29 */
  if (!C.zf) goto L_118edc29;
  /* 118edc23 add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 118edc27 jmp 0x118edc87 */
  goto L_118edc87;
L_118edc29:;
  /* 118edc29 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 118edc2c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118edc2d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 118edc30 jmp 0x118edca5 */
  goto L_118edca5;
L_118edc32:;
  /* 118edc32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 118edc35 push 0 */
  push32((uint32_t)(0x0u));
  /* 118edc37 push eax */
  push32((uint32_t)(EAX));
  /* 118edc38 inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 118edc3b lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 118edc3e push 1 */
  push32((uint32_t)(0x1u));
  /* 118edc40 push eax */
  push32((uint32_t)(EAX));
  /* 118edc41 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118edc43 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 118edc46 call dword ptr [0x118ef014] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef014))), 0x118edc4cu);
  /* 118edc4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118edc4e jne 0x118edc5a */
  if (!C.zf) goto L_118edc5a;
  /* 118edc50 call dword ptr [0x118ef0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0c4))), 0x118edc56u);
  /* 118edc56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118edc58 jne 0x118edca1 */
  if (!C.zf) goto L_118edca1;
L_118edc5a:;
  /* 118edc5a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edc5e je 0x118edca1 */
  if (C.zf) goto L_118edca1;
  /* 118edc60 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118edc62 test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 118edc67 je 0x118edc7c */
  if (C.zf) goto L_118edc7c;
  /* 118edc69 mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 118edc6c cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edc6e je 0x118edc87 */
  if (C.zf) goto L_118edc87;
  /* 118edc70 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 118edc73 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 118edc75 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118edc76 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 118edc7a jmp 0x118edca5 */
  goto L_118edca5;
L_118edc7c:;
  /* 118edc7c cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edc7f jne 0x118edc8c */
  if (!C.zf) goto L_118edc8c;
  /* 118edc81 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edc85 jne 0x118edc8c */
  if (!C.zf) goto L_118edc8c;
L_118edc87:;
  /* 118edc87 mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 118edc8a jmp 0x118edca4 */
  goto L_118edca4;
L_118edc8c:;
  /* 118edc8c push 1 */
  push32((uint32_t)(0x1u));
  /* 118edc8e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118edc90 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118edc93 call 0x118e8e05 */
  push32(0x118edc98u); f_118e8e05();
  /* 118edc98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118edc9b cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118edc9f je 0x118edca5 */
  if (C.zf) goto L_118edca5;
L_118edca1:;
  /* 118edca1 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_118edca4:;
  /* 118edca4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_118edca5:;
  /* 118edca5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118edca8 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edcab jb 0x118edbf8 */
  if (C.cf) goto L_118edbf8;
  /* 118edcb1 jmp 0x118edcc3 */
  goto L_118edcc3;
L_118edcb3:;
  /* 118edcb3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118edcb5 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 118edcb9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118edcbb test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 118edcbd jne 0x118edcc3 */
  if (!C.zf) goto L_118edcc3;
  /* 118edcbf or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 118edcc1 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_118edcc3:;
  /* 118edcc3 sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118edcc6 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_118edcc9:;
  /* 118edcc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118edccc jmp 0x118edcd0 */
  goto L_118edcd0;
L_118edcce:;
  /* 118edcce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118edcd0:;
  /* 118edcd0 pop edi */
  EDI = (pop32());
  /* 118edcd1 pop esi */
  ESI = (pop32());
  /* 118edcd2 pop ebx */
  EBX = (pop32());
  /* 118edcd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118edcd4 ret  */
  ESPCHK(0x118edafcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcde @ 0x118edcde (155 bytes, 61 insns) */
void f_118edcde(void) {
  FTRACE(0x118edcdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118edcde push ebp */
  push32((uint32_t)(EBP));
  /* 118edcdf mov ebp, esp */
  EBP = (ESP);
  /* 118edce1 push esi */
  push32((uint32_t)(ESI));
  /* 118edce2 mov esi, dword ptr [ebp + 0x18] */
  ESI = (r32((uint32_t)(EBP + 0x18)));
  /* 118edce5 push edi */
  push32((uint32_t)(EDI));
  /* 118edce6 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 118edceb cmp dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edced je 0x118edcf4 */
  if (C.zf) goto L_118edcf4;
  /* 118edcef call 0x118ee5ad */
  push32(0x118edcf4u); f_118ee5ad();
L_118edcf4:;
  /* 118edcf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118edcf7 test byte ptr [eax + 4], 0x66 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x66u); fl_logic(_r,8); }
  /* 118edcfb je 0x118edd1c */
  if (C.zf) goto L_118edd1c;
  /* 118edcfd cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edd01 je 0x118edd72 */
  if (C.zf) goto L_118edd72;
  /* 118edd03 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edd07 jne 0x118edd72 */
  if (!C.zf) goto L_118edd72;
  /* 118edd09 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118edd0b push esi */
  push32((uint32_t)(ESI));
  /* 118edd0c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118edd0f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118edd12 call 0x118ee033 */
  push32(0x118edd17u); f_118ee033();
  /* 118edd17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118edd1a jmp 0x118edd72 */
  goto L_118edd72;
L_118edd1c:;
  /* 118edd1c cmp dword ptr [esi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edd20 je 0x118edd72 */
  if (C.zf) goto L_118edd72;
  /* 118edd22 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edd28 jne 0x118edd56 */
  if (!C.zf) goto L_118edd56;
  /* 118edd2a cmp dword ptr [eax + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118edd2d jbe 0x118edd56 */
  if ((C.cf||C.zf)) goto L_118edd56;
  /* 118edd2f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118edd32 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 118edd35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118edd37 je 0x118edd56 */
  if (C.zf) goto L_118edd56;
  /* 118edd39 movzx edx, byte ptr [ebp + 0x24] */
  EDX = ((uint32_t)(r8((uint32_t)(EBP + 0x24))));
  /* 118edd3d push edx */
  push32((uint32_t)(EDX));
  /* 118edd3e push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118edd41 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118edd44 push esi */
  push32((uint32_t)(ESI));
  /* 118edd45 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118edd48 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118edd4b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118edd4e push eax */
  push32((uint32_t)(EAX));
  /* 118edd4f call ecx */
  call_ind((uint32_t)(ECX), 0x118edd51u);
  /* 118edd51 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118edd54 jmp 0x118edd75 */
  goto L_118edd75;
L_118edd56:;
  /* 118edd56 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 118edd59 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 118edd5c push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 118edd5f push esi */
  push32((uint32_t)(ESI));
  /* 118edd60 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118edd63 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118edd66 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118edd69 push eax */
  push32((uint32_t)(EAX));
  /* 118edd6a call 0x118edd79 */
  push32(0x118edd6fu); f_118edd79();
  /* 118edd6f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118edd72:;
  /* 118edd72 push 1 */
  push32((uint32_t)(0x1u));
  /* 118edd74 pop eax */
  EAX = (pop32());
L_118edd75:;
  /* 118edd75 pop edi */
  EDI = (pop32());
  /* 118edd76 pop esi */
  ESI = (pop32());
  /* 118edd77 pop ebp */
  EBP = (pop32());
  /* 118edd78 ret  */
  ESPCHK(0x118edcdeu, _esp0);
  ESP += 4; return;
}

