#include "recomp.h"

/* FUN_10004f3f @ 0x11d14f3f (22 bytes, 6 insns) */
void f_11d14f3f(void) {
  FTRACE(0x11d14f3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14f3f push 0x11d1e718 */
  push32((uint32_t)(0x11d1e718u));
  /* 11d14f44 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d14f48 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d14f4c call 0x11d14dd3 */
  push32(0x11d14f51u); f_11d14dd3();
  /* 11d14f51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14f54 ret  */
  ESPCHK(0x11d14f3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f55 @ 0x11d14f55 (22 bytes, 6 insns) */
void f_11d14f55(void) {
  FTRACE(0x11d14f55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14f55 push 0x11d1e730 */
  push32((uint32_t)(0x11d1e730u));
  /* 11d14f5a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d14f5e push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d14f62 call 0x11d14dd3 */
  push32(0x11d14f67u); f_11d14dd3();
  /* 11d14f67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14f6a ret  */
  ESPCHK(0x11d14f55u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f6b @ 0x11d14f6b (45 bytes, 21 insns) */
void f_11d14f6b(void) {
  FTRACE(0x11d14f6bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14f6b push ebp */
  push32((uint32_t)(EBP));
  /* 11d14f6c mov ebp, esp */
  EBP = (ESP);
  /* 11d14f6e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14f71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d14f73 push eax */
  push32((uint32_t)(EAX));
  /* 11d14f74 push eax */
  push32((uint32_t)(EAX));
  /* 11d14f75 push eax */
  push32((uint32_t)(EAX));
  /* 11d14f76 push eax */
  push32((uint32_t)(EAX));
  /* 11d14f77 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d14f7a lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11d14f7d push eax */
  push32((uint32_t)(EAX));
  /* 11d14f7e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14f81 push eax */
  push32((uint32_t)(EAX));
  /* 11d14f82 call 0x11d18646 */
  push32(0x11d14f87u); f_11d18646();
  /* 11d14f87 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d14f8a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14f8d push eax */
  push32((uint32_t)(EAX));
  /* 11d14f8e call 0x11d14f3f */
  push32(0x11d14f93u); f_11d14f3f();
  /* 11d14f93 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14f96 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14f97 ret  */
  ESPCHK(0x11d14f6bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f98 @ 0x11d14f98 (45 bytes, 21 insns) */
void f_11d14f98(void) {
  FTRACE(0x11d14f98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14f98 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14f99 mov ebp, esp */
  EBP = (ESP);
  /* 11d14f9b sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14f9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d14fa0 push eax */
  push32((uint32_t)(EAX));
  /* 11d14fa1 push eax */
  push32((uint32_t)(EAX));
  /* 11d14fa2 push eax */
  push32((uint32_t)(EAX));
  /* 11d14fa3 push eax */
  push32((uint32_t)(EAX));
  /* 11d14fa4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d14fa7 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11d14faa push eax */
  push32((uint32_t)(EAX));
  /* 11d14fab lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14fae push eax */
  push32((uint32_t)(EAX));
  /* 11d14faf call 0x11d18646 */
  push32(0x11d14fb4u); f_11d18646();
  /* 11d14fb4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d14fb7 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14fba push eax */
  push32((uint32_t)(EAX));
  /* 11d14fbb call 0x11d14f55 */
  push32(0x11d14fc0u); f_11d14f55();
  /* 11d14fc0 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14fc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14fc4 ret  */
  ESPCHK(0x11d14f98u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc5 @ 0x11d14fc5 (119 bytes, 57 insns) */
void f_11d14fc5(void) {
  FTRACE(0x11d14fc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14fc5 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14fc6 mov ebp, esp */
  EBP = (ESP);
  /* 11d14fc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d14fcb push ebx */
  push32((uint32_t)(EBX));
  /* 11d14fcc mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d14fcf push esi */
  push32((uint32_t)(ESI));
  /* 11d14fd0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14fd3 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d14fd6 push edi */
  push32((uint32_t)(EDI));
  /* 11d14fd7 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 11d14fda mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 11d14fdd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d14fdf mov eax, edi */
  EAX = (EDI);
  /* 11d14fe1 jle 0x11d15002 */
  if ((C.zf||C.sf!=C.of)) goto L_11d15002;
  /* 11d14fe3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11d14fe6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11d14fe8:;
  /* 11d14fe8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d14fea test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d14fec je 0x11d14ff4 */
  if (C.zf) goto L_11d14ff4;
  /* 11d14fee movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 11d14ff1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d14ff2 jmp 0x11d14ff7 */
  goto L_11d14ff7;
L_11d14ff4:;
  /* 11d14ff4 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d14ff6 pop edx */
  EDX = (pop32());
L_11d14ff7:;
  /* 11d14ff7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d14ff9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14ffa dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11d14ffd jne 0x11d14fe8 */
  if (!C.zf) goto L_11d14fe8;
  /* 11d14fff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11d15002:;
  /* 11d15002 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11d15005 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d15007 jl 0x11d1501b */
  if ((C.sf!=C.of)) goto L_11d1501b;
  /* 11d15009 cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1500c jl 0x11d1501b */
  if ((C.sf!=C.of)) goto L_11d1501b;
L_11d1500e:;
  /* 11d1500e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d1500f cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d15012 jne 0x11d15019 */
  if (!C.zf) goto L_11d15019;
  /* 11d15014 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11d15017 jmp 0x11d1500e */
  goto L_11d1500e;
L_11d15019:;
  /* 11d15019 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11d1501b:;
  /* 11d1501b cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1501e jne 0x11d15025 */
  if (!C.zf) goto L_11d15025;
  /* 11d15020 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 11d15023 jmp 0x11d15037 */
  goto L_11d15037;
L_11d15025:;
  /* 11d15025 push edi */
  push32((uint32_t)(EDI));
  /* 11d15026 call 0x11d155e0 */
  push32(0x11d1502bu); f_11d155e0();
  /* 11d1502b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1502c push eax */
  push32((uint32_t)(EAX));
  /* 11d1502d push edi */
  push32((uint32_t)(EDI));
  /* 11d1502e push esi */
  push32((uint32_t)(ESI));
  /* 11d1502f call 0x11d152a0 */
  push32(0x11d15034u); f_11d152a0();
  /* 11d15034 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d15037:;
  /* 11d15037 pop edi */
  EDI = (pop32());
  /* 11d15038 pop esi */
  ESI = (pop32());
  /* 11d15039 pop ebx */
  EBX = (pop32());
  /* 11d1503a pop ebp */
  EBP = (pop32());
  /* 11d1503b ret  */
  ESPCHK(0x11d14fc5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000503c @ 0x11d1503c (92 bytes, 41 insns) */
void f_11d1503c(void) {
  FTRACE(0x11d1503cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1503c push ebp */
  push32((uint32_t)(EBP));
  /* 11d1503d mov ebp, esp */
  EBP = (ESP);
  /* 11d1503f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d15042 push esi */
  push32((uint32_t)(ESI));
  /* 11d15043 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11d15046 push edi */
  push32((uint32_t)(EDI));
  /* 11d15047 push eax */
  push32((uint32_t)(EAX));
  /* 11d15048 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d1504b push eax */
  push32((uint32_t)(EAX));
  /* 11d1504c call 0x11d15098 */
  push32(0x11d15051u); f_11d15098();
  /* 11d15051 pop ecx */
  ECX = (pop32());
  /* 11d15052 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11d15055 pop ecx */
  ECX = (pop32());
  /* 11d15056 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 11d15059 push eax */
  push32((uint32_t)(EAX));
  /* 11d1505a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1505c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d1505e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d15061 mov edi, esp */
  EDI = (ESP);
  /* 11d15063 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d15064 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d15065 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 11d15067 call 0x11d18b17 */
  push32(0x11d1506cu); f_11d18b17();
  /* 11d1506c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1506f mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11d15072 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11d15075 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11d15079 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d1507b movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11d1507f mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11d15082 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11d15085 push eax */
  push32((uint32_t)(EAX));
  /* 11d15086 push edi */
  push32((uint32_t)(EDI));
  /* 11d15087 call 0x11d15150 */
  push32(0x11d1508cu); f_11d15150();
  /* 11d1508c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1508f mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 11d15092 mov eax, esi */
  EAX = (ESI);
  /* 11d15094 pop edi */
  EDI = (pop32());
  /* 11d15095 pop esi */
  ESI = (pop32());
  /* 11d15096 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d15097 ret  */
  ESPCHK(0x11d1503cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005098 @ 0x11d15098 (182 bytes, 70 insns) */
void f_11d15098(void) {
  FTRACE(0x11d15098u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d15098 push ebp */
  push32((uint32_t)(EBP));
  /* 11d15099 mov ebp, esp */
  EBP = (ESP);
  /* 11d1509b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1509c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1509f push ebx */
  push32((uint32_t)(EBX));
  /* 11d150a0 push esi */
  push32((uint32_t)(ESI));
  /* 11d150a1 push edi */
  push32((uint32_t)(EDI));
  /* 11d150a2 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11d150a6 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 11d150ab mov ecx, eax */
  ECX = (EAX);
  /* 11d150ad and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11d150b2 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d150b5 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d150b7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d150ba mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d150bd mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 11d150bf movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 11d150c2 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11d150c7 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d150cc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d150ce mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11d150d1 je 0x11d150e6 */
  if (C.zf) goto L_11d150e6;
  /* 11d150d3 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d150d5 je 0x11d150df */
  if (C.zf) goto L_11d150df;
  /* 11d150d7 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 11d150dd jmp 0x11d15107 */
  goto L_11d15107;
L_11d150df:;
  /* 11d150df mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 11d150e4 jmp 0x11d15107 */
  goto L_11d15107;
L_11d150e6:;
  /* 11d150e6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d150e8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d150ea jne 0x11d150fe */
  if (!C.zf) goto L_11d150fe;
  /* 11d150ec cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d150ee jne 0x11d150fe */
  if (!C.zf) goto L_11d150fe;
  /* 11d150f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d150f3 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11d150f6 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11d150f8 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 11d150fc jmp 0x11d15149 */
  goto L_11d15149;
L_11d150fe:;
  /* 11d150fe lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 11d15104 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11d15107:;
  /* 11d15107 mov ecx, edx */
  ECX = (EDX);
  /* 11d15109 shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 11d1510c shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11d1510f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11d15111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15114 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 11d15117 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 11d1511a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d1511d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11d1511f:;
  /* 11d1511f test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 11d15121 jne 0x11d15140 */
  if (!C.zf) goto L_11d15140;
  /* 11d15123 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11d15125 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15127 mov ebx, edx */
  EBX = (EDX);
  /* 11d15129 shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 11d1512c or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 11d1512e lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 11d15131 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d15133 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11d15136 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1513c mov ecx, ebx */
  ECX = (EBX);
  /* 11d1513e jmp 0x11d1511f */
  goto L_11d1511f;
L_11d15140:;
  /* 11d15140 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d15143 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d15145 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_11d15149:;
  /* 11d15149 pop edi */
  EDI = (pop32());
  /* 11d1514a pop esi */
  ESI = (pop32());
  /* 11d1514b pop ebx */
  EBX = (pop32());
  /* 11d1514c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1514d ret  */
  ESPCHK(0x11d15098u, _esp0);
  ESP += 4; return;
}

/* FUN_10005150 @ 0x11d15150 (7 bytes, 3 insns) */
void f_11d15150(void) {
  FTRACE(0x11d15150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d15150 push edi */
  push32((uint32_t)(EDI));
  /* 11d15151 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d15155 jmp 0x11d151c1 */
  jmp_ind(0x11d151c1u); return;
}

/* FUN_10005160 @ 0x11d15160 (224 bytes, 84 insns) */
void f_11d15160(void) {
  FTRACE(0x11d15160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d15160 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d15164 push edi */
  push32((uint32_t)(EDI));
  /* 11d15165 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d1516b je 0x11d1517c */
  if (C.zf) goto L_11d1517c;
L_11d1516d:;
  /* 11d1516d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11d1516f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d15170 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d15172 je 0x11d151af */
  if (C.zf) goto L_11d151af;
  /* 11d15174 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d1517a jne 0x11d1516d */
  if (!C.zf) goto L_11d1516d;
L_11d1517c:;
  /* 11d1517c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d1517e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d15183 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15185 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d15188 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1518a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1518d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d15192 je 0x11d1517c */
  if (C.zf) goto L_11d1517c;
  /* 11d15194 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d15197 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d15199 je 0x11d151be */
  if (C.zf) goto L_11d151be;
  /* 11d1519b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d1519d je 0x11d151b9 */
  if (C.zf) goto L_11d151b9;
  /* 11d1519f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d151a4 je 0x11d151b4 */
  if (C.zf) goto L_11d151b4;
  /* 11d151a6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d151ab je 0x11d151af */
  if (C.zf) goto L_11d151af;
  /* 11d151ad jmp 0x11d1517c */
  goto L_11d1517c;
L_11d151af:;
  /* 11d151af lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11d151b2 jmp 0x11d151c1 */
  goto L_11d151c1;
L_11d151b4:;
  /* 11d151b4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11d151b7 jmp 0x11d151c1 */
  goto L_11d151c1;
L_11d151b9:;
  /* 11d151b9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11d151bc jmp 0x11d151c1 */
  goto L_11d151c1;
L_11d151be:;
  /* 11d151be lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11d151c1:;
  /* 11d151c1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d151c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d151cb je 0x11d151e6 */
  if (C.zf) goto L_11d151e6;
L_11d151cd:;
  /* 11d151cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d151cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d151d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d151d2 je 0x11d15238 */
  if (C.zf) goto L_11d15238;
  /* 11d151d4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11d151d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d151d7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d151dd jne 0x11d151cd */
  if (!C.zf) goto L_11d151cd;
  /* 11d151df jmp 0x11d151e6 */
  goto L_11d151e6;
L_11d151e1:;
  /* 11d151e1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d151e3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d151e6:;
  /* 11d151e6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d151eb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d151ed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d151ef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d151f2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d151f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11d151f6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d151f9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d151fe je 0x11d151e1 */
  if (C.zf) goto L_11d151e1;
  /* 11d15200 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d15202 je 0x11d15238 */
  if (C.zf) goto L_11d15238;
  /* 11d15204 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11d15206 je 0x11d1522f */
  if (C.zf) goto L_11d1522f;
  /* 11d15208 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d1520e je 0x11d15222 */
  if (C.zf) goto L_11d15222;
  /* 11d15210 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d15216 je 0x11d1521a */
  if (C.zf) goto L_11d1521a;
  /* 11d15218 jmp 0x11d151e1 */
  goto L_11d151e1;
L_11d1521a:;
  /* 11d1521a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d1521c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d15220 pop edi */
  EDI = (pop32());
  /* 11d15221 ret  */
  ESPCHK(0x11d15160u, _esp0);
  ESP += 4; return;
L_11d15222:;
  /* 11d15222 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11d15225 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d15229 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11d1522d pop edi */
  EDI = (pop32());
  /* 11d1522e ret  */
  ESPCHK(0x11d15160u, _esp0);
  ESP += 4; return;
L_11d1522f:;
  /* 11d1522f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11d15232 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d15236 pop edi */
  EDI = (pop32());
  /* 11d15237 ret  */
  ESPCHK(0x11d15160u, _esp0);
  ESP += 4; return;
L_11d15238:;
  /* 11d15238 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11d1523a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d1523e pop edi */
  EDI = (pop32());
  /* 11d1523f ret  */
  ESPCHK(0x11d15160u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11d15240 (88 bytes, 40 insns) */
void f_11d15240(void) {
  FTRACE(0x11d15240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d15240 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d15244 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d15248 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d1524a je 0x11d15293 */
  if (C.zf) goto L_11d15293;
  /* 11d1524c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1524e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11d15252 push edi */
  push32((uint32_t)(EDI));
  /* 11d15253 mov edi, ecx */
  EDI = (ECX);
  /* 11d15255 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15258 jb 0x11d15287 */
  if (C.cf) goto L_11d15287;
  /* 11d1525a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d1525c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11d1525f je 0x11d15269 */
  if (C.zf) goto L_11d15269;
  /* 11d15261 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11d15263:;
  /* 11d15263 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d15265 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d15266 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d15267 jne 0x11d15263 */
  if (!C.zf) goto L_11d15263;
L_11d15269:;
  /* 11d15269 mov ecx, eax */
  ECX = (EAX);
  /* 11d1526b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d1526e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15270 mov ecx, eax */
  ECX = (EAX);
  /* 11d15272 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d15275 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15277 mov ecx, edx */
  ECX = (EDX);
  /* 11d15279 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d1527c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d1527f je 0x11d15287 */
  if (C.zf) goto L_11d15287;
  /* 11d15281 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d15283 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d15285 je 0x11d1528d */
  if (C.zf) goto L_11d1528d;
L_11d15287:;
  /* 11d15287 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d15289 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d1528a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d1528b jne 0x11d15287 */
  if (!C.zf) goto L_11d15287;
L_11d1528d:;
  /* 11d1528d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d15291 pop edi */
  EDI = (pop32());
  /* 11d15292 ret  */
  ESPCHK(0x11d15240u, _esp0);
  ESP += 4; return;
L_11d15293:;
  /* 11d15293 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d15297 ret  */
  ESPCHK(0x11d15240u, _esp0);
  ESP += 4; return;
}

/* FUN_100052a0 @ 0x11d152a0 (664 bytes, 269 insns) [15 switch table(s)] */
void f_11d152a0(void) {
  FTRACE(0x11d152a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d152a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d152a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d152a3 push edi */
  push32((uint32_t)(EDI));
  /* 11d152a4 push esi */
  push32((uint32_t)(ESI));
  /* 11d152a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d152a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d152ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d152ae mov eax, ecx */
  EAX = (ECX);
  /* 11d152b0 mov edx, ecx */
  EDX = (ECX);
  /* 11d152b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d152b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d152b6 jbe 0x11d152c0 */
  if ((C.cf||C.zf)) goto L_11d152c0;
  /* 11d152b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d152ba jb 0x11d15438 */
  if (C.cf) goto L_11d15438;
L_11d152c0:;
  /* 11d152c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d152c6 jne 0x11d152dc */
  if (!C.zf) goto L_11d152dc;
  /* 11d152c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d152cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d152ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d152d1 jb 0x11d152fc */
  if (C.cf) goto L_11d152fc;
  /* 11d152d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d152d5 jmp dword ptr [edx*4 + 0x11d153e8] */
  switch (EDX) {
    case 0: goto L_11d153f8;
    case 1: goto L_11d15400;
    case 2: goto L_11d1540c;
    case 3: goto L_11d15420;
    default: x86_unimpl("switch@0x11d152d5 out of table"); return;
  }
L_11d152dc:;
  /* 11d152dc mov eax, edi */
  EAX = (EDI);
  /* 11d152de mov edx, 3 */
  EDX = (0x3u);
  /* 11d152e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d152e6 jb 0x11d152f4 */
  if (C.cf) goto L_11d152f4;
  /* 11d152e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d152eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d152ed jmp dword ptr [eax*4 + 0x11d15300] */
  switch (EAX) {
    case 1: goto L_11d15310;
    case 2: goto L_11d1533c;
    case 3: goto L_11d15360;
    default: x86_unimpl("switch@0x11d152ed out of table"); return;
  }
L_11d152f4:;
  /* 11d152f4 jmp dword ptr [ecx*4 + 0x11d153f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11d153f8)))); return;
  /* 11d152fb nop  */
  /* nop */
L_11d152fc:;
  /* 11d152fc jmp dword ptr [ecx*4 + 0x11d1537c] */
  switch (ECX) {
    case 0: goto L_11d153df;
    case 1: goto L_11d153cc;
    case 2: goto L_11d153c4;
    case 3: goto L_11d153bc;
    case 4: goto L_11d153b4;
    case 5: goto L_11d153ac;
    case 6: goto L_11d153a4;
    case 7: goto L_11d1539c;
    default: x86_unimpl("switch@0x11d152fc out of table"); return;
  }
  /* 11d15303 nop  */
  /* nop */
L_11d15310:;
  /* 11d15310 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d15312 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d15314 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d15316 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d15319 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d1531c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d1531f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d15322 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d15325 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15328 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1532b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1532e jb 0x11d152fc */
  if (C.cf) goto L_11d152fc;
  /* 11d15330 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d15332 jmp dword ptr [edx*4 + 0x11d153e8] */
  switch (EDX) {
    case 0: goto L_11d153f8;
    case 1: goto L_11d15400;
    case 2: goto L_11d1540c;
    case 3: goto L_11d15420;
    default: x86_unimpl("switch@0x11d15332 out of table"); return;
  }
  /* 11d15339 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d1533c:;
  /* 11d1533c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d1533e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d15340 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d15342 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d15345 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d15348 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d1534b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1534e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15351 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15354 jb 0x11d152fc */
  if (C.cf) goto L_11d152fc;
  /* 11d15356 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d15358 jmp dword ptr [edx*4 + 0x11d153e8] */
  switch (EDX) {
    case 0: goto L_11d153f8;
    case 1: goto L_11d15400;
    case 2: goto L_11d1540c;
    case 3: goto L_11d15420;
    default: x86_unimpl("switch@0x11d15358 out of table"); return;
  }
  /* 11d1535f nop  */
  /* nop */
L_11d15360:;
  /* 11d15360 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d15362 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d15364 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d15366 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d15367 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d1536a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d1536b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1536e jb 0x11d152fc */
  if (C.cf) goto L_11d152fc;
  /* 11d15370 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d15372 jmp dword ptr [edx*4 + 0x11d153e8] */
  switch (EDX) {
    case 0: goto L_11d153f8;
    case 1: goto L_11d15400;
    case 2: goto L_11d1540c;
    case 3: goto L_11d15420;
    default: x86_unimpl("switch@0x11d15372 out of table"); return;
  }
  /* 11d15379 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d1539c:;
  /* 11d1539c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11d153a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11d153a4:;
  /* 11d153a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11d153a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11d153ac:;
  /* 11d153ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11d153b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11d153b4:;
  /* 11d153b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11d153b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11d153bc:;
  /* 11d153bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11d153c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11d153c4:;
  /* 11d153c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11d153c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11d153cc:;
  /* 11d153cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11d153d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11d153d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d153db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d153dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d153df:;
  /* 11d153df jmp dword ptr [edx*4 + 0x11d153e8] */
  switch (EDX) {
    case 0: goto L_11d153f8;
    case 1: goto L_11d15400;
    case 2: goto L_11d1540c;
    case 3: goto L_11d15420;
    default: x86_unimpl("switch@0x11d153df out of table"); return;
  }
  /* 11d153e6 mov edi, edi */
  EDI = (EDI);
L_11d153f8:;
  /* 11d153f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d153fb pop esi */
  ESI = (pop32());
  /* 11d153fc pop edi */
  EDI = (pop32());
  /* 11d153fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d153fe ret  */
  ESPCHK(0x11d152a0u, _esp0);
  ESP += 4; return;
  /* 11d153ff nop  */
  /* nop */
L_11d15400:;
  /* 11d15400 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d15402 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d15404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15407 pop esi */
  ESI = (pop32());
  /* 11d15408 pop edi */
  EDI = (pop32());
  /* 11d15409 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1540a ret  */
  ESPCHK(0x11d152a0u, _esp0);
  ESP += 4; return;
  /* 11d1540b nop  */
  /* nop */
L_11d1540c:;
  /* 11d1540c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d1540e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d15410 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d15413 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d15416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15419 pop esi */
  ESI = (pop32());
  /* 11d1541a pop edi */
  EDI = (pop32());
  /* 11d1541b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1541c ret  */
  ESPCHK(0x11d152a0u, _esp0);
  ESP += 4; return;
  /* 11d1541d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d15420:;
  /* 11d15420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d15422 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d15424 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d15427 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d1542a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d1542d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d15430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15433 pop esi */
  ESI = (pop32());
  /* 11d15434 pop edi */
  EDI = (pop32());
  /* 11d15435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d15436 ret  */
  ESPCHK(0x11d152a0u, _esp0);
  ESP += 4; return;
  /* 11d15437 nop  */
  /* nop */
L_11d15438:;
  /* 11d15438 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11d1543c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11d15440 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d15446 jne 0x11d1546c */
  if (!C.zf) goto L_11d1546c;
  /* 11d15448 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d1544b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d1544e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15451 jb 0x11d15460 */
  if (C.cf) goto L_11d15460;
  /* 11d15453 std  */
  C.df=1;
  /* 11d15454 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d15456 cld  */
  C.df=0;
  /* 11d15457 jmp dword ptr [edx*4 + 0x11d15580] */
  switch (EDX) {
    case 0: goto L_11d15590;
    case 1: goto L_11d15598;
    case 2: goto L_11d155a8;
    case 3: goto L_11d155bc;
    default: x86_unimpl("switch@0x11d15457 out of table"); return;
  }
  /* 11d1545e mov edi, edi */
  EDI = (EDI);
L_11d15460:;
  /* 11d15460 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d15462 jmp dword ptr [ecx*4 + 0x11d15530] */
  switch (ECX) {
    case 0: goto L_11d15577;
    default: x86_unimpl("switch@0x11d15462 out of table"); return;
  }
  /* 11d15469 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d1546c:;
  /* 11d1546c mov eax, edi */
  EAX = (EDI);
  /* 11d1546e mov edx, 3 */
  EDX = (0x3u);
  /* 11d15473 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15476 jb 0x11d15484 */
  if (C.cf) goto L_11d15484;
  /* 11d15478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d1547b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1547d jmp dword ptr [eax*4 + 0x11d15488] */
  switch (EAX) {
    case 1: goto L_11d15498;
    case 2: goto L_11d154b8;
    case 3: goto L_11d154e0;
    default: x86_unimpl("switch@0x11d1547d out of table"); return;
  }
L_11d15484:;
  /* 11d15484 jmp dword ptr [ecx*4 + 0x11d15580] */
  switch (ECX) {
    case 0: goto L_11d15590;
    case 1: goto L_11d15598;
    case 2: goto L_11d155a8;
    case 3: goto L_11d155bc;
    default: x86_unimpl("switch@0x11d15484 out of table"); return;
  }
  /* 11d1548b nop  */
  /* nop */
L_11d15498:;
  /* 11d15498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d1549b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d1549d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d154a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d154a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d154a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d154a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d154a8 jb 0x11d15460 */
  if (C.cf) goto L_11d15460;
  /* 11d154aa std  */
  C.df=1;
  /* 11d154ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d154ad cld  */
  C.df=0;
  /* 11d154ae jmp dword ptr [edx*4 + 0x11d15580] */
  switch (EDX) {
    case 0: goto L_11d15590;
    case 1: goto L_11d15598;
    case 2: goto L_11d155a8;
    case 3: goto L_11d155bc;
    default: x86_unimpl("switch@0x11d154ae out of table"); return;
  }
  /* 11d154b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d154b8:;
  /* 11d154b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d154bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d154bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d154c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d154c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d154c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d154c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d154cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d154cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d154d2 jb 0x11d15460 */
  if (C.cf) goto L_11d15460;
  /* 11d154d4 std  */
  C.df=1;
  /* 11d154d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d154d7 cld  */
  C.df=0;
  /* 11d154d8 jmp dword ptr [edx*4 + 0x11d15580] */
  switch (EDX) {
    case 0: goto L_11d15590;
    case 1: goto L_11d15598;
    case 2: goto L_11d155a8;
    case 3: goto L_11d155bc;
    default: x86_unimpl("switch@0x11d154d8 out of table"); return;
  }
  /* 11d154df nop  */
  /* nop */
L_11d154e0:;
  /* 11d154e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d154e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d154e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d154e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d154eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d154ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d154f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d154f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d154f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d154fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d154fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15500 jb 0x11d15460 */
  if (C.cf) goto L_11d15460;
  /* 11d15506 std  */
  C.df=1;
  /* 11d15507 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d15509 cld  */
  C.df=0;
  /* 11d1550a jmp dword ptr [edx*4 + 0x11d15580] */
  switch (EDX) {
    case 0: goto L_11d15590;
    case 1: goto L_11d15598;
    case 2: goto L_11d155a8;
    case 3: goto L_11d155bc;
    default: x86_unimpl("switch@0x11d1550a out of table"); return;
  }
  /* 11d15511 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11d15514 xor al, 0x55 */
  { uint32_t _r=(AL)^(0x55u); AL = (_r); fl_logic(_r,8); }
  /* 11d15516 rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d15518 cmp al, 0x55 */
  { uint32_t _a=(AL),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1551a rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d1551c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11d1551d push ebp */
  push32((uint32_t)(EBP));
  /* 11d1551e rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d15520 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11d15521 push ebp */
  push32((uint32_t)(EBP));
  /* 11d15522 rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d15524 push esp */
  push32((uint32_t)(ESP));
  /* 11d15525 push ebp */
  push32((uint32_t)(EBP));
  /* 11d15526 rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d15528 pop esp */
  ESP = (pop32());
  /* 11d15529 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1552a rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d1552c push ebp */
  push32((uint32_t)(EBP));
  /* 11d1552e rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d15534 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11d15538 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11d1553c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11d15540 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11d15544 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11d15548 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11d1554c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11d15550 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11d15554 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11d15558 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11d1555c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11d15560 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11d15564 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11d15568 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11d1556c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d15573 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15575 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d15577:;
  /* 11d15577 jmp dword ptr [edx*4 + 0x11d15580] */
  switch (EDX) {
    case 0: goto L_11d15590;
    case 1: goto L_11d15598;
    case 2: goto L_11d155a8;
    case 3: goto L_11d155bc;
    default: x86_unimpl("switch@0x11d15577 out of table"); return;
  }
  /* 11d1557e mov edi, edi */
  EDI = (EDI);
L_11d15590:;
  /* 11d15590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15593 pop esi */
  ESI = (pop32());
  /* 11d15594 pop edi */
  EDI = (pop32());
  /* 11d15595 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d15596 ret  */
  ESPCHK(0x11d152a0u, _esp0);
  ESP += 4; return;
  /* 11d15597 nop  */
  /* nop */
L_11d15598:;
  /* 11d15598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d1559b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d1559e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d155a1 pop esi */
  ESI = (pop32());
  /* 11d155a2 pop edi */
  EDI = (pop32());
  /* 11d155a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d155a4 ret  */
  ESPCHK(0x11d152a0u, _esp0);
  ESP += 4; return;
  /* 11d155a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d155a8:;
  /* 11d155a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d155ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d155ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d155b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d155b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d155b7 pop esi */
  ESI = (pop32());
  /* 11d155b8 pop edi */
  EDI = (pop32());
  /* 11d155b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d155ba ret  */
  ESPCHK(0x11d152a0u, _esp0);
  ESP += 4; return;
  /* 11d155bb nop  */
  /* nop */
L_11d155bc:;
  /* 11d155bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d155bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d155c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d155c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d155c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d155cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d155ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d155d1 pop esi */
  ESI = (pop32());
  /* 11d155d2 pop edi */
  EDI = (pop32());
  /* 11d155d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d155d4 ret  */
  ESPCHK(0x11d152a0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11d155e0 (123 bytes, 44 insns) */
void f_11d155e0(void) {
  FTRACE(0x11d155e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d155e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d155e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d155ea je 0x11d15600 */
  if (C.zf) goto L_11d15600;
L_11d155ec:;
  /* 11d155ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11d155ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d155ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d155f1 je 0x11d15633 */
  if (C.zf) goto L_11d15633;
  /* 11d155f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11d155f9 jne 0x11d155ec */
  if (!C.zf) goto L_11d155ec;
  /* 11d155fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d15600:;
  /* 11d15600 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d15602 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d15607 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15609 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1560c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1560e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15611 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d15616 je 0x11d15600 */
  if (C.zf) goto L_11d15600;
  /* 11d15618 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11d1561b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d1561d je 0x11d15651 */
  if (C.zf) goto L_11d15651;
  /* 11d1561f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d15621 je 0x11d15647 */
  if (C.zf) goto L_11d15647;
  /* 11d15623 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d15628 je 0x11d1563d */
  if (C.zf) goto L_11d1563d;
  /* 11d1562a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d1562f je 0x11d15633 */
  if (C.zf) goto L_11d15633;
  /* 11d15631 jmp 0x11d15600 */
  goto L_11d15600;
L_11d15633:;
  /* 11d15633 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11d15636 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d1563a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1563c ret  */
  ESPCHK(0x11d155e0u, _esp0);
  ESP += 4; return;
L_11d1563d:;
  /* 11d1563d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11d15640 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d15644 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d15646 ret  */
  ESPCHK(0x11d155e0u, _esp0);
  ESP += 4; return;
L_11d15647:;
  /* 11d15647 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11d1564a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d1564e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d15650 ret  */
  ESPCHK(0x11d155e0u, _esp0);
  ESP += 4; return;
L_11d15651:;
  /* 11d15651 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11d15654 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d15658 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1565a ret  */
  ESPCHK(0x11d155e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005664 @ 0x11d15664 (41 bytes, 12 insns) */
void f_11d15664(void) {
  FTRACE(0x11d15664u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d15664 push esi */
  push32((uint32_t)(ESI));
  /* 11d15665 mov esi, dword ptr [0x11d1c068] */
  ESI = (r32((uint32_t)(0x11d1c068)));
  /* 11d1566b push dword ptr [0x11d1e794] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e794))));
  /* 11d15671 call esi */
  call_ind((uint32_t)(ESI), 0x11d15673u);
  /* 11d15673 push dword ptr [0x11d1e784] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e784))));
  /* 11d15679 call esi */
  call_ind((uint32_t)(ESI), 0x11d1567bu);
  /* 11d1567b push dword ptr [0x11d1e774] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e774))));
  /* 11d15681 call esi */
  call_ind((uint32_t)(ESI), 0x11d15683u);
  /* 11d15683 push dword ptr [0x11d1e754] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e754))));
  /* 11d15689 call esi */
  call_ind((uint32_t)(ESI), 0x11d1568bu);
  /* 11d1568b pop esi */
  ESI = (pop32());
  /* 11d1568c ret  */
  ESPCHK(0x11d15664u, _esp0);
  ESP += 4; return;
}

/* FUN_1000568d @ 0x11d1568d (108 bytes, 34 insns) */
void f_11d1568d(void) {
  FTRACE(0x11d1568du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1568d push esi */
  push32((uint32_t)(ESI));
  /* 11d1568e push edi */
  push32((uint32_t)(EDI));
  /* 11d1568f mov edi, dword ptr [0x11d1c09c] */
  EDI = (r32((uint32_t)(0x11d1c09c)));
  /* 11d15695 mov esi, 0x11d1e750 */
  ESI = (0x11d1e750u);
L_11d1569a:;
  /* 11d1569a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1569c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1569e je 0x11d156cb */
  if (C.zf) goto L_11d156cb;
  /* 11d156a0 cmp esi, 0x11d1e794 */
  { uint32_t _a=(ESI),_b=(0x11d1e794u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d156a6 je 0x11d156cb */
  if (C.zf) goto L_11d156cb;
  /* 11d156a8 cmp esi, 0x11d1e784 */
  { uint32_t _a=(ESI),_b=(0x11d1e784u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d156ae je 0x11d156cb */
  if (C.zf) goto L_11d156cb;
  /* 11d156b0 cmp esi, 0x11d1e774 */
  { uint32_t _a=(ESI),_b=(0x11d1e774u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d156b6 je 0x11d156cb */
  if (C.zf) goto L_11d156cb;
  /* 11d156b8 cmp esi, 0x11d1e754 */
  { uint32_t _a=(ESI),_b=(0x11d1e754u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d156be je 0x11d156cb */
  if (C.zf) goto L_11d156cb;
  /* 11d156c0 push eax */
  push32((uint32_t)(EAX));
  /* 11d156c1 call edi */
  call_ind((uint32_t)(EDI), 0x11d156c3u);
  /* 11d156c3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d156c5 call 0x11d16cd5 */
  push32(0x11d156cau); f_11d16cd5();
  /* 11d156ca pop ecx */
  ECX = (pop32());
L_11d156cb:;
  /* 11d156cb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d156ce cmp esi, 0x11d1e810 */
  { uint32_t _a=(ESI),_b=(0x11d1e810u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d156d4 jl 0x11d1569a */
  if ((C.sf!=C.of)) goto L_11d1569a;
  /* 11d156d6 push dword ptr [0x11d1e774] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e774))));
  /* 11d156dc call edi */
  call_ind((uint32_t)(EDI), 0x11d156deu);
  /* 11d156de push dword ptr [0x11d1e784] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e784))));
  /* 11d156e4 call edi */
  call_ind((uint32_t)(EDI), 0x11d156e6u);
  /* 11d156e6 push dword ptr [0x11d1e794] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e794))));
  /* 11d156ec call edi */
  call_ind((uint32_t)(EDI), 0x11d156eeu);
  /* 11d156ee push dword ptr [0x11d1e754] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e754))));
  /* 11d156f4 call edi */
  call_ind((uint32_t)(EDI), 0x11d156f6u);
  /* 11d156f6 pop edi */
  EDI = (pop32());
  /* 11d156f7 pop esi */
  ESI = (pop32());
  /* 11d156f8 ret  */
  ESPCHK(0x11d1568du, _esp0);
  ESP += 4; return;
}

/* FUN_100056f9 @ 0x11d156f9 (97 bytes, 37 insns) */
void f_11d156f9(void) {
  FTRACE(0x11d156f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d156f9 push ebp */
  push32((uint32_t)(EBP));
  /* 11d156fa mov ebp, esp */
  EBP = (ESP);
  /* 11d156fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d156ff push esi */
  push32((uint32_t)(ESI));
  /* 11d15700 cmp dword ptr [eax*4 + 0x11d1e750], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11d1e750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15708 lea esi, [eax*4 + 0x11d1e750] */
  ESI = ((uint32_t)(EAX*4 + 0x11d1e750));
  /* 11d1570f jne 0x11d1574f */
  if (!C.zf) goto L_11d1574f;
  /* 11d15711 push edi */
  push32((uint32_t)(EDI));
  /* 11d15712 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11d15714 call 0x11d13bb0 */
  push32(0x11d15719u); f_11d13bb0();
  /* 11d15719 mov edi, eax */
  EDI = (EAX);
  /* 11d1571b pop ecx */
  ECX = (pop32());
  /* 11d1571c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d1571e jne 0x11d15728 */
  if (!C.zf) goto L_11d15728;
  /* 11d15720 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d15722 call 0x11d131a3 */
  push32(0x11d15727u); f_11d131a3();
  /* 11d15727 pop ecx */
  ECX = (pop32());
L_11d15728:;
  /* 11d15728 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d1572a call 0x11d156f9 */
  push32(0x11d1572fu); f_11d156f9();
  /* 11d1572f cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15732 pop ecx */
  ECX = (pop32());
  /* 11d15733 push edi */
  push32((uint32_t)(EDI));
  /* 11d15734 jne 0x11d15740 */
  if (!C.zf) goto L_11d15740;
  /* 11d15736 call dword ptr [0x11d1c068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c068))), 0x11d1573cu);
  /* 11d1573c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11d1573e jmp 0x11d15746 */
  goto L_11d15746;
L_11d15740:;
  /* 11d15740 call 0x11d16cd5 */
  push32(0x11d15745u); f_11d16cd5();
  /* 11d15745 pop ecx */
  ECX = (pop32());
L_11d15746:;
  /* 11d15746 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d15748 call 0x11d1575a */
  push32(0x11d1574du); f_11d1575a();
  /* 11d1574d pop ecx */
  ECX = (pop32());
  /* 11d1574e pop edi */
  EDI = (pop32());
L_11d1574f:;
  /* 11d1574f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d15751 call dword ptr [0x11d1c05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c05c))), 0x11d15757u);
  /* 11d15757 pop esi */
  ESI = (pop32());
  /* 11d15758 pop ebp */
  EBP = (pop32());
  /* 11d15759 ret  */
  ESPCHK(0x11d156f9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000575a @ 0x11d1575a (21 bytes, 7 insns) */
void f_11d1575a(void) {
  FTRACE(0x11d1575au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1575a push ebp */
  push32((uint32_t)(EBP));
  /* 11d1575b mov ebp, esp */
  EBP = (ESP);
  /* 11d1575d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15760 push dword ptr [eax*4 + 0x11d1e750] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11d1e750))));
  /* 11d15767 call dword ptr [0x11d1c058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c058))), 0x11d1576du);
  /* 11d1576d pop ebp */
  EBP = (pop32());
  /* 11d1576e ret  */
  ESPCHK(0x11d1575au, _esp0);
  ESP += 4; return;
}

/* FUN_1000576f @ 0x11d1576f (72 bytes, 17 insns) */
void f_11d1576f(void) {
  FTRACE(0x11d1576fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1576f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11d15774 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d15776 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d1577c call dword ptr [0x11d1c004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c004))), 0x11d15782u);
  /* 11d15782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d15784 mov dword ptr [0x11d38818], eax */
  w32((uint32_t)(0x11d38818), (EAX));
  /* 11d15789 jne 0x11d1578c */
  if (!C.zf) goto L_11d1578c;
  /* 11d1578b ret  */
  ESPCHK(0x11d1576fu, _esp0);
  ESP += 4; return;
L_11d1578c:;
  /* 11d1578c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d15790 and dword ptr [0x11d38810], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11d38810)))&(0x0u); w32((uint32_t)(0x11d38810), (_r)); fl_logic(_r,32); }
  /* 11d15797 and dword ptr [0x11d38814], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11d38814)))&(0x0u); w32((uint32_t)(0x11d38814), (_r)); fl_logic(_r,32); }
  /* 11d1579e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d157a0 mov dword ptr [0x11d3880c], eax */
  w32((uint32_t)(0x11d3880c), (EAX));
  /* 11d157a5 mov dword ptr [0x11d3881c], ecx */
  w32((uint32_t)(0x11d3881c), (ECX));
  /* 11d157ab mov dword ptr [0x11d38804], 0x10 */
  w32((uint32_t)(0x11d38804), (0x10u));
  /* 11d157b5 pop eax */
  EAX = (pop32());
  /* 11d157b6 ret  */
  ESPCHK(0x11d1576fu, _esp0);
  ESP += 4; return;
}

/* FUN_100057b7 @ 0x11d157b7 (43 bytes, 14 insns) */
void f_11d157b7(void) {
  FTRACE(0x11d157b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d157b7 mov eax, dword ptr [0x11d38814] */
  EAX = (r32((uint32_t)(0x11d38814)));
  /* 11d157bc lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11d157bf mov eax, dword ptr [0x11d38818] */
  EAX = (r32((uint32_t)(0x11d38818)));
  /* 11d157c4 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11d157c7:;
  /* 11d157c7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d157c9 jae 0x11d157df */
  if (!C.cf) goto L_11d157df;
  /* 11d157cb mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d157cf sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d157d2 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d157d8 jb 0x11d157e1 */
  if (C.cf) goto L_11d157e1;
  /* 11d157da add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d157dd jmp 0x11d157c7 */
  goto L_11d157c7;
L_11d157df:;
  /* 11d157df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d157e1:;
  /* 11d157e1 ret  */
  ESPCHK(0x11d157b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100057e2 @ 0x11d157e2 (809 bytes, 265 insns) */
void f_11d157e2(void) {
  FTRACE(0x11d157e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d157e2 push ebp */
  push32((uint32_t)(EBP));
  /* 11d157e3 mov ebp, esp */
  EBP = (ESP);
  /* 11d157e5 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d157e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d157eb push ebx */
  push32((uint32_t)(EBX));
  /* 11d157ec push esi */
  push32((uint32_t)(ESI));
  /* 11d157ed mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d157f0 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d157f3 push edi */
  push32((uint32_t)(EDI));
  /* 11d157f4 mov edi, esi */
  EDI = (ESI);
  /* 11d157f6 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d157f9 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d157fc shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11d157ff mov ecx, edi */
  ECX = (EDI);
  /* 11d15801 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d15807 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11d1580e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d15811 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11d15813 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d15814 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11d15817 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d1581a jne 0x11d15b06 */
  if (!C.zf) goto L_11d15b06;
  /* 11d15820 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11d15823 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11d15826 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11d15829 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11d1582c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d1582f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d15832 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11d15835 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11d15838 jne 0x11d158b8 */
  if (!C.zf) goto L_11d158b8;
  /* 11d1583a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d1583d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d1583e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15841 jbe 0x11d15846 */
  if ((C.cf||C.zf)) goto L_11d15846;
  /* 11d15843 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d15845 pop edx */
  EDX = (pop32());
L_11d15846:;
  /* 11d15846 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11d15849 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1584c jne 0x11d1589a */
  if (!C.zf) goto L_11d1589a;
  /* 11d1584e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15851 jae 0x11d15871 */
  if (!C.cf) goto L_11d15871;
  /* 11d15853 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d15858 mov ecx, edx */
  ECX = (EDX);
  /* 11d1585a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d1585c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11d15860 not ebx */
  EBX = (~(EBX));
  /* 11d15862 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11d15866 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11d15868 jne 0x11d15892 */
  if (!C.zf) goto L_11d15892;
  /* 11d1586a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1586d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11d1586f jmp 0x11d15892 */
  goto L_11d15892;
L_11d15871:;
  /* 11d15871 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11d15874 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d15879 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d1587b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11d1587f not ebx */
  EBX = (~(EBX));
  /* 11d15881 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11d15888 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11d1588a jne 0x11d15892 */
  if (!C.zf) goto L_11d15892;
  /* 11d1588c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1588f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11d15892:;
  /* 11d15892 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d15895 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d15898 jmp 0x11d1589d */
  goto L_11d1589d;
L_11d1589a:;
  /* 11d1589a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11d1589d:;
  /* 11d1589d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11d158a0 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11d158a3 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d158a6 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11d158a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d158ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d158af mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d158b2 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d158b5 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11d158b8:;
  /* 11d158b8 mov edx, ecx */
  EDX = (ECX);
  /* 11d158ba sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d158bd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d158be cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d158c1 jbe 0x11d158c6 */
  if ((C.cf||C.zf)) goto L_11d158c6;
  /* 11d158c3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d158c5 pop edx */
  EDX = (pop32());
L_11d158c6:;
  /* 11d158c6 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d158c9 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11d158cc mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11d158cf jne 0x11d15969 */
  if (!C.zf) goto L_11d15969;
  /* 11d158d5 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d158d8 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d158db sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11d158de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d158e0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11d158e3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d158e4 pop esi */
  ESI = (pop32());
  /* 11d158e5 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d158e7 jbe 0x11d158eb */
  if ((C.cf||C.zf)) goto L_11d158eb;
  /* 11d158e9 mov ebx, esi */
  EBX = (ESI);
L_11d158eb:;
  /* 11d158eb add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d158ee mov edx, ecx */
  EDX = (ECX);
  /* 11d158f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d158f3 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11d158f6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d158f7 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d158f9 jbe 0x11d158fd */
  if ((C.cf||C.zf)) goto L_11d158fd;
  /* 11d158fb mov edx, esi */
  EDX = (ESI);
L_11d158fd:;
  /* 11d158fd cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d158ff je 0x11d15964 */
  if (C.zf) goto L_11d15964;
  /* 11d15901 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d15904 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11d15907 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1590a jne 0x11d1594c */
  if (!C.zf) goto L_11d1594c;
  /* 11d1590c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1590f jae 0x11d1592d */
  if (!C.cf) goto L_11d1592d;
  /* 11d15911 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11d15916 mov ecx, ebx */
  ECX = (EBX);
  /* 11d15918 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11d1591a not esi */
  ESI = (~(ESI));
  /* 11d1591c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11d15920 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11d15924 jne 0x11d1594c */
  if (!C.zf) goto L_11d1594c;
  /* 11d15926 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15929 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11d1592b jmp 0x11d1594c */
  goto L_11d1594c;
L_11d1592d:;
  /* 11d1592d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11d15930 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11d15935 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11d15937 not esi */
  ESI = (~(ESI));
  /* 11d15939 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11d15940 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11d15944 jne 0x11d1594c */
  if (!C.zf) goto L_11d1594c;
  /* 11d15946 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15949 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11d1594c:;
  /* 11d1594c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1594f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11d15952 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d15955 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11d15958 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1595b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11d1595e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d15961 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11d15964:;
  /* 11d15964 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d15967 jmp 0x11d1596c */
  goto L_11d1596c;
L_11d15969:;
  /* 11d15969 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11d1596c:;
  /* 11d1596c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15970 jne 0x11d1597a */
  if (!C.zf) goto L_11d1597a;
  /* 11d15972 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15974 je 0x11d159fb */
  if (C.zf) goto L_11d159fb;
L_11d1597a:;
  /* 11d1597a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1597d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11d15981 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11d15984 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11d15987 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11d1598a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11d1598d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d15990 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11d15993 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d15996 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15999 jne 0x11d159fb */
  if (!C.zf) goto L_11d159fb;
  /* 11d1599b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11d1599f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d159a2 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11d159a5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11d159a7 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11d159ab jae 0x11d159d2 */
  if (!C.cf) goto L_11d159d2;
  /* 11d159ad cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d159b1 jne 0x11d159c1 */
  if (!C.zf) goto L_11d159c1;
  /* 11d159b3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d159b8 mov ecx, edx */
  ECX = (EDX);
  /* 11d159ba shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d159bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d159bf or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11d159c1:;
  /* 11d159c1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d159c6 mov ecx, edx */
  ECX = (EDX);
  /* 11d159c8 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d159ca lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11d159ce or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d159d0 jmp 0x11d159fb */
  goto L_11d159fb;
L_11d159d2:;
  /* 11d159d2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d159d6 jne 0x11d159e8 */
  if (!C.zf) goto L_11d159e8;
  /* 11d159d8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11d159db mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d159e0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d159e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d159e5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11d159e8:;
  /* 11d159e8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11d159eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d159f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d159f2 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11d159f9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11d159fb:;
  /* 11d159fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d159fe mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d15a00 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11d15a04 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d15a07 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11d15a09 jne 0x11d15b06 */
  if (!C.zf) goto L_11d15b06;
  /* 11d15a0f mov eax, dword ptr [0x11d38810] */
  EAX = (r32((uint32_t)(0x11d38810)));
  /* 11d15a14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d15a16 je 0x11d15af8 */
  if (C.zf) goto L_11d15af8;
  /* 11d15a1c mov ecx, dword ptr [0x11d38808] */
  ECX = (r32((uint32_t)(0x11d38808)));
  /* 11d15a22 mov esi, dword ptr [0x11d1c070] */
  ESI = (r32((uint32_t)(0x11d1c070)));
  /* 11d15a28 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11d15a2b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15a2e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11d15a33 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11d15a38 push ebx */
  push32((uint32_t)(EBX));
  /* 11d15a39 push ecx */
  push32((uint32_t)(ECX));
  /* 11d15a3a call esi */
  call_ind((uint32_t)(ESI), 0x11d15a3cu);
  /* 11d15a3c mov ecx, dword ptr [0x11d38808] */
  ECX = (r32((uint32_t)(0x11d38808)));
  /* 11d15a42 mov eax, dword ptr [0x11d38810] */
  EAX = (r32((uint32_t)(0x11d38810)));
  /* 11d15a47 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d15a4c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d15a4e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11d15a51 mov eax, dword ptr [0x11d38810] */
  EAX = (r32((uint32_t)(0x11d38810)));
  /* 11d15a56 mov ecx, dword ptr [0x11d38808] */
  ECX = (r32((uint32_t)(0x11d38808)));
  /* 11d15a5c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d15a5f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11d15a67 mov eax, dword ptr [0x11d38810] */
  EAX = (r32((uint32_t)(0x11d38810)));
  /* 11d15a6c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d15a6f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11d15a72 mov eax, dword ptr [0x11d38810] */
  EAX = (r32((uint32_t)(0x11d38810)));
  /* 11d15a77 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d15a7a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d15a7e jne 0x11d15a89 */
  if (!C.zf) goto L_11d15a89;
  /* 11d15a80 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d15a84 mov eax, dword ptr [0x11d38810] */
  EAX = (r32((uint32_t)(0x11d38810)));
L_11d15a89:;
  /* 11d15a89 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15a8d jne 0x11d15af8 */
  if (!C.zf) goto L_11d15af8;
  /* 11d15a8f push ebx */
  push32((uint32_t)(EBX));
  /* 11d15a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d15a92 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11d15a95 call esi */
  call_ind((uint32_t)(ESI), 0x11d15a97u);
  /* 11d15a97 mov eax, dword ptr [0x11d38810] */
  EAX = (r32((uint32_t)(0x11d38810)));
  /* 11d15a9c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11d15a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d15aa1 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d15aa7 call dword ptr [0x11d1c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c06c))), 0x11d15aadu);
  /* 11d15aad mov eax, dword ptr [0x11d38814] */
  EAX = (r32((uint32_t)(0x11d38814)));
  /* 11d15ab2 mov edx, dword ptr [0x11d38818] */
  EDX = (r32((uint32_t)(0x11d38818)));
  /* 11d15ab8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11d15abb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11d15abe mov ecx, eax */
  ECX = (EAX);
  /* 11d15ac0 mov eax, dword ptr [0x11d38810] */
  EAX = (r32((uint32_t)(0x11d38810)));
  /* 11d15ac5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d15ac7 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11d15acb push ecx */
  push32((uint32_t)(ECX));
  /* 11d15acc lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11d15acf push ecx */
  push32((uint32_t)(ECX));
  /* 11d15ad0 push eax */
  push32((uint32_t)(EAX));
  /* 11d15ad1 call 0x11d152a0 */
  push32(0x11d15ad6u); f_11d152a0();
  /* 11d15ad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15ad9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15adc dec dword ptr [0x11d38814] */
  { uint32_t _r=(r32((uint32_t)(0x11d38814)))-1; w32((uint32_t)(0x11d38814), (_r)); fl_dec(_r,32); }
  /* 11d15ae2 cmp eax, dword ptr [0x11d38810] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d38810))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15ae8 jbe 0x11d15aee */
  if ((C.cf||C.zf)) goto L_11d15aee;
  /* 11d15aea sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11d15aee:;
  /* 11d15aee mov eax, dword ptr [0x11d38818] */
  EAX = (r32((uint32_t)(0x11d38818)));
  /* 11d15af3 mov dword ptr [0x11d3880c], eax */
  w32((uint32_t)(0x11d3880c), (EAX));
L_11d15af8:;
  /* 11d15af8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15afb mov dword ptr [0x11d38808], edi */
  w32((uint32_t)(0x11d38808), (EDI));
  /* 11d15b01 mov dword ptr [0x11d38810], eax */
  w32((uint32_t)(0x11d38810), (EAX));
L_11d15b06:;
  /* 11d15b06 pop edi */
  EDI = (pop32());
  /* 11d15b07 pop esi */
  ESI = (pop32());
  /* 11d15b08 pop ebx */
  EBX = (pop32());
  /* 11d15b09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d15b0a ret  */
  ESPCHK(0x11d157e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b0b @ 0x11d15b0b (777 bytes, 275 insns) */
void f_11d15b0b(void) {
  FTRACE(0x11d15b0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d15b0b push ebp */
  push32((uint32_t)(EBP));
  /* 11d15b0c mov ebp, esp */
  EBP = (ESP);
  /* 11d15b0e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d15b11 mov eax, dword ptr [0x11d38814] */
  EAX = (r32((uint32_t)(0x11d38814)));
  /* 11d15b16 mov edx, dword ptr [0x11d38818] */
  EDX = (r32((uint32_t)(0x11d38818)));
  /* 11d15b1c push ebx */
  push32((uint32_t)(EBX));
  /* 11d15b1d push esi */
  push32((uint32_t)(ESI));
  /* 11d15b1e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11d15b21 push edi */
  push32((uint32_t)(EDI));
  /* 11d15b22 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11d15b25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15b28 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11d15b2b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11d15b2e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11d15b31 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d15b34 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d15b37 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d15b38 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15b3b jge 0x11d15b4b */
  if ((C.sf==C.of)) goto L_11d15b4b;
  /* 11d15b3d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11d15b40 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11d15b42 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11d15b46 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11d15b49 jmp 0x11d15b5b */
  goto L_11d15b5b;
L_11d15b4b:;
  /* 11d15b4b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15b4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d15b51 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d15b53 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d15b55 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11d15b58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d15b5b:;
  /* 11d15b5b mov eax, dword ptr [0x11d3880c] */
  EAX = (r32((uint32_t)(0x11d3880c)));
  /* 11d15b60 mov ebx, eax */
  EBX = (EAX);
  /* 11d15b62 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15b64 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11d15b67 jae 0x11d15b82 */
  if (!C.cf) goto L_11d15b82;
L_11d15b69:;
  /* 11d15b69 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11d15b6c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11d15b6e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11d15b71 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11d15b73 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d15b75 jne 0x11d15b82 */
  if (!C.zf) goto L_11d15b82;
  /* 11d15b77 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15b7a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15b7d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11d15b80 jb 0x11d15b69 */
  if (C.cf) goto L_11d15b69;
L_11d15b82:;
  /* 11d15b82 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15b85 jne 0x11d15c00 */
  if (!C.zf) goto L_11d15c00;
  /* 11d15b87 mov ebx, edx */
  EBX = (EDX);
L_11d15b89:;
  /* 11d15b89 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15b8b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11d15b8e jae 0x11d15ba5 */
  if (!C.cf) goto L_11d15ba5;
  /* 11d15b90 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11d15b93 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11d15b95 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11d15b98 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11d15b9a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d15b9c jne 0x11d15ba3 */
  if (!C.zf) goto L_11d15ba3;
  /* 11d15b9e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15ba1 jmp 0x11d15b89 */
  goto L_11d15b89;
L_11d15ba3:;
  /* 11d15ba3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11d15ba5:;
  /* 11d15ba5 jne 0x11d15c00 */
  if (!C.zf) goto L_11d15c00;
L_11d15ba7:;
  /* 11d15ba7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15baa jae 0x11d15bbd */
  if (!C.cf) goto L_11d15bbd;
  /* 11d15bac cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15bb0 jne 0x11d15bba */
  if (!C.zf) goto L_11d15bba;
  /* 11d15bb2 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15bb5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11d15bb8 jmp 0x11d15ba7 */
  goto L_11d15ba7;
L_11d15bba:;
  /* 11d15bba cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11d15bbd:;
  /* 11d15bbd jne 0x11d15be5 */
  if (!C.zf) goto L_11d15be5;
  /* 11d15bbf mov ebx, edx */
  EBX = (EDX);
L_11d15bc1:;
  /* 11d15bc1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15bc3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11d15bc6 jae 0x11d15bd5 */
  if (!C.cf) goto L_11d15bd5;
  /* 11d15bc8 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15bcc jne 0x11d15bd3 */
  if (!C.zf) goto L_11d15bd3;
  /* 11d15bce add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15bd1 jmp 0x11d15bc1 */
  goto L_11d15bc1;
L_11d15bd3:;
  /* 11d15bd3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11d15bd5:;
  /* 11d15bd5 jne 0x11d15be5 */
  if (!C.zf) goto L_11d15be5;
  /* 11d15bd7 call 0x11d15e14 */
  push32(0x11d15bdcu); f_11d15e14();
  /* 11d15bdc mov ebx, eax */
  EBX = (EAX);
  /* 11d15bde test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d15be0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11d15be3 je 0x11d15bf9 */
  if (C.zf) goto L_11d15bf9;
L_11d15be5:;
  /* 11d15be5 push ebx */
  push32((uint32_t)(EBX));
  /* 11d15be6 call 0x11d15ec5 */
  push32(0x11d15bebu); f_11d15ec5();
  /* 11d15beb pop ecx */
  ECX = (pop32());
  /* 11d15bec mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11d15bef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d15bf1 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11d15bf4 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15bf7 jne 0x11d15c00 */
  if (!C.zf) goto L_11d15c00;
L_11d15bf9:;
  /* 11d15bf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d15bfb jmp 0x11d15e0f */
  goto L_11d15e0f;
L_11d15c00:;
  /* 11d15c00 mov dword ptr [0x11d3880c], ebx */
  w32((uint32_t)(0x11d3880c), (EBX));
  /* 11d15c06 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11d15c09 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11d15c0b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15c0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11d15c11 je 0x11d15c27 */
  if (C.zf) goto L_11d15c27;
  /* 11d15c13 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11d15c1a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11d15c1e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11d15c21 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11d15c23 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d15c25 jne 0x11d15c5e */
  if (!C.zf) goto L_11d15c5e;
L_11d15c27:;
  /* 11d15c27 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11d15c2d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11d15c30 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11d15c33 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11d15c36 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d15c3a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11d15c3d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11d15c3f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11d15c42 jne 0x11d15c5b */
  if (!C.zf) goto L_11d15c5b;
L_11d15c44:;
  /* 11d15c44 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11d15c4a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d15c4d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11d15c50 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15c53 mov edi, esi */
  EDI = (ESI);
  /* 11d15c55 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11d15c57 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11d15c59 je 0x11d15c44 */
  if (C.zf) goto L_11d15c44;
L_11d15c5b:;
  /* 11d15c5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11d15c5e:;
  /* 11d15c5e mov ecx, edx */
  ECX = (EDX);
  /* 11d15c60 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d15c62 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d15c68 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11d15c6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d15c72 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11d15c76 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11d15c78 jne 0x11d15c87 */
  if (!C.zf) goto L_11d15c87;
  /* 11d15c7a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11d15c81 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d15c83 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11d15c86 pop edi */
  EDI = (pop32());
L_11d15c87:;
  /* 11d15c87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d15c89 jl 0x11d15c90 */
  if ((C.sf!=C.of)) goto L_11d15c90;
  /* 11d15c8b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d15c8d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d15c8e jmp 0x11d15c87 */
  goto L_11d15c87;
L_11d15c90:;
  /* 11d15c90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d15c93 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11d15c97 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11d15c99 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d15c9c mov esi, ecx */
  ESI = (ECX);
  /* 11d15c9e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d15ca1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11d15ca4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d15ca5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15ca8 jle 0x11d15cad */
  if ((C.zf||C.sf!=C.of)) goto L_11d15cad;
  /* 11d15caa push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d15cac pop esi */
  ESI = (pop32());
L_11d15cad:;
  /* 11d15cad cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15caf je 0x11d15dc2 */
  if (C.zf) goto L_11d15dc2;
  /* 11d15cb5 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d15cb8 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15cbb jne 0x11d15d1e */
  if (!C.zf) goto L_11d15d1e;
  /* 11d15cbd cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15cc0 jge 0x11d15ced */
  if ((C.sf==C.of)) goto L_11d15ced;
  /* 11d15cc2 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d15cc7 mov ecx, edi */
  ECX = (EDI);
  /* 11d15cc9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d15ccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d15cce lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11d15cd2 not ebx */
  EBX = (~(EBX));
  /* 11d15cd4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11d15cd7 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11d15cdb mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11d15cdf dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11d15ce1 jne 0x11d15d1b */
  if (!C.zf) goto L_11d15d1b;
  /* 11d15ce3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15ce6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d15ce9 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11d15ceb jmp 0x11d15d1e */
  goto L_11d15d1e;
L_11d15ced:;
  /* 11d15ced lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11d15cf0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d15cf5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d15cf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d15cfa lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11d15cfe lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11d15d05 not ebx */
  EBX = (~(EBX));
  /* 11d15d07 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11d15d09 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11d15d0b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11d15d0e jne 0x11d15d1b */
  if (!C.zf) goto L_11d15d1b;
  /* 11d15d10 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15d13 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d15d16 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d15d19 jmp 0x11d15d1e */
  goto L_11d15d1e;
L_11d15d1b:;
  /* 11d15d1b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11d15d1e:;
  /* 11d15d1e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11d15d21 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11d15d24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15d28 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11d15d2b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d15d2e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11d15d31 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11d15d34 je 0x11d15dce */
  if (C.zf) goto L_11d15dce;
  /* 11d15d3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d15d3d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11d15d41 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11d15d44 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11d15d47 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11d15d4a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d15d4d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d15d50 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11d15d53 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11d15d56 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15d59 jne 0x11d15dbf */
  if (!C.zf) goto L_11d15dbf;
  /* 11d15d5b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11d15d5f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15d62 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11d15d65 jge 0x11d15d90 */
  if ((C.sf==C.of)) goto L_11d15d90;
  /* 11d15d67 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11d15d69 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d15d6d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11d15d71 jne 0x11d15d7e */
  if (!C.zf) goto L_11d15d7e;
  /* 11d15d73 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11d15d78 mov ecx, esi */
  ECX = (ESI);
  /* 11d15d7a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11d15d7c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11d15d7e:;
  /* 11d15d7e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11d15d83 mov ecx, esi */
  ECX = (ESI);
  /* 11d15d85 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11d15d87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d15d8a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11d15d8e jmp 0x11d15dbf */
  goto L_11d15dbf;
L_11d15d90:;
  /* 11d15d90 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11d15d92 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d15d96 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11d15d9a jne 0x11d15da9 */
  if (!C.zf) goto L_11d15da9;
  /* 11d15d9c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11d15d9f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11d15da4 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11d15da6 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11d15da9:;
  /* 11d15da9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d15dac lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11d15db3 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11d15db6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11d15dbb shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11d15dbd or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11d15dbf:;
  /* 11d15dbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11d15dc2:;
  /* 11d15dc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d15dc4 je 0x11d15dd1 */
  if (C.zf) goto L_11d15dd1;
  /* 11d15dc6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d15dc8 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11d15dcc jmp 0x11d15dd1 */
  goto L_11d15dd1;
L_11d15dce:;
  /* 11d15dce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11d15dd1:;
  /* 11d15dd1 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11d15dd4 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15dd6 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11d15dd9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d15ddb mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11d15ddf mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11d15de2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11d15de4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d15de6 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11d15de9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11d15deb jne 0x11d15e07 */
  if (!C.zf) goto L_11d15e07;
  /* 11d15ded cmp ebx, dword ptr [0x11d38810] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11d38810))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15df3 jne 0x11d15e07 */
  if (!C.zf) goto L_11d15e07;
  /* 11d15df5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d15df8 cmp ecx, dword ptr [0x11d38808] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d38808))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15dfe jne 0x11d15e07 */
  if (!C.zf) goto L_11d15e07;
  /* 11d15e00 and dword ptr [0x11d38810], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11d38810)))&(0x0u); w32((uint32_t)(0x11d38810), (_r)); fl_logic(_r,32); }
L_11d15e07:;
  /* 11d15e07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d15e0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d15e0c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11d15e0f:;
  /* 11d15e0f pop edi */
  EDI = (pop32());
  /* 11d15e10 pop esi */
  ESI = (pop32());
  /* 11d15e11 pop ebx */
  EBX = (pop32());
  /* 11d15e12 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d15e13 ret  */
  ESPCHK(0x11d15b0bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005e14 @ 0x11d15e14 (177 bytes, 53 insns) */
void f_11d15e14(void) {
  FTRACE(0x11d15e14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d15e14 mov eax, dword ptr [0x11d38814] */
  EAX = (r32((uint32_t)(0x11d38814)));
  /* 11d15e19 mov ecx, dword ptr [0x11d38804] */
  ECX = (r32((uint32_t)(0x11d38804)));
  /* 11d15e1f push esi */
  push32((uint32_t)(ESI));
  /* 11d15e20 push edi */
  push32((uint32_t)(EDI));
  /* 11d15e21 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d15e23 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15e25 jne 0x11d15e57 */
  if (!C.zf) goto L_11d15e57;
  /* 11d15e27 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11d15e2b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11d15e2e push eax */
  push32((uint32_t)(EAX));
  /* 11d15e2f push dword ptr [0x11d38818] */
  push32((uint32_t)(r32((uint32_t)(0x11d38818))));
  /* 11d15e35 push edi */
  push32((uint32_t)(EDI));
  /* 11d15e36 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d15e3c call dword ptr [0x11d1c000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c000))), 0x11d15e42u);
  /* 11d15e42 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15e44 je 0x11d15ea7 */
  if (C.zf) goto L_11d15ea7;
  /* 11d15e46 add dword ptr [0x11d38804], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11d38804))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11d38804), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d15e4d mov dword ptr [0x11d38818], eax */
  w32((uint32_t)(0x11d38818), (EAX));
  /* 11d15e52 mov eax, dword ptr [0x11d38814] */
  EAX = (r32((uint32_t)(0x11d38814)));
L_11d15e57:;
  /* 11d15e57 mov ecx, dword ptr [0x11d38818] */
  ECX = (r32((uint32_t)(0x11d38818)));
  /* 11d15e5d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11d15e62 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d15e64 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11d15e67 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d15e6d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11d15e70 call dword ptr [0x11d1c004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c004))), 0x11d15e76u);
  /* 11d15e76 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15e78 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11d15e7b je 0x11d15ea7 */
  if (C.zf) goto L_11d15ea7;
  /* 11d15e7d push 4 */
  push32((uint32_t)(0x4u));
  /* 11d15e7f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11d15e84 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11d15e89 push edi */
  push32((uint32_t)(EDI));
  /* 11d15e8a call dword ptr [0x11d1c050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c050))), 0x11d15e90u);
  /* 11d15e90 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15e92 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11d15e95 jne 0x11d15eab */
  if (!C.zf) goto L_11d15eab;
  /* 11d15e97 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11d15e9a push edi */
  push32((uint32_t)(EDI));
  /* 11d15e9b push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d15ea1 call dword ptr [0x11d1c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c06c))), 0x11d15ea7u);
L_11d15ea7:;
  /* 11d15ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d15ea9 jmp 0x11d15ec2 */
  goto L_11d15ec2;
L_11d15eab:;
  /* 11d15eab or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11d15eaf mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11d15eb1 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11d15eb4 inc dword ptr [0x11d38814] */
  { uint32_t _r=(r32((uint32_t)(0x11d38814)))+1; w32((uint32_t)(0x11d38814), (_r)); fl_inc(_r,32); }
  /* 11d15eba mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d15ebd or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d15ec0 mov eax, esi */
  EAX = (ESI);
L_11d15ec2:;
  /* 11d15ec2 pop edi */
  EDI = (pop32());
  /* 11d15ec3 pop esi */
  ESI = (pop32());
  /* 11d15ec4 ret  */
  ESPCHK(0x11d15e14u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec5 @ 0x11d15ec5 (251 bytes, 85 insns) */
void f_11d15ec5(void) {
  FTRACE(0x11d15ec5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d15ec5 push ebp */
  push32((uint32_t)(EBP));
  /* 11d15ec6 mov ebp, esp */
  EBP = (ESP);
  /* 11d15ec8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d15ec9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15ecc push ebx */
  push32((uint32_t)(EBX));
  /* 11d15ecd push esi */
  push32((uint32_t)(ESI));
  /* 11d15ece push edi */
  push32((uint32_t)(EDI));
  /* 11d15ecf mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11d15ed2 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d15ed5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11d15ed7:;
  /* 11d15ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d15ed9 jl 0x11d15ee0 */
  if ((C.sf!=C.of)) goto L_11d15ee0;
  /* 11d15edb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d15edd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d15ede jmp 0x11d15ed7 */
  goto L_11d15ed7;
L_11d15ee0:;
  /* 11d15ee0 mov eax, ebx */
  EAX = (EBX);
  /* 11d15ee2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d15ee4 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d15eea pop edx */
  EDX = (pop32());
  /* 11d15eeb lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11d15ef2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d15ef5:;
  /* 11d15ef5 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11d15ef8 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11d15efb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15efe dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d15eff jne 0x11d15ef5 */
  if (!C.zf) goto L_11d15ef5;
  /* 11d15f01 mov edi, ebx */
  EDI = (EBX);
  /* 11d15f03 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d15f05 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11d15f08 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15f0b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d15f10 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d15f15 push edi */
  push32((uint32_t)(EDI));
  /* 11d15f16 call dword ptr [0x11d1c050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c050))), 0x11d15f1cu);
  /* 11d15f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d15f1e jne 0x11d15f28 */
  if (!C.zf) goto L_11d15f28;
  /* 11d15f20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d15f23 jmp 0x11d15fbb */
  goto L_11d15fbb;
L_11d15f28:;
  /* 11d15f28 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11d15f2e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15f30 ja 0x11d15f6e */
  if ((!C.cf&&!C.zf)) goto L_11d15f6e;
  /* 11d15f32 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11d15f35:;
  /* 11d15f35 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11d15f39 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11d15f40 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11d15f46 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11d15f4d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d15f4f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11d15f55 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d15f58 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11d15f62 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15f67 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11d15f6a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15f6c jbe 0x11d15f35 */
  if ((C.cf||C.zf)) goto L_11d15f35;
L_11d15f6e:;
  /* 11d15f6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d15f71 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11d15f74 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d15f79 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d15f7b pop edi */
  EDI = (pop32());
  /* 11d15f7c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d15f7f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11d15f82 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11d15f85 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11d15f88 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d15f8b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11d15f90 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11d15f97 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11d15f9a mov cl, al */
  CL = (AL);
  /* 11d15f9c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11d15f9e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d15fa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15fa3 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11d15fa6 jne 0x11d15fab */
  if (!C.zf) goto L_11d15fab;
  /* 11d15fa8 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11d15fab:;
  /* 11d15fab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d15fb0 mov ecx, ebx */
  ECX = (EBX);
  /* 11d15fb2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d15fb4 not edx */
  EDX = (~(EDX));
  /* 11d15fb6 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11d15fb9 mov eax, ebx */
  EAX = (EBX);
L_11d15fbb:;
  /* 11d15fbb pop edi */
  EDI = (pop32());
  /* 11d15fbc pop esi */
  ESI = (pop32());
  /* 11d15fbd pop ebx */
  EBX = (pop32());
  /* 11d15fbe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d15fbf ret  */
  ESPCHK(0x11d15ec5u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc0 @ 0x11d15fc0 (758 bytes, 259 insns) */
void f_11d15fc0(void) {
  FTRACE(0x11d15fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d15fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d15fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d15fc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d15fc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d15fc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d15fcc push ebx */
  push32((uint32_t)(EBX));
  /* 11d15fcd push esi */
  push32((uint32_t)(ESI));
  /* 11d15fce push edi */
  push32((uint32_t)(EDI));
  /* 11d15fcf mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d15fd2 mov edx, edi */
  EDX = (EDI);
  /* 11d15fd4 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 11d15fd7 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d15fda mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11d15fdd and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11d15fe0 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11d15fe3 mov ecx, edx */
  ECX = (EDX);
  /* 11d15fe5 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d15feb lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11d15ff2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d15ff5 mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 11d15ff8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d15ff9 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d15ffb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d15ffe mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 11d16002 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11d16006 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11d16009 jle 0x11d1616e */
  if ((C.zf||C.sf!=C.of)) goto L_11d1616e;
  /* 11d1600f test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11d16012 jne 0x11d16167 */
  if (!C.zf) goto L_11d16167;
  /* 11d16018 add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1601a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1601c jg 0x11d16167 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d16167;
  /* 11d16022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d16025 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11d16028 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d16029 cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1602c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d1602f jbe 0x11d16037 */
  if ((C.cf||C.zf)) goto L_11d16037;
  /* 11d16031 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d16033 pop ecx */
  ECX = (pop32());
  /* 11d16034 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11d16037:;
  /* 11d16037 mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11d1603a cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1603d jne 0x11d16087 */
  if (!C.zf) goto L_11d16087;
  /* 11d1603f cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16042 jae 0x11d16063 */
  if (!C.cf) goto L_11d16063;
  /* 11d16044 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d16049 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d1604b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d1604e lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11d16052 not ebx */
  EBX = (~(EBX));
  /* 11d16054 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11d16058 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11d1605a jne 0x11d16087 */
  if (!C.zf) goto L_11d16087;
  /* 11d1605c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1605f and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11d16061 jmp 0x11d16087 */
  goto L_11d16087;
L_11d16063:;
  /* 11d16063 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16066 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d1606b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d1606d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d16070 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11d16074 not ebx */
  EBX = (~(EBX));
  /* 11d16076 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11d1607d dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11d1607f jne 0x11d16087 */
  if (!C.zf) goto L_11d16087;
  /* 11d16081 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16084 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11d16087:;
  /* 11d16087 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11d1608a mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 11d1608d mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11d16090 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11d16093 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 11d16096 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11d16099 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1609c sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1609e add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d160a1 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d160a5 jle 0x11d16155 */
  if ((C.zf||C.sf!=C.of)) goto L_11d16155;
  /* 11d160ab mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11d160ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d160b1 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11d160b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d160b5 lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11d160b9 cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d160bc jbe 0x11d160c1 */
  if ((C.cf||C.zf)) goto L_11d160c1;
  /* 11d160be push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d160c0 pop edi */
  EDI = (pop32());
L_11d160c1:;
  /* 11d160c1 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d160c4 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 11d160c7 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 11d160ca mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11d160cd mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11d160d0 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d160d3 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11d160d6 mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 11d160d9 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d160dc mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11d160df mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d160e2 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d160e5 jne 0x11d16143 */
  if (!C.zf) goto L_11d16143;
  /* 11d160e7 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11d160eb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d160ee mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 11d160f1 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11d160f3 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11d160f7 jae 0x11d1611a */
  if (!C.cf) goto L_11d1611a;
  /* 11d160f9 cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d160fd jne 0x11d1610d */
  if (!C.zf) goto L_11d1610d;
  /* 11d160ff mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d16104 mov ecx, edi */
  ECX = (EDI);
  /* 11d16106 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d16108 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1610b or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11d1610d:;
  /* 11d1610d lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11d16111 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d16116 mov ecx, edi */
  ECX = (EDI);
  /* 11d16118 jmp 0x11d1613f */
  goto L_11d1613f;
L_11d1611a:;
  /* 11d1611a cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1611e jne 0x11d16130 */
  if (!C.zf) goto L_11d16130;
  /* 11d16120 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11d16123 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d16128 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d1612a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1612d or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11d16130:;
  /* 11d16130 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11d16137 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11d1613a mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11d1613f:;
  /* 11d1613f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d16141 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11d16143:;
  /* 11d16143 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d16146 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d16149 lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 11d1614d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d1614f mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 11d16153 jmp 0x11d16158 */
  goto L_11d16158;
L_11d16155:;
  /* 11d16155 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_11d16158:;
  /* 11d16158 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11d1615b mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 11d1615e mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 11d16162 jmp 0x11d162ae */
  goto L_11d162ae;
L_11d16167:;
  /* 11d16167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d16169 jmp 0x11d162b1 */
  goto L_11d162b1;
L_11d1616e:;
  /* 11d1616e jge 0x11d162ae */
  if ((C.sf==C.of)) goto L_11d162ae;
  /* 11d16174 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d16177 sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11d1617a lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11d1617d mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11d16180 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 11d16184 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d16187 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11d1618a sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11d1618d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d1618e mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 11d16191 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16194 jbe 0x11d16199 */
  if ((C.cf||C.zf)) goto L_11d16199;
  /* 11d16196 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d16198 pop esi */
  ESI = (pop32());
L_11d16199:;
  /* 11d16199 test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11d1619d jne 0x11d16228 */
  if (!C.zf) goto L_11d16228;
  /* 11d161a3 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 11d161a6 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11d161a9 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d161aa cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d161ad jbe 0x11d161b2 */
  if ((C.cf||C.zf)) goto L_11d161b2;
  /* 11d161af push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d161b1 pop esi */
  ESI = (pop32());
L_11d161b2:;
  /* 11d161b2 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11d161b5 cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d161b8 jne 0x11d16201 */
  if (!C.zf) goto L_11d16201;
  /* 11d161ba cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d161bd jae 0x11d161dd */
  if (!C.cf) goto L_11d161dd;
  /* 11d161bf mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d161c4 mov ecx, esi */
  ECX = (ESI);
  /* 11d161c6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d161c8 lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11d161cc not ebx */
  EBX = (~(EBX));
  /* 11d161ce and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11d161d2 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 11d161d4 jne 0x11d161fe */
  if (!C.zf) goto L_11d161fe;
  /* 11d161d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d161d9 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11d161db jmp 0x11d161fe */
  goto L_11d161fe;
L_11d161dd:;
  /* 11d161dd lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11d161e0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11d161e5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11d161e7 lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 11d161eb not ebx */
  EBX = (~(EBX));
  /* 11d161ed and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11d161f4 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11d161f6 jne 0x11d161fe */
  if (!C.zf) goto L_11d161fe;
  /* 11d161f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d161fb and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11d161fe:;
  /* 11d161fe mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11d16201:;
  /* 11d16201 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 11d16204 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 11d16207 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11d1620a mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11d1620d mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 11d16210 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11d16213 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d16216 add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16219 mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 11d1621c sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11d1621f dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d16220 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16223 jbe 0x11d16228 */
  if ((C.cf||C.zf)) goto L_11d16228;
  /* 11d16225 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11d16227 pop esi */
  ESI = (pop32());
L_11d16228:;
  /* 11d16228 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d1622b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11d1622f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11d16232 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 11d16235 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11d16238 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 11d1623b mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11d1623e mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 11d16241 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11d16244 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16247 jne 0x11d162a5 */
  if (!C.zf) goto L_11d162a5;
  /* 11d16249 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11d1624d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16250 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11d16253 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11d16255 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11d16259 jae 0x11d1627c */
  if (!C.cf) goto L_11d1627c;
  /* 11d1625b cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1625f jne 0x11d1626f */
  if (!C.zf) goto L_11d1626f;
  /* 11d16261 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11d16266 mov ecx, esi */
  ECX = (ESI);
  /* 11d16268 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11d1626a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1626d or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11d1626f:;
  /* 11d1626f lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 11d16273 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11d16278 mov ecx, esi */
  ECX = (ESI);
  /* 11d1627a jmp 0x11d162a1 */
  goto L_11d162a1;
L_11d1627c:;
  /* 11d1627c cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d16280 jne 0x11d16292 */
  if (!C.zf) goto L_11d16292;
  /* 11d16282 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11d16285 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11d1628a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11d1628c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1628f or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11d16292:;
  /* 11d16292 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 11d16299 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11d1629c mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_11d162a1:;
  /* 11d162a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d162a3 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11d162a5:;
  /* 11d162a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d162a8 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11d162aa mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_11d162ae:;
  /* 11d162ae push 1 */
  push32((uint32_t)(0x1u));
  /* 11d162b0 pop eax */
  EAX = (pop32());
L_11d162b1:;
  /* 11d162b1 pop edi */
  EDI = (pop32());
  /* 11d162b2 pop esi */
  ESI = (pop32());
  /* 11d162b3 pop ebx */
  EBX = (pop32());
  /* 11d162b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d162b5 ret  */
  ESPCHK(0x11d15fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b6 @ 0x11d162b6 (324 bytes, 102 insns) */
void f_11d162b6(void) {
  FTRACE(0x11d162b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d162b6 cmp dword ptr [0x11d1e820], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e820))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d162bd push ebx */
  push32((uint32_t)(EBX));
  /* 11d162be push ebp */
  push32((uint32_t)(EBP));
  /* 11d162bf push esi */
  push32((uint32_t)(ESI));
  /* 11d162c0 push edi */
  push32((uint32_t)(EDI));
  /* 11d162c1 jne 0x11d162ca */
  if (!C.zf) goto L_11d162ca;
  /* 11d162c3 mov esi, 0x11d1e810 */
  ESI = (0x11d1e810u);
  /* 11d162c8 jmp 0x11d162e7 */
  goto L_11d162e7;
L_11d162ca:;
  /* 11d162ca push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11d162cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11d162d1 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d162d7 call dword ptr [0x11d1c004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c004))), 0x11d162ddu);
  /* 11d162dd mov esi, eax */
  ESI = (EAX);
  /* 11d162df test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d162e1 je 0x11d163f3 */
  if (C.zf) goto L_11d163f3;
L_11d162e7:;
  /* 11d162e7 mov ebp, dword ptr [0x11d1c050] */
  EBP = (r32((uint32_t)(0x11d1c050)));
  /* 11d162ed push 4 */
  push32((uint32_t)(0x4u));
  /* 11d162ef push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11d162f4 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11d162f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d162fb call ebp */
  call_ind((uint32_t)(EBP), 0x11d162fdu);
  /* 11d162fd mov edi, eax */
  EDI = (EAX);
  /* 11d162ff test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d16301 je 0x11d163dc */
  if (C.zf) goto L_11d163dc;
  /* 11d16307 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d16309 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11d1630e push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d16313 push ebx */
  push32((uint32_t)(EBX));
  /* 11d16314 push edi */
  push32((uint32_t)(EDI));
  /* 11d16315 call ebp */
  call_ind((uint32_t)(EBP), 0x11d16317u);
  /* 11d16317 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d16319 je 0x11d163ce */
  if (C.zf) goto L_11d163ce;
  /* 11d1631f mov eax, 0x11d1e810 */
  EAX = (0x11d1e810u);
  /* 11d16324 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16326 jne 0x11d16346 */
  if (!C.zf) goto L_11d16346;
  /* 11d16328 cmp dword ptr [0x11d1e810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1632f jne 0x11d16336 */
  if (!C.zf) goto L_11d16336;
  /* 11d16331 mov dword ptr [0x11d1e810], eax */
  w32((uint32_t)(0x11d1e810), (EAX));
L_11d16336:;
  /* 11d16336 cmp dword ptr [0x11d1e814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1633d jne 0x11d1635b */
  if (!C.zf) goto L_11d1635b;
  /* 11d1633f mov dword ptr [0x11d1e814], eax */
  w32((uint32_t)(0x11d1e814), (EAX));
  /* 11d16344 jmp 0x11d1635b */
  goto L_11d1635b;
L_11d16346:;
  /* 11d16346 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d16348 mov eax, dword ptr [0x11d1e814] */
  EAX = (r32((uint32_t)(0x11d1e814)));
  /* 11d1634d mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11d16350 mov dword ptr [0x11d1e814], esi */
  w32((uint32_t)(0x11d1e814), (ESI));
  /* 11d16356 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d16359 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11d1635b:;
  /* 11d1635b lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11d16361 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11d16367 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11d1636a lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11d1636d mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11d16370 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11d16373 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11d16376 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11d16378 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11d1637d:;
  /* 11d1637d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d1637f cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16382 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11d16385 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d16386 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d16388 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d16389 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11d1638a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d1638c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d1638f add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16392 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16398 jl 0x11d1637d */
  if ((C.sf!=C.of)) goto L_11d1637d;
  /* 11d1639a push ebx */
  push32((uint32_t)(EBX));
  /* 11d1639b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1639d push edi */
  push32((uint32_t)(EDI));
  /* 11d1639e call 0x11d15240 */
  push32(0x11d163a3u); f_11d15240();
  /* 11d163a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d163a6:;
  /* 11d163a6 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d163a9 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d163ab cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d163ad jae 0x11d163ca */
  if (!C.cf) goto L_11d163ca;
  /* 11d163af or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11d163b6 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11d163b9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11d163bb mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11d163c2 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d163c8 jmp 0x11d163a6 */
  goto L_11d163a6;
L_11d163ca:;
  /* 11d163ca mov eax, esi */
  EAX = (ESI);
  /* 11d163cc jmp 0x11d163f5 */
  goto L_11d163f5;
L_11d163ce:;
  /* 11d163ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d163d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d163d5 push edi */
  push32((uint32_t)(EDI));
  /* 11d163d6 call dword ptr [0x11d1c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c070))), 0x11d163dcu);
L_11d163dc:;
  /* 11d163dc cmp esi, 0x11d1e810 */
  { uint32_t _a=(ESI),_b=(0x11d1e810u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d163e2 je 0x11d163f3 */
  if (C.zf) goto L_11d163f3;
  /* 11d163e4 push esi */
  push32((uint32_t)(ESI));
  /* 11d163e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d163e7 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d163ed call dword ptr [0x11d1c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c06c))), 0x11d163f3u);
L_11d163f3:;
  /* 11d163f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d163f5:;
  /* 11d163f5 pop edi */
  EDI = (pop32());
  /* 11d163f6 pop esi */
  ESI = (pop32());
  /* 11d163f7 pop ebp */
  EBP = (pop32());
  /* 11d163f8 pop ebx */
  EBX = (pop32());
  /* 11d163f9 ret  */
  ESPCHK(0x11d162b6u, _esp0);
  ESP += 4; return;
}

/* FUN_100063fa @ 0x11d163fa (86 bytes, 27 insns) */
void f_11d163fa(void) {
  FTRACE(0x11d163fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d163fa push esi */
  push32((uint32_t)(ESI));
  /* 11d163fb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d163ff push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d16404 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d16406 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11d16409 call dword ptr [0x11d1c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c070))), 0x11d1640fu);
  /* 11d1640f cmp dword ptr [0x11d20830], esi */
  { uint32_t _a=(r32((uint32_t)(0x11d20830))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16415 jne 0x11d1641f */
  if (!C.zf) goto L_11d1641f;
  /* 11d16417 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d1641a mov dword ptr [0x11d20830], eax */
  w32((uint32_t)(0x11d20830), (EAX));
L_11d1641f:;
  /* 11d1641f cmp esi, 0x11d1e810 */
  { uint32_t _a=(ESI),_b=(0x11d1e810u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16425 je 0x11d16447 */
  if (C.zf) goto L_11d16447;
  /* 11d16427 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d1642a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11d1642c push esi */
  push32((uint32_t)(ESI));
  /* 11d1642d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1642f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d16431 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d16433 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d16436 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d16439 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d1643f call dword ptr [0x11d1c06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c06c))), 0x11d16445u);
  /* 11d16445 pop esi */
  ESI = (pop32());
  /* 11d16446 ret  */
  ESPCHK(0x11d163fau, _esp0);
  ESP += 4; return;
L_11d16447:;
  /* 11d16447 or dword ptr [0x11d1e820], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11d1e820)))|(0xffffffffu); w32((uint32_t)(0x11d1e820), (_r)); fl_logic(_r,32); }
  /* 11d1644e pop esi */
  ESI = (pop32());
  /* 11d1644f ret  */
  ESPCHK(0x11d163fau, _esp0);
  ESP += 4; return;
}

/* FUN_10006450 @ 0x11d16450 (194 bytes, 66 insns) */
void f_11d16450(void) {
  FTRACE(0x11d16450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16450 push ebp */
  push32((uint32_t)(EBP));
  /* 11d16451 mov ebp, esp */
  EBP = (ESP);
  /* 11d16453 push ecx */
  push32((uint32_t)(ECX));
  /* 11d16454 push ebx */
  push32((uint32_t)(EBX));
  /* 11d16455 push esi */
  push32((uint32_t)(ESI));
  /* 11d16456 mov esi, dword ptr [0x11d1e814] */
  ESI = (r32((uint32_t)(0x11d1e814)));
  /* 11d1645c push edi */
  push32((uint32_t)(EDI));
L_11d1645d:;
  /* 11d1645d cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16461 je 0x11d164fb */
  if (C.zf) goto L_11d164fb;
  /* 11d16467 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1646b lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11d16471 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11d16476:;
  /* 11d16476 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1647c jne 0x11d164b7 */
  if (!C.zf) goto L_11d164b7;
  /* 11d1647e mov eax, ebx */
  EAX = (EBX);
  /* 11d16480 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11d16485 add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16488 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d1648d push eax */
  push32((uint32_t)(EAX));
  /* 11d1648e call dword ptr [0x11d1c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c070))), 0x11d16494u);
  /* 11d16494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d16496 je 0x11d164b7 */
  if (C.zf) goto L_11d164b7;
  /* 11d16498 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11d1649b dec dword ptr [0x11d373c0] */
  { uint32_t _r=(r32((uint32_t)(0x11d373c0)))-1; w32((uint32_t)(0x11d373c0), (_r)); fl_dec(_r,32); }
  /* 11d164a1 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11d164a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d164a6 je 0x11d164ac */
  if (C.zf) goto L_11d164ac;
  /* 11d164a8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d164aa jbe 0x11d164af */
  if ((C.cf||C.zf)) goto L_11d164af;
L_11d164ac:;
  /* 11d164ac mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11d164af:;
  /* 11d164af inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d164b2 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11d164b5 je 0x11d164c4 */
  if (C.zf) goto L_11d164c4;
L_11d164b7:;
  /* 11d164b7 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d164bd sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d164c0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d164c2 jge 0x11d16476 */
  if ((C.sf==C.of)) goto L_11d16476;
L_11d164c4:;
  /* 11d164c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d164c8 mov ecx, esi */
  ECX = (ESI);
  /* 11d164ca mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11d164cd je 0x11d164fb */
  if (C.zf) goto L_11d164fb;
  /* 11d164cf cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d164d3 jne 0x11d164fb */
  if (!C.zf) goto L_11d164fb;
  /* 11d164d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d164d7 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11d164da pop edx */
  EDX = (pop32());
L_11d164db:;
  /* 11d164db cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d164de jne 0x11d164ec */
  if (!C.zf) goto L_11d164ec;
  /* 11d164e0 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d164e1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d164e4 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d164ea jl 0x11d164db */
  if ((C.sf!=C.of)) goto L_11d164db;
L_11d164ec:;
  /* 11d164ec cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d164f2 jne 0x11d164fb */
  if (!C.zf) goto L_11d164fb;
  /* 11d164f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d164f5 call 0x11d163fa */
  push32(0x11d164fau); f_11d163fa();
  /* 11d164fa pop ecx */
  ECX = (pop32());
L_11d164fb:;
  /* 11d164fb cmp esi, dword ptr [0x11d1e814] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d1e814))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16501 je 0x11d1650d */
  if (C.zf) goto L_11d1650d;
  /* 11d16503 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16507 jg 0x11d1645d */
  if ((!C.zf&&C.sf==C.of)) goto L_11d1645d;
L_11d1650d:;
  /* 11d1650d pop edi */
  EDI = (pop32());
  /* 11d1650e pop esi */
  ESI = (pop32());
  /* 11d1650f pop ebx */
  EBX = (pop32());
  /* 11d16510 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16511 ret  */
  ESPCHK(0x11d16450u, _esp0);
  ESP += 4; return;
}

/* FUN_10006512 @ 0x11d16512 (87 bytes, 34 insns) */
void f_11d16512(void) {
  FTRACE(0x11d16512u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16512 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d16516 mov edx, 0x11d1e810 */
  EDX = (0x11d1e810u);
  /* 11d1651b push esi */
  push32((uint32_t)(ESI));
  /* 11d1651c mov ecx, edx */
  ECX = (EDX);
L_11d1651e:;
  /* 11d1651e cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16521 jbe 0x11d16528 */
  if ((C.cf||C.zf)) goto L_11d16528;
  /* 11d16523 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16526 jb 0x11d16530 */
  if (C.cf) goto L_11d16530;
L_11d16528:;
  /* 11d16528 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11d1652a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1652c je 0x11d16565 */
  if (C.zf) goto L_11d16565;
  /* 11d1652e jmp 0x11d1651e */
  goto L_11d1651e;
L_11d16530:;
  /* 11d16530 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11d16532 jne 0x11d16565 */
  if (!C.zf) goto L_11d16565;
  /* 11d16534 mov esi, eax */
  ESI = (EAX);
  /* 11d16536 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11d1653b and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11d16541 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16543 jb 0x11d16565 */
  if (C.cf) goto L_11d16565;
  /* 11d16545 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11d16549 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11d1654b mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d1654f mov ecx, eax */
  ECX = (EAX);
  /* 11d16551 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11d16556 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16558 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11d1655a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1655c pop esi */
  ESI = (pop32());
  /* 11d1655d sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d16560 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11d16564 ret  */
  ESPCHK(0x11d16512u, _esp0);
  ESP += 4; return;
L_11d16565:;
  /* 11d16565 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d16567 pop esi */
  ESI = (pop32());
  /* 11d16568 ret  */
  ESPCHK(0x11d16512u, _esp0);
  ESP += 4; return;
}

/* FUN_10006569 @ 0x11d16569 (69 bytes, 19 insns) */
void f_11d16569(void) {
  FTRACE(0x11d16569u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16569 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d1656d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d16571 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16574 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11d16577 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11d1657b mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d1657f movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11d16582 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d16584 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11d16587 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1658d mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11d16594 jne 0x11d165ad */
  if (!C.zf) goto L_11d165ad;
  /* 11d16596 inc dword ptr [0x11d373c0] */
  { uint32_t _r=(r32((uint32_t)(0x11d373c0)))+1; w32((uint32_t)(0x11d373c0), (_r)); fl_inc(_r,32); }
  /* 11d1659c cmp dword ptr [0x11d373c0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11d373c0))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d165a3 jne 0x11d165ad */
  if (!C.zf) goto L_11d165ad;
  /* 11d165a5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d165a7 call 0x11d16450 */
  push32(0x11d165acu); f_11d16450();
  /* 11d165ac pop ecx */
  ECX = (pop32());
L_11d165ad:;
  /* 11d165ad ret  */
  ESPCHK(0x11d16569u, _esp0);
  ESP += 4; return;
}

/* FUN_100065ae @ 0x11d165ae (520 bytes, 180 insns) */
void f_11d165ae(void) {
  FTRACE(0x11d165aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d165ae push ebp */
  push32((uint32_t)(EBP));
  /* 11d165af mov ebp, esp */
  EBP = (ESP);
  /* 11d165b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d165b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d165b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11d165b4 push esi */
  push32((uint32_t)(ESI));
  /* 11d165b5 mov esi, dword ptr [0x11d20830] */
  ESI = (r32((uint32_t)(0x11d20830)));
  /* 11d165bb push edi */
  push32((uint32_t)(EDI));
L_11d165bc:;
  /* 11d165bc mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d165bf cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d165c2 je 0x11d16667 */
  if (C.zf) goto L_11d16667;
  /* 11d165c8 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11d165cb lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11d165d1 mov eax, edi */
  EAX = (EDI);
  /* 11d165d3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d165d5 sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d165d8 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11d165db shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11d165de add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d165e0 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d165e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d165e5 jae 0x11d16621 */
  if (!C.cf) goto L_11d16621;
L_11d165e7:;
  /* 11d165e7 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11d165e9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d165ec cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d165ee jl 0x11d1660a */
  if ((C.sf!=C.of)) goto L_11d1660a;
  /* 11d165f0 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d165f3 jbe 0x11d1660a */
  if ((C.cf||C.zf)) goto L_11d1660a;
  /* 11d165f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11d165f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d165f7 push eax */
  push32((uint32_t)(EAX));
  /* 11d165f8 call 0x11d167b6 */
  push32(0x11d165fdu); f_11d167b6();
  /* 11d165fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d16602 jne 0x11d16679 */
  if (!C.zf) goto L_11d16679;
  /* 11d16604 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d16607 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11d1660a:;
  /* 11d1660a add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1660d lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11d16613 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16618 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1661a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d1661d jb 0x11d165e7 */
  if (C.cf) goto L_11d165e7;
  /* 11d1661f jmp 0x11d16624 */
  goto L_11d16624;
L_11d16621:;
  /* 11d16621 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11d16624:;
  /* 11d16624 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11d16627 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d1662a lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11d1662d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d16630 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16632 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11d16635 jae 0x11d1666a */
  if (!C.cf) goto L_11d1666a;
L_11d16637:;
  /* 11d16637 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d16639 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1663b jl 0x11d16656 */
  if ((C.sf!=C.of)) goto L_11d16656;
  /* 11d1663d cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16640 jbe 0x11d16656 */
  if ((C.cf||C.zf)) goto L_11d16656;
  /* 11d16642 push ebx */
  push32((uint32_t)(EBX));
  /* 11d16643 push eax */
  push32((uint32_t)(EAX));
  /* 11d16644 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11d16647 call 0x11d167b6 */
  push32(0x11d1664cu); f_11d167b6();
  /* 11d1664c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1664f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d16651 jne 0x11d16679 */
  if (!C.zf) goto L_11d16679;
  /* 11d16653 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11d16656:;
  /* 11d16656 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d1665d add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16660 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16663 jb 0x11d16637 */
  if (C.cf) goto L_11d16637;
  /* 11d16665 jmp 0x11d1666a */
  goto L_11d1666a;
L_11d16667:;
  /* 11d16667 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11d1666a:;
  /* 11d1666a mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11d1666c cmp esi, dword ptr [0x11d20830] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d20830))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16672 je 0x11d16689 */
  if (C.zf) goto L_11d16689;
  /* 11d16674 jmp 0x11d165bc */
  goto L_11d165bc;
L_11d16679:;
  /* 11d16679 mov dword ptr [0x11d20830], esi */
  w32((uint32_t)(0x11d20830), (ESI));
  /* 11d1667f sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11d16681 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11d16684 jmp 0x11d167b1 */
  goto L_11d167b1;
L_11d16689:;
  /* 11d16689 mov eax, 0x11d1e810 */
  EAX = (0x11d1e810u);
  /* 11d1668e mov edi, eax */
  EDI = (EAX);
L_11d16690:;
  /* 11d16690 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16694 je 0x11d1669c */
  if (C.zf) goto L_11d1669c;
  /* 11d16696 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1669a jne 0x11d166a8 */
  if (!C.zf) goto L_11d166a8;
L_11d1669c:;
  /* 11d1669c mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11d1669e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d166a0 je 0x11d1677d */
  if (C.zf) goto L_11d1677d;
  /* 11d166a6 jmp 0x11d16690 */
  goto L_11d16690;
L_11d166a8:;
  /* 11d166a8 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11d166ab and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d166af mov esi, ebx */
  ESI = (EBX);
  /* 11d166b1 mov eax, ebx */
  EAX = (EBX);
  /* 11d166b3 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d166b5 sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d166b8 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11d166bb shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11d166be add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d166c1 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d166c4 jne 0x11d166d7 */
  if (!C.zf) goto L_11d166d7;
L_11d166c6:;
  /* 11d166c6 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d166ca jge 0x11d166d7 */
  if ((C.sf==C.of)) goto L_11d166d7;
  /* 11d166cc add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d166cf inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d166d2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d166d5 je 0x11d166c6 */
  if (C.zf) goto L_11d166c6;
L_11d166d7:;
  /* 11d166d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d166da push 4 */
  push32((uint32_t)(0x4u));
  /* 11d166dc shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11d166df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d166e4 push eax */
  push32((uint32_t)(EAX));
  /* 11d166e5 push esi */
  push32((uint32_t)(ESI));
  /* 11d166e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d166e9 call dword ptr [0x11d1c050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c050))), 0x11d166efu);
  /* 11d166ef cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d166f1 jne 0x11d167af */
  if (!C.zf) goto L_11d167af;
  /* 11d166f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d166f9 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11d166fc push esi */
  push32((uint32_t)(ESI));
  /* 11d166fd call 0x11d15240 */
  push32(0x11d16702u); f_11d15240();
  /* 11d16702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d16705 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16708 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d1670a mov ecx, ebx */
  ECX = (EBX);
  /* 11d1670c jle 0x11d1673e */
  if ((C.zf||C.sf!=C.of)) goto L_11d1673e;
  /* 11d1670e lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11d16711 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11d16714:;
  /* 11d16714 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11d1671b lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11d1671e mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11d16721 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11d16726 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11d16728 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d1672a mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11d16731 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16736 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16739 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11d1673c jne 0x11d16714 */
  if (!C.zf) goto L_11d16714;
L_11d1673e:;
  /* 11d1673e mov dword ptr [0x11d20830], edi */
  w32((uint32_t)(0x11d20830), (EDI));
  /* 11d16744 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11d1674a:;
  /* 11d1674a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1674c jae 0x11d1675a */
  if (!C.cf) goto L_11d1675a;
  /* 11d1674e cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16751 je 0x11d16758 */
  if (C.zf) goto L_11d16758;
  /* 11d16753 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16756 jmp 0x11d1674a */
  goto L_11d1674a;
L_11d16758:;
  /* 11d16758 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11d1675a:;
  /* 11d1675a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1675c and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1675e mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11d16761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16764 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11d16767 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11d1676a sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11d1676c sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11d1676f lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11d16773 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11d16779 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11d1677b jmp 0x11d167b1 */
  goto L_11d167b1;
L_11d1677d:;
  /* 11d1677d call 0x11d162b6 */
  push32(0x11d16782u); f_11d162b6();
  /* 11d16782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d16784 je 0x11d167af */
  if (C.zf) goto L_11d167af;
  /* 11d16786 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11d16789 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11d1678c lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11d16790 mov dword ptr [0x11d20830], eax */
  w32((uint32_t)(0x11d20830), (EAX));
  /* 11d16795 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d16797 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11d1679c sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1679e mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11d167a1 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11d167a4 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11d167a7 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11d167ad jmp 0x11d167b1 */
  goto L_11d167b1;
L_11d167af:;
  /* 11d167af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d167b1:;
  /* 11d167b1 pop edi */
  EDI = (pop32());
  /* 11d167b2 pop esi */
  ESI = (pop32());
  /* 11d167b3 pop ebx */
  EBX = (pop32());
  /* 11d167b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d167b5 ret  */
  ESPCHK(0x11d165aeu, _esp0);
  ESP += 4; return;
}

/* FUN_100067b6 @ 0x11d167b6 (292 bytes, 125 insns) */
void f_11d167b6(void) {
  FTRACE(0x11d167b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d167b6 push ebp */
  push32((uint32_t)(EBP));
  /* 11d167b7 mov ebp, esp */
  EBP = (ESP);
  /* 11d167b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d167ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d167bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d167c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d167c1 push esi */
  push32((uint32_t)(ESI));
  /* 11d167c2 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11d167c5 push edi */
  push32((uint32_t)(EDI));
  /* 11d167c6 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11d167c8 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11d167ce cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d167d0 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11d167d3 mov eax, edi */
  EAX = (EDI);
  /* 11d167d5 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11d167d8 jb 0x11d167fb */
  if (C.cf) goto L_11d167fb;
  /* 11d167da lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11d167dd mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11d167df cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d167e1 jae 0x11d167ea */
  if (!C.cf) goto L_11d167ea;
  /* 11d167e3 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d167e5 sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11d167e8 jmp 0x11d167f3 */
  goto L_11d167f3;
L_11d167ea:;
  /* 11d167ea and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d167ee lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11d167f1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11d167f3:;
  /* 11d167f3 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11d167f6 jmp 0x11d168c9 */
  goto L_11d168c9;
L_11d167fb:;
  /* 11d167fb add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d167fd cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d16800 je 0x11d16804 */
  if (C.zf) goto L_11d16804;
  /* 11d16802 mov eax, esi */
  EAX = (ESI);
L_11d16804:;
  /* 11d16804 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11d16807 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16809 jae 0x11d1684e */
  if (!C.cf) goto L_11d1684e;
L_11d1680b:;
  /* 11d1680b mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11d1680d test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11d1680f jne 0x11d16841 */
  if (!C.zf) goto L_11d16841;
  /* 11d16811 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d16813 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11d16816 pop esi */
  ESI = (pop32());
L_11d16817:;
  /* 11d16817 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1681a jne 0x11d16820 */
  if (!C.zf) goto L_11d16820;
  /* 11d1681c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d1681d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d1681e jmp 0x11d16817 */
  goto L_11d16817;
L_11d16820:;
  /* 11d16820 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16822 jae 0x11d16872 */
  if (!C.cf) goto L_11d16872;
  /* 11d16824 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16827 jne 0x11d1682e */
  if (!C.zf) goto L_11d1682e;
  /* 11d16829 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11d1682c jmp 0x11d1683a */
  goto L_11d1683a;
L_11d1682e:;
  /* 11d1682e sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11d16831 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16834 jb 0x11d168d3 */
  if (C.cf) goto L_11d168d3;
L_11d1683a:;
  /* 11d1683a mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1683d mov eax, ebx */
  EAX = (EBX);
  /* 11d1683f jmp 0x11d16846 */
  goto L_11d16846;
L_11d16841:;
  /* 11d16841 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11d16844 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d16846:;
  /* 11d16846 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11d16849 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1684c jb 0x11d1680b */
  if (C.cf) goto L_11d1680b;
L_11d1684e:;
  /* 11d1684e lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11d16851:;
  /* 11d16851 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16853 jae 0x11d168d3 */
  if (!C.cf) goto L_11d168d3;
  /* 11d16855 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11d16858 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1685b jae 0x11d168d3 */
  if (!C.cf) goto L_11d168d3;
  /* 11d1685d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d1685f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d16861 jne 0x11d168a3 */
  if (!C.zf) goto L_11d168a3;
  /* 11d16863 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d16865 lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11d16868 pop eax */
  EAX = (pop32());
L_11d16869:;
  /* 11d16869 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1686c jne 0x11d16893 */
  if (!C.zf) goto L_11d16893;
  /* 11d1686e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d1686f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d16870 jmp 0x11d16869 */
  goto L_11d16869;
L_11d16872:;
  /* 11d16872 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11d16875 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16878 jae 0x11d16883 */
  if (!C.cf) goto L_11d16883;
  /* 11d1687a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1687c mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11d1687e mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11d16881 jmp 0x11d1688c */
  goto L_11d1688c;
L_11d16883:;
  /* 11d16883 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d16887 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11d1688a mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11d1688c:;
  /* 11d1688c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d1688e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16891 jmp 0x11d168c9 */
  goto L_11d168c9;
L_11d16893:;
  /* 11d16893 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16895 jae 0x11d168aa */
  if (!C.cf) goto L_11d168aa;
  /* 11d16897 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11d1689a cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1689d jb 0x11d168d3 */
  if (C.cf) goto L_11d168d3;
  /* 11d1689f mov esi, ebx */
  ESI = (EBX);
  /* 11d168a1 jmp 0x11d16851 */
  goto L_11d16851;
L_11d168a3:;
  /* 11d168a3 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11d168a6 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d168a8 jmp 0x11d16851 */
  goto L_11d16851;
L_11d168aa:;
  /* 11d168aa lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11d168ad cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d168b0 jae 0x11d168bb */
  if (!C.cf) goto L_11d168bb;
  /* 11d168b2 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d168b4 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11d168b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d168b9 jmp 0x11d168c4 */
  goto L_11d168c4;
L_11d168bb:;
  /* 11d168bb and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d168bf lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11d168c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11d168c4:;
  /* 11d168c4 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11d168c6 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11d168c9:;
  /* 11d168c9 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d168cc shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d168cf sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d168d1 jmp 0x11d168d5 */
  goto L_11d168d5;
L_11d168d3:;
  /* 11d168d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d168d5:;
  /* 11d168d5 pop edi */
  EDI = (pop32());
  /* 11d168d6 pop esi */
  ESI = (pop32());
  /* 11d168d7 pop ebx */
  EBX = (pop32());
  /* 11d168d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d168d9 ret  */
  ESPCHK(0x11d167b6u, _esp0);
  ESP += 4; return;
}

/* FUN_100068da @ 0x11d168da (169 bytes, 69 insns) */
void f_11d168da(void) {
  FTRACE(0x11d168dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d168da push ebp */
  push32((uint32_t)(EBP));
  /* 11d168db mov ebp, esp */
  EBP = (ESP);
  /* 11d168dd push ecx */
  push32((uint32_t)(ECX));
  /* 11d168de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d168e1 push ebx */
  push32((uint32_t)(EBX));
  /* 11d168e2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d168e5 push esi */
  push32((uint32_t)(ESI));
  /* 11d168e6 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11d168e9 push edi */
  push32((uint32_t)(EDI));
  /* 11d168ea mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d168ed and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d168f1 mov eax, ebx */
  EAX = (EBX);
  /* 11d168f3 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d168f6 sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11d168f9 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d168fc lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 11d16900 jbe 0x11d16914 */
  if ((C.cf||C.zf)) goto L_11d16914;
  /* 11d16902 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d16905 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16907 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11d16909 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d1690b mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 11d16912 jmp 0x11d16974 */
  goto L_11d16974;
L_11d16914:;
  /* 11d16914 jae 0x11d1697b */
  if (!C.cf) goto L_11d1697b;
  /* 11d16916 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d16919 lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 11d1691c lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11d16922 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16924 jb 0x11d1697b */
  if (C.cf) goto L_11d1697b;
  /* 11d16926 lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_11d16929:;
  /* 11d16929 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1692b jae 0x11d16937 */
  if (!C.cf) goto L_11d16937;
  /* 11d1692d cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d16930 jne 0x11d16935 */
  if (!C.zf) goto L_11d16935;
  /* 11d16932 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d16933 jmp 0x11d16929 */
  goto L_11d16929;
L_11d16935:;
  /* 11d16935 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11d16937:;
  /* 11d16937 jne 0x11d1697b */
  if (!C.zf) goto L_11d1697b;
  /* 11d16939 mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 11d1693c mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11d1693e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11d16940 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16942 ja 0x11d1696f */
  if ((!C.cf&&!C.zf)) goto L_11d1696f;
  /* 11d16944 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16946 jbe 0x11d1696f */
  if ((C.cf||C.zf)) goto L_11d1696f;
  /* 11d16948 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 11d1694e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16950 jae 0x11d16966 */
  if (!C.cf) goto L_11d16966;
  /* 11d16952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d16954 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 11d16956 cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d16958 jne 0x11d16961 */
  if (!C.zf) goto L_11d16961;
L_11d1695a:;
  /* 11d1695a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1695b cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1695f je 0x11d1695a */
  if (C.zf) goto L_11d1695a;
L_11d16961:;
  /* 11d16961 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11d16964 jmp 0x11d1696f */
  goto L_11d1696f;
L_11d16966:;
  /* 11d16966 and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d1696a lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 11d1696d mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11d1696f:;
  /* 11d1696f sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16972 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_11d16974:;
  /* 11d16974 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11d1697b:;
  /* 11d1697b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1697e pop edi */
  EDI = (pop32());
  /* 11d1697f pop esi */
  ESI = (pop32());
  /* 11d16980 pop ebx */
  EBX = (pop32());
  /* 11d16981 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16982 ret  */
  ESPCHK(0x11d168dau, _esp0);
  ESP += 4; return;
}

/* FUN_10006983 @ 0x11d16983 (27 bytes, 13 insns) */
void f_11d16983(void) {
  FTRACE(0x11d16983u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16983 mov eax, dword ptr [0x11d373c4] */
  EAX = (r32((uint32_t)(0x11d373c4)));
  /* 11d16988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1698a je 0x11d1699b */
  if (C.zf) goto L_11d1699b;
  /* 11d1698c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d16990 call eax */
  call_ind((uint32_t)(EAX), 0x11d16992u);
  /* 11d16992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d16994 pop ecx */
  ECX = (pop32());
  /* 11d16995 je 0x11d1699b */
  if (C.zf) goto L_11d1699b;
  /* 11d16997 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d16999 pop eax */
  EAX = (pop32());
  /* 11d1699a ret  */
  ESPCHK(0x11d16983u, _esp0);
  ESP += 4; return;
L_11d1699b:;
  /* 11d1699b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1699d ret  */
  ESPCHK(0x11d16983u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x11d169a0 (664 bytes, 269 insns) [15 switch table(s)] */
void f_11d169a0(void) {
  FTRACE(0x11d169a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d169a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d169a1 mov ebp, esp */
  EBP = (ESP);
  /* 11d169a3 push edi */
  push32((uint32_t)(EDI));
  /* 11d169a4 push esi */
  push32((uint32_t)(ESI));
  /* 11d169a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d169a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d169ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d169ae mov eax, ecx */
  EAX = (ECX);
  /* 11d169b0 mov edx, ecx */
  EDX = (ECX);
  /* 11d169b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d169b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d169b6 jbe 0x11d169c0 */
  if ((C.cf||C.zf)) goto L_11d169c0;
  /* 11d169b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d169ba jb 0x11d16b38 */
  if (C.cf) goto L_11d16b38;
L_11d169c0:;
  /* 11d169c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d169c6 jne 0x11d169dc */
  if (!C.zf) goto L_11d169dc;
  /* 11d169c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d169cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d169ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d169d1 jb 0x11d169fc */
  if (C.cf) goto L_11d169fc;
  /* 11d169d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d169d5 jmp dword ptr [edx*4 + 0x11d16ae8] */
  switch (EDX) {
    case 0: goto L_11d16af8;
    case 1: goto L_11d16b00;
    case 2: goto L_11d16b0c;
    case 3: goto L_11d16b20;
    default: x86_unimpl("switch@0x11d169d5 out of table"); return;
  }
L_11d169dc:;
  /* 11d169dc mov eax, edi */
  EAX = (EDI);
  /* 11d169de mov edx, 3 */
  EDX = (0x3u);
  /* 11d169e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d169e6 jb 0x11d169f4 */
  if (C.cf) goto L_11d169f4;
  /* 11d169e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d169eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d169ed jmp dword ptr [eax*4 + 0x11d16a00] */
  switch (EAX) {
    case 1: goto L_11d16a10;
    case 2: goto L_11d16a3c;
    case 3: goto L_11d16a60;
    default: x86_unimpl("switch@0x11d169ed out of table"); return;
  }
L_11d169f4:;
  /* 11d169f4 jmp dword ptr [ecx*4 + 0x11d16af8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11d16af8)))); return;
  /* 11d169fb nop  */
  /* nop */
L_11d169fc:;
  /* 11d169fc jmp dword ptr [ecx*4 + 0x11d16a7c] */
  switch (ECX) {
    case 0: goto L_11d16adf;
    case 1: goto L_11d16acc;
    case 2: goto L_11d16ac4;
    case 3: goto L_11d16abc;
    case 4: goto L_11d16ab4;
    case 5: goto L_11d16aac;
    case 6: goto L_11d16aa4;
    case 7: goto L_11d16a9c;
    default: x86_unimpl("switch@0x11d169fc out of table"); return;
  }
  /* 11d16a03 nop  */
  /* nop */
L_11d16a10:;
  /* 11d16a10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d16a12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d16a14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d16a16 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d16a19 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d16a1c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d16a1f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d16a22 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d16a25 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16a28 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16a2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16a2e jb 0x11d169fc */
  if (C.cf) goto L_11d169fc;
  /* 11d16a30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d16a32 jmp dword ptr [edx*4 + 0x11d16ae8] */
  switch (EDX) {
    case 0: goto L_11d16af8;
    case 1: goto L_11d16b00;
    case 2: goto L_11d16b0c;
    case 3: goto L_11d16b20;
    default: x86_unimpl("switch@0x11d16a32 out of table"); return;
  }
  /* 11d16a39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d16a3c:;
  /* 11d16a3c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d16a3e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d16a40 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d16a42 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d16a45 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d16a48 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d16a4b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16a4e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16a51 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16a54 jb 0x11d169fc */
  if (C.cf) goto L_11d169fc;
  /* 11d16a56 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d16a58 jmp dword ptr [edx*4 + 0x11d16ae8] */
  switch (EDX) {
    case 0: goto L_11d16af8;
    case 1: goto L_11d16b00;
    case 2: goto L_11d16b0c;
    case 3: goto L_11d16b20;
    default: x86_unimpl("switch@0x11d16a58 out of table"); return;
  }
  /* 11d16a5f nop  */
  /* nop */
L_11d16a60:;
  /* 11d16a60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d16a62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d16a64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d16a66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d16a67 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d16a6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d16a6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16a6e jb 0x11d169fc */
  if (C.cf) goto L_11d169fc;
  /* 11d16a70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d16a72 jmp dword ptr [edx*4 + 0x11d16ae8] */
  switch (EDX) {
    case 0: goto L_11d16af8;
    case 1: goto L_11d16b00;
    case 2: goto L_11d16b0c;
    case 3: goto L_11d16b20;
    default: x86_unimpl("switch@0x11d16a72 out of table"); return;
  }
  /* 11d16a79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d16a9c:;
  /* 11d16a9c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11d16aa0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11d16aa4:;
  /* 11d16aa4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11d16aa8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11d16aac:;
  /* 11d16aac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11d16ab0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11d16ab4:;
  /* 11d16ab4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11d16ab8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11d16abc:;
  /* 11d16abc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11d16ac0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11d16ac4:;
  /* 11d16ac4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11d16ac8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11d16acc:;
  /* 11d16acc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11d16ad0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11d16ad4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d16adb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16add add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d16adf:;
  /* 11d16adf jmp dword ptr [edx*4 + 0x11d16ae8] */
  switch (EDX) {
    case 0: goto L_11d16af8;
    case 1: goto L_11d16b00;
    case 2: goto L_11d16b0c;
    case 3: goto L_11d16b20;
    default: x86_unimpl("switch@0x11d16adf out of table"); return;
  }
  /* 11d16ae6 mov edi, edi */
  EDI = (EDI);
L_11d16af8:;
  /* 11d16af8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16afb pop esi */
  ESI = (pop32());
  /* 11d16afc pop edi */
  EDI = (pop32());
  /* 11d16afd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16afe ret  */
  ESPCHK(0x11d169a0u, _esp0);
  ESP += 4; return;
  /* 11d16aff nop  */
  /* nop */
L_11d16b00:;
  /* 11d16b00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d16b02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d16b04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16b07 pop esi */
  ESI = (pop32());
  /* 11d16b08 pop edi */
  EDI = (pop32());
  /* 11d16b09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16b0a ret  */
  ESPCHK(0x11d169a0u, _esp0);
  ESP += 4; return;
  /* 11d16b0b nop  */
  /* nop */
L_11d16b0c:;
  /* 11d16b0c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d16b0e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d16b10 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d16b13 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d16b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16b19 pop esi */
  ESI = (pop32());
  /* 11d16b1a pop edi */
  EDI = (pop32());
  /* 11d16b1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16b1c ret  */
  ESPCHK(0x11d169a0u, _esp0);
  ESP += 4; return;
  /* 11d16b1d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d16b20:;
  /* 11d16b20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d16b22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d16b24 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d16b27 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d16b2a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d16b2d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d16b30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16b33 pop esi */
  ESI = (pop32());
  /* 11d16b34 pop edi */
  EDI = (pop32());
  /* 11d16b35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16b36 ret  */
  ESPCHK(0x11d169a0u, _esp0);
  ESP += 4; return;
  /* 11d16b37 nop  */
  /* nop */
L_11d16b38:;
  /* 11d16b38 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11d16b3c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11d16b40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d16b46 jne 0x11d16b6c */
  if (!C.zf) goto L_11d16b6c;
  /* 11d16b48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d16b4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11d16b4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16b51 jb 0x11d16b60 */
  if (C.cf) goto L_11d16b60;
  /* 11d16b53 std  */
  C.df=1;
  /* 11d16b54 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d16b56 cld  */
  C.df=0;
  /* 11d16b57 jmp dword ptr [edx*4 + 0x11d16c80] */
  switch (EDX) {
    case 0: goto L_11d16c90;
    case 1: goto L_11d16c98;
    case 2: goto L_11d16ca8;
    case 3: goto L_11d16cbc;
    default: x86_unimpl("switch@0x11d16b57 out of table"); return;
  }
  /* 11d16b5e mov edi, edi */
  EDI = (EDI);
L_11d16b60:;
  /* 11d16b60 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d16b62 jmp dword ptr [ecx*4 + 0x11d16c30] */
  switch (ECX) {
    case 0: goto L_11d16c77;
    default: x86_unimpl("switch@0x11d16b62 out of table"); return;
  }
  /* 11d16b69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d16b6c:;
  /* 11d16b6c mov eax, edi */
  EAX = (EDI);
  /* 11d16b6e mov edx, 3 */
  EDX = (0x3u);
  /* 11d16b73 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16b76 jb 0x11d16b84 */
  if (C.cf) goto L_11d16b84;
  /* 11d16b78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11d16b7b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16b7d jmp dword ptr [eax*4 + 0x11d16b88] */
  switch (EAX) {
    case 1: goto L_11d16b98;
    case 2: goto L_11d16bb8;
    case 3: goto L_11d16be0;
    default: x86_unimpl("switch@0x11d16b7d out of table"); return;
  }
L_11d16b84:;
  /* 11d16b84 jmp dword ptr [ecx*4 + 0x11d16c80] */
  switch (ECX) {
    case 0: goto L_11d16c90;
    case 1: goto L_11d16c98;
    case 2: goto L_11d16ca8;
    case 3: goto L_11d16cbc;
    default: x86_unimpl("switch@0x11d16b84 out of table"); return;
  }
  /* 11d16b8b nop  */
  /* nop */
L_11d16b98:;
  /* 11d16b98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d16b9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d16b9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d16ba0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d16ba1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d16ba4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d16ba5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16ba8 jb 0x11d16b60 */
  if (C.cf) goto L_11d16b60;
  /* 11d16baa std  */
  C.df=1;
  /* 11d16bab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d16bad cld  */
  C.df=0;
  /* 11d16bae jmp dword ptr [edx*4 + 0x11d16c80] */
  switch (EDX) {
    case 0: goto L_11d16c90;
    case 1: goto L_11d16c98;
    case 2: goto L_11d16ca8;
    case 3: goto L_11d16cbc;
    default: x86_unimpl("switch@0x11d16bae out of table"); return;
  }
  /* 11d16bb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d16bb8:;
  /* 11d16bb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d16bbb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d16bbd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d16bc0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d16bc3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d16bc6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d16bc9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16bcc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16bcf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16bd2 jb 0x11d16b60 */
  if (C.cf) goto L_11d16b60;
  /* 11d16bd4 std  */
  C.df=1;
  /* 11d16bd5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d16bd7 cld  */
  C.df=0;
  /* 11d16bd8 jmp dword ptr [edx*4 + 0x11d16c80] */
  switch (EDX) {
    case 0: goto L_11d16c90;
    case 1: goto L_11d16c98;
    case 2: goto L_11d16ca8;
    case 3: goto L_11d16cbc;
    default: x86_unimpl("switch@0x11d16bd8 out of table"); return;
  }
  /* 11d16bdf nop  */
  /* nop */
L_11d16be0:;
  /* 11d16be0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d16be3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11d16be5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d16be8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d16beb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d16bee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d16bf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d16bf4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d16bf7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16bfa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16bfd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16c00 jb 0x11d16b60 */
  if (C.cf) goto L_11d16b60;
  /* 11d16c06 std  */
  C.df=1;
  /* 11d16c07 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11d16c09 cld  */
  C.df=0;
  /* 11d16c0a jmp dword ptr [edx*4 + 0x11d16c80] */
  switch (EDX) {
    case 0: goto L_11d16c90;
    case 1: goto L_11d16c98;
    case 2: goto L_11d16ca8;
    case 3: goto L_11d16cbc;
    default: x86_unimpl("switch@0x11d16c0a out of table"); return;
  }
  /* 11d16c11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11d16c14 xor al, 0x6c */
  { uint32_t _r=(AL)^(0x6cu); AL = (_r); fl_logic(_r,8); }
  /* 11d16c16 rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d16c18 cmp al, 0x6c */
  { uint32_t _a=(AL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d16c1a rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d16c1c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11d16c1d insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11d16c1d");
  /* 11d16c1e rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d16c20 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11d16c21 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11d16c21");
  /* 11d16c22 rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d16c24 push esp */
  push32((uint32_t)(ESP));
  /* 11d16c25 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11d16c25");
  /* 11d16c26 rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d16c28 pop esp */
  ESP = (pop32());
  /* 11d16c29 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11d16c29");
  /* 11d16c2a rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d16c2c insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11d16c2c");
  /* 11d16c2e rcl dword ptr [ecx] */
  { uint32_t _v=(r32((uint32_t)(ECX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(ECX), (_v)); C.cf=_cf; }
  /* 11d16c34 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11d16c38 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11d16c3c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11d16c40 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11d16c44 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11d16c48 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11d16c4c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11d16c50 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11d16c54 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11d16c58 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11d16c5c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11d16c60 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11d16c64 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11d16c68 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11d16c6c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11d16c73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16c75 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d16c77:;
  /* 11d16c77 jmp dword ptr [edx*4 + 0x11d16c80] */
  switch (EDX) {
    case 0: goto L_11d16c90;
    case 1: goto L_11d16c98;
    case 2: goto L_11d16ca8;
    case 3: goto L_11d16cbc;
    default: x86_unimpl("switch@0x11d16c77 out of table"); return;
  }
  /* 11d16c7e mov edi, edi */
  EDI = (EDI);
L_11d16c90:;
  /* 11d16c90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16c93 pop esi */
  ESI = (pop32());
  /* 11d16c94 pop edi */
  EDI = (pop32());
  /* 11d16c95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16c96 ret  */
  ESPCHK(0x11d169a0u, _esp0);
  ESP += 4; return;
  /* 11d16c97 nop  */
  /* nop */
L_11d16c98:;
  /* 11d16c98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d16c9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d16c9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16ca1 pop esi */
  ESI = (pop32());
  /* 11d16ca2 pop edi */
  EDI = (pop32());
  /* 11d16ca3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16ca4 ret  */
  ESPCHK(0x11d169a0u, _esp0);
  ESP += 4; return;
  /* 11d16ca5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d16ca8:;
  /* 11d16ca8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d16cab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d16cae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d16cb1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d16cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16cb7 pop esi */
  ESI = (pop32());
  /* 11d16cb8 pop edi */
  EDI = (pop32());
  /* 11d16cb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16cba ret  */
  ESPCHK(0x11d169a0u, _esp0);
  ESP += 4; return;
  /* 11d16cbb nop  */
  /* nop */
L_11d16cbc:;
  /* 11d16cbc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11d16cbf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11d16cc2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11d16cc5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11d16cc8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d16ccb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11d16cce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16cd1 pop esi */
  ESI = (pop32());
  /* 11d16cd2 pop edi */
  EDI = (pop32());
  /* 11d16cd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d16cd4 ret  */
  ESPCHK(0x11d169a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cd5 @ 0x11d16cd5 (215 bytes, 76 insns) */
void f_11d16cd5(void) {
  FTRACE(0x11d16cd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16cd5 push ebp */
  push32((uint32_t)(EBP));
  /* 11d16cd6 mov ebp, esp */
  EBP = (ESP);
  /* 11d16cd8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d16cda push 0x11d1c600 */
  push32((uint32_t)(0x11d1c600u));
  /* 11d16cdf push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d16ce4 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d16cea push eax */
  push32((uint32_t)(EAX));
  /* 11d16ceb mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d16cf2 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16cf5 push ebx */
  push32((uint32_t)(EBX));
  /* 11d16cf6 push esi */
  push32((uint32_t)(ESI));
  /* 11d16cf7 push edi */
  push32((uint32_t)(EDI));
  /* 11d16cf8 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16cfb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d16cfd je 0x11d16daf */
  if (C.zf) { jmp_ind(0x11d16dafu); return; }
  /* 11d16d03 mov eax, dword ptr [0x11d38824] */
  EAX = (r32((uint32_t)(0x11d38824)));
  /* 11d16d08 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16d0b jne 0x11d16d48 */
  if (!C.zf) goto L_11d16d48;
  /* 11d16d0d push 9 */
  push32((uint32_t)(0x9u));
  /* 11d16d0f call 0x11d156f9 */
  push32(0x11d16d14u); f_11d156f9();
  /* 11d16d14 pop ecx */
  ECX = (pop32());
  /* 11d16d15 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d16d19 push esi */
  push32((uint32_t)(ESI));
  /* 11d16d1a call 0x11d157b7 */
  push32(0x11d16d1fu); f_11d157b7();
  /* 11d16d1f pop ecx */
  ECX = (pop32());
  /* 11d16d20 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d16d23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d16d25 je 0x11d16d30 */
  if (C.zf) goto L_11d16d30;
  /* 11d16d27 push esi */
  push32((uint32_t)(ESI));
  /* 11d16d28 push eax */
  push32((uint32_t)(EAX));
  /* 11d16d29 call 0x11d157e2 */
  push32(0x11d16d2eu); f_11d157e2();
  /* 11d16d2e pop ecx */
  ECX = (pop32());
  /* 11d16d2f pop ecx */
  ECX = (pop32());
L_11d16d30:;
  /* 11d16d30 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d16d34 call 0x11d16d3f */
  push32(0x11d16d39u); f_11d16d3f();
  /* 11d16d39 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16d3d jmp 0x11d16d90 */
  goto L_11d16d90;
  /* 11d16d3f push 9 */
  push32((uint32_t)(0x9u));
  /* 11d16d41 call 0x11d1575a */
  push32(0x11d16d46u); f_11d1575a();
  /* 11d16d46 pop ecx */
  ECX = (pop32());
  /* 11d16d47 ret  */
  ESPCHK(0x11d16cd5u, _esp0);
  ESP += 4; return;
L_11d16d48:;
  /* 11d16d48 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16d4b jne 0x11d16da0 */
  if (!C.zf) goto L_11d16da0;
  /* 11d16d4d push 9 */
  push32((uint32_t)(0x9u));
  /* 11d16d4f call 0x11d156f9 */
  push32(0x11d16d54u); f_11d156f9();
  /* 11d16d54 pop ecx */
  ECX = (pop32());
  /* 11d16d55 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d16d5c lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11d16d5f push eax */
  push32((uint32_t)(EAX));
  /* 11d16d60 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11d16d63 push eax */
  push32((uint32_t)(EAX));
  /* 11d16d64 push esi */
  push32((uint32_t)(ESI));
  /* 11d16d65 call 0x11d16512 */
  push32(0x11d16d6au); f_11d16512();
  /* 11d16d6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16d6d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d16d70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d16d72 je 0x11d16d83 */
  if (C.zf) goto L_11d16d83;
  /* 11d16d74 push eax */
  push32((uint32_t)(EAX));
  /* 11d16d75 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11d16d78 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11d16d7b call 0x11d16569 */
  push32(0x11d16d80u); f_11d16569();
  /* 11d16d80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d16d83:;
  /* 11d16d83 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d16d87 call 0x11d16d97 */
  push32(0x11d16d8cu); f_11d16d97();
  /* 11d16d8c cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11d16d90:;
  /* 11d16d90 jne 0x11d16daf */
  if (!C.zf) { jmp_ind(0x11d16dafu); return; }
  /* 11d16d92 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d16d95 jmp 0x11d16da1 */
  goto L_11d16da1;
  /* 11d16d97 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d16d99 call 0x11d1575a */
  push32(0x11d16d9eu); f_11d1575a();
  /* 11d16d9e pop ecx */
  ECX = (pop32());
  /* 11d16d9f ret  */
  ESPCHK(0x11d16cd5u, _esp0);
  ESP += 4; return;
L_11d16da0:;
  /* 11d16da0 push esi */
  push32((uint32_t)(ESI));
L_11d16da1:;
  /* 11d16da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d16da3 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d16dab insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11d16dab");
}

/* FUN_10006d3f @ 0x11d16d3f (9 bytes, 4 insns) */
void f_11d16d3f(void) {
  FTRACE(0x11d16d3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16d3f push 9 */
  push32((uint32_t)(0x9u));
  /* 11d16d41 call 0x11d1575a */
  push32(0x11d16d46u); f_11d1575a();
  /* 11d16d46 pop ecx */
  ECX = (pop32());
  /* 11d16d47 ret  */
  ESPCHK(0x11d16d3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10006d97 @ 0x11d16d97 (9 bytes, 4 insns) */
void f_11d16d97(void) {
  FTRACE(0x11d16d97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16d97 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d16d99 call 0x11d1575a */
  push32(0x11d16d9eu); f_11d1575a();
  /* 11d16d9e pop ecx */
  ECX = (pop32());
  /* 11d16d9f ret  */
  ESPCHK(0x11d16d97u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11d16dc0 (32 bytes, 18 insns) */
void f_11d16dc0(void) {
  FTRACE(0x11d16dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d16dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11d16dc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11d16dc4 push esi */
  push32((uint32_t)(ESI));
  /* 11d16dc5 push edi */
  push32((uint32_t)(EDI));
  /* 11d16dc6 push ebp */
  push32((uint32_t)(EBP));
  /* 11d16dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d16dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d16dcb push 0x11d16dd8 */
  push32((uint32_t)(0x11d16dd8u));
  /* 11d16dd0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d16dd3 call 0x11d1a4fc */
  push32(0x11d16dd8u); f_11d1a4fc();
  /* 11d16dd8 pop ebp */
  EBP = (pop32());
  /* 11d16dd9 pop edi */
  EDI = (pop32());
  /* 11d16dda pop esi */
  ESI = (pop32());
  /* 11d16ddb pop ebx */
  EBX = (pop32());
  /* 11d16ddc mov esp, ebp */
  ESP = (EBP);
  /* 11d16dde pop ebp */
  EBP = (pop32());
  /* 11d16ddf ret  */
  ESPCHK(0x11d16dc0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11d16e02 (104 bytes, 33 insns) */
void f_11d16e02(void) {
  FTRACE(0x11d16e02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16e02 push ebx */
  push32((uint32_t)(EBX));
  /* 11d16e03 push esi */
  push32((uint32_t)(ESI));
  /* 11d16e04 push edi */
  push32((uint32_t)(EDI));
  /* 11d16e05 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d16e09 push eax */
  push32((uint32_t)(EAX));
  /* 11d16e0a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11d16e0c push 0x11d16de0 */
  push32((uint32_t)(0x11d16de0u));
  /* 11d16e11 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11d16e18 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11d16e1f:;
  /* 11d16e1f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11d16e23 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d16e26 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11d16e29 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16e2c je 0x11d16e5c */
  if (C.zf) goto L_11d16e5c;
  /* 11d16e2e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16e32 je 0x11d16e5c */
  if (C.zf) goto L_11d16e5c;
  /* 11d16e34 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11d16e37 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11d16e3a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11d16e3e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11d16e41 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16e46 jne 0x11d16e5a */
  if (!C.zf) goto L_11d16e5a;
  /* 11d16e48 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11d16e4d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11d16e51 call 0x11d16e96 */
  push32(0x11d16e56u); f_11d16e96();
  /* 11d16e56 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11d16e5au);
L_11d16e5a:;
  /* 11d16e5a jmp 0x11d16e1f */
  goto L_11d16e1f;
L_11d16e5c:;
  /* 11d16e5c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11d16e63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16e66 pop edi */
  EDI = (pop32());
  /* 11d16e67 pop esi */
  ESI = (pop32());
  /* 11d16e68 pop ebx */
  EBX = (pop32());
  /* 11d16e69 ret  */
  ESPCHK(0x11d16e02u, _esp0);
  ESP += 4; return;
}

/* __abnormal_termination @ 0x11d16e6a (35 bytes, 10 insns) */
void f_11d16e6a(void) {
  FTRACE(0x11d16e6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16e6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d16e6c mov ecx, dword ptr fs:[0] */
  ECX = (r32((uint32_t)(0x0)));
  /* 11d16e73 cmp dword ptr [ecx + 4], 0x11d16de0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x11d16de0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16e7a jne 0x11d16e8c */
  if (!C.zf) goto L_11d16e8c;
  /* 11d16e7c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11d16e7f mov edx, dword ptr [edx + 0xc] */
  EDX = (r32((uint32_t)(EDX + 0xc)));
  /* 11d16e82 cmp dword ptr [ecx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16e85 jne 0x11d16e8c */
  if (!C.zf) goto L_11d16e8c;
  /* 11d16e87 mov eax, 1 */
  EAX = (0x1u);
L_11d16e8c:;
  /* 11d16e8c ret  */
  ESPCHK(0x11d16e6au, _esp0);
  ESP += 4; return;
}

/* __NLG_Notify1 @ 0x11d16e8d (9 bytes, 4 insns) */
void f_11d16e8d(void) {
  FTRACE(0x11d16e8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16e8d push ebx */
  push32((uint32_t)(EBX));
  /* 11d16e8e push ecx */
  push32((uint32_t)(ECX));
  /* 11d16e8f mov ebx, 0x11d20840 */
  EBX = (0x11d20840u);
  /* 11d16e94 jmp 0x11d16ea0 */
  jmp_ind(0x11d16ea0u); return;
}

/* FUN_10006e96 @ 0x11d16e96 (24 bytes, 10 insns) */
void f_11d16e96(void) {
  FTRACE(0x11d16e96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16e96 push ebx */
  push32((uint32_t)(EBX));
  /* 11d16e97 push ecx */
  push32((uint32_t)(ECX));
  /* 11d16e98 mov ebx, 0x11d20840 */
  EBX = (0x11d20840u);
  /* 11d16e9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16ea0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11d16ea3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11d16ea6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11d16ea9 pop ecx */
  ECX = (pop32());
  /* 11d16eaa pop ebx */
  EBX = (pop32());
  /* 11d16eab ret 4 */
  ESPCHK(0x11d16e96u, _esp0);
  ESP += 8; return;
}

/* FUN_10006f75 @ 0x11d16f75 (27 bytes, 11 insns) */
void f_11d16f75(void) {
  FTRACE(0x11d16f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16f75 push ebp */
  push32((uint32_t)(EBP));
  /* 11d16f76 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d16f7a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11d16f7c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d16f7f push eax */
  push32((uint32_t)(EAX));
  /* 11d16f80 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11d16f83 push eax */
  push32((uint32_t)(EAX));
  /* 11d16f84 call 0x11d16e02 */
  push32(0x11d16f89u); f_11d16e02();
  /* 11d16f89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16f8c pop ebp */
  EBP = (pop32());
  /* 11d16f8d ret 4 */
  ESPCHK(0x11d16f75u, _esp0);
  ESP += 8; return;
}

/* FUN_10006f90 @ 0x11d16f90 (289 bytes, 98 insns) */
void f_11d16f90(void) {
  FTRACE(0x11d16f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d16f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11d16f91 mov ebp, esp */
  EBP = (ESP);
  /* 11d16f93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d16f95 push 0x11d1c618 */
  push32((uint32_t)(0x11d1c618u));
  /* 11d16f9a push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d16f9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d16fa5 push eax */
  push32((uint32_t)(EAX));
  /* 11d16fa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d16fad sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d16fb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d16fb1 push esi */
  push32((uint32_t)(ESI));
  /* 11d16fb2 push edi */
  push32((uint32_t)(EDI));
  /* 11d16fb3 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d16fb6 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d16fba mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11d16fbd mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11d16fc0 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16fc3 ja 0x11d16fd9 */
  if ((!C.cf&&!C.zf)) goto L_11d16fd9;
  /* 11d16fc5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d16fc7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16fc9 jne 0x11d16fce */
  if (!C.zf) goto L_11d16fce;
  /* 11d16fcb push 1 */
  push32((uint32_t)(0x1u));
  /* 11d16fcd pop esi */
  ESI = (pop32());
L_11d16fce:;
  /* 11d16fce add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d16fd1 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11d16fd4 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11d16fd7 jmp 0x11d16fdb */
  goto L_11d16fdb;
L_11d16fd9:;
  /* 11d16fd9 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11d16fdb:;
  /* 11d16fdb mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11d16fde cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16fe1 ja 0x11d1708f */
  if ((!C.cf&&!C.zf)) goto L_11d1708f;
  /* 11d16fe7 mov eax, dword ptr [0x11d38824] */
  EAX = (r32((uint32_t)(0x11d38824)));
  /* 11d16fec cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16fef jne 0x11d17032 */
  if (!C.zf) goto L_11d17032;
  /* 11d16ff1 mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d16ff4 cmp edi, dword ptr [0x11d3881c] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x11d3881c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d16ffa ja 0x11d17078 */
  if ((!C.cf&&!C.zf)) goto L_11d17078;
  /* 11d16ffc push 9 */
  push32((uint32_t)(0x9u));
  /* 11d16ffe call 0x11d156f9 */
  push32(0x11d17003u); f_11d156f9();
  /* 11d17003 pop ecx */
  ECX = (pop32());
  /* 11d17004 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11d17007 push edi */
  push32((uint32_t)(EDI));
  /* 11d17008 call 0x11d15b0b */
  push32(0x11d1700du); f_11d15b0b();
  /* 11d1700d pop ecx */
  ECX = (pop32());
  /* 11d1700e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d17011 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d17015 call 0x11d17029 */
  push32(0x11d1701au); f_11d17029();
  /* 11d1701a cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1701d je 0x11d1707d */
  if (C.zf) goto L_11d1707d;
  /* 11d1701f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11d17022 jmp 0x11d1706c */
  goto L_11d1706c;
  /* 11d17024 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d17026 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d17029 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d1702b call 0x11d1575a */
  push32(0x11d17030u); f_11d1575a();
  /* 11d17030 pop ecx */
  ECX = (pop32());
  /* 11d17031 ret  */
  ESPCHK(0x11d16f90u, _esp0);
  ESP += 4; return;
L_11d17032:;
  /* 11d17032 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17035 jne 0x11d17078 */
  if (!C.zf) goto L_11d17078;
  /* 11d17037 cmp esi, dword ptr [0x11d20834] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d20834))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1703d ja 0x11d17078 */
  if ((!C.cf&&!C.zf)) goto L_11d17078;
  /* 11d1703f push 9 */
  push32((uint32_t)(0x9u));
  /* 11d17041 call 0x11d156f9 */
  push32(0x11d17046u); f_11d156f9();
  /* 11d17046 pop ecx */
  ECX = (pop32());
  /* 11d17047 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d1704e mov eax, esi */
  EAX = (ESI);
  /* 11d17050 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d17053 push eax */
  push32((uint32_t)(EAX));
  /* 11d17054 call 0x11d165ae */
  push32(0x11d17059u); f_11d165ae();
  /* 11d17059 pop ecx */
  ECX = (pop32());
  /* 11d1705a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d1705d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d17061 call 0x11d170b2 */
  push32(0x11d17066u); f_11d170b2();
  /* 11d17066 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17069 je 0x11d1707d */
  if (C.zf) goto L_11d1707d;
  /* 11d1706b push esi */
  push32((uint32_t)(ESI));
L_11d1706c:;
  /* 11d1706c push ebx */
  push32((uint32_t)(EBX));
  /* 11d1706d push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11d17070 call 0x11d15240 */
  push32(0x11d17075u); f_11d15240();
  /* 11d17075 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d17078:;
  /* 11d17078 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1707b jne 0x11d170bb */
  if (!C.zf) { jmp_ind(0x11d170bbu); return; }
L_11d1707d:;
  /* 11d1707d push esi */
  push32((uint32_t)(ESI));
  /* 11d1707e push 8 */
  push32((uint32_t)(0x8u));
  /* 11d17080 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d17086 call dword ptr [0x11d1c004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c004))), 0x11d1708cu);
  /* 11d1708c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11d1708f:;
  /* 11d1708f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17092 jne 0x11d170bb */
  if (!C.zf) { jmp_ind(0x11d170bbu); return; }
  /* 11d17094 cmp dword ptr [0x11d373c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11d373c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1709a je 0x11d170bb */
  if (C.zf) { jmp_ind(0x11d170bbu); return; }
  /* 11d1709c push esi */
  push32((uint32_t)(ESI));
  /* 11d1709d call 0x11d16983 */
  push32(0x11d170a2u); f_11d16983();
  /* 11d170a2 pop ecx */
  ECX = (pop32());
  /* 11d170a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d170a5 jne 0x11d16fdb */
  if (!C.zf) goto L_11d16fdb;
  /* 11d170ab jmp 0x11d170be */
  jmp_ind(0x11d170beu); return;
  /* 11d170ad xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10007029 @ 0x11d17029 (9 bytes, 4 insns) */
void f_11d17029(void) {
  FTRACE(0x11d17029u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17029 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d1702b call 0x11d1575a */
  push32(0x11d17030u); f_11d1575a();
  /* 11d17030 pop ecx */
  ECX = (pop32());
  /* 11d17031 ret  */
  ESPCHK(0x11d17029u, _esp0);
  ESP += 4; return;
}

/* FUN_100070b2 @ 0x11d170b2 (9 bytes, 4 insns) */
void f_11d170b2(void) {
  FTRACE(0x11d170b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d170b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d170b4 call 0x11d1575a */
  push32(0x11d170b9u); f_11d1575a();
  /* 11d170b9 pop ecx */
  ECX = (pop32());
  /* 11d170ba ret  */
  ESPCHK(0x11d170b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100070cd @ 0x11d170cd (101 bytes, 34 insns) */
void f_11d170cd(void) {
  FTRACE(0x11d170cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d170cd push esi */
  push32((uint32_t)(ESI));
  /* 11d170ce mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d170d2 cmp esi, dword ptr [0x11d38940] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d38940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d170d8 jae 0x11d1711a */
  if (!C.cf) goto L_11d1711a;
  /* 11d170da mov ecx, esi */
  ECX = (ESI);
  /* 11d170dc mov eax, esi */
  EAX = (ESI);
  /* 11d170de sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d170e1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d170e4 mov ecx, dword ptr [ecx*4 + 0x11d38840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d170eb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11d170ee test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11d170f3 je 0x11d1711a */
  if (C.zf) goto L_11d1711a;
  /* 11d170f5 push edi */
  push32((uint32_t)(EDI));
  /* 11d170f6 push esi */
  push32((uint32_t)(ESI));
  /* 11d170f7 call 0x11d18ef0 */
  push32(0x11d170fcu); f_11d18ef0();
  /* 11d170fc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d17100 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d17104 push esi */
  push32((uint32_t)(ESI));
  /* 11d17105 call 0x11d17132 */
  push32(0x11d1710au); f_11d17132();
  /* 11d1710a push esi */
  push32((uint32_t)(ESI));
  /* 11d1710b mov edi, eax */
  EDI = (EAX);
  /* 11d1710d call 0x11d18f4f */
  push32(0x11d17112u); f_11d18f4f();
  /* 11d17112 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17115 mov eax, edi */
  EAX = (EDI);
  /* 11d17117 pop edi */
  EDI = (pop32());
  /* 11d17118 pop esi */
  ESI = (pop32());
  /* 11d17119 ret  */
  ESPCHK(0x11d170cdu, _esp0);
  ESP += 4; return;
L_11d1711a:;
  /* 11d1711a call 0x11d18e1d */
  push32(0x11d1711fu); f_11d18e1d();
  /* 11d1711f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d17125 call 0x11d18e26 */
  push32(0x11d1712au); f_11d18e26();
  /* 11d1712a and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d1712d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d17130 pop esi */
  ESI = (pop32());
  /* 11d17131 ret  */
  ESPCHK(0x11d170cdu, _esp0);
  ESP += 4; return;
}

/* FUN_10007132 @ 0x11d17132 (115 bytes, 41 insns) */
void f_11d17132(void) {
  FTRACE(0x11d17132u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17132 push esi */
  push32((uint32_t)(ESI));
  /* 11d17133 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d17137 push edi */
  push32((uint32_t)(EDI));
  /* 11d17138 push esi */
  push32((uint32_t)(ESI));
  /* 11d17139 call 0x11d18eae */
  push32(0x11d1713eu); f_11d18eae();
  /* 11d1713e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17141 pop ecx */
  ECX = (pop32());
  /* 11d17142 jne 0x11d17151 */
  if (!C.zf) goto L_11d17151;
  /* 11d17144 call 0x11d18e1d */
  push32(0x11d17149u); f_11d18e1d();
  /* 11d17149 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d1714f jmp 0x11d1717e */
  goto L_11d1717e;
L_11d17151:;
  /* 11d17151 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11d17155 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d17157 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d1715b push eax */
  push32((uint32_t)(EAX));
  /* 11d1715c call dword ptr [0x11d1c044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c044))), 0x11d17162u);
  /* 11d17162 mov edi, eax */
  EDI = (EAX);
  /* 11d17164 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17167 jne 0x11d17171 */
  if (!C.zf) goto L_11d17171;
  /* 11d17169 call dword ptr [0x11d1c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b4))), 0x11d1716fu);
  /* 11d1716f jmp 0x11d17173 */
  goto L_11d17173;
L_11d17171:;
  /* 11d17171 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d17173:;
  /* 11d17173 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17175 je 0x11d17183 */
  if (C.zf) goto L_11d17183;
  /* 11d17177 push eax */
  push32((uint32_t)(EAX));
  /* 11d17178 call 0x11d18daa */
  push32(0x11d1717du); f_11d18daa();
  /* 11d1717d pop ecx */
  ECX = (pop32());
L_11d1717e:;
  /* 11d1717e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d17181 jmp 0x11d171a2 */
  goto L_11d171a2;
L_11d17183:;
  /* 11d17183 mov ecx, esi */
  ECX = (ESI);
  /* 11d17185 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11d17188 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d1718b mov eax, esi */
  EAX = (ESI);
  /* 11d1718d mov ecx, dword ptr [ecx*4 + 0x11d38840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d17194 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11d17197 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11d1719c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11d171a0 mov eax, edi */
  EAX = (EDI);
L_11d171a2:;
  /* 11d171a2 pop edi */
  EDI = (pop32());
  /* 11d171a3 pop esi */
  ESI = (pop32());
  /* 11d171a4 ret  */
  ESPCHK(0x11d17132u, _esp0);
  ESP += 4; return;
}

/* FUN_100071a5 @ 0x11d171a5 (101 bytes, 34 insns) */
void f_11d171a5(void) {
  FTRACE(0x11d171a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d171a5 push esi */
  push32((uint32_t)(ESI));
  /* 11d171a6 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d171aa cmp esi, dword ptr [0x11d38940] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d38940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d171b0 jae 0x11d171f2 */
  if (!C.cf) goto L_11d171f2;
  /* 11d171b2 mov ecx, esi */
  ECX = (ESI);
  /* 11d171b4 mov eax, esi */
  EAX = (ESI);
  /* 11d171b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d171b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d171bc mov ecx, dword ptr [ecx*4 + 0x11d38840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d171c3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11d171c6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11d171cb je 0x11d171f2 */
  if (C.zf) goto L_11d171f2;
  /* 11d171cd push edi */
  push32((uint32_t)(EDI));
  /* 11d171ce push esi */
  push32((uint32_t)(ESI));
  /* 11d171cf call 0x11d18ef0 */
  push32(0x11d171d4u); f_11d18ef0();
  /* 11d171d4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d171d8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d171dc push esi */
  push32((uint32_t)(ESI));
  /* 11d171dd call 0x11d1720a */
  push32(0x11d171e2u); f_11d1720a();
  /* 11d171e2 push esi */
  push32((uint32_t)(ESI));
  /* 11d171e3 mov edi, eax */
  EDI = (EAX);
  /* 11d171e5 call 0x11d18f4f */
  push32(0x11d171eau); f_11d18f4f();
  /* 11d171ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d171ed mov eax, edi */
  EAX = (EDI);
  /* 11d171ef pop edi */
  EDI = (pop32());
  /* 11d171f0 pop esi */
  ESI = (pop32());
  /* 11d171f1 ret  */
  ESPCHK(0x11d171a5u, _esp0);
  ESP += 4; return;
L_11d171f2:;
  /* 11d171f2 call 0x11d18e1d */
  push32(0x11d171f7u); f_11d18e1d();
  /* 11d171f7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d171fd call 0x11d18e26 */
  push32(0x11d17202u); f_11d18e26();
  /* 11d17202 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d17205 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d17208 pop esi */
  ESI = (pop32());
  /* 11d17209 ret  */
  ESPCHK(0x11d171a5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000720a @ 0x11d1720a (395 bytes, 135 insns) */
void f_11d1720a(void) {
  FTRACE(0x11d1720au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1720a push ebp */
  push32((uint32_t)(EBP));
  /* 11d1720b mov ebp, esp */
  EBP = (ESP);
  /* 11d1720d sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17213 push ebx */
  push32((uint32_t)(EBX));
  /* 11d17214 push esi */
  push32((uint32_t)(ESI));
  /* 11d17215 push edi */
  push32((uint32_t)(EDI));
  /* 11d17216 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d17218 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1721b mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 11d1721e mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11d17221 jne 0x11d1722a */
  if (!C.zf) goto L_11d1722a;
L_11d17223:;
  /* 11d17223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17225 jmp 0x11d17390 */
  goto L_11d17390;
L_11d1722a:;
  /* 11d1722a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1722d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d17230 lea ebx, [eax*4 + 0x11d38840] */
  EBX = ((uint32_t)(EAX*4 + 0x11d38840));
  /* 11d17237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1723a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1723d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11d17240 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11d17242 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11d17245 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 11d1724a je 0x11d1725a */
  if (C.zf) goto L_11d1725a;
  /* 11d1724c push 2 */
  push32((uint32_t)(0x2u));
  /* 11d1724e push edi */
  push32((uint32_t)(EDI));
  /* 11d1724f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d17252 call 0x11d17132 */
  push32(0x11d17257u); f_11d17132();
  /* 11d17257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d1725a:;
  /* 11d1725a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11d1725c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1725e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11d17262 je 0x11d17329 */
  if (C.zf) goto L_11d17329;
  /* 11d17268 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1726b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1726e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d17271 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11d17274 jbe 0x11d17364 */
  if ((C.cf||C.zf)) goto L_11d17364;
L_11d1727a:;
  /* 11d1727a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_11d17280:;
  /* 11d17280 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d17283 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17286 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17289 jae 0x11d172b4 */
  if (!C.cf) goto L_11d172b4;
  /* 11d1728b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1728e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d17291 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11d17293 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17296 jne 0x11d1729f */
  if (!C.zf) goto L_11d1729f;
  /* 11d17298 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11d1729b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11d1729e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d1729f:;
  /* 11d1729f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d172a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d172a2 mov ecx, eax */
  ECX = (EAX);
  /* 11d172a4 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11d172aa sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d172ac cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d172b2 jl 0x11d17280 */
  if ((C.sf!=C.of)) goto L_11d17280;
L_11d172b4:;
  /* 11d172b4 mov edi, eax */
  EDI = (EAX);
  /* 11d172b6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11d172bc sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d172be lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d172c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d172c3 push eax */
  push32((uint32_t)(EAX));
  /* 11d172c4 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11d172ca push edi */
  push32((uint32_t)(EDI));
  /* 11d172cb push eax */
  push32((uint32_t)(EAX));
  /* 11d172cc mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11d172ce push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11d172d1 call dword ptr [0x11d1c074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c074))), 0x11d172d7u);
  /* 11d172d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d172d9 je 0x11d1731e */
  if (C.zf) goto L_11d1731e;
  /* 11d172db mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d172de add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d172e1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d172e3 jl 0x11d172f0 */
  if ((C.sf!=C.of)) goto L_11d172f0;
  /* 11d172e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d172e8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d172eb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d172ee jb 0x11d1727a */
  if (C.cf) goto L_11d1727a;
L_11d172f0:;
  /* 11d172f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11d172f2:;
  /* 11d172f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d172f5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d172f7 jne 0x11d1738d */
  if (!C.zf) goto L_11d1738d;
  /* 11d172fd cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17300 je 0x11d17364 */
  if (C.zf) goto L_11d17364;
  /* 11d17302 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d17304 pop esi */
  ESI = (pop32());
  /* 11d17305 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17308 jne 0x11d17356 */
  if (!C.zf) goto L_11d17356;
  /* 11d1730a call 0x11d18e1d */
  push32(0x11d1730fu); f_11d18e1d();
  /* 11d1730f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d17315 call 0x11d18e26 */
  push32(0x11d1731au); f_11d18e26();
  /* 11d1731a mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11d1731c jmp 0x11d1735f */
  goto L_11d1735f;
L_11d1731e:;
  /* 11d1731e call dword ptr [0x11d1c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b4))), 0x11d17324u);
  /* 11d17324 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d17327 jmp 0x11d172f0 */
  goto L_11d172f0;
L_11d17329:;
  /* 11d17329 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11d1732c push edi */
  push32((uint32_t)(EDI));
  /* 11d1732d push ecx */
  push32((uint32_t)(ECX));
  /* 11d1732e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d17331 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d17334 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11d17336 call dword ptr [0x11d1c074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c074))), 0x11d1733cu);
  /* 11d1733c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1733e je 0x11d1734b */
  if (C.zf) goto L_11d1734b;
  /* 11d17340 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d17343 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 11d17346 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d17349 jmp 0x11d172f2 */
  goto L_11d172f2;
L_11d1734b:;
  /* 11d1734b call dword ptr [0x11d1c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b4))), 0x11d17351u);
  /* 11d17351 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d17354 jmp 0x11d172f2 */
  goto L_11d172f2;
L_11d17356:;
  /* 11d17356 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d17359 call 0x11d18daa */
  push32(0x11d1735eu); f_11d18daa();
  /* 11d1735e pop ecx */
  ECX = (pop32());
L_11d1735f:;
  /* 11d1735f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d17362 jmp 0x11d17390 */
  goto L_11d17390;
L_11d17364:;
  /* 11d17364 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11d17366 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 11d1736b je 0x11d17379 */
  if (C.zf) goto L_11d17379;
  /* 11d1736d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d17370 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17373 je 0x11d17223 */
  if (C.zf) goto L_11d17223;
L_11d17379:;
  /* 11d17379 call 0x11d18e1d */
  push32(0x11d1737eu); f_11d18e1d();
  /* 11d1737e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11d17384 call 0x11d18e26 */
  push32(0x11d17389u); f_11d18e26();
  /* 11d17389 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11d1738b jmp 0x11d1735f */
  goto L_11d1735f;
L_11d1738d:;
  /* 11d1738d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d17390:;
  /* 11d17390 pop edi */
  EDI = (pop32());
  /* 11d17391 pop esi */
  ESI = (pop32());
  /* 11d17392 pop ebx */
  EBX = (pop32());
  /* 11d17393 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d17394 ret  */
  ESPCHK(0x11d1720au, _esp0);
  ESP += 4; return;
}

/* FUN_10007451 @ 0x11d17451 (47 bytes, 17 insns) */
void f_11d17451(void) {
  FTRACE(0x11d17451u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17451 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d17455 mov ecx, 0x11d208d8 */
  ECX = (0x11d208d8u);
  /* 11d1745a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1745c jb 0x11d17475 */
  if (C.cf) goto L_11d17475;
  /* 11d1745e cmp eax, 0x11d20b38 */
  { uint32_t _a=(EAX),_b=(0x11d20b38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17463 ja 0x11d17475 */
  if ((!C.cf&&!C.zf)) goto L_11d17475;
  /* 11d17465 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17467 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d1746a add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1746d push eax */
  push32((uint32_t)(EAX));
  /* 11d1746e call 0x11d156f9 */
  push32(0x11d17473u); f_11d156f9();
  /* 11d17473 pop ecx */
  ECX = (pop32());
  /* 11d17474 ret  */
  ESPCHK(0x11d17451u, _esp0);
  ESP += 4; return;
L_11d17475:;
  /* 11d17475 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17478 push eax */
  push32((uint32_t)(EAX));
  /* 11d17479 call dword ptr [0x11d1c05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c05c))), 0x11d1747fu);
  /* 11d1747f ret  */
  ESPCHK(0x11d17451u, _esp0);
  ESP += 4; return;
}

/* FUN_10007480 @ 0x11d17480 (35 bytes, 13 insns) */
void f_11d17480(void) {
  FTRACE(0x11d17480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17480 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d17484 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17487 jge 0x11d17494 */
  if ((C.sf==C.of)) goto L_11d17494;
  /* 11d17489 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1748c push eax */
  push32((uint32_t)(EAX));
  /* 11d1748d call 0x11d156f9 */
  push32(0x11d17492u); f_11d156f9();
  /* 11d17492 pop ecx */
  ECX = (pop32());
  /* 11d17493 ret  */
  ESPCHK(0x11d17480u, _esp0);
  ESP += 4; return;
L_11d17494:;
  /* 11d17494 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d17498 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1749b push eax */
  push32((uint32_t)(EAX));
  /* 11d1749c call dword ptr [0x11d1c05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c05c))), 0x11d174a2u);
  /* 11d174a2 ret  */
  ESPCHK(0x11d17480u, _esp0);
  ESP += 4; return;
}

/* FUN_100074a3 @ 0x11d174a3 (47 bytes, 17 insns) */
void f_11d174a3(void) {
  FTRACE(0x11d174a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d174a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d174a7 mov ecx, 0x11d208d8 */
  ECX = (0x11d208d8u);
  /* 11d174ac cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d174ae jb 0x11d174c7 */
  if (C.cf) goto L_11d174c7;
  /* 11d174b0 cmp eax, 0x11d20b38 */
  { uint32_t _a=(EAX),_b=(0x11d20b38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d174b5 ja 0x11d174c7 */
  if ((!C.cf&&!C.zf)) goto L_11d174c7;
  /* 11d174b7 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d174b9 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d174bc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d174bf push eax */
  push32((uint32_t)(EAX));
  /* 11d174c0 call 0x11d1575a */
  push32(0x11d174c5u); f_11d1575a();
  /* 11d174c5 pop ecx */
  ECX = (pop32());
  /* 11d174c6 ret  */
  ESPCHK(0x11d174a3u, _esp0);
  ESP += 4; return;
L_11d174c7:;
  /* 11d174c7 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d174ca push eax */
  push32((uint32_t)(EAX));
  /* 11d174cb call dword ptr [0x11d1c058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c058))), 0x11d174d1u);
  /* 11d174d1 ret  */
  ESPCHK(0x11d174a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d2 @ 0x11d174d2 (35 bytes, 13 insns) */
void f_11d174d2(void) {
  FTRACE(0x11d174d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d174d2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d174d6 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d174d9 jge 0x11d174e6 */
  if ((C.sf==C.of)) goto L_11d174e6;
  /* 11d174db add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d174de push eax */
  push32((uint32_t)(EAX));
  /* 11d174df call 0x11d1575a */
  push32(0x11d174e4u); f_11d1575a();
  /* 11d174e4 pop ecx */
  ECX = (pop32());
  /* 11d174e5 ret  */
  ESPCHK(0x11d174d2u, _esp0);
  ESP += 4; return;
L_11d174e6:;
  /* 11d174e6 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d174ea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d174ed push eax */
  push32((uint32_t)(EAX));
  /* 11d174ee call dword ptr [0x11d1c058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c058))), 0x11d174f4u);
  /* 11d174f4 ret  */
  ESPCHK(0x11d174d2u, _esp0);
  ESP += 4; return;
}

/* FUN_100075e5 @ 0x11d175e5 (429 bytes, 143 insns) */
void f_11d175e5(void) {
  FTRACE(0x11d175e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d175e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11d175e6 mov ebp, esp */
  EBP = (ESP);
  /* 11d175e8 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d175eb push ebx */
  push32((uint32_t)(EBX));
  /* 11d175ec push esi */
  push32((uint32_t)(ESI));
  /* 11d175ed push edi */
  push32((uint32_t)(EDI));
  /* 11d175ee push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d175f0 call 0x11d156f9 */
  push32(0x11d175f5u); f_11d156f9();
  /* 11d175f5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d175f8 call 0x11d17792 */
  push32(0x11d175fdu); f_11d17792();
  /* 11d175fd mov ebx, eax */
  EBX = (EAX);
  /* 11d175ff pop ecx */
  ECX = (pop32());
  /* 11d17600 cmp ebx, dword ptr [0x11d375b4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11d375b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17606 pop ecx */
  ECX = (pop32());
  /* 11d17607 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11d1760a jne 0x11d17613 */
  if (!C.zf) goto L_11d17613;
L_11d1760c:;
  /* 11d1760c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d1760e jmp 0x11d17783 */
  goto L_11d17783;
L_11d17613:;
  /* 11d17613 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d17615 je 0x11d17771 */
  if (C.zf) goto L_11d17771;
  /* 11d1761b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d1761d mov eax, 0x11d20b68 */
  EAX = (0x11d20b68u);
L_11d17622:;
  /* 11d17622 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17624 je 0x11d1769a */
  if (C.zf) goto L_11d1769a;
  /* 11d17626 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17629 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d1762a cmp eax, 0x11d20c58 */
  { uint32_t _a=(EAX),_b=(0x11d20c58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1762f jl 0x11d17622 */
  if ((C.sf!=C.of)) goto L_11d17622;
  /* 11d17631 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11d17634 push eax */
  push32((uint32_t)(EAX));
  /* 11d17635 push ebx */
  push32((uint32_t)(EBX));
  /* 11d17636 call dword ptr [0x11d1c048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c048))), 0x11d1763cu);
  /* 11d1763c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1763e pop esi */
  ESI = (pop32());
  /* 11d1763f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17641 jne 0x11d17768 */
  if (!C.zf) goto L_11d17768;
  /* 11d17647 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d17649 and dword ptr [0x11d377e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11d377e4)))&(0x0u); w32((uint32_t)(0x11d377e4), (_r)); fl_logic(_r,32); }
  /* 11d17650 pop ecx */
  ECX = (pop32());
  /* 11d17651 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17653 mov edi, 0x11d376e0 */
  EDI = (0x11d376e0u);
  /* 11d17658 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1765b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d1765d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11d1765e mov dword ptr [0x11d375b4], ebx */
  w32((uint32_t)(0x11d375b4), (EBX));
  /* 11d17664 jbe 0x11d17755 */
  if ((C.cf||C.zf)) goto L_11d17755;
  /* 11d1766a cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1766e je 0x11d17730 */
  if (C.zf) goto L_11d17730;
  /* 11d17674 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11d17677:;
  /* 11d17677 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d17679 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d1767b je 0x11d17730 */
  if (C.zf) goto L_11d17730;
  /* 11d17681 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11d17685 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11d17688:;
  /* 11d17688 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1768a ja 0x11d17724 */
  if ((!C.cf&&!C.zf)) goto L_11d17724;
  /* 11d17690 or byte ptr [eax + 0x11d376e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11d376e1)))|(0x4u); w8((uint32_t)(EAX + 0x11d376e1), (_r)); fl_logic(_r,8); }
  /* 11d17697 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d17698 jmp 0x11d17688 */
  goto L_11d17688;
L_11d1769a:;
  /* 11d1769a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1769e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d176a0 pop ecx */
  ECX = (pop32());
  /* 11d176a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d176a3 mov edi, 0x11d376e0 */
  EDI = (0x11d376e0u);
  /* 11d176a8 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11d176ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d176ad shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11d176b0 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11d176b1 lea ebx, [esi + 0x11d20b78] */
  EBX = ((uint32_t)(ESI + 0x11d20b78));
L_11d176b7:;
  /* 11d176b7 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d176ba mov ecx, ebx */
  ECX = (EBX);
  /* 11d176bc je 0x11d176ea */
  if (C.zf) goto L_11d176ea;
L_11d176be:;
  /* 11d176be mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11d176c1 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d176c3 je 0x11d176ea */
  if (C.zf) goto L_11d176ea;
  /* 11d176c5 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11d176c8 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11d176cb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d176cd ja 0x11d176e3 */
  if ((!C.cf&&!C.zf)) goto L_11d176e3;
  /* 11d176cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d176d2 mov dl, byte ptr [edx + 0x11d20b60] */
  DL = (r8((uint32_t)(EDX + 0x11d20b60)));
L_11d176d8:;
  /* 11d176d8 or byte ptr [eax + 0x11d376e1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11d376e1)))|(DL); w8((uint32_t)(EAX + 0x11d376e1), (_r)); fl_logic(_r,8); }
  /* 11d176de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d176df cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d176e1 jbe 0x11d176d8 */
  if ((C.cf||C.zf)) goto L_11d176d8;
L_11d176e3:;
  /* 11d176e3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d176e4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d176e5 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d176e8 jne 0x11d176be */
  if (!C.zf) goto L_11d176be;
L_11d176ea:;
  /* 11d176ea inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d176ed add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d176f0 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d176f4 jb 0x11d176b7 */
  if (C.cf) goto L_11d176b7;
  /* 11d176f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d176f9 mov dword ptr [0x11d375cc], 1 */
  w32((uint32_t)(0x11d375cc), (0x1u));
  /* 11d17703 push eax */
  push32((uint32_t)(EAX));
  /* 11d17704 mov dword ptr [0x11d375b4], eax */
  w32((uint32_t)(0x11d375b4), (EAX));
  /* 11d17709 call 0x11d177dc */
  push32(0x11d1770eu); f_11d177dc();
  /* 11d1770e lea esi, [esi + 0x11d20b6c] */
  ESI = ((uint32_t)(ESI + 0x11d20b6c));
  /* 11d17714 mov edi, 0x11d375c0 */
  EDI = (0x11d375c0u);
  /* 11d17719 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d1771a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d1771b pop ecx */
  ECX = (pop32());
  /* 11d1771c mov dword ptr [0x11d377e4], eax */
  w32((uint32_t)(0x11d377e4), (EAX));
  /* 11d17721 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d17722 jmp 0x11d17776 */
  goto L_11d17776;
L_11d17724:;
  /* 11d17724 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d17725 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d17726 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1772a jne 0x11d17677 */
  if (!C.zf) goto L_11d17677;
L_11d17730:;
  /* 11d17730 mov eax, esi */
  EAX = (ESI);
L_11d17732:;
  /* 11d17732 or byte ptr [eax + 0x11d376e1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11d376e1)))|(0x8u); w8((uint32_t)(EAX + 0x11d376e1), (_r)); fl_logic(_r,8); }
  /* 11d17739 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1773a cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1773f jb 0x11d17732 */
  if (C.cf) goto L_11d17732;
  /* 11d17741 push ebx */
  push32((uint32_t)(EBX));
  /* 11d17742 call 0x11d177dc */
  push32(0x11d17747u); f_11d177dc();
  /* 11d17747 pop ecx */
  ECX = (pop32());
  /* 11d17748 mov dword ptr [0x11d377e4], eax */
  w32((uint32_t)(0x11d377e4), (EAX));
  /* 11d1774d mov dword ptr [0x11d375cc], esi */
  w32((uint32_t)(0x11d375cc), (ESI));
  /* 11d17753 jmp 0x11d1775c */
  goto L_11d1775c;
L_11d17755:;
  /* 11d17755 and dword ptr [0x11d375cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11d375cc)))&(0x0u); w32((uint32_t)(0x11d375cc), (_r)); fl_logic(_r,32); }
L_11d1775c:;
  /* 11d1775c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1775e mov edi, 0x11d375c0 */
  EDI = (0x11d375c0u);
  /* 11d17763 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11d17764 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11d17765 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11d17766 jmp 0x11d17776 */
  goto L_11d17776;
L_11d17768:;
  /* 11d17768 cmp dword ptr [0x11d373d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d373d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1776f je 0x11d17780 */
  if (C.zf) goto L_11d17780;
L_11d17771:;
  /* 11d17771 call 0x11d1780f */
  push32(0x11d17776u); f_11d1780f();
L_11d17776:;
  /* 11d17776 call 0x11d17838 */
  push32(0x11d1777bu); f_11d17838();
  /* 11d1777b jmp 0x11d1760c */
  goto L_11d1760c;
L_11d17780:;
  /* 11d17780 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11d17783:;
  /* 11d17783 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11d17785 call 0x11d1575a */
  push32(0x11d1778au); f_11d1575a();
  /* 11d1778a pop ecx */
  ECX = (pop32());
  /* 11d1778b mov eax, esi */
  EAX = (ESI);
  /* 11d1778d pop edi */
  EDI = (pop32());
  /* 11d1778e pop esi */
  ESI = (pop32());
  /* 11d1778f pop ebx */
  EBX = (pop32());
  /* 11d17790 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d17791 ret  */
  ESPCHK(0x11d175e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10007792 @ 0x11d17792 (74 bytes, 15 insns) */
void f_11d17792(void) {
  FTRACE(0x11d17792u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17792 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d17796 and dword ptr [0x11d373d0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11d373d0)))&(0x0u); w32((uint32_t)(0x11d373d0), (_r)); fl_logic(_r,32); }
  /* 11d1779d cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d177a0 jne 0x11d177b2 */
  if (!C.zf) goto L_11d177b2;
  /* 11d177a2 mov dword ptr [0x11d373d0], 1 */
  w32((uint32_t)(0x11d373d0), (0x1u));
  /* 11d177ac jmp dword ptr [0x11d1c038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11d1c038)))); return;
L_11d177b2:;
  /* 11d177b2 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d177b5 jne 0x11d177c7 */
  if (!C.zf) goto L_11d177c7;
  /* 11d177b7 mov dword ptr [0x11d373d0], 1 */
  w32((uint32_t)(0x11d373d0), (0x1u));
  /* 11d177c1 jmp dword ptr [0x11d1c03c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11d1c03c)))); return;
L_11d177c7:;
  /* 11d177c7 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d177ca jne 0x11d177db */
  if (!C.zf) goto L_11d177db;
  /* 11d177cc mov eax, dword ptr [0x11d3741c] */
  EAX = (r32((uint32_t)(0x11d3741c)));
  /* 11d177d1 mov dword ptr [0x11d373d0], 1 */
  w32((uint32_t)(0x11d373d0), (0x1u));
L_11d177db:;
  /* 11d177db ret  */
  ESPCHK(0x11d17792u, _esp0);
  ESP += 4; return;
}

/* FUN_100077dc @ 0x11d177dc (51 bytes, 19 insns) */
void f_11d177dc(void) {
  FTRACE(0x11d177dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d177dc mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d177e0 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d177e5 je 0x11d17809 */
  if (C.zf) goto L_11d17809;
  /* 11d177e7 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d177ea je 0x11d17803 */
  if (C.zf) goto L_11d17803;
  /* 11d177ec sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d177ef je 0x11d177fd */
  if (C.zf) goto L_11d177fd;
  /* 11d177f1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d177f2 je 0x11d177f7 */
  if (C.zf) goto L_11d177f7;
  /* 11d177f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d177f6 ret  */
  ESPCHK(0x11d177dcu, _esp0);
  ESP += 4; return;
L_11d177f7:;
  /* 11d177f7 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11d177fc ret  */
  ESPCHK(0x11d177dcu, _esp0);
  ESP += 4; return;
L_11d177fd:;
  /* 11d177fd mov eax, 0x412 */
  EAX = (0x412u);
  /* 11d17802 ret  */
  ESPCHK(0x11d177dcu, _esp0);
  ESP += 4; return;
L_11d17803:;
  /* 11d17803 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11d17808 ret  */
  ESPCHK(0x11d177dcu, _esp0);
  ESP += 4; return;
L_11d17809:;
  /* 11d17809 mov eax, 0x411 */
  EAX = (0x411u);
  /* 11d1780e ret  */
  ESPCHK(0x11d177dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000780f @ 0x11d1780f (41 bytes, 17 insns) */
void f_11d1780f(void) {
  FTRACE(0x11d1780fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1780f push edi */
  push32((uint32_t)(EDI));
  /* 11d17810 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11d17812 pop ecx */
  ECX = (pop32());
  /* 11d17813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17815 mov edi, 0x11d376e0 */
  EDI = (0x11d376e0u);
  /* 11d1781a rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d1781c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11d1781d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1781f mov edi, 0x11d375c0 */
  EDI = (0x11d375c0u);
  /* 11d17824 mov dword ptr [0x11d375b4], eax */
  w32((uint32_t)(0x11d375b4), (EAX));
  /* 11d17829 mov dword ptr [0x11d375cc], eax */
  w32((uint32_t)(0x11d375cc), (EAX));
  /* 11d1782e mov dword ptr [0x11d377e4], eax */
  w32((uint32_t)(0x11d377e4), (EAX));
  /* 11d17833 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11d17834 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11d17835 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11d17836 pop edi */
  EDI = (pop32());
  /* 11d17837 ret  */
  ESPCHK(0x11d1780fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007838 @ 0x11d17838 (389 bytes, 124 insns) */
void f_11d17838(void) {
  FTRACE(0x11d17838u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17838 push ebp */
  push32((uint32_t)(EBP));
  /* 11d17839 mov ebp, esp */
  EBP = (ESP);
  /* 11d1783b sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17841 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11d17844 push esi */
  push32((uint32_t)(ESI));
  /* 11d17845 push eax */
  push32((uint32_t)(EAX));
  /* 11d17846 push dword ptr [0x11d375b4] */
  push32((uint32_t)(r32((uint32_t)(0x11d375b4))));
  /* 11d1784c call dword ptr [0x11d1c048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c048))), 0x11d17852u);
  /* 11d17852 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17855 jne 0x11d17971 */
  if (!C.zf) goto L_11d17971;
  /* 11d1785b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1785d mov esi, 0x100 */
  ESI = (0x100u);
L_11d17862:;
  /* 11d17862 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11d17869 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1786a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1786c jb 0x11d17862 */
  if (C.cf) goto L_11d17862;
  /* 11d1786e mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11d17871 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11d17878 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d1787a je 0x11d178b3 */
  if (C.zf) goto L_11d178b3;
  /* 11d1787c push ebx */
  push32((uint32_t)(EBX));
  /* 11d1787d push edi */
  push32((uint32_t)(EDI));
  /* 11d1787e lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11d17881:;
  /* 11d17881 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11d17884 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11d17887 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17889 ja 0x11d178a8 */
  if ((!C.cf&&!C.zf)) goto L_11d178a8;
  /* 11d1788b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1788d lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11d17894 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d17895 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11d1789a mov ebx, ecx */
  EBX = (ECX);
  /* 11d1789c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d1789f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d178a1 mov ecx, ebx */
  ECX = (EBX);
  /* 11d178a3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11d178a6 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11d178a8:;
  /* 11d178a8 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d178a9 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d178aa mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11d178ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d178af jne 0x11d17881 */
  if (!C.zf) goto L_11d17881;
  /* 11d178b1 pop edi */
  EDI = (pop32());
  /* 11d178b2 pop ebx */
  EBX = (pop32());
L_11d178b3:;
  /* 11d178b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d178b5 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11d178bb push dword ptr [0x11d377e4] */
  push32((uint32_t)(r32((uint32_t)(0x11d377e4))));
  /* 11d178c1 push dword ptr [0x11d375b4] */
  push32((uint32_t)(r32((uint32_t)(0x11d375b4))));
  /* 11d178c7 push eax */
  push32((uint32_t)(EAX));
  /* 11d178c8 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11d178ce push esi */
  push32((uint32_t)(ESI));
  /* 11d178cf push eax */
  push32((uint32_t)(EAX));
  /* 11d178d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d178d2 call 0x11d1810d */
  push32(0x11d178d7u); f_11d1810d();
  /* 11d178d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d178d9 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11d178df push dword ptr [0x11d375b4] */
  push32((uint32_t)(r32((uint32_t)(0x11d375b4))));
  /* 11d178e5 push esi */
  push32((uint32_t)(ESI));
  /* 11d178e6 push eax */
  push32((uint32_t)(EAX));
  /* 11d178e7 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11d178ed push esi */
  push32((uint32_t)(ESI));
  /* 11d178ee push eax */
  push32((uint32_t)(EAX));
  /* 11d178ef push esi */
  push32((uint32_t)(ESI));
  /* 11d178f0 push dword ptr [0x11d377e4] */
  push32((uint32_t)(r32((uint32_t)(0x11d377e4))));
  /* 11d178f6 call 0x11d18256 */
  push32(0x11d178fbu); f_11d18256();
  /* 11d178fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d178fd lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11d17903 push dword ptr [0x11d375b4] */
  push32((uint32_t)(r32((uint32_t)(0x11d375b4))));
  /* 11d17909 push esi */
  push32((uint32_t)(ESI));
  /* 11d1790a push eax */
  push32((uint32_t)(EAX));
  /* 11d1790b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11d17911 push esi */
  push32((uint32_t)(ESI));
  /* 11d17912 push eax */
  push32((uint32_t)(EAX));
  /* 11d17913 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11d17918 push dword ptr [0x11d377e4] */
  push32((uint32_t)(r32((uint32_t)(0x11d377e4))));
  /* 11d1791e call 0x11d18256 */
  push32(0x11d17923u); f_11d18256();
  /* 11d17923 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17928 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11d1792e:;
  /* 11d1792e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11d17931 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11d17934 je 0x11d1794c */
  if (C.zf) goto L_11d1794c;
  /* 11d17936 or byte ptr [eax + 0x11d376e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11d376e1)))|(0x10u); w8((uint32_t)(EAX + 0x11d376e1), (_r)); fl_logic(_r,8); }
  /* 11d1793d mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11d17944:;
  /* 11d17944 mov byte ptr [eax + 0x11d375e0], dl */
  w8((uint32_t)(EAX + 0x11d375e0), (DL));
  /* 11d1794a jmp 0x11d17968 */
  goto L_11d17968;
L_11d1794c:;
  /* 11d1794c test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11d1794f je 0x11d17961 */
  if (C.zf) goto L_11d17961;
  /* 11d17951 or byte ptr [eax + 0x11d376e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11d376e1)))|(0x20u); w8((uint32_t)(EAX + 0x11d376e1), (_r)); fl_logic(_r,8); }
  /* 11d17958 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11d1795f jmp 0x11d17944 */
  goto L_11d17944;
L_11d17961:;
  /* 11d17961 and byte ptr [eax + 0x11d375e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11d375e0)))&(0x0u); w8((uint32_t)(EAX + 0x11d375e0), (_r)); fl_logic(_r,8); }
L_11d17968:;
  /* 11d17968 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d17969 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d1796a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d1796b cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1796d jb 0x11d1792e */
  if (C.cf) goto L_11d1792e;
  /* 11d1796f jmp 0x11d179ba */
  goto L_11d179ba;
L_11d17971:;
  /* 11d17971 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17973 mov esi, 0x100 */
  ESI = (0x100u);
L_11d17978:;
  /* 11d17978 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1797b jb 0x11d17996 */
  if (C.cf) goto L_11d17996;
  /* 11d1797d cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17980 ja 0x11d17996 */
  if ((!C.cf&&!C.zf)) goto L_11d17996;
  /* 11d17982 or byte ptr [eax + 0x11d376e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11d376e1)))|(0x10u); w8((uint32_t)(EAX + 0x11d376e1), (_r)); fl_logic(_r,8); }
  /* 11d17989 mov cl, al */
  CL = (AL);
  /* 11d1798b add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11d1798e:;
  /* 11d1798e mov byte ptr [eax + 0x11d375e0], cl */
  w8((uint32_t)(EAX + 0x11d375e0), (CL));
  /* 11d17994 jmp 0x11d179b5 */
  goto L_11d179b5;
L_11d17996:;
  /* 11d17996 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17999 jb 0x11d179ae */
  if (C.cf) goto L_11d179ae;
  /* 11d1799b cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1799e ja 0x11d179ae */
  if ((!C.cf&&!C.zf)) goto L_11d179ae;
  /* 11d179a0 or byte ptr [eax + 0x11d376e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11d376e1)))|(0x20u); w8((uint32_t)(EAX + 0x11d376e1), (_r)); fl_logic(_r,8); }
  /* 11d179a7 mov cl, al */
  CL = (AL);
  /* 11d179a9 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d179ac jmp 0x11d1798e */
  goto L_11d1798e;
L_11d179ae:;
  /* 11d179ae and byte ptr [eax + 0x11d375e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11d375e0)))&(0x0u); w8((uint32_t)(EAX + 0x11d375e0), (_r)); fl_logic(_r,8); }
L_11d179b5:;
  /* 11d179b5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d179b6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d179b8 jb 0x11d17978 */
  if (C.cf) goto L_11d17978;
L_11d179ba:;
  /* 11d179ba pop esi */
  ESI = (pop32());
  /* 11d179bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d179bc ret  */
  ESPCHK(0x11d17838u, _esp0);
  ESP += 4; return;
}

/* FUN_100079bd @ 0x11d179bd (28 bytes, 7 insns) */
void f_11d179bd(void) {
  FTRACE(0x11d179bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d179bd cmp dword ptr [0x11d38948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d38948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d179c4 jne 0x11d179d8 */
  if (!C.zf) goto L_11d179d8;
  /* 11d179c6 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11d179c8 call 0x11d175e5 */
  push32(0x11d179cdu); f_11d175e5();
  /* 11d179cd pop ecx */
  ECX = (pop32());
  /* 11d179ce mov dword ptr [0x11d38948], 1 */
  w32((uint32_t)(0x11d38948), (0x1u));
L_11d179d8:;
  /* 11d179d8 ret  */
  ESPCHK(0x11d179bdu, _esp0);
  ESP += 4; return;
}

/* FUN_100079d9 @ 0x11d179d9 (23 bytes, 7 insns) */
void f_11d179d9(void) {
  FTRACE(0x11d179d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d179d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d179db push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11d179df push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11d179e3 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11d179e7 call 0x11d179f0 */
  push32(0x11d179ecu); f_11d179f0();
  /* 11d179ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d179ef ret  */
  ESPCHK(0x11d179d9u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f0 @ 0x11d179f0 (517 bytes, 195 insns) */
void f_11d179f0(void) {
  FTRACE(0x11d179f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d179f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d179f1 mov ebp, esp */
  EBP = (ESP);
  /* 11d179f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d179f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d179f7 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11d179fb push esi */
  push32((uint32_t)(ESI));
  /* 11d179fc push edi */
  push32((uint32_t)(EDI));
  /* 11d179fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d17a00 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d17a02 lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11d17a05 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11d17a08:;
  /* 11d17a08 cmp dword ptr [0x11d1e500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17a0f jle 0x11d17a20 */
  if ((C.zf||C.sf!=C.of)) goto L_11d17a20;
  /* 11d17a11 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d17a14 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d17a16 push eax */
  push32((uint32_t)(EAX));
  /* 11d17a17 call 0x11d14a2a */
  push32(0x11d17a1cu); f_11d14a2a();
  /* 11d17a1c pop ecx */
  ECX = (pop32());
  /* 11d17a1d pop ecx */
  ECX = (pop32());
  /* 11d17a1e jmp 0x11d17a2f */
  goto L_11d17a2f;
L_11d17a20:;
  /* 11d17a20 mov ecx, dword ptr [0x11d1e50c] */
  ECX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d17a26 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d17a29 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11d17a2c and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11d17a2f:;
  /* 11d17a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17a31 je 0x11d17a38 */
  if (C.zf) goto L_11d17a38;
  /* 11d17a33 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11d17a35 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d17a36 jmp 0x11d17a08 */
  goto L_11d17a08;
L_11d17a38:;
  /* 11d17a38 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17a3b mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11d17a3e jne 0x11d17a46 */
  if (!C.zf) goto L_11d17a46;
  /* 11d17a40 or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11d17a44 jmp 0x11d17a4b */
  goto L_11d17a4b;
L_11d17a46:;
  /* 11d17a46 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17a49 jne 0x11d17a51 */
  if (!C.zf) goto L_11d17a51;
L_11d17a4b:;
  /* 11d17a4b mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11d17a4d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d17a4e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11d17a51:;
  /* 11d17a51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d17a54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17a56 jl 0x11d17be5 */
  if ((C.sf!=C.of)) goto L_11d17be5;
  /* 11d17a5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17a5f je 0x11d17be5 */
  if (C.zf) goto L_11d17be5;
  /* 11d17a65 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17a68 jg 0x11d17be5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d17be5;
  /* 11d17a6e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d17a70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17a72 pop ecx */
  ECX = (pop32());
  /* 11d17a73 jne 0x11d17a99 */
  if (!C.zf) goto L_11d17a99;
  /* 11d17a75 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17a78 je 0x11d17a83 */
  if (C.zf) goto L_11d17a83;
  /* 11d17a7a mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11d17a81 jmp 0x11d17ab5 */
  goto L_11d17ab5;
L_11d17a83:;
  /* 11d17a83 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d17a85 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17a87 je 0x11d17a96 */
  if (C.zf) goto L_11d17a96;
  /* 11d17a89 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17a8b je 0x11d17a96 */
  if (C.zf) goto L_11d17a96;
  /* 11d17a8d mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11d17a94 jmp 0x11d17ab5 */
  goto L_11d17ab5;
L_11d17a96:;
  /* 11d17a96 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11d17a99:;
  /* 11d17a99 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17a9c jne 0x11d17ab5 */
  if (!C.zf) goto L_11d17ab5;
  /* 11d17a9e cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17aa1 jne 0x11d17ab5 */
  if (!C.zf) goto L_11d17ab5;
  /* 11d17aa3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d17aa5 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17aa7 je 0x11d17aad */
  if (C.zf) goto L_11d17aad;
  /* 11d17aa9 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17aab jne 0x11d17ab5 */
  if (!C.zf) goto L_11d17ab5;
L_11d17aad:;
  /* 11d17aad mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11d17ab0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d17ab1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d17ab2 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11d17ab5:;
  /* 11d17ab5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d17ab8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d17aba div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d17abd mov edi, 0x103 */
  EDI = (0x103u);
  /* 11d17ac2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11d17ac5:;
  /* 11d17ac5 cmp dword ptr [0x11d1e500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17acc movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11d17acf jle 0x11d17add */
  if ((C.zf||C.sf!=C.of)) goto L_11d17add;
  /* 11d17ad1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d17ad3 push esi */
  push32((uint32_t)(ESI));
  /* 11d17ad4 call 0x11d14a2a */
  push32(0x11d17ad9u); f_11d14a2a();
  /* 11d17ad9 pop ecx */
  ECX = (pop32());
  /* 11d17ada pop ecx */
  ECX = (pop32());
  /* 11d17adb jmp 0x11d17ae8 */
  goto L_11d17ae8;
L_11d17add:;
  /* 11d17add mov eax, dword ptr [0x11d1e50c] */
  EAX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d17ae2 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11d17ae5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11d17ae8:;
  /* 11d17ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17aea je 0x11d17af4 */
  if (C.zf) goto L_11d17af4;
  /* 11d17aec movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11d17aef sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17af2 jmp 0x11d17b26 */
  goto L_11d17b26;
L_11d17af4:;
  /* 11d17af4 cmp dword ptr [0x11d1e500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17afb jle 0x11d17b08 */
  if ((C.zf||C.sf!=C.of)) goto L_11d17b08;
  /* 11d17afd push edi */
  push32((uint32_t)(EDI));
  /* 11d17afe push esi */
  push32((uint32_t)(ESI));
  /* 11d17aff call 0x11d14a2a */
  push32(0x11d17b04u); f_11d14a2a();
  /* 11d17b04 pop ecx */
  ECX = (pop32());
  /* 11d17b05 pop ecx */
  ECX = (pop32());
  /* 11d17b06 jmp 0x11d17b13 */
  goto L_11d17b13;
L_11d17b08:;
  /* 11d17b08 mov eax, dword ptr [0x11d1e50c] */
  EAX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d17b0d mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11d17b11 and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11d17b13:;
  /* 11d17b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17b15 je 0x11d17b61 */
  if (C.zf) goto L_11d17b61;
  /* 11d17b17 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11d17b1a push eax */
  push32((uint32_t)(EAX));
  /* 11d17b1b call 0x11d19129 */
  push32(0x11d17b20u); f_11d19129();
  /* 11d17b20 pop ecx */
  ECX = (pop32());
  /* 11d17b21 mov ecx, eax */
  ECX = (EAX);
  /* 11d17b23 sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11d17b26:;
  /* 11d17b26 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17b29 jae 0x11d17b61 */
  if (!C.cf) goto L_11d17b61;
  /* 11d17b2b mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11d17b2e or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11d17b32 cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17b35 jb 0x11d17b4b */
  if (C.cf) goto L_11d17b4b;
  /* 11d17b37 jne 0x11d17b45 */
  if (!C.zf) goto L_11d17b45;
  /* 11d17b39 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d17b3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d17b3e div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d17b41 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17b43 jbe 0x11d17b4b */
  if ((C.cf||C.zf)) goto L_11d17b4b;
L_11d17b45:;
  /* 11d17b45 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11d17b49 jmp 0x11d17b54 */
  goto L_11d17b54;
L_11d17b4b:;
  /* 11d17b4b imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d17b4f add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17b51 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11d17b54:;
  /* 11d17b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d17b57 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d17b5a mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11d17b5c jmp 0x11d17ac5 */
  goto L_11d17ac5;
L_11d17b61:;
  /* 11d17b61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d17b64 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11d17b67 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d17b6a test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11d17b6c jne 0x11d17b7e */
  if (!C.zf) goto L_11d17b7e;
  /* 11d17b6e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d17b70 je 0x11d17b78 */
  if (C.zf) goto L_11d17b78;
  /* 11d17b72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d17b75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11d17b78:;
  /* 11d17b78 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11d17b7c jmp 0x11d17bc9 */
  goto L_11d17bc9;
L_11d17b7e:;
  /* 11d17b7e test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11d17b80 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11d17b85 jne 0x11d17ba2 */
  if (!C.zf) goto L_11d17ba2;
  /* 11d17b87 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11d17b89 jne 0x11d17bc9 */
  if (!C.zf) goto L_11d17bc9;
  /* 11d17b8b and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11d17b8e je 0x11d17b99 */
  if (C.zf) goto L_11d17b99;
  /* 11d17b90 cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17b97 ja 0x11d17ba2 */
  if ((!C.cf&&!C.zf)) goto L_11d17ba2;
L_11d17b99:;
  /* 11d17b99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17b9b jne 0x11d17bc9 */
  if (!C.zf) goto L_11d17bc9;
  /* 11d17b9d cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17ba0 jbe 0x11d17bc9 */
  if ((C.cf||C.zf)) goto L_11d17bc9;
L_11d17ba2:;
  /* 11d17ba2 call 0x11d18e1d */
  push32(0x11d17ba7u); f_11d18e1d();
  /* 11d17ba7 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11d17bab mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11d17bb1 je 0x11d17bb9 */
  if (C.zf) goto L_11d17bb9;
  /* 11d17bb3 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11d17bb7 jmp 0x11d17bc9 */
  goto L_11d17bc9;
L_11d17bb9:;
  /* 11d17bb9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d17bbc and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11d17bbe neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11d17bc0 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17bc2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d17bc4 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17bc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d17bc9:;
  /* 11d17bc9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d17bcb je 0x11d17bd2 */
  if (C.zf) goto L_11d17bd2;
  /* 11d17bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d17bd0 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11d17bd2:;
  /* 11d17bd2 test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11d17bd6 je 0x11d17be0 */
  if (C.zf) goto L_11d17be0;
  /* 11d17bd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d17bdb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d17bdd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11d17be0:;
  /* 11d17be0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d17be3 jmp 0x11d17bf0 */
  goto L_11d17bf0;
L_11d17be5:;
  /* 11d17be5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d17be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17bea je 0x11d17bee */
  if (C.zf) goto L_11d17bee;
  /* 11d17bec mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11d17bee:;
  /* 11d17bee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d17bf0:;
  /* 11d17bf0 pop edi */
  EDI = (pop32());
  /* 11d17bf1 pop esi */
  ESI = (pop32());
  /* 11d17bf2 pop ebx */
  EBX = (pop32());
  /* 11d17bf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d17bf4 ret  */
  ESPCHK(0x11d179f0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11d17c10 (193 bytes, 90 insns) */
void f_11d17c10(void) {
  FTRACE(0x11d17c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17c12 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11d17c16 push ebx */
  push32((uint32_t)(EBX));
  /* 11d17c17 mov ebx, eax */
  EBX = (EAX);
  /* 11d17c19 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d17c1c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d17c20 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11d17c26 je 0x11d17c3b */
  if (C.zf) goto L_11d17c3b;
L_11d17c28:;
  /* 11d17c28 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11d17c2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d17c2b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17c2d je 0x11d17c00 */
  if (C.zf) { jmp_ind(0x11d17c00u); return; }
  /* 11d17c2f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11d17c31 je 0x11d17c84 */
  if (C.zf) goto L_11d17c84;
  /* 11d17c33 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11d17c39 jne 0x11d17c28 */
  if (!C.zf) goto L_11d17c28;
L_11d17c3b:;
  /* 11d17c3b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11d17c3d push edi */
  push32((uint32_t)(EDI));
  /* 11d17c3e mov eax, ebx */
  EAX = (EBX);
  /* 11d17c40 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11d17c43 push esi */
  push32((uint32_t)(ESI));
  /* 11d17c44 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11d17c46:;
  /* 11d17c46 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11d17c48 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11d17c4d mov eax, ecx */
  EAX = (ECX);
  /* 11d17c4f mov esi, edi */
  ESI = (EDI);
  /* 11d17c51 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11d17c53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17c55 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17c57 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d17c5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d17c5d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d17c5f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11d17c61 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17c64 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11d17c6a jne 0x11d17c88 */
  if (!C.zf) goto L_11d17c88;
  /* 11d17c6c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11d17c71 je 0x11d17c46 */
  if (C.zf) goto L_11d17c46;
  /* 11d17c73 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11d17c78 jne 0x11d17c82 */
  if (!C.zf) goto L_11d17c82;
  /* 11d17c7a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11d17c80 jne 0x11d17c46 */
  if (!C.zf) goto L_11d17c46;
L_11d17c82:;
  /* 11d17c82 pop esi */
  ESI = (pop32());
  /* 11d17c83 pop edi */
  EDI = (pop32());
L_11d17c84:;
  /* 11d17c84 pop ebx */
  EBX = (pop32());
  /* 11d17c85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17c87 ret  */
  ESPCHK(0x11d17c10u, _esp0);
  ESP += 4; return;
L_11d17c88:;
  /* 11d17c88 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11d17c8b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17c8d je 0x11d17cc5 */
  if (C.zf) goto L_11d17cc5;
  /* 11d17c8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d17c91 je 0x11d17c82 */
  if (C.zf) goto L_11d17c82;
  /* 11d17c93 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17c95 je 0x11d17cbe */
  if (C.zf) goto L_11d17cbe;
  /* 11d17c97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d17c99 je 0x11d17c82 */
  if (C.zf) goto L_11d17c82;
  /* 11d17c9b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d17c9e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17ca0 je 0x11d17cb7 */
  if (C.zf) goto L_11d17cb7;
  /* 11d17ca2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d17ca4 je 0x11d17c82 */
  if (C.zf) goto L_11d17c82;
  /* 11d17ca6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17ca8 je 0x11d17cb0 */
  if (C.zf) goto L_11d17cb0;
  /* 11d17caa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d17cac je 0x11d17c82 */
  if (C.zf) goto L_11d17c82;
  /* 11d17cae jmp 0x11d17c46 */
  goto L_11d17c46;
L_11d17cb0:;
  /* 11d17cb0 pop esi */
  ESI = (pop32());
  /* 11d17cb1 pop edi */
  EDI = (pop32());
  /* 11d17cb2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11d17cb5 pop ebx */
  EBX = (pop32());
  /* 11d17cb6 ret  */
  ESPCHK(0x11d17c10u, _esp0);
  ESP += 4; return;
L_11d17cb7:;
  /* 11d17cb7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11d17cba pop esi */
  ESI = (pop32());
  /* 11d17cbb pop edi */
  EDI = (pop32());
  /* 11d17cbc pop ebx */
  EBX = (pop32());
  /* 11d17cbd ret  */
  ESPCHK(0x11d17c10u, _esp0);
  ESP += 4; return;
L_11d17cbe:;
  /* 11d17cbe lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11d17cc1 pop esi */
  ESI = (pop32());
  /* 11d17cc2 pop edi */
  EDI = (pop32());
  /* 11d17cc3 pop ebx */
  EBX = (pop32());
  /* 11d17cc4 ret  */
  ESPCHK(0x11d17c10u, _esp0);
  ESP += 4; return;
L_11d17cc5:;
  /* 11d17cc5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11d17cc8 pop esi */
  ESI = (pop32());
  /* 11d17cc9 pop edi */
  EDI = (pop32());
  /* 11d17cca pop ebx */
  EBX = (pop32());
  /* 11d17ccb ret  */
  ESPCHK(0x11d17c10u, _esp0);
  ESP += 4; return;
  /* 11d17ccc int3  */
  x86_unimpl("int3 @ 0x11d17ccc");
  /* 11d17ccd int3  */
  x86_unimpl("int3 @ 0x11d17ccd");
  /* 11d17cce int3  */
  x86_unimpl("int3 @ 0x11d17cce");
  /* 11d17ccf int3  */
  x86_unimpl("int3 @ 0x11d17ccf");
}

/* _strstr @ 0x11d17cd0 (128 bytes, 66 insns) */
void f_11d17cd0(void) {
  FTRACE(0x11d17cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17cd0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d17cd4 push edi */
  push32((uint32_t)(EDI));
  /* 11d17cd5 push ebx */
  push32((uint32_t)(EBX));
  /* 11d17cd6 push esi */
  push32((uint32_t)(ESI));
  /* 11d17cd7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11d17cd9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d17cdd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d17cdf je 0x11d17d4a */
  if (C.zf) goto L_11d17d4a;
  /* 11d17ce1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11d17ce4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11d17ce6 je 0x11d17d37 */
  if (C.zf) goto L_11d17d37;
L_11d17ce8:;
  /* 11d17ce8 mov esi, edi */
  ESI = (EDI);
  /* 11d17cea mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d17cee mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11d17cf0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d17cf1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17cf3 je 0x11d17d0a */
  if (C.zf) goto L_11d17d0a;
  /* 11d17cf5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d17cf7 je 0x11d17d04 */
  if (C.zf) goto L_11d17d04;
L_11d17cf9:;
  /* 11d17cf9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d17cfb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11d17cfc:;
  /* 11d17cfc cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17cfe je 0x11d17d0a */
  if (C.zf) goto L_11d17d0a;
  /* 11d17d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d17d02 jne 0x11d17cf9 */
  if (!C.zf) goto L_11d17cf9;
L_11d17d04:;
  /* 11d17d04 pop esi */
  ESI = (pop32());
  /* 11d17d05 pop ebx */
  EBX = (pop32());
  /* 11d17d06 pop edi */
  EDI = (pop32());
  /* 11d17d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17d09 ret  */
  ESPCHK(0x11d17cd0u, _esp0);
  ESP += 4; return;
L_11d17d0a:;
  /* 11d17d0a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d17d0c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d17d0d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17d0f jne 0x11d17cfc */
  if (!C.zf) goto L_11d17cfc;
  /* 11d17d11 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11d17d14:;
  /* 11d17d14 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11d17d17 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11d17d19 je 0x11d17d43 */
  if (C.zf) goto L_11d17d43;
  /* 11d17d1b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d17d1d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17d20 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17d22 jne 0x11d17ce8 */
  if (!C.zf) goto L_11d17ce8;
  /* 11d17d24 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11d17d27 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d17d29 je 0x11d17d43 */
  if (C.zf) goto L_11d17d43;
  /* 11d17d2b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11d17d2e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17d31 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17d33 je 0x11d17d14 */
  if (C.zf) goto L_11d17d14;
  /* 11d17d35 jmp 0x11d17ce8 */
  goto L_11d17ce8;
L_11d17d37:;
  /* 11d17d37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17d39 pop esi */
  ESI = (pop32());
  /* 11d17d3a pop ebx */
  EBX = (pop32());
  /* 11d17d3b pop edi */
  EDI = (pop32());
  /* 11d17d3c mov al, dl */
  AL = (DL);
  /* 11d17d3e jmp 0x11d17c16 */
  jmp_ind(0x11d17c16u); return;
L_11d17d43:;
  /* 11d17d43 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11d17d46 pop esi */
  ESI = (pop32());
  /* 11d17d47 pop ebx */
  EBX = (pop32());
  /* 11d17d48 pop edi */
  EDI = (pop32());
  /* 11d17d49 ret  */
  ESPCHK(0x11d17cd0u, _esp0);
  ESP += 4; return;
L_11d17d4a:;
  /* 11d17d4a mov eax, edi */
  EAX = (EDI);
  /* 11d17d4c pop esi */
  ESI = (pop32());
  /* 11d17d4d pop ebx */
  EBX = (pop32());
  /* 11d17d4e pop edi */
  EDI = (pop32());
  /* 11d17d4f ret  */
  ESPCHK(0x11d17cd0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11d17d50 (56 bytes, 31 insns) */
void f_11d17d50(void) {
  FTRACE(0x11d17d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11d17d51 mov ebp, esp */
  EBP = (ESP);
  /* 11d17d53 push edi */
  push32((uint32_t)(EDI));
  /* 11d17d54 push esi */
  push32((uint32_t)(ESI));
  /* 11d17d55 push ebx */
  push32((uint32_t)(EBX));
  /* 11d17d56 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d17d59 jecxz 0x11d17d81 */
  x86_unimpl("jecxz @ 0x11d17d59");
  /* 11d17d5b mov ebx, ecx */
  EBX = (ECX);
  /* 11d17d5d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d17d60 mov esi, edi */
  ESI = (EDI);
  /* 11d17d62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17d64 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11d17d66 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d17d68 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17d6a mov edi, esi */
  EDI = (ESI);
  /* 11d17d6c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d17d6f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11d17d71 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11d17d74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d17d76 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d17d79 ja 0x11d17d7f */
  if ((!C.cf&&!C.zf)) goto L_11d17d7f;
  /* 11d17d7b je 0x11d17d81 */
  if (C.zf) goto L_11d17d81;
  /* 11d17d7d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d17d7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11d17d7f:;
  /* 11d17d7f not ecx */
  ECX = (~(ECX));
L_11d17d81:;
  /* 11d17d81 mov eax, ecx */
  EAX = (ECX);
  /* 11d17d83 pop ebx */
  EBX = (pop32());
  /* 11d17d84 pop esi */
  ESI = (pop32());
  /* 11d17d85 pop edi */
  EDI = (pop32());
  /* 11d17d86 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d17d87 ret  */
  ESPCHK(0x11d17d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d90 @ 0x11d17d90 (47 bytes, 17 insns) */
void f_11d17d90(void) {
  FTRACE(0x11d17d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17d90 push ecx */
  push32((uint32_t)(ECX));
  /* 11d17d91 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17d96 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11d17d9a jb 0x11d17db0 */
  if (C.cf) goto L_11d17db0;
L_11d17d9c:;
  /* 11d17d9c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17da2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17da7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11d17da9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17dae jae 0x11d17d9c */
  if (!C.cf) goto L_11d17d9c;
L_11d17db0:;
  /* 11d17db0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17db2 mov eax, esp */
  EAX = (ESP);
  /* 11d17db4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11d17db6 mov esp, ecx */
  ESP = (ECX);
  /* 11d17db8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d17dba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d17dbd push eax */
  push32((uint32_t)(EAX));
  /* 11d17dbe ret  */
  ESPCHK(0x11d17d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dbf @ 0x11d17dbf (137 bytes, 50 insns) */
void f_11d17dbf(void) {
  FTRACE(0x11d17dbfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17dbf push ebx */
  push32((uint32_t)(EBX));
  /* 11d17dc0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d17dc2 cmp dword ptr [0x11d373d4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11d373d4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17dc8 push esi */
  push32((uint32_t)(ESI));
  /* 11d17dc9 push edi */
  push32((uint32_t)(EDI));
  /* 11d17dca jne 0x11d17e0e */
  if (!C.zf) goto L_11d17e0e;
  /* 11d17dcc push 0x11d1c660 */
  push32((uint32_t)(0x11d1c660u));
  /* 11d17dd1 call dword ptr [0x11d1c040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c040))), 0x11d17dd7u);
  /* 11d17dd7 mov edi, eax */
  EDI = (EAX);
  /* 11d17dd9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17ddb je 0x11d17e44 */
  if (C.zf) goto L_11d17e44;
  /* 11d17ddd mov esi, dword ptr [0x11d1c0c0] */
  ESI = (r32((uint32_t)(0x11d1c0c0)));
  /* 11d17de3 push 0x11d1c654 */
  push32((uint32_t)(0x11d1c654u));
  /* 11d17de8 push edi */
  push32((uint32_t)(EDI));
  /* 11d17de9 call esi */
  call_ind((uint32_t)(ESI), 0x11d17debu);
  /* 11d17deb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17ded mov dword ptr [0x11d373d4], eax */
  w32((uint32_t)(0x11d373d4), (EAX));
  /* 11d17df2 je 0x11d17e44 */
  if (C.zf) goto L_11d17e44;
  /* 11d17df4 push 0x11d1c644 */
  push32((uint32_t)(0x11d1c644u));
  /* 11d17df9 push edi */
  push32((uint32_t)(EDI));
  /* 11d17dfa call esi */
  call_ind((uint32_t)(ESI), 0x11d17dfcu);
  /* 11d17dfc push 0x11d1c630 */
  push32((uint32_t)(0x11d1c630u));
  /* 11d17e01 push edi */
  push32((uint32_t)(EDI));
  /* 11d17e02 mov dword ptr [0x11d373d8], eax */
  w32((uint32_t)(0x11d373d8), (EAX));
  /* 11d17e07 call esi */
  call_ind((uint32_t)(ESI), 0x11d17e09u);
  /* 11d17e09 mov dword ptr [0x11d373dc], eax */
  w32((uint32_t)(0x11d373dc), (EAX));
L_11d17e0e:;
  /* 11d17e0e mov eax, dword ptr [0x11d373d8] */
  EAX = (r32((uint32_t)(0x11d373d8)));
  /* 11d17e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17e15 je 0x11d17e2d */
  if (C.zf) goto L_11d17e2d;
  /* 11d17e17 call eax */
  call_ind((uint32_t)(EAX), 0x11d17e19u);
  /* 11d17e19 mov ebx, eax */
  EBX = (EAX);
  /* 11d17e1b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d17e1d je 0x11d17e2d */
  if (C.zf) goto L_11d17e2d;
  /* 11d17e1f mov eax, dword ptr [0x11d373dc] */
  EAX = (r32((uint32_t)(0x11d373dc)));
  /* 11d17e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d17e26 je 0x11d17e2d */
  if (C.zf) goto L_11d17e2d;
  /* 11d17e28 push ebx */
  push32((uint32_t)(EBX));
  /* 11d17e29 call eax */
  call_ind((uint32_t)(EAX), 0x11d17e2bu);
  /* 11d17e2b mov ebx, eax */
  EBX = (EAX);
L_11d17e2d:;
  /* 11d17e2d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d17e31 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d17e35 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d17e39 push ebx */
  push32((uint32_t)(EBX));
  /* 11d17e3a call dword ptr [0x11d373d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d373d4))), 0x11d17e40u);
L_11d17e40:;
  /* 11d17e40 pop edi */
  EDI = (pop32());
  /* 11d17e41 pop esi */
  ESI = (pop32());
  /* 11d17e42 pop ebx */
  EBX = (pop32());
  /* 11d17e43 ret  */
  ESPCHK(0x11d17dbfu, _esp0);
  ESP += 4; return;
L_11d17e44:;
  /* 11d17e44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17e46 jmp 0x11d17e40 */
  goto L_11d17e40;
}

/* _strncpy @ 0x11d17e50 (254 bytes, 109 insns) */
void f_11d17e50(void) {
  FTRACE(0x11d17e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17e50 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d17e54 push edi */
  push32((uint32_t)(EDI));
  /* 11d17e55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d17e57 je 0x11d17ed3 */
  if (C.zf) goto L_11d17ed3;
  /* 11d17e59 push esi */
  push32((uint32_t)(ESI));
  /* 11d17e5a push ebx */
  push32((uint32_t)(EBX));
  /* 11d17e5b mov ebx, ecx */
  EBX = (ECX);
  /* 11d17e5d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11d17e61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11d17e67 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d17e6b jne 0x11d17e74 */
  if (!C.zf) goto L_11d17e74;
  /* 11d17e6d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d17e70 jne 0x11d17ee1 */
  if (!C.zf) goto L_11d17ee1;
  /* 11d17e72 jmp 0x11d17e95 */
  goto L_11d17e95;
L_11d17e74:;
  /* 11d17e74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d17e76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d17e77 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d17e79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d17e7a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d17e7b je 0x11d17ea2 */
  if (C.zf) goto L_11d17ea2;
  /* 11d17e7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d17e7f je 0x11d17eaa */
  if (C.zf) goto L_11d17eaa;
  /* 11d17e81 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11d17e87 jne 0x11d17e74 */
  if (!C.zf) goto L_11d17e74;
  /* 11d17e89 mov ebx, ecx */
  EBX = (ECX);
  /* 11d17e8b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d17e8e jne 0x11d17ee1 */
  if (!C.zf) goto L_11d17ee1;
L_11d17e90:;
  /* 11d17e90 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11d17e93 je 0x11d17ea2 */
  if (C.zf) goto L_11d17ea2;
L_11d17e95:;
  /* 11d17e95 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d17e97 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d17e98 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d17e9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d17e9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d17e9d je 0x11d17ece */
  if (C.zf) goto L_11d17ece;
  /* 11d17e9f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d17ea0 jne 0x11d17e95 */
  if (!C.zf) goto L_11d17e95;
L_11d17ea2:;
  /* 11d17ea2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d17ea6 pop ebx */
  EBX = (pop32());
  /* 11d17ea7 pop esi */
  ESI = (pop32());
  /* 11d17ea8 pop edi */
  EDI = (pop32());
  /* 11d17ea9 ret  */
  ESPCHK(0x11d17e50u, _esp0);
  ESP += 4; return;
L_11d17eaa:;
  /* 11d17eaa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d17eb0 je 0x11d17ec4 */
  if (C.zf) goto L_11d17ec4;
L_11d17eb2:;
  /* 11d17eb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d17eb4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d17eb5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d17eb6 je 0x11d17f46 */
  if (C.zf) goto L_11d17f46;
  /* 11d17ebc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11d17ec2 jne 0x11d17eb2 */
  if (!C.zf) goto L_11d17eb2;
L_11d17ec4:;
  /* 11d17ec4 mov ebx, ecx */
  EBX = (ECX);
  /* 11d17ec6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d17ec9 jne 0x11d17f37 */
  if (!C.zf) goto L_11d17f37;
L_11d17ecb:;
  /* 11d17ecb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d17ecd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11d17ece:;
  /* 11d17ece dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d17ecf jne 0x11d17ecb */
  if (!C.zf) goto L_11d17ecb;
  /* 11d17ed1 pop ebx */
  EBX = (pop32());
  /* 11d17ed2 pop esi */
  ESI = (pop32());
L_11d17ed3:;
  /* 11d17ed3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d17ed7 pop edi */
  EDI = (pop32());
  /* 11d17ed8 ret  */
  ESPCHK(0x11d17e50u, _esp0);
  ESP += 4; return;
L_11d17ed9:;
  /* 11d17ed9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d17edb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17ede dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d17edf je 0x11d17e90 */
  if (C.zf) goto L_11d17e90;
L_11d17ee1:;
  /* 11d17ee1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11d17ee6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d17ee8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17eea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d17eed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17eef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11d17ef1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17ef4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11d17ef9 je 0x11d17ed9 */
  if (C.zf) goto L_11d17ed9;
  /* 11d17efb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d17efd je 0x11d17f2b */
  if (C.zf) goto L_11d17f2b;
  /* 11d17eff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11d17f01 je 0x11d17f21 */
  if (C.zf) goto L_11d17f21;
  /* 11d17f03 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11d17f09 je 0x11d17f17 */
  if (C.zf) goto L_11d17f17;
  /* 11d17f0b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11d17f11 jne 0x11d17ed9 */
  if (!C.zf) goto L_11d17ed9;
  /* 11d17f13 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d17f15 jmp 0x11d17f2f */
  goto L_11d17f2f;
L_11d17f17:;
  /* 11d17f17 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d17f1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d17f1f jmp 0x11d17f2f */
  goto L_11d17f2f;
L_11d17f21:;
  /* 11d17f21 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d17f27 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11d17f29 jmp 0x11d17f2f */
  goto L_11d17f2f;
L_11d17f2b:;
  /* 11d17f2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d17f2d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11d17f2f:;
  /* 11d17f2f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17f32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d17f34 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d17f35 je 0x11d17f41 */
  if (C.zf) goto L_11d17f41;
L_11d17f37:;
  /* 11d17f37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d17f39:;
  /* 11d17f39 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11d17f3b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17f3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d17f3f jne 0x11d17f39 */
  if (!C.zf) goto L_11d17f39;
L_11d17f41:;
  /* 11d17f41 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11d17f44 jne 0x11d17ecb */
  if (!C.zf) goto L_11d17ecb;
L_11d17f46:;
  /* 11d17f46 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d17f4a pop ebx */
  EBX = (pop32());
  /* 11d17f4b pop esi */
  ESI = (pop32());
  /* 11d17f4c pop edi */
  EDI = (pop32());
  /* 11d17f4d ret  */
  ESPCHK(0x11d17e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f4e @ 0x11d17f4e (386 bytes, 138 insns) */
void f_11d17f4e(void) {
  FTRACE(0x11d17f4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d17f4e push ebp */
  push32((uint32_t)(EBP));
  /* 11d17f4f mov ebp, esp */
  EBP = (ESP);
  /* 11d17f51 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d17f57 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d17f5b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d17f5c push ebx */
  push32((uint32_t)(EBX));
  /* 11d17f5d push esi */
  push32((uint32_t)(ESI));
  /* 11d17f5e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d17f5f push edi */
  push32((uint32_t)(EDI));
  /* 11d17f60 je 0x11d17fc9 */
  if (C.zf) goto L_11d17fc9;
  /* 11d17f62 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d17f63 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d17f64 je 0x11d17fac */
  if (C.zf) goto L_11d17fac;
  /* 11d17f66 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17f69 je 0x11d17fac */
  if (C.zf) goto L_11d17fac;
  /* 11d17f6b sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17f6e je 0x11d17fac */
  if (C.zf) goto L_11d17fac;
  /* 11d17f70 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17f73 je 0x11d17f9f */
  if (C.zf) goto L_11d17f9f;
  /* 11d17f75 sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d17f78 je 0x11d17f92 */
  if (C.zf) goto L_11d17f92;
  /* 11d17f7a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d17f7b je 0x11d17f85 */
  if (C.zf) goto L_11d17f85;
  /* 11d17f7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d17f80 jmp 0x11d180cb */
  goto L_11d180cb;
L_11d17f85:;
  /* 11d17f85 mov ebx, dword ptr [0x11d373e8] */
  EBX = (r32((uint32_t)(0x11d373e8)));
  /* 11d17f8b mov edi, 0x11d373e8 */
  EDI = (0x11d373e8u);
  /* 11d17f90 jmp 0x11d17fd4 */
  goto L_11d17fd4;
L_11d17f92:;
  /* 11d17f92 mov ebx, dword ptr [0x11d373e4] */
  EBX = (r32((uint32_t)(0x11d373e4)));
  /* 11d17f98 mov edi, 0x11d373e4 */
  EDI = (0x11d373e4u);
  /* 11d17f9d jmp 0x11d17fd4 */
  goto L_11d17fd4;
L_11d17f9f:;
  /* 11d17f9f mov ebx, dword ptr [0x11d373ec] */
  EBX = (r32((uint32_t)(0x11d373ec)));
  /* 11d17fa5 mov edi, 0x11d373ec */
  EDI = (0x11d373ecu);
  /* 11d17faa jmp 0x11d17fd4 */
  goto L_11d17fd4;
L_11d17fac:;
  /* 11d17fac call 0x11d13d6f */
  push32(0x11d17fb1u); f_11d13d6f();
  /* 11d17fb1 mov esi, eax */
  ESI = (EAX);
  /* 11d17fb3 push dword ptr [esi + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x50))));
  /* 11d17fb6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d17fb9 call 0x11d180d0 */
  push32(0x11d17fbeu); f_11d180d0();
  /* 11d17fbe mov edi, eax */
  EDI = (EAX);
  /* 11d17fc0 pop ecx */
  ECX = (pop32());
  /* 11d17fc1 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d17fc4 pop ecx */
  ECX = (pop32());
  /* 11d17fc5 mov ebx, dword ptr [edi] */
  EBX = (r32((uint32_t)(EDI)));
  /* 11d17fc7 jmp 0x11d17fe6 */
  goto L_11d17fe6;
L_11d17fc9:;
  /* 11d17fc9 mov ebx, dword ptr [0x11d373e0] */
  EBX = (r32((uint32_t)(0x11d373e0)));
  /* 11d17fcf mov edi, 0x11d373e0 */
  EDI = (0x11d373e0u);
L_11d17fd4:;
  /* 11d17fd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d17fd6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d17fdd call 0x11d156f9 */
  push32(0x11d17fe2u); f_11d156f9();
  /* 11d17fe2 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d17fe5 pop ecx */
  ECX = (pop32());
L_11d17fe6:;
  /* 11d17fe6 cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17fe9 jne 0x11d18001 */
  if (!C.zf) goto L_11d18001;
  /* 11d17feb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d17fef je 0x11d180c9 */
  if (C.zf) goto L_11d180c9;
  /* 11d17ff5 push ebx */
  push32((uint32_t)(EBX));
  /* 11d17ff6 call 0x11d1575a */
  push32(0x11d17ffbu); f_11d1575a();
  /* 11d17ffb pop ecx */
  ECX = (pop32());
  /* 11d17ffc jmp 0x11d180c9 */
  goto L_11d180c9;
L_11d18001:;
  /* 11d18001 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d18003 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18005 jne 0x11d1801b */
  if (!C.zf) goto L_11d1801b;
  /* 11d18007 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1800a je 0x11d18014 */
  if (C.zf) goto L_11d18014;
  /* 11d1800c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1800e call 0x11d1575a */
  push32(0x11d18013u); f_11d1575a();
  /* 11d18013 pop ecx */
  ECX = (pop32());
L_11d18014:;
  /* 11d18014 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d18016 call 0x11d136a2 */
  push32(0x11d1801bu); f_11d136a2();
L_11d1801b:;
  /* 11d1801b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1801e cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18021 je 0x11d1802d */
  if (C.zf) goto L_11d1802d;
  /* 11d18023 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18026 je 0x11d1802d */
  if (C.zf) goto L_11d1802d;
  /* 11d18028 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1802b jne 0x11d18048 */
  if (!C.zf) goto L_11d18048;
L_11d1802d:;
  /* 11d1802d mov edx, dword ptr [esi + 0x54] */
  EDX = (r32((uint32_t)(ESI + 0x54)));
  /* 11d18030 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18033 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11d18036 mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 11d18039 jne 0x11d18084 */
  if (!C.zf) goto L_11d18084;
  /* 11d1803b mov edx, dword ptr [esi + 0x58] */
  EDX = (r32((uint32_t)(ESI + 0x58)));
  /* 11d1803e mov dword ptr [esi + 0x58], 0x8c */
  w32((uint32_t)(ESI + 0x58), (0x8cu));
  /* 11d18045 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11d18048:;
  /* 11d18048 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1804b jne 0x11d18084 */
  if (!C.zf) goto L_11d18084;
  /* 11d1804d mov ecx, dword ptr [0x11d208c8] */
  ECX = (r32((uint32_t)(0x11d208c8)));
  /* 11d18053 mov eax, dword ptr [0x11d208cc] */
  EAX = (r32((uint32_t)(0x11d208cc)));
  /* 11d18058 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1805a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1805c jge 0x11d18086 */
  if ((C.sf==C.of)) goto L_11d18086;
  /* 11d1805e lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 11d18061 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_11d18064:;
  /* 11d18064 mov edx, dword ptr [esi + 0x50] */
  EDX = (r32((uint32_t)(ESI + 0x50)));
  /* 11d18067 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1806a and dword ptr [edx + eax - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EDX + EAX*1 + -0x4)))&(0x0u); w32((uint32_t)(EDX + EAX*1 + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1806f mov edx, dword ptr [0x11d208c8] */
  EDX = (r32((uint32_t)(0x11d208c8)));
  /* 11d18075 mov edi, dword ptr [0x11d208cc] */
  EDI = (r32((uint32_t)(0x11d208cc)));
  /* 11d1807b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d1807c add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1807e cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18080 jl 0x11d18064 */
  if ((C.sf!=C.of)) goto L_11d18064;
  /* 11d18082 jmp 0x11d18086 */
  goto L_11d18086;
L_11d18084:;
  /* 11d18084 mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
L_11d18086:;
  /* 11d18086 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1808a je 0x11d18094 */
  if (C.zf) goto L_11d18094;
  /* 11d1808c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1808e call 0x11d1575a */
  push32(0x11d18093u); f_11d1575a();
  /* 11d18093 pop ecx */
  ECX = (pop32());
L_11d18094:;
  /* 11d18094 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18098 jne 0x11d180a5 */
  if (!C.zf) goto L_11d180a5;
  /* 11d1809a push dword ptr [esi + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x58))));
  /* 11d1809d push 8 */
  push32((uint32_t)(0x8u));
  /* 11d1809f call ebx */
  call_ind((uint32_t)(EBX), 0x11d180a1u);
  /* 11d180a1 pop ecx */
  ECX = (pop32());
  /* 11d180a2 pop ecx */
  ECX = (pop32());
  /* 11d180a3 jmp 0x11d180b7 */
  goto L_11d180b7;
L_11d180a5:;
  /* 11d180a5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d180a8 call ebx */
  call_ind((uint32_t)(EBX), 0x11d180aau);
  /* 11d180aa cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d180ae pop ecx */
  ECX = (pop32());
  /* 11d180af je 0x11d180b7 */
  if (C.zf) goto L_11d180b7;
  /* 11d180b1 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d180b5 jne 0x11d180c9 */
  if (!C.zf) goto L_11d180c9;
L_11d180b7:;
  /* 11d180b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d180ba cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d180be mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
  /* 11d180c1 jne 0x11d180c9 */
  if (!C.zf) goto L_11d180c9;
  /* 11d180c3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d180c6 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
L_11d180c9:;
  /* 11d180c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d180cb:;
  /* 11d180cb pop edi */
  EDI = (pop32());
  /* 11d180cc pop esi */
  ESI = (pop32());
  /* 11d180cd pop ebx */
  EBX = (pop32());
  /* 11d180ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d180cf ret  */
  ESPCHK(0x11d17f4eu, _esp0);
  ESP += 4; return;
}

/* FUN_100080d0 @ 0x11d180d0 (61 bytes, 25 insns) */
void f_11d180d0(void) {
  FTRACE(0x11d180d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d180d0 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d180d4 mov ecx, dword ptr [0x11d208d4] */
  ECX = (r32((uint32_t)(0x11d208d4)));
  /* 11d180da push esi */
  push32((uint32_t)(ESI));
  /* 11d180db mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d180df cmp dword ptr [edx + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d180e2 push edi */
  push32((uint32_t)(EDI));
  /* 11d180e3 mov eax, edx */
  EAX = (EDX);
  /* 11d180e5 je 0x11d180f9 */
  if (C.zf) goto L_11d180f9;
  /* 11d180e7 lea edi, [ecx + ecx*2] */
  EDI = ((uint32_t)(ECX + ECX*2));
  /* 11d180ea lea edi, [edx + edi*4] */
  EDI = ((uint32_t)(EDX + EDI*4));
L_11d180ed:;
  /* 11d180ed add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d180f0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d180f2 jae 0x11d180f9 */
  if (!C.cf) goto L_11d180f9;
  /* 11d180f4 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d180f7 jne 0x11d180ed */
  if (!C.zf) goto L_11d180ed;
L_11d180f9:;
  /* 11d180f9 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 11d180fc lea ecx, [edx + ecx*4] */
  ECX = ((uint32_t)(EDX + ECX*4));
  /* 11d180ff cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18101 jae 0x11d18108 */
  if (!C.cf) goto L_11d18108;
  /* 11d18103 cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18106 je 0x11d1810a */
  if (C.zf) goto L_11d1810a;
L_11d18108:;
  /* 11d18108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d1810a:;
  /* 11d1810a pop edi */
  EDI = (pop32());
  /* 11d1810b pop esi */
  ESI = (pop32());
  /* 11d1810c ret  */
  ESPCHK(0x11d180d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000810d @ 0x11d1810d (318 bytes, 123 insns) */
void f_11d1810d(void) {
  FTRACE(0x11d1810du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1810d push ebp */
  push32((uint32_t)(EBP));
  /* 11d1810e mov ebp, esp */
  EBP = (ESP);
  /* 11d18110 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d18112 push 0x11d1c678 */
  push32((uint32_t)(0x11d1c678u));
  /* 11d18117 push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d1811c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d18122 push eax */
  push32((uint32_t)(EAX));
  /* 11d18123 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d1812a sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1812d push ebx */
  push32((uint32_t)(EBX));
  /* 11d1812e push esi */
  push32((uint32_t)(ESI));
  /* 11d1812f push edi */
  push32((uint32_t)(EDI));
  /* 11d18130 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d18133 mov eax, dword ptr [0x11d373f4] */
  EAX = (r32((uint32_t)(0x11d373f4)));
  /* 11d18138 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d1813a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1813c jne 0x11d1817c */
  if (!C.zf) goto L_11d1817c;
  /* 11d1813e lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11d18141 push eax */
  push32((uint32_t)(EAX));
  /* 11d18142 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d18144 pop esi */
  ESI = (pop32());
  /* 11d18145 push esi */
  push32((uint32_t)(ESI));
  /* 11d18146 push 0x11d1c670 */
  push32((uint32_t)(0x11d1c670u));
  /* 11d1814b push esi */
  push32((uint32_t)(ESI));
  /* 11d1814c call dword ptr [0x11d1c028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c028))), 0x11d18152u);
  /* 11d18152 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d18154 je 0x11d1815a */
  if (C.zf) goto L_11d1815a;
  /* 11d18156 mov eax, esi */
  EAX = (ESI);
  /* 11d18158 jmp 0x11d18177 */
  goto L_11d18177;
L_11d1815a:;
  /* 11d1815a lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11d1815d push eax */
  push32((uint32_t)(EAX));
  /* 11d1815e push esi */
  push32((uint32_t)(ESI));
  /* 11d1815f push 0x11d1c66c */
  push32((uint32_t)(0x11d1c66cu));
  /* 11d18164 push esi */
  push32((uint32_t)(ESI));
  /* 11d18165 push ebx */
  push32((uint32_t)(EBX));
  /* 11d18166 call dword ptr [0x11d1c034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c034))), 0x11d1816cu);
  /* 11d1816c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1816e je 0x11d18242 */
  if (C.zf) goto L_11d18242;
  /* 11d18174 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d18176 pop eax */
  EAX = (pop32());
L_11d18177:;
  /* 11d18177 mov dword ptr [0x11d373f4], eax */
  w32((uint32_t)(0x11d373f4), (EAX));
L_11d1817c:;
  /* 11d1817c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1817f jne 0x11d181a5 */
  if (!C.zf) goto L_11d181a5;
  /* 11d18181 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d18184 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18186 jne 0x11d1818d */
  if (!C.zf) goto L_11d1818d;
  /* 11d18188 mov eax, dword ptr [0x11d3740c] */
  EAX = (r32((uint32_t)(0x11d3740c)));
L_11d1818d:;
  /* 11d1818d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d18190 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d18193 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d18196 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d18199 push eax */
  push32((uint32_t)(EAX));
  /* 11d1819a call dword ptr [0x11d1c034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c034))), 0x11d181a0u);
  /* 11d181a0 jmp 0x11d18244 */
  goto L_11d18244;
L_11d181a5:;
  /* 11d181a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d181a8 jne 0x11d18242 */
  if (!C.zf) goto L_11d18242;
  /* 11d181ae cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d181b1 jne 0x11d181bb */
  if (!C.zf) goto L_11d181bb;
  /* 11d181b3 mov eax, dword ptr [0x11d3741c] */
  EAX = (r32((uint32_t)(0x11d3741c)));
  /* 11d181b8 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11d181bb:;
  /* 11d181bb push ebx */
  push32((uint32_t)(EBX));
  /* 11d181bc push ebx */
  push32((uint32_t)(EBX));
  /* 11d181bd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d181c0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d181c3 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d181c6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d181c8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d181ca and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11d181cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d181ce push eax */
  push32((uint32_t)(EAX));
  /* 11d181cf push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d181d2 call dword ptr [0x11d1c030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c030))), 0x11d181d8u);
  /* 11d181d8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d181db cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d181dd je 0x11d18242 */
  if (C.zf) goto L_11d18242;
  /* 11d181df mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11d181e2 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11d181e5 mov eax, edi */
  EAX = (EDI);
  /* 11d181e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d181ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d181ec call 0x11d17d90 */
  push32(0x11d181f1u); f_11d17d90();
  /* 11d181f1 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d181f4 mov esi, esp */
  ESI = (ESP);
  /* 11d181f6 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11d181f9 push edi */
  push32((uint32_t)(EDI));
  /* 11d181fa push ebx */
  push32((uint32_t)(EBX));
  /* 11d181fb push esi */
  push32((uint32_t)(ESI));
  /* 11d181fc call 0x11d15240 */
  push32(0x11d18201u); f_11d15240();
  /* 11d18201 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18204 jmp 0x11d18211 */
  goto L_11d18211;
  /* 11d18206 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d18208 pop eax */
  EAX = (pop32());
  /* 11d18209 ret  */
  ESPCHK(0x11d1810du, _esp0);
  ESP += 4; return;
  /* 11d1820a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d1820d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d1820f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11d18211:;
  /* 11d18211 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d18215 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18217 je 0x11d18242 */
  if (C.zf) goto L_11d18242;
  /* 11d18219 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11d1821c push esi */
  push32((uint32_t)(ESI));
  /* 11d1821d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d18220 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d18223 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d18225 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d18228 call dword ptr [0x11d1c030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c030))), 0x11d1822eu);
  /* 11d1822e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18230 je 0x11d18242 */
  if (C.zf) goto L_11d18242;
  /* 11d18232 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d18235 push eax */
  push32((uint32_t)(EAX));
  /* 11d18236 push esi */
  push32((uint32_t)(ESI));
  /* 11d18237 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1823a call dword ptr [0x11d1c028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c028))), 0x11d18240u);
  /* 11d18240 jmp 0x11d18244 */
  goto L_11d18244;
L_11d18242:;
  /* 11d18242 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d18244:;
  /* 11d18244 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11d18247 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1824a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d18251 pop edi */
  EDI = (pop32());
  /* 11d18252 pop esi */
  ESI = (pop32());
  /* 11d18253 pop ebx */
  EBX = (pop32());
  /* 11d18254 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d18255 ret  */
  ESPCHK(0x11d1810du, _esp0);
  ESP += 4; return;
}

/* FUN_10008256 @ 0x11d18256 (511 bytes, 193 insns) */
void f_11d18256(void) {
  FTRACE(0x11d18256u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18256 push ebp */
  push32((uint32_t)(EBP));
  /* 11d18257 mov ebp, esp */
  EBP = (ESP);
  /* 11d18259 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1825b push 0x11d1c688 */
  push32((uint32_t)(0x11d1c688u));
  /* 11d18260 push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d18265 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1826b push eax */
  push32((uint32_t)(EAX));
  /* 11d1826c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d18273 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d18276 push ebx */
  push32((uint32_t)(EBX));
  /* 11d18277 push esi */
  push32((uint32_t)(ESI));
  /* 11d18278 push edi */
  push32((uint32_t)(EDI));
  /* 11d18279 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d1827c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d1827e cmp dword ptr [0x11d37424], edi */
  { uint32_t _a=(r32((uint32_t)(0x11d37424))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18284 jne 0x11d182cc */
  if (!C.zf) goto L_11d182cc;
  /* 11d18286 push edi */
  push32((uint32_t)(EDI));
  /* 11d18287 push edi */
  push32((uint32_t)(EDI));
  /* 11d18288 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1828a pop ebx */
  EBX = (pop32());
  /* 11d1828b push ebx */
  push32((uint32_t)(EBX));
  /* 11d1828c push 0x11d1c670 */
  push32((uint32_t)(0x11d1c670u));
  /* 11d18291 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11d18296 push esi */
  push32((uint32_t)(ESI));
  /* 11d18297 push edi */
  push32((uint32_t)(EDI));
  /* 11d18298 call dword ptr [0x11d1c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c024))), 0x11d1829eu);
  /* 11d1829e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d182a0 je 0x11d182aa */
  if (C.zf) goto L_11d182aa;
  /* 11d182a2 mov dword ptr [0x11d37424], ebx */
  w32((uint32_t)(0x11d37424), (EBX));
  /* 11d182a8 jmp 0x11d182cc */
  goto L_11d182cc;
L_11d182aa:;
  /* 11d182aa push edi */
  push32((uint32_t)(EDI));
  /* 11d182ab push edi */
  push32((uint32_t)(EDI));
  /* 11d182ac push ebx */
  push32((uint32_t)(EBX));
  /* 11d182ad push 0x11d1c66c */
  push32((uint32_t)(0x11d1c66cu));
  /* 11d182b2 push esi */
  push32((uint32_t)(ESI));
  /* 11d182b3 push edi */
  push32((uint32_t)(EDI));
  /* 11d182b4 call dword ptr [0x11d1c02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c02c))), 0x11d182bau);
  /* 11d182ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d182bc je 0x11d183e4 */
  if (C.zf) goto L_11d183e4;
  /* 11d182c2 mov dword ptr [0x11d37424], 2 */
  w32((uint32_t)(0x11d37424), (0x2u));
L_11d182cc:;
  /* 11d182cc cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d182cf jle 0x11d182e1 */
  if ((C.zf||C.sf!=C.of)) goto L_11d182e1;
  /* 11d182d1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d182d4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d182d7 call 0x11d1847a */
  push32(0x11d182dcu); f_11d1847a();
  /* 11d182dc pop ecx */
  ECX = (pop32());
  /* 11d182dd pop ecx */
  ECX = (pop32());
  /* 11d182de mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11d182e1:;
  /* 11d182e1 mov eax, dword ptr [0x11d37424] */
  EAX = (r32((uint32_t)(0x11d37424)));
  /* 11d182e6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d182e9 jne 0x11d18308 */
  if (!C.zf) goto L_11d18308;
  /* 11d182eb push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11d182ee push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d182f1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d182f4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d182f7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d182fa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d182fd call dword ptr [0x11d1c02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c02c))), 0x11d18303u);
  /* 11d18303 jmp 0x11d183e6 */
  goto L_11d183e6;
L_11d18308:;
  /* 11d18308 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1830b jne 0x11d183e4 */
  if (!C.zf) goto L_11d183e4;
  /* 11d18311 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18314 jne 0x11d1831e */
  if (!C.zf) goto L_11d1831e;
  /* 11d18316 mov eax, dword ptr [0x11d3741c] */
  EAX = (r32((uint32_t)(0x11d3741c)));
  /* 11d1831b mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11d1831e:;
  /* 11d1831e push edi */
  push32((uint32_t)(EDI));
  /* 11d1831f push edi */
  push32((uint32_t)(EDI));
  /* 11d18320 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d18323 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d18326 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11d18329 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d1832b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1832d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11d18330 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d18331 push eax */
  push32((uint32_t)(EAX));
  /* 11d18332 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d18335 call dword ptr [0x11d1c030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c030))), 0x11d1833bu);
  /* 11d1833b mov ebx, eax */
  EBX = (EAX);
  /* 11d1833d mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11d18340 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18342 je 0x11d183e4 */
  if (C.zf) goto L_11d183e4;
  /* 11d18348 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11d1834b lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11d1834e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18351 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d18353 call 0x11d17d90 */
  push32(0x11d18358u); f_11d17d90();
  /* 11d18358 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d1835b mov eax, esp */
  EAX = (ESP);
  /* 11d1835d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d18360 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d18364 jmp 0x11d18379 */
  goto L_11d18379;
  /* 11d18366 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d18368 pop eax */
  EAX = (pop32());
  /* 11d18369 ret  */
  ESPCHK(0x11d18256u, _esp0);
  ESP += 4; return;
  /* 11d1836a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d1836d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d1836f mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11d18372 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d18376 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11d18379:;
  /* 11d18379 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1837c je 0x11d183e4 */
  if (C.zf) goto L_11d183e4;
  /* 11d1837e push ebx */
  push32((uint32_t)(EBX));
  /* 11d1837f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11d18382 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d18385 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d18388 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1838a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1838d call dword ptr [0x11d1c030] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c030))), 0x11d18393u);
  /* 11d18393 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d18395 je 0x11d183e4 */
  if (C.zf) goto L_11d183e4;
  /* 11d18397 push edi */
  push32((uint32_t)(EDI));
  /* 11d18398 push edi */
  push32((uint32_t)(EDI));
  /* 11d18399 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1839a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11d1839d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d183a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d183a3 call dword ptr [0x11d1c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c024))), 0x11d183a9u);
  /* 11d183a9 mov esi, eax */
  ESI = (EAX);
  /* 11d183ab mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11d183ae cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d183b0 je 0x11d183e4 */
  if (C.zf) goto L_11d183e4;
  /* 11d183b2 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11d183b6 je 0x11d183f8 */
  if (C.zf) goto L_11d183f8;
  /* 11d183b8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d183bb je 0x11d18473 */
  if (C.zf) goto L_11d18473;
  /* 11d183c1 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d183c4 jg 0x11d183e4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d183e4;
  /* 11d183c6 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11d183c9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d183cc push ebx */
  push32((uint32_t)(EBX));
  /* 11d183cd push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11d183d0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d183d3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d183d6 call dword ptr [0x11d1c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c024))), 0x11d183dcu);
  /* 11d183dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d183de jne 0x11d18473 */
  if (!C.zf) goto L_11d18473;
L_11d183e4:;
  /* 11d183e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d183e6:;
  /* 11d183e6 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11d183e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d183ec mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d183f3 pop edi */
  EDI = (pop32());
  /* 11d183f4 pop esi */
  ESI = (pop32());
  /* 11d183f5 pop ebx */
  EBX = (pop32());
  /* 11d183f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d183f7 ret  */
  ESPCHK(0x11d18256u, _esp0);
  ESP += 4; return;
L_11d183f8:;
  /* 11d183f8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d183ff lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11d18402 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18405 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11d18407 call 0x11d17d90 */
  push32(0x11d1840cu); f_11d17d90();
  /* 11d1840c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d1840f mov ebx, esp */
  EBX = (ESP);
  /* 11d18411 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11d18414 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d18418 jmp 0x11d1842c */
  goto L_11d1842c;
  /* 11d1841a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1841c pop eax */
  EAX = (pop32());
  /* 11d1841d ret  */
  ESPCHK(0x11d18256u, _esp0);
  ESP += 4; return;
  /* 11d1841e mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d18421 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d18423 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d18425 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d18429 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11d1842c:;
  /* 11d1842c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1842e je 0x11d183e4 */
  if (C.zf) goto L_11d183e4;
  /* 11d18430 push esi */
  push32((uint32_t)(ESI));
  /* 11d18431 push ebx */
  push32((uint32_t)(EBX));
  /* 11d18432 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11d18435 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11d18438 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1843b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1843e call dword ptr [0x11d1c024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c024))), 0x11d18444u);
  /* 11d18444 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d18446 je 0x11d183e4 */
  if (C.zf) goto L_11d183e4;
  /* 11d18448 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1844b push edi */
  push32((uint32_t)(EDI));
  /* 11d1844c push edi */
  push32((uint32_t)(EDI));
  /* 11d1844d jne 0x11d18453 */
  if (!C.zf) goto L_11d18453;
  /* 11d1844f push edi */
  push32((uint32_t)(EDI));
  /* 11d18450 push edi */
  push32((uint32_t)(EDI));
  /* 11d18451 jmp 0x11d18459 */
  goto L_11d18459;
L_11d18453:;
  /* 11d18453 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11d18456 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11d18459:;
  /* 11d18459 push esi */
  push32((uint32_t)(ESI));
  /* 11d1845a push ebx */
  push32((uint32_t)(EBX));
  /* 11d1845b push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11d18460 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d18463 call dword ptr [0x11d1c098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c098))), 0x11d18469u);
  /* 11d18469 mov esi, eax */
  ESI = (EAX);
  /* 11d1846b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1846d je 0x11d183e4 */
  if (C.zf) goto L_11d183e4;
L_11d18473:;
  /* 11d18473 mov eax, esi */
  EAX = (ESI);
  /* 11d18475 jmp 0x11d183e6 */
  goto L_11d183e6;
}

/* FUN_1000847a @ 0x11d1847a (43 bytes, 20 insns) */
void f_11d1847a(void) {
  FTRACE(0x11d1847au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1847a mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d1847e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d18482 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d18484 push esi */
  push32((uint32_t)(ESI));
  /* 11d18485 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11d18488 je 0x11d18497 */
  if (C.zf) goto L_11d18497;
L_11d1848a:;
  /* 11d1848a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1848d je 0x11d18497 */
  if (C.zf) goto L_11d18497;
  /* 11d1848f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d18490 mov esi, ecx */
  ESI = (ECX);
  /* 11d18492 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d18493 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d18495 jne 0x11d1848a */
  if (!C.zf) goto L_11d1848a;
L_11d18497:;
  /* 11d18497 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1849a pop esi */
  ESI = (pop32());
  /* 11d1849b jne 0x11d184a2 */
  if (!C.zf) goto L_11d184a2;
  /* 11d1849d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d184a1 ret  */
  ESPCHK(0x11d1847au, _esp0);
  ESP += 4; return;
L_11d184a2:;
  /* 11d184a2 mov eax, edx */
  EAX = (EDX);
  /* 11d184a4 ret  */
  ESPCHK(0x11d1847au, _esp0);
  ESP += 4; return;
}

/* FUN_100084a5 @ 0x11d184a5 (33 bytes, 15 insns) */
void f_11d184a5(void) {
  FTRACE(0x11d184a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d184a5 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d184a9 push esi */
  push32((uint32_t)(ESI));
  /* 11d184aa mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11d184ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d184b0 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 11d184b3 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d184b5 jb 0x11d184bb */
  if (C.cf) goto L_11d184bb;
  /* 11d184b7 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d184b9 jae 0x11d184be */
  if (!C.cf) goto L_11d184be;
L_11d184bb:;
  /* 11d184bb push 1 */
  push32((uint32_t)(0x1u));
  /* 11d184bd pop eax */
  EAX = (pop32());
L_11d184be:;
  /* 11d184be mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d184c2 pop esi */
  ESI = (pop32());
  /* 11d184c3 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11d184c5 ret  */
  ESPCHK(0x11d184a5u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11d184c6 (94 bytes, 38 insns) */
void f_11d184c6(void) {
  FTRACE(0x11d184c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d184c6 push esi */
  push32((uint32_t)(ESI));
  /* 11d184c7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d184cb push edi */
  push32((uint32_t)(EDI));
  /* 11d184cc mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d184d0 push esi */
  push32((uint32_t)(ESI));
  /* 11d184d1 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11d184d3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d184d5 call 0x11d184a5 */
  push32(0x11d184dau); f_11d184a5();
  /* 11d184da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d184dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d184df je 0x11d184f8 */
  if (C.zf) goto L_11d184f8;
  /* 11d184e1 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11d184e4 push eax */
  push32((uint32_t)(EAX));
  /* 11d184e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d184e7 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11d184e9 call 0x11d184a5 */
  push32(0x11d184eeu); f_11d184a5();
  /* 11d184ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d184f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d184f3 je 0x11d184f8 */
  if (C.zf) goto L_11d184f8;
  /* 11d184f5 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11d184f8:;
  /* 11d184f8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11d184fb push eax */
  push32((uint32_t)(EAX));
  /* 11d184fc push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 11d184ff push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11d18501 call 0x11d184a5 */
  push32(0x11d18506u); f_11d184a5();
  /* 11d18506 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1850b je 0x11d18510 */
  if (C.zf) goto L_11d18510;
  /* 11d1850d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11d18510:;
  /* 11d18510 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11d18513 push eax */
  push32((uint32_t)(EAX));
  /* 11d18514 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11d18517 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11d18519 call 0x11d184a5 */
  push32(0x11d1851eu); f_11d184a5();
  /* 11d1851e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18521 pop edi */
  EDI = (pop32());
  /* 11d18522 pop esi */
  ESI = (pop32());
  /* 11d18523 ret  */
  ESPCHK(0x11d184c6u, _esp0);
  ESP += 4; return;
}

/* FUN_10008524 @ 0x11d18524 (46 bytes, 21 insns) */
void f_11d18524(void) {
  FTRACE(0x11d18524u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18524 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d18528 push esi */
  push32((uint32_t)(ESI));
  /* 11d18529 push edi */
  push32((uint32_t)(EDI));
  /* 11d1852a mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11d1852c mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1852f mov ecx, esi */
  ECX = (ESI);
  /* 11d18531 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18533 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11d18535 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 11d18538 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 11d1853b or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11d1853d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d18540 mov edx, edi */
  EDX = (EDI);
  /* 11d18542 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 11d18545 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 11d18548 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d1854a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d1854c pop edi */
  EDI = (pop32());
  /* 11d1854d mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11d18550 pop esi */
  ESI = (pop32());
  /* 11d18551 ret  */
  ESPCHK(0x11d18524u, _esp0);
  ESP += 4; return;
}

/* FUN_10008552 @ 0x11d18552 (45 bytes, 21 insns) */
void f_11d18552(void) {
  FTRACE(0x11d18552u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18552 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d18556 push esi */
  push32((uint32_t)(ESI));
  /* 11d18557 push edi */
  push32((uint32_t)(EDI));
  /* 11d18558 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d1855b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1855e mov esi, edx */
  ESI = (EDX);
  /* 11d18560 mov edi, ecx */
  EDI = (ECX);
  /* 11d18562 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 11d18565 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d18567 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11d18569 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d1856c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d1856e shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 11d18571 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11d18573 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11d18575 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d18577 pop edi */
  EDI = (pop32());
  /* 11d18578 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11d1857b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d1857d pop esi */
  ESI = (pop32());
  /* 11d1857e ret  */
  ESPCHK(0x11d18552u, _esp0);
  ESP += 4; return;
}

/* FUN_1000857f @ 0x11d1857f (199 bytes, 76 insns) */
void f_11d1857f(void) {
  FTRACE(0x11d1857fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1857f push ebp */
  push32((uint32_t)(EBP));
  /* 11d18580 mov ebp, esp */
  EBP = (ESP);
  /* 11d18582 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d18585 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d18588 push ebx */
  push32((uint32_t)(EBX));
  /* 11d18589 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1858c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d1858e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18590 push esi */
  push32((uint32_t)(ESI));
  /* 11d18591 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 11d18598 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 11d1859a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 11d1859d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 11d185a0 jbe 0x11d185f3 */
  if ((C.cf||C.zf)) goto L_11d185f3;
  /* 11d185a2 push edi */
  push32((uint32_t)(EDI));
  /* 11d185a3 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11d185a6:;
  /* 11d185a6 mov esi, ebx */
  ESI = (EBX);
  /* 11d185a8 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 11d185ab movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d185ac movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d185ad push ebx */
  push32((uint32_t)(EBX));
  /* 11d185ae movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d185af call 0x11d18524 */
  push32(0x11d185b4u); f_11d18524();
  /* 11d185b4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d185b5 call 0x11d18524 */
  push32(0x11d185bau); f_11d18524();
  /* 11d185ba lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d185bd push eax */
  push32((uint32_t)(EAX));
  /* 11d185be push ebx */
  push32((uint32_t)(EBX));
  /* 11d185bf call 0x11d184c6 */
  push32(0x11d185c4u); f_11d184c6();
  /* 11d185c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d185c5 call 0x11d18524 */
  push32(0x11d185cau); f_11d18524();
  /* 11d185ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d185cd and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11d185d1 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11d185d5 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11d185d8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d185db lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d185de push eax */
  push32((uint32_t)(EAX));
  /* 11d185df push ebx */
  push32((uint32_t)(EBX));
  /* 11d185e0 call 0x11d184c6 */
  push32(0x11d185e5u); f_11d184c6();
  /* 11d185e5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d185e8 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11d185eb dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11d185ee jne 0x11d185a6 */
  if (!C.zf) goto L_11d185a6;
  /* 11d185f0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d185f2 pop edi */
  EDI = (pop32());
L_11d185f3:;
  /* 11d185f3 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d185f6 jne 0x11d18620 */
  if (!C.zf) goto L_11d18620;
  /* 11d185f8 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11d185fb mov eax, ecx */
  EAX = (ECX);
  /* 11d185fd shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d18600 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 11d18603 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11d18605 mov esi, eax */
  ESI = (EAX);
  /* 11d18607 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11d1860a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11d1860d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11d1860f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d18612 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d18619 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 11d1861c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11d1861e jmp 0x11d185f3 */
  goto L_11d185f3;
L_11d18620:;
  /* 11d18620 mov esi, 0x8000 */
  ESI = (0x8000u);
L_11d18625:;
  /* 11d18625 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 11d18628 jne 0x11d1863a */
  if (!C.zf) goto L_11d1863a;
  /* 11d1862a push ebx */
  push32((uint32_t)(EBX));
  /* 11d1862b call 0x11d18524 */
  push32(0x11d18630u); f_11d18524();
  /* 11d18630 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d18637 pop ecx */
  ECX = (pop32());
  /* 11d18638 jmp 0x11d18625 */
  goto L_11d18625;
L_11d1863a:;
  /* 11d1863a mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11d1863e pop esi */
  ESI = (pop32());
  /* 11d1863f mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 11d18643 pop ebx */
  EBX = (pop32());
  /* 11d18644 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d18645 ret  */
  ESPCHK(0x11d1857fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008646 @ 0x11d18646 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_11d18646(void) {
  FTRACE(0x11d18646u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18646 push ebp */
  push32((uint32_t)(EBP));
  /* 11d18647 mov ebp, esp */
  EBP = (ESP);
  /* 11d18649 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1864c push ebx */
  push32((uint32_t)(EBX));
  /* 11d1864d push esi */
  push32((uint32_t)(ESI));
  /* 11d1864e push edi */
  push32((uint32_t)(EDI));
  /* 11d1864f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d18652 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11d18655 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d18657 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d1865a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1865c pop edx */
  EDX = (pop32());
  /* 11d1865d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d18660 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11d18663 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d18666 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d18669 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d1866c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d1866f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11d18672 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11d18675 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d18678 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d1867b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d1867e mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_11d18681:;
  /* 11d18681 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11d18683 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18686 je 0x11d18697 */
  if (C.zf) goto L_11d18697;
  /* 11d18688 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1868b je 0x11d18697 */
  if (C.zf) goto L_11d18697;
  /* 11d1868d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18690 je 0x11d18697 */
  if (C.zf) goto L_11d18697;
  /* 11d18692 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18695 jne 0x11d1869a */
  if (!C.zf) goto L_11d1869a;
L_11d18697:;
  /* 11d18697 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d18698 jmp 0x11d18681 */
  goto L_11d18681;
L_11d1869a:;
  /* 11d1869a push 4 */
  push32((uint32_t)(0x4u));
  /* 11d1869c pop esi */
  ESI = (pop32());
L_11d1869d:;
  /* 11d1869d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d1869f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d186a0 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d186a3 ja 0x11d18920 */
  if ((!C.cf&&!C.zf)) goto L_11d18920;
  /* 11d186a9 jmp dword ptr [eax*4 + 0x11d18ae7] */
  switch (EAX) {
    case 0: goto L_11d186b0;
    case 1: goto L_11d186ff;
    case 2: goto L_11d18756;
    case 3: goto L_11d18780;
    case 4: goto L_11d187db;
    case 5: goto L_11d18852;
    case 6: goto L_11d18888;
    case 7: goto L_11d188d2;
    case 8: goto L_11d188b1;
    case 9: goto L_11d18936;
    case 10: goto L_11d18920;
    case 11: goto L_11d188ec;
    default: x86_unimpl("switch@0x11d186a9 out of table"); return;
  }
L_11d186b0:;
  /* 11d186b0 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d186b3 jl 0x11d186c1 */
  if ((C.sf!=C.of)) goto L_11d186c1;
  /* 11d186b5 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d186b8 jg 0x11d186c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d186c1;
L_11d186ba:;
  /* 11d186ba push 3 */
  push32((uint32_t)(0x3u));
  /* 11d186bc jmp 0x11d188de */
  goto L_11d188de;
L_11d186c1:;
  /* 11d186c1 cmp bl, byte ptr [0x11d1e504] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11d1e504))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d186c7 jne 0x11d186d0 */
  if (!C.zf) goto L_11d186d0;
L_11d186c9:;
  /* 11d186c9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d186cb jmp 0x11d18916 */
  goto L_11d18916;
L_11d186d0:;
  /* 11d186d0 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11d186d3 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d186d6 je 0x11d186f6 */
  if (C.zf) goto L_11d186f6;
  /* 11d186d8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d186d9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d186da je 0x11d186ea */
  if (C.zf) goto L_11d186ea;
  /* 11d186dc sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d186df jne 0x11d189b9 */
  if (!C.zf) goto L_11d189b9;
  /* 11d186e5 jmp 0x11d18779 */
  goto L_11d18779;
L_11d186ea:;
  /* 11d186ea push 2 */
  push32((uint32_t)(0x2u));
  /* 11d186ec mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 11d186f3 pop eax */
  EAX = (pop32());
  /* 11d186f4 jmp 0x11d1869d */
  goto L_11d1869d;
L_11d186f6:;
  /* 11d186f6 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11d186fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11d186fc pop eax */
  EAX = (pop32());
  /* 11d186fd jmp 0x11d1869d */
  goto L_11d1869d;
L_11d186ff:;
  /* 11d186ff cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18702 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d18705 jl 0x11d1870c */
  if ((C.sf!=C.of)) goto L_11d1870c;
  /* 11d18707 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1870a jle 0x11d186ba */
  if ((C.zf||C.sf!=C.of)) goto L_11d186ba;
L_11d1870c:;
  /* 11d1870c cmp bl, byte ptr [0x11d1e504] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11d1e504))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18712 je 0x11d187d4 */
  if (C.zf) goto L_11d187d4;
  /* 11d18718 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1871b je 0x11d1874e */
  if (C.zf) goto L_11d1874e;
  /* 11d1871d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18720 je 0x11d1874e */
  if (C.zf) goto L_11d1874e;
  /* 11d18722 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18725 je 0x11d18779 */
  if (C.zf) goto L_11d18779;
L_11d18727:;
  /* 11d18727 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1872a jle 0x11d189b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11d189b9;
  /* 11d18730 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18733 jle 0x11d18747 */
  if ((C.zf||C.sf!=C.of)) goto L_11d18747;
  /* 11d18735 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18738 jle 0x11d189b9 */
  if ((C.zf||C.sf!=C.of)) goto L_11d189b9;
  /* 11d1873e cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18741 jg 0x11d189b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d189b9;
L_11d18747:;
  /* 11d18747 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d18749 jmp 0x11d18916 */
  goto L_11d18916;
L_11d1874e:;
  /* 11d1874e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d1874f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11d18751 jmp 0x11d18916 */
  goto L_11d18916;
L_11d18756:;
  /* 11d18756 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18759 jl 0x11d18764 */
  if ((C.sf!=C.of)) goto L_11d18764;
  /* 11d1875b cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1875e jle 0x11d186ba */
  if ((C.zf||C.sf!=C.of)) goto L_11d186ba;
L_11d18764:;
  /* 11d18764 cmp bl, byte ptr [0x11d1e504] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11d1e504))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1876a je 0x11d186c9 */
  if (C.zf) goto L_11d186c9;
  /* 11d18770 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18773 jne 0x11d1892e */
  if (!C.zf) goto L_11d1892e;
L_11d18779:;
  /* 11d18779 mov eax, edx */
  EAX = (EDX);
  /* 11d1877b jmp 0x11d1869d */
  goto L_11d1869d;
L_11d18780:;
  /* 11d18780 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11d18783:;
  /* 11d18783 cmp dword ptr [0x11d1e500], edx */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18789 jle 0x11d1879c */
  if ((C.zf||C.sf!=C.of)) goto L_11d1879c;
  /* 11d1878b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d1878e push esi */
  push32((uint32_t)(ESI));
  /* 11d1878f push eax */
  push32((uint32_t)(EAX));
  /* 11d18790 call 0x11d14a2a */
  push32(0x11d18795u); f_11d14a2a();
  /* 11d18795 pop ecx */
  ECX = (pop32());
  /* 11d18796 pop ecx */
  ECX = (pop32());
  /* 11d18797 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d18799 pop edx */
  EDX = (pop32());
  /* 11d1879a jmp 0x11d187aa */
  goto L_11d187aa;
L_11d1879c:;
  /* 11d1879c mov ecx, dword ptr [0x11d1e50c] */
  ECX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d187a2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d187a5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11d187a8 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11d187aa:;
  /* 11d187aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d187ac je 0x11d187cc */
  if (C.zf) goto L_11d187cc;
  /* 11d187ae cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d187b2 jae 0x11d187c4 */
  if (!C.cf) goto L_11d187c4;
  /* 11d187b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d187b7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d187ba sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d187bd inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11d187c0 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 11d187c2 jmp 0x11d187c7 */
  goto L_11d187c7;
L_11d187c4:;
  /* 11d187c4 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_11d187c7:;
  /* 11d187c7 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d187c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d187ca jmp 0x11d18783 */
  goto L_11d18783;
L_11d187cc:;
  /* 11d187cc cmp bl, byte ptr [0x11d1e504] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x11d1e504))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d187d2 jne 0x11d1883b */
  if (!C.zf) goto L_11d1883b;
L_11d187d4:;
  /* 11d187d4 mov eax, esi */
  EAX = (ESI);
  /* 11d187d6 jmp 0x11d1869d */
  goto L_11d1869d;
L_11d187db:;
  /* 11d187db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d187df mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11d187e2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d187e5 jne 0x11d187f4 */
  if (!C.zf) goto L_11d187f4;
L_11d187e7:;
  /* 11d187e7 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d187ea jne 0x11d187f4 */
  if (!C.zf) goto L_11d187f4;
  /* 11d187ec dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11d187ef mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d187f1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d187f2 jmp 0x11d187e7 */
  goto L_11d187e7;
L_11d187f4:;
  /* 11d187f4 cmp dword ptr [0x11d1e500], edx */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d187fa jle 0x11d1880d */
  if ((C.zf||C.sf!=C.of)) goto L_11d1880d;
  /* 11d187fc movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d187ff push esi */
  push32((uint32_t)(ESI));
  /* 11d18800 push eax */
  push32((uint32_t)(EAX));
  /* 11d18801 call 0x11d14a2a */
  push32(0x11d18806u); f_11d14a2a();
  /* 11d18806 pop ecx */
  ECX = (pop32());
  /* 11d18807 pop ecx */
  ECX = (pop32());
  /* 11d18808 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1880a pop edx */
  EDX = (pop32());
  /* 11d1880b jmp 0x11d1881b */
  goto L_11d1881b;
L_11d1880d:;
  /* 11d1880d mov ecx, dword ptr [0x11d1e50c] */
  ECX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d18813 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d18816 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11d18819 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11d1881b:;
  /* 11d1881b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1881d je 0x11d1883b */
  if (C.zf) goto L_11d1883b;
  /* 11d1881f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18823 jae 0x11d18836 */
  if (!C.cf) goto L_11d18836;
  /* 11d18825 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d18828 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d1882b sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d1882e inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 11d18831 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11d18834 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_11d18836:;
  /* 11d18836 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d18838 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d18839 jmp 0x11d187f4 */
  goto L_11d187f4;
L_11d1883b:;
  /* 11d1883b cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1883e je 0x11d1874e */
  if (C.zf) goto L_11d1874e;
  /* 11d18844 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18847 je 0x11d1874e */
  if (C.zf) goto L_11d1874e;
  /* 11d1884d jmp 0x11d18727 */
  goto L_11d18727;
L_11d18852:;
  /* 11d18852 cmp dword ptr [0x11d1e500], edx */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18858 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11d1885b jle 0x11d1886e */
  if ((C.zf||C.sf!=C.of)) goto L_11d1886e;
  /* 11d1885d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d18860 push esi */
  push32((uint32_t)(ESI));
  /* 11d18861 push eax */
  push32((uint32_t)(EAX));
  /* 11d18862 call 0x11d14a2a */
  push32(0x11d18867u); f_11d14a2a();
  /* 11d18867 pop ecx */
  ECX = (pop32());
  /* 11d18868 pop ecx */
  ECX = (pop32());
  /* 11d18869 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1886b pop edx */
  EDX = (pop32());
  /* 11d1886c jmp 0x11d1887c */
  goto L_11d1887c;
L_11d1886e:;
  /* 11d1886e mov ecx, dword ptr [0x11d1e50c] */
  ECX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d18874 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d18877 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11d1887a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11d1887c:;
  /* 11d1887c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1887e je 0x11d1892e */
  if (C.zf) goto L_11d1892e;
  /* 11d18884 mov eax, esi */
  EAX = (ESI);
  /* 11d18886 jmp 0x11d188df */
  goto L_11d188df;
L_11d18888:;
  /* 11d18888 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 11d1888b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1888e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d18891 jl 0x11d18898 */
  if ((C.sf!=C.of)) goto L_11d18898;
  /* 11d18893 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18896 jle 0x11d188dc */
  if ((C.zf||C.sf!=C.of)) goto L_11d188dc;
L_11d18898:;
  /* 11d18898 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11d1889b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1889e je 0x11d18914 */
  if (C.zf) goto L_11d18914;
  /* 11d188a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d188a1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d188a2 je 0x11d18908 */
  if (C.zf) goto L_11d18908;
  /* 11d188a4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d188a7 jne 0x11d189bc */
  if (!C.zf) goto L_11d189bc;
L_11d188ad:;
  /* 11d188ad push 8 */
  push32((uint32_t)(0x8u));
  /* 11d188af jmp 0x11d18916 */
  goto L_11d18916;
L_11d188b1:;
  /* 11d188b1 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11d188b4:;
  /* 11d188b4 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d188b7 jne 0x11d188be */
  if (!C.zf) goto L_11d188be;
  /* 11d188b9 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d188bb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d188bc jmp 0x11d188b4 */
  goto L_11d188b4;
L_11d188be:;
  /* 11d188be cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d188c1 jl 0x11d189b9 */
  if ((C.sf!=C.of)) goto L_11d189b9;
  /* 11d188c7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d188ca jg 0x11d189b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d189b9;
  /* 11d188d0 jmp 0x11d188dc */
  goto L_11d188dc;
L_11d188d2:;
  /* 11d188d2 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d188d5 jl 0x11d188e5 */
  if ((C.sf!=C.of)) goto L_11d188e5;
  /* 11d188d7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d188da jg 0x11d188e5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d188e5;
L_11d188dc:;
  /* 11d188dc push 9 */
  push32((uint32_t)(0x9u));
L_11d188de:;
  /* 11d188de pop eax */
  EAX = (pop32());
L_11d188df:;
  /* 11d188df dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d188e0 jmp 0x11d1869d */
  goto L_11d1869d;
L_11d188e5:;
  /* 11d188e5 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d188e8 jne 0x11d1892e */
  if (!C.zf) goto L_11d1892e;
  /* 11d188ea jmp 0x11d188ad */
  goto L_11d188ad;
L_11d188ec:;
  /* 11d188ec cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d188f0 je 0x11d1891c */
  if (C.zf) goto L_11d1891c;
  /* 11d188f2 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11d188f5 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 11d188f8 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d188fb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11d188fe je 0x11d18914 */
  if (C.zf) goto L_11d18914;
  /* 11d18900 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d18901 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d18902 jne 0x11d189bc */
  if (!C.zf) goto L_11d189bc;
L_11d18908:;
  /* 11d18908 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 11d1890c push 7 */
  push32((uint32_t)(0x7u));
  /* 11d1890e pop eax */
  EAX = (pop32());
  /* 11d1890f jmp 0x11d1869d */
  goto L_11d1869d;
L_11d18914:;
  /* 11d18914 push 7 */
  push32((uint32_t)(0x7u));
L_11d18916:;
  /* 11d18916 pop eax */
  EAX = (pop32());
  /* 11d18917 jmp 0x11d1869d */
  goto L_11d1869d;
L_11d1891c:;
  /* 11d1891c push 0xa */
  push32((uint32_t)(0xau));
  /* 11d1891e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d1891f pop eax */
  EAX = (pop32());
L_11d18920:;
  /* 11d18920 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18923 je 0x11d189be */
  if (C.zf) goto L_11d189be;
  /* 11d18929 jmp 0x11d1869d */
  goto L_11d1869d;
L_11d1892e:;
  /* 11d1892e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d18931 jmp 0x11d189be */
  goto L_11d189be;
L_11d18936:;
  /* 11d18936 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 11d1893d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11d1893f:;
  /* 11d1893f cmp dword ptr [0x11d1e500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18946 jle 0x11d18957 */
  if ((C.zf||C.sf!=C.of)) goto L_11d18957;
  /* 11d18948 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d1894b push 4 */
  push32((uint32_t)(0x4u));
  /* 11d1894d push eax */
  push32((uint32_t)(EAX));
  /* 11d1894e call 0x11d14a2a */
  push32(0x11d18953u); f_11d14a2a();
  /* 11d18953 pop ecx */
  ECX = (pop32());
  /* 11d18954 pop ecx */
  ECX = (pop32());
  /* 11d18955 jmp 0x11d18966 */
  goto L_11d18966;
L_11d18957:;
  /* 11d18957 mov ecx, dword ptr [0x11d1e50c] */
  ECX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d1895d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d18960 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11d18963 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11d18966:;
  /* 11d18966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d18968 je 0x11d18986 */
  if (C.zf) goto L_11d18986;
  /* 11d1896a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11d1896d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11d18970 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 11d18974 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1897a jg 0x11d18981 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d18981;
  /* 11d1897c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d1897e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d1897f jmp 0x11d1893f */
  goto L_11d1893f;
L_11d18981:;
  /* 11d18981 mov esi, 0x1451 */
  ESI = (0x1451u);
L_11d18986:;
  /* 11d18986 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_11d18989:;
  /* 11d18989 cmp dword ptr [0x11d1e500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18990 jle 0x11d189a1 */
  if ((C.zf||C.sf!=C.of)) goto L_11d189a1;
  /* 11d18992 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d18995 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d18997 push eax */
  push32((uint32_t)(EAX));
  /* 11d18998 call 0x11d14a2a */
  push32(0x11d1899du); f_11d14a2a();
  /* 11d1899d pop ecx */
  ECX = (pop32());
  /* 11d1899e pop ecx */
  ECX = (pop32());
  /* 11d1899f jmp 0x11d189b0 */
  goto L_11d189b0;
L_11d189a1:;
  /* 11d189a1 mov ecx, dword ptr [0x11d1e50c] */
  ECX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d189a7 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11d189aa mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11d189ad and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11d189b0:;
  /* 11d189b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d189b2 je 0x11d189b9 */
  if (C.zf) goto L_11d189b9;
  /* 11d189b4 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d189b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d189b7 jmp 0x11d18989 */
  goto L_11d18989;
L_11d189b9:;
  /* 11d189b9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11d189ba jmp 0x11d189be */
  goto L_11d189be;
L_11d189bc:;
  /* 11d189bc mov edi, ecx */
  EDI = (ECX);
L_11d189be:;
  /* 11d189be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d189c1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d189c5 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11d189c7 je 0x11d18aa6 */
  if (C.zf) goto L_11d18aa6;
  /* 11d189cd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11d189cf pop eax */
  EAX = (pop32());
  /* 11d189d0 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d189d3 jbe 0x11d189ea */
  if ((C.cf||C.zf)) goto L_11d189ea;
  /* 11d189d5 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d189d9 jl 0x11d189de */
  if ((C.sf!=C.of)) goto L_11d189de;
  /* 11d189db inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_11d189de:;
  /* 11d189de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d189e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d189e4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d189e5 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11d189e8 jmp 0x11d189ed */
  goto L_11d189ed;
L_11d189ea:;
  /* 11d189ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11d189ed:;
  /* 11d189ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d189f1 jbe 0x11d18a9c */
  if ((C.cf||C.zf)) goto L_11d18a9c;
L_11d189f7:;
  /* 11d189f7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d189f8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d189fb jne 0x11d18a05 */
  if (!C.zf) goto L_11d18a05;
  /* 11d189fd dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11d18a00 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 11d18a03 jmp 0x11d189f7 */
  goto L_11d189f7;
L_11d18a05:;
  /* 11d18a05 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11d18a08 push eax */
  push32((uint32_t)(EAX));
  /* 11d18a09 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 11d18a0c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11d18a0f push eax */
  push32((uint32_t)(EAX));
  /* 11d18a10 call 0x11d1857f */
  push32(0x11d18a15u); f_11d1857f();
  /* 11d18a15 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d18a18 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d18a1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18a1d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18a20 jge 0x11d18a24 */
  if ((C.sf==C.of)) goto L_11d18a24;
  /* 11d18a22 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11d18a24:;
  /* 11d18a24 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18a27 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18a2a jne 0x11d18a2f */
  if (!C.zf) goto L_11d18a2f;
  /* 11d18a2c add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d18a2f:;
  /* 11d18a2f cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18a32 jne 0x11d18a37 */
  if (!C.zf) goto L_11d18a37;
  /* 11d18a34 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d18a37:;
  /* 11d18a37 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18a3c jle 0x11d18a6e */
  if ((C.zf||C.sf!=C.of)) goto L_11d18a6e;
  /* 11d18a3e mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_11d18a45:;
  /* 11d18a45 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d18a48 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d18a4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d18a4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_11d18a51:;
  /* 11d18a51 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18a55 je 0x11d18ab7 */
  if (C.zf) goto L_11d18ab7;
  /* 11d18a57 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d18a59 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 11d18a5e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11d18a63 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d18a65 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 11d18a6c jmp 0x11d18acc */
  goto L_11d18acc;
L_11d18a6e:;
  /* 11d18a6e cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18a73 jge 0x11d18a7e */
  if ((C.sf==C.of)) goto L_11d18a7e;
  /* 11d18a75 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 11d18a7c jmp 0x11d18a45 */
  goto L_11d18a45;
L_11d18a7e:;
  /* 11d18a7e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d18a81 push eax */
  push32((uint32_t)(EAX));
  /* 11d18a82 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 11d18a85 push eax */
  push32((uint32_t)(EAX));
  /* 11d18a86 call 0x11d1959a */
  push32(0x11d18a8bu); f_11d1959a();
  /* 11d18a8b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11d18a8e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 11d18a91 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 11d18a94 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 11d18a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18a9a jmp 0x11d18a51 */
  goto L_11d18a51;
L_11d18a9c:;
  /* 11d18a9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d18a9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d18aa0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d18aa2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d18aa4 jmp 0x11d18a51 */
  goto L_11d18a51;
L_11d18aa6:;
  /* 11d18aa6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d18aa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d18aaa xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d18aac xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d18aae mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 11d18ab5 jmp 0x11d18acc */
  goto L_11d18acc;
L_11d18ab7:;
  /* 11d18ab7 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18abb je 0x11d18acc */
  if (C.zf) goto L_11d18acc;
  /* 11d18abd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d18abf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d18ac1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d18ac3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d18ac5 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11d18acc:;
  /* 11d18acc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d18acf or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 11d18ad2 pop edi */
  EDI = (pop32());
  /* 11d18ad3 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 11d18ad6 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 11d18ad9 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 11d18add mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d18ae0 pop esi */
  ESI = (pop32());
  /* 11d18ae1 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11d18ae4 pop ebx */
  EBX = (pop32());
  /* 11d18ae5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d18ae6 ret  */
  ESPCHK(0x11d18646u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b17 @ 0x11d18b17 (659 bytes, 232 insns) */
void f_11d18b17(void) {
  FTRACE(0x11d18b17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18b17 push ebp */
  push32((uint32_t)(EBP));
  /* 11d18b18 mov ebp, esp */
  EBP = (ESP);
  /* 11d18b1a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d18b1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d18b20 push ebx */
  push32((uint32_t)(EBX));
  /* 11d18b21 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d18b24 push esi */
  push32((uint32_t)(ESI));
  /* 11d18b25 mov ecx, eax */
  ECX = (EAX);
  /* 11d18b27 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 11d18b2c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d18b32 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11d18b34 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11d18b37 push edi */
  push32((uint32_t)(EDI));
  /* 11d18b38 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 11d18b3c mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 11d18b40 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 11d18b44 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 11d18b48 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 11d18b4c mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 11d18b50 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 11d18b54 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 11d18b58 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 11d18b5c mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 11d18b60 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 11d18b64 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 11d18b68 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d18b6f mov edx, eax */
  EDX = (EAX);
  /* 11d18b71 je 0x11d18b79 */
  if (C.zf) goto L_11d18b79;
  /* 11d18b73 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 11d18b77 jmp 0x11d18b7d */
  goto L_11d18b7d;
L_11d18b79:;
  /* 11d18b79 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_11d18b7d:;
  /* 11d18b7d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d18b80 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 11d18b83 jne 0x11d18ba3 */
  if (!C.zf) goto L_11d18ba3;
  /* 11d18b85 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d18b87 jne 0x11d18ba3 */
  if (!C.zf) goto L_11d18ba3;
  /* 11d18b89 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18b8c jne 0x11d18ba3 */
  if (!C.zf) goto L_11d18ba3;
L_11d18b8e:;
  /* 11d18b8e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11d18b92 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11d18b96 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11d18b9a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 11d18b9e jmp 0x11d18da1 */
  goto L_11d18da1;
L_11d18ba3:;
  /* 11d18ba3 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d18ba6 jne 0x11d18c22 */
  if (!C.zf) goto L_11d18c22;
  /* 11d18ba8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11d18bad mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 11d18bb2 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18bb4 jne 0x11d18bbc */
  if (!C.zf) goto L_11d18bbc;
  /* 11d18bb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18bba je 0x11d18bcb */
  if (C.zf) goto L_11d18bcb;
L_11d18bbc:;
  /* 11d18bbc test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 11d18bc2 jne 0x11d18bcb */
  if (!C.zf) goto L_11d18bcb;
  /* 11d18bc4 push 0x11d1c6b8 */
  push32((uint32_t)(0x11d1c6b8u));
  /* 11d18bc9 jmp 0x11d18c11 */
  goto L_11d18c11;
L_11d18bcb:;
  /* 11d18bcb test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 11d18bce je 0x11d18be5 */
  if (C.zf) goto L_11d18be5;
  /* 11d18bd0 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18bd6 jne 0x11d18be5 */
  if (!C.zf) goto L_11d18be5;
  /* 11d18bd8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18bdc jne 0x11d18c0c */
  if (!C.zf) goto L_11d18c0c;
  /* 11d18bde push 0x11d1c6b0 */
  push32((uint32_t)(0x11d1c6b0u));
  /* 11d18be3 jmp 0x11d18bf4 */
  goto L_11d18bf4;
L_11d18be5:;
  /* 11d18be5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18be7 jne 0x11d18c0c */
  if (!C.zf) goto L_11d18c0c;
  /* 11d18be9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18bed jne 0x11d18c0c */
  if (!C.zf) goto L_11d18c0c;
  /* 11d18bef push 0x11d1c6a8 */
  push32((uint32_t)(0x11d1c6a8u));
L_11d18bf4:;
  /* 11d18bf4 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11d18bf7 push eax */
  push32((uint32_t)(EAX));
  /* 11d18bf8 call 0x11d15150 */
  push32(0x11d18bfdu); f_11d15150();
  /* 11d18bfd pop ecx */
  ECX = (pop32());
  /* 11d18bfe mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 11d18c02 pop ecx */
  ECX = (pop32());
L_11d18c03:;
  /* 11d18c03 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d18c07 jmp 0x11d18d7a */
  goto L_11d18d7a;
L_11d18c0c:;
  /* 11d18c0c push 0x11d1c6a0 */
  push32((uint32_t)(0x11d1c6a0u));
L_11d18c11:;
  /* 11d18c11 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11d18c14 push eax */
  push32((uint32_t)(EAX));
  /* 11d18c15 call 0x11d15150 */
  push32(0x11d18c1au); f_11d15150();
  /* 11d18c1a pop ecx */
  ECX = (pop32());
  /* 11d18c1b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 11d18c1f pop ecx */
  ECX = (pop32());
  /* 11d18c20 jmp 0x11d18c03 */
  goto L_11d18c03;
L_11d18c22:;
  /* 11d18c22 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 11d18c25 mov ecx, edi */
  ECX = (EDI);
  /* 11d18c27 mov esi, eax */
  ESI = (EAX);
  /* 11d18c29 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11d18c2c imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d18c32 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 11d18c35 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 11d18c3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d18c3c lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 11d18c3f mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 11d18c43 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d18c46 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 11d18c49 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 11d18c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d18c53 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 11d18c56 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 11d18c59 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11d18c5c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d18c5e push eax */
  push32((uint32_t)(EAX));
  /* 11d18c5f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d18c62 push eax */
  push32((uint32_t)(EAX));
  /* 11d18c63 call 0x11d1959a */
  push32(0x11d18c68u); f_11d1959a();
  /* 11d18c68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18c6b cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d18c71 jb 0x11d18c83 */
  if (C.cf) goto L_11d18c83;
  /* 11d18c73 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11d18c76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d18c77 push eax */
  push32((uint32_t)(EAX));
  /* 11d18c78 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d18c7b push eax */
  push32((uint32_t)(EAX));
  /* 11d18c7c call 0x11d1937a */
  push32(0x11d18c81u); f_11d1937a();
  /* 11d18c81 pop ecx */
  ECX = (pop32());
  /* 11d18c82 pop ecx */
  ECX = (pop32());
L_11d18c83:;
  /* 11d18c83 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 11d18c87 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 11d18c8a je 0x11d18c9d */
  if (C.zf) goto L_11d18c9d;
  /* 11d18c8c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 11d18c8f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 11d18c92 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18c94 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d18c96 jg 0x11d18ca0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d18ca0;
  /* 11d18c98 jmp 0x11d18b8e */
  goto L_11d18b8e;
L_11d18c9d:;
  /* 11d18c9d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_11d18ca0:;
  /* 11d18ca0 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18ca3 jle 0x11d18ca8 */
  if ((C.zf||C.sf!=C.of)) goto L_11d18ca8;
  /* 11d18ca5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11d18ca7 pop edi */
  EDI = (pop32());
L_11d18ca8:;
  /* 11d18ca8 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 11d18cac sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d18cb2 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 11d18cb7 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_11d18cbe:;
  /* 11d18cbe lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d18cc1 push eax */
  push32((uint32_t)(EAX));
  /* 11d18cc2 call 0x11d18524 */
  push32(0x11d18cc7u); f_11d18524();
  /* 11d18cc7 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 11d18cca pop ecx */
  ECX = (pop32());
  /* 11d18ccb jne 0x11d18cbe */
  if (!C.zf) goto L_11d18cbe;
  /* 11d18ccd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d18ccf jge 0x11d18ce8 */
  if ((C.sf==C.of)) goto L_11d18ce8;
  /* 11d18cd1 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11d18cd3 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 11d18cd9 jle 0x11d18ce8 */
  if ((C.zf||C.sf!=C.of)) goto L_11d18ce8;
L_11d18cdb:;
  /* 11d18cdb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d18cde push eax */
  push32((uint32_t)(EAX));
  /* 11d18cdf call 0x11d18552 */
  push32(0x11d18ce4u); f_11d18552();
  /* 11d18ce4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d18ce5 pop ecx */
  ECX = (pop32());
  /* 11d18ce6 jne 0x11d18cdb */
  if (!C.zf) goto L_11d18cdb;
L_11d18ce8:;
  /* 11d18ce8 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 11d18ceb lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 11d18cee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d18cf0 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 11d18cf3 jle 0x11d18d45 */
  if ((C.zf||C.sf!=C.of)) goto L_11d18d45;
  /* 11d18cf5 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_11d18cf8:;
  /* 11d18cf8 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 11d18cfb lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 11d18cfe movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d18cff movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d18d00 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d18d03 push eax */
  push32((uint32_t)(EAX));
  /* 11d18d04 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d18d05 call 0x11d18524 */
  push32(0x11d18d0au); f_11d18524();
  /* 11d18d0a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d18d0d push eax */
  push32((uint32_t)(EAX));
  /* 11d18d0e call 0x11d18524 */
  push32(0x11d18d13u); f_11d18524();
  /* 11d18d13 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11d18d16 push eax */
  push32((uint32_t)(EAX));
  /* 11d18d17 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d18d1a push eax */
  push32((uint32_t)(EAX));
  /* 11d18d1b call 0x11d184c6 */
  push32(0x11d18d20u); f_11d184c6();
  /* 11d18d20 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d18d23 push eax */
  push32((uint32_t)(EAX));
  /* 11d18d24 call 0x11d18524 */
  push32(0x11d18d29u); f_11d18524();
  /* 11d18d29 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 11d18d2c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d18d2f and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 11d18d33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18d36 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d18d38 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11d18d3b dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 11d18d3e mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d18d40 jne 0x11d18cf8 */
  if (!C.zf) goto L_11d18cf8;
  /* 11d18d42 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_11d18d45:;
  /* 11d18d45 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 11d18d48 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d18d49 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d18d4a cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18d4d lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 11d18d50 jl 0x11d18d82 */
  if ((C.sf!=C.of)) goto L_11d18d82;
L_11d18d52:;
  /* 11d18d52 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18d54 jb 0x11d18d65 */
  if (C.cf) goto L_11d18d65;
  /* 11d18d56 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18d59 jne 0x11d18d61 */
  if (!C.zf) goto L_11d18d61;
  /* 11d18d5b mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11d18d5e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d18d5f jmp 0x11d18d52 */
  goto L_11d18d52;
L_11d18d61:;
  /* 11d18d61 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18d63 jae 0x11d18d69 */
  if (!C.cf) goto L_11d18d69;
L_11d18d65:;
  /* 11d18d65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d18d66 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_11d18d69:;
  /* 11d18d69 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_11d18d6b:;
  /* 11d18d6b sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d18d6d sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d18d6f mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 11d18d72 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11d18d75 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_11d18d7a:;
  /* 11d18d7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d18d7d:;
  /* 11d18d7d pop edi */
  EDI = (pop32());
  /* 11d18d7e pop esi */
  ESI = (pop32());
  /* 11d18d7f pop ebx */
  EBX = (pop32());
  /* 11d18d80 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d18d81 ret  */
  ESPCHK(0x11d18b17u, _esp0);
  ESP += 4; return;
L_11d18d82:;
  /* 11d18d82 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18d84 jb 0x11d18d92 */
  if (C.cf) goto L_11d18d92;
  /* 11d18d86 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d18d89 jne 0x11d18d8e */
  if (!C.zf) goto L_11d18d8e;
  /* 11d18d8b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d18d8c jmp 0x11d18d82 */
  goto L_11d18d82;
L_11d18d8e:;
  /* 11d18d8e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18d90 jae 0x11d18d6b */
  if (!C.cf) goto L_11d18d6b;
L_11d18d92:;
  /* 11d18d92 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 11d18d96 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 11d18d9a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 11d18d9e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_11d18da1:;
  /* 11d18da1 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 11d18da5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d18da7 pop eax */
  EAX = (pop32());
  /* 11d18da8 jmp 0x11d18d7d */
  goto L_11d18d7d;
}

/* FUN_10008daa @ 0x11d18daa (115 bytes, 37 insns) */
void f_11d18daa(void) {
  FTRACE(0x11d18daau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18daa push esi */
  push32((uint32_t)(ESI));
  /* 11d18dab call 0x11d18e26 */
  push32(0x11d18db0u); f_11d18e26();
  /* 11d18db0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d18db4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d18db6 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d18db8 mov eax, 0x11d20d70 */
  EAX = (0x11d20d70u);
L_11d18dbd:;
  /* 11d18dbd cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18dbf je 0x11d18de3 */
  if (C.zf) goto L_11d18de3;
  /* 11d18dc1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18dc4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d18dc5 cmp eax, 0x11d20ed8 */
  { uint32_t _a=(EAX),_b=(0x11d20ed8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18dca jl 0x11d18dbd */
  if ((C.sf!=C.of)) goto L_11d18dbd;
  /* 11d18dcc cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18dcf jb 0x11d18df3 */
  if (C.cf) goto L_11d18df3;
  /* 11d18dd1 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18dd4 ja 0x11d18df3 */
  if ((!C.cf&&!C.zf)) goto L_11d18df3;
  /* 11d18dd6 call 0x11d18e1d */
  push32(0x11d18ddbu); f_11d18e1d();
  /* 11d18ddb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11d18de1 pop esi */
  ESI = (pop32());
  /* 11d18de2 ret  */
  ESPCHK(0x11d18daau, _esp0);
  ESP += 4; return;
L_11d18de3:;
  /* 11d18de3 call 0x11d18e1d */
  push32(0x11d18de8u); f_11d18e1d();
  /* 11d18de8 mov ecx, dword ptr [esi*8 + 0x11d20d74] */
  ECX = (r32((uint32_t)(ESI*8 + 0x11d20d74)));
  /* 11d18def pop esi */
  ESI = (pop32());
  /* 11d18df0 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d18df2 ret  */
  ESPCHK(0x11d18daau, _esp0);
  ESP += 4; return;
L_11d18df3:;
  /* 11d18df3 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18df9 jb 0x11d18e10 */
  if (C.cf) goto L_11d18e10;
  /* 11d18dfb cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18e01 ja 0x11d18e10 */
  if ((!C.cf&&!C.zf)) goto L_11d18e10;
  /* 11d18e03 call 0x11d18e1d */
  push32(0x11d18e08u); f_11d18e1d();
  /* 11d18e08 mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11d18e0e pop esi */
  ESI = (pop32());
  /* 11d18e0f ret  */
  ESPCHK(0x11d18daau, _esp0);
  ESP += 4; return;
L_11d18e10:;
  /* 11d18e10 call 0x11d18e1d */
  push32(0x11d18e15u); f_11d18e1d();
  /* 11d18e15 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11d18e1b pop esi */
  ESI = (pop32());
  /* 11d18e1c ret  */
  ESPCHK(0x11d18daau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e1d @ 0x11d18e1d (9 bytes, 3 insns) */
void f_11d18e1d(void) {
  FTRACE(0x11d18e1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18e1d call 0x11d13d6f */
  push32(0x11d18e22u); f_11d13d6f();
  /* 11d18e22 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18e25 ret  */
  ESPCHK(0x11d18e1du, _esp0);
  ESP += 4; return;
}

/* FUN_10008e26 @ 0x11d18e26 (9 bytes, 3 insns) */
void f_11d18e26(void) {
  FTRACE(0x11d18e26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18e26 call 0x11d13d6f */
  push32(0x11d18e2bu); f_11d13d6f();
  /* 11d18e2b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18e2e ret  */
  ESPCHK(0x11d18e26u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e2f @ 0x11d18e2f (127 bytes, 48 insns) */
void f_11d18e2f(void) {
  FTRACE(0x11d18e2fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18e2f mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d18e33 push esi */
  push32((uint32_t)(ESI));
  /* 11d18e34 cmp ecx, dword ptr [0x11d38940] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d38940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18e3a push edi */
  push32((uint32_t)(EDI));
  /* 11d18e3b jae 0x11d18e95 */
  if (!C.cf) goto L_11d18e95;
  /* 11d18e3d mov eax, ecx */
  EAX = (ECX);
  /* 11d18e3f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d18e42 lea edi, [eax*4 + 0x11d38840] */
  EDI = ((uint32_t)(EAX*4 + 0x11d38840));
  /* 11d18e49 mov eax, ecx */
  EAX = (ECX);
  /* 11d18e4b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d18e4e lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11d18e51 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d18e53 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11d18e56 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18e58 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11d18e5c je 0x11d18e95 */
  if (C.zf) goto L_11d18e95;
  /* 11d18e5e cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18e61 je 0x11d18e95 */
  if (C.zf) goto L_11d18e95;
  /* 11d18e63 cmp dword ptr [0x11d3720c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d3720c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18e6a jne 0x11d18e8b */
  if (!C.zf) goto L_11d18e8b;
  /* 11d18e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d18e6e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d18e70 je 0x11d18e82 */
  if (C.zf) goto L_11d18e82;
  /* 11d18e72 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d18e73 je 0x11d18e7d */
  if (C.zf) goto L_11d18e7d;
  /* 11d18e75 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d18e76 jne 0x11d18e8b */
  if (!C.zf) goto L_11d18e8b;
  /* 11d18e78 push eax */
  push32((uint32_t)(EAX));
  /* 11d18e79 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d18e7b jmp 0x11d18e85 */
  goto L_11d18e85;
L_11d18e7d:;
  /* 11d18e7d push eax */
  push32((uint32_t)(EAX));
  /* 11d18e7e push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11d18e80 jmp 0x11d18e85 */
  goto L_11d18e85;
L_11d18e82:;
  /* 11d18e82 push eax */
  push32((uint32_t)(EAX));
  /* 11d18e83 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_11d18e85:;
  /* 11d18e85 call dword ptr [0x11d1c020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c020))), 0x11d18e8bu);
L_11d18e8b:;
  /* 11d18e8b mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d18e8d or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 11d18e91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d18e93 jmp 0x11d18eab */
  goto L_11d18eab;
L_11d18e95:;
  /* 11d18e95 call 0x11d18e1d */
  push32(0x11d18e9au); f_11d18e1d();
  /* 11d18e9a mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d18ea0 call 0x11d18e26 */
  push32(0x11d18ea5u); f_11d18e26();
  /* 11d18ea5 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d18ea8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d18eab:;
  /* 11d18eab pop edi */
  EDI = (pop32());
  /* 11d18eac pop esi */
  ESI = (pop32());
  /* 11d18ead ret  */
  ESPCHK(0x11d18e2fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008eae @ 0x11d18eae (66 bytes, 19 insns) */
void f_11d18eae(void) {
  FTRACE(0x11d18eaeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18eae mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d18eb2 cmp eax, dword ptr [0x11d38940] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11d38940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18eb8 jae 0x11d18ed9 */
  if (!C.cf) goto L_11d18ed9;
  /* 11d18eba mov ecx, eax */
  ECX = (EAX);
  /* 11d18ebc and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d18ebf sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d18ec2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11d18ec5 mov ecx, dword ptr [ecx*4 + 0x11d38840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d18ecc test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11d18ed1 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11d18ed4 je 0x11d18ed9 */
  if (C.zf) goto L_11d18ed9;
  /* 11d18ed6 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11d18ed8 ret  */
  ESPCHK(0x11d18eaeu, _esp0);
  ESP += 4; return;
L_11d18ed9:;
  /* 11d18ed9 call 0x11d18e1d */
  push32(0x11d18edeu); f_11d18e1d();
  /* 11d18ede mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d18ee4 call 0x11d18e26 */
  push32(0x11d18ee9u); f_11d18e26();
  /* 11d18ee9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d18eec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d18eef ret  */
  ESPCHK(0x11d18eaeu, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x11d18ef0 (95 bytes, 34 insns) */
void f_11d18ef0(void) {
  FTRACE(0x11d18ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18ef0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d18ef4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d18ef5 mov ecx, eax */
  ECX = (EAX);
  /* 11d18ef7 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d18efa sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d18efd push esi */
  push32((uint32_t)(ESI));
  /* 11d18efe push edi */
  push32((uint32_t)(EDI));
  /* 11d18eff mov esi, dword ptr [ecx*4 + 0x11d38840] */
  ESI = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d18f06 lea ebx, [ecx*4 + 0x11d38840] */
  EBX = ((uint32_t)(ECX*4 + 0x11d38840));
  /* 11d18f0d lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 11d18f10 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 11d18f13 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d18f15 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18f19 jne 0x11d18f3e */
  if (!C.zf) goto L_11d18f3e;
  /* 11d18f1b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d18f1d call 0x11d156f9 */
  push32(0x11d18f22u); f_11d156f9();
  /* 11d18f22 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d18f26 pop ecx */
  ECX = (pop32());
  /* 11d18f27 jne 0x11d18f36 */
  if (!C.zf) goto L_11d18f36;
  /* 11d18f29 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11d18f2c push eax */
  push32((uint32_t)(EAX));
  /* 11d18f2d call dword ptr [0x11d1c068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c068))), 0x11d18f33u);
  /* 11d18f33 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11d18f36:;
  /* 11d18f36 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11d18f38 call 0x11d1575a */
  push32(0x11d18f3du); f_11d1575a();
  /* 11d18f3d pop ecx */
  ECX = (pop32());
L_11d18f3e:;
  /* 11d18f3e mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11d18f40 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 11d18f44 push eax */
  push32((uint32_t)(EAX));
  /* 11d18f45 call dword ptr [0x11d1c05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c05c))), 0x11d18f4bu);
  /* 11d18f4b pop edi */
  EDI = (pop32());
  /* 11d18f4c pop esi */
  ESI = (pop32());
  /* 11d18f4d pop ebx */
  EBX = (pop32());
  /* 11d18f4e ret  */
  ESPCHK(0x11d18ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f4f @ 0x11d18f4f (34 bytes, 10 insns) */
void f_11d18f4f(void) {
  FTRACE(0x11d18f4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18f4f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d18f53 mov ecx, eax */
  ECX = (EAX);
  /* 11d18f55 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d18f58 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d18f5b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11d18f5e mov ecx, dword ptr [ecx*4 + 0x11d38840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d18f65 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 11d18f69 push eax */
  push32((uint32_t)(EAX));
  /* 11d18f6a call dword ptr [0x11d1c058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c058))), 0x11d18f70u);
  /* 11d18f70 ret  */
  ESPCHK(0x11d18f4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008ff2 @ 0x11d18ff2 (46 bytes, 22 insns) */
void f_11d18ff2(void) {
  FTRACE(0x11d18ff2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d18ff2 push esi */
  push32((uint32_t)(ESI));
  /* 11d18ff3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d18ff7 push esi */
  push32((uint32_t)(ESI));
  /* 11d18ff8 call 0x11d19020 */
  push32(0x11d18ffdu); f_11d19020();
  /* 11d18ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d18fff pop ecx */
  ECX = (pop32());
  /* 11d19000 je 0x11d19007 */
  if (C.zf) goto L_11d19007;
  /* 11d19002 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d19005 pop esi */
  ESI = (pop32());
  /* 11d19006 ret  */
  ESPCHK(0x11d18ff2u, _esp0);
  ESP += 4; return;
L_11d19007:;
  /* 11d19007 test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 11d1900b je 0x11d1901c */
  if (C.zf) goto L_11d1901c;
  /* 11d1900d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11d19010 call 0x11d19693 */
  push32(0x11d19015u); f_11d19693();
  /* 11d19015 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d19017 pop ecx */
  ECX = (pop32());
  /* 11d19018 pop esi */
  ESI = (pop32());
  /* 11d19019 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1901b ret  */
  ESPCHK(0x11d18ff2u, _esp0);
  ESP += 4; return;
L_11d1901c:;
  /* 11d1901c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1901e pop esi */
  ESI = (pop32());
  /* 11d1901f ret  */
  ESPCHK(0x11d18ff2u, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x11d19020 (92 bytes, 40 insns) */
void f_11d19020(void) {
  FTRACE(0x11d19020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19020 push ebx */
  push32((uint32_t)(EBX));
  /* 11d19021 push esi */
  push32((uint32_t)(ESI));
  /* 11d19022 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11d19026 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d19028 push edi */
  push32((uint32_t)(EDI));
  /* 11d19029 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11d1902c mov ecx, eax */
  ECX = (EAX);
  /* 11d1902e and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11d19031 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d19034 jne 0x11d1906d */
  if (!C.zf) goto L_11d1906d;
  /* 11d19036 test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 11d1903a je 0x11d1906d */
  if (C.zf) goto L_11d1906d;
  /* 11d1903c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11d1903f mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11d19041 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d19043 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d19045 jle 0x11d1906d */
  if ((C.zf||C.sf!=C.of)) goto L_11d1906d;
  /* 11d19047 push edi */
  push32((uint32_t)(EDI));
  /* 11d19048 push eax */
  push32((uint32_t)(EAX));
  /* 11d19049 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11d1904c call 0x11d171a5 */
  push32(0x11d19051u); f_11d171a5();
  /* 11d19051 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19054 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19056 jne 0x11d19066 */
  if (!C.zf) goto L_11d19066;
  /* 11d19058 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11d1905b test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11d1905d je 0x11d1906d */
  if (C.zf) goto L_11d1906d;
  /* 11d1905f and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11d19061 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11d19064 jmp 0x11d1906d */
  goto L_11d1906d;
L_11d19066:;
  /* 11d19066 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11d1906a or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_11d1906d:;
  /* 11d1906d mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11d19070 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d19074 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d19076 pop edi */
  EDI = (pop32());
  /* 11d19077 mov eax, ebx */
  EAX = (EBX);
  /* 11d19079 pop esi */
  ESI = (pop32());
  /* 11d1907a pop ebx */
  EBX = (pop32());
  /* 11d1907b ret  */
  ESPCHK(0x11d19020u, _esp0);
  ESP += 4; return;
}

/* FUN_10009085 @ 0x11d19085 (164 bytes, 66 insns) */
void f_11d19085(void) {
  FTRACE(0x11d19085u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19085 push ebx */
  push32((uint32_t)(EBX));
  /* 11d19086 push esi */
  push32((uint32_t)(ESI));
  /* 11d19087 push edi */
  push32((uint32_t)(EDI));
  /* 11d19088 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d1908a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d1908c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d1908e call 0x11d156f9 */
  push32(0x11d19093u); f_11d156f9();
  /* 11d19093 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d19095 pop ecx */
  ECX = (pop32());
  /* 11d19096 cmp dword ptr [0x11d38800], esi */
  { uint32_t _a=(r32((uint32_t)(0x11d38800))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1909c jle 0x11d19112 */
  if ((C.zf||C.sf!=C.of)) goto L_11d19112;
L_11d1909e:;
  /* 11d1909e mov eax, dword ptr [0x11d377e8] */
  EAX = (r32((uint32_t)(0x11d377e8)));
  /* 11d190a3 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11d190a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d190a8 je 0x11d19109 */
  if (C.zf) goto L_11d19109;
  /* 11d190aa test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11d190ae je 0x11d19109 */
  if (C.zf) goto L_11d19109;
  /* 11d190b0 push eax */
  push32((uint32_t)(EAX));
  /* 11d190b1 push esi */
  push32((uint32_t)(ESI));
  /* 11d190b2 call 0x11d17480 */
  push32(0x11d190b7u); f_11d17480();
  /* 11d190b7 mov eax, dword ptr [0x11d377e8] */
  EAX = (r32((uint32_t)(0x11d377e8)));
  /* 11d190bc pop ecx */
  ECX = (pop32());
  /* 11d190bd pop ecx */
  ECX = (pop32());
  /* 11d190be mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11d190c1 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d190c4 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 11d190c7 je 0x11d190f9 */
  if (C.zf) goto L_11d190f9;
  /* 11d190c9 cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d190ce jne 0x11d190df */
  if (!C.zf) goto L_11d190df;
  /* 11d190d0 push eax */
  push32((uint32_t)(EAX));
  /* 11d190d1 call 0x11d18ff2 */
  push32(0x11d190d6u); f_11d18ff2();
  /* 11d190d6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d190d9 pop ecx */
  ECX = (pop32());
  /* 11d190da je 0x11d190f9 */
  if (C.zf) goto L_11d190f9;
  /* 11d190dc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d190dd jmp 0x11d190f9 */
  goto L_11d190f9;
L_11d190df:;
  /* 11d190df cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d190e4 jne 0x11d190f9 */
  if (!C.zf) goto L_11d190f9;
  /* 11d190e6 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11d190e9 je 0x11d190f9 */
  if (C.zf) goto L_11d190f9;
  /* 11d190eb push eax */
  push32((uint32_t)(EAX));
  /* 11d190ec call 0x11d18ff2 */
  push32(0x11d190f1u); f_11d18ff2();
  /* 11d190f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d190f4 pop ecx */
  ECX = (pop32());
  /* 11d190f5 jne 0x11d190f9 */
  if (!C.zf) goto L_11d190f9;
  /* 11d190f7 or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_11d190f9:;
  /* 11d190f9 mov eax, dword ptr [0x11d377e8] */
  EAX = (r32((uint32_t)(0x11d377e8)));
  /* 11d190fe push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 11d19101 push esi */
  push32((uint32_t)(ESI));
  /* 11d19102 call 0x11d174d2 */
  push32(0x11d19107u); f_11d174d2();
  /* 11d19107 pop ecx */
  ECX = (pop32());
  /* 11d19108 pop ecx */
  ECX = (pop32());
L_11d19109:;
  /* 11d19109 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d1910a cmp esi, dword ptr [0x11d38800] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d38800))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19110 jl 0x11d1909e */
  if ((C.sf!=C.of)) goto L_11d1909e;
L_11d19112:;
  /* 11d19112 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d19114 call 0x11d1575a */
  push32(0x11d19119u); f_11d1575a();
  /* 11d19119 cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1911e pop ecx */
  ECX = (pop32());
  /* 11d1911f mov eax, ebx */
  EAX = (EBX);
  /* 11d19121 je 0x11d19125 */
  if (C.zf) goto L_11d19125;
  /* 11d19123 mov eax, edi */
  EAX = (EDI);
L_11d19125:;
  /* 11d19125 pop edi */
  EDI = (pop32());
  /* 11d19126 pop esi */
  ESI = (pop32());
  /* 11d19127 pop ebx */
  EBX = (pop32());
  /* 11d19128 ret  */
  ESPCHK(0x11d19085u, _esp0);
  ESP += 4; return;
}

/* FUN_10009129 @ 0x11d19129 (111 bytes, 44 insns) */
void f_11d19129(void) {
  FTRACE(0x11d19129u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19129 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1912a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d1912c cmp dword ptr [0x11d3740c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11d3740c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19132 jne 0x11d19147 */
  if (!C.zf) goto L_11d19147;
  /* 11d19134 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d19138 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1913b jl 0x11d19196 */
  if ((C.sf!=C.of)) goto L_11d19196;
  /* 11d1913d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19140 jg 0x11d19196 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d19196;
  /* 11d19142 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d19145 pop ebx */
  EBX = (pop32());
  /* 11d19146 ret  */
  ESPCHK(0x11d19129u, _esp0);
  ESP += 4; return;
L_11d19147:;
  /* 11d19147 push esi */
  push32((uint32_t)(ESI));
  /* 11d19148 mov esi, 0x11d375b0 */
  ESI = (0x11d375b0u);
  /* 11d1914d push edi */
  push32((uint32_t)(EDI));
  /* 11d1914e push esi */
  push32((uint32_t)(ESI));
  /* 11d1914f call dword ptr [0x11d1c060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c060))), 0x11d19155u);
  /* 11d19155 cmp dword ptr [0x11d375ac], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11d375ac))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1915b mov edi, dword ptr [0x11d1c064] */
  EDI = (r32((uint32_t)(0x11d1c064)));
  /* 11d19161 je 0x11d19171 */
  if (C.zf) goto L_11d19171;
  /* 11d19163 push esi */
  push32((uint32_t)(ESI));
  /* 11d19164 call edi */
  call_ind((uint32_t)(EDI), 0x11d19166u);
  /* 11d19166 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d19168 call 0x11d156f9 */
  push32(0x11d1916du); f_11d156f9();
  /* 11d1916d pop ecx */
  ECX = (pop32());
  /* 11d1916e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19170 pop ebx */
  EBX = (pop32());
L_11d19171:;
  /* 11d19171 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11d19175 call 0x11d19198 */
  push32(0x11d1917au); f_11d19198();
  /* 11d1917a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d1917c pop ecx */
  ECX = (pop32());
  /* 11d1917d mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11d19181 je 0x11d1918d */
  if (C.zf) goto L_11d1918d;
  /* 11d19183 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d19185 call 0x11d1575a */
  push32(0x11d1918au); f_11d1575a();
  /* 11d1918a pop ecx */
  ECX = (pop32());
  /* 11d1918b jmp 0x11d19190 */
  goto L_11d19190;
L_11d1918d:;
  /* 11d1918d push esi */
  push32((uint32_t)(ESI));
  /* 11d1918e call edi */
  call_ind((uint32_t)(EDI), 0x11d19190u);
L_11d19190:;
  /* 11d19190 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d19194 pop edi */
  EDI = (pop32());
  /* 11d19195 pop esi */
  ESI = (pop32());
L_11d19196:;
  /* 11d19196 pop ebx */
  EBX = (pop32());
  /* 11d19197 ret  */
  ESPCHK(0x11d19129u, _esp0);
  ESP += 4; return;
}

/* FUN_10009198 @ 0x11d19198 (204 bytes, 71 insns) */
void f_11d19198(void) {
  FTRACE(0x11d19198u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19198 push ebp */
  push32((uint32_t)(EBP));
  /* 11d19199 mov ebp, esp */
  EBP = (ESP);
  /* 11d1919b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1919c cmp dword ptr [0x11d3740c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d3740c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d191a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11d191a4 jne 0x11d191c3 */
  if (!C.zf) goto L_11d191c3;
  /* 11d191a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d191a9 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d191ac jl 0x11d19261 */
  if ((C.sf!=C.of)) goto L_11d19261;
  /* 11d191b2 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d191b5 jg 0x11d19261 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d19261;
  /* 11d191bb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d191be jmp 0x11d19261 */
  goto L_11d19261;
L_11d191c3:;
  /* 11d191c3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d191c6 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d191cc jge 0x11d191f6 */
  if ((C.sf==C.of)) goto L_11d191f6;
  /* 11d191ce cmp dword ptr [0x11d1e500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d191d5 jle 0x11d191e3 */
  if ((C.zf||C.sf!=C.of)) goto L_11d191e3;
  /* 11d191d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d191d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11d191da call 0x11d14a2a */
  push32(0x11d191dfu); f_11d14a2a();
  /* 11d191df pop ecx */
  ECX = (pop32());
  /* 11d191e0 pop ecx */
  ECX = (pop32());
  /* 11d191e1 jmp 0x11d191ee */
  goto L_11d191ee;
L_11d191e3:;
  /* 11d191e3 mov eax, dword ptr [0x11d1e50c] */
  EAX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d191e8 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11d191eb and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11d191ee:;
  /* 11d191ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d191f0 jne 0x11d191f6 */
  if (!C.zf) goto L_11d191f6;
L_11d191f2:;
  /* 11d191f2 mov eax, ebx */
  EAX = (EBX);
  /* 11d191f4 jmp 0x11d19261 */
  goto L_11d19261;
L_11d191f6:;
  /* 11d191f6 mov edx, dword ptr [0x11d1e50c] */
  EDX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d191fc mov eax, ebx */
  EAX = (EBX);
  /* 11d191fe sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d19201 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11d19204 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11d19209 je 0x11d19219 */
  if (C.zf) goto L_11d19219;
  /* 11d1920b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11d1920f mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11d19212 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11d19215 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d19217 jmp 0x11d19222 */
  goto L_11d19222;
L_11d19219:;
  /* 11d19219 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11d1921d mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11d19220 push 1 */
  push32((uint32_t)(0x1u));
L_11d19222:;
  /* 11d19222 pop eax */
  EAX = (pop32());
  /* 11d19223 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11d19226 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19228 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1922a push 3 */
  push32((uint32_t)(0x3u));
  /* 11d1922c push ecx */
  push32((uint32_t)(ECX));
  /* 11d1922d push eax */
  push32((uint32_t)(EAX));
  /* 11d1922e lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11d19231 push eax */
  push32((uint32_t)(EAX));
  /* 11d19232 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11d19237 push dword ptr [0x11d3740c] */
  push32((uint32_t)(r32((uint32_t)(0x11d3740c))));
  /* 11d1923d call 0x11d18256 */
  push32(0x11d19242u); f_11d18256();
  /* 11d19242 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d19247 je 0x11d191f2 */
  if (C.zf) goto L_11d191f2;
  /* 11d19249 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1924c jne 0x11d19254 */
  if (!C.zf) goto L_11d19254;
  /* 11d1924e movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d19252 jmp 0x11d19261 */
  goto L_11d19261;
L_11d19254:;
  /* 11d19254 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11d19258 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d1925c shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d1925f or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11d19261:;
  /* 11d19261 pop ebx */
  EBX = (pop32());
  /* 11d19262 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19263 ret  */
  ESPCHK(0x11d19198u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11d19270 (129 bytes, 56 insns) */
void f_11d19270(void) {
  FTRACE(0x11d19270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19270 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d19274 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d19278 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11d1927e jne 0x11d192bc */
  if (!C.zf) goto L_11d192bc;
L_11d19280:;
  /* 11d19280 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11d19282 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d19284 jne 0x11d192b4 */
  if (!C.zf) goto L_11d192b4;
  /* 11d19286 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d19288 je 0x11d192b0 */
  if (C.zf) goto L_11d192b0;
  /* 11d1928a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1928d jne 0x11d192b4 */
  if (!C.zf) goto L_11d192b4;
  /* 11d1928f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d19291 je 0x11d192b0 */
  if (C.zf) goto L_11d192b0;
  /* 11d19293 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d19296 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d19299 jne 0x11d192b4 */
  if (!C.zf) goto L_11d192b4;
  /* 11d1929b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d1929d je 0x11d192b0 */
  if (C.zf) goto L_11d192b0;
  /* 11d1929f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d192a2 jne 0x11d192b4 */
  if (!C.zf) goto L_11d192b4;
  /* 11d192a4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d192a7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d192aa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d192ac jne 0x11d19280 */
  if (!C.zf) goto L_11d19280;
  /* 11d192ae mov edi, edi */
  EDI = (EDI);
L_11d192b0:;
  /* 11d192b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d192b2 ret  */
  ESPCHK(0x11d19270u, _esp0);
  ESP += 4; return;
  /* 11d192b3 nop  */
  /* nop */
L_11d192b4:;
  /* 11d192b4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d192b6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d192b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d192b9 ret  */
  ESPCHK(0x11d19270u, _esp0);
  ESP += 4; return;
  /* 11d192ba mov edi, edi */
  EDI = (EDI);
L_11d192bc:;
  /* 11d192bc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11d192c2 je 0x11d192d8 */
  if (C.zf) goto L_11d192d8;
  /* 11d192c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d192c6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d192c7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d192c9 jne 0x11d192b4 */
  if (!C.zf) goto L_11d192b4;
  /* 11d192cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d192cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d192ce je 0x11d192b0 */
  if (C.zf) goto L_11d192b0;
  /* 11d192d0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11d192d6 je 0x11d19280 */
  if (C.zf) goto L_11d19280;
L_11d192d8:;
  /* 11d192d8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11d192db add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d192de cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d192e0 jne 0x11d192b4 */
  if (!C.zf) goto L_11d192b4;
  /* 11d192e2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d192e4 je 0x11d192b0 */
  if (C.zf) goto L_11d192b0;
  /* 11d192e6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d192e9 jne 0x11d192b4 */
  if (!C.zf) goto L_11d192b4;
  /* 11d192eb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d192ed je 0x11d192b0 */
  if (C.zf) goto L_11d192b0;
  /* 11d192ef add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d192f2 jmp 0x11d19280 */
  goto L_11d19280;
}

/* FUN_10009300 @ 0x11d19300 (62 bytes, 35 insns) */
void f_11d19300(void) {
  FTRACE(0x11d19300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19300 push ebp */
  push32((uint32_t)(EBP));
  /* 11d19301 mov ebp, esp */
  EBP = (ESP);
  /* 11d19303 push esi */
  push32((uint32_t)(ESI));
  /* 11d19304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d19306 push eax */
  push32((uint32_t)(EAX));
  /* 11d19307 push eax */
  push32((uint32_t)(EAX));
  /* 11d19308 push eax */
  push32((uint32_t)(EAX));
  /* 11d19309 push eax */
  push32((uint32_t)(EAX));
  /* 11d1930a push eax */
  push32((uint32_t)(EAX));
  /* 11d1930b push eax */
  push32((uint32_t)(EAX));
  /* 11d1930c push eax */
  push32((uint32_t)(EAX));
  /* 11d1930d push eax */
  push32((uint32_t)(EAX));
  /* 11d1930e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d19311 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d19314:;
  /* 11d19314 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d19316 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d19318 je 0x11d19321 */
  if (C.zf) goto L_11d19321;
  /* 11d1931a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d1931b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11d1931b");
  /* 11d1931f jmp 0x11d19314 */
  goto L_11d19314;
L_11d19321:;
  /* 11d19321 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d19324 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11d19327 nop  */
  /* nop */
L_11d19328:;
  /* 11d19328 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d19329 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d1932b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d1932d je 0x11d19336 */
  if (C.zf) goto L_11d19336;
  /* 11d1932f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d19330 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11d19330");
  /* 11d19334 jae 0x11d19328 */
  if (!C.cf) goto L_11d19328;
L_11d19336:;
  /* 11d19336 mov eax, ecx */
  EAX = (ECX);
  /* 11d19338 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1933b pop esi */
  ESI = (pop32());
  /* 11d1933c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1933d ret  */
  ESPCHK(0x11d19300u, _esp0);
  ESP += 4; return;
}

/* FUN_10009340 @ 0x11d19340 (58 bytes, 32 insns) */
void f_11d19340(void) {
  FTRACE(0x11d19340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19340 push ebp */
  push32((uint32_t)(EBP));
  /* 11d19341 mov ebp, esp */
  EBP = (ESP);
  /* 11d19343 push esi */
  push32((uint32_t)(ESI));
  /* 11d19344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d19346 push eax */
  push32((uint32_t)(EAX));
  /* 11d19347 push eax */
  push32((uint32_t)(EAX));
  /* 11d19348 push eax */
  push32((uint32_t)(EAX));
  /* 11d19349 push eax */
  push32((uint32_t)(EAX));
  /* 11d1934a push eax */
  push32((uint32_t)(EAX));
  /* 11d1934b push eax */
  push32((uint32_t)(EAX));
  /* 11d1934c push eax */
  push32((uint32_t)(EAX));
  /* 11d1934d push eax */
  push32((uint32_t)(EAX));
  /* 11d1934e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d19351 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d19354:;
  /* 11d19354 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11d19356 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d19358 je 0x11d19361 */
  if (C.zf) goto L_11d19361;
  /* 11d1935a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d1935b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11d1935b");
  /* 11d1935f jmp 0x11d19354 */
  goto L_11d19354;
L_11d19361:;
  /* 11d19361 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11d19364:;
  /* 11d19364 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d19366 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d19368 je 0x11d19374 */
  if (C.zf) goto L_11d19374;
  /* 11d1936a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d1936b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11d1936b");
  /* 11d1936f jae 0x11d19364 */
  if (!C.cf) goto L_11d19364;
  /* 11d19371 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11d19374:;
  /* 11d19374 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19377 pop esi */
  ESI = (pop32());
  /* 11d19378 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19379 ret  */
  ESPCHK(0x11d19340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000937a @ 0x11d1937a (544 bytes, 177 insns) */
void f_11d1937a(void) {
  FTRACE(0x11d1937au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1937a push ebp */
  push32((uint32_t)(EBP));
  /* 11d1937b mov ebp, esp */
  EBP = (ESP);
  /* 11d1937d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d19380 push ebx */
  push32((uint32_t)(EBX));
  /* 11d19381 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d19384 push esi */
  push32((uint32_t)(ESI));
  /* 11d19385 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d19388 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 11d1938c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1938e push edi */
  push32((uint32_t)(EDI));
  /* 11d1938f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d19392 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d19395 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d19398 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d1939b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 11d1939f mov edi, ecx */
  EDI = (ECX);
  /* 11d193a1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 11d193a6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 11d193a8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d193aa and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d193ac and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 11d193b2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d193b6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 11d193b9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11d193bc jae 0x11d1957a */
  if (!C.cf) goto L_11d1957a;
  /* 11d193c2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d193c7 jae 0x11d1957a */
  if (!C.cf) goto L_11d1957a;
  /* 11d193cd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d193d2 ja 0x11d1957a */
  if ((!C.cf&&!C.zf)) goto L_11d1957a;
  /* 11d193d8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d193dd ja 0x11d193e3 */
  if ((!C.cf&&!C.zf)) goto L_11d193e3;
  /* 11d193df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d193e1 jmp 0x11d1941d */
  goto L_11d1941d;
L_11d193e3:;
  /* 11d193e3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 11d193e6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 11d193eb jne 0x11d19405 */
  if (!C.zf) goto L_11d19405;
  /* 11d193ed inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11d193f0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11d193f3 jne 0x11d19405 */
  if (!C.zf) goto L_11d19405;
  /* 11d193f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d193f7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d193fa jne 0x11d19407 */
  if (!C.zf) goto L_11d19407;
  /* 11d193fc cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d193fe jne 0x11d19407 */
  if (!C.zf) goto L_11d19407;
  /* 11d19400 jmp 0x11d19574 */
  goto L_11d19574;
L_11d19405:;
  /* 11d19405 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d19407:;
  /* 11d19407 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d1940a jne 0x11d1942a */
  if (!C.zf) goto L_11d1942a;
  /* 11d1940c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11d1940f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11d19412 jne 0x11d1942a */
  if (!C.zf) goto L_11d1942a;
  /* 11d19414 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19417 jne 0x11d1942a */
  if (!C.zf) goto L_11d1942a;
  /* 11d19419 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1941b jne 0x11d1942a */
  if (!C.zf) goto L_11d1942a;
L_11d1941d:;
  /* 11d1941d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11d19420 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11d19423 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d19425 jmp 0x11d19595 */
  goto L_11d19595;
L_11d1942a:;
  /* 11d1942a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d1942d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11d19430 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d19433 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_11d1943a:;
  /* 11d1943a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1943d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1943f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19443 jle 0x11d1948e */
  if ((C.zf||C.sf!=C.of)) goto L_11d1948e;
  /* 11d19445 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19447 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 11d1944a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d1944d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d19450 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d19453 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11d19456:;
  /* 11d19456 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d19459 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d1945c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11d1945f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 11d19462 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d19465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d19468 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1946b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1946c push eax */
  push32((uint32_t)(EAX));
  /* 11d1946d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 11d1946f call 0x11d184a5 */
  push32(0x11d19474u); f_11d184a5();
  /* 11d19474 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d19479 je 0x11d19481 */
  if (C.zf) goto L_11d19481;
  /* 11d1947b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1947e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_11d19481:;
  /* 11d19481 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d19485 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11d19489 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 11d1948c jne 0x11d19456 */
  if (!C.zf) goto L_11d19456;
L_11d1948e:;
  /* 11d1948e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d19492 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11d19495 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11d19498 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1949c jg 0x11d1943a */
  if ((!C.zf&&C.sf==C.of)) goto L_11d1943a;
  /* 11d1949e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d194a5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d194aa jle 0x11d194d1 */
  if ((C.zf||C.sf!=C.of)) goto L_11d194d1;
L_11d194ac:;
  /* 11d194ac test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 11d194b0 jne 0x11d194ca */
  if (!C.zf) goto L_11d194ca;
  /* 11d194b2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11d194b5 push eax */
  push32((uint32_t)(EAX));
  /* 11d194b6 call 0x11d18524 */
  push32(0x11d194bbu); f_11d18524();
  /* 11d194bb add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d194c2 pop ecx */
  ECX = (pop32());
  /* 11d194c3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d194c8 jg 0x11d194ac */
  if ((!C.zf&&C.sf==C.of)) goto L_11d194ac;
L_11d194ca:;
  /* 11d194ca cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d194cf jg 0x11d1950a */
  if ((!C.zf&&C.sf==C.of)) goto L_11d1950a;
L_11d194d1:;
  /* 11d194d1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d194d8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d194dd jge 0x11d1950a */
  if ((C.sf==C.of)) goto L_11d1950a;
  /* 11d194df movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 11d194e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d194e5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d194e8 mov ebx, eax */
  EBX = (EAX);
L_11d194ea:;
  /* 11d194ea test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 11d194ee je 0x11d194f3 */
  if (C.zf) goto L_11d194f3;
  /* 11d194f0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_11d194f3:;
  /* 11d194f3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11d194f6 push eax */
  push32((uint32_t)(EAX));
  /* 11d194f7 call 0x11d18552 */
  push32(0x11d194fcu); f_11d18552();
  /* 11d194fc dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d194fd pop ecx */
  ECX = (pop32());
  /* 11d194fe jne 0x11d194ea */
  if (!C.zf) goto L_11d194ea;
  /* 11d19500 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19504 je 0x11d1950a */
  if (C.zf) goto L_11d1950a;
  /* 11d19506 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_11d1950a:;
  /* 11d1950a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d19510 ja 0x11d19521 */
  if ((!C.cf&&!C.zf)) goto L_11d19521;
  /* 11d19512 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d19515 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1951a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1951f jne 0x11d19556 */
  if (!C.zf) goto L_11d19556;
L_11d19521:;
  /* 11d19521 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19525 jne 0x11d19553 */
  if (!C.zf) goto L_11d19553;
  /* 11d19527 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 11d1952b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1952f jne 0x11d1954e */
  if (!C.zf) goto L_11d1954e;
  /* 11d19531 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 11d19535 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d1953b jne 0x11d19548 */
  if (!C.zf) goto L_11d19548;
  /* 11d1953d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11d19540 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 11d19546 jmp 0x11d19556 */
  goto L_11d19556;
L_11d19548:;
  /* 11d19548 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 11d1954c jmp 0x11d19556 */
  goto L_11d19556;
L_11d1954e:;
  /* 11d1954e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 11d19551 jmp 0x11d19556 */
  goto L_11d19556;
L_11d19553:;
  /* 11d19553 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_11d19556:;
  /* 11d19556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d19559 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d1955d jae 0x11d1957a */
  if (!C.cf) goto L_11d1957a;
  /* 11d1955f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 11d19563 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11d19565 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 11d19568 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d1956b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 11d1956e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d19571 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_11d19574:;
  /* 11d19574 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 11d19578 jmp 0x11d19595 */
  goto L_11d19595;
L_11d1957a:;
  /* 11d1957a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 11d1957d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1957f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d19583 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 11d19589 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1958f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11d19592 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_11d19595:;
  /* 11d19595 pop edi */
  EDI = (pop32());
  /* 11d19596 pop esi */
  ESI = (pop32());
  /* 11d19597 pop ebx */
  EBX = (pop32());
  /* 11d19598 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19599 ret  */
  ESPCHK(0x11d1937au, _esp0);
  ESP += 4; return;
}

/* FUN_1000959a @ 0x11d1959a (124 bytes, 52 insns) */
void f_11d1959a(void) {
  FTRACE(0x11d1959au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1959a push ebp */
  push32((uint32_t)(EBP));
  /* 11d1959b mov ebp, esp */
  EBP = (ESP);
  /* 11d1959d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d195a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d195a1 mov ebx, 0x11d20fe0 */
  EBX = (0x11d20fe0u);
  /* 11d195a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d195a8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d195ab cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d195ae je 0x11d19613 */
  if (C.zf) goto L_11d19613;
  /* 11d195b0 jge 0x11d195c2 */
  if ((C.sf==C.of)) goto L_11d195c2;
  /* 11d195b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d195b5 mov ebx, 0x11d21140 */
  EBX = (0x11d21140u);
  /* 11d195ba neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d195bc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d195bf sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_11d195c2:;
  /* 11d195c2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d195c5 jne 0x11d195cd */
  if (!C.zf) goto L_11d195cd;
  /* 11d195c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d195ca mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_11d195cd:;
  /* 11d195cd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d195d0 je 0x11d19613 */
  if (C.zf) goto L_11d19613;
  /* 11d195d2 push esi */
  push32((uint32_t)(ESI));
  /* 11d195d3 push edi */
  push32((uint32_t)(EDI));
L_11d195d4:;
  /* 11d195d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d195d7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d195da sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 11d195de and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11d195e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d195e3 je 0x11d1960c */
  if (C.zf) goto L_11d1960c;
  /* 11d195e5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11d195e8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d195ee lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 11d195f1 jb 0x11d195ff */
  if (C.cf) goto L_11d195ff;
  /* 11d195f3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 11d195f6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d195f7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d195f8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11d195f9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 11d195fc lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_11d195ff:;
  /* 11d195ff push esi */
  push32((uint32_t)(ESI));
  /* 11d19600 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d19603 call 0x11d1937a */
  push32(0x11d19608u); f_11d1937a();
  /* 11d19608 pop ecx */
  ECX = (pop32());
  /* 11d19609 pop ecx */
  ECX = (pop32());
  /* 11d1960a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11d1960c:;
  /* 11d1960c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1960f jne 0x11d195d4 */
  if (!C.zf) goto L_11d195d4;
  /* 11d19611 pop edi */
  EDI = (pop32());
  /* 11d19612 pop esi */
  ESI = (pop32());
L_11d19613:;
  /* 11d19613 pop ebx */
  EBX = (pop32());
  /* 11d19614 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19615 ret  */
  ESPCHK(0x11d1959au, _esp0);
  ESP += 4; return;
}

/* FUN_10009616 @ 0x11d19616 (49 bytes, 20 insns) */
void f_11d19616(void) {
  FTRACE(0x11d19616u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19616 push esi */
  push32((uint32_t)(ESI));
  /* 11d19617 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d1961b push edi */
  push32((uint32_t)(EDI));
  /* 11d1961c or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11d1961f test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 11d19623 je 0x11d1962b */
  if (C.zf) goto L_11d1962b;
  /* 11d19625 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11d19629 jmp 0x11d19642 */
  goto L_11d19642;
L_11d1962b:;
  /* 11d1962b push esi */
  push32((uint32_t)(ESI));
  /* 11d1962c call 0x11d17451 */
  push32(0x11d19631u); f_11d17451();
  /* 11d19631 push esi */
  push32((uint32_t)(ESI));
  /* 11d19632 call 0x11d19647 */
  push32(0x11d19637u); f_11d19647();
  /* 11d19637 push esi */
  push32((uint32_t)(ESI));
  /* 11d19638 mov edi, eax */
  EDI = (EAX);
  /* 11d1963a call 0x11d174a3 */
  push32(0x11d1963fu); f_11d174a3();
  /* 11d1963f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d19642:;
  /* 11d19642 mov eax, edi */
  EAX = (EDI);
  /* 11d19644 pop edi */
  EDI = (pop32());
  /* 11d19645 pop esi */
  ESI = (pop32());
  /* 11d19646 ret  */
  ESPCHK(0x11d19616u, _esp0);
  ESP += 4; return;
}

/* FUN_10009647 @ 0x11d19647 (76 bytes, 30 insns) */
void f_11d19647(void) {
  FTRACE(0x11d19647u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19647 push esi */
  push32((uint32_t)(ESI));
  /* 11d19648 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d1964c push edi */
  push32((uint32_t)(EDI));
  /* 11d1964d or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11d19650 test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11d19654 je 0x11d1968a */
  if (C.zf) goto L_11d1968a;
  /* 11d19656 push esi */
  push32((uint32_t)(ESI));
  /* 11d19657 call 0x11d19020 */
  push32(0x11d1965cu); f_11d19020();
  /* 11d1965c push esi */
  push32((uint32_t)(ESI));
  /* 11d1965d mov edi, eax */
  EDI = (EAX);
  /* 11d1965f call 0x11d199e1 */
  push32(0x11d19664u); f_11d199e1();
  /* 11d19664 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11d19667 call 0x11d19901 */
  push32(0x11d1966cu); f_11d19901();
  /* 11d1966c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1966f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d19671 jge 0x11d19678 */
  if ((C.sf==C.of)) goto L_11d19678;
  /* 11d19673 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11d19676 jmp 0x11d1968a */
  goto L_11d1968a;
L_11d19678:;
  /* 11d19678 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11d1967b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1967d je 0x11d1968a */
  if (C.zf) goto L_11d1968a;
  /* 11d1967f push eax */
  push32((uint32_t)(EAX));
  /* 11d19680 call 0x11d16cd5 */
  push32(0x11d19685u); f_11d16cd5();
  /* 11d19685 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 11d19689 pop ecx */
  ECX = (pop32());
L_11d1968a:;
  /* 11d1968a and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11d1968e mov eax, edi */
  EAX = (EDI);
  /* 11d19690 pop edi */
  EDI = (pop32());
  /* 11d19691 pop esi */
  ESI = (pop32());
  /* 11d19692 ret  */
  ESPCHK(0x11d19647u, _esp0);
  ESP += 4; return;
}

/* FUN_10009693 @ 0x11d19693 (147 bytes, 52 insns) */
void f_11d19693(void) {
  FTRACE(0x11d19693u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19693 push ebx */
  push32((uint32_t)(EBX));
  /* 11d19694 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d19698 cmp ebx, dword ptr [0x11d38940] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11d38940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1969e push esi */
  push32((uint32_t)(ESI));
  /* 11d1969f push edi */
  push32((uint32_t)(EDI));
  /* 11d196a0 jae 0x11d19714 */
  if (!C.cf) goto L_11d19714;
  /* 11d196a2 mov eax, ebx */
  EAX = (EBX);
  /* 11d196a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d196a7 lea edi, [eax*4 + 0x11d38840] */
  EDI = ((uint32_t)(EAX*4 + 0x11d38840));
  /* 11d196ae mov eax, ebx */
  EAX = (EBX);
  /* 11d196b0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d196b3 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11d196b6 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d196b8 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11d196bb test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11d196c0 je 0x11d19714 */
  if (C.zf) goto L_11d19714;
  /* 11d196c2 push ebx */
  push32((uint32_t)(EBX));
  /* 11d196c3 call 0x11d18ef0 */
  push32(0x11d196c8u); f_11d18ef0();
  /* 11d196c8 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d196ca pop ecx */
  ECX = (pop32());
  /* 11d196cb test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11d196d0 je 0x11d196fb */
  if (C.zf) goto L_11d196fb;
  /* 11d196d2 push ebx */
  push32((uint32_t)(EBX));
  /* 11d196d3 call 0x11d18eae */
  push32(0x11d196d8u); f_11d18eae();
  /* 11d196d8 pop ecx */
  ECX = (pop32());
  /* 11d196d9 push eax */
  push32((uint32_t)(EAX));
  /* 11d196da call dword ptr [0x11d1c018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c018))), 0x11d196e0u);
  /* 11d196e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d196e2 jne 0x11d196ee */
  if (!C.zf) goto L_11d196ee;
  /* 11d196e4 call dword ptr [0x11d1c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b4))), 0x11d196eau);
  /* 11d196ea mov esi, eax */
  ESI = (EAX);
  /* 11d196ec jmp 0x11d196f0 */
  goto L_11d196f0;
L_11d196ee:;
  /* 11d196ee xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11d196f0:;
  /* 11d196f0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d196f2 je 0x11d19709 */
  if (C.zf) goto L_11d19709;
  /* 11d196f4 call 0x11d18e26 */
  push32(0x11d196f9u); f_11d18e26();
  /* 11d196f9 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11d196fb:;
  /* 11d196fb call 0x11d18e1d */
  push32(0x11d19700u); f_11d18e1d();
  /* 11d19700 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d19706 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11d19709:;
  /* 11d19709 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1970a call 0x11d18f4f */
  push32(0x11d1970fu); f_11d18f4f();
  /* 11d1970f pop ecx */
  ECX = (pop32());
  /* 11d19710 mov eax, esi */
  EAX = (ESI);
  /* 11d19712 jmp 0x11d19722 */
  goto L_11d19722;
L_11d19714:;
  /* 11d19714 call 0x11d18e1d */
  push32(0x11d19719u); f_11d18e1d();
  /* 11d19719 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d1971f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11d19722:;
  /* 11d19722 pop edi */
  EDI = (pop32());
  /* 11d19723 pop esi */
  ESI = (pop32());
  /* 11d19724 pop ebx */
  EBX = (pop32());
  /* 11d19725 ret  */
  ESPCHK(0x11d19693u, _esp0);
  ESP += 4; return;
}

/* FUN_10009730 @ 0x11d19730 (208 bytes, 85 insns) */
void f_11d19730(void) {
  FTRACE(0x11d19730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19730 push ebp */
  push32((uint32_t)(EBP));
  /* 11d19731 mov ebp, esp */
  EBP = (ESP);
  /* 11d19733 push edi */
  push32((uint32_t)(EDI));
  /* 11d19734 push esi */
  push32((uint32_t)(ESI));
  /* 11d19735 push ebx */
  push32((uint32_t)(EBX));
  /* 11d19736 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d19739 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1973c lea eax, [0x11d37404] */
  EAX = ((uint32_t)(0x11d37404));
  /* 11d19742 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19746 jne 0x11d19783 */
  if (!C.zf) goto L_11d19783;
  /* 11d19748 mov al, 0xff */
  AL = (0xffu);
  /* 11d1974a mov edi, edi */
  EDI = (EDI);
L_11d1974c:;
  /* 11d1974c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d1974e je 0x11d1977e */
  if (C.zf) goto L_11d1977e;
  /* 11d19750 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d19752 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d19753 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11d19755 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d19756 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d19758 je 0x11d1974c */
  if (C.zf) goto L_11d1974c;
  /* 11d1975a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d1975c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1975e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d19760 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d19763 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d19765 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d19767 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11d19769 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d1976b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1976d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d1976f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11d19772 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d19774 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11d19776 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d19778 je 0x11d1974c */
  if (C.zf) goto L_11d1974c;
  /* 11d1977a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d1977c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11d1977e:;
  /* 11d1977e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11d19781 jmp 0x11d197fb */
  goto L_11d197fb;
L_11d19783:;
  /* 11d19783 lock inc dword ptr [0x11d375b0] */
  x86_unimpl("lock inc @ 0x11d19783");
  /* 11d1978a cmp dword ptr [0x11d375ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d375ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19791 jg 0x11d19797 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d19797;
  /* 11d19793 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d19795 jmp 0x11d197ac */
  goto L_11d197ac;
L_11d19797:;
  /* 11d19797 lock dec dword ptr [0x11d375b0] */
  x86_unimpl("lock dec @ 0x11d19797");
  /* 11d1979e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d197a0 call 0x11d156f9 */
  push32(0x11d197a5u); f_11d156f9();
  /* 11d197a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11d197ac:;
  /* 11d197ac mov eax, 0xff */
  EAX = (0xffu);
  /* 11d197b1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d197b3 nop  */
  /* nop */
L_11d197b4:;
  /* 11d197b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d197b6 je 0x11d197df */
  if (C.zf) goto L_11d197df;
  /* 11d197b8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d197ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d197bb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d197bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d197be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d197c0 je 0x11d197b4 */
  if (C.zf) goto L_11d197b4;
  /* 11d197c2 push eax */
  push32((uint32_t)(EAX));
  /* 11d197c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11d197c4 call 0x11d14b0e */
  push32(0x11d197c9u); f_11d14b0e();
  /* 11d197c9 mov ebx, eax */
  EBX = (EAX);
  /* 11d197cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d197ce call 0x11d14b0e */
  push32(0x11d197d3u); f_11d14b0e();
  /* 11d197d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d197d6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d197d8 je 0x11d197b4 */
  if (C.zf) goto L_11d197b4;
  /* 11d197da sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d197dc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d197df:;
  /* 11d197df mov ebx, eax */
  EBX = (EAX);
  /* 11d197e1 pop eax */
  EAX = (pop32());
  /* 11d197e2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d197e4 jne 0x11d197ef */
  if (!C.zf) goto L_11d197ef;
  /* 11d197e6 lock dec dword ptr [0x11d375b0] */
  x86_unimpl("lock dec @ 0x11d197e6");
  /* 11d197ed jmp 0x11d197f9 */
  goto L_11d197f9;
L_11d197ef:;
  /* 11d197ef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d197f1 call 0x11d1575a */
  push32(0x11d197f6u); f_11d1575a();
  /* 11d197f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d197f9:;
  /* 11d197f9 mov eax, ebx */
  EAX = (EBX);
L_11d197fb:;
  /* 11d197fb pop ebx */
  EBX = (pop32());
  /* 11d197fc pop esi */
  ESI = (pop32());
  /* 11d197fd pop edi */
  EDI = (pop32());
  /* 11d197fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d197ff ret  */
  ESPCHK(0x11d19730u, _esp0);
  ESP += 4; return;
}

/* FUN_10009800 @ 0x11d19800 (257 bytes, 103 insns) */
void f_11d19800(void) {
  FTRACE(0x11d19800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19800 push ebp */
  push32((uint32_t)(EBP));
  /* 11d19801 mov ebp, esp */
  EBP = (ESP);
  /* 11d19803 push edi */
  push32((uint32_t)(EDI));
  /* 11d19804 push esi */
  push32((uint32_t)(ESI));
  /* 11d19805 push ebx */
  push32((uint32_t)(EBX));
  /* 11d19806 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d19809 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d1980b je 0x11d198fa */
  if (C.zf) goto L_11d198fa;
  /* 11d19811 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d19814 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d19817 lea eax, [0x11d37404] */
  EAX = ((uint32_t)(0x11d37404));
  /* 11d1981d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19821 jne 0x11d19871 */
  if (!C.zf) goto L_11d19871;
  /* 11d19823 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11d19825 mov bl, 0x5a */
  BL = (0x5au);
  /* 11d19827 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11d19829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11d1982c:;
  /* 11d1982c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11d1982e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11d19830 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11d19832 je 0x11d19855 */
  if (C.zf) goto L_11d19855;
  /* 11d19834 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d19836 je 0x11d19855 */
  if (C.zf) goto L_11d19855;
  /* 11d19838 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d19839 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d1983a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1983c jb 0x11d19844 */
  if (C.cf) goto L_11d19844;
  /* 11d1983e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d19840 ja 0x11d19844 */
  if ((!C.cf&&!C.zf)) goto L_11d19844;
  /* 11d19842 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11d19844:;
  /* 11d19844 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d19846 jb 0x11d1984e */
  if (C.cf) goto L_11d1984e;
  /* 11d19848 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1984a ja 0x11d1984e */
  if ((!C.cf&&!C.zf)) goto L_11d1984e;
  /* 11d1984c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11d1984e:;
  /* 11d1984e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d19850 jne 0x11d1985f */
  if (!C.zf) goto L_11d1985f;
  /* 11d19852 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d19853 jne 0x11d1982c */
  if (!C.zf) goto L_11d1982c;
L_11d19855:;
  /* 11d19855 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d19857 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d19859 je 0x11d198fa */
  if (C.zf) goto L_11d198fa;
L_11d1985f:;
  /* 11d1985f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11d19864 jb 0x11d198fa */
  if (C.cf) goto L_11d198fa;
  /* 11d1986a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d1986c jmp 0x11d198fa */
  goto L_11d198fa;
L_11d19871:;
  /* 11d19871 lock inc dword ptr [0x11d375b0] */
  x86_unimpl("lock inc @ 0x11d19871");
  /* 11d19878 cmp dword ptr [0x11d375ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d375ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1987f jg 0x11d19885 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d19885;
  /* 11d19881 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d19883 jmp 0x11d1989e */
  goto L_11d1989e;
L_11d19885:;
  /* 11d19885 lock dec dword ptr [0x11d375b0] */
  x86_unimpl("lock dec @ 0x11d19885");
  /* 11d1988c mov ebx, ecx */
  EBX = (ECX);
  /* 11d1988e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d19890 call 0x11d156f9 */
  push32(0x11d19895u); f_11d156f9();
  /* 11d19895 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11d1989c mov ecx, ebx */
  ECX = (EBX);
L_11d1989e:;
  /* 11d1989e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d198a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d198a2 mov edi, edi */
  EDI = (EDI);
L_11d198a4:;
  /* 11d198a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d198a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d198a8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11d198aa je 0x11d198cf */
  if (C.zf) goto L_11d198cf;
  /* 11d198ac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d198ae je 0x11d198cf */
  if (C.zf) goto L_11d198cf;
  /* 11d198b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d198b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d198b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11d198b3 push eax */
  push32((uint32_t)(EAX));
  /* 11d198b4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d198b5 call 0x11d14b0e */
  push32(0x11d198bau); f_11d14b0e();
  /* 11d198ba mov ebx, eax */
  EBX = (EAX);
  /* 11d198bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d198bf call 0x11d14b0e */
  push32(0x11d198c4u); f_11d14b0e();
  /* 11d198c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d198c7 pop ecx */
  ECX = (pop32());
  /* 11d198c8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d198ca jne 0x11d198d5 */
  if (!C.zf) goto L_11d198d5;
  /* 11d198cc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d198cd jne 0x11d198a4 */
  if (!C.zf) goto L_11d198a4;
L_11d198cf:;
  /* 11d198cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d198d1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d198d3 je 0x11d198de */
  if (C.zf) goto L_11d198de;
L_11d198d5:;
  /* 11d198d5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11d198da jb 0x11d198de */
  if (C.cf) goto L_11d198de;
  /* 11d198dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11d198de:;
  /* 11d198de pop eax */
  EAX = (pop32());
  /* 11d198df or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d198e1 jne 0x11d198ec */
  if (!C.zf) goto L_11d198ec;
  /* 11d198e3 lock dec dword ptr [0x11d375b0] */
  x86_unimpl("lock dec @ 0x11d198e3");
  /* 11d198ea jmp 0x11d198fa */
  goto L_11d198fa;
L_11d198ec:;
  /* 11d198ec mov ebx, ecx */
  EBX = (ECX);
  /* 11d198ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d198f0 call 0x11d1575a */
  push32(0x11d198f5u); f_11d1575a();
  /* 11d198f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d198f8 mov ecx, ebx */
  ECX = (EBX);
L_11d198fa:;
  /* 11d198fa mov eax, ecx */
  EAX = (ECX);
  /* 11d198fc pop ebx */
  EBX = (pop32());
  /* 11d198fd pop esi */
  ESI = (pop32());
  /* 11d198fe pop edi */
  EDI = (pop32());
  /* 11d198ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19900 ret  */
  ESPCHK(0x11d19800u, _esp0);
  ESP += 4; return;
}

/* FUN_10009901 @ 0x11d19901 (93 bytes, 32 insns) */
void f_11d19901(void) {
  FTRACE(0x11d19901u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19901 push esi */
  push32((uint32_t)(ESI));
  /* 11d19902 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d19906 cmp esi, dword ptr [0x11d38940] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d38940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1990c jae 0x11d19946 */
  if (!C.cf) goto L_11d19946;
  /* 11d1990e mov ecx, esi */
  ECX = (ESI);
  /* 11d19910 mov eax, esi */
  EAX = (ESI);
  /* 11d19912 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d19915 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d19918 mov ecx, dword ptr [ecx*4 + 0x11d38840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d1991f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11d19922 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11d19927 je 0x11d19946 */
  if (C.zf) goto L_11d19946;
  /* 11d19929 push edi */
  push32((uint32_t)(EDI));
  /* 11d1992a push esi */
  push32((uint32_t)(ESI));
  /* 11d1992b call 0x11d18ef0 */
  push32(0x11d19930u); f_11d18ef0();
  /* 11d19930 push esi */
  push32((uint32_t)(ESI));
  /* 11d19931 call 0x11d1995e */
  push32(0x11d19936u); f_11d1995e();
  /* 11d19936 push esi */
  push32((uint32_t)(ESI));
  /* 11d19937 mov edi, eax */
  EDI = (EAX);
  /* 11d19939 call 0x11d18f4f */
  push32(0x11d1993eu); f_11d18f4f();
  /* 11d1993e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19941 mov eax, edi */
  EAX = (EDI);
  /* 11d19943 pop edi */
  EDI = (pop32());
  /* 11d19944 pop esi */
  ESI = (pop32());
  /* 11d19945 ret  */
  ESPCHK(0x11d19901u, _esp0);
  ESP += 4; return;
L_11d19946:;
  /* 11d19946 call 0x11d18e1d */
  push32(0x11d1994bu); f_11d18e1d();
  /* 11d1994b mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d19951 call 0x11d18e26 */
  push32(0x11d19956u); f_11d18e26();
  /* 11d19956 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d19959 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1995c pop esi */
  ESI = (pop32());
  /* 11d1995d ret  */
  ESPCHK(0x11d19901u, _esp0);
  ESP += 4; return;
}

/* FUN_1000995e @ 0x11d1995e (131 bytes, 52 insns) */
void f_11d1995e(void) {
  FTRACE(0x11d1995eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1995e push esi */
  push32((uint32_t)(ESI));
  /* 11d1995f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d19963 push edi */
  push32((uint32_t)(EDI));
  /* 11d19964 push esi */
  push32((uint32_t)(ESI));
  /* 11d19965 call 0x11d18eae */
  push32(0x11d1996au); f_11d18eae();
  /* 11d1996a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1996d pop ecx */
  ECX = (pop32());
  /* 11d1996e je 0x11d199ac */
  if (C.zf) goto L_11d199ac;
  /* 11d19970 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19973 je 0x11d1997a */
  if (C.zf) goto L_11d1997a;
  /* 11d19975 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19978 jne 0x11d19990 */
  if (!C.zf) goto L_11d19990;
L_11d1997a:;
  /* 11d1997a push 2 */
  push32((uint32_t)(0x2u));
  /* 11d1997c call 0x11d18eae */
  push32(0x11d19981u); f_11d18eae();
  /* 11d19981 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19983 mov edi, eax */
  EDI = (EAX);
  /* 11d19985 call 0x11d18eae */
  push32(0x11d1998au); f_11d18eae();
  /* 11d1998a pop ecx */
  ECX = (pop32());
  /* 11d1998b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1998d pop ecx */
  ECX = (pop32());
  /* 11d1998e je 0x11d199ac */
  if (C.zf) goto L_11d199ac;
L_11d19990:;
  /* 11d19990 push esi */
  push32((uint32_t)(ESI));
  /* 11d19991 call 0x11d18eae */
  push32(0x11d19996u); f_11d18eae();
  /* 11d19996 pop ecx */
  ECX = (pop32());
  /* 11d19997 push eax */
  push32((uint32_t)(EAX));
  /* 11d19998 call dword ptr [0x11d1c01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c01c))), 0x11d1999eu);
  /* 11d1999e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d199a0 jne 0x11d199ac */
  if (!C.zf) goto L_11d199ac;
  /* 11d199a2 call dword ptr [0x11d1c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b4))), 0x11d199a8u);
  /* 11d199a8 mov edi, eax */
  EDI = (EAX);
  /* 11d199aa jmp 0x11d199ae */
  goto L_11d199ae;
L_11d199ac:;
  /* 11d199ac xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11d199ae:;
  /* 11d199ae push esi */
  push32((uint32_t)(ESI));
  /* 11d199af call 0x11d18e2f */
  push32(0x11d199b4u); f_11d18e2f();
  /* 11d199b4 mov eax, esi */
  EAX = (ESI);
  /* 11d199b6 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11d199b9 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d199bc pop ecx */
  ECX = (pop32());
  /* 11d199bd mov eax, dword ptr [eax*4 + 0x11d38840] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11d38840)));
  /* 11d199c4 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 11d199c7 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11d199cc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d199ce je 0x11d199dc */
  if (C.zf) goto L_11d199dc;
  /* 11d199d0 push edi */
  push32((uint32_t)(EDI));
  /* 11d199d1 call 0x11d18daa */
  push32(0x11d199d6u); f_11d18daa();
  /* 11d199d6 pop ecx */
  ECX = (pop32());
  /* 11d199d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d199da jmp 0x11d199de */
  goto L_11d199de;
L_11d199dc:;
  /* 11d199dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d199de:;
  /* 11d199de pop edi */
  EDI = (pop32());
  /* 11d199df pop esi */
  ESI = (pop32());
  /* 11d199e0 ret  */
  ESPCHK(0x11d1995eu, _esp0);
  ESP += 4; return;
}

/* FUN_100099e1 @ 0x11d199e1 (43 bytes, 17 insns) */
void f_11d199e1(void) {
  FTRACE(0x11d199e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d199e1 push esi */
  push32((uint32_t)(ESI));
  /* 11d199e2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d199e6 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11d199e9 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11d199eb je 0x11d19a0a */
  if (C.zf) goto L_11d19a0a;
  /* 11d199ed test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11d199ef je 0x11d19a0a */
  if (C.zf) goto L_11d19a0a;
  /* 11d199f1 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11d199f4 call 0x11d16cd5 */
  push32(0x11d199f9u); f_11d16cd5();
  /* 11d199f9 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 11d199ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d19a01 pop ecx */
  ECX = (pop32());
  /* 11d19a02 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d19a04 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11d19a07 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_11d19a0a:;
  /* 11d19a0a pop esi */
  ESI = (pop32());
  /* 11d19a0b ret  */
  ESPCHK(0x11d199e1u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a44 @ 0x11d19a44 (150 bytes, 54 insns) */
void f_11d19a44(void) {
  FTRACE(0x11d19a44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19a44 mov eax, 0x11d1b4b4 */
  EAX = (0x11d1b4b4u);
  /* 11d19a49 call 0x11d1a83c */
  push32(0x11d19a4eu); f_11d1a83c();
  /* 11d19a4e push ecx */
  push32((uint32_t)(ECX));
  /* 11d19a4f push ecx */
  push32((uint32_t)(ECX));
  /* 11d19a50 push ebx */
  push32((uint32_t)(EBX));
  /* 11d19a51 push esi */
  push32((uint32_t)(ESI));
  /* 11d19a52 push edi */
  push32((uint32_t)(EDI));
  /* 11d19a53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d19a55 cmp dword ptr [ebp + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19a58 mov esi, ecx */
  ESI = (ECX);
  /* 11d19a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19a5c mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11d19a5f mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11d19a62 pop edi */
  EDI = (pop32());
  /* 11d19a63 je 0x11d19a80 */
  if (C.zf) goto L_11d19a80;
  /* 11d19a65 lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 11d19a68 mov dword ptr [esi], 0x11d1c834 */
  w32((uint32_t)(ESI), (0x11d1c834u));
  /* 11d19a6e mov dword ptr [esi + 0xc], 0x11d1c82c */
  w32((uint32_t)(ESI + 0xc), (0x11d1c82cu));
  /* 11d19a75 call 0x11d19b18 */
  push32(0x11d19a7au); f_11d19b18();
  /* 11d19a7a mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11d19a7d mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11d19a80:;
  /* 11d19a80 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11d19a82 call 0x11d1a547 */
  push32(0x11d19a87u); f_11d1a547();
  /* 11d19a87 pop ecx */
  ECX = (pop32());
  /* 11d19a88 mov ecx, eax */
  ECX = (EAX);
  /* 11d19a8a mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d19a8d cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19a8f mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11d19a92 je 0x11d19a9b */
  if (C.zf) goto L_11d19a9b;
  /* 11d19a94 call 0x11d19cf8 */
  push32(0x11d19a99u); f_11d19cf8();
  /* 11d19a99 jmp 0x11d19a9d */
  goto L_11d19a9d;
L_11d19a9b:;
  /* 11d19a9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d19a9d:;
  /* 11d19a9d push ebx */
  push32((uint32_t)(EBX));
  /* 11d19a9e push eax */
  push32((uint32_t)(EAX));
  /* 11d19a9f mov ecx, esi */
  ECX = (ESI);
  /* 11d19aa1 mov byte ptr [ebp - 4], bl */
  w8((uint32_t)(EBP + -0x4), (BL));
  /* 11d19aa4 call 0x11d19c36 */
  push32(0x11d19aa9u); f_11d19c36();
  /* 11d19aa9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d19aab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d19aae mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d19ab1 mov dword ptr [eax + esi], 0x11d1c828 */
  w32((uint32_t)(EAX + ESI*1), (0x11d1c828u));
  /* 11d19ab8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d19aba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d19abd mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 11d19ac1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d19ac3 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d19ac6 mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 11d19aca mov eax, esi */
  EAX = (ESI);
  /* 11d19acc pop edi */
  EDI = (pop32());
  /* 11d19acd pop esi */
  ESI = (pop32());
  /* 11d19ace pop ebx */
  EBX = (pop32());
  /* 11d19acf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d19ad6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19ad7 ret 4 */
  ESPCHK(0x11d19a44u, _esp0);
  ESP += 8; return;
}

/* FUN_10009b05 @ 0x11d19b05 (19 bytes, 4 insns) */
void f_11d19b05(void) {
  FTRACE(0x11d19b05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19b05 mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 11d19b08 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d19b0b mov dword ptr [eax + ecx - 0x14], 0x11d1c828 */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x11d1c828u));
  /* 11d19b13 jmp 0x11d19cab */
  f_11d19cab(); return;
}

/* FUN_10009b18 @ 0x11d19b18 (94 bytes, 29 insns) */
void f_11d19b18(void) {
  FTRACE(0x11d19b18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19b18 push esi */
  push32((uint32_t)(ESI));
  /* 11d19b19 mov esi, ecx */
  ESI = (ECX);
  /* 11d19b1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d19b1d or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 11d19b21 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11d19b24 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11d19b27 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11d19b2a mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 11d19b2d mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 11d19b30 mov dword ptr [esi + 0x30], eax */
  w32((uint32_t)(ESI + 0x30), (EAX));
  /* 11d19b33 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 11d19b36 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11d19b39 mov dword ptr [esi], 0x11d1c84c */
  w32((uint32_t)(ESI), (0x11d1c84cu));
  /* 11d19b3f push eax */
  push32((uint32_t)(EAX));
  /* 11d19b40 mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 11d19b47 mov dword ptr [esi + 0x28], 6 */
  w32((uint32_t)(ESI + 0x28), (0x6u));
  /* 11d19b4e mov byte ptr [esi + 0x2c], 0x20 */
  w8((uint32_t)(ESI + 0x2c), (0x20u));
  /* 11d19b52 call 0x11d1a09e */
  push32(0x11d19b57u); f_11d1a09e();
  /* 11d19b57 mov eax, dword ptr [0x11d375a0] */
  EAX = (r32((uint32_t)(0x11d375a0)));
  /* 11d19b5c inc dword ptr [0x11d375a0] */
  { uint32_t _r=(r32((uint32_t)(0x11d375a0)))+1; w32((uint32_t)(0x11d375a0), (_r)); fl_inc(_r,32); }
  /* 11d19b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d19b64 pop ecx */
  ECX = (pop32());
  /* 11d19b65 jne 0x11d19b72 */
  if (!C.zf) goto L_11d19b72;
  /* 11d19b67 push 0x11d37568 */
  push32((uint32_t)(0x11d37568u));
  /* 11d19b6c call 0x11d1a09e */
  push32(0x11d19b71u); f_11d1a09e();
  /* 11d19b71 pop ecx */
  ECX = (pop32());
L_11d19b72:;
  /* 11d19b72 mov eax, esi */
  EAX = (ESI);
  /* 11d19b74 pop esi */
  ESI = (pop32());
  /* 11d19b75 ret  */
  ESPCHK(0x11d19b18u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b76 @ 0x11d19b76 (28 bytes, 11 insns) */
void f_11d19b76(void) {
  FTRACE(0x11d19b76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19b76 push esi */
  push32((uint32_t)(ESI));
  /* 11d19b77 mov esi, ecx */
  ESI = (ECX);
  /* 11d19b79 call 0x11d19b92 */
  push32(0x11d19b7eu); f_11d19b92();
  /* 11d19b7e test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11d19b83 je 0x11d19b8c */
  if (C.zf) goto L_11d19b8c;
  /* 11d19b85 push esi */
  push32((uint32_t)(ESI));
  /* 11d19b86 call 0x11d1a4f0 */
  push32(0x11d19b8bu); f_11d1a4f0();
  /* 11d19b8b pop ecx */
  ECX = (pop32());
L_11d19b8c:;
  /* 11d19b8c mov eax, esi */
  EAX = (ESI);
  /* 11d19b8e pop esi */
  ESI = (pop32());
  /* 11d19b8f ret 4 */
  ESPCHK(0x11d19b76u, _esp0);
  ESP += 8; return;
}

/* FUN_10009b92 @ 0x11d19b92 (74 bytes, 25 insns) */
void f_11d19b92(void) {
  FTRACE(0x11d19b92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19b92 push esi */
  push32((uint32_t)(ESI));
  /* 11d19b93 mov esi, ecx */
  ESI = (ECX);
  /* 11d19b95 or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 11d19b99 mov dword ptr [esi], 0x11d1c84c */
  w32((uint32_t)(ESI), (0x11d1c84cu));
  /* 11d19b9f dec dword ptr [0x11d375a0] */
  { uint32_t _r=(r32((uint32_t)(0x11d375a0)))-1; w32((uint32_t)(0x11d375a0), (_r)); fl_dec(_r,32); }
  /* 11d19ba5 jne 0x11d19bb2 */
  if (!C.zf) goto L_11d19bb2;
  /* 11d19ba7 push 0x11d37568 */
  push32((uint32_t)(0x11d37568u));
  /* 11d19bac call 0x11d1a0a9 */
  push32(0x11d19bb1u); f_11d1a0a9();
  /* 11d19bb1 pop ecx */
  ECX = (pop32());
L_11d19bb2:;
  /* 11d19bb2 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11d19bb5 push eax */
  push32((uint32_t)(EAX));
  /* 11d19bb6 call 0x11d1a0a9 */
  push32(0x11d19bbbu); f_11d1a0a9();
  /* 11d19bbb cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19bbf pop ecx */
  ECX = (pop32());
  /* 11d19bc0 je 0x11d19bcf */
  if (C.zf) goto L_11d19bcf;
  /* 11d19bc2 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d19bc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d19bc7 je 0x11d19bcf */
  if (C.zf) goto L_11d19bcf;
  /* 11d19bc9 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d19bcb push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19bcd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11d19bcfu);
L_11d19bcf:;
  /* 11d19bcf and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d19bd3 mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 11d19bda pop esi */
  ESI = (pop32());
  /* 11d19bdb ret  */
  ESPCHK(0x11d19b92u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bdc @ 0x11d19bdc (47 bytes, 19 insns) */
void f_11d19bdc(void) {
  FTRACE(0x11d19bdcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19bdc push esi */
  push32((uint32_t)(ESI));
  /* 11d19bdd mov esi, ecx */
  ESI = (ECX);
  /* 11d19bdf cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19be3 je 0x11d19bf2 */
  if (C.zf) goto L_11d19bf2;
  /* 11d19be5 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d19be8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d19bea je 0x11d19bf2 */
  if (C.zf) goto L_11d19bf2;
  /* 11d19bec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d19bee push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19bf0 call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11d19bf2u);
L_11d19bf2:;
  /* 11d19bf2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d19bf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d19bf8 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11d19bfb je 0x11d19c03 */
  if (C.zf) goto L_11d19c03;
  /* 11d19bfd and dword ptr [esi + 8], 0xfffffffb */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0xfffffffbu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11d19c01 jmp 0x11d19c07 */
  goto L_11d19c07;
L_11d19c03:;
  /* 11d19c03 or dword ptr [esi + 8], 4 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0x4u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
L_11d19c07:;
  /* 11d19c07 pop esi */
  ESI = (pop32());
  /* 11d19c08 ret 4 */
  ESPCHK(0x11d19bdcu, _esp0);
  ESP += 8; return;
}

/* FUN_10009c36 @ 0x11d19c36 (117 bytes, 41 insns) */
void f_11d19c36(void) {
  FTRACE(0x11d19c36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19c36 mov eax, 0x11d1b4e5 */
  EAX = (0x11d1b4e5u);
  /* 11d19c3b call 0x11d1a83c */
  push32(0x11d19c40u); f_11d1a83c();
  /* 11d19c40 push ecx */
  push32((uint32_t)(ECX));
  /* 11d19c41 push ecx */
  push32((uint32_t)(ECX));
  /* 11d19c42 push ebx */
  push32((uint32_t)(EBX));
  /* 11d19c43 push esi */
  push32((uint32_t)(ESI));
  /* 11d19c44 push edi */
  push32((uint32_t)(EDI));
  /* 11d19c45 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d19c47 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19c4a mov esi, ecx */
  ESI = (ECX);
  /* 11d19c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19c4e mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11d19c51 mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11d19c54 pop edi */
  EDI = (pop32());
  /* 11d19c55 je 0x11d19c72 */
  if (C.zf) goto L_11d19c72;
  /* 11d19c57 lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 11d19c5a mov dword ptr [esi], 0x11d1c860 */
  w32((uint32_t)(ESI), (0x11d1c860u));
  /* 11d19c60 mov dword ptr [esi + 0xc], 0x11d1c858 */
  w32((uint32_t)(ESI + 0xc), (0x11d1c858u));
  /* 11d19c67 call 0x11d19b18 */
  push32(0x11d19c6cu); f_11d19b18();
  /* 11d19c6c mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11d19c6f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11d19c72:;
  /* 11d19c72 push ebx */
  push32((uint32_t)(EBX));
  /* 11d19c73 mov ecx, esi */
  ECX = (ESI);
  /* 11d19c75 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d19c78 call 0x11d1a0f5 */
  push32(0x11d19c7du); f_11d1a0f5();
  /* 11d19c7d push ebx */
  push32((uint32_t)(EBX));
  /* 11d19c7e lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 11d19c81 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d19c84 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11d19c87 call 0x11d1a1ca */
  push32(0x11d19c8cu); f_11d1a1ca();
  /* 11d19c8c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d19c8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d19c91 pop edi */
  EDI = (pop32());
  /* 11d19c92 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d19c95 mov dword ptr [eax + esi], 0x11d1c854 */
  w32((uint32_t)(EAX + ESI*1), (0x11d1c854u));
  /* 11d19c9c mov eax, esi */
  EAX = (ESI);
  /* 11d19c9e pop esi */
  ESI = (pop32());
  /* 11d19c9f pop ebx */
  EBX = (pop32());
  /* 11d19ca0 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d19ca7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19ca8 ret 8 */
  ESPCHK(0x11d19c36u, _esp0);
  ESP += 12; return;
}

/* FUN_10009cab @ 0x11d19cab (77 bytes, 24 insns) */
void f_11d19cab(void) {
  FTRACE(0x11d19cabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19cab mov eax, 0x11d1b4fb */
  EAX = (0x11d1b4fbu);
  /* 11d19cb0 call 0x11d1a83c */
  push32(0x11d19cb5u); f_11d1a83c();
  /* 11d19cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d19cb6 mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 11d19cb9 push esi */
  push32((uint32_t)(ESI));
  /* 11d19cba mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11d19cbd mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d19cc0 mov dword ptr [eax + ecx - 0x14], 0x11d1c854 */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x11d1c854u));
  /* 11d19cc8 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d19ccc lea esi, [ecx - 8] */
  ESI = ((uint32_t)(ECX + -0x8));
  /* 11d19ccf add ecx, -0x14 */
  { uint32_t _a=(ECX),_b=(0xffffffecu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19cd2 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d19cd4 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d19cd6 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11d19cd8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19cdb call 0x11d1a22f */
  push32(0x11d19ce0u); f_11d1a22f();
  /* 11d19ce0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d19ce4 mov ecx, esi */
  ECX = (ESI);
  /* 11d19ce6 call 0x11d1a16b */
  push32(0x11d19cebu); f_11d1a16b();
  /* 11d19ceb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d19cee pop esi */
  ESI = (pop32());
  /* 11d19cef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d19cf6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19cf7 ret  */
  ESPCHK(0x11d19cabu, _esp0);
  ESP += 4; return;
}

/* FUN_10009cf8 @ 0x11d19cf8 (26 bytes, 9 insns) */
void f_11d19cf8(void) {
  FTRACE(0x11d19cf8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19cf8 push esi */
  push32((uint32_t)(ESI));
  /* 11d19cf9 mov esi, ecx */
  ESI = (ECX);
  /* 11d19cfb call 0x11d1a23e */
  push32(0x11d19d00u); f_11d1a23e();
  /* 11d19d00 and dword ptr [esi + 0x50], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x50)))&(0x0u); w32((uint32_t)(ESI + 0x50), (_r)); fl_logic(_r,32); }
  /* 11d19d04 or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 11d19d08 mov dword ptr [esi], 0x11d1c884 */
  w32((uint32_t)(ESI), (0x11d1c884u));
  /* 11d19d0e mov eax, esi */
  EAX = (ESI);
  /* 11d19d10 pop esi */
  ESI = (pop32());
  /* 11d19d11 ret  */
  ESPCHK(0x11d19cf8u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d12 @ 0x11d19d12 (28 bytes, 11 insns) */
void f_11d19d12(void) {
  FTRACE(0x11d19d12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19d12 push esi */
  push32((uint32_t)(ESI));
  /* 11d19d13 mov esi, ecx */
  ESI = (ECX);
  /* 11d19d15 call 0x11d19d2e */
  push32(0x11d19d1au); f_11d19d2e();
  /* 11d19d1a test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11d19d1f je 0x11d19d28 */
  if (C.zf) goto L_11d19d28;
  /* 11d19d21 push esi */
  push32((uint32_t)(ESI));
  /* 11d19d22 call 0x11d1a4f0 */
  push32(0x11d19d27u); f_11d1a4f0();
  /* 11d19d27 pop ecx */
  ECX = (pop32());
L_11d19d28:;
  /* 11d19d28 mov eax, esi */
  EAX = (ESI);
  /* 11d19d2a pop esi */
  ESI = (pop32());
  /* 11d19d2b ret 4 */
  ESPCHK(0x11d19d12u, _esp0);
  ESP += 8; return;
}

/* FUN_10009d2e @ 0x11d19d2e (87 bytes, 28 insns) */
void f_11d19d2e(void) {
  FTRACE(0x11d19d2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19d2e mov eax, 0x11d1b510 */
  EAX = (0x11d1b510u);
  /* 11d19d33 call 0x11d1a83c */
  push32(0x11d19d38u); f_11d1a83c();
  /* 11d19d38 push ecx */
  push32((uint32_t)(ECX));
  /* 11d19d39 push esi */
  push32((uint32_t)(ESI));
  /* 11d19d3a mov esi, ecx */
  ESI = (ECX);
  /* 11d19d3c mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 11d19d3f mov dword ptr [esi], 0x11d1c884 */
  w32((uint32_t)(ESI), (0x11d1c884u));
  /* 11d19d45 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d19d49 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19d4d jge 0x11d19d59 */
  if ((C.sf==C.of)) goto L_11d19d59;
  /* 11d19d4f lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11d19d52 push eax */
  push32((uint32_t)(EAX));
  /* 11d19d53 call 0x11d1a0b4 */
  push32(0x11d19d58u); f_11d1a0b4();
  /* 11d19d58 pop ecx */
  ECX = (pop32());
L_11d19d59:;
  /* 11d19d59 cmp dword ptr [esi + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19d5d mov ecx, esi */
  ECX = (ESI);
  /* 11d19d5f je 0x11d19d68 */
  if (C.zf) goto L_11d19d68;
  /* 11d19d61 call 0x11d19d85 */
  push32(0x11d19d66u); f_11d19d85();
  /* 11d19d66 jmp 0x11d19d6d */
  goto L_11d19d6d;
L_11d19d68:;
  /* 11d19d68 call 0x11d19f5f */
  push32(0x11d19d6du); f_11d19f5f();
L_11d19d6d:;
  /* 11d19d6d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d19d71 mov ecx, esi */
  ECX = (ESI);
  /* 11d19d73 call 0x11d1a299 */
  push32(0x11d19d78u); f_11d1a299();
  /* 11d19d78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d19d7b pop esi */
  ESI = (pop32());
  /* 11d19d7c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d19d83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19d84 ret  */
  ESPCHK(0x11d19d2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009d85 @ 0x11d19d85 (99 bytes, 41 insns) */
void f_11d19d85(void) {
  FTRACE(0x11d19d85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19d85 push esi */
  push32((uint32_t)(ESI));
  /* 11d19d86 mov esi, ecx */
  ESI = (ECX);
  /* 11d19d88 push edi */
  push32((uint32_t)(EDI));
  /* 11d19d89 cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19d8d je 0x11d19de3 */
  if (C.zf) goto L_11d19de3;
  /* 11d19d8f cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19d93 jge 0x11d19d9f */
  if ((C.sf==C.of)) goto L_11d19d9f;
  /* 11d19d95 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11d19d98 push eax */
  push32((uint32_t)(EAX));
  /* 11d19d99 call 0x11d1a0b4 */
  push32(0x11d19d9eu); f_11d1a0b4();
  /* 11d19d9e pop ecx */
  ECX = (pop32());
L_11d19d9f:;
  /* 11d19d9f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d19da1 mov ecx, esi */
  ECX = (ESI);
  /* 11d19da3 call dword ptr [eax + 4] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x4))), 0x11d19da6u);
  /* 11d19da6 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11d19da9 mov edi, eax */
  EDI = (EAX);
  /* 11d19dab call 0x11d19901 */
  push32(0x11d19db0u); f_11d19901();
  /* 11d19db0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19db3 pop ecx */
  ECX = (pop32());
  /* 11d19db4 je 0x11d19dd3 */
  if (C.zf) goto L_11d19dd3;
  /* 11d19db6 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19db9 je 0x11d19dd3 */
  if (C.zf) goto L_11d19dd3;
  /* 11d19dbb or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 11d19dbf cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19dc3 jge 0x11d19dcf */
  if ((C.sf==C.of)) goto L_11d19dcf;
  /* 11d19dc5 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11d19dc8 push eax */
  push32((uint32_t)(EAX));
  /* 11d19dc9 call 0x11d1a0bf */
  push32(0x11d19dceu); f_11d1a0bf();
  /* 11d19dce pop ecx */
  ECX = (pop32());
L_11d19dcf:;
  /* 11d19dcf mov eax, esi */
  EAX = (ESI);
  /* 11d19dd1 jmp 0x11d19de5 */
  goto L_11d19de5;
L_11d19dd3:;
  /* 11d19dd3 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19dd7 jge 0x11d19de3 */
  if ((C.sf==C.of)) goto L_11d19de3;
  /* 11d19dd9 add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19ddc push esi */
  push32((uint32_t)(ESI));
  /* 11d19ddd call 0x11d1a0bf */
  push32(0x11d19de2u); f_11d1a0bf();
  /* 11d19de2 pop ecx */
  ECX = (pop32());
L_11d19de3:;
  /* 11d19de3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d19de5:;
  /* 11d19de5 pop edi */
  EDI = (pop32());
  /* 11d19de6 pop esi */
  ESI = (pop32());
  /* 11d19de7 ret  */
  ESPCHK(0x11d19d85u, _esp0);
  ESP += 4; return;
}

/* FUN_10009de8 @ 0x11d19de8 (113 bytes, 44 insns) */
void f_11d19de8(void) {
  FTRACE(0x11d19de8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19de8 push esi */
  push32((uint32_t)(ESI));
  /* 11d19de9 push edi */
  push32((uint32_t)(EDI));
  /* 11d19dea mov esi, ecx */
  ESI = (ECX);
  /* 11d19dec call 0x11d1a401 */
  push32(0x11d19df1u); f_11d1a401();
  /* 11d19df1 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11d19df4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19df6 je 0x11d19e55 */
  if (C.zf) goto L_11d19e55;
  /* 11d19df8 mov ecx, esi */
  ECX = (ESI);
  /* 11d19dfa call 0x11d19f5f */
  push32(0x11d19dffu); f_11d19f5f();
  /* 11d19dff cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19e01 je 0x11d19e55 */
  if (C.zf) goto L_11d19e55;
  /* 11d19e03 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 11d19e06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d19e08 jne 0x11d19e19 */
  if (!C.zf) goto L_11d19e19;
  /* 11d19e0a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d19e0d mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 11d19e10 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 11d19e13 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11d19e16 mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
L_11d19e19:;
  /* 11d19e19 cmp dword ptr [esp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19e1d je 0x11d19e36 */
  if (C.zf) goto L_11d19e36;
  /* 11d19e1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d19e21 jne 0x11d19e3e */
  if (!C.zf) goto L_11d19e3e;
  /* 11d19e23 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11d19e26 cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19e29 jae 0x11d19e3e */
  if (!C.cf) goto L_11d19e3e;
  /* 11d19e2b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d19e2f mov ecx, esi */
  ECX = (ESI);
  /* 11d19e31 call 0x11d19e59 */
  push32(0x11d19e36u); f_11d19e59();
L_11d19e36:;
  /* 11d19e36 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19e38 pop eax */
  EAX = (pop32());
L_11d19e39:;
  /* 11d19e39 pop edi */
  EDI = (pop32());
  /* 11d19e3a pop esi */
  ESI = (pop32());
  /* 11d19e3b ret 4 */
  ESPCHK(0x11d19de8u, _esp0);
  ESP += 8; return;
L_11d19e3e:;
  /* 11d19e3e lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 11d19e42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19e44 push eax */
  push32((uint32_t)(EAX));
  /* 11d19e45 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11d19e48 call 0x11d171a5 */
  push32(0x11d19e4du); f_11d171a5();
  /* 11d19e4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19e50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19e53 je 0x11d19e36 */
  if (C.zf) goto L_11d19e36;
L_11d19e55:;
  /* 11d19e55 mov eax, edi */
  EAX = (EDI);
  /* 11d19e57 jmp 0x11d19e39 */
  goto L_11d19e39;
}

/* FUN_10009e59 @ 0x11d19e59 (34 bytes, 12 insns) */
void f_11d19e59(void) {
  FTRACE(0x11d19e59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19e59 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d19e5c cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19e5f jae 0x11d19e6f */
  if (!C.cf) goto L_11d19e6f;
  /* 11d19e61 mov dl, byte ptr [esp + 4] */
  DL = (r8((uint32_t)(ESP + 0x4)));
  /* 11d19e65 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d19e67 inc dword ptr [ecx + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x1c)))+1; w32((uint32_t)(ECX + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11d19e6a movzx eax, dl */
  EAX = ((uint32_t)(DL));
  /* 11d19e6d jmp 0x11d19e78 */
  goto L_11d19e78;
L_11d19e6f:;
  /* 11d19e6f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d19e71 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d19e75 call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x11d19e78u);
L_11d19e78:;
  /* 11d19e78 ret 4 */
  ESPCHK(0x11d19e59u, _esp0);
  ESP += 8; return;
}

/* FUN_10009e7b @ 0x11d19e7b (144 bytes, 60 insns) */
void f_11d19e7b(void) {
  FTRACE(0x11d19e7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19e7b push ebp */
  push32((uint32_t)(EBP));
  /* 11d19e7c mov ebp, esp */
  EBP = (ESP);
  /* 11d19e7e push ecx */
  push32((uint32_t)(ECX));
  /* 11d19e7f push esi */
  push32((uint32_t)(ESI));
  /* 11d19e80 push edi */
  push32((uint32_t)(EDI));
  /* 11d19e81 mov esi, ecx */
  ESI = (ECX);
  /* 11d19e83 call 0x11d19f0b */
  push32(0x11d19e88u); f_11d19f0b();
  /* 11d19e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d19e8a je 0x11d19e94 */
  if (C.zf) goto L_11d19e94;
  /* 11d19e8c mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11d19e8f movzx eax, byte ptr [eax] */
  EAX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11d19e92 jmp 0x11d19f07 */
  goto L_11d19f07;
L_11d19e94:;
  /* 11d19e94 mov ecx, esi */
  ECX = (ESI);
  /* 11d19e96 call 0x11d1a401 */
  push32(0x11d19e9bu); f_11d1a401();
  /* 11d19e9b or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11d19e9e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19ea0 je 0x11d19eef */
  if (C.zf) goto L_11d19eef;
  /* 11d19ea2 mov ecx, esi */
  ECX = (ESI);
  /* 11d19ea4 call 0x11d19f5f */
  push32(0x11d19ea9u); f_11d19f5f();
  /* 11d19ea9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19eab je 0x11d19eef */
  if (C.zf) goto L_11d19eef;
  /* 11d19ead cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19eb1 je 0x11d19ece */
  if (C.zf) goto L_11d19ece;
  /* 11d19eb3 lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 11d19eb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d19eb8 push eax */
  push32((uint32_t)(EAX));
  /* 11d19eb9 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11d19ebc call 0x11d1a85b */
  push32(0x11d19ec1u); f_11d1a85b();
  /* 11d19ec1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d19ec6 jle 0x11d19eef */
  if ((C.zf||C.sf!=C.of)) goto L_11d19eef;
  /* 11d19ec8 movzx eax, byte ptr [ebp - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x1))));
  /* 11d19ecc jmp 0x11d19f07 */
  goto L_11d19f07;
L_11d19ece:;
  /* 11d19ece mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11d19ed1 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d19ed4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19ed6 jbe 0x11d19edc */
  if ((C.cf||C.zf)) goto L_11d19edc;
  /* 11d19ed8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d19eda jmp 0x11d19ede */
  goto L_11d19ede;
L_11d19edc:;
  /* 11d19edc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d19ede:;
  /* 11d19ede push eax */
  push32((uint32_t)(EAX));
  /* 11d19edf push ecx */
  push32((uint32_t)(ECX));
  /* 11d19ee0 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11d19ee3 call 0x11d1a85b */
  push32(0x11d19ee8u); f_11d1a85b();
  /* 11d19ee8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19eeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d19eed jg 0x11d19ef3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d19ef3;
L_11d19eef:;
  /* 11d19eef mov eax, edi */
  EAX = (EDI);
  /* 11d19ef1 jmp 0x11d19f07 */
  goto L_11d19f07;
L_11d19ef3:;
  /* 11d19ef3 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d19ef6 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 11d19ef9 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19efb mov dword ptr [esi + 0x24], ecx */
  w32((uint32_t)(ESI + 0x24), (ECX));
  /* 11d19efe mov dword ptr [esi + 0x28], ecx */
  w32((uint32_t)(ESI + 0x28), (ECX));
  /* 11d19f01 mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 11d19f04 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
L_11d19f07:;
  /* 11d19f07 pop edi */
  EDI = (pop32());
  /* 11d19f08 pop esi */
  ESI = (pop32());
  /* 11d19f09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d19f0a ret  */
  ESPCHK(0x11d19e7bu, _esp0);
  ESP += 4; return;
}

/* FUN_10009f0b @ 0x11d19f0b (16 bytes, 8 insns) */
void f_11d19f0b(void) {
  FTRACE(0x11d19f0bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19f0b mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11d19f0e mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11d19f11 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19f13 jae 0x11d19f18 */
  if (!C.cf) goto L_11d19f18;
  /* 11d19f15 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d19f17 ret  */
  ESPCHK(0x11d19f0bu, _esp0);
  ESP += 4; return;
L_11d19f18:;
  /* 11d19f18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d19f1a ret  */
  ESPCHK(0x11d19f0bu, _esp0);
  ESP += 4; return;
}

