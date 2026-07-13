#include "recomp.h"

/* FUN_1000ee30 @ 0x1156ee30 (119 bytes, 34 insns) */
void f_1156ee30(void) {
  FTRACE(0x1156ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ee31 mov ebp, esp */
  EBP = (ESP);
  /* 1156ee33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ee36 push 0x1159231c */
  push32((uint32_t)(0x1159231cu));
  /* 1156ee3b call dword ptr [0x115943b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943b4))), 0x1156ee41u);
  /* 1156ee41 cmp dword ptr [0x1159230c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159230c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ee48 je 0x1156ee68 */
  if (C.zf) goto L_1156ee68;
  /* 1156ee4a push 0x1159231c */
  push32((uint32_t)(0x1159231cu));
  /* 1156ee4f call dword ptr [0x115943a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943a4))), 0x1156ee55u);
  /* 1156ee55 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1156ee57 call 0x11569940 */
  push32(0x1156ee5cu); f_11569940();
  /* 1156ee5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ee5f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1156ee66 jmp 0x1156ee6f */
  goto L_1156ee6f;
L_1156ee68:;
  /* 1156ee68 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1156ee6f:;
  /* 1156ee6f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1156ee73 push eax */
  push32((uint32_t)(EAX));
  /* 1156ee74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ee77 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ee78 call 0x1156eeb0 */
  push32(0x1156ee7du); f_1156eeb0();
  /* 1156ee7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ee80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156ee83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ee87 je 0x1156ee95 */
  if (C.zf) goto L_1156ee95;
  /* 1156ee89 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1156ee8b call 0x115699e0 */
  push32(0x1156ee90u); f_115699e0();
  /* 1156ee90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ee93 jmp 0x1156eea0 */
  goto L_1156eea0;
L_1156ee95:;
  /* 1156ee95 push 0x1159231c */
  push32((uint32_t)(0x1159231cu));
  /* 1156ee9a call dword ptr [0x115943a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943a4))), 0x1156eea0u);
L_1156eea0:;
  /* 1156eea0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156eea3 mov esp, ebp */
  ESP = (EBP);
  /* 1156eea5 pop ebp */
  EBP = (pop32());
  /* 1156eea6 ret  */
  ESPCHK(0x1156ee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eeb0 @ 0x1156eeb0 (160 bytes, 50 insns) */
void f_1156eeb0(void) {
  FTRACE(0x1156eeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156eeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156eeb1 mov ebp, esp */
  EBP = (ESP);
  /* 1156eeb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156eeb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156eeba jne 0x1156eec3 */
  if (!C.zf) goto L_1156eec3;
  /* 1156eebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156eebe jmp 0x1156ef4c */
  goto L_1156ef4c;
L_1156eec3:;
  /* 1156eec3 cmp dword ptr [0x11592190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156eeca jne 0x1156eefa */
  if (!C.zf) goto L_1156eefa;
  /* 1156eecc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156eecf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156eed4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156eed9 jle 0x1156eeeb */
  if ((C.zf||C.sf!=C.of)) goto L_1156eeeb;
  /* 1156eedb call 0x1156de10 */
  push32(0x1156eee0u); f_1156de10();
  /* 1156eee0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1156eee6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156eee9 jmp 0x1156ef4c */
  goto L_1156ef4c;
L_1156eeeb:;
  /* 1156eeeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156eeee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1156eef1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1156eef3 mov eax, 1 */
  EAX = (0x1u);
  /* 1156eef8 jmp 0x1156ef4c */
  goto L_1156ef4c;
L_1156eefa:;
  /* 1156eefa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1156ef01 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1156ef04 push eax */
  push32((uint32_t)(EAX));
  /* 1156ef05 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156ef07 mov ecx, dword ptr [0x1158fea4] */
  ECX = (r32((uint32_t)(0x1158fea4)));
  /* 1156ef0d push ecx */
  push32((uint32_t)(ECX));
  /* 1156ef0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ef11 push edx */
  push32((uint32_t)(EDX));
  /* 1156ef12 push 1 */
  push32((uint32_t)(0x1u));
  /* 1156ef14 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1156ef17 push eax */
  push32((uint32_t)(EAX));
  /* 1156ef18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1156ef1d mov ecx, dword ptr [0x115921a0] */
  ECX = (r32((uint32_t)(0x115921a0)));
  /* 1156ef23 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ef24 call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x1156ef2au);
  /* 1156ef2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156ef2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ef31 je 0x1156ef39 */
  if (C.zf) goto L_1156ef39;
  /* 1156ef33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ef37 je 0x1156ef49 */
  if (C.zf) goto L_1156ef49;
L_1156ef39:;
  /* 1156ef39 call 0x1156de10 */
  push32(0x1156ef3eu); f_1156de10();
  /* 1156ef3e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1156ef44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156ef47 jmp 0x1156ef4c */
  goto L_1156ef4c;
L_1156ef49:;
  /* 1156ef49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1156ef4c:;
  /* 1156ef4c mov esp, ebp */
  ESP = (EBP);
  /* 1156ef4e pop ebp */
  EBP = (pop32());
  /* 1156ef4f ret  */
  ESPCHK(0x1156eeb0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1156ef50 (32 bytes, 18 insns) */
void f_1156ef50(void) {
  FTRACE(0x1156ef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ef50 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ef51 mov ebp, esp */
  EBP = (ESP);
  /* 1156ef53 push ebx */
  push32((uint32_t)(EBX));
  /* 1156ef54 push esi */
  push32((uint32_t)(ESI));
  /* 1156ef55 push edi */
  push32((uint32_t)(EDI));
  /* 1156ef56 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ef57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156ef59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156ef5b push 0x1156ef68 */
  push32((uint32_t)(0x1156ef68u));
  /* 1156ef60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1156ef63 call 0x1157669c */
  push32(0x1156ef68u); f_1157669c();
  /* 1156ef68 pop ebp */
  EBP = (pop32());
  /* 1156ef69 pop edi */
  EDI = (pop32());
  /* 1156ef6a pop esi */
  ESI = (pop32());
  /* 1156ef6b pop ebx */
  EBX = (pop32());
  /* 1156ef6c mov esp, ebp */
  ESP = (EBP);
  /* 1156ef6e pop ebp */
  EBP = (pop32());
  /* 1156ef6f ret  */
  ESPCHK(0x1156ef50u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1156ef92 (104 bytes, 33 insns) */
void f_1156ef92(void) {
  FTRACE(0x1156ef92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ef92 push ebx */
  push32((uint32_t)(EBX));
  /* 1156ef93 push esi */
  push32((uint32_t)(ESI));
  /* 1156ef94 push edi */
  push32((uint32_t)(EDI));
  /* 1156ef95 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1156ef99 push eax */
  push32((uint32_t)(EAX));
  /* 1156ef9a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1156ef9c push 0x1156ef70 */
  push32((uint32_t)(0x1156ef70u));
  /* 1156efa1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1156efa8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1156efaf:;
  /* 1156efaf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1156efb3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156efb6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1156efb9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156efbc je 0x1156efec */
  if (C.zf) goto L_1156efec;
  /* 1156efbe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156efc2 je 0x1156efec */
  if (C.zf) goto L_1156efec;
  /* 1156efc4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1156efc7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1156efca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1156efce mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1156efd1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156efd6 jne 0x1156efea */
  if (!C.zf) goto L_1156efea;
  /* 1156efd8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1156efdd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1156efe1 call 0x1156f026 */
  push32(0x1156efe6u); f_1156f026();
  /* 1156efe6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1156efeau);
L_1156efea:;
  /* 1156efea jmp 0x1156efaf */
  goto L_1156efaf;
L_1156efec:;
  /* 1156efec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1156eff3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156eff6 pop edi */
  EDI = (pop32());
  /* 1156eff7 pop esi */
  ESI = (pop32());
  /* 1156eff8 pop ebx */
  EBX = (pop32());
  /* 1156eff9 ret  */
  ESPCHK(0x1156ef92u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f026 @ 0x1156f026 (24 bytes, 10 insns) */
void f_1156f026(void) {
  FTRACE(0x1156f026u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f026 push ebx */
  push32((uint32_t)(EBX));
  /* 1156f027 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f028 mov ebx, 0x115903b8 */
  EBX = (0x115903b8u);
  /* 1156f02d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f030 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1156f033 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1156f036 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1156f039 pop ecx */
  ECX = (pop32());
  /* 1156f03a pop ebx */
  EBX = (pop32());
  /* 1156f03b ret 4 */
  ESPCHK(0x1156f026u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f105 @ 0x1156f105 (27 bytes, 11 insns) */
void f_1156f105(void) {
  FTRACE(0x1156f105u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f105 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f106 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1156f10a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1156f10c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1156f10f push eax */
  push32((uint32_t)(EAX));
  /* 1156f110 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1156f113 push eax */
  push32((uint32_t)(EAX));
  /* 1156f114 call 0x1156ef92 */
  push32(0x1156f119u); f_1156ef92();
  /* 1156f119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f11c pop ebp */
  EBP = (pop32());
  /* 1156f11d ret 4 */
  ESPCHK(0x1156f105u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f120 @ 0x1156f120 (482 bytes, 138 insns) */
void f_1156f120(void) {
  FTRACE(0x1156f120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f120 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f121 mov ebp, esp */
  EBP = (ESP);
  /* 1156f123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156f126 push esi */
  push32((uint32_t)(ESI));
  /* 1156f127 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1156f12e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1156f130 call 0x11569940 */
  push32(0x1156f135u); f_11569940();
  /* 1156f135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f138 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1156f13f jmp 0x1156f14a */
  goto L_1156f14a;
L_1156f141:;
  /* 1156f141 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f144 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f147 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1156f14a:;
  /* 1156f14a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f14e jge 0x1156f2f0 */
  if ((C.sf==C.of)) goto L_1156f2f0;
  /* 1156f154 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f157 cmp dword ptr [ecx*4 + 0x11593960], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11593960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f15f je 0x1156f256 */
  if (C.zf) goto L_1156f256;
  /* 1156f165 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f168 mov eax, dword ptr [edx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11593960)));
  /* 1156f16f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156f172 jmp 0x1156f17d */
  goto L_1156f17d;
L_1156f174:;
  /* 1156f174 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f177 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f17a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1156f17d:;
  /* 1156f17d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f180 mov eax, dword ptr [edx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11593960)));
  /* 1156f187 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f18c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f18f jae 0x1156f246 */
  if (!C.cf) goto L_1156f246;
  /* 1156f195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f198 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156f19c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1156f19f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156f1a1 jne 0x1156f241 */
  if (!C.zf) goto L_1156f241;
  /* 1156f1a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f1aa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f1ae jne 0x1156f1e9 */
  if (!C.zf) goto L_1156f1e9;
  /* 1156f1b0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1156f1b2 call 0x11569940 */
  push32(0x1156f1b7u); f_11569940();
  /* 1156f1b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f1ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f1bd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f1c1 jne 0x1156f1df */
  if (!C.zf) goto L_1156f1df;
  /* 1156f1c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f1c6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f1c9 push edx */
  push32((uint32_t)(EDX));
  /* 1156f1ca call dword ptr [0x11594358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594358))), 0x1156f1d0u);
  /* 1156f1d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f1d3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156f1d6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f1d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f1dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1156f1df:;
  /* 1156f1df push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1156f1e1 call 0x115699e0 */
  push32(0x1156f1e6u); f_115699e0();
  /* 1156f1e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156f1e9:;
  /* 1156f1e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f1ec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f1ef push eax */
  push32((uint32_t)(EAX));
  /* 1156f1f0 call dword ptr [0x11594354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594354))), 0x1156f1f6u);
  /* 1156f1f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f1f9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156f1fd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1156f200 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156f202 je 0x1156f216 */
  if (C.zf) goto L_1156f216;
  /* 1156f204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f207 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f20a push eax */
  push32((uint32_t)(EAX));
  /* 1156f20b call dword ptr [0x11594350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594350))), 0x1156f211u);
  /* 1156f211 jmp 0x1156f174 */
  goto L_1156f174;
L_1156f216:;
  /* 1156f216 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f219 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1156f21f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f222 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156f225 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f22b sub eax, dword ptr [edx*4 + 0x11593960] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11593960))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156f232 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1156f233 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1156f238 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1156f23a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f23c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1156f23f jmp 0x1156f246 */
  goto L_1156f246;
L_1156f241:;
  /* 1156f241 jmp 0x1156f174 */
  goto L_1156f174;
L_1156f246:;
  /* 1156f246 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f24a je 0x1156f251 */
  if (C.zf) goto L_1156f251;
  /* 1156f24c jmp 0x1156f2f0 */
  goto L_1156f2f0;
L_1156f251:;
  /* 1156f251 jmp 0x1156f2eb */
  goto L_1156f2eb;
L_1156f256:;
  /* 1156f256 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1156f258 push 0x1158d0e4 */
  push32((uint32_t)(0x1158d0e4u));
  /* 1156f25d push 2 */
  push32((uint32_t)(0x2u));
  /* 1156f25f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1156f264 call 0x11565f40 */
  push32(0x1156f269u); f_11565f40();
  /* 1156f269 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f26c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156f26f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f273 je 0x1156f2e9 */
  if (C.zf) goto L_1156f2e9;
  /* 1156f275 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f278 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f27b mov dword ptr [eax*4 + 0x11593960], ecx */
  w32((uint32_t)(EAX*4 + 0x11593960), (ECX));
  /* 1156f282 mov edx, dword ptr [0x11593a9c] */
  EDX = (r32((uint32_t)(0x11593a9c)));
  /* 1156f288 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f28b mov dword ptr [0x11593a9c], edx */
  w32((uint32_t)(0x11593a9c), (EDX));
  /* 1156f291 jmp 0x1156f29c */
  goto L_1156f29c;
L_1156f293:;
  /* 1156f293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f296 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1156f29c:;
  /* 1156f29c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f29f mov edx, dword ptr [ecx*4 + 0x11593960] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156f2a6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f2ac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f2af jae 0x1156f2d4 */
  if (!C.cf) goto L_1156f2d4;
  /* 1156f2b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f2b4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1156f2b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f2bb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1156f2c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f2c4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1156f2c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f2cb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1156f2d2 jmp 0x1156f293 */
  goto L_1156f293;
L_1156f2d4:;
  /* 1156f2d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f2d7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156f2da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1156f2dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f2e0 push edx */
  push32((uint32_t)(EDX));
  /* 1156f2e1 call 0x1156f630 */
  push32(0x1156f2e6u); f_1156f630();
  /* 1156f2e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156f2e9:;
  /* 1156f2e9 jmp 0x1156f2f0 */
  goto L_1156f2f0;
L_1156f2eb:;
  /* 1156f2eb jmp 0x1156f141 */
  goto L_1156f141;
L_1156f2f0:;
  /* 1156f2f0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1156f2f2 call 0x115699e0 */
  push32(0x1156f2f7u); f_115699e0();
  /* 1156f2f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f2fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f2fd pop esi */
  ESI = (pop32());
  /* 1156f2fe mov esp, ebp */
  ESP = (EBP);
  /* 1156f300 pop ebp */
  EBP = (pop32());
  /* 1156f301 ret  */
  ESPCHK(0x1156f120u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1156f310 (183 bytes, 57 insns) */
void f_1156f310(void) {
  FTRACE(0x1156f310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f310 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f311 mov ebp, esp */
  EBP = (ESP);
  /* 1156f313 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f317 cmp eax, dword ptr [0x11593a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f31d jae 0x1156f3aa */
  if (!C.cf) goto L_1156f3aa;
  /* 1156f323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f326 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156f329 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f32c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156f32f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f332 mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156f339 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f33d jne 0x1156f3aa */
  if (!C.zf) goto L_1156f3aa;
  /* 1156f33f cmp dword ptr [0x11591f84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11591f84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f346 jne 0x1156f38a */
  if (!C.zf) goto L_1156f38a;
  /* 1156f348 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f34b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156f34e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f352 je 0x1156f362 */
  if (C.zf) goto L_1156f362;
  /* 1156f354 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f358 je 0x1156f370 */
  if (C.zf) goto L_1156f370;
  /* 1156f35a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f35e je 0x1156f37e */
  if (C.zf) goto L_1156f37e;
  /* 1156f360 jmp 0x1156f38a */
  goto L_1156f38a;
L_1156f362:;
  /* 1156f362 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156f365 push edx */
  push32((uint32_t)(EDX));
  /* 1156f366 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1156f368 call dword ptr [0x11594310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594310))), 0x1156f36eu);
  /* 1156f36e jmp 0x1156f38a */
  goto L_1156f38a;
L_1156f370:;
  /* 1156f370 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156f373 push eax */
  push32((uint32_t)(EAX));
  /* 1156f374 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1156f376 call dword ptr [0x11594310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594310))), 0x1156f37cu);
  /* 1156f37c jmp 0x1156f38a */
  goto L_1156f38a;
L_1156f37e:;
  /* 1156f37e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156f381 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f382 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1156f384 call dword ptr [0x11594310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594310))), 0x1156f38au);
L_1156f38a:;
  /* 1156f38a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f38d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1156f390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f393 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1156f396 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f399 mov ecx, dword ptr [edx*4 + 0x11593960] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11593960)));
  /* 1156f3a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156f3a3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1156f3a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156f3a8 jmp 0x1156f3c3 */
  goto L_1156f3c3;
L_1156f3aa:;
  /* 1156f3aa call 0x1156de10 */
  push32(0x1156f3afu); f_1156de10();
  /* 1156f3af mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1156f3b5 call 0x1156de20 */
  push32(0x1156f3bau); f_1156de20();
  /* 1156f3ba mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1156f3c0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1156f3c3:;
  /* 1156f3c3 mov esp, ebp */
  ESP = (EBP);
  /* 1156f3c5 pop ebp */
  EBP = (pop32());
  /* 1156f3c6 ret  */
  ESPCHK(0x1156f310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3d0 @ 0x1156f3d0 (216 bytes, 63 insns) */
void f_1156f3d0(void) {
  FTRACE(0x1156f3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1156f3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f3d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f3d7 cmp eax, dword ptr [0x11593a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f3dd jae 0x1156f48b */
  if (!C.cf) goto L_1156f48b;
  /* 1156f3e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f3e6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156f3e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f3ec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156f3ef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f3f2 mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156f3f9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1156f3fe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1156f401 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156f403 je 0x1156f48b */
  if (C.zf) goto L_1156f48b;
  /* 1156f409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f40c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1156f40f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f412 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1156f415 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f418 mov ecx, dword ptr [edx*4 + 0x11593960] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11593960)));
  /* 1156f41f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f423 je 0x1156f48b */
  if (C.zf) goto L_1156f48b;
  /* 1156f425 cmp dword ptr [0x11591f84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11591f84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f42c jne 0x1156f46a */
  if (!C.zf) goto L_1156f46a;
  /* 1156f42e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f431 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156f434 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f438 je 0x1156f448 */
  if (C.zf) goto L_1156f448;
  /* 1156f43a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f43e je 0x1156f454 */
  if (C.zf) goto L_1156f454;
  /* 1156f440 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f444 je 0x1156f460 */
  if (C.zf) goto L_1156f460;
  /* 1156f446 jmp 0x1156f46a */
  goto L_1156f46a;
L_1156f448:;
  /* 1156f448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156f44a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1156f44c call dword ptr [0x11594310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594310))), 0x1156f452u);
  /* 1156f452 jmp 0x1156f46a */
  goto L_1156f46a;
L_1156f454:;
  /* 1156f454 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156f456 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1156f458 call dword ptr [0x11594310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594310))), 0x1156f45eu);
  /* 1156f45e jmp 0x1156f46a */
  goto L_1156f46a;
L_1156f460:;
  /* 1156f460 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156f462 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1156f464 call dword ptr [0x11594310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594310))), 0x1156f46au);
L_1156f46a:;
  /* 1156f46a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f46d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156f470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f473 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1156f476 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f479 mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 1156f480 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1156f487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156f489 jmp 0x1156f4a4 */
  goto L_1156f4a4;
L_1156f48b:;
  /* 1156f48b call 0x1156de10 */
  push32(0x1156f490u); f_1156de10();
  /* 1156f490 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1156f496 call 0x1156de20 */
  push32(0x1156f49bu); f_1156de20();
  /* 1156f49b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1156f4a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1156f4a4:;
  /* 1156f4a4 mov esp, ebp */
  ESP = (EBP);
  /* 1156f4a6 pop ebp */
  EBP = (pop32());
  /* 1156f4a7 ret  */
  ESPCHK(0x1156f3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4b0 @ 0x1156f4b0 (102 bytes, 30 insns) */
void f_1156f4b0(void) {
  FTRACE(0x1156f4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1156f4b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f4b6 cmp eax, dword ptr [0x11593a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f4bc jae 0x1156f4fb */
  if (!C.cf) goto L_1156f4fb;
  /* 1156f4be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f4c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156f4c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f4c7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156f4ca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f4cd mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156f4d4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1156f4d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1156f4dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156f4de je 0x1156f4fb */
  if (C.zf) goto L_1156f4fb;
  /* 1156f4e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f4e3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1156f4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f4e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1156f4ec imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f4ef mov ecx, dword ptr [edx*4 + 0x11593960] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11593960)));
  /* 1156f4f6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1156f4f9 jmp 0x1156f514 */
  goto L_1156f514;
L_1156f4fb:;
  /* 1156f4fb call 0x1156de10 */
  push32(0x1156f500u); f_1156de10();
  /* 1156f500 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1156f506 call 0x1156de20 */
  push32(0x1156f50bu); f_1156de20();
  /* 1156f50b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1156f511 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1156f514:;
  /* 1156f514 pop ebp */
  EBP = (pop32());
  /* 1156f515 ret  */
  ESPCHK(0x1156f4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f520 @ 0x1156f520 (260 bytes, 83 insns) */
void f_1156f520(void) {
  FTRACE(0x1156f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f520 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f521 mov ebp, esp */
  EBP = (ESP);
  /* 1156f523 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156f526 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1156f52a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156f52d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1156f530 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156f532 je 0x1156f53d */
  if (C.zf) goto L_1156f53d;
  /* 1156f534 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1156f537 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1156f53a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1156f53d:;
  /* 1156f53d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156f540 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1156f546 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156f548 je 0x1156f552 */
  if (C.zf) goto L_1156f552;
  /* 1156f54a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1156f54d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1156f54f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1156f552:;
  /* 1156f552 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156f555 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1156f55b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156f55d je 0x1156f568 */
  if (C.zf) goto L_1156f568;
  /* 1156f55f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1156f562 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1156f565 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1156f568:;
  /* 1156f568 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f56b push eax */
  push32((uint32_t)(EAX));
  /* 1156f56c call dword ptr [0x115943e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943e8))), 0x1156f572u);
  /* 1156f572 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156f575 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f579 jne 0x1156f592 */
  if (!C.zf) goto L_1156f592;
  /* 1156f57b call dword ptr [0x115943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d4))), 0x1156f581u);
  /* 1156f581 push eax */
  push32((uint32_t)(EAX));
  /* 1156f582 call 0x1156dd70 */
  push32(0x1156f587u); f_1156dd70();
  /* 1156f587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f58a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156f58d jmp 0x1156f620 */
  goto L_1156f620;
L_1156f592:;
  /* 1156f592 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f596 jne 0x1156f5a3 */
  if (!C.zf) goto L_1156f5a3;
  /* 1156f598 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1156f59b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1156f59e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1156f5a1 jmp 0x1156f5b2 */
  goto L_1156f5b2;
L_1156f5a3:;
  /* 1156f5a3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f5a7 jne 0x1156f5b2 */
  if (!C.zf) goto L_1156f5b2;
  /* 1156f5a9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1156f5ac or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1156f5af mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1156f5b2:;
  /* 1156f5b2 call 0x1156f120 */
  push32(0x1156f5b7u); f_1156f120();
  /* 1156f5b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156f5ba cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f5be jne 0x1156f5db */
  if (!C.zf) goto L_1156f5db;
  /* 1156f5c0 call 0x1156de10 */
  push32(0x1156f5c5u); f_1156de10();
  /* 1156f5c5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1156f5cb call 0x1156de20 */
  push32(0x1156f5d0u); f_1156de20();
  /* 1156f5d0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1156f5d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156f5d9 jmp 0x1156f620 */
  goto L_1156f620;
L_1156f5db:;
  /* 1156f5db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f5de push eax */
  push32((uint32_t)(EAX));
  /* 1156f5df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f5e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f5e3 call 0x1156f310 */
  push32(0x1156f5e8u); f_1156f310();
  /* 1156f5e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f5eb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1156f5ee or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1156f5f1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1156f5f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f5f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156f5fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f5fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1156f600 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f603 mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 1156f60a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1156f60d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1156f611 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f614 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f615 call 0x1156f6c0 */
  push32(0x1156f61au); f_1156f6c0();
  /* 1156f61a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f61d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1156f620:;
  /* 1156f620 mov esp, ebp */
  ESP = (EBP);
  /* 1156f622 pop ebp */
  EBP = (pop32());
  /* 1156f623 ret  */
  ESPCHK(0x1156f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f630 @ 0x1156f630 (134 bytes, 44 insns) */
void f_1156f630(void) {
  FTRACE(0x1156f630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f630 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f631 mov ebp, esp */
  EBP = (ESP);
  /* 1156f633 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f637 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156f63a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f63d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1156f640 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f643 mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 1156f64a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f64c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156f64f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f652 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f656 jne 0x1156f691 */
  if (!C.zf) goto L_1156f691;
  /* 1156f658 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1156f65a call 0x11569940 */
  push32(0x1156f65fu); f_11569940();
  /* 1156f65f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f662 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f665 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f669 jne 0x1156f687 */
  if (!C.zf) goto L_1156f687;
  /* 1156f66b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f66e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f671 push edx */
  push32((uint32_t)(EDX));
  /* 1156f672 call dword ptr [0x11594358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594358))), 0x1156f678u);
  /* 1156f678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f67b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156f67e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f684 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1156f687:;
  /* 1156f687 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1156f689 call 0x115699e0 */
  push32(0x1156f68eu); f_115699e0();
  /* 1156f68e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156f691:;
  /* 1156f691 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f694 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156f697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f69a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1156f69d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f6a0 mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 1156f6a7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1156f6ab push eax */
  push32((uint32_t)(EAX));
  /* 1156f6ac call dword ptr [0x11594354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594354))), 0x1156f6b2u);
  /* 1156f6b2 mov esp, ebp */
  ESP = (EBP);
  /* 1156f6b4 pop ebp */
  EBP = (pop32());
  /* 1156f6b5 ret  */
  ESPCHK(0x1156f630u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1156f6c0 (38 bytes, 13 insns) */
void f_1156f6c0(void) {
  FTRACE(0x1156f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1156f6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f6c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156f6c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f6cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1156f6cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156f6d2 mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 1156f6d9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1156f6dd push eax */
  push32((uint32_t)(EAX));
  /* 1156f6de call dword ptr [0x11594350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594350))), 0x1156f6e4u);
  /* 1156f6e4 pop ebp */
  EBP = (pop32());
  /* 1156f6e5 ret  */
  ESPCHK(0x1156f6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6f0 @ 0x1156f6f0 (218 bytes, 63 insns) */
void f_1156f6f0(void) {
  FTRACE(0x1156f6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1156f6f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156f6f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156f6fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1156f6ff call 0x11569940 */
  push32(0x1156f704u); f_11569940();
  /* 1156f704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f707 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1156f70e jmp 0x1156f719 */
  goto L_1156f719;
L_1156f710:;
  /* 1156f710 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f713 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f716 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1156f719:;
  /* 1156f719 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f71c cmp ecx, dword ptr [0x11593660] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11593660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f722 jge 0x1156f7b9 */
  if ((C.sf==C.of)) goto L_1156f7b9;
  /* 1156f728 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f72b mov eax, dword ptr [0x11592320] */
  EAX = (r32((uint32_t)(0x11592320)));
  /* 1156f730 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f734 je 0x1156f7b4 */
  if (C.zf) goto L_1156f7b4;
  /* 1156f736 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f739 mov edx, dword ptr [0x11592320] */
  EDX = (r32((uint32_t)(0x11592320)));
  /* 1156f73f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1156f742 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156f745 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1156f74b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156f74d je 0x1156f771 */
  if (C.zf) goto L_1156f771;
  /* 1156f74f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f752 mov eax, dword ptr [0x11592320] */
  EAX = (r32((uint32_t)(0x11592320)));
  /* 1156f757 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1156f75a push ecx */
  push32((uint32_t)(ECX));
  /* 1156f75b call 0x115704e0 */
  push32(0x1156f760u); f_115704e0();
  /* 1156f760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f763 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f766 je 0x1156f771 */
  if (C.zf) goto L_1156f771;
  /* 1156f768 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f76b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f76e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1156f771:;
  /* 1156f771 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f775 jl 0x1156f7b4 */
  if ((C.sf!=C.of)) goto L_1156f7b4;
  /* 1156f777 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f77a mov ecx, dword ptr [0x11592320] */
  ECX = (r32((uint32_t)(0x11592320)));
  /* 1156f780 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1156f783 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f786 push edx */
  push32((uint32_t)(EDX));
  /* 1156f787 call dword ptr [0x115943bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943bc))), 0x1156f78du);
  /* 1156f78d push 2 */
  push32((uint32_t)(0x2u));
  /* 1156f78f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f792 mov ecx, dword ptr [0x11592320] */
  ECX = (r32((uint32_t)(0x11592320)));
  /* 1156f798 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1156f79b push edx */
  push32((uint32_t)(EDX));
  /* 1156f79c call 0x115669d0 */
  push32(0x1156f7a1u); f_115669d0();
  /* 1156f7a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f7a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f7a7 mov ecx, dword ptr [0x11592320] */
  ECX = (r32((uint32_t)(0x11592320)));
  /* 1156f7ad mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1156f7b4:;
  /* 1156f7b4 jmp 0x1156f710 */
  goto L_1156f710;
L_1156f7b9:;
  /* 1156f7b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156f7bb call 0x115699e0 */
  push32(0x1156f7c0u); f_115699e0();
  /* 1156f7c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f7c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f7c6 mov esp, ebp */
  ESP = (EBP);
  /* 1156f7c8 pop ebp */
  EBP = (pop32());
  /* 1156f7c9 ret  */
  ESPCHK(0x1156f6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x1156f7d0 (68 bytes, 26 insns) */
void f_1156f7d0(void) {
  FTRACE(0x1156f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1156f7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f7d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f7d8 jne 0x1156f7e6 */
  if (!C.zf) goto L_1156f7e6;
  /* 1156f7da push 0 */
  push32((uint32_t)(0x0u));
  /* 1156f7dc call 0x1156f940 */
  push32(0x1156f7e1u); f_1156f940();
  /* 1156f7e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f7e4 jmp 0x1156f810 */
  goto L_1156f810;
L_1156f7e6:;
  /* 1156f7e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f7e9 push eax */
  push32((uint32_t)(EAX));
  /* 1156f7ea call 0x1156ed50 */
  push32(0x1156f7efu); f_1156ed50();
  /* 1156f7ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f7f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f7f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f7f6 call 0x1156f820 */
  push32(0x1156f7fbu); f_1156f820();
  /* 1156f7fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f7fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156f801 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f804 push edx */
  push32((uint32_t)(EDX));
  /* 1156f805 call 0x1156edc0 */
  push32(0x1156f80au); f_1156edc0();
  /* 1156f80a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f80d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1156f810:;
  /* 1156f810 mov esp, ebp */
  ESP = (EBP);
  /* 1156f812 pop ebp */
  EBP = (pop32());
  /* 1156f813 ret  */
  ESPCHK(0x1156f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f820 @ 0x1156f820 (65 bytes, 26 insns) */
void f_1156f820(void) {
  FTRACE(0x1156f820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f820 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f821 mov ebp, esp */
  EBP = (ESP);
  /* 1156f823 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f826 push eax */
  push32((uint32_t)(EAX));
  /* 1156f827 call 0x1156f870 */
  push32(0x1156f82cu); f_1156f870();
  /* 1156f82c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f82f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156f831 je 0x1156f838 */
  if (C.zf) goto L_1156f838;
  /* 1156f833 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156f836 jmp 0x1156f85f */
  goto L_1156f85f;
L_1156f838:;
  /* 1156f838 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f83b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156f83e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1156f844 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156f846 je 0x1156f85d */
  if (C.zf) goto L_1156f85d;
  /* 1156f848 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f84b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156f84e push ecx */
  push32((uint32_t)(ECX));
  /* 1156f84f call 0x11570630 */
  push32(0x1156f854u); f_11570630();
  /* 1156f854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f857 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156f859 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156f85b jmp 0x1156f85f */
  goto L_1156f85f;
L_1156f85d:;
  /* 1156f85d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1156f85f:;
  /* 1156f85f pop ebp */
  EBP = (pop32());
  /* 1156f860 ret  */
  ESPCHK(0x1156f820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f870 @ 0x1156f870 (183 bytes, 62 insns) */
void f_1156f870(void) {
  FTRACE(0x1156f870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f870 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f871 mov ebp, esp */
  EBP = (ESP);
  /* 1156f873 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156f876 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156f87d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156f880 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156f883 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f886 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156f889 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1156f88c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f88f jne 0x1156f90b */
  if (!C.zf) goto L_1156f90b;
  /* 1156f891 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f894 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156f897 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1156f89d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156f89f je 0x1156f90b */
  if (C.zf) goto L_1156f90b;
  /* 1156f8a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f8a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f8a7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1156f8a9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156f8ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1156f8af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f8b3 jle 0x1156f90b */
  if ((C.zf||C.sf!=C.of)) goto L_1156f90b;
  /* 1156f8b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f8b8 push edx */
  push32((uint32_t)(EDX));
  /* 1156f8b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f8bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156f8bf push ecx */
  push32((uint32_t)(ECX));
  /* 1156f8c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f8c3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1156f8c6 push eax */
  push32((uint32_t)(EAX));
  /* 1156f8c7 call 0x1156e7e0 */
  push32(0x1156f8ccu); f_1156e7e0();
  /* 1156f8cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f8cf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f8d2 jne 0x1156f8f5 */
  if (!C.zf) goto L_1156f8f5;
  /* 1156f8d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f8d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156f8da and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1156f8e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156f8e2 je 0x1156f8f3 */
  if (C.zf) goto L_1156f8f3;
  /* 1156f8e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f8e7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156f8ea and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1156f8ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f8f0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1156f8f3:;
  /* 1156f8f3 jmp 0x1156f90b */
  goto L_1156f90b;
L_1156f8f5:;
  /* 1156f8f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f8f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156f8fb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1156f8fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f901 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1156f904 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1156f90b:;
  /* 1156f90b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f90e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f911 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156f914 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1156f916 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156f919 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1156f920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156f923 mov esp, ebp */
  ESP = (EBP);
  /* 1156f925 pop ebp */
  EBP = (pop32());
  /* 1156f926 ret  */
  ESPCHK(0x1156f870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f930 @ 0x1156f930 (15 bytes, 7 insns) */
void f_1156f930(void) {
  FTRACE(0x1156f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f930 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f931 mov ebp, esp */
  EBP = (ESP);
  /* 1156f933 push 1 */
  push32((uint32_t)(0x1u));
  /* 1156f935 call 0x1156f940 */
  push32(0x1156f93au); f_1156f940();
  /* 1156f93a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f93d pop ebp */
  EBP = (pop32());
  /* 1156f93e ret  */
  ESPCHK(0x1156f930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f940 @ 0x1156f940 (319 bytes, 94 insns) */
void f_1156f940(void) {
  FTRACE(0x1156f940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156f940 push ebp */
  push32((uint32_t)(EBP));
  /* 1156f941 mov ebp, esp */
  EBP = (ESP);
  /* 1156f943 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156f946 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156f94d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1156f954 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156f956 call 0x11569940 */
  push32(0x1156f95bu); f_11569940();
  /* 1156f95b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f95e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1156f965 jmp 0x1156f970 */
  goto L_1156f970;
L_1156f967:;
  /* 1156f967 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f96a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f96d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1156f970:;
  /* 1156f970 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f973 cmp ecx, dword ptr [0x11593660] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11593660))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f979 jge 0x1156fa63 */
  if ((C.sf==C.of)) goto L_1156fa63;
  /* 1156f97f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f982 mov eax, dword ptr [0x11592320] */
  EAX = (r32((uint32_t)(0x11592320)));
  /* 1156f987 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f98b je 0x1156fa5e */
  if (C.zf) goto L_1156fa5e;
  /* 1156f991 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f994 mov edx, dword ptr [0x11592320] */
  EDX = (r32((uint32_t)(0x11592320)));
  /* 1156f99a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1156f99d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156f9a0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1156f9a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156f9a8 je 0x1156fa5e */
  if (C.zf) goto L_1156fa5e;
  /* 1156f9ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f9b1 mov eax, dword ptr [0x11592320] */
  EAX = (r32((uint32_t)(0x11592320)));
  /* 1156f9b6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1156f9b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1156f9ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f9bd push edx */
  push32((uint32_t)(EDX));
  /* 1156f9be call 0x1156ed90 */
  push32(0x1156f9c3u); f_1156ed90();
  /* 1156f9c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f9c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f9c9 mov ecx, dword ptr [0x11592320] */
  ECX = (r32((uint32_t)(0x11592320)));
  /* 1156f9cf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1156f9d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1156f9d5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1156f9da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156f9dc je 0x1156fa45 */
  if (C.zf) goto L_1156fa45;
  /* 1156f9de cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f9e2 jne 0x1156fa09 */
  if (!C.zf) goto L_1156fa09;
  /* 1156f9e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156f9e7 mov edx, dword ptr [0x11592320] */
  EDX = (r32((uint32_t)(0x11592320)));
  /* 1156f9ed mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1156f9f0 push eax */
  push32((uint32_t)(EAX));
  /* 1156f9f1 call 0x1156f820 */
  push32(0x1156f9f6u); f_1156f820();
  /* 1156f9f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156f9f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156f9fc je 0x1156fa07 */
  if (C.zf) goto L_1156fa07;
  /* 1156f9fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156fa01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fa04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1156fa07:;
  /* 1156fa07 jmp 0x1156fa45 */
  goto L_1156fa45;
L_1156fa09:;
  /* 1156fa09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fa0d jne 0x1156fa45 */
  if (!C.zf) goto L_1156fa45;
  /* 1156fa0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156fa12 mov eax, dword ptr [0x11592320] */
  EAX = (r32((uint32_t)(0x11592320)));
  /* 1156fa17 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1156fa1a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156fa1d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1156fa20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156fa22 je 0x1156fa45 */
  if (C.zf) goto L_1156fa45;
  /* 1156fa24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156fa27 mov ecx, dword ptr [0x11592320] */
  ECX = (r32((uint32_t)(0x11592320)));
  /* 1156fa2d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1156fa30 push edx */
  push32((uint32_t)(EDX));
  /* 1156fa31 call 0x1156f820 */
  push32(0x1156fa36u); f_1156f820();
  /* 1156fa36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fa39 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fa3c jne 0x1156fa45 */
  if (!C.zf) goto L_1156fa45;
  /* 1156fa3e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1156fa45:;
  /* 1156fa45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156fa48 mov ecx, dword ptr [0x11592320] */
  ECX = (r32((uint32_t)(0x11592320)));
  /* 1156fa4e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1156fa51 push edx */
  push32((uint32_t)(EDX));
  /* 1156fa52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156fa55 push eax */
  push32((uint32_t)(EAX));
  /* 1156fa56 call 0x1156ee00 */
  push32(0x1156fa5bu); f_1156ee00();
  /* 1156fa5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156fa5e:;
  /* 1156fa5e jmp 0x1156f967 */
  goto L_1156f967;
L_1156fa63:;
  /* 1156fa63 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156fa65 call 0x115699e0 */
  push32(0x1156fa6au); f_115699e0();
  /* 1156fa6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fa6d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fa71 jne 0x1156fa78 */
  if (!C.zf) goto L_1156fa78;
  /* 1156fa73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156fa76 jmp 0x1156fa7b */
  goto L_1156fa7b;
L_1156fa78:;
  /* 1156fa78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1156fa7b:;
  /* 1156fa7b mov esp, ebp */
  ESP = (EBP);
  /* 1156fa7d pop ebp */
  EBP = (pop32());
  /* 1156fa7e ret  */
  ESPCHK(0x1156f940u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1156fa80 (15 bytes, 7 insns) */
void f_1156fa80(void) {
  FTRACE(0x1156fa80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156fa80 push ebp */
  push32((uint32_t)(EBP));
  /* 1156fa81 mov ebp, esp */
  EBP = (ESP);
  /* 1156fa83 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156fa85 call 0x11564eb0 */
  push32(0x1156fa8au); f_11564eb0();
  /* 1156fa8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fa8d pop ebp */
  EBP = (pop32());
  /* 1156fa8e ret  */
  ESPCHK(0x1156fa80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa90 @ 0x1156fa90 (1007 bytes, 269 insns) */
void f_1156fa90(void) {
  FTRACE(0x1156fa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156fa90 push ebp */
  push32((uint32_t)(EBP));
  /* 1156fa91 mov ebp, esp */
  EBP = (ESP);
  /* 1156fa93 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156fa99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fa9d jl 0x1156faa5 */
  if ((C.sf!=C.of)) goto L_1156faa5;
  /* 1156fa9f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156faa3 jle 0x1156faac */
  if ((C.zf||C.sf!=C.of)) goto L_1156faac;
L_1156faa5:;
  /* 1156faa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156faa7 jmp 0x1156fe7b */
  goto L_1156fe7b;
L_1156faac:;
  /* 1156faac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1156faae call 0x11569940 */
  push32(0x1156fab3u); f_11569940();
  /* 1156fab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fab6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1156fabd mov eax, dword ptr [0x1159230c] */
  EAX = (r32((uint32_t)(0x1159230c)));
  /* 1156fac2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fac5 mov dword ptr [0x1159230c], eax */
  w32((uint32_t)(0x1159230c), (EAX));
L_1156faca:;
  /* 1156faca cmp dword ptr [0x1159231c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159231c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fad1 je 0x1156fadd */
  if (C.zf) goto L_1156fadd;
  /* 1156fad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1156fad5 call dword ptr [0x1159430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159430c))), 0x1156fadbu);
  /* 1156fadb jmp 0x1156faca */
  goto L_1156faca;
L_1156fadd:;
  /* 1156fadd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fae1 je 0x1156fb21 */
  if (C.zf) goto L_1156fb21;
  /* 1156fae3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fae7 je 0x1156fb01 */
  if (C.zf) goto L_1156fb01;
  /* 1156fae9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156faec push ecx */
  push32((uint32_t)(ECX));
  /* 1156faed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156faf0 push edx */
  push32((uint32_t)(EDX));
  /* 1156faf1 call 0x1156fe80 */
  push32(0x1156faf6u); f_1156fe80();
  /* 1156faf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156faf9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1156faff jmp 0x1156fb13 */
  goto L_1156fb13;
L_1156fb01:;
  /* 1156fb01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156fb04 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156fb07 mov ecx, dword ptr [eax + 0x115904dc] */
  ECX = (r32((uint32_t)(EAX + 0x115904dc)));
  /* 1156fb0d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1156fb13:;
  /* 1156fb13 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1156fb19 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1156fb1c jmp 0x1156fe5b */
  goto L_1156fe5b;
L_1156fb21:;
  /* 1156fb21 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1156fb28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1156fb2f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fb33 je 0x1156fe53 */
  if (C.zf) goto L_1156fe53;
  /* 1156fb39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156fb3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1156fb3f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fb42 jne 0x1156fd64 */
  if (!C.zf) goto L_1156fd64;
  /* 1156fb48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156fb4b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1156fb4f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fb52 jne 0x1156fd64 */
  if (!C.zf) goto L_1156fd64;
  /* 1156fb58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156fb5b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1156fb5f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fb62 jne 0x1156fd64 */
  if (!C.zf) goto L_1156fd64;
  /* 1156fb68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156fb6b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1156fb71:;
  /* 1156fb71 push 0x1158d134 */
  push32((uint32_t)(0x1158d134u));
  /* 1156fb76 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1156fb7c push ecx */
  push32((uint32_t)(ECX));
  /* 1156fb7d call 0x11571ce0 */
  push32(0x1156fb82u); f_11571ce0();
  /* 1156fb82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fb85 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1156fb8b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fb92 je 0x1156fbbd */
  if (C.zf) goto L_1156fbbd;
  /* 1156fb94 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1156fb9a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156fba0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1156fba6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fbad je 0x1156fbbd */
  if (C.zf) goto L_1156fbbd;
  /* 1156fbaf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1156fbb5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1156fbb8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fbbb jne 0x1156fbe3 */
  if (!C.zf) goto L_1156fbe3;
L_1156fbbd:;
  /* 1156fbbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fbc1 je 0x1156fbdc */
  if (C.zf) goto L_1156fbdc;
  /* 1156fbc3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1156fbc5 call 0x115699e0 */
  push32(0x1156fbcau); f_115699e0();
  /* 1156fbca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fbcd mov edx, dword ptr [0x1159230c] */
  EDX = (r32((uint32_t)(0x1159230c)));
  /* 1156fbd3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156fbd6 mov dword ptr [0x1159230c], edx */
  w32((uint32_t)(0x1159230c), (EDX));
L_1156fbdc:;
  /* 1156fbdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156fbde jmp 0x1156fe7b */
  goto L_1156fe7b;
L_1156fbe3:;
  /* 1156fbe3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1156fbea jmp 0x1156fbf5 */
  goto L_1156fbf5;
L_1156fbec:;
  /* 1156fbec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156fbef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fbf2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1156fbf5:;
  /* 1156fbf5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fbf9 jg 0x1156fc43 */
  if ((!C.zf&&C.sf==C.of)) goto L_1156fc43;
  /* 1156fbfb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1156fc01 push ecx */
  push32((uint32_t)(ECX));
  /* 1156fc02 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1156fc08 push edx */
  push32((uint32_t)(EDX));
  /* 1156fc09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156fc0c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156fc0f mov ecx, dword ptr [eax + 0x115904d8] */
  ECX = (r32((uint32_t)(EAX + 0x115904d8)));
  /* 1156fc15 push ecx */
  push32((uint32_t)(ECX));
  /* 1156fc16 call 0x11571ca0 */
  push32(0x1156fc1bu); f_11571ca0();
  /* 1156fc1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fc1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156fc20 jne 0x1156fc41 */
  if (!C.zf) goto L_1156fc41;
  /* 1156fc22 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156fc25 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156fc28 mov eax, dword ptr [edx + 0x115904d8] */
  EAX = (r32((uint32_t)(EDX + 0x115904d8)));
  /* 1156fc2e push eax */
  push32((uint32_t)(EAX));
  /* 1156fc2f call 0x11568d70 */
  push32(0x1156fc34u); f_11568d70();
  /* 1156fc34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fc37 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fc3d jne 0x1156fc41 */
  if (!C.zf) goto L_1156fc41;
  /* 1156fc3f jmp 0x1156fc43 */
  goto L_1156fc43;
L_1156fc41:;
  /* 1156fc41 jmp 0x1156fbec */
  goto L_1156fbec;
L_1156fc43:;
  /* 1156fc43 push 0x1158d130 */
  push32((uint32_t)(0x1158d130u));
  /* 1156fc48 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1156fc4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fc51 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1156fc57 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1156fc5d push edx */
  push32((uint32_t)(EDX));
  /* 1156fc5e call 0x11571c60 */
  push32(0x1156fc63u); f_11571c60();
  /* 1156fc63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fc66 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1156fc6c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fc73 jne 0x1156fca9 */
  if (!C.zf) goto L_1156fca9;
  /* 1156fc75 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1156fc7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1156fc7e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fc81 je 0x1156fca9 */
  if (C.zf) goto L_1156fca9;
  /* 1156fc83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fc87 je 0x1156fca2 */
  if (C.zf) goto L_1156fca2;
  /* 1156fc89 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1156fc8b call 0x115699e0 */
  push32(0x1156fc90u); f_115699e0();
  /* 1156fc90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fc93 mov edx, dword ptr [0x1159230c] */
  EDX = (r32((uint32_t)(0x1159230c)));
  /* 1156fc99 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156fc9c mov dword ptr [0x1159230c], edx */
  w32((uint32_t)(0x1159230c), (EDX));
L_1156fca2:;
  /* 1156fca2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156fca4 jmp 0x1156fe7b */
  goto L_1156fe7b;
L_1156fca9:;
  /* 1156fca9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fcad jg 0x1156fcfa */
  if ((!C.zf&&C.sf==C.of)) goto L_1156fcfa;
  /* 1156fcaf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1156fcb5 push eax */
  push32((uint32_t)(EAX));
  /* 1156fcb6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1156fcbc push ecx */
  push32((uint32_t)(ECX));
  /* 1156fcbd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1156fcc3 push edx */
  push32((uint32_t)(EDX));
  /* 1156fcc4 call 0x11569760 */
  push32(0x1156fcc9u); f_11569760();
  /* 1156fcc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fccc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1156fcd2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1156fcda lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1156fce0 push ecx */
  push32((uint32_t)(ECX));
  /* 1156fce1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156fce4 push edx */
  push32((uint32_t)(EDX));
  /* 1156fce5 call 0x1156fe80 */
  push32(0x1156fceau); f_1156fe80();
  /* 1156fcea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fced test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156fcef je 0x1156fcfa */
  if (C.zf) goto L_1156fcfa;
  /* 1156fcf1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156fcf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fcf7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1156fcfa:;
  /* 1156fcfa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1156fd00 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fd06 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1156fd0c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1156fd12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1156fd15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156fd17 je 0x1156fd28 */
  if (C.zf) goto L_1156fd28;
  /* 1156fd19 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1156fd1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fd22 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1156fd28:;
  /* 1156fd28 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1156fd2e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1156fd31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156fd33 jne 0x1156fb71 */
  if (!C.zf) goto L_1156fb71;
  /* 1156fd39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fd3d je 0x1156fd4c */
  if (C.zf) goto L_1156fd4c;
  /* 1156fd3f call 0x11570020 */
  push32(0x1156fd44u); f_11570020();
  /* 1156fd44 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1156fd4a jmp 0x1156fd56 */
  goto L_1156fd56;
L_1156fd4c:;
  /* 1156fd4c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1156fd56:;
  /* 1156fd56 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1156fd5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1156fd5f jmp 0x1156fe51 */
  goto L_1156fe51;
L_1156fd64:;
  /* 1156fd64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156fd67 push edx */
  push32((uint32_t)(EDX));
  /* 1156fd68 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156fd6a push 0 */
  push32((uint32_t)(0x0u));
  /* 1156fd6c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1156fd72 push eax */
  push32((uint32_t)(EAX));
  /* 1156fd73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156fd76 push ecx */
  push32((uint32_t)(ECX));
  /* 1156fd77 call 0x11570120 */
  push32(0x1156fd7cu); f_11570120();
  /* 1156fd7c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fd7f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156fd82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fd86 je 0x1156fe51 */
  if (C.zf) goto L_1156fe51;
  /* 1156fd8c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1156fd93 jmp 0x1156fd9e */
  goto L_1156fd9e;
L_1156fd95:;
  /* 1156fd95 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156fd98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fd9b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1156fd9e:;
  /* 1156fd9e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fda2 jg 0x1156fe00 */
  if ((!C.zf&&C.sf==C.of)) goto L_1156fe00;
  /* 1156fda4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fda8 je 0x1156fdfe */
  if (C.zf) goto L_1156fdfe;
  /* 1156fdaa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156fdad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156fdb0 mov ecx, dword ptr [eax + 0x115904dc] */
  ECX = (r32((uint32_t)(EAX + 0x115904dc)));
  /* 1156fdb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1156fdb7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1156fdbd push edx */
  push32((uint32_t)(EDX));
  /* 1156fdbe call 0x11571bd0 */
  push32(0x1156fdc3u); f_11571bd0();
  /* 1156fdc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fdc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156fdc8 je 0x1156fdf5 */
  if (C.zf) goto L_1156fdf5;
  /* 1156fdca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1156fdd0 push eax */
  push32((uint32_t)(EAX));
  /* 1156fdd1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156fdd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1156fdd5 call 0x1156fe80 */
  push32(0x1156fddau); f_1156fe80();
  /* 1156fdda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156fddf je 0x1156fdec */
  if (C.zf) goto L_1156fdec;
  /* 1156fde1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156fde4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fde7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1156fdea jmp 0x1156fdf3 */
  goto L_1156fdf3;
L_1156fdec:;
  /* 1156fdec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1156fdf3:;
  /* 1156fdf3 jmp 0x1156fdfe */
  goto L_1156fdfe;
L_1156fdf5:;
  /* 1156fdf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156fdf8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fdfb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1156fdfe:;
  /* 1156fdfe jmp 0x1156fd95 */
  goto L_1156fd95;
L_1156fe00:;
  /* 1156fe00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fe04 je 0x1156fe2b */
  if (C.zf) goto L_1156fe2b;
  /* 1156fe06 call 0x11570020 */
  push32(0x1156fe0bu); f_11570020();
  /* 1156fe0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156fe0e push 2 */
  push32((uint32_t)(0x2u));
  /* 1156fe10 mov ecx, dword ptr [0x115904dc] */
  ECX = (r32((uint32_t)(0x115904dc)));
  /* 1156fe16 push ecx */
  push32((uint32_t)(ECX));
  /* 1156fe17 call 0x115669d0 */
  push32(0x1156fe1cu); f_115669d0();
  /* 1156fe1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fe1f mov dword ptr [0x115904dc], 0 */
  w32((uint32_t)(0x115904dc), (0x0u));
  /* 1156fe29 jmp 0x1156fe51 */
  goto L_1156fe51;
L_1156fe2b:;
  /* 1156fe2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fe2f je 0x1156fe3e */
  if (C.zf) goto L_1156fe3e;
  /* 1156fe31 call 0x11570020 */
  push32(0x1156fe36u); f_11570020();
  /* 1156fe36 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1156fe3c jmp 0x1156fe48 */
  goto L_1156fe48;
L_1156fe3e:;
  /* 1156fe3e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1156fe48:;
  /* 1156fe48 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1156fe4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1156fe51:;
  /* 1156fe51 jmp 0x1156fe5b */
  goto L_1156fe5b;
L_1156fe53:;
  /* 1156fe53 call 0x11570020 */
  push32(0x1156fe58u); f_11570020();
  /* 1156fe58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1156fe5b:;
  /* 1156fe5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fe5f je 0x1156fe78 */
  if (C.zf) goto L_1156fe78;
  /* 1156fe61 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1156fe63 call 0x115699e0 */
  push32(0x1156fe68u); f_115699e0();
  /* 1156fe68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fe6b mov eax, dword ptr [0x1159230c] */
  EAX = (r32((uint32_t)(0x1159230c)));
  /* 1156fe70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156fe73 mov dword ptr [0x1159230c], eax */
  w32((uint32_t)(0x1159230c), (EAX));
L_1156fe78:;
  /* 1156fe78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1156fe7b:;
  /* 1156fe7b mov esp, ebp */
  ESP = (EBP);
  /* 1156fe7d pop ebp */
  EBP = (pop32());
  /* 1156fe7e ret  */
  ESPCHK(0x1156fa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe80 @ 0x1156fe80 (403 bytes, 117 insns) */
void f_1156fe80(void) {
  FTRACE(0x1156fe80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156fe80 push ebp */
  push32((uint32_t)(EBP));
  /* 1156fe81 mov ebp, esp */
  EBP = (ESP);
  /* 1156fe83 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156fe89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156fe8c push eax */
  push32((uint32_t)(EAX));
  /* 1156fe8d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1156fe93 push ecx */
  push32((uint32_t)(ECX));
  /* 1156fe94 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1156fe9a push edx */
  push32((uint32_t)(EDX));
  /* 1156fe9b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1156fea1 push eax */
  push32((uint32_t)(EAX));
  /* 1156fea2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156fea5 push ecx */
  push32((uint32_t)(ECX));
  /* 1156fea6 call 0x11570120 */
  push32(0x1156feabu); f_11570120();
  /* 1156feab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156feae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156feb0 jne 0x1156feb9 */
  if (!C.zf) goto L_1156feb9;
  /* 1156feb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156feb4 jmp 0x1157000f */
  goto L_1157000f;
L_1156feb9:;
  /* 1156feb9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1156febe push 0x1158d138 */
  push32((uint32_t)(0x1158d138u));
  /* 1156fec3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156fec5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1156fecb push edx */
  push32((uint32_t)(EDX));
  /* 1156fecc call 0x11568d70 */
  push32(0x1156fed1u); f_11568d70();
  /* 1156fed1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fed4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fed7 push eax */
  push32((uint32_t)(EAX));
  /* 1156fed8 call 0x11565f40 */
  push32(0x1156feddu); f_11565f40();
  /* 1156fedd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156fee0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156fee3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fee7 jne 0x1156fef0 */
  if (!C.zf) goto L_1156fef0;
  /* 1156fee9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156feeb jmp 0x1157000f */
  goto L_1157000f;
L_1156fef0:;
  /* 1156fef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156fef3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156fef6 mov ecx, dword ptr [eax + 0x115904dc] */
  ECX = (r32((uint32_t)(EAX + 0x115904dc)));
  /* 1156fefc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1156feff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ff02 mov eax, dword ptr [edx*4 + 0x11592188] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11592188)));
  /* 1156ff09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156ff0c push 6 */
  push32((uint32_t)(0x6u));
  /* 1156ff0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ff11 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ff14 add ecx, 0x115921d8 */
  { uint32_t _a=(ECX),_b=(0x115921d8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ff1a push ecx */
  push32((uint32_t)(ECX));
  /* 1156ff1b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1156ff1e push edx */
  push32((uint32_t)(EDX));
  /* 1156ff1f call 0x1156c820 */
  push32(0x1156ff24u); f_1156c820();
  /* 1156ff24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ff27 mov eax, dword ptr [0x115921a0] */
  EAX = (r32((uint32_t)(0x115921a0)));
  /* 1156ff2c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156ff2f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1156ff35 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ff36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ff39 push edx */
  push32((uint32_t)(EDX));
  /* 1156ff3a call 0x11568ef0 */
  push32(0x1156ff3fu); f_11568ef0();
  /* 1156ff3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ff42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ff45 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ff48 mov dword ptr [ecx + 0x115904dc], eax */
  w32((uint32_t)(ECX + 0x115904dc), (EAX));
  /* 1156ff4e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1156ff54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1156ff5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ff5d mov dword ptr [eax*4 + 0x11592188], edx */
  w32((uint32_t)(EAX*4 + 0x11592188), (EDX));
  /* 1156ff64 push 6 */
  push32((uint32_t)(0x6u));
  /* 1156ff66 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1156ff6c push ecx */
  push32((uint32_t)(ECX));
  /* 1156ff6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ff70 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ff73 add edx, 0x115921d8 */
  { uint32_t _a=(EDX),_b=(0x115921d8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ff79 push edx */
  push32((uint32_t)(EDX));
  /* 1156ff7a call 0x1156c820 */
  push32(0x1156ff7fu); f_1156c820();
  /* 1156ff7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ff82 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ff86 jne 0x1156ff93 */
  if (!C.zf) goto L_1156ff93;
  /* 1156ff88 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1156ff8e mov dword ptr [0x115921a0], eax */
  w32((uint32_t)(0x115921a0), (EAX));
L_1156ff93:;
  /* 1156ff93 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ff97 jne 0x1156ffa5 */
  if (!C.zf) goto L_1156ffa5;
  /* 1156ff99 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1156ff9f mov dword ptr [0x115921a4], ecx */
  w32((uint32_t)(0x115921a4), (ECX));
L_1156ffa5:;
  /* 1156ffa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ffa8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ffab call dword ptr [edx + 0x115904e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x115904e0))), 0x1156ffb1u);
  /* 1156ffb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156ffb3 je 0x1156ffec */
  if (C.zf) goto L_1156ffec;
  /* 1156ffb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ffb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ffbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156ffbe mov dword ptr [eax + 0x115904dc], ecx */
  w32((uint32_t)(EAX + 0x115904dc), (ECX));
  /* 1156ffc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156ffc6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ffc9 push edx */
  push32((uint32_t)(EDX));
  /* 1156ffca call 0x115669d0 */
  push32(0x1156ffcfu); f_115669d0();
  /* 1156ffcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ffd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ffd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ffd8 mov dword ptr [eax*4 + 0x11592188], ecx */
  w32((uint32_t)(EAX*4 + 0x11592188), (ECX));
  /* 1156ffdf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156ffe2 mov dword ptr [0x115921a0], edx */
  w32((uint32_t)(0x115921a0), (EDX));
  /* 1156ffe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156ffea jmp 0x1157000f */
  goto L_1157000f;
L_1156ffec:;
  /* 1156ffec cmp dword ptr [ebp - 0xc], 0x115903c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x115903c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156fff3 je 0x11570003 */
  if (C.zf) goto L_11570003;
  /* 1156fff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156fff7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156fffa push eax */
  push32((uint32_t)(EAX));
  /* 1156fffb call 0x115669d0 */
  push32(0x11570000u); f_115669d0();
  /* 11570000 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11570003:;
  /* 11570003 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570006 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11570009 mov eax, dword ptr [ecx + 0x115904dc] */
  EAX = (r32((uint32_t)(ECX + 0x115904dc)));
L_1157000f:;
  /* 1157000f mov esp, ebp */
  ESP = (EBP);
  /* 11570011 pop ebp */
  EBP = (pop32());
  /* 11570012 ret  */
  ESPCHK(0x1156fe80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x11570020 (256 bytes, 72 insns) */
void f_11570020(void) {
  FTRACE(0x11570020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11570020 push ebp */
  push32((uint32_t)(EBP));
  /* 11570021 mov ebp, esp */
  EBP = (ESP);
  /* 11570023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11570026 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1157002d cmp dword ptr [0x115904dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115904dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11570034 jne 0x11570054 */
  if (!C.zf) goto L_11570054;
  /* 11570036 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1157003b push 0x1158d138 */
  push32((uint32_t)(0x1158d138u));
  /* 11570040 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570042 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11570047 call 0x11565f40 */
  push32(0x1157004cu); f_11565f40();
  /* 1157004c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157004f mov dword ptr [0x115904dc], eax */
  w32((uint32_t)(0x115904dc), (EAX));
L_11570054:;
  /* 11570054 mov eax, dword ptr [0x115904dc] */
  EAX = (r32((uint32_t)(0x115904dc)));
  /* 11570059 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1157005c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11570063 jmp 0x1157006e */
  goto L_1157006e;
L_11570065:;
  /* 11570065 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570068 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157006b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1157006e:;
  /* 1157006e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570071 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11570074 mov eax, dword ptr [edx + 0x115904dc] */
  EAX = (r32((uint32_t)(EDX + 0x115904dc)));
  /* 1157007a push eax */
  push32((uint32_t)(EAX));
  /* 1157007b push 0x1158d144 */
  push32((uint32_t)(0x1158d144u));
  /* 11570080 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570083 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11570086 mov edx, dword ptr [ecx + 0x115904d8] */
  EDX = (r32((uint32_t)(ECX + 0x115904d8)));
  /* 1157008c push edx */
  push32((uint32_t)(EDX));
  /* 1157008d push 3 */
  push32((uint32_t)(0x3u));
  /* 1157008f mov eax, dword ptr [0x115904dc] */
  EAX = (r32((uint32_t)(0x115904dc)));
  /* 11570094 push eax */
  push32((uint32_t)(EAX));
  /* 11570095 call 0x115702c0 */
  push32(0x1157009au); f_115702c0();
  /* 1157009a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157009d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115700a1 jge 0x115700e9 */
  if ((C.sf==C.of)) goto L_115700e9;
  /* 115700a3 push 0x1158d130 */
  push32((uint32_t)(0x1158d130u));
  /* 115700a8 mov ecx, dword ptr [0x115904dc] */
  ECX = (r32((uint32_t)(0x115904dc)));
  /* 115700ae push ecx */
  push32((uint32_t)(ECX));
  /* 115700af call 0x11568f00 */
  push32(0x115700b4u); f_11568f00();
  /* 115700b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115700b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115700ba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115700bd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115700c0 mov eax, dword ptr [edx + 0x115904dc] */
  EAX = (r32((uint32_t)(EDX + 0x115904dc)));
  /* 115700c6 push eax */
  push32((uint32_t)(EAX));
  /* 115700c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115700ca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115700cd mov edx, dword ptr [ecx + 0x115904dc] */
  EDX = (r32((uint32_t)(ECX + 0x115904dc)));
  /* 115700d3 push edx */
  push32((uint32_t)(EDX));
  /* 115700d4 call 0x11571bd0 */
  push32(0x115700d9u); f_11571bd0();
  /* 115700d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115700dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115700de je 0x115700e7 */
  if (C.zf) goto L_115700e7;
  /* 115700e0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115700e7:;
  /* 115700e7 jmp 0x11570117 */
  goto L_11570117;
L_115700e9:;
  /* 115700e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115700ed jne 0x115700f6 */
  if (!C.zf) goto L_115700f6;
  /* 115700ef mov eax, dword ptr [0x115904dc] */
  EAX = (r32((uint32_t)(0x115904dc)));
  /* 115700f4 jmp 0x1157011c */
  goto L_1157011c;
L_115700f6:;
  /* 115700f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115700f8 mov eax, dword ptr [0x115904dc] */
  EAX = (r32((uint32_t)(0x115904dc)));
  /* 115700fd push eax */
  push32((uint32_t)(EAX));
  /* 115700fe call 0x115669d0 */
  push32(0x11570103u); f_115669d0();
  /* 11570103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570106 mov dword ptr [0x115904dc], 0 */
  w32((uint32_t)(0x115904dc), (0x0u));
  /* 11570110 mov eax, dword ptr [0x115904f4] */
  EAX = (r32((uint32_t)(0x115904f4)));
  /* 11570115 jmp 0x1157011c */
  goto L_1157011c;
L_11570117:;
  /* 11570117 jmp 0x11570065 */
  goto L_11570065;
L_1157011c:;
  /* 1157011c mov esp, ebp */
  ESP = (EBP);
  /* 1157011e pop ebp */
  EBP = (pop32());
  /* 1157011f ret  */
  ESPCHK(0x11570020u, _esp0);
  ESP += 4; return;
}

/* FUN_10010120 @ 0x11570120 (388 bytes, 115 insns) */
void f_11570120(void) {
  FTRACE(0x11570120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11570120 push ebp */
  push32((uint32_t)(EBP));
  /* 11570121 mov ebp, esp */
  EBP = (ESP);
  /* 11570123 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11570129 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157012d jne 0x11570136 */
  if (!C.zf) goto L_11570136;
  /* 1157012f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11570131 jmp 0x115702a0 */
  goto L_115702a0;
L_11570136:;
  /* 11570136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570139 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1157013c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157013f jne 0x11570190 */
  if (!C.zf) goto L_11570190;
  /* 11570141 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570144 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11570148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157014a jne 0x11570190 */
  if (!C.zf) goto L_11570190;
  /* 1157014c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157014f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11570152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11570155 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11570159 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157015d je 0x11570179 */
  if (C.zf) goto L_11570179;
  /* 1157015f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11570162 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11570167 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157016a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11570170 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11570173 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11570179:;
  /* 11570179 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157017d je 0x11570188 */
  if (C.zf) goto L_11570188;
  /* 1157017f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11570182 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11570188:;
  /* 11570188 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157018b jmp 0x115702a0 */
  goto L_115702a0;
L_11570190:;
  /* 11570190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570193 push ecx */
  push32((uint32_t)(ECX));
  /* 11570194 push 0x11590450 */
  push32((uint32_t)(0x11590450u));
  /* 11570199 call 0x11571bd0 */
  push32(0x1157019eu); f_11571bd0();
  /* 1157019e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115701a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115701a3 je 0x11570258 */
  if (C.zf) goto L_11570258;
  /* 115701a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115701ac push edx */
  push32((uint32_t)(EDX));
  /* 115701ad push 0x115903cc */
  push32((uint32_t)(0x115903ccu));
  /* 115701b2 call 0x11571bd0 */
  push32(0x115701b7u); f_11571bd0();
  /* 115701b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115701ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115701bc je 0x11570258 */
  if (C.zf) goto L_11570258;
  /* 115701c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115701c5 push eax */
  push32((uint32_t)(EAX));
  /* 115701c6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 115701cc push ecx */
  push32((uint32_t)(ECX));
  /* 115701cd call 0x11570310 */
  push32(0x115701d2u); f_11570310();
  /* 115701d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115701d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115701d7 je 0x115701e0 */
  if (C.zf) goto L_115701e0;
  /* 115701d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115701db jmp 0x115702a0 */
  goto L_115702a0;
L_115701e0:;
  /* 115701e0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 115701e6 push edx */
  push32((uint32_t)(EDX));
  /* 115701e7 push 0x115921b0 */
  push32((uint32_t)(0x115921b0u));
  /* 115701ec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 115701f2 push eax */
  push32((uint32_t)(EAX));
  /* 115701f3 call 0x11571d20 */
  push32(0x115701f8u); f_11571d20();
  /* 115701f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115701fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115701fd jne 0x11570206 */
  if (!C.zf) goto L_11570206;
  /* 115701ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11570201 jmp 0x115702a0 */
  goto L_115702a0;
L_11570206:;
  /* 11570206 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11570208 mov cx, word ptr [0x115921b4] */
  CX = (r16((uint32_t)(0x115921b4)));
  /* 1157020f mov dword ptr [0x115921b8], ecx */
  w32((uint32_t)(0x115921b8), (ECX));
  /* 11570215 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1157021b push edx */
  push32((uint32_t)(EDX));
  /* 1157021c push 0x11590450 */
  push32((uint32_t)(0x11590450u));
  /* 11570221 call 0x11570470 */
  push32(0x11570226u); f_11570470();
  /* 11570226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570229 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157022c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1157022f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11570231 je 0x11570246 */
  if (C.zf) goto L_11570246;
  /* 11570233 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570236 push edx */
  push32((uint32_t)(EDX));
  /* 11570237 push 0x115903cc */
  push32((uint32_t)(0x115903ccu));
  /* 1157023c call 0x11568ef0 */
  push32(0x11570241u); f_11568ef0();
  /* 11570241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570244 jmp 0x11570258 */
  goto L_11570258;
L_11570246:;
  /* 11570246 push 0x11590450 */
  push32((uint32_t)(0x11590450u));
  /* 1157024b push 0x115903cc */
  push32((uint32_t)(0x115903ccu));
  /* 11570250 call 0x11568ef0 */
  push32(0x11570255u); f_11568ef0();
  /* 11570255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11570258:;
  /* 11570258 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157025c je 0x11570271 */
  if (C.zf) goto L_11570271;
  /* 1157025e push 6 */
  push32((uint32_t)(0x6u));
  /* 11570260 push 0x115921b0 */
  push32((uint32_t)(0x115921b0u));
  /* 11570265 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11570268 push eax */
  push32((uint32_t)(EAX));
  /* 11570269 call 0x1156c820 */
  push32(0x1157026eu); f_1156c820();
  /* 1157026e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11570271:;
  /* 11570271 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11570275 je 0x1157028a */
  if (C.zf) goto L_1157028a;
  /* 11570277 push 4 */
  push32((uint32_t)(0x4u));
  /* 11570279 push 0x115921b8 */
  push32((uint32_t)(0x115921b8u));
  /* 1157027e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11570281 push ecx */
  push32((uint32_t)(ECX));
  /* 11570282 call 0x1156c820 */
  push32(0x11570287u); f_1156c820();
  /* 11570287 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1157028a:;
  /* 1157028a push 0x11590450 */
  push32((uint32_t)(0x11590450u));
  /* 1157028f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11570292 push edx */
  push32((uint32_t)(EDX));
  /* 11570293 call 0x11568ef0 */
  push32(0x11570298u); f_11568ef0();
  /* 11570298 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157029b mov eax, 0x11590450 */
  EAX = (0x11590450u);
L_115702a0:;
  /* 115702a0 mov esp, ebp */
  ESP = (EBP);
  /* 115702a2 pop ebp */
  EBP = (pop32());
  /* 115702a3 ret  */
  ESPCHK(0x11570120u, _esp0);
  ESP += 4; return;
}

/* FUN_100102b0 @ 0x115702b0 (7 bytes, 5 insns) */
void f_115702b0(void) {
  FTRACE(0x115702b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115702b0 push ebp */
  push32((uint32_t)(EBP));
  /* 115702b1 mov ebp, esp */
  EBP = (ESP);
  /* 115702b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115702b5 pop ebp */
  EBP = (pop32());
  /* 115702b6 ret  */
  ESPCHK(0x115702b0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x115702c0 (79 bytes, 28 insns) */
void f_115702c0(void) {
  FTRACE(0x115702c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115702c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115702c1 mov ebp, esp */
  EBP = (ESP);
  /* 115702c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115702c6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 115702c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115702cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115702d3 jmp 0x115702de */
  goto L_115702de;
L_115702d5:;
  /* 115702d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115702d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115702db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_115702de:;
  /* 115702de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115702e1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115702e4 jge 0x11570304 */
  if ((C.sf==C.of)) goto L_11570304;
  /* 115702e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115702e9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115702ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115702ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115702f2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 115702f5 push edx */
  push32((uint32_t)(EDX));
  /* 115702f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115702f9 push eax */
  push32((uint32_t)(EAX));
  /* 115702fa call 0x11568f00 */
  push32(0x115702ffu); f_11568f00();
  /* 115702ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570302 jmp 0x115702d5 */
  goto L_115702d5;
L_11570304:;
  /* 11570304 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1157030b mov esp, ebp */
  ESP = (EBP);
  /* 1157030d pop ebp */
  EBP = (pop32());
  /* 1157030e ret  */
  ESPCHK(0x115702c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010310 @ 0x11570310 (349 bytes, 122 insns) */
void f_11570310(void) {
  FTRACE(0x11570310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11570310 push ebp */
  push32((uint32_t)(EBP));
  /* 11570311 mov ebp, esp */
  EBP = (ESP);
  /* 11570313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11570316 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1157031b push 0 */
  push32((uint32_t)(0x0u));
  /* 1157031d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570320 push eax */
  push32((uint32_t)(EAX));
  /* 11570321 call 0x11569cb0 */
  push32(0x11570326u); f_11569cb0();
  /* 11570326 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570329 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157032c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1157032f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11570331 jne 0x1157033a */
  if (!C.zf) goto L_1157033a;
  /* 11570333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11570335 jmp 0x11570469 */
  goto L_11570469;
L_1157033a:;
  /* 1157033a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157033d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11570340 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11570343 jne 0x11570370 */
  if (!C.zf) goto L_11570370;
  /* 11570345 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11570348 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1157034c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157034e je 0x11570370 */
  if (C.zf) goto L_11570370;
  /* 11570350 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11570353 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570356 push ecx */
  push32((uint32_t)(ECX));
  /* 11570357 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157035a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570360 push edx */
  push32((uint32_t)(EDX));
  /* 11570361 call 0x11568ef0 */
  push32(0x11570366u); f_11568ef0();
  /* 11570366 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157036b jmp 0x11570469 */
  goto L_11570469;
L_11570370:;
  /* 11570370 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11570377 jmp 0x11570382 */
  goto L_11570382;
L_11570379:;
  /* 11570379 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157037c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157037f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11570382:;
  /* 11570382 push 0x1158d148 */
  push32((uint32_t)(0x1158d148u));
  /* 11570387 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157038a push ecx */
  push32((uint32_t)(ECX));
  /* 1157038b call 0x11571c60 */
  push32(0x11570390u); f_11571c60();
  /* 11570390 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570393 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11570396 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157039a jne 0x115703a4 */
  if (!C.zf) goto L_115703a4;
  /* 1157039c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1157039f jmp 0x11570469 */
  goto L_11570469;
L_115703a4:;
  /* 115703a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115703a7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115703aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115703ac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 115703af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115703b3 jne 0x115703da */
  if (!C.zf) goto L_115703da;
  /* 115703b5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115703b9 jge 0x115703da */
  if ((C.sf==C.of)) goto L_115703da;
  /* 115703bb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115703bf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115703c2 je 0x115703da */
  if (C.zf) goto L_115703da;
  /* 115703c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115703c7 push edx */
  push32((uint32_t)(EDX));
  /* 115703c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115703cb push eax */
  push32((uint32_t)(EAX));
  /* 115703cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115703cf push ecx */
  push32((uint32_t)(ECX));
  /* 115703d0 call 0x11569760 */
  push32(0x115703d5u); f_11569760();
  /* 115703d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115703d8 jmp 0x11570440 */
  goto L_11570440;
L_115703da:;
  /* 115703da cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115703de jne 0x11570408 */
  if (!C.zf) goto L_11570408;
  /* 115703e0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115703e4 jge 0x11570408 */
  if ((C.sf==C.of)) goto L_11570408;
  /* 115703e6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115703ea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115703ed je 0x11570408 */
  if (C.zf) goto L_11570408;
  /* 115703ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115703f2 push eax */
  push32((uint32_t)(EAX));
  /* 115703f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115703f6 push ecx */
  push32((uint32_t)(ECX));
  /* 115703f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115703fa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115703fd push edx */
  push32((uint32_t)(EDX));
  /* 115703fe call 0x11569760 */
  push32(0x11570403u); f_11569760();
  /* 11570403 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570406 jmp 0x11570440 */
  goto L_11570440;
L_11570408:;
  /* 11570408 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157040c jne 0x1157043b */
  if (!C.zf) goto L_1157043b;
  /* 1157040e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11570412 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11570414 je 0x1157041f */
  if (C.zf) goto L_1157041f;
  /* 11570416 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1157041a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157041d jne 0x1157043b */
  if (!C.zf) goto L_1157043b;
L_1157041f:;
  /* 1157041f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570422 push edx */
  push32((uint32_t)(EDX));
  /* 11570423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11570426 push eax */
  push32((uint32_t)(EAX));
  /* 11570427 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157042a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570430 push ecx */
  push32((uint32_t)(ECX));
  /* 11570431 call 0x11569760 */
  push32(0x11570436u); f_11569760();
  /* 11570436 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570439 jmp 0x11570440 */
  goto L_11570440;
L_1157043b:;
  /* 1157043b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1157043e jmp 0x11570469 */
  goto L_11570469;
L_11570440:;
  /* 11570440 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11570444 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11570447 jne 0x1157044b */
  if (!C.zf) goto L_1157044b;
  /* 11570449 jmp 0x11570467 */
  goto L_11570467;
L_1157044b:;
  /* 1157044b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1157044f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11570451 jne 0x11570455 */
  if (!C.zf) goto L_11570455;
  /* 11570453 jmp 0x11570467 */
  goto L_11570467;
L_11570455:;
  /* 11570455 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570458 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157045b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1157045f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11570462 jmp 0x11570379 */
  goto L_11570379;
L_11570467:;
  /* 11570467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11570469:;
  /* 11570469 mov esp, ebp */
  ESP = (EBP);
  /* 1157046b pop ebp */
  EBP = (pop32());
  /* 1157046c ret  */
  ESPCHK(0x11570310u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11570470 (101 bytes, 36 insns) */
void f_11570470(void) {
  FTRACE(0x11570470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11570470 push ebp */
  push32((uint32_t)(EBP));
  /* 11570471 mov ebp, esp */
  EBP = (ESP);
  /* 11570473 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11570476 push eax */
  push32((uint32_t)(EAX));
  /* 11570477 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157047a push ecx */
  push32((uint32_t)(ECX));
  /* 1157047b call 0x11568ef0 */
  push32(0x11570480u); f_11568ef0();
  /* 11570480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570483 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11570486 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1157048a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157048c je 0x115704a8 */
  if (C.zf) goto L_115704a8;
  /* 1157048e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11570491 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570494 push ecx */
  push32((uint32_t)(ECX));
  /* 11570495 push 0x1158d150 */
  push32((uint32_t)(0x1158d150u));
  /* 1157049a push 2 */
  push32((uint32_t)(0x2u));
  /* 1157049c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157049f push edx */
  push32((uint32_t)(EDX));
  /* 115704a0 call 0x115702c0 */
  push32(0x115704a5u); f_115702c0();
  /* 115704a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115704a8:;
  /* 115704a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115704ab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 115704b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115704b4 je 0x115704d3 */
  if (C.zf) goto L_115704d3;
  /* 115704b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115704b9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115704bf push edx */
  push32((uint32_t)(EDX));
  /* 115704c0 push 0x1158d14c */
  push32((uint32_t)(0x1158d14cu));
  /* 115704c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115704c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115704ca push eax */
  push32((uint32_t)(EAX));
  /* 115704cb call 0x115702c0 */
  push32(0x115704d0u); f_115702c0();
  /* 115704d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115704d3:;
  /* 115704d3 pop ebp */
  EBP = (pop32());
  /* 115704d4 ret  */
  ESPCHK(0x11570470u, _esp0);
  ESP += 4; return;
}

/* FUN_100104e0 @ 0x115704e0 (130 bytes, 50 insns) */
void f_115704e0(void) {
  FTRACE(0x115704e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115704e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115704e1 mov ebp, esp */
  EBP = (ESP);
  /* 115704e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115704e4 push ebx */
  push32((uint32_t)(EBX));
  /* 115704e5 push esi */
  push32((uint32_t)(ESI));
  /* 115704e6 push edi */
  push32((uint32_t)(EDI));
  /* 115704e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115704ee:;
  /* 115704ee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115704f2 jne 0x11570512 */
  if (!C.zf) goto L_11570512;
  /* 115704f4 push 0x1158d160 */
  push32((uint32_t)(0x1158d160u));
  /* 115704f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115704fb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 115704fd push 0x1158d154 */
  push32((uint32_t)(0x1158d154u));
  /* 11570502 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570504 call 0x11565000 */
  push32(0x11570509u); f_11565000();
  /* 11570509 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157050c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157050f jne 0x11570512 */
  if (!C.zf) goto L_11570512;
  /* 11570511 int3  */
  x86_unimpl("int3 @ 0x11570511");
L_11570512:;
  /* 11570512 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11570514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11570516 jne 0x115704ee */
  if (!C.zf) goto L_115704ee;
  /* 11570518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157051b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1157051e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11570521 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11570523 je 0x11570531 */
  if (C.zf) goto L_11570531;
  /* 11570525 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570528 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1157052f jmp 0x11570558 */
  goto L_11570558;
L_11570531:;
  /* 11570531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570534 push ecx */
  push32((uint32_t)(ECX));
  /* 11570535 call 0x1156ed50 */
  push32(0x1157053au); f_1156ed50();
  /* 1157053a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157053d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570540 push edx */
  push32((uint32_t)(EDX));
  /* 11570541 call 0x11570570 */
  push32(0x11570546u); f_11570570();
  /* 11570546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570549 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1157054c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157054f push eax */
  push32((uint32_t)(EAX));
  /* 11570550 call 0x1156edc0 */
  push32(0x11570555u); f_1156edc0();
  /* 11570555 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11570558:;
  /* 11570558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157055b pop edi */
  EDI = (pop32());
  /* 1157055c pop esi */
  ESI = (pop32());
  /* 1157055d pop ebx */
  EBX = (pop32());
  /* 1157055e mov esp, ebp */
  ESP = (EBP);
  /* 11570560 pop ebp */
  EBP = (pop32());
  /* 11570561 ret  */
  ESPCHK(0x115704e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010570 @ 0x11570570 (190 bytes, 67 insns) */
void f_11570570(void) {
  FTRACE(0x11570570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11570570 push ebp */
  push32((uint32_t)(EBP));
  /* 11570571 mov ebp, esp */
  EBP = (ESP);
  /* 11570573 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11570576 push ebx */
  push32((uint32_t)(EBX));
  /* 11570577 push esi */
  push32((uint32_t)(ESI));
  /* 11570578 push edi */
  push32((uint32_t)(EDI));
  /* 11570579 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11570580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570583 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11570586:;
  /* 11570586 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157058a jne 0x115705aa */
  if (!C.zf) goto L_115705aa;
  /* 1157058c push 0x1158d000 */
  push32((uint32_t)(0x1158d000u));
  /* 11570591 push 0 */
  push32((uint32_t)(0x0u));
  /* 11570593 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11570595 push 0x1158d154 */
  push32((uint32_t)(0x1158d154u));
  /* 1157059a push 2 */
  push32((uint32_t)(0x2u));
  /* 1157059c call 0x11565000 */
  push32(0x115705a1u); f_11565000();
  /* 115705a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115705a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115705a7 jne 0x115705aa */
  if (!C.zf) goto L_115705aa;
  /* 115705a9 int3  */
  x86_unimpl("int3 @ 0x115705a9");
L_115705aa:;
  /* 115705aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115705ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115705ae jne 0x11570586 */
  if (!C.zf) goto L_11570586;
  /* 115705b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115705b3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115705b6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 115705bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115705bd je 0x1157061a */
  if (C.zf) goto L_1157061a;
  /* 115705bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115705c2 push ecx */
  push32((uint32_t)(ECX));
  /* 115705c3 call 0x1156f870 */
  push32(0x115705c8u); f_1156f870();
  /* 115705c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115705cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115705ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115705d1 push edx */
  push32((uint32_t)(EDX));
  /* 115705d2 call 0x11572bf0 */
  push32(0x115705d7u); f_11572bf0();
  /* 115705d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115705da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115705dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115705e0 push ecx */
  push32((uint32_t)(ECX));
  /* 115705e1 call 0x11572ac0 */
  push32(0x115705e6u); f_11572ac0();
  /* 115705e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115705e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115705eb jge 0x115705f6 */
  if ((C.sf==C.of)) goto L_115705f6;
  /* 115705ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115705f4 jmp 0x1157061a */
  goto L_1157061a;
L_115705f6:;
  /* 115705f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115705f9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115705fd je 0x1157061a */
  if (C.zf) goto L_1157061a;
  /* 115705ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11570601 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11570604 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11570607 push ecx */
  push32((uint32_t)(ECX));
  /* 11570608 call 0x115669d0 */
  push32(0x1157060du); f_115669d0();
  /* 1157060d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570610 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11570613 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1157061a:;
  /* 1157061a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157061d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11570624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570627 pop edi */
  EDI = (pop32());
  /* 11570628 pop esi */
  ESI = (pop32());
  /* 11570629 pop ebx */
  EBX = (pop32());
  /* 1157062a mov esp, ebp */
  ESP = (EBP);
  /* 1157062c pop ebp */
  EBP = (pop32());
  /* 1157062d ret  */
  ESPCHK(0x11570570u, _esp0);
  ESP += 4; return;
}

/* FUN_10010630 @ 0x11570630 (210 bytes, 63 insns) */
void f_11570630(void) {
  FTRACE(0x11570630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11570630 push ebp */
  push32((uint32_t)(EBP));
  /* 11570631 mov ebp, esp */
  EBP = (ESP);
  /* 11570633 push ecx */
  push32((uint32_t)(ECX));
  /* 11570634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570637 cmp eax, dword ptr [0x11593a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157063d jae 0x11570661 */
  if (!C.cf) goto L_11570661;
  /* 1157063f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570642 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11570645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570648 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1157064b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1157064e mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 11570655 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1157065a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1157065d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1157065f jne 0x11570674 */
  if (!C.zf) goto L_11570674;
L_11570661:;
  /* 11570661 call 0x1156de10 */
  push32(0x11570666u); f_1156de10();
  /* 11570666 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1157066c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1157066f jmp 0x115706fe */
  goto L_115706fe;
L_11570674:;
  /* 11570674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570677 push edx */
  push32((uint32_t)(EDX));
  /* 11570678 call 0x1156f630 */
  push32(0x1157067du); f_1156f630();
  /* 1157067d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570683 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11570686 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570689 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1157068c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1157068f mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 11570696 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1157069b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1157069e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115706a0 je 0x115706dd */
  if (C.zf) goto L_115706dd;
  /* 115706a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115706a5 push ecx */
  push32((uint32_t)(ECX));
  /* 115706a6 call 0x1156f4b0 */
  push32(0x115706abu); f_1156f4b0();
  /* 115706ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115706ae push eax */
  push32((uint32_t)(EAX));
  /* 115706af call dword ptr [0x11594308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594308))), 0x115706b5u);
  /* 115706b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115706b7 jne 0x115706c4 */
  if (!C.zf) goto L_115706c4;
  /* 115706b9 call dword ptr [0x115943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d4))), 0x115706bfu);
  /* 115706bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115706c2 jmp 0x115706cb */
  goto L_115706cb;
L_115706c4:;
  /* 115706c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115706cb:;
  /* 115706cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115706cf jne 0x115706d3 */
  if (!C.zf) goto L_115706d3;
  /* 115706d1 jmp 0x115706ef */
  goto L_115706ef;
L_115706d3:;
  /* 115706d3 call 0x1156de20 */
  push32(0x115706d8u); f_1156de20();
  /* 115706d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115706db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_115706dd:;
  /* 115706dd call 0x1156de10 */
  push32(0x115706e2u); f_1156de10();
  /* 115706e2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 115706e8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115706ef:;
  /* 115706ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115706f2 push eax */
  push32((uint32_t)(EAX));
  /* 115706f3 call 0x1156f6c0 */
  push32(0x115706f8u); f_1156f6c0();
  /* 115706f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115706fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_115706fe:;
  /* 115706fe mov esp, ebp */
  ESP = (EBP);
  /* 11570700 pop ebp */
  EBP = (pop32());
  /* 11570701 ret  */
  ESPCHK(0x11570630u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11570710 (219 bytes, 64 insns) */
void f_11570710(void) {
  FTRACE(0x11570710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11570710 push ebp */
  push32((uint32_t)(EBP));
  /* 11570711 mov ebp, esp */
  EBP = (ESP);
  /* 11570713 push ecx */
  push32((uint32_t)(ECX));
  /* 11570714 cmp dword ptr [0x1159219c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159219c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157071b je 0x115707b1 */
  if (C.zf) goto L_115707b1;
  /* 11570721 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11570723 push 0x1158d170 */
  push32((uint32_t)(0x1158d170u));
  /* 11570728 push 2 */
  push32((uint32_t)(0x2u));
  /* 1157072a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1157072f push 1 */
  push32((uint32_t)(0x1u));
  /* 11570731 call 0x11566350 */
  push32(0x11570736u); f_11566350();
  /* 11570736 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1157073c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11570740 jne 0x1157074c */
  if (!C.zf) goto L_1157074c;
  /* 11570742 mov eax, 1 */
  EAX = (0x1u);
  /* 11570747 jmp 0x115707e7 */
  goto L_115707e7;
L_1157074c:;
  /* 1157074c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157074f push eax */
  push32((uint32_t)(EAX));
  /* 11570750 call 0x115707f0 */
  push32(0x11570755u); f_115707f0();
  /* 11570755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157075a je 0x1157077d */
  if (C.zf) goto L_1157077d;
  /* 1157075c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157075f push ecx */
  push32((uint32_t)(ECX));
  /* 11570760 call 0x11570d80 */
  push32(0x11570765u); f_11570d80();
  /* 11570765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570768 push 2 */
  push32((uint32_t)(0x2u));
  /* 1157076a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157076d push edx */
  push32((uint32_t)(EDX));
  /* 1157076e call 0x115669d0 */
  push32(0x11570773u); f_115669d0();
  /* 11570773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570776 mov eax, 1 */
  EAX = (0x1u);
  /* 1157077b jmp 0x115707e7 */
  goto L_115707e7;
L_1157077d:;
  /* 1157077d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570780 mov dword ptr [0x11590c98], eax */
  w32((uint32_t)(0x11590c98), (EAX));
  /* 11570785 mov ecx, dword ptr [0x115921bc] */
  ECX = (r32((uint32_t)(0x115921bc)));
  /* 1157078b push ecx */
  push32((uint32_t)(ECX));
  /* 1157078c call 0x11570d80 */
  push32(0x11570791u); f_11570d80();
  /* 11570791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570794 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570796 mov edx, dword ptr [0x115921bc] */
  EDX = (r32((uint32_t)(0x115921bc)));
  /* 1157079c push edx */
  push32((uint32_t)(EDX));
  /* 1157079d call 0x115669d0 */
  push32(0x115707a2u); f_115669d0();
  /* 115707a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115707a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115707a8 mov dword ptr [0x115921bc], eax */
  w32((uint32_t)(0x115921bc), (EAX));
  /* 115707ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115707af jmp 0x115707e7 */
  goto L_115707e7;
L_115707b1:;
  /* 115707b1 mov dword ptr [0x11590c98], 0x11590ca0 */
  w32((uint32_t)(0x11590c98), (0x11590ca0u));
  /* 115707bb mov ecx, dword ptr [0x115921bc] */
  ECX = (r32((uint32_t)(0x115921bc)));
  /* 115707c1 push ecx */
  push32((uint32_t)(ECX));
  /* 115707c2 call 0x11570d80 */
  push32(0x115707c7u); f_11570d80();
  /* 115707c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115707ca push 2 */
  push32((uint32_t)(0x2u));
  /* 115707cc mov edx, dword ptr [0x115921bc] */
  EDX = (r32((uint32_t)(0x115921bc)));
  /* 115707d2 push edx */
  push32((uint32_t)(EDX));
  /* 115707d3 call 0x115669d0 */
  push32(0x115707d8u); f_115669d0();
  /* 115707d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115707db mov dword ptr [0x115921bc], 0 */
  w32((uint32_t)(0x115921bc), (0x0u));
  /* 115707e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115707e7:;
  /* 115707e7 mov esp, ebp */
  ESP = (EBP);
  /* 115707e9 pop ebp */
  EBP = (pop32());
  /* 115707ea ret  */
  ESPCHK(0x11570710u, _esp0);
  ESP += 4; return;
}

/* FUN_100107f0 @ 0x115707f0 (1423 bytes, 533 insns) */
void f_115707f0(void) {
  FTRACE(0x115707f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115707f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115707f1 mov ebp, esp */
  EBP = (ESP);
  /* 115707f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115707f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115707fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115707ff mov ax, word ptr [0x115921f6] */
  AX = (r16((uint32_t)(0x115921f6)));
  /* 11570805 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11570808 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1157080a mov cx, word ptr [0x115921f8] */
  CX = (r16((uint32_t)(0x115921f8)));
  /* 11570811 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11570814 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11570818 jne 0x11570822 */
  if (!C.zf) goto L_11570822;
  /* 1157081a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1157081d jmp 0x11570d7b */
  goto L_11570d7b;
L_11570822:;
  /* 11570822 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570825 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570828 push edx */
  push32((uint32_t)(EDX));
  /* 11570829 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1157082b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157082e push eax */
  push32((uint32_t)(EAX));
  /* 1157082f push 1 */
  push32((uint32_t)(0x1u));
  /* 11570831 call 0x11574100 */
  push32(0x11570836u); f_11574100();
  /* 11570836 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570839 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157083c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1157083e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570844 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570847 push edx */
  push32((uint32_t)(EDX));
  /* 11570848 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1157084a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157084d push eax */
  push32((uint32_t)(EAX));
  /* 1157084e push 1 */
  push32((uint32_t)(0x1u));
  /* 11570850 call 0x11574100 */
  push32(0x11570855u); f_11574100();
  /* 11570855 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570858 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157085b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1157085d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570860 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570863 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570866 push edx */
  push32((uint32_t)(EDX));
  /* 11570867 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11570869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157086c push eax */
  push32((uint32_t)(EAX));
  /* 1157086d push 1 */
  push32((uint32_t)(0x1u));
  /* 1157086f call 0x11574100 */
  push32(0x11570874u); f_11574100();
  /* 11570874 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570877 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157087a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1157087c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1157087f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570882 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570885 push edx */
  push32((uint32_t)(EDX));
  /* 11570886 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11570888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157088b push eax */
  push32((uint32_t)(EAX));
  /* 1157088c push 1 */
  push32((uint32_t)(0x1u));
  /* 1157088e call 0x11574100 */
  push32(0x11570893u); f_11574100();
  /* 11570893 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570896 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570899 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1157089b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1157089e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115708a1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115708a4 push edx */
  push32((uint32_t)(EDX));
  /* 115708a5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 115708a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115708aa push eax */
  push32((uint32_t)(EAX));
  /* 115708ab push 1 */
  push32((uint32_t)(0x1u));
  /* 115708ad call 0x11574100 */
  push32(0x115708b2u); f_11574100();
  /* 115708b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115708b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115708b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115708ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115708bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115708c0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115708c3 push edx */
  push32((uint32_t)(EDX));
  /* 115708c4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 115708c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115708c9 push eax */
  push32((uint32_t)(EAX));
  /* 115708ca push 1 */
  push32((uint32_t)(0x1u));
  /* 115708cc call 0x11574100 */
  push32(0x115708d1u); f_11574100();
  /* 115708d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115708d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115708d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115708d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115708dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115708df push edx */
  push32((uint32_t)(EDX));
  /* 115708e0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 115708e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115708e5 push eax */
  push32((uint32_t)(EAX));
  /* 115708e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115708e8 call 0x11574100 */
  push32(0x115708edu); f_11574100();
  /* 115708ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115708f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115708f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115708f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115708f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115708fb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115708fe push edx */
  push32((uint32_t)(EDX));
  /* 115708ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11570901 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570904 push eax */
  push32((uint32_t)(EAX));
  /* 11570905 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570907 call 0x11574100 */
  push32(0x1157090cu); f_11574100();
  /* 1157090c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157090f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570912 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570914 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570917 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157091a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157091d push edx */
  push32((uint32_t)(EDX));
  /* 1157091e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11570920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570923 push eax */
  push32((uint32_t)(EAX));
  /* 11570924 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570926 call 0x11574100 */
  push32(0x1157092bu); f_11574100();
  /* 1157092b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157092e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570931 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570933 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570936 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570939 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157093c push edx */
  push32((uint32_t)(EDX));
  /* 1157093d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1157093f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570942 push eax */
  push32((uint32_t)(EAX));
  /* 11570943 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570945 call 0x11574100 */
  push32(0x1157094au); f_11574100();
  /* 1157094a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157094d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570950 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570952 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570958 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157095b push edx */
  push32((uint32_t)(EDX));
  /* 1157095c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1157095e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570961 push eax */
  push32((uint32_t)(EAX));
  /* 11570962 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570964 call 0x11574100 */
  push32(0x11570969u); f_11574100();
  /* 11570969 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157096c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157096f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570971 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570977 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157097a push edx */
  push32((uint32_t)(EDX));
  /* 1157097b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1157097d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570980 push eax */
  push32((uint32_t)(EAX));
  /* 11570981 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570983 call 0x11574100 */
  push32(0x11570988u); f_11574100();
  /* 11570988 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157098b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157098e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570990 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570993 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570996 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570999 push edx */
  push32((uint32_t)(EDX));
  /* 1157099a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1157099c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157099f push eax */
  push32((uint32_t)(EAX));
  /* 115709a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115709a2 call 0x11574100 */
  push32(0x115709a7u); f_11574100();
  /* 115709a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115709aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115709ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115709af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115709b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115709b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115709b8 push edx */
  push32((uint32_t)(EDX));
  /* 115709b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 115709bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115709be push eax */
  push32((uint32_t)(EAX));
  /* 115709bf push 1 */
  push32((uint32_t)(0x1u));
  /* 115709c1 call 0x11574100 */
  push32(0x115709c6u); f_11574100();
  /* 115709c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115709c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115709cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115709ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115709d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115709d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115709d7 push edx */
  push32((uint32_t)(EDX));
  /* 115709d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 115709da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115709dd push eax */
  push32((uint32_t)(EAX));
  /* 115709de push 1 */
  push32((uint32_t)(0x1u));
  /* 115709e0 call 0x11574100 */
  push32(0x115709e5u); f_11574100();
  /* 115709e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115709e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115709eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115709ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115709f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115709f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115709f6 push edx */
  push32((uint32_t)(EDX));
  /* 115709f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 115709f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115709fc push eax */
  push32((uint32_t)(EAX));
  /* 115709fd push 1 */
  push32((uint32_t)(0x1u));
  /* 115709ff call 0x11574100 */
  push32(0x11570a04u); f_11574100();
  /* 11570a04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570a0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570a0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570a0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570a12 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a15 push edx */
  push32((uint32_t)(EDX));
  /* 11570a16 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11570a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570a1b push eax */
  push32((uint32_t)(EAX));
  /* 11570a1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11570a1e call 0x11574100 */
  push32(0x11570a23u); f_11574100();
  /* 11570a23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570a29 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570a2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570a2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570a31 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a34 push edx */
  push32((uint32_t)(EDX));
  /* 11570a35 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11570a37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570a3a push eax */
  push32((uint32_t)(EAX));
  /* 11570a3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11570a3d call 0x11574100 */
  push32(0x11570a42u); f_11574100();
  /* 11570a42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570a48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570a4a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570a4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570a50 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a53 push edx */
  push32((uint32_t)(EDX));
  /* 11570a54 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11570a56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570a59 push eax */
  push32((uint32_t)(EAX));
  /* 11570a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 11570a5c call 0x11574100 */
  push32(0x11570a61u); f_11574100();
  /* 11570a61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570a67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570a69 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570a6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570a6f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a72 push edx */
  push32((uint32_t)(EDX));
  /* 11570a73 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11570a75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570a78 push eax */
  push32((uint32_t)(EAX));
  /* 11570a79 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570a7b call 0x11574100 */
  push32(0x11570a80u); f_11574100();
  /* 11570a80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570a86 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570a88 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570a8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570a8e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570a91 push edx */
  push32((uint32_t)(EDX));
  /* 11570a92 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11570a94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570a97 push eax */
  push32((uint32_t)(EAX));
  /* 11570a98 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570a9a call 0x11574100 */
  push32(0x11570a9fu); f_11574100();
  /* 11570a9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570aa2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570aa5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570aa7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570aaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570aad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ab0 push edx */
  push32((uint32_t)(EDX));
  /* 11570ab1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11570ab3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570ab6 push eax */
  push32((uint32_t)(EAX));
  /* 11570ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570ab9 call 0x11574100 */
  push32(0x11570abeu); f_11574100();
  /* 11570abe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ac1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570ac4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570ac6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570acc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570acf push edx */
  push32((uint32_t)(EDX));
  /* 11570ad0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11570ad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570ad5 push eax */
  push32((uint32_t)(EAX));
  /* 11570ad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570ad8 call 0x11574100 */
  push32(0x11570addu); f_11574100();
  /* 11570add add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ae0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570ae3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570ae5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570ae8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570aeb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570aee push edx */
  push32((uint32_t)(EDX));
  /* 11570aef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11570af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570af4 push eax */
  push32((uint32_t)(EAX));
  /* 11570af5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570af7 call 0x11574100 */
  push32(0x11570afcu); f_11574100();
  /* 11570afc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570aff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570b02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570b04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570b07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570b0a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b0d push edx */
  push32((uint32_t)(EDX));
  /* 11570b0e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11570b10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570b13 push eax */
  push32((uint32_t)(EAX));
  /* 11570b14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570b16 call 0x11574100 */
  push32(0x11570b1bu); f_11574100();
  /* 11570b1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570b21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570b23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570b26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570b29 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b2c push edx */
  push32((uint32_t)(EDX));
  /* 11570b2d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 11570b2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570b32 push eax */
  push32((uint32_t)(EAX));
  /* 11570b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570b35 call 0x11574100 */
  push32(0x11570b3au); f_11574100();
  /* 11570b3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570b40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570b42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570b45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570b48 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b4b push edx */
  push32((uint32_t)(EDX));
  /* 11570b4c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11570b4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570b51 push eax */
  push32((uint32_t)(EAX));
  /* 11570b52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570b54 call 0x11574100 */
  push32(0x11570b59u); f_11574100();
  /* 11570b59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570b5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570b61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570b64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570b67 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b6a push edx */
  push32((uint32_t)(EDX));
  /* 11570b6b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11570b6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570b70 push eax */
  push32((uint32_t)(EAX));
  /* 11570b71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570b73 call 0x11574100 */
  push32(0x11570b78u); f_11574100();
  /* 11570b78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570b7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570b80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570b83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570b86 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b89 push edx */
  push32((uint32_t)(EDX));
  /* 11570b8a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11570b8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570b8f push eax */
  push32((uint32_t)(EAX));
  /* 11570b90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570b92 call 0x11574100 */
  push32(0x11570b97u); f_11574100();
  /* 11570b97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570b9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570b9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570b9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570ba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570ba5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ba8 push edx */
  push32((uint32_t)(EDX));
  /* 11570ba9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11570bab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570bae push eax */
  push32((uint32_t)(EAX));
  /* 11570baf push 1 */
  push32((uint32_t)(0x1u));
  /* 11570bb1 call 0x11574100 */
  push32(0x11570bb6u); f_11574100();
  /* 11570bb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570bb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570bbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570bbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570bc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570bc4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570bc7 push edx */
  push32((uint32_t)(EDX));
  /* 11570bc8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11570bca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570bcd push eax */
  push32((uint32_t)(EAX));
  /* 11570bce push 1 */
  push32((uint32_t)(0x1u));
  /* 11570bd0 call 0x11574100 */
  push32(0x11570bd5u); f_11574100();
  /* 11570bd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570bd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570bdb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570bdd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570be0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570be3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570be6 push edx */
  push32((uint32_t)(EDX));
  /* 11570be7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11570be9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570bec push eax */
  push32((uint32_t)(EAX));
  /* 11570bed push 1 */
  push32((uint32_t)(0x1u));
  /* 11570bef call 0x11574100 */
  push32(0x11570bf4u); f_11574100();
  /* 11570bf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570bf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570bfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570bfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570bff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570c02 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570c08 push edx */
  push32((uint32_t)(EDX));
  /* 11570c09 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11570c0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570c0e push eax */
  push32((uint32_t)(EAX));
  /* 11570c0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11570c11 call 0x11574100 */
  push32(0x11570c16u); f_11574100();
  /* 11570c16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570c19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570c1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570c1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570c21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570c24 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570c2a push edx */
  push32((uint32_t)(EDX));
  /* 11570c2b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11570c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570c30 push eax */
  push32((uint32_t)(EAX));
  /* 11570c31 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570c33 call 0x11574100 */
  push32(0x11570c38u); f_11574100();
  /* 11570c38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570c3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570c3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570c40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570c43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570c46 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570c4c push edx */
  push32((uint32_t)(EDX));
  /* 11570c4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11570c4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570c52 push eax */
  push32((uint32_t)(EAX));
  /* 11570c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570c55 call 0x11574100 */
  push32(0x11570c5au); f_11574100();
  /* 11570c5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570c5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570c60 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570c62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570c65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570c68 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570c6e push edx */
  push32((uint32_t)(EDX));
  /* 11570c6f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11570c71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570c74 push eax */
  push32((uint32_t)(EAX));
  /* 11570c75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570c77 call 0x11574100 */
  push32(0x11570c7cu); f_11574100();
  /* 11570c7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570c7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570c82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570c84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570c87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570c8a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570c90 push edx */
  push32((uint32_t)(EDX));
  /* 11570c91 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11570c93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570c96 push eax */
  push32((uint32_t)(EAX));
  /* 11570c97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570c99 call 0x11574100 */
  push32(0x11570c9eu); f_11574100();
  /* 11570c9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ca1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570ca4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570ca6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570ca9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570cac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570cb2 push edx */
  push32((uint32_t)(EDX));
  /* 11570cb3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11570cb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570cb8 push eax */
  push32((uint32_t)(EAX));
  /* 11570cb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570cbb call 0x11574100 */
  push32(0x11570cc0u); f_11574100();
  /* 11570cc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570cc3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570cc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570cc8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570ccb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570cce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570cd4 push edx */
  push32((uint32_t)(EDX));
  /* 11570cd5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11570cd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570cda push eax */
  push32((uint32_t)(EAX));
  /* 11570cdb push 1 */
  push32((uint32_t)(0x1u));
  /* 11570cdd call 0x11574100 */
  push32(0x11570ce2u); f_11574100();
  /* 11570ce2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ce5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570ce8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570cea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570ced mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570cf0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570cf6 push edx */
  push32((uint32_t)(EDX));
  /* 11570cf7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11570cf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11570cfc push eax */
  push32((uint32_t)(EAX));
  /* 11570cfd push 1 */
  push32((uint32_t)(0x1u));
  /* 11570cff call 0x11574100 */
  push32(0x11570d04u); f_11574100();
  /* 11570d04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570d07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570d0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570d0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570d0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570d12 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570d18 push edx */
  push32((uint32_t)(EDX));
  /* 11570d19 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11570d1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11570d1e push eax */
  push32((uint32_t)(EAX));
  /* 11570d1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11570d21 call 0x11574100 */
  push32(0x11570d26u); f_11574100();
  /* 11570d26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570d29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570d2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570d2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570d31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570d34 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570d3a push edx */
  push32((uint32_t)(EDX));
  /* 11570d3b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11570d3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11570d40 push eax */
  push32((uint32_t)(EAX));
  /* 11570d41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570d43 call 0x11574100 */
  push32(0x11570d48u); f_11574100();
  /* 11570d48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570d4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570d4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570d50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570d53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570d56 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11570d5c push edx */
  push32((uint32_t)(EDX));
  /* 11570d5d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11570d62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11570d65 push eax */
  push32((uint32_t)(EAX));
  /* 11570d66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11570d68 call 0x11574100 */
  push32(0x11570d6du); f_11574100();
  /* 11570d6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570d70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11570d73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11570d75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11570d78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11570d7b:;
  /* 11570d7b mov esp, ebp */
  ESP = (EBP);
  /* 11570d7d pop ebp */
  EBP = (pop32());
  /* 11570d7e ret  */
  ESPCHK(0x115707f0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11570d80 (779 bytes, 265 insns) */
void f_11570d80(void) {
  FTRACE(0x11570d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11570d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11570d81 mov ebp, esp */
  EBP = (ESP);
  /* 11570d83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11570d87 jne 0x11570d8e */
  if (!C.zf) goto L_11570d8e;
  /* 11570d89 jmp 0x11571089 */
  goto L_11571089;
L_11570d8e:;
  /* 11570d8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11570d90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570d93 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11570d96 push ecx */
  push32((uint32_t)(ECX));
  /* 11570d97 call 0x115669d0 */
  push32(0x11570d9cu); f_115669d0();
  /* 11570d9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 11570da1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570da4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11570da7 push eax */
  push32((uint32_t)(EAX));
  /* 11570da8 call 0x115669d0 */
  push32(0x11570dadu); f_115669d0();
  /* 11570dad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570db0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570db2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570db5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11570db8 push edx */
  push32((uint32_t)(EDX));
  /* 11570db9 call 0x115669d0 */
  push32(0x11570dbeu); f_115669d0();
  /* 11570dbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570dc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570dc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570dc6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11570dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11570dca call 0x115669d0 */
  push32(0x11570dcfu); f_115669d0();
  /* 11570dcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570dd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570dd7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11570dda push eax */
  push32((uint32_t)(EAX));
  /* 11570ddb call 0x115669d0 */
  push32(0x11570de0u); f_115669d0();
  /* 11570de0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570de3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570de5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570de8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11570deb push edx */
  push32((uint32_t)(EDX));
  /* 11570dec call 0x115669d0 */
  push32(0x11570df1u); f_115669d0();
  /* 11570df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570df4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570df9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11570dfb push ecx */
  push32((uint32_t)(ECX));
  /* 11570dfc call 0x115669d0 */
  push32(0x11570e01u); f_115669d0();
  /* 11570e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e04 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570e09 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11570e0c push eax */
  push32((uint32_t)(EAX));
  /* 11570e0d call 0x115669d0 */
  push32(0x11570e12u); f_115669d0();
  /* 11570e12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570e1a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11570e1d push edx */
  push32((uint32_t)(EDX));
  /* 11570e1e call 0x115669d0 */
  push32(0x11570e23u); f_115669d0();
  /* 11570e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570e2b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11570e2e push ecx */
  push32((uint32_t)(ECX));
  /* 11570e2f call 0x115669d0 */
  push32(0x11570e34u); f_115669d0();
  /* 11570e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570e3c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11570e3f push eax */
  push32((uint32_t)(EAX));
  /* 11570e40 call 0x115669d0 */
  push32(0x11570e45u); f_115669d0();
  /* 11570e45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570e4d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11570e50 push edx */
  push32((uint32_t)(EDX));
  /* 11570e51 call 0x115669d0 */
  push32(0x11570e56u); f_115669d0();
  /* 11570e56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570e5e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11570e61 push ecx */
  push32((uint32_t)(ECX));
  /* 11570e62 call 0x115669d0 */
  push32(0x11570e67u); f_115669d0();
  /* 11570e67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570e6f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11570e72 push eax */
  push32((uint32_t)(EAX));
  /* 11570e73 call 0x115669d0 */
  push32(0x11570e78u); f_115669d0();
  /* 11570e78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e7b push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570e80 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11570e83 push edx */
  push32((uint32_t)(EDX));
  /* 11570e84 call 0x115669d0 */
  push32(0x11570e89u); f_115669d0();
  /* 11570e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e8c push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570e91 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11570e94 push ecx */
  push32((uint32_t)(ECX));
  /* 11570e95 call 0x115669d0 */
  push32(0x11570e9au); f_115669d0();
  /* 11570e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11570e9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570ea2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11570ea5 push eax */
  push32((uint32_t)(EAX));
  /* 11570ea6 call 0x115669d0 */
  push32(0x11570eabu); f_115669d0();
  /* 11570eab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570eae push 2 */
  push32((uint32_t)(0x2u));
  /* 11570eb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570eb3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11570eb6 push edx */
  push32((uint32_t)(EDX));
  /* 11570eb7 call 0x115669d0 */
  push32(0x11570ebcu); f_115669d0();
  /* 11570ebc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ebf push 2 */
  push32((uint32_t)(0x2u));
  /* 11570ec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570ec4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11570ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 11570ec8 call 0x115669d0 */
  push32(0x11570ecdu); f_115669d0();
  /* 11570ecd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ed0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570ed2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570ed5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11570ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11570ed9 call 0x115669d0 */
  push32(0x11570edeu); f_115669d0();
  /* 11570ede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ee1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570ee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570ee6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11570ee9 push edx */
  push32((uint32_t)(EDX));
  /* 11570eea call 0x115669d0 */
  push32(0x11570eefu); f_115669d0();
  /* 11570eef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ef2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570ef7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11570efa push ecx */
  push32((uint32_t)(ECX));
  /* 11570efb call 0x115669d0 */
  push32(0x11570f00u); f_115669d0();
  /* 11570f00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f03 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570f08 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11570f0b push eax */
  push32((uint32_t)(EAX));
  /* 11570f0c call 0x115669d0 */
  push32(0x11570f11u); f_115669d0();
  /* 11570f11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f14 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570f19 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11570f1c push edx */
  push32((uint32_t)(EDX));
  /* 11570f1d call 0x115669d0 */
  push32(0x11570f22u); f_115669d0();
  /* 11570f22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570f2a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11570f2d push ecx */
  push32((uint32_t)(ECX));
  /* 11570f2e call 0x115669d0 */
  push32(0x11570f33u); f_115669d0();
  /* 11570f33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f36 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570f3b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11570f3e push eax */
  push32((uint32_t)(EAX));
  /* 11570f3f call 0x115669d0 */
  push32(0x11570f44u); f_115669d0();
  /* 11570f44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f47 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570f4c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11570f4f push edx */
  push32((uint32_t)(EDX));
  /* 11570f50 call 0x115669d0 */
  push32(0x11570f55u); f_115669d0();
  /* 11570f55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570f5d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11570f60 push ecx */
  push32((uint32_t)(ECX));
  /* 11570f61 call 0x115669d0 */
  push32(0x11570f66u); f_115669d0();
  /* 11570f66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570f6e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11570f71 push eax */
  push32((uint32_t)(EAX));
  /* 11570f72 call 0x115669d0 */
  push32(0x11570f77u); f_115669d0();
  /* 11570f77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570f7f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11570f82 push edx */
  push32((uint32_t)(EDX));
  /* 11570f83 call 0x115669d0 */
  push32(0x11570f88u); f_115669d0();
  /* 11570f88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570f90 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11570f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11570f94 call 0x115669d0 */
  push32(0x11570f99u); f_115669d0();
  /* 11570f99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570f9c push 2 */
  push32((uint32_t)(0x2u));
  /* 11570f9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570fa1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11570fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11570fa5 call 0x115669d0 */
  push32(0x11570faau); f_115669d0();
  /* 11570faa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570fad push 2 */
  push32((uint32_t)(0x2u));
  /* 11570faf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570fb2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11570fb8 push edx */
  push32((uint32_t)(EDX));
  /* 11570fb9 call 0x115669d0 */
  push32(0x11570fbeu); f_115669d0();
  /* 11570fbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570fc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570fc6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11570fcc push ecx */
  push32((uint32_t)(ECX));
  /* 11570fcd call 0x115669d0 */
  push32(0x11570fd2u); f_115669d0();
  /* 11570fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570fd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570fd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570fda mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11570fe0 push eax */
  push32((uint32_t)(EAX));
  /* 11570fe1 call 0x115669d0 */
  push32(0x11570fe6u); f_115669d0();
  /* 11570fe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570fe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11570feb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11570fee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11570ff4 push edx */
  push32((uint32_t)(EDX));
  /* 11570ff5 call 0x115669d0 */
  push32(0x11570ffau); f_115669d0();
  /* 11570ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11570ffd push 2 */
  push32((uint32_t)(0x2u));
  /* 11570fff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571002 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11571008 push ecx */
  push32((uint32_t)(ECX));
  /* 11571009 call 0x115669d0 */
  push32(0x1157100eu); f_115669d0();
  /* 1157100e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571011 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571016 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1157101c push eax */
  push32((uint32_t)(EAX));
  /* 1157101d call 0x115669d0 */
  push32(0x11571022u); f_115669d0();
  /* 11571022 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571025 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157102a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11571030 push edx */
  push32((uint32_t)(EDX));
  /* 11571031 call 0x115669d0 */
  push32(0x11571036u); f_115669d0();
  /* 11571036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571039 push 2 */
  push32((uint32_t)(0x2u));
  /* 1157103b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157103e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11571044 push ecx */
  push32((uint32_t)(ECX));
  /* 11571045 call 0x115669d0 */
  push32(0x1157104au); f_115669d0();
  /* 1157104a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157104d push 2 */
  push32((uint32_t)(0x2u));
  /* 1157104f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571052 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11571058 push eax */
  push32((uint32_t)(EAX));
  /* 11571059 call 0x115669d0 */
  push32(0x1157105eu); f_115669d0();
  /* 1157105e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571061 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571063 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571066 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1157106c push edx */
  push32((uint32_t)(EDX));
  /* 1157106d call 0x115669d0 */
  push32(0x11571072u); f_115669d0();
  /* 11571072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571075 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157107a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11571080 push ecx */
  push32((uint32_t)(ECX));
  /* 11571081 call 0x115669d0 */
  push32(0x11571086u); f_115669d0();
  /* 11571086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11571089:;
  /* 11571089 pop ebp */
  EBP = (pop32());
  /* 1157108a ret  */
  ESPCHK(0x11570d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011090 @ 0x11571090 (678 bytes, 180 insns) */
void f_11571090(void) {
  FTRACE(0x11571090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571090 push ebp */
  push32((uint32_t)(EBP));
  /* 11571091 mov ebp, esp */
  EBP = (ESP);
  /* 11571093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11571096 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1157109d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157109f mov ax, word ptr [0x115921f2] */
  AX = (r16((uint32_t)(0x115921f2)));
  /* 115710a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115710a8 cmp dword ptr [0x11592198], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592198))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115710af je 0x1157120a */
  if (C.zf) goto L_1157120a;
  /* 115710b5 push 0x115921c0 */
  push32((uint32_t)(0x115921c0u));
  /* 115710ba push 0xe */
  push32((uint32_t)(0xeu));
  /* 115710bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115710bf push ecx */
  push32((uint32_t)(ECX));
  /* 115710c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 115710c2 call 0x11574100 */
  push32(0x115710c7u); f_11574100();
  /* 115710c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115710ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115710cd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 115710cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115710d2 push 0x115921c4 */
  push32((uint32_t)(0x115921c4u));
  /* 115710d7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 115710d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115710dc push eax */
  push32((uint32_t)(EAX));
  /* 115710dd push 1 */
  push32((uint32_t)(0x1u));
  /* 115710df call 0x11574100 */
  push32(0x115710e4u); f_11574100();
  /* 115710e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115710e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115710ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115710ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115710ef push 0x115921c8 */
  push32((uint32_t)(0x115921c8u));
  /* 115710f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 115710f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115710f9 push edx */
  push32((uint32_t)(EDX));
  /* 115710fa push 1 */
  push32((uint32_t)(0x1u));
  /* 115710fc call 0x11574100 */
  push32(0x11571101u); f_11574100();
  /* 11571101 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571104 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11571107 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11571109 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1157110c mov edx, dword ptr [0x115921c8] */
  EDX = (r32((uint32_t)(0x115921c8)));
  /* 11571112 push edx */
  push32((uint32_t)(EDX));
  /* 11571113 call 0x11571340 */
  push32(0x11571118u); f_11571340();
  /* 11571118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157111b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157111f je 0x11571179 */
  if (C.zf) goto L_11571179;
  /* 11571121 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571123 mov eax, dword ptr [0x115921c0] */
  EAX = (r32((uint32_t)(0x115921c0)));
  /* 11571128 push eax */
  push32((uint32_t)(EAX));
  /* 11571129 call 0x115669d0 */
  push32(0x1157112eu); f_115669d0();
  /* 1157112e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571131 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571133 mov ecx, dword ptr [0x115921c4] */
  ECX = (r32((uint32_t)(0x115921c4)));
  /* 11571139 push ecx */
  push32((uint32_t)(ECX));
  /* 1157113a call 0x115669d0 */
  push32(0x1157113fu); f_115669d0();
  /* 1157113f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571142 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571144 mov edx, dword ptr [0x115921c8] */
  EDX = (r32((uint32_t)(0x115921c8)));
  /* 1157114a push edx */
  push32((uint32_t)(EDX));
  /* 1157114b call 0x115669d0 */
  push32(0x11571150u); f_115669d0();
  /* 11571150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571153 mov dword ptr [0x115921c0], 0 */
  w32((uint32_t)(0x115921c0), (0x0u));
  /* 1157115d mov dword ptr [0x115921c4], 0 */
  w32((uint32_t)(0x115921c4), (0x0u));
  /* 11571167 mov dword ptr [0x115921c8], 0 */
  w32((uint32_t)(0x115921c8), (0x0u));
  /* 11571171 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11571174 jmp 0x11571332 */
  goto L_11571332;
L_11571179:;
  /* 11571179 mov eax, dword ptr [0x11590d88] */
  EAX = (r32((uint32_t)(0x11590d88)));
  /* 1157117e cmp dword ptr [eax], 0x11590d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11590d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571184 je 0x115711c0 */
  if (C.zf) goto L_115711c0;
  /* 11571186 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571188 mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 1157118e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11571190 push edx */
  push32((uint32_t)(EDX));
  /* 11571191 call 0x115669d0 */
  push32(0x11571196u); f_115669d0();
  /* 11571196 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571199 push 2 */
  push32((uint32_t)(0x2u));
  /* 1157119b mov eax, dword ptr [0x11590d88] */
  EAX = (r32((uint32_t)(0x11590d88)));
  /* 115711a0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115711a3 push ecx */
  push32((uint32_t)(ECX));
  /* 115711a4 call 0x115669d0 */
  push32(0x115711a9u); f_115669d0();
  /* 115711a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115711ac push 2 */
  push32((uint32_t)(0x2u));
  /* 115711ae mov edx, dword ptr [0x11590d88] */
  EDX = (r32((uint32_t)(0x11590d88)));
  /* 115711b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115711b7 push eax */
  push32((uint32_t)(EAX));
  /* 115711b8 call 0x115669d0 */
  push32(0x115711bdu); f_115669d0();
  /* 115711bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115711c0:;
  /* 115711c0 mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 115711c6 mov edx, dword ptr [0x115921c0] */
  EDX = (r32((uint32_t)(0x115921c0)));
  /* 115711cc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 115711ce mov eax, dword ptr [0x11590d88] */
  EAX = (r32((uint32_t)(0x11590d88)));
  /* 115711d3 mov ecx, dword ptr [0x115921c4] */
  ECX = (r32((uint32_t)(0x115921c4)));
  /* 115711d9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 115711dc mov edx, dword ptr [0x11590d88] */
  EDX = (r32((uint32_t)(0x11590d88)));
  /* 115711e2 mov eax, dword ptr [0x115921c8] */
  EAX = (r32((uint32_t)(0x115921c8)));
  /* 115711e7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115711ea mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 115711f0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115711f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 115711f4 mov byte ptr [0x1158fea8], al */
  w8((uint32_t)(0x1158fea8), (AL));
  /* 115711f9 mov dword ptr [0x1158feac], 1 */
  w32((uint32_t)(0x1158feac), (0x1u));
  /* 11571203 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571205 jmp 0x11571332 */
  goto L_11571332;
L_1157120a:;
  /* 1157120a push 2 */
  push32((uint32_t)(0x2u));
  /* 1157120c mov ecx, dword ptr [0x115921c0] */
  ECX = (r32((uint32_t)(0x115921c0)));
  /* 11571212 push ecx */
  push32((uint32_t)(ECX));
  /* 11571213 call 0x115669d0 */
  push32(0x11571218u); f_115669d0();
  /* 11571218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157121b push 2 */
  push32((uint32_t)(0x2u));
  /* 1157121d mov edx, dword ptr [0x115921c4] */
  EDX = (r32((uint32_t)(0x115921c4)));
  /* 11571223 push edx */
  push32((uint32_t)(EDX));
  /* 11571224 call 0x115669d0 */
  push32(0x11571229u); f_115669d0();
  /* 11571229 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157122c push 2 */
  push32((uint32_t)(0x2u));
  /* 1157122e mov eax, dword ptr [0x115921c8] */
  EAX = (r32((uint32_t)(0x115921c8)));
  /* 11571233 push eax */
  push32((uint32_t)(EAX));
  /* 11571234 call 0x115669d0 */
  push32(0x11571239u); f_115669d0();
  /* 11571239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157123c mov dword ptr [0x115921c0], 0 */
  w32((uint32_t)(0x115921c0), (0x0u));
  /* 11571246 mov dword ptr [0x115921c4], 0 */
  w32((uint32_t)(0x115921c4), (0x0u));
  /* 11571250 mov dword ptr [0x115921c8], 0 */
  w32((uint32_t)(0x115921c8), (0x0u));
  /* 1157125a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1157125f push 0x1158d17c */
  push32((uint32_t)(0x1158d17cu));
  /* 11571264 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571266 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571268 call 0x11565f40 */
  push32(0x1157126du); f_11565f40();
  /* 1157126d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571270 mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 11571276 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11571278 mov edx, dword ptr [0x11590d88] */
  EDX = (r32((uint32_t)(0x11590d88)));
  /* 1157127e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571281 jne 0x1157128b */
  if (!C.zf) goto L_1157128b;
  /* 11571283 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11571286 jmp 0x11571332 */
  goto L_11571332;
L_1157128b:;
  /* 1157128b push 0x1158d14c */
  push32((uint32_t)(0x1158d14cu));
  /* 11571290 mov eax, dword ptr [0x11590d88] */
  EAX = (r32((uint32_t)(0x11590d88)));
  /* 11571295 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11571297 push ecx */
  push32((uint32_t)(ECX));
  /* 11571298 call 0x11568ef0 */
  push32(0x1157129du); f_11568ef0();
  /* 1157129d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115712a0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 115712a5 push 0x1158d17c */
  push32((uint32_t)(0x1158d17cu));
  /* 115712aa push 2 */
  push32((uint32_t)(0x2u));
  /* 115712ac push 2 */
  push32((uint32_t)(0x2u));
  /* 115712ae call 0x11565f40 */
  push32(0x115712b3u); f_11565f40();
  /* 115712b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115712b6 mov edx, dword ptr [0x11590d88] */
  EDX = (r32((uint32_t)(0x11590d88)));
  /* 115712bc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 115712bf mov eax, dword ptr [0x11590d88] */
  EAX = (r32((uint32_t)(0x11590d88)));
  /* 115712c4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115712c8 jne 0x115712cf */
  if (!C.zf) goto L_115712cf;
  /* 115712ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115712cd jmp 0x11571332 */
  goto L_11571332;
L_115712cf:;
  /* 115712cf mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 115712d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 115712d8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 115712db push 0x92 */
  push32((uint32_t)(0x92u));
  /* 115712e0 push 0x1158d17c */
  push32((uint32_t)(0x1158d17cu));
  /* 115712e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 115712e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115712e9 call 0x11565f40 */
  push32(0x115712eeu); f_11565f40();
  /* 115712ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115712f1 mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 115712f7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 115712fa mov edx, dword ptr [0x11590d88] */
  EDX = (r32((uint32_t)(0x11590d88)));
  /* 11571300 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571304 jne 0x1157130b */
  if (!C.zf) goto L_1157130b;
  /* 11571306 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11571309 jmp 0x11571332 */
  goto L_11571332;
L_1157130b:;
  /* 1157130b mov eax, dword ptr [0x11590d88] */
  EAX = (r32((uint32_t)(0x11590d88)));
  /* 11571310 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11571313 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11571316 mov edx, dword ptr [0x11590d88] */
  EDX = (r32((uint32_t)(0x11590d88)));
  /* 1157131c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1157131e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11571320 mov byte ptr [0x1158fea8], cl */
  w8((uint32_t)(0x1158fea8), (CL));
  /* 11571326 mov dword ptr [0x1158feac], 1 */
  w32((uint32_t)(0x1158feac), (0x1u));
  /* 11571330 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11571332:;
  /* 11571332 mov esp, ebp */
  ESP = (EBP);
  /* 11571334 pop ebp */
  EBP = (pop32());
  /* 11571335 ret  */
  ESPCHK(0x11571090u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11571340 (125 bytes, 49 insns) */
void f_11571340(void) {
  FTRACE(0x11571340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571340 push ebp */
  push32((uint32_t)(EBP));
  /* 11571341 mov ebp, esp */
  EBP = (ESP);
  /* 11571343 push ecx */
  push32((uint32_t)(ECX));
L_11571344:;
  /* 11571344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571347 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1157134a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1157134c je 0x115713b9 */
  if (C.zf) goto L_115713b9;
  /* 1157134e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571351 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11571354 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571357 jl 0x1157137d */
  if ((C.sf!=C.of)) goto L_1157137d;
  /* 11571359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157135c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1157135f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571362 jg 0x1157137d */
  if ((!C.zf&&C.sf==C.of)) goto L_1157137d;
  /* 11571364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571367 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1157136a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1157136d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571370 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11571372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571375 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571378 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1157137b jmp 0x115713b7 */
  goto L_115713b7;
L_1157137d:;
  /* 1157137d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571380 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11571383 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571386 jne 0x115713ae */
  if (!C.zf) goto L_115713ae;
  /* 11571388 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157138b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1157138e:;
  /* 1157138e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571394 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11571397 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11571399 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157139c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157139f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115713a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115713a5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115713a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115713aa jne 0x1157138e */
  if (!C.zf) goto L_1157138e;
  /* 115713ac jmp 0x115713b7 */
  goto L_115713b7;
L_115713ae:;
  /* 115713ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115713b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115713b4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_115713b7:;
  /* 115713b7 jmp 0x11571344 */
  goto L_11571344;
L_115713b9:;
  /* 115713b9 mov esp, ebp */
  ESP = (EBP);
  /* 115713bb pop ebp */
  EBP = (pop32());
  /* 115713bc ret  */
  ESPCHK(0x11571340u, _esp0);
  ESP += 4; return;
}

/* FUN_100113c0 @ 0x115713c0 (304 bytes, 85 insns) */
void f_115713c0(void) {
  FTRACE(0x115713c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115713c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115713c1 mov ebp, esp */
  EBP = (ESP);
  /* 115713c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115713c4 cmp dword ptr [0x11592194], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592194))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115713cb je 0x1157148c */
  if (C.zf) goto L_1157148c;
  /* 115713d1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 115713d3 push 0x1158d188 */
  push32((uint32_t)(0x1158d188u));
  /* 115713d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 115713da push 0x30 */
  push32((uint32_t)(0x30u));
  /* 115713dc push 1 */
  push32((uint32_t)(0x1u));
  /* 115713de call 0x11566350 */
  push32(0x115713e3u); f_11566350();
  /* 115713e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115713e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115713e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115713ed jne 0x115713f9 */
  if (!C.zf) goto L_115713f9;
  /* 115713ef mov eax, 1 */
  EAX = (0x1u);
  /* 115713f4 jmp 0x115714ec */
  goto L_115714ec;
L_115713f9:;
  /* 115713f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115713fc push eax */
  push32((uint32_t)(EAX));
  /* 115713fd call 0x115714f0 */
  push32(0x11571402u); f_115714f0();
  /* 11571402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571407 je 0x1157142d */
  if (C.zf) goto L_1157142d;
  /* 11571409 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157140c push ecx */
  push32((uint32_t)(ECX));
  /* 1157140d call 0x11571780 */
  push32(0x11571412u); f_11571780();
  /* 11571412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571415 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571417 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157141a push edx */
  push32((uint32_t)(EDX));
  /* 1157141b call 0x115669d0 */
  push32(0x11571420u); f_115669d0();
  /* 11571420 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571423 mov eax, 1 */
  EAX = (0x1u);
  /* 11571428 jmp 0x115714ec */
  goto L_115714ec;
L_1157142d:;
  /* 1157142d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571430 mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 11571436 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11571438 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1157143a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157143d mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 11571443 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11571446 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11571449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157144c mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 11571452 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11571455 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11571458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157145b mov dword ptr [0x11590d88], eax */
  w32((uint32_t)(0x11590d88), (EAX));
  /* 11571460 mov ecx, dword ptr [0x115921cc] */
  ECX = (r32((uint32_t)(0x115921cc)));
  /* 11571466 push ecx */
  push32((uint32_t)(ECX));
  /* 11571467 call 0x11571780 */
  push32(0x1157146cu); f_11571780();
  /* 1157146c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157146f push 2 */
  push32((uint32_t)(0x2u));
  /* 11571471 mov edx, dword ptr [0x115921cc] */
  EDX = (r32((uint32_t)(0x115921cc)));
  /* 11571477 push edx */
  push32((uint32_t)(EDX));
  /* 11571478 call 0x115669d0 */
  push32(0x1157147du); f_115669d0();
  /* 1157147d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571480 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571483 mov dword ptr [0x115921cc], eax */
  w32((uint32_t)(0x115921cc), (EAX));
  /* 11571488 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157148a jmp 0x115714ec */
  goto L_115714ec;
L_1157148c:;
  /* 1157148c mov ecx, dword ptr [0x11590d88] */
  ECX = (r32((uint32_t)(0x11590d88)));
  /* 11571492 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11571494 mov dword ptr [0x11590d58], edx */
  w32((uint32_t)(0x11590d58), (EDX));
  /* 1157149a mov eax, dword ptr [0x11590d88] */
  EAX = (r32((uint32_t)(0x11590d88)));
  /* 1157149f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115714a2 mov dword ptr [0x11590d5c], ecx */
  w32((uint32_t)(0x11590d5c), (ECX));
  /* 115714a8 mov edx, dword ptr [0x11590d88] */
  EDX = (r32((uint32_t)(0x11590d88)));
  /* 115714ae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 115714b1 mov dword ptr [0x11590d60], eax */
  w32((uint32_t)(0x11590d60), (EAX));
  /* 115714b6 mov dword ptr [0x11590d88], 0x11590d58 */
  w32((uint32_t)(0x11590d88), (0x11590d58u));
  /* 115714c0 mov ecx, dword ptr [0x115921cc] */
  ECX = (r32((uint32_t)(0x115921cc)));
  /* 115714c6 push ecx */
  push32((uint32_t)(ECX));
  /* 115714c7 call 0x11571780 */
  push32(0x115714ccu); f_11571780();
  /* 115714cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115714cf push 2 */
  push32((uint32_t)(0x2u));
  /* 115714d1 mov edx, dword ptr [0x115921cc] */
  EDX = (r32((uint32_t)(0x115921cc)));
  /* 115714d7 push edx */
  push32((uint32_t)(EDX));
  /* 115714d8 call 0x115669d0 */
  push32(0x115714ddu); f_115669d0();
  /* 115714dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115714e0 mov dword ptr [0x115921cc], 0 */
  w32((uint32_t)(0x115921cc), (0x0u));
  /* 115714ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115714ec:;
  /* 115714ec mov esp, ebp */
  ESP = (EBP);
  /* 115714ee pop ebp */
  EBP = (pop32());
  /* 115714ef ret  */
  ESPCHK(0x115713c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x115714f0 (525 bytes, 200 insns) */
void f_115714f0(void) {
  FTRACE(0x115714f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115714f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115714f1 mov ebp, esp */
  EBP = (ESP);
  /* 115714f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115714f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 115714fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115714ff mov ax, word ptr [0x115921ec] */
  AX = (r16((uint32_t)(0x115921ec)));
  /* 11571505 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11571508 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157150c jne 0x11571516 */
  if (!C.zf) goto L_11571516;
  /* 1157150e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11571511 jmp 0x115716f9 */
  goto L_115716f9;
L_11571516:;
  /* 11571516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571519 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157151c push ecx */
  push32((uint32_t)(ECX));
  /* 1157151d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1157151f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571522 push edx */
  push32((uint32_t)(EDX));
  /* 11571523 push 1 */
  push32((uint32_t)(0x1u));
  /* 11571525 call 0x11574100 */
  push32(0x1157152au); f_11574100();
  /* 1157152a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157152d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11571530 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11571532 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11571535 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571538 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157153b push edx */
  push32((uint32_t)(EDX));
  /* 1157153c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1157153e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571541 push eax */
  push32((uint32_t)(EAX));
  /* 11571542 push 1 */
  push32((uint32_t)(0x1u));
  /* 11571544 call 0x11574100 */
  push32(0x11571549u); f_11574100();
  /* 11571549 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157154c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157154f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11571551 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11571554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571557 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157155a push edx */
  push32((uint32_t)(EDX));
  /* 1157155b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1157155d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571560 push eax */
  push32((uint32_t)(EAX));
  /* 11571561 push 1 */
  push32((uint32_t)(0x1u));
  /* 11571563 call 0x11574100 */
  push32(0x11571568u); f_11574100();
  /* 11571568 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157156b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157156e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11571570 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11571573 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571576 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571579 push edx */
  push32((uint32_t)(EDX));
  /* 1157157a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1157157c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157157f push eax */
  push32((uint32_t)(EAX));
  /* 11571580 push 1 */
  push32((uint32_t)(0x1u));
  /* 11571582 call 0x11574100 */
  push32(0x11571587u); f_11574100();
  /* 11571587 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157158a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157158d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1157158f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11571592 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571595 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571598 push edx */
  push32((uint32_t)(EDX));
  /* 11571599 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1157159b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157159e push eax */
  push32((uint32_t)(EAX));
  /* 1157159f push 1 */
  push32((uint32_t)(0x1u));
  /* 115715a1 call 0x11574100 */
  push32(0x115715a6u); f_11574100();
  /* 115715a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115715a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115715ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115715ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115715b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115715b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115715b7 push eax */
  push32((uint32_t)(EAX));
  /* 115715b8 call 0x11571700 */
  push32(0x115715bdu); f_11571700();
  /* 115715bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115715c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115715c3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115715c6 push ecx */
  push32((uint32_t)(ECX));
  /* 115715c7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 115715c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115715cc push edx */
  push32((uint32_t)(EDX));
  /* 115715cd push 1 */
  push32((uint32_t)(0x1u));
  /* 115715cf call 0x11574100 */
  push32(0x115715d4u); f_11574100();
  /* 115715d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115715d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115715da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115715dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115715df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115715e2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115715e5 push edx */
  push32((uint32_t)(EDX));
  /* 115715e6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 115715e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115715eb push eax */
  push32((uint32_t)(EAX));
  /* 115715ec push 1 */
  push32((uint32_t)(0x1u));
  /* 115715ee call 0x11574100 */
  push32(0x115715f3u); f_11574100();
  /* 115715f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115715f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115715f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115715fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115715fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571601 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571604 push edx */
  push32((uint32_t)(EDX));
  /* 11571605 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11571607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157160a push eax */
  push32((uint32_t)(EAX));
  /* 1157160b push 0 */
  push32((uint32_t)(0x0u));
  /* 1157160d call 0x11574100 */
  push32(0x11571612u); f_11574100();
  /* 11571612 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571615 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11571618 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1157161a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1157161d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571620 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571623 push edx */
  push32((uint32_t)(EDX));
  /* 11571624 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11571626 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571629 push eax */
  push32((uint32_t)(EAX));
  /* 1157162a push 0 */
  push32((uint32_t)(0x0u));
  /* 1157162c call 0x11574100 */
  push32(0x11571631u); f_11574100();
  /* 11571631 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571634 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11571637 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11571639 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1157163c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157163f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571642 push edx */
  push32((uint32_t)(EDX));
  /* 11571643 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11571645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571648 push eax */
  push32((uint32_t)(EAX));
  /* 11571649 push 0 */
  push32((uint32_t)(0x0u));
  /* 1157164b call 0x11574100 */
  push32(0x11571650u); f_11574100();
  /* 11571650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571653 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11571656 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11571658 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1157165b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157165e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571661 push edx */
  push32((uint32_t)(EDX));
  /* 11571662 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11571664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571667 push eax */
  push32((uint32_t)(EAX));
  /* 11571668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1157166a call 0x11574100 */
  push32(0x1157166fu); f_11574100();
  /* 1157166f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571672 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11571675 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11571677 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1157167a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157167d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571680 push edx */
  push32((uint32_t)(EDX));
  /* 11571681 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11571683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571686 push eax */
  push32((uint32_t)(EAX));
  /* 11571687 push 0 */
  push32((uint32_t)(0x0u));
  /* 11571689 call 0x11574100 */
  push32(0x1157168eu); f_11574100();
  /* 1157168e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571691 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11571694 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11571696 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11571699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157169c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157169f push edx */
  push32((uint32_t)(EDX));
  /* 115716a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 115716a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115716a5 push eax */
  push32((uint32_t)(EAX));
  /* 115716a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115716a8 call 0x11574100 */
  push32(0x115716adu); f_11574100();
  /* 115716ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115716b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115716b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115716b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115716b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115716bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115716be push edx */
  push32((uint32_t)(EDX));
  /* 115716bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 115716c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115716c4 push eax */
  push32((uint32_t)(EAX));
  /* 115716c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115716c7 call 0x11574100 */
  push32(0x115716ccu); f_11574100();
  /* 115716cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115716cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115716d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115716d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115716d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115716da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115716dd push edx */
  push32((uint32_t)(EDX));
  /* 115716de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 115716e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115716e3 push eax */
  push32((uint32_t)(EAX));
  /* 115716e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115716e6 call 0x11574100 */
  push32(0x115716ebu); f_11574100();
  /* 115716eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115716ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115716f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115716f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115716f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115716f9:;
  /* 115716f9 mov esp, ebp */
  ESP = (EBP);
  /* 115716fb pop ebp */
  EBP = (pop32());
  /* 115716fc ret  */
  ESPCHK(0x115714f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11571700 (125 bytes, 49 insns) */
void f_11571700(void) {
  FTRACE(0x11571700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571700 push ebp */
  push32((uint32_t)(EBP));
  /* 11571701 mov ebp, esp */
  EBP = (ESP);
  /* 11571703 push ecx */
  push32((uint32_t)(ECX));
L_11571704:;
  /* 11571704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571707 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1157170a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1157170c je 0x11571779 */
  if (C.zf) goto L_11571779;
  /* 1157170e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571711 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11571714 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571717 jl 0x1157173d */
  if ((C.sf!=C.of)) goto L_1157173d;
  /* 11571719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157171c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1157171f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571722 jg 0x1157173d */
  if ((!C.zf&&C.sf==C.of)) goto L_1157173d;
  /* 11571724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571727 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1157172a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1157172d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571730 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11571732 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571735 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571738 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1157173b jmp 0x11571777 */
  goto L_11571777;
L_1157173d:;
  /* 1157173d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571740 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11571743 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571746 jne 0x1157176e */
  if (!C.zf) goto L_1157176e;
  /* 11571748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157174b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1157174e:;
  /* 1157174e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571751 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571754 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11571757 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11571759 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157175c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157175f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11571762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571765 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11571768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157176a jne 0x1157174e */
  if (!C.zf) goto L_1157174e;
  /* 1157176c jmp 0x11571777 */
  goto L_11571777;
L_1157176e:;
  /* 1157176e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571771 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571774 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11571777:;
  /* 11571777 jmp 0x11571704 */
  goto L_11571704;
L_11571779:;
  /* 11571779 mov esp, ebp */
  ESP = (EBP);
  /* 1157177b pop ebp */
  EBP = (pop32());
  /* 1157177c ret  */
  ESPCHK(0x11571700u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x11571780 (147 bytes, 52 insns) */
void f_11571780(void) {
  FTRACE(0x11571780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571780 push ebp */
  push32((uint32_t)(EBP));
  /* 11571781 mov ebp, esp */
  EBP = (ESP);
  /* 11571783 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571787 jne 0x1157178e */
  if (!C.zf) goto L_1157178e;
  /* 11571789 jmp 0x11571811 */
  goto L_11571811;
L_1157178e:;
  /* 1157178e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571791 cmp dword ptr [eax + 0xc], 0x11592228 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11592228u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571798 je 0x11571811 */
  if (C.zf) goto L_11571811;
  /* 1157179a push 2 */
  push32((uint32_t)(0x2u));
  /* 1157179c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157179f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115717a2 push edx */
  push32((uint32_t)(EDX));
  /* 115717a3 call 0x115669d0 */
  push32(0x115717a8u); f_115669d0();
  /* 115717a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115717ab push 2 */
  push32((uint32_t)(0x2u));
  /* 115717ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115717b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115717b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115717b4 call 0x115669d0 */
  push32(0x115717b9u); f_115669d0();
  /* 115717b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115717bc push 2 */
  push32((uint32_t)(0x2u));
  /* 115717be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115717c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115717c4 push eax */
  push32((uint32_t)(EAX));
  /* 115717c5 call 0x115669d0 */
  push32(0x115717cau); f_115669d0();
  /* 115717ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115717cd push 2 */
  push32((uint32_t)(0x2u));
  /* 115717cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115717d2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 115717d5 push edx */
  push32((uint32_t)(EDX));
  /* 115717d6 call 0x115669d0 */
  push32(0x115717dbu); f_115669d0();
  /* 115717db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115717de push 2 */
  push32((uint32_t)(0x2u));
  /* 115717e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115717e3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115717e6 push ecx */
  push32((uint32_t)(ECX));
  /* 115717e7 call 0x115669d0 */
  push32(0x115717ecu); f_115669d0();
  /* 115717ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115717ef push 2 */
  push32((uint32_t)(0x2u));
  /* 115717f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115717f4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 115717f7 push eax */
  push32((uint32_t)(EAX));
  /* 115717f8 call 0x115669d0 */
  push32(0x115717fdu); f_115669d0();
  /* 115717fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571800 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571802 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571805 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11571808 push edx */
  push32((uint32_t)(EDX));
  /* 11571809 call 0x115669d0 */
  push32(0x1157180eu); f_115669d0();
  /* 1157180e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11571811:;
  /* 11571811 pop ebp */
  EBP = (pop32());
  /* 11571812 ret  */
  ESPCHK(0x11571780u, _esp0);
  ESP += 4; return;
}

/* FUN_10011820 @ 0x11571820 (928 bytes, 284 insns) */
void f_11571820(void) {
  FTRACE(0x11571820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571820 push ebp */
  push32((uint32_t)(EBP));
  /* 11571821 mov ebp, esp */
  EBP = (ESP);
  /* 11571823 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11571826 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1157182d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11571834 cmp dword ptr [0x11592190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157183b je 0x11571b71 */
  if (C.zf) goto L_11571b71;
  /* 11571841 cmp dword ptr [0x115921a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115921a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571848 jne 0x11571870 */
  if (!C.zf) goto L_11571870;
  /* 1157184a push 0x115921a0 */
  push32((uint32_t)(0x115921a0u));
  /* 1157184f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11571854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571856 mov ax, word ptr [0x115921e4] */
  AX = (r16((uint32_t)(0x115921e4)));
  /* 1157185c push eax */
  push32((uint32_t)(EAX));
  /* 1157185d push 0 */
  push32((uint32_t)(0x0u));
  /* 1157185f call 0x11574100 */
  push32(0x11571864u); f_11574100();
  /* 11571864 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571869 je 0x11571870 */
  if (C.zf) goto L_11571870;
  /* 1157186b jmp 0x11571b32 */
  goto L_11571b32;
L_11571870:;
  /* 11571870 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11571872 push 0x1158d194 */
  push32((uint32_t)(0x1158d194u));
  /* 11571877 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571879 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1157187e call 0x11565f40 */
  push32(0x11571883u); f_11565f40();
  /* 11571883 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571886 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11571889 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1157188b push 0x1158d194 */
  push32((uint32_t)(0x1158d194u));
  /* 11571890 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571892 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11571897 call 0x11565f40 */
  push32(0x1157189cu); f_11565f40();
  /* 1157189c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157189f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115718a2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 115718a4 push 0x1158d194 */
  push32((uint32_t)(0x1158d194u));
  /* 115718a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 115718ab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 115718b0 call 0x11565f40 */
  push32(0x115718b5u); f_11565f40();
  /* 115718b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115718b8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 115718bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 115718bd push 0x1158d194 */
  push32((uint32_t)(0x1158d194u));
  /* 115718c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115718c4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 115718c9 call 0x11565f40 */
  push32(0x115718ceu); f_11565f40();
  /* 115718ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115718d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 115718d4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115718d8 je 0x115718ec */
  if (C.zf) goto L_115718ec;
  /* 115718da cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115718de je 0x115718ec */
  if (C.zf) goto L_115718ec;
  /* 115718e0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115718e4 je 0x115718ec */
  if (C.zf) goto L_115718ec;
  /* 115718e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115718ea jne 0x115718f1 */
  if (!C.zf) goto L_115718f1;
L_115718ec:;
  /* 115718ec jmp 0x11571b32 */
  goto L_11571b32;
L_115718f1:;
  /* 115718f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115718f4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 115718f7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 115718fe jmp 0x11571909 */
  goto L_11571909;
L_11571900:;
  /* 11571900 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11571903 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571906 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11571909:;
  /* 11571909 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571910 jge 0x11571925 */
  if ((C.sf==C.of)) goto L_11571925;
  /* 11571912 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11571915 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11571918 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1157191a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1157191d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571920 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11571923 jmp 0x11571900 */
  goto L_11571900;
L_11571925:;
  /* 11571925 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11571928 push eax */
  push32((uint32_t)(EAX));
  /* 11571929 mov ecx, dword ptr [0x115921a0] */
  ECX = (r32((uint32_t)(0x115921a0)));
  /* 1157192f push ecx */
  push32((uint32_t)(ECX));
  /* 11571930 call dword ptr [0x11594338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594338))), 0x11571936u);
  /* 11571936 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571938 jne 0x1157193f */
  if (!C.zf) goto L_1157193f;
  /* 1157193a jmp 0x11571b32 */
  goto L_11571b32;
L_1157193f:;
  /* 1157193f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571943 jbe 0x1157194a */
  if ((C.cf||C.zf)) goto L_1157194a;
  /* 11571945 jmp 0x11571b32 */
  goto L_11571b32;
L_1157194a:;
  /* 1157194a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1157194d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11571953 mov dword ptr [0x1158fea4], edx */
  w32((uint32_t)(0x1158fea4), (EDX));
  /* 11571959 cmp dword ptr [0x1158fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1158fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571960 jle 0x115719b9 */
  if ((C.zf||C.sf!=C.of)) goto L_115719b9;
  /* 11571962 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11571965 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11571968 jmp 0x11571973 */
  goto L_11571973;
L_1157196a:;
  /* 1157196a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1157196d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571970 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11571973:;
  /* 11571973 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11571976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571978 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1157197a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157197c je 0x115719b9 */
  if (C.zf) goto L_115719b9;
  /* 1157197e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11571981 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11571983 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11571986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11571988 je 0x115719b9 */
  if (C.zf) goto L_115719b9;
  /* 1157198a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1157198d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1157198f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11571991 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11571994 jmp 0x1157199f */
  goto L_1157199f;
L_11571996:;
  /* 11571996 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11571999 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157199c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1157199f:;
  /* 1157199f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115719a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115719a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 115719a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115719aa jg 0x115719b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_115719b7;
  /* 115719ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115719af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115719b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 115719b5 jmp 0x11571996 */
  goto L_11571996;
L_115719b7:;
  /* 115719b7 jmp 0x1157196a */
  goto L_1157196a;
L_115719b9:;
  /* 115719b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115719bb push 0 */
  push32((uint32_t)(0x0u));
  /* 115719bd push 0 */
  push32((uint32_t)(0x0u));
  /* 115719bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 115719c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115719c5 push eax */
  push32((uint32_t)(EAX));
  /* 115719c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 115719cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115719ce push ecx */
  push32((uint32_t)(ECX));
  /* 115719cf push 1 */
  push32((uint32_t)(0x1u));
  /* 115719d1 call 0x1156e170 */
  push32(0x115719d6u); f_1156e170();
  /* 115719d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115719d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115719db jne 0x115719e2 */
  if (!C.zf) goto L_115719e2;
  /* 115719dd jmp 0x11571b32 */
  goto L_11571b32;
L_115719e2:;
  /* 115719e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 115719e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 115719ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115719ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115719f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 115719f7 jmp 0x11571a02 */
  goto L_11571a02;
L_115719f9:;
  /* 115719f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115719fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115719ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11571a02:;
  /* 11571a02 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571a09 jge 0x11571a20 */
  if ((C.sf==C.of)) goto L_11571a20;
  /* 11571a0b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11571a0e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11571a12 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11571a15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11571a18 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571a1b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11571a1e jmp 0x115719f9 */
  goto L_115719f9;
L_11571a20:;
  /* 11571a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11571a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11571a24 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11571a27 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571a2a push edx */
  push32((uint32_t)(EDX));
  /* 11571a2b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11571a30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11571a33 push eax */
  push32((uint32_t)(EAX));
  /* 11571a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11571a36 call 0x115743a0 */
  push32(0x11571a3bu); f_115743a0();
  /* 11571a3b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571a3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571a40 jne 0x11571a47 */
  if (!C.zf) goto L_11571a47;
  /* 11571a42 jmp 0x11571b32 */
  goto L_11571b32;
L_11571a47:;
  /* 11571a47 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11571a4a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11571a4f cmp dword ptr [0x1158fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1158fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571a56 jle 0x11571ab3 */
  if ((C.zf||C.sf!=C.of)) goto L_11571ab3;
  /* 11571a58 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11571a5b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11571a5e jmp 0x11571a69 */
  goto L_11571a69;
L_11571a60:;
  /* 11571a60 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11571a63 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571a66 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11571a69:;
  /* 11571a69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11571a6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11571a6e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11571a70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11571a72 je 0x11571ab3 */
  if (C.zf) goto L_11571ab3;
  /* 11571a74 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11571a77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11571a79 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11571a7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11571a7e je 0x11571ab3 */
  if (C.zf) goto L_11571ab3;
  /* 11571a80 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11571a83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571a85 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11571a87 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11571a8a jmp 0x11571a95 */
  goto L_11571a95;
L_11571a8c:;
  /* 11571a8c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11571a8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571a92 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11571a95:;
  /* 11571a95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11571a98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571a9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11571a9d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571aa0 jg 0x11571ab1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11571ab1;
  /* 11571aa2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11571aa5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11571aa8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11571aaf jmp 0x11571a8c */
  goto L_11571a8c;
L_11571ab1:;
  /* 11571ab1 jmp 0x11571a60 */
  goto L_11571a60;
L_11571ab3:;
  /* 11571ab3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11571ab6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571ab9 mov dword ptr [0x1158fc98], eax */
  w32((uint32_t)(0x1158fc98), (EAX));
  /* 11571abe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11571ac1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571ac4 mov dword ptr [0x1158fc9c], ecx */
  w32((uint32_t)(0x1158fc9c), (ECX));
  /* 11571aca cmp dword ptr [0x115921d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115921d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571ad1 je 0x11571ae4 */
  if (C.zf) goto L_11571ae4;
  /* 11571ad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571ad5 mov edx, dword ptr [0x115921d0] */
  EDX = (r32((uint32_t)(0x115921d0)));
  /* 11571adb push edx */
  push32((uint32_t)(EDX));
  /* 11571adc call 0x115669d0 */
  push32(0x11571ae1u); f_115669d0();
  /* 11571ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11571ae4:;
  /* 11571ae4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11571ae7 mov dword ptr [0x115921d0], eax */
  w32((uint32_t)(0x115921d0), (EAX));
  /* 11571aec cmp dword ptr [0x115921d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115921d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571af3 je 0x11571b06 */
  if (C.zf) goto L_11571b06;
  /* 11571af5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571af7 mov ecx, dword ptr [0x115921d4] */
  ECX = (r32((uint32_t)(0x115921d4)));
  /* 11571afd push ecx */
  push32((uint32_t)(ECX));
  /* 11571afe call 0x115669d0 */
  push32(0x11571b03u); f_115669d0();
  /* 11571b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11571b06:;
  /* 11571b06 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11571b09 mov dword ptr [0x115921d4], edx */
  w32((uint32_t)(0x115921d4), (EDX));
  /* 11571b0f push 2 */
  push32((uint32_t)(0x2u));
  /* 11571b11 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11571b14 push eax */
  push32((uint32_t)(EAX));
  /* 11571b15 call 0x115669d0 */
  push32(0x11571b1au); f_115669d0();
  /* 11571b1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571b1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11571b1f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11571b22 push ecx */
  push32((uint32_t)(ECX));
  /* 11571b23 call 0x115669d0 */
  push32(0x11571b28u); f_115669d0();
  /* 11571b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571b2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571b2d jmp 0x11571bbc */
  goto L_11571bbc;
L_11571b32:;
  /* 11571b32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571b34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11571b37 push edx */
  push32((uint32_t)(EDX));
  /* 11571b38 call 0x115669d0 */
  push32(0x11571b3du); f_115669d0();
  /* 11571b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571b40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571b42 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11571b45 push eax */
  push32((uint32_t)(EAX));
  /* 11571b46 call 0x115669d0 */
  push32(0x11571b4bu); f_115669d0();
  /* 11571b4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571b4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11571b50 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11571b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11571b54 call 0x115669d0 */
  push32(0x11571b59u); f_115669d0();
  /* 11571b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571b5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11571b5e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11571b61 push edx */
  push32((uint32_t)(EDX));
  /* 11571b62 call 0x115669d0 */
  push32(0x11571b67u); f_115669d0();
  /* 11571b67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571b6a mov eax, 1 */
  EAX = (0x1u);
  /* 11571b6f jmp 0x11571bbc */
  goto L_11571bbc;
L_11571b71:;
  /* 11571b71 mov dword ptr [0x1158fc98], 0x1158fca2 */
  w32((uint32_t)(0x1158fc98), (0x1158fca2u));
  /* 11571b7b mov dword ptr [0x1158fc9c], 0x1158fca2 */
  w32((uint32_t)(0x1158fc9c), (0x1158fca2u));
  /* 11571b85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571b87 mov eax, dword ptr [0x115921d0] */
  EAX = (r32((uint32_t)(0x115921d0)));
  /* 11571b8c push eax */
  push32((uint32_t)(EAX));
  /* 11571b8d call 0x115669d0 */
  push32(0x11571b92u); f_115669d0();
  /* 11571b92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571b95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11571b97 mov ecx, dword ptr [0x115921d4] */
  ECX = (r32((uint32_t)(0x115921d4)));
  /* 11571b9d push ecx */
  push32((uint32_t)(ECX));
  /* 11571b9e call 0x115669d0 */
  push32(0x11571ba3u); f_115669d0();
  /* 11571ba3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571ba6 mov dword ptr [0x115921d0], 0 */
  w32((uint32_t)(0x115921d0), (0x0u));
  /* 11571bb0 mov dword ptr [0x115921d4], 0 */
  w32((uint32_t)(0x115921d4), (0x0u));
  /* 11571bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11571bbc:;
  /* 11571bbc mov esp, ebp */
  ESP = (EBP);
  /* 11571bbe pop ebp */
  EBP = (pop32());
  /* 11571bbf ret  */
  ESPCHK(0x11571820u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bc0 @ 0x11571bc0 (7 bytes, 5 insns) */
void f_11571bc0(void) {
  FTRACE(0x11571bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11571bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11571bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571bc5 pop ebp */
  EBP = (pop32());
  /* 11571bc6 ret  */
  ESPCHK(0x11571bc0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11571bd0 (129 bytes, 56 insns) */
void f_11571bd0(void) {
  FTRACE(0x11571bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571bd0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11571bd4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11571bd8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11571bde jne 0x11571c1c */
  if (!C.zf) goto L_11571c1c;
L_11571be0:;
  /* 11571be0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11571be2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11571be4 jne 0x11571c14 */
  if (!C.zf) goto L_11571c14;
  /* 11571be6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11571be8 je 0x11571c10 */
  if (C.zf) goto L_11571c10;
  /* 11571bea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11571bed jne 0x11571c14 */
  if (!C.zf) goto L_11571c14;
  /* 11571bef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11571bf1 je 0x11571c10 */
  if (C.zf) goto L_11571c10;
  /* 11571bf3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11571bf6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11571bf9 jne 0x11571c14 */
  if (!C.zf) goto L_11571c14;
  /* 11571bfb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11571bfd je 0x11571c10 */
  if (C.zf) goto L_11571c10;
  /* 11571bff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11571c02 jne 0x11571c14 */
  if (!C.zf) goto L_11571c14;
  /* 11571c04 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571c07 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571c0a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11571c0c jne 0x11571be0 */
  if (!C.zf) goto L_11571be0;
  /* 11571c0e mov edi, edi */
  EDI = (EDI);
L_11571c10:;
  /* 11571c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571c12 ret  */
  ESPCHK(0x11571bd0u, _esp0);
  ESP += 4; return;
  /* 11571c13 nop  */
  /* nop */
L_11571c14:;
  /* 11571c14 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11571c16 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11571c18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11571c19 ret  */
  ESPCHK(0x11571bd0u, _esp0);
  ESP += 4; return;
  /* 11571c1a mov edi, edi */
  EDI = (EDI);
L_11571c1c:;
  /* 11571c1c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11571c22 je 0x11571c38 */
  if (C.zf) goto L_11571c38;
  /* 11571c24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11571c26 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11571c27 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11571c29 jne 0x11571c14 */
  if (!C.zf) goto L_11571c14;
  /* 11571c2b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11571c2c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11571c2e je 0x11571c10 */
  if (C.zf) goto L_11571c10;
  /* 11571c30 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11571c36 je 0x11571be0 */
  if (C.zf) goto L_11571be0;
L_11571c38:;
  /* 11571c38 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11571c3b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571c3e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11571c40 jne 0x11571c14 */
  if (!C.zf) goto L_11571c14;
  /* 11571c42 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11571c44 je 0x11571c10 */
  if (C.zf) goto L_11571c10;
  /* 11571c46 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11571c49 jne 0x11571c14 */
  if (!C.zf) goto L_11571c14;
  /* 11571c4b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11571c4d je 0x11571c10 */
  if (C.zf) goto L_11571c10;
  /* 11571c4f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571c52 jmp 0x11571be0 */
  goto L_11571be0;
}

/* FUN_10011c60 @ 0x11571c60 (62 bytes, 35 insns) */
void f_11571c60(void) {
  FTRACE(0x11571c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11571c61 mov ebp, esp */
  EBP = (ESP);
  /* 11571c63 push esi */
  push32((uint32_t)(ESI));
  /* 11571c64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571c66 push eax */
  push32((uint32_t)(EAX));
  /* 11571c67 push eax */
  push32((uint32_t)(EAX));
  /* 11571c68 push eax */
  push32((uint32_t)(EAX));
  /* 11571c69 push eax */
  push32((uint32_t)(EAX));
  /* 11571c6a push eax */
  push32((uint32_t)(EAX));
  /* 11571c6b push eax */
  push32((uint32_t)(EAX));
  /* 11571c6c push eax */
  push32((uint32_t)(EAX));
  /* 11571c6d push eax */
  push32((uint32_t)(EAX));
  /* 11571c6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11571c71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11571c74:;
  /* 11571c74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11571c76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11571c78 je 0x11571c81 */
  if (C.zf) goto L_11571c81;
  /* 11571c7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11571c7b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11571c7b");
  /* 11571c7f jmp 0x11571c74 */
  goto L_11571c74;
L_11571c81:;
  /* 11571c81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11571c84 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11571c87 nop  */
  /* nop */
L_11571c88:;
  /* 11571c88 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11571c89 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11571c8b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11571c8d je 0x11571c96 */
  if (C.zf) goto L_11571c96;
  /* 11571c8f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11571c90 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11571c90");
  /* 11571c94 jae 0x11571c88 */
  if (!C.cf) goto L_11571c88;
L_11571c96:;
  /* 11571c96 mov eax, ecx */
  EAX = (ECX);
  /* 11571c98 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571c9b pop esi */
  ESI = (pop32());
  /* 11571c9c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11571c9d ret  */
  ESPCHK(0x11571c60u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11571ca0 (56 bytes, 31 insns) */
void f_11571ca0(void) {
  FTRACE(0x11571ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11571ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11571ca3 push edi */
  push32((uint32_t)(EDI));
  /* 11571ca4 push esi */
  push32((uint32_t)(ESI));
  /* 11571ca5 push ebx */
  push32((uint32_t)(EBX));
  /* 11571ca6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11571ca9 jecxz 0x11571cd1 */
  x86_unimpl("jecxz @ 0x11571ca9");
  /* 11571cab mov ebx, ecx */
  EBX = (ECX);
  /* 11571cad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11571cb0 mov esi, edi */
  ESI = (EDI);
  /* 11571cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571cb4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11571cb6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11571cb8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571cba mov edi, esi */
  EDI = (ESI);
  /* 11571cbc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11571cbf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11571cc1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11571cc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11571cc6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11571cc9 ja 0x11571ccf */
  if ((!C.cf&&!C.zf)) goto L_11571ccf;
  /* 11571ccb je 0x11571cd1 */
  if (C.zf) goto L_11571cd1;
  /* 11571ccd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11571cce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11571ccf:;
  /* 11571ccf not ecx */
  ECX = (~(ECX));
L_11571cd1:;
  /* 11571cd1 mov eax, ecx */
  EAX = (ECX);
  /* 11571cd3 pop ebx */
  EBX = (pop32());
  /* 11571cd4 pop esi */
  ESI = (pop32());
  /* 11571cd5 pop edi */
  EDI = (pop32());
  /* 11571cd6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11571cd7 ret  */
  ESPCHK(0x11571ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ce0 @ 0x11571ce0 (58 bytes, 32 insns) */
void f_11571ce0(void) {
  FTRACE(0x11571ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11571ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11571ce3 push esi */
  push32((uint32_t)(ESI));
  /* 11571ce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571ce6 push eax */
  push32((uint32_t)(EAX));
  /* 11571ce7 push eax */
  push32((uint32_t)(EAX));
  /* 11571ce8 push eax */
  push32((uint32_t)(EAX));
  /* 11571ce9 push eax */
  push32((uint32_t)(EAX));
  /* 11571cea push eax */
  push32((uint32_t)(EAX));
  /* 11571ceb push eax */
  push32((uint32_t)(EAX));
  /* 11571cec push eax */
  push32((uint32_t)(EAX));
  /* 11571ced push eax */
  push32((uint32_t)(EAX));
  /* 11571cee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11571cf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11571cf4:;
  /* 11571cf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11571cf6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11571cf8 je 0x11571d01 */
  if (C.zf) goto L_11571d01;
  /* 11571cfa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11571cfb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11571cfb");
  /* 11571cff jmp 0x11571cf4 */
  goto L_11571cf4;
L_11571d01:;
  /* 11571d01 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11571d04:;
  /* 11571d04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11571d06 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11571d08 je 0x11571d14 */
  if (C.zf) goto L_11571d14;
  /* 11571d0a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11571d0b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11571d0b");
  /* 11571d0f jae 0x11571d04 */
  if (!C.cf) goto L_11571d04;
  /* 11571d11 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11571d14:;
  /* 11571d14 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571d17 pop esi */
  ESI = (pop32());
  /* 11571d18 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11571d19 ret  */
  ESPCHK(0x11571ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d20 @ 0x11571d20 (512 bytes, 147 insns) */
void f_11571d20(void) {
  FTRACE(0x11571d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11571d21 mov ebp, esp */
  EBP = (ESP);
  /* 11571d23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11571d26 cmp dword ptr [0x1159221c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159221c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571d2d jne 0x11571d52 */
  if (!C.zf) goto L_11571d52;
  /* 11571d2f call 0x115727f0 */
  push32(0x11571d34u); f_115727f0();
  /* 11571d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571d36 je 0x11571d42 */
  if (C.zf) goto L_11571d42;
  /* 11571d38 mov eax, dword ptr [0x115942fc] */
  EAX = (r32((uint32_t)(0x115942fc)));
  /* 11571d3d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11571d40 jmp 0x11571d49 */
  goto L_11571d49;
L_11571d42:;
  /* 11571d42 mov dword ptr [ebp - 8], 0x11572840 */
  w32((uint32_t)(EBP + -0x8), (0x11572840u));
L_11571d49:;
  /* 11571d49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11571d4c mov dword ptr [0x1159221c], ecx */
  w32((uint32_t)(0x1159221c), (ECX));
L_11571d52:;
  /* 11571d52 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571d56 jne 0x11571d62 */
  if (!C.zf) goto L_11571d62;
  /* 11571d58 call 0x11572640 */
  push32(0x11571d5du); f_11572640();
  /* 11571d5d jmp 0x11571e2e */
  goto L_11571e2e;
L_11571d62:;
  /* 11571d62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571d65 mov dword ptr [0x1159220c], edx */
  w32((uint32_t)(0x1159220c), (EDX));
  /* 11571d6b cmp dword ptr [0x1159220c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159220c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571d72 je 0x11571d94 */
  if (C.zf) goto L_11571d94;
  /* 11571d74 mov eax, dword ptr [0x1159220c] */
  EAX = (r32((uint32_t)(0x1159220c)));
  /* 11571d79 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11571d7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11571d7e je 0x11571d94 */
  if (C.zf) goto L_11571d94;
  /* 11571d80 push 0x1159220c */
  push32((uint32_t)(0x1159220cu));
  /* 11571d85 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11571d87 push 0x11590a90 */
  push32((uint32_t)(0x11590a90u));
  /* 11571d8c call 0x11571f20 */
  push32(0x11571d91u); f_11571f20();
  /* 11571d91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11571d94:;
  /* 11571d94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571d97 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571d9a mov dword ptr [0x11592210], edx */
  w32((uint32_t)(0x11592210), (EDX));
  /* 11571da0 cmp dword ptr [0x11592210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571da7 je 0x11571dc9 */
  if (C.zf) goto L_11571dc9;
  /* 11571da9 mov eax, dword ptr [0x11592210] */
  EAX = (r32((uint32_t)(0x11592210)));
  /* 11571dae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11571db1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11571db3 je 0x11571dc9 */
  if (C.zf) goto L_11571dc9;
  /* 11571db5 push 0x11592210 */
  push32((uint32_t)(0x11592210u));
  /* 11571dba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11571dbc push 0x115909d8 */
  push32((uint32_t)(0x115909d8u));
  /* 11571dc1 call 0x11571f20 */
  push32(0x11571dc6u); f_11571f20();
  /* 11571dc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11571dc9:;
  /* 11571dc9 mov dword ptr [0x11592214], 0 */
  w32((uint32_t)(0x11592214), (0x0u));
  /* 11571dd3 cmp dword ptr [0x1159220c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159220c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571dda je 0x11571e0d */
  if (C.zf) goto L_11571e0d;
  /* 11571ddc mov edx, dword ptr [0x1159220c] */
  EDX = (r32((uint32_t)(0x1159220c)));
  /* 11571de2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11571de5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571de7 je 0x11571e0d */
  if (C.zf) goto L_11571e0d;
  /* 11571de9 cmp dword ptr [0x11592210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571df0 je 0x11571e06 */
  if (C.zf) goto L_11571e06;
  /* 11571df2 mov ecx, dword ptr [0x11592210] */
  ECX = (r32((uint32_t)(0x11592210)));
  /* 11571df8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11571dfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11571dfd je 0x11571e06 */
  if (C.zf) goto L_11571e06;
  /* 11571dff call 0x11571fb0 */
  push32(0x11571e04u); f_11571fb0();
  /* 11571e04 jmp 0x11571e0b */
  goto L_11571e0b;
L_11571e06:;
  /* 11571e06 call 0x115723a0 */
  push32(0x11571e0bu); f_115723a0();
L_11571e0b:;
  /* 11571e0b jmp 0x11571e2e */
  goto L_11571e2e;
L_11571e0d:;
  /* 11571e0d cmp dword ptr [0x11592210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571e14 je 0x11571e29 */
  if (C.zf) goto L_11571e29;
  /* 11571e16 mov eax, dword ptr [0x11592210] */
  EAX = (r32((uint32_t)(0x11592210)));
  /* 11571e1b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11571e1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11571e20 je 0x11571e29 */
  if (C.zf) goto L_11571e29;
  /* 11571e22 call 0x11572540 */
  push32(0x11571e27u); f_11572540();
  /* 11571e27 jmp 0x11571e2e */
  goto L_11571e2e;
L_11571e29:;
  /* 11571e29 call 0x11572640 */
  push32(0x11571e2eu); f_11572640();
L_11571e2e:;
  /* 11571e2e cmp dword ptr [0x11592214], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592214))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571e35 jne 0x11571e3e */
  if (!C.zf) goto L_11571e3e;
  /* 11571e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571e39 jmp 0x11571f1c */
  goto L_11571f1c;
L_11571e3e:;
  /* 11571e3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571e41 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571e47 push edx */
  push32((uint32_t)(EDX));
  /* 11571e48 call 0x11572670 */
  push32(0x11571e4du); f_11572670();
  /* 11571e4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571e50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11571e53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571e57 je 0x11571e6c */
  if (C.zf) goto L_11571e6c;
  /* 11571e59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571e5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11571e61 push eax */
  push32((uint32_t)(EAX));
  /* 11571e62 call dword ptr [0x11594300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594300))), 0x11571e68u);
  /* 11571e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571e6a jne 0x11571e73 */
  if (!C.zf) goto L_11571e73;
L_11571e6c:;
  /* 11571e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571e6e jmp 0x11571f1c */
  goto L_11571f1c;
L_11571e73:;
  /* 11571e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11571e75 mov ecx, dword ptr [0x115921fc] */
  ECX = (r32((uint32_t)(0x115921fc)));
  /* 11571e7b push ecx */
  push32((uint32_t)(ECX));
  /* 11571e7c call dword ptr [0x11594304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594304))), 0x11571e82u);
  /* 11571e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571e84 jne 0x11571e8d */
  if (!C.zf) goto L_11571e8d;
  /* 11571e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571e88 jmp 0x11571f1c */
  goto L_11571f1c;
L_11571e8d:;
  /* 11571e8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571e91 je 0x11571eb8 */
  if (C.zf) goto L_11571eb8;
  /* 11571e93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11571e96 mov ax, word ptr [0x115921fc] */
  AX = (r16((uint32_t)(0x115921fc)));
  /* 11571e9c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11571e9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11571ea2 mov dx, word ptr [0x11592218] */
  DX = (r16((uint32_t)(0x11592218)));
  /* 11571ea9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11571ead mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11571eb0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11571eb4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11571eb8:;
  /* 11571eb8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571ebc je 0x11571f17 */
  if (C.zf) goto L_11571f17;
  /* 11571ebe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11571ec0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11571ec3 push edx */
  push32((uint32_t)(EDX));
  /* 11571ec4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11571ec9 mov eax, dword ptr [0x115921fc] */
  EAX = (r32((uint32_t)(0x115921fc)));
  /* 11571ece push eax */
  push32((uint32_t)(EAX));
  /* 11571ecf call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x11571ed5u);
  /* 11571ed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571ed7 jne 0x11571edd */
  if (!C.zf) goto L_11571edd;
  /* 11571ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571edb jmp 0x11571f1c */
  goto L_11571f1c;
L_11571edd:;
  /* 11571edd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11571edf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11571ee2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 11571ee6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11571eeb mov edx, dword ptr [0x11592218] */
  EDX = (r32((uint32_t)(0x11592218)));
  /* 11571ef1 push edx */
  push32((uint32_t)(EDX));
  /* 11571ef2 call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x11571ef8u);
  /* 11571ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11571efa jne 0x11571f00 */
  if (!C.zf) goto L_11571f00;
  /* 11571efc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11571efe jmp 0x11571f1c */
  goto L_11571f1c;
L_11571f00:;
  /* 11571f00 push 0xa */
  push32((uint32_t)(0xau));
  /* 11571f02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11571f05 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571f0a push eax */
  push32((uint32_t)(EAX));
  /* 11571f0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571f0e push ecx */
  push32((uint32_t)(ECX));
  /* 11571f0f call 0x11568a80 */
  push32(0x11571f14u); f_11568a80();
  /* 11571f14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11571f17:;
  /* 11571f17 mov eax, 1 */
  EAX = (0x1u);
L_11571f1c:;
  /* 11571f1c mov esp, ebp */
  ESP = (EBP);
  /* 11571f1e pop ebp */
  EBP = (pop32());
  /* 11571f1f ret  */
  ESPCHK(0x11571d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f20 @ 0x11571f20 (130 bytes, 47 insns) */
void f_11571f20(void) {
  FTRACE(0x11571f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11571f21 mov ebp, esp */
  EBP = (ESP);
  /* 11571f23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11571f26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11571f2d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11571f34:;
  /* 11571f34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11571f37 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571f3a jg 0x11571f9e */
  if ((!C.zf&&C.sf==C.of)) goto L_11571f9e;
  /* 11571f3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571f40 je 0x11571f9e */
  if (C.zf) goto L_11571f9e;
  /* 11571f42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11571f45 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571f48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11571f49 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11571f4b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11571f4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11571f50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571f53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571f56 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11571f59 push eax */
  push32((uint32_t)(EAX));
  /* 11571f5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11571f5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11571f5f push edx */
  push32((uint32_t)(EDX));
  /* 11571f60 call 0x11574610 */
  push32(0x11571f65u); f_11574610();
  /* 11571f65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571f68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11571f6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571f6f jne 0x11571f82 */
  if (!C.zf) goto L_11571f82;
  /* 11571f71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571f74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11571f77 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11571f7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11571f7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11571f80 jmp 0x11571f9c */
  goto L_11571f9c;
L_11571f82:;
  /* 11571f82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571f86 jge 0x11571f93 */
  if ((C.sf==C.of)) goto L_11571f93;
  /* 11571f88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571f8b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11571f8e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11571f91 jmp 0x11571f9c */
  goto L_11571f9c;
L_11571f93:;
  /* 11571f93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11571f96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11571f99 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11571f9c:;
  /* 11571f9c jmp 0x11571f34 */
  goto L_11571f34;
L_11571f9e:;
  /* 11571f9e mov esp, ebp */
  ESP = (EBP);
  /* 11571fa0 pop ebp */
  EBP = (pop32());
  /* 11571fa1 ret  */
  ESPCHK(0x11571f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fb0 @ 0x11571fb0 (186 bytes, 50 insns) */
void f_11571fb0(void) {
  FTRACE(0x11571fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11571fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11571fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11571fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11571fb4 mov eax, dword ptr [0x1159220c] */
  EAX = (r32((uint32_t)(0x1159220c)));
  /* 11571fb9 push eax */
  push32((uint32_t)(EAX));
  /* 11571fba call 0x11568d70 */
  push32(0x11571fbfu); f_11568d70();
  /* 11571fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571fc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11571fc4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571fc7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11571fca mov dword ptr [0x11592208], ecx */
  w32((uint32_t)(0x11592208), (ECX));
  /* 11571fd0 mov edx, dword ptr [0x11592210] */
  EDX = (r32((uint32_t)(0x11592210)));
  /* 11571fd6 push edx */
  push32((uint32_t)(EDX));
  /* 11571fd7 call 0x11568d70 */
  push32(0x11571fdcu); f_11568d70();
  /* 11571fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11571fdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11571fe1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571fe4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11571fe7 mov dword ptr [0x11592200], ecx */
  w32((uint32_t)(0x11592200), (ECX));
  /* 11571fed mov dword ptr [0x115921fc], 0 */
  w32((uint32_t)(0x115921fc), (0x0u));
  /* 11571ff7 cmp dword ptr [0x11592208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11571ffe je 0x11572009 */
  if (C.zf) goto L_11572009;
  /* 11572000 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11572007 jmp 0x1157201b */
  goto L_1157201b;
L_11572009:;
  /* 11572009 mov edx, dword ptr [0x1159220c] */
  EDX = (r32((uint32_t)(0x1159220c)));
  /* 1157200f push edx */
  push32((uint32_t)(EDX));
  /* 11572010 call 0x11572a50 */
  push32(0x11572015u); f_11572a50();
  /* 11572015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572018 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1157201b:;
  /* 1157201b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157201e mov dword ptr [0x11592204], eax */
  w32((uint32_t)(0x11592204), (EAX));
  /* 11572023 push 1 */
  push32((uint32_t)(0x1u));
  /* 11572025 push 0x11572070 */
  push32((uint32_t)(0x11572070u));
  /* 1157202a call dword ptr [0x115942f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942f8))), 0x11572030u);
  /* 11572030 mov ecx, dword ptr [0x11592214] */
  ECX = (r32((uint32_t)(0x11592214)));
  /* 11572036 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1157203c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1157203e je 0x1157205c */
  if (C.zf) goto L_1157205c;
  /* 11572040 mov edx, dword ptr [0x11592214] */
  EDX = (r32((uint32_t)(0x11592214)));
  /* 11572046 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1157204c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1157204e je 0x1157205c */
  if (C.zf) goto L_1157205c;
  /* 11572050 mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 11572055 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11572058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157205a jne 0x11572066 */
  if (!C.zf) goto L_11572066;
L_1157205c:;
  /* 1157205c mov dword ptr [0x11592214], 0 */
  w32((uint32_t)(0x11592214), (0x0u));
L_11572066:;
  /* 11572066 mov esp, ebp */
  ESP = (EBP);
  /* 11572068 pop ebp */
  EBP = (pop32());
  /* 11572069 ret  */
  ESPCHK(0x11571fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012070 @ 0x11572070 (804 bytes, 220 insns) */
void f_11572070(void) {
  FTRACE(0x11572070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572070 push ebp */
  push32((uint32_t)(EBP));
  /* 11572071 mov ebp, esp */
  EBP = (ESP);
  /* 11572073 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572079 push eax */
  push32((uint32_t)(EAX));
  /* 1157207a call 0x115729d0 */
  push32(0x1157207fu); f_115729d0();
  /* 1157207f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572082 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11572085 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11572087 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1157208a push ecx */
  push32((uint32_t)(ECX));
  /* 1157208b mov edx, dword ptr [0x11592200] */
  EDX = (r32((uint32_t)(0x11592200)));
  /* 11572091 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11572093 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572095 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1157209b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115720a1 push edx */
  push32((uint32_t)(EDX));
  /* 115720a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115720a5 push eax */
  push32((uint32_t)(EAX));
  /* 115720a6 call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x115720acu);
  /* 115720ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115720ae jne 0x115720c4 */
  if (!C.zf) goto L_115720c4;
  /* 115720b0 mov dword ptr [0x11592214], 0 */
  w32((uint32_t)(0x11592214), (0x0u));
  /* 115720ba mov eax, 1 */
  EAX = (0x1u);
  /* 115720bf jmp 0x1157238e */
  goto L_1157238e;
L_115720c4:;
  /* 115720c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115720c7 push ecx */
  push32((uint32_t)(ECX));
  /* 115720c8 mov edx, dword ptr [0x11592210] */
  EDX = (r32((uint32_t)(0x11592210)));
  /* 115720ce push edx */
  push32((uint32_t)(EDX));
  /* 115720cf call 0x11574610 */
  push32(0x115720d4u); f_11574610();
  /* 115720d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115720d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115720d9 jne 0x115721ff */
  if (!C.zf) goto L_115721ff;
  /* 115720df push 0x78 */
  push32((uint32_t)(0x78u));
  /* 115720e1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 115720e4 push eax */
  push32((uint32_t)(EAX));
  /* 115720e5 mov ecx, dword ptr [0x11592208] */
  ECX = (r32((uint32_t)(0x11592208)));
  /* 115720eb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 115720ed sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115720ef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 115720f5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115720fb push ecx */
  push32((uint32_t)(ECX));
  /* 115720fc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115720ff push edx */
  push32((uint32_t)(EDX));
  /* 11572100 call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x11572106u);
  /* 11572106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572108 jne 0x1157211e */
  if (!C.zf) goto L_1157211e;
  /* 1157210a mov dword ptr [0x11592214], 0 */
  w32((uint32_t)(0x11592214), (0x0u));
  /* 11572114 mov eax, 1 */
  EAX = (0x1u);
  /* 11572119 jmp 0x1157238e */
  goto L_1157238e;
L_1157211e:;
  /* 1157211e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11572121 push eax */
  push32((uint32_t)(EAX));
  /* 11572122 mov ecx, dword ptr [0x1159220c] */
  ECX = (r32((uint32_t)(0x1159220c)));
  /* 11572128 push ecx */
  push32((uint32_t)(ECX));
  /* 11572129 call 0x11574610 */
  push32(0x1157212eu); f_11574610();
  /* 1157212e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572133 jne 0x11572160 */
  if (!C.zf) goto L_11572160;
  /* 11572135 mov edx, dword ptr [0x11592214] */
  EDX = (r32((uint32_t)(0x11592214)));
  /* 1157213b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11572141 mov dword ptr [0x11592214], edx */
  w32((uint32_t)(0x11592214), (EDX));
  /* 11572147 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1157214a mov dword ptr [0x11592218], eax */
  w32((uint32_t)(0x11592218), (EAX));
  /* 1157214f mov ecx, dword ptr [0x11592218] */
  ECX = (r32((uint32_t)(0x11592218)));
  /* 11572155 mov dword ptr [0x115921fc], ecx */
  w32((uint32_t)(0x115921fc), (ECX));
  /* 1157215b jmp 0x115721ff */
  goto L_115721ff;
L_11572160:;
  /* 11572160 mov edx, dword ptr [0x11592214] */
  EDX = (r32((uint32_t)(0x11592214)));
  /* 11572166 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11572169 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1157216b jne 0x115721ff */
  if (!C.zf) goto L_115721ff;
  /* 11572171 cmp dword ptr [0x11592204], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592204))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572178 je 0x115721cd */
  if (C.zf) goto L_115721cd;
  /* 1157217a mov eax, dword ptr [0x11592204] */
  EAX = (r32((uint32_t)(0x11592204)));
  /* 1157217f push eax */
  push32((uint32_t)(EAX));
  /* 11572180 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11572183 push ecx */
  push32((uint32_t)(ECX));
  /* 11572184 mov edx, dword ptr [0x1159220c] */
  EDX = (r32((uint32_t)(0x1159220c)));
  /* 1157218a push edx */
  push32((uint32_t)(EDX));
  /* 1157218b call 0x115746e0 */
  push32(0x11572190u); f_115746e0();
  /* 11572190 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572193 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572195 jne 0x115721cd */
  if (!C.zf) goto L_115721cd;
  /* 11572197 mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 1157219c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1157219e mov dword ptr [0x11592214], eax */
  w32((uint32_t)(0x11592214), (EAX));
  /* 115721a3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115721a6 mov dword ptr [0x11592218], ecx */
  w32((uint32_t)(0x11592218), (ECX));
  /* 115721ac mov edx, dword ptr [0x1159220c] */
  EDX = (r32((uint32_t)(0x1159220c)));
  /* 115721b2 push edx */
  push32((uint32_t)(EDX));
  /* 115721b3 call 0x11568d70 */
  push32(0x115721b8u); f_11568d70();
  /* 115721b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115721bb cmp eax, dword ptr [0x11592204] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11592204))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115721c1 jne 0x115721cb */
  if (!C.zf) goto L_115721cb;
  /* 115721c3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115721c6 mov dword ptr [0x115921fc], eax */
  w32((uint32_t)(0x115921fc), (EAX));
L_115721cb:;
  /* 115721cb jmp 0x115721ff */
  goto L_115721ff;
L_115721cd:;
  /* 115721cd mov ecx, dword ptr [0x11592214] */
  ECX = (r32((uint32_t)(0x11592214)));
  /* 115721d3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115721d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115721d8 jne 0x115721ff */
  if (!C.zf) goto L_115721ff;
  /* 115721da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115721dd push edx */
  push32((uint32_t)(EDX));
  /* 115721de call 0x11572710 */
  push32(0x115721e3u); f_11572710();
  /* 115721e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115721e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115721e8 je 0x115721ff */
  if (C.zf) goto L_115721ff;
  /* 115721ea mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 115721ef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 115721f1 mov dword ptr [0x11592214], eax */
  w32((uint32_t)(0x11592214), (EAX));
  /* 115721f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115721f9 mov dword ptr [0x11592218], ecx */
  w32((uint32_t)(0x11592218), (ECX));
L_115721ff:;
  /* 115721ff mov edx, dword ptr [0x11592214] */
  EDX = (r32((uint32_t)(0x11592214)));
  /* 11572205 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1157220b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572211 je 0x11572381 */
  if (C.zf) goto L_11572381;
  /* 11572217 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11572219 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1157221c push eax */
  push32((uint32_t)(EAX));
  /* 1157221d mov ecx, dword ptr [0x11592208] */
  ECX = (r32((uint32_t)(0x11592208)));
  /* 11572223 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11572225 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572227 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1157222d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572233 push ecx */
  push32((uint32_t)(ECX));
  /* 11572234 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11572237 push edx */
  push32((uint32_t)(EDX));
  /* 11572238 call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x1157223eu);
  /* 1157223e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572240 jne 0x11572256 */
  if (!C.zf) goto L_11572256;
  /* 11572242 mov dword ptr [0x11592214], 0 */
  w32((uint32_t)(0x11592214), (0x0u));
  /* 1157224c mov eax, 1 */
  EAX = (0x1u);
  /* 11572251 jmp 0x1157238e */
  goto L_1157238e;
L_11572256:;
  /* 11572256 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11572259 push eax */
  push32((uint32_t)(EAX));
  /* 1157225a mov ecx, dword ptr [0x1159220c] */
  ECX = (r32((uint32_t)(0x1159220c)));
  /* 11572260 push ecx */
  push32((uint32_t)(ECX));
  /* 11572261 call 0x11574610 */
  push32(0x11572266u); f_11574610();
  /* 11572266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572269 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157226b jne 0x11572320 */
  if (!C.zf) goto L_11572320;
  /* 11572271 mov edx, dword ptr [0x11592214] */
  EDX = (r32((uint32_t)(0x11592214)));
  /* 11572277 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1157227a mov dword ptr [0x11592214], edx */
  w32((uint32_t)(0x11592214), (EDX));
  /* 11572280 cmp dword ptr [0x11592208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572287 je 0x115722aa */
  if (C.zf) goto L_115722aa;
  /* 11572289 mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 1157228e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11572291 mov dword ptr [0x11592214], eax */
  w32((uint32_t)(0x11592214), (EAX));
  /* 11572296 cmp dword ptr [0x115921fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115921fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157229d jne 0x115722a8 */
  if (!C.zf) goto L_115722a8;
  /* 1157229f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115722a2 mov dword ptr [0x115921fc], ecx */
  w32((uint32_t)(0x115921fc), (ECX));
L_115722a8:;
  /* 115722a8 jmp 0x1157231e */
  goto L_1157231e;
L_115722aa:;
  /* 115722aa cmp dword ptr [0x11592204], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592204))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115722b1 je 0x115722ff */
  if (C.zf) goto L_115722ff;
  /* 115722b3 mov edx, dword ptr [0x1159220c] */
  EDX = (r32((uint32_t)(0x1159220c)));
  /* 115722b9 push edx */
  push32((uint32_t)(EDX));
  /* 115722ba call 0x11568d70 */
  push32(0x115722bfu); f_11568d70();
  /* 115722bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115722c2 cmp eax, dword ptr [0x11592204] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11592204))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115722c8 jne 0x115722ff */
  if (!C.zf) goto L_115722ff;
  /* 115722ca push 1 */
  push32((uint32_t)(0x1u));
  /* 115722cc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115722cf push eax */
  push32((uint32_t)(EAX));
  /* 115722d0 call 0x11572760 */
  push32(0x115722d5u); f_11572760();
  /* 115722d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115722d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115722da je 0x115722fd */
  if (C.zf) goto L_115722fd;
  /* 115722dc mov ecx, dword ptr [0x11592214] */
  ECX = (r32((uint32_t)(0x11592214)));
  /* 115722e2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 115722e5 mov dword ptr [0x11592214], ecx */
  w32((uint32_t)(0x11592214), (ECX));
  /* 115722eb cmp dword ptr [0x115921fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115921fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115722f2 jne 0x115722fd */
  if (!C.zf) goto L_115722fd;
  /* 115722f4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115722f7 mov dword ptr [0x115921fc], edx */
  w32((uint32_t)(0x115921fc), (EDX));
L_115722fd:;
  /* 115722fd jmp 0x1157231e */
  goto L_1157231e;
L_115722ff:;
  /* 115722ff mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 11572304 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11572307 mov dword ptr [0x11592214], eax */
  w32((uint32_t)(0x11592214), (EAX));
  /* 1157230c cmp dword ptr [0x115921fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115921fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572313 jne 0x1157231e */
  if (!C.zf) goto L_1157231e;
  /* 11572315 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11572318 mov dword ptr [0x115921fc], ecx */
  w32((uint32_t)(0x115921fc), (ECX));
L_1157231e:;
  /* 1157231e jmp 0x11572381 */
  goto L_11572381;
L_11572320:;
  /* 11572320 cmp dword ptr [0x11592208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572327 jne 0x11572381 */
  if (!C.zf) goto L_11572381;
  /* 11572329 cmp dword ptr [0x11592204], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592204))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572330 je 0x11572381 */
  if (C.zf) goto L_11572381;
  /* 11572332 mov edx, dword ptr [0x11592204] */
  EDX = (r32((uint32_t)(0x11592204)));
  /* 11572338 push edx */
  push32((uint32_t)(EDX));
  /* 11572339 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1157233c push eax */
  push32((uint32_t)(EAX));
  /* 1157233d mov ecx, dword ptr [0x1159220c] */
  ECX = (r32((uint32_t)(0x1159220c)));
  /* 11572343 push ecx */
  push32((uint32_t)(ECX));
  /* 11572344 call 0x115746e0 */
  push32(0x11572349u); f_115746e0();
  /* 11572349 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157234c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157234e jne 0x11572381 */
  if (!C.zf) goto L_11572381;
  /* 11572350 push 0 */
  push32((uint32_t)(0x0u));
  /* 11572352 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11572355 push edx */
  push32((uint32_t)(EDX));
  /* 11572356 call 0x11572760 */
  push32(0x1157235bu); f_11572760();
  /* 1157235b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157235e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572360 je 0x11572381 */
  if (C.zf) goto L_11572381;
  /* 11572362 mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 11572367 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1157236a mov dword ptr [0x11592214], eax */
  w32((uint32_t)(0x11592214), (EAX));
  /* 1157236f cmp dword ptr [0x115921fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115921fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572376 jne 0x11572381 */
  if (!C.zf) goto L_11572381;
  /* 11572378 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1157237b mov dword ptr [0x115921fc], ecx */
  w32((uint32_t)(0x115921fc), (ECX));
L_11572381:;
  /* 11572381 mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 11572386 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11572389 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1157238b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1157238d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1157238e:;
  /* 1157238e mov esp, ebp */
  ESP = (EBP);
  /* 11572390 pop ebp */
  EBP = (pop32());
  /* 11572391 ret 4 */
  ESPCHK(0x11572070u, _esp0);
  ESP += 8; return;
}

/* FUN_100123a0 @ 0x115723a0 (116 bytes, 33 insns) */
void f_115723a0(void) {
  FTRACE(0x115723a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115723a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115723a1 mov ebp, esp */
  EBP = (ESP);
  /* 115723a3 push ecx */
  push32((uint32_t)(ECX));
  /* 115723a4 mov eax, dword ptr [0x1159220c] */
  EAX = (r32((uint32_t)(0x1159220c)));
  /* 115723a9 push eax */
  push32((uint32_t)(EAX));
  /* 115723aa call 0x11568d70 */
  push32(0x115723afu); f_11568d70();
  /* 115723af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115723b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115723b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115723b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 115723ba mov dword ptr [0x11592208], ecx */
  w32((uint32_t)(0x11592208), (ECX));
  /* 115723c0 cmp dword ptr [0x11592208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115723c7 je 0x115723d2 */
  if (C.zf) goto L_115723d2;
  /* 115723c9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 115723d0 jmp 0x115723e4 */
  goto L_115723e4;
L_115723d2:;
  /* 115723d2 mov edx, dword ptr [0x1159220c] */
  EDX = (r32((uint32_t)(0x1159220c)));
  /* 115723d8 push edx */
  push32((uint32_t)(EDX));
  /* 115723d9 call 0x11572a50 */
  push32(0x115723deu); f_11572a50();
  /* 115723de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115723e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115723e4:;
  /* 115723e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115723e7 mov dword ptr [0x11592204], eax */
  w32((uint32_t)(0x11592204), (EAX));
  /* 115723ec push 1 */
  push32((uint32_t)(0x1u));
  /* 115723ee push 0x11572420 */
  push32((uint32_t)(0x11572420u));
  /* 115723f3 call dword ptr [0x115942f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942f8))), 0x115723f9u);
  /* 115723f9 mov ecx, dword ptr [0x11592214] */
  ECX = (r32((uint32_t)(0x11592214)));
  /* 115723ff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11572402 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11572404 jne 0x11572410 */
  if (!C.zf) goto L_11572410;
  /* 11572406 mov dword ptr [0x11592214], 0 */
  w32((uint32_t)(0x11592214), (0x0u));
L_11572410:;
  /* 11572410 mov esp, ebp */
  ESP = (EBP);
  /* 11572412 pop ebp */
  EBP = (pop32());
  /* 11572413 ret  */
  ESPCHK(0x115723a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012420 @ 0x11572420 (287 bytes, 86 insns) */
void f_11572420(void) {
  FTRACE(0x11572420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572420 push ebp */
  push32((uint32_t)(EBP));
  /* 11572421 mov ebp, esp */
  EBP = (ESP);
  /* 11572423 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572429 push eax */
  push32((uint32_t)(EAX));
  /* 1157242a call 0x115729d0 */
  push32(0x1157242fu); f_115729d0();
  /* 1157242f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572432 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11572435 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11572437 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1157243a push ecx */
  push32((uint32_t)(ECX));
  /* 1157243b mov edx, dword ptr [0x11592208] */
  EDX = (r32((uint32_t)(0x11592208)));
  /* 11572441 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11572443 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572445 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1157244b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572451 push edx */
  push32((uint32_t)(EDX));
  /* 11572452 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11572455 push eax */
  push32((uint32_t)(EAX));
  /* 11572456 call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x1157245cu);
  /* 1157245c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157245e jne 0x11572474 */
  if (!C.zf) goto L_11572474;
  /* 11572460 mov dword ptr [0x11592214], 0 */
  w32((uint32_t)(0x11592214), (0x0u));
  /* 1157246a mov eax, 1 */
  EAX = (0x1u);
  /* 1157246f jmp 0x11572539 */
  goto L_11572539;
L_11572474:;
  /* 11572474 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11572477 push ecx */
  push32((uint32_t)(ECX));
  /* 11572478 mov edx, dword ptr [0x1159220c] */
  EDX = (r32((uint32_t)(0x1159220c)));
  /* 1157247e push edx */
  push32((uint32_t)(EDX));
  /* 1157247f call 0x11574610 */
  push32(0x11572484u); f_11574610();
  /* 11572484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572489 jne 0x115724c9 */
  if (!C.zf) goto L_115724c9;
  /* 1157248b cmp dword ptr [0x11592208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572492 jne 0x115724a6 */
  if (!C.zf) goto L_115724a6;
  /* 11572494 push 1 */
  push32((uint32_t)(0x1u));
  /* 11572496 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11572499 push eax */
  push32((uint32_t)(EAX));
  /* 1157249a call 0x11572760 */
  push32(0x1157249fu); f_11572760();
  /* 1157249f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115724a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115724a4 je 0x115724c7 */
  if (C.zf) goto L_115724c7;
L_115724a6:;
  /* 115724a6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115724a9 mov dword ptr [0x11592218], ecx */
  w32((uint32_t)(0x11592218), (ECX));
  /* 115724af mov edx, dword ptr [0x11592218] */
  EDX = (r32((uint32_t)(0x11592218)));
  /* 115724b5 mov dword ptr [0x115921fc], edx */
  w32((uint32_t)(0x115921fc), (EDX));
  /* 115724bb mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 115724c0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 115724c2 mov dword ptr [0x11592214], eax */
  w32((uint32_t)(0x11592214), (EAX));
L_115724c7:;
  /* 115724c7 jmp 0x1157252c */
  goto L_1157252c;
L_115724c9:;
  /* 115724c9 cmp dword ptr [0x11592208], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592208))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115724d0 jne 0x1157252c */
  if (!C.zf) goto L_1157252c;
  /* 115724d2 cmp dword ptr [0x11592204], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592204))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115724d9 je 0x1157252c */
  if (C.zf) goto L_1157252c;
  /* 115724db mov ecx, dword ptr [0x11592204] */
  ECX = (r32((uint32_t)(0x11592204)));
  /* 115724e1 push ecx */
  push32((uint32_t)(ECX));
  /* 115724e2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 115724e5 push edx */
  push32((uint32_t)(EDX));
  /* 115724e6 mov eax, dword ptr [0x1159220c] */
  EAX = (r32((uint32_t)(0x1159220c)));
  /* 115724eb push eax */
  push32((uint32_t)(EAX));
  /* 115724ec call 0x115746e0 */
  push32(0x115724f1u); f_115746e0();
  /* 115724f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115724f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115724f6 jne 0x1157252c */
  if (!C.zf) goto L_1157252c;
  /* 115724f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115724fa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115724fd push ecx */
  push32((uint32_t)(ECX));
  /* 115724fe call 0x11572760 */
  push32(0x11572503u); f_11572760();
  /* 11572503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572508 je 0x1157252c */
  if (C.zf) goto L_1157252c;
  /* 1157250a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1157250d mov dword ptr [0x11592218], edx */
  w32((uint32_t)(0x11592218), (EDX));
  /* 11572513 mov eax, dword ptr [0x11592218] */
  EAX = (r32((uint32_t)(0x11592218)));
  /* 11572518 mov dword ptr [0x115921fc], eax */
  w32((uint32_t)(0x115921fc), (EAX));
  /* 1157251d mov ecx, dword ptr [0x11592214] */
  ECX = (r32((uint32_t)(0x11592214)));
  /* 11572523 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11572526 mov dword ptr [0x11592214], ecx */
  w32((uint32_t)(0x11592214), (ECX));
L_1157252c:;
  /* 1157252c mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 11572531 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11572534 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11572536 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572538 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11572539:;
  /* 11572539 mov esp, ebp */
  ESP = (EBP);
  /* 1157253b pop ebp */
  EBP = (pop32());
  /* 1157253c ret 4 */
  ESPCHK(0x11572420u, _esp0);
  ESP += 8; return;
}

/* FUN_10012540 @ 0x11572540 (69 bytes, 20 insns) */
void f_11572540(void) {
  FTRACE(0x11572540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572540 push ebp */
  push32((uint32_t)(EBP));
  /* 11572541 mov ebp, esp */
  EBP = (ESP);
  /* 11572543 mov eax, dword ptr [0x11592210] */
  EAX = (r32((uint32_t)(0x11592210)));
  /* 11572548 push eax */
  push32((uint32_t)(EAX));
  /* 11572549 call 0x11568d70 */
  push32(0x1157254eu); f_11568d70();
  /* 1157254e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572551 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11572553 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572556 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11572559 mov dword ptr [0x11592200], ecx */
  w32((uint32_t)(0x11592200), (ECX));
  /* 1157255f push 1 */
  push32((uint32_t)(0x1u));
  /* 11572561 push 0x11572590 */
  push32((uint32_t)(0x11572590u));
  /* 11572566 call dword ptr [0x115942f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942f8))), 0x1157256cu);
  /* 1157256c mov edx, dword ptr [0x11592214] */
  EDX = (r32((uint32_t)(0x11592214)));
  /* 11572572 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11572575 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11572577 jne 0x11572583 */
  if (!C.zf) goto L_11572583;
  /* 11572579 mov dword ptr [0x11592214], 0 */
  w32((uint32_t)(0x11592214), (0x0u));
L_11572583:;
  /* 11572583 pop ebp */
  EBP = (pop32());
  /* 11572584 ret  */
  ESPCHK(0x11572540u, _esp0);
  ESP += 4; return;
}

/* FUN_10012590 @ 0x11572590 (172 bytes, 54 insns) */
void f_11572590(void) {
  FTRACE(0x11572590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572590 push ebp */
  push32((uint32_t)(EBP));
  /* 11572591 mov ebp, esp */
  EBP = (ESP);
  /* 11572593 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572599 push eax */
  push32((uint32_t)(EAX));
  /* 1157259a call 0x115729d0 */
  push32(0x1157259fu); f_115729d0();
  /* 1157259f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115725a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 115725a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 115725a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115725aa push ecx */
  push32((uint32_t)(ECX));
  /* 115725ab mov edx, dword ptr [0x11592200] */
  EDX = (r32((uint32_t)(0x11592200)));
  /* 115725b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115725b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115725b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 115725bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115725c1 push edx */
  push32((uint32_t)(EDX));
  /* 115725c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115725c5 push eax */
  push32((uint32_t)(EAX));
  /* 115725c6 call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x115725ccu);
  /* 115725cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115725ce jne 0x115725e1 */
  if (!C.zf) goto L_115725e1;
  /* 115725d0 mov dword ptr [0x11592214], 0 */
  w32((uint32_t)(0x11592214), (0x0u));
  /* 115725da mov eax, 1 */
  EAX = (0x1u);
  /* 115725df jmp 0x11572636 */
  goto L_11572636;
L_115725e1:;
  /* 115725e1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 115725e4 push ecx */
  push32((uint32_t)(ECX));
  /* 115725e5 mov edx, dword ptr [0x11592210] */
  EDX = (r32((uint32_t)(0x11592210)));
  /* 115725eb push edx */
  push32((uint32_t)(EDX));
  /* 115725ec call 0x11574610 */
  push32(0x115725f1u); f_11574610();
  /* 115725f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115725f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115725f6 jne 0x11572629 */
  if (!C.zf) goto L_11572629;
  /* 115725f8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 115725fb push eax */
  push32((uint32_t)(EAX));
  /* 115725fc call 0x11572710 */
  push32(0x11572601u); f_11572710();
  /* 11572601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572606 je 0x11572629 */
  if (C.zf) goto L_11572629;
  /* 11572608 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1157260b mov dword ptr [0x11592218], ecx */
  w32((uint32_t)(0x11592218), (ECX));
  /* 11572611 mov edx, dword ptr [0x11592218] */
  EDX = (r32((uint32_t)(0x11592218)));
  /* 11572617 mov dword ptr [0x115921fc], edx */
  w32((uint32_t)(0x115921fc), (EDX));
  /* 1157261d mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 11572622 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11572624 mov dword ptr [0x11592214], eax */
  w32((uint32_t)(0x11592214), (EAX));
L_11572629:;
  /* 11572629 mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 1157262e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11572631 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11572633 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572635 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11572636:;
  /* 11572636 mov esp, ebp */
  ESP = (EBP);
  /* 11572638 pop ebp */
  EBP = (pop32());
  /* 11572639 ret 4 */
  ESPCHK(0x11572590u, _esp0);
  ESP += 8; return;
}

/* FUN_10012640 @ 0x11572640 (43 bytes, 11 insns) */
void f_11572640(void) {
  FTRACE(0x11572640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572640 push ebp */
  push32((uint32_t)(EBP));
  /* 11572641 mov ebp, esp */
  EBP = (ESP);
  /* 11572643 mov eax, dword ptr [0x11592214] */
  EAX = (r32((uint32_t)(0x11592214)));
  /* 11572648 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1157264d mov dword ptr [0x11592214], eax */
  w32((uint32_t)(0x11592214), (EAX));
  /* 11572652 call dword ptr [0x115942f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942f4))), 0x11572658u);
  /* 11572658 mov dword ptr [0x11592218], eax */
  w32((uint32_t)(0x11592218), (EAX));
  /* 1157265d mov ecx, dword ptr [0x11592218] */
  ECX = (r32((uint32_t)(0x11592218)));
  /* 11572663 mov dword ptr [0x115921fc], ecx */
  w32((uint32_t)(0x115921fc), (ECX));
  /* 11572669 pop ebp */
  EBP = (pop32());
  /* 1157266a ret  */
  ESPCHK(0x11572640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012670 @ 0x11572670 (155 bytes, 57 insns) */
void f_11572670(void) {
  FTRACE(0x11572670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572670 push ebp */
  push32((uint32_t)(EBP));
  /* 11572671 mov ebp, esp */
  EBP = (ESP);
  /* 11572673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572676 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157267a je 0x1157269b */
  if (C.zf) goto L_1157269b;
  /* 1157267c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157267f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11572682 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11572684 je 0x1157269b */
  if (C.zf) goto L_1157269b;
  /* 11572686 push 0x1158d824 */
  push32((uint32_t)(0x1158d824u));
  /* 1157268b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157268e push edx */
  push32((uint32_t)(EDX));
  /* 1157268f call 0x11571bd0 */
  push32(0x11572694u); f_11571bd0();
  /* 11572694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572699 jne 0x115726c3 */
  if (!C.zf) goto L_115726c3;
L_1157269b:;
  /* 1157269b push 8 */
  push32((uint32_t)(0x8u));
  /* 1157269d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115726a0 push eax */
  push32((uint32_t)(EAX));
  /* 115726a1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 115726a6 mov ecx, dword ptr [0x11592218] */
  ECX = (r32((uint32_t)(0x11592218)));
  /* 115726ac push ecx */
  push32((uint32_t)(ECX));
  /* 115726ad call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x115726b3u);
  /* 115726b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115726b5 jne 0x115726bb */
  if (!C.zf) goto L_115726bb;
  /* 115726b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115726b9 jmp 0x11572707 */
  goto L_11572707;
L_115726bb:;
  /* 115726bb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 115726be mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115726c1 jmp 0x115726fb */
  goto L_115726fb;
L_115726c3:;
  /* 115726c3 push 0x1158d820 */
  push32((uint32_t)(0x1158d820u));
  /* 115726c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115726cb push eax */
  push32((uint32_t)(EAX));
  /* 115726cc call 0x11571bd0 */
  push32(0x115726d1u); f_11571bd0();
  /* 115726d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115726d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115726d6 jne 0x115726fb */
  if (!C.zf) goto L_115726fb;
  /* 115726d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 115726da lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 115726dd push ecx */
  push32((uint32_t)(ECX));
  /* 115726de push 0xb */
  push32((uint32_t)(0xbu));
  /* 115726e0 mov edx, dword ptr [0x11592218] */
  EDX = (r32((uint32_t)(0x11592218)));
  /* 115726e6 push edx */
  push32((uint32_t)(EDX));
  /* 115726e7 call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x115726edu);
  /* 115726ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115726ef jne 0x115726f5 */
  if (!C.zf) goto L_115726f5;
  /* 115726f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115726f3 jmp 0x11572707 */
  goto L_11572707;
L_115726f5:;
  /* 115726f5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 115726f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115726fb:;
  /* 115726fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115726fe push ecx */
  push32((uint32_t)(ECX));
  /* 115726ff call 0x115747f0 */
  push32(0x11572704u); f_115747f0();
  /* 11572704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11572707:;
  /* 11572707 mov esp, ebp */
  ESP = (EBP);
  /* 11572709 pop ebp */
  EBP = (pop32());
  /* 1157270a ret  */
  ESPCHK(0x11572670u, _esp0);
  ESP += 4; return;
}

/* FUN_10012710 @ 0x11572710 (79 bytes, 26 insns) */
void f_11572710(void) {
  FTRACE(0x11572710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572710 push ebp */
  push32((uint32_t)(EBP));
  /* 11572711 mov ebp, esp */
  EBP = (ESP);
  /* 11572713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572716 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1157271a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1157271e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11572725 jmp 0x11572730 */
  goto L_11572730;
L_11572727:;
  /* 11572727 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157272a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157272d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11572730:;
  /* 11572730 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572734 jae 0x11572756 */
  if (!C.cf) goto L_11572756;
  /* 11572736 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11572739 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1157273f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11572742 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11572744 mov cx, word ptr [eax*2 + 0x115909c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x115909c4)));
  /* 1157274c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157274e jne 0x11572754 */
  if (!C.zf) goto L_11572754;
  /* 11572750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11572752 jmp 0x1157275b */
  goto L_1157275b;
L_11572754:;
  /* 11572754 jmp 0x11572727 */
  goto L_11572727;
L_11572756:;
  /* 11572756 mov eax, 1 */
  EAX = (0x1u);
L_1157275b:;
  /* 1157275b mov esp, ebp */
  ESP = (EBP);
  /* 1157275d pop ebp */
  EBP = (pop32());
  /* 1157275e ret  */
  ESPCHK(0x11572710u, _esp0);
  ESP += 4; return;
}

/* FUN_10012760 @ 0x11572760 (135 bytes, 48 insns) */
void f_11572760(void) {
  FTRACE(0x11572760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572760 push ebp */
  push32((uint32_t)(EBP));
  /* 11572761 mov ebp, esp */
  EBP = (ESP);
  /* 11572763 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572766 push esi */
  push32((uint32_t)(ESI));
  /* 11572767 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157276a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1157276f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11572774 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11572779 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1157277c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11572781 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11572784 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11572786 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11572789 push ecx */
  push32((uint32_t)(ECX));
  /* 1157278a push 1 */
  push32((uint32_t)(0x1u));
  /* 1157278c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157278f push edx */
  push32((uint32_t)(EDX));
  /* 11572790 call dword ptr [0x1159221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159221c))), 0x11572796u);
  /* 11572796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572798 jne 0x1157279e */
  if (!C.zf) goto L_1157279e;
  /* 1157279a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157279c jmp 0x115727e2 */
  goto L_115727e2;
L_1157279e:;
  /* 1157279e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 115727a1 push eax */
  push32((uint32_t)(EAX));
  /* 115727a2 call 0x115729d0 */
  push32(0x115727a7u); f_115729d0();
  /* 115727a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115727aa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115727ad je 0x115727dd */
  if (C.zf) goto L_115727dd;
  /* 115727af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115727b3 je 0x115727dd */
  if (C.zf) goto L_115727dd;
  /* 115727b5 mov ecx, dword ptr [0x1159220c] */
  ECX = (r32((uint32_t)(0x1159220c)));
  /* 115727bb push ecx */
  push32((uint32_t)(ECX));
  /* 115727bc call 0x11572a50 */
  push32(0x115727c1u); f_11572a50();
  /* 115727c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115727c4 mov esi, eax */
  ESI = (EAX);
  /* 115727c6 mov edx, dword ptr [0x1159220c] */
  EDX = (r32((uint32_t)(0x1159220c)));
  /* 115727cc push edx */
  push32((uint32_t)(EDX));
  /* 115727cd call 0x11568d70 */
  push32(0x115727d2u); f_11568d70();
  /* 115727d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115727d5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115727d7 jne 0x115727dd */
  if (!C.zf) goto L_115727dd;
  /* 115727d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115727db jmp 0x115727e2 */
  goto L_115727e2;
L_115727dd:;
  /* 115727dd mov eax, 1 */
  EAX = (0x1u);
L_115727e2:;
  /* 115727e2 pop esi */
  ESI = (pop32());
  /* 115727e3 mov esp, ebp */
  ESP = (EBP);
  /* 115727e5 pop ebp */
  EBP = (pop32());
  /* 115727e6 ret  */
  ESPCHK(0x11572760u, _esp0);
  ESP += 4; return;
}

/* FUN_100127f0 @ 0x115727f0 (77 bytes, 18 insns) */
void f_115727f0(void) {
  FTRACE(0x115727f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115727f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115727f1 mov ebp, esp */
  EBP = (ESP);
  /* 115727f3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115727f9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11572803 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11572809 push eax */
  push32((uint32_t)(EAX));
  /* 1157280a call dword ptr [0x115942f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942f0))), 0x11572810u);
  /* 11572810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572812 je 0x11572829 */
  if (C.zf) goto L_11572829;
  /* 11572814 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157281b jne 0x11572829 */
  if (!C.zf) goto L_11572829;
  /* 1157281d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11572827 jmp 0x11572833 */
  goto L_11572833;
L_11572829:;
  /* 11572829 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11572833:;
  /* 11572833 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11572839 mov esp, ebp */
  ESP = (EBP);
  /* 1157283b pop ebp */
  EBP = (pop32());
  /* 1157283c ret  */
  ESPCHK(0x115727f0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11572840 (388 bytes, 118 insns) */
void f_11572840(void) {
  FTRACE(0x11572840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572840 push ebp */
  push32((uint32_t)(EBP));
  /* 11572841 mov ebp, esp */
  EBP = (ESP);
  /* 11572843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572846 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1157284d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11572854 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1157285b:;
  /* 1157285b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1157285e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572861 jg 0x115729a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_115729a8;
  /* 11572867 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1157286a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157286d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1157286e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572870 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11572872 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11572875 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572878 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1157287b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157287e cmp edx, dword ptr [ecx + 0x11590520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11590520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572884 jne 0x1157297e */
  if (!C.zf) goto L_1157297e;
  /* 1157288a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157288d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11572890 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572894 ja 0x115728b7 */
  if ((!C.cf&&!C.zf)) goto L_115728b7;
  /* 11572896 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157289a je 0x11572929 */
  if (C.zf) goto L_11572929;
  /* 115728a0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115728a4 je 0x115728d4 */
  if (C.zf) goto L_115728d4;
  /* 115728a6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115728aa je 0x115728f6 */
  if (C.zf) goto L_115728f6;
  /* 115728ac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115728b0 je 0x11572918 */
  if (C.zf) goto L_11572918;
  /* 115728b2 jmp 0x11572948 */
  goto L_11572948;
L_115728b7:;
  /* 115728b7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115728be je 0x115728e5 */
  if (C.zf) goto L_115728e5;
  /* 115728c0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115728c7 je 0x11572907 */
  if (C.zf) goto L_11572907;
  /* 115728c9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115728d0 je 0x1157293a */
  if (C.zf) goto L_1157293a;
  /* 115728d2 jmp 0x11572948 */
  goto L_11572948;
L_115728d4:;
  /* 115728d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115728d7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115728da add ecx, 0x11590524 */
  { uint32_t _a=(ECX),_b=(0x11590524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115728e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115728e3 jmp 0x11572948 */
  goto L_11572948;
L_115728e5:;
  /* 115728e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115728e8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115728eb mov eax, dword ptr [edx + 0x1159052c] */
  EAX = (r32((uint32_t)(EDX + 0x1159052c)));
  /* 115728f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115728f4 jmp 0x11572948 */
  goto L_11572948;
L_115728f6:;
  /* 115728f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115728f9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115728fc add ecx, 0x11590530 */
  { uint32_t _a=(ECX),_b=(0x11590530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572902 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11572905 jmp 0x11572948 */
  goto L_11572948;
L_11572907:;
  /* 11572907 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157290a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1157290d mov eax, dword ptr [edx + 0x11590534] */
  EAX = (r32((uint32_t)(EDX + 0x11590534)));
  /* 11572913 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11572916 jmp 0x11572948 */
  goto L_11572948;
L_11572918:;
  /* 11572918 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157291b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1157291e add ecx, 0x11590538 */
  { uint32_t _a=(ECX),_b=(0x11590538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572924 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11572927 jmp 0x11572948 */
  goto L_11572948;
L_11572929:;
  /* 11572929 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157292c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1157292f add edx, 0x1159053c */
  { uint32_t _a=(EDX),_b=(0x1159053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572935 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11572938 jmp 0x11572948 */
  goto L_11572948;
L_1157293a:;
  /* 1157293a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157293d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11572940 add eax, 0x11590544 */
  { uint32_t _a=(EAX),_b=(0x11590544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572945 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11572948:;
  /* 11572948 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157294c je 0x11572954 */
  if (C.zf) goto L_11572954;
  /* 1157294e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572952 jge 0x11572956 */
  if ((C.sf==C.of)) goto L_11572956;
L_11572954:;
  /* 11572954 jmp 0x115729a8 */
  goto L_115729a8;
L_11572956:;
  /* 11572956 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11572959 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1157295c push ecx */
  push32((uint32_t)(ECX));
  /* 1157295d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11572960 push edx */
  push32((uint32_t)(EDX));
  /* 11572961 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11572964 push eax */
  push32((uint32_t)(EAX));
  /* 11572965 call 0x11569760 */
  push32(0x1157296au); f_11569760();
  /* 1157296a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157296d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11572970 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572973 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11572977 mov eax, 1 */
  EAX = (0x1u);
  /* 1157297c jmp 0x115729be */
  goto L_115729be;
L_1157297e:;
  /* 1157297e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572981 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11572984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572987 cmp eax, dword ptr [edx + 0x11590520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11590520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157298d jae 0x1157299a */
  if (!C.cf) goto L_1157299a;
  /* 1157298f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572992 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572995 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11572998 jmp 0x115729a3 */
  goto L_115729a3;
L_1157299a:;
  /* 1157299a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157299d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115729a0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_115729a3:;
  /* 115729a3 jmp 0x1157285b */
  goto L_1157285b;
L_115729a8:;
  /* 115729a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115729ab push eax */
  push32((uint32_t)(EAX));
  /* 115729ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115729af push ecx */
  push32((uint32_t)(ECX));
  /* 115729b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115729b3 push edx */
  push32((uint32_t)(EDX));
  /* 115729b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115729b7 push eax */
  push32((uint32_t)(EAX));
  /* 115729b8 call dword ptr [0x115942fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942fc))), 0x115729beu);
L_115729be:;
  /* 115729be mov esp, ebp */
  ESP = (EBP);
  /* 115729c0 pop ebp */
  EBP = (pop32());
  /* 115729c1 ret 0x10 */
  ESPCHK(0x11572840u, _esp0);
  ESP += 20; return;
}

/* FUN_100129d0 @ 0x115729d0 (118 bytes, 42 insns) */
void f_115729d0(void) {
  FTRACE(0x115729d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115729d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115729d1 mov ebp, esp */
  EBP = (ESP);
  /* 115729d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115729d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115729dd:;
  /* 115729dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115729e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115729e2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 115729e5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115729e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115729ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115729ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115729f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115729f4 je 0x11572a3f */
  if (C.zf) goto L_11572a3f;
  /* 115729f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 115729fa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115729fd jl 0x11572a12 */
  if ((C.sf!=C.of)) goto L_11572a12;
  /* 115729ff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11572a03 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572a06 jg 0x11572a12 */
  if ((!C.zf&&C.sf==C.of)) goto L_11572a12;
  /* 11572a08 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11572a0b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11572a0d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11572a10 jmp 0x11572a2c */
  goto L_11572a2c;
L_11572a12:;
  /* 11572a12 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11572a16 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572a19 jl 0x11572a2c */
  if ((C.sf!=C.of)) goto L_11572a2c;
  /* 11572a1b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11572a1f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572a22 jg 0x11572a2c */
  if ((!C.zf&&C.sf==C.of)) goto L_11572a2c;
  /* 11572a24 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11572a27 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11572a29 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11572a2c:;
  /* 11572a2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11572a2f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11572a32 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11572a36 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11572a3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11572a3d jmp 0x115729dd */
  goto L_115729dd;
L_11572a3f:;
  /* 11572a3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11572a42 mov esp, ebp */
  ESP = (EBP);
  /* 11572a44 pop ebp */
  EBP = (pop32());
  /* 11572a45 ret  */
  ESPCHK(0x115729d0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11572a50 (101 bytes, 36 insns) */
void f_11572a50(void) {
  FTRACE(0x11572a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11572a51 mov ebp, esp */
  EBP = (ESP);
  /* 11572a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572a56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11572a5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572a60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11572a62 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11572a65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572a68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572a6b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11572a6e:;
  /* 11572a6e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11572a72 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572a75 jl 0x11572a80 */
  if ((C.sf!=C.of)) goto L_11572a80;
  /* 11572a77 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11572a7b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572a7e jle 0x11572a92 */
  if ((C.zf||C.sf!=C.of)) goto L_11572a92;
L_11572a80:;
  /* 11572a80 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11572a84 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572a87 jl 0x11572aae */
  if ((C.sf!=C.of)) goto L_11572aae;
  /* 11572a89 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11572a8d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572a90 jg 0x11572aae */
  if ((!C.zf&&C.sf==C.of)) goto L_11572aae;
L_11572a92:;
  /* 11572a92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11572a95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572a98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11572a9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572a9e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11572aa0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11572aa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572aa6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572aa9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11572aac jmp 0x11572a6e */
  goto L_11572a6e;
L_11572aae:;
  /* 11572aae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11572ab1 mov esp, ebp */
  ESP = (EBP);
  /* 11572ab3 pop ebp */
  EBP = (pop32());
  /* 11572ab4 ret  */
  ESPCHK(0x11572a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ac0 @ 0x11572ac0 (122 bytes, 39 insns) */
void f_11572ac0(void) {
  FTRACE(0x11572ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11572ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11572ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11572ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572ac7 cmp eax, dword ptr [0x11593a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572acd jae 0x11572af1 */
  if (!C.cf) goto L_11572af1;
  /* 11572acf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572ad2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11572ad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572ad8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11572adb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11572ade mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 11572ae5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11572aea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11572aed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11572aef jne 0x11572b0c */
  if (!C.zf) goto L_11572b0c;
L_11572af1:;
  /* 11572af1 call 0x1156de10 */
  push32(0x11572af6u); f_1156de10();
  /* 11572af6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11572afc call 0x1156de20 */
  push32(0x11572b01u); f_1156de20();
  /* 11572b01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11572b07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11572b0a jmp 0x11572b36 */
  goto L_11572b36;
L_11572b0c:;
  /* 11572b0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572b0f push edx */
  push32((uint32_t)(EDX));
  /* 11572b10 call 0x1156f630 */
  push32(0x11572b15u); f_1156f630();
  /* 11572b15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572b18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572b1b push eax */
  push32((uint32_t)(EAX));
  /* 11572b1c call 0x11572b40 */
  push32(0x11572b21u); f_11572b40();
  /* 11572b21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572b24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11572b27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572b2a push ecx */
  push32((uint32_t)(ECX));
  /* 11572b2b call 0x1156f6c0 */
  push32(0x11572b30u); f_1156f6c0();
  /* 11572b30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572b33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11572b36:;
  /* 11572b36 mov esp, ebp */
  ESP = (EBP);
  /* 11572b38 pop ebp */
  EBP = (pop32());
  /* 11572b39 ret  */
  ESPCHK(0x11572ac0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11572b40 (170 bytes, 59 insns) */
void f_11572b40(void) {
  FTRACE(0x11572b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11572b41 mov ebp, esp */
  EBP = (ESP);
  /* 11572b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11572b44 push esi */
  push32((uint32_t)(ESI));
  /* 11572b45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572b48 push eax */
  push32((uint32_t)(EAX));
  /* 11572b49 call 0x1156f4b0 */
  push32(0x11572b4eu); f_1156f4b0();
  /* 11572b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572b51 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572b54 je 0x11572b93 */
  if (C.zf) goto L_11572b93;
  /* 11572b56 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572b5a je 0x11572b62 */
  if (C.zf) goto L_11572b62;
  /* 11572b5c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572b60 jne 0x11572b7c */
  if (!C.zf) goto L_11572b7c;
L_11572b62:;
  /* 11572b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11572b64 call 0x1156f4b0 */
  push32(0x11572b69u); f_1156f4b0();
  /* 11572b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572b6c mov esi, eax */
  ESI = (EAX);
  /* 11572b6e push 2 */
  push32((uint32_t)(0x2u));
  /* 11572b70 call 0x1156f4b0 */
  push32(0x11572b75u); f_1156f4b0();
  /* 11572b75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572b78 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572b7a je 0x11572b93 */
  if (C.zf) goto L_11572b93;
L_11572b7c:;
  /* 11572b7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572b7f push ecx */
  push32((uint32_t)(ECX));
  /* 11572b80 call 0x1156f4b0 */
  push32(0x11572b85u); f_1156f4b0();
  /* 11572b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572b88 push eax */
  push32((uint32_t)(EAX));
  /* 11572b89 call dword ptr [0x115942ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942ec))), 0x11572b8fu);
  /* 11572b8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572b91 je 0x11572b9c */
  if (C.zf) goto L_11572b9c;
L_11572b93:;
  /* 11572b93 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11572b9a jmp 0x11572ba5 */
  goto L_11572ba5;
L_11572b9c:;
  /* 11572b9c call dword ptr [0x115943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d4))), 0x11572ba2u);
  /* 11572ba2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11572ba5:;
  /* 11572ba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572ba8 push edx */
  push32((uint32_t)(EDX));
  /* 11572ba9 call 0x1156f3d0 */
  push32(0x11572baeu); f_1156f3d0();
  /* 11572bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572bb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572bb4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11572bb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572bba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11572bbd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11572bc0 mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 11572bc7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11572bcc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572bd0 je 0x11572be3 */
  if (C.zf) goto L_11572be3;
  /* 11572bd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11572bd5 push eax */
  push32((uint32_t)(EAX));
  /* 11572bd6 call 0x1156dd70 */
  push32(0x11572bdbu); f_1156dd70();
  /* 11572bdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572bde or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11572be1 jmp 0x11572be5 */
  goto L_11572be5;
L_11572be3:;
  /* 11572be3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11572be5:;
  /* 11572be5 pop esi */
  ESI = (pop32());
  /* 11572be6 mov esp, ebp */
  ESP = (EBP);
  /* 11572be8 pop ebp */
  EBP = (pop32());
  /* 11572be9 ret  */
  ESPCHK(0x11572b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bf0 @ 0x11572bf0 (146 bytes, 52 insns) */
void f_11572bf0(void) {
  FTRACE(0x11572bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11572bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11572bf3 push ebx */
  push32((uint32_t)(EBX));
  /* 11572bf4 push esi */
  push32((uint32_t)(ESI));
  /* 11572bf5 push edi */
  push32((uint32_t)(EDI));
L_11572bf6:;
  /* 11572bf6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572bfa jne 0x11572c1a */
  if (!C.zf) goto L_11572c1a;
  /* 11572bfc push 0x1158d160 */
  push32((uint32_t)(0x1158d160u));
  /* 11572c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11572c03 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11572c05 push 0x1158d828 */
  push32((uint32_t)(0x1158d828u));
  /* 11572c0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11572c0c call 0x11565000 */
  push32(0x11572c11u); f_11565000();
  /* 11572c11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572c14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572c17 jne 0x11572c1a */
  if (!C.zf) goto L_11572c1a;
  /* 11572c19 int3  */
  x86_unimpl("int3 @ 0x11572c19");
L_11572c1a:;
  /* 11572c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11572c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11572c1e jne 0x11572bf6 */
  if (!C.zf) goto L_11572bf6;
  /* 11572c20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572c23 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11572c26 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11572c2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11572c2e je 0x11572c7d */
  if (C.zf) goto L_11572c7d;
  /* 11572c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572c33 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11572c36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11572c39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11572c3b je 0x11572c7d */
  if (C.zf) goto L_11572c7d;
  /* 11572c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11572c3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572c42 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11572c45 push eax */
  push32((uint32_t)(EAX));
  /* 11572c46 call 0x115669d0 */
  push32(0x11572c4bu); f_115669d0();
  /* 11572c4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572c4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572c51 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11572c54 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11572c5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572c5d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11572c60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572c63 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11572c69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572c6c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11572c73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11572c76 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11572c7d:;
  /* 11572c7d pop edi */
  EDI = (pop32());
  /* 11572c7e pop esi */
  ESI = (pop32());
  /* 11572c7f pop ebx */
  EBX = (pop32());
  /* 11572c80 pop ebp */
  EBP = (pop32());
  /* 11572c81 ret  */
  ESPCHK(0x11572bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c90 @ 0x11572c90 (289 bytes, 97 insns) */
void f_11572c90(void) {
  FTRACE(0x11572c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11572c91 mov ebp, esp */
  EBP = (ESP);
  /* 11572c93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572c96 push esi */
  push32((uint32_t)(ESI));
  /* 11572c97 mov eax, dword ptr [0x11590c98] */
  EAX = (r32((uint32_t)(0x11590c98)));
  /* 11572c9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11572c9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11572ca6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11572cad jmp 0x11572cb8 */
  goto L_11572cb8;
L_11572caf:;
  /* 11572caf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572cb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572cb5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11572cb8:;
  /* 11572cb8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572cbc jae 0x11572cf1 */
  if (!C.cf) goto L_11572cf1;
  /* 11572cbe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572cc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572cc4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11572cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11572cc8 call 0x11568d70 */
  push32(0x11572ccdu); f_11568d70();
  /* 11572ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572cd0 mov esi, eax */
  ESI = (EAX);
  /* 11572cd2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572cd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572cd8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11572cdc push ecx */
  push32((uint32_t)(ECX));
  /* 11572cdd call 0x11568d70 */
  push32(0x11572ce2u); f_11568d70();
  /* 11572ce2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572ce5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572ce8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11572cec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11572cef jmp 0x11572caf */
  goto L_11572caf;
L_11572cf1:;
  /* 11572cf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11572cf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572cf7 push eax */
  push32((uint32_t)(EAX));
  /* 11572cf8 call 0x11565f20 */
  push32(0x11572cfdu); f_11565f20();
  /* 11572cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11572d03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572d07 je 0x11572da9 */
  if (C.zf) goto L_11572da9;
  /* 11572d0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11572d10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11572d13 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11572d1a jmp 0x11572d25 */
  goto L_11572d25;
L_11572d1c:;
  /* 11572d1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572d1f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d22 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11572d25:;
  /* 11572d25 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572d29 jae 0x11572d9a */
  if (!C.cf) goto L_11572d9a;
  /* 11572d2b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572d2e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11572d31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572d34 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d37 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11572d3a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572d3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572d40 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11572d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11572d44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572d47 push edx */
  push32((uint32_t)(EDX));
  /* 11572d48 call 0x11568ef0 */
  push32(0x11572d4du); f_11568ef0();
  /* 11572d4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d50 push eax */
  push32((uint32_t)(EAX));
  /* 11572d51 call 0x11568d70 */
  push32(0x11572d56u); f_11568d70();
  /* 11572d56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d59 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572d5c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d5e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11572d61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572d64 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11572d67 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572d6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11572d70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572d73 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572d76 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11572d7a push eax */
  push32((uint32_t)(EAX));
  /* 11572d7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572d7e push ecx */
  push32((uint32_t)(ECX));
  /* 11572d7f call 0x11568ef0 */
  push32(0x11572d84u); f_11568ef0();
  /* 11572d84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d87 push eax */
  push32((uint32_t)(EAX));
  /* 11572d88 call 0x11568d70 */
  push32(0x11572d8du); f_11568d70();
  /* 11572d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572d93 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572d95 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11572d98 jmp 0x11572d1c */
  goto L_11572d1c;
L_11572d9a:;
  /* 11572d9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572d9d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11572da0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572da3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572da6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11572da9:;
  /* 11572da9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11572dac pop esi */
  ESI = (pop32());
  /* 11572dad mov esp, ebp */
  ESP = (EBP);
  /* 11572daf pop ebp */
  EBP = (pop32());
  /* 11572db0 ret  */
  ESPCHK(0x11572c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dc0 @ 0x11572dc0 (291 bytes, 97 insns) */
void f_11572dc0(void) {
  FTRACE(0x11572dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11572dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11572dc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572dc6 push esi */
  push32((uint32_t)(ESI));
  /* 11572dc7 mov eax, dword ptr [0x11590c98] */
  EAX = (r32((uint32_t)(0x11590c98)));
  /* 11572dcc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11572dcf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11572dd6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11572ddd jmp 0x11572de8 */
  goto L_11572de8;
L_11572ddf:;
  /* 11572ddf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572de2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572de5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11572de8:;
  /* 11572de8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572dec jae 0x11572e22 */
  if (!C.cf) goto L_11572e22;
  /* 11572dee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572df1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572df4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11572df8 push ecx */
  push32((uint32_t)(ECX));
  /* 11572df9 call 0x11568d70 */
  push32(0x11572dfeu); f_11568d70();
  /* 11572dfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e01 mov esi, eax */
  ESI = (EAX);
  /* 11572e03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572e06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572e09 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11572e0d push ecx */
  push32((uint32_t)(ECX));
  /* 11572e0e call 0x11568d70 */
  push32(0x11572e13u); f_11568d70();
  /* 11572e13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e16 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e19 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11572e1d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11572e20 jmp 0x11572ddf */
  goto L_11572ddf;
L_11572e22:;
  /* 11572e22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11572e25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e28 push eax */
  push32((uint32_t)(EAX));
  /* 11572e29 call 0x11565f20 */
  push32(0x11572e2eu); f_11565f20();
  /* 11572e2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11572e34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572e38 je 0x11572edb */
  if (C.zf) goto L_11572edb;
  /* 11572e3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11572e41 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11572e44 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11572e4b jmp 0x11572e56 */
  goto L_11572e56;
L_11572e4d:;
  /* 11572e4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572e50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11572e56:;
  /* 11572e56 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572e5a jae 0x11572ecc */
  if (!C.cf) goto L_11572ecc;
  /* 11572e5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572e5f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11572e62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572e65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11572e6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572e6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572e71 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11572e75 push ecx */
  push32((uint32_t)(ECX));
  /* 11572e76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572e79 push edx */
  push32((uint32_t)(EDX));
  /* 11572e7a call 0x11568ef0 */
  push32(0x11572e7fu); f_11568ef0();
  /* 11572e7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e82 push eax */
  push32((uint32_t)(EAX));
  /* 11572e83 call 0x11568d70 */
  push32(0x11572e88u); f_11568d70();
  /* 11572e88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572e8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11572e93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572e96 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11572e99 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572e9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572e9f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11572ea2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572ea5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572ea8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11572eac push eax */
  push32((uint32_t)(EAX));
  /* 11572ead mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11572eb1 call 0x11568ef0 */
  push32(0x11572eb6u); f_11568ef0();
  /* 11572eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572eb9 push eax */
  push32((uint32_t)(EAX));
  /* 11572eba call 0x11568d70 */
  push32(0x11572ebfu); f_11568d70();
  /* 11572ebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572ec2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572ec5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572ec7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11572eca jmp 0x11572e4d */
  goto L_11572e4d;
L_11572ecc:;
  /* 11572ecc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572ecf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11572ed2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11572ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572ed8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11572edb:;
  /* 11572edb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11572ede pop esi */
  ESI = (pop32());
  /* 11572edf mov esp, ebp */
  ESP = (EBP);
  /* 11572ee1 pop ebp */
  EBP = (pop32());
  /* 11572ee2 ret  */
  ESPCHK(0x11572dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ef0 @ 0x11572ef0 (878 bytes, 273 insns) */
void f_11572ef0(void) {
  FTRACE(0x11572ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11572ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11572ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11572ef3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11572ef6 push esi */
  push32((uint32_t)(ESI));
  /* 11572ef7 mov eax, dword ptr [0x11590c98] */
  EAX = (r32((uint32_t)(0x11590c98)));
  /* 11572efc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11572eff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11572f06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11572f0d jmp 0x11572f18 */
  goto L_11572f18;
L_11572f0f:;
  /* 11572f0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572f12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572f15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11572f18:;
  /* 11572f18 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572f1c jae 0x11572f51 */
  if (!C.cf) goto L_11572f51;
  /* 11572f1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572f21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572f24 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11572f27 push ecx */
  push32((uint32_t)(ECX));
  /* 11572f28 call 0x11568d70 */
  push32(0x11572f2du); f_11568d70();
  /* 11572f2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572f30 mov esi, eax */
  ESI = (EAX);
  /* 11572f32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572f35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572f38 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11572f3c push ecx */
  push32((uint32_t)(ECX));
  /* 11572f3d call 0x11568d70 */
  push32(0x11572f42u); f_11568d70();
  /* 11572f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572f45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572f48 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11572f4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11572f4f jmp 0x11572f0f */
  goto L_11572f0f;
L_11572f51:;
  /* 11572f51 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11572f58 jmp 0x11572f63 */
  goto L_11572f63;
L_11572f5a:;
  /* 11572f5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572f5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572f60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11572f63:;
  /* 11572f63 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11572f67 jae 0x11572f9d */
  if (!C.cf) goto L_11572f9d;
  /* 11572f69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572f6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572f6f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11572f73 push eax */
  push32((uint32_t)(EAX));
  /* 11572f74 call 0x11568d70 */
  push32(0x11572f79u); f_11568d70();
  /* 11572f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572f7c mov esi, eax */
  ESI = (EAX);
  /* 11572f7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11572f81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572f84 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11572f88 push eax */
  push32((uint32_t)(EAX));
  /* 11572f89 call 0x11568d70 */
  push32(0x11572f8eu); f_11568d70();
  /* 11572f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572f91 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572f94 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11572f98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11572f9b jmp 0x11572f5a */
  goto L_11572f5a;
L_11572f9d:;
  /* 11572f9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572fa0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11572fa6 push eax */
  push32((uint32_t)(EAX));
  /* 11572fa7 call 0x11568d70 */
  push32(0x11572facu); f_11568d70();
  /* 11572fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572faf mov esi, eax */
  ESI = (EAX);
  /* 11572fb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572fb4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11572fba push edx */
  push32((uint32_t)(EDX));
  /* 11572fbb call 0x11568d70 */
  push32(0x11572fc0u); f_11568d70();
  /* 11572fc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572fc3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11572fc6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11572fca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11572fcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572fd0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11572fd6 push edx */
  push32((uint32_t)(EDX));
  /* 11572fd7 call 0x11568d70 */
  push32(0x11572fdcu); f_11568d70();
  /* 11572fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572fdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11572fe2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11572fe6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11572fe9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11572fec mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11572ff2 push ecx */
  push32((uint32_t)(ECX));
  /* 11572ff3 call 0x11568d70 */
  push32(0x11572ff8u); f_11568d70();
  /* 11572ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11572ffb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11572ffe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11573002 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11573005 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573008 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1157300e push edx */
  push32((uint32_t)(EDX));
  /* 1157300f call 0x11568d70 */
  push32(0x11573014u); f_11568d70();
  /* 11573014 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573017 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157301a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1157301e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11573021 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11573024 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573029 push eax */
  push32((uint32_t)(EAX));
  /* 1157302a call 0x11565f20 */
  push32(0x1157302fu); f_11565f20();
  /* 1157302f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573032 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11573035 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573039 je 0x11573256 */
  if (C.zf) goto L_11573256;
  /* 1157303f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573042 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11573045 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573048 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157304e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11573051 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11573056 mov eax, dword ptr [0x11590c98] */
  EAX = (r32((uint32_t)(0x11590c98)));
  /* 1157305b push eax */
  push32((uint32_t)(EAX));
  /* 1157305c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157305f push ecx */
  push32((uint32_t)(ECX));
  /* 11573060 call 0x1156c820 */
  push32(0x11573065u); f_1156c820();
  /* 11573065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573068 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1157306f jmp 0x1157307a */
  goto L_1157307a;
L_11573071:;
  /* 11573071 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573074 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573077 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1157307a:;
  /* 1157307a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157307e jae 0x115730ee */
  if (!C.cf) goto L_115730ee;
  /* 11573080 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573083 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11573086 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573089 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1157308c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1157308f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573092 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11573095 push edx */
  push32((uint32_t)(EDX));
  /* 11573096 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573099 push eax */
  push32((uint32_t)(EAX));
  /* 1157309a call 0x11568ef0 */
  push32(0x1157309fu); f_11568ef0();
  /* 1157309f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115730a2 push eax */
  push32((uint32_t)(EAX));
  /* 115730a3 call 0x11568d70 */
  push32(0x115730a8u); f_11568d70();
  /* 115730a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115730ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115730ae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115730b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115730b5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115730b8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115730bb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115730be mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 115730c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115730c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115730c8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 115730cc push edx */
  push32((uint32_t)(EDX));
  /* 115730cd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115730d0 push eax */
  push32((uint32_t)(EAX));
  /* 115730d1 call 0x11568ef0 */
  push32(0x115730d6u); f_11568ef0();
  /* 115730d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115730d9 push eax */
  push32((uint32_t)(EAX));
  /* 115730da call 0x11568d70 */
  push32(0x115730dfu); f_11568d70();
  /* 115730df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115730e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115730e5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115730e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115730ec jmp 0x11573071 */
  goto L_11573071;
L_115730ee:;
  /* 115730ee mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115730f5 jmp 0x11573100 */
  goto L_11573100;
L_115730f7:;
  /* 115730f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115730fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115730fd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11573100:;
  /* 11573100 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573104 jae 0x11573176 */
  if (!C.cf) goto L_11573176;
  /* 11573106 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573109 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1157310c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1157310f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11573113 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573116 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573119 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1157311d push eax */
  push32((uint32_t)(EAX));
  /* 1157311e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573121 push ecx */
  push32((uint32_t)(ECX));
  /* 11573122 call 0x11568ef0 */
  push32(0x11573127u); f_11568ef0();
  /* 11573127 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157312a push eax */
  push32((uint32_t)(EAX));
  /* 1157312b call 0x11568d70 */
  push32(0x11573130u); f_11568d70();
  /* 11573130 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573133 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573136 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1157313a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1157313d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573140 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11573143 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573146 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1157314a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1157314d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573150 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11573154 push eax */
  push32((uint32_t)(EAX));
  /* 11573155 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573158 push ecx */
  push32((uint32_t)(ECX));
  /* 11573159 call 0x11568ef0 */
  push32(0x1157315eu); f_11568ef0();
  /* 1157315e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573161 push eax */
  push32((uint32_t)(EAX));
  /* 11573162 call 0x11568d70 */
  push32(0x11573167u); f_11568d70();
  /* 11573167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157316a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1157316d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11573171 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11573174 jmp 0x115730f7 */
  goto L_115730f7;
L_11573176:;
  /* 11573176 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11573179 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1157317c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11573182 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573185 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1157318b push ecx */
  push32((uint32_t)(ECX));
  /* 1157318c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1157318f push edx */
  push32((uint32_t)(EDX));
  /* 11573190 call 0x11568ef0 */
  push32(0x11573195u); f_11568ef0();
  /* 11573195 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573198 push eax */
  push32((uint32_t)(EAX));
  /* 11573199 call 0x11568d70 */
  push32(0x1157319eu); f_11568d70();
  /* 1157319e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115731a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115731a4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 115731a8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 115731ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115731ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115731b1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 115731b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115731ba mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 115731c0 push eax */
  push32((uint32_t)(EAX));
  /* 115731c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115731c4 push ecx */
  push32((uint32_t)(ECX));
  /* 115731c5 call 0x11568ef0 */
  push32(0x115731cau); f_11568ef0();
  /* 115731ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115731cd push eax */
  push32((uint32_t)(EAX));
  /* 115731ce call 0x11568d70 */
  push32(0x115731d3u); f_11568d70();
  /* 115731d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115731d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115731d9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 115731dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 115731e0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115731e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115731e6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 115731ec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115731ef mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 115731f5 push ecx */
  push32((uint32_t)(ECX));
  /* 115731f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115731f9 push edx */
  push32((uint32_t)(EDX));
  /* 115731fa call 0x11568ef0 */
  push32(0x115731ffu); f_11568ef0();
  /* 115731ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573202 push eax */
  push32((uint32_t)(EAX));
  /* 11573203 call 0x11568d70 */
  push32(0x11573208u); f_11568d70();
  /* 11573208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157320b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1157320e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11573212 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11573215 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11573218 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1157321b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11573221 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573224 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1157322a push eax */
  push32((uint32_t)(EAX));
  /* 1157322b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1157322e push ecx */
  push32((uint32_t)(ECX));
  /* 1157322f call 0x11568ef0 */
  push32(0x11573234u); f_11568ef0();
  /* 11573234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573237 push eax */
  push32((uint32_t)(EAX));
  /* 11573238 call 0x11568d70 */
  push32(0x1157323du); f_11568d70();
  /* 1157323d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573240 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573243 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11573247 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1157324a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1157324d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573250 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11573256:;
  /* 11573256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573259 pop esi */
  ESI = (pop32());
  /* 1157325a mov esp, ebp */
  ESP = (EBP);
  /* 1157325c pop ebp */
  EBP = (pop32());
  /* 1157325d ret  */
  ESPCHK(0x11572ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013260 @ 0x11573260 (31 bytes, 15 insns) */
void f_11573260(void) {
  FTRACE(0x11573260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11573260 push ebp */
  push32((uint32_t)(EBP));
  /* 11573261 mov ebp, esp */
  EBP = (ESP);
  /* 11573263 push 0 */
  push32((uint32_t)(0x0u));
  /* 11573265 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573268 push eax */
  push32((uint32_t)(EAX));
  /* 11573269 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157326c push ecx */
  push32((uint32_t)(ECX));
  /* 1157326d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573270 push edx */
  push32((uint32_t)(EDX));
  /* 11573271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573274 push eax */
  push32((uint32_t)(EAX));
  /* 11573275 call 0x11573280 */
  push32(0x1157327au); f_11573280();
  /* 1157327a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157327d pop ebp */
  EBP = (pop32());
  /* 1157327e ret  */
  ESPCHK(0x11573260u, _esp0);
  ESP += 4; return;
}

/* FUN_10013280 @ 0x11573280 (393 bytes, 123 insns) */
void f_11573280(void) {
  FTRACE(0x11573280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11573280 push ebp */
  push32((uint32_t)(EBP));
  /* 11573281 mov ebp, esp */
  EBP = (ESP);
  /* 11573283 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573286 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157328a jne 0x11573296 */
  if (!C.zf) goto L_11573296;
  /* 1157328c mov eax, dword ptr [0x11590c98] */
  EAX = (r32((uint32_t)(0x11590c98)));
  /* 11573291 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11573294 jmp 0x1157329c */
  goto L_1157329c;
L_11573296:;
  /* 11573296 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573299 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1157329c:;
  /* 1157329c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1157329f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115732a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115732a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115732a8 push 0x1159231c */
  push32((uint32_t)(0x1159231cu));
  /* 115732ad call dword ptr [0x115943b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943b4))), 0x115732b3u);
  /* 115732b3 cmp dword ptr [0x1159230c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159230c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115732ba je 0x115732da */
  if (C.zf) goto L_115732da;
  /* 115732bc push 0x1159231c */
  push32((uint32_t)(0x1159231cu));
  /* 115732c1 call dword ptr [0x115943a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943a4))), 0x115732c7u);
  /* 115732c7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115732c9 call 0x11569940 */
  push32(0x115732ceu); f_11569940();
  /* 115732ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115732d1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 115732d8 jmp 0x115732e1 */
  goto L_115732e1;
L_115732da:;
  /* 115732da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115732e1:;
  /* 115732e1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115732e5 jbe 0x115733d2 */
  if ((C.cf||C.zf)) goto L_115733d2;
  /* 115732eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115732ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115732f0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 115732f3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115732f7 je 0x11573301 */
  if (C.zf) goto L_11573301;
  /* 115732f9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115732fd je 0x11573306 */
  if (C.zf) goto L_11573306;
  /* 115732ff jmp 0x11573360 */
  goto L_11573360;
L_11573301:;
  /* 11573301 jmp 0x115733d2 */
  goto L_115733d2;
L_11573306:;
  /* 11573306 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573309 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157330c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1157330f mov dword ptr [0x115922f8], 0 */
  w32((uint32_t)(0x115922f8), (0x0u));
  /* 11573319 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157331c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1157331f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573322 jne 0x11573337 */
  if (!C.zf) goto L_11573337;
  /* 11573324 mov dword ptr [0x115922f8], 1 */
  w32((uint32_t)(0x115922f8), (0x1u));
  /* 1157332e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573331 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573334 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11573337:;
  /* 11573337 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157333a push ecx */
  push32((uint32_t)(ECX));
  /* 1157333b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1157333e push edx */
  push32((uint32_t)(EDX));
  /* 1157333f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11573342 push eax */
  push32((uint32_t)(EAX));
  /* 11573343 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573346 push ecx */
  push32((uint32_t)(ECX));
  /* 11573347 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157334a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1157334c push eax */
  push32((uint32_t)(EAX));
  /* 1157334d call 0x11573410 */
  push32(0x11573352u); f_11573410();
  /* 11573352 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573355 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573358 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157335b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1157335e jmp 0x115733cd */
  goto L_115733cd;
L_11573360:;
  /* 11573360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573363 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11573365 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11573367 mov ecx, dword ptr [0x1158fc98] */
  ECX = (r32((uint32_t)(0x1158fc98)));
  /* 1157336d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1157336f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11573373 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11573379 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1157337b je 0x115733a8 */
  if (C.zf) goto L_115733a8;
  /* 1157337d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573381 jbe 0x115733a8 */
  if ((C.cf||C.zf)) goto L_115733a8;
  /* 11573383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573386 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573389 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1157338b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1157338d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573390 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573393 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11573396 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573399 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157339c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1157339f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115733a2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115733a5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115733a8:;
  /* 115733a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115733ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115733ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115733b0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115733b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115733b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115733b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 115733bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115733be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115733c1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 115733c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115733c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115733ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115733cd:;
  /* 115733cd jmp 0x115732e1 */
  goto L_115732e1;
L_115733d2:;
  /* 115733d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115733d6 je 0x115733e4 */
  if (C.zf) goto L_115733e4;
  /* 115733d8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115733da call 0x115699e0 */
  push32(0x115733dfu); f_115699e0();
  /* 115733df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115733e2 jmp 0x115733ef */
  goto L_115733ef;
L_115733e4:;
  /* 115733e4 push 0x1159231c */
  push32((uint32_t)(0x1159231cu));
  /* 115733e9 call dword ptr [0x115943a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943a4))), 0x115733efu);
L_115733ef:;
  /* 115733ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115733f3 jbe 0x11573403 */
  if ((C.cf||C.zf)) goto L_11573403;
  /* 115733f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115733f8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115733fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115733fe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573401 jmp 0x11573405 */
  goto L_11573405;
L_11573403:;
  /* 11573403 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11573405:;
  /* 11573405 mov esp, ebp */
  ESP = (EBP);
  /* 11573407 pop ebp */
  EBP = (pop32());
  /* 11573408 ret  */
  ESPCHK(0x11573280u, _esp0);
  ESP += 4; return;
}

/* FUN_10013410 @ 0x11573410 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11573410(void) {
  FTRACE(0x11573410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11573410 push ebp */
  push32((uint32_t)(EBP));
  /* 11573411 mov ebp, esp */
  EBP = (ESP);
  /* 11573413 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573416 push esi */
  push32((uint32_t)(ESI));
  /* 11573417 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1157341b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1157341e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573421 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573424 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11573427 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157342b ja 0x11573978 */
  if ((!C.cf&&!C.zf)) goto L_11573978;
  /* 11573431 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573434 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11573436 mov dl, byte ptr [eax + 0x115739d9] */
  DL = (r8((uint32_t)(EAX + 0x115739d9)));
  /* 1157343c jmp dword ptr [edx*4 + 0x1157397d] */
  switch (EDX) {
    case 0: goto L_11573956;
    case 1: goto L_11573465;
    case 2: goto L_115734ab;
    case 3: goto L_115735f8;
    case 4: goto L_11573620;
    case 5: goto L_115736bf;
    case 6: goto L_1157372b;
    case 7: goto L_11573754;
    case 8: goto L_11573795;
    case 9: goto L_11573877;
    case 10: goto L_115738de;
    case 11: goto L_1157392b;
    case 12: goto L_11573443;
    case 13: goto L_11573488;
    case 14: goto L_115734ce;
    case 15: goto L_115735ce;
    case 16: goto L_11573665;
    case 17: goto L_11573692;
    case 18: goto L_115736e7;
    case 19: goto L_1157376b;
    case 20: goto L_11573819;
    case 21: goto L_115738a8;
    case 22: goto L_11573978;
    default: x86_unimpl("switch@0x1157343c out of table"); return;
  }
L_11573443:;
  /* 11573443 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573446 push ecx */
  push32((uint32_t)(ECX));
  /* 11573447 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157344a push edx */
  push32((uint32_t)(EDX));
  /* 1157344b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157344e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11573451 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573454 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11573457 push eax */
  push32((uint32_t)(EAX));
  /* 11573458 call 0x11573a30 */
  push32(0x1157345du); f_11573a30();
  /* 1157345d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573460 jmp 0x11573978 */
  goto L_11573978;
L_11573465:;
  /* 11573465 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573468 push ecx */
  push32((uint32_t)(ECX));
  /* 11573469 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157346c push edx */
  push32((uint32_t)(EDX));
  /* 1157346d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573470 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11573473 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573476 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1157347a push eax */
  push32((uint32_t)(EAX));
  /* 1157347b call 0x11573a30 */
  push32(0x11573480u); f_11573a30();
  /* 11573480 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573483 jmp 0x11573978 */
  goto L_11573978;
L_11573488:;
  /* 11573488 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157348b push ecx */
  push32((uint32_t)(ECX));
  /* 1157348c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157348f push edx */
  push32((uint32_t)(EDX));
  /* 11573490 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573493 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11573496 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573499 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1157349d push eax */
  push32((uint32_t)(EAX));
  /* 1157349e call 0x11573a30 */
  push32(0x115734a3u); f_11573a30();
  /* 115734a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115734a6 jmp 0x11573978 */
  goto L_11573978;
L_115734ab:;
  /* 115734ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115734ae push ecx */
  push32((uint32_t)(ECX));
  /* 115734af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115734b2 push edx */
  push32((uint32_t)(EDX));
  /* 115734b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115734b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 115734b9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115734bc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 115734c0 push eax */
  push32((uint32_t)(EAX));
  /* 115734c1 call 0x11573a30 */
  push32(0x115734c6u); f_11573a30();
  /* 115734c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115734c9 jmp 0x11573978 */
  goto L_11573978;
L_115734ce:;
  /* 115734ce cmp dword ptr [0x115922f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115734d5 je 0x11573556 */
  if (C.zf) goto L_11573556;
  /* 115734d7 mov dword ptr [0x115922f8], 0 */
  w32((uint32_t)(0x115922f8), (0x0u));
  /* 115734e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115734e4 push ecx */
  push32((uint32_t)(ECX));
  /* 115734e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115734e8 push edx */
  push32((uint32_t)(EDX));
  /* 115734e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115734ec push eax */
  push32((uint32_t)(EAX));
  /* 115734ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115734f0 push ecx */
  push32((uint32_t)(ECX));
  /* 115734f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115734f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 115734fa push eax */
  push32((uint32_t)(EAX));
  /* 115734fb call 0x11573be0 */
  push32(0x11573500u); f_11573be0();
  /* 11573500 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573503 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573506 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573509 jne 0x11573510 */
  if (!C.zf) goto L_11573510;
  /* 1157350b jmp 0x11573978 */
  goto L_11573978;
L_11573510:;
  /* 11573510 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573513 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11573515 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11573518 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157351b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1157351d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573520 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573523 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11573525 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573528 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1157352a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1157352d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573530 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11573532 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573535 push ecx */
  push32((uint32_t)(ECX));
  /* 11573536 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573539 push edx */
  push32((uint32_t)(EDX));
  /* 1157353a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157353d push eax */
  push32((uint32_t)(EAX));
  /* 1157353e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573541 push ecx */
  push32((uint32_t)(ECX));
  /* 11573542 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573545 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1157354b push eax */
  push32((uint32_t)(EAX));
  /* 1157354c call 0x11573be0 */
  push32(0x11573551u); f_11573be0();
  /* 11573551 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573554 jmp 0x115735c9 */
  goto L_115735c9;
L_11573556:;
  /* 11573556 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573559 push ecx */
  push32((uint32_t)(ECX));
  /* 1157355a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157355d push edx */
  push32((uint32_t)(EDX));
  /* 1157355e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573561 push eax */
  push32((uint32_t)(EAX));
  /* 11573562 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573565 push ecx */
  push32((uint32_t)(ECX));
  /* 11573566 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573569 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1157356f push eax */
  push32((uint32_t)(EAX));
  /* 11573570 call 0x11573be0 */
  push32(0x11573575u); f_11573be0();
  /* 11573575 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573578 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157357b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157357e jne 0x11573585 */
  if (!C.zf) goto L_11573585;
  /* 11573580 jmp 0x11573978 */
  goto L_11573978;
L_11573585:;
  /* 11573585 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573588 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1157358a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1157358d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573590 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11573592 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573595 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573598 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1157359a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157359d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1157359f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115735a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115735a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115735a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115735aa push ecx */
  push32((uint32_t)(ECX));
  /* 115735ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115735ae push edx */
  push32((uint32_t)(EDX));
  /* 115735af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115735b2 push eax */
  push32((uint32_t)(EAX));
  /* 115735b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115735b6 push ecx */
  push32((uint32_t)(ECX));
  /* 115735b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115735ba mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 115735c0 push eax */
  push32((uint32_t)(EAX));
  /* 115735c1 call 0x11573be0 */
  push32(0x115735c6u); f_11573be0();
  /* 115735c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115735c9:;
  /* 115735c9 jmp 0x11573978 */
  goto L_11573978;
L_115735ce:;
  /* 115735ce mov ecx, dword ptr [0x115922f8] */
  ECX = (r32((uint32_t)(0x115922f8)));
  /* 115735d4 mov dword ptr [0x11592308], ecx */
  w32((uint32_t)(0x11592308), (ECX));
  /* 115735da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115735dd push edx */
  push32((uint32_t)(EDX));
  /* 115735de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115735e1 push eax */
  push32((uint32_t)(EAX));
  /* 115735e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115735e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115735e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115735ea push edx */
  push32((uint32_t)(EDX));
  /* 115735eb call 0x11573a80 */
  push32(0x115735f0u); f_11573a80();
  /* 115735f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115735f3 jmp 0x11573978 */
  goto L_11573978;
L_115735f8:;
  /* 115735f8 mov eax, dword ptr [0x115922f8] */
  EAX = (r32((uint32_t)(0x115922f8)));
  /* 115735fd mov dword ptr [0x11592308], eax */
  w32((uint32_t)(0x11592308), (EAX));
  /* 11573602 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573605 push ecx */
  push32((uint32_t)(ECX));
  /* 11573606 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573609 push edx */
  push32((uint32_t)(EDX));
  /* 1157360a push 2 */
  push32((uint32_t)(0x2u));
  /* 1157360c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157360f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11573612 push ecx */
  push32((uint32_t)(ECX));
  /* 11573613 call 0x11573a80 */
  push32(0x11573618u); f_11573a80();
  /* 11573618 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157361b jmp 0x11573978 */
  goto L_11573978;
L_11573620:;
  /* 11573620 mov edx, dword ptr [0x115922f8] */
  EDX = (r32((uint32_t)(0x115922f8)));
  /* 11573626 mov dword ptr [0x11592308], edx */
  w32((uint32_t)(0x11592308), (EDX));
  /* 1157362c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157362f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11573632 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11573633 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11573638 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1157363a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1157363d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573641 jne 0x1157364a */
  if (!C.zf) goto L_1157364a;
  /* 11573643 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1157364a:;
  /* 1157364a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157364d push edx */
  push32((uint32_t)(EDX));
  /* 1157364e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573651 push eax */
  push32((uint32_t)(EAX));
  /* 11573652 push 2 */
  push32((uint32_t)(0x2u));
  /* 11573654 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573657 push ecx */
  push32((uint32_t)(ECX));
  /* 11573658 call 0x11573a80 */
  push32(0x1157365du); f_11573a80();
  /* 1157365d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573660 jmp 0x11573978 */
  goto L_11573978;
L_11573665:;
  /* 11573665 mov edx, dword ptr [0x115922f8] */
  EDX = (r32((uint32_t)(0x115922f8)));
  /* 1157366b mov dword ptr [0x11592308], edx */
  w32((uint32_t)(0x11592308), (EDX));
  /* 11573671 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573674 push eax */
  push32((uint32_t)(EAX));
  /* 11573675 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573678 push ecx */
  push32((uint32_t)(ECX));
  /* 11573679 push 3 */
  push32((uint32_t)(0x3u));
  /* 1157367b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157367e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11573681 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573684 push eax */
  push32((uint32_t)(EAX));
  /* 11573685 call 0x11573a80 */
  push32(0x1157368au); f_11573a80();
  /* 1157368a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157368d jmp 0x11573978 */
  goto L_11573978;
L_11573692:;
  /* 11573692 mov ecx, dword ptr [0x115922f8] */
  ECX = (r32((uint32_t)(0x115922f8)));
  /* 11573698 mov dword ptr [0x11592308], ecx */
  w32((uint32_t)(0x11592308), (ECX));
  /* 1157369e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115736a1 push edx */
  push32((uint32_t)(EDX));
  /* 115736a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115736a5 push eax */
  push32((uint32_t)(EAX));
  /* 115736a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115736a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115736ab mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115736ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115736b1 push edx */
  push32((uint32_t)(EDX));
  /* 115736b2 call 0x11573a80 */
  push32(0x115736b7u); f_11573a80();
  /* 115736b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115736ba jmp 0x11573978 */
  goto L_11573978;
L_115736bf:;
  /* 115736bf mov eax, dword ptr [0x115922f8] */
  EAX = (r32((uint32_t)(0x115922f8)));
  /* 115736c4 mov dword ptr [0x11592308], eax */
  w32((uint32_t)(0x11592308), (EAX));
  /* 115736c9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115736cc push ecx */
  push32((uint32_t)(ECX));
  /* 115736cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115736d0 push edx */
  push32((uint32_t)(EDX));
  /* 115736d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115736d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115736d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115736d9 push ecx */
  push32((uint32_t)(ECX));
  /* 115736da call 0x11573a80 */
  push32(0x115736dfu); f_11573a80();
  /* 115736df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115736e2 jmp 0x11573978 */
  goto L_11573978;
L_115736e7:;
  /* 115736e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115736ea cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115736ee jg 0x1157370c */
  if ((!C.zf&&C.sf==C.of)) goto L_1157370c;
  /* 115736f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115736f3 push eax */
  push32((uint32_t)(EAX));
  /* 115736f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115736f7 push ecx */
  push32((uint32_t)(ECX));
  /* 115736f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115736fb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11573701 push eax */
  push32((uint32_t)(EAX));
  /* 11573702 call 0x11573a30 */
  push32(0x11573707u); f_11573a30();
  /* 11573707 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157370a jmp 0x11573726 */
  goto L_11573726;
L_1157370c:;
  /* 1157370c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157370f push ecx */
  push32((uint32_t)(ECX));
  /* 11573710 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573713 push edx */
  push32((uint32_t)(EDX));
  /* 11573714 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573717 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1157371d push ecx */
  push32((uint32_t)(ECX));
  /* 1157371e call 0x11573a30 */
  push32(0x11573723u); f_11573a30();
  /* 11573723 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11573726:;
  /* 11573726 jmp 0x11573978 */
  goto L_11573978;
L_1157372b:;
  /* 1157372b mov edx, dword ptr [0x115922f8] */
  EDX = (r32((uint32_t)(0x115922f8)));
  /* 11573731 mov dword ptr [0x11592308], edx */
  w32((uint32_t)(0x11592308), (EDX));
  /* 11573737 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157373a push eax */
  push32((uint32_t)(EAX));
  /* 1157373b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157373e push ecx */
  push32((uint32_t)(ECX));
  /* 1157373f push 2 */
  push32((uint32_t)(0x2u));
  /* 11573741 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573744 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11573746 push eax */
  push32((uint32_t)(EAX));
  /* 11573747 call 0x11573a80 */
  push32(0x1157374cu); f_11573a80();
  /* 1157374c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157374f jmp 0x11573978 */
  goto L_11573978;
L_11573754:;
  /* 11573754 mov ecx, dword ptr [0x115922f8] */
  ECX = (r32((uint32_t)(0x115922f8)));
  /* 1157375a mov dword ptr [0x11592308], ecx */
  w32((uint32_t)(0x11592308), (ECX));
  /* 11573760 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573763 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11573766 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11573769 jmp 0x115737bd */
  goto L_115737bd;
L_1157376b:;
  /* 1157376b mov ecx, dword ptr [0x115922f8] */
  ECX = (r32((uint32_t)(0x115922f8)));
  /* 11573771 mov dword ptr [0x11592308], ecx */
  w32((uint32_t)(0x11592308), (ECX));
  /* 11573777 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157377a push edx */
  push32((uint32_t)(EDX));
  /* 1157377b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157377e push eax */
  push32((uint32_t)(EAX));
  /* 1157377f push 1 */
  push32((uint32_t)(0x1u));
  /* 11573781 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573784 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11573787 push edx */
  push32((uint32_t)(EDX));
  /* 11573788 call 0x11573a80 */
  push32(0x1157378du); f_11573a80();
  /* 1157378d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573790 jmp 0x11573978 */
  goto L_11573978;
L_11573795:;
  /* 11573795 mov eax, dword ptr [0x115922f8] */
  EAX = (r32((uint32_t)(0x115922f8)));
  /* 1157379a mov dword ptr [0x11592308], eax */
  w32((uint32_t)(0x11592308), (EAX));
  /* 1157379f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115737a2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115737a6 jne 0x115737b1 */
  if (!C.zf) goto L_115737b1;
  /* 115737a8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 115737af jmp 0x115737bd */
  goto L_115737bd;
L_115737b1:;
  /* 115737b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115737b4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 115737b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115737ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115737bd:;
  /* 115737bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115737c0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115737c3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115737c6 jge 0x115737d1 */
  if ((C.sf==C.of)) goto L_115737d1;
  /* 115737c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115737cf jmp 0x115737fe */
  goto L_115737fe;
L_115737d1:;
  /* 115737d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115737d4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115737d7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115737d8 mov ecx, 7 */
  ECX = (0x7u);
  /* 115737dd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115737df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115737e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115737e5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115737e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115737e9 mov ecx, 7 */
  ECX = (0x7u);
  /* 115737ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115737f0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115737f3 jl 0x115737fe */
  if ((C.sf!=C.of)) goto L_115737fe;
  /* 115737f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115737f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115737fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115737fe:;
  /* 115737fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573801 push eax */
  push32((uint32_t)(EAX));
  /* 11573802 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573805 push ecx */
  push32((uint32_t)(ECX));
  /* 11573806 push 2 */
  push32((uint32_t)(0x2u));
  /* 11573808 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157380b push edx */
  push32((uint32_t)(EDX));
  /* 1157380c call 0x11573a80 */
  push32(0x11573811u); f_11573a80();
  /* 11573811 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573814 jmp 0x11573978 */
  goto L_11573978;
L_11573819:;
  /* 11573819 cmp dword ptr [0x115922f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573820 je 0x11573850 */
  if (C.zf) goto L_11573850;
  /* 11573822 mov dword ptr [0x115922f8], 0 */
  w32((uint32_t)(0x115922f8), (0x0u));
  /* 1157382c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1157382f push eax */
  push32((uint32_t)(EAX));
  /* 11573830 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573833 push ecx */
  push32((uint32_t)(ECX));
  /* 11573834 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573837 push edx */
  push32((uint32_t)(EDX));
  /* 11573838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157383b push eax */
  push32((uint32_t)(EAX));
  /* 1157383c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1157383f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11573845 push edx */
  push32((uint32_t)(EDX));
  /* 11573846 call 0x11573be0 */
  push32(0x1157384bu); f_11573be0();
  /* 1157384b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157384e jmp 0x11573872 */
  goto L_11573872;
L_11573850:;
  /* 11573850 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573853 push eax */
  push32((uint32_t)(EAX));
  /* 11573854 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573857 push ecx */
  push32((uint32_t)(ECX));
  /* 11573858 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157385b push edx */
  push32((uint32_t)(EDX));
  /* 1157385c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157385f push eax */
  push32((uint32_t)(EAX));
  /* 11573860 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573863 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11573869 push edx */
  push32((uint32_t)(EDX));
  /* 1157386a call 0x11573be0 */
  push32(0x1157386fu); f_11573be0();
  /* 1157386f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11573872:;
  /* 11573872 jmp 0x11573978 */
  goto L_11573978;
L_11573877:;
  /* 11573877 mov dword ptr [0x115922f8], 0 */
  w32((uint32_t)(0x115922f8), (0x0u));
  /* 11573881 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573884 push eax */
  push32((uint32_t)(EAX));
  /* 11573885 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573888 push ecx */
  push32((uint32_t)(ECX));
  /* 11573889 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157388c push edx */
  push32((uint32_t)(EDX));
  /* 1157388d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573890 push eax */
  push32((uint32_t)(EAX));
  /* 11573891 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573894 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1157389a push edx */
  push32((uint32_t)(EDX));
  /* 1157389b call 0x11573be0 */
  push32(0x115738a0u); f_11573be0();
  /* 115738a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115738a3 jmp 0x11573978 */
  goto L_11573978;
L_115738a8:;
  /* 115738a8 mov eax, dword ptr [0x115922f8] */
  EAX = (r32((uint32_t)(0x115922f8)));
  /* 115738ad mov dword ptr [0x11592308], eax */
  w32((uint32_t)(0x11592308), (EAX));
  /* 115738b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115738b5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 115738b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115738b9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 115738be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115738c0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115738c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115738c6 push edx */
  push32((uint32_t)(EDX));
  /* 115738c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115738ca push eax */
  push32((uint32_t)(EAX));
  /* 115738cb push 2 */
  push32((uint32_t)(0x2u));
  /* 115738cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115738d0 push ecx */
  push32((uint32_t)(ECX));
  /* 115738d1 call 0x11573a80 */
  push32(0x115738d6u); f_11573a80();
  /* 115738d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115738d9 jmp 0x11573978 */
  goto L_11573978;
L_115738de:;
  /* 115738de mov edx, dword ptr [0x115922f8] */
  EDX = (r32((uint32_t)(0x115922f8)));
  /* 115738e4 mov dword ptr [0x11592308], edx */
  w32((uint32_t)(0x11592308), (EDX));
  /* 115738ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115738ed mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 115738f0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115738f1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 115738f6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115738f8 mov ecx, eax */
  ECX = (EAX);
  /* 115738fa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115738fd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11573900 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573903 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11573906 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11573907 mov esi, 0x64 */
  ESI = (0x64u);
  /* 1157390c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1157390e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573910 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11573913 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573916 push eax */
  push32((uint32_t)(EAX));
  /* 11573917 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157391a push ecx */
  push32((uint32_t)(ECX));
  /* 1157391b push 4 */
  push32((uint32_t)(0x4u));
  /* 1157391d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573920 push edx */
  push32((uint32_t)(EDX));
  /* 11573921 call 0x11573a80 */
  push32(0x11573926u); f_11573a80();
  /* 11573926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573929 jmp 0x11573978 */
  goto L_11573978;
L_1157392b:;
  /* 1157392b call 0x11574a40 */
  push32(0x11573930u); f_11574a40();
  /* 11573930 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573933 push eax */
  push32((uint32_t)(EAX));
  /* 11573934 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573937 push ecx */
  push32((uint32_t)(ECX));
  /* 11573938 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157393b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157393d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573941 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11573944 mov ecx, dword ptr [eax*4 + 0x11590e1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11590e1c)));
  /* 1157394b push ecx */
  push32((uint32_t)(ECX));
  /* 1157394c call 0x11573a30 */
  push32(0x11573951u); f_11573a30();
  /* 11573951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573954 jmp 0x11573978 */
  goto L_11573978;
L_11573956:;
  /* 11573956 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573959 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1157395b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1157395e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573961 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11573963 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573966 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573969 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1157396b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157396e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11573970 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573973 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573976 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11573978:;
  /* 11573978 pop esi */
  ESI = (pop32());
  /* 11573979 mov esp, ebp */
  ESP = (EBP);
  /* 1157397b pop ebp */
  EBP = (pop32());
  /* 1157397c ret  */
  ESPCHK(0x11573410u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11573a30 (72 bytes, 30 insns) */
void f_11573a30(void) {
  FTRACE(0x11573a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11573a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11573a31 mov ebp, esp */
  EBP = (ESP);
L_11573a33:;
  /* 11573a33 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573a36 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573a39 je 0x11573a76 */
  if (C.zf) goto L_11573a76;
  /* 11573a3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573a3e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11573a41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11573a43 je 0x11573a76 */
  if (C.zf) goto L_11573a76;
  /* 11573a45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573a48 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573a4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573a4d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11573a4f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11573a51 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573a54 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11573a56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573a59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573a5c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11573a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573a61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573a64 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11573a67 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573a6a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11573a6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573a6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573a72 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11573a74 jmp 0x11573a33 */
  goto L_11573a33;
L_11573a76:;
  /* 11573a76 pop ebp */
  EBP = (pop32());
  /* 11573a77 ret  */
  ESPCHK(0x11573a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a80 @ 0x11573a80 (173 bytes, 64 insns) */
void f_11573a80(void) {
  FTRACE(0x11573a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11573a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11573a81 mov ebp, esp */
  EBP = (ESP);
  /* 11573a83 push ecx */
  push32((uint32_t)(ECX));
  /* 11573a84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11573a8b cmp dword ptr [0x11592308], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592308))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573a92 je 0x11573aaa */
  if (C.zf) goto L_11573aaa;
  /* 11573a94 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573a97 push eax */
  push32((uint32_t)(EAX));
  /* 11573a98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573a9b push ecx */
  push32((uint32_t)(ECX));
  /* 11573a9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573a9f push edx */
  push32((uint32_t)(EDX));
  /* 11573aa0 call 0x11573b30 */
  push32(0x11573aa5u); f_11573b30();
  /* 11573aa5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573aa8 jmp 0x11573b29 */
  goto L_11573b29;
L_11573aaa:;
  /* 11573aaa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573aad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573ab0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573ab2 jae 0x11573b20 */
  if (!C.cf) goto L_11573b20;
  /* 11573ab4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573ab7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573aba mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11573abd jmp 0x11573ac8 */
  goto L_11573ac8;
L_11573abf:;
  /* 11573abf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573ac2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573ac5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11573ac8:;
  /* 11573ac8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573acb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573ace test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11573ad0 je 0x11573b04 */
  if (C.zf) goto L_11573b04;
  /* 11573ad2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573ad5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11573ad6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11573adb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11573add add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573ae0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573ae3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573ae5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573ae8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11573aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573aee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11573aef mov ecx, 0xa */
  ECX = (0xau);
  /* 11573af4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11573af6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11573af9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573afc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573aff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11573b02 jmp 0x11573abf */
  goto L_11573abf;
L_11573b04:;
  /* 11573b04 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573b07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573b09 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573b0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573b0f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11573b11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573b14 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573b16 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573b19 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573b1c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11573b1e jmp 0x11573b29 */
  goto L_11573b29;
L_11573b20:;
  /* 11573b20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573b23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11573b29:;
  /* 11573b29 mov esp, ebp */
  ESP = (EBP);
  /* 11573b2b pop ebp */
  EBP = (pop32());
  /* 11573b2c ret  */
  ESPCHK(0x11573a80u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11573b30 (172 bytes, 65 insns) */
void f_11573b30(void) {
  FTRACE(0x11573b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11573b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11573b31 mov ebp, esp */
  EBP = (ESP);
  /* 11573b33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573b36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573b39 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573b3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11573b3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573b41 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573b44 jbe 0x11573b8b */
  if ((C.cf||C.zf)) goto L_11573b8b;
L_11573b46:;
  /* 11573b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573b49 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11573b4a mov ecx, 0xa */
  ECX = (0xau);
  /* 11573b4f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11573b51 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573b57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11573b59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573b5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573b5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11573b62 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573b65 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11573b67 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573b6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573b6d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11573b6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573b72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11573b73 mov ecx, 0xa */
  ECX = (0xau);
  /* 11573b78 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11573b7a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11573b7d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573b81 jle 0x11573b8b */
  if ((C.zf||C.sf!=C.of)) goto L_11573b8b;
  /* 11573b83 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573b86 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573b89 ja 0x11573b46 */
  if ((!C.cf&&!C.zf)) goto L_11573b46;
L_11573b8b:;
  /* 11573b8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573b8e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573b90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11573b93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573b96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573b99 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11573b9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573b9e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573ba1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11573ba4:;
  /* 11573ba4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573ba7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11573ba9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11573bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573baf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11573bb2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11573bb4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11573bb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573bb9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573bbc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11573bbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11573bc2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11573bc5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11573bc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11573bca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573bcd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11573bd0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11573bd3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573bd6 jb 0x11573ba4 */
  if (C.cf) goto L_11573ba4;
  /* 11573bd8 mov esp, ebp */
  ESP = (EBP);
  /* 11573bda pop ebp */
  EBP = (pop32());
  /* 11573bdb ret  */
  ESPCHK(0x11573b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013be0 @ 0x11573be0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11573be0(void) {
  FTRACE(0x11573be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11573be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11573be1 mov ebp, esp */
  EBP = (ESP);
  /* 11573be3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11573be6:;
  /* 11573be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573be9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11573bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11573bee je 0x1157405c */
  if (C.zf) goto L_1157405c;
  /* 11573bf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573bf7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573bfa je 0x1157405c */
  if (C.zf) goto L_1157405c;
  /* 11573c00 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11573c04 mov dword ptr [0x11592308], 0 */
  w32((uint32_t)(0x11592308), (0x0u));
  /* 11573c0e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11573c15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573c18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11573c1b jmp 0x11573c26 */
  goto L_11573c26;
L_11573c1d:;
  /* 11573c1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573c20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573c23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11573c26:;
  /* 11573c26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573c29 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11573c2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573c2f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11573c32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573c35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573c38 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11573c3b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573c3d jne 0x11573c41 */
  if (!C.zf) goto L_11573c41;
  /* 11573c3f jmp 0x11573c1d */
  goto L_11573c1d;
L_11573c41:;
  /* 11573c41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573c44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573c47 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11573c4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573c4d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11573c50 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11573c53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573c56 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573c59 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11573c5c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573c60 ja 0x11573fb0 */
  if ((!C.cf&&!C.zf)) goto L_11573fb0;
  /* 11573c66 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11573c69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11573c6b mov al, byte ptr [ecx + 0x1157408c] */
  AL = (r8((uint32_t)(ECX + 0x1157408c)));
  /* 11573c71 jmp dword ptr [eax*4 + 0x11574060] */
  switch (EAX) {
    case 0: goto L_11573ecf;
    case 1: goto L_11573db3;
    case 2: goto L_11573d3e;
    case 3: goto L_11573c78;
    case 4: goto L_11573cb6;
    case 5: goto L_11573d17;
    case 6: goto L_11573d65;
    case 7: goto L_11573d8c;
    case 8: goto L_11573dfa;
    case 9: goto L_11573cf4;
    case 10: goto L_11573fb0;
    default: x86_unimpl("switch@0x11573c71 out of table"); return;
  }
L_11573c78:;
  /* 11573c78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573c7b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11573c7e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11573c81 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573c84 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11573c87 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573c8b ja 0x11573cb1 */
  if ((!C.cf&&!C.zf)) goto L_11573cb1;
  /* 11573c8d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11573c90 jmp dword ptr [ecx*4 + 0x115740df] */
  switch (ECX) {
    case 0: goto L_11573c97;
    case 1: goto L_11573ca1;
    case 2: goto L_11573ca7;
    case 3: goto L_11573cad;
    case 4: goto L_11573cd5;
    case 5: goto L_11573cdf;
    case 6: goto L_11573ce5;
    case 7: goto L_11573ceb;
    default: x86_unimpl("switch@0x11573c90 out of table"); return;
  }
L_11573c97:;
  /* 11573c97 mov dword ptr [0x11592308], 1 */
  w32((uint32_t)(0x11592308), (0x1u));
L_11573ca1:;
  /* 11573ca1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11573ca5 jmp 0x11573cb1 */
  goto L_11573cb1;
L_11573ca7:;
  /* 11573ca7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11573cab jmp 0x11573cb1 */
  goto L_11573cb1;
L_11573cad:;
  /* 11573cad mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11573cb1:;
  /* 11573cb1 jmp 0x11573fb0 */
  goto L_11573fb0;
L_11573cb6:;
  /* 11573cb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573cb9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11573cbc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11573cbf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573cc2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11573cc5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573cc9 ja 0x11573cef */
  if ((!C.cf&&!C.zf)) goto L_11573cef;
  /* 11573ccb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11573cce jmp dword ptr [ecx*4 + 0x115740ef] */
  switch (ECX) {
    case 0: goto L_11573cd5;
    case 1: goto L_11573cdf;
    case 2: goto L_11573ce5;
    case 3: goto L_11573ceb;
    default: x86_unimpl("switch@0x11573cce out of table"); return;
  }
L_11573cd5:;
  /* 11573cd5 mov dword ptr [0x11592308], 1 */
  w32((uint32_t)(0x11592308), (0x1u));
L_11573cdf:;
  /* 11573cdf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11573ce3 jmp 0x11573cef */
  goto L_11573cef;
L_11573ce5:;
  /* 11573ce5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11573ce9 jmp 0x11573cef */
  goto L_11573cef;
L_11573ceb:;
  /* 11573ceb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11573cef:;
  /* 11573cef jmp 0x11573fb0 */
  goto L_11573fb0;
L_11573cf4:;
  /* 11573cf4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573cf7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11573cfa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573cfe je 0x11573d08 */
  if (C.zf) goto L_11573d08;
  /* 11573d00 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573d04 je 0x11573d0e */
  if (C.zf) goto L_11573d0e;
  /* 11573d06 jmp 0x11573d12 */
  goto L_11573d12;
L_11573d08:;
  /* 11573d08 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11573d0c jmp 0x11573d12 */
  goto L_11573d12;
L_11573d0e:;
  /* 11573d0e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11573d12:;
  /* 11573d12 jmp 0x11573fb0 */
  goto L_11573fb0;
L_11573d17:;
  /* 11573d17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573d1a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11573d1d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573d21 je 0x11573d2b */
  if (C.zf) goto L_11573d2b;
  /* 11573d23 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573d27 je 0x11573d35 */
  if (C.zf) goto L_11573d35;
  /* 11573d29 jmp 0x11573d39 */
  goto L_11573d39;
L_11573d2b:;
  /* 11573d2b mov dword ptr [0x11592308], 1 */
  w32((uint32_t)(0x11592308), (0x1u));
L_11573d35:;
  /* 11573d35 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11573d39:;
  /* 11573d39 jmp 0x11573fb0 */
  goto L_11573fb0;
L_11573d3e:;
  /* 11573d3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573d41 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11573d44 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573d48 je 0x11573d52 */
  if (C.zf) goto L_11573d52;
  /* 11573d4a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573d4e je 0x11573d5c */
  if (C.zf) goto L_11573d5c;
  /* 11573d50 jmp 0x11573d60 */
  goto L_11573d60;
L_11573d52:;
  /* 11573d52 mov dword ptr [0x11592308], 1 */
  w32((uint32_t)(0x11592308), (0x1u));
L_11573d5c:;
  /* 11573d5c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11573d60:;
  /* 11573d60 jmp 0x11573fb0 */
  goto L_11573fb0;
L_11573d65:;
  /* 11573d65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573d68 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11573d6b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573d6f je 0x11573d79 */
  if (C.zf) goto L_11573d79;
  /* 11573d71 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573d75 je 0x11573d83 */
  if (C.zf) goto L_11573d83;
  /* 11573d77 jmp 0x11573d87 */
  goto L_11573d87;
L_11573d79:;
  /* 11573d79 mov dword ptr [0x11592308], 1 */
  w32((uint32_t)(0x11592308), (0x1u));
L_11573d83:;
  /* 11573d83 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11573d87:;
  /* 11573d87 jmp 0x11573fb0 */
  goto L_11573fb0;
L_11573d8c:;
  /* 11573d8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573d8f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11573d92 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573d96 je 0x11573da0 */
  if (C.zf) goto L_11573da0;
  /* 11573d98 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573d9c je 0x11573daa */
  if (C.zf) goto L_11573daa;
  /* 11573d9e jmp 0x11573dae */
  goto L_11573dae;
L_11573da0:;
  /* 11573da0 mov dword ptr [0x11592308], 1 */
  w32((uint32_t)(0x11592308), (0x1u));
L_11573daa:;
  /* 11573daa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11573dae:;
  /* 11573dae jmp 0x11573fb0 */
  goto L_11573fb0;
L_11573db3:;
  /* 11573db3 push 0x1158d95c */
  push32((uint32_t)(0x1158d95cu));
  /* 11573db8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573dbb push ecx */
  push32((uint32_t)(ECX));
  /* 11573dbc call 0x11574610 */
  push32(0x11573dc1u); f_11574610();
  /* 11573dc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11573dc6 jne 0x11573dd3 */
  if (!C.zf) goto L_11573dd3;
  /* 11573dc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573dcb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573dce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11573dd1 jmp 0x11573df1 */
  goto L_11573df1;
L_11573dd3:;
  /* 11573dd3 push 0x1158d958 */
  push32((uint32_t)(0x1158d958u));
  /* 11573dd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573ddb push eax */
  push32((uint32_t)(EAX));
  /* 11573ddc call 0x11574610 */
  push32(0x11573de1u); f_11574610();
  /* 11573de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573de4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11573de6 jne 0x11573df1 */
  if (!C.zf) goto L_11573df1;
  /* 11573de8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573deb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573dee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11573df1:;
  /* 11573df1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11573df5 jmp 0x11573fb0 */
  goto L_11573fb0;
L_11573dfa:;
  /* 11573dfa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573dfd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573e01 jg 0x11573e11 */
  if ((!C.zf&&C.sf==C.of)) goto L_11573e11;
  /* 11573e03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573e06 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11573e0c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11573e0f jmp 0x11573e1d */
  goto L_11573e1d;
L_11573e11:;
  /* 11573e11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573e14 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11573e1a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11573e1d:;
  /* 11573e1d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573e21 jle 0x11573ec4 */
  if ((C.zf||C.sf!=C.of)) goto L_11573ec4;
  /* 11573e27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573e2a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573e2d jbe 0x11573ec4 */
  if ((C.cf||C.zf)) goto L_11573ec4;
  /* 11573e33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573e36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11573e38 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11573e3a mov ecx, dword ptr [0x1158fc98] */
  ECX = (r32((uint32_t)(0x1158fc98)));
  /* 11573e40 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11573e42 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11573e46 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11573e4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11573e4e je 0x11573e87 */
  if (C.zf) goto L_11573e87;
  /* 11573e50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573e53 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573e56 jbe 0x11573e87 */
  if ((C.cf||C.zf)) goto L_11573e87;
  /* 11573e58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573e5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11573e5d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573e60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11573e62 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11573e64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573e67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11573e69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573e6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573e6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11573e71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573e74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573e77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11573e7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573e7d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573e7f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573e82 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573e85 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11573e87:;
  /* 11573e87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573e8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573e8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573e8f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11573e91 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11573e93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573e96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11573e98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573e9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573e9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11573ea0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11573ea3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573ea6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11573ea9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573eac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11573eae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573eb1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573eb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11573eb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573eb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573ebc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11573ebf jmp 0x11573e1d */
  goto L_11573e1d;
L_11573ec4:;
  /* 11573ec4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573ec7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11573eca jmp 0x11573be6 */
  goto L_11573be6;
L_11573ecf:;
  /* 11573ecf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11573ed2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11573ed5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11573ed7 je 0x11573fa2 */
  if (C.zf) goto L_11573fa2;
  /* 11573edd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573ee0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573ee3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11573ee6:;
  /* 11573ee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573ee9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11573eec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11573eee je 0x11573fa0 */
  if (C.zf) goto L_11573fa0;
  /* 11573ef4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573ef7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573efa je 0x11573fa0 */
  if (C.zf) goto L_11573fa0;
  /* 11573f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573f03 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11573f06 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573f09 jne 0x11573f19 */
  if (!C.zf) goto L_11573f19;
  /* 11573f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573f0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573f11 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11573f14 jmp 0x11573fa0 */
  goto L_11573fa0;
L_11573f19:;
  /* 11573f19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573f1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11573f1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11573f20 mov edx, dword ptr [0x1158fc98] */
  EDX = (r32((uint32_t)(0x1158fc98)));
  /* 11573f26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11573f28 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11573f2c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11573f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11573f33 je 0x11573f6c */
  if (C.zf) goto L_11573f6c;
  /* 11573f35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573f38 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11573f3b jbe 0x11573f6c */
  if ((C.cf||C.zf)) goto L_11573f6c;
  /* 11573f3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573f40 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11573f42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573f45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11573f47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11573f49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573f4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573f4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573f51 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573f54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11573f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573f59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573f5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11573f5f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573f62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11573f64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573f67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573f6a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11573f6c:;
  /* 11573f6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573f6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11573f71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573f74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11573f76 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11573f78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573f7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11573f7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573f80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573f83 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11573f85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573f88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573f8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11573f8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573f91 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573f93 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11573f96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573f99 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11573f9b jmp 0x11573ee6 */
  goto L_11573ee6;
L_11573fa0:;
  /* 11573fa0 jmp 0x11573fab */
  goto L_11573fab;
L_11573fa2:;
  /* 11573fa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573fa5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11573fa8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11573fab:;
  /* 11573fab jmp 0x11573be6 */
  goto L_11573be6;
L_11573fb0:;
  /* 11573fb0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11573fb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11573fb6 je 0x11573fdc */
  if (C.zf) goto L_11573fdc;
  /* 11573fb8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11573fbb push edx */
  push32((uint32_t)(EDX));
  /* 11573fbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11573fbf push eax */
  push32((uint32_t)(EAX));
  /* 11573fc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11573fc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11573fc7 push edx */
  push32((uint32_t)(EDX));
  /* 11573fc8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11573fcb push eax */
  push32((uint32_t)(EAX));
  /* 11573fcc call 0x11573410 */
  push32(0x11573fd1u); f_11573410();
  /* 11573fd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11573fd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11573fd7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11573fda jmp 0x11574057 */
  goto L_11574057;
L_11573fdc:;
  /* 11573fdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11573fdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11573fe1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11573fe3 mov ecx, dword ptr [0x1158fc98] */
  ECX = (r32((uint32_t)(0x1158fc98)));
  /* 11573fe9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11573feb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11573fef and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11573ff5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11573ff7 je 0x11574028 */
  if (C.zf) goto L_11574028;
  /* 11573ff9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11573ffc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11573ffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574001 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11574003 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11574005 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11574008 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1157400a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157400d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11574010 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11574012 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574015 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574018 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1157401b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157401e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11574020 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11574023 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11574026 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11574028:;
  /* 11574028 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157402b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1157402d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574030 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11574032 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11574034 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11574037 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11574039 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157403c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157403f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11574041 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574044 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574047 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1157404a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157404d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1157404f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11574052 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11574055 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11574057:;
  /* 11574057 jmp 0x11573be6 */
  goto L_11573be6;
L_1157405c:;
  /* 1157405c mov esp, ebp */
  ESP = (EBP);
  /* 1157405e pop ebp */
  EBP = (pop32());
  /* 1157405f ret  */
  ESPCHK(0x11573be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014100 @ 0x11574100 (650 bytes, 178 insns) */
void f_11574100(void) {
  FTRACE(0x11574100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11574100 push ebp */
  push32((uint32_t)(EBP));
  /* 11574101 mov ebp, esp */
  EBP = (ESP);
  /* 11574103 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11574109 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157410d jne 0x11574269 */
  if (!C.zf) goto L_11574269;
  /* 11574113 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11574116 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 1157411c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11574122 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11574125 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1157412c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11574136 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574138 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1157413e push edx */
  push32((uint32_t)(EDX));
  /* 1157413f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574142 push eax */
  push32((uint32_t)(EAX));
  /* 11574143 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11574146 push ecx */
  push32((uint32_t)(ECX));
  /* 11574147 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157414a push edx */
  push32((uint32_t)(EDX));
  /* 1157414b call 0x11575520 */
  push32(0x11574150u); f_11575520();
  /* 11574150 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574153 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11574156 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157415a jne 0x115741ef */
  if (!C.zf) goto L_115741ef;
  /* 11574160 call dword ptr [0x115943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d4))), 0x11574166u);
  /* 11574166 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574169 je 0x11574170 */
  if (C.zf) goto L_11574170;
  /* 1157416b jmp 0x1157424d */
  goto L_1157424d;
L_11574170:;
  /* 11574170 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574172 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574174 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574176 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11574179 push eax */
  push32((uint32_t)(EAX));
  /* 1157417a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157417d push ecx */
  push32((uint32_t)(ECX));
  /* 1157417e call 0x11575520 */
  push32(0x11574183u); f_11575520();
  /* 11574183 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574186 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1157418c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574193 jne 0x1157419a */
  if (!C.zf) goto L_1157419a;
  /* 11574195 jmp 0x1157424d */
  goto L_1157424d;
L_1157419a:;
  /* 1157419a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1157419c push 0x1158d964 */
  push32((uint32_t)(0x1158d964u));
  /* 115741a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 115741a3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 115741a9 push edx */
  push32((uint32_t)(EDX));
  /* 115741aa call 0x11565f40 */
  push32(0x115741afu); f_11565f40();
  /* 115741af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115741b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115741b5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115741b9 jne 0x115741c0 */
  if (!C.zf) goto L_115741c0;
  /* 115741bb jmp 0x1157424d */
  goto L_1157424d;
L_115741c0:;
  /* 115741c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115741c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115741c9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 115741cf push eax */
  push32((uint32_t)(EAX));
  /* 115741d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115741d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115741d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115741d7 push edx */
  push32((uint32_t)(EDX));
  /* 115741d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115741db push eax */
  push32((uint32_t)(EAX));
  /* 115741dc call 0x11575520 */
  push32(0x115741e1u); f_11575520();
  /* 115741e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115741e4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115741e7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115741eb jne 0x115741ef */
  if (!C.zf) goto L_115741ef;
  /* 115741ed jmp 0x1157424d */
  goto L_1157424d;
L_115741ef:;
  /* 115741ef push 0x63 */
  push32((uint32_t)(0x63u));
  /* 115741f1 push 0x1158d964 */
  push32((uint32_t)(0x1158d964u));
  /* 115741f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 115741f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115741fb push ecx */
  push32((uint32_t)(ECX));
  /* 115741fc call 0x11565f40 */
  push32(0x11574201u); f_11565f40();
  /* 11574201 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574204 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 1157420a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1157420c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11574212 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574215 jne 0x11574219 */
  if (!C.zf) goto L_11574219;
  /* 11574217 jmp 0x1157424d */
  goto L_1157424d;
L_11574219:;
  /* 11574219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157421c push ecx */
  push32((uint32_t)(ECX));
  /* 1157421d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574220 push edx */
  push32((uint32_t)(EDX));
  /* 11574221 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11574227 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11574229 push ecx */
  push32((uint32_t)(ECX));
  /* 1157422a call 0x11569760 */
  push32(0x1157422fu); f_11569760();
  /* 1157422f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574232 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574236 je 0x11574246 */
  if (C.zf) goto L_11574246;
  /* 11574238 push 2 */
  push32((uint32_t)(0x2u));
  /* 1157423a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157423d push edx */
  push32((uint32_t)(EDX));
  /* 1157423e call 0x115669d0 */
  push32(0x11574243u); f_115669d0();
  /* 11574243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11574246:;
  /* 11574246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574248 jmp 0x11574386 */
  goto L_11574386;
L_1157424d:;
  /* 1157424d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574251 je 0x11574261 */
  if (C.zf) goto L_11574261;
  /* 11574253 push 2 */
  push32((uint32_t)(0x2u));
  /* 11574255 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574258 push eax */
  push32((uint32_t)(EAX));
  /* 11574259 call 0x115669d0 */
  push32(0x1157425eu); f_115669d0();
  /* 1157425e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11574261:;
  /* 11574261 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11574264 jmp 0x11574386 */
  goto L_11574386;
L_11574269:;
  /* 11574269 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157426d jne 0x11574383 */
  if (!C.zf) goto L_11574383;
  /* 11574273 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1157427d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11574280 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11574286 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574288 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1157428e push edx */
  push32((uint32_t)(EDX));
  /* 1157428f push 0x11592220 */
  push32((uint32_t)(0x11592220u));
  /* 11574294 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11574297 push eax */
  push32((uint32_t)(EAX));
  /* 11574298 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157429b push ecx */
  push32((uint32_t)(ECX));
  /* 1157429c call 0x11575380 */
  push32(0x115742a1u); f_11575380();
  /* 115742a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115742a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115742a6 jne 0x115742b0 */
  if (!C.zf) goto L_115742b0;
  /* 115742a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115742ab jmp 0x11574386 */
  goto L_11574386;
L_115742b0:;
  /* 115742b0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 115742b6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 115742b9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 115742c3 jmp 0x115742d4 */
  goto L_115742d4;
L_115742c5:;
  /* 115742c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115742cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115742ce mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_115742d4:;
  /* 115742d4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115742db jge 0x1157437f */
  if ((C.sf==C.of)) goto L_1157437f;
  /* 115742e1 cmp dword ptr [0x1158fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1158fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115742e8 jle 0x1157431b */
  if ((C.zf||C.sf!=C.of)) goto L_1157431b;
  /* 115742ea push 4 */
  push32((uint32_t)(0x4u));
  /* 115742ec mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 115742f2 mov dl, byte ptr [ecx*2 + 0x11592220] */
  DL = (r8((uint32_t)(ECX*2 + 0x11592220)));
  /* 115742f9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 115742ff mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11574305 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1157430a push eax */
  push32((uint32_t)(EAX));
  /* 1157430b call 0x1156bf50 */
  push32(0x11574310u); f_1156bf50();
  /* 11574310 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574313 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11574319 jmp 0x1157434e */
  goto L_1157434e;
L_1157431b:;
  /* 1157431b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11574321 mov dl, byte ptr [ecx*2 + 0x11592220] */
  DL = (r8((uint32_t)(ECX*2 + 0x11592220)));
  /* 11574328 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 1157432e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11574334 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11574339 mov ecx, dword ptr [0x1158fc98] */
  ECX = (r32((uint32_t)(0x1158fc98)));
  /* 1157433f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574341 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11574345 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11574348 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1157434e:;
  /* 1157434e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574355 je 0x11574378 */
  if (C.zf) goto L_11574378;
  /* 11574357 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1157435d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11574360 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11574363 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1157436a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1157436e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11574374 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11574376 jmp 0x1157437a */
  goto L_1157437a;
L_11574378:;
  /* 11574378 jmp 0x1157437f */
  goto L_1157437f;
L_1157437a:;
  /* 1157437a jmp 0x115742c5 */
  goto L_115742c5;
L_1157437f:;
  /* 1157437f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574381 jmp 0x11574386 */
  goto L_11574386;
L_11574383:;
  /* 11574383 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11574386:;
  /* 11574386 mov esp, ebp */
  ESP = (EBP);
  /* 11574388 pop ebp */
  EBP = (pop32());
  /* 11574389 ret  */
  ESPCHK(0x11574100u, _esp0);
  ESP += 4; return;
}

/* FUN_10014390 @ 0x11574390 (10 bytes, 5 insns) */
void f_11574390(void) {
  FTRACE(0x11574390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11574390 push ebp */
  push32((uint32_t)(EBP));
  /* 11574391 mov ebp, esp */
  EBP = (ESP);
  /* 11574393 mov eax, dword ptr [0x11590d88] */
  EAX = (r32((uint32_t)(0x11590d88)));
  /* 11574398 pop ebp */
  EBP = (pop32());
  /* 11574399 ret  */
  ESPCHK(0x11574390u, _esp0);
  ESP += 4; return;
}

/* FUN_100143a0 @ 0x115743a0 (575 bytes, 196 insns) */
void f_115743a0(void) {
  FTRACE(0x115743a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115743a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115743a1 mov ebp, esp */
  EBP = (ESP);
  /* 115743a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115743a5 push 0x1158d970 */
  push32((uint32_t)(0x1158d970u));
  /* 115743aa push 0x1156f048 */
  push32((uint32_t)(0x1156f048u));
  /* 115743af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 115743b5 push eax */
  push32((uint32_t)(EAX));
  /* 115743b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 115743bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115743c0 push ebx */
  push32((uint32_t)(EBX));
  /* 115743c1 push esi */
  push32((uint32_t)(ESI));
  /* 115743c2 push edi */
  push32((uint32_t)(EDI));
  /* 115743c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115743c6 cmp dword ptr [0x1159222c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159222c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115743cd jne 0x1157441e */
  if (!C.zf) goto L_1157441e;
  /* 115743cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 115743d2 push eax */
  push32((uint32_t)(EAX));
  /* 115743d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115743d5 push 0x1158d0a0 */
  push32((uint32_t)(0x1158d0a0u));
  /* 115743da push 1 */
  push32((uint32_t)(0x1u));
  /* 115743dc call dword ptr [0x11594324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594324))), 0x115743e2u);
  /* 115743e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115743e4 je 0x115743f2 */
  if (C.zf) goto L_115743f2;
  /* 115743e6 mov dword ptr [0x1159222c], 1 */
  w32((uint32_t)(0x1159222c), (0x1u));
  /* 115743f0 jmp 0x1157441e */
  goto L_1157441e;
L_115743f2:;
  /* 115743f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 115743f5 push ecx */
  push32((uint32_t)(ECX));
  /* 115743f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 115743f8 push 0x1158d09c */
  push32((uint32_t)(0x1158d09cu));
  /* 115743fd push 1 */
  push32((uint32_t)(0x1u));
  /* 115743ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11574401 call dword ptr [0x11594328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594328))), 0x11574407u);
  /* 11574407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11574409 je 0x11574417 */
  if (C.zf) goto L_11574417;
  /* 1157440b mov dword ptr [0x1159222c], 2 */
  w32((uint32_t)(0x1159222c), (0x2u));
  /* 11574415 jmp 0x1157441e */
  goto L_1157441e;
L_11574417:;
  /* 11574417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574419 jmp 0x115745f9 */
  goto L_115745f9;
L_1157441e:;
  /* 1157441e cmp dword ptr [0x1159222c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1159222c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574425 jne 0x11574442 */
  if (!C.zf) goto L_11574442;
  /* 11574427 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157442a push edx */
  push32((uint32_t)(EDX));
  /* 1157442b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157442e push eax */
  push32((uint32_t)(EAX));
  /* 1157442f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11574432 push ecx */
  push32((uint32_t)(ECX));
  /* 11574433 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574436 push edx */
  push32((uint32_t)(EDX));
  /* 11574437 call dword ptr [0x11594324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594324))), 0x1157443du);
  /* 1157443d jmp 0x115745f9 */
  goto L_115745f9;
L_11574442:;
  /* 11574442 cmp dword ptr [0x1159222c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1159222c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574449 jne 0x115745f7 */
  if (!C.zf) goto L_115745f7;
  /* 1157444f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574453 jne 0x1157445d */
  if (!C.zf) goto L_1157445d;
  /* 11574455 mov eax, dword ptr [0x115921a0] */
  EAX = (r32((uint32_t)(0x115921a0)));
  /* 1157445a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1157445d:;
  /* 1157445d push 0 */
  push32((uint32_t)(0x0u));
  /* 1157445f push 0 */
  push32((uint32_t)(0x0u));
  /* 11574461 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574463 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574465 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11574468 push ecx */
  push32((uint32_t)(ECX));
  /* 11574469 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157446c push edx */
  push32((uint32_t)(EDX));
  /* 1157446d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11574472 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11574475 push eax */
  push32((uint32_t)(EAX));
  /* 11574476 call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x1157447cu);
  /* 1157447c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1157447f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574483 jne 0x1157448c */
  if (!C.zf) goto L_1157448c;
  /* 11574485 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574487 jmp 0x115745f9 */
  goto L_115745f9;
L_1157448c:;
  /* 1157448c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11574493 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11574496 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574499 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1157449b call 0x115690e0 */
  push32(0x115744a0u); f_115690e0();
  /* 115744a0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 115744a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115744a6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 115744a9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 115744ac mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 115744af push edx */
  push32((uint32_t)(EDX));
  /* 115744b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115744b2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115744b5 push eax */
  push32((uint32_t)(EAX));
  /* 115744b6 call 0x11569cb0 */
  push32(0x115744bbu); f_11569cb0();
  /* 115744bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115744be mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 115744c5 jmp 0x115744de */
  goto L_115744de;
  /* 115744c7 mov eax, 1 */
  EAX = (0x1u);
  /* 115744cc ret  */
  ESPCHK(0x115743a0u, _esp0);
  ESP += 4; return;
  /* 115744cd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 115744d0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 115744d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_115744de:;
  /* 115744de cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115744e2 jne 0x115744eb */
  if (!C.zf) goto L_115744eb;
  /* 115744e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115744e6 jmp 0x115745f9 */
  goto L_115745f9;
L_115744eb:;
  /* 115744eb push 0 */
  push32((uint32_t)(0x0u));
  /* 115744ed push 0 */
  push32((uint32_t)(0x0u));
  /* 115744ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 115744f2 push ecx */
  push32((uint32_t)(ECX));
  /* 115744f3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 115744f6 push edx */
  push32((uint32_t)(EDX));
  /* 115744f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115744fa push eax */
  push32((uint32_t)(EAX));
  /* 115744fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115744fe push ecx */
  push32((uint32_t)(ECX));
  /* 115744ff push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11574504 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11574507 push edx */
  push32((uint32_t)(EDX));
  /* 11574508 call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x1157450eu);
  /* 1157450e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11574510 jne 0x11574519 */
  if (!C.zf) goto L_11574519;
  /* 11574512 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574514 jmp 0x115745f9 */
  goto L_115745f9;
L_11574519:;
  /* 11574519 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11574520 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11574523 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11574527 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157452a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1157452c call 0x115690e0 */
  push32(0x11574531u); f_115690e0();
  /* 11574531 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11574534 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11574537 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1157453a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1157453d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11574544 jmp 0x1157455d */
  goto L_1157455d;
  /* 11574546 mov eax, 1 */
  EAX = (0x1u);
  /* 1157454b ret  */
  ESPCHK(0x115743a0u, _esp0);
  ESP += 4; return;
  /* 1157454c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1157454f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11574556 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1157455d:;
  /* 1157455d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574561 jne 0x1157456a */
  if (!C.zf) goto L_1157456a;
  /* 11574563 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574565 jmp 0x115745f9 */
  goto L_115745f9;
L_1157456a:;
  /* 1157456a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157456e jne 0x11574579 */
  if (!C.zf) goto L_11574579;
  /* 11574570 mov edx, dword ptr [0x11592190] */
  EDX = (r32((uint32_t)(0x11592190)));
  /* 11574576 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11574579:;
  /* 11574579 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157457c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1157457f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11574585 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11574588 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1157458b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11574592 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11574595 push ecx */
  push32((uint32_t)(ECX));
  /* 11574596 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11574599 push edx */
  push32((uint32_t)(EDX));
  /* 1157459a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1157459d push eax */
  push32((uint32_t)(EAX));
  /* 1157459e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115745a1 push ecx */
  push32((uint32_t)(ECX));
  /* 115745a2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115745a5 push edx */
  push32((uint32_t)(EDX));
  /* 115745a6 call dword ptr [0x11594328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594328))), 0x115745acu);
  /* 115745ac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115745af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115745b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115745b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115745b7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 115745bc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115745c2 je 0x115745d8 */
  if (C.zf) goto L_115745d8;
  /* 115745c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115745c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115745ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115745cc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115745d0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115745d6 je 0x115745dc */
  if (C.zf) goto L_115745dc;
L_115745d8:;
  /* 115745d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115745da jmp 0x115745f9 */
  goto L_115745f9;
L_115745dc:;
  /* 115745dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115745df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115745e1 push eax */
  push32((uint32_t)(EAX));
  /* 115745e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115745e5 push ecx */
  push32((uint32_t)(ECX));
  /* 115745e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115745e9 push edx */
  push32((uint32_t)(EDX));
  /* 115745ea call 0x1156de30 */
  push32(0x115745efu); f_1156de30();
  /* 115745ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115745f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115745f5 jmp 0x115745f9 */
  goto L_115745f9;
L_115745f7:;
  /* 115745f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115745f9:;
  /* 115745f9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 115745fc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115745ff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11574606 pop edi */
  EDI = (pop32());
  /* 11574607 pop esi */
  ESI = (pop32());
  /* 11574608 pop ebx */
  EBX = (pop32());
  /* 11574609 mov esp, ebp */
  ESP = (EBP);
  /* 1157460b pop ebp */
  EBP = (pop32());
  /* 1157460c ret  */
  ESPCHK(0x115743a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014610 @ 0x11574610 (208 bytes, 85 insns) */
void f_11574610(void) {
  FTRACE(0x11574610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11574610 push ebp */
  push32((uint32_t)(EBP));
  /* 11574611 mov ebp, esp */
  EBP = (ESP);
  /* 11574613 push edi */
  push32((uint32_t)(EDI));
  /* 11574614 push esi */
  push32((uint32_t)(ESI));
  /* 11574615 push ebx */
  push32((uint32_t)(EBX));
  /* 11574616 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11574619 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1157461c lea eax, [0x11592188] */
  EAX = ((uint32_t)(0x11592188));
  /* 11574622 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574626 jne 0x11574663 */
  if (!C.zf) goto L_11574663;
  /* 11574628 mov al, 0xff */
  AL = (0xffu);
  /* 1157462a mov edi, edi */
  EDI = (EDI);
L_1157462c:;
  /* 1157462c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1157462e je 0x1157465e */
  if (C.zf) goto L_1157465e;
  /* 11574630 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11574632 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11574633 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11574635 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11574636 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11574638 je 0x1157462c */
  if (C.zf) goto L_1157462c;
  /* 1157463a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1157463c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1157463e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11574640 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11574643 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11574645 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11574647 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11574649 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1157464b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1157464d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1157464f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11574652 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11574654 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11574656 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11574658 je 0x1157462c */
  if (C.zf) goto L_1157462c;
  /* 1157465a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1157465c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1157465e:;
  /* 1157465e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11574661 jmp 0x115746db */
  goto L_115746db;
L_11574663:;
  /* 11574663 lock inc dword ptr [0x1159231c] */
  x86_unimpl("lock inc @ 0x11574663");
  /* 1157466a cmp dword ptr [0x1159230c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159230c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574671 jg 0x11574677 */
  if ((!C.zf&&C.sf==C.of)) goto L_11574677;
  /* 11574673 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574675 jmp 0x1157468c */
  goto L_1157468c;
L_11574677:;
  /* 11574677 lock dec dword ptr [0x1159231c] */
  x86_unimpl("lock dec @ 0x11574677");
  /* 1157467e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11574680 call 0x11569940 */
  push32(0x11574685u); f_11569940();
  /* 11574685 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1157468c:;
  /* 1157468c mov eax, 0xff */
  EAX = (0xffu);
  /* 11574691 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11574693 nop  */
  /* nop */
L_11574694:;
  /* 11574694 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11574696 je 0x115746bf */
  if (C.zf) goto L_115746bf;
  /* 11574698 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1157469a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1157469b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1157469d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1157469e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115746a0 je 0x11574694 */
  if (C.zf) goto L_11574694;
  /* 115746a2 push eax */
  push32((uint32_t)(EAX));
  /* 115746a3 push ebx */
  push32((uint32_t)(EBX));
  /* 115746a4 call 0x11575780 */
  push32(0x115746a9u); f_11575780();
  /* 115746a9 mov ebx, eax */
  EBX = (EAX);
  /* 115746ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115746ae call 0x11575780 */
  push32(0x115746b3u); f_11575780();
  /* 115746b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115746b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115746b8 je 0x11574694 */
  if (C.zf) goto L_11574694;
  /* 115746ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115746bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_115746bf:;
  /* 115746bf mov ebx, eax */
  EBX = (EAX);
  /* 115746c1 pop eax */
  EAX = (pop32());
  /* 115746c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115746c4 jne 0x115746cf */
  if (!C.zf) goto L_115746cf;
  /* 115746c6 lock dec dword ptr [0x1159231c] */
  x86_unimpl("lock dec @ 0x115746c6");
  /* 115746cd jmp 0x115746d9 */
  goto L_115746d9;
L_115746cf:;
  /* 115746cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115746d1 call 0x115699e0 */
  push32(0x115746d6u); f_115699e0();
  /* 115746d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115746d9:;
  /* 115746d9 mov eax, ebx */
  EAX = (EBX);
L_115746db:;
  /* 115746db pop ebx */
  EBX = (pop32());
  /* 115746dc pop esi */
  ESI = (pop32());
  /* 115746dd pop edi */
  EDI = (pop32());
  /* 115746de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115746df ret  */
  ESPCHK(0x11574610u, _esp0);
  ESP += 4; return;
}

/* FUN_100146e0 @ 0x115746e0 (257 bytes, 103 insns) */
void f_115746e0(void) {
  FTRACE(0x115746e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115746e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115746e1 mov ebp, esp */
  EBP = (ESP);
  /* 115746e3 push edi */
  push32((uint32_t)(EDI));
  /* 115746e4 push esi */
  push32((uint32_t)(ESI));
  /* 115746e5 push ebx */
  push32((uint32_t)(EBX));
  /* 115746e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115746e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115746eb je 0x115747da */
  if (C.zf) goto L_115747da;
  /* 115746f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 115746f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 115746f7 lea eax, [0x11592188] */
  EAX = ((uint32_t)(0x11592188));
  /* 115746fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574701 jne 0x11574751 */
  if (!C.zf) goto L_11574751;
  /* 11574703 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11574705 mov bl, 0x5a */
  BL = (0x5au);
  /* 11574707 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11574709 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1157470c:;
  /* 1157470c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1157470e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11574710 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11574712 je 0x11574735 */
  if (C.zf) goto L_11574735;
  /* 11574714 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11574716 je 0x11574735 */
  if (C.zf) goto L_11574735;
  /* 11574718 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11574719 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1157471a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1157471c jb 0x11574724 */
  if (C.cf) goto L_11574724;
  /* 1157471e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11574720 ja 0x11574724 */
  if ((!C.cf&&!C.zf)) goto L_11574724;
  /* 11574722 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11574724:;
  /* 11574724 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11574726 jb 0x1157472e */
  if (C.cf) goto L_1157472e;
  /* 11574728 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1157472a ja 0x1157472e */
  if ((!C.cf&&!C.zf)) goto L_1157472e;
  /* 1157472c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1157472e:;
  /* 1157472e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11574730 jne 0x1157473f */
  if (!C.zf) goto L_1157473f;
  /* 11574732 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11574733 jne 0x1157470c */
  if (!C.zf) goto L_1157470c;
L_11574735:;
  /* 11574735 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574737 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11574739 je 0x115747da */
  if (C.zf) goto L_115747da;
L_1157473f:;
  /* 1157473f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11574744 jb 0x115747da */
  if (C.cf) goto L_115747da;
  /* 1157474a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1157474c jmp 0x115747da */
  goto L_115747da;
L_11574751:;
  /* 11574751 lock inc dword ptr [0x1159231c] */
  x86_unimpl("lock inc @ 0x11574751");
  /* 11574758 cmp dword ptr [0x1159230c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159230c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157475f jg 0x11574765 */
  if ((!C.zf&&C.sf==C.of)) goto L_11574765;
  /* 11574761 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574763 jmp 0x1157477e */
  goto L_1157477e;
L_11574765:;
  /* 11574765 lock dec dword ptr [0x1159231c] */
  x86_unimpl("lock dec @ 0x11574765");
  /* 1157476c mov ebx, ecx */
  EBX = (ECX);
  /* 1157476e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11574770 call 0x11569940 */
  push32(0x11574775u); f_11569940();
  /* 11574775 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1157477c mov ecx, ebx */
  ECX = (EBX);
L_1157477e:;
  /* 1157477e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574780 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11574782 mov edi, edi */
  EDI = (EDI);
L_11574784:;
  /* 11574784 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11574786 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574788 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1157478a je 0x115747af */
  if (C.zf) goto L_115747af;
  /* 1157478c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1157478e je 0x115747af */
  if (C.zf) goto L_115747af;
  /* 11574790 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11574791 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11574792 push ecx */
  push32((uint32_t)(ECX));
  /* 11574793 push eax */
  push32((uint32_t)(EAX));
  /* 11574794 push ebx */
  push32((uint32_t)(EBX));
  /* 11574795 call 0x11575780 */
  push32(0x1157479au); f_11575780();
  /* 1157479a mov ebx, eax */
  EBX = (EAX);
  /* 1157479c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157479f call 0x11575780 */
  push32(0x115747a4u); f_11575780();
  /* 115747a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115747a7 pop ecx */
  ECX = (pop32());
  /* 115747a8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115747aa jne 0x115747b5 */
  if (!C.zf) goto L_115747b5;
  /* 115747ac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115747ad jne 0x11574784 */
  if (!C.zf) goto L_11574784;
L_115747af:;
  /* 115747af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115747b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115747b3 je 0x115747be */
  if (C.zf) goto L_115747be;
L_115747b5:;
  /* 115747b5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 115747ba jb 0x115747be */
  if (C.cf) goto L_115747be;
  /* 115747bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_115747be:;
  /* 115747be pop eax */
  EAX = (pop32());
  /* 115747bf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115747c1 jne 0x115747cc */
  if (!C.zf) goto L_115747cc;
  /* 115747c3 lock dec dword ptr [0x1159231c] */
  x86_unimpl("lock dec @ 0x115747c3");
  /* 115747ca jmp 0x115747da */
  goto L_115747da;
L_115747cc:;
  /* 115747cc mov ebx, ecx */
  EBX = (ECX);
  /* 115747ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 115747d0 call 0x115699e0 */
  push32(0x115747d5u); f_115699e0();
  /* 115747d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115747d8 mov ecx, ebx */
  ECX = (EBX);
L_115747da:;
  /* 115747da mov eax, ecx */
  EAX = (ECX);
  /* 115747dc pop ebx */
  EBX = (pop32());
  /* 115747dd pop esi */
  ESI = (pop32());
  /* 115747de pop edi */
  EDI = (pop32());
  /* 115747df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 115747e0 ret  */
  ESPCHK(0x115746e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100147f0 @ 0x115747f0 (255 bytes, 88 insns) */
void f_115747f0(void) {
  FTRACE(0x115747f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115747f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115747f1 mov ebp, esp */
  EBP = (ESP);
  /* 115747f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_115747f6:;
  /* 115747f6 cmp dword ptr [0x1158fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1158fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115747fd jle 0x11574816 */
  if ((C.zf||C.sf!=C.of)) goto L_11574816;
  /* 115747ff push 8 */
  push32((uint32_t)(0x8u));
  /* 11574801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574804 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574806 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11574808 push ecx */
  push32((uint32_t)(ECX));
  /* 11574809 call 0x1156bf50 */
  push32(0x1157480eu); f_1156bf50();
  /* 1157480e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574811 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11574814 jmp 0x1157482f */
  goto L_1157482f;
L_11574816:;
  /* 11574816 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574819 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157481b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1157481d mov ecx, dword ptr [0x1158fc98] */
  ECX = (r32((uint32_t)(0x1158fc98)));
  /* 11574823 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574825 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11574829 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1157482c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1157482f:;
  /* 1157482f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574833 je 0x11574840 */
  if (C.zf) goto L_11574840;
  /* 11574835 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574838 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157483b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1157483e jmp 0x115747f6 */
  goto L_115747f6;
L_11574840:;
  /* 11574840 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574843 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574845 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11574847 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1157484a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157484d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574850 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11574853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11574856 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11574859 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157485d je 0x11574865 */
  if (C.zf) goto L_11574865;
  /* 1157485f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574863 jne 0x11574878 */
  if (!C.zf) goto L_11574878;
L_11574865:;
  /* 11574865 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574868 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157486a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1157486c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1157486f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574872 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574875 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11574878:;
  /* 11574878 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1157487f:;
  /* 1157487f cmp dword ptr [0x1158fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1158fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574886 jle 0x1157489b */
  if ((C.zf||C.sf!=C.of)) goto L_1157489b;
  /* 11574888 push 4 */
  push32((uint32_t)(0x4u));
  /* 1157488a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157488d push edx */
  push32((uint32_t)(EDX));
  /* 1157488e call 0x1156bf50 */
  push32(0x11574893u); f_1156bf50();
  /* 11574893 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574896 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11574899 jmp 0x115748b0 */
  goto L_115748b0;
L_1157489b:;
  /* 1157489b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157489e mov ecx, dword ptr [0x1158fc98] */
  ECX = (r32((uint32_t)(0x1158fc98)));
  /* 115748a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115748a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115748aa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115748ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_115748b0:;
  /* 115748b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115748b4 je 0x115748db */
  if (C.zf) goto L_115748db;
  /* 115748b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115748b9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115748bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115748bf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 115748c3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115748c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115748c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115748cb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 115748cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115748d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115748d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115748d6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115748d9 jmp 0x1157487f */
  goto L_1157487f;
L_115748db:;
  /* 115748db cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115748df jne 0x115748e8 */
  if (!C.zf) goto L_115748e8;
  /* 115748e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115748e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 115748e6 jmp 0x115748eb */
  goto L_115748eb;
L_115748e8:;
  /* 115748e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_115748eb:;
  /* 115748eb mov esp, ebp */
  ESP = (EBP);
  /* 115748ed pop ebp */
  EBP = (pop32());
  /* 115748ee ret  */
  ESPCHK(0x115747f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148f0 @ 0x115748f0 (17 bytes, 8 insns) */
void f_115748f0(void) {
  FTRACE(0x115748f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115748f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115748f1 mov ebp, esp */
  EBP = (ESP);
  /* 115748f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115748f6 push eax */
  push32((uint32_t)(EAX));
  /* 115748f7 call 0x115747f0 */
  push32(0x115748fcu); f_115747f0();
  /* 115748fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115748ff pop ebp */
  EBP = (pop32());
  /* 11574900 ret  */
  ESPCHK(0x115748f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014910 @ 0x11574910 (297 bytes, 106 insns) */
void f_11574910(void) {
  FTRACE(0x11574910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11574910 push ebp */
  push32((uint32_t)(EBP));
  /* 11574911 mov ebp, esp */
  EBP = (ESP);
  /* 11574913 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11574916 push esi */
  push32((uint32_t)(ESI));
L_11574917:;
  /* 11574917 cmp dword ptr [0x1158fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1158fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157491e jle 0x11574937 */
  if ((C.zf||C.sf!=C.of)) goto L_11574937;
  /* 11574920 push 8 */
  push32((uint32_t)(0x8u));
  /* 11574922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574927 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11574929 push ecx */
  push32((uint32_t)(ECX));
  /* 1157492a call 0x1156bf50 */
  push32(0x1157492fu); f_1156bf50();
  /* 1157492f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574932 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11574935 jmp 0x11574950 */
  goto L_11574950;
L_11574937:;
  /* 11574937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157493a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157493c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1157493e mov ecx, dword ptr [0x1158fc98] */
  ECX = (r32((uint32_t)(0x1158fc98)));
  /* 11574944 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574946 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1157494a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1157494d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11574950:;
  /* 11574950 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574954 je 0x11574961 */
  if (C.zf) goto L_11574961;
  /* 11574956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574959 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157495c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1157495f jmp 0x11574917 */
  goto L_11574917;
L_11574961:;
  /* 11574961 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574964 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574966 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11574968 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1157496b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157496e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574971 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11574974 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11574977 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1157497a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157497e je 0x11574986 */
  if (C.zf) goto L_11574986;
  /* 11574980 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574984 jne 0x11574999 */
  if (!C.zf) goto L_11574999;
L_11574986:;
  /* 11574986 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574989 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157498b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1157498d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11574990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574993 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574996 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11574999:;
  /* 11574999 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115749a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_115749a7:;
  /* 115749a7 cmp dword ptr [0x1158fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1158fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115749ae jle 0x115749c3 */
  if ((C.zf||C.sf!=C.of)) goto L_115749c3;
  /* 115749b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 115749b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115749b5 push edx */
  push32((uint32_t)(EDX));
  /* 115749b6 call 0x1156bf50 */
  push32(0x115749bbu); f_1156bf50();
  /* 115749bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115749be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115749c1 jmp 0x115749d8 */
  goto L_115749d8;
L_115749c3:;
  /* 115749c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115749c6 mov ecx, dword ptr [0x1158fc98] */
  ECX = (r32((uint32_t)(0x1158fc98)));
  /* 115749cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115749ce mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 115749d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 115749d5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_115749d8:;
  /* 115749d8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115749dc je 0x11574a19 */
  if (C.zf) goto L_11574a19;
  /* 115749de push 0 */
  push32((uint32_t)(0x0u));
  /* 115749e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 115749e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115749e5 push eax */
  push32((uint32_t)(EAX));
  /* 115749e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115749e9 push ecx */
  push32((uint32_t)(ECX));
  /* 115749ea call 0x115758b0 */
  push32(0x115749efu); f_115758b0();
  /* 115749ef mov ecx, eax */
  ECX = (EAX);
  /* 115749f1 mov esi, edx */
  ESI = (EDX);
  /* 115749f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115749f6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115749f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115749fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115749fc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115749fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11574a01 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11574a04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574a09 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11574a0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11574a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574a11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574a14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11574a17 jmp 0x115749a7 */
  goto L_115749a7;
L_11574a19:;
  /* 11574a19 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574a1d jne 0x11574a2e */
  if (!C.zf) goto L_11574a2e;
  /* 11574a1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574a22 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11574a24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11574a27 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574a2a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11574a2c jmp 0x11574a34 */
  goto L_11574a34;
L_11574a2e:;
  /* 11574a2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574a31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11574a34:;
  /* 11574a34 pop esi */
  ESI = (pop32());
  /* 11574a35 mov esp, ebp */
  ESP = (EBP);
  /* 11574a37 pop ebp */
  EBP = (pop32());
  /* 11574a38 ret  */
  ESPCHK(0x11574910u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a40 @ 0x11574a40 (61 bytes, 18 insns) */
void f_11574a40(void) {
  FTRACE(0x11574a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11574a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11574a41 mov ebp, esp */
  EBP = (ESP);
  /* 11574a43 cmp dword ptr [0x115922e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574a4a jne 0x11574a7b */
  if (!C.zf) goto L_11574a7b;
  /* 11574a4c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11574a4e call 0x11569940 */
  push32(0x11574a53u); f_11569940();
  /* 11574a53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574a56 cmp dword ptr [0x115922e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574a5d jne 0x11574a71 */
  if (!C.zf) goto L_11574a71;
  /* 11574a5f call 0x11574aa0 */
  push32(0x11574a64u); f_11574aa0();
  /* 11574a64 mov eax, dword ptr [0x115922e8] */
  EAX = (r32((uint32_t)(0x115922e8)));
  /* 11574a69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574a6c mov dword ptr [0x115922e8], eax */
  w32((uint32_t)(0x115922e8), (EAX));
L_11574a71:;
  /* 11574a71 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11574a73 call 0x115699e0 */
  push32(0x11574a78u); f_115699e0();
  /* 11574a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11574a7b:;
  /* 11574a7b pop ebp */
  EBP = (pop32());
  /* 11574a7c ret  */
  ESPCHK(0x11574a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a80 @ 0x11574a80 (30 bytes, 11 insns) */
void f_11574a80(void) {
  FTRACE(0x11574a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11574a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11574a81 mov ebp, esp */
  EBP = (ESP);
  /* 11574a83 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11574a85 call 0x11569940 */
  push32(0x11574a8au); f_11569940();
  /* 11574a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574a8d call 0x11574aa0 */
  push32(0x11574a92u); f_11574aa0();
  /* 11574a92 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11574a94 call 0x115699e0 */
  push32(0x11574a99u); f_115699e0();
  /* 11574a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574a9c pop ebp */
  EBP = (pop32());
  /* 11574a9d ret  */
  ESPCHK(0x11574a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10014aa0 @ 0x11574aa0 (939 bytes, 266 insns) */
void f_11574aa0(void) {
  FTRACE(0x11574aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11574aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11574aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11574aa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11574aa6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11574aad push 0xc */
  push32((uint32_t)(0xcu));
  /* 11574aaf call 0x11569940 */
  push32(0x11574ab4u); f_11569940();
  /* 11574ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574ab7 mov dword ptr [0x11592230], 0 */
  w32((uint32_t)(0x11592230), (0x0u));
  /* 11574ac1 mov dword ptr [0x11590e38], 0xffffffff */
  w32((uint32_t)(0x11590e38), (0xffffffffu));
  /* 11574acb mov eax, dword ptr [0x11590e38] */
  EAX = (r32((uint32_t)(0x11590e38)));
  /* 11574ad0 mov dword ptr [0x11590e28], eax */
  w32((uint32_t)(0x11590e28), (EAX));
  /* 11574ad5 push 0x1158d9d0 */
  push32((uint32_t)(0x1158d9d0u));
  /* 11574ada call 0x11575920 */
  push32(0x11574adfu); f_11575920();
  /* 11574adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574ae2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11574ae5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574ae9 jne 0x11574c23 */
  if (!C.zf) goto L_11574c23;
  /* 11574aef push 0xc */
  push32((uint32_t)(0xcu));
  /* 11574af1 call 0x115699e0 */
  push32(0x11574af6u); f_115699e0();
  /* 11574af6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574af9 push 0x11592238 */
  push32((uint32_t)(0x11592238u));
  /* 11574afe call dword ptr [0x115942e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942e8))), 0x11574b04u);
  /* 11574b04 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574b07 je 0x11574c1e */
  if (C.zf) goto L_11574c1e;
  /* 11574b0d mov dword ptr [0x11592230], 1 */
  w32((uint32_t)(0x11592230), (0x1u));
  /* 11574b17 mov ecx, dword ptr [0x11592238] */
  ECX = (r32((uint32_t)(0x11592238)));
  /* 11574b1d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11574b20 mov dword ptr [0x11590d90], ecx */
  w32((uint32_t)(0x11590d90), (ECX));
  /* 11574b26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574b28 mov dx, word ptr [0x1159227e] */
  DX = (r16((uint32_t)(0x1159227e)));
  /* 11574b2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11574b31 je 0x11574b49 */
  if (C.zf) goto L_11574b49;
  /* 11574b33 mov eax, dword ptr [0x1159228c] */
  EAX = (r32((uint32_t)(0x1159228c)));
  /* 11574b38 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11574b3b mov ecx, dword ptr [0x11590d90] */
  ECX = (r32((uint32_t)(0x11590d90)));
  /* 11574b41 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574b43 mov dword ptr [0x11590d90], ecx */
  w32((uint32_t)(0x11590d90), (ECX));
L_11574b49:;
  /* 11574b49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574b4b mov dx, word ptr [0x115922d2] */
  DX = (r16((uint32_t)(0x115922d2)));
  /* 11574b52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11574b54 je 0x11574b7e */
  if (C.zf) goto L_11574b7e;
  /* 11574b56 cmp dword ptr [0x115922e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574b5d je 0x11574b7e */
  if (C.zf) goto L_11574b7e;
  /* 11574b5f mov dword ptr [0x11590d94], 1 */
  w32((uint32_t)(0x11590d94), (0x1u));
  /* 11574b69 mov eax, dword ptr [0x115922e0] */
  EAX = (r32((uint32_t)(0x115922e0)));
  /* 11574b6e sub eax, dword ptr [0x1159228c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1159228c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11574b74 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11574b77 mov dword ptr [0x11590d98], eax */
  w32((uint32_t)(0x11590d98), (EAX));
  /* 11574b7c jmp 0x11574b92 */
  goto L_11574b92;
L_11574b7e:;
  /* 11574b7e mov dword ptr [0x11590d94], 0 */
  w32((uint32_t)(0x11590d94), (0x0u));
  /* 11574b88 mov dword ptr [0x11590d98], 0 */
  w32((uint32_t)(0x11590d98), (0x0u));
L_11574b92:;
  /* 11574b92 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11574b95 push ecx */
  push32((uint32_t)(ECX));
  /* 11574b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574b98 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11574b9a mov edx, dword ptr [0x11590e1c] */
  EDX = (r32((uint32_t)(0x11590e1c)));
  /* 11574ba0 push edx */
  push32((uint32_t)(EDX));
  /* 11574ba1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11574ba3 push 0x1159223c */
  push32((uint32_t)(0x1159223cu));
  /* 11574ba8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11574bad mov eax, dword ptr [0x115921a0] */
  EAX = (r32((uint32_t)(0x115921a0)));
  /* 11574bb2 push eax */
  push32((uint32_t)(EAX));
  /* 11574bb3 call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x11574bb9u);
  /* 11574bb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11574bbb je 0x11574bcf */
  if (C.zf) goto L_11574bcf;
  /* 11574bbd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574bc1 jne 0x11574bcf */
  if (!C.zf) goto L_11574bcf;
  /* 11574bc3 mov ecx, dword ptr [0x11590e1c] */
  ECX = (r32((uint32_t)(0x11590e1c)));
  /* 11574bc9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11574bcd jmp 0x11574bd8 */
  goto L_11574bd8;
L_11574bcf:;
  /* 11574bcf mov edx, dword ptr [0x11590e1c] */
  EDX = (r32((uint32_t)(0x11590e1c)));
  /* 11574bd5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11574bd8:;
  /* 11574bd8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11574bdb push eax */
  push32((uint32_t)(EAX));
  /* 11574bdc push 0 */
  push32((uint32_t)(0x0u));
  /* 11574bde push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11574be0 mov ecx, dword ptr [0x11590e20] */
  ECX = (r32((uint32_t)(0x11590e20)));
  /* 11574be6 push ecx */
  push32((uint32_t)(ECX));
  /* 11574be7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11574be9 push 0x11592290 */
  push32((uint32_t)(0x11592290u));
  /* 11574bee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11574bf3 mov edx, dword ptr [0x115921a0] */
  EDX = (r32((uint32_t)(0x115921a0)));
  /* 11574bf9 push edx */
  push32((uint32_t)(EDX));
  /* 11574bfa call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x11574c00u);
  /* 11574c00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11574c02 je 0x11574c15 */
  if (C.zf) goto L_11574c15;
  /* 11574c04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574c08 jne 0x11574c15 */
  if (!C.zf) goto L_11574c15;
  /* 11574c0a mov eax, dword ptr [0x11590e20] */
  EAX = (r32((uint32_t)(0x11590e20)));
  /* 11574c0f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11574c13 jmp 0x11574c1e */
  goto L_11574c1e;
L_11574c15:;
  /* 11574c15 mov ecx, dword ptr [0x11590e20] */
  ECX = (r32((uint32_t)(0x11590e20)));
  /* 11574c1b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11574c1e:;
  /* 11574c1e jmp 0x11574e47 */
  goto L_11574e47;
L_11574c23:;
  /* 11574c23 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574c26 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11574c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11574c2b je 0x11574c4d */
  if (C.zf) goto L_11574c4d;
  /* 11574c2d cmp dword ptr [0x115922e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574c34 je 0x11574c5c */
  if (C.zf) goto L_11574c5c;
  /* 11574c36 mov ecx, dword ptr [0x115922e4] */
  ECX = (r32((uint32_t)(0x115922e4)));
  /* 11574c3c push ecx */
  push32((uint32_t)(ECX));
  /* 11574c3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574c40 push edx */
  push32((uint32_t)(EDX));
  /* 11574c41 call 0x11571bd0 */
  push32(0x11574c46u); f_11571bd0();
  /* 11574c46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11574c4b jne 0x11574c5c */
  if (!C.zf) goto L_11574c5c;
L_11574c4d:;
  /* 11574c4d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11574c4f call 0x115699e0 */
  push32(0x11574c54u); f_115699e0();
  /* 11574c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574c57 jmp 0x11574e47 */
  goto L_11574e47;
L_11574c5c:;
  /* 11574c5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11574c5e mov eax, dword ptr [0x115922e4] */
  EAX = (r32((uint32_t)(0x115922e4)));
  /* 11574c63 push eax */
  push32((uint32_t)(EAX));
  /* 11574c64 call 0x115669d0 */
  push32(0x11574c69u); f_115669d0();
  /* 11574c69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574c6c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11574c71 push 0x1158d9c8 */
  push32((uint32_t)(0x1158d9c8u));
  /* 11574c76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11574c78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574c7b push ecx */
  push32((uint32_t)(ECX));
  /* 11574c7c call 0x11568d70 */
  push32(0x11574c81u); f_11568d70();
  /* 11574c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574c84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574c87 push eax */
  push32((uint32_t)(EAX));
  /* 11574c88 call 0x11565f40 */
  push32(0x11574c8du); f_11565f40();
  /* 11574c8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574c90 mov dword ptr [0x115922e4], eax */
  w32((uint32_t)(0x115922e4), (EAX));
  /* 11574c95 cmp dword ptr [0x115922e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574c9c jne 0x11574cad */
  if (!C.zf) goto L_11574cad;
  /* 11574c9e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11574ca0 call 0x115699e0 */
  push32(0x11574ca5u); f_115699e0();
  /* 11574ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574ca8 jmp 0x11574e47 */
  goto L_11574e47;
L_11574cad:;
  /* 11574cad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574cb0 push edx */
  push32((uint32_t)(EDX));
  /* 11574cb1 mov eax, dword ptr [0x115922e4] */
  EAX = (r32((uint32_t)(0x115922e4)));
  /* 11574cb6 push eax */
  push32((uint32_t)(EAX));
  /* 11574cb7 call 0x11568ef0 */
  push32(0x11574cbcu); f_11568ef0();
  /* 11574cbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574cbf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11574cc1 call 0x115699e0 */
  push32(0x11574cc6u); f_115699e0();
  /* 11574cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574cc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11574ccb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574cce push ecx */
  push32((uint32_t)(ECX));
  /* 11574ccf mov edx, dword ptr [0x11590e1c] */
  EDX = (r32((uint32_t)(0x11590e1c)));
  /* 11574cd5 push edx */
  push32((uint32_t)(EDX));
  /* 11574cd6 call 0x11569760 */
  push32(0x11574cdbu); f_11569760();
  /* 11574cdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574cde mov eax, dword ptr [0x11590e1c] */
  EAX = (r32((uint32_t)(0x11590e1c)));
  /* 11574ce3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11574ce7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574cea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574ced mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11574cf0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574cf3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11574cf6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574cf9 jne 0x11574d0d */
  if (!C.zf) goto L_11574d0d;
  /* 11574cfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11574cfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574d01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11574d04 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574d0a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11574d0d:;
  /* 11574d0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d10 push eax */
  push32((uint32_t)(EAX));
  /* 11574d11 call 0x115747f0 */
  push32(0x11574d16u); f_115747f0();
  /* 11574d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574d19 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11574d1f mov dword ptr [0x11590d90], eax */
  w32((uint32_t)(0x11590d90), (EAX));
L_11574d24:;
  /* 11574d24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d27 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11574d2a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574d2d je 0x11574d45 */
  if (C.zf) goto L_11574d45;
  /* 11574d2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d32 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11574d35 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574d38 jl 0x11574d50 */
  if ((C.sf!=C.of)) goto L_11574d50;
  /* 11574d3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11574d40 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574d43 jg 0x11574d50 */
  if ((!C.zf&&C.sf==C.of)) goto L_11574d50;
L_11574d45:;
  /* 11574d45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574d4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11574d4e jmp 0x11574d24 */
  goto L_11574d24;
L_11574d50:;
  /* 11574d50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d53 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11574d56 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574d59 jne 0x11574df5 */
  if (!C.zf) goto L_11574df5;
  /* 11574d5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574d65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11574d68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d6b push edx */
  push32((uint32_t)(EDX));
  /* 11574d6c call 0x115747f0 */
  push32(0x11574d71u); f_115747f0();
  /* 11574d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574d74 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11574d77 mov ecx, dword ptr [0x11590d90] */
  ECX = (r32((uint32_t)(0x11590d90)));
  /* 11574d7d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574d7f mov dword ptr [0x11590d90], ecx */
  w32((uint32_t)(0x11590d90), (ECX));
L_11574d85:;
  /* 11574d85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d88 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11574d8b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574d8e jl 0x11574da6 */
  if ((C.sf!=C.of)) goto L_11574da6;
  /* 11574d90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d93 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11574d96 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574d99 jg 0x11574da6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11574da6;
  /* 11574d9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574d9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574da1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11574da4 jmp 0x11574d85 */
  goto L_11574d85;
L_11574da6:;
  /* 11574da6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574da9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11574dac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574daf jne 0x11574df5 */
  if (!C.zf) goto L_11574df5;
  /* 11574db1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574db4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574db7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11574dba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574dbd push ecx */
  push32((uint32_t)(ECX));
  /* 11574dbe call 0x115747f0 */
  push32(0x11574dc3u); f_115747f0();
  /* 11574dc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574dc6 mov edx, dword ptr [0x11590d90] */
  EDX = (r32((uint32_t)(0x11590d90)));
  /* 11574dcc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574dce mov dword ptr [0x11590d90], edx */
  w32((uint32_t)(0x11590d90), (EDX));
L_11574dd4:;
  /* 11574dd4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574dd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11574dda cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574ddd jl 0x11574df5 */
  if ((C.sf!=C.of)) goto L_11574df5;
  /* 11574ddf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574de2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11574de5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574de8 jg 0x11574df5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11574df5;
  /* 11574dea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574ded add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11574df0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11574df3 jmp 0x11574dd4 */
  goto L_11574dd4;
L_11574df5:;
  /* 11574df5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574df9 je 0x11574e09 */
  if (C.zf) goto L_11574e09;
  /* 11574dfb mov edx, dword ptr [0x11590d90] */
  EDX = (r32((uint32_t)(0x11590d90)));
  /* 11574e01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11574e03 mov dword ptr [0x11590d90], edx */
  w32((uint32_t)(0x11590d90), (EDX));
L_11574e09:;
  /* 11574e09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574e0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11574e0f mov dword ptr [0x11590d94], ecx */
  w32((uint32_t)(0x11590d94), (ECX));
  /* 11574e15 cmp dword ptr [0x11590d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11590d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574e1c je 0x11574e3e */
  if (C.zf) goto L_11574e3e;
  /* 11574e1e push 3 */
  push32((uint32_t)(0x3u));
  /* 11574e20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11574e23 push edx */
  push32((uint32_t)(EDX));
  /* 11574e24 mov eax, dword ptr [0x11590e20] */
  EAX = (r32((uint32_t)(0x11590e20)));
  /* 11574e29 push eax */
  push32((uint32_t)(EAX));
  /* 11574e2a call 0x11569760 */
  push32(0x11574e2fu); f_11569760();
  /* 11574e2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574e32 mov ecx, dword ptr [0x11590e20] */
  ECX = (r32((uint32_t)(0x11590e20)));
  /* 11574e38 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 11574e3c jmp 0x11574e47 */
  goto L_11574e47;
L_11574e3e:;
  /* 11574e3e mov edx, dword ptr [0x11590e20] */
  EDX = (r32((uint32_t)(0x11590e20)));
  /* 11574e44 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11574e47:;
  /* 11574e47 mov esp, ebp */
  ESP = (EBP);
  /* 11574e49 pop ebp */
  EBP = (pop32());
  /* 11574e4a ret  */
  ESPCHK(0x11574aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e50 @ 0x11574e50 (46 bytes, 18 insns) */
void f_11574e50(void) {
  FTRACE(0x11574e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11574e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11574e51 mov ebp, esp */
  EBP = (ESP);
  /* 11574e53 push ecx */
  push32((uint32_t)(ECX));
  /* 11574e54 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11574e56 call 0x11569940 */
  push32(0x11574e5bu); f_11569940();
  /* 11574e5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574e5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574e61 push eax */
  push32((uint32_t)(EAX));
  /* 11574e62 call 0x11574e80 */
  push32(0x11574e67u); f_11574e80();
  /* 11574e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574e6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11574e6d push 0xb */
  push32((uint32_t)(0xbu));
  /* 11574e6f call 0x115699e0 */
  push32(0x11574e74u); f_115699e0();
  /* 11574e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11574e7a mov esp, ebp */
  ESP = (EBP);
  /* 11574e7c pop ebp */
  EBP = (pop32());
  /* 11574e7d ret  */
  ESPCHK(0x11574e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e80 @ 0x11574e80 (762 bytes, 246 insns) */
void f_11574e80(void) {
  FTRACE(0x11574e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11574e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11574e81 mov ebp, esp */
  EBP = (ESP);
  /* 11574e83 push ecx */
  push32((uint32_t)(ECX));
  /* 11574e84 cmp dword ptr [0x11590d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11590d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574e8b jne 0x11574e94 */
  if (!C.zf) goto L_11574e94;
  /* 11574e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574e8f jmp 0x11575176 */
  goto L_11575176;
L_11574e94:;
  /* 11574e94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574e97 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11574e9a cmp ecx, dword ptr [0x11590e28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11590e28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574ea0 jne 0x11574eb4 */
  if (!C.zf) goto L_11574eb4;
  /* 11574ea2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574ea5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11574ea8 cmp eax, dword ptr [0x11590e38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11590e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574eae je 0x1157507b */
  if (C.zf) goto L_1157507b;
L_11574eb4:;
  /* 11574eb4 cmp dword ptr [0x11592230], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592230))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11574ebb je 0x11575035 */
  if (C.zf) goto L_11575035;
  /* 11574ec1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574ec3 mov cx, word ptr [0x115922d0] */
  CX = (r16((uint32_t)(0x115922d0)));
  /* 11574eca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11574ecc jne 0x11574f29 */
  if (!C.zf) goto L_11574f29;
  /* 11574ece xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574ed0 mov dx, word ptr [0x115922de] */
  DX = (r16((uint32_t)(0x115922de)));
  /* 11574ed7 push edx */
  push32((uint32_t)(EDX));
  /* 11574ed8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574eda mov ax, word ptr [0x115922dc] */
  AX = (r16((uint32_t)(0x115922dc)));
  /* 11574ee0 push eax */
  push32((uint32_t)(EAX));
  /* 11574ee1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574ee3 mov cx, word ptr [0x115922da] */
  CX = (r16((uint32_t)(0x115922da)));
  /* 11574eea push ecx */
  push32((uint32_t)(ECX));
  /* 11574eeb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574eed mov dx, word ptr [0x115922d8] */
  DX = (r16((uint32_t)(0x115922d8)));
  /* 11574ef4 push edx */
  push32((uint32_t)(EDX));
  /* 11574ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574ef9 mov ax, word ptr [0x115922d4] */
  AX = (r16((uint32_t)(0x115922d4)));
  /* 11574eff push eax */
  push32((uint32_t)(EAX));
  /* 11574f00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574f02 mov cx, word ptr [0x115922d6] */
  CX = (r16((uint32_t)(0x115922d6)));
  /* 11574f09 push ecx */
  push32((uint32_t)(ECX));
  /* 11574f0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574f0c mov dx, word ptr [0x115922d2] */
  DX = (r16((uint32_t)(0x115922d2)));
  /* 11574f13 push edx */
  push32((uint32_t)(EDX));
  /* 11574f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574f17 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11574f1a push ecx */
  push32((uint32_t)(ECX));
  /* 11574f1b push 1 */
  push32((uint32_t)(0x1u));
  /* 11574f1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11574f1f call 0x11575180 */
  push32(0x11574f24u); f_11575180();
  /* 11574f24 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574f27 jmp 0x11574f7a */
  goto L_11574f7a;
L_11574f29:;
  /* 11574f29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574f2b mov dx, word ptr [0x115922de] */
  DX = (r16((uint32_t)(0x115922de)));
  /* 11574f32 push edx */
  push32((uint32_t)(EDX));
  /* 11574f33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574f35 mov ax, word ptr [0x115922dc] */
  AX = (r16((uint32_t)(0x115922dc)));
  /* 11574f3b push eax */
  push32((uint32_t)(EAX));
  /* 11574f3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574f3e mov cx, word ptr [0x115922da] */
  CX = (r16((uint32_t)(0x115922da)));
  /* 11574f45 push ecx */
  push32((uint32_t)(ECX));
  /* 11574f46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574f48 mov dx, word ptr [0x115922d8] */
  DX = (r16((uint32_t)(0x115922d8)));
  /* 11574f4f push edx */
  push32((uint32_t)(EDX));
  /* 11574f50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574f52 mov ax, word ptr [0x115922d6] */
  AX = (r16((uint32_t)(0x115922d6)));
  /* 11574f58 push eax */
  push32((uint32_t)(EAX));
  /* 11574f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11574f5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574f5f mov cx, word ptr [0x115922d2] */
  CX = (r16((uint32_t)(0x115922d2)));
  /* 11574f66 push ecx */
  push32((uint32_t)(ECX));
  /* 11574f67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574f6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11574f6d push eax */
  push32((uint32_t)(EAX));
  /* 11574f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11574f70 push 1 */
  push32((uint32_t)(0x1u));
  /* 11574f72 call 0x11575180 */
  push32(0x11574f77u); f_11575180();
  /* 11574f77 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11574f7a:;
  /* 11574f7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574f7c mov cx, word ptr [0x1159227c] */
  CX = (r16((uint32_t)(0x1159227c)));
  /* 11574f83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11574f85 jne 0x11574fe2 */
  if (!C.zf) goto L_11574fe2;
  /* 11574f87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574f89 mov dx, word ptr [0x1159228a] */
  DX = (r16((uint32_t)(0x1159228a)));
  /* 11574f90 push edx */
  push32((uint32_t)(EDX));
  /* 11574f91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574f93 mov ax, word ptr [0x11592288] */
  AX = (r16((uint32_t)(0x11592288)));
  /* 11574f99 push eax */
  push32((uint32_t)(EAX));
  /* 11574f9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574f9c mov cx, word ptr [0x11592286] */
  CX = (r16((uint32_t)(0x11592286)));
  /* 11574fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11574fa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574fa6 mov dx, word ptr [0x11592284] */
  DX = (r16((uint32_t)(0x11592284)));
  /* 11574fad push edx */
  push32((uint32_t)(EDX));
  /* 11574fae push 0 */
  push32((uint32_t)(0x0u));
  /* 11574fb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574fb2 mov ax, word ptr [0x11592280] */
  AX = (r16((uint32_t)(0x11592280)));
  /* 11574fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11574fb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574fbb mov cx, word ptr [0x11592282] */
  CX = (r16((uint32_t)(0x11592282)));
  /* 11574fc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11574fc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574fc5 mov dx, word ptr [0x1159227e] */
  DX = (r16((uint32_t)(0x1159227e)));
  /* 11574fcc push edx */
  push32((uint32_t)(EDX));
  /* 11574fcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11574fd0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11574fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11574fd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11574fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11574fd8 call 0x11575180 */
  push32(0x11574fddu); f_11575180();
  /* 11574fdd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11574fe0 jmp 0x11575033 */
  goto L_11575033;
L_11574fe2:;
  /* 11574fe2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11574fe4 mov dx, word ptr [0x1159228a] */
  DX = (r16((uint32_t)(0x1159228a)));
  /* 11574feb push edx */
  push32((uint32_t)(EDX));
  /* 11574fec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11574fee mov ax, word ptr [0x11592288] */
  AX = (r16((uint32_t)(0x11592288)));
  /* 11574ff4 push eax */
  push32((uint32_t)(EAX));
  /* 11574ff5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11574ff7 mov cx, word ptr [0x11592286] */
  CX = (r16((uint32_t)(0x11592286)));
  /* 11574ffe push ecx */
  push32((uint32_t)(ECX));
  /* 11574fff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11575001 mov dx, word ptr [0x11592284] */
  DX = (r16((uint32_t)(0x11592284)));
  /* 11575008 push edx */
  push32((uint32_t)(EDX));
  /* 11575009 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157500b mov ax, word ptr [0x11592282] */
  AX = (r16((uint32_t)(0x11592282)));
  /* 11575011 push eax */
  push32((uint32_t)(EAX));
  /* 11575012 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575014 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575016 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11575018 mov cx, word ptr [0x1159227e] */
  CX = (r16((uint32_t)(0x1159227e)));
  /* 1157501f push ecx */
  push32((uint32_t)(ECX));
  /* 11575020 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575023 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11575026 push eax */
  push32((uint32_t)(EAX));
  /* 11575027 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575029 push 0 */
  push32((uint32_t)(0x0u));
  /* 1157502b call 0x11575180 */
  push32(0x11575030u); f_11575180();
  /* 11575030 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11575033:;
  /* 11575033 jmp 0x1157507b */
  goto L_1157507b;
L_11575035:;
  /* 11575035 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575037 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575039 push 0 */
  push32((uint32_t)(0x0u));
  /* 1157503b push 2 */
  push32((uint32_t)(0x2u));
  /* 1157503d push 0 */
  push32((uint32_t)(0x0u));
  /* 1157503f push 0 */
  push32((uint32_t)(0x0u));
  /* 11575041 push 1 */
  push32((uint32_t)(0x1u));
  /* 11575043 push 4 */
  push32((uint32_t)(0x4u));
  /* 11575045 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575048 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1157504b push edx */
  push32((uint32_t)(EDX));
  /* 1157504c push 1 */
  push32((uint32_t)(0x1u));
  /* 1157504e push 1 */
  push32((uint32_t)(0x1u));
  /* 11575050 call 0x11575180 */
  push32(0x11575055u); f_11575180();
  /* 11575055 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575058 push 0 */
  push32((uint32_t)(0x0u));
  /* 1157505a push 0 */
  push32((uint32_t)(0x0u));
  /* 1157505c push 0 */
  push32((uint32_t)(0x0u));
  /* 1157505e push 2 */
  push32((uint32_t)(0x2u));
  /* 11575060 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575062 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575064 push 5 */
  push32((uint32_t)(0x5u));
  /* 11575066 push 0xa */
  push32((uint32_t)(0xau));
  /* 11575068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157506b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1157506e push ecx */
  push32((uint32_t)(ECX));
  /* 1157506f push 1 */
  push32((uint32_t)(0x1u));
  /* 11575071 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575073 call 0x11575180 */
  push32(0x11575078u); f_11575180();
  /* 11575078 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1157507b:;
  /* 1157507b mov edx, dword ptr [0x11590e2c] */
  EDX = (r32((uint32_t)(0x11590e2c)));
  /* 11575081 cmp edx, dword ptr [0x11590e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11590e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575087 jge 0x115750d4 */
  if ((C.sf==C.of)) goto L_115750d4;
  /* 11575089 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157508c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1157508f cmp ecx, dword ptr [0x11590e2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11590e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575095 jl 0x115750a5 */
  if ((C.sf!=C.of)) goto L_115750a5;
  /* 11575097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157509a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1157509d cmp eax, dword ptr [0x11590e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11590e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115750a3 jle 0x115750ac */
  if ((C.zf||C.sf!=C.of)) goto L_115750ac;
L_115750a5:;
  /* 115750a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115750a7 jmp 0x11575176 */
  goto L_11575176;
L_115750ac:;
  /* 115750ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115750af mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115750b2 cmp edx, dword ptr [0x11590e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11590e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115750b8 jle 0x115750d2 */
  if ((C.zf||C.sf!=C.of)) goto L_115750d2;
  /* 115750ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115750bd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115750c0 cmp ecx, dword ptr [0x11590e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11590e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115750c6 jge 0x115750d2 */
  if ((C.sf==C.of)) goto L_115750d2;
  /* 115750c8 mov eax, 1 */
  EAX = (0x1u);
  /* 115750cd jmp 0x11575176 */
  goto L_11575176;
L_115750d2:;
  /* 115750d2 jmp 0x11575117 */
  goto L_11575117;
L_115750d4:;
  /* 115750d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115750d7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 115750da cmp eax, dword ptr [0x11590e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11590e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115750e0 jl 0x115750f0 */
  if ((C.sf!=C.of)) goto L_115750f0;
  /* 115750e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115750e5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 115750e8 cmp edx, dword ptr [0x11590e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11590e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115750ee jle 0x115750f7 */
  if ((C.zf||C.sf!=C.of)) goto L_115750f7;
L_115750f0:;
  /* 115750f0 mov eax, 1 */
  EAX = (0x1u);
  /* 115750f5 jmp 0x11575176 */
  goto L_11575176;
L_115750f7:;
  /* 115750f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115750fa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 115750fd cmp ecx, dword ptr [0x11590e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11590e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575103 jle 0x11575117 */
  if ((C.zf||C.sf!=C.of)) goto L_11575117;
  /* 11575105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575108 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1157510b cmp eax, dword ptr [0x11590e2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11590e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575111 jge 0x11575117 */
  if ((C.sf==C.of)) goto L_11575117;
  /* 11575113 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575115 jmp 0x11575176 */
  goto L_11575176;
L_11575117:;
  /* 11575117 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157511a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1157511d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11575120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575123 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11575125 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575127 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157512a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1157512d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11575133 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575135 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1157513b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1157513e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575141 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11575144 cmp edx, dword ptr [0x11590e2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11590e2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157514a jne 0x11575162 */
  if (!C.zf) goto L_11575162;
  /* 1157514c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157514f cmp eax, dword ptr [0x11590e30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11590e30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575155 jl 0x1157515e */
  if ((C.sf!=C.of)) goto L_1157515e;
  /* 11575157 mov eax, 1 */
  EAX = (0x1u);
  /* 1157515c jmp 0x11575176 */
  goto L_11575176;
L_1157515e:;
  /* 1157515e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575160 jmp 0x11575176 */
  goto L_11575176;
L_11575162:;
  /* 11575162 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575165 cmp ecx, dword ptr [0x11590e40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11590e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157516b jge 0x11575174 */
  if ((C.sf==C.of)) goto L_11575174;
  /* 1157516d mov eax, 1 */
  EAX = (0x1u);
  /* 11575172 jmp 0x11575176 */
  goto L_11575176;
L_11575174:;
  /* 11575174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11575176:;
  /* 11575176 mov esp, ebp */
  ESP = (EBP);
  /* 11575178 pop ebp */
  EBP = (pop32());
  /* 11575179 ret  */
  ESPCHK(0x11574e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10015180 @ 0x11575180 (504 bytes, 145 insns) */
void f_11575180(void) {
  FTRACE(0x11575180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11575180 push ebp */
  push32((uint32_t)(EBP));
  /* 11575181 mov ebp, esp */
  EBP = (ESP);
  /* 11575183 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575186 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157518a jne 0x1157525c */
  if (!C.zf) goto L_1157525c;
  /* 11575190 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575193 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11575196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575198 jne 0x115751a9 */
  if (!C.zf) goto L_115751a9;
  /* 1157519a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157519d mov edx, dword ptr [ecx*4 + 0x11590e4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11590e4c)));
  /* 115751a4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115751a7 jmp 0x115751b6 */
  goto L_115751b6;
L_115751a9:;
  /* 115751a9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115751ac mov ecx, dword ptr [eax*4 + 0x11590e80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11590e80)));
  /* 115751b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_115751b6:;
  /* 115751b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115751b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115751bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115751bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115751c2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115751c5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115751cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115751ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115751d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115751d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115751d6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 115751d9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 115751dd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 115751de mov ecx, 7 */
  ECX = (0x7u);
  /* 115751e3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 115751e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115751e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115751eb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115751ee jge 0x11575209 */
  if ((C.sf==C.of)) goto L_11575209;
  /* 115751f0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 115751f3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115751f6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115751f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115751fc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115751ff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575202 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575204 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11575207 jmp 0x1157521d */
  goto L_1157521d;
L_11575209:;
  /* 11575209 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1157520c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1157520f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11575212 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11575215 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575218 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157521a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1157521d:;
  /* 1157521d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575221 jne 0x1157525a */
  if (!C.zf) goto L_1157525a;
  /* 11575223 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575226 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11575229 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1157522b jne 0x1157523c */
  if (!C.zf) goto L_1157523c;
  /* 1157522d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11575230 mov eax, dword ptr [edx*4 + 0x11590e50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11590e50)));
  /* 11575237 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1157523a jmp 0x11575249 */
  goto L_11575249;
L_1157523c:;
  /* 1157523c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157523f mov edx, dword ptr [ecx*4 + 0x11590e84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11590e84)));
  /* 11575246 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11575249:;
  /* 11575249 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157524c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157524f jle 0x1157525a */
  if ((C.zf||C.sf!=C.of)) goto L_1157525a;
  /* 11575251 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11575254 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575257 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1157525a:;
  /* 1157525a jmp 0x11575291 */
  goto L_11575291;
L_1157525c:;
  /* 1157525c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157525f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11575262 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11575264 jne 0x11575275 */
  if (!C.zf) goto L_11575275;
  /* 11575266 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11575269 mov ecx, dword ptr [eax*4 + 0x11590e4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11590e4c)));
  /* 11575270 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11575273 jmp 0x11575282 */
  goto L_11575282;
L_11575275:;
  /* 11575275 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11575278 mov eax, dword ptr [edx*4 + 0x11590e80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11590e80)));
  /* 1157527f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11575282:;
  /* 11575282 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11575285 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11575288 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157528b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157528e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11575291:;
  /* 11575291 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575295 jne 0x115752d1 */
  if (!C.zf) goto L_115752d1;
  /* 11575297 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157529a mov dword ptr [0x11590e2c], eax */
  w32((uint32_t)(0x11590e2c), (EAX));
  /* 1157529f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 115752a2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115752a5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 115752a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115752aa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115752ad mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 115752b0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115752b2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115752b8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 115752bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115752bd mov dword ptr [0x11590e30], ecx */
  w32((uint32_t)(0x11590e30), (ECX));
  /* 115752c3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115752c6 mov dword ptr [0x11590e28], edx */
  w32((uint32_t)(0x11590e28), (EDX));
  /* 115752cc jmp 0x11575374 */
  goto L_11575374;
L_115752d1:;
  /* 115752d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115752d4 mov dword ptr [0x11590e3c], eax */
  w32((uint32_t)(0x11590e3c), (EAX));
  /* 115752d9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 115752dc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115752df mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 115752e2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115752e4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115752e7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 115752ea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115752ec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115752f2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 115752f5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115752f7 mov dword ptr [0x11590e40], ecx */
  w32((uint32_t)(0x11590e40), (ECX));
  /* 115752fd mov edx, dword ptr [0x11590d98] */
  EDX = (r32((uint32_t)(0x11590d98)));
  /* 11575303 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11575309 mov eax, dword ptr [0x11590e40] */
  EAX = (r32((uint32_t)(0x11590e40)));
  /* 1157530e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575310 mov dword ptr [0x11590e40], eax */
  w32((uint32_t)(0x11590e40), (EAX));
  /* 11575315 cmp dword ptr [0x11590e40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11590e40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157531c jge 0x11575341 */
  if ((C.sf==C.of)) goto L_11575341;
  /* 1157531e mov ecx, dword ptr [0x11590e40] */
  ECX = (r32((uint32_t)(0x11590e40)));
  /* 11575324 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1157532a mov dword ptr [0x11590e40], ecx */
  w32((uint32_t)(0x11590e40), (ECX));
  /* 11575330 mov edx, dword ptr [0x11590e3c] */
  EDX = (r32((uint32_t)(0x11590e3c)));
  /* 11575336 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575339 mov dword ptr [0x11590e3c], edx */
  w32((uint32_t)(0x11590e3c), (EDX));
  /* 1157533f jmp 0x1157536b */
  goto L_1157536b;
L_11575341:;
  /* 11575341 cmp dword ptr [0x11590e40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11590e40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157534b jl 0x1157536b */
  if ((C.sf!=C.of)) goto L_1157536b;
  /* 1157534d mov eax, dword ptr [0x11590e40] */
  EAX = (r32((uint32_t)(0x11590e40)));
  /* 11575352 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575357 mov dword ptr [0x11590e40], eax */
  w32((uint32_t)(0x11590e40), (EAX));
  /* 1157535c mov ecx, dword ptr [0x11590e3c] */
  ECX = (r32((uint32_t)(0x11590e3c)));
  /* 11575362 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575365 mov dword ptr [0x11590e3c], ecx */
  w32((uint32_t)(0x11590e3c), (ECX));
L_1157536b:;
  /* 1157536b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1157536e mov dword ptr [0x11590e38], edx */
  w32((uint32_t)(0x11590e38), (EDX));
L_11575374:;
  /* 11575374 mov esp, ebp */
  ESP = (EBP);
  /* 11575376 pop ebp */
  EBP = (pop32());
  /* 11575377 ret  */
  ESPCHK(0x11575180u, _esp0);
  ESP += 4; return;
}

/* FUN_10015380 @ 0x11575380 (382 bytes, 135 insns) */
void f_11575380(void) {
  FTRACE(0x11575380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11575380 push ebp */
  push32((uint32_t)(EBP));
  /* 11575381 mov ebp, esp */
  EBP = (ESP);
  /* 11575383 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11575385 push 0x1158d9d8 */
  push32((uint32_t)(0x1158d9d8u));
  /* 1157538a push 0x1156f048 */
  push32((uint32_t)(0x1156f048u));
  /* 1157538f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11575395 push eax */
  push32((uint32_t)(EAX));
  /* 11575396 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1157539d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115753a0 push ebx */
  push32((uint32_t)(EBX));
  /* 115753a1 push esi */
  push32((uint32_t)(ESI));
  /* 115753a2 push edi */
  push32((uint32_t)(EDI));
  /* 115753a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 115753a6 cmp dword ptr [0x115922ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115753ad jne 0x115753f2 */
  if (!C.zf) goto L_115753f2;
  /* 115753af push 0 */
  push32((uint32_t)(0x0u));
  /* 115753b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115753b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 115753b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115753b7 call dword ptr [0x115942e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942e4))), 0x115753bdu);
  /* 115753bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115753bf je 0x115753cd */
  if (C.zf) goto L_115753cd;
  /* 115753c1 mov dword ptr [0x115922ec], 1 */
  w32((uint32_t)(0x115922ec), (0x1u));
  /* 115753cb jmp 0x115753f2 */
  goto L_115753f2;
L_115753cd:;
  /* 115753cd push 0 */
  push32((uint32_t)(0x0u));
  /* 115753cf push 0 */
  push32((uint32_t)(0x0u));
  /* 115753d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 115753d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115753d5 call dword ptr [0x115942fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942fc))), 0x115753dbu);
  /* 115753db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115753dd je 0x115753eb */
  if (C.zf) goto L_115753eb;
  /* 115753df mov dword ptr [0x115922ec], 2 */
  w32((uint32_t)(0x115922ec), (0x2u));
  /* 115753e9 jmp 0x115753f2 */
  goto L_115753f2;
L_115753eb:;
  /* 115753eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115753ed jmp 0x11575501 */
  goto L_11575501;
L_115753f2:;
  /* 115753f2 cmp dword ptr [0x115922ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115922ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115753f9 jne 0x11575416 */
  if (!C.zf) goto L_11575416;
  /* 115753fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 115753fe push eax */
  push32((uint32_t)(EAX));
  /* 115753ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575402 push ecx */
  push32((uint32_t)(ECX));
  /* 11575403 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11575406 push edx */
  push32((uint32_t)(EDX));
  /* 11575407 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157540a push eax */
  push32((uint32_t)(EAX));
  /* 1157540b call dword ptr [0x115942e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942e4))), 0x11575411u);
  /* 11575411 jmp 0x11575501 */
  goto L_11575501;
L_11575416:;
  /* 11575416 cmp dword ptr [0x115922ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115922ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157541d jne 0x115754ff */
  if (!C.zf) goto L_115754ff;
  /* 11575423 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575427 jne 0x11575432 */
  if (!C.zf) goto L_11575432;
  /* 11575429 mov ecx, dword ptr [0x115921a0] */
  ECX = (r32((uint32_t)(0x115921a0)));
  /* 1157542f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11575432:;
  /* 11575432 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575434 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575436 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11575439 push edx */
  push32((uint32_t)(EDX));
  /* 1157543a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157543d push eax */
  push32((uint32_t)(EAX));
  /* 1157543e call dword ptr [0x115942fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942fc))), 0x11575444u);
  /* 11575444 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11575447 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157544b jne 0x11575454 */
  if (!C.zf) goto L_11575454;
  /* 1157544d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157544f jmp 0x11575501 */
  goto L_11575501;
L_11575454:;
  /* 11575454 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1157545b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1157545e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575461 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11575463 call 0x115690e0 */
  push32(0x11575468u); f_115690e0();
  /* 11575468 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1157546b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1157546e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11575471 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11575474 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1157547b jmp 0x11575494 */
  goto L_11575494;
  /* 1157547d mov eax, 1 */
  EAX = (0x1u);
  /* 11575482 ret  */
  ESPCHK(0x11575380u, _esp0);
  ESP += 4; return;
  /* 11575483 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11575486 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1157548d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11575494:;
  /* 11575494 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575498 jne 0x1157549e */
  if (!C.zf) goto L_1157549e;
  /* 1157549a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157549c jmp 0x11575501 */
  goto L_11575501;
L_1157549e:;
  /* 1157549e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115754a1 push edx */
  push32((uint32_t)(EDX));
  /* 115754a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115754a5 push eax */
  push32((uint32_t)(EAX));
  /* 115754a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115754a9 push ecx */
  push32((uint32_t)(ECX));
  /* 115754aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115754ad push edx */
  push32((uint32_t)(EDX));
  /* 115754ae call dword ptr [0x115942fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942fc))), 0x115754b4u);
  /* 115754b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115754b6 jne 0x115754bc */
  if (!C.zf) goto L_115754bc;
  /* 115754b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115754ba jmp 0x11575501 */
  goto L_11575501;
L_115754bc:;
  /* 115754bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115754c0 jne 0x115754dd */
  if (!C.zf) goto L_115754dd;
  /* 115754c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115754c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115754c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115754c8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 115754cb push eax */
  push32((uint32_t)(EAX));
  /* 115754cc push 1 */
  push32((uint32_t)(0x1u));
  /* 115754ce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115754d1 push ecx */
  push32((uint32_t)(ECX));
  /* 115754d2 call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x115754d8u);
  /* 115754d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 115754db jmp 0x115754fa */
  goto L_115754fa;
L_115754dd:;
  /* 115754dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115754e0 push edx */
  push32((uint32_t)(EDX));
  /* 115754e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115754e4 push eax */
  push32((uint32_t)(EAX));
  /* 115754e5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 115754e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115754ea push ecx */
  push32((uint32_t)(ECX));
  /* 115754eb push 1 */
  push32((uint32_t)(0x1u));
  /* 115754ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115754f0 push edx */
  push32((uint32_t)(EDX));
  /* 115754f1 call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x115754f7u);
  /* 115754f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_115754fa:;
  /* 115754fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115754fd jmp 0x11575501 */
  goto L_11575501;
L_115754ff:;
  /* 115754ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11575501:;
  /* 11575501 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11575504 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11575507 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1157550e pop edi */
  EDI = (pop32());
  /* 1157550f pop esi */
  ESI = (pop32());
  /* 11575510 pop ebx */
  EBX = (pop32());
  /* 11575511 mov esp, ebp */
  ESP = (EBP);
  /* 11575513 pop ebp */
  EBP = (pop32());
  /* 11575514 ret  */
  ESPCHK(0x11575380u, _esp0);
  ESP += 4; return;
}

/* FUN_10015520 @ 0x11575520 (398 bytes, 140 insns) */
void f_11575520(void) {
  FTRACE(0x11575520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11575520 push ebp */
  push32((uint32_t)(EBP));
  /* 11575521 mov ebp, esp */
  EBP = (ESP);
  /* 11575523 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11575525 push 0x1158d9e8 */
  push32((uint32_t)(0x1158d9e8u));
  /* 1157552a push 0x1156f048 */
  push32((uint32_t)(0x1156f048u));
  /* 1157552f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11575535 push eax */
  push32((uint32_t)(EAX));
  /* 11575536 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1157553d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575540 push ebx */
  push32((uint32_t)(EBX));
  /* 11575541 push esi */
  push32((uint32_t)(ESI));
  /* 11575542 push edi */
  push32((uint32_t)(EDI));
  /* 11575543 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11575546 cmp dword ptr [0x115922f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157554d jne 0x11575592 */
  if (!C.zf) goto L_11575592;
  /* 1157554f push 0 */
  push32((uint32_t)(0x0u));
  /* 11575551 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575553 push 1 */
  push32((uint32_t)(0x1u));
  /* 11575555 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575557 call dword ptr [0x115942e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942e4))), 0x1157555du);
  /* 1157555d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157555f je 0x1157556d */
  if (C.zf) goto L_1157556d;
  /* 11575561 mov dword ptr [0x115922f0], 1 */
  w32((uint32_t)(0x115922f0), (0x1u));
  /* 1157556b jmp 0x11575592 */
  goto L_11575592;
L_1157556d:;
  /* 1157556d push 0 */
  push32((uint32_t)(0x0u));
  /* 1157556f push 0 */
  push32((uint32_t)(0x0u));
  /* 11575571 push 1 */
  push32((uint32_t)(0x1u));
  /* 11575573 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575575 call dword ptr [0x115942fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942fc))), 0x1157557bu);
  /* 1157557b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1157557d je 0x1157558b */
  if (C.zf) goto L_1157558b;
  /* 1157557f mov dword ptr [0x115922f0], 2 */
  w32((uint32_t)(0x115922f0), (0x2u));
  /* 11575589 jmp 0x11575592 */
  goto L_11575592;
L_1157558b:;
  /* 1157558b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157558d jmp 0x115756b1 */
  goto L_115756b1;
L_11575592:;
  /* 11575592 cmp dword ptr [0x115922f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115922f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575599 jne 0x115755b6 */
  if (!C.zf) goto L_115755b6;
  /* 1157559b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157559e push eax */
  push32((uint32_t)(EAX));
  /* 1157559f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115755a2 push ecx */
  push32((uint32_t)(ECX));
  /* 115755a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115755a6 push edx */
  push32((uint32_t)(EDX));
  /* 115755a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115755aa push eax */
  push32((uint32_t)(EAX));
  /* 115755ab call dword ptr [0x115942fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942fc))), 0x115755b1u);
  /* 115755b1 jmp 0x115756b1 */
  goto L_115756b1;
L_115755b6:;
  /* 115755b6 cmp dword ptr [0x115922f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115922f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115755bd jne 0x115756af */
  if (!C.zf) goto L_115756af;
  /* 115755c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115755c7 jne 0x115755d2 */
  if (!C.zf) goto L_115755d2;
  /* 115755c9 mov ecx, dword ptr [0x115921a0] */
  ECX = (r32((uint32_t)(0x115921a0)));
  /* 115755cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_115755d2:;
  /* 115755d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115755d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115755d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115755d9 push edx */
  push32((uint32_t)(EDX));
  /* 115755da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115755dd push eax */
  push32((uint32_t)(EAX));
  /* 115755de call dword ptr [0x115942e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942e4))), 0x115755e4u);
  /* 115755e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 115755e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115755eb jne 0x115755f4 */
  if (!C.zf) goto L_115755f4;
  /* 115755ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115755ef jmp 0x115756b1 */
  goto L_115756b1;
L_115755f4:;
  /* 115755f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115755fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 115755fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11575600 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575603 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11575605 call 0x115690e0 */
  push32(0x1157560au); f_115690e0();
  /* 1157560a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1157560d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11575610 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11575613 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11575616 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1157561d jmp 0x11575636 */
  goto L_11575636;
  /* 1157561f mov eax, 1 */
  EAX = (0x1u);
  /* 11575624 ret  */
  ESPCHK(0x11575520u, _esp0);
  ESP += 4; return;
  /* 11575625 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11575628 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1157562f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11575636:;
  /* 11575636 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157563a jne 0x11575640 */
  if (!C.zf) goto L_11575640;
  /* 1157563c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157563e jmp 0x115756b1 */
  goto L_115756b1;
L_11575640:;
  /* 11575640 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11575643 push edx */
  push32((uint32_t)(EDX));
  /* 11575644 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11575647 push eax */
  push32((uint32_t)(EAX));
  /* 11575648 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1157564b push ecx */
  push32((uint32_t)(ECX));
  /* 1157564c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157564f push edx */
  push32((uint32_t)(EDX));
  /* 11575650 call dword ptr [0x115942e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942e4))), 0x11575656u);
  /* 11575656 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575658 jne 0x1157565e */
  if (!C.zf) goto L_1157565e;
  /* 1157565a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157565c jmp 0x115756b1 */
  goto L_115756b1;
L_1157565e:;
  /* 1157565e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575662 jne 0x11575686 */
  if (!C.zf) goto L_11575686;
  /* 11575664 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575666 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1157566a push 0 */
  push32((uint32_t)(0x0u));
  /* 1157566c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1157566e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11575671 push eax */
  push32((uint32_t)(EAX));
  /* 11575672 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11575677 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1157567a push ecx */
  push32((uint32_t)(ECX));
  /* 1157567b call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x11575681u);
  /* 11575681 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11575684 jmp 0x115756aa */
  goto L_115756aa;
L_11575686:;
  /* 11575686 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575688 push 0 */
  push32((uint32_t)(0x0u));
  /* 1157568a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1157568d push edx */
  push32((uint32_t)(EDX));
  /* 1157568e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575691 push eax */
  push32((uint32_t)(EAX));
  /* 11575692 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11575694 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11575697 push ecx */
  push32((uint32_t)(ECX));
  /* 11575698 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1157569d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115756a0 push edx */
  push32((uint32_t)(EDX));
  /* 115756a1 call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x115756a7u);
  /* 115756a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_115756aa:;
  /* 115756aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 115756ad jmp 0x115756b1 */
  goto L_115756b1;
L_115756af:;
  /* 115756af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115756b1:;
  /* 115756b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 115756b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115756b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 115756be pop edi */
  EDI = (pop32());
  /* 115756bf pop esi */
  ESI = (pop32());
  /* 115756c0 pop ebx */
  EBX = (pop32());
  /* 115756c1 mov esp, ebp */
  ESP = (EBP);
  /* 115756c3 pop ebp */
  EBP = (pop32());
  /* 115756c4 ret  */
  ESPCHK(0x11575520u, _esp0);
  ESP += 4; return;
}

/* FUN_100156d0 @ 0x115756d0 (11 bytes, 6 insns) */
void f_115756d0(void) {
  FTRACE(0x115756d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115756d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115756d1 mov ebp, esp */
  EBP = (ESP);
  /* 115756d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115756d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115756d9 pop ebp */
  EBP = (pop32());
  /* 115756da ret  */
  ESPCHK(0x115756d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100156e0 @ 0x115756e0 (147 bytes, 43 insns) */
void f_115756e0(void) {
  FTRACE(0x115756e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115756e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115756e1 mov ebp, esp */
  EBP = (ESP);
  /* 115756e3 push ecx */
  push32((uint32_t)(ECX));
  /* 115756e4 cmp dword ptr [0x11592190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115756eb jne 0x11575707 */
  if (!C.zf) goto L_11575707;
  /* 115756ed cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115756f1 jl 0x11575702 */
  if ((C.sf!=C.of)) goto L_11575702;
  /* 115756f3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115756f7 jg 0x11575702 */
  if ((!C.zf&&C.sf==C.of)) goto L_11575702;
  /* 115756f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115756fc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115756ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11575702:;
  /* 11575702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575705 jmp 0x1157576f */
  goto L_1157576f;
L_11575707:;
  /* 11575707 push 0x1159231c */
  push32((uint32_t)(0x1159231cu));
  /* 1157570c call dword ptr [0x115943b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943b4))), 0x11575712u);
  /* 11575712 cmp dword ptr [0x1159230c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159230c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575719 je 0x11575739 */
  if (C.zf) goto L_11575739;
  /* 1157571b push 0x1159231c */
  push32((uint32_t)(0x1159231cu));
  /* 11575720 call dword ptr [0x115943a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943a4))), 0x11575726u);
  /* 11575726 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11575728 call 0x11569940 */
  push32(0x1157572du); f_11569940();
  /* 1157572d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575730 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11575737 jmp 0x11575740 */
  goto L_11575740;
L_11575739:;
  /* 11575739 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11575740:;
  /* 11575740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575743 push ecx */
  push32((uint32_t)(ECX));
  /* 11575744 call 0x11575780 */
  push32(0x11575749u); f_11575780();
  /* 11575749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157574c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1157574f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575753 je 0x11575761 */
  if (C.zf) goto L_11575761;
  /* 11575755 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11575757 call 0x115699e0 */
  push32(0x1157575cu); f_115699e0();
  /* 1157575c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157575f jmp 0x1157576c */
  goto L_1157576c;
L_11575761:;
  /* 11575761 push 0x1159231c */
  push32((uint32_t)(0x1159231cu));
  /* 11575766 call dword ptr [0x115943a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943a4))), 0x1157576cu);
L_1157576c:;
  /* 1157576c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1157576f:;
  /* 1157576f mov esp, ebp */
  ESP = (EBP);
  /* 11575771 pop ebp */
  EBP = (pop32());
  /* 11575772 ret  */
  ESPCHK(0x115756e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015780 @ 0x11575780 (299 bytes, 91 insns) */
void f_11575780(void) {
  FTRACE(0x11575780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11575780 push ebp */
  push32((uint32_t)(EBP));
  /* 11575781 mov ebp, esp */
  EBP = (ESP);
  /* 11575783 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575786 cmp dword ptr [0x11592190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157578d jne 0x115757ac */
  if (!C.zf) goto L_115757ac;
  /* 1157578f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575793 jl 0x115757a4 */
  if ((C.sf!=C.of)) goto L_115757a4;
  /* 11575795 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575799 jg 0x115757a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_115757a4;
  /* 1157579b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157579e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115757a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_115757a4:;
  /* 115757a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115757a7 jmp 0x115758a7 */
  goto L_115758a7;
L_115757ac:;
  /* 115757ac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115757b3 jge 0x115757f3 */
  if ((C.sf==C.of)) goto L_115757f3;
  /* 115757b5 cmp dword ptr [0x1158fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1158fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115757bc jle 0x115757d1 */
  if ((C.zf||C.sf!=C.of)) goto L_115757d1;
  /* 115757be push 1 */
  push32((uint32_t)(0x1u));
  /* 115757c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115757c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115757c4 call 0x1156bf50 */
  push32(0x115757c9u); f_1156bf50();
  /* 115757c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115757cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115757cf jmp 0x115757e5 */
  goto L_115757e5;
L_115757d1:;
  /* 115757d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115757d4 mov eax, dword ptr [0x1158fc98] */
  EAX = (r32((uint32_t)(0x1158fc98)));
  /* 115757d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115757db mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 115757df and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 115757e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_115757e5:;
  /* 115757e5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115757e9 jne 0x115757f3 */
  if (!C.zf) goto L_115757f3;
  /* 115757eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115757ee jmp 0x115758a7 */
  goto L_115758a7;
L_115757f3:;
  /* 115757f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115757f6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 115757f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115757ff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11575805 mov eax, dword ptr [0x1158fc98] */
  EAX = (r32((uint32_t)(0x1158fc98)));
  /* 1157580a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1157580c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11575810 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11575816 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11575818 je 0x1157583c */
  if (C.zf) goto L_1157583c;
  /* 1157581a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157581d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11575820 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11575826 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11575829 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1157582c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 1157582f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11575833 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1157583a jmp 0x1157584d */
  goto L_1157584d;
L_1157583c:;
  /* 1157583c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1157583f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11575842 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11575846 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1157584d:;
  /* 1157584d push 1 */
  push32((uint32_t)(0x1u));
  /* 1157584f push 0 */
  push32((uint32_t)(0x0u));
  /* 11575851 push 3 */
  push32((uint32_t)(0x3u));
  /* 11575853 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11575856 push edx */
  push32((uint32_t)(EDX));
  /* 11575857 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157585a push eax */
  push32((uint32_t)(EAX));
  /* 1157585b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1157585e push ecx */
  push32((uint32_t)(ECX));
  /* 1157585f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11575864 mov edx, dword ptr [0x11592190] */
  EDX = (r32((uint32_t)(0x11592190)));
  /* 1157586a push edx */
  push32((uint32_t)(EDX));
  /* 1157586b call 0x1156e330 */
  push32(0x11575870u); f_1156e330();
  /* 11575870 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11575876 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157587a jne 0x11575881 */
  if (!C.zf) goto L_11575881;
  /* 1157587c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157587f jmp 0x115758a7 */
  goto L_115758a7;
L_11575881:;
  /* 11575881 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575885 jne 0x11575891 */
  if (!C.zf) goto L_11575891;
  /* 11575887 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157588a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1157588f jmp 0x115758a7 */
  goto L_115758a7;
L_11575891:;
  /* 11575891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11575894 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11575899 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1157589c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115758a2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 115758a5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_115758a7:;
  /* 115758a7 mov esp, ebp */
  ESP = (EBP);
  /* 115758a9 pop ebp */
  EBP = (pop32());
  /* 115758aa ret  */
  ESPCHK(0x11575780u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x115758b0 (52 bytes, 19 insns) */
void f_115758b0(void) {
  FTRACE(0x115758b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115758b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115758b4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 115758b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 115758ba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 115758be jne 0x115758c9 */
  if (!C.zf) goto L_115758c9;
  /* 115758c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 115758c4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115758c6 ret 0x10 */
  ESPCHK(0x115758b0u, _esp0);
  ESP += 20; return;
L_115758c9:;
  /* 115758c9 push ebx */
  push32((uint32_t)(EBX));
  /* 115758ca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115758cc mov ebx, eax */
  EBX = (EAX);
  /* 115758ce mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115758d2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115758d6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 115758d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115758dc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 115758de add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115758e0 pop ebx */
  EBX = (pop32());
  /* 115758e1 ret 0x10 */
  ESPCHK(0x115758b0u, _esp0);
  ESP += 20; return;
}

/* FUN_100158f0 @ 0x115758f0 (46 bytes, 18 insns) */
void f_115758f0(void) {
  FTRACE(0x115758f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115758f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115758f1 mov ebp, esp */
  EBP = (ESP);
  /* 115758f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115758f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 115758f6 call 0x11569940 */
  push32(0x115758fbu); f_11569940();
  /* 115758fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115758fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575901 push eax */
  push32((uint32_t)(EAX));
  /* 11575902 call 0x11575920 */
  push32(0x11575907u); f_11575920();
  /* 11575907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157590a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1157590d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1157590f call 0x115699e0 */
  push32(0x11575914u); f_115699e0();
  /* 11575914 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157591a mov esp, ebp */
  ESP = (EBP);
  /* 1157591c pop ebp */
  EBP = (pop32());
  /* 1157591d ret  */
  ESPCHK(0x115758f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11575920 (198 bytes, 69 insns) */
void f_11575920(void) {
  FTRACE(0x11575920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11575920 push ebp */
  push32((uint32_t)(EBP));
  /* 11575921 mov ebp, esp */
  EBP = (ESP);
  /* 11575923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575926 mov eax, dword ptr [0x11591fac] */
  EAX = (r32((uint32_t)(0x11591fac)));
  /* 1157592b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1157592e cmp dword ptr [0x11593aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11593aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575935 jne 0x1157593e */
  if (!C.zf) goto L_1157593e;
  /* 11575937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575939 jmp 0x115759e2 */
  goto L_115759e2;
L_1157593e:;
  /* 1157593e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575942 jne 0x11575966 */
  if (!C.zf) goto L_11575966;
  /* 11575944 cmp dword ptr [0x11591fb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591fb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157594b je 0x11575966 */
  if (C.zf) goto L_11575966;
  /* 1157594d call 0x11575a40 */
  push32(0x11575952u); f_11575a40();
  /* 11575952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575954 je 0x1157595d */
  if (C.zf) goto L_1157595d;
  /* 11575956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575958 jmp 0x115759e2 */
  goto L_115759e2;
L_1157595d:;
  /* 1157595d mov ecx, dword ptr [0x11591fac] */
  ECX = (r32((uint32_t)(0x11591fac)));
  /* 11575963 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11575966:;
  /* 11575966 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157596a je 0x115759e0 */
  if (C.zf) goto L_115759e0;
  /* 1157596c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575970 je 0x115759e0 */
  if (C.zf) goto L_115759e0;
  /* 11575972 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575975 push edx */
  push32((uint32_t)(EDX));
  /* 11575976 call 0x11568d70 */
  push32(0x1157597bu); f_11568d70();
  /* 1157597b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157597e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11575981:;
  /* 11575981 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11575984 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575987 je 0x115759e0 */
  if (C.zf) goto L_115759e0;
  /* 11575989 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157598c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1157598e push edx */
  push32((uint32_t)(EDX));
  /* 1157598f call 0x11568d70 */
  push32(0x11575994u); f_11568d70();
  /* 11575994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575997 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157599a jbe 0x115759d5 */
  if ((C.cf||C.zf)) goto L_115759d5;
  /* 1157599c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157599f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115759a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115759a4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 115759a8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115759ab jne 0x115759d5 */
  if (!C.zf) goto L_115759d5;
  /* 115759ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115759b0 push ecx */
  push32((uint32_t)(ECX));
  /* 115759b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115759b4 push edx */
  push32((uint32_t)(EDX));
  /* 115759b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115759b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115759ba push ecx */
  push32((uint32_t)(ECX));
  /* 115759bb call 0x115759f0 */
  push32(0x115759c0u); f_115759f0();
  /* 115759c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115759c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115759c5 jne 0x115759d5 */
  if (!C.zf) goto L_115759d5;
  /* 115759c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115759ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115759cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115759cf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 115759d3 jmp 0x115759e2 */
  goto L_115759e2;
L_115759d5:;
  /* 115759d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115759d8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115759db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 115759de jmp 0x11575981 */
  goto L_11575981;
L_115759e0:;
  /* 115759e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115759e2:;
  /* 115759e2 mov esp, ebp */
  ESP = (EBP);
  /* 115759e4 pop ebp */
  EBP = (pop32());
  /* 115759e5 ret  */
  ESPCHK(0x11575920u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x115759f0 (79 bytes, 32 insns) */
void f_115759f0(void) {
  FTRACE(0x115759f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115759f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115759f1 mov ebp, esp */
  EBP = (ESP);
  /* 115759f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115759f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115759f8 jne 0x115759fe */
  if (!C.zf) goto L_115759fe;
  /* 115759fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115759fc jmp 0x11575a3b */
  goto L_11575a3b;
L_115759fe:;
  /* 115759fe mov eax, dword ptr [0x11593664] */
  EAX = (r32((uint32_t)(0x11593664)));
  /* 11575a03 push eax */
  push32((uint32_t)(EAX));
  /* 11575a04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575a07 push ecx */
  push32((uint32_t)(ECX));
  /* 11575a08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11575a0b push edx */
  push32((uint32_t)(EDX));
  /* 11575a0c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575a0f push eax */
  push32((uint32_t)(EAX));
  /* 11575a10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11575a14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11575a16 mov edx, dword ptr [0x11593904] */
  EDX = (r32((uint32_t)(0x11593904)));
  /* 11575a1c push edx */
  push32((uint32_t)(EDX));
  /* 11575a1d call 0x11575af0 */
  push32(0x11575a22u); f_11575af0();
  /* 11575a22 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575a25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11575a28 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575a2c jne 0x11575a35 */
  if (!C.zf) goto L_11575a35;
  /* 11575a2e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11575a33 jmp 0x11575a3b */
  goto L_11575a3b;
L_11575a35:;
  /* 11575a35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575a38 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11575a3b:;
  /* 11575a3b mov esp, ebp */
  ESP = (EBP);
  /* 11575a3d pop ebp */
  EBP = (pop32());
  /* 11575a3e ret  */
  ESPCHK(0x115759f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a40 @ 0x11575a40 (174 bytes, 66 insns) */
void f_11575a40(void) {
  FTRACE(0x11575a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11575a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11575a41 mov ebp, esp */
  EBP = (ESP);
  /* 11575a43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575a46 mov eax, dword ptr [0x11591fb4] */
  EAX = (r32((uint32_t)(0x11591fb4)));
  /* 11575a4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11575a4e:;
  /* 11575a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575a51 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575a54 je 0x11575ae8 */
  if (C.zf) goto L_11575ae8;
  /* 11575a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11575a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11575a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11575a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575a62 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11575a64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575a67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11575a69 push eax */
  push32((uint32_t)(EAX));
  /* 11575a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11575a6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11575a6e call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x11575a74u);
  /* 11575a74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11575a77 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575a7b jne 0x11575a82 */
  if (!C.zf) goto L_11575a82;
  /* 11575a7d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11575a80 jmp 0x11575aea */
  goto L_11575aea;
L_11575a82:;
  /* 11575a82 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11575a84 push 0x1158d9f4 */
  push32((uint32_t)(0x1158d9f4u));
  /* 11575a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11575a8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11575a8e push ecx */
  push32((uint32_t)(ECX));
  /* 11575a8f call 0x11565f40 */
  push32(0x11575a94u); f_11565f40();
  /* 11575a94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575a97 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11575a9a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575a9e jne 0x11575aa5 */
  if (!C.zf) goto L_11575aa5;
  /* 11575aa0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11575aa3 jmp 0x11575aea */
  goto L_11575aea;
L_11575aa5:;
  /* 11575aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575aa9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11575aac push edx */
  push32((uint32_t)(EDX));
  /* 11575aad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11575ab0 push eax */
  push32((uint32_t)(EAX));
  /* 11575ab1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11575ab3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575ab6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11575ab8 push edx */
  push32((uint32_t)(EDX));
  /* 11575ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575abb push 1 */
  push32((uint32_t)(0x1u));
  /* 11575abd call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x11575ac3u);
  /* 11575ac3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575ac5 jne 0x11575acc */
  if (!C.zf) goto L_11575acc;
  /* 11575ac7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11575aca jmp 0x11575aea */
  goto L_11575aea;
L_11575acc:;
  /* 11575acc push 0 */
  push32((uint32_t)(0x0u));
  /* 11575ace mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11575ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11575ad2 call 0x11575f40 */
  push32(0x11575ad7u); f_11575f40();
  /* 11575ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575add add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575ae0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11575ae3 jmp 0x11575a4e */
  goto L_11575a4e;
L_11575ae8:;
  /* 11575ae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11575aea:;
  /* 11575aea mov esp, ebp */
  ESP = (EBP);
  /* 11575aec pop ebp */
  EBP = (pop32());
  /* 11575aed ret  */
  ESPCHK(0x11575a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015af0 @ 0x11575af0 (970 bytes, 340 insns) */
void f_11575af0(void) {
  FTRACE(0x11575af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11575af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11575af1 mov ebp, esp */
  EBP = (ESP);
  /* 11575af3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11575af5 push 0x1158da48 */
  push32((uint32_t)(0x1158da48u));
  /* 11575afa push 0x1156f048 */
  push32((uint32_t)(0x1156f048u));
  /* 11575aff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11575b05 push eax */
  push32((uint32_t)(EAX));
  /* 11575b06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11575b0d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575b10 push ebx */
  push32((uint32_t)(EBX));
  /* 11575b11 push esi */
  push32((uint32_t)(ESI));
  /* 11575b12 push edi */
  push32((uint32_t)(EDI));
  /* 11575b13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11575b16 cmp dword ptr [0x115922f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115922f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575b1d jne 0x11575b76 */
  if (!C.zf) goto L_11575b76;
  /* 11575b1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11575b21 push 0x1158d0a0 */
  push32((uint32_t)(0x1158d0a0u));
  /* 11575b26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11575b28 push 0x1158d0a0 */
  push32((uint32_t)(0x1158d0a0u));
  /* 11575b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11575b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11575b31 call dword ptr [0x115942dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942dc))), 0x11575b37u);
  /* 11575b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575b39 je 0x11575b47 */
  if (C.zf) goto L_11575b47;
  /* 11575b3b mov dword ptr [0x115922f4], 1 */
  w32((uint32_t)(0x115922f4), (0x1u));
  /* 11575b45 jmp 0x11575b76 */
  goto L_11575b76;
L_11575b47:;
  /* 11575b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11575b49 push 0x1158d09c */
  push32((uint32_t)(0x1158d09cu));
  /* 11575b4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11575b50 push 0x1158d09c */
  push32((uint32_t)(0x1158d09cu));
  /* 11575b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575b59 call dword ptr [0x115942e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942e0))), 0x11575b5fu);
  /* 11575b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575b61 je 0x11575b6f */
  if (C.zf) goto L_11575b6f;
  /* 11575b63 mov dword ptr [0x115922f4], 2 */
  w32((uint32_t)(0x115922f4), (0x2u));
  /* 11575b6d jmp 0x11575b76 */
  goto L_11575b76;
L_11575b6f:;
  /* 11575b6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575b71 jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575b76:;
  /* 11575b76 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575b7a jle 0x11575b8f */
  if ((C.zf||C.sf!=C.of)) goto L_11575b8f;
  /* 11575b7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11575b7f push eax */
  push32((uint32_t)(EAX));
  /* 11575b80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575b83 push ecx */
  push32((uint32_t)(ECX));
  /* 11575b84 call 0x11575ef0 */
  push32(0x11575b89u); f_11575ef0();
  /* 11575b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575b8c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11575b8f:;
  /* 11575b8f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575b93 jle 0x11575ba8 */
  if ((C.zf||C.sf!=C.of)) goto L_11575ba8;
  /* 11575b95 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11575b98 push edx */
  push32((uint32_t)(EDX));
  /* 11575b99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11575b9c push eax */
  push32((uint32_t)(EAX));
  /* 11575b9d call 0x11575ef0 */
  push32(0x11575ba2u); f_11575ef0();
  /* 11575ba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575ba5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11575ba8:;
  /* 11575ba8 cmp dword ptr [0x115922f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115922f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575baf jne 0x11575bd4 */
  if (!C.zf) goto L_11575bd4;
  /* 11575bb1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11575bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 11575bb5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11575bb8 push edx */
  push32((uint32_t)(EDX));
  /* 11575bb9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11575bbc push eax */
  push32((uint32_t)(EAX));
  /* 11575bbd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575bc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11575bc1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11575bc4 push edx */
  push32((uint32_t)(EDX));
  /* 11575bc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575bc8 push eax */
  push32((uint32_t)(EAX));
  /* 11575bc9 call dword ptr [0x115942e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942e0))), 0x11575bcfu);
  /* 11575bcf jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575bd4:;
  /* 11575bd4 cmp dword ptr [0x115922f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115922f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575bdb jne 0x11575ed2 */
  if (!C.zf) goto L_11575ed2;
  /* 11575be1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575be5 jne 0x11575bf0 */
  if (!C.zf) goto L_11575bf0;
  /* 11575be7 mov ecx, dword ptr [0x115921a0] */
  ECX = (r32((uint32_t)(0x115921a0)));
  /* 11575bed mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11575bf0:;
  /* 11575bf0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575bf4 je 0x11575c00 */
  if (C.zf) goto L_11575c00;
  /* 11575bf6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575bfa jne 0x11575d7c */
  if (!C.zf) goto L_11575d7c;
L_11575c00:;
  /* 11575c00 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11575c03 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c06 jne 0x11575c12 */
  if (!C.zf) goto L_11575c12;
  /* 11575c08 mov eax, 2 */
  EAX = (0x2u);
  /* 11575c0d jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575c12:;
  /* 11575c12 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c16 jle 0x11575c22 */
  if ((C.zf||C.sf!=C.of)) goto L_11575c22;
  /* 11575c18 mov eax, 1 */
  EAX = (0x1u);
  /* 11575c1d jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575c22:;
  /* 11575c22 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c26 jle 0x11575c32 */
  if ((C.zf||C.sf!=C.of)) goto L_11575c32;
  /* 11575c28 mov eax, 3 */
  EAX = (0x3u);
  /* 11575c2d jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575c32:;
  /* 11575c32 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11575c35 push eax */
  push32((uint32_t)(EAX));
  /* 11575c36 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11575c39 push ecx */
  push32((uint32_t)(ECX));
  /* 11575c3a call dword ptr [0x11594338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594338))), 0x11575c40u);
  /* 11575c40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575c42 jne 0x11575c4b */
  if (!C.zf) goto L_11575c4b;
  /* 11575c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575c46 jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575c4b:;
  /* 11575c4b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c4f jne 0x11575c57 */
  if (!C.zf) goto L_11575c57;
  /* 11575c51 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c55 je 0x11575c84 */
  if (C.zf) goto L_11575c84;
L_11575c57:;
  /* 11575c57 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c5b jne 0x11575c63 */
  if (!C.zf) goto L_11575c63;
  /* 11575c5d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c61 je 0x11575c84 */
  if (C.zf) goto L_11575c84;
L_11575c63:;
  /* 11575c63 push 0x1158da08 */
  push32((uint32_t)(0x1158da08u));
  /* 11575c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11575c6a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11575c6f push 0x1158da00 */
  push32((uint32_t)(0x1158da00u));
  /* 11575c74 push 2 */
  push32((uint32_t)(0x2u));
  /* 11575c76 call 0x11565000 */
  push32(0x11575c7bu); f_11565000();
  /* 11575c7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575c7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c81 jne 0x11575c84 */
  if (!C.zf) goto L_11575c84;
  /* 11575c83 int3  */
  x86_unimpl("int3 @ 0x11575c83");
L_11575c84:;
  /* 11575c84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11575c86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11575c88 jne 0x11575c4b */
  if (!C.zf) goto L_11575c4b;
  /* 11575c8a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c8e jle 0x11575d03 */
  if ((C.zf||C.sf!=C.of)) goto L_11575d03;
  /* 11575c90 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575c94 jae 0x11575ca0 */
  if (!C.cf) goto L_11575ca0;
  /* 11575c96 mov eax, 3 */
  EAX = (0x3u);
  /* 11575c9b jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575ca0:;
  /* 11575ca0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11575ca3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11575ca6 jmp 0x11575cb1 */
  goto L_11575cb1;
L_11575ca8:;
  /* 11575ca8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575cab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575cae mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11575cb1:;
  /* 11575cb1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575cb6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11575cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575cba je 0x11575cf9 */
  if (C.zf) goto L_11575cf9;
  /* 11575cbc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575cbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11575cc1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11575cc4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11575cc6 je 0x11575cf9 */
  if (C.zf) goto L_11575cf9;
  /* 11575cc8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575ccb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11575ccd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11575ccf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575cd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575cd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11575cd6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575cd8 jl 0x11575cf7 */
  if ((C.sf!=C.of)) goto L_11575cf7;
  /* 11575cda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575cdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11575cdf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11575ce1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575ce4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11575ce6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11575ce9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575ceb jg 0x11575cf7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11575cf7;
  /* 11575ced mov eax, 2 */
  EAX = (0x2u);
  /* 11575cf2 jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575cf7:;
  /* 11575cf7 jmp 0x11575ca8 */
  goto L_11575ca8;
L_11575cf9:;
  /* 11575cf9 mov eax, 3 */
  EAX = (0x3u);
  /* 11575cfe jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575d03:;
  /* 11575d03 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575d07 jle 0x11575d7c */
  if ((C.zf||C.sf!=C.of)) goto L_11575d7c;
  /* 11575d09 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575d0d jae 0x11575d19 */
  if (!C.cf) goto L_11575d19;
  /* 11575d0f mov eax, 1 */
  EAX = (0x1u);
  /* 11575d14 jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575d19:;
  /* 11575d19 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11575d1c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11575d1f jmp 0x11575d2a */
  goto L_11575d2a;
L_11575d21:;
  /* 11575d21 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575d24 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575d27 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11575d2a:;
  /* 11575d2a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575d2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11575d2f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11575d31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11575d33 je 0x11575d72 */
  if (C.zf) goto L_11575d72;
  /* 11575d35 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575d38 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11575d3a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11575d3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11575d3f je 0x11575d72 */
  if (C.zf) goto L_11575d72;
  /* 11575d41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11575d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575d46 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11575d48 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575d4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11575d4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11575d4f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575d51 jl 0x11575d70 */
  if ((C.sf!=C.of)) goto L_11575d70;
  /* 11575d53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11575d56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11575d58 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11575d5a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11575d5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575d5f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11575d62 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575d64 jg 0x11575d70 */
  if ((!C.zf&&C.sf==C.of)) goto L_11575d70;
  /* 11575d66 mov eax, 2 */
  EAX = (0x2u);
  /* 11575d6b jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575d70:;
  /* 11575d70 jmp 0x11575d21 */
  goto L_11575d21;
L_11575d72:;
  /* 11575d72 mov eax, 1 */
  EAX = (0x1u);
  /* 11575d77 jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575d7c:;
  /* 11575d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11575d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11575d80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11575d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11575d84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575d87 push edx */
  push32((uint32_t)(EDX));
  /* 11575d88 push 9 */
  push32((uint32_t)(0x9u));
  /* 11575d8a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11575d8d push eax */
  push32((uint32_t)(EAX));
  /* 11575d8e call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x11575d94u);
  /* 11575d94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11575d97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575d9b jne 0x11575da4 */
  if (!C.zf) goto L_11575da4;
  /* 11575d9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575d9f jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575da4:;
  /* 11575da4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11575dab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11575dae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11575db0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575db3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11575db5 call 0x115690e0 */
  push32(0x11575dbau); f_115690e0();
  /* 11575dba mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11575dbd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11575dc0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11575dc3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11575dc6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11575dcd jmp 0x11575de6 */
  goto L_11575de6;
  /* 11575dcf mov eax, 1 */
  EAX = (0x1u);
  /* 11575dd4 ret  */
  ESPCHK(0x11575af0u, _esp0);
  ESP += 4; return;
  /* 11575dd5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11575dd8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11575ddf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11575de6:;
  /* 11575de6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575dea jne 0x11575df3 */
  if (!C.zf) goto L_11575df3;
  /* 11575dec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575dee jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575df3:;
  /* 11575df3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11575df6 push edx */
  push32((uint32_t)(EDX));
  /* 11575df7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11575dfa push eax */
  push32((uint32_t)(EAX));
  /* 11575dfb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11575dfe push ecx */
  push32((uint32_t)(ECX));
  /* 11575dff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11575e02 push edx */
  push32((uint32_t)(EDX));
  /* 11575e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11575e05 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11575e08 push eax */
  push32((uint32_t)(EAX));
  /* 11575e09 call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x11575e0fu);
  /* 11575e0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575e11 jne 0x11575e1a */
  if (!C.zf) goto L_11575e1a;
  /* 11575e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575e15 jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575e1a:;
  /* 11575e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11575e1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11575e1e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11575e21 push ecx */
  push32((uint32_t)(ECX));
  /* 11575e22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11575e25 push edx */
  push32((uint32_t)(EDX));
  /* 11575e26 push 9 */
  push32((uint32_t)(0x9u));
  /* 11575e28 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11575e2b push eax */
  push32((uint32_t)(EAX));
  /* 11575e2c call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x11575e32u);
  /* 11575e32 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11575e35 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575e39 jne 0x11575e42 */
  if (!C.zf) goto L_11575e42;
  /* 11575e3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575e3d jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575e42:;
  /* 11575e42 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11575e49 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11575e4c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11575e4e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575e51 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11575e53 call 0x115690e0 */
  push32(0x11575e58u); f_115690e0();
  /* 11575e58 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 11575e5b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11575e5e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11575e61 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11575e64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11575e6b jmp 0x11575e84 */
  goto L_11575e84;
  /* 11575e6d mov eax, 1 */
  EAX = (0x1u);
  /* 11575e72 ret  */
  ESPCHK(0x11575af0u, _esp0);
  ESP += 4; return;
  /* 11575e73 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11575e76 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11575e7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11575e84:;
  /* 11575e84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575e88 jne 0x11575e8e */
  if (!C.zf) goto L_11575e8e;
  /* 11575e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575e8c jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575e8e:;
  /* 11575e8e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11575e91 push edx */
  push32((uint32_t)(EDX));
  /* 11575e92 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11575e95 push eax */
  push32((uint32_t)(EAX));
  /* 11575e96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11575e99 push ecx */
  push32((uint32_t)(ECX));
  /* 11575e9a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11575e9d push edx */
  push32((uint32_t)(EDX));
  /* 11575e9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11575ea0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11575ea3 push eax */
  push32((uint32_t)(EAX));
  /* 11575ea4 call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x11575eaau);
  /* 11575eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575eac jne 0x11575eb2 */
  if (!C.zf) goto L_11575eb2;
  /* 11575eae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575eb0 jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575eb2:;
  /* 11575eb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11575eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 11575eb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11575eb9 push edx */
  push32((uint32_t)(EDX));
  /* 11575eba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11575ebd push eax */
  push32((uint32_t)(EAX));
  /* 11575ebe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11575ec1 push ecx */
  push32((uint32_t)(ECX));
  /* 11575ec2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11575ec5 push edx */
  push32((uint32_t)(EDX));
  /* 11575ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575ec9 push eax */
  push32((uint32_t)(EAX));
  /* 11575eca call dword ptr [0x115942dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942dc))), 0x11575ed0u);
  /* 11575ed0 jmp 0x11575ed4 */
  goto L_11575ed4;
L_11575ed2:;
  /* 11575ed2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11575ed4:;
  /* 11575ed4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11575ed7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11575eda mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11575ee1 pop edi */
  EDI = (pop32());
  /* 11575ee2 pop esi */
  ESI = (pop32());
  /* 11575ee3 pop ebx */
  EBX = (pop32());
  /* 11575ee4 mov esp, ebp */
  ESP = (EBP);
  /* 11575ee6 pop ebp */
  EBP = (pop32());
  /* 11575ee7 ret  */
  ESPCHK(0x11575af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ef0 @ 0x11575ef0 (80 bytes, 32 insns) */
void f_11575ef0(void) {
  FTRACE(0x11575ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11575ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11575ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11575ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575ef6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11575ef9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11575efc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575eff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11575f02:;
  /* 11575f02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11575f05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11575f08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575f0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11575f0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11575f10 je 0x11575f27 */
  if (C.zf) goto L_11575f27;
  /* 11575f12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575f15 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11575f18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11575f1a je 0x11575f27 */
  if (C.zf) goto L_11575f27;
  /* 11575f1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575f1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11575f22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11575f25 jmp 0x11575f02 */
  goto L_11575f02;
L_11575f27:;
  /* 11575f27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575f2a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11575f2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11575f2f jne 0x11575f39 */
  if (!C.zf) goto L_11575f39;
  /* 11575f31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11575f34 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575f37 jmp 0x11575f3c */
  goto L_11575f3c;
L_11575f39:;
  /* 11575f39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11575f3c:;
  /* 11575f3c mov esp, ebp */
  ESP = (EBP);
  /* 11575f3e pop ebp */
  EBP = (pop32());
  /* 11575f3f ret  */
  ESPCHK(0x11575ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f40 @ 0x11575f40 (736 bytes, 224 insns) */
void f_11575f40(void) {
  FTRACE(0x11575f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11575f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11575f41 mov ebp, esp */
  EBP = (ESP);
  /* 11575f43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575f46 push esi */
  push32((uint32_t)(ESI));
  /* 11575f47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575f4b je 0x11575f6c */
  if (C.zf) goto L_11575f6c;
  /* 11575f4d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11575f4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575f52 push eax */
  push32((uint32_t)(EAX));
  /* 11575f53 call 0x11576390 */
  push32(0x11575f58u); f_11576390();
  /* 11575f58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575f5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11575f5e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575f62 je 0x11575f6c */
  if (C.zf) goto L_11575f6c;
  /* 11575f64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11575f67 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575f6a jne 0x11575f74 */
  if (!C.zf) goto L_11575f74;
L_11575f6c:;
  /* 11575f6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11575f6f jmp 0x1157621b */
  goto L_1157621b;
L_11575f74:;
  /* 11575f74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11575f77 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11575f7b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11575f7d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11575f7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11575f80 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11575f83 mov ecx, dword ptr [0x11591fac] */
  ECX = (r32((uint32_t)(0x11591fac)));
  /* 11575f89 cmp ecx, dword ptr [0x11591fb0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11591fb0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575f8f jne 0x11575fa5 */
  if (!C.zf) goto L_11575fa5;
  /* 11575f91 mov edx, dword ptr [0x11591fac] */
  EDX = (r32((uint32_t)(0x11591fac)));
  /* 11575f97 push edx */
  push32((uint32_t)(EDX));
  /* 11575f98 call 0x115762a0 */
  push32(0x11575f9du); f_115762a0();
  /* 11575f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11575fa0 mov dword ptr [0x11591fac], eax */
  w32((uint32_t)(0x11591fac), (EAX));
L_11575fa5:;
  /* 11575fa5 cmp dword ptr [0x11591fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575fac jne 0x11576065 */
  if (!C.zf) goto L_11576065;
  /* 11575fb2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575fb6 je 0x11575fd7 */
  if (C.zf) goto L_11575fd7;
  /* 11575fb8 cmp dword ptr [0x11591fb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591fb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575fbf je 0x11575fd7 */
  if (C.zf) goto L_11575fd7;
  /* 11575fc1 call 0x11575a40 */
  push32(0x11575fc6u); f_11575a40();
  /* 11575fc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11575fc8 je 0x11575fd2 */
  if (C.zf) goto L_11575fd2;
  /* 11575fca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11575fcd jmp 0x1157621b */
  goto L_1157621b;
L_11575fd2:;
  /* 11575fd2 jmp 0x11576065 */
  goto L_11576065;
L_11575fd7:;
  /* 11575fd7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575fdb je 0x11575fe4 */
  if (C.zf) goto L_11575fe4;
  /* 11575fdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11575fdf jmp 0x1157621b */
  goto L_1157621b;
L_11575fe4:;
  /* 11575fe4 cmp dword ptr [0x11591fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11575feb jne 0x11576024 */
  if (!C.zf) goto L_11576024;
  /* 11575fed push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11575ff2 push 0x1158da60 */
  push32((uint32_t)(0x1158da60u));
  /* 11575ff7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11575ff9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11575ffb call 0x11565f40 */
  push32(0x11576000u); f_11565f40();
  /* 11576000 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11576003 mov dword ptr [0x11591fac], eax */
  w32((uint32_t)(0x11591fac), (EAX));
  /* 11576008 cmp dword ptr [0x11591fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157600f jne 0x11576019 */
  if (!C.zf) goto L_11576019;
  /* 11576011 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11576014 jmp 0x1157621b */
  goto L_1157621b;
L_11576019:;
  /* 11576019 mov eax, dword ptr [0x11591fac] */
  EAX = (r32((uint32_t)(0x11591fac)));
  /* 1157601e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11576024:;
  /* 11576024 cmp dword ptr [0x11591fb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591fb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157602b jne 0x11576065 */
  if (!C.zf) goto L_11576065;
  /* 1157602d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11576032 push 0x1158da60 */
  push32((uint32_t)(0x1158da60u));
  /* 11576037 push 2 */
  push32((uint32_t)(0x2u));
  /* 11576039 push 4 */
  push32((uint32_t)(0x4u));
  /* 1157603b call 0x11565f40 */
  push32(0x11576040u); f_11565f40();
  /* 11576040 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11576043 mov dword ptr [0x11591fb4], eax */
  w32((uint32_t)(0x11591fb4), (EAX));
  /* 11576048 cmp dword ptr [0x11591fb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591fb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157604f jne 0x11576059 */
  if (!C.zf) goto L_11576059;
  /* 11576051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11576054 jmp 0x1157621b */
  goto L_1157621b;
L_11576059:;
  /* 11576059 mov ecx, dword ptr [0x11591fb4] */
  ECX = (r32((uint32_t)(0x11591fb4)));
  /* 1157605f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11576065:;
  /* 11576065 mov edx, dword ptr [0x11591fac] */
  EDX = (r32((uint32_t)(0x11591fac)));
  /* 1157606b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1157606e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11576071 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11576074 push eax */
  push32((uint32_t)(EAX));
  /* 11576075 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11576078 push ecx */
  push32((uint32_t)(ECX));
  /* 11576079 call 0x11576220 */
  push32(0x1157607eu); f_11576220();
  /* 1157607e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11576081 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11576084 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576088 jl 0x11576121 */
  if ((C.sf!=C.of)) goto L_11576121;
  /* 1157608e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11576091 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576094 je 0x11576121 */
  if (C.zf) goto L_11576121;
  /* 1157609a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157609e je 0x11576113 */
  if (C.zf) goto L_11576113;
  /* 115760a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 115760a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115760a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115760a8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 115760ab push edx */
  push32((uint32_t)(EDX));
  /* 115760ac call 0x115669d0 */
  push32(0x115760b1u); f_115669d0();
  /* 115760b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115760b4 jmp 0x115760bf */
  goto L_115760bf;
L_115760b6:;
  /* 115760b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115760b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115760bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115760bf:;
  /* 115760bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115760c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115760c5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115760c9 je 0x115760e0 */
  if (C.zf) goto L_115760e0;
  /* 115760cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115760ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115760d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115760d4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 115760d7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 115760db mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 115760de jmp 0x115760b6 */
  goto L_115760b6;
L_115760e0:;
  /* 115760e0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 115760e5 push 0x1158da60 */
  push32((uint32_t)(0x1158da60u));
  /* 115760ea push 2 */
  push32((uint32_t)(0x2u));
  /* 115760ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115760ef shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 115760f2 push eax */
  push32((uint32_t)(EAX));
  /* 115760f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115760f6 push ecx */
  push32((uint32_t)(ECX));
  /* 115760f7 call 0x115663d0 */
  push32(0x115760fcu); f_115663d0();
  /* 115760fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115760ff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11576102 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576106 je 0x11576111 */
  if (C.zf) goto L_11576111;
  /* 11576108 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157610b mov dword ptr [0x11591fac], edx */
  w32((uint32_t)(0x11591fac), (EDX));
L_11576111:;
  /* 11576111 jmp 0x1157611f */
  goto L_1157611f;
L_11576113:;
  /* 11576113 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11576116 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11576119 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157611c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_1157611f:;
  /* 1157611f jmp 0x11576194 */
  goto L_11576194;
L_11576121:;
  /* 11576121 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576125 jne 0x1157618d */
  if (!C.zf) goto L_1157618d;
  /* 11576127 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157612b jge 0x11576135 */
  if ((C.sf==C.of)) goto L_11576135;
  /* 1157612d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11576130 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11576132 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11576135:;
  /* 11576135 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1157613a push 0x1158da60 */
  push32((uint32_t)(0x1158da60u));
  /* 1157613f push 2 */
  push32((uint32_t)(0x2u));
  /* 11576141 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11576144 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1157614b push edx */
  push32((uint32_t)(EDX));
  /* 1157614c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157614f push eax */
  push32((uint32_t)(EAX));
  /* 11576150 call 0x115663d0 */
  push32(0x11576155u); f_115663d0();
  /* 11576155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11576158 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1157615b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157615f jne 0x11576169 */
  if (!C.zf) goto L_11576169;
  /* 11576161 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11576164 jmp 0x1157621b */
  goto L_1157621b;
L_11576169:;
  /* 11576169 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157616c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157616f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11576172 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11576175 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11576178 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157617b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11576183 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11576186 mov dword ptr [0x11591fac], eax */
  w32((uint32_t)(0x11591fac), (EAX));
  /* 1157618b jmp 0x11576194 */
  goto L_11576194;
L_1157618d:;
  /* 1157618d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1157618f jmp 0x1157621b */
  goto L_1157621b;
L_11576194:;
  /* 11576194 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576198 je 0x11576219 */
  if (C.zf) goto L_11576219;
  /* 1157619a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1157619f push 0x1158da60 */
  push32((uint32_t)(0x1158da60u));
  /* 115761a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 115761a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115761a9 push ecx */
  push32((uint32_t)(ECX));
  /* 115761aa call 0x11568d70 */
  push32(0x115761afu); f_11568d70();
  /* 115761af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115761b2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115761b5 push eax */
  push32((uint32_t)(EAX));
  /* 115761b6 call 0x11565f40 */
  push32(0x115761bbu); f_11565f40();
  /* 115761bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115761be mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115761c1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115761c5 je 0x11576219 */
  if (C.zf) goto L_11576219;
  /* 115761c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115761ca push edx */
  push32((uint32_t)(EDX));
  /* 115761cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115761ce push eax */
  push32((uint32_t)(EAX));
  /* 115761cf call 0x11568ef0 */
  push32(0x115761d4u); f_11568ef0();
  /* 115761d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115761d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115761da sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115761dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115761e0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115761e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115761e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115761e8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 115761eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115761ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115761f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115761f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115761f7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 115761f9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115761fb not edx */
  EDX = (~(EDX));
  /* 115761fd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11576200 push edx */
  push32((uint32_t)(EDX));
  /* 11576201 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11576204 push eax */
  push32((uint32_t)(EAX));
  /* 11576205 call dword ptr [0x115942d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115942d8))), 0x1157620bu);
  /* 1157620b push 2 */
  push32((uint32_t)(0x2u));
  /* 1157620d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11576210 push ecx */
  push32((uint32_t)(ECX));
  /* 11576211 call 0x115669d0 */
  push32(0x11576216u); f_115669d0();
  /* 11576216 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11576219:;
  /* 11576219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1157621b:;
  /* 1157621b pop esi */
  ESI = (pop32());
  /* 1157621c mov esp, ebp */
  ESP = (EBP);
  /* 1157621e pop ebp */
  EBP = (pop32());
  /* 1157621f ret  */
  ESPCHK(0x11575f40u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11576220 (124 bytes, 47 insns) */
void f_11576220(void) {
  FTRACE(0x11576220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11576220 push ebp */
  push32((uint32_t)(EBP));
  /* 11576221 mov ebp, esp */
  EBP = (ESP);
  /* 11576223 push ecx */
  push32((uint32_t)(ECX));
  /* 11576224 mov eax, dword ptr [0x11591fac] */
  EAX = (r32((uint32_t)(0x11591fac)));
  /* 11576229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1157622c jmp 0x11576237 */
  goto L_11576237;
L_1157622e:;
  /* 1157622e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11576231 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11576234 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11576237:;
  /* 11576237 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157623a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157623d je 0x1157628a */
  if (C.zf) goto L_1157628a;
  /* 1157623f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11576242 push eax */
  push32((uint32_t)(EAX));
  /* 11576243 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11576246 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11576248 push edx */
  push32((uint32_t)(EDX));
  /* 11576249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157624c push eax */
  push32((uint32_t)(EAX));
  /* 1157624d call 0x115759f0 */
  push32(0x11576252u); f_115759f0();
  /* 11576252 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11576255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11576257 jne 0x11576288 */
  if (!C.zf) goto L_11576288;
  /* 11576259 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157625c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1157625e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11576261 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11576265 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576268 je 0x1157627a */
  if (C.zf) goto L_1157627a;
  /* 1157626a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157626d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1157626f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11576272 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11576276 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11576278 jne 0x11576288 */
  if (!C.zf) goto L_11576288;
L_1157627a:;
  /* 1157627a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157627d sub eax, dword ptr [0x11591fac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11591fac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11576283 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11576286 jmp 0x11576298 */
  goto L_11576298;
L_11576288:;
  /* 11576288 jmp 0x1157622e */
  goto L_1157622e;
L_1157628a:;
  /* 1157628a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157628d sub eax, dword ptr [0x11591fac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11591fac))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11576293 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11576296 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11576298:;
  /* 11576298 mov esp, ebp */
  ESP = (EBP);
  /* 1157629a pop ebp */
  EBP = (pop32());
  /* 1157629b ret  */
  ESPCHK(0x11576220u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x115762a0 (238 bytes, 80 insns) */
void f_115762a0(void) {
  FTRACE(0x115762a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115762a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115762a1 mov ebp, esp */
  EBP = (ESP);
  /* 115762a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115762a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 115762ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115762b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115762b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115762b7 jne 0x115762c0 */
  if (!C.zf) goto L_115762c0;
  /* 115762b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115762bb jmp 0x1157638a */
  goto L_1157638a;
L_115762c0:;
  /* 115762c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115762c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115762c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115762c8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115762cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115762ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115762d0 je 0x115762dd */
  if (C.zf) goto L_115762dd;
  /* 115762d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115762d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115762d8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115762db jmp 0x115762c0 */
  goto L_115762c0;
L_115762dd:;
  /* 115762dd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 115762e2 push 0x1158da60 */
  push32((uint32_t)(0x1158da60u));
  /* 115762e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 115762e9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115762ec lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 115762f3 push eax */
  push32((uint32_t)(EAX));
  /* 115762f4 call 0x11565f40 */
  push32(0x115762f9u); f_11565f40();
  /* 115762f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115762fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115762ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11576302 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11576305 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576309 jne 0x11576315 */
  if (!C.zf) goto L_11576315;
  /* 1157630b push 9 */
  push32((uint32_t)(0x9u));
  /* 1157630d call 0x11564eb0 */
  push32(0x11576312u); f_11564eb0();
  /* 11576312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11576315:;
  /* 11576315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11576318 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1157631b:;
  /* 1157631b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157631e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576321 je 0x1157637e */
  if (C.zf) goto L_1157637e;
  /* 11576323 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11576328 push 0x1158da60 */
  push32((uint32_t)(0x1158da60u));
  /* 1157632d push 2 */
  push32((uint32_t)(0x2u));
  /* 1157632f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11576332 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11576334 push edx */
  push32((uint32_t)(EDX));
  /* 11576335 call 0x11568d70 */
  push32(0x1157633au); f_11568d70();
  /* 1157633a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157633d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11576340 push eax */
  push32((uint32_t)(EAX));
  /* 11576341 call 0x11565f40 */
  push32(0x11576346u); f_11565f40();
  /* 11576346 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11576349 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157634c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1157634e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11576351 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576354 je 0x1157636a */
  if (C.zf) goto L_1157636a;
  /* 11576356 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11576359 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1157635b push ecx */
  push32((uint32_t)(ECX));
  /* 1157635c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1157635f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11576361 push eax */
  push32((uint32_t)(EAX));
  /* 11576362 call 0x11568ef0 */
  push32(0x11576367u); f_11568ef0();
  /* 11576367 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1157636a:;
  /* 1157636a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1157636d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11576370 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11576373 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11576376 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11576379 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1157637c jmp 0x1157631b */
  goto L_1157631b;
L_1157637e:;
  /* 1157637e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11576381 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11576387 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1157638a:;
  /* 1157638a mov esp, ebp */
  ESP = (EBP);
  /* 1157638c pop ebp */
  EBP = (pop32());
  /* 1157638d ret  */
  ESPCHK(0x115762a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016390 @ 0x11576390 (237 bytes, 81 insns) */
void f_11576390(void) {
  FTRACE(0x11576390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11576390 push ebp */
  push32((uint32_t)(EBP));
  /* 11576391 mov ebp, esp */
  EBP = (ESP);
  /* 11576393 push ecx */
  push32((uint32_t)(ECX));
  /* 11576394 cmp dword ptr [0x115936ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115936ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1157639b jne 0x115763b2 */
  if (!C.zf) goto L_115763b2;
  /* 1157639d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115763a0 push eax */
  push32((uint32_t)(EAX));
  /* 115763a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115763a4 push ecx */
  push32((uint32_t)(ECX));
  /* 115763a5 call 0x11576490 */
  push32(0x115763aau); f_11576490();
  /* 115763aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115763ad jmp 0x11576479 */
  goto L_11576479;
L_115763b2:;
  /* 115763b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 115763b4 call 0x11569940 */
  push32(0x115763b9u); f_11569940();
  /* 115763b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115763bc jmp 0x115763c7 */
  goto L_115763c7;
L_115763be:;
  /* 115763be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115763c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115763c4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_115763c7:;
  /* 115763c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115763ca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 115763ce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 115763d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115763d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115763db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115763dd je 0x1157645b */
  if (C.zf) goto L_1157645b;
  /* 115763df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115763e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 115763e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115763e9 mov cl, byte ptr [eax + 0x11593801] */
  CL = (r8((uint32_t)(EAX + 0x11593801)));
  /* 115763ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 115763f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115763f4 je 0x11576446 */
  if (C.zf) goto L_11576446;
  /* 115763f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115763f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115763fc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 115763ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11576402 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11576404 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11576406 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11576408 jne 0x11576418 */
  if (!C.zf) goto L_11576418;
  /* 1157640a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1157640c call 0x115699e0 */
  push32(0x11576411u); f_115699e0();
  /* 11576411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11576414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11576416 jmp 0x11576479 */
  goto L_11576479;
L_11576418:;
  /* 11576418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1157641b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11576421 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11576424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11576427 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11576429 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1157642b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1157642d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576430 jne 0x11576444 */
  if (!C.zf) goto L_11576444;
  /* 11576432 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11576434 call 0x115699e0 */
  push32(0x11576439u); f_115699e0();
  /* 11576439 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1157643c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1157643f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11576442 jmp 0x11576479 */
  goto L_11576479;
L_11576444:;
  /* 11576444 jmp 0x11576456 */
  goto L_11576456;
L_11576446:;
  /* 11576446 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11576449 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1157644f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576452 jne 0x11576456 */
  if (!C.zf) goto L_11576456;
  /* 11576454 jmp 0x1157645b */
  goto L_1157645b;
L_11576456:;
  /* 11576456 jmp 0x115763be */
  goto L_115763be;
L_1157645b:;
  /* 1157645b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1157645d call 0x115699e0 */
  push32(0x11576462u); f_115699e0();
  /* 11576462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11576465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11576468 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1157646d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11576470 jne 0x11576477 */
  if (!C.zf) goto L_11576477;
  /* 11576472 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11576475 jmp 0x11576479 */
  goto L_11576479;
L_11576477:;
  /* 11576477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11576479:;
  /* 11576479 mov esp, ebp */
  ESP = (EBP);
  /* 1157647b pop ebp */
  EBP = (pop32());
  /* 1157647c ret  */
  ESPCHK(0x11576390u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11576490 (193 bytes, 87 insns) */
void f_11576490(void) {
  FTRACE(0x11576490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11576490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11576492 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11576496 push ebx */
  push32((uint32_t)(EBX));
  /* 11576497 mov ebx, eax */
  EBX = (EAX);
  /* 11576499 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1157649c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 115764a0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 115764a6 je 0x115764bb */
  if (C.zf) goto L_115764bb;
L_115764a8:;
  /* 115764a8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 115764aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 115764ab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 115764ad je 0x11576480 */
  if (C.zf) { jmp_ind(0x11576480u); return; }
  /* 115764af test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 115764b1 je 0x11576504 */
  if (C.zf) goto L_11576504;
  /* 115764b3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 115764b9 jne 0x115764a8 */
  if (!C.zf) goto L_115764a8;
L_115764bb:;
  /* 115764bb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 115764bd push edi */
  push32((uint32_t)(EDI));
  /* 115764be mov eax, ebx */
  EAX = (EBX);
  /* 115764c0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 115764c3 push esi */
  push32((uint32_t)(ESI));
  /* 115764c4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_115764c6:;
  /* 115764c6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 115764c8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 115764cd mov eax, ecx */
  EAX = (ECX);
  /* 115764cf mov esi, edi */
  ESI = (EDI);
  /* 115764d1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 115764d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 115764d5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115764d7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115764da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115764dd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 115764df xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 115764e1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115764e4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 115764ea jne 0x11576508 */
  if (!C.zf) goto L_11576508;
  /* 115764ec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 115764f1 je 0x115764c6 */
  if (C.zf) goto L_115764c6;
  /* 115764f3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 115764f8 jne 0x11576502 */
  if (!C.zf) goto L_11576502;
  /* 115764fa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11576500 jne 0x115764c6 */
  if (!C.zf) goto L_115764c6;
L_11576502:;
  /* 11576502 pop esi */
  ESI = (pop32());
  /* 11576503 pop edi */
  EDI = (pop32());
L_11576504:;
  /* 11576504 pop ebx */
  EBX = (pop32());
  /* 11576505 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11576507 ret  */
  ESPCHK(0x11576490u, _esp0);
  ESP += 4; return;
L_11576508:;
  /* 11576508 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1157650b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1157650d je 0x11576545 */
  if (C.zf) goto L_11576545;
  /* 1157650f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11576511 je 0x11576502 */
  if (C.zf) goto L_11576502;
  /* 11576513 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11576515 je 0x1157653e */
  if (C.zf) goto L_1157653e;
  /* 11576517 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11576519 je 0x11576502 */
  if (C.zf) goto L_11576502;
  /* 1157651b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1157651e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11576520 je 0x11576537 */
  if (C.zf) goto L_11576537;
  /* 11576522 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11576524 je 0x11576502 */
  if (C.zf) goto L_11576502;
  /* 11576526 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11576528 je 0x11576530 */
  if (C.zf) goto L_11576530;
  /* 1157652a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1157652c je 0x11576502 */
  if (C.zf) goto L_11576502;
  /* 1157652e jmp 0x115764c6 */
  goto L_115764c6;
L_11576530:;
  /* 11576530 pop esi */
  ESI = (pop32());
  /* 11576531 pop edi */
  EDI = (pop32());
  /* 11576532 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11576535 pop ebx */
  EBX = (pop32());
  /* 11576536 ret  */
  ESPCHK(0x11576490u, _esp0);
  ESP += 4; return;
L_11576537:;
  /* 11576537 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1157653a pop esi */
  ESI = (pop32());
  /* 1157653b pop edi */
  EDI = (pop32());
  /* 1157653c pop ebx */
  EBX = (pop32());
  /* 1157653d ret  */
  ESPCHK(0x11576490u, _esp0);
  ESP += 4; return;
L_1157653e:;
  /* 1157653e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11576541 pop esi */
  ESI = (pop32());
  /* 11576542 pop edi */
  EDI = (pop32());
  /* 11576543 pop ebx */
  EBX = (pop32());
  /* 11576544 ret  */
  ESPCHK(0x11576490u, _esp0);
  ESP += 4; return;
L_11576545:;
  /* 11576545 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11576548 pop esi */
  ESI = (pop32());
  /* 11576549 pop edi */
  EDI = (pop32());
  /* 1157654a pop ebx */
  EBX = (pop32());
  /* 1157654b ret  */
  ESPCHK(0x11576490u, _esp0);
  ESP += 4; return;
  /* 1157654c jmp dword ptr [0x11594390] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11594390)))); return;
}

/* RtlUnwind @ 0x1157669c (6 bytes, 1 insns) */
void f_1157669c(void) {
  FTRACE(0x1157669cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1157669c jmp dword ptr [0x11594314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11594314)))); return;
}

