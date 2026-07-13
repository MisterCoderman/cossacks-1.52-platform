#include "recomp.h"

/* thunk_FUN_10001890 @ 0x12d91005 (5 bytes, 1 insns) */
void f_12d91005(void) {
  FTRACE(0x12d91005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91005 jmp 0x12d91890 */
  f_12d91890(); return;
}

/* OnInit @ 0x12d9100a (5 bytes, 1 insns) */
void f_12d9100a(void) {
  FTRACE(0x12d9100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9100a jmp 0x12d91638 */
  f_12d91638(); return;
}

/* thunk_FUN_100010a0 @ 0x12d91014 (5 bytes, 1 insns) */
void f_12d91014(void) {
  FTRACE(0x12d91014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91014 jmp 0x12d910a0 */
  f_12d910a0(); return;
}

/* thunk_FUN_100011b8 @ 0x12d91019 (5 bytes, 1 insns) */
void f_12d91019(void) {
  FTRACE(0x12d91019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91019 jmp 0x12d911b8 */
  f_12d911b8(); return;
}

/* thunk_FUN_100010d3 @ 0x12d91023 (5 bytes, 1 insns) */
void f_12d91023(void) {
  FTRACE(0x12d91023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91023 jmp 0x12d910d3 */
  f_12d910d3(); return;
}

/* ProcessScenary @ 0x12d91028 (5 bytes, 1 insns) */
void f_12d91028(void) {
  FTRACE(0x12d91028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91028 jmp 0x12d91683 */
  f_12d91683(); return;
}

/* thunk_FUN_10001588 @ 0x12d9102d (5 bytes, 1 insns) */
void f_12d9102d(void) {
  FTRACE(0x12d9102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9102d jmp 0x12d91588 */
  f_12d91588(); return;
}

/* thunk_FUN_10001144 @ 0x12d91032 (5 bytes, 1 insns) */
void f_12d91032(void) {
  FTRACE(0x12d91032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91032 jmp 0x12d91144 */
  f_12d91144(); return;
}

/* thunk_FUN_100014ed @ 0x12d9103c (5 bytes, 1 insns) */
void f_12d9103c(void) {
  FTRACE(0x12d9103cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9103c jmp 0x12d914ed */
  f_12d914ed(); return;
}

/* thunk_FUN_10001622 @ 0x12d91046 (5 bytes, 1 insns) */
void f_12d91046(void) {
  FTRACE(0x12d91046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91046 jmp 0x12d91622 */
  f_12d91622(); return;
}

/* FUN_100010a0 @ 0x12d910a0 (51 bytes, 17 insns) */
void f_12d910a0(void) {
  FTRACE(0x12d910a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d910a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d910a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d910a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d910a4 mov dword ptr [ebp - 4], 0xcccccccc */
  w32((uint32_t)(EBP + -0x4), (0xccccccccu));
  /* 12d910ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d910ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d910b1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d910b5 je 0x12d910b9 */
  if (C.zf) goto L_12d910b9;
  /* 12d910b7 jmp 0x12d910be */
  goto L_12d910be;
L_12d910b9:;
  /* 12d910b9 call 0x12d9100a */
  push32(0x12d910beu); f_12d9100a();
L_12d910be:;
  /* 12d910be mov eax, 1 */
  EAX = (0x1u);
  /* 12d910c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d910c6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d910c8 call 0x12d91930 */
  push32(0x12d910cdu); f_12d91930();
  /* 12d910cd mov esp, ebp */
  ESP = (EBP);
  /* 12d910cf pop ebp */
  EBP = (pop32());
  /* 12d910d0 ret 0xc */
  ESPCHK(0x12d910a0u, _esp0);
  ESP += 16; return;
}

/* FUN_100010d3 @ 0x12d910d3 (113 bytes, 38 insns) */
void f_12d910d3(void) {
  FTRACE(0x12d910d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d910d3 push ebp */
  push32((uint32_t)(EBP));
  /* 12d910d4 mov ebp, esp */
  EBP = (ESP);
  /* 12d910d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d910d7 push esi */
  push32((uint32_t)(ESI));
  /* 12d910d8 mov dword ptr [ebp - 4], 0xcccccccc */
  w32((uint32_t)(EBP + -0x4), (0xccccccccu));
  /* 12d910df mov esi, esp */
  ESI = (ESP);
  /* 12d910e1 call dword ptr [0x12db03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03fc))), 0x12d910e7u);
  /* 12d910e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d910e9 call 0x12d91930 */
  push32(0x12d910eeu); f_12d91930();
  /* 12d910ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d910f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d910f4 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d910f7 jne 0x12d9110a */
  if (!C.zf) goto L_12d9110a;
  /* 12d910f9 mov esi, esp */
  ESI = (ESP);
  /* 12d910fb call dword ptr [0x12db0400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0400))), 0x12d91101u);
  /* 12d91101 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91103 call 0x12d91930 */
  push32(0x12d91108u); f_12d91930();
  /* 12d91108 jmp 0x12d91119 */
  goto L_12d91119;
L_12d9110a:;
  /* 12d9110a mov esi, esp */
  ESI = (ESP);
  /* 12d9110c call dword ptr [0x12db0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0404))), 0x12d91112u);
  /* 12d91112 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91114 call 0x12d91930 */
  push32(0x12d91119u); f_12d91930();
L_12d91119:;
  /* 12d91119 mov esi, esp */
  ESI = (ESP);
  /* 12d9111b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9111e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91121 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12d91124 push eax */
  push32((uint32_t)(EAX));
  /* 12d91125 call dword ptr [0x12db0408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0408))), 0x12d9112bu);
  /* 12d9112b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9112e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91130 call 0x12d91930 */
  push32(0x12d91135u); f_12d91930();
  /* 12d91135 pop esi */
  ESI = (pop32());
  /* 12d91136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91139 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9113b call 0x12d91930 */
  push32(0x12d91140u); f_12d91930();
  /* 12d91140 mov esp, ebp */
  ESP = (EBP);
  /* 12d91142 pop ebp */
  EBP = (pop32());
  /* 12d91143 ret  */
  ESPCHK(0x12d910d3u, _esp0);
  ESP += 4; return;
}

/* FUN_10001144 @ 0x12d91144 (116 bytes, 34 insns) */
void f_12d91144(void) {
  FTRACE(0x12d91144u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91144 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91145 mov ebp, esp */
  EBP = (ESP);
  /* 12d91147 push esi */
  push32((uint32_t)(ESI));
  /* 12d91148 mov esi, esp */
  ESI = (ESP);
  /* 12d9114a push 0x12daba78 */
  push32((uint32_t)(0x12daba78u));
  /* 12d9114f push 0x12dad4d8 */
  push32((uint32_t)(0x12dad4d8u));
  /* 12d91154 call dword ptr [0x12db03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03f4))), 0x12d9115au);
  /* 12d9115a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9115d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9115f call 0x12d91930 */
  push32(0x12d91164u); f_12d91930();
  /* 12d91164 mov esi, esp */
  ESI = (ESP);
  /* 12d91166 push 0x12daba80 */
  push32((uint32_t)(0x12daba80u));
  /* 12d9116b push 0x12dad4e0 */
  push32((uint32_t)(0x12dad4e0u));
  /* 12d91170 call dword ptr [0x12db03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03f4))), 0x12d91176u);
  /* 12d91176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91179 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9117b call 0x12d91930 */
  push32(0x12d91180u); f_12d91930();
  /* 12d91180 mov esi, esp */
  ESI = (ESP);
  /* 12d91182 push 0x12dad4a0 */
  push32((uint32_t)(0x12dad4a0u));
  /* 12d91187 call dword ptr [0x12db03f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03f8))), 0x12d9118du);
  /* 12d9118d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91190 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91192 call 0x12d91930 */
  push32(0x12d91197u); f_12d91930();
  /* 12d91197 mov esi, esp */
  ESI = (ESP);
  /* 12d91199 push 0x12dad4a8 */
  push32((uint32_t)(0x12dad4a8u));
  /* 12d9119e call dword ptr [0x12db03f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03f8))), 0x12d911a4u);
  /* 12d911a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d911a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d911a9 call 0x12d91930 */
  push32(0x12d911aeu); f_12d91930();
  /* 12d911ae pop esi */
  ESI = (pop32());
  /* 12d911af cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d911b1 call 0x12d91930 */
  push32(0x12d911b6u); f_12d91930();
  /* 12d911b6 pop ebp */
  EBP = (pop32());
  /* 12d911b7 ret  */
  ESPCHK(0x12d91144u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b8 @ 0x12d911b8 (291 bytes, 97 insns) */
void f_12d911b8(void) {
  FTRACE(0x12d911b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d911b8 push ebp */
  push32((uint32_t)(EBP));
  /* 12d911b9 mov ebp, esp */
  EBP = (ESP);
  /* 12d911bb sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d911be push esi */
  push32((uint32_t)(ESI));
  /* 12d911bf push edi */
  push32((uint32_t)(EDI));
  /* 12d911c0 lea edi, [ebp - 0x34] */
  EDI = ((uint32_t)(EBP + -0x34));
  /* 12d911c3 mov ecx, 0xd */
  ECX = (0xdu);
  /* 12d911c8 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d911cd rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d911cf mov esi, esp */
  ESI = (ESP);
  /* 12d911d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d911d3 push 0x12dad4a8 */
  push32((uint32_t)(0x12dad4a8u));
  /* 12d911d8 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d911db push eax */
  push32((uint32_t)(EAX));
  /* 12d911dc call dword ptr [0x12db03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03dc))), 0x12d911e2u);
  /* 12d911e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d911e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d911e7 call 0x12d91930 */
  push32(0x12d911ecu); f_12d91930();
  /* 12d911ec mov esi, esp */
  ESI = (ESP);
  /* 12d911ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12d911f0 mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d911f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d911f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d911f7 push edx */
  push32((uint32_t)(EDX));
  /* 12d911f8 call dword ptr [0x12db03e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03e0))), 0x12d911feu);
  /* 12d911fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91201 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91203 call 0x12d91930 */
  push32(0x12d91208u); f_12d91930();
  /* 12d91208 mov esi, esp */
  ESI = (ESP);
  /* 12d9120a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9120c push 0x12dad4a0 */
  push32((uint32_t)(0x12dad4a0u));
  /* 12d91211 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d91214 push eax */
  push32((uint32_t)(EAX));
  /* 12d91215 call dword ptr [0x12db03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03dc))), 0x12d9121bu);
  /* 12d9121b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9121e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91220 call 0x12d91930 */
  push32(0x12d91225u); f_12d91930();
  /* 12d91225 mov esi, esp */
  ESI = (ESP);
  /* 12d91227 push 0x12dad4a0 */
  push32((uint32_t)(0x12dad4a0u));
  /* 12d9122c call dword ptr [0x12db03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03e4))), 0x12d91232u);
  /* 12d91232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91235 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91237 call 0x12d91930 */
  push32(0x12d9123cu); f_12d91930();
  /* 12d9123c mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 12d9123f mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 12d91246 jmp 0x12d91251 */
  goto L_12d91251;
L_12d91248:;
  /* 12d91248 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9124b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9124e mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
L_12d91251:;
  /* 12d91251 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d91254 cmp edx, dword ptr [ebp - 0x34] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91257 jge 0x12d912ae */
  if ((C.sf==C.of)) goto L_12d912ae;
  /* 12d91259 mov esi, esp */
  ESI = (ESP);
  /* 12d9125b lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 12d9125e push eax */
  push32((uint32_t)(EAX));
  /* 12d9125f mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d91262 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91263 push 0x12dad4a0 */
  push32((uint32_t)(0x12dad4a0u));
  /* 12d91268 call dword ptr [0x12db03e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03e8))), 0x12d9126eu);
  /* 12d9126e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91271 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91273 call 0x12d91930 */
  push32(0x12d91278u); f_12d91930();
  /* 12d91278 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9127b and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d91281 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d91283 je 0x12d91290 */
  if (C.zf) goto L_12d91290;
  /* 12d91285 mov al, byte ptr [ebp - 0x24] */
  AL = (r8((uint32_t)(EBP + -0x24)));
  /* 12d91288 add al, byte ptr [ebp + 0x10] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBP + 0x10))),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d9128b mov byte ptr [ebp - 0x24], al */
  w8((uint32_t)(EBP + -0x24), (AL));
  /* 12d9128e jmp 0x12d91296 */
  goto L_12d91296;
L_12d91290:;
  /* 12d91290 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12d91293 mov byte ptr [ebp - 0x24], cl */
  w8((uint32_t)(EBP + -0x24), (CL));
L_12d91296:;
  /* 12d91296 mov esi, esp */
  ESI = (ESP);
  /* 12d91298 lea edx, [ebp - 0x2c] */
  EDX = ((uint32_t)(EBP + -0x2c));
  /* 12d9129b push edx */
  push32((uint32_t)(EDX));
  /* 12d9129c call dword ptr [0x12db03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03ec))), 0x12d912a2u);
  /* 12d912a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d912a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d912a7 call 0x12d91930 */
  push32(0x12d912acu); f_12d91930();
  /* 12d912ac jmp 0x12d91248 */
  goto L_12d91248;
L_12d912ae:;
  /* 12d912ae mov esi, esp */
  ESI = (ESP);
  /* 12d912b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d912b2 push 0x12dad4a8 */
  push32((uint32_t)(0x12dad4a8u));
  /* 12d912b7 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d912ba push eax */
  push32((uint32_t)(EAX));
  /* 12d912bb call dword ptr [0x12db03f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03f0))), 0x12d912c1u);
  /* 12d912c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d912c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d912c6 call 0x12d91930 */
  push32(0x12d912cbu); f_12d91930();
  /* 12d912cb pop edi */
  EDI = (pop32());
  /* 12d912cc pop esi */
  ESI = (pop32());
  /* 12d912cd add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d912d0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d912d2 call 0x12d91930 */
  push32(0x12d912d7u); f_12d91930();
  /* 12d912d7 mov esp, ebp */
  ESP = (EBP);
  /* 12d912d9 pop ebp */
  EBP = (pop32());
  /* 12d912da ret  */
  ESPCHK(0x12d911b8u, _esp0);
  ESP += 4; return;
}

/* FUN_100012db @ 0x12d912db (80 bytes, 29 insns) */
void f_12d912db(void) {
  FTRACE(0x12d912dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d912db push ebp */
  push32((uint32_t)(EBP));
  /* 12d912dc mov ebp, esp */
  EBP = (ESP);
  /* 12d912de push esi */
  push32((uint32_t)(ESI));
  /* 12d912df mov esi, esp */
  ESI = (ESP);
  /* 12d912e1 push 0x4b0 */
  push32((uint32_t)(0x4b0u));
  /* 12d912e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d912e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d912ea push 0x12dad4e8 */
  push32((uint32_t)(0x12dad4e8u));
  /* 12d912ef call dword ptr [0x12db03d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03d8))), 0x12d912f5u);
  /* 12d912f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d912f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d912fa call 0x12d91930 */
  push32(0x12d912ffu); f_12d91930();
  /* 12d912ff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d91304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91306 je 0x12d91321 */
  if (C.zf) goto L_12d91321;
  /* 12d91308 mov cl, byte ptr [ebp + 0x14] */
  CL = (r8((uint32_t)(EBP + 0x14)));
  /* 12d9130b push ecx */
  push32((uint32_t)(ECX));
  /* 12d9130c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9130f push edx */
  push32((uint32_t)(EDX));
  /* 12d91310 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91313 push eax */
  push32((uint32_t)(EAX));
  /* 12d91314 push 0x12dad4e8 */
  push32((uint32_t)(0x12dad4e8u));
  /* 12d91319 call 0x12d91019 */
  push32(0x12d9131eu); f_12d91019();
  /* 12d9131e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d91321:;
  /* 12d91321 pop esi */
  ESI = (pop32());
  /* 12d91322 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91324 call 0x12d91930 */
  push32(0x12d91329u); f_12d91930();
  /* 12d91329 pop ebp */
  EBP = (pop32());
  /* 12d9132a ret  */
  ESPCHK(0x12d912dbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000132b @ 0x12d9132b (152 bytes, 54 insns) */
void f_12d9132b(void) {
  FTRACE(0x12d9132bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9132b push ebp */
  push32((uint32_t)(EBP));
  /* 12d9132c mov ebp, esp */
  EBP = (ESP);
  /* 12d9132e sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d91331 push esi */
  push32((uint32_t)(ESI));
  /* 12d91332 push edi */
  push32((uint32_t)(EDI));
  /* 12d91333 lea edi, [ebp - 0x34] */
  EDI = ((uint32_t)(EBP + -0x34));
  /* 12d91336 mov ecx, 0xd */
  ECX = (0xdu);
  /* 12d9133b mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12d91340 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d91342 mov esi, esp */
  ESI = (ESP);
  /* 12d91344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91347 push eax */
  push32((uint32_t)(EAX));
  /* 12d91348 call dword ptr [0x12db03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03e4))), 0x12d9134eu);
  /* 12d9134e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91353 call 0x12d91930 */
  push32(0x12d91358u); f_12d91930();
  /* 12d91358 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 12d9135b mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 12d91362 jmp 0x12d9136d */
  goto L_12d9136d;
L_12d91364:;
  /* 12d91364 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d91367 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9136a mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
L_12d9136d:;
  /* 12d9136d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d91370 cmp edx, dword ptr [ebp - 0x34] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91373 jge 0x12d913b3 */
  if ((C.sf==C.of)) goto L_12d913b3;
  /* 12d91375 mov esi, esp */
  ESI = (ESP);
  /* 12d91377 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 12d9137a push eax */
  push32((uint32_t)(EAX));
  /* 12d9137b mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12d9137e push ecx */
  push32((uint32_t)(ECX));
  /* 12d9137f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91382 push edx */
  push32((uint32_t)(EDX));
  /* 12d91383 call dword ptr [0x12db03e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03e8))), 0x12d91389u);
  /* 12d91389 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9138c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9138e call 0x12d91930 */
  push32(0x12d91393u); f_12d91930();
  /* 12d91393 mov byte ptr [ebp - 0x24], 0 */
  w8((uint32_t)(EBP + -0x24), (0x0u));
  /* 12d91397 mov byte ptr [ebp - 0x23], 0 */
  w8((uint32_t)(EBP + -0x23), (0x0u));
  /* 12d9139b mov esi, esp */
  ESI = (ESP);
  /* 12d9139d lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 12d913a0 push eax */
  push32((uint32_t)(EAX));
  /* 12d913a1 call dword ptr [0x12db03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03ec))), 0x12d913a7u);
  /* 12d913a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d913aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d913ac call 0x12d91930 */
  push32(0x12d913b1u); f_12d91930();
  /* 12d913b1 jmp 0x12d91364 */
  goto L_12d91364;
L_12d913b3:;
  /* 12d913b3 pop edi */
  EDI = (pop32());
  /* 12d913b4 pop esi */
  ESI = (pop32());
  /* 12d913b5 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d913b8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d913ba call 0x12d91930 */
  push32(0x12d913bfu); f_12d91930();
  /* 12d913bf mov esp, ebp */
  ESP = (EBP);
  /* 12d913c1 pop ebp */
  EBP = (pop32());
  /* 12d913c2 ret  */
  ESPCHK(0x12d9132bu, _esp0);
  ESP += 4; return;
}

/* FUN_100013c3 @ 0x12d913c3 (184 bytes, 62 insns) */
void f_12d913c3(void) {
  FTRACE(0x12d913c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d913c3 push ebp */
  push32((uint32_t)(EBP));
  /* 12d913c4 mov ebp, esp */
  EBP = (ESP);
  /* 12d913c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d913c7 push esi */
  push32((uint32_t)(ESI));
  /* 12d913c8 mov dword ptr [ebp - 4], 0xcccccccc */
  w32((uint32_t)(EBP + -0x4), (0xccccccccu));
  /* 12d913cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d913d6 jmp 0x12d913e1 */
  goto L_12d913e1;
L_12d913d8:;
  /* 12d913d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d913db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d913de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d913e1:;
  /* 12d913e1 cmp dword ptr [ebp - 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d913e5 jge 0x12d9146c */
  if ((C.sf==C.of)) goto L_12d9146c;
  /* 12d913eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d913ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d913f1 setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 12d913f4 mov esi, esp */
  ESI = (ESP);
  /* 12d913f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d913f7 push 0x12dad4a8 */
  push32((uint32_t)(0x12dad4a8u));
  /* 12d913fc mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12d913ff push edx */
  push32((uint32_t)(EDX));
  /* 12d91400 call dword ptr [0x12db03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03dc))), 0x12d91406u);
  /* 12d91406 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9140b call 0x12d91930 */
  push32(0x12d91410u); f_12d91930();
  /* 12d91410 mov esi, esp */
  ESI = (ESP);
  /* 12d91412 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d91414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91417 push eax */
  push32((uint32_t)(EAX));
  /* 12d91418 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12d9141b push ecx */
  push32((uint32_t)(ECX));
  /* 12d9141c call dword ptr [0x12db03f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03f0))), 0x12d91422u);
  /* 12d91422 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91425 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91427 call 0x12d91930 */
  push32(0x12d9142cu); f_12d91930();
  /* 12d9142c mov esi, esp */
  ESI = (ESP);
  /* 12d9142e mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 12d91431 push edx */
  push32((uint32_t)(EDX));
  /* 12d91432 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91435 push eax */
  push32((uint32_t)(EAX));
  /* 12d91436 mov cl, byte ptr [ebp - 4] */
  CL = (r8((uint32_t)(EBP + -0x4)));
  /* 12d91439 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9143a call dword ptr [0x12db03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03dc))), 0x12d91440u);
  /* 12d91440 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91443 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91445 call 0x12d91930 */
  push32(0x12d9144au); f_12d91930();
  /* 12d9144a mov esi, esp */
  ESI = (ESP);
  /* 12d9144c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9144e push 0x12dad4a8 */
  push32((uint32_t)(0x12dad4a8u));
  /* 12d91453 mov dl, byte ptr [ebp - 4] */
  DL = (r8((uint32_t)(EBP + -0x4)));
  /* 12d91456 push edx */
  push32((uint32_t)(EDX));
  /* 12d91457 call dword ptr [0x12db03f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03f0))), 0x12d9145du);
  /* 12d9145d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91460 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91462 call 0x12d91930 */
  push32(0x12d91467u); f_12d91930();
  /* 12d91467 jmp 0x12d913d8 */
  goto L_12d913d8;
L_12d9146c:;
  /* 12d9146c pop esi */
  ESI = (pop32());
  /* 12d9146d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91470 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91472 call 0x12d91930 */
  push32(0x12d91477u); f_12d91930();
  /* 12d91477 mov esp, ebp */
  ESP = (EBP);
  /* 12d91479 pop ebp */
  EBP = (pop32());
  /* 12d9147a ret  */
  ESPCHK(0x12d913c3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000147b @ 0x12d9147b (114 bytes, 38 insns) */
void f_12d9147b(void) {
  FTRACE(0x12d9147bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d9147b push ebp */
  push32((uint32_t)(EBP));
  /* 12d9147c mov ebp, esp */
  EBP = (ESP);
  /* 12d9147e sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d91481 push esi */
  push32((uint32_t)(ESI));
  /* 12d91482 mov dword ptr [ebp - 8], 0xcccccccc */
  w32((uint32_t)(EBP + -0x8), (0xccccccccu));
  /* 12d91489 mov dword ptr [ebp - 4], 0xcccccccc */
  w32((uint32_t)(EBP + -0x4), (0xccccccccu));
  /* 12d91490 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d91497 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d9149e jmp 0x12d914a9 */
  goto L_12d914a9;
L_12d914a0:;
  /* 12d914a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d914a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d914a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d914a9:;
  /* 12d914a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d914ac cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d914af jge 0x12d914db */
  if ((C.sf==C.of)) goto L_12d914db;
  /* 12d914b1 mov esi, esp */
  ESI = (ESP);
  /* 12d914b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d914b6 push edx */
  push32((uint32_t)(EDX));
  /* 12d914b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d914ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d914bd lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12d914c0 push edx */
  push32((uint32_t)(EDX));
  /* 12d914c1 call dword ptr [0x12db03d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03d4))), 0x12d914c7u);
  /* 12d914c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d914ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d914cc call 0x12d91930 */
  push32(0x12d914d1u); f_12d91930();
  /* 12d914d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d914d4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d914d6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d914d9 jmp 0x12d914a0 */
  goto L_12d914a0;
L_12d914db:;
  /* 12d914db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d914de pop esi */
  ESI = (pop32());
  /* 12d914df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d914e2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d914e4 call 0x12d91930 */
  push32(0x12d914e9u); f_12d91930();
  /* 12d914e9 mov esp, ebp */
  ESP = (EBP);
  /* 12d914eb pop ebp */
  EBP = (pop32());
  /* 12d914ec ret  */
  ESPCHK(0x12d9147bu, _esp0);
  ESP += 4; return;
}

/* FUN_100014ed @ 0x12d914ed (155 bytes, 50 insns) */
void f_12d914ed(void) {
  FTRACE(0x12d914edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d914ed push ebp */
  push32((uint32_t)(EBP));
  /* 12d914ee mov ebp, esp */
  EBP = (ESP);
  /* 12d914f0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d914f3 push esi */
  push32((uint32_t)(ESI));
  /* 12d914f4 mov dword ptr [ebp - 8], 0xcccccccc */
  w32((uint32_t)(EBP + -0x8), (0xccccccccu));
  /* 12d914fb mov dword ptr [ebp - 4], 0xcccccccc */
  w32((uint32_t)(EBP + -0x4), (0xccccccccu));
  /* 12d91502 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d91509 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d91510 jmp 0x12d9151b */
  goto L_12d9151b;
L_12d91512:;
  /* 12d91512 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d91515 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91518 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d9151b:;
  /* 12d9151b cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9151f jge 0x12d91576 */
  if ((C.sf==C.of)) goto L_12d91576;
  /* 12d91521 mov esi, esp */
  ESI = (ESP);
  /* 12d91523 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12d91526 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91527 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9152a lea eax, [edx*8 + 0x12dad4b0] */
  EAX = ((uint32_t)(EDX*8 + 0x12dad4b0));
  /* 12d91531 push eax */
  push32((uint32_t)(EAX));
  /* 12d91532 call dword ptr [0x12db03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03d0))), 0x12d91538u);
  /* 12d91538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9153b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9153d call 0x12d91930 */
  push32(0x12d91542u); f_12d91930();
  /* 12d91542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91544 jle 0x12d91574 */
  if ((C.zf||C.sf!=C.of)) goto L_12d91574;
  /* 12d91546 mov esi, esp */
  ESI = (ESP);
  /* 12d91548 mov cl, byte ptr [ebp + 0xc] */
  CL = (r8((uint32_t)(EBP + 0xc)));
  /* 12d9154b push ecx */
  push32((uint32_t)(ECX));
  /* 12d9154c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9154f lea eax, [edx*8 + 0x12dad4b0] */
  EAX = ((uint32_t)(EDX*8 + 0x12dad4b0));
  /* 12d91556 push eax */
  push32((uint32_t)(EAX));
  /* 12d91557 call dword ptr [0x12db03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03d0))), 0x12d9155du);
  /* 12d9155d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91560 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91562 call 0x12d91930 */
  push32(0x12d91567u); f_12d91930();
  /* 12d91567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91569 jne 0x12d91574 */
  if (!C.zf) goto L_12d91574;
  /* 12d9156b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9156e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91571 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d91574:;
  /* 12d91574 jmp 0x12d91512 */
  goto L_12d91512;
L_12d91576:;
  /* 12d91576 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d91579 pop esi */
  ESI = (pop32());
  /* 12d9157a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9157d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9157f call 0x12d91930 */
  push32(0x12d91584u); f_12d91930();
  /* 12d91584 mov esp, ebp */
  ESP = (EBP);
  /* 12d91586 pop ebp */
  EBP = (pop32());
  /* 12d91587 ret  */
  ESPCHK(0x12d914edu, _esp0);
  ESP += 4; return;
}

/* FUN_10001588 @ 0x12d91588 (154 bytes, 43 insns) */
void f_12d91588(void) {
  FTRACE(0x12d91588u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91588 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91589 mov ebp, esp */
  EBP = (ESP);
  /* 12d9158b push esi */
  push32((uint32_t)(ESI));
  /* 12d9158c mov esi, esp */
  ESI = (ESP);
  /* 12d9158e push 0x12daba88 */
  push32((uint32_t)(0x12daba88u));
  /* 12d91593 push 0x12dad4b0 */
  push32((uint32_t)(0x12dad4b0u));
  /* 12d91598 call dword ptr [0x12db03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03cc))), 0x12d9159eu);
  /* 12d9159e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d915a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d915a3 call 0x12d91930 */
  push32(0x12d915a8u); f_12d91930();
  /* 12d915a8 mov esi, esp */
  ESI = (ESP);
  /* 12d915aa push 0x12daba90 */
  push32((uint32_t)(0x12daba90u));
  /* 12d915af push 0x12dad4b8 */
  push32((uint32_t)(0x12dad4b8u));
  /* 12d915b4 call dword ptr [0x12db03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03cc))), 0x12d915bau);
  /* 12d915ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d915bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d915bf call 0x12d91930 */
  push32(0x12d915c4u); f_12d91930();
  /* 12d915c4 mov esi, esp */
  ESI = (ESP);
  /* 12d915c6 push 0x12daba98 */
  push32((uint32_t)(0x12daba98u));
  /* 12d915cb push 0x12dad4c0 */
  push32((uint32_t)(0x12dad4c0u));
  /* 12d915d0 call dword ptr [0x12db03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03cc))), 0x12d915d6u);
  /* 12d915d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d915d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d915db call 0x12d91930 */
  push32(0x12d915e0u); f_12d91930();
  /* 12d915e0 mov esi, esp */
  ESI = (ESP);
  /* 12d915e2 push 0x12dabaa0 */
  push32((uint32_t)(0x12dabaa0u));
  /* 12d915e7 push 0x12dad4c8 */
  push32((uint32_t)(0x12dad4c8u));
  /* 12d915ec call dword ptr [0x12db03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03cc))), 0x12d915f2u);
  /* 12d915f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d915f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d915f7 call 0x12d91930 */
  push32(0x12d915fcu); f_12d91930();
  /* 12d915fc mov esi, esp */
  ESI = (ESP);
  /* 12d915fe push 0x12dabaa8 */
  push32((uint32_t)(0x12dabaa8u));
  /* 12d91603 push 0x12dad4d0 */
  push32((uint32_t)(0x12dad4d0u));
  /* 12d91608 call dword ptr [0x12db03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03cc))), 0x12d9160eu);
  /* 12d9160e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91613 call 0x12d91930 */
  push32(0x12d91618u); f_12d91930();
  /* 12d91618 pop esi */
  ESI = (pop32());
  /* 12d91619 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9161b call 0x12d91930 */
  push32(0x12d91620u); f_12d91930();
  /* 12d91620 pop ebp */
  EBP = (pop32());
  /* 12d91621 ret  */
  ESPCHK(0x12d91588u, _esp0);
  ESP += 4; return;
}

/* FUN_10001622 @ 0x12d91622 (22 bytes, 8 insns) */
void f_12d91622(void) {
  FTRACE(0x12d91622u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91622 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91623 mov ebp, esp */
  EBP = (ESP);
  /* 12d91625 call 0x12d91032 */
  push32(0x12d9162au); f_12d91032();
  /* 12d9162a call 0x12d9102d */
  push32(0x12d9162fu); f_12d9102d();
  /* 12d9162f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91631 call 0x12d91930 */
  push32(0x12d91636u); f_12d91930();
  /* 12d91636 pop ebp */
  EBP = (pop32());
  /* 12d91637 ret  */
  ESPCHK(0x12d91622u, _esp0);
  ESP += 4; return;
}

/* FUN_10001638 @ 0x12d91638 (75 bytes, 23 insns) */
void f_12d91638(void) {
  FTRACE(0x12d91638u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91638 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91639 mov ebp, esp */
  EBP = (ESP);
  /* 12d9163b push esi */
  push32((uint32_t)(ESI));
  /* 12d9163c call 0x12d91046 */
  push32(0x12d91641u); f_12d91046();
  /* 12d91641 mov esi, esp */
  ESI = (ESP);
  /* 12d91643 push 0x12dabab0 */
  push32((uint32_t)(0x12dabab0u));
  /* 12d91648 push 0x12dabab8 */
  push32((uint32_t)(0x12dabab8u));
  /* 12d9164d call dword ptr [0x12db03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03c8))), 0x12d91653u);
  /* 12d91653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91656 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91658 call 0x12d91930 */
  push32(0x12d9165du); f_12d91930();
  /* 12d9165d mov esi, esp */
  ESI = (ESP);
  /* 12d9165f push 0x12dabac0 */
  push32((uint32_t)(0x12dabac0u));
  /* 12d91664 push 0x12dabac8 */
  push32((uint32_t)(0x12dabac8u));
  /* 12d91669 call dword ptr [0x12db03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03c8))), 0x12d9166fu);
  /* 12d9166f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91672 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91674 call 0x12d91930 */
  push32(0x12d91679u); f_12d91930();
  /* 12d91679 pop esi */
  ESI = (pop32());
  /* 12d9167a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9167c call 0x12d91930 */
  push32(0x12d91681u); f_12d91930();
  /* 12d91681 pop ebp */
  EBP = (pop32());
  /* 12d91682 ret  */
  ESPCHK(0x12d91638u, _esp0);
  ESP += 4; return;
}

/* FUN_10001683 @ 0x12d91683 (110 bytes, 34 insns) */
void f_12d91683(void) {
  FTRACE(0x12d91683u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91683 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91684 mov ebp, esp */
  EBP = (ESP);
  /* 12d91686 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d91688 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9168a call 0x12d9103c */
  push32(0x12d9168fu); f_12d9103c();
  /* 12d9168f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91692 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91695 jle 0x12d916a6 */
  if ((C.zf||C.sf!=C.of)) goto L_12d916a6;
  /* 12d91697 push 0x12daba30 */
  push32((uint32_t)(0x12daba30u));
  /* 12d9169c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9169e call 0x12d91023 */
  push32(0x12d916a3u); f_12d91023();
  /* 12d916a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d916a6:;
  /* 12d916a6 push 0x12dad4d8 */
  push32((uint32_t)(0x12dad4d8u));
  /* 12d916ab call 0x12d91005 */
  push32(0x12d916b0u); f_12d91005();
  /* 12d916b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d916b3 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d916b6 jge 0x12d916c7 */
  if ((C.sf==C.of)) goto L_12d916c7;
  /* 12d916b8 push 0x12daba38 */
  push32((uint32_t)(0x12daba38u));
  /* 12d916bd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d916bf call 0x12d91023 */
  push32(0x12d916c4u); f_12d91023();
  /* 12d916c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d916c7:;
  /* 12d916c7 push 0x12dad4e0 */
  push32((uint32_t)(0x12dad4e0u));
  /* 12d916cc call 0x12d91005 */
  push32(0x12d916d1u); f_12d91005();
  /* 12d916d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d916d4 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d916d7 jge 0x12d916e8 */
  if ((C.sf==C.of)) goto L_12d916e8;
  /* 12d916d9 push 0x12daba30 */
  push32((uint32_t)(0x12daba30u));
  /* 12d916de push 0 */
  push32((uint32_t)(0x0u));
  /* 12d916e0 call 0x12d91023 */
  push32(0x12d916e5u); f_12d91023();
  /* 12d916e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d916e8:;
  /* 12d916e8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d916ea call 0x12d91930 */
  push32(0x12d916efu); f_12d91930();
  /* 12d916ef pop ebp */
  EBP = (pop32());
  /* 12d916f0 ret  */
  ESPCHK(0x12d91683u, _esp0);
  ESP += 4; return;
}

/* FUN_10001890 @ 0x12d91890 (36 bytes, 15 insns) */
void f_12d91890(void) {
  FTRACE(0x12d91890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91890 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91891 mov ebp, esp */
  EBP = (ESP);
  /* 12d91893 push esi */
  push32((uint32_t)(ESI));
  /* 12d91894 mov esi, esp */
  ESI = (ESP);
  /* 12d91896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91899 push eax */
  push32((uint32_t)(EAX));
  /* 12d9189a call dword ptr [0x12db03c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db03c4))), 0x12d918a0u);
  /* 12d918a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d918a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d918a5 call 0x12d91930 */
  push32(0x12d918aau); f_12d91930();
  /* 12d918aa pop esi */
  ESI = (pop32());
  /* 12d918ab cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d918ad call 0x12d91930 */
  push32(0x12d918b2u); f_12d91930();
  /* 12d918b2 pop ebp */
  EBP = (pop32());
  /* 12d918b3 ret  */
  ESPCHK(0x12d91890u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12d91930 (56 bytes, 28 insns) */
void f_12d91930(void) {
  FTRACE(0x12d91930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91930 jne 0x12d91933 */
  if (!C.zf) goto L_12d91933;
  /* 12d91932 ret  */
  ESPCHK(0x12d91930u, _esp0);
  ESP += 4; return;
L_12d91933:;
  /* 12d91933 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91934 mov ebp, esp */
  EBP = (ESP);
  /* 12d91936 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d91939 push eax */
  push32((uint32_t)(EAX));
  /* 12d9193a push edx */
  push32((uint32_t)(EDX));
  /* 12d9193b push ebx */
  push32((uint32_t)(EBX));
  /* 12d9193c push esi */
  push32((uint32_t)(ESI));
  /* 12d9193d push edi */
  push32((uint32_t)(EDI));
  /* 12d9193e push 0x12da9014 */
  push32((uint32_t)(0x12da9014u));
  /* 12d91943 push 0x12da9010 */
  push32((uint32_t)(0x12da9010u));
  /* 12d91948 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12d9194a push 0x12da9000 */
  push32((uint32_t)(0x12da9000u));
  /* 12d9194f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d91951 call 0x12d91d00 */
  push32(0x12d91956u); f_12d91d00();
  /* 12d91956 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91959 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9195c jne 0x12d9195f */
  if (!C.zf) goto L_12d9195f;
  /* 12d9195e int3  */
  x86_unimpl("int3 @ 0x12d9195e");
L_12d9195f:;
  /* 12d9195f pop edi */
  EDI = (pop32());
  /* 12d91960 pop esi */
  ESI = (pop32());
  /* 12d91961 pop ebx */
  EBX = (pop32());
  /* 12d91962 pop edx */
  EDX = (pop32());
  /* 12d91963 pop eax */
  EAX = (pop32());
  /* 12d91964 mov esp, ebp */
  ESP = (EBP);
  /* 12d91966 pop ebp */
  EBP = (pop32());
  /* 12d91967 ret  */
  ESPCHK(0x12d91930u, _esp0);
  ESP += 4; return;
}

/* FUN_10001970 @ 0x12d91970 (313 bytes, 78 insns) */
void f_12d91970(void) {
  FTRACE(0x12d91970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91970 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91971 mov ebp, esp */
  EBP = (ESP);
  /* 12d91973 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91977 jne 0x12d91a37 */
  if (!C.zf) goto L_12d91a37;
  /* 12d9197d call dword ptr [0x12db028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db028c))), 0x12d91983u);
  /* 12d91983 mov dword ptr [0x12dad520], eax */
  w32((uint32_t)(0x12dad520), (EAX));
  /* 12d91988 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9198a call 0x12d95430 */
  push32(0x12d9198fu); f_12d95430();
  /* 12d9198f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91994 jne 0x12d9199d */
  if (!C.zf) goto L_12d9199d;
  /* 12d91996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d91998 jmp 0x12d91aa5 */
  goto L_12d91aa5;
L_12d9199d:;
  /* 12d9199d mov eax, dword ptr [0x12dad520] */
  EAX = (r32((uint32_t)(0x12dad520)));
  /* 12d919a2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12d919a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d919aa mov dword ptr [0x12dad52c], eax */
  w32((uint32_t)(0x12dad52c), (EAX));
  /* 12d919af mov ecx, dword ptr [0x12dad520] */
  ECX = (r32((uint32_t)(0x12dad520)));
  /* 12d919b5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d919bb mov dword ptr [0x12dad528], ecx */
  w32((uint32_t)(0x12dad528), (ECX));
  /* 12d919c1 mov edx, dword ptr [0x12dad528] */
  EDX = (r32((uint32_t)(0x12dad528)));
  /* 12d919c7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12d919ca add edx, dword ptr [0x12dad52c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12dad52c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d919d0 mov dword ptr [0x12dad524], edx */
  w32((uint32_t)(0x12dad524), (EDX));
  /* 12d919d6 mov eax, dword ptr [0x12dad520] */
  EAX = (r32((uint32_t)(0x12dad520)));
  /* 12d919db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d919de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d919e3 mov dword ptr [0x12dad520], eax */
  w32((uint32_t)(0x12dad520), (EAX));
  /* 12d919e8 call 0x12d925a0 */
  push32(0x12d919edu); f_12d925a0();
  /* 12d919ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d919ef jne 0x12d919fd */
  if (!C.zf) goto L_12d919fd;
  /* 12d919f1 call 0x12d95480 */
  push32(0x12d919f6u); f_12d95480();
  /* 12d919f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d919f8 jmp 0x12d91aa5 */
  goto L_12d91aa5;
L_12d919fd:;
  /* 12d919fd call dword ptr [0x12db0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0288))), 0x12d91a03u);
  /* 12d91a03 mov dword ptr [0x12daf06c], eax */
  w32((uint32_t)(0x12daf06c), (EAX));
  /* 12d91a08 call 0x12d95210 */
  push32(0x12d91a0du); f_12d95210();
  /* 12d91a0d mov dword ptr [0x12dad508], eax */
  w32((uint32_t)(0x12dad508), (EAX));
  /* 12d91a12 call 0x12d92850 */
  push32(0x12d91a17u); f_12d92850();
  /* 12d91a17 call 0x12d94d00 */
  push32(0x12d91a1cu); f_12d94d00();
  /* 12d91a1c call 0x12d94bb0 */
  push32(0x12d91a21u); f_12d94bb0();
  /* 12d91a21 call 0x12d923a0 */
  push32(0x12d91a26u); f_12d923a0();
  /* 12d91a26 mov ecx, dword ptr [0x12dad504] */
  ECX = (r32((uint32_t)(0x12dad504)));
  /* 12d91a2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91a2f mov dword ptr [0x12dad504], ecx */
  w32((uint32_t)(0x12dad504), (ECX));
  /* 12d91a35 jmp 0x12d91aa0 */
  goto L_12d91aa0;
L_12d91a37:;
  /* 12d91a37 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91a3b jne 0x12d91a90 */
  if (!C.zf) goto L_12d91a90;
  /* 12d91a3d cmp dword ptr [0x12dad504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91a44 jle 0x12d91a8a */
  if ((C.zf||C.sf!=C.of)) goto L_12d91a8a;
  /* 12d91a46 mov edx, dword ptr [0x12dad504] */
  EDX = (r32((uint32_t)(0x12dad504)));
  /* 12d91a4c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d91a4f mov dword ptr [0x12dad504], edx */
  w32((uint32_t)(0x12dad504), (EDX));
  /* 12d91a55 cmp dword ptr [0x12dad558], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad558))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91a5c jne 0x12d91a63 */
  if (!C.zf) goto L_12d91a63;
  /* 12d91a5e call 0x12d92420 */
  push32(0x12d91a63u); f_12d92420();
L_12d91a63:;
  /* 12d91a63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d91a65 call 0x12d94150 */
  push32(0x12d91a6au); f_12d94150();
  /* 12d91a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91a6d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d91a70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91a72 je 0x12d91a79 */
  if (C.zf) goto L_12d91a79;
  /* 12d91a74 call 0x12d94a60 */
  push32(0x12d91a79u); f_12d94a60();
L_12d91a79:;
  /* 12d91a79 call 0x12d92b80 */
  push32(0x12d91a7eu); f_12d92b80();
  /* 12d91a7e call 0x12d92630 */
  push32(0x12d91a83u); f_12d92630();
  /* 12d91a83 call 0x12d95480 */
  push32(0x12d91a88u); f_12d95480();
  /* 12d91a88 jmp 0x12d91a8e */
  goto L_12d91a8e;
L_12d91a8a:;
  /* 12d91a8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d91a8c jmp 0x12d91aa5 */
  goto L_12d91aa5;
L_12d91a8e:;
  /* 12d91a8e jmp 0x12d91aa0 */
  goto L_12d91aa0;
L_12d91a90:;
  /* 12d91a90 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91a94 jne 0x12d91aa0 */
  if (!C.zf) goto L_12d91aa0;
  /* 12d91a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d91a98 call 0x12d92720 */
  push32(0x12d91a9du); f_12d92720();
  /* 12d91a9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d91aa0:;
  /* 12d91aa0 mov eax, 1 */
  EAX = (0x1u);
L_12d91aa5:;
  /* 12d91aa5 pop ebp */
  EBP = (pop32());
  /* 12d91aa6 ret 0xc */
  ESPCHK(0x12d91970u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12d91ab0 (243 bytes, 86 insns) */
void f_12d91ab0(void) {
  FTRACE(0x12d91ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12d91ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91ab4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d91abb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91abf jne 0x12d91ad1 */
  if (!C.zf) goto L_12d91ad1;
  /* 12d91ac1 cmp dword ptr [0x12dad504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91ac8 jne 0x12d91ad1 */
  if (!C.zf) goto L_12d91ad1;
  /* 12d91aca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d91acc jmp 0x12d91b9d */
  goto L_12d91b9d;
L_12d91ad1:;
  /* 12d91ad1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91ad5 je 0x12d91add */
  if (C.zf) goto L_12d91add;
  /* 12d91ad7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91adb jne 0x12d91b1f */
  if (!C.zf) goto L_12d91b1f;
L_12d91add:;
  /* 12d91add cmp dword ptr [0x12daf07c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daf07c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91ae4 je 0x12d91afb */
  if (C.zf) goto L_12d91afb;
  /* 12d91ae6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d91ae9 push eax */
  push32((uint32_t)(EAX));
  /* 12d91aea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91aed push ecx */
  push32((uint32_t)(ECX));
  /* 12d91aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91af1 push edx */
  push32((uint32_t)(EDX));
  /* 12d91af2 call dword ptr [0x12daf07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12daf07c))), 0x12d91af8u);
  /* 12d91af8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d91afb:;
  /* 12d91afb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91aff je 0x12d91b15 */
  if (C.zf) goto L_12d91b15;
  /* 12d91b01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d91b04 push eax */
  push32((uint32_t)(EAX));
  /* 12d91b05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91b08 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91b09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91b0c push edx */
  push32((uint32_t)(EDX));
  /* 12d91b0d call 0x12d91970 */
  push32(0x12d91b12u); f_12d91970();
  /* 12d91b12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d91b15:;
  /* 12d91b15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91b19 jne 0x12d91b1f */
  if (!C.zf) goto L_12d91b1f;
  /* 12d91b1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d91b1d jmp 0x12d91b9d */
  goto L_12d91b9d;
L_12d91b1f:;
  /* 12d91b1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d91b22 push eax */
  push32((uint32_t)(EAX));
  /* 12d91b23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91b26 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91b2a push edx */
  push32((uint32_t)(EDX));
  /* 12d91b2b call 0x12d91014 */
  push32(0x12d91b30u); f_12d91014();
  /* 12d91b30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d91b33 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91b37 jne 0x12d91b4e */
  if (!C.zf) goto L_12d91b4e;
  /* 12d91b39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91b3d jne 0x12d91b4e */
  if (!C.zf) goto L_12d91b4e;
  /* 12d91b3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d91b42 push eax */
  push32((uint32_t)(EAX));
  /* 12d91b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d91b45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91b48 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91b49 call 0x12d91970 */
  push32(0x12d91b4eu); f_12d91970();
L_12d91b4e:;
  /* 12d91b4e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91b52 je 0x12d91b5a */
  if (C.zf) goto L_12d91b5a;
  /* 12d91b54 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91b58 jne 0x12d91b9a */
  if (!C.zf) goto L_12d91b9a;
L_12d91b5a:;
  /* 12d91b5a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d91b5d push edx */
  push32((uint32_t)(EDX));
  /* 12d91b5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91b61 push eax */
  push32((uint32_t)(EAX));
  /* 12d91b62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91b65 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91b66 call 0x12d91970 */
  push32(0x12d91b6bu); f_12d91970();
  /* 12d91b6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91b6d jne 0x12d91b76 */
  if (!C.zf) goto L_12d91b76;
  /* 12d91b6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d91b76:;
  /* 12d91b76 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91b7a je 0x12d91b9a */
  if (C.zf) goto L_12d91b9a;
  /* 12d91b7c cmp dword ptr [0x12daf07c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daf07c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91b83 je 0x12d91b9a */
  if (C.zf) goto L_12d91b9a;
  /* 12d91b85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d91b88 push edx */
  push32((uint32_t)(EDX));
  /* 12d91b89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91b8c push eax */
  push32((uint32_t)(EAX));
  /* 12d91b8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91b90 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91b91 call dword ptr [0x12daf07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12daf07c))), 0x12d91b97u);
  /* 12d91b97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d91b9a:;
  /* 12d91b9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d91b9d:;
  /* 12d91b9d mov esp, ebp */
  ESP = (EBP);
  /* 12d91b9f pop ebp */
  EBP = (pop32());
  /* 12d91ba0 ret 0xc */
  ESPCHK(0x12d91ab0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12d91bb0 (58 bytes, 18 insns) */
void f_12d91bb0(void) {
  FTRACE(0x12d91bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d91bb3 cmp dword ptr [0x12dad510], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad510))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91bba je 0x12d91bce */
  if (C.zf) goto L_12d91bce;
  /* 12d91bbc cmp dword ptr [0x12dad510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91bc3 jne 0x12d91bd3 */
  if (!C.zf) goto L_12d91bd3;
  /* 12d91bc5 cmp dword ptr [0x12dad514], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad514))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91bcc jne 0x12d91bd3 */
  if (!C.zf) goto L_12d91bd3;
L_12d91bce:;
  /* 12d91bce call 0x12d95520 */
  push32(0x12d91bd3u); f_12d95520();
L_12d91bd3:;
  /* 12d91bd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91bd6 push eax */
  push32((uint32_t)(EAX));
  /* 12d91bd7 call 0x12d95570 */
  push32(0x12d91bdcu); f_12d95570();
  /* 12d91bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91bdf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12d91be4 call dword ptr [0x12dabaf0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dabaf0))), 0x12d91beau);
  /* 12d91bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91bed pop ebp */
  EBP = (pop32());
  /* 12d91bee ret  */
  ESPCHK(0x12d91bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bf0 @ 0x12d91bf0 (11 bytes, 5 insns) */
void f_12d91bf0(void) {
  FTRACE(0x12d91bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d91bf3 call dword ptr [0x12db0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0290))), 0x12d91bf9u);
  /* 12d91bf9 pop ebp */
  EBP = (pop32());
  /* 12d91bfa ret  */
  ESPCHK(0x12d91bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c00 @ 0x12d91c00 (87 bytes, 30 insns) */
void f_12d91c00(void) {
  FTRACE(0x12d91c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91c01 mov ebp, esp */
  EBP = (ESP);
  /* 12d91c03 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91c04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91c08 jl 0x12d91c10 */
  if ((C.sf!=C.of)) goto L_12d91c10;
  /* 12d91c0a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91c0e jl 0x12d91c15 */
  if ((C.sf!=C.of)) goto L_12d91c15;
L_12d91c10:;
  /* 12d91c10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d91c13 jmp 0x12d91c53 */
  goto L_12d91c53;
L_12d91c15:;
  /* 12d91c15 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91c19 jne 0x12d91c27 */
  if (!C.zf) goto L_12d91c27;
  /* 12d91c1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91c1e mov eax, dword ptr [eax*4 + 0x12dabaf8] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12dabaf8)));
  /* 12d91c25 jmp 0x12d91c53 */
  goto L_12d91c53;
L_12d91c27:;
  /* 12d91c27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91c2a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d91c2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d91c2f je 0x12d91c36 */
  if (C.zf) goto L_12d91c36;
  /* 12d91c31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d91c34 jmp 0x12d91c53 */
  goto L_12d91c53;
L_12d91c36:;
  /* 12d91c36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91c39 mov eax, dword ptr [edx*4 + 0x12dabaf8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12dabaf8)));
  /* 12d91c40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d91c43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91c46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91c49 mov dword ptr [ecx*4 + 0x12dabaf8], edx */
  w32((uint32_t)(ECX*4 + 0x12dabaf8), (EDX));
  /* 12d91c50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d91c53:;
  /* 12d91c53 mov esp, ebp */
  ESP = (EBP);
  /* 12d91c55 pop ebp */
  EBP = (pop32());
  /* 12d91c56 ret  */
  ESPCHK(0x12d91c00u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12d91c60 (126 bytes, 38 insns) */
void f_12d91c60(void) {
  FTRACE(0x12d91c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91c61 mov ebp, esp */
  EBP = (ESP);
  /* 12d91c63 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91c64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91c68 jl 0x12d91c70 */
  if ((C.sf!=C.of)) goto L_12d91c70;
  /* 12d91c6a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91c6e jl 0x12d91c77 */
  if ((C.sf!=C.of)) goto L_12d91c77;
L_12d91c70:;
  /* 12d91c70 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12d91c75 jmp 0x12d91cda */
  goto L_12d91cda;
L_12d91c77:;
  /* 12d91c77 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91c7b jne 0x12d91c89 */
  if (!C.zf) goto L_12d91c89;
  /* 12d91c7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91c80 mov eax, dword ptr [eax*4 + 0x12dabb04] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12dabb04)));
  /* 12d91c87 jmp 0x12d91cda */
  goto L_12d91cda;
L_12d91c89:;
  /* 12d91c89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91c8c mov edx, dword ptr [ecx*4 + 0x12dabb04] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dabb04)));
  /* 12d91c93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d91c96 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91c9a jne 0x12d91cb0 */
  if (!C.zf) goto L_12d91cb0;
  /* 12d91c9c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12d91c9e call dword ptr [0x12db0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0294))), 0x12d91ca4u);
  /* 12d91ca4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91ca7 mov dword ptr [ecx*4 + 0x12dabb04], eax */
  w32((uint32_t)(ECX*4 + 0x12dabb04), (EAX));
  /* 12d91cae jmp 0x12d91cd7 */
  goto L_12d91cd7;
L_12d91cb0:;
  /* 12d91cb0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91cb4 jne 0x12d91cca */
  if (!C.zf) goto L_12d91cca;
  /* 12d91cb6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d91cb8 call dword ptr [0x12db0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0294))), 0x12d91cbeu);
  /* 12d91cbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91cc1 mov dword ptr [edx*4 + 0x12dabb04], eax */
  w32((uint32_t)(EDX*4 + 0x12dabb04), (EAX));
  /* 12d91cc8 jmp 0x12d91cd7 */
  goto L_12d91cd7;
L_12d91cca:;
  /* 12d91cca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91ccd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91cd0 mov dword ptr [eax*4 + 0x12dabb04], ecx */
  w32((uint32_t)(EAX*4 + 0x12dabb04), (ECX));
L_12d91cd7:;
  /* 12d91cd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d91cda:;
  /* 12d91cda mov esp, ebp */
  ESP = (EBP);
  /* 12d91cdc pop ebp */
  EBP = (pop32());
  /* 12d91cdd ret  */
  ESPCHK(0x12d91c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ce0 @ 0x12d91ce0 (28 bytes, 11 insns) */
void f_12d91ce0(void) {
  FTRACE(0x12d91ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12d91ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91ce4 mov eax, dword ptr [0x12daf060] */
  EAX = (r32((uint32_t)(0x12daf060)));
  /* 12d91ce9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d91cec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91cef mov dword ptr [0x12daf060], ecx */
  w32((uint32_t)(0x12daf060), (ECX));
  /* 12d91cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d91cf8 mov esp, ebp */
  ESP = (EBP);
  /* 12d91cfa pop ebp */
  EBP = (pop32());
  /* 12d91cfb ret  */
  ESPCHK(0x12d91ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d00 @ 0x12d91d00 (912 bytes, 248 insns) */
void f_12d91d00(void) {
  FTRACE(0x12d91d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d91d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d91d01 mov ebp, esp */
  EBP = (ESP);
  /* 12d91d03 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12d91d08 call 0x12d95de0 */
  push32(0x12d91d0du); f_12d95de0();
  /* 12d91d0d push edi */
  push32((uint32_t)(EDI));
  /* 12d91d0e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12d91d15 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12d91d1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d91d1c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12d91d22 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d91d24 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12d91d26 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12d91d27 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12d91d2e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12d91d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d91d35 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12d91d3b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d91d3d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12d91d3f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12d91d40 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12d91d47 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12d91d4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d91d4e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12d91d54 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12d91d56 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12d91d58 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12d91d59 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12d91d5c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12d91d62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91d66 jl 0x12d91d6e */
  if ((C.sf!=C.of)) goto L_12d91d6e;
  /* 12d91d68 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91d6c jl 0x12d91d76 */
  if ((C.sf!=C.of)) goto L_12d91d76;
L_12d91d6e:;
  /* 12d91d6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d91d71 jmp 0x12d9208b */
  goto L_12d9208b;
L_12d91d76:;
  /* 12d91d76 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91d7a jne 0x12d91e20 */
  if (!C.zf) goto L_12d91e20;
  /* 12d91d80 push 0x12dabaf4 */
  push32((uint32_t)(0x12dabaf4u));
  /* 12d91d85 call dword ptr [0x12db02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ac))), 0x12d91d8bu);
  /* 12d91d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91d8d jle 0x12d91e20 */
  if ((C.zf||C.sf!=C.of)) goto L_12d91e20;
  /* 12d91d93 cmp dword ptr [0x12dad518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91d9a jne 0x12d91dde */
  if (!C.zf) goto L_12d91dde;
  /* 12d91d9c push 0x12da91bc */
  push32((uint32_t)(0x12da91bcu));
  /* 12d91da1 call dword ptr [0x12db02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02a8))), 0x12d91da7u);
  /* 12d91da7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12d91dad cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91db4 je 0x12d91dd6 */
  if (C.zf) goto L_12d91dd6;
  /* 12d91db6 push 0x12da91b0 */
  push32((uint32_t)(0x12da91b0u));
  /* 12d91dbb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12d91dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91dc2 call dword ptr [0x12db02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02a4))), 0x12d91dc8u);
  /* 12d91dc8 mov dword ptr [0x12dad518], eax */
  w32((uint32_t)(0x12dad518), (EAX));
  /* 12d91dcd cmp dword ptr [0x12dad518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91dd4 jne 0x12d91dde */
  if (!C.zf) goto L_12d91dde;
L_12d91dd6:;
  /* 12d91dd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d91dd9 jmp 0x12d9208b */
  goto L_12d9208b;
L_12d91dde:;
  /* 12d91dde mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d91de1 push edx */
  push32((uint32_t)(EDX));
  /* 12d91de2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91de5 push eax */
  push32((uint32_t)(EAX));
  /* 12d91de6 push 0x12da917c */
  push32((uint32_t)(0x12da917cu));
  /* 12d91deb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12d91df1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91df2 call dword ptr [0x12dad518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad518))), 0x12d91df8u);
  /* 12d91df8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91dfb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d91e01 push edx */
  push32((uint32_t)(EDX));
  /* 12d91e02 call dword ptr [0x12db02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02a0))), 0x12d91e08u);
  /* 12d91e08 push 0x12dabaf4 */
  push32((uint32_t)(0x12dabaf4u));
  /* 12d91e0d call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12d91e13u);
  /* 12d91e13 call 0x12d91bf0 */
  push32(0x12d91e18u); f_12d91bf0();
  /* 12d91e18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d91e1b jmp 0x12d9208b */
  goto L_12d9208b;
L_12d91e20:;
  /* 12d91e20 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91e24 je 0x12d91e5d */
  if (C.zf) goto L_12d91e5d;
  /* 12d91e26 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12d91e2c push eax */
  push32((uint32_t)(EAX));
  /* 12d91e2d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d91e30 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91e31 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12d91e36 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12d91e3c push edx */
  push32((uint32_t)(EDX));
  /* 12d91e3d call 0x12d95ce0 */
  push32(0x12d91e42u); f_12d95ce0();
  /* 12d91e42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91e45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91e47 jge 0x12d91e5d */
  if ((C.sf==C.of)) goto L_12d91e5d;
  /* 12d91e49 push 0x12da9150 */
  push32((uint32_t)(0x12da9150u));
  /* 12d91e4e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12d91e54 push eax */
  push32((uint32_t)(EAX));
  /* 12d91e55 call 0x12d95bf0 */
  push32(0x12d91e5au); f_12d95bf0();
  /* 12d91e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d91e5d:;
  /* 12d91e5d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91e61 jne 0x12d91e95 */
  if (!C.zf) goto L_12d91e95;
  /* 12d91e63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91e67 je 0x12d91e75 */
  if (C.zf) goto L_12d91e75;
  /* 12d91e69 mov dword ptr [ebp - 0x3028], 0x12da913c */
  w32((uint32_t)(EBP + -0x3028), (0x12da913cu));
  /* 12d91e73 jmp 0x12d91e7f */
  goto L_12d91e7f;
L_12d91e75:;
  /* 12d91e75 mov dword ptr [ebp - 0x3028], 0x12da9128 */
  w32((uint32_t)(EBP + -0x3028), (0x12da9128u));
L_12d91e7f:;
  /* 12d91e7f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12d91e85 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91e86 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12d91e8c push edx */
  push32((uint32_t)(EDX));
  /* 12d91e8d call 0x12d95bf0 */
  push32(0x12d91e92u); f_12d95bf0();
  /* 12d91e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d91e95:;
  /* 12d91e95 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12d91e9b push eax */
  push32((uint32_t)(EAX));
  /* 12d91e9c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12d91ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91ea3 call 0x12d95c00 */
  push32(0x12d91ea8u); f_12d95c00();
  /* 12d91ea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91eab cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91eaf jne 0x12d91eea */
  if (!C.zf) goto L_12d91eea;
  /* 12d91eb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91eb4 mov eax, dword ptr [edx*4 + 0x12dabaf8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12dabaf8)));
  /* 12d91ebb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d91ebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91ec0 je 0x12d91ed6 */
  if (C.zf) goto L_12d91ed6;
  /* 12d91ec2 push 0x12da9124 */
  push32((uint32_t)(0x12da9124u));
  /* 12d91ec7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12d91ecd push ecx */
  push32((uint32_t)(ECX));
  /* 12d91ece call 0x12d95c00 */
  push32(0x12d91ed3u); f_12d95c00();
  /* 12d91ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d91ed6:;
  /* 12d91ed6 push 0x12da9120 */
  push32((uint32_t)(0x12da9120u));
  /* 12d91edb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12d91ee1 push edx */
  push32((uint32_t)(EDX));
  /* 12d91ee2 call 0x12d95c00 */
  push32(0x12d91ee7u); f_12d95c00();
  /* 12d91ee7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d91eea:;
  /* 12d91eea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91eee je 0x12d91f32 */
  if (C.zf) goto L_12d91f32;
  /* 12d91ef0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12d91ef6 push eax */
  push32((uint32_t)(EAX));
  /* 12d91ef7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d91efa push ecx */
  push32((uint32_t)(ECX));
  /* 12d91efb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d91efe push edx */
  push32((uint32_t)(EDX));
  /* 12d91eff push 0x12da9114 */
  push32((uint32_t)(0x12da9114u));
  /* 12d91f04 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d91f09 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12d91f0f push eax */
  push32((uint32_t)(EAX));
  /* 12d91f10 call 0x12d95af0 */
  push32(0x12d91f15u); f_12d95af0();
  /* 12d91f15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91f18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91f1a jge 0x12d91f30 */
  if ((C.sf==C.of)) goto L_12d91f30;
  /* 12d91f1c push 0x12da9150 */
  push32((uint32_t)(0x12da9150u));
  /* 12d91f21 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12d91f27 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91f28 call 0x12d95bf0 */
  push32(0x12d91f2du); f_12d95bf0();
  /* 12d91f2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d91f30:;
  /* 12d91f30 jmp 0x12d91f48 */
  goto L_12d91f48;
L_12d91f32:;
  /* 12d91f32 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12d91f38 push edx */
  push32((uint32_t)(EDX));
  /* 12d91f39 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12d91f3f push eax */
  push32((uint32_t)(EAX));
  /* 12d91f40 call 0x12d95bf0 */
  push32(0x12d91f45u); f_12d95bf0();
  /* 12d91f45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d91f48:;
  /* 12d91f48 cmp dword ptr [0x12daf060], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daf060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91f4f je 0x12d91f8c */
  if (C.zf) goto L_12d91f8c;
  /* 12d91f51 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12d91f57 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91f58 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d91f5e push edx */
  push32((uint32_t)(EDX));
  /* 12d91f5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91f62 push eax */
  push32((uint32_t)(EAX));
  /* 12d91f63 call dword ptr [0x12daf060] */
  call_ind((uint32_t)(r32((uint32_t)(0x12daf060))), 0x12d91f69u);
  /* 12d91f69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91f6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d91f6e je 0x12d91f8c */
  if (C.zf) goto L_12d91f8c;
  /* 12d91f70 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91f74 jne 0x12d91f81 */
  if (!C.zf) goto L_12d91f81;
  /* 12d91f76 push 0x12dabaf4 */
  push32((uint32_t)(0x12dabaf4u));
  /* 12d91f7b call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12d91f81u);
L_12d91f81:;
  /* 12d91f81 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12d91f87 jmp 0x12d9208b */
  goto L_12d9208b;
L_12d91f8c:;
  /* 12d91f8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91f8f mov edx, dword ptr [ecx*4 + 0x12dabaf8] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dabaf8)));
  /* 12d91f96 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d91f99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d91f9b je 0x12d91fdb */
  if (C.zf) goto L_12d91fdb;
  /* 12d91f9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91fa0 cmp dword ptr [eax*4 + 0x12dabb04], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12dabb04))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d91fa8 je 0x12d91fdb */
  if (C.zf) goto L_12d91fdb;
  /* 12d91faa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d91fac lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12d91fb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d91fb3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d91fb9 push edx */
  push32((uint32_t)(EDX));
  /* 12d91fba call 0x12d95a70 */
  push32(0x12d91fbfu); f_12d95a70();
  /* 12d91fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d91fc2 push eax */
  push32((uint32_t)(EAX));
  /* 12d91fc3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12d91fc9 push eax */
  push32((uint32_t)(EAX));
  /* 12d91fca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91fcd mov edx, dword ptr [ecx*4 + 0x12dabb04] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dabb04)));
  /* 12d91fd4 push edx */
  push32((uint32_t)(EDX));
  /* 12d91fd5 call dword ptr [0x12db0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0298))), 0x12d91fdbu);
L_12d91fdb:;
  /* 12d91fdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91fde mov ecx, dword ptr [eax*4 + 0x12dabaf8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12dabaf8)));
  /* 12d91fe5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d91fe8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d91fea je 0x12d91ff9 */
  if (C.zf) goto L_12d91ff9;
  /* 12d91fec lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12d91ff2 push edx */
  push32((uint32_t)(EDX));
  /* 12d91ff3 call dword ptr [0x12db02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02a0))), 0x12d91ff9u);
L_12d91ff9:;
  /* 12d91ff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d91ffc mov ecx, dword ptr [eax*4 + 0x12dabaf8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12dabaf8)));
  /* 12d92003 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d92006 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d92008 je 0x12d92078 */
  if (C.zf) goto L_12d92078;
  /* 12d9200a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9200e je 0x12d9202d */
  if (C.zf) goto L_12d9202d;
  /* 12d92010 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d92012 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12d92018 push edx */
  push32((uint32_t)(EDX));
  /* 12d92019 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9201c push eax */
  push32((uint32_t)(EAX));
  /* 12d9201d call 0x12d95780 */
  push32(0x12d92022u); f_12d95780();
  /* 12d92022 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92025 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12d9202b jmp 0x12d92037 */
  goto L_12d92037;
L_12d9202d:;
  /* 12d9202d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12d92037:;
  /* 12d92037 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12d9203d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9203e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d92041 push edx */
  push32((uint32_t)(EDX));
  /* 12d92042 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12d92048 push eax */
  push32((uint32_t)(EAX));
  /* 12d92049 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9204c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9204d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92050 push edx */
  push32((uint32_t)(EDX));
  /* 12d92051 call 0x12d92090 */
  push32(0x12d92056u); f_12d92090();
  /* 12d92056 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92059 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12d9205f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92063 jne 0x12d92070 */
  if (!C.zf) goto L_12d92070;
  /* 12d92065 push 0x12dabaf4 */
  push32((uint32_t)(0x12dabaf4u));
  /* 12d9206a call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12d92070u);
L_12d92070:;
  /* 12d92070 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12d92076 jmp 0x12d9208b */
  goto L_12d9208b;
L_12d92078:;
  /* 12d92078 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9207c jne 0x12d92089 */
  if (!C.zf) goto L_12d92089;
  /* 12d9207e push 0x12dabaf4 */
  push32((uint32_t)(0x12dabaf4u));
  /* 12d92083 call dword ptr [0x12db029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db029c))), 0x12d92089u);
L_12d92089:;
  /* 12d92089 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9208b:;
  /* 12d9208b pop edi */
  EDI = (pop32());
  /* 12d9208c mov esp, ebp */
  ESP = (EBP);
  /* 12d9208e pop ebp */
  EBP = (pop32());
  /* 12d9208f ret  */
  ESPCHK(0x12d91d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002090 @ 0x12d92090 (780 bytes, 197 insns) */
void f_12d92090(void) {
  FTRACE(0x12d92090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92090 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92091 mov ebp, esp */
  EBP = (ESP);
  /* 12d92093 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12d92098 call 0x12d95de0 */
  push32(0x12d9209du); f_12d95de0();
L_12d9209d:;
  /* 12d9209d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d920a1 jne 0x12d920c8 */
  if (!C.zf) goto L_12d920c8;
  /* 12d920a3 push 0x12da930c */
  push32((uint32_t)(0x12da930cu));
  /* 12d920a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d920aa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12d920af push 0x12da9300 */
  push32((uint32_t)(0x12da9300u));
  /* 12d920b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d920b6 call 0x12d91d00 */
  push32(0x12d920bbu); f_12d91d00();
  /* 12d920bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d920be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d920c1 jne 0x12d920c8 */
  if (!C.zf) goto L_12d920c8;
  /* 12d920c3 call 0x12d91bf0 */
  push32(0x12d920c8u); f_12d91bf0();
L_12d920c8:;
  /* 12d920c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d920ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d920cc jne 0x12d9209d */
  if (!C.zf) goto L_12d9209d;
  /* 12d920ce push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12d920d3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12d920d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d920da push 0 */
  push32((uint32_t)(0x0u));
  /* 12d920dc call dword ptr [0x12db02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02b0))), 0x12d920e2u);
  /* 12d920e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d920e4 jne 0x12d920fa */
  if (!C.zf) goto L_12d920fa;
  /* 12d920e6 push 0x12da92e8 */
  push32((uint32_t)(0x12da92e8u));
  /* 12d920eb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12d920f1 push edx */
  push32((uint32_t)(EDX));
  /* 12d920f2 call 0x12d95bf0 */
  push32(0x12d920f7u); f_12d95bf0();
  /* 12d920f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d920fa:;
  /* 12d920fa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12d92100 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d92103 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92106 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92107 call 0x12d95a70 */
  push32(0x12d9210cu); f_12d95a70();
  /* 12d9210c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9210f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92112 jbe 0x12d9213d */
  if ((C.cf||C.zf)) goto L_12d9213d;
  /* 12d92114 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92117 push edx */
  push32((uint32_t)(EDX));
  /* 12d92118 call 0x12d95a70 */
  push32(0x12d9211du); f_12d95a70();
  /* 12d9211d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92120 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92123 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12d92127 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d9212a push 3 */
  push32((uint32_t)(0x3u));
  /* 12d9212c push 0x12da92e4 */
  push32((uint32_t)(0x12da92e4u));
  /* 12d92131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92134 push eax */
  push32((uint32_t)(EAX));
  /* 12d92135 call 0x12d96460 */
  push32(0x12d9213au); f_12d96460();
  /* 12d9213a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9213d:;
  /* 12d9213d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d92140 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12d92146 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9214d je 0x12d92198 */
  if (C.zf) goto L_12d92198;
  /* 12d9214f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d92155 push edx */
  push32((uint32_t)(EDX));
  /* 12d92156 call 0x12d95a70 */
  push32(0x12d9215bu); f_12d95a70();
  /* 12d9215b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9215e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92161 jbe 0x12d92198 */
  if ((C.cf||C.zf)) goto L_12d92198;
  /* 12d92163 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d92169 push eax */
  push32((uint32_t)(EAX));
  /* 12d9216a call 0x12d95a70 */
  push32(0x12d9216fu); f_12d95a70();
  /* 12d9216f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92172 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d92178 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12d9217c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12d92182 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d92184 push 0x12da92e4 */
  push32((uint32_t)(0x12da92e4u));
  /* 12d92189 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d9218f push eax */
  push32((uint32_t)(EAX));
  /* 12d92190 call 0x12d96460 */
  push32(0x12d92195u); f_12d96460();
  /* 12d92195 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d92198:;
  /* 12d92198 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9219c jne 0x12d921aa */
  if (!C.zf) goto L_12d921aa;
  /* 12d9219e mov dword ptr [ebp - 0x1114], 0x12da9270 */
  w32((uint32_t)(EBP + -0x1114), (0x12da9270u));
  /* 12d921a8 jmp 0x12d921b4 */
  goto L_12d921b4;
L_12d921aa:;
  /* 12d921aa mov dword ptr [ebp - 0x1114], 0x12da9010 */
  w32((uint32_t)(EBP + -0x1114), (0x12da9010u));
L_12d921b4:;
  /* 12d921b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d921b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d921ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d921bc je 0x12d921c9 */
  if (C.zf) goto L_12d921c9;
  /* 12d921be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d921c1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12d921c7 jmp 0x12d921d3 */
  goto L_12d921d3;
L_12d921c9:;
  /* 12d921c9 mov dword ptr [ebp - 0x1118], 0x12da9010 */
  w32((uint32_t)(EBP + -0x1118), (0x12da9010u));
L_12d921d3:;
  /* 12d921d3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d921d6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d921d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d921db je 0x12d921ef */
  if (C.zf) goto L_12d921ef;
  /* 12d921dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d921e1 jne 0x12d921ef */
  if (!C.zf) goto L_12d921ef;
  /* 12d921e3 mov dword ptr [ebp - 0x111c], 0x12da9260 */
  w32((uint32_t)(EBP + -0x111c), (0x12da9260u));
  /* 12d921ed jmp 0x12d921f9 */
  goto L_12d921f9;
L_12d921ef:;
  /* 12d921ef mov dword ptr [ebp - 0x111c], 0x12da9010 */
  w32((uint32_t)(EBP + -0x111c), (0x12da9010u));
L_12d921f9:;
  /* 12d921f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d921fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d921ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d92201 je 0x12d9220f */
  if (C.zf) goto L_12d9220f;
  /* 12d92203 mov dword ptr [ebp - 0x1120], 0x12da925c */
  w32((uint32_t)(EBP + -0x1120), (0x12da925cu));
  /* 12d9220d jmp 0x12d92219 */
  goto L_12d92219;
L_12d9220f:;
  /* 12d9220f mov dword ptr [ebp - 0x1120], 0x12da9010 */
  w32((uint32_t)(EBP + -0x1120), (0x12da9010u));
L_12d92219:;
  /* 12d92219 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9221d je 0x12d9222a */
  if (C.zf) goto L_12d9222a;
  /* 12d9221f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d92222 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12d92228 jmp 0x12d92234 */
  goto L_12d92234;
L_12d9222a:;
  /* 12d9222a mov dword ptr [ebp - 0x1124], 0x12da9010 */
  w32((uint32_t)(EBP + -0x1124), (0x12da9010u));
L_12d92234:;
  /* 12d92234 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92238 je 0x12d92246 */
  if (C.zf) goto L_12d92246;
  /* 12d9223a mov dword ptr [ebp - 0x1128], 0x12da9254 */
  w32((uint32_t)(EBP + -0x1128), (0x12da9254u));
  /* 12d92244 jmp 0x12d92250 */
  goto L_12d92250;
L_12d92246:;
  /* 12d92246 mov dword ptr [ebp - 0x1128], 0x12da9010 */
  w32((uint32_t)(EBP + -0x1128), (0x12da9010u));
L_12d92250:;
  /* 12d92250 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92254 je 0x12d92261 */
  if (C.zf) goto L_12d92261;
  /* 12d92256 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d92259 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12d9225f jmp 0x12d9226b */
  goto L_12d9226b;
L_12d92261:;
  /* 12d92261 mov dword ptr [ebp - 0x112c], 0x12da9010 */
  w32((uint32_t)(EBP + -0x112c), (0x12da9010u));
L_12d9226b:;
  /* 12d9226b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9226f je 0x12d9227d */
  if (C.zf) goto L_12d9227d;
  /* 12d92271 mov dword ptr [ebp - 0x1130], 0x12da924c */
  w32((uint32_t)(EBP + -0x1130), (0x12da924cu));
  /* 12d9227b jmp 0x12d92287 */
  goto L_12d92287;
L_12d9227d:;
  /* 12d9227d mov dword ptr [ebp - 0x1130], 0x12da9010 */
  w32((uint32_t)(EBP + -0x1130), (0x12da9010u));
L_12d92287:;
  /* 12d92287 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9228e je 0x12d9229e */
  if (C.zf) goto L_12d9229e;
  /* 12d92290 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12d92296 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12d9229c jmp 0x12d922a8 */
  goto L_12d922a8;
L_12d9229e:;
  /* 12d9229e mov dword ptr [ebp - 0x1134], 0x12da9010 */
  w32((uint32_t)(EBP + -0x1134), (0x12da9010u));
L_12d922a8:;
  /* 12d922a8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d922af je 0x12d922bd */
  if (C.zf) goto L_12d922bd;
  /* 12d922b1 mov dword ptr [ebp - 0x1138], 0x12da9240 */
  w32((uint32_t)(EBP + -0x1138), (0x12da9240u));
  /* 12d922bb jmp 0x12d922c7 */
  goto L_12d922c7;
L_12d922bd:;
  /* 12d922bd mov dword ptr [ebp - 0x1138], 0x12da9010 */
  w32((uint32_t)(EBP + -0x1138), (0x12da9010u));
L_12d922c7:;
  /* 12d922c7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12d922cd push edx */
  push32((uint32_t)(EDX));
  /* 12d922ce mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12d922d4 push eax */
  push32((uint32_t)(EAX));
  /* 12d922d5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12d922db push ecx */
  push32((uint32_t)(ECX));
  /* 12d922dc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12d922e2 push edx */
  push32((uint32_t)(EDX));
  /* 12d922e3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12d922e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d922ea mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12d922f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d922f1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12d922f7 push edx */
  push32((uint32_t)(EDX));
  /* 12d922f8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12d922fe push eax */
  push32((uint32_t)(EAX));
  /* 12d922ff mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12d92305 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92306 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12d9230c push edx */
  push32((uint32_t)(EDX));
  /* 12d9230d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92310 push eax */
  push32((uint32_t)(EAX));
  /* 12d92311 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92314 mov edx, dword ptr [ecx*4 + 0x12dabb10] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dabb10)));
  /* 12d9231b push edx */
  push32((uint32_t)(EDX));
  /* 12d9231c push 0x12da91ec */
  push32((uint32_t)(0x12da91ecu));
  /* 12d92321 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d92326 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12d9232c push eax */
  push32((uint32_t)(EAX));
  /* 12d9232d call 0x12d95af0 */
  push32(0x12d92332u); f_12d95af0();
  /* 12d92332 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d92337 jge 0x12d9234d */
  if ((C.sf==C.of)) goto L_12d9234d;
  /* 12d92339 push 0x12da9150 */
  push32((uint32_t)(0x12da9150u));
  /* 12d9233e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12d92344 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92345 call 0x12d95bf0 */
  push32(0x12d9234au); f_12d95bf0();
  /* 12d9234a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9234d:;
  /* 12d9234d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12d92352 push 0x12da91c8 */
  push32((uint32_t)(0x12da91c8u));
  /* 12d92357 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12d9235d push edx */
  push32((uint32_t)(EDX));
  /* 12d9235e call 0x12d963a0 */
  push32(0x12d92363u); f_12d963a0();
  /* 12d92363 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92366 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12d9236c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92373 jne 0x12d92386 */
  if (!C.zf) goto L_12d92386;
  /* 12d92375 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d92377 call 0x12d960e0 */
  push32(0x12d9237cu); f_12d960e0();
  /* 12d9237c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9237f push 3 */
  push32((uint32_t)(0x3u));
  /* 12d92381 call 0x12d92400 */
  push32(0x12d92386u); f_12d92400();
L_12d92386:;
  /* 12d92386 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9238d jne 0x12d92396 */
  if (!C.zf) goto L_12d92396;
  /* 12d9238f mov eax, 1 */
  EAX = (0x1u);
  /* 12d92394 jmp 0x12d92398 */
  goto L_12d92398;
L_12d92396:;
  /* 12d92396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d92398:;
  /* 12d92398 mov esp, ebp */
  ESP = (EBP);
  /* 12d9239a pop ebp */
  EBP = (pop32());
  /* 12d9239b ret  */
  ESPCHK(0x12d92090u, _esp0);
  ESP += 4; return;
}

/* FUN_100023a0 @ 0x12d923a0 (56 bytes, 15 insns) */
void f_12d923a0(void) {
  FTRACE(0x12d923a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d923a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d923a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d923a3 cmp dword ptr [0x12daf05c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daf05c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d923aa je 0x12d923b2 */
  if (C.zf) goto L_12d923b2;
  /* 12d923ac call dword ptr [0x12daf05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12daf05c))), 0x12d923b2u);
L_12d923b2:;
  /* 12d923b2 push 0x12dab418 */
  push32((uint32_t)(0x12dab418u));
  /* 12d923b7 push 0x12dab208 */
  push32((uint32_t)(0x12dab208u));
  /* 12d923bc call 0x12d92570 */
  push32(0x12d923c1u); f_12d92570();
  /* 12d923c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d923c4 push 0x12dab104 */
  push32((uint32_t)(0x12dab104u));
  /* 12d923c9 push 0x12dab000 */
  push32((uint32_t)(0x12dab000u));
  /* 12d923ce call 0x12d92570 */
  push32(0x12d923d3u); f_12d92570();
  /* 12d923d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d923d6 pop ebp */
  EBP = (pop32());
  /* 12d923d7 ret  */
  ESPCHK(0x12d923a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023e0 @ 0x12d923e0 (21 bytes, 10 insns) */
void f_12d923e0(void) {
  FTRACE(0x12d923e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d923e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d923e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d923e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d923e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d923e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d923ea push eax */
  push32((uint32_t)(EAX));
  /* 12d923eb call 0x12d92460 */
  push32(0x12d923f0u); f_12d92460();
  /* 12d923f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d923f3 pop ebp */
  EBP = (pop32());
  /* 12d923f4 ret  */
  ESPCHK(0x12d923e0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12d92400 (21 bytes, 10 insns) */
void f_12d92400(void) {
  FTRACE(0x12d92400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92400 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92401 mov ebp, esp */
  EBP = (ESP);
  /* 12d92403 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92405 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92407 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9240a push eax */
  push32((uint32_t)(EAX));
  /* 12d9240b call 0x12d92460 */
  push32(0x12d92410u); f_12d92460();
  /* 12d92410 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92413 pop ebp */
  EBP = (pop32());
  /* 12d92414 ret  */
  ESPCHK(0x12d92400u, _esp0);
  ESP += 4; return;
}

/* FUN_10002420 @ 0x12d92420 (19 bytes, 9 insns) */
void f_12d92420(void) {
  FTRACE(0x12d92420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92420 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92421 mov ebp, esp */
  EBP = (ESP);
  /* 12d92423 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92425 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92427 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92429 call 0x12d92460 */
  push32(0x12d9242eu); f_12d92460();
  /* 12d9242e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92431 pop ebp */
  EBP = (pop32());
  /* 12d92432 ret  */
  ESPCHK(0x12d92420u, _esp0);
  ESP += 4; return;
}

/* FUN_10002440 @ 0x12d92440 (19 bytes, 9 insns) */
void f_12d92440(void) {
  FTRACE(0x12d92440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92440 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92441 mov ebp, esp */
  EBP = (ESP);
  /* 12d92443 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92445 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92447 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92449 call 0x12d92460 */
  push32(0x12d9244eu); f_12d92460();
  /* 12d9244e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92451 pop ebp */
  EBP = (pop32());
  /* 12d92452 ret  */
  ESPCHK(0x12d92440u, _esp0);
  ESP += 4; return;
}

/* FUN_10002460 @ 0x12d92460 (227 bytes, 61 insns) */
void f_12d92460(void) {
  FTRACE(0x12d92460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92460 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92461 mov ebp, esp */
  EBP = (ESP);
  /* 12d92463 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92464 call 0x12d92550 */
  push32(0x12d92469u); f_12d92550();
  /* 12d92469 cmp dword ptr [0x12dad55c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad55c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92470 jne 0x12d92483 */
  if (!C.zf) goto L_12d92483;
  /* 12d92472 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92475 push eax */
  push32((uint32_t)(EAX));
  /* 12d92476 call dword ptr [0x12db02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02bc))), 0x12d9247cu);
  /* 12d9247c push eax */
  push32((uint32_t)(EAX));
  /* 12d9247d call dword ptr [0x12db02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02b8))), 0x12d92483u);
L_12d92483:;
  /* 12d92483 mov dword ptr [0x12dad558], 1 */
  w32((uint32_t)(0x12dad558), (0x1u));
  /* 12d9248d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12d92490 mov byte ptr [0x12dad554], cl */
  w8((uint32_t)(0x12dad554), (CL));
  /* 12d92496 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9249a jne 0x12d924e3 */
  if (!C.zf) goto L_12d924e3;
  /* 12d9249c cmp dword ptr [0x12daf058], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daf058))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d924a3 je 0x12d924d1 */
  if (C.zf) goto L_12d924d1;
  /* 12d924a5 mov edx, dword ptr [0x12daf054] */
  EDX = (r32((uint32_t)(0x12daf054)));
  /* 12d924ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d924ae:;
  /* 12d924ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d924b1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d924b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d924b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d924ba cmp ecx, dword ptr [0x12daf058] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12daf058))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d924c0 jb 0x12d924d1 */
  if (C.cf) goto L_12d924d1;
  /* 12d924c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d924c5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d924c8 je 0x12d924cf */
  if (C.zf) goto L_12d924cf;
  /* 12d924ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d924cd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12d924cfu);
L_12d924cf:;
  /* 12d924cf jmp 0x12d924ae */
  goto L_12d924ae;
L_12d924d1:;
  /* 12d924d1 push 0x12dab724 */
  push32((uint32_t)(0x12dab724u));
  /* 12d924d6 push 0x12dab51c */
  push32((uint32_t)(0x12dab51cu));
  /* 12d924db call 0x12d92570 */
  push32(0x12d924e0u); f_12d92570();
  /* 12d924e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d924e3:;
  /* 12d924e3 push 0x12dab92c */
  push32((uint32_t)(0x12dab92cu));
  /* 12d924e8 push 0x12dab828 */
  push32((uint32_t)(0x12dab828u));
  /* 12d924ed call 0x12d92570 */
  push32(0x12d924f2u); f_12d92570();
  /* 12d924f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d924f5 cmp dword ptr [0x12dad560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d924fc jne 0x12d9251e */
  if (!C.zf) goto L_12d9251e;
  /* 12d924fe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12d92500 call 0x12d94150 */
  push32(0x12d92505u); f_12d94150();
  /* 12d92505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92508 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9250b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9250d je 0x12d9251e */
  if (C.zf) goto L_12d9251e;
  /* 12d9250f mov dword ptr [0x12dad560], 1 */
  w32((uint32_t)(0x12dad560), (0x1u));
  /* 12d92519 call 0x12d94a60 */
  push32(0x12d9251eu); f_12d94a60();
L_12d9251e:;
  /* 12d9251e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92522 je 0x12d9252b */
  if (C.zf) goto L_12d9252b;
  /* 12d92524 call 0x12d92560 */
  push32(0x12d92529u); f_12d92560();
  /* 12d92529 jmp 0x12d9253f */
  goto L_12d9253f;
L_12d9252b:;
  /* 12d9252b mov dword ptr [0x12dad55c], 1 */
  w32((uint32_t)(0x12dad55c), (0x1u));
  /* 12d92535 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92538 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92539 call dword ptr [0x12db02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02b4))), 0x12d9253fu);
L_12d9253f:;
  /* 12d9253f mov esp, ebp */
  ESP = (EBP);
  /* 12d92541 pop ebp */
  EBP = (pop32());
  /* 12d92542 ret  */
  ESPCHK(0x12d92460u, _esp0);
  ESP += 4; return;
}

/* FUN_10002550 @ 0x12d92550 (15 bytes, 7 insns) */
void f_12d92550(void) {
  FTRACE(0x12d92550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92550 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92551 mov ebp, esp */
  EBP = (ESP);
  /* 12d92553 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12d92555 call 0x12d96640 */
  push32(0x12d9255au); f_12d96640();
  /* 12d9255a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9255d pop ebp */
  EBP = (pop32());
  /* 12d9255e ret  */
  ESPCHK(0x12d92550u, _esp0);
  ESP += 4; return;
}

/* FUN_10002560 @ 0x12d92560 (15 bytes, 7 insns) */
void f_12d92560(void) {
  FTRACE(0x12d92560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92560 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92561 mov ebp, esp */
  EBP = (ESP);
  /* 12d92563 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12d92565 call 0x12d966e0 */
  push32(0x12d9256au); f_12d966e0();
  /* 12d9256a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9256d pop ebp */
  EBP = (pop32());
  /* 12d9256e ret  */
  ESPCHK(0x12d92560u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12d92570 (37 bytes, 16 insns) */
void f_12d92570(void) {
  FTRACE(0x12d92570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92570 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92571 mov ebp, esp */
  EBP = (ESP);
L_12d92573:;
  /* 12d92573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92576 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92579 jae 0x12d92593 */
  if (!C.cf) goto L_12d92593;
  /* 12d9257b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9257e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92581 je 0x12d92588 */
  if (C.zf) goto L_12d92588;
  /* 12d92583 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92586 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12d92588u);
L_12d92588:;
  /* 12d92588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9258b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9258e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d92591 jmp 0x12d92573 */
  goto L_12d92573;
L_12d92593:;
  /* 12d92593 pop ebp */
  EBP = (pop32());
  /* 12d92594 ret  */
  ESPCHK(0x12d92570u, _esp0);
  ESP += 4; return;
}

/* FUN_100025a0 @ 0x12d925a0 (130 bytes, 42 insns) */
void f_12d925a0(void) {
  FTRACE(0x12d925a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d925a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d925a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d925a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d925a4 call 0x12d96560 */
  push32(0x12d925a9u); f_12d96560();
  /* 12d925a9 call dword ptr [0x12db02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02c8))), 0x12d925afu);
  /* 12d925af mov dword ptr [0x12dabb1c], eax */
  w32((uint32_t)(0x12dabb1c), (EAX));
  /* 12d925b4 cmp dword ptr [0x12dabb1c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabb1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d925bb jne 0x12d925c1 */
  if (!C.zf) goto L_12d925c1;
  /* 12d925bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d925bf jmp 0x12d9261e */
  goto L_12d9261e;
L_12d925c1:;
  /* 12d925c1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12d925c3 push 0x12da9324 */
  push32((uint32_t)(0x12da9324u));
  /* 12d925c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d925ca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12d925cc push 1 */
  push32((uint32_t)(0x1u));
  /* 12d925ce call 0x12d93050 */
  push32(0x12d925d3u); f_12d93050();
  /* 12d925d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d925d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d925d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d925dd je 0x12d925f4 */
  if (C.zf) goto L_12d925f4;
  /* 12d925df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d925e2 push eax */
  push32((uint32_t)(EAX));
  /* 12d925e3 mov ecx, dword ptr [0x12dabb1c] */
  ECX = (r32((uint32_t)(0x12dabb1c)));
  /* 12d925e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d925ea call dword ptr [0x12db02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02c4))), 0x12d925f0u);
  /* 12d925f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d925f2 jne 0x12d925f8 */
  if (!C.zf) goto L_12d925f8;
L_12d925f4:;
  /* 12d925f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d925f6 jmp 0x12d9261e */
  goto L_12d9261e;
L_12d925f8:;
  /* 12d925f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d925fb push edx */
  push32((uint32_t)(EDX));
  /* 12d925fc call 0x12d92660 */
  push32(0x12d92601u); f_12d92660();
  /* 12d92601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92604 call dword ptr [0x12db02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02c0))), 0x12d9260au);
  /* 12d9260a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9260d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d9260f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92612 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12d92619 mov eax, 1 */
  EAX = (0x1u);
L_12d9261e:;
  /* 12d9261e mov esp, ebp */
  ESP = (EBP);
  /* 12d92620 pop ebp */
  EBP = (pop32());
  /* 12d92621 ret  */
  ESPCHK(0x12d925a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x12d92630 (41 bytes, 11 insns) */
void f_12d92630(void) {
  FTRACE(0x12d92630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92630 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92631 mov ebp, esp */
  EBP = (ESP);
  /* 12d92633 call 0x12d965a0 */
  push32(0x12d92638u); f_12d965a0();
  /* 12d92638 cmp dword ptr [0x12dabb1c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabb1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9263f je 0x12d92657 */
  if (C.zf) goto L_12d92657;
  /* 12d92641 mov eax, dword ptr [0x12dabb1c] */
  EAX = (r32((uint32_t)(0x12dabb1c)));
  /* 12d92646 push eax */
  push32((uint32_t)(EAX));
  /* 12d92647 call dword ptr [0x12db02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02cc))), 0x12d9264du);
  /* 12d9264d mov dword ptr [0x12dabb1c], 0xffffffff */
  w32((uint32_t)(0x12dabb1c), (0xffffffffu));
L_12d92657:;
  /* 12d92657 pop ebp */
  EBP = (pop32());
  /* 12d92658 ret  */
  ESPCHK(0x12d92630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002660 @ 0x12d92660 (25 bytes, 8 insns) */
void f_12d92660(void) {
  FTRACE(0x12d92660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92660 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92661 mov ebp, esp */
  EBP = (ESP);
  /* 12d92663 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92666 mov dword ptr [eax + 0x50], 0x12dabcc0 */
  w32((uint32_t)(EAX + 0x50), (0x12dabcc0u));
  /* 12d9266d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92670 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12d92677 pop ebp */
  EBP = (pop32());
  /* 12d92678 ret  */
  ESPCHK(0x12d92660u, _esp0);
  ESP += 4; return;
}

/* FUN_10002680 @ 0x12d92680 (152 bytes, 48 insns) */
void f_12d92680(void) {
  FTRACE(0x12d92680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92680 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92681 mov ebp, esp */
  EBP = (ESP);
  /* 12d92683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d92686 call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12d9268cu);
  /* 12d9268c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9268f mov eax, dword ptr [0x12dabb1c] */
  EAX = (r32((uint32_t)(0x12dabb1c)));
  /* 12d92694 push eax */
  push32((uint32_t)(EAX));
  /* 12d92695 call dword ptr [0x12db02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d4))), 0x12d9269bu);
  /* 12d9269b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9269e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d926a2 jne 0x12d92707 */
  if (!C.zf) goto L_12d92707;
  /* 12d926a4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12d926a9 push 0x12da9324 */
  push32((uint32_t)(0x12da9324u));
  /* 12d926ae push 2 */
  push32((uint32_t)(0x2u));
  /* 12d926b0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12d926b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d926b4 call 0x12d93050 */
  push32(0x12d926b9u); f_12d93050();
  /* 12d926b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d926bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d926bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d926c3 je 0x12d926fd */
  if (C.zf) goto L_12d926fd;
  /* 12d926c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d926c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d926c9 mov edx, dword ptr [0x12dabb1c] */
  EDX = (r32((uint32_t)(0x12dabb1c)));
  /* 12d926cf push edx */
  push32((uint32_t)(EDX));
  /* 12d926d0 call dword ptr [0x12db02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02c4))), 0x12d926d6u);
  /* 12d926d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d926d8 je 0x12d926fd */
  if (C.zf) goto L_12d926fd;
  /* 12d926da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d926dd push eax */
  push32((uint32_t)(EAX));
  /* 12d926de call 0x12d92660 */
  push32(0x12d926e3u); f_12d92660();
  /* 12d926e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d926e6 call dword ptr [0x12db02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02c0))), 0x12d926ecu);
  /* 12d926ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d926ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d926f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d926f4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12d926fb jmp 0x12d92707 */
  goto L_12d92707;
L_12d926fd:;
  /* 12d926fd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12d926ff call 0x12d91bb0 */
  push32(0x12d92704u); f_12d91bb0();
  /* 12d92704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d92707:;
  /* 12d92707 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9270a push eax */
  push32((uint32_t)(EAX));
  /* 12d9270b call dword ptr [0x12db02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d0))), 0x12d92711u);
  /* 12d92711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92714 mov esp, ebp */
  ESP = (EBP);
  /* 12d92716 pop ebp */
  EBP = (pop32());
  /* 12d92717 ret  */
  ESPCHK(0x12d92680u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x12d92720 (263 bytes, 86 insns) */
void f_12d92720(void) {
  FTRACE(0x12d92720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92720 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92721 mov ebp, esp */
  EBP = (ESP);
  /* 12d92723 cmp dword ptr [0x12dabb1c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabb1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9272a je 0x12d92825 */
  if (C.zf) goto L_12d92825;
  /* 12d92730 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92734 jne 0x12d92745 */
  if (!C.zf) goto L_12d92745;
  /* 12d92736 mov eax, dword ptr [0x12dabb1c] */
  EAX = (r32((uint32_t)(0x12dabb1c)));
  /* 12d9273b push eax */
  push32((uint32_t)(EAX));
  /* 12d9273c call dword ptr [0x12db02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d4))), 0x12d92742u);
  /* 12d92742 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d92745:;
  /* 12d92745 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92749 je 0x12d92816 */
  if (C.zf) goto L_12d92816;
  /* 12d9274f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92752 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92756 je 0x12d92769 */
  if (C.zf) goto L_12d92769;
  /* 12d92758 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9275a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9275d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12d92760 push eax */
  push32((uint32_t)(EAX));
  /* 12d92761 call 0x12d936d0 */
  push32(0x12d92766u); f_12d936d0();
  /* 12d92766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d92769:;
  /* 12d92769 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9276c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92770 je 0x12d92783 */
  if (C.zf) goto L_12d92783;
  /* 12d92772 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d92774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92777 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12d9277a push eax */
  push32((uint32_t)(EAX));
  /* 12d9277b call 0x12d936d0 */
  push32(0x12d92780u); f_12d936d0();
  /* 12d92780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d92783:;
  /* 12d92783 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92786 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9278a je 0x12d9279d */
  if (C.zf) goto L_12d9279d;
  /* 12d9278c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9278e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92791 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12d92794 push eax */
  push32((uint32_t)(EAX));
  /* 12d92795 call 0x12d936d0 */
  push32(0x12d9279au); f_12d936d0();
  /* 12d9279a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9279d:;
  /* 12d9279d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d927a0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d927a4 je 0x12d927b7 */
  if (C.zf) goto L_12d927b7;
  /* 12d927a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d927a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d927ab mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12d927ae push eax */
  push32((uint32_t)(EAX));
  /* 12d927af call 0x12d936d0 */
  push32(0x12d927b4u); f_12d936d0();
  /* 12d927b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d927b7:;
  /* 12d927b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d927ba cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d927be je 0x12d927d1 */
  if (C.zf) goto L_12d927d1;
  /* 12d927c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d927c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d927c5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12d927c8 push eax */
  push32((uint32_t)(EAX));
  /* 12d927c9 call 0x12d936d0 */
  push32(0x12d927ceu); f_12d936d0();
  /* 12d927ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d927d1:;
  /* 12d927d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d927d4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d927d8 je 0x12d927eb */
  if (C.zf) goto L_12d927eb;
  /* 12d927da push 2 */
  push32((uint32_t)(0x2u));
  /* 12d927dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d927df mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12d927e2 push eax */
  push32((uint32_t)(EAX));
  /* 12d927e3 call 0x12d936d0 */
  push32(0x12d927e8u); f_12d936d0();
  /* 12d927e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d927eb:;
  /* 12d927eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d927ee cmp dword ptr [ecx + 0x50], 0x12dabcc0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12dabcc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d927f5 je 0x12d92808 */
  if (C.zf) goto L_12d92808;
  /* 12d927f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d927f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d927fc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12d927ff push eax */
  push32((uint32_t)(EAX));
  /* 12d92800 call 0x12d936d0 */
  push32(0x12d92805u); f_12d936d0();
  /* 12d92805 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d92808:;
  /* 12d92808 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9280a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9280d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9280e call 0x12d936d0 */
  push32(0x12d92813u); f_12d936d0();
  /* 12d92813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d92816:;
  /* 12d92816 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92818 mov edx, dword ptr [0x12dabb1c] */
  EDX = (r32((uint32_t)(0x12dabb1c)));
  /* 12d9281e push edx */
  push32((uint32_t)(EDX));
  /* 12d9281f call dword ptr [0x12db02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02c4))), 0x12d92825u);
L_12d92825:;
  /* 12d92825 pop ebp */
  EBP = (pop32());
  /* 12d92826 ret  */
  ESPCHK(0x12d92720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x12d92830 (11 bytes, 5 insns) */
void f_12d92830(void) {
  FTRACE(0x12d92830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92830 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92831 mov ebp, esp */
  EBP = (ESP);
  /* 12d92833 call dword ptr [0x12db02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02c0))), 0x12d92839u);
  /* 12d92839 pop ebp */
  EBP = (pop32());
  /* 12d9283a ret  */
  ESPCHK(0x12d92830u, _esp0);
  ESP += 4; return;
}

/* FUN_10002840 @ 0x12d92840 (11 bytes, 5 insns) */
void f_12d92840(void) {
  FTRACE(0x12d92840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92840 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92841 mov ebp, esp */
  EBP = (ESP);
  /* 12d92843 call dword ptr [0x12db02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02dc))), 0x12d92849u);
  /* 12d92849 pop ebp */
  EBP = (pop32());
  /* 12d9284a ret  */
  ESPCHK(0x12d92840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002850 @ 0x12d92850 (804 bytes, 236 insns) */
void f_12d92850(void) {
  FTRACE(0x12d92850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92850 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92851 mov ebp, esp */
  EBP = (ESP);
  /* 12d92853 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d92856 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12d9285b push 0x12da9330 */
  push32((uint32_t)(0x12da9330u));
  /* 12d92860 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d92862 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12d92867 call 0x12d92c40 */
  push32(0x12d9286cu); f_12d92c40();
  /* 12d9286c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9286f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12d92872 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92876 jne 0x12d92882 */
  if (!C.zf) goto L_12d92882;
  /* 12d92878 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12d9287a call 0x12d91bb0 */
  push32(0x12d9287fu); f_12d91bb0();
  /* 12d9287f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d92882:;
  /* 12d92882 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92885 mov dword ptr [0x12daef00], eax */
  w32((uint32_t)(0x12daef00), (EAX));
  /* 12d9288a mov dword ptr [0x12daf03c], 0x20 */
  w32((uint32_t)(0x12daf03c), (0x20u));
  /* 12d92894 jmp 0x12d9289f */
  goto L_12d9289f;
L_12d92896:;
  /* 12d92896 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92899 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9289c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12d9289f:;
  /* 12d9289f mov edx, dword ptr [0x12daef00] */
  EDX = (r32((uint32_t)(0x12daef00)));
  /* 12d928a5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d928ab cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d928ae jae 0x12d928d3 */
  if (!C.cf) goto L_12d928d3;
  /* 12d928b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d928b3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d928b7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d928ba mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d928c0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d928c3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12d928c7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d928ca mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d928d1 jmp 0x12d92896 */
  goto L_12d92896;
L_12d928d3:;
  /* 12d928d3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12d928d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d928d7 call dword ptr [0x12db02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02e8))), 0x12d928ddu);
  /* 12d928dd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12d928e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d928e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d928e8 je 0x12d92a75 */
  if (C.zf) goto L_12d92a75;
  /* 12d928ee cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d928f2 je 0x12d92a75 */
  if (C.zf) goto L_12d92a75;
  /* 12d928f8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d928fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d928fd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12d92900 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d92903 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92906 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d92909 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9290c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9290f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12d92912 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92919 jge 0x12d92923 */
  if ((C.sf==C.of)) goto L_12d92923;
  /* 12d9291b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12d9291e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12d92921 jmp 0x12d9292a */
  goto L_12d9292a;
L_12d92923:;
  /* 12d92923 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12d9292a:;
  /* 12d9292a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12d9292d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12d92930 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12d92937 jmp 0x12d92942 */
  goto L_12d92942;
L_12d92939:;
  /* 12d92939 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12d9293c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9293f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12d92942:;
  /* 12d92942 mov ecx, dword ptr [0x12daf03c] */
  ECX = (r32((uint32_t)(0x12daf03c)));
  /* 12d92948 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9294b jge 0x12d929e2 */
  if ((C.sf==C.of)) goto L_12d929e2;
  /* 12d92951 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12d92956 push 0x12da9330 */
  push32((uint32_t)(0x12da9330u));
  /* 12d9295b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9295d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12d92962 call 0x12d92c40 */
  push32(0x12d92967u); f_12d92c40();
  /* 12d92967 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9296a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12d9296d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92971 jne 0x12d9297e */
  if (!C.zf) goto L_12d9297e;
  /* 12d92973 mov edx, dword ptr [0x12daf03c] */
  EDX = (r32((uint32_t)(0x12daf03c)));
  /* 12d92979 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12d9297c jmp 0x12d929e2 */
  goto L_12d929e2;
L_12d9297e:;
  /* 12d9297e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12d92981 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92984 mov dword ptr [eax*4 + 0x12daef00], ecx */
  w32((uint32_t)(EAX*4 + 0x12daef00), (ECX));
  /* 12d9298b mov edx, dword ptr [0x12daf03c] */
  EDX = (r32((uint32_t)(0x12daf03c)));
  /* 12d92991 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92994 mov dword ptr [0x12daf03c], edx */
  w32((uint32_t)(0x12daf03c), (EDX));
  /* 12d9299a jmp 0x12d929a5 */
  goto L_12d929a5;
L_12d9299c:;
  /* 12d9299c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d9299f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d929a2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12d929a5:;
  /* 12d929a5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12d929a8 mov edx, dword ptr [ecx*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12daef00)));
  /* 12d929af add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d929b5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d929b8 jae 0x12d929dd */
  if (!C.cf) goto L_12d929dd;
  /* 12d929ba mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d929bd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d929c1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d929c4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12d929ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d929cd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12d929d1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d929d4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12d929db jmp 0x12d9299c */
  goto L_12d9299c;
L_12d929dd:;
  /* 12d929dd jmp 0x12d92939 */
  goto L_12d92939;
L_12d929e2:;
  /* 12d929e2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12d929e9 jmp 0x12d92a06 */
  goto L_12d92a06;
L_12d929eb:;
  /* 12d929eb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d929ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d929f1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12d929f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d929f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d929fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d929fd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d92a00 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92a03 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12d92a06:;
  /* 12d92a06 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d92a09 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92a0c jge 0x12d92a75 */
  if ((C.sf==C.of)) goto L_12d92a75;
  /* 12d92a0e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d92a11 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92a14 je 0x12d92a70 */
  if (C.zf) goto L_12d92a70;
  /* 12d92a16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92a19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d92a1c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d92a1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d92a21 je 0x12d92a70 */
  if (C.zf) goto L_12d92a70;
  /* 12d92a23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92a26 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d92a29 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12d92a2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d92a2e jne 0x12d92a40 */
  if (!C.zf) goto L_12d92a40;
  /* 12d92a30 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d92a33 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d92a35 push edx */
  push32((uint32_t)(EDX));
  /* 12d92a36 call dword ptr [0x12db02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02e4))), 0x12d92a3cu);
  /* 12d92a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d92a3e je 0x12d92a70 */
  if (C.zf) goto L_12d92a70;
L_12d92a40:;
  /* 12d92a40 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d92a43 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d92a46 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d92a49 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d92a4c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d92a4f mov edx, dword ptr [eax*4 + 0x12daef00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d92a56 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92a58 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12d92a5b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92a5e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12d92a61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d92a63 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d92a65 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92a68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92a6b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d92a6d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12d92a70:;
  /* 12d92a70 jmp 0x12d929eb */
  goto L_12d929eb;
L_12d92a75:;
  /* 12d92a75 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12d92a7c jmp 0x12d92a87 */
  goto L_12d92a87;
L_12d92a7e:;
  /* 12d92a7e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d92a81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92a84 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12d92a87:;
  /* 12d92a87 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92a8b jge 0x12d92b64 */
  if ((C.sf==C.of)) goto L_12d92b64;
  /* 12d92a91 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d92a94 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d92a97 mov edx, dword ptr [0x12daef00] */
  EDX = (r32((uint32_t)(0x12daef00)));
  /* 12d92a9d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92a9f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12d92aa2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92aa5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92aa8 jne 0x12d92b50 */
  if (!C.zf) goto L_12d92b50;
  /* 12d92aae mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92ab1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12d92ab5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92ab9 jne 0x12d92ac4 */
  if (!C.zf) goto L_12d92ac4;
  /* 12d92abb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12d92ac2 jmp 0x12d92ad4 */
  goto L_12d92ad4;
L_12d92ac4:;
  /* 12d92ac4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12d92ac7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d92aca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d92acc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d92ace add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92ad1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12d92ad4:;
  /* 12d92ad4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12d92ad7 push eax */
  push32((uint32_t)(EAX));
  /* 12d92ad8 call dword ptr [0x12db0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0294))), 0x12d92adeu);
  /* 12d92ade mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12d92ae1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92ae5 je 0x12d92b3f */
  if (C.zf) goto L_12d92b3f;
  /* 12d92ae7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d92aea push ecx */
  push32((uint32_t)(ECX));
  /* 12d92aeb call dword ptr [0x12db02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02e4))), 0x12d92af1u);
  /* 12d92af1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12d92af4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92af8 je 0x12d92b3f */
  if (C.zf) goto L_12d92b3f;
  /* 12d92afa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92afd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d92b00 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d92b02 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12d92b05 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d92b0b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92b0e jne 0x12d92b20 */
  if (!C.zf) goto L_12d92b20;
  /* 12d92b10 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92b13 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12d92b16 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12d92b18 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92b1b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12d92b1e jmp 0x12d92b3d */
  goto L_12d92b3d;
L_12d92b20:;
  /* 12d92b20 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12d92b23 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d92b29 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92b2c jne 0x12d92b3d */
  if (!C.zf) goto L_12d92b3d;
  /* 12d92b2e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92b31 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d92b34 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12d92b37 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92b3a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12d92b3d:;
  /* 12d92b3d jmp 0x12d92b4e */
  goto L_12d92b4e;
L_12d92b3f:;
  /* 12d92b3f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92b42 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d92b45 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12d92b48 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92b4b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12d92b4e:;
  /* 12d92b4e jmp 0x12d92b5f */
  goto L_12d92b5f;
L_12d92b50:;
  /* 12d92b50 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92b53 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12d92b56 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12d92b59 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d92b5c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12d92b5f:;
  /* 12d92b5f jmp 0x12d92a7e */
  goto L_12d92a7e;
L_12d92b64:;
  /* 12d92b64 mov eax, dword ptr [0x12daf03c] */
  EAX = (r32((uint32_t)(0x12daf03c)));
  /* 12d92b69 push eax */
  push32((uint32_t)(EAX));
  /* 12d92b6a call dword ptr [0x12db02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02e0))), 0x12d92b70u);
  /* 12d92b70 mov esp, ebp */
  ESP = (EBP);
  /* 12d92b72 pop ebp */
  EBP = (pop32());
  /* 12d92b73 ret  */
  ESPCHK(0x12d92850u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12d92b80 (155 bytes, 45 insns) */
void f_12d92b80(void) {
  FTRACE(0x12d92b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92b81 mov ebp, esp */
  EBP = (ESP);
  /* 12d92b83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d92b86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d92b8d jmp 0x12d92b98 */
  goto L_12d92b98;
L_12d92b8f:;
  /* 12d92b8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d92b92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92b95 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d92b98:;
  /* 12d92b98 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92b9c jge 0x12d92c17 */
  if ((C.sf==C.of)) goto L_12d92c17;
  /* 12d92b9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d92ba1 cmp dword ptr [ecx*4 + 0x12daef00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12daef00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92ba9 je 0x12d92c12 */
  if (C.zf) goto L_12d92c12;
  /* 12d92bab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d92bae mov eax, dword ptr [edx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12daef00)));
  /* 12d92bb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d92bb8 jmp 0x12d92bc3 */
  goto L_12d92bc3;
L_12d92bba:;
  /* 12d92bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92bbd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92bc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d92bc3:;
  /* 12d92bc3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d92bc6 mov eax, dword ptr [edx*4 + 0x12daef00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12daef00)));
  /* 12d92bcd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92bd2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92bd5 jae 0x12d92bef */
  if (!C.cf) goto L_12d92bef;
  /* 12d92bd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92bda cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92bde je 0x12d92bed */
  if (C.zf) goto L_12d92bed;
  /* 12d92be0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92be3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92be6 push edx */
  push32((uint32_t)(EDX));
  /* 12d92be7 call dword ptr [0x12db02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ec))), 0x12d92bedu);
L_12d92bed:;
  /* 12d92bed jmp 0x12d92bba */
  goto L_12d92bba;
L_12d92bef:;
  /* 12d92bef push 2 */
  push32((uint32_t)(0x2u));
  /* 12d92bf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d92bf4 mov ecx, dword ptr [eax*4 + 0x12daef00] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12daef00)));
  /* 12d92bfb push ecx */
  push32((uint32_t)(ECX));
  /* 12d92bfc call 0x12d936d0 */
  push32(0x12d92c01u); f_12d936d0();
  /* 12d92c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92c04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d92c07 mov dword ptr [edx*4 + 0x12daef00], 0 */
  w32((uint32_t)(EDX*4 + 0x12daef00), (0x0u));
L_12d92c12:;
  /* 12d92c12 jmp 0x12d92b8f */
  goto L_12d92b8f;
L_12d92c17:;
  /* 12d92c17 mov esp, ebp */
  ESP = (EBP);
  /* 12d92c19 pop ebp */
  EBP = (pop32());
  /* 12d92c1a ret  */
  ESPCHK(0x12d92b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c20 @ 0x12d92c20 (29 bytes, 13 insns) */
void f_12d92c20(void) {
  FTRACE(0x12d92c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92c21 mov ebp, esp */
  EBP = (ESP);
  /* 12d92c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92c27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92c29 mov eax, dword ptr [0x12dad708] */
  EAX = (r32((uint32_t)(0x12dad708)));
  /* 12d92c2e push eax */
  push32((uint32_t)(EAX));
  /* 12d92c2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92c32 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92c33 call 0x12d92c90 */
  push32(0x12d92c38u); f_12d92c90();
  /* 12d92c38 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92c3b pop ebp */
  EBP = (pop32());
  /* 12d92c3c ret  */
  ESPCHK(0x12d92c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c40 @ 0x12d92c40 (35 bytes, 16 insns) */
void f_12d92c40(void) {
  FTRACE(0x12d92c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92c41 mov ebp, esp */
  EBP = (ESP);
  /* 12d92c43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d92c46 push eax */
  push32((uint32_t)(EAX));
  /* 12d92c47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d92c4a push ecx */
  push32((uint32_t)(ECX));
  /* 12d92c4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d92c4e push edx */
  push32((uint32_t)(EDX));
  /* 12d92c4f mov eax, dword ptr [0x12dad708] */
  EAX = (r32((uint32_t)(0x12dad708)));
  /* 12d92c54 push eax */
  push32((uint32_t)(EAX));
  /* 12d92c55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92c58 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92c59 call 0x12d92c90 */
  push32(0x12d92c5eu); f_12d92c90();
  /* 12d92c5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92c61 pop ebp */
  EBP = (pop32());
  /* 12d92c62 ret  */
  ESPCHK(0x12d92c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c70 @ 0x12d92c70 (27 bytes, 13 insns) */
void f_12d92c70(void) {
  FTRACE(0x12d92c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92c71 mov ebp, esp */
  EBP = (ESP);
  /* 12d92c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92c77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92c79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d92c7c push eax */
  push32((uint32_t)(EAX));
  /* 12d92c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92c80 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92c81 call 0x12d92c90 */
  push32(0x12d92c86u); f_12d92c90();
  /* 12d92c86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92c89 pop ebp */
  EBP = (pop32());
  /* 12d92c8a ret  */
  ESPCHK(0x12d92c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c90 @ 0x12d92c90 (94 bytes, 38 insns) */
void f_12d92c90(void) {
  FTRACE(0x12d92c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92c91 mov ebp, esp */
  EBP = (ESP);
  /* 12d92c93 push ecx */
  push32((uint32_t)(ECX));
L_12d92c94:;
  /* 12d92c94 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d92c96 call 0x12d96640 */
  push32(0x12d92c9bu); f_12d96640();
  /* 12d92c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92c9e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d92ca1 push eax */
  push32((uint32_t)(EAX));
  /* 12d92ca2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d92ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92ca6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d92ca9 push edx */
  push32((uint32_t)(EDX));
  /* 12d92caa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92cad push eax */
  push32((uint32_t)(EAX));
  /* 12d92cae call 0x12d92d10 */
  push32(0x12d92cb3u); f_12d92d10();
  /* 12d92cb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92cb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d92cb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d92cbb call 0x12d966e0 */
  push32(0x12d92cc0u); f_12d966e0();
  /* 12d92cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92cc3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92cc7 jne 0x12d92ccf */
  if (!C.zf) goto L_12d92ccf;
  /* 12d92cc9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92ccd jne 0x12d92cd4 */
  if (!C.zf) goto L_12d92cd4;
L_12d92ccf:;
  /* 12d92ccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92cd2 jmp 0x12d92cea */
  goto L_12d92cea;
L_12d92cd4:;
  /* 12d92cd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92cd8 call 0x12d96980 */
  push32(0x12d92cddu); f_12d96980();
  /* 12d92cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92ce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d92ce2 jne 0x12d92ce8 */
  if (!C.zf) goto L_12d92ce8;
  /* 12d92ce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d92ce6 jmp 0x12d92cea */
  goto L_12d92cea;
L_12d92ce8:;
  /* 12d92ce8 jmp 0x12d92c94 */
  goto L_12d92c94;
L_12d92cea:;
  /* 12d92cea mov esp, ebp */
  ESP = (EBP);
  /* 12d92cec pop ebp */
  EBP = (pop32());
  /* 12d92ced ret  */
  ESPCHK(0x12d92c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf0 @ 0x12d92cf0 (23 bytes, 11 insns) */
void f_12d92cf0(void) {
  FTRACE(0x12d92cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12d92cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92cf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92cf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92cf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92cfc push eax */
  push32((uint32_t)(EAX));
  /* 12d92cfd call 0x12d92d10 */
  push32(0x12d92d02u); f_12d92d10();
  /* 12d92d02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92d05 pop ebp */
  EBP = (pop32());
  /* 12d92d06 ret  */
  ESPCHK(0x12d92cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d10 @ 0x12d92d10 (787 bytes, 254 insns) */
void f_12d92d10(void) {
  FTRACE(0x12d92d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d92d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d92d11 mov ebp, esp */
  EBP = (ESP);
  /* 12d92d13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d92d16 push ebx */
  push32((uint32_t)(EBX));
  /* 12d92d17 push esi */
  push32((uint32_t)(ESI));
  /* 12d92d18 push edi */
  push32((uint32_t)(EDI));
  /* 12d92d19 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d92d20 mov eax, dword ptr [0x12dabb44] */
  EAX = (r32((uint32_t)(0x12dabb44)));
  /* 12d92d25 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d92d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d92d2a je 0x12d92d5c */
  if (C.zf) goto L_12d92d5c;
L_12d92d2c:;
  /* 12d92d2c call 0x12d93de0 */
  push32(0x12d92d31u); f_12d93de0();
  /* 12d92d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d92d33 jne 0x12d92d56 */
  if (!C.zf) goto L_12d92d56;
  /* 12d92d35 push 0x12da9424 */
  push32((uint32_t)(0x12da9424u));
  /* 12d92d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92d3c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12d92d41 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d92d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d92d48 call 0x12d91d00 */
  push32(0x12d92d4du); f_12d91d00();
  /* 12d92d4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92d50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92d53 jne 0x12d92d56 */
  if (!C.zf) goto L_12d92d56;
  /* 12d92d55 int3  */
  x86_unimpl("int3 @ 0x12d92d55");
L_12d92d56:;
  /* 12d92d56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d92d58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d92d5a jne 0x12d92d2c */
  if (!C.zf) goto L_12d92d2c;
L_12d92d5c:;
  /* 12d92d5c mov edx, dword ptr [0x12dabb48] */
  EDX = (r32((uint32_t)(0x12dabb48)));
  /* 12d92d62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d92d65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d92d68 cmp eax, dword ptr [0x12dabb4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dabb4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92d6e jne 0x12d92d71 */
  if (!C.zf) goto L_12d92d71;
  /* 12d92d70 int3  */
  x86_unimpl("int3 @ 0x12d92d70");
L_12d92d71:;
  /* 12d92d71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d92d74 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92d75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d92d78 push edx */
  push32((uint32_t)(EDX));
  /* 12d92d79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d92d7c push eax */
  push32((uint32_t)(EAX));
  /* 12d92d7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d92d80 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92d81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92d84 push edx */
  push32((uint32_t)(EDX));
  /* 12d92d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92d87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92d89 call dword ptr [0x12dabd50] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dabd50))), 0x12d92d8fu);
  /* 12d92d8f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92d92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d92d94 jne 0x12d92df4 */
  if (!C.zf) goto L_12d92df4;
  /* 12d92d96 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92d9a je 0x12d92dc7 */
  if (C.zf) goto L_12d92dc7;
L_12d92d9c:;
  /* 12d92d9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d92d9f push eax */
  push32((uint32_t)(EAX));
  /* 12d92da0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d92da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92da4 push 0x12da93e0 */
  push32((uint32_t)(0x12da93e0u));
  /* 12d92da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92dab push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92dad push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92daf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92db1 call 0x12d91d00 */
  push32(0x12d92db6u); f_12d91d00();
  /* 12d92db6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92db9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92dbc jne 0x12d92dbf */
  if (!C.zf) goto L_12d92dbf;
  /* 12d92dbe int3  */
  x86_unimpl("int3 @ 0x12d92dbe");
L_12d92dbf:;
  /* 12d92dbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d92dc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d92dc3 jne 0x12d92d9c */
  if (!C.zf) goto L_12d92d9c;
  /* 12d92dc5 jmp 0x12d92ded */
  goto L_12d92ded;
L_12d92dc7:;
  /* 12d92dc7 push 0x12da93bc */
  push32((uint32_t)(0x12da93bcu));
  /* 12d92dcc push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d92dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92dd9 call 0x12d91d00 */
  push32(0x12d92ddeu); f_12d91d00();
  /* 12d92dde add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92de1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92de4 jne 0x12d92de7 */
  if (!C.zf) goto L_12d92de7;
  /* 12d92de6 int3  */
  x86_unimpl("int3 @ 0x12d92de6");
L_12d92de7:;
  /* 12d92de7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d92de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d92deb jne 0x12d92dc7 */
  if (!C.zf) goto L_12d92dc7;
L_12d92ded:;
  /* 12d92ded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d92def jmp 0x12d9301c */
  goto L_12d9301c;
L_12d92df4:;
  /* 12d92df4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d92df7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d92dfd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92e00 je 0x12d92e16 */
  if (C.zf) goto L_12d92e16;
  /* 12d92e02 mov edx, dword ptr [0x12dabb44] */
  EDX = (r32((uint32_t)(0x12dabb44)));
  /* 12d92e08 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12d92e0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d92e0d jne 0x12d92e16 */
  if (!C.zf) goto L_12d92e16;
  /* 12d92e0f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12d92e16:;
  /* 12d92e16 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92e1a ja 0x12d92e27 */
  if ((!C.cf&&!C.zf)) goto L_12d92e27;
  /* 12d92e1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92e1f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92e22 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92e25 jbe 0x12d92e53 */
  if ((C.cf||C.zf)) goto L_12d92e53;
L_12d92e27:;
  /* 12d92e27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92e2a push ecx */
  push32((uint32_t)(ECX));
  /* 12d92e2b push 0x12da9394 */
  push32((uint32_t)(0x12da9394u));
  /* 12d92e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92e36 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92e38 call 0x12d91d00 */
  push32(0x12d92e3du); f_12d91d00();
  /* 12d92e3d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92e40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92e43 jne 0x12d92e46 */
  if (!C.zf) goto L_12d92e46;
  /* 12d92e45 int3  */
  x86_unimpl("int3 @ 0x12d92e45");
L_12d92e46:;
  /* 12d92e46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d92e48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d92e4a jne 0x12d92e27 */
  if (!C.zf) goto L_12d92e27;
  /* 12d92e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d92e4e jmp 0x12d9301c */
  goto L_12d9301c;
L_12d92e53:;
  /* 12d92e53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d92e56 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d92e5b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92e5e je 0x12d92ea0 */
  if (C.zf) goto L_12d92ea0;
  /* 12d92e60 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92e64 je 0x12d92ea0 */
  if (C.zf) goto L_12d92ea0;
  /* 12d92e66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d92e69 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d92e6f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92e72 je 0x12d92ea0 */
  if (C.zf) goto L_12d92ea0;
  /* 12d92e74 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92e78 je 0x12d92ea0 */
  if (C.zf) goto L_12d92ea0;
L_12d92e7a:;
  /* 12d92e7a push 0x12da9360 */
  push32((uint32_t)(0x12da9360u));
  /* 12d92e7f push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d92e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d92e8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d92e8c call 0x12d91d00 */
  push32(0x12d92e91u); f_12d91d00();
  /* 12d92e91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92e94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92e97 jne 0x12d92e9a */
  if (!C.zf) goto L_12d92e9a;
  /* 12d92e99 int3  */
  x86_unimpl("int3 @ 0x12d92e99");
L_12d92e9a:;
  /* 12d92e9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d92e9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d92e9e jne 0x12d92e7a */
  if (!C.zf) goto L_12d92e7a;
L_12d92ea0:;
  /* 12d92ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92ea3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92ea6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d92ea9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d92eac push ecx */
  push32((uint32_t)(ECX));
  /* 12d92ead call 0x12d96a90 */
  push32(0x12d92eb2u); f_12d96a90();
  /* 12d92eb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92eb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d92eb8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92ebc jne 0x12d92ec5 */
  if (!C.zf) goto L_12d92ec5;
  /* 12d92ebe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d92ec0 jmp 0x12d9301c */
  goto L_12d9301c;
L_12d92ec5:;
  /* 12d92ec5 mov edx, dword ptr [0x12dabb48] */
  EDX = (r32((uint32_t)(0x12dabb48)));
  /* 12d92ecb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92ece mov dword ptr [0x12dabb48], edx */
  w32((uint32_t)(0x12dabb48), (EDX));
  /* 12d92ed4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92ed8 je 0x12d92f23 */
  if (C.zf) goto L_12d92f23;
  /* 12d92eda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92edd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d92ee3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92ee6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12d92eed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92ef0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d92ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92efa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12d92f01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92f04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92f07 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12d92f0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92f0d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12d92f14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92f17 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12d92f1e jmp 0x12d92fc3 */
  goto L_12d92fc3;
L_12d92f23:;
  /* 12d92f23 mov edx, dword ptr [0x12dad568] */
  EDX = (r32((uint32_t)(0x12dad568)));
  /* 12d92f29 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92f2c mov dword ptr [0x12dad568], edx */
  w32((uint32_t)(0x12dad568), (EDX));
  /* 12d92f32 mov eax, dword ptr [0x12dad570] */
  EAX = (r32((uint32_t)(0x12dad570)));
  /* 12d92f37 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92f3a mov dword ptr [0x12dad570], eax */
  w32((uint32_t)(0x12dad570), (EAX));
  /* 12d92f3f mov ecx, dword ptr [0x12dad570] */
  ECX = (r32((uint32_t)(0x12dad570)));
  /* 12d92f45 cmp ecx, dword ptr [0x12dad574] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12dad574))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92f4b jbe 0x12d92f59 */
  if ((C.cf||C.zf)) goto L_12d92f59;
  /* 12d92f4d mov edx, dword ptr [0x12dad570] */
  EDX = (r32((uint32_t)(0x12dad570)));
  /* 12d92f53 mov dword ptr [0x12dad574], edx */
  w32((uint32_t)(0x12dad574), (EDX));
L_12d92f59:;
  /* 12d92f59 cmp dword ptr [0x12dad56c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad56c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d92f60 je 0x12d92f6f */
  if (C.zf) goto L_12d92f6f;
  /* 12d92f62 mov eax, dword ptr [0x12dad56c] */
  EAX = (r32((uint32_t)(0x12dad56c)));
  /* 12d92f67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92f6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d92f6d jmp 0x12d92f78 */
  goto L_12d92f78;
L_12d92f6f:;
  /* 12d92f6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92f72 mov dword ptr [0x12dad564], edx */
  w32((uint32_t)(0x12dad564), (EDX));
L_12d92f78:;
  /* 12d92f78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92f7b mov ecx, dword ptr [0x12dad56c] */
  ECX = (r32((uint32_t)(0x12dad56c)));
  /* 12d92f81 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d92f83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92f86 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12d92f8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92f90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d92f93 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12d92f96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92f99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d92f9c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12d92f9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92fa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92fa5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12d92fa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92fab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d92fae mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12d92fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92fb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d92fb7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12d92fba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92fbd mov dword ptr [0x12dad56c], ecx */
  w32((uint32_t)(0x12dad56c), (ECX));
L_12d92fc3:;
  /* 12d92fc3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d92fc5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d92fc7 mov dl, byte ptr [0x12dabb50] */
  DL = (r8((uint32_t)(0x12dabb50)));
  /* 12d92fcd push edx */
  push32((uint32_t)(EDX));
  /* 12d92fce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92fd1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92fd4 push eax */
  push32((uint32_t)(EAX));
  /* 12d92fd5 call 0x12d969b0 */
  push32(0x12d92fdau); f_12d969b0();
  /* 12d92fda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92fdd push 4 */
  push32((uint32_t)(0x4u));
  /* 12d92fdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d92fe1 mov cl, byte ptr [0x12dabb50] */
  CL = (r8((uint32_t)(0x12dabb50)));
  /* 12d92fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92fe8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92feb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d92fee lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12d92ff2 push ecx */
  push32((uint32_t)(ECX));
  /* 12d92ff3 call 0x12d969b0 */
  push32(0x12d92ff8u); f_12d969b0();
  /* 12d92ff8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d92ffb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d92ffe push edx */
  push32((uint32_t)(EDX));
  /* 12d92fff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93001 mov al, byte ptr [0x12dabb52] */
  AL = (r8((uint32_t)(0x12dabb52)));
  /* 12d93006 push eax */
  push32((uint32_t)(EAX));
  /* 12d93007 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9300a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9300d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9300e call 0x12d969b0 */
  push32(0x12d93013u); f_12d969b0();
  /* 12d93013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93016 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93019 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12d9301c:;
  /* 12d9301c pop edi */
  EDI = (pop32());
  /* 12d9301d pop esi */
  ESI = (pop32());
  /* 12d9301e pop ebx */
  EBX = (pop32());
  /* 12d9301f mov esp, ebp */
  ESP = (EBP);
  /* 12d93021 pop ebp */
  EBP = (pop32());
  /* 12d93022 ret  */
  ESPCHK(0x12d92d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003030 @ 0x12d93030 (27 bytes, 13 insns) */
void f_12d93030(void) {
  FTRACE(0x12d93030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93030 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93031 mov ebp, esp */
  EBP = (ESP);
  /* 12d93033 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93035 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93037 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d93039 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9303c push eax */
  push32((uint32_t)(EAX));
  /* 12d9303d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93040 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93041 call 0x12d93050 */
  push32(0x12d93046u); f_12d93050();
  /* 12d93046 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93049 pop ebp */
  EBP = (pop32());
  /* 12d9304a ret  */
  ESPCHK(0x12d93030u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12d93050 (96 bytes, 37 insns) */
void f_12d93050(void) {
  FTRACE(0x12d93050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93050 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93051 mov ebp, esp */
  EBP = (ESP);
  /* 12d93053 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d93056 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d93059 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9305d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12d93060 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d93063 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93064 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d93067 push edx */
  push32((uint32_t)(EDX));
  /* 12d93068 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9306b push eax */
  push32((uint32_t)(EAX));
  /* 12d9306c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9306f push ecx */
  push32((uint32_t)(ECX));
  /* 12d93070 call 0x12d92c40 */
  push32(0x12d93075u); f_12d92c40();
  /* 12d93075 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93078 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9307b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9307f je 0x12d930a9 */
  if (C.zf) goto L_12d930a9;
  /* 12d93081 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93084 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d93087 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9308a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9308d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d93090:;
  /* 12d93090 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93093 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93096 jae 0x12d930a9 */
  if (!C.cf) goto L_12d930a9;
  /* 12d93098 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9309b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d9309e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d930a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d930a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d930a7 jmp 0x12d93090 */
  goto L_12d93090;
L_12d930a9:;
  /* 12d930a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d930ac mov esp, ebp */
  ESP = (EBP);
  /* 12d930ae pop ebp */
  EBP = (pop32());
  /* 12d930af ret  */
  ESPCHK(0x12d93050u, _esp0);
  ESP += 4; return;
}

/* FUN_100030b0 @ 0x12d930b0 (27 bytes, 13 insns) */
void f_12d930b0(void) {
  FTRACE(0x12d930b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d930b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d930b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d930b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d930b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d930b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d930b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d930bc push eax */
  push32((uint32_t)(EAX));
  /* 12d930bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d930c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d930c1 call 0x12d930d0 */
  push32(0x12d930c6u); f_12d930d0();
  /* 12d930c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d930c9 pop ebp */
  EBP = (pop32());
  /* 12d930ca ret  */
  ESPCHK(0x12d930b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030d0 @ 0x12d930d0 (64 bytes, 27 insns) */
void f_12d930d0(void) {
  FTRACE(0x12d930d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d930d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d930d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d930d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d930d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d930d6 call 0x12d96640 */
  push32(0x12d930dbu); f_12d96640();
  /* 12d930db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d930de push 1 */
  push32((uint32_t)(0x1u));
  /* 12d930e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d930e3 push eax */
  push32((uint32_t)(EAX));
  /* 12d930e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d930e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d930e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d930eb push edx */
  push32((uint32_t)(EDX));
  /* 12d930ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d930ef push eax */
  push32((uint32_t)(EAX));
  /* 12d930f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d930f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d930f4 call 0x12d93110 */
  push32(0x12d930f9u); f_12d93110();
  /* 12d930f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d930fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d930ff push 9 */
  push32((uint32_t)(0x9u));
  /* 12d93101 call 0x12d966e0 */
  push32(0x12d93106u); f_12d966e0();
  /* 12d93106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93109 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9310c mov esp, ebp */
  ESP = (EBP);
  /* 12d9310e pop ebp */
  EBP = (pop32());
  /* 12d9310f ret  */
  ESPCHK(0x12d930d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003110 @ 0x12d93110 (1297 bytes, 431 insns) */
void f_12d93110(void) {
  FTRACE(0x12d93110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93110 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93111 mov ebp, esp */
  EBP = (ESP);
  /* 12d93113 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d93116 push ebx */
  push32((uint32_t)(EBX));
  /* 12d93117 push esi */
  push32((uint32_t)(ESI));
  /* 12d93118 push edi */
  push32((uint32_t)(EDI));
  /* 12d93119 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12d93120 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93124 jne 0x12d93143 */
  if (!C.zf) goto L_12d93143;
  /* 12d93126 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d93129 push eax */
  push32((uint32_t)(EAX));
  /* 12d9312a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9312d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9312e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d93131 push edx */
  push32((uint32_t)(EDX));
  /* 12d93132 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d93135 push eax */
  push32((uint32_t)(EAX));
  /* 12d93136 call 0x12d92c40 */
  push32(0x12d9313bu); f_12d92c40();
  /* 12d9313b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9313e jmp 0x12d9361a */
  goto L_12d9361a;
L_12d93143:;
  /* 12d93143 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93147 je 0x12d93166 */
  if (C.zf) goto L_12d93166;
  /* 12d93149 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9314d jne 0x12d93166 */
  if (!C.zf) goto L_12d93166;
  /* 12d9314f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d93152 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93153 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93156 push edx */
  push32((uint32_t)(EDX));
  /* 12d93157 call 0x12d936d0 */
  push32(0x12d9315cu); f_12d936d0();
  /* 12d9315c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9315f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93161 jmp 0x12d9361a */
  goto L_12d9361a;
L_12d93166:;
  /* 12d93166 mov eax, dword ptr [0x12dabb44] */
  EAX = (r32((uint32_t)(0x12dabb44)));
  /* 12d9316b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9316e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93170 je 0x12d931a2 */
  if (C.zf) goto L_12d931a2;
L_12d93172:;
  /* 12d93172 call 0x12d93de0 */
  push32(0x12d93177u); f_12d93de0();
  /* 12d93177 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93179 jne 0x12d9319c */
  if (!C.zf) goto L_12d9319c;
  /* 12d9317b push 0x12da9424 */
  push32((uint32_t)(0x12da9424u));
  /* 12d93180 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93182 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12d93187 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d9318c push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9318e call 0x12d91d00 */
  push32(0x12d93193u); f_12d91d00();
  /* 12d93193 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93196 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93199 jne 0x12d9319c */
  if (!C.zf) goto L_12d9319c;
  /* 12d9319b int3  */
  x86_unimpl("int3 @ 0x12d9319b");
L_12d9319c:;
  /* 12d9319c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9319e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d931a0 jne 0x12d93172 */
  if (!C.zf) goto L_12d93172;
L_12d931a2:;
  /* 12d931a2 mov edx, dword ptr [0x12dabb48] */
  EDX = (r32((uint32_t)(0x12dabb48)));
  /* 12d931a8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d931ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d931ae cmp eax, dword ptr [0x12dabb4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12dabb4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d931b4 jne 0x12d931b7 */
  if (!C.zf) goto L_12d931b7;
  /* 12d931b6 int3  */
  x86_unimpl("int3 @ 0x12d931b6");
L_12d931b7:;
  /* 12d931b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d931ba push ecx */
  push32((uint32_t)(ECX));
  /* 12d931bb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d931be push edx */
  push32((uint32_t)(EDX));
  /* 12d931bf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d931c2 push eax */
  push32((uint32_t)(EAX));
  /* 12d931c3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d931c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d931c7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d931ca push edx */
  push32((uint32_t)(EDX));
  /* 12d931cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d931ce push eax */
  push32((uint32_t)(EAX));
  /* 12d931cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12d931d1 call dword ptr [0x12dabd50] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dabd50))), 0x12d931d7u);
  /* 12d931d7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d931da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d931dc jne 0x12d9323c */
  if (!C.zf) goto L_12d9323c;
  /* 12d931de cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d931e2 je 0x12d9320f */
  if (C.zf) goto L_12d9320f;
L_12d931e4:;
  /* 12d931e4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d931e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d931e8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d931eb push edx */
  push32((uint32_t)(EDX));
  /* 12d931ec push 0x12da95a0 */
  push32((uint32_t)(0x12da95a0u));
  /* 12d931f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d931f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d931f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d931f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d931f9 call 0x12d91d00 */
  push32(0x12d931feu); f_12d91d00();
  /* 12d931fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93201 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93204 jne 0x12d93207 */
  if (!C.zf) goto L_12d93207;
  /* 12d93206 int3  */
  x86_unimpl("int3 @ 0x12d93206");
L_12d93207:;
  /* 12d93207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9320b jne 0x12d931e4 */
  if (!C.zf) goto L_12d931e4;
  /* 12d9320d jmp 0x12d93235 */
  goto L_12d93235;
L_12d9320f:;
  /* 12d9320f push 0x12da957c */
  push32((uint32_t)(0x12da957cu));
  /* 12d93214 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d93219 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9321b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9321d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9321f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93221 call 0x12d91d00 */
  push32(0x12d93226u); f_12d91d00();
  /* 12d93226 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93229 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9322c jne 0x12d9322f */
  if (!C.zf) goto L_12d9322f;
  /* 12d9322e int3  */
  x86_unimpl("int3 @ 0x12d9322e");
L_12d9322f:;
  /* 12d9322f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93231 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93233 jne 0x12d9320f */
  if (!C.zf) goto L_12d9320f;
L_12d93235:;
  /* 12d93235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93237 jmp 0x12d9361a */
  goto L_12d9361a;
L_12d9323c:;
  /* 12d9323c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93240 jbe 0x12d9326e */
  if ((C.cf||C.zf)) goto L_12d9326e;
L_12d93242:;
  /* 12d93242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d93245 push edx */
  push32((uint32_t)(EDX));
  /* 12d93246 push 0x12da954c */
  push32((uint32_t)(0x12da954cu));
  /* 12d9324b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9324d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9324f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93251 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d93253 call 0x12d91d00 */
  push32(0x12d93258u); f_12d91d00();
  /* 12d93258 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9325b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9325e jne 0x12d93261 */
  if (!C.zf) goto L_12d93261;
  /* 12d93260 int3  */
  x86_unimpl("int3 @ 0x12d93260");
L_12d93261:;
  /* 12d93261 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93263 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93265 jne 0x12d93242 */
  if (!C.zf) goto L_12d93242;
  /* 12d93267 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93269 jmp 0x12d9361a */
  goto L_12d9361a;
L_12d9326e:;
  /* 12d9326e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93272 je 0x12d932b6 */
  if (C.zf) goto L_12d932b6;
  /* 12d93274 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d93277 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d9327d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93280 je 0x12d932b6 */
  if (C.zf) goto L_12d932b6;
  /* 12d93282 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d93285 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9328b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9328e je 0x12d932b6 */
  if (C.zf) goto L_12d932b6;
L_12d93290:;
  /* 12d93290 push 0x12da9360 */
  push32((uint32_t)(0x12da9360u));
  /* 12d93295 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d9329a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9329c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9329e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d932a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d932a2 call 0x12d91d00 */
  push32(0x12d932a7u); f_12d91d00();
  /* 12d932a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d932aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d932ad jne 0x12d932b0 */
  if (!C.zf) goto L_12d932b0;
  /* 12d932af int3  */
  x86_unimpl("int3 @ 0x12d932af");
L_12d932b0:;
  /* 12d932b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d932b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d932b4 jne 0x12d93290 */
  if (!C.zf) goto L_12d93290;
L_12d932b6:;
  /* 12d932b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d932b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d932ba call 0x12d94240 */
  push32(0x12d932bfu); f_12d94240();
  /* 12d932bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d932c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d932c4 jne 0x12d932e7 */
  if (!C.zf) goto L_12d932e7;
  /* 12d932c6 push 0x12da9528 */
  push32((uint32_t)(0x12da9528u));
  /* 12d932cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d932cd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12d932d2 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d932d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d932d9 call 0x12d91d00 */
  push32(0x12d932deu); f_12d91d00();
  /* 12d932de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d932e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d932e4 jne 0x12d932e7 */
  if (!C.zf) goto L_12d932e7;
  /* 12d932e6 int3  */
  x86_unimpl("int3 @ 0x12d932e6");
L_12d932e7:;
  /* 12d932e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d932e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d932eb jne 0x12d932b6 */
  if (!C.zf) goto L_12d932b6;
  /* 12d932ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d932f0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d932f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d932f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d932f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d932fd jne 0x12d93306 */
  if (!C.zf) goto L_12d93306;
  /* 12d932ff mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12d93306:;
  /* 12d93306 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9330a je 0x12d9334a */
  if (C.zf) goto L_12d9334a;
L_12d9330c:;
  /* 12d9330c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9330f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93316 jne 0x12d93321 */
  if (!C.zf) goto L_12d93321;
  /* 12d93318 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9331b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9331f je 0x12d93342 */
  if (C.zf) goto L_12d93342;
L_12d93321:;
  /* 12d93321 push 0x12da94e0 */
  push32((uint32_t)(0x12da94e0u));
  /* 12d93326 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93328 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12d9332d push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93332 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93334 call 0x12d91d00 */
  push32(0x12d93339u); f_12d91d00();
  /* 12d93339 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9333c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9333f jne 0x12d93342 */
  if (!C.zf) goto L_12d93342;
  /* 12d93341 int3  */
  x86_unimpl("int3 @ 0x12d93341");
L_12d93342:;
  /* 12d93342 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93344 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93346 jne 0x12d9330c */
  if (!C.zf) goto L_12d9330c;
  /* 12d93348 jmp 0x12d933ae */
  goto L_12d933ae;
L_12d9334a:;
  /* 12d9334a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9334d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d93350 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d93355 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93358 jne 0x12d9336f */
  if (!C.zf) goto L_12d9336f;
  /* 12d9335a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9335d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d93363 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93366 jne 0x12d9336f */
  if (!C.zf) goto L_12d9336f;
  /* 12d93368 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12d9336f:;
  /* 12d9336f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93372 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d93375 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9337a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9337d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d93383 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93385 je 0x12d933a8 */
  if (C.zf) goto L_12d933a8;
  /* 12d93387 push 0x12da94a4 */
  push32((uint32_t)(0x12da94a4u));
  /* 12d9338c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9338e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12d93393 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93398 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9339a call 0x12d91d00 */
  push32(0x12d9339fu); f_12d91d00();
  /* 12d9339f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d933a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d933a5 jne 0x12d933a8 */
  if (!C.zf) goto L_12d933a8;
  /* 12d933a7 int3  */
  x86_unimpl("int3 @ 0x12d933a7");
L_12d933a8:;
  /* 12d933a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d933aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d933ac jne 0x12d9336f */
  if (!C.zf) goto L_12d9336f;
L_12d933ae:;
  /* 12d933ae cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d933b2 je 0x12d933d9 */
  if (C.zf) goto L_12d933d9;
  /* 12d933b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d933b7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d933ba push eax */
  push32((uint32_t)(EAX));
  /* 12d933bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d933be push ecx */
  push32((uint32_t)(ECX));
  /* 12d933bf call 0x12d96bc0 */
  push32(0x12d933c4u); f_12d96bc0();
  /* 12d933c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d933c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d933ca cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d933ce jne 0x12d933d7 */
  if (!C.zf) goto L_12d933d7;
  /* 12d933d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d933d2 jmp 0x12d9361a */
  goto L_12d9361a;
L_12d933d7:;
  /* 12d933d7 jmp 0x12d933fc */
  goto L_12d933fc;
L_12d933d9:;
  /* 12d933d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d933dc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d933df push edx */
  push32((uint32_t)(EDX));
  /* 12d933e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d933e3 push eax */
  push32((uint32_t)(EAX));
  /* 12d933e4 call 0x12d96b10 */
  push32(0x12d933e9u); f_12d96b10();
  /* 12d933e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d933ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d933ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d933f3 jne 0x12d933fc */
  if (!C.zf) goto L_12d933fc;
  /* 12d933f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d933f7 jmp 0x12d9361a */
  goto L_12d9361a;
L_12d933fc:;
  /* 12d933fc mov ecx, dword ptr [0x12dabb48] */
  ECX = (r32((uint32_t)(0x12dabb48)));
  /* 12d93402 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93405 mov dword ptr [0x12dabb48], ecx */
  w32((uint32_t)(0x12dabb48), (ECX));
  /* 12d9340b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9340f jne 0x12d93467 */
  if (!C.zf) goto L_12d93467;
  /* 12d93411 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93414 mov eax, dword ptr [0x12dad568] */
  EAX = (r32((uint32_t)(0x12dad568)));
  /* 12d93419 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9341c mov dword ptr [0x12dad568], eax */
  w32((uint32_t)(0x12dad568), (EAX));
  /* 12d93421 mov ecx, dword ptr [0x12dad568] */
  ECX = (r32((uint32_t)(0x12dad568)));
  /* 12d93427 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9342a mov dword ptr [0x12dad568], ecx */
  w32((uint32_t)(0x12dad568), (ECX));
  /* 12d93430 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93433 mov eax, dword ptr [0x12dad570] */
  EAX = (r32((uint32_t)(0x12dad570)));
  /* 12d93438 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9343b mov dword ptr [0x12dad570], eax */
  w32((uint32_t)(0x12dad570), (EAX));
  /* 12d93440 mov ecx, dword ptr [0x12dad570] */
  ECX = (r32((uint32_t)(0x12dad570)));
  /* 12d93446 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93449 mov dword ptr [0x12dad570], ecx */
  w32((uint32_t)(0x12dad570), (ECX));
  /* 12d9344f mov edx, dword ptr [0x12dad570] */
  EDX = (r32((uint32_t)(0x12dad570)));
  /* 12d93455 cmp edx, dword ptr [0x12dad574] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12dad574))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9345b jbe 0x12d93467 */
  if ((C.cf||C.zf)) goto L_12d93467;
  /* 12d9345d mov eax, dword ptr [0x12dad570] */
  EAX = (r32((uint32_t)(0x12dad570)));
  /* 12d93462 mov dword ptr [0x12dad574], eax */
  w32((uint32_t)(0x12dad574), (EAX));
L_12d93467:;
  /* 12d93467 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9346a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9346d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d93470 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93473 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d93476 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93479 jbe 0x12d9349f */
  if ((C.cf||C.zf)) goto L_12d9349f;
  /* 12d9347b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9347e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d93481 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d93484 push edx */
  push32((uint32_t)(EDX));
  /* 12d93485 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93487 mov al, byte ptr [0x12dabb52] */
  AL = (r8((uint32_t)(0x12dabb52)));
  /* 12d9348c push eax */
  push32((uint32_t)(EAX));
  /* 12d9348d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93490 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93493 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93496 push edx */
  push32((uint32_t)(EDX));
  /* 12d93497 call 0x12d969b0 */
  push32(0x12d9349cu); f_12d969b0();
  /* 12d9349c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9349f:;
  /* 12d9349f push 4 */
  push32((uint32_t)(0x4u));
  /* 12d934a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d934a3 mov al, byte ptr [0x12dabb50] */
  AL = (r8((uint32_t)(0x12dabb50)));
  /* 12d934a8 push eax */
  push32((uint32_t)(EAX));
  /* 12d934a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d934ac add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d934af push ecx */
  push32((uint32_t)(ECX));
  /* 12d934b0 call 0x12d969b0 */
  push32(0x12d934b5u); f_12d969b0();
  /* 12d934b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d934b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d934bc jne 0x12d934d9 */
  if (!C.zf) goto L_12d934d9;
  /* 12d934be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d934c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d934c4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d934c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d934ca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d934cd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12d934d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d934d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d934d6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12d934d9:;
  /* 12d934d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d934dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d934df mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12d934e2:;
  /* 12d934e2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d934e6 jne 0x12d93517 */
  if (!C.zf) goto L_12d93517;
  /* 12d934e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d934ec jne 0x12d934f6 */
  if (!C.zf) goto L_12d934f6;
  /* 12d934ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d934f1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d934f4 je 0x12d93517 */
  if (C.zf) goto L_12d93517;
L_12d934f6:;
  /* 12d934f6 push 0x12da9470 */
  push32((uint32_t)(0x12da9470u));
  /* 12d934fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d934fd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12d93502 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93507 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93509 call 0x12d91d00 */
  push32(0x12d9350eu); f_12d91d00();
  /* 12d9350e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93511 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93514 jne 0x12d93517 */
  if (!C.zf) goto L_12d93517;
  /* 12d93516 int3  */
  x86_unimpl("int3 @ 0x12d93516");
L_12d93517:;
  /* 12d93517 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d93519 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9351b jne 0x12d934e2 */
  if (!C.zf) goto L_12d934e2;
  /* 12d9351d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93520 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93523 je 0x12d9352b */
  if (C.zf) goto L_12d9352b;
  /* 12d93525 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93529 je 0x12d93533 */
  if (C.zf) goto L_12d93533;
L_12d9352b:;
  /* 12d9352b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9352e jmp 0x12d9361a */
  goto L_12d9361a;
L_12d93533:;
  /* 12d93533 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93536 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93539 je 0x12d9354b */
  if (C.zf) goto L_12d9354b;
  /* 12d9353b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9353e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d93540 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93543 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d93546 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d93549 jmp 0x12d93587 */
  goto L_12d93587;
L_12d9354b:;
  /* 12d9354b mov eax, dword ptr [0x12dad564] */
  EAX = (r32((uint32_t)(0x12dad564)));
  /* 12d93550 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93553 je 0x12d93576 */
  if (C.zf) goto L_12d93576;
  /* 12d93555 push 0x12da9454 */
  push32((uint32_t)(0x12da9454u));
  /* 12d9355a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9355c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12d93561 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93566 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93568 call 0x12d91d00 */
  push32(0x12d9356du); f_12d91d00();
  /* 12d9356d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93570 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93573 jne 0x12d93576 */
  if (!C.zf) goto L_12d93576;
  /* 12d93575 int3  */
  x86_unimpl("int3 @ 0x12d93575");
L_12d93576:;
  /* 12d93576 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93578 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9357a jne 0x12d9354b */
  if (!C.zf) goto L_12d9354b;
  /* 12d9357c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9357f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d93582 mov dword ptr [0x12dad564], eax */
  w32((uint32_t)(0x12dad564), (EAX));
L_12d93587:;
  /* 12d93587 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9358a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9358e je 0x12d9359f */
  if (C.zf) goto L_12d9359f;
  /* 12d93590 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93593 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d93596 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93599 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9359b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d9359d jmp 0x12d935da */
  goto L_12d935da;
L_12d9359f:;
  /* 12d9359f mov eax, dword ptr [0x12dad56c] */
  EAX = (r32((uint32_t)(0x12dad56c)));
  /* 12d935a4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d935a7 je 0x12d935ca */
  if (C.zf) goto L_12d935ca;
  /* 12d935a9 push 0x12da9438 */
  push32((uint32_t)(0x12da9438u));
  /* 12d935ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12d935b0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12d935b5 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d935ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12d935bc call 0x12d91d00 */
  push32(0x12d935c1u); f_12d91d00();
  /* 12d935c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d935c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d935c7 jne 0x12d935ca */
  if (!C.zf) goto L_12d935ca;
  /* 12d935c9 int3  */
  x86_unimpl("int3 @ 0x12d935c9");
L_12d935ca:;
  /* 12d935ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d935cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d935ce jne 0x12d9359f */
  if (!C.zf) goto L_12d9359f;
  /* 12d935d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d935d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d935d5 mov dword ptr [0x12dad56c], eax */
  w32((uint32_t)(0x12dad56c), (EAX));
L_12d935da:;
  /* 12d935da cmp dword ptr [0x12dad56c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad56c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d935e1 je 0x12d935f1 */
  if (C.zf) goto L_12d935f1;
  /* 12d935e3 mov ecx, dword ptr [0x12dad56c] */
  ECX = (r32((uint32_t)(0x12dad56c)));
  /* 12d935e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d935ec mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12d935ef jmp 0x12d935f9 */
  goto L_12d935f9;
L_12d935f1:;
  /* 12d935f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d935f4 mov dword ptr [0x12dad564], eax */
  w32((uint32_t)(0x12dad564), (EAX));
L_12d935f9:;
  /* 12d935f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d935fc mov edx, dword ptr [0x12dad56c] */
  EDX = (r32((uint32_t)(0x12dad56c)));
  /* 12d93602 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d93604 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93607 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12d9360e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93611 mov dword ptr [0x12dad56c], ecx */
  w32((uint32_t)(0x12dad56c), (ECX));
  /* 12d93617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d9361a:;
  /* 12d9361a pop edi */
  EDI = (pop32());
  /* 12d9361b pop esi */
  ESI = (pop32());
  /* 12d9361c pop ebx */
  EBX = (pop32());
  /* 12d9361d mov esp, ebp */
  ESP = (EBP);
  /* 12d9361f pop ebp */
  EBP = (pop32());
  /* 12d93620 ret  */
  ESPCHK(0x12d93110u, _esp0);
  ESP += 4; return;
}

/* FUN_10003630 @ 0x12d93630 (27 bytes, 13 insns) */
void f_12d93630(void) {
  FTRACE(0x12d93630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93630 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93631 mov ebp, esp */
  EBP = (ESP);
  /* 12d93633 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93635 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93637 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d93639 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9363c push eax */
  push32((uint32_t)(EAX));
  /* 12d9363d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93640 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93641 call 0x12d93650 */
  push32(0x12d93646u); f_12d93650();
  /* 12d93646 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93649 pop ebp */
  EBP = (pop32());
  /* 12d9364a ret  */
  ESPCHK(0x12d93630u, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x12d93650 (64 bytes, 27 insns) */
void f_12d93650(void) {
  FTRACE(0x12d93650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93650 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93651 mov ebp, esp */
  EBP = (ESP);
  /* 12d93653 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93654 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d93656 call 0x12d96640 */
  push32(0x12d9365bu); f_12d96640();
  /* 12d9365b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9365e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93660 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d93663 push eax */
  push32((uint32_t)(EAX));
  /* 12d93664 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d93667 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93668 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9366b push edx */
  push32((uint32_t)(EDX));
  /* 12d9366c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9366f push eax */
  push32((uint32_t)(EAX));
  /* 12d93670 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93673 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93674 call 0x12d93110 */
  push32(0x12d93679u); f_12d93110();
  /* 12d93679 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9367c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9367f push 9 */
  push32((uint32_t)(0x9u));
  /* 12d93681 call 0x12d966e0 */
  push32(0x12d93686u); f_12d966e0();
  /* 12d93686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93689 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9368c mov esp, ebp */
  ESP = (EBP);
  /* 12d9368e pop ebp */
  EBP = (pop32());
  /* 12d9368f ret  */
  ESPCHK(0x12d93650u, _esp0);
  ESP += 4; return;
}

/* FUN_10003690 @ 0x12d93690 (19 bytes, 9 insns) */
void f_12d93690(void) {
  FTRACE(0x12d93690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93690 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93691 mov ebp, esp */
  EBP = (ESP);
  /* 12d93693 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d93695 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93698 push eax */
  push32((uint32_t)(EAX));
  /* 12d93699 call 0x12d936d0 */
  push32(0x12d9369eu); f_12d936d0();
  /* 12d9369e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d936a1 pop ebp */
  EBP = (pop32());
  /* 12d936a2 ret  */
  ESPCHK(0x12d93690u, _esp0);
  ESP += 4; return;
}

/* FUN_100036b0 @ 0x12d936b0 (19 bytes, 9 insns) */
void f_12d936b0(void) {
  FTRACE(0x12d936b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d936b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d936b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d936b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d936b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d936b8 push eax */
  push32((uint32_t)(EAX));
  /* 12d936b9 call 0x12d93700 */
  push32(0x12d936beu); f_12d93700();
  /* 12d936be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d936c1 pop ebp */
  EBP = (pop32());
  /* 12d936c2 ret  */
  ESPCHK(0x12d936b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d0 @ 0x12d936d0 (41 bytes, 16 insns) */
void f_12d936d0(void) {
  FTRACE(0x12d936d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d936d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d936d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d936d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d936d5 call 0x12d96640 */
  push32(0x12d936dau); f_12d96640();
  /* 12d936da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d936dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d936e0 push eax */
  push32((uint32_t)(EAX));
  /* 12d936e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d936e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12d936e5 call 0x12d93700 */
  push32(0x12d936eau); f_12d93700();
  /* 12d936ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d936ed push 9 */
  push32((uint32_t)(0x9u));
  /* 12d936ef call 0x12d966e0 */
  push32(0x12d936f4u); f_12d966e0();
  /* 12d936f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d936f7 pop ebp */
  EBP = (pop32());
  /* 12d936f8 ret  */
  ESPCHK(0x12d936d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003700 @ 0x12d93700 (1004 bytes, 342 insns) */
void f_12d93700(void) {
  FTRACE(0x12d93700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93700 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93701 mov ebp, esp */
  EBP = (ESP);
  /* 12d93703 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93704 push ebx */
  push32((uint32_t)(EBX));
  /* 12d93705 push esi */
  push32((uint32_t)(ESI));
  /* 12d93706 push edi */
  push32((uint32_t)(EDI));
  /* 12d93707 mov eax, dword ptr [0x12dabb44] */
  EAX = (r32((uint32_t)(0x12dabb44)));
  /* 12d9370c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9370f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93711 je 0x12d93743 */
  if (C.zf) goto L_12d93743;
L_12d93713:;
  /* 12d93713 call 0x12d93de0 */
  push32(0x12d93718u); f_12d93de0();
  /* 12d93718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9371a jne 0x12d9373d */
  if (!C.zf) goto L_12d9373d;
  /* 12d9371c push 0x12da9424 */
  push32((uint32_t)(0x12da9424u));
  /* 12d93721 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93723 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12d93728 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d9372d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9372f call 0x12d91d00 */
  push32(0x12d93734u); f_12d91d00();
  /* 12d93734 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93737 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9373a jne 0x12d9373d */
  if (!C.zf) goto L_12d9373d;
  /* 12d9373c int3  */
  x86_unimpl("int3 @ 0x12d9373c");
L_12d9373d:;
  /* 12d9373d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9373f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93741 jne 0x12d93713 */
  if (!C.zf) goto L_12d93713;
L_12d93743:;
  /* 12d93743 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93747 jne 0x12d9374e */
  if (!C.zf) goto L_12d9374e;
  /* 12d93749 jmp 0x12d93ae5 */
  goto L_12d93ae5;
L_12d9374e:;
  /* 12d9374e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93750 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93752 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93754 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d93757 push edx */
  push32((uint32_t)(EDX));
  /* 12d93758 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9375a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9375d push eax */
  push32((uint32_t)(EAX));
  /* 12d9375e push 3 */
  push32((uint32_t)(0x3u));
  /* 12d93760 call dword ptr [0x12dabd50] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dabd50))), 0x12d93766u);
  /* 12d93766 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9376b jne 0x12d93798 */
  if (!C.zf) goto L_12d93798;
L_12d9376d:;
  /* 12d9376d push 0x12da96e8 */
  push32((uint32_t)(0x12da96e8u));
  /* 12d93772 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d93777 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93779 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9377b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9377d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9377f call 0x12d91d00 */
  push32(0x12d93784u); f_12d91d00();
  /* 12d93784 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93787 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9378a jne 0x12d9378d */
  if (!C.zf) goto L_12d9378d;
  /* 12d9378c int3  */
  x86_unimpl("int3 @ 0x12d9378c");
L_12d9378d:;
  /* 12d9378d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9378f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93791 jne 0x12d9376d */
  if (!C.zf) goto L_12d9376d;
  /* 12d93793 jmp 0x12d93ae5 */
  goto L_12d93ae5;
L_12d93798:;
  /* 12d93798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9379b push edx */
  push32((uint32_t)(EDX));
  /* 12d9379c call 0x12d94240 */
  push32(0x12d937a1u); f_12d94240();
  /* 12d937a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d937a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d937a6 jne 0x12d937c9 */
  if (!C.zf) goto L_12d937c9;
  /* 12d937a8 push 0x12da9528 */
  push32((uint32_t)(0x12da9528u));
  /* 12d937ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12d937af push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12d937b4 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d937b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d937bb call 0x12d91d00 */
  push32(0x12d937c0u); f_12d91d00();
  /* 12d937c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d937c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d937c6 jne 0x12d937c9 */
  if (!C.zf) goto L_12d937c9;
  /* 12d937c8 int3  */
  x86_unimpl("int3 @ 0x12d937c8");
L_12d937c9:;
  /* 12d937c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d937cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d937cd jne 0x12d93798 */
  if (!C.zf) goto L_12d93798;
  /* 12d937cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d937d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d937d5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d937d8:;
  /* 12d937d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d937db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d937de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d937e3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d937e6 je 0x12d9382b */
  if (C.zf) goto L_12d9382b;
  /* 12d937e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d937eb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d937ef je 0x12d9382b */
  if (C.zf) goto L_12d9382b;
  /* 12d937f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d937f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d937f7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d937fc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d937ff je 0x12d9382b */
  if (C.zf) goto L_12d9382b;
  /* 12d93801 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93804 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93808 je 0x12d9382b */
  if (C.zf) goto L_12d9382b;
  /* 12d9380a push 0x12da96c0 */
  push32((uint32_t)(0x12da96c0u));
  /* 12d9380f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93811 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12d93816 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d9381b push 2 */
  push32((uint32_t)(0x2u));
  /* 12d9381d call 0x12d91d00 */
  push32(0x12d93822u); f_12d91d00();
  /* 12d93822 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93825 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93828 jne 0x12d9382b */
  if (!C.zf) goto L_12d9382b;
  /* 12d9382a int3  */
  x86_unimpl("int3 @ 0x12d9382a");
L_12d9382b:;
  /* 12d9382b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9382d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9382f jne 0x12d937d8 */
  if (!C.zf) goto L_12d937d8;
  /* 12d93831 mov eax, dword ptr [0x12dabb44] */
  EAX = (r32((uint32_t)(0x12dabb44)));
  /* 12d93836 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d93839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9383b jne 0x12d93906 */
  if (!C.zf) goto L_12d93906;
  /* 12d93841 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d93843 mov cl, byte ptr [0x12dabb50] */
  CL = (r8((uint32_t)(0x12dabb50)));
  /* 12d93849 push ecx */
  push32((uint32_t)(ECX));
  /* 12d9384a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9384d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93850 push edx */
  push32((uint32_t)(EDX));
  /* 12d93851 call 0x12d93d50 */
  push32(0x12d93856u); f_12d93d50();
  /* 12d93856 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9385b jne 0x12d938a0 */
  if (!C.zf) goto L_12d938a0;
L_12d9385d:;
  /* 12d9385d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93860 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93863 push eax */
  push32((uint32_t)(EAX));
  /* 12d93864 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93867 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d9386a push edx */
  push32((uint32_t)(EDX));
  /* 12d9386b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9386e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d93871 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d93877 mov edx, dword ptr [ecx*4 + 0x12dabb54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dabb54)));
  /* 12d9387e push edx */
  push32((uint32_t)(EDX));
  /* 12d9387f push 0x12da9694 */
  push32((uint32_t)(0x12da9694u));
  /* 12d93884 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93886 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93888 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9388a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9388c call 0x12d91d00 */
  push32(0x12d93891u); f_12d91d00();
  /* 12d93891 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93897 jne 0x12d9389a */
  if (!C.zf) goto L_12d9389a;
  /* 12d93899 int3  */
  x86_unimpl("int3 @ 0x12d93899");
L_12d9389a:;
  /* 12d9389a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9389c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9389e jne 0x12d9385d */
  if (!C.zf) goto L_12d9385d;
L_12d938a0:;
  /* 12d938a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d938a2 mov cl, byte ptr [0x12dabb50] */
  CL = (r8((uint32_t)(0x12dabb50)));
  /* 12d938a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d938a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d938ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d938af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d938b2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12d938b6 push edx */
  push32((uint32_t)(EDX));
  /* 12d938b7 call 0x12d93d50 */
  push32(0x12d938bcu); f_12d93d50();
  /* 12d938bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d938bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d938c1 jne 0x12d93906 */
  if (!C.zf) goto L_12d93906;
L_12d938c3:;
  /* 12d938c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d938c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d938c9 push eax */
  push32((uint32_t)(EAX));
  /* 12d938ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d938cd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d938d0 push edx */
  push32((uint32_t)(EDX));
  /* 12d938d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d938d4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d938d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d938dd mov edx, dword ptr [ecx*4 + 0x12dabb54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dabb54)));
  /* 12d938e4 push edx */
  push32((uint32_t)(EDX));
  /* 12d938e5 push 0x12da9668 */
  push32((uint32_t)(0x12da9668u));
  /* 12d938ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12d938ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12d938ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12d938f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d938f2 call 0x12d91d00 */
  push32(0x12d938f7u); f_12d91d00();
  /* 12d938f7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d938fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d938fd jne 0x12d93900 */
  if (!C.zf) goto L_12d93900;
  /* 12d938ff int3  */
  x86_unimpl("int3 @ 0x12d938ff");
L_12d93900:;
  /* 12d93900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93904 jne 0x12d938c3 */
  if (!C.zf) goto L_12d938c3;
L_12d93906:;
  /* 12d93906 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93909 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9390d jne 0x12d9397b */
  if (!C.zf) goto L_12d9397b;
L_12d9390f:;
  /* 12d9390f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93912 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93919 jne 0x12d93924 */
  if (!C.zf) goto L_12d93924;
  /* 12d9391b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9391e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93922 je 0x12d93945 */
  if (C.zf) goto L_12d93945;
L_12d93924:;
  /* 12d93924 push 0x12da9628 */
  push32((uint32_t)(0x12da9628u));
  /* 12d93929 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9392b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12d93930 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93935 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93937 call 0x12d91d00 */
  push32(0x12d9393cu); f_12d91d00();
  /* 12d9393c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9393f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93942 jne 0x12d93945 */
  if (!C.zf) goto L_12d93945;
  /* 12d93944 int3  */
  x86_unimpl("int3 @ 0x12d93944");
L_12d93945:;
  /* 12d93945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93947 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93949 jne 0x12d9390f */
  if (!C.zf) goto L_12d9390f;
  /* 12d9394b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9394e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d93951 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93954 push eax */
  push32((uint32_t)(EAX));
  /* 12d93955 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93957 mov cl, byte ptr [0x12dabb51] */
  CL = (r8((uint32_t)(0x12dabb51)));
  /* 12d9395d push ecx */
  push32((uint32_t)(ECX));
  /* 12d9395e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93961 push edx */
  push32((uint32_t)(EDX));
  /* 12d93962 call 0x12d969b0 */
  push32(0x12d93967u); f_12d969b0();
  /* 12d93967 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9396a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9396d push eax */
  push32((uint32_t)(EAX));
  /* 12d9396e call 0x12d96db0 */
  push32(0x12d93973u); f_12d96db0();
  /* 12d93973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93976 jmp 0x12d93ae5 */
  goto L_12d93ae5;
L_12d9397b:;
  /* 12d9397b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9397e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93982 jne 0x12d93991 */
  if (!C.zf) goto L_12d93991;
  /* 12d93984 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93988 jne 0x12d93991 */
  if (!C.zf) goto L_12d93991;
  /* 12d9398a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12d93991:;
  /* 12d93991 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93994 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d93997 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9399a je 0x12d939bd */
  if (C.zf) goto L_12d939bd;
  /* 12d9399c push 0x12da9608 */
  push32((uint32_t)(0x12da9608u));
  /* 12d939a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d939a3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12d939a8 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d939ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12d939af call 0x12d91d00 */
  push32(0x12d939b4u); f_12d91d00();
  /* 12d939b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d939b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d939ba jne 0x12d939bd */
  if (!C.zf) goto L_12d939bd;
  /* 12d939bc int3  */
  x86_unimpl("int3 @ 0x12d939bc");
L_12d939bd:;
  /* 12d939bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d939bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d939c1 jne 0x12d93991 */
  if (!C.zf) goto L_12d93991;
  /* 12d939c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d939c6 mov eax, dword ptr [0x12dad570] */
  EAX = (r32((uint32_t)(0x12dad570)));
  /* 12d939cb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d939ce mov dword ptr [0x12dad570], eax */
  w32((uint32_t)(0x12dad570), (EAX));
  /* 12d939d3 mov ecx, dword ptr [0x12dabb44] */
  ECX = (r32((uint32_t)(0x12dabb44)));
  /* 12d939d9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12d939dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d939de jne 0x12d93abc */
  if (!C.zf) goto L_12d93abc;
  /* 12d939e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d939e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d939ea je 0x12d939fc */
  if (C.zf) goto L_12d939fc;
  /* 12d939ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d939ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d939f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d939f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d939f7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d939fa jmp 0x12d93a3a */
  goto L_12d93a3a;
L_12d939fc:;
  /* 12d939fc mov ecx, dword ptr [0x12dad564] */
  ECX = (r32((uint32_t)(0x12dad564)));
  /* 12d93a02 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93a05 je 0x12d93a28 */
  if (C.zf) goto L_12d93a28;
  /* 12d93a07 push 0x12da95f0 */
  push32((uint32_t)(0x12da95f0u));
  /* 12d93a0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93a0e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12d93a13 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93a18 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93a1a call 0x12d91d00 */
  push32(0x12d93a1fu); f_12d91d00();
  /* 12d93a1f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93a22 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93a25 jne 0x12d93a28 */
  if (!C.zf) goto L_12d93a28;
  /* 12d93a27 int3  */
  x86_unimpl("int3 @ 0x12d93a27");
L_12d93a28:;
  /* 12d93a28 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d93a2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d93a2c jne 0x12d939fc */
  if (!C.zf) goto L_12d939fc;
  /* 12d93a2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93a31 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d93a34 mov dword ptr [0x12dad564], ecx */
  w32((uint32_t)(0x12dad564), (ECX));
L_12d93a3a:;
  /* 12d93a3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93a3d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93a41 je 0x12d93a52 */
  if (C.zf) goto L_12d93a52;
  /* 12d93a43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93a46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d93a49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93a4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d93a4e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d93a50 jmp 0x12d93a8f */
  goto L_12d93a8f;
L_12d93a52:;
  /* 12d93a52 mov ecx, dword ptr [0x12dad56c] */
  ECX = (r32((uint32_t)(0x12dad56c)));
  /* 12d93a58 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93a5b je 0x12d93a7e */
  if (C.zf) goto L_12d93a7e;
  /* 12d93a5d push 0x12da95d8 */
  push32((uint32_t)(0x12da95d8u));
  /* 12d93a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93a64 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12d93a69 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93a6e push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93a70 call 0x12d91d00 */
  push32(0x12d93a75u); f_12d91d00();
  /* 12d93a75 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93a78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93a7b jne 0x12d93a7e */
  if (!C.zf) goto L_12d93a7e;
  /* 12d93a7d int3  */
  x86_unimpl("int3 @ 0x12d93a7d");
L_12d93a7e:;
  /* 12d93a7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d93a80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d93a82 jne 0x12d93a52 */
  if (!C.zf) goto L_12d93a52;
  /* 12d93a84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93a87 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d93a89 mov dword ptr [0x12dad56c], ecx */
  w32((uint32_t)(0x12dad56c), (ECX));
L_12d93a8f:;
  /* 12d93a8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93a92 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d93a95 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93a98 push eax */
  push32((uint32_t)(EAX));
  /* 12d93a99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93a9b mov cl, byte ptr [0x12dabb51] */
  CL = (r8((uint32_t)(0x12dabb51)));
  /* 12d93aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93aa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93aa5 push edx */
  push32((uint32_t)(EDX));
  /* 12d93aa6 call 0x12d969b0 */
  push32(0x12d93aabu); f_12d969b0();
  /* 12d93aab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93aae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93ab1 push eax */
  push32((uint32_t)(EAX));
  /* 12d93ab2 call 0x12d96db0 */
  push32(0x12d93ab7u); f_12d96db0();
  /* 12d93ab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93aba jmp 0x12d93ae5 */
  goto L_12d93ae5;
L_12d93abc:;
  /* 12d93abc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93abf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12d93ac6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93ac9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d93acc push eax */
  push32((uint32_t)(EAX));
  /* 12d93acd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93acf mov cl, byte ptr [0x12dabb51] */
  CL = (r8((uint32_t)(0x12dabb51)));
  /* 12d93ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93ad6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93ad9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93adc push edx */
  push32((uint32_t)(EDX));
  /* 12d93add call 0x12d969b0 */
  push32(0x12d93ae2u); f_12d969b0();
  /* 12d93ae2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d93ae5:;
  /* 12d93ae5 pop edi */
  EDI = (pop32());
  /* 12d93ae6 pop esi */
  ESI = (pop32());
  /* 12d93ae7 pop ebx */
  EBX = (pop32());
  /* 12d93ae8 mov esp, ebp */
  ESP = (EBP);
  /* 12d93aea pop ebp */
  EBP = (pop32());
  /* 12d93aeb ret  */
  ESPCHK(0x12d93700u, _esp0);
  ESP += 4; return;
}

/* FUN_10003af0 @ 0x12d93af0 (19 bytes, 9 insns) */
void f_12d93af0(void) {
  FTRACE(0x12d93af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93af1 mov ebp, esp */
  EBP = (ESP);
  /* 12d93af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d93af5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93af8 push eax */
  push32((uint32_t)(EAX));
  /* 12d93af9 call 0x12d93b10 */
  push32(0x12d93afeu); f_12d93b10();
  /* 12d93afe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93b01 pop ebp */
  EBP = (pop32());
  /* 12d93b02 ret  */
  ESPCHK(0x12d93af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b10 @ 0x12d93b10 (342 bytes, 119 insns) */
void f_12d93b10(void) {
  FTRACE(0x12d93b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93b11 mov ebp, esp */
  EBP = (ESP);
  /* 12d93b13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d93b16 push ebx */
  push32((uint32_t)(EBX));
  /* 12d93b17 push esi */
  push32((uint32_t)(ESI));
  /* 12d93b18 push edi */
  push32((uint32_t)(EDI));
  /* 12d93b19 mov eax, dword ptr [0x12dabb44] */
  EAX = (r32((uint32_t)(0x12dabb44)));
  /* 12d93b1e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d93b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93b23 je 0x12d93b55 */
  if (C.zf) goto L_12d93b55;
L_12d93b25:;
  /* 12d93b25 call 0x12d93de0 */
  push32(0x12d93b2au); f_12d93de0();
  /* 12d93b2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93b2c jne 0x12d93b4f */
  if (!C.zf) goto L_12d93b4f;
  /* 12d93b2e push 0x12da9424 */
  push32((uint32_t)(0x12da9424u));
  /* 12d93b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93b35 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12d93b3a push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93b3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93b41 call 0x12d91d00 */
  push32(0x12d93b46u); f_12d91d00();
  /* 12d93b46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93b49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93b4c jne 0x12d93b4f */
  if (!C.zf) goto L_12d93b4f;
  /* 12d93b4e int3  */
  x86_unimpl("int3 @ 0x12d93b4e");
L_12d93b4f:;
  /* 12d93b4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93b51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93b53 jne 0x12d93b25 */
  if (!C.zf) goto L_12d93b25;
L_12d93b55:;
  /* 12d93b55 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d93b57 call 0x12d96640 */
  push32(0x12d93b5cu); f_12d96640();
  /* 12d93b5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d93b5f:;
  /* 12d93b5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93b62 push edx */
  push32((uint32_t)(EDX));
  /* 12d93b63 call 0x12d94240 */
  push32(0x12d93b68u); f_12d94240();
  /* 12d93b68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93b6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93b6d jne 0x12d93b90 */
  if (!C.zf) goto L_12d93b90;
  /* 12d93b6f push 0x12da9528 */
  push32((uint32_t)(0x12da9528u));
  /* 12d93b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93b76 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12d93b7b push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93b80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93b82 call 0x12d91d00 */
  push32(0x12d93b87u); f_12d91d00();
  /* 12d93b87 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93b8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93b8d jne 0x12d93b90 */
  if (!C.zf) goto L_12d93b90;
  /* 12d93b8f int3  */
  x86_unimpl("int3 @ 0x12d93b8f");
L_12d93b90:;
  /* 12d93b90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93b94 jne 0x12d93b5f */
  if (!C.zf) goto L_12d93b5f;
  /* 12d93b96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93b99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d93b9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d93b9f:;
  /* 12d93b9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93ba2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d93ba5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d93baa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93bad je 0x12d93bf2 */
  if (C.zf) goto L_12d93bf2;
  /* 12d93baf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93bb2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93bb6 je 0x12d93bf2 */
  if (C.zf) goto L_12d93bf2;
  /* 12d93bb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93bbb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d93bbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d93bc3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93bc6 je 0x12d93bf2 */
  if (C.zf) goto L_12d93bf2;
  /* 12d93bc8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93bcb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93bcf je 0x12d93bf2 */
  if (C.zf) goto L_12d93bf2;
  /* 12d93bd1 push 0x12da96c0 */
  push32((uint32_t)(0x12da96c0u));
  /* 12d93bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93bd8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12d93bdd push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93be2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93be4 call 0x12d91d00 */
  push32(0x12d93be9u); f_12d91d00();
  /* 12d93be9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93bec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93bef jne 0x12d93bf2 */
  if (!C.zf) goto L_12d93bf2;
  /* 12d93bf1 int3  */
  x86_unimpl("int3 @ 0x12d93bf1");
L_12d93bf2:;
  /* 12d93bf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d93bf4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d93bf6 jne 0x12d93b9f */
  if (!C.zf) goto L_12d93b9f;
  /* 12d93bf8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93bfb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93bff jne 0x12d93c0e */
  if (!C.zf) goto L_12d93c0e;
  /* 12d93c01 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93c05 jne 0x12d93c0e */
  if (!C.zf) goto L_12d93c0e;
  /* 12d93c07 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12d93c0e:;
  /* 12d93c0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93c11 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93c15 je 0x12d93c49 */
  if (C.zf) goto L_12d93c49;
L_12d93c17:;
  /* 12d93c17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93c1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d93c1d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93c20 je 0x12d93c43 */
  if (C.zf) goto L_12d93c43;
  /* 12d93c22 push 0x12da9608 */
  push32((uint32_t)(0x12da9608u));
  /* 12d93c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93c29 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12d93c2e push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93c33 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93c35 call 0x12d91d00 */
  push32(0x12d93c3au); f_12d91d00();
  /* 12d93c3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93c3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93c40 jne 0x12d93c43 */
  if (!C.zf) goto L_12d93c43;
  /* 12d93c42 int3  */
  x86_unimpl("int3 @ 0x12d93c42");
L_12d93c43:;
  /* 12d93c43 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93c45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93c47 jne 0x12d93c17 */
  if (!C.zf) goto L_12d93c17;
L_12d93c49:;
  /* 12d93c49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93c4c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d93c4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d93c52 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d93c54 call 0x12d966e0 */
  push32(0x12d93c59u); f_12d966e0();
  /* 12d93c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93c5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93c5f pop edi */
  EDI = (pop32());
  /* 12d93c60 pop esi */
  ESI = (pop32());
  /* 12d93c61 pop ebx */
  EBX = (pop32());
  /* 12d93c62 mov esp, ebp */
  ESP = (EBP);
  /* 12d93c64 pop ebp */
  EBP = (pop32());
  /* 12d93c65 ret  */
  ESPCHK(0x12d93b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c70 @ 0x12d93c70 (28 bytes, 11 insns) */
void f_12d93c70(void) {
  FTRACE(0x12d93c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93c71 mov ebp, esp */
  EBP = (ESP);
  /* 12d93c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93c74 mov eax, dword ptr [0x12dabb4c] */
  EAX = (r32((uint32_t)(0x12dabb4c)));
  /* 12d93c79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d93c7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93c7f mov dword ptr [0x12dabb4c], ecx */
  w32((uint32_t)(0x12dabb4c), (ECX));
  /* 12d93c85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93c88 mov esp, ebp */
  ESP = (EBP);
  /* 12d93c8a pop ebp */
  EBP = (pop32());
  /* 12d93c8b ret  */
  ESPCHK(0x12d93c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c90 @ 0x12d93c90 (157 bytes, 59 insns) */
void f_12d93c90(void) {
  FTRACE(0x12d93c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93c91 mov ebp, esp */
  EBP = (ESP);
  /* 12d93c93 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93c94 push ebx */
  push32((uint32_t)(EBX));
  /* 12d93c95 push esi */
  push32((uint32_t)(ESI));
  /* 12d93c96 push edi */
  push32((uint32_t)(EDI));
  /* 12d93c97 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d93c99 call 0x12d96640 */
  push32(0x12d93c9eu); f_12d96640();
  /* 12d93c9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93ca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93ca4 push eax */
  push32((uint32_t)(EAX));
  /* 12d93ca5 call 0x12d94240 */
  push32(0x12d93caau); f_12d94240();
  /* 12d93caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93cad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93caf je 0x12d93d1c */
  if (C.zf) goto L_12d93d1c;
  /* 12d93cb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93cb4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d93cb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d93cba:;
  /* 12d93cba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93cbd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d93cc0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d93cc5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93cc8 je 0x12d93d0d */
  if (C.zf) goto L_12d93d0d;
  /* 12d93cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93ccd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93cd1 je 0x12d93d0d */
  if (C.zf) goto L_12d93d0d;
  /* 12d93cd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93cd6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d93cd9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d93cde cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93ce1 je 0x12d93d0d */
  if (C.zf) goto L_12d93d0d;
  /* 12d93ce3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93ce6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93cea je 0x12d93d0d */
  if (C.zf) goto L_12d93d0d;
  /* 12d93cec push 0x12da96c0 */
  push32((uint32_t)(0x12da96c0u));
  /* 12d93cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93cf3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12d93cf8 push 0x12da9418 */
  push32((uint32_t)(0x12da9418u));
  /* 12d93cfd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d93cff call 0x12d91d00 */
  push32(0x12d93d04u); f_12d91d00();
  /* 12d93d04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93d07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93d0a jne 0x12d93d0d */
  if (!C.zf) goto L_12d93d0d;
  /* 12d93d0c int3  */
  x86_unimpl("int3 @ 0x12d93d0c");
L_12d93d0d:;
  /* 12d93d0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d93d0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d93d11 jne 0x12d93cba */
  if (!C.zf) goto L_12d93cba;
  /* 12d93d13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93d16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d93d19 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12d93d1c:;
  /* 12d93d1c push 9 */
  push32((uint32_t)(0x9u));
  /* 12d93d1e call 0x12d966e0 */
  push32(0x12d93d23u); f_12d966e0();
  /* 12d93d23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93d26 pop edi */
  EDI = (pop32());
  /* 12d93d27 pop esi */
  ESI = (pop32());
  /* 12d93d28 pop ebx */
  EBX = (pop32());
  /* 12d93d29 mov esp, ebp */
  ESP = (EBP);
  /* 12d93d2b pop ebp */
  EBP = (pop32());
  /* 12d93d2c ret  */
  ESPCHK(0x12d93c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d30 @ 0x12d93d30 (28 bytes, 11 insns) */
void f_12d93d30(void) {
  FTRACE(0x12d93d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93d31 mov ebp, esp */
  EBP = (ESP);
  /* 12d93d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93d34 mov eax, dword ptr [0x12dabd50] */
  EAX = (r32((uint32_t)(0x12dabd50)));
  /* 12d93d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d93d3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93d3f mov dword ptr [0x12dabd50], ecx */
  w32((uint32_t)(0x12dabd50), (ECX));
  /* 12d93d45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93d48 mov esp, ebp */
  ESP = (EBP);
  /* 12d93d4a pop ebp */
  EBP = (pop32());
  /* 12d93d4b ret  */
  ESPCHK(0x12d93d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d50 @ 0x12d93d50 (136 bytes, 55 insns) */
void f_12d93d50(void) {
  FTRACE(0x12d93d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93d51 mov ebp, esp */
  EBP = (ESP);
  /* 12d93d53 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93d54 push ebx */
  push32((uint32_t)(EBX));
  /* 12d93d55 push esi */
  push32((uint32_t)(ESI));
  /* 12d93d56 push edi */
  push32((uint32_t)(EDI));
  /* 12d93d57 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12d93d5e:;
  /* 12d93d5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d93d61 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d93d64 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d93d67 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d93d6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93d6c je 0x12d93dce */
  if (C.zf) goto L_12d93dce;
  /* 12d93d6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93d71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93d73 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d93d75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d93d78 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d93d7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93d81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93d84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d93d87 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93d89 je 0x12d93dcc */
  if (C.zf) goto L_12d93dcc;
L_12d93d8b:;
  /* 12d93d8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d93d8e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d93d93 push eax */
  push32((uint32_t)(EAX));
  /* 12d93d94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93d97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d93d99 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12d93d9c push edx */
  push32((uint32_t)(EDX));
  /* 12d93d9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d93da0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d93da3 push eax */
  push32((uint32_t)(EAX));
  /* 12d93da4 push 0x12da9704 */
  push32((uint32_t)(0x12da9704u));
  /* 12d93da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93dab push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93dad push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93daf push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93db1 call 0x12d91d00 */
  push32(0x12d93db6u); f_12d91d00();
  /* 12d93db6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93db9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93dbc jne 0x12d93dbf */
  if (!C.zf) goto L_12d93dbf;
  /* 12d93dbe int3  */
  x86_unimpl("int3 @ 0x12d93dbe");
L_12d93dbf:;
  /* 12d93dbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93dc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93dc3 jne 0x12d93d8b */
  if (!C.zf) goto L_12d93d8b;
  /* 12d93dc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d93dcc:;
  /* 12d93dcc jmp 0x12d93d5e */
  goto L_12d93d5e;
L_12d93dce:;
  /* 12d93dce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d93dd1 pop edi */
  EDI = (pop32());
  /* 12d93dd2 pop esi */
  ESI = (pop32());
  /* 12d93dd3 pop ebx */
  EBX = (pop32());
  /* 12d93dd4 mov esp, ebp */
  ESP = (EBP);
  /* 12d93dd6 pop ebp */
  EBP = (pop32());
  /* 12d93dd7 ret  */
  ESPCHK(0x12d93d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003de0 @ 0x12d93de0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12d93de0(void) {
  FTRACE(0x12d93de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d93de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d93de1 mov ebp, esp */
  EBP = (ESP);
  /* 12d93de3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d93de6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d93de7 push esi */
  push32((uint32_t)(ESI));
  /* 12d93de8 push edi */
  push32((uint32_t)(EDI));
  /* 12d93de9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d93df0 mov eax, dword ptr [0x12dabb44] */
  EAX = (r32((uint32_t)(0x12dabb44)));
  /* 12d93df5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d93df8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93dfa jne 0x12d93e06 */
  if (!C.zf) goto L_12d93e06;
  /* 12d93dfc mov eax, 1 */
  EAX = (0x1u);
  /* 12d93e01 jmp 0x12d94138 */
  goto L_12d94138;
L_12d93e06:;
  /* 12d93e06 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d93e08 call 0x12d96640 */
  push32(0x12d93e0du); f_12d96640();
  /* 12d93e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93e10 call 0x12d96e20 */
  push32(0x12d93e15u); f_12d96e20();
  /* 12d93e15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d93e18 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93e1c je 0x12d93f29 */
  if (C.zf) goto L_12d93f29;
  /* 12d93e22 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93e26 je 0x12d93f29 */
  if (C.zf) goto L_12d93f29;
  /* 12d93e2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d93e2f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d93e32 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d93e35 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93e38 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12d93e3b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93e3f ja 0x12d93ef2 */
  if ((!C.cf&&!C.zf)) goto L_12d93ef2;
  /* 12d93e45 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d93e48 jmp dword ptr [eax*4 + 0x12d9413f] */
  switch (EAX) {
    case 0: goto L_12d93eca;
    case 1: goto L_12d93ea2;
    case 2: goto L_12d93e7a;
    case 3: goto L_12d93e4f;
    default: x86_unimpl("switch@0x12d93e48 out of table"); return;
  }
L_12d93e4f:;
  /* 12d93e4f push 0x12da9858 */
  push32((uint32_t)(0x12da9858u));
  /* 12d93e54 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d93e59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93e61 call 0x12d91d00 */
  push32(0x12d93e66u); f_12d91d00();
  /* 12d93e66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93e69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93e6c jne 0x12d93e6f */
  if (!C.zf) goto L_12d93e6f;
  /* 12d93e6e int3  */
  x86_unimpl("int3 @ 0x12d93e6e");
L_12d93e6f:;
  /* 12d93e6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93e71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93e73 jne 0x12d93e4f */
  if (!C.zf) goto L_12d93e4f;
  /* 12d93e75 jmp 0x12d93f18 */
  goto L_12d93f18;
L_12d93e7a:;
  /* 12d93e7a push 0x12da9834 */
  push32((uint32_t)(0x12da9834u));
  /* 12d93e7f push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d93e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93e8c call 0x12d91d00 */
  push32(0x12d93e91u); f_12d91d00();
  /* 12d93e91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93e94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93e97 jne 0x12d93e9a */
  if (!C.zf) goto L_12d93e9a;
  /* 12d93e99 int3  */
  x86_unimpl("int3 @ 0x12d93e99");
L_12d93e9a:;
  /* 12d93e9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d93e9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d93e9e jne 0x12d93e7a */
  if (!C.zf) goto L_12d93e7a;
  /* 12d93ea0 jmp 0x12d93f18 */
  goto L_12d93f18;
L_12d93ea2:;
  /* 12d93ea2 push 0x12da9810 */
  push32((uint32_t)(0x12da9810u));
  /* 12d93ea7 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d93eac push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93eae push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93eb4 call 0x12d91d00 */
  push32(0x12d93eb9u); f_12d91d00();
  /* 12d93eb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93ebc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93ebf jne 0x12d93ec2 */
  if (!C.zf) goto L_12d93ec2;
  /* 12d93ec1 int3  */
  x86_unimpl("int3 @ 0x12d93ec1");
L_12d93ec2:;
  /* 12d93ec2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93ec6 jne 0x12d93ea2 */
  if (!C.zf) goto L_12d93ea2;
  /* 12d93ec8 jmp 0x12d93f18 */
  goto L_12d93f18;
L_12d93eca:;
  /* 12d93eca push 0x12da97ec */
  push32((uint32_t)(0x12da97ecu));
  /* 12d93ecf push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d93ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93eda push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93edc call 0x12d91d00 */
  push32(0x12d93ee1u); f_12d91d00();
  /* 12d93ee1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93ee4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93ee7 jne 0x12d93eea */
  if (!C.zf) goto L_12d93eea;
  /* 12d93ee9 int3  */
  x86_unimpl("int3 @ 0x12d93ee9");
L_12d93eea:;
  /* 12d93eea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d93eec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d93eee jne 0x12d93eca */
  if (!C.zf) goto L_12d93eca;
  /* 12d93ef0 jmp 0x12d93f18 */
  goto L_12d93f18;
L_12d93ef2:;
  /* 12d93ef2 push 0x12da97c0 */
  push32((uint32_t)(0x12da97c0u));
  /* 12d93ef7 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d93efc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93efe push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93f04 call 0x12d91d00 */
  push32(0x12d93f09u); f_12d91d00();
  /* 12d93f09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93f0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93f0f jne 0x12d93f12 */
  if (!C.zf) goto L_12d93f12;
  /* 12d93f11 int3  */
  x86_unimpl("int3 @ 0x12d93f11");
L_12d93f12:;
  /* 12d93f12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d93f14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d93f16 jne 0x12d93ef2 */
  if (!C.zf) goto L_12d93ef2;
L_12d93f18:;
  /* 12d93f18 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d93f1a call 0x12d966e0 */
  push32(0x12d93f1fu); f_12d966e0();
  /* 12d93f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93f22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93f24 jmp 0x12d94138 */
  goto L_12d94138;
L_12d93f29:;
  /* 12d93f29 mov eax, dword ptr [0x12dad56c] */
  EAX = (r32((uint32_t)(0x12dad56c)));
  /* 12d93f2e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d93f31 jmp 0x12d93f3b */
  goto L_12d93f3b;
L_12d93f33:;
  /* 12d93f33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93f36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d93f38 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d93f3b:;
  /* 12d93f3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93f3f je 0x12d9412b */
  if (C.zf) goto L_12d9412b;
  /* 12d93f45 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12d93f4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93f4f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d93f52 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d93f58 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93f5b je 0x12d93f80 */
  if (C.zf) goto L_12d93f80;
  /* 12d93f5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93f60 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93f64 je 0x12d93f80 */
  if (C.zf) goto L_12d93f80;
  /* 12d93f66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93f69 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d93f6c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d93f72 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93f75 je 0x12d93f80 */
  if (C.zf) goto L_12d93f80;
  /* 12d93f77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93f7a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93f7e jne 0x12d93f98 */
  if (!C.zf) goto L_12d93f98;
L_12d93f80:;
  /* 12d93f80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93f83 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d93f86 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d93f8c mov edx, dword ptr [ecx*4 + 0x12dabb54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dabb54)));
  /* 12d93f93 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d93f96 jmp 0x12d93f9f */
  goto L_12d93f9f;
L_12d93f98:;
  /* 12d93f98 mov dword ptr [ebp - 0x14], 0x12da97b8 */
  w32((uint32_t)(EBP + -0x14), (0x12da97b8u));
L_12d93f9f:;
  /* 12d93f9f push 4 */
  push32((uint32_t)(0x4u));
  /* 12d93fa1 mov al, byte ptr [0x12dabb50] */
  AL = (r8((uint32_t)(0x12dabb50)));
  /* 12d93fa6 push eax */
  push32((uint32_t)(EAX));
  /* 12d93fa7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93faa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93fad push ecx */
  push32((uint32_t)(ECX));
  /* 12d93fae call 0x12d93d50 */
  push32(0x12d93fb3u); f_12d93d50();
  /* 12d93fb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93fb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93fb8 jne 0x12d93ff4 */
  if (!C.zf) goto L_12d93ff4;
L_12d93fba:;
  /* 12d93fba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93fbd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93fc0 push edx */
  push32((uint32_t)(EDX));
  /* 12d93fc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d93fc4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d93fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d93fc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d93fcb push edx */
  push32((uint32_t)(EDX));
  /* 12d93fcc push 0x12da9694 */
  push32((uint32_t)(0x12da9694u));
  /* 12d93fd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d93fd9 call 0x12d91d00 */
  push32(0x12d93fdeu); f_12d91d00();
  /* 12d93fde add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d93fe1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d93fe4 jne 0x12d93fe7 */
  if (!C.zf) goto L_12d93fe7;
  /* 12d93fe6 int3  */
  x86_unimpl("int3 @ 0x12d93fe6");
L_12d93fe7:;
  /* 12d93fe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d93fe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d93feb jne 0x12d93fba */
  if (!C.zf) goto L_12d93fba;
  /* 12d93fed mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d93ff4:;
  /* 12d93ff4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12d93ff6 mov cl, byte ptr [0x12dabb50] */
  CL = (r8((uint32_t)(0x12dabb50)));
  /* 12d93ffc push ecx */
  push32((uint32_t)(ECX));
  /* 12d93ffd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94000 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d94003 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94006 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12d9400a push edx */
  push32((uint32_t)(EDX));
  /* 12d9400b call 0x12d93d50 */
  push32(0x12d94010u); f_12d93d50();
  /* 12d94010 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94015 jne 0x12d94051 */
  if (!C.zf) goto L_12d94051;
L_12d94017:;
  /* 12d94017 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9401a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9401d push eax */
  push32((uint32_t)(EAX));
  /* 12d9401e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94021 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d94024 push edx */
  push32((uint32_t)(EDX));
  /* 12d94025 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d94028 push eax */
  push32((uint32_t)(EAX));
  /* 12d94029 push 0x12da9668 */
  push32((uint32_t)(0x12da9668u));
  /* 12d9402e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94030 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94032 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94034 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94036 call 0x12d91d00 */
  push32(0x12d9403bu); f_12d91d00();
  /* 12d9403b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9403e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94041 jne 0x12d94044 */
  if (!C.zf) goto L_12d94044;
  /* 12d94043 int3  */
  x86_unimpl("int3 @ 0x12d94043");
L_12d94044:;
  /* 12d94044 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d94046 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d94048 jne 0x12d94017 */
  if (!C.zf) goto L_12d94017;
  /* 12d9404a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d94051:;
  /* 12d94051 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94054 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94058 jne 0x12d940aa */
  if (!C.zf) goto L_12d940aa;
  /* 12d9405a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9405d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d94060 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94061 mov dl, byte ptr [0x12dabb51] */
  DL = (r8((uint32_t)(0x12dabb51)));
  /* 12d94067 push edx */
  push32((uint32_t)(EDX));
  /* 12d94068 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9406b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9406e push eax */
  push32((uint32_t)(EAX));
  /* 12d9406f call 0x12d93d50 */
  push32(0x12d94074u); f_12d93d50();
  /* 12d94074 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94079 jne 0x12d940aa */
  if (!C.zf) goto L_12d940aa;
L_12d9407b:;
  /* 12d9407b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9407e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94081 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94082 push 0x12da978c */
  push32((uint32_t)(0x12da978cu));
  /* 12d94087 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94089 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9408b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9408d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9408f call 0x12d91d00 */
  push32(0x12d94094u); f_12d91d00();
  /* 12d94094 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94097 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9409a jne 0x12d9409d */
  if (!C.zf) goto L_12d9409d;
  /* 12d9409c int3  */
  x86_unimpl("int3 @ 0x12d9409c");
L_12d9409d:;
  /* 12d9409d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9409f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d940a1 jne 0x12d9407b */
  if (!C.zf) goto L_12d9407b;
  /* 12d940a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d940aa:;
  /* 12d940aa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d940ae jne 0x12d94126 */
  if (!C.zf) goto L_12d94126;
  /* 12d940b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d940b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d940b7 je 0x12d940ec */
  if (C.zf) goto L_12d940ec;
L_12d940b9:;
  /* 12d940b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d940bc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d940bf push edx */
  push32((uint32_t)(EDX));
  /* 12d940c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d940c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d940c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12d940c7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d940ca push edx */
  push32((uint32_t)(EDX));
  /* 12d940cb push 0x12da976c */
  push32((uint32_t)(0x12da976cu));
  /* 12d940d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d940d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d940d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d940d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d940d8 call 0x12d91d00 */
  push32(0x12d940ddu); f_12d91d00();
  /* 12d940dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d940e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d940e3 jne 0x12d940e6 */
  if (!C.zf) goto L_12d940e6;
  /* 12d940e5 int3  */
  x86_unimpl("int3 @ 0x12d940e5");
L_12d940e6:;
  /* 12d940e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d940e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d940ea jne 0x12d940b9 */
  if (!C.zf) goto L_12d940b9;
L_12d940ec:;
  /* 12d940ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d940ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d940f2 push edx */
  push32((uint32_t)(EDX));
  /* 12d940f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d940f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d940f9 push eax */
  push32((uint32_t)(EAX));
  /* 12d940fa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d940fd push ecx */
  push32((uint32_t)(ECX));
  /* 12d940fe push 0x12da9740 */
  push32((uint32_t)(0x12da9740u));
  /* 12d94103 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94105 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94107 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94109 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9410b call 0x12d91d00 */
  push32(0x12d94110u); f_12d91d00();
  /* 12d94110 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94113 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94116 jne 0x12d94119 */
  if (!C.zf) goto L_12d94119;
  /* 12d94118 int3  */
  x86_unimpl("int3 @ 0x12d94118");
L_12d94119:;
  /* 12d94119 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9411b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d9411d jne 0x12d940ec */
  if (!C.zf) goto L_12d940ec;
  /* 12d9411f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d94126:;
  /* 12d94126 jmp 0x12d93f33 */
  goto L_12d93f33;
L_12d9412b:;
  /* 12d9412b push 9 */
  push32((uint32_t)(0x9u));
  /* 12d9412d call 0x12d966e0 */
  push32(0x12d94132u); f_12d966e0();
  /* 12d94132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d94138:;
  /* 12d94138 pop edi */
  EDI = (pop32());
  /* 12d94139 pop esi */
  ESI = (pop32());
  /* 12d9413a pop ebx */
  EBX = (pop32());
  /* 12d9413b mov esp, ebp */
  ESP = (EBP);
  /* 12d9413d pop ebp */
  EBP = (pop32());
  /* 12d9413e ret  */
  ESPCHK(0x12d93de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004150 @ 0x12d94150 (34 bytes, 13 insns) */
void f_12d94150(void) {
  FTRACE(0x12d94150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94150 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94151 mov ebp, esp */
  EBP = (ESP);
  /* 12d94153 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94154 mov eax, dword ptr [0x12dabb44] */
  EAX = (r32((uint32_t)(0x12dabb44)));
  /* 12d94159 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9415c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94160 je 0x12d9416b */
  if (C.zf) goto L_12d9416b;
  /* 12d94162 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94165 mov dword ptr [0x12dabb44], ecx */
  w32((uint32_t)(0x12dabb44), (ECX));
L_12d9416b:;
  /* 12d9416b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9416e mov esp, ebp */
  ESP = (EBP);
  /* 12d94170 pop ebp */
  EBP = (pop32());
  /* 12d94171 ret  */
  ESPCHK(0x12d94150u, _esp0);
  ESP += 4; return;
}

/* FUN_10004180 @ 0x12d94180 (103 bytes, 38 insns) */
void f_12d94180(void) {
  FTRACE(0x12d94180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94180 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94181 mov ebp, esp */
  EBP = (ESP);
  /* 12d94183 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94184 mov eax, dword ptr [0x12dabb44] */
  EAX = (r32((uint32_t)(0x12dabb44)));
  /* 12d94189 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9418c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9418e jne 0x12d94192 */
  if (!C.zf) goto L_12d94192;
  /* 12d94190 jmp 0x12d941e3 */
  goto L_12d941e3;
L_12d94192:;
  /* 12d94192 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d94194 call 0x12d96640 */
  push32(0x12d94199u); f_12d96640();
  /* 12d94199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9419c mov ecx, dword ptr [0x12dad56c] */
  ECX = (r32((uint32_t)(0x12dad56c)));
  /* 12d941a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d941a5 jmp 0x12d941af */
  goto L_12d941af;
L_12d941a7:;
  /* 12d941a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d941aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d941ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d941af:;
  /* 12d941af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d941b3 je 0x12d941d9 */
  if (C.zf) goto L_12d941d9;
  /* 12d941b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d941b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d941bb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d941c1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d941c4 jne 0x12d941d7 */
  if (!C.zf) goto L_12d941d7;
  /* 12d941c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d941c9 push eax */
  push32((uint32_t)(EAX));
  /* 12d941ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d941cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d941d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d941d1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12d941d4u);
  /* 12d941d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d941d7:;
  /* 12d941d7 jmp 0x12d941a7 */
  goto L_12d941a7;
L_12d941d9:;
  /* 12d941d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d941db call 0x12d966e0 */
  push32(0x12d941e0u); f_12d966e0();
  /* 12d941e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d941e3:;
  /* 12d941e3 mov esp, ebp */
  ESP = (EBP);
  /* 12d941e5 pop ebp */
  EBP = (pop32());
  /* 12d941e6 ret  */
  ESPCHK(0x12d94180u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12d941f0 (75 bytes, 28 insns) */
void f_12d941f0(void) {
  FTRACE(0x12d941f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d941f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d941f1 mov ebp, esp */
  EBP = (ESP);
  /* 12d941f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d941f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d941f8 je 0x12d9422d */
  if (C.zf) goto L_12d9422d;
  /* 12d941fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d941fd push eax */
  push32((uint32_t)(EAX));
  /* 12d941fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94201 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94202 call dword ptr [0x12db0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0240))), 0x12d94208u);
  /* 12d94208 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9420a jne 0x12d9422d */
  if (!C.zf) goto L_12d9422d;
  /* 12d9420c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94210 je 0x12d94224 */
  if (C.zf) goto L_12d94224;
  /* 12d94212 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d94215 push edx */
  push32((uint32_t)(EDX));
  /* 12d94216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94219 push eax */
  push32((uint32_t)(EAX));
  /* 12d9421a call dword ptr [0x12db0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0244))), 0x12d94220u);
  /* 12d94220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94222 jne 0x12d9422d */
  if (!C.zf) goto L_12d9422d;
L_12d94224:;
  /* 12d94224 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d9422b jmp 0x12d94234 */
  goto L_12d94234;
L_12d9422d:;
  /* 12d9422d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d94234:;
  /* 12d94234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94237 mov esp, ebp */
  ESP = (EBP);
  /* 12d94239 pop ebp */
  EBP = (pop32());
  /* 12d9423a ret  */
  ESPCHK(0x12d941f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004240 @ 0x12d94240 (134 bytes, 50 insns) */
void f_12d94240(void) {
  FTRACE(0x12d94240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94240 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94241 mov ebp, esp */
  EBP = (ESP);
  /* 12d94243 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94244 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94248 jne 0x12d9424e */
  if (!C.zf) goto L_12d9424e;
  /* 12d9424a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9424c jmp 0x12d942c2 */
  goto L_12d942c2;
L_12d9424e:;
  /* 12d9424e push 1 */
  push32((uint32_t)(0x1u));
  /* 12d94250 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12d94252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94255 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94258 push eax */
  push32((uint32_t)(EAX));
  /* 12d94259 call 0x12d941f0 */
  push32(0x12d9425eu); f_12d941f0();
  /* 12d9425e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94263 jne 0x12d94269 */
  if (!C.zf) goto L_12d94269;
  /* 12d94265 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d94267 jmp 0x12d942c2 */
  goto L_12d942c2;
L_12d94269:;
  /* 12d94269 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9426c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9426f push ecx */
  push32((uint32_t)(ECX));
  /* 12d94270 call 0x12d96f40 */
  push32(0x12d94275u); f_12d96f40();
  /* 12d94275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94278 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9427b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9427f je 0x12d94296 */
  if (C.zf) goto L_12d94296;
  /* 12d94281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94284 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94287 push edx */
  push32((uint32_t)(EDX));
  /* 12d94288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9428b push eax */
  push32((uint32_t)(EAX));
  /* 12d9428c call 0x12d96fa0 */
  push32(0x12d94291u); f_12d96fa0();
  /* 12d94291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94294 jmp 0x12d942c2 */
  goto L_12d942c2;
L_12d94296:;
  /* 12d94296 mov ecx, dword ptr [0x12dad520] */
  ECX = (r32((uint32_t)(0x12dad520)));
  /* 12d9429c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12d942a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d942a4 je 0x12d942ad */
  if (C.zf) goto L_12d942ad;
  /* 12d942a6 mov eax, 1 */
  EAX = (0x1u);
  /* 12d942ab jmp 0x12d942c2 */
  goto L_12d942c2;
L_12d942ad:;
  /* 12d942ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d942b0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d942b3 push edx */
  push32((uint32_t)(EDX));
  /* 12d942b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d942b6 mov eax, dword ptr [0x12daeecc] */
  EAX = (r32((uint32_t)(0x12daeecc)));
  /* 12d942bb push eax */
  push32((uint32_t)(EAX));
  /* 12d942bc call dword ptr [0x12db02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02f8))), 0x12d942c2u);
L_12d942c2:;
  /* 12d942c2 mov esp, ebp */
  ESP = (EBP);
  /* 12d942c4 pop ebp */
  EBP = (pop32());
  /* 12d942c5 ret  */
  ESPCHK(0x12d94240u, _esp0);
  ESP += 4; return;
}

/* FUN_100042d0 @ 0x12d942d0 (227 bytes, 80 insns) */
void f_12d942d0(void) {
  FTRACE(0x12d942d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d942d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d942d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d942d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d942d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d942d7 push eax */
  push32((uint32_t)(EAX));
  /* 12d942d8 call 0x12d94240 */
  push32(0x12d942ddu); f_12d94240();
  /* 12d942dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d942e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d942e2 jne 0x12d942eb */
  if (!C.zf) goto L_12d942eb;
  /* 12d942e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d942e6 jmp 0x12d943af */
  goto L_12d943af;
L_12d942eb:;
  /* 12d942eb push 9 */
  push32((uint32_t)(0x9u));
  /* 12d942ed call 0x12d96640 */
  push32(0x12d942f2u); f_12d96640();
  /* 12d942f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d942f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d942f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d942fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d942fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94301 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d94304 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d94309 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9430c je 0x12d94330 */
  if (C.zf) goto L_12d94330;
  /* 12d9430e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94311 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94315 je 0x12d94330 */
  if (C.zf) goto L_12d94330;
  /* 12d94317 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9431a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d9431d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d94322 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94325 je 0x12d94330 */
  if (C.zf) goto L_12d94330;
  /* 12d94327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9432a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9432e jne 0x12d943a3 */
  if (!C.zf) goto L_12d943a3;
L_12d94330:;
  /* 12d94330 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d94332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d94335 push edx */
  push32((uint32_t)(EDX));
  /* 12d94336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94339 push eax */
  push32((uint32_t)(EAX));
  /* 12d9433a call 0x12d941f0 */
  push32(0x12d9433fu); f_12d941f0();
  /* 12d9433f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94344 je 0x12d943a3 */
  if (C.zf) goto L_12d943a3;
  /* 12d94346 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94349 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d9434c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9434f jne 0x12d943a3 */
  if (!C.zf) goto L_12d943a3;
  /* 12d94351 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94354 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d94357 cmp ecx, dword ptr [0x12dabb48] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12dabb48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9435d jg 0x12d943a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d943a3;
  /* 12d9435f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94363 je 0x12d94370 */
  if (C.zf) goto L_12d94370;
  /* 12d94365 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9436b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12d9436e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d94370:;
  /* 12d94370 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94374 je 0x12d94381 */
  if (C.zf) goto L_12d94381;
  /* 12d94376 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d94379 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9437c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d9437f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d94381:;
  /* 12d94381 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94385 je 0x12d94392 */
  if (C.zf) goto L_12d94392;
  /* 12d94387 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9438a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9438d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d94390 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d94392:;
  /* 12d94392 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d94394 call 0x12d966e0 */
  push32(0x12d94399u); f_12d966e0();
  /* 12d94399 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9439c mov eax, 1 */
  EAX = (0x1u);
  /* 12d943a1 jmp 0x12d943af */
  goto L_12d943af;
L_12d943a3:;
  /* 12d943a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d943a5 call 0x12d966e0 */
  push32(0x12d943aau); f_12d966e0();
  /* 12d943aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d943ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d943af:;
  /* 12d943af mov esp, ebp */
  ESP = (EBP);
  /* 12d943b1 pop ebp */
  EBP = (pop32());
  /* 12d943b2 ret  */
  ESPCHK(0x12d942d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043c0 @ 0x12d943c0 (28 bytes, 11 insns) */
void f_12d943c0(void) {
  FTRACE(0x12d943c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d943c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d943c1 mov ebp, esp */
  EBP = (ESP);
  /* 12d943c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d943c4 mov eax, dword ptr [0x12daeed8] */
  EAX = (r32((uint32_t)(0x12daeed8)));
  /* 12d943c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d943cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d943cf mov dword ptr [0x12daeed8], ecx */
  w32((uint32_t)(0x12daeed8), (ECX));
  /* 12d943d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d943d8 mov esp, ebp */
  ESP = (EBP);
  /* 12d943da pop ebp */
  EBP = (pop32());
  /* 12d943db ret  */
  ESPCHK(0x12d943c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e0 @ 0x12d943e0 (362 bytes, 116 insns) */
void f_12d943e0(void) {
  FTRACE(0x12d943e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d943e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d943e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d943e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d943e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d943e7 push esi */
  push32((uint32_t)(ESI));
  /* 12d943e8 push edi */
  push32((uint32_t)(EDI));
  /* 12d943e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d943ed jne 0x12d9441a */
  if (!C.zf) goto L_12d9441a;
L_12d943ef:;
  /* 12d943ef push 0x12da98a0 */
  push32((uint32_t)(0x12da98a0u));
  /* 12d943f4 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d943f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d943fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12d943fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d943ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94401 call 0x12d91d00 */
  push32(0x12d94406u); f_12d91d00();
  /* 12d94406 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94409 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9440c jne 0x12d9440f */
  if (!C.zf) goto L_12d9440f;
  /* 12d9440e int3  */
  x86_unimpl("int3 @ 0x12d9440e");
L_12d9440f:;
  /* 12d9440f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d94411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94413 jne 0x12d943ef */
  if (!C.zf) goto L_12d943ef;
  /* 12d94415 jmp 0x12d94543 */
  goto L_12d94543;
L_12d9441a:;
  /* 12d9441a push 9 */
  push32((uint32_t)(0x9u));
  /* 12d9441c call 0x12d96640 */
  push32(0x12d94421u); f_12d96640();
  /* 12d94421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94424 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94427 mov edx, dword ptr [0x12dad56c] */
  EDX = (r32((uint32_t)(0x12dad56c)));
  /* 12d9442d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d9442f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d94436 jmp 0x12d94441 */
  goto L_12d94441;
L_12d94438:;
  /* 12d94438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9443b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9443e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d94441:;
  /* 12d94441 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94445 jge 0x12d94465 */
  if ((C.sf==C.of)) goto L_12d94465;
  /* 12d94447 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9444a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9444d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12d94455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94458 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9445b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12d94463 jmp 0x12d94438 */
  goto L_12d94438;
L_12d94465:;
  /* 12d94465 mov edx, dword ptr [0x12dad56c] */
  EDX = (r32((uint32_t)(0x12dad56c)));
  /* 12d9446b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d9446e jmp 0x12d94478 */
  goto L_12d94478;
L_12d94470:;
  /* 12d94470 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94473 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d94475 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d94478:;
  /* 12d94478 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9447c je 0x12d94521 */
  if (C.zf) goto L_12d94521;
  /* 12d94482 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94485 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d94488 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d9448d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9448f jl 0x12d944f7 */
  if ((C.sf!=C.of)) goto L_12d944f7;
  /* 12d94491 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94494 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d94497 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9449d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d944a0 jge 0x12d944f7 */
  if ((C.sf==C.of)) goto L_12d944f7;
  /* 12d944a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d944a5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d944a8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d944ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d944b1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12d944b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d944b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d944bb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d944be and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d944c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d944c7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12d944cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d944ce mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d944d1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d944d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d944d9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12d944dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d944e0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d944e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d944e6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d944e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d944ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d944f1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12d944f5 jmp 0x12d9451c */
  goto L_12d9451c;
L_12d944f7:;
  /* 12d944f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d944fa push edx */
  push32((uint32_t)(EDX));
  /* 12d944fb push 0x12da987c */
  push32((uint32_t)(0x12da987cu));
  /* 12d94500 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94502 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94504 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94506 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94508 call 0x12d91d00 */
  push32(0x12d9450du); f_12d91d00();
  /* 12d9450d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94510 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94513 jne 0x12d94516 */
  if (!C.zf) goto L_12d94516;
  /* 12d94515 int3  */
  x86_unimpl("int3 @ 0x12d94515");
L_12d94516:;
  /* 12d94516 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d94518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9451a jne 0x12d944f7 */
  if (!C.zf) goto L_12d944f7;
L_12d9451c:;
  /* 12d9451c jmp 0x12d94470 */
  goto L_12d94470;
L_12d94521:;
  /* 12d94521 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94524 mov edx, dword ptr [0x12dad574] */
  EDX = (r32((uint32_t)(0x12dad574)));
  /* 12d9452a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12d9452d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94530 mov ecx, dword ptr [0x12dad568] */
  ECX = (r32((uint32_t)(0x12dad568)));
  /* 12d94536 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12d94539 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d9453b call 0x12d966e0 */
  push32(0x12d94540u); f_12d966e0();
  /* 12d94540 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d94543:;
  /* 12d94543 pop edi */
  EDI = (pop32());
  /* 12d94544 pop esi */
  ESI = (pop32());
  /* 12d94545 pop ebx */
  EBX = (pop32());
  /* 12d94546 mov esp, ebp */
  ESP = (EBP);
  /* 12d94548 pop ebp */
  EBP = (pop32());
  /* 12d94549 ret  */
  ESPCHK(0x12d943e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004550 @ 0x12d94550 (291 bytes, 95 insns) */
void f_12d94550(void) {
  FTRACE(0x12d94550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94550 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94551 mov ebp, esp */
  EBP = (ESP);
  /* 12d94553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94556 push ebx */
  push32((uint32_t)(EBX));
  /* 12d94557 push esi */
  push32((uint32_t)(ESI));
  /* 12d94558 push edi */
  push32((uint32_t)(EDI));
  /* 12d94559 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d94560 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94564 je 0x12d94572 */
  if (C.zf) goto L_12d94572;
  /* 12d94566 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9456a je 0x12d94572 */
  if (C.zf) goto L_12d94572;
  /* 12d9456c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94570 jne 0x12d945a0 */
  if (!C.zf) goto L_12d945a0;
L_12d94572:;
  /* 12d94572 push 0x12da98c8 */
  push32((uint32_t)(0x12da98c8u));
  /* 12d94577 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d9457c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9457e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94580 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94582 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94584 call 0x12d91d00 */
  push32(0x12d94589u); f_12d91d00();
  /* 12d94589 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9458c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9458f jne 0x12d94592 */
  if (!C.zf) goto L_12d94592;
  /* 12d94591 int3  */
  x86_unimpl("int3 @ 0x12d94591");
L_12d94592:;
  /* 12d94592 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d94594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94596 jne 0x12d94572 */
  if (!C.zf) goto L_12d94572;
  /* 12d94598 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9459b jmp 0x12d9466c */
  goto L_12d9466c;
L_12d945a0:;
  /* 12d945a0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d945a7 jmp 0x12d945b2 */
  goto L_12d945b2;
L_12d945a9:;
  /* 12d945a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d945ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d945af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d945b2:;
  /* 12d945b2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d945b6 jge 0x12d9463c */
  if ((C.sf==C.of)) goto L_12d9463c;
  /* 12d945bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d945bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d945c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d945c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d945c8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12d945cc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d945d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d945d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d945d6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12d945da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d945dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d945e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d945e3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12d945e6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12d945ea sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d945ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d945f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d945f4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12d945f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d945fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d945fe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94603 jne 0x12d94612 */
  if (!C.zf) goto L_12d94612;
  /* 12d94605 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94608 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9460b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94610 je 0x12d94637 */
  if (C.zf) goto L_12d94637;
L_12d94612:;
  /* 12d94612 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94616 je 0x12d94637 */
  if (C.zf) goto L_12d94637;
  /* 12d94618 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9461c jne 0x12d94630 */
  if (!C.zf) goto L_12d94630;
  /* 12d9461e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94622 jne 0x12d94637 */
  if (!C.zf) goto L_12d94637;
  /* 12d94624 mov eax, dword ptr [0x12dabb44] */
  EAX = (r32((uint32_t)(0x12dabb44)));
  /* 12d94629 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12d9462c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9462e je 0x12d94637 */
  if (C.zf) goto L_12d94637;
L_12d94630:;
  /* 12d94630 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12d94637:;
  /* 12d94637 jmp 0x12d945a9 */
  goto L_12d945a9;
L_12d9463c:;
  /* 12d9463c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9463f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d94642 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12d94645 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94648 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9464b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12d9464e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94651 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d94654 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12d94657 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9465a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9465d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12d94660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94663 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d94669 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12d9466c:;
  /* 12d9466c pop edi */
  EDI = (pop32());
  /* 12d9466d pop esi */
  ESI = (pop32());
  /* 12d9466e pop ebx */
  EBX = (pop32());
  /* 12d9466f mov esp, ebp */
  ESP = (EBP);
  /* 12d94671 pop ebp */
  EBP = (pop32());
  /* 12d94672 ret  */
  ESPCHK(0x12d94550u, _esp0);
  ESP += 4; return;
}

/* FUN_10004680 @ 0x12d94680 (697 bytes, 253 insns) */
void f_12d94680(void) {
  FTRACE(0x12d94680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94680 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94681 mov ebp, esp */
  EBP = (ESP);
  /* 12d94683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94686 push ebx */
  push32((uint32_t)(EBX));
  /* 12d94687 push esi */
  push32((uint32_t)(ESI));
  /* 12d94688 push edi */
  push32((uint32_t)(EDI));
  /* 12d94689 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d94690 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d94692 call 0x12d96640 */
  push32(0x12d94697u); f_12d96640();
  /* 12d94697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9469a:;
  /* 12d9469a push 0x12da99c0 */
  push32((uint32_t)(0x12da99c0u));
  /* 12d9469f push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d946a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d946a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d946a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d946aa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d946ac call 0x12d91d00 */
  push32(0x12d946b1u); f_12d91d00();
  /* 12d946b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d946b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d946b7 jne 0x12d946ba */
  if (!C.zf) goto L_12d946ba;
  /* 12d946b9 int3  */
  x86_unimpl("int3 @ 0x12d946b9");
L_12d946ba:;
  /* 12d946ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d946bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d946be jne 0x12d9469a */
  if (!C.zf) goto L_12d9469a;
  /* 12d946c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d946c4 je 0x12d946ce */
  if (C.zf) goto L_12d946ce;
  /* 12d946c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d946c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d946cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d946ce:;
  /* 12d946ce mov eax, dword ptr [0x12dad56c] */
  EAX = (r32((uint32_t)(0x12dad56c)));
  /* 12d946d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d946d6 jmp 0x12d946e0 */
  goto L_12d946e0;
L_12d946d8:;
  /* 12d946d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d946db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d946dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d946e0:;
  /* 12d946e0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d946e4 je 0x12d94902 */
  if (C.zf) goto L_12d94902;
  /* 12d946ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d946ed cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d946f0 je 0x12d94902 */
  if (C.zf) goto L_12d94902;
  /* 12d946f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d946f9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d946fc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d94702 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94705 je 0x12d94734 */
  if (C.zf) goto L_12d94734;
  /* 12d94707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9470a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12d9470d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d94713 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d94715 je 0x12d94734 */
  if (C.zf) goto L_12d94734;
  /* 12d94717 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9471a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d9471d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d94722 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94725 jne 0x12d94739 */
  if (!C.zf) goto L_12d94739;
  /* 12d94727 mov ecx, dword ptr [0x12dabb44] */
  ECX = (r32((uint32_t)(0x12dabb44)));
  /* 12d9472d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12d94730 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d94732 jne 0x12d94739 */
  if (!C.zf) goto L_12d94739;
L_12d94734:;
  /* 12d94734 jmp 0x12d948fd */
  goto L_12d948fd;
L_12d94739:;
  /* 12d94739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9473c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94740 je 0x12d947b2 */
  if (C.zf) goto L_12d947b2;
  /* 12d94742 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94744 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d94746 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94749 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12d9474c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9474d call 0x12d941f0 */
  push32(0x12d94752u); f_12d941f0();
  /* 12d94752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94755 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94757 jne 0x12d94783 */
  if (!C.zf) goto L_12d94783;
L_12d94759:;
  /* 12d94759 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9475c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d9475f push eax */
  push32((uint32_t)(EAX));
  /* 12d94760 push 0x12da99ac */
  push32((uint32_t)(0x12da99acu));
  /* 12d94765 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94767 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94769 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9476b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9476d call 0x12d91d00 */
  push32(0x12d94772u); f_12d91d00();
  /* 12d94772 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94775 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94778 jne 0x12d9477b */
  if (!C.zf) goto L_12d9477b;
  /* 12d9477a int3  */
  x86_unimpl("int3 @ 0x12d9477a");
L_12d9477b:;
  /* 12d9477b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9477d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9477f jne 0x12d94759 */
  if (!C.zf) goto L_12d94759;
  /* 12d94781 jmp 0x12d947b2 */
  goto L_12d947b2;
L_12d94783:;
  /* 12d94783 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94786 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d94789 push eax */
  push32((uint32_t)(EAX));
  /* 12d9478a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9478d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d94790 push edx */
  push32((uint32_t)(EDX));
  /* 12d94791 push 0x12da99a0 */
  push32((uint32_t)(0x12da99a0u));
  /* 12d94796 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94798 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9479a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9479c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9479e call 0x12d91d00 */
  push32(0x12d947a3u); f_12d91d00();
  /* 12d947a3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d947a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d947a9 jne 0x12d947ac */
  if (!C.zf) goto L_12d947ac;
  /* 12d947ab int3  */
  x86_unimpl("int3 @ 0x12d947ab");
L_12d947ac:;
  /* 12d947ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d947ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d947b0 jne 0x12d94783 */
  if (!C.zf) goto L_12d94783;
L_12d947b2:;
  /* 12d947b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d947b5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12d947b8 push edx */
  push32((uint32_t)(EDX));
  /* 12d947b9 push 0x12da9998 */
  push32((uint32_t)(0x12da9998u));
  /* 12d947be push 0 */
  push32((uint32_t)(0x0u));
  /* 12d947c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d947c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d947c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d947c6 call 0x12d91d00 */
  push32(0x12d947cbu); f_12d91d00();
  /* 12d947cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d947ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d947d1 jne 0x12d947d4 */
  if (!C.zf) goto L_12d947d4;
  /* 12d947d3 int3  */
  x86_unimpl("int3 @ 0x12d947d3");
L_12d947d4:;
  /* 12d947d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d947d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d947d8 jne 0x12d947b2 */
  if (!C.zf) goto L_12d947b2;
  /* 12d947da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d947dd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d947e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d947e6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d947e9 jne 0x12d9485c */
  if (!C.zf) goto L_12d9485c;
L_12d947eb:;
  /* 12d947eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d947ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d947f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d947f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d947f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d947f8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d947fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d94800 push eax */
  push32((uint32_t)(EAX));
  /* 12d94801 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94804 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94807 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94808 push 0x12da9964 */
  push32((uint32_t)(0x12da9964u));
  /* 12d9480d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9480f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94811 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94813 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94815 call 0x12d91d00 */
  push32(0x12d9481au); f_12d91d00();
  /* 12d9481a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9481d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94820 jne 0x12d94823 */
  if (!C.zf) goto L_12d94823;
  /* 12d94822 int3  */
  x86_unimpl("int3 @ 0x12d94822");
L_12d94823:;
  /* 12d94823 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d94825 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d94827 jne 0x12d947eb */
  if (!C.zf) goto L_12d947eb;
  /* 12d94829 cmp dword ptr [0x12daeed8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daeed8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94830 je 0x12d9484b */
  if (C.zf) goto L_12d9484b;
  /* 12d94832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94835 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d94838 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94839 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9483c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9483f push edx */
  push32((uint32_t)(EDX));
  /* 12d94840 call dword ptr [0x12daeed8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12daeed8))), 0x12d94846u);
  /* 12d94846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94849 jmp 0x12d94857 */
  goto L_12d94857;
L_12d9484b:;
  /* 12d9484b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9484e push eax */
  push32((uint32_t)(EAX));
  /* 12d9484f call 0x12d94940 */
  push32(0x12d94854u); f_12d94940();
  /* 12d94854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d94857:;
  /* 12d94857 jmp 0x12d948fd */
  goto L_12d948fd;
L_12d9485c:;
  /* 12d9485c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9485f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94863 jne 0x12d948a2 */
  if (!C.zf) goto L_12d948a2;
L_12d94865:;
  /* 12d94865 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94868 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d9486b push eax */
  push32((uint32_t)(EAX));
  /* 12d9486c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9486f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94872 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94873 push 0x12da993c */
  push32((uint32_t)(0x12da993cu));
  /* 12d94878 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9487a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9487c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9487e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94880 call 0x12d91d00 */
  push32(0x12d94885u); f_12d91d00();
  /* 12d94885 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94888 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9488b jne 0x12d9488e */
  if (!C.zf) goto L_12d9488e;
  /* 12d9488d int3  */
  x86_unimpl("int3 @ 0x12d9488d");
L_12d9488e:;
  /* 12d9488e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d94890 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d94892 jne 0x12d94865 */
  if (!C.zf) goto L_12d94865;
  /* 12d94894 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94897 push eax */
  push32((uint32_t)(EAX));
  /* 12d94898 call 0x12d94940 */
  push32(0x12d9489du); f_12d94940();
  /* 12d9489d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d948a0 jmp 0x12d948fd */
  goto L_12d948fd;
L_12d948a2:;
  /* 12d948a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d948a5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12d948a8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d948ae cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d948b1 jne 0x12d948fd */
  if (!C.zf) goto L_12d948fd;
L_12d948b3:;
  /* 12d948b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d948b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12d948b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d948ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d948bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12d948c0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12d948c3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d948c8 push eax */
  push32((uint32_t)(EAX));
  /* 12d948c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d948cc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d948cf push ecx */
  push32((uint32_t)(ECX));
  /* 12d948d0 push 0x12da9908 */
  push32((uint32_t)(0x12da9908u));
  /* 12d948d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d948d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d948d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d948db push 0 */
  push32((uint32_t)(0x0u));
  /* 12d948dd call 0x12d91d00 */
  push32(0x12d948e2u); f_12d91d00();
  /* 12d948e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d948e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d948e8 jne 0x12d948eb */
  if (!C.zf) goto L_12d948eb;
  /* 12d948ea int3  */
  x86_unimpl("int3 @ 0x12d948ea");
L_12d948eb:;
  /* 12d948eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d948ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d948ef jne 0x12d948b3 */
  if (!C.zf) goto L_12d948b3;
  /* 12d948f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d948f4 push eax */
  push32((uint32_t)(EAX));
  /* 12d948f5 call 0x12d94940 */
  push32(0x12d948fau); f_12d94940();
  /* 12d948fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d948fd:;
  /* 12d948fd jmp 0x12d946d8 */
  goto L_12d946d8;
L_12d94902:;
  /* 12d94902 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d94904 call 0x12d966e0 */
  push32(0x12d94909u); f_12d966e0();
  /* 12d94909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d9490c:;
  /* 12d9490c push 0x12da98f0 */
  push32((uint32_t)(0x12da98f0u));
  /* 12d94911 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d94916 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94918 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9491a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9491c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9491e call 0x12d91d00 */
  push32(0x12d94923u); f_12d91d00();
  /* 12d94923 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94926 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94929 jne 0x12d9492c */
  if (!C.zf) goto L_12d9492c;
  /* 12d9492b int3  */
  x86_unimpl("int3 @ 0x12d9492b");
L_12d9492c:;
  /* 12d9492c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9492e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d94930 jne 0x12d9490c */
  if (!C.zf) goto L_12d9490c;
  /* 12d94932 pop edi */
  EDI = (pop32());
  /* 12d94933 pop esi */
  ESI = (pop32());
  /* 12d94934 pop ebx */
  EBX = (pop32());
  /* 12d94935 mov esp, ebp */
  ESP = (EBP);
  /* 12d94937 pop ebp */
  EBP = (pop32());
  /* 12d94938 ret  */
  ESPCHK(0x12d94680u, _esp0);
  ESP += 4; return;
}

/* FUN_10004940 @ 0x12d94940 (276 bytes, 89 insns) */
void f_12d94940(void) {
  FTRACE(0x12d94940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94940 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94941 mov ebp, esp */
  EBP = (ESP);
  /* 12d94943 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94946 push ebx */
  push32((uint32_t)(EBX));
  /* 12d94947 push esi */
  push32((uint32_t)(ESI));
  /* 12d94948 push edi */
  push32((uint32_t)(EDI));
  /* 12d94949 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12d94950 jmp 0x12d9495b */
  goto L_12d9495b;
L_12d94952:;
  /* 12d94952 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d94955 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94958 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12d9495b:;
  /* 12d9495b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9495e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94962 jge 0x12d9496f */
  if ((C.sf==C.of)) goto L_12d9496f;
  /* 12d94964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94967 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12d9496a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12d9496d jmp 0x12d94976 */
  goto L_12d94976;
L_12d9496f:;
  /* 12d9496f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12d94976:;
  /* 12d94976 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d94979 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9497c jge 0x12d94a1c */
  if ((C.sf==C.of)) goto L_12d94a1c;
  /* 12d94982 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94985 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94988 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12d9498b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12d9498e cmp dword ptr [0x12dabf64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dabf64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94995 jle 0x12d949b3 */
  if ((C.zf||C.sf!=C.of)) goto L_12d949b3;
  /* 12d94997 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12d9499c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d9499f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d949a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d949a6 call 0x12d98c50 */
  push32(0x12d949abu); f_12d98c50();
  /* 12d949ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d949ae mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12d949b1 jmp 0x12d949d0 */
  goto L_12d949d0;
L_12d949b3:;
  /* 12d949b3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d949b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d949bc mov eax, dword ptr [0x12dabd58] */
  EAX = (r32((uint32_t)(0x12dabd58)));
  /* 12d949c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d949c3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12d949c7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12d949cd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12d949d0:;
  /* 12d949d0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d949d4 je 0x12d949e4 */
  if (C.zf) goto L_12d949e4;
  /* 12d949d6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d949d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d949df mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12d949e2 jmp 0x12d949eb */
  goto L_12d949eb;
L_12d949e4:;
  /* 12d949e4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12d949eb:;
  /* 12d949eb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d949ee mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12d949f1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12d949f5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12d949f8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d949fe push edx */
  push32((uint32_t)(EDX));
  /* 12d949ff push 0x12da99e4 */
  push32((uint32_t)(0x12da99e4u));
  /* 12d94a04 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d94a07 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d94a0a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12d94a0e push ecx */
  push32((uint32_t)(ECX));
  /* 12d94a0f call 0x12d98b50 */
  push32(0x12d94a14u); f_12d98b50();
  /* 12d94a14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94a17 jmp 0x12d94952 */
  goto L_12d94952;
L_12d94a1c:;
  /* 12d94a1c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12d94a1f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12d94a24:;
  /* 12d94a24 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12d94a27 push eax */
  push32((uint32_t)(EAX));
  /* 12d94a28 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12d94a2b push ecx */
  push32((uint32_t)(ECX));
  /* 12d94a2c push 0x12da99d4 */
  push32((uint32_t)(0x12da99d4u));
  /* 12d94a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94a37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94a39 call 0x12d91d00 */
  push32(0x12d94a3eu); f_12d91d00();
  /* 12d94a3e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94a41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94a44 jne 0x12d94a47 */
  if (!C.zf) goto L_12d94a47;
  /* 12d94a46 int3  */
  x86_unimpl("int3 @ 0x12d94a46");
L_12d94a47:;
  /* 12d94a47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d94a49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d94a4b jne 0x12d94a24 */
  if (!C.zf) goto L_12d94a24;
  /* 12d94a4d pop edi */
  EDI = (pop32());
  /* 12d94a4e pop esi */
  ESI = (pop32());
  /* 12d94a4f pop ebx */
  EBX = (pop32());
  /* 12d94a50 mov esp, ebp */
  ESP = (EBP);
  /* 12d94a52 pop ebp */
  EBP = (pop32());
  /* 12d94a53 ret  */
  ESPCHK(0x12d94940u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a60 @ 0x12d94a60 (116 bytes, 46 insns) */
void f_12d94a60(void) {
  FTRACE(0x12d94a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94a61 mov ebp, esp */
  EBP = (ESP);
  /* 12d94a63 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94a66 push ebx */
  push32((uint32_t)(EBX));
  /* 12d94a67 push esi */
  push32((uint32_t)(ESI));
  /* 12d94a68 push edi */
  push32((uint32_t)(EDI));
  /* 12d94a69 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12d94a6c push eax */
  push32((uint32_t)(EAX));
  /* 12d94a6d call 0x12d943e0 */
  push32(0x12d94a72u); f_12d943e0();
  /* 12d94a72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94a75 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94a79 jne 0x12d94a94 */
  if (!C.zf) goto L_12d94a94;
  /* 12d94a7b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94a7f jne 0x12d94a94 */
  if (!C.zf) goto L_12d94a94;
  /* 12d94a81 mov ecx, dword ptr [0x12dabb44] */
  ECX = (r32((uint32_t)(0x12dabb44)));
  /* 12d94a87 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12d94a8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d94a8c je 0x12d94acb */
  if (C.zf) goto L_12d94acb;
  /* 12d94a8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94a92 je 0x12d94acb */
  if (C.zf) goto L_12d94acb;
L_12d94a94:;
  /* 12d94a94 push 0x12da99ec */
  push32((uint32_t)(0x12da99ecu));
  /* 12d94a99 push 0x12da93b8 */
  push32((uint32_t)(0x12da93b8u));
  /* 12d94a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94aa6 call 0x12d91d00 */
  push32(0x12d94aabu); f_12d91d00();
  /* 12d94aab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94aae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94ab1 jne 0x12d94ab4 */
  if (!C.zf) goto L_12d94ab4;
  /* 12d94ab3 int3  */
  x86_unimpl("int3 @ 0x12d94ab3");
L_12d94ab4:;
  /* 12d94ab4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d94ab6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d94ab8 jne 0x12d94a94 */
  if (!C.zf) goto L_12d94a94;
  /* 12d94aba push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94abc call 0x12d94680 */
  push32(0x12d94ac1u); f_12d94680();
  /* 12d94ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94ac4 mov eax, 1 */
  EAX = (0x1u);
  /* 12d94ac9 jmp 0x12d94acd */
  goto L_12d94acd;
L_12d94acb:;
  /* 12d94acb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d94acd:;
  /* 12d94acd pop edi */
  EDI = (pop32());
  /* 12d94ace pop esi */
  ESI = (pop32());
  /* 12d94acf pop ebx */
  EBX = (pop32());
  /* 12d94ad0 mov esp, ebp */
  ESP = (EBP);
  /* 12d94ad2 pop ebp */
  EBP = (pop32());
  /* 12d94ad3 ret  */
  ESPCHK(0x12d94a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x12d94ae0 (197 bytes, 79 insns) */
void f_12d94ae0(void) {
  FTRACE(0x12d94ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12d94ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94ae4 push ebx */
  push32((uint32_t)(EBX));
  /* 12d94ae5 push esi */
  push32((uint32_t)(ESI));
  /* 12d94ae6 push edi */
  push32((uint32_t)(EDI));
  /* 12d94ae7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94aeb jne 0x12d94af2 */
  if (!C.zf) goto L_12d94af2;
  /* 12d94aed jmp 0x12d94b9e */
  goto L_12d94b9e;
L_12d94af2:;
  /* 12d94af2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d94af9 jmp 0x12d94b04 */
  goto L_12d94b04;
L_12d94afb:;
  /* 12d94afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94afe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94b01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d94b04:;
  /* 12d94b04 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94b08 jge 0x12d94b4e */
  if ((C.sf==C.of)) goto L_12d94b4e;
L_12d94b0a:;
  /* 12d94b0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94b0d mov edx, dword ptr [ecx*4 + 0x12dabb54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dabb54)));
  /* 12d94b14 push edx */
  push32((uint32_t)(EDX));
  /* 12d94b15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94b18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94b1b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12d94b1f push edx */
  push32((uint32_t)(EDX));
  /* 12d94b20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94b23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94b26 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12d94b2a push edx */
  push32((uint32_t)(EDX));
  /* 12d94b2b push 0x12da9a48 */
  push32((uint32_t)(0x12da9a48u));
  /* 12d94b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b38 call 0x12d91d00 */
  push32(0x12d94b3du); f_12d91d00();
  /* 12d94b3d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94b40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94b43 jne 0x12d94b46 */
  if (!C.zf) goto L_12d94b46;
  /* 12d94b45 int3  */
  x86_unimpl("int3 @ 0x12d94b45");
L_12d94b46:;
  /* 12d94b46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d94b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94b4a jne 0x12d94b0a */
  if (!C.zf) goto L_12d94b0a;
  /* 12d94b4c jmp 0x12d94afb */
  goto L_12d94afb;
L_12d94b4e:;
  /* 12d94b4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94b51 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12d94b54 push edx */
  push32((uint32_t)(EDX));
  /* 12d94b55 push 0x12da9a24 */
  push32((uint32_t)(0x12da9a24u));
  /* 12d94b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b62 call 0x12d91d00 */
  push32(0x12d94b67u); f_12d91d00();
  /* 12d94b67 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94b6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94b6d jne 0x12d94b70 */
  if (!C.zf) goto L_12d94b70;
  /* 12d94b6f int3  */
  x86_unimpl("int3 @ 0x12d94b6f");
L_12d94b70:;
  /* 12d94b70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d94b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94b74 jne 0x12d94b4e */
  if (!C.zf) goto L_12d94b4e;
L_12d94b76:;
  /* 12d94b76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94b79 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12d94b7c push edx */
  push32((uint32_t)(EDX));
  /* 12d94b7d push 0x12da9a04 */
  push32((uint32_t)(0x12da9a04u));
  /* 12d94b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94b8a call 0x12d91d00 */
  push32(0x12d94b8fu); f_12d91d00();
  /* 12d94b8f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94b92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94b95 jne 0x12d94b98 */
  if (!C.zf) goto L_12d94b98;
  /* 12d94b97 int3  */
  x86_unimpl("int3 @ 0x12d94b97");
L_12d94b98:;
  /* 12d94b98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d94b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94b9c jne 0x12d94b76 */
  if (!C.zf) goto L_12d94b76;
L_12d94b9e:;
  /* 12d94b9e pop edi */
  EDI = (pop32());
  /* 12d94b9f pop esi */
  ESI = (pop32());
  /* 12d94ba0 pop ebx */
  EBX = (pop32());
  /* 12d94ba1 mov esp, ebp */
  ESP = (EBP);
  /* 12d94ba3 pop ebp */
  EBP = (pop32());
  /* 12d94ba4 ret  */
  ESPCHK(0x12d94ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bb0 @ 0x12d94bb0 (329 bytes, 102 insns) */
void f_12d94bb0(void) {
  FTRACE(0x12d94bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12d94bb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94bb6 cmp dword ptr [0x12daf050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daf050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94bbd jne 0x12d94bc4 */
  if (!C.zf) goto L_12d94bc4;
  /* 12d94bbf call 0x12d994f0 */
  push32(0x12d94bc4u); f_12d994f0();
L_12d94bc4:;
  /* 12d94bc4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d94bcb mov eax, dword ptr [0x12dad508] */
  EAX = (r32((uint32_t)(0x12dad508)));
  /* 12d94bd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d94bd3:;
  /* 12d94bd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94bd6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d94bd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d94bdb je 0x12d94c09 */
  if (C.zf) goto L_12d94c09;
  /* 12d94bdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94be0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d94be3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94be6 je 0x12d94bf1 */
  if (C.zf) goto L_12d94bf1;
  /* 12d94be8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94beb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94bee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d94bf1:;
  /* 12d94bf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94bf4 push eax */
  push32((uint32_t)(EAX));
  /* 12d94bf5 call 0x12d95a70 */
  push32(0x12d94bfau); f_12d95a70();
  /* 12d94bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94bfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94c00 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d94c04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d94c07 jmp 0x12d94bd3 */
  goto L_12d94bd3;
L_12d94c09:;
  /* 12d94c09 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12d94c0b push 0x12da9a68 */
  push32((uint32_t)(0x12da9a68u));
  /* 12d94c10 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d94c12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94c15 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12d94c1c push ecx */
  push32((uint32_t)(ECX));
  /* 12d94c1d call 0x12d92c40 */
  push32(0x12d94c22u); f_12d92c40();
  /* 12d94c22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94c25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d94c28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94c2b mov dword ptr [0x12dad53c], edx */
  w32((uint32_t)(0x12dad53c), (EDX));
  /* 12d94c31 cmp dword ptr [0x12dad53c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad53c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94c38 jne 0x12d94c44 */
  if (!C.zf) goto L_12d94c44;
  /* 12d94c3a push 9 */
  push32((uint32_t)(0x9u));
  /* 12d94c3c call 0x12d91bb0 */
  push32(0x12d94c41u); f_12d91bb0();
  /* 12d94c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d94c44:;
  /* 12d94c44 mov eax, dword ptr [0x12dad508] */
  EAX = (r32((uint32_t)(0x12dad508)));
  /* 12d94c49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d94c4c jmp 0x12d94c57 */
  goto L_12d94c57;
L_12d94c4e:;
  /* 12d94c4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94c51 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94c54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d94c57:;
  /* 12d94c57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94c5a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d94c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94c5f je 0x12d94cc7 */
  if (C.zf) goto L_12d94cc7;
  /* 12d94c61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94c64 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94c65 call 0x12d95a70 */
  push32(0x12d94c6au); f_12d95a70();
  /* 12d94c6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94c6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94c70 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d94c73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94c76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d94c79 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94c7c je 0x12d94cc5 */
  if (C.zf) goto L_12d94cc5;
  /* 12d94c7e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12d94c80 push 0x12da9a68 */
  push32((uint32_t)(0x12da9a68u));
  /* 12d94c85 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d94c87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d94c8a push ecx */
  push32((uint32_t)(ECX));
  /* 12d94c8b call 0x12d92c40 */
  push32(0x12d94c90u); f_12d92c40();
  /* 12d94c90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94c93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94c96 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d94c98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94c9b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94c9e jne 0x12d94caa */
  if (!C.zf) goto L_12d94caa;
  /* 12d94ca0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12d94ca2 call 0x12d91bb0 */
  push32(0x12d94ca7u); f_12d91bb0();
  /* 12d94ca7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d94caa:;
  /* 12d94caa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94cad push ecx */
  push32((uint32_t)(ECX));
  /* 12d94cae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94cb1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d94cb3 push eax */
  push32((uint32_t)(EAX));
  /* 12d94cb4 call 0x12d95bf0 */
  push32(0x12d94cb9u); f_12d95bf0();
  /* 12d94cb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94cbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94cbf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94cc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12d94cc5:;
  /* 12d94cc5 jmp 0x12d94c4e */
  goto L_12d94c4e;
L_12d94cc7:;
  /* 12d94cc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d94cc9 mov edx, dword ptr [0x12dad508] */
  EDX = (r32((uint32_t)(0x12dad508)));
  /* 12d94ccf push edx */
  push32((uint32_t)(EDX));
  /* 12d94cd0 call 0x12d936d0 */
  push32(0x12d94cd5u); f_12d936d0();
  /* 12d94cd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94cd8 mov dword ptr [0x12dad508], 0 */
  w32((uint32_t)(0x12dad508), (0x0u));
  /* 12d94ce2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94ce5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d94ceb mov dword ptr [0x12daf040], 1 */
  w32((uint32_t)(0x12daf040), (0x1u));
  /* 12d94cf5 mov esp, ebp */
  ESP = (EBP);
  /* 12d94cf7 pop ebp */
  EBP = (pop32());
  /* 12d94cf8 ret  */
  ESPCHK(0x12d94bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d00 @ 0x12d94d00 (216 bytes, 69 insns) */
void f_12d94d00(void) {
  FTRACE(0x12d94d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94d01 mov ebp, esp */
  EBP = (ESP);
  /* 12d94d03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94d06 cmp dword ptr [0x12daf050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daf050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94d0d jne 0x12d94d14 */
  if (!C.zf) goto L_12d94d14;
  /* 12d94d0f call 0x12d994f0 */
  push32(0x12d94d14u); f_12d994f0();
L_12d94d14:;
  /* 12d94d14 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12d94d19 push 0x12dad578 */
  push32((uint32_t)(0x12dad578u));
  /* 12d94d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94d20 call dword ptr [0x12db02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02b0))), 0x12d94d26u);
  /* 12d94d26 mov dword ptr [0x12dad54c], 0x12dad578 */
  w32((uint32_t)(0x12dad54c), (0x12dad578u));
  /* 12d94d30 mov eax, dword ptr [0x12daf06c] */
  EAX = (r32((uint32_t)(0x12daf06c)));
  /* 12d94d35 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d94d38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d94d3a jne 0x12d94d47 */
  if (!C.zf) goto L_12d94d47;
  /* 12d94d3c mov edx, dword ptr [0x12dad54c] */
  EDX = (r32((uint32_t)(0x12dad54c)));
  /* 12d94d42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d94d45 jmp 0x12d94d4f */
  goto L_12d94d4f;
L_12d94d47:;
  /* 12d94d47 mov eax, dword ptr [0x12daf06c] */
  EAX = (r32((uint32_t)(0x12daf06c)));
  /* 12d94d4c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12d94d4f:;
  /* 12d94d4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d94d52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d94d55 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12d94d58 push edx */
  push32((uint32_t)(EDX));
  /* 12d94d59 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12d94d5c push eax */
  push32((uint32_t)(EAX));
  /* 12d94d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12d94d61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d94d64 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94d65 call 0x12d94de0 */
  push32(0x12d94d6au); f_12d94de0();
  /* 12d94d6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94d6d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12d94d72 push 0x12da9a74 */
  push32((uint32_t)(0x12da9a74u));
  /* 12d94d77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d94d79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94d7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94d7f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12d94d82 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94d83 call 0x12d92c40 */
  push32(0x12d94d88u); f_12d92c40();
  /* 12d94d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94d8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d94d8e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94d92 jne 0x12d94d9e */
  if (!C.zf) goto L_12d94d9e;
  /* 12d94d94 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d94d96 call 0x12d91bb0 */
  push32(0x12d94d9bu); f_12d91bb0();
  /* 12d94d9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d94d9e:;
  /* 12d94d9e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12d94da1 push edx */
  push32((uint32_t)(EDX));
  /* 12d94da2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12d94da5 push eax */
  push32((uint32_t)(EAX));
  /* 12d94da6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94da9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94dac lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12d94daf push eax */
  push32((uint32_t)(EAX));
  /* 12d94db0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d94db4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d94db7 push edx */
  push32((uint32_t)(EDX));
  /* 12d94db8 call 0x12d94de0 */
  push32(0x12d94dbdu); f_12d94de0();
  /* 12d94dbd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94dc0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94dc3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94dc6 mov dword ptr [0x12dad530], eax */
  w32((uint32_t)(0x12dad530), (EAX));
  /* 12d94dcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d94dce mov dword ptr [0x12dad534], ecx */
  w32((uint32_t)(0x12dad534), (ECX));
  /* 12d94dd4 mov esp, ebp */
  ESP = (EBP);
  /* 12d94dd6 pop ebp */
  EBP = (pop32());
  /* 12d94dd7 ret  */
  ESPCHK(0x12d94d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004de0 @ 0x12d94de0 (1060 bytes, 360 insns) */
void f_12d94de0(void) {
  FTRACE(0x12d94de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d94de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d94de1 mov ebp, esp */
  EBP = (ESP);
  /* 12d94de3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94de6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94de9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d94def mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d94df2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12d94df8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d94dfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d94dfe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94e02 je 0x12d94e15 */
  if (C.zf) goto L_12d94e15;
  /* 12d94e04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d94e07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94e0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d94e0c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d94e0f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94e12 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12d94e15:;
  /* 12d94e15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94e18 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d94e1b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94e1e jne 0x12d94eed */
  if (!C.zf) goto L_12d94eed;
L_12d94e24:;
  /* 12d94e24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94e27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94e2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d94e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94e30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d94e33 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94e36 je 0x12d94eb2 */
  if (C.zf) goto L_12d94eb2;
  /* 12d94e38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94e3b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d94e3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94e40 je 0x12d94eb2 */
  if (C.zf) goto L_12d94eb2;
  /* 12d94e42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94e45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d94e47 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d94e49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d94e4b mov al, byte ptr [edx + 0x12daeda1] */
  AL = (r8((uint32_t)(EDX + 0x12daeda1)));
  /* 12d94e51 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d94e54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94e56 je 0x12d94e87 */
  if (C.zf) goto L_12d94e87;
  /* 12d94e58 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94e5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d94e5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94e60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94e63 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d94e65 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94e69 je 0x12d94e87 */
  if (C.zf) goto L_12d94e87;
  /* 12d94e6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94e6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94e71 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d94e73 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d94e75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94e78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94e7b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d94e7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94e81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94e84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d94e87:;
  /* 12d94e87 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94e8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d94e8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94e8f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94e92 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d94e94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94e98 je 0x12d94ead */
  if (C.zf) goto L_12d94ead;
  /* 12d94e9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94e9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94ea0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d94ea2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d94ea4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94ea7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94eaa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d94ead:;
  /* 12d94ead jmp 0x12d94e24 */
  goto L_12d94e24;
L_12d94eb2:;
  /* 12d94eb2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94eb5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d94eb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94eba mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94ebd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d94ebf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94ec3 je 0x12d94ed4 */
  if (C.zf) goto L_12d94ed4;
  /* 12d94ec5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94ec8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d94ecb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94ece add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94ed1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12d94ed4:;
  /* 12d94ed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94ed7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d94eda cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94edd jne 0x12d94ee8 */
  if (!C.zf) goto L_12d94ee8;
  /* 12d94edf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94ee2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94ee5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12d94ee8:;
  /* 12d94ee8 jmp 0x12d94fbc */
  goto L_12d94fbc;
L_12d94eed:;
  /* 12d94eed mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94ef0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d94ef2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94ef5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94ef8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d94efa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94efe je 0x12d94f13 */
  if (C.zf) goto L_12d94f13;
  /* 12d94f00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94f03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94f06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d94f08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d94f0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94f0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94f10 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d94f13:;
  /* 12d94f13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94f16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d94f18 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12d94f1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94f1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94f21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d94f24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94f27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d94f2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d94f2f mov dl, byte ptr [ecx + 0x12daeda1] */
  DL = (r8((uint32_t)(ECX + 0x12daeda1)));
  /* 12d94f35 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d94f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d94f3a je 0x12d94f6b */
  if (C.zf) goto L_12d94f6b;
  /* 12d94f3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94f3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d94f41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94f44 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d94f47 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d94f49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94f4d je 0x12d94f62 */
  if (C.zf) goto L_12d94f62;
  /* 12d94f4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94f52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94f55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d94f57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d94f59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94f5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94f5f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12d94f62:;
  /* 12d94f62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94f65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94f68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d94f6b:;
  /* 12d94f6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94f6e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d94f74 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94f77 je 0x12d94f97 */
  if (C.zf) goto L_12d94f97;
  /* 12d94f79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94f7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d94f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94f83 je 0x12d94f97 */
  if (C.zf) goto L_12d94f97;
  /* 12d94f85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94f88 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d94f8e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94f91 jne 0x12d94eed */
  if (!C.zf) goto L_12d94eed;
L_12d94f97:;
  /* 12d94f97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d94f9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d94fa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d94fa2 jne 0x12d94faf */
  if (!C.zf) goto L_12d94faf;
  /* 12d94fa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94fa7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d94faa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d94fad jmp 0x12d94fbc */
  goto L_12d94fbc;
L_12d94faf:;
  /* 12d94faf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94fb3 je 0x12d94fbc */
  if (C.zf) goto L_12d94fbc;
  /* 12d94fb5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d94fb8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12d94fbc:;
  /* 12d94fbc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12d94fc3:;
  /* 12d94fc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94fc6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d94fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d94fcb je 0x12d94fee */
  if (C.zf) goto L_12d94fee;
L_12d94fcd:;
  /* 12d94fcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94fd0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d94fd3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94fd6 je 0x12d94fe3 */
  if (C.zf) goto L_12d94fe3;
  /* 12d94fd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94fdb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d94fde cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d94fe1 jne 0x12d94fee */
  if (!C.zf) goto L_12d94fee;
L_12d94fe3:;
  /* 12d94fe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94fe6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d94fe9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d94fec jmp 0x12d94fcd */
  goto L_12d94fcd;
L_12d94fee:;
  /* 12d94fee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d94ff1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d94ff4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d94ff6 jne 0x12d94ffd */
  if (!C.zf) goto L_12d94ffd;
  /* 12d94ff8 jmp 0x12d951db */
  goto L_12d951db;
L_12d94ffd:;
  /* 12d94ffd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95001 je 0x12d95014 */
  if (C.zf) goto L_12d95014;
  /* 12d95003 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95006 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95009 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12d9500b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9500e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95011 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d95014:;
  /* 12d95014 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d95017 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d95019 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9501c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9501f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12d95021:;
  /* 12d95021 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d95028 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12d9502f:;
  /* 12d9502f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95032 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d95035 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95038 jne 0x12d9504e */
  if (!C.zf) goto L_12d9504e;
  /* 12d9503a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9503d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95040 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d95043 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d95046 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95049 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d9504c jmp 0x12d9502f */
  goto L_12d9502f;
L_12d9504e:;
  /* 12d9504e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95051 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d95054 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95057 jne 0x12d950aa */
  if (!C.zf) goto L_12d950aa;
  /* 12d95059 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9505c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9505e mov ecx, 2 */
  ECX = (0x2u);
  /* 12d95063 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d95065 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d95067 jne 0x12d950a2 */
  if (!C.zf) goto L_12d950a2;
  /* 12d95069 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9506d je 0x12d9508f */
  if (C.zf) goto L_12d9508f;
  /* 12d9506f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95072 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12d95076 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95079 jne 0x12d95086 */
  if (!C.zf) goto L_12d95086;
  /* 12d9507b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9507e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95081 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d95084 jmp 0x12d9508d */
  goto L_12d9508d;
L_12d95086:;
  /* 12d95086 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d9508d:;
  /* 12d9508d jmp 0x12d95096 */
  goto L_12d95096;
L_12d9508f:;
  /* 12d9508f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d95096:;
  /* 12d95096 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d95098 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9509c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12d9509f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12d950a2:;
  /* 12d950a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d950a5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d950a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d950aa:;
  /* 12d950aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d950ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d950b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d950b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12d950b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d950b8 je 0x12d950de */
  if (C.zf) goto L_12d950de;
  /* 12d950ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d950be je 0x12d950cf */
  if (C.zf) goto L_12d950cf;
  /* 12d950c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d950c3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12d950c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d950c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d950cc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12d950cf:;
  /* 12d950cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d950d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d950d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d950d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d950da mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d950dc jmp 0x12d950aa */
  goto L_12d950aa;
L_12d950de:;
  /* 12d950de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d950e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d950e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d950e6 je 0x12d95104 */
  if (C.zf) goto L_12d95104;
  /* 12d950e8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d950ec jne 0x12d95109 */
  if (!C.zf) goto L_12d95109;
  /* 12d950ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d950f1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d950f4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d950f7 je 0x12d95104 */
  if (C.zf) goto L_12d95104;
  /* 12d950f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d950fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d950ff cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95102 jne 0x12d95109 */
  if (!C.zf) goto L_12d95109;
L_12d95104:;
  /* 12d95104 jmp 0x12d951b4 */
  goto L_12d951b4;
L_12d95109:;
  /* 12d95109 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9510d je 0x12d951a6 */
  if (C.zf) goto L_12d951a6;
  /* 12d95113 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95117 je 0x12d9516d */
  if (C.zf) goto L_12d9516d;
  /* 12d95119 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9511c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9511e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d95120 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d95122 mov cl, byte ptr [eax + 0x12daeda1] */
  CL = (r8((uint32_t)(EAX + 0x12daeda1)));
  /* 12d95128 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9512b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d9512d je 0x12d95158 */
  if (C.zf) goto L_12d95158;
  /* 12d9512f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95132 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95135 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d95137 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12d95139 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9513c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9513f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12d95142 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95145 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95148 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9514b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9514e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d95150 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95153 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d95156 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12d95158:;
  /* 12d95158 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d9515b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9515e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d95160 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12d95162 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95165 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95168 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12d9516b jmp 0x12d95199 */
  goto L_12d95199;
L_12d9516d:;
  /* 12d9516d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d95172 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d95174 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d95176 mov cl, byte ptr [eax + 0x12daeda1] */
  CL = (r8((uint32_t)(EAX + 0x12daeda1)));
  /* 12d9517c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d9517f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d95181 je 0x12d95199 */
  if (C.zf) goto L_12d95199;
  /* 12d95183 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95186 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95189 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d9518c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9518f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d95191 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95194 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d95197 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d95199:;
  /* 12d95199 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d9519c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d9519e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d951a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d951a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12d951a6:;
  /* 12d951a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d951a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d951ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d951af jmp 0x12d95021 */
  goto L_12d95021;
L_12d951b4:;
  /* 12d951b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d951b8 je 0x12d951c9 */
  if (C.zf) goto L_12d951c9;
  /* 12d951ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d951bd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d951c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d951c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d951c6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12d951c9:;
  /* 12d951c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d951cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d951ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d951d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12d951d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d951d6 jmp 0x12d94fc3 */
  goto L_12d94fc3;
L_12d951db:;
  /* 12d951db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d951df je 0x12d951f3 */
  if (C.zf) goto L_12d951f3;
  /* 12d951e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d951e4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d951ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d951ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d951f0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d951f3:;
  /* 12d951f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d951f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d951f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d951fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d951fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d95200 mov esp, ebp */
  ESP = (EBP);
  /* 12d95202 pop ebp */
  EBP = (pop32());
  /* 12d95203 ret  */
  ESPCHK(0x12d94de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005210 @ 0x12d95210 (537 bytes, 173 insns) */
void f_12d95210(void) {
  FTRACE(0x12d95210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95210 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95211 mov ebp, esp */
  EBP = (ESP);
  /* 12d95213 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95216 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12d9521d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12d95224 cmp dword ptr [0x12dad67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9522b jne 0x12d9526a */
  if (!C.zf) goto L_12d9526a;
  /* 12d9522d call dword ptr [0x12db030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db030c))), 0x12d95233u);
  /* 12d95233 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d95236 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9523a je 0x12d95248 */
  if (C.zf) goto L_12d95248;
  /* 12d9523c mov dword ptr [0x12dad67c], 1 */
  w32((uint32_t)(0x12dad67c), (0x1u));
  /* 12d95246 jmp 0x12d9526a */
  goto L_12d9526a;
L_12d95248:;
  /* 12d95248 call dword ptr [0x12db0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0308))), 0x12d9524eu);
  /* 12d9524e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d95251 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95255 je 0x12d95263 */
  if (C.zf) goto L_12d95263;
  /* 12d95257 mov dword ptr [0x12dad67c], 2 */
  w32((uint32_t)(0x12dad67c), (0x2u));
  /* 12d95261 jmp 0x12d9526a */
  goto L_12d9526a;
L_12d95263:;
  /* 12d95263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d95265 jmp 0x12d95425 */
  goto L_12d95425;
L_12d9526a:;
  /* 12d9526a cmp dword ptr [0x12dad67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95271 jne 0x12d9536e */
  if (!C.zf) goto L_12d9536e;
  /* 12d95277 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9527b jne 0x12d95293 */
  if (!C.zf) goto L_12d95293;
  /* 12d9527d call dword ptr [0x12db030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db030c))), 0x12d95283u);
  /* 12d95283 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d95286 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9528a jne 0x12d95293 */
  if (!C.zf) goto L_12d95293;
  /* 12d9528c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9528e jmp 0x12d95425 */
  goto L_12d95425;
L_12d95293:;
  /* 12d95293 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d95296 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d95299:;
  /* 12d95299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9529c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9529e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12d952a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d952a3 je 0x12d952c5 */
  if (C.zf) goto L_12d952c5;
  /* 12d952a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d952a8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d952ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d952ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d952b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d952b3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12d952b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d952b8 jne 0x12d952c3 */
  if (!C.zf) goto L_12d952c3;
  /* 12d952ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d952bd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d952c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d952c3:;
  /* 12d952c3 jmp 0x12d95299 */
  goto L_12d95299;
L_12d952c5:;
  /* 12d952c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d952c8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d952cb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12d952cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d952d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d952d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d952d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d952d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d952d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d952db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d952de push edx */
  push32((uint32_t)(EDX));
  /* 12d952df mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d952e2 push eax */
  push32((uint32_t)(EAX));
  /* 12d952e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d952e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d952e7 call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12d952edu);
  /* 12d952ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d952f0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d952f4 je 0x12d95314 */
  if (C.zf) goto L_12d95314;
  /* 12d952f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12d952f8 push 0x12da9a80 */
  push32((uint32_t)(0x12da9a80u));
  /* 12d952fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12d952ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d95302 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95303 call 0x12d92c40 */
  push32(0x12d95308u); f_12d92c40();
  /* 12d95308 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9530b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d9530e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95312 jne 0x12d95325 */
  if (!C.zf) goto L_12d95325;
L_12d95314:;
  /* 12d95314 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d95317 push edx */
  push32((uint32_t)(EDX));
  /* 12d95318 call dword ptr [0x12db0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0300))), 0x12d9531eu);
  /* 12d9531e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d95320 jmp 0x12d95425 */
  goto L_12d95425;
L_12d95325:;
  /* 12d95325 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95327 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95329 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9532c push eax */
  push32((uint32_t)(EAX));
  /* 12d9532d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d95330 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95331 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95334 push edx */
  push32((uint32_t)(EDX));
  /* 12d95335 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d95338 push eax */
  push32((uint32_t)(EAX));
  /* 12d95339 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9533b push 0 */
  push32((uint32_t)(0x0u));
  /* 12d9533d call dword ptr [0x12db0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0304))), 0x12d95343u);
  /* 12d95343 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d95345 jne 0x12d9535c */
  if (!C.zf) goto L_12d9535c;
  /* 12d95347 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d95349 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9534c push ecx */
  push32((uint32_t)(ECX));
  /* 12d9534d call 0x12d936d0 */
  push32(0x12d95352u); f_12d936d0();
  /* 12d95352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95355 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12d9535c:;
  /* 12d9535c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d9535f push edx */
  push32((uint32_t)(EDX));
  /* 12d95360 call dword ptr [0x12db0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0300))), 0x12d95366u);
  /* 12d95366 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d95369 jmp 0x12d95425 */
  goto L_12d95425;
L_12d9536e:;
  /* 12d9536e cmp dword ptr [0x12dad67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12dad67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95375 jne 0x12d95423 */
  if (!C.zf) goto L_12d95423;
  /* 12d9537b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9537f jne 0x12d95397 */
  if (!C.zf) goto L_12d95397;
  /* 12d95381 call dword ptr [0x12db0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0308))), 0x12d95387u);
  /* 12d95387 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d9538a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9538e jne 0x12d95397 */
  if (!C.zf) goto L_12d95397;
  /* 12d95390 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d95392 jmp 0x12d95425 */
  goto L_12d95425;
L_12d95397:;
  /* 12d95397 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9539a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d9539d:;
  /* 12d9539d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d953a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d953a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d953a5 je 0x12d953c5 */
  if (C.zf) goto L_12d953c5;
  /* 12d953a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d953aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d953ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d953b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d953b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d953b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d953b8 jne 0x12d953c3 */
  if (!C.zf) goto L_12d953c3;
  /* 12d953ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d953bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d953c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12d953c3:;
  /* 12d953c3 jmp 0x12d9539d */
  goto L_12d9539d;
L_12d953c5:;
  /* 12d953c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d953c8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d953cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d953ce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d953d1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12d953d6 push 0x12da9a80 */
  push32((uint32_t)(0x12da9a80u));
  /* 12d953db push 2 */
  push32((uint32_t)(0x2u));
  /* 12d953dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d953e0 push edx */
  push32((uint32_t)(EDX));
  /* 12d953e1 call 0x12d92c40 */
  push32(0x12d953e6u); f_12d92c40();
  /* 12d953e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d953e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d953ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d953f0 jne 0x12d95400 */
  if (!C.zf) goto L_12d95400;
  /* 12d953f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d953f5 push eax */
  push32((uint32_t)(EAX));
  /* 12d953f6 call dword ptr [0x12db02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02fc))), 0x12d953fcu);
  /* 12d953fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d953fe jmp 0x12d95425 */
  goto L_12d95425;
L_12d95400:;
  /* 12d95400 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d95403 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95404 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d95407 push edx */
  push32((uint32_t)(EDX));
  /* 12d95408 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9540b push eax */
  push32((uint32_t)(EAX));
  /* 12d9540c call 0x12d99520 */
  push32(0x12d95411u); f_12d99520();
  /* 12d95411 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95414 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d95417 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95418 call dword ptr [0x12db02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02fc))), 0x12d9541eu);
  /* 12d9541e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d95421 jmp 0x12d95425 */
  goto L_12d95425;
L_12d95423:;
  /* 12d95423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d95425:;
  /* 12d95425 mov esp, ebp */
  ESP = (EBP);
  /* 12d95427 pop ebp */
  EBP = (pop32());
  /* 12d95428 ret  */
  ESPCHK(0x12d95210u, _esp0);
  ESP += 4; return;
}

/* FUN_10005430 @ 0x12d95430 (77 bytes, 25 insns) */
void f_12d95430(void) {
  FTRACE(0x12d95430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95430 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95431 mov ebp, esp */
  EBP = (ESP);
  /* 12d95433 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95435 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12d9543a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9543c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95440 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12d95443 push eax */
  push32((uint32_t)(EAX));
  /* 12d95444 call dword ptr [0x12db0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0314))), 0x12d9544au);
  /* 12d9544a mov dword ptr [0x12daeecc], eax */
  w32((uint32_t)(0x12daeecc), (EAX));
  /* 12d9544f cmp dword ptr [0x12daeecc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12daeecc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95456 jne 0x12d9545c */
  if (!C.zf) goto L_12d9545c;
  /* 12d95458 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d9545a jmp 0x12d9547b */
  goto L_12d9547b;
L_12d9545c:;
  /* 12d9545c call 0x12d96ee0 */
  push32(0x12d95461u); f_12d96ee0();
  /* 12d95461 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d95463 jne 0x12d95476 */
  if (!C.zf) goto L_12d95476;
  /* 12d95465 mov ecx, dword ptr [0x12daeecc] */
  ECX = (r32((uint32_t)(0x12daeecc)));
  /* 12d9546b push ecx */
  push32((uint32_t)(ECX));
  /* 12d9546c call dword ptr [0x12db0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0310))), 0x12d95472u);
  /* 12d95472 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d95474 jmp 0x12d9547b */
  goto L_12d9547b;
L_12d95476:;
  /* 12d95476 mov eax, 1 */
  EAX = (0x1u);
L_12d9547b:;
  /* 12d9547b pop ebp */
  EBP = (pop32());
  /* 12d9547c ret  */
  ESPCHK(0x12d95430u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x12d95480 (156 bytes, 48 insns) */
void f_12d95480(void) {
  FTRACE(0x12d95480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95480 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95481 mov ebp, esp */
  EBP = (ESP);
  /* 12d95483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95486 mov eax, dword ptr [0x12daeec8] */
  EAX = (r32((uint32_t)(0x12daeec8)));
  /* 12d9548b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d9548e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d95495 jmp 0x12d954a0 */
  goto L_12d954a0;
L_12d95497:;
  /* 12d95497 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9549a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9549d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d954a0:;
  /* 12d954a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d954a3 cmp edx, dword ptr [0x12daeec4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12daeec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d954a9 jge 0x12d954f6 */
  if ((C.sf==C.of)) goto L_12d954f6;
  /* 12d954ab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12d954b0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12d954b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d954b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d954bb push ecx */
  push32((uint32_t)(ECX));
  /* 12d954bc call dword ptr [0x12db031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db031c))), 0x12d954c2u);
  /* 12d954c2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12d954c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d954c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d954cc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12d954cf push eax */
  push32((uint32_t)(EAX));
  /* 12d954d0 call dword ptr [0x12db031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db031c))), 0x12d954d6u);
  /* 12d954d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d954d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12d954dc push edx */
  push32((uint32_t)(EDX));
  /* 12d954dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d954df mov eax, dword ptr [0x12daeecc] */
  EAX = (r32((uint32_t)(0x12daeecc)));
  /* 12d954e4 push eax */
  push32((uint32_t)(EAX));
  /* 12d954e5 call dword ptr [0x12db0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0318))), 0x12d954ebu);
  /* 12d954eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d954ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d954f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d954f4 jmp 0x12d95497 */
  goto L_12d95497;
L_12d954f6:;
  /* 12d954f6 mov edx, dword ptr [0x12daeec8] */
  EDX = (r32((uint32_t)(0x12daeec8)));
  /* 12d954fc push edx */
  push32((uint32_t)(EDX));
  /* 12d954fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12d954ff mov eax, dword ptr [0x12daeecc] */
  EAX = (r32((uint32_t)(0x12daeecc)));
  /* 12d95504 push eax */
  push32((uint32_t)(EAX));
  /* 12d95505 call dword ptr [0x12db0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0318))), 0x12d9550bu);
  /* 12d9550b mov ecx, dword ptr [0x12daeecc] */
  ECX = (r32((uint32_t)(0x12daeecc)));
  /* 12d95511 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95512 call dword ptr [0x12db0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0310))), 0x12d95518u);
  /* 12d95518 mov esp, ebp */
  ESP = (EBP);
  /* 12d9551a pop ebp */
  EBP = (pop32());
  /* 12d9551b ret  */
  ESPCHK(0x12d95480u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12d95520 (73 bytes, 19 insns) */
void f_12d95520(void) {
  FTRACE(0x12d95520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95520 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95521 mov ebp, esp */
  EBP = (ESP);
  /* 12d95523 cmp dword ptr [0x12dad510], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad510))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9552a je 0x12d9553e */
  if (C.zf) goto L_12d9553e;
  /* 12d9552c cmp dword ptr [0x12dad510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95533 jne 0x12d95567 */
  if (!C.zf) goto L_12d95567;
  /* 12d95535 cmp dword ptr [0x12dad514], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad514))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9553c jne 0x12d95567 */
  if (!C.zf) goto L_12d95567;
L_12d9553e:;
  /* 12d9553e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12d95543 call 0x12d95570 */
  push32(0x12d95548u); f_12d95570();
  /* 12d95548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9554b cmp dword ptr [0x12dad680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95552 je 0x12d9555a */
  if (C.zf) goto L_12d9555a;
  /* 12d95554 call dword ptr [0x12dad680] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad680))), 0x12d9555au);
L_12d9555a:;
  /* 12d9555a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12d9555f call 0x12d95570 */
  push32(0x12d95564u); f_12d95570();
  /* 12d95564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d95567:;
  /* 12d95567 pop ebp */
  EBP = (pop32());
  /* 12d95568 ret  */
  ESPCHK(0x12d95520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005570 @ 0x12d95570 (447 bytes, 131 insns) */
void f_12d95570(void) {
  FTRACE(0x12d95570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95570 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95571 mov ebp, esp */
  EBP = (ESP);
  /* 12d95573 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95579 push ebx */
  push32((uint32_t)(EBX));
  /* 12d9557a push esi */
  push32((uint32_t)(ESI));
  /* 12d9557b push edi */
  push32((uint32_t)(EDI));
  /* 12d9557c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d95583 jmp 0x12d9558e */
  goto L_12d9558e;
L_12d95585:;
  /* 12d95585 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95588 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9558b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d9558e:;
  /* 12d9558e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95592 jae 0x12d955a7 */
  if (!C.cf) goto L_12d955a7;
  /* 12d95594 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95597 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9559a cmp edx, dword ptr [ecx*8 + 0x12dabb70] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12dabb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d955a1 jne 0x12d955a5 */
  if (!C.zf) goto L_12d955a5;
  /* 12d955a3 jmp 0x12d955a7 */
  goto L_12d955a7;
L_12d955a5:;
  /* 12d955a5 jmp 0x12d95585 */
  goto L_12d95585;
L_12d955a7:;
  /* 12d955a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d955aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d955ad cmp ecx, dword ptr [eax*8 + 0x12dabb70] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12dabb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d955b4 jne 0x12d95728 */
  if (!C.zf) goto L_12d95728;
  /* 12d955ba cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d955c1 je 0x12d955e4 */
  if (C.zf) goto L_12d955e4;
  /* 12d955c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d955c6 mov eax, dword ptr [edx*8 + 0x12dabb74] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12dabb74)));
  /* 12d955cd push eax */
  push32((uint32_t)(EAX));
  /* 12d955ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12d955d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d955d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d955d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d955d6 call 0x12d91d00 */
  push32(0x12d955dbu); f_12d91d00();
  /* 12d955db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d955de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d955e1 jne 0x12d955e4 */
  if (!C.zf) goto L_12d955e4;
  /* 12d955e3 int3  */
  x86_unimpl("int3 @ 0x12d955e3");
L_12d955e4:;
  /* 12d955e4 cmp dword ptr [0x12dad510], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad510))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d955eb je 0x12d955ff */
  if (C.zf) goto L_12d955ff;
  /* 12d955ed cmp dword ptr [0x12dad510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d955f4 jne 0x12d95638 */
  if (!C.zf) goto L_12d95638;
  /* 12d955f6 cmp dword ptr [0x12dad514], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12dad514))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d955fd jne 0x12d95638 */
  if (!C.zf) goto L_12d95638;
L_12d955ff:;
  /* 12d955ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95601 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12d95604 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95605 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95608 mov eax, dword ptr [edx*8 + 0x12dabb74] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12dabb74)));
  /* 12d9560f push eax */
  push32((uint32_t)(EAX));
  /* 12d95610 call 0x12d95a70 */
  push32(0x12d95615u); f_12d95a70();
  /* 12d95615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95618 push eax */
  push32((uint32_t)(EAX));
  /* 12d95619 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9561c mov edx, dword ptr [ecx*8 + 0x12dabb74] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12dabb74)));
  /* 12d95623 push edx */
  push32((uint32_t)(EDX));
  /* 12d95624 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12d95626 call dword ptr [0x12db0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0294))), 0x12d9562cu);
  /* 12d9562c push eax */
  push32((uint32_t)(EAX));
  /* 12d9562d call dword ptr [0x12db0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0298))), 0x12d95633u);
  /* 12d95633 jmp 0x12d95728 */
  goto L_12d95728;
L_12d95638:;
  /* 12d95638 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9563f je 0x12d95728 */
  if (C.zf) goto L_12d95728;
  /* 12d95645 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12d9564a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12d95650 push eax */
  push32((uint32_t)(EAX));
  /* 12d95651 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95653 call dword ptr [0x12db02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02b0))), 0x12d95659u);
  /* 12d95659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d9565b jne 0x12d95671 */
  if (!C.zf) goto L_12d95671;
  /* 12d9565d push 0x12da92e8 */
  push32((uint32_t)(0x12da92e8u));
  /* 12d95662 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12d95668 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95669 call 0x12d95bf0 */
  push32(0x12d9566eu); f_12d95bf0();
  /* 12d9566e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d95671:;
  /* 12d95671 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12d95677 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d9567a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9567d push eax */
  push32((uint32_t)(EAX));
  /* 12d9567e call 0x12d95a70 */
  push32(0x12d95683u); f_12d95a70();
  /* 12d95683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95686 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95689 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9568c jbe 0x12d956ba */
  if ((C.cf||C.zf)) goto L_12d956ba;
  /* 12d9568e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12d95694 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95695 call 0x12d95a70 */
  push32(0x12d9569au); f_12d95a70();
  /* 12d9569a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9569d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d956a0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12d956a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d956a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d956a9 push 0x12da92e4 */
  push32((uint32_t)(0x12da92e4u));
  /* 12d956ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d956b1 push ecx */
  push32((uint32_t)(ECX));
  /* 12d956b2 call 0x12d96460 */
  push32(0x12d956b7u); f_12d96460();
  /* 12d956b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d956ba:;
  /* 12d956ba push 0x12da9d3c */
  push32((uint32_t)(0x12da9d3cu));
  /* 12d956bf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12d956c5 push edx */
  push32((uint32_t)(EDX));
  /* 12d956c6 call 0x12d95bf0 */
  push32(0x12d956cbu); f_12d95bf0();
  /* 12d956cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d956ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d956d1 push eax */
  push32((uint32_t)(EAX));
  /* 12d956d2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12d956d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d956d9 call 0x12d95c00 */
  push32(0x12d956deu); f_12d95c00();
  /* 12d956de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d956e1 push 0x12da925c */
  push32((uint32_t)(0x12da925cu));
  /* 12d956e6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12d956ec push edx */
  push32((uint32_t)(EDX));
  /* 12d956ed call 0x12d95c00 */
  push32(0x12d956f2u); f_12d95c00();
  /* 12d956f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d956f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d956f8 mov ecx, dword ptr [eax*8 + 0x12dabb74] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12dabb74)));
  /* 12d956ff push ecx */
  push32((uint32_t)(ECX));
  /* 12d95700 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12d95706 push edx */
  push32((uint32_t)(EDX));
  /* 12d95707 call 0x12d95c00 */
  push32(0x12d9570cu); f_12d95c00();
  /* 12d9570c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9570f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12d95714 push 0x12da9d14 */
  push32((uint32_t)(0x12da9d14u));
  /* 12d95719 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12d9571f push eax */
  push32((uint32_t)(EAX));
  /* 12d95720 call 0x12d963a0 */
  push32(0x12d95725u); f_12d963a0();
  /* 12d95725 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d95728:;
  /* 12d95728 pop edi */
  EDI = (pop32());
  /* 12d95729 pop esi */
  ESI = (pop32());
  /* 12d9572a pop ebx */
  EBX = (pop32());
  /* 12d9572b mov esp, ebp */
  ESP = (EBP);
  /* 12d9572d pop ebp */
  EBP = (pop32());
  /* 12d9572e ret  */
  ESPCHK(0x12d95570u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12d95730 (80 bytes, 27 insns) */
void f_12d95730(void) {
  FTRACE(0x12d95730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95730 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95731 mov ebp, esp */
  EBP = (ESP);
  /* 12d95733 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95734 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d9573b jmp 0x12d95746 */
  goto L_12d95746;
L_12d9573d:;
  /* 12d9573d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95740 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95743 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d95746:;
  /* 12d95746 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9574a jae 0x12d9575f */
  if (!C.cf) goto L_12d9575f;
  /* 12d9574c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9574f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95752 cmp edx, dword ptr [ecx*8 + 0x12dabb70] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12dabb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95759 jne 0x12d9575d */
  if (!C.zf) goto L_12d9575d;
  /* 12d9575b jmp 0x12d9575f */
  goto L_12d9575f;
L_12d9575d:;
  /* 12d9575d jmp 0x12d9573d */
  goto L_12d9573d;
L_12d9575f:;
  /* 12d9575f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95762 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95765 cmp ecx, dword ptr [eax*8 + 0x12dabb70] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12dabb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9576c jne 0x12d9577a */
  if (!C.zf) goto L_12d9577a;
  /* 12d9576e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95771 mov eax, dword ptr [edx*8 + 0x12dabb74] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12dabb74)));
  /* 12d95778 jmp 0x12d9577c */
  goto L_12d9577c;
L_12d9577a:;
  /* 12d9577a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d9577c:;
  /* 12d9577c mov esp, ebp */
  ESP = (EBP);
  /* 12d9577e pop ebp */
  EBP = (pop32());
  /* 12d9577f ret  */
  ESPCHK(0x12d95730u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12d95780 (66 bytes, 28 insns) */
void f_12d95780(void) {
  FTRACE(0x12d95780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95780 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95781 mov ebp, esp */
  EBP = (ESP);
  /* 12d95783 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95787 jne 0x12d957a7 */
  if (!C.zf) goto L_12d957a7;
  /* 12d95789 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9578d jge 0x12d957a7 */
  if ((C.sf==C.of)) goto L_12d957a7;
  /* 12d9578f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d95791 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95794 push eax */
  push32((uint32_t)(EAX));
  /* 12d95795 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95798 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95799 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9579c push edx */
  push32((uint32_t)(EDX));
  /* 12d9579d call 0x12d957d0 */
  push32(0x12d957a2u); f_12d957d0();
  /* 12d957a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d957a5 jmp 0x12d957bd */
  goto L_12d957bd;
L_12d957a7:;
  /* 12d957a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d957a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d957ac push eax */
  push32((uint32_t)(EAX));
  /* 12d957ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d957b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d957b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d957b4 push edx */
  push32((uint32_t)(EDX));
  /* 12d957b5 call 0x12d957d0 */
  push32(0x12d957bau); f_12d957d0();
  /* 12d957ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d957bd:;
  /* 12d957bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d957c0 pop ebp */
  EBP = (pop32());
  /* 12d957c1 ret  */
  ESPCHK(0x12d95780u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12d957d0 (194 bytes, 71 insns) */
void f_12d957d0(void) {
  FTRACE(0x12d957d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d957d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d957d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d957d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d957d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d957d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d957dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d957e0 je 0x12d957f9 */
  if (C.zf) goto L_12d957f9;
  /* 12d957e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d957e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12d957e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d957eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d957ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d957f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d957f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d957f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d957f9:;
  /* 12d957f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d957fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d957ff:;
  /* 12d957ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95802 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d95804 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d95807 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d9580a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9580d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9580f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12d95812 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d95815 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95819 jbe 0x12d95831 */
  if ((C.cf||C.zf)) goto L_12d95831;
  /* 12d9581b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9581e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95824 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d95826 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95829 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9582c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d9582f jmp 0x12d95845 */
  goto L_12d95845;
L_12d95831:;
  /* 12d95831 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d95834 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95837 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9583a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d9583c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9583f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95842 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d95845:;
  /* 12d95845 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95849 ja 0x12d957ff */
  if ((!C.cf&&!C.zf)) goto L_12d957ff;
  /* 12d9584b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9584e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d95851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95854 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95857 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9585a:;
  /* 12d9585a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9585d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d9585f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12d95862 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95865 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95868 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d9586a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d9586c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d9586f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12d95872 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d95874 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95877 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d9587a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d9587d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95880 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95883 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d95886 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95889 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9588c jb 0x12d9585a */
  if (C.cf) goto L_12d9585a;
  /* 12d9588e mov esp, ebp */
  ESP = (EBP);
  /* 12d95890 pop ebp */
  EBP = (pop32());
  /* 12d95891 ret  */
  ESPCHK(0x12d957d0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12d958a0 (63 bytes, 24 insns) */
void f_12d958a0(void) {
  FTRACE(0x12d958a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d958a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d958a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d958a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d958a4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d958a8 jne 0x12d958b9 */
  if (!C.zf) goto L_12d958b9;
  /* 12d958aa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d958ae jge 0x12d958b9 */
  if ((C.sf==C.of)) goto L_12d958b9;
  /* 12d958b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d958b7 jmp 0x12d958c0 */
  goto L_12d958c0;
L_12d958b9:;
  /* 12d958b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d958c0:;
  /* 12d958c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d958c3 push eax */
  push32((uint32_t)(EAX));
  /* 12d958c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d958c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d958c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d958cb push edx */
  push32((uint32_t)(EDX));
  /* 12d958cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d958cf push eax */
  push32((uint32_t)(EAX));
  /* 12d958d0 call 0x12d957d0 */
  push32(0x12d958d5u); f_12d957d0();
  /* 12d958d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d958d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d958db mov esp, ebp */
  ESP = (EBP);
  /* 12d958dd pop ebp */
  EBP = (pop32());
  /* 12d958de ret  */
  ESPCHK(0x12d958a0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12d958e0 (30 bytes, 14 insns) */
void f_12d958e0(void) {
  FTRACE(0x12d958e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d958e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d958e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d958e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d958e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d958e8 push eax */
  push32((uint32_t)(EAX));
  /* 12d958e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d958ec push ecx */
  push32((uint32_t)(ECX));
  /* 12d958ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d958f0 push edx */
  push32((uint32_t)(EDX));
  /* 12d958f1 call 0x12d957d0 */
  push32(0x12d958f6u); f_12d957d0();
  /* 12d958f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d958f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d958fc pop ebp */
  EBP = (pop32());
  /* 12d958fd ret  */
  ESPCHK(0x12d958e0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12d95900 (72 bytes, 28 insns) */
void f_12d95900(void) {
  FTRACE(0x12d95900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95900 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95901 mov ebp, esp */
  EBP = (ESP);
  /* 12d95903 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95904 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95908 jne 0x12d95921 */
  if (!C.zf) goto L_12d95921;
  /* 12d9590a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9590e jg 0x12d95921 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d95921;
  /* 12d95910 jl 0x12d95918 */
  if ((C.sf!=C.of)) goto L_12d95918;
  /* 12d95912 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95916 jae 0x12d95921 */
  if (!C.cf) goto L_12d95921;
L_12d95918:;
  /* 12d95918 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12d9591f jmp 0x12d95928 */
  goto L_12d95928;
L_12d95921:;
  /* 12d95921 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d95928:;
  /* 12d95928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9592b push eax */
  push32((uint32_t)(EAX));
  /* 12d9592c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9592f push ecx */
  push32((uint32_t)(ECX));
  /* 12d95930 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95933 push edx */
  push32((uint32_t)(EDX));
  /* 12d95934 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95937 push eax */
  push32((uint32_t)(EAX));
  /* 12d95938 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9593b push ecx */
  push32((uint32_t)(ECX));
  /* 12d9593c call 0x12d95950 */
  push32(0x12d95941u); f_12d95950();
  /* 12d95941 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95944 mov esp, ebp */
  ESP = (EBP);
  /* 12d95946 pop ebp */
  EBP = (pop32());
  /* 12d95947 ret  */
  ESPCHK(0x12d95900u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12d95950 (242 bytes, 91 insns) */
void f_12d95950(void) {
  FTRACE(0x12d95950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95950 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95951 mov ebp, esp */
  EBP = (ESP);
  /* 12d95953 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95956 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9595c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95960 je 0x12d95984 */
  if (C.zf) goto L_12d95984;
  /* 12d95962 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95965 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12d95968 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9596b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9596e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d95971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95974 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d95976 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95979 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9597c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d9597e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d95981 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12d95984:;
  /* 12d95984 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95987 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12d9598a:;
  /* 12d9598a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d9598d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d9598f push ecx */
  push32((uint32_t)(ECX));
  /* 12d95990 push eax */
  push32((uint32_t)(EAX));
  /* 12d95991 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95994 push edx */
  push32((uint32_t)(EDX));
  /* 12d95995 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95998 push eax */
  push32((uint32_t)(EAX));
  /* 12d95999 call 0x12d998d0 */
  push32(0x12d9599eu); f_12d998d0();
  /* 12d9599e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d959a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d959a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d959a6 push edx */
  push32((uint32_t)(EDX));
  /* 12d959a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d959a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d959ab push eax */
  push32((uint32_t)(EAX));
  /* 12d959ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d959af push ecx */
  push32((uint32_t)(ECX));
  /* 12d959b0 call 0x12d99860 */
  push32(0x12d959b5u); f_12d99860();
  /* 12d959b5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d959b8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12d959bb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d959bf jbe 0x12d959d7 */
  if ((C.cf||C.zf)) goto L_12d959d7;
  /* 12d959c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d959c4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d959c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d959ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d959cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d959cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d959d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d959d5 jmp 0x12d959eb */
  goto L_12d959eb;
L_12d959d7:;
  /* 12d959d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d959da add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d959dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d959e0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d959e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d959e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d959e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12d959eb:;
  /* 12d959eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d959ef ja 0x12d9598a */
  if ((!C.cf&&!C.zf)) goto L_12d9598a;
  /* 12d959f1 jb 0x12d959f9 */
  if (C.cf) goto L_12d959f9;
  /* 12d959f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d959f7 ja 0x12d9598a */
  if ((!C.cf&&!C.zf)) goto L_12d9598a;
L_12d959f9:;
  /* 12d959f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d959fc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12d959ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95a02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95a05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d95a08:;
  /* 12d95a08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95a0b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d95a0d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12d95a10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95a13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95a16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d95a18 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12d95a1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95a1d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12d95a20 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12d95a22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95a25 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95a28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12d95a2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95a2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95a31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d95a34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95a37 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95a3a jb 0x12d95a08 */
  if (C.cf) goto L_12d95a08;
  /* 12d95a3c mov esp, ebp */
  ESP = (EBP);
  /* 12d95a3e pop ebp */
  EBP = (pop32());
  /* 12d95a3f ret 0x14 */
  ESPCHK(0x12d95950u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12d95a50 (31 bytes, 15 insns) */
void f_12d95a50(void) {
  FTRACE(0x12d95a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95a51 mov ebp, esp */
  EBP = (ESP);
  /* 12d95a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95a55 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d95a58 push eax */
  push32((uint32_t)(EAX));
  /* 12d95a59 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95a5c push ecx */
  push32((uint32_t)(ECX));
  /* 12d95a5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95a60 push edx */
  push32((uint32_t)(EDX));
  /* 12d95a61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95a64 push eax */
  push32((uint32_t)(EAX));
  /* 12d95a65 call 0x12d95950 */
  push32(0x12d95a6au); f_12d95950();
  /* 12d95a6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95a6d pop ebp */
  EBP = (pop32());
  /* 12d95a6e ret  */
  ESPCHK(0x12d95a50u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12d95a70 (123 bytes, 44 insns) */
void f_12d95a70(void) {
  FTRACE(0x12d95a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95a70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d95a74 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d95a7a je 0x12d95a90 */
  if (C.zf) goto L_12d95a90;
L_12d95a7c:;
  /* 12d95a7c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12d95a7e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d95a7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d95a81 je 0x12d95ac3 */
  if (C.zf) goto L_12d95ac3;
  /* 12d95a83 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d95a89 jne 0x12d95a7c */
  if (!C.zf) goto L_12d95a7c;
  /* 12d95a8b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12d95a90:;
  /* 12d95a90 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d95a92 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d95a97 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95a99 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d95a9c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d95a9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95aa1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d95aa6 je 0x12d95a90 */
  if (C.zf) goto L_12d95a90;
  /* 12d95aa8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d95aab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d95aad je 0x12d95ae1 */
  if (C.zf) goto L_12d95ae1;
  /* 12d95aaf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d95ab1 je 0x12d95ad7 */
  if (C.zf) goto L_12d95ad7;
  /* 12d95ab3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d95ab8 je 0x12d95acd */
  if (C.zf) goto L_12d95acd;
  /* 12d95aba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d95abf je 0x12d95ac3 */
  if (C.zf) goto L_12d95ac3;
  /* 12d95ac1 jmp 0x12d95a90 */
  goto L_12d95a90;
L_12d95ac3:;
  /* 12d95ac3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12d95ac6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d95aca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95acc ret  */
  ESPCHK(0x12d95a70u, _esp0);
  ESP += 4; return;
L_12d95acd:;
  /* 12d95acd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12d95ad0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d95ad4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95ad6 ret  */
  ESPCHK(0x12d95a70u, _esp0);
  ESP += 4; return;
L_12d95ad7:;
  /* 12d95ad7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12d95ada mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d95ade sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95ae0 ret  */
  ESPCHK(0x12d95a70u, _esp0);
  ESP += 4; return;
L_12d95ae1:;
  /* 12d95ae1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12d95ae4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d95ae8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95aea ret  */
  ESPCHK(0x12d95a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005af0 @ 0x12d95af0 (249 bytes, 93 insns) */
void f_12d95af0(void) {
  FTRACE(0x12d95af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95af1 mov ebp, esp */
  EBP = (ESP);
  /* 12d95af3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95af6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d95af7 push esi */
  push32((uint32_t)(ESI));
  /* 12d95af8 push edi */
  push32((uint32_t)(EDI));
  /* 12d95af9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12d95afc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12d95aff lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12d95b02 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12d95b05:;
  /* 12d95b05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95b09 jne 0x12d95b29 */
  if (!C.zf) goto L_12d95b29;
  /* 12d95b0b push 0x12da9d74 */
  push32((uint32_t)(0x12da9d74u));
  /* 12d95b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95b12 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12d95b14 push 0x12da9d68 */
  push32((uint32_t)(0x12da9d68u));
  /* 12d95b19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d95b1b call 0x12d91d00 */
  push32(0x12d95b20u); f_12d91d00();
  /* 12d95b20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95b23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95b26 jne 0x12d95b29 */
  if (!C.zf) goto L_12d95b29;
  /* 12d95b28 int3  */
  x86_unimpl("int3 @ 0x12d95b28");
L_12d95b29:;
  /* 12d95b29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d95b2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d95b2d jne 0x12d95b05 */
  if (!C.zf) goto L_12d95b05;
L_12d95b2f:;
  /* 12d95b2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95b33 jne 0x12d95b53 */
  if (!C.zf) goto L_12d95b53;
  /* 12d95b35 push 0x12da9d58 */
  push32((uint32_t)(0x12da9d58u));
  /* 12d95b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95b3c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12d95b3e push 0x12da9d68 */
  push32((uint32_t)(0x12da9d68u));
  /* 12d95b43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d95b45 call 0x12d91d00 */
  push32(0x12d95b4au); f_12d91d00();
  /* 12d95b4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95b4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95b50 jne 0x12d95b53 */
  if (!C.zf) goto L_12d95b53;
  /* 12d95b52 int3  */
  x86_unimpl("int3 @ 0x12d95b52");
L_12d95b53:;
  /* 12d95b53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d95b55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d95b57 jne 0x12d95b2f */
  if (!C.zf) goto L_12d95b2f;
  /* 12d95b59 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95b5c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12d95b63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95b69 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d95b6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95b6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95b72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12d95b74 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95b77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95b7a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12d95b7d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12d95b80 push edx */
  push32((uint32_t)(EDX));
  /* 12d95b81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95b84 push eax */
  push32((uint32_t)(EAX));
  /* 12d95b85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95b88 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95b89 call 0x12d99bd0 */
  push32(0x12d95b8eu); f_12d99bd0();
  /* 12d95b8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95b91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d95b94 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95b97 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d95b9a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95b9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95ba0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12d95ba3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95ba6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95baa jl 0x12d95bce */
  if ((C.sf!=C.of)) goto L_12d95bce;
  /* 12d95bac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95baf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d95bb1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12d95bb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d95bb6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d95bbc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12d95bbf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95bc2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d95bc4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95bc7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95bca mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12d95bcc jmp 0x12d95bdf */
  goto L_12d95bdf;
L_12d95bce:;
  /* 12d95bce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95bd1 push eax */
  push32((uint32_t)(EAX));
  /* 12d95bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95bd4 call 0x12d99950 */
  push32(0x12d95bd9u); f_12d99950();
  /* 12d95bd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95bdc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12d95bdf:;
  /* 12d95bdf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d95be2 pop edi */
  EDI = (pop32());
  /* 12d95be3 pop esi */
  ESI = (pop32());
  /* 12d95be4 pop ebx */
  EBX = (pop32());
  /* 12d95be5 mov esp, ebp */
  ESP = (EBP);
  /* 12d95be7 pop ebp */
  EBP = (pop32());
  /* 12d95be8 ret  */
  ESPCHK(0x12d95af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x12d95bf0 (7 bytes, 3 insns) */
void f_12d95bf0(void) {
  FTRACE(0x12d95bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95bf0 push edi */
  push32((uint32_t)(EDI));
  /* 12d95bf1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12d95bf5 jmp 0x12d95c61 */
  jmp_ind(0x12d95c61u); return;
}

/* FUN_10005c00 @ 0x12d95c00 (224 bytes, 84 insns) */
void f_12d95c00(void) {
  FTRACE(0x12d95c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95c00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12d95c04 push edi */
  push32((uint32_t)(EDI));
  /* 12d95c05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d95c0b je 0x12d95c1c */
  if (C.zf) goto L_12d95c1c;
L_12d95c0d:;
  /* 12d95c0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12d95c0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d95c10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d95c12 je 0x12d95c4f */
  if (C.zf) goto L_12d95c4f;
  /* 12d95c14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d95c1a jne 0x12d95c0d */
  if (!C.zf) goto L_12d95c0d;
L_12d95c1c:;
  /* 12d95c1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d95c1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d95c23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95c25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d95c28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d95c2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95c2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d95c32 je 0x12d95c1c */
  if (C.zf) goto L_12d95c1c;
  /* 12d95c34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12d95c37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d95c39 je 0x12d95c5e */
  if (C.zf) goto L_12d95c5e;
  /* 12d95c3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12d95c3d je 0x12d95c59 */
  if (C.zf) goto L_12d95c59;
  /* 12d95c3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d95c44 je 0x12d95c54 */
  if (C.zf) goto L_12d95c54;
  /* 12d95c46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d95c4b je 0x12d95c4f */
  if (C.zf) goto L_12d95c4f;
  /* 12d95c4d jmp 0x12d95c1c */
  goto L_12d95c1c;
L_12d95c4f:;
  /* 12d95c4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12d95c52 jmp 0x12d95c61 */
  goto L_12d95c61;
L_12d95c54:;
  /* 12d95c54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12d95c57 jmp 0x12d95c61 */
  goto L_12d95c61;
L_12d95c59:;
  /* 12d95c59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12d95c5c jmp 0x12d95c61 */
  goto L_12d95c61;
L_12d95c5e:;
  /* 12d95c5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12d95c61:;
  /* 12d95c61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d95c65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d95c6b je 0x12d95c86 */
  if (C.zf) goto L_12d95c86;
L_12d95c6d:;
  /* 12d95c6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12d95c6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12d95c70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12d95c72 je 0x12d95cd8 */
  if (C.zf) goto L_12d95cd8;
  /* 12d95c74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12d95c76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d95c77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12d95c7d jne 0x12d95c6d */
  if (!C.zf) goto L_12d95c6d;
  /* 12d95c7f jmp 0x12d95c86 */
  goto L_12d95c86;
L_12d95c81:;
  /* 12d95c81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d95c83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12d95c86:;
  /* 12d95c86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d95c8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12d95c8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95c8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d95c92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d95c94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d95c96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95c99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d95c9e je 0x12d95c81 */
  if (C.zf) goto L_12d95c81;
  /* 12d95ca0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12d95ca2 je 0x12d95cd8 */
  if (C.zf) goto L_12d95cd8;
  /* 12d95ca4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12d95ca6 je 0x12d95ccf */
  if (C.zf) goto L_12d95ccf;
  /* 12d95ca8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d95cae je 0x12d95cc2 */
  if (C.zf) goto L_12d95cc2;
  /* 12d95cb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d95cb6 je 0x12d95cba */
  if (C.zf) goto L_12d95cba;
  /* 12d95cb8 jmp 0x12d95c81 */
  goto L_12d95c81;
L_12d95cba:;
  /* 12d95cba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d95cbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d95cc0 pop edi */
  EDI = (pop32());
  /* 12d95cc1 ret  */
  ESPCHK(0x12d95c00u, _esp0);
  ESP += 4; return;
L_12d95cc2:;
  /* 12d95cc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12d95cc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d95cc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12d95ccd pop edi */
  EDI = (pop32());
  /* 12d95cce ret  */
  ESPCHK(0x12d95c00u, _esp0);
  ESP += 4; return;
L_12d95ccf:;
  /* 12d95ccf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12d95cd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d95cd6 pop edi */
  EDI = (pop32());
  /* 12d95cd7 ret  */
  ESPCHK(0x12d95c00u, _esp0);
  ESP += 4; return;
L_12d95cd8:;
  /* 12d95cd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12d95cda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d95cde pop edi */
  EDI = (pop32());
  /* 12d95cdf ret  */
  ESPCHK(0x12d95c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ce0 @ 0x12d95ce0 (243 bytes, 91 insns) */
void f_12d95ce0(void) {
  FTRACE(0x12d95ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12d95ce3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 12d95ce7 push esi */
  push32((uint32_t)(ESI));
  /* 12d95ce8 push edi */
  push32((uint32_t)(EDI));
  /* 12d95ce9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12d95cec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12d95cef:;
  /* 12d95cef cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95cf3 jne 0x12d95d13 */
  if (!C.zf) goto L_12d95d13;
  /* 12d95cf5 push 0x12da9d74 */
  push32((uint32_t)(0x12da9d74u));
  /* 12d95cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95cfc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12d95cfe push 0x12da9d84 */
  push32((uint32_t)(0x12da9d84u));
  /* 12d95d03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d95d05 call 0x12d91d00 */
  push32(0x12d95d0au); f_12d91d00();
  /* 12d95d0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95d0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95d10 jne 0x12d95d13 */
  if (!C.zf) goto L_12d95d13;
  /* 12d95d12 int3  */
  x86_unimpl("int3 @ 0x12d95d12");
L_12d95d13:;
  /* 12d95d13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d95d15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d95d17 jne 0x12d95cef */
  if (!C.zf) goto L_12d95cef;
L_12d95d19:;
  /* 12d95d19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95d1d jne 0x12d95d3d */
  if (!C.zf) goto L_12d95d3d;
  /* 12d95d1f push 0x12da9d58 */
  push32((uint32_t)(0x12da9d58u));
  /* 12d95d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95d26 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12d95d28 push 0x12da9d84 */
  push32((uint32_t)(0x12da9d84u));
  /* 12d95d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12d95d2f call 0x12d91d00 */
  push32(0x12d95d34u); f_12d91d00();
  /* 12d95d34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95d37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95d3a jne 0x12d95d3d */
  if (!C.zf) goto L_12d95d3d;
  /* 12d95d3c int3  */
  x86_unimpl("int3 @ 0x12d95d3c");
L_12d95d3d:;
  /* 12d95d3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d95d3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d95d41 jne 0x12d95d19 */
  if (!C.zf) goto L_12d95d19;
  /* 12d95d43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95d46 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12d95d4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95d50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95d53 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12d95d56 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95d59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95d5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12d95d5e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95d61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95d64 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12d95d67 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d95d6a push ecx */
  push32((uint32_t)(ECX));
  /* 12d95d6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d95d6e push edx */
  push32((uint32_t)(EDX));
  /* 12d95d6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95d72 push eax */
  push32((uint32_t)(EAX));
  /* 12d95d73 call 0x12d99bd0 */
  push32(0x12d95d78u); f_12d99bd0();
  /* 12d95d78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95d7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12d95d7e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95d81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d95d84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95d87 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95d8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12d95d8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95d90 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95d94 jl 0x12d95db8 */
  if ((C.sf!=C.of)) goto L_12d95db8;
  /* 12d95d96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95d99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d95d9b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d95d9e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d95da0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12d95da6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12d95da9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95dac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d95dae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95db1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95db4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12d95db6 jmp 0x12d95dc9 */
  goto L_12d95dc9;
L_12d95db8:;
  /* 12d95db8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12d95dbb push edx */
  push32((uint32_t)(EDX));
  /* 12d95dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12d95dbe call 0x12d99950 */
  push32(0x12d95dc3u); f_12d99950();
  /* 12d95dc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95dc6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12d95dc9:;
  /* 12d95dc9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12d95dcc pop edi */
  EDI = (pop32());
  /* 12d95dcd pop esi */
  ESI = (pop32());
  /* 12d95dce pop ebx */
  EBX = (pop32());
  /* 12d95dcf mov esp, ebp */
  ESP = (EBP);
  /* 12d95dd1 pop ebp */
  EBP = (pop32());
  /* 12d95dd2 ret  */
  ESPCHK(0x12d95ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005de0 @ 0x12d95de0 (47 bytes, 17 insns) */
void f_12d95de0(void) {
  FTRACE(0x12d95de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95de0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d95de1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95de6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12d95dea jb 0x12d95e00 */
  if (C.cf) goto L_12d95e00;
L_12d95dec:;
  /* 12d95dec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95df2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95df7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12d95df9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95dfe jae 0x12d95dec */
  if (!C.cf) goto L_12d95dec;
L_12d95e00:;
  /* 12d95e00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95e02 mov eax, esp */
  EAX = (ESP);
  /* 12d95e04 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12d95e06 mov esp, ecx */
  ESP = (ECX);
  /* 12d95e08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d95e0a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d95e0d push eax */
  push32((uint32_t)(EAX));
  /* 12d95e0e ret  */
  ESPCHK(0x12d95de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x12d95e10 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12d95e10(void) {
  FTRACE(0x12d95e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d95e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12d95e11 mov ebp, esp */
  EBP = (ESP);
  /* 12d95e13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95e16 push esi */
  push32((uint32_t)(ESI));
  /* 12d95e17 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e1b je 0x12d95e23 */
  if (C.zf) goto L_12d95e23;
  /* 12d95e1d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e21 jne 0x12d95e28 */
  if (!C.zf) goto L_12d95e28;
L_12d95e23:;
  /* 12d95e23 jmp 0x12d95ff8 */
  goto L_12d95ff8;
L_12d95e28:;
  /* 12d95e28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e2c je 0x12d95e44 */
  if (C.zf) goto L_12d95e44;
  /* 12d95e2e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e32 je 0x12d95e44 */
  if (C.zf) goto L_12d95e44;
  /* 12d95e34 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e38 je 0x12d95e44 */
  if (C.zf) goto L_12d95e44;
  /* 12d95e3a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e3e jne 0x12d95f21 */
  if (!C.zf) goto L_12d95f21;
L_12d95e44:;
  /* 12d95e44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d95e46 call 0x12d96640 */
  push32(0x12d95e4bu); f_12d96640();
  /* 12d95e4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95e4e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e52 je 0x12d95e5a */
  if (C.zf) goto L_12d95e5a;
  /* 12d95e54 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e58 jne 0x12d95e9f */
  if (!C.zf) goto L_12d95e9f;
L_12d95e5a:;
  /* 12d95e5a cmp dword ptr [0x12dad694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e61 jne 0x12d95e9f */
  if (!C.zf) goto L_12d95e9f;
  /* 12d95e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d95e65 push 0x12d96040 */
  push32((uint32_t)(0x12d96040u));
  /* 12d95e6a call dword ptr [0x12db0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0320))), 0x12d95e70u);
  /* 12d95e70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95e73 jne 0x12d95e81 */
  if (!C.zf) goto L_12d95e81;
  /* 12d95e75 mov dword ptr [0x12dad694], 1 */
  w32((uint32_t)(0x12dad694), (0x1u));
  /* 12d95e7f jmp 0x12d95e9f */
  goto L_12d95e9f;
L_12d95e81:;
  /* 12d95e81 call dword ptr [0x12db02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02d8))), 0x12d95e87u);
  /* 12d95e87 mov esi, eax */
  ESI = (EAX);
  /* 12d95e89 call 0x12d9ab20 */
  push32(0x12d95e8eu); f_12d9ab20();
  /* 12d95e8e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12d95e90 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d95e92 call 0x12d966e0 */
  push32(0x12d95e97u); f_12d966e0();
  /* 12d95e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95e9a jmp 0x12d95ff8 */
  goto L_12d95ff8;
L_12d95e9f:;
  /* 12d95e9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95ea2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d95ea5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d95ea8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d95eab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12d95eae cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95eb2 ja 0x12d95f12 */
  if ((!C.cf&&!C.zf)) goto L_12d95f12;
  /* 12d95eb4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d95eb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d95eb9 mov dl, byte ptr [eax + 0x12d9601f] */
  DL = (r8((uint32_t)(EAX + 0x12d9601f)));
  /* 12d95ebf jmp dword ptr [edx*4 + 0x12d9600b] */
  switch (EDX) {
    case 0: goto L_12d95ec6;
    case 1: goto L_12d95f00;
    case 2: goto L_12d95eda;
    case 3: goto L_12d95eed;
    case 4: goto L_12d95f12;
    default: x86_unimpl("switch@0x12d95ebf out of table"); return;
  }
L_12d95ec6:;
  /* 12d95ec6 mov ecx, dword ptr [0x12dad684] */
  ECX = (r32((uint32_t)(0x12dad684)));
  /* 12d95ecc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d95ecf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95ed2 mov dword ptr [0x12dad684], edx */
  w32((uint32_t)(0x12dad684), (EDX));
  /* 12d95ed8 jmp 0x12d95f12 */
  goto L_12d95f12;
L_12d95eda:;
  /* 12d95eda mov eax, dword ptr [0x12dad688] */
  EAX = (r32((uint32_t)(0x12dad688)));
  /* 12d95edf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d95ee2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95ee5 mov dword ptr [0x12dad688], ecx */
  w32((uint32_t)(0x12dad688), (ECX));
  /* 12d95eeb jmp 0x12d95f12 */
  goto L_12d95f12;
L_12d95eed:;
  /* 12d95eed mov edx, dword ptr [0x12dad68c] */
  EDX = (r32((uint32_t)(0x12dad68c)));
  /* 12d95ef3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12d95ef6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95ef9 mov dword ptr [0x12dad68c], eax */
  w32((uint32_t)(0x12dad68c), (EAX));
  /* 12d95efe jmp 0x12d95f12 */
  goto L_12d95f12;
L_12d95f00:;
  /* 12d95f00 mov ecx, dword ptr [0x12dad690] */
  ECX = (r32((uint32_t)(0x12dad690)));
  /* 12d95f06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d95f09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95f0c mov dword ptr [0x12dad690], edx */
  w32((uint32_t)(0x12dad690), (EDX));
L_12d95f12:;
  /* 12d95f12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d95f14 call 0x12d966e0 */
  push32(0x12d95f19u); f_12d966e0();
  /* 12d95f19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95f1c jmp 0x12d95ff3 */
  goto L_12d95ff3;
L_12d95f21:;
  /* 12d95f21 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95f25 je 0x12d95f38 */
  if (C.zf) goto L_12d95f38;
  /* 12d95f27 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95f2b je 0x12d95f38 */
  if (C.zf) goto L_12d95f38;
  /* 12d95f2d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95f31 je 0x12d95f38 */
  if (C.zf) goto L_12d95f38;
  /* 12d95f33 jmp 0x12d95ff8 */
  goto L_12d95ff8;
L_12d95f38:;
  /* 12d95f38 call 0x12d92680 */
  push32(0x12d95f3du); f_12d92680();
  /* 12d95f3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d95f40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95f43 cmp dword ptr [eax + 0x50], 0x12dabcc0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12dabcc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95f4a jne 0x12d95f95 */
  if (!C.zf) goto L_12d95f95;
  /* 12d95f4c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12d95f51 push 0x12da9d90 */
  push32((uint32_t)(0x12da9d90u));
  /* 12d95f56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d95f58 mov ecx, dword ptr [0x12dabd40] */
  ECX = (r32((uint32_t)(0x12dabd40)));
  /* 12d95f5e push ecx */
  push32((uint32_t)(ECX));
  /* 12d95f5f call 0x12d92c40 */
  push32(0x12d95f64u); f_12d92c40();
  /* 12d95f64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95f67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95f6a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12d95f6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95f70 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95f74 je 0x12d95f93 */
  if (C.zf) goto L_12d95f93;
  /* 12d95f76 mov ecx, dword ptr [0x12dabd40] */
  ECX = (r32((uint32_t)(0x12dabd40)));
  /* 12d95f7c push ecx */
  push32((uint32_t)(ECX));
  /* 12d95f7d push 0x12dabcc0 */
  push32((uint32_t)(0x12dabcc0u));
  /* 12d95f82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95f85 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12d95f88 push eax */
  push32((uint32_t)(EAX));
  /* 12d95f89 call 0x12d99520 */
  push32(0x12d95f8eu); f_12d99520();
  /* 12d95f8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95f91 jmp 0x12d95f95 */
  goto L_12d95f95;
L_12d95f93:;
  /* 12d95f93 jmp 0x12d95ff8 */
  goto L_12d95ff8;
L_12d95f95:;
  /* 12d95f95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95f98 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d95f9b push edx */
  push32((uint32_t)(EDX));
  /* 12d95f9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d95f9f push eax */
  push32((uint32_t)(EAX));
  /* 12d95fa0 call 0x12d96320 */
  push32(0x12d95fa5u); f_12d96320();
  /* 12d95fa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95fa8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d95fab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95faf jne 0x12d95fb3 */
  if (!C.zf) goto L_12d95fb3;
  /* 12d95fb1 jmp 0x12d95ff8 */
  goto L_12d95ff8;
L_12d95fb3:;
  /* 12d95fb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95fb6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12d95fb9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d95fbc:;
  /* 12d95fbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95fbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12d95fc2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95fc5 jne 0x12d95ff3 */
  if (!C.zf) goto L_12d95ff3;
  /* 12d95fc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95fca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d95fcd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12d95fd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d95fd3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95fd6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d95fd9 mov edx, dword ptr [0x12dabd44] */
  EDX = (r32((uint32_t)(0x12dabd44)));
  /* 12d95fdf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d95fe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d95fe5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12d95fe8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d95fea cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d95fed jb 0x12d95ff1 */
  if (C.cf) goto L_12d95ff1;
  /* 12d95fef jmp 0x12d95ff3 */
  goto L_12d95ff3;
L_12d95ff1:;
  /* 12d95ff1 jmp 0x12d95fbc */
  goto L_12d95fbc;
L_12d95ff3:;
  /* 12d95ff3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d95ff6 jmp 0x12d96006 */
  goto L_12d96006;
L_12d95ff8:;
  /* 12d95ff8 call 0x12d9ab10 */
  push32(0x12d95ffdu); f_12d9ab10();
  /* 12d95ffd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12d96003 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12d96006:;
  /* 12d96006 pop esi */
  ESI = (pop32());
  /* 12d96007 mov esp, ebp */
  ESP = (EBP);
  /* 12d96009 pop ebp */
  EBP = (pop32());
  /* 12d9600a ret  */
  ESPCHK(0x12d95e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x12d96040 (146 bytes, 45 insns) */
void f_12d96040(void) {
  FTRACE(0x12d96040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96040 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96041 mov ebp, esp */
  EBP = (ESP);
  /* 12d96043 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d96046 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d96048 call 0x12d96640 */
  push32(0x12d9604du); f_12d96640();
  /* 12d9604d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96050 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96054 jne 0x12d9606e */
  if (!C.zf) goto L_12d9606e;
  /* 12d96056 mov dword ptr [ebp - 8], 0x12dad684 */
  w32((uint32_t)(EBP + -0x8), (0x12dad684u));
  /* 12d9605d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96060 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12d96062 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12d96065 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d9606c jmp 0x12d96084 */
  goto L_12d96084;
L_12d9606e:;
  /* 12d9606e mov dword ptr [ebp - 8], 0x12dad688 */
  w32((uint32_t)(EBP + -0x8), (0x12dad688u));
  /* 12d96075 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96078 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12d9607a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9607d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12d96084:;
  /* 12d96084 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96088 jne 0x12d96098 */
  if (!C.zf) goto L_12d96098;
  /* 12d9608a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d9608c call 0x12d966e0 */
  push32(0x12d96091u); f_12d966e0();
  /* 12d96091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96096 jmp 0x12d960cc */
  goto L_12d960cc;
L_12d96098:;
  /* 12d96098 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9609c je 0x12d960bd */
  if (C.zf) goto L_12d960bd;
  /* 12d9609e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d960a1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12d960a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d960a9 call 0x12d966e0 */
  push32(0x12d960aeu); f_12d966e0();
  /* 12d960ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d960b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d960b4 push edx */
  push32((uint32_t)(EDX));
  /* 12d960b5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12d960b8u);
  /* 12d960b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d960bb jmp 0x12d960c7 */
  goto L_12d960c7;
L_12d960bd:;
  /* 12d960bd push 1 */
  push32((uint32_t)(0x1u));
  /* 12d960bf call 0x12d966e0 */
  push32(0x12d960c4u); f_12d966e0();
  /* 12d960c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d960c7:;
  /* 12d960c7 mov eax, 1 */
  EAX = (0x1u);
L_12d960cc:;
  /* 12d960cc mov esp, ebp */
  ESP = (EBP);
  /* 12d960ce pop ebp */
  EBP = (pop32());
  /* 12d960cf ret 4 */
  ESPCHK(0x12d96040u, _esp0);
  ESP += 8; return;
}

/* FUN_100060e0 @ 0x12d960e0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12d960e0(void) {
  FTRACE(0x12d960e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d960e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d960e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d960e3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d960e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12d960ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d960f0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12d960f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d960f6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d960f9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12d960fc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96100 ja 0x12d961ae */
  if ((!C.cf&&!C.zf)) goto L_12d961ae;
  /* 12d96106 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12d96109 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9610b mov dl, byte ptr [eax + 0x12d96302] */
  DL = (r8((uint32_t)(EAX + 0x12d96302)));
  /* 12d96111 jmp dword ptr [edx*4 + 0x12d962ea] */
  switch (EDX) {
    case 0: goto L_12d96118;
    case 1: goto L_12d96183;
    case 2: goto L_12d96169;
    case 3: goto L_12d96135;
    case 4: goto L_12d9614f;
    case 5: goto L_12d961ae;
    default: x86_unimpl("switch@0x12d96111 out of table"); return;
  }
L_12d96118:;
  /* 12d96118 mov dword ptr [ebp - 0x18], 0x12dad684 */
  w32((uint32_t)(EBP + -0x18), (0x12dad684u));
  /* 12d9611f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d96122 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d96124 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d96127 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9612a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9612d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d96130 jmp 0x12d961b6 */
  goto L_12d961b6;
L_12d96135:;
  /* 12d96135 mov dword ptr [ebp - 0x18], 0x12dad688 */
  w32((uint32_t)(EBP + -0x18), (0x12dad688u));
  /* 12d9613c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d9613f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d96141 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d96144 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d96147 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9614a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d9614d jmp 0x12d961b6 */
  goto L_12d961b6;
L_12d9614f:;
  /* 12d9614f mov dword ptr [ebp - 0x18], 0x12dad68c */
  w32((uint32_t)(EBP + -0x18), (0x12dad68cu));
  /* 12d96156 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d96159 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d9615b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d9615e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d96161 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96164 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d96167 jmp 0x12d961b6 */
  goto L_12d961b6;
L_12d96169:;
  /* 12d96169 mov dword ptr [ebp - 0x18], 0x12dad690 */
  w32((uint32_t)(EBP + -0x18), (0x12dad690u));
  /* 12d96170 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d96173 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d96175 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d96178 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d9617b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9617e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d96181 jmp 0x12d961b6 */
  goto L_12d961b6;
L_12d96183:;
  /* 12d96183 call 0x12d92680 */
  push32(0x12d96188u); f_12d92680();
  /* 12d96188 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9618b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9618e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d96191 push edx */
  push32((uint32_t)(EDX));
  /* 12d96192 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d96195 push eax */
  push32((uint32_t)(EAX));
  /* 12d96196 call 0x12d96320 */
  push32(0x12d9619bu); f_12d96320();
  /* 12d9619b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9619e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d961a1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12d961a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d961a7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d961a9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12d961ac jmp 0x12d961b6 */
  goto L_12d961b6;
L_12d961ae:;
  /* 12d961ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d961b1 jmp 0x12d962e6 */
  goto L_12d962e6;
L_12d961b6:;
  /* 12d961b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d961ba je 0x12d961c6 */
  if (C.zf) goto L_12d961c6;
  /* 12d961bc push 1 */
  push32((uint32_t)(0x1u));
  /* 12d961be call 0x12d96640 */
  push32(0x12d961c3u); f_12d96640();
  /* 12d961c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d961c6:;
  /* 12d961c6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d961ca jne 0x12d961e3 */
  if (!C.zf) goto L_12d961e3;
  /* 12d961cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d961d0 je 0x12d961dc */
  if (C.zf) goto L_12d961dc;
  /* 12d961d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d961d4 call 0x12d966e0 */
  push32(0x12d961d9u); f_12d966e0();
  /* 12d961d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d961dc:;
  /* 12d961dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d961de jmp 0x12d962e6 */
  goto L_12d962e6;
L_12d961e3:;
  /* 12d961e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d961e7 jne 0x12d96200 */
  if (!C.zf) goto L_12d96200;
  /* 12d961e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d961ed je 0x12d961f9 */
  if (C.zf) goto L_12d961f9;
  /* 12d961ef push 1 */
  push32((uint32_t)(0x1u));
  /* 12d961f1 call 0x12d966e0 */
  push32(0x12d961f6u); f_12d966e0();
  /* 12d961f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d961f9:;
  /* 12d961f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12d961fb call 0x12d92400 */
  push32(0x12d96200u); f_12d92400();
L_12d96200:;
  /* 12d96200 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96204 je 0x12d96212 */
  if (C.zf) goto L_12d96212;
  /* 12d96206 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9620a je 0x12d96212 */
  if (C.zf) goto L_12d96212;
  /* 12d9620c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96210 jne 0x12d9623e */
  if (!C.zf) goto L_12d9623e;
L_12d96212:;
  /* 12d96212 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96215 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12d96218 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d9621b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9621e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12d96225 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96229 jne 0x12d9623e */
  if (!C.zf) goto L_12d9623e;
  /* 12d9622b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9622e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12d96231 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d96234 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96237 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12d9623e:;
  /* 12d9623e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96242 jne 0x12d96280 */
  if (!C.zf) goto L_12d96280;
  /* 12d96244 mov eax, dword ptr [0x12dabd38] */
  EAX = (r32((uint32_t)(0x12dabd38)));
  /* 12d96249 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12d9624c jmp 0x12d96257 */
  goto L_12d96257;
L_12d9624e:;
  /* 12d9624e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d96251 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96254 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d96257:;
  /* 12d96257 mov edx, dword ptr [0x12dabd38] */
  EDX = (r32((uint32_t)(0x12dabd38)));
  /* 12d9625d add edx, dword ptr [0x12dabd3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12dabd3c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96263 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96266 jge 0x12d9627e */
  if ((C.sf==C.of)) goto L_12d9627e;
  /* 12d96268 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d9626b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9626e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96271 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12d96274 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12d9627c jmp 0x12d9624e */
  goto L_12d9624e;
L_12d9627e:;
  /* 12d9627e jmp 0x12d96289 */
  goto L_12d96289;
L_12d96280:;
  /* 12d96280 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d96283 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12d96289:;
  /* 12d96289 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9628d je 0x12d96299 */
  if (C.zf) goto L_12d96299;
  /* 12d9628f push 1 */
  push32((uint32_t)(0x1u));
  /* 12d96291 call 0x12d966e0 */
  push32(0x12d96296u); f_12d966e0();
  /* 12d96296 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d96299:;
  /* 12d96299 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9629d jne 0x12d962b0 */
  if (!C.zf) goto L_12d962b0;
  /* 12d9629f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d962a2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12d962a5 push edx */
  push32((uint32_t)(EDX));
  /* 12d962a6 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d962a8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12d962abu);
  /* 12d962ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d962ae jmp 0x12d962ba */
  goto L_12d962ba;
L_12d962b0:;
  /* 12d962b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d962b3 push eax */
  push32((uint32_t)(EAX));
  /* 12d962b4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12d962b7u);
  /* 12d962b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d962ba:;
  /* 12d962ba cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d962be je 0x12d962cc */
  if (C.zf) goto L_12d962cc;
  /* 12d962c0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d962c4 je 0x12d962cc */
  if (C.zf) goto L_12d962cc;
  /* 12d962c6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d962ca jne 0x12d962e4 */
  if (!C.zf) goto L_12d962e4;
L_12d962cc:;
  /* 12d962cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d962cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d962d2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12d962d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d962d9 jne 0x12d962e4 */
  if (!C.zf) goto L_12d962e4;
  /* 12d962db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d962de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d962e1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12d962e4:;
  /* 12d962e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d962e6:;
  /* 12d962e6 mov esp, ebp */
  ESP = (EBP);
  /* 12d962e8 pop ebp */
  EBP = (pop32());
  /* 12d962e9 ret  */
  ESPCHK(0x12d960e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006320 @ 0x12d96320 (91 bytes, 35 insns) */
void f_12d96320(void) {
  FTRACE(0x12d96320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96320 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96321 mov ebp, esp */
  EBP = (ESP);
  /* 12d96323 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96324 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96327 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d9632a:;
  /* 12d9632a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d9632d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12d96330 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96333 je 0x12d96353 */
  if (C.zf) goto L_12d96353;
  /* 12d96335 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96338 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9633b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d9633e mov ecx, dword ptr [0x12dabd44] */
  ECX = (r32((uint32_t)(0x12dabd44)));
  /* 12d96344 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d96347 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9634a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9634c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9634f jae 0x12d96353 */
  if (!C.cf) goto L_12d96353;
  /* 12d96351 jmp 0x12d9632a */
  goto L_12d9632a;
L_12d96353:;
  /* 12d96353 mov eax, dword ptr [0x12dabd44] */
  EAX = (r32((uint32_t)(0x12dabd44)));
  /* 12d96358 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d9635b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d9635e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96360 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96363 jae 0x12d96375 */
  if (!C.cf) goto L_12d96375;
  /* 12d96365 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96368 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12d9636b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9636e jne 0x12d96375 */
  if (!C.zf) goto L_12d96375;
  /* 12d96370 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96373 jmp 0x12d96377 */
  goto L_12d96377;
L_12d96375:;
  /* 12d96375 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d96377:;
  /* 12d96377 mov esp, ebp */
  ESP = (EBP);
  /* 12d96379 pop ebp */
  EBP = (pop32());
  /* 12d9637a ret  */
  ESPCHK(0x12d96320u, _esp0);
  ESP += 4; return;
}

/* FUN_10006380 @ 0x12d96380 (13 bytes, 6 insns) */
void f_12d96380(void) {
  FTRACE(0x12d96380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96380 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96381 mov ebp, esp */
  EBP = (ESP);
  /* 12d96383 call 0x12d92680 */
  push32(0x12d96388u); f_12d92680();
  /* 12d96388 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9638b pop ebp */
  EBP = (pop32());
  /* 12d9638c ret  */
  ESPCHK(0x12d96380u, _esp0);
  ESP += 4; return;
}

/* FUN_10006390 @ 0x12d96390 (13 bytes, 6 insns) */
void f_12d96390(void) {
  FTRACE(0x12d96390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96390 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96391 mov ebp, esp */
  EBP = (ESP);
  /* 12d96393 call 0x12d92680 */
  push32(0x12d96398u); f_12d92680();
  /* 12d96398 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9639b pop ebp */
  EBP = (pop32());
  /* 12d9639c ret  */
  ESPCHK(0x12d96390u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x12d963a0 (187 bytes, 54 insns) */
void f_12d963a0(void) {
  FTRACE(0x12d963a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d963a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d963a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d963a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d963a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d963ad cmp dword ptr [0x12dad698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d963b4 jne 0x12d96413 */
  if (!C.zf) goto L_12d96413;
  /* 12d963b6 push 0x12da91bc */
  push32((uint32_t)(0x12da91bcu));
  /* 12d963bb call dword ptr [0x12db02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02a8))), 0x12d963c1u);
  /* 12d963c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d963c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d963c8 je 0x12d963e7 */
  if (C.zf) goto L_12d963e7;
  /* 12d963ca push 0x12da9dc0 */
  push32((uint32_t)(0x12da9dc0u));
  /* 12d963cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d963d2 push eax */
  push32((uint32_t)(EAX));
  /* 12d963d3 call dword ptr [0x12db02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02a4))), 0x12d963d9u);
  /* 12d963d9 mov dword ptr [0x12dad698], eax */
  w32((uint32_t)(0x12dad698), (EAX));
  /* 12d963de cmp dword ptr [0x12dad698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d963e5 jne 0x12d963eb */
  if (!C.zf) goto L_12d963eb;
L_12d963e7:;
  /* 12d963e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d963e9 jmp 0x12d96457 */
  goto L_12d96457;
L_12d963eb:;
  /* 12d963eb push 0x12da9db0 */
  push32((uint32_t)(0x12da9db0u));
  /* 12d963f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d963f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d963f4 call dword ptr [0x12db02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02a4))), 0x12d963fau);
  /* 12d963fa mov dword ptr [0x12dad69c], eax */
  w32((uint32_t)(0x12dad69c), (EAX));
  /* 12d963ff push 0x12da9d9c */
  push32((uint32_t)(0x12da9d9cu));
  /* 12d96404 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d96407 push edx */
  push32((uint32_t)(EDX));
  /* 12d96408 call dword ptr [0x12db02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02a4))), 0x12d9640eu);
  /* 12d9640e mov dword ptr [0x12dad6a0], eax */
  w32((uint32_t)(0x12dad6a0), (EAX));
L_12d96413:;
  /* 12d96413 cmp dword ptr [0x12dad69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d9641a je 0x12d96425 */
  if (C.zf) goto L_12d96425;
  /* 12d9641c call dword ptr [0x12dad69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad69c))), 0x12d96422u);
  /* 12d96422 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d96425:;
  /* 12d96425 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96429 je 0x12d96441 */
  if (C.zf) goto L_12d96441;
  /* 12d9642b cmp dword ptr [0x12dad6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12dad6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d96432 je 0x12d96441 */
  if (C.zf) goto L_12d96441;
  /* 12d96434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96437 push eax */
  push32((uint32_t)(EAX));
  /* 12d96438 call dword ptr [0x12dad6a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad6a0))), 0x12d9643eu);
  /* 12d9643e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d96441:;
  /* 12d96441 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d96444 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96445 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d96448 push edx */
  push32((uint32_t)(EDX));
  /* 12d96449 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d9644c push eax */
  push32((uint32_t)(EAX));
  /* 12d9644d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d96450 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96451 call dword ptr [0x12dad698] */
  call_ind((uint32_t)(r32((uint32_t)(0x12dad698))), 0x12d96457u);
L_12d96457:;
  /* 12d96457 mov esp, ebp */
  ESP = (EBP);
  /* 12d96459 pop ebp */
  EBP = (pop32());
  /* 12d9645a ret  */
  ESPCHK(0x12d963a0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12d96460 (254 bytes, 109 insns) */
void f_12d96460(void) {
  FTRACE(0x12d96460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96460 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12d96464 push edi */
  push32((uint32_t)(EDI));
  /* 12d96465 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d96467 je 0x12d964e3 */
  if (C.zf) goto L_12d964e3;
  /* 12d96469 push esi */
  push32((uint32_t)(ESI));
  /* 12d9646a push ebx */
  push32((uint32_t)(EBX));
  /* 12d9646b mov ebx, ecx */
  EBX = (ECX);
  /* 12d9646d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12d96471 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12d96477 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12d9647b jne 0x12d96484 */
  if (!C.zf) goto L_12d96484;
  /* 12d9647d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d96480 jne 0x12d964f1 */
  if (!C.zf) goto L_12d964f1;
  /* 12d96482 jmp 0x12d964a5 */
  goto L_12d964a5;
L_12d96484:;
  /* 12d96484 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d96486 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d96487 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d96489 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d9648a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d9648b je 0x12d964b2 */
  if (C.zf) goto L_12d964b2;
  /* 12d9648d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d9648f je 0x12d964ba */
  if (C.zf) goto L_12d964ba;
  /* 12d96491 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12d96497 jne 0x12d96484 */
  if (!C.zf) goto L_12d96484;
  /* 12d96499 mov ebx, ecx */
  EBX = (ECX);
  /* 12d9649b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d9649e jne 0x12d964f1 */
  if (!C.zf) goto L_12d964f1;
L_12d964a0:;
  /* 12d964a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12d964a3 je 0x12d964b2 */
  if (C.zf) goto L_12d964b2;
L_12d964a5:;
  /* 12d964a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12d964a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12d964a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d964aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d964ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12d964ad je 0x12d964de */
  if (C.zf) goto L_12d964de;
  /* 12d964af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12d964b0 jne 0x12d964a5 */
  if (!C.zf) goto L_12d964a5;
L_12d964b2:;
  /* 12d964b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d964b6 pop ebx */
  EBX = (pop32());
  /* 12d964b7 pop esi */
  ESI = (pop32());
  /* 12d964b8 pop edi */
  EDI = (pop32());
  /* 12d964b9 ret  */
  ESPCHK(0x12d96460u, _esp0);
  ESP += 4; return;
L_12d964ba:;
  /* 12d964ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d964c0 je 0x12d964d4 */
  if (C.zf) goto L_12d964d4;
L_12d964c2:;
  /* 12d964c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d964c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12d964c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d964c6 je 0x12d96556 */
  if (C.zf) goto L_12d96556;
  /* 12d964cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12d964d2 jne 0x12d964c2 */
  if (!C.zf) goto L_12d964c2;
L_12d964d4:;
  /* 12d964d4 mov ebx, ecx */
  EBX = (ECX);
  /* 12d964d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12d964d9 jne 0x12d96547 */
  if (!C.zf) goto L_12d96547;
L_12d964db:;
  /* 12d964db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12d964dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12d964de:;
  /* 12d964de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12d964df jne 0x12d964db */
  if (!C.zf) goto L_12d964db;
  /* 12d964e1 pop ebx */
  EBX = (pop32());
  /* 12d964e2 pop esi */
  ESI = (pop32());
L_12d964e3:;
  /* 12d964e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12d964e7 pop edi */
  EDI = (pop32());
  /* 12d964e8 ret  */
  ESPCHK(0x12d96460u, _esp0);
  ESP += 4; return;
L_12d964e9:;
  /* 12d964e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d964eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d964ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d964ef je 0x12d964a0 */
  if (C.zf) goto L_12d964a0;
L_12d964f1:;
  /* 12d964f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12d964f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12d964f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d964fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d964fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12d964ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12d96501 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96504 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12d96509 je 0x12d964e9 */
  if (C.zf) goto L_12d964e9;
  /* 12d9650b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12d9650d je 0x12d9653b */
  if (C.zf) goto L_12d9653b;
  /* 12d9650f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12d96511 je 0x12d96531 */
  if (C.zf) goto L_12d96531;
  /* 12d96513 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12d96519 je 0x12d96527 */
  if (C.zf) goto L_12d96527;
  /* 12d9651b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12d96521 jne 0x12d964e9 */
  if (!C.zf) goto L_12d964e9;
  /* 12d96523 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d96525 jmp 0x12d9653f */
  goto L_12d9653f;
L_12d96527:;
  /* 12d96527 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d9652d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d9652f jmp 0x12d9653f */
  goto L_12d9653f;
L_12d96531:;
  /* 12d96531 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d96537 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12d96539 jmp 0x12d9653f */
  goto L_12d9653f;
L_12d9653b:;
  /* 12d9653b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12d9653d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12d9653f:;
  /* 12d9653f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d96542 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d96544 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d96545 je 0x12d96551 */
  if (C.zf) goto L_12d96551;
L_12d96547:;
  /* 12d96547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d96549:;
  /* 12d96549 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12d9654b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12d9654e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12d9654f jne 0x12d96549 */
  if (!C.zf) goto L_12d96549;
L_12d96551:;
  /* 12d96551 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12d96554 jne 0x12d964db */
  if (!C.zf) goto L_12d964db;
L_12d96556:;
  /* 12d96556 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12d9655a pop ebx */
  EBX = (pop32());
  /* 12d9655b pop esi */
  ESI = (pop32());
  /* 12d9655c pop edi */
  EDI = (pop32());
  /* 12d9655d ret  */
  ESPCHK(0x12d96460u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x12d96560 (55 bytes, 16 insns) */
void f_12d96560(void) {
  FTRACE(0x12d96560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d96560 push ebp */
  push32((uint32_t)(EBP));
  /* 12d96561 mov ebp, esp */
  EBP = (ESP);
  /* 12d96563 mov eax, dword ptr [0x12dabc44] */
  EAX = (r32((uint32_t)(0x12dabc44)));
  /* 12d96568 push eax */
  push32((uint32_t)(EAX));
  /* 12d96569 call dword ptr [0x12db0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0324))), 0x12d9656fu);
  /* 12d9656f mov ecx, dword ptr [0x12dabc34] */
  ECX = (r32((uint32_t)(0x12dabc34)));
  /* 12d96575 push ecx */
  push32((uint32_t)(ECX));
  /* 12d96576 call dword ptr [0x12db0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0324))), 0x12d9657cu);
  /* 12d9657c mov edx, dword ptr [0x12dabc24] */
  EDX = (r32((uint32_t)(0x12dabc24)));
  /* 12d96582 push edx */
  push32((uint32_t)(EDX));
  /* 12d96583 call dword ptr [0x12db0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0324))), 0x12d96589u);
  /* 12d96589 mov eax, dword ptr [0x12dabc04] */
  EAX = (r32((uint32_t)(0x12dabc04)));
  /* 12d9658e push eax */
  push32((uint32_t)(EAX));
  /* 12d9658f call dword ptr [0x12db0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db0324))), 0x12d96595u);
  /* 12d96595 pop ebp */
  EBP = (pop32());
  /* 12d96596 ret  */
  ESPCHK(0x12d96560u, _esp0);
  ESP += 4; return;
}

/* FUN_100065a0 @ 0x12d965a0 (159 bytes, 47 insns) */
void f_12d965a0(void) {
  FTRACE(0x12d965a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d965a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d965a1 mov ebp, esp */
  EBP = (ESP);
  /* 12d965a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d965a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d965ab jmp 0x12d965b6 */
  goto L_12d965b6;
L_12d965ad:;
  /* 12d965ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d965b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d965b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d965b6:;
  /* 12d965b6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d965ba jge 0x12d96609 */
  if ((C.sf==C.of)) goto L_12d96609;
  /* 12d965bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d965bf cmp dword ptr [ecx*4 + 0x12dabc00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12dabc00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d965c7 je 0x12d96607 */
  if (C.zf) goto L_12d96607;
  /* 12d965c9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d965cd je 0x12d96607 */
  if (C.zf) goto L_12d96607;
  /* 12d965cf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d965d3 je 0x12d96607 */
  if (C.zf) goto L_12d96607;
  /* 12d965d5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d965d9 je 0x12d96607 */
  if (C.zf) goto L_12d96607;
  /* 12d965db cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d965df je 0x12d96607 */
  if (C.zf) goto L_12d96607;
  /* 12d965e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d965e4 mov eax, dword ptr [edx*4 + 0x12dabc00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12dabc00)));
  /* 12d965eb push eax */
  push32((uint32_t)(EAX));
  /* 12d965ec call dword ptr [0x12db02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ec))), 0x12d965f2u);
  /* 12d965f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12d965f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d965f7 mov edx, dword ptr [ecx*4 + 0x12dabc00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12dabc00)));
  /* 12d965fe push edx */
  push32((uint32_t)(EDX));
  /* 12d965ff call 0x12d936d0 */
  push32(0x12d96604u); f_12d936d0();
  /* 12d96604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d96607:;
  /* 12d96607 jmp 0x12d965ad */
  goto L_12d965ad;
L_12d96609:;
  /* 12d96609 mov eax, dword ptr [0x12dabc24] */
  EAX = (r32((uint32_t)(0x12dabc24)));
  /* 12d9660e push eax */
  push32((uint32_t)(EAX));
  /* 12d9660f call dword ptr [0x12db02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ec))), 0x12d96615u);
  /* 12d96615 mov ecx, dword ptr [0x12dabc34] */
  ECX = (r32((uint32_t)(0x12dabc34)));
  /* 12d9661b push ecx */
  push32((uint32_t)(ECX));
  /* 12d9661c call dword ptr [0x12db02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ec))), 0x12d96622u);
  /* 12d96622 mov edx, dword ptr [0x12dabc44] */
  EDX = (r32((uint32_t)(0x12dabc44)));
  /* 12d96628 push edx */
  push32((uint32_t)(EDX));
  /* 12d96629 call dword ptr [0x12db02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ec))), 0x12d9662fu);
  /* 12d9662f mov eax, dword ptr [0x12dabc04] */
  EAX = (r32((uint32_t)(0x12dabc04)));
  /* 12d96634 push eax */
  push32((uint32_t)(EAX));
  /* 12d96635 call dword ptr [0x12db02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12db02ec))), 0x12d9663bu);
  /* 12d9663b mov esp, ebp */
  ESP = (EBP);
  /* 12d9663d pop ebp */
  EBP = (pop32());
  /* 12d9663e ret  */
  ESPCHK(0x12d965a0u, _esp0);
  ESP += 4; return;
}

