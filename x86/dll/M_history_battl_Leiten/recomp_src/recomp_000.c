#include "recomp.h"

/* thunk_FUN_10001510 @ 0x12981005 (5 bytes, 1 insns) */
void f_12981005(void) {
  FTRACE(0x12981005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981005 jmp 0x12981510 */
  f_12981510(); return;
}

/* OnInit @ 0x1298100a (5 bytes, 1 insns) */
void f_1298100a(void) {
  FTRACE(0x1298100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298100a jmp 0x129811b0 */
  f_129811b0(); return;
}

/* thunk_FUN_10001130 @ 0x1298100f (5 bytes, 1 insns) */
void f_1298100f(void) {
  FTRACE(0x1298100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298100f jmp 0x12981130 */
  f_12981130(); return;
}

/* thunk_FUN_10001050 @ 0x12981014 (5 bytes, 1 insns) */
void f_12981014(void) {
  FTRACE(0x12981014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981014 jmp 0x12981050 */
  f_12981050(); return;
}

/* thunk_FUN_100010b0 @ 0x12981019 (5 bytes, 1 insns) */
void f_12981019(void) {
  FTRACE(0x12981019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981019 jmp 0x129810b0 */
  f_129810b0(); return;
}

/* ProcessScenary @ 0x1298101e (5 bytes, 1 insns) */
void f_1298101e(void) {
  FTRACE(0x1298101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298101e jmp 0x129812e0 */
  f_129812e0(); return;
}

/* FUN_10001050 @ 0x12981050 (67 bytes, 26 insns) */
void f_12981050(void) {
  FTRACE(0x12981050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981050 push ebp */
  push32((uint32_t)(EBP));
  /* 12981051 mov ebp, esp */
  EBP = (ESP);
  /* 12981053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12981056 push ebx */
  push32((uint32_t)(EBX));
  /* 12981057 push esi */
  push32((uint32_t)(ESI));
  /* 12981058 push edi */
  push32((uint32_t)(EDI));
  /* 12981059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1298105c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12981061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12981066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12981068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298106b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298106e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981072 je 0x12981076 */
  if (C.zf) goto L_12981076;
  /* 12981074 jmp 0x1298107b */
  goto L_1298107b;
L_12981076:;
  /* 12981076 call 0x1298100a */
  push32(0x1298107bu); f_1298100a();
L_1298107b:;
  /* 1298107b mov eax, 1 */
  EAX = (0x1u);
  /* 12981080 pop edi */
  EDI = (pop32());
  /* 12981081 pop esi */
  ESI = (pop32());
  /* 12981082 pop ebx */
  EBX = (pop32());
  /* 12981083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981088 call 0x129815a0 */
  push32(0x1298108du); f_129815a0();
  /* 1298108d mov esp, ebp */
  ESP = (EBP);
  /* 1298108f pop ebp */
  EBP = (pop32());
  /* 12981090 ret 0xc */
  ESPCHK(0x12981050u, _esp0);
  ESP += 16; return;
}

/* FUN_100010b0 @ 0x129810b0 (92 bytes, 34 insns) */
void f_129810b0(void) {
  FTRACE(0x129810b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129810b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129810b1 mov ebp, esp */
  EBP = (ESP);
  /* 129810b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129810b6 push ebx */
  push32((uint32_t)(EBX));
  /* 129810b7 push esi */
  push32((uint32_t)(ESI));
  /* 129810b8 push edi */
  push32((uint32_t)(EDI));
  /* 129810b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129810bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129810c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129810c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129810c8 mov esi, esp */
  ESI = (ESP);
  /* 129810ca call dword ptr [0x129b03bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03bc))), 0x129810d0u);
  /* 129810d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129810d2 call 0x129815a0 */
  push32(0x129810d7u); f_129815a0();
  /* 129810d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129810d9 jne 0x129810ec */
  if (!C.zf) goto L_129810ec;
  /* 129810db mov esi, esp */
  ESI = (ESP);
  /* 129810dd call dword ptr [0x129b03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03c0))), 0x129810e3u);
  /* 129810e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129810e5 call 0x129815a0 */
  push32(0x129810eau); f_129815a0();
  /* 129810ea jmp 0x129810fb */
  goto L_129810fb;
L_129810ec:;
  /* 129810ec mov esi, esp */
  ESI = (ESP);
  /* 129810ee call dword ptr [0x129b03c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03c4))), 0x129810f4u);
  /* 129810f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129810f6 call 0x129815a0 */
  push32(0x129810fbu); f_129815a0();
L_129810fb:;
  /* 129810fb pop edi */
  EDI = (pop32());
  /* 129810fc pop esi */
  ESI = (pop32());
  /* 129810fd pop ebx */
  EBX = (pop32());
  /* 129810fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981101 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981103 call 0x129815a0 */
  push32(0x12981108u); f_129815a0();
  /* 12981108 mov esp, ebp */
  ESP = (EBP);
  /* 1298110a pop ebp */
  EBP = (pop32());
  /* 1298110b ret  */
  ESPCHK(0x129810b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001130 @ 0x12981130 (93 bytes, 34 insns) */
void f_12981130(void) {
  FTRACE(0x12981130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981130 push ebp */
  push32((uint32_t)(EBP));
  /* 12981131 mov ebp, esp */
  EBP = (ESP);
  /* 12981133 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12981136 push ebx */
  push32((uint32_t)(EBX));
  /* 12981137 push esi */
  push32((uint32_t)(ESI));
  /* 12981138 push edi */
  push32((uint32_t)(EDI));
  /* 12981139 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1298113c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12981141 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12981146 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12981148 mov esi, esp */
  ESI = (ESP);
  /* 1298114a call dword ptr [0x129b03bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03bc))), 0x12981150u);
  /* 12981150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981152 call 0x129815a0 */
  push32(0x12981157u); f_129815a0();
  /* 12981157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298115a jne 0x1298116d */
  if (!C.zf) goto L_1298116d;
  /* 1298115c mov esi, esp */
  ESI = (ESP);
  /* 1298115e call dword ptr [0x129b03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03c0))), 0x12981164u);
  /* 12981164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981166 call 0x129815a0 */
  push32(0x1298116bu); f_129815a0();
  /* 1298116b jmp 0x1298117c */
  goto L_1298117c;
L_1298116d:;
  /* 1298116d mov esi, esp */
  ESI = (ESP);
  /* 1298116f call dword ptr [0x129b03c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03c4))), 0x12981175u);
  /* 12981175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981177 call 0x129815a0 */
  push32(0x1298117cu); f_129815a0();
L_1298117c:;
  /* 1298117c pop edi */
  EDI = (pop32());
  /* 1298117d pop esi */
  ESI = (pop32());
  /* 1298117e pop ebx */
  EBX = (pop32());
  /* 1298117f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981182 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981184 call 0x129815a0 */
  push32(0x12981189u); f_129815a0();
  /* 12981189 mov esp, ebp */
  ESP = (EBP);
  /* 1298118b pop ebp */
  EBP = (pop32());
  /* 1298118c ret  */
  ESPCHK(0x12981130u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b0 @ 0x129811b0 (233 bytes, 66 insns) */
void f_129811b0(void) {
  FTRACE(0x129811b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129811b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129811b1 mov ebp, esp */
  EBP = (ESP);
  /* 129811b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129811b6 push ebx */
  push32((uint32_t)(EBX));
  /* 129811b7 push esi */
  push32((uint32_t)(ESI));
  /* 129811b8 push edi */
  push32((uint32_t)(EDI));
  /* 129811b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129811bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129811c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129811c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129811c8 mov esi, esp */
  ESI = (ESP);
  /* 129811ca push 0x129a9024 */
  push32((uint32_t)(0x129a9024u));
  /* 129811cf push 0x129ae410 */
  push32((uint32_t)(0x129ae410u));
  /* 129811d4 call dword ptr [0x129b03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03b4))), 0x129811dau);
  /* 129811da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129811dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129811df call 0x129815a0 */
  push32(0x129811e4u); f_129815a0();
  /* 129811e4 mov esi, esp */
  ESI = (ESP);
  /* 129811e6 push 0x129a901c */
  push32((uint32_t)(0x129a901cu));
  /* 129811eb push 0x129ae418 */
  push32((uint32_t)(0x129ae418u));
  /* 129811f0 call dword ptr [0x129b03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03b4))), 0x129811f6u);
  /* 129811f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129811f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129811fb call 0x129815a0 */
  push32(0x12981200u); f_129815a0();
  /* 12981200 mov esi, esp */
  ESI = (ESP);
  /* 12981202 push 1 */
  push32((uint32_t)(0x1u));
  /* 12981204 push 0 */
  push32((uint32_t)(0x0u));
  /* 12981206 call dword ptr [0x129b03b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03b8))), 0x1298120cu);
  /* 1298120c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298120f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981211 call 0x129815a0 */
  push32(0x12981216u); f_129815a0();
  /* 12981216 mov esi, esp */
  ESI = (ESP);
  /* 12981218 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298121a push 1 */
  push32((uint32_t)(0x1u));
  /* 1298121c call dword ptr [0x129b03b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03b8))), 0x12981222u);
  /* 12981222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981225 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981227 call 0x129815a0 */
  push32(0x1298122cu); f_129815a0();
  /* 1298122c mov esi, esp */
  ESI = (ESP);
  /* 1298122e push 7 */
  push32((uint32_t)(0x7u));
  /* 12981230 push 3 */
  push32((uint32_t)(0x3u));
  /* 12981232 call dword ptr [0x129b03b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03b8))), 0x12981238u);
  /* 12981238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298123b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298123d call 0x129815a0 */
  push32(0x12981242u); f_129815a0();
  /* 12981242 mov dword ptr [0x129ae3e0], 0 */
  w32((uint32_t)(0x129ae3e0), (0x0u));
  /* 1298124c jmp 0x1298125b */
  goto L_1298125b;
L_1298124e:;
  /* 1298124e mov eax, dword ptr [0x129ae3e0] */
  EAX = (r32((uint32_t)(0x129ae3e0)));
  /* 12981253 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12981256 mov dword ptr [0x129ae3e0], eax */
  w32((uint32_t)(0x129ae3e0), (EAX));
L_1298125b:;
  /* 1298125b cmp dword ptr [0x129ae3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x129ae3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981262 jge 0x12981288 */
  if ((C.sf==C.of)) goto L_12981288;
  /* 12981264 mov ecx, dword ptr [0x129ae3e0] */
  ECX = (r32((uint32_t)(0x129ae3e0)));
  /* 1298126a mov dword ptr [ecx*4 + 0x129ae3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x129ae3e4), (0x0u));
  /* 12981275 mov edx, dword ptr [0x129ae3e0] */
  EDX = (r32((uint32_t)(0x129ae3e0)));
  /* 1298127b mov dword ptr [edx*4 + 0x129ae3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x129ae3f8), (0x0u));
  /* 12981286 jmp 0x1298124e */
  goto L_1298124e;
L_12981288:;
  /* 12981288 pop edi */
  EDI = (pop32());
  /* 12981289 pop esi */
  ESI = (pop32());
  /* 1298128a pop ebx */
  EBX = (pop32());
  /* 1298128b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298128e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981290 call 0x129815a0 */
  push32(0x12981295u); f_129815a0();
  /* 12981295 mov esp, ebp */
  ESP = (EBP);
  /* 12981297 pop ebp */
  EBP = (pop32());
  /* 12981298 ret  */
  ESPCHK(0x129811b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100012e0 @ 0x129812e0 (440 bytes, 135 insns) */
void f_129812e0(void) {
  FTRACE(0x129812e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129812e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129812e1 mov ebp, esp */
  EBP = (ESP);
  /* 129812e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129812e6 push ebx */
  push32((uint32_t)(EBX));
  /* 129812e7 push esi */
  push32((uint32_t)(ESI));
  /* 129812e8 push edi */
  push32((uint32_t)(EDI));
  /* 129812e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 129812ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 129812f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 129812f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129812f8 mov esi, esp */
  ESI = (ESP);
  /* 129812fa push 0xa */
  push32((uint32_t)(0xau));
  /* 129812fc call dword ptr [0x129b03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03a4))), 0x12981302u);
  /* 12981302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981305 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981307 call 0x129815a0 */
  push32(0x1298130cu); f_129815a0();
  /* 1298130c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12981311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981313 je 0x1298135d */
  if (C.zf) goto L_1298135d;
  /* 12981315 mov esi, esp */
  ESI = (ESP);
  /* 12981317 call dword ptr [0x129b03a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03a8))), 0x1298131du);
  /* 1298131d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298131f call 0x129815a0 */
  push32(0x12981324u); f_129815a0();
  /* 12981324 cmp eax, 0xbb80 */
  { uint32_t _a=(EAX),_b=(0xbb80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981329 jle 0x1298135d */
  if ((C.zf||C.sf!=C.of)) goto L_1298135d;
  /* 1298132b mov esi, esp */
  ESI = (ESP);
  /* 1298132d push 0 */
  push32((uint32_t)(0x0u));
  /* 1298132f push 0xa */
  push32((uint32_t)(0xau));
  /* 12981331 call dword ptr [0x129b03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03ac))), 0x12981337u);
  /* 12981337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298133a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298133c call 0x129815a0 */
  push32(0x12981341u); f_129815a0();
  /* 12981341 mov esi, esp */
  ESI = (ESP);
  /* 12981343 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12981348 push 0x129a9034 */
  push32((uint32_t)(0x129a9034u));
  /* 1298134d call dword ptr [0x129b03b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03b0))), 0x12981353u);
  /* 12981353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981356 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981358 call 0x129815a0 */
  push32(0x1298135du); f_129815a0();
L_1298135d:;
  /* 1298135d mov esi, esp */
  ESI = (ESP);
  /* 1298135f call dword ptr [0x129b03a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03a8))), 0x12981365u);
  /* 12981365 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981367 call 0x129815a0 */
  push32(0x1298136cu); f_129815a0();
  /* 1298136c cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981371 jle 0x12981378 */
  if ((C.zf||C.sf!=C.of)) goto L_12981378;
  /* 12981373 call 0x12981019 */
  push32(0x12981378u); f_12981019();
L_12981378:;
  /* 12981378 mov esi, esp */
  ESI = (ESP);
  /* 1298137a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1298137c call dword ptr [0x129b03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03a4))), 0x12981382u);
  /* 12981382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981385 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981387 call 0x129815a0 */
  push32(0x1298138cu); f_129815a0();
  /* 1298138c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12981391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981393 je 0x129813ea */
  if (C.zf) goto L_129813ea;
  /* 12981395 push 0x129ae410 */
  push32((uint32_t)(0x129ae410u));
  /* 1298139a call 0x12981005 */
  push32(0x1298139fu); f_12981005();
  /* 1298139f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129813a2 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129813a5 jge 0x129813ea */
  if ((C.sf==C.of)) goto L_129813ea;
  /* 129813a7 mov esi, esp */
  ESI = (ESP);
  /* 129813a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129813ab push 0xf */
  push32((uint32_t)(0xfu));
  /* 129813ad call dword ptr [0x129b03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03ac))), 0x129813b3u);
  /* 129813b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129813b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129813b8 call 0x129815a0 */
  push32(0x129813bdu); f_129815a0();
  /* 129813bd mov esi, esp */
  ESI = (ESP);
  /* 129813bf call dword ptr [0x129b03bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03bc))), 0x129813c5u);
  /* 129813c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129813c7 call 0x129815a0 */
  push32(0x129813ccu); f_129815a0();
  /* 129813cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129813cf jne 0x129813ea */
  if (!C.zf) goto L_129813ea;
  /* 129813d1 mov esi, esp */
  ESI = (ESP);
  /* 129813d3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 129813d5 push 0x129a902c */
  push32((uint32_t)(0x129a902cu));
  /* 129813da call dword ptr [0x129b03b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03b0))), 0x129813e0u);
  /* 129813e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129813e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129813e5 call 0x129815a0 */
  push32(0x129813eau); f_129815a0();
L_129813ea:;
  /* 129813ea mov esi, esp */
  ESI = (ESP);
  /* 129813ec push 0x10 */
  push32((uint32_t)(0x10u));
  /* 129813ee call dword ptr [0x129b03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03a4))), 0x129813f4u);
  /* 129813f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129813f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129813f9 call 0x129815a0 */
  push32(0x129813feu); f_129815a0();
  /* 129813fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12981403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981405 je 0x1298145b */
  if (C.zf) goto L_1298145b;
  /* 12981407 push 0x129ae418 */
  push32((uint32_t)(0x129ae418u));
  /* 1298140c call 0x12981005 */
  push32(0x12981411u); f_12981005();
  /* 12981411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981414 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981417 jge 0x1298145b */
  if ((C.sf==C.of)) goto L_1298145b;
  /* 12981419 mov esi, esp */
  ESI = (ESP);
  /* 1298141b push 0 */
  push32((uint32_t)(0x0u));
  /* 1298141d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1298141f call dword ptr [0x129b03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03ac))), 0x12981425u);
  /* 12981425 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981428 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298142a call 0x129815a0 */
  push32(0x1298142fu); f_129815a0();
  /* 1298142f mov esi, esp */
  ESI = (ESP);
  /* 12981431 call dword ptr [0x129b03bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03bc))), 0x12981437u);
  /* 12981437 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981439 call 0x129815a0 */
  push32(0x1298143eu); f_129815a0();
  /* 1298143e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981440 jne 0x1298145b */
  if (!C.zf) goto L_1298145b;
  /* 12981442 mov esi, esp */
  ESI = (ESP);
  /* 12981444 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12981446 push 0x129a902c */
  push32((uint32_t)(0x129a902cu));
  /* 1298144b call dword ptr [0x129b03b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03b0))), 0x12981451u);
  /* 12981451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981454 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981456 call 0x129815a0 */
  push32(0x1298145bu); f_129815a0();
L_1298145b:;
  /* 1298145b push 0x129ae410 */
  push32((uint32_t)(0x129ae410u));
  /* 12981460 call 0x12981005 */
  push32(0x12981465u); f_12981005();
  /* 12981465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298146a jne 0x12981471 */
  if (!C.zf) goto L_12981471;
  /* 1298146c call 0x1298100f */
  push32(0x12981471u); f_1298100f();
L_12981471:;
  /* 12981471 push 0x129ae418 */
  push32((uint32_t)(0x129ae418u));
  /* 12981476 call 0x12981005 */
  push32(0x1298147bu); f_12981005();
  /* 1298147b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298147e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981480 jne 0x12981487 */
  if (!C.zf) goto L_12981487;
  /* 12981482 call 0x12981019 */
  push32(0x12981487u); f_12981019();
L_12981487:;
  /* 12981487 pop edi */
  EDI = (pop32());
  /* 12981488 pop esi */
  ESI = (pop32());
  /* 12981489 pop ebx */
  EBX = (pop32());
  /* 1298148a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298148d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298148f call 0x129815a0 */
  push32(0x12981494u); f_129815a0();
  /* 12981494 mov esp, ebp */
  ESP = (EBP);
  /* 12981496 pop ebp */
  EBP = (pop32());
  /* 12981497 ret  */
  ESPCHK(0x129812e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001510 @ 0x12981510 (63 bytes, 26 insns) */
void f_12981510(void) {
  FTRACE(0x12981510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981510 push ebp */
  push32((uint32_t)(EBP));
  /* 12981511 mov ebp, esp */
  EBP = (ESP);
  /* 12981513 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12981516 push ebx */
  push32((uint32_t)(EBX));
  /* 12981517 push esi */
  push32((uint32_t)(ESI));
  /* 12981518 push edi */
  push32((uint32_t)(EDI));
  /* 12981519 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1298151c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12981521 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12981526 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12981528 mov esi, esp */
  ESI = (ESP);
  /* 1298152a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298152d push eax */
  push32((uint32_t)(EAX));
  /* 1298152e call dword ptr [0x129b03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b03a0))), 0x12981534u);
  /* 12981534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981537 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981539 call 0x129815a0 */
  push32(0x1298153eu); f_129815a0();
  /* 1298153e pop edi */
  EDI = (pop32());
  /* 1298153f pop esi */
  ESI = (pop32());
  /* 12981540 pop ebx */
  EBX = (pop32());
  /* 12981541 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981544 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981546 call 0x129815a0 */
  push32(0x1298154bu); f_129815a0();
  /* 1298154b mov esp, ebp */
  ESP = (EBP);
  /* 1298154d pop ebp */
  EBP = (pop32());
  /* 1298154e ret  */
  ESPCHK(0x12981510u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x129815a0 (56 bytes, 28 insns) */
void f_129815a0(void) {
  FTRACE(0x129815a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129815a0 jne 0x129815a3 */
  if (!C.zf) goto L_129815a3;
  /* 129815a2 ret  */
  ESPCHK(0x129815a0u, _esp0);
  ESP += 4; return;
L_129815a3:;
  /* 129815a3 push ebp */
  push32((uint32_t)(EBP));
  /* 129815a4 mov ebp, esp */
  EBP = (ESP);
  /* 129815a6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129815a9 push eax */
  push32((uint32_t)(EAX));
  /* 129815aa push edx */
  push32((uint32_t)(EDX));
  /* 129815ab push ebx */
  push32((uint32_t)(EBX));
  /* 129815ac push esi */
  push32((uint32_t)(ESI));
  /* 129815ad push edi */
  push32((uint32_t)(EDI));
  /* 129815ae push 0x129a9050 */
  push32((uint32_t)(0x129a9050u));
  /* 129815b3 push 0x129a904c */
  push32((uint32_t)(0x129a904cu));
  /* 129815b8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 129815ba push 0x129a903c */
  push32((uint32_t)(0x129a903cu));
  /* 129815bf push 1 */
  push32((uint32_t)(0x1u));
  /* 129815c1 call 0x12981970 */
  push32(0x129815c6u); f_12981970();
  /* 129815c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129815c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129815cc jne 0x129815cf */
  if (!C.zf) goto L_129815cf;
  /* 129815ce int3  */
  x86_unimpl("int3 @ 0x129815ce");
L_129815cf:;
  /* 129815cf pop edi */
  EDI = (pop32());
  /* 129815d0 pop esi */
  ESI = (pop32());
  /* 129815d1 pop ebx */
  EBX = (pop32());
  /* 129815d2 pop edx */
  EDX = (pop32());
  /* 129815d3 pop eax */
  EAX = (pop32());
  /* 129815d4 mov esp, ebp */
  ESP = (EBP);
  /* 129815d6 pop ebp */
  EBP = (pop32());
  /* 129815d7 ret  */
  ESPCHK(0x129815a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100015e0 @ 0x129815e0 (313 bytes, 78 insns) */
void f_129815e0(void) {
  FTRACE(0x129815e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129815e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129815e1 mov ebp, esp */
  EBP = (ESP);
  /* 129815e3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129815e7 jne 0x129816a7 */
  if (!C.zf) goto L_129816a7;
  /* 129815ed call dword ptr [0x129b0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0248))), 0x129815f3u);
  /* 129815f3 mov dword ptr [0x129ae488], eax */
  w32((uint32_t)(0x129ae488), (EAX));
  /* 129815f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 129815fa call 0x129850a0 */
  push32(0x129815ffu); f_129850a0();
  /* 129815ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981604 jne 0x1298160d */
  if (!C.zf) goto L_1298160d;
  /* 12981606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12981608 jmp 0x12981715 */
  goto L_12981715;
L_1298160d:;
  /* 1298160d mov eax, dword ptr [0x129ae488] */
  EAX = (r32((uint32_t)(0x129ae488)));
  /* 12981612 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12981615 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298161a mov dword ptr [0x129ae494], eax */
  w32((uint32_t)(0x129ae494), (EAX));
  /* 1298161f mov ecx, dword ptr [0x129ae488] */
  ECX = (r32((uint32_t)(0x129ae488)));
  /* 12981625 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1298162b mov dword ptr [0x129ae490], ecx */
  w32((uint32_t)(0x129ae490), (ECX));
  /* 12981631 mov edx, dword ptr [0x129ae490] */
  EDX = (r32((uint32_t)(0x129ae490)));
  /* 12981637 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1298163a add edx, dword ptr [0x129ae494] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ae494))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12981640 mov dword ptr [0x129ae48c], edx */
  w32((uint32_t)(0x129ae48c), (EDX));
  /* 12981646 mov eax, dword ptr [0x129ae488] */
  EAX = (r32((uint32_t)(0x129ae488)));
  /* 1298164b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1298164e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12981653 mov dword ptr [0x129ae488], eax */
  w32((uint32_t)(0x129ae488), (EAX));
  /* 12981658 call 0x12982210 */
  push32(0x1298165du); f_12982210();
  /* 1298165d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298165f jne 0x1298166d */
  if (!C.zf) goto L_1298166d;
  /* 12981661 call 0x129850f0 */
  push32(0x12981666u); f_129850f0();
  /* 12981666 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12981668 jmp 0x12981715 */
  goto L_12981715;
L_1298166d:;
  /* 1298166d call dword ptr [0x129b0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0244))), 0x12981673u);
  /* 12981673 mov dword ptr [0x129affcc], eax */
  w32((uint32_t)(0x129affcc), (EAX));
  /* 12981678 call 0x12984e80 */
  push32(0x1298167du); f_12984e80();
  /* 1298167d mov dword ptr [0x129ae470], eax */
  w32((uint32_t)(0x129ae470), (EAX));
  /* 12981682 call 0x129824c0 */
  push32(0x12981687u); f_129824c0();
  /* 12981687 call 0x12984970 */
  push32(0x1298168cu); f_12984970();
  /* 1298168c call 0x12984820 */
  push32(0x12981691u); f_12984820();
  /* 12981691 call 0x12982010 */
  push32(0x12981696u); f_12982010();
  /* 12981696 mov ecx, dword ptr [0x129ae46c] */
  ECX = (r32((uint32_t)(0x129ae46c)));
  /* 1298169c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298169f mov dword ptr [0x129ae46c], ecx */
  w32((uint32_t)(0x129ae46c), (ECX));
  /* 129816a5 jmp 0x12981710 */
  goto L_12981710;
L_129816a7:;
  /* 129816a7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129816ab jne 0x12981700 */
  if (!C.zf) goto L_12981700;
  /* 129816ad cmp dword ptr [0x129ae46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129816b4 jle 0x129816fa */
  if ((C.zf||C.sf!=C.of)) goto L_129816fa;
  /* 129816b6 mov edx, dword ptr [0x129ae46c] */
  EDX = (r32((uint32_t)(0x129ae46c)));
  /* 129816bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129816bf mov dword ptr [0x129ae46c], edx */
  w32((uint32_t)(0x129ae46c), (EDX));
  /* 129816c5 cmp dword ptr [0x129ae4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129816cc jne 0x129816d3 */
  if (!C.zf) goto L_129816d3;
  /* 129816ce call 0x12982090 */
  push32(0x129816d3u); f_12982090();
L_129816d3:;
  /* 129816d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 129816d5 call 0x12983dc0 */
  push32(0x129816dau); f_12983dc0();
  /* 129816da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129816dd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 129816e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129816e2 je 0x129816e9 */
  if (C.zf) goto L_129816e9;
  /* 129816e4 call 0x129846d0 */
  push32(0x129816e9u); f_129846d0();
L_129816e9:;
  /* 129816e9 call 0x129827f0 */
  push32(0x129816eeu); f_129827f0();
  /* 129816ee call 0x129822a0 */
  push32(0x129816f3u); f_129822a0();
  /* 129816f3 call 0x129850f0 */
  push32(0x129816f8u); f_129850f0();
  /* 129816f8 jmp 0x129816fe */
  goto L_129816fe;
L_129816fa:;
  /* 129816fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129816fc jmp 0x12981715 */
  goto L_12981715;
L_129816fe:;
  /* 129816fe jmp 0x12981710 */
  goto L_12981710;
L_12981700:;
  /* 12981700 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981704 jne 0x12981710 */
  if (!C.zf) goto L_12981710;
  /* 12981706 push 0 */
  push32((uint32_t)(0x0u));
  /* 12981708 call 0x12982390 */
  push32(0x1298170du); f_12982390();
  /* 1298170d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981710:;
  /* 12981710 mov eax, 1 */
  EAX = (0x1u);
L_12981715:;
  /* 12981715 pop ebp */
  EBP = (pop32());
  /* 12981716 ret 0xc */
  ESPCHK(0x129815e0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12981720 (243 bytes, 86 insns) */
void f_12981720(void) {
  FTRACE(0x12981720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981720 push ebp */
  push32((uint32_t)(EBP));
  /* 12981721 mov ebp, esp */
  EBP = (ESP);
  /* 12981723 push ecx */
  push32((uint32_t)(ECX));
  /* 12981724 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1298172b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298172f jne 0x12981741 */
  if (!C.zf) goto L_12981741;
  /* 12981731 cmp dword ptr [0x129ae46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981738 jne 0x12981741 */
  if (!C.zf) goto L_12981741;
  /* 1298173a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298173c jmp 0x1298180d */
  goto L_1298180d;
L_12981741:;
  /* 12981741 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981745 je 0x1298174d */
  if (C.zf) goto L_1298174d;
  /* 12981747 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298174b jne 0x1298178f */
  if (!C.zf) goto L_1298178f;
L_1298174d:;
  /* 1298174d cmp dword ptr [0x129affdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129affdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981754 je 0x1298176b */
  if (C.zf) goto L_1298176b;
  /* 12981756 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12981759 push eax */
  push32((uint32_t)(EAX));
  /* 1298175a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298175d push ecx */
  push32((uint32_t)(ECX));
  /* 1298175e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981761 push edx */
  push32((uint32_t)(EDX));
  /* 12981762 call dword ptr [0x129affdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129affdc))), 0x12981768u);
  /* 12981768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298176b:;
  /* 1298176b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298176f je 0x12981785 */
  if (C.zf) goto L_12981785;
  /* 12981771 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12981774 push eax */
  push32((uint32_t)(EAX));
  /* 12981775 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12981778 push ecx */
  push32((uint32_t)(ECX));
  /* 12981779 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298177c push edx */
  push32((uint32_t)(EDX));
  /* 1298177d call 0x129815e0 */
  push32(0x12981782u); f_129815e0();
  /* 12981782 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12981785:;
  /* 12981785 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981789 jne 0x1298178f */
  if (!C.zf) goto L_1298178f;
  /* 1298178b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298178d jmp 0x1298180d */
  goto L_1298180d;
L_1298178f:;
  /* 1298178f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12981792 push eax */
  push32((uint32_t)(EAX));
  /* 12981793 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12981796 push ecx */
  push32((uint32_t)(ECX));
  /* 12981797 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298179a push edx */
  push32((uint32_t)(EDX));
  /* 1298179b call 0x12981014 */
  push32(0x129817a0u); f_12981014();
  /* 129817a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129817a3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129817a7 jne 0x129817be */
  if (!C.zf) goto L_129817be;
  /* 129817a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129817ad jne 0x129817be */
  if (!C.zf) goto L_129817be;
  /* 129817af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129817b2 push eax */
  push32((uint32_t)(EAX));
  /* 129817b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129817b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129817b8 push ecx */
  push32((uint32_t)(ECX));
  /* 129817b9 call 0x129815e0 */
  push32(0x129817beu); f_129815e0();
L_129817be:;
  /* 129817be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129817c2 je 0x129817ca */
  if (C.zf) goto L_129817ca;
  /* 129817c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129817c8 jne 0x1298180a */
  if (!C.zf) goto L_1298180a;
L_129817ca:;
  /* 129817ca mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129817cd push edx */
  push32((uint32_t)(EDX));
  /* 129817ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129817d1 push eax */
  push32((uint32_t)(EAX));
  /* 129817d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129817d5 push ecx */
  push32((uint32_t)(ECX));
  /* 129817d6 call 0x129815e0 */
  push32(0x129817dbu); f_129815e0();
  /* 129817db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129817dd jne 0x129817e6 */
  if (!C.zf) goto L_129817e6;
  /* 129817df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129817e6:;
  /* 129817e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129817ea je 0x1298180a */
  if (C.zf) goto L_1298180a;
  /* 129817ec cmp dword ptr [0x129affdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129affdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129817f3 je 0x1298180a */
  if (C.zf) goto L_1298180a;
  /* 129817f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129817f8 push edx */
  push32((uint32_t)(EDX));
  /* 129817f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129817fc push eax */
  push32((uint32_t)(EAX));
  /* 129817fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981800 push ecx */
  push32((uint32_t)(ECX));
  /* 12981801 call dword ptr [0x129affdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129affdc))), 0x12981807u);
  /* 12981807 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298180a:;
  /* 1298180a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298180d:;
  /* 1298180d mov esp, ebp */
  ESP = (EBP);
  /* 1298180f pop ebp */
  EBP = (pop32());
  /* 12981810 ret 0xc */
  ESPCHK(0x12981720u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12981820 (58 bytes, 18 insns) */
void f_12981820(void) {
  FTRACE(0x12981820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981820 push ebp */
  push32((uint32_t)(EBP));
  /* 12981821 mov ebp, esp */
  EBP = (ESP);
  /* 12981823 cmp dword ptr [0x129ae478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298182a je 0x1298183e */
  if (C.zf) goto L_1298183e;
  /* 1298182c cmp dword ptr [0x129ae478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981833 jne 0x12981843 */
  if (!C.zf) goto L_12981843;
  /* 12981835 cmp dword ptr [0x129ae47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298183c jne 0x12981843 */
  if (!C.zf) goto L_12981843;
L_1298183e:;
  /* 1298183e call 0x12985190 */
  push32(0x12981843u); f_12985190();
L_12981843:;
  /* 12981843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981846 push eax */
  push32((uint32_t)(EAX));
  /* 12981847 call 0x129851e0 */
  push32(0x1298184cu); f_129851e0();
  /* 1298184c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298184f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12981854 call dword ptr [0x129aca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x129aca30))), 0x1298185au);
  /* 1298185a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298185d pop ebp */
  EBP = (pop32());
  /* 1298185e ret  */
  ESPCHK(0x12981820u, _esp0);
  ESP += 4; return;
}

/* FUN_10001860 @ 0x12981860 (11 bytes, 5 insns) */
void f_12981860(void) {
  FTRACE(0x12981860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981860 push ebp */
  push32((uint32_t)(EBP));
  /* 12981861 mov ebp, esp */
  EBP = (ESP);
  /* 12981863 call dword ptr [0x129b024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b024c))), 0x12981869u);
  /* 12981869 pop ebp */
  EBP = (pop32());
  /* 1298186a ret  */
  ESPCHK(0x12981860u, _esp0);
  ESP += 4; return;
}

/* FUN_10001870 @ 0x12981870 (87 bytes, 30 insns) */
void f_12981870(void) {
  FTRACE(0x12981870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981870 push ebp */
  push32((uint32_t)(EBP));
  /* 12981871 mov ebp, esp */
  EBP = (ESP);
  /* 12981873 push ecx */
  push32((uint32_t)(ECX));
  /* 12981874 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981878 jl 0x12981880 */
  if ((C.sf!=C.of)) goto L_12981880;
  /* 1298187a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298187e jl 0x12981885 */
  if ((C.sf!=C.of)) goto L_12981885;
L_12981880:;
  /* 12981880 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12981883 jmp 0x129818c3 */
  goto L_129818c3;
L_12981885:;
  /* 12981885 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981889 jne 0x12981897 */
  if (!C.zf) goto L_12981897;
  /* 1298188b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298188e mov eax, dword ptr [eax*4 + 0x129aca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x129aca38)));
  /* 12981895 jmp 0x129818c3 */
  goto L_129818c3;
L_12981897:;
  /* 12981897 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298189a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1298189d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298189f je 0x129818a6 */
  if (C.zf) goto L_129818a6;
  /* 129818a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129818a4 jmp 0x129818c3 */
  goto L_129818c3;
L_129818a6:;
  /* 129818a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129818a9 mov eax, dword ptr [edx*4 + 0x129aca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129aca38)));
  /* 129818b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129818b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129818b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129818b9 mov dword ptr [ecx*4 + 0x129aca38], edx */
  w32((uint32_t)(ECX*4 + 0x129aca38), (EDX));
  /* 129818c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129818c3:;
  /* 129818c3 mov esp, ebp */
  ESP = (EBP);
  /* 129818c5 pop ebp */
  EBP = (pop32());
  /* 129818c6 ret  */
  ESPCHK(0x12981870u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x129818d0 (126 bytes, 38 insns) */
void f_129818d0(void) {
  FTRACE(0x129818d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129818d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129818d1 mov ebp, esp */
  EBP = (ESP);
  /* 129818d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129818d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129818d8 jl 0x129818e0 */
  if ((C.sf!=C.of)) goto L_129818e0;
  /* 129818da cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129818de jl 0x129818e7 */
  if ((C.sf!=C.of)) goto L_129818e7;
L_129818e0:;
  /* 129818e0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 129818e5 jmp 0x1298194a */
  goto L_1298194a;
L_129818e7:;
  /* 129818e7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129818eb jne 0x129818f9 */
  if (!C.zf) goto L_129818f9;
  /* 129818ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129818f0 mov eax, dword ptr [eax*4 + 0x129aca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x129aca44)));
  /* 129818f7 jmp 0x1298194a */
  goto L_1298194a;
L_129818f9:;
  /* 129818f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129818fc mov edx, dword ptr [ecx*4 + 0x129aca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129aca44)));
  /* 12981903 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12981906 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298190a jne 0x12981920 */
  if (!C.zf) goto L_12981920;
  /* 1298190c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1298190e call dword ptr [0x129b0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0250))), 0x12981914u);
  /* 12981914 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981917 mov dword ptr [ecx*4 + 0x129aca44], eax */
  w32((uint32_t)(ECX*4 + 0x129aca44), (EAX));
  /* 1298191e jmp 0x12981947 */
  goto L_12981947;
L_12981920:;
  /* 12981920 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981924 jne 0x1298193a */
  if (!C.zf) goto L_1298193a;
  /* 12981926 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12981928 call dword ptr [0x129b0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0250))), 0x1298192eu);
  /* 1298192e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981931 mov dword ptr [edx*4 + 0x129aca44], eax */
  w32((uint32_t)(EDX*4 + 0x129aca44), (EAX));
  /* 12981938 jmp 0x12981947 */
  goto L_12981947;
L_1298193a:;
  /* 1298193a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298193d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12981940 mov dword ptr [eax*4 + 0x129aca44], ecx */
  w32((uint32_t)(EAX*4 + 0x129aca44), (ECX));
L_12981947:;
  /* 12981947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298194a:;
  /* 1298194a mov esp, ebp */
  ESP = (EBP);
  /* 1298194c pop ebp */
  EBP = (pop32());
  /* 1298194d ret  */
  ESPCHK(0x129818d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001950 @ 0x12981950 (28 bytes, 11 insns) */
void f_12981950(void) {
  FTRACE(0x12981950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981950 push ebp */
  push32((uint32_t)(EBP));
  /* 12981951 mov ebp, esp */
  EBP = (ESP);
  /* 12981953 push ecx */
  push32((uint32_t)(ECX));
  /* 12981954 mov eax, dword ptr [0x129affc0] */
  EAX = (r32((uint32_t)(0x129affc0)));
  /* 12981959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298195c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298195f mov dword ptr [0x129affc0], ecx */
  w32((uint32_t)(0x129affc0), (ECX));
  /* 12981965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12981968 mov esp, ebp */
  ESP = (EBP);
  /* 1298196a pop ebp */
  EBP = (pop32());
  /* 1298196b ret  */
  ESPCHK(0x12981950u, _esp0);
  ESP += 4; return;
}

/* FUN_10001970 @ 0x12981970 (912 bytes, 248 insns) */
void f_12981970(void) {
  FTRACE(0x12981970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981970 push ebp */
  push32((uint32_t)(EBP));
  /* 12981971 mov ebp, esp */
  EBP = (ESP);
  /* 12981973 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12981978 call 0x12985a50 */
  push32(0x1298197du); f_12985a50();
  /* 1298197d push edi */
  push32((uint32_t)(EDI));
  /* 1298197e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12981985 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1298198a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298198c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12981992 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12981994 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12981996 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12981997 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1298199e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 129819a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129819a5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 129819ab rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129819ad stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 129819af stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 129819b0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 129819b7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 129819bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129819be lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 129819c4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 129819c6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 129819c8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 129819c9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 129819cc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 129819d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129819d6 jl 0x129819de */
  if ((C.sf!=C.of)) goto L_129819de;
  /* 129819d8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129819dc jl 0x129819e6 */
  if ((C.sf!=C.of)) goto L_129819e6;
L_129819de:;
  /* 129819de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129819e1 jmp 0x12981cfb */
  goto L_12981cfb;
L_129819e6:;
  /* 129819e6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129819ea jne 0x12981a90 */
  if (!C.zf) goto L_12981a90;
  /* 129819f0 push 0x129aca34 */
  push32((uint32_t)(0x129aca34u));
  /* 129819f5 call dword ptr [0x129b0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0268))), 0x129819fbu);
  /* 129819fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129819fd jle 0x12981a90 */
  if ((C.zf||C.sf!=C.of)) goto L_12981a90;
  /* 12981a03 cmp dword ptr [0x129ae480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981a0a jne 0x12981a4e */
  if (!C.zf) goto L_12981a4e;
  /* 12981a0c push 0x129a91f8 */
  push32((uint32_t)(0x129a91f8u));
  /* 12981a11 call dword ptr [0x129b0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0264))), 0x12981a17u);
  /* 12981a17 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12981a1d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981a24 je 0x12981a46 */
  if (C.zf) goto L_12981a46;
  /* 12981a26 push 0x129a91ec */
  push32((uint32_t)(0x129a91ecu));
  /* 12981a2b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12981a31 push ecx */
  push32((uint32_t)(ECX));
  /* 12981a32 call dword ptr [0x129b0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0260))), 0x12981a38u);
  /* 12981a38 mov dword ptr [0x129ae480], eax */
  w32((uint32_t)(0x129ae480), (EAX));
  /* 12981a3d cmp dword ptr [0x129ae480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981a44 jne 0x12981a4e */
  if (!C.zf) goto L_12981a4e;
L_12981a46:;
  /* 12981a46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12981a49 jmp 0x12981cfb */
  goto L_12981cfb;
L_12981a4e:;
  /* 12981a4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12981a51 push edx */
  push32((uint32_t)(EDX));
  /* 12981a52 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12981a55 push eax */
  push32((uint32_t)(EAX));
  /* 12981a56 push 0x129a91b8 */
  push32((uint32_t)(0x129a91b8u));
  /* 12981a5b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12981a61 push ecx */
  push32((uint32_t)(ECX));
  /* 12981a62 call dword ptr [0x129ae480] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae480))), 0x12981a68u);
  /* 12981a68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981a6b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12981a71 push edx */
  push32((uint32_t)(EDX));
  /* 12981a72 call dword ptr [0x129b025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b025c))), 0x12981a78u);
  /* 12981a78 push 0x129aca34 */
  push32((uint32_t)(0x129aca34u));
  /* 12981a7d call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x12981a83u);
  /* 12981a83 call 0x12981860 */
  push32(0x12981a88u); f_12981860();
  /* 12981a88 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12981a8b jmp 0x12981cfb */
  goto L_12981cfb;
L_12981a90:;
  /* 12981a90 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981a94 je 0x12981acd */
  if (C.zf) goto L_12981acd;
  /* 12981a96 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12981a9c push eax */
  push32((uint32_t)(EAX));
  /* 12981a9d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12981aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12981aa1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12981aa6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12981aac push edx */
  push32((uint32_t)(EDX));
  /* 12981aad call 0x12985950 */
  push32(0x12981ab2u); f_12985950();
  /* 12981ab2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981ab7 jge 0x12981acd */
  if ((C.sf==C.of)) goto L_12981acd;
  /* 12981ab9 push 0x129a918c */
  push32((uint32_t)(0x129a918cu));
  /* 12981abe lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12981ac4 push eax */
  push32((uint32_t)(EAX));
  /* 12981ac5 call 0x12985860 */
  push32(0x12981acau); f_12985860();
  /* 12981aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981acd:;
  /* 12981acd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981ad1 jne 0x12981b05 */
  if (!C.zf) goto L_12981b05;
  /* 12981ad3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981ad7 je 0x12981ae5 */
  if (C.zf) goto L_12981ae5;
  /* 12981ad9 mov dword ptr [ebp - 0x3028], 0x129a9178 */
  w32((uint32_t)(EBP + -0x3028), (0x129a9178u));
  /* 12981ae3 jmp 0x12981aef */
  goto L_12981aef;
L_12981ae5:;
  /* 12981ae5 mov dword ptr [ebp - 0x3028], 0x129a9164 */
  w32((uint32_t)(EBP + -0x3028), (0x129a9164u));
L_12981aef:;
  /* 12981aef mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12981af5 push ecx */
  push32((uint32_t)(ECX));
  /* 12981af6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12981afc push edx */
  push32((uint32_t)(EDX));
  /* 12981afd call 0x12985860 */
  push32(0x12981b02u); f_12985860();
  /* 12981b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981b05:;
  /* 12981b05 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12981b0b push eax */
  push32((uint32_t)(EAX));
  /* 12981b0c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12981b12 push ecx */
  push32((uint32_t)(ECX));
  /* 12981b13 call 0x12985870 */
  push32(0x12981b18u); f_12985870();
  /* 12981b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981b1b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981b1f jne 0x12981b5a */
  if (!C.zf) goto L_12981b5a;
  /* 12981b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981b24 mov eax, dword ptr [edx*4 + 0x129aca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129aca38)));
  /* 12981b2b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12981b2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981b30 je 0x12981b46 */
  if (C.zf) goto L_12981b46;
  /* 12981b32 push 0x129a9160 */
  push32((uint32_t)(0x129a9160u));
  /* 12981b37 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12981b3d push ecx */
  push32((uint32_t)(ECX));
  /* 12981b3e call 0x12985870 */
  push32(0x12981b43u); f_12985870();
  /* 12981b43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981b46:;
  /* 12981b46 push 0x129a915c */
  push32((uint32_t)(0x129a915cu));
  /* 12981b4b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12981b51 push edx */
  push32((uint32_t)(EDX));
  /* 12981b52 call 0x12985870 */
  push32(0x12981b57u); f_12985870();
  /* 12981b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981b5a:;
  /* 12981b5a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981b5e je 0x12981ba2 */
  if (C.zf) goto L_12981ba2;
  /* 12981b60 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12981b66 push eax */
  push32((uint32_t)(EAX));
  /* 12981b67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12981b6a push ecx */
  push32((uint32_t)(ECX));
  /* 12981b6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12981b6e push edx */
  push32((uint32_t)(EDX));
  /* 12981b6f push 0x129a9150 */
  push32((uint32_t)(0x129a9150u));
  /* 12981b74 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12981b79 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12981b7f push eax */
  push32((uint32_t)(EAX));
  /* 12981b80 call 0x12985760 */
  push32(0x12981b85u); f_12985760();
  /* 12981b85 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981b8a jge 0x12981ba0 */
  if ((C.sf==C.of)) goto L_12981ba0;
  /* 12981b8c push 0x129a918c */
  push32((uint32_t)(0x129a918cu));
  /* 12981b91 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12981b97 push ecx */
  push32((uint32_t)(ECX));
  /* 12981b98 call 0x12985860 */
  push32(0x12981b9du); f_12985860();
  /* 12981b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981ba0:;
  /* 12981ba0 jmp 0x12981bb8 */
  goto L_12981bb8;
L_12981ba2:;
  /* 12981ba2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12981ba8 push edx */
  push32((uint32_t)(EDX));
  /* 12981ba9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12981baf push eax */
  push32((uint32_t)(EAX));
  /* 12981bb0 call 0x12985860 */
  push32(0x12981bb5u); f_12985860();
  /* 12981bb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981bb8:;
  /* 12981bb8 cmp dword ptr [0x129affc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129affc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981bbf je 0x12981bfc */
  if (C.zf) goto L_12981bfc;
  /* 12981bc1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12981bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12981bc8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12981bce push edx */
  push32((uint32_t)(EDX));
  /* 12981bcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981bd2 push eax */
  push32((uint32_t)(EAX));
  /* 12981bd3 call dword ptr [0x129affc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129affc0))), 0x12981bd9u);
  /* 12981bd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981bdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981bde je 0x12981bfc */
  if (C.zf) goto L_12981bfc;
  /* 12981be0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981be4 jne 0x12981bf1 */
  if (!C.zf) goto L_12981bf1;
  /* 12981be6 push 0x129aca34 */
  push32((uint32_t)(0x129aca34u));
  /* 12981beb call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x12981bf1u);
L_12981bf1:;
  /* 12981bf1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12981bf7 jmp 0x12981cfb */
  goto L_12981cfb;
L_12981bfc:;
  /* 12981bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981bff mov edx, dword ptr [ecx*4 + 0x129aca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129aca38)));
  /* 12981c06 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12981c09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12981c0b je 0x12981c4b */
  if (C.zf) goto L_12981c4b;
  /* 12981c0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981c10 cmp dword ptr [eax*4 + 0x129aca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x129aca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981c18 je 0x12981c4b */
  if (C.zf) goto L_12981c4b;
  /* 12981c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12981c1c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12981c22 push ecx */
  push32((uint32_t)(ECX));
  /* 12981c23 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12981c29 push edx */
  push32((uint32_t)(EDX));
  /* 12981c2a call 0x129856e0 */
  push32(0x12981c2fu); f_129856e0();
  /* 12981c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981c32 push eax */
  push32((uint32_t)(EAX));
  /* 12981c33 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12981c39 push eax */
  push32((uint32_t)(EAX));
  /* 12981c3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981c3d mov edx, dword ptr [ecx*4 + 0x129aca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129aca44)));
  /* 12981c44 push edx */
  push32((uint32_t)(EDX));
  /* 12981c45 call dword ptr [0x129b0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0254))), 0x12981c4bu);
L_12981c4b:;
  /* 12981c4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981c4e mov ecx, dword ptr [eax*4 + 0x129aca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129aca38)));
  /* 12981c55 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12981c58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12981c5a je 0x12981c69 */
  if (C.zf) goto L_12981c69;
  /* 12981c5c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12981c62 push edx */
  push32((uint32_t)(EDX));
  /* 12981c63 call dword ptr [0x129b025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b025c))), 0x12981c69u);
L_12981c69:;
  /* 12981c69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981c6c mov ecx, dword ptr [eax*4 + 0x129aca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129aca38)));
  /* 12981c73 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12981c76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12981c78 je 0x12981ce8 */
  if (C.zf) goto L_12981ce8;
  /* 12981c7a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981c7e je 0x12981c9d */
  if (C.zf) goto L_12981c9d;
  /* 12981c80 push 0xa */
  push32((uint32_t)(0xau));
  /* 12981c82 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12981c88 push edx */
  push32((uint32_t)(EDX));
  /* 12981c89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12981c8c push eax */
  push32((uint32_t)(EAX));
  /* 12981c8d call 0x129853f0 */
  push32(0x12981c92u); f_129853f0();
  /* 12981c92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981c95 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12981c9b jmp 0x12981ca7 */
  goto L_12981ca7;
L_12981c9d:;
  /* 12981c9d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12981ca7:;
  /* 12981ca7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12981cad push ecx */
  push32((uint32_t)(ECX));
  /* 12981cae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12981cb1 push edx */
  push32((uint32_t)(EDX));
  /* 12981cb2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12981cb8 push eax */
  push32((uint32_t)(EAX));
  /* 12981cb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12981cbc push ecx */
  push32((uint32_t)(ECX));
  /* 12981cbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981cc0 push edx */
  push32((uint32_t)(EDX));
  /* 12981cc1 call 0x12981d00 */
  push32(0x12981cc6u); f_12981d00();
  /* 12981cc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981cc9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12981ccf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981cd3 jne 0x12981ce0 */
  if (!C.zf) goto L_12981ce0;
  /* 12981cd5 push 0x129aca34 */
  push32((uint32_t)(0x129aca34u));
  /* 12981cda call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x12981ce0u);
L_12981ce0:;
  /* 12981ce0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12981ce6 jmp 0x12981cfb */
  goto L_12981cfb;
L_12981ce8:;
  /* 12981ce8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981cec jne 0x12981cf9 */
  if (!C.zf) goto L_12981cf9;
  /* 12981cee push 0x129aca34 */
  push32((uint32_t)(0x129aca34u));
  /* 12981cf3 call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x12981cf9u);
L_12981cf9:;
  /* 12981cf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12981cfb:;
  /* 12981cfb pop edi */
  EDI = (pop32());
  /* 12981cfc mov esp, ebp */
  ESP = (EBP);
  /* 12981cfe pop ebp */
  EBP = (pop32());
  /* 12981cff ret  */
  ESPCHK(0x12981970u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d00 @ 0x12981d00 (780 bytes, 197 insns) */
void f_12981d00(void) {
  FTRACE(0x12981d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12981d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12981d01 mov ebp, esp */
  EBP = (ESP);
  /* 12981d03 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12981d08 call 0x12985a50 */
  push32(0x12981d0du); f_12985a50();
L_12981d0d:;
  /* 12981d0d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981d11 jne 0x12981d38 */
  if (!C.zf) goto L_12981d38;
  /* 12981d13 push 0x129a9348 */
  push32((uint32_t)(0x129a9348u));
  /* 12981d18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12981d1a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12981d1f push 0x129a933c */
  push32((uint32_t)(0x129a933cu));
  /* 12981d24 push 2 */
  push32((uint32_t)(0x2u));
  /* 12981d26 call 0x12981970 */
  push32(0x12981d2bu); f_12981970();
  /* 12981d2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981d2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981d31 jne 0x12981d38 */
  if (!C.zf) goto L_12981d38;
  /* 12981d33 call 0x12981860 */
  push32(0x12981d38u); f_12981860();
L_12981d38:;
  /* 12981d38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12981d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981d3c jne 0x12981d0d */
  if (!C.zf) goto L_12981d0d;
  /* 12981d3e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12981d43 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12981d49 push ecx */
  push32((uint32_t)(ECX));
  /* 12981d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12981d4c call dword ptr [0x129b026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b026c))), 0x12981d52u);
  /* 12981d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981d54 jne 0x12981d6a */
  if (!C.zf) goto L_12981d6a;
  /* 12981d56 push 0x129a9324 */
  push32((uint32_t)(0x129a9324u));
  /* 12981d5b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12981d61 push edx */
  push32((uint32_t)(EDX));
  /* 12981d62 call 0x12985860 */
  push32(0x12981d67u); f_12985860();
  /* 12981d67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981d6a:;
  /* 12981d6a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12981d70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12981d73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12981d76 push ecx */
  push32((uint32_t)(ECX));
  /* 12981d77 call 0x129856e0 */
  push32(0x12981d7cu); f_129856e0();
  /* 12981d7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981d7f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981d82 jbe 0x12981dad */
  if ((C.cf||C.zf)) goto L_12981dad;
  /* 12981d84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12981d87 push edx */
  push32((uint32_t)(EDX));
  /* 12981d88 call 0x129856e0 */
  push32(0x12981d8du); f_129856e0();
  /* 12981d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981d90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12981d93 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12981d97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12981d9a push 3 */
  push32((uint32_t)(0x3u));
  /* 12981d9c push 0x129a9320 */
  push32((uint32_t)(0x129a9320u));
  /* 12981da1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12981da4 push eax */
  push32((uint32_t)(EAX));
  /* 12981da5 call 0x129860d0 */
  push32(0x12981daau); f_129860d0();
  /* 12981daa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981dad:;
  /* 12981dad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12981db0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12981db6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981dbd je 0x12981e08 */
  if (C.zf) goto L_12981e08;
  /* 12981dbf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12981dc5 push edx */
  push32((uint32_t)(EDX));
  /* 12981dc6 call 0x129856e0 */
  push32(0x12981dcbu); f_129856e0();
  /* 12981dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981dce cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981dd1 jbe 0x12981e08 */
  if ((C.cf||C.zf)) goto L_12981e08;
  /* 12981dd3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12981dd9 push eax */
  push32((uint32_t)(EAX));
  /* 12981dda call 0x129856e0 */
  push32(0x12981ddfu); f_129856e0();
  /* 12981ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981de2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12981de8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12981dec mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12981df2 push 3 */
  push32((uint32_t)(0x3u));
  /* 12981df4 push 0x129a9320 */
  push32((uint32_t)(0x129a9320u));
  /* 12981df9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12981dff push eax */
  push32((uint32_t)(EAX));
  /* 12981e00 call 0x129860d0 */
  push32(0x12981e05u); f_129860d0();
  /* 12981e05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981e08:;
  /* 12981e08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981e0c jne 0x12981e1a */
  if (!C.zf) goto L_12981e1a;
  /* 12981e0e mov dword ptr [ebp - 0x1114], 0x129a92ac */
  w32((uint32_t)(EBP + -0x1114), (0x129a92acu));
  /* 12981e18 jmp 0x12981e24 */
  goto L_12981e24;
L_12981e1a:;
  /* 12981e1a mov dword ptr [ebp - 0x1114], 0x129a904c */
  w32((uint32_t)(EBP + -0x1114), (0x129a904cu));
L_12981e24:;
  /* 12981e24 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12981e27 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12981e2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12981e2c je 0x12981e39 */
  if (C.zf) goto L_12981e39;
  /* 12981e2e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12981e31 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12981e37 jmp 0x12981e43 */
  goto L_12981e43;
L_12981e39:;
  /* 12981e39 mov dword ptr [ebp - 0x1118], 0x129a904c */
  w32((uint32_t)(EBP + -0x1118), (0x129a904cu));
L_12981e43:;
  /* 12981e43 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12981e46 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12981e49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12981e4b je 0x12981e5f */
  if (C.zf) goto L_12981e5f;
  /* 12981e4d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981e51 jne 0x12981e5f */
  if (!C.zf) goto L_12981e5f;
  /* 12981e53 mov dword ptr [ebp - 0x111c], 0x129a929c */
  w32((uint32_t)(EBP + -0x111c), (0x129a929cu));
  /* 12981e5d jmp 0x12981e69 */
  goto L_12981e69;
L_12981e5f:;
  /* 12981e5f mov dword ptr [ebp - 0x111c], 0x129a904c */
  w32((uint32_t)(EBP + -0x111c), (0x129a904cu));
L_12981e69:;
  /* 12981e69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12981e6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12981e6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12981e71 je 0x12981e7f */
  if (C.zf) goto L_12981e7f;
  /* 12981e73 mov dword ptr [ebp - 0x1120], 0x129a9298 */
  w32((uint32_t)(EBP + -0x1120), (0x129a9298u));
  /* 12981e7d jmp 0x12981e89 */
  goto L_12981e89;
L_12981e7f:;
  /* 12981e7f mov dword ptr [ebp - 0x1120], 0x129a904c */
  w32((uint32_t)(EBP + -0x1120), (0x129a904cu));
L_12981e89:;
  /* 12981e89 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981e8d je 0x12981e9a */
  if (C.zf) goto L_12981e9a;
  /* 12981e8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12981e92 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12981e98 jmp 0x12981ea4 */
  goto L_12981ea4;
L_12981e9a:;
  /* 12981e9a mov dword ptr [ebp - 0x1124], 0x129a904c */
  w32((uint32_t)(EBP + -0x1124), (0x129a904cu));
L_12981ea4:;
  /* 12981ea4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981ea8 je 0x12981eb6 */
  if (C.zf) goto L_12981eb6;
  /* 12981eaa mov dword ptr [ebp - 0x1128], 0x129a9290 */
  w32((uint32_t)(EBP + -0x1128), (0x129a9290u));
  /* 12981eb4 jmp 0x12981ec0 */
  goto L_12981ec0;
L_12981eb6:;
  /* 12981eb6 mov dword ptr [ebp - 0x1128], 0x129a904c */
  w32((uint32_t)(EBP + -0x1128), (0x129a904cu));
L_12981ec0:;
  /* 12981ec0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981ec4 je 0x12981ed1 */
  if (C.zf) goto L_12981ed1;
  /* 12981ec6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12981ec9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12981ecf jmp 0x12981edb */
  goto L_12981edb;
L_12981ed1:;
  /* 12981ed1 mov dword ptr [ebp - 0x112c], 0x129a904c */
  w32((uint32_t)(EBP + -0x112c), (0x129a904cu));
L_12981edb:;
  /* 12981edb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981edf je 0x12981eed */
  if (C.zf) goto L_12981eed;
  /* 12981ee1 mov dword ptr [ebp - 0x1130], 0x129a9288 */
  w32((uint32_t)(EBP + -0x1130), (0x129a9288u));
  /* 12981eeb jmp 0x12981ef7 */
  goto L_12981ef7;
L_12981eed:;
  /* 12981eed mov dword ptr [ebp - 0x1130], 0x129a904c */
  w32((uint32_t)(EBP + -0x1130), (0x129a904cu));
L_12981ef7:;
  /* 12981ef7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981efe je 0x12981f0e */
  if (C.zf) goto L_12981f0e;
  /* 12981f00 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12981f06 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12981f0c jmp 0x12981f18 */
  goto L_12981f18;
L_12981f0e:;
  /* 12981f0e mov dword ptr [ebp - 0x1134], 0x129a904c */
  w32((uint32_t)(EBP + -0x1134), (0x129a904cu));
L_12981f18:;
  /* 12981f18 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981f1f je 0x12981f2d */
  if (C.zf) goto L_12981f2d;
  /* 12981f21 mov dword ptr [ebp - 0x1138], 0x129a927c */
  w32((uint32_t)(EBP + -0x1138), (0x129a927cu));
  /* 12981f2b jmp 0x12981f37 */
  goto L_12981f37;
L_12981f2d:;
  /* 12981f2d mov dword ptr [ebp - 0x1138], 0x129a904c */
  w32((uint32_t)(EBP + -0x1138), (0x129a904cu));
L_12981f37:;
  /* 12981f37 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12981f3d push edx */
  push32((uint32_t)(EDX));
  /* 12981f3e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12981f44 push eax */
  push32((uint32_t)(EAX));
  /* 12981f45 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12981f4b push ecx */
  push32((uint32_t)(ECX));
  /* 12981f4c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12981f52 push edx */
  push32((uint32_t)(EDX));
  /* 12981f53 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12981f59 push eax */
  push32((uint32_t)(EAX));
  /* 12981f5a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12981f60 push ecx */
  push32((uint32_t)(ECX));
  /* 12981f61 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12981f67 push edx */
  push32((uint32_t)(EDX));
  /* 12981f68 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12981f6e push eax */
  push32((uint32_t)(EAX));
  /* 12981f6f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12981f75 push ecx */
  push32((uint32_t)(ECX));
  /* 12981f76 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12981f7c push edx */
  push32((uint32_t)(EDX));
  /* 12981f7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12981f80 push eax */
  push32((uint32_t)(EAX));
  /* 12981f81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12981f84 mov edx, dword ptr [ecx*4 + 0x129aca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129aca50)));
  /* 12981f8b push edx */
  push32((uint32_t)(EDX));
  /* 12981f8c push 0x129a9228 */
  push32((uint32_t)(0x129a9228u));
  /* 12981f91 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12981f96 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12981f9c push eax */
  push32((uint32_t)(EAX));
  /* 12981f9d call 0x12985760 */
  push32(0x12981fa2u); f_12985760();
  /* 12981fa2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981fa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12981fa7 jge 0x12981fbd */
  if ((C.sf==C.of)) goto L_12981fbd;
  /* 12981fa9 push 0x129a918c */
  push32((uint32_t)(0x129a918cu));
  /* 12981fae lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12981fb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12981fb5 call 0x12985860 */
  push32(0x12981fbau); f_12985860();
  /* 12981fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12981fbd:;
  /* 12981fbd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12981fc2 push 0x129a9204 */
  push32((uint32_t)(0x129a9204u));
  /* 12981fc7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12981fcd push edx */
  push32((uint32_t)(EDX));
  /* 12981fce call 0x12986010 */
  push32(0x12981fd3u); f_12986010();
  /* 12981fd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981fd6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12981fdc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981fe3 jne 0x12981ff6 */
  if (!C.zf) goto L_12981ff6;
  /* 12981fe5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12981fe7 call 0x12985d50 */
  push32(0x12981fecu); f_12985d50();
  /* 12981fec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12981fef push 3 */
  push32((uint32_t)(0x3u));
  /* 12981ff1 call 0x12982070 */
  push32(0x12981ff6u); f_12982070();
L_12981ff6:;
  /* 12981ff6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12981ffd jne 0x12982006 */
  if (!C.zf) goto L_12982006;
  /* 12981fff mov eax, 1 */
  EAX = (0x1u);
  /* 12982004 jmp 0x12982008 */
  goto L_12982008;
L_12982006:;
  /* 12982006 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12982008:;
  /* 12982008 mov esp, ebp */
  ESP = (EBP);
  /* 1298200a pop ebp */
  EBP = (pop32());
  /* 1298200b ret  */
  ESPCHK(0x12981d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002010 @ 0x12982010 (56 bytes, 15 insns) */
void f_12982010(void) {
  FTRACE(0x12982010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982010 push ebp */
  push32((uint32_t)(EBP));
  /* 12982011 mov ebp, esp */
  EBP = (ESP);
  /* 12982013 cmp dword ptr [0x129affbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129affbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298201a je 0x12982022 */
  if (C.zf) goto L_12982022;
  /* 1298201c call dword ptr [0x129affbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129affbc))), 0x12982022u);
L_12982022:;
  /* 12982022 push 0x129ac418 */
  push32((uint32_t)(0x129ac418u));
  /* 12982027 push 0x129ac208 */
  push32((uint32_t)(0x129ac208u));
  /* 1298202c call 0x129821e0 */
  push32(0x12982031u); f_129821e0();
  /* 12982031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982034 push 0x129ac104 */
  push32((uint32_t)(0x129ac104u));
  /* 12982039 push 0x129ac000 */
  push32((uint32_t)(0x129ac000u));
  /* 1298203e call 0x129821e0 */
  push32(0x12982043u); f_129821e0();
  /* 12982043 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982046 pop ebp */
  EBP = (pop32());
  /* 12982047 ret  */
  ESPCHK(0x12982010u, _esp0);
  ESP += 4; return;
}

/* FUN_10002050 @ 0x12982050 (21 bytes, 10 insns) */
void f_12982050(void) {
  FTRACE(0x12982050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982050 push ebp */
  push32((uint32_t)(EBP));
  /* 12982051 mov ebp, esp */
  EBP = (ESP);
  /* 12982053 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982055 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298205a push eax */
  push32((uint32_t)(EAX));
  /* 1298205b call 0x129820d0 */
  push32(0x12982060u); f_129820d0();
  /* 12982060 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982063 pop ebp */
  EBP = (pop32());
  /* 12982064 ret  */
  ESPCHK(0x12982050u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12982070 (21 bytes, 10 insns) */
void f_12982070(void) {
  FTRACE(0x12982070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982070 push ebp */
  push32((uint32_t)(EBP));
  /* 12982071 mov ebp, esp */
  EBP = (ESP);
  /* 12982073 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982075 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982077 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298207a push eax */
  push32((uint32_t)(EAX));
  /* 1298207b call 0x129820d0 */
  push32(0x12982080u); f_129820d0();
  /* 12982080 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982083 pop ebp */
  EBP = (pop32());
  /* 12982084 ret  */
  ESPCHK(0x12982070u, _esp0);
  ESP += 4; return;
}

/* FUN_10002090 @ 0x12982090 (19 bytes, 9 insns) */
void f_12982090(void) {
  FTRACE(0x12982090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982090 push ebp */
  push32((uint32_t)(EBP));
  /* 12982091 mov ebp, esp */
  EBP = (ESP);
  /* 12982093 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982095 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982097 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982099 call 0x129820d0 */
  push32(0x1298209eu); f_129820d0();
  /* 1298209e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129820a1 pop ebp */
  EBP = (pop32());
  /* 129820a2 ret  */
  ESPCHK(0x12982090u, _esp0);
  ESP += 4; return;
}

/* FUN_100020b0 @ 0x129820b0 (19 bytes, 9 insns) */
void f_129820b0(void) {
  FTRACE(0x129820b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129820b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129820b1 mov ebp, esp */
  EBP = (ESP);
  /* 129820b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 129820b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 129820b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129820b9 call 0x129820d0 */
  push32(0x129820beu); f_129820d0();
  /* 129820be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129820c1 pop ebp */
  EBP = (pop32());
  /* 129820c2 ret  */
  ESPCHK(0x129820b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100020d0 @ 0x129820d0 (227 bytes, 61 insns) */
void f_129820d0(void) {
  FTRACE(0x129820d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129820d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129820d1 mov ebp, esp */
  EBP = (ESP);
  /* 129820d3 push ecx */
  push32((uint32_t)(ECX));
  /* 129820d4 call 0x129821c0 */
  push32(0x129820d9u); f_129821c0();
  /* 129820d9 cmp dword ptr [0x129ae4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129820e0 jne 0x129820f3 */
  if (!C.zf) goto L_129820f3;
  /* 129820e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129820e5 push eax */
  push32((uint32_t)(EAX));
  /* 129820e6 call dword ptr [0x129b0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0278))), 0x129820ecu);
  /* 129820ec push eax */
  push32((uint32_t)(EAX));
  /* 129820ed call dword ptr [0x129b0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0274))), 0x129820f3u);
L_129820f3:;
  /* 129820f3 mov dword ptr [0x129ae4c0], 1 */
  w32((uint32_t)(0x129ae4c0), (0x1u));
  /* 129820fd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12982100 mov byte ptr [0x129ae4bc], cl */
  w8((uint32_t)(0x129ae4bc), (CL));
  /* 12982106 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298210a jne 0x12982153 */
  if (!C.zf) goto L_12982153;
  /* 1298210c cmp dword ptr [0x129affb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129affb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982113 je 0x12982141 */
  if (C.zf) goto L_12982141;
  /* 12982115 mov edx, dword ptr [0x129affb4] */
  EDX = (r32((uint32_t)(0x129affb4)));
  /* 1298211b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1298211e:;
  /* 1298211e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982121 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12982124 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12982127 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298212a cmp ecx, dword ptr [0x129affb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129affb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982130 jb 0x12982141 */
  if (C.cf) goto L_12982141;
  /* 12982132 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982135 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982138 je 0x1298213f */
  if (C.zf) goto L_1298213f;
  /* 1298213a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298213d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1298213fu);
L_1298213f:;
  /* 1298213f jmp 0x1298211e */
  goto L_1298211e;
L_12982141:;
  /* 12982141 push 0x129ac724 */
  push32((uint32_t)(0x129ac724u));
  /* 12982146 push 0x129ac51c */
  push32((uint32_t)(0x129ac51cu));
  /* 1298214b call 0x129821e0 */
  push32(0x12982150u); f_129821e0();
  /* 12982150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12982153:;
  /* 12982153 push 0x129ac92c */
  push32((uint32_t)(0x129ac92cu));
  /* 12982158 push 0x129ac828 */
  push32((uint32_t)(0x129ac828u));
  /* 1298215d call 0x129821e0 */
  push32(0x12982162u); f_129821e0();
  /* 12982162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982165 cmp dword ptr [0x129ae4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298216c jne 0x1298218e */
  if (!C.zf) goto L_1298218e;
  /* 1298216e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12982170 call 0x12983dc0 */
  push32(0x12982175u); f_12983dc0();
  /* 12982175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982178 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1298217b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298217d je 0x1298218e */
  if (C.zf) goto L_1298218e;
  /* 1298217f mov dword ptr [0x129ae4c8], 1 */
  w32((uint32_t)(0x129ae4c8), (0x1u));
  /* 12982189 call 0x129846d0 */
  push32(0x1298218eu); f_129846d0();
L_1298218e:;
  /* 1298218e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982192 je 0x1298219b */
  if (C.zf) goto L_1298219b;
  /* 12982194 call 0x129821d0 */
  push32(0x12982199u); f_129821d0();
  /* 12982199 jmp 0x129821af */
  goto L_129821af;
L_1298219b:;
  /* 1298219b mov dword ptr [0x129ae4c4], 1 */
  w32((uint32_t)(0x129ae4c4), (0x1u));
  /* 129821a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129821a8 push ecx */
  push32((uint32_t)(ECX));
  /* 129821a9 call dword ptr [0x129b0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0270))), 0x129821afu);
L_129821af:;
  /* 129821af mov esp, ebp */
  ESP = (EBP);
  /* 129821b1 pop ebp */
  EBP = (pop32());
  /* 129821b2 ret  */
  ESPCHK(0x129820d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021c0 @ 0x129821c0 (15 bytes, 7 insns) */
void f_129821c0(void) {
  FTRACE(0x129821c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129821c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129821c1 mov ebp, esp */
  EBP = (ESP);
  /* 129821c3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 129821c5 call 0x129862b0 */
  push32(0x129821cau); f_129862b0();
  /* 129821ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129821cd pop ebp */
  EBP = (pop32());
  /* 129821ce ret  */
  ESPCHK(0x129821c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021d0 @ 0x129821d0 (15 bytes, 7 insns) */
void f_129821d0(void) {
  FTRACE(0x129821d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129821d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129821d1 mov ebp, esp */
  EBP = (ESP);
  /* 129821d3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 129821d5 call 0x12986350 */
  push32(0x129821dau); f_12986350();
  /* 129821da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129821dd pop ebp */
  EBP = (pop32());
  /* 129821de ret  */
  ESPCHK(0x129821d0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x129821e0 (37 bytes, 16 insns) */
void f_129821e0(void) {
  FTRACE(0x129821e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129821e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129821e1 mov ebp, esp */
  EBP = (ESP);
L_129821e3:;
  /* 129821e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129821e6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129821e9 jae 0x12982203 */
  if (!C.cf) goto L_12982203;
  /* 129821eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129821ee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129821f1 je 0x129821f8 */
  if (C.zf) goto L_129821f8;
  /* 129821f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129821f6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x129821f8u);
L_129821f8:;
  /* 129821f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129821fb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129821fe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12982201 jmp 0x129821e3 */
  goto L_129821e3;
L_12982203:;
  /* 12982203 pop ebp */
  EBP = (pop32());
  /* 12982204 ret  */
  ESPCHK(0x129821e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002210 @ 0x12982210 (130 bytes, 42 insns) */
void f_12982210(void) {
  FTRACE(0x12982210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982210 push ebp */
  push32((uint32_t)(EBP));
  /* 12982211 mov ebp, esp */
  EBP = (ESP);
  /* 12982213 push ecx */
  push32((uint32_t)(ECX));
  /* 12982214 call 0x129861d0 */
  push32(0x12982219u); f_129861d0();
  /* 12982219 call dword ptr [0x129b0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0284))), 0x1298221fu);
  /* 1298221f mov dword ptr [0x129aca5c], eax */
  w32((uint32_t)(0x129aca5c), (EAX));
  /* 12982224 cmp dword ptr [0x129aca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x129aca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298222b jne 0x12982231 */
  if (!C.zf) goto L_12982231;
  /* 1298222d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298222f jmp 0x1298228e */
  goto L_1298228e;
L_12982231:;
  /* 12982231 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12982233 push 0x129a9360 */
  push32((uint32_t)(0x129a9360u));
  /* 12982238 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298223a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1298223c push 1 */
  push32((uint32_t)(0x1u));
  /* 1298223e call 0x12982cc0 */
  push32(0x12982243u); f_12982cc0();
  /* 12982243 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982246 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12982249 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298224d je 0x12982264 */
  if (C.zf) goto L_12982264;
  /* 1298224f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982252 push eax */
  push32((uint32_t)(EAX));
  /* 12982253 mov ecx, dword ptr [0x129aca5c] */
  ECX = (r32((uint32_t)(0x129aca5c)));
  /* 12982259 push ecx */
  push32((uint32_t)(ECX));
  /* 1298225a call dword ptr [0x129b0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0280))), 0x12982260u);
  /* 12982260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982262 jne 0x12982268 */
  if (!C.zf) goto L_12982268;
L_12982264:;
  /* 12982264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982266 jmp 0x1298228e */
  goto L_1298228e;
L_12982268:;
  /* 12982268 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298226b push edx */
  push32((uint32_t)(EDX));
  /* 1298226c call 0x129822d0 */
  push32(0x12982271u); f_129822d0();
  /* 12982271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982274 call dword ptr [0x129b027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b027c))), 0x1298227au);
  /* 1298227a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298227d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1298227f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982282 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12982289 mov eax, 1 */
  EAX = (0x1u);
L_1298228e:;
  /* 1298228e mov esp, ebp */
  ESP = (EBP);
  /* 12982290 pop ebp */
  EBP = (pop32());
  /* 12982291 ret  */
  ESPCHK(0x12982210u, _esp0);
  ESP += 4; return;
}

/* FUN_100022a0 @ 0x129822a0 (41 bytes, 11 insns) */
void f_129822a0(void) {
  FTRACE(0x129822a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129822a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129822a1 mov ebp, esp */
  EBP = (ESP);
  /* 129822a3 call 0x12986210 */
  push32(0x129822a8u); f_12986210();
  /* 129822a8 cmp dword ptr [0x129aca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x129aca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129822af je 0x129822c7 */
  if (C.zf) goto L_129822c7;
  /* 129822b1 mov eax, dword ptr [0x129aca5c] */
  EAX = (r32((uint32_t)(0x129aca5c)));
  /* 129822b6 push eax */
  push32((uint32_t)(EAX));
  /* 129822b7 call dword ptr [0x129b0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0288))), 0x129822bdu);
  /* 129822bd mov dword ptr [0x129aca5c], 0xffffffff */
  w32((uint32_t)(0x129aca5c), (0xffffffffu));
L_129822c7:;
  /* 129822c7 pop ebp */
  EBP = (pop32());
  /* 129822c8 ret  */
  ESPCHK(0x129822a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022d0 @ 0x129822d0 (25 bytes, 8 insns) */
void f_129822d0(void) {
  FTRACE(0x129822d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129822d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129822d1 mov ebp, esp */
  EBP = (ESP);
  /* 129822d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129822d6 mov dword ptr [eax + 0x50], 0x129acc00 */
  w32((uint32_t)(EAX + 0x50), (0x129acc00u));
  /* 129822dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129822e0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 129822e7 pop ebp */
  EBP = (pop32());
  /* 129822e8 ret  */
  ESPCHK(0x129822d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100022f0 @ 0x129822f0 (152 bytes, 48 insns) */
void f_129822f0(void) {
  FTRACE(0x129822f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129822f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129822f1 mov ebp, esp */
  EBP = (ESP);
  /* 129822f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129822f6 call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x129822fcu);
  /* 129822fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129822ff mov eax, dword ptr [0x129aca5c] */
  EAX = (r32((uint32_t)(0x129aca5c)));
  /* 12982304 push eax */
  push32((uint32_t)(EAX));
  /* 12982305 call dword ptr [0x129b0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0290))), 0x1298230bu);
  /* 1298230b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298230e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982312 jne 0x12982377 */
  if (!C.zf) goto L_12982377;
  /* 12982314 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12982319 push 0x129a9360 */
  push32((uint32_t)(0x129a9360u));
  /* 1298231e push 2 */
  push32((uint32_t)(0x2u));
  /* 12982320 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12982322 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982324 call 0x12982cc0 */
  push32(0x12982329u); f_12982cc0();
  /* 12982329 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298232c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298232f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982333 je 0x1298236d */
  if (C.zf) goto L_1298236d;
  /* 12982335 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982338 push ecx */
  push32((uint32_t)(ECX));
  /* 12982339 mov edx, dword ptr [0x129aca5c] */
  EDX = (r32((uint32_t)(0x129aca5c)));
  /* 1298233f push edx */
  push32((uint32_t)(EDX));
  /* 12982340 call dword ptr [0x129b0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0280))), 0x12982346u);
  /* 12982346 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982348 je 0x1298236d */
  if (C.zf) goto L_1298236d;
  /* 1298234a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298234d push eax */
  push32((uint32_t)(EAX));
  /* 1298234e call 0x129822d0 */
  push32(0x12982353u); f_129822d0();
  /* 12982353 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982356 call dword ptr [0x129b027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b027c))), 0x1298235cu);
  /* 1298235c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298235f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12982361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982364 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1298236b jmp 0x12982377 */
  goto L_12982377;
L_1298236d:;
  /* 1298236d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1298236f call 0x12981820 */
  push32(0x12982374u); f_12981820();
  /* 12982374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12982377:;
  /* 12982377 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298237a push eax */
  push32((uint32_t)(EAX));
  /* 1298237b call dword ptr [0x129b028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b028c))), 0x12982381u);
  /* 12982381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982384 mov esp, ebp */
  ESP = (EBP);
  /* 12982386 pop ebp */
  EBP = (pop32());
  /* 12982387 ret  */
  ESPCHK(0x129822f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002390 @ 0x12982390 (263 bytes, 86 insns) */
void f_12982390(void) {
  FTRACE(0x12982390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982390 push ebp */
  push32((uint32_t)(EBP));
  /* 12982391 mov ebp, esp */
  EBP = (ESP);
  /* 12982393 cmp dword ptr [0x129aca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x129aca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298239a je 0x12982495 */
  if (C.zf) goto L_12982495;
  /* 129823a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129823a4 jne 0x129823b5 */
  if (!C.zf) goto L_129823b5;
  /* 129823a6 mov eax, dword ptr [0x129aca5c] */
  EAX = (r32((uint32_t)(0x129aca5c)));
  /* 129823ab push eax */
  push32((uint32_t)(EAX));
  /* 129823ac call dword ptr [0x129b0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0290))), 0x129823b2u);
  /* 129823b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129823b5:;
  /* 129823b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129823b9 je 0x12982486 */
  if (C.zf) goto L_12982486;
  /* 129823bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129823c2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129823c6 je 0x129823d9 */
  if (C.zf) goto L_129823d9;
  /* 129823c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 129823ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129823cd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 129823d0 push eax */
  push32((uint32_t)(EAX));
  /* 129823d1 call 0x12983340 */
  push32(0x129823d6u); f_12983340();
  /* 129823d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129823d9:;
  /* 129823d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129823dc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129823e0 je 0x129823f3 */
  if (C.zf) goto L_129823f3;
  /* 129823e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 129823e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129823e7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 129823ea push eax */
  push32((uint32_t)(EAX));
  /* 129823eb call 0x12983340 */
  push32(0x129823f0u); f_12983340();
  /* 129823f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129823f3:;
  /* 129823f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129823f6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129823fa je 0x1298240d */
  if (C.zf) goto L_1298240d;
  /* 129823fc push 2 */
  push32((uint32_t)(0x2u));
  /* 129823fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982401 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12982404 push eax */
  push32((uint32_t)(EAX));
  /* 12982405 call 0x12983340 */
  push32(0x1298240au); f_12983340();
  /* 1298240a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298240d:;
  /* 1298240d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982410 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982414 je 0x12982427 */
  if (C.zf) goto L_12982427;
  /* 12982416 push 2 */
  push32((uint32_t)(0x2u));
  /* 12982418 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298241b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1298241e push eax */
  push32((uint32_t)(EAX));
  /* 1298241f call 0x12983340 */
  push32(0x12982424u); f_12983340();
  /* 12982424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12982427:;
  /* 12982427 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298242a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298242e je 0x12982441 */
  if (C.zf) goto L_12982441;
  /* 12982430 push 2 */
  push32((uint32_t)(0x2u));
  /* 12982432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982435 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12982438 push eax */
  push32((uint32_t)(EAX));
  /* 12982439 call 0x12983340 */
  push32(0x1298243eu); f_12983340();
  /* 1298243e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12982441:;
  /* 12982441 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982444 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982448 je 0x1298245b */
  if (C.zf) goto L_1298245b;
  /* 1298244a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298244c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298244f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12982452 push eax */
  push32((uint32_t)(EAX));
  /* 12982453 call 0x12983340 */
  push32(0x12982458u); f_12983340();
  /* 12982458 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298245b:;
  /* 1298245b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298245e cmp dword ptr [ecx + 0x50], 0x129acc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x129acc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982465 je 0x12982478 */
  if (C.zf) goto L_12982478;
  /* 12982467 push 2 */
  push32((uint32_t)(0x2u));
  /* 12982469 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298246c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1298246f push eax */
  push32((uint32_t)(EAX));
  /* 12982470 call 0x12983340 */
  push32(0x12982475u); f_12983340();
  /* 12982475 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12982478:;
  /* 12982478 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298247a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298247d push ecx */
  push32((uint32_t)(ECX));
  /* 1298247e call 0x12983340 */
  push32(0x12982483u); f_12983340();
  /* 12982483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12982486:;
  /* 12982486 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982488 mov edx, dword ptr [0x129aca5c] */
  EDX = (r32((uint32_t)(0x129aca5c)));
  /* 1298248e push edx */
  push32((uint32_t)(EDX));
  /* 1298248f call dword ptr [0x129b0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0280))), 0x12982495u);
L_12982495:;
  /* 12982495 pop ebp */
  EBP = (pop32());
  /* 12982496 ret  */
  ESPCHK(0x12982390u, _esp0);
  ESP += 4; return;
}

/* FUN_100024a0 @ 0x129824a0 (11 bytes, 5 insns) */
void f_129824a0(void) {
  FTRACE(0x129824a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129824a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129824a1 mov ebp, esp */
  EBP = (ESP);
  /* 129824a3 call dword ptr [0x129b027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b027c))), 0x129824a9u);
  /* 129824a9 pop ebp */
  EBP = (pop32());
  /* 129824aa ret  */
  ESPCHK(0x129824a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024b0 @ 0x129824b0 (11 bytes, 5 insns) */
void f_129824b0(void) {
  FTRACE(0x129824b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129824b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129824b1 mov ebp, esp */
  EBP = (ESP);
  /* 129824b3 call dword ptr [0x129b0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0298))), 0x129824b9u);
  /* 129824b9 pop ebp */
  EBP = (pop32());
  /* 129824ba ret  */
  ESPCHK(0x129824b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024c0 @ 0x129824c0 (804 bytes, 236 insns) */
void f_129824c0(void) {
  FTRACE(0x129824c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129824c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129824c1 mov ebp, esp */
  EBP = (ESP);
  /* 129824c3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129824c6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 129824cb push 0x129a936c */
  push32((uint32_t)(0x129a936cu));
  /* 129824d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 129824d2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 129824d7 call 0x129828b0 */
  push32(0x129824dcu); f_129828b0();
  /* 129824dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129824df mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 129824e2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129824e6 jne 0x129824f2 */
  if (!C.zf) goto L_129824f2;
  /* 129824e8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 129824ea call 0x12981820 */
  push32(0x129824efu); f_12981820();
  /* 129824ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129824f2:;
  /* 129824f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129824f5 mov dword ptr [0x129afe60], eax */
  w32((uint32_t)(0x129afe60), (EAX));
  /* 129824fa mov dword ptr [0x129aff9c], 0x20 */
  w32((uint32_t)(0x129aff9c), (0x20u));
  /* 12982504 jmp 0x1298250f */
  goto L_1298250f;
L_12982506:;
  /* 12982506 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12982509 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298250c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1298250f:;
  /* 1298250f mov edx, dword ptr [0x129afe60] */
  EDX = (r32((uint32_t)(0x129afe60)));
  /* 12982515 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298251b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298251e jae 0x12982543 */
  if (!C.cf) goto L_12982543;
  /* 12982520 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12982523 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12982527 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1298252a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12982530 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12982533 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12982537 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1298253a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12982541 jmp 0x12982506 */
  goto L_12982506;
L_12982543:;
  /* 12982543 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12982546 push ecx */
  push32((uint32_t)(ECX));
  /* 12982547 call dword ptr [0x129b02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a4))), 0x1298254du);
  /* 1298254d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12982550 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12982556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12982558 je 0x129826e5 */
  if (C.zf) goto L_129826e5;
  /* 1298255e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982562 je 0x129826e5 */
  if (C.zf) goto L_129826e5;
  /* 12982568 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298256b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298256d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12982570 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12982573 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982576 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12982579 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298257c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298257f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12982582 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982589 jge 0x12982593 */
  if ((C.sf==C.of)) goto L_12982593;
  /* 1298258b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1298258e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12982591 jmp 0x1298259a */
  goto L_1298259a;
L_12982593:;
  /* 12982593 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1298259a:;
  /* 1298259a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1298259d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 129825a0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 129825a7 jmp 0x129825b2 */
  goto L_129825b2;
L_129825a9:;
  /* 129825a9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 129825ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129825af mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_129825b2:;
  /* 129825b2 mov ecx, dword ptr [0x129aff9c] */
  ECX = (r32((uint32_t)(0x129aff9c)));
  /* 129825b8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129825bb jge 0x12982652 */
  if ((C.sf==C.of)) goto L_12982652;
  /* 129825c1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 129825c6 push 0x129a936c */
  push32((uint32_t)(0x129a936cu));
  /* 129825cb push 2 */
  push32((uint32_t)(0x2u));
  /* 129825cd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 129825d2 call 0x129828b0 */
  push32(0x129825d7u); f_129828b0();
  /* 129825d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129825da mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 129825dd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129825e1 jne 0x129825ee */
  if (!C.zf) goto L_129825ee;
  /* 129825e3 mov edx, dword ptr [0x129aff9c] */
  EDX = (r32((uint32_t)(0x129aff9c)));
  /* 129825e9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 129825ec jmp 0x12982652 */
  goto L_12982652;
L_129825ee:;
  /* 129825ee mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 129825f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 129825f4 mov dword ptr [eax*4 + 0x129afe60], ecx */
  w32((uint32_t)(EAX*4 + 0x129afe60), (ECX));
  /* 129825fb mov edx, dword ptr [0x129aff9c] */
  EDX = (r32((uint32_t)(0x129aff9c)));
  /* 12982601 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982604 mov dword ptr [0x129aff9c], edx */
  w32((uint32_t)(0x129aff9c), (EDX));
  /* 1298260a jmp 0x12982615 */
  goto L_12982615;
L_1298260c:;
  /* 1298260c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1298260f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982612 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12982615:;
  /* 12982615 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12982618 mov edx, dword ptr [ecx*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298261f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982625 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982628 jae 0x1298264d */
  if (!C.cf) goto L_1298264d;
  /* 1298262a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1298262d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12982631 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12982634 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1298263a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1298263d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12982641 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12982644 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1298264b jmp 0x1298260c */
  goto L_1298260c;
L_1298264d:;
  /* 1298264d jmp 0x129825a9 */
  goto L_129825a9;
L_12982652:;
  /* 12982652 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12982659 jmp 0x12982676 */
  goto L_12982676;
L_1298265b:;
  /* 1298265b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1298265e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982661 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12982664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982667 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298266a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298266d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12982670 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982673 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12982676:;
  /* 12982676 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12982679 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298267c jge 0x129826e5 */
  if ((C.sf==C.of)) goto L_129826e5;
  /* 1298267e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12982681 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982684 je 0x129826e0 */
  if (C.zf) goto L_129826e0;
  /* 12982686 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982689 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298268c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1298268f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12982691 je 0x129826e0 */
  if (C.zf) goto L_129826e0;
  /* 12982693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982696 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12982699 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1298269c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298269e jne 0x129826b0 */
  if (!C.zf) goto L_129826b0;
  /* 129826a0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 129826a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129826a5 push edx */
  push32((uint32_t)(EDX));
  /* 129826a6 call dword ptr [0x129b02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a0))), 0x129826acu);
  /* 129826ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129826ae je 0x129826e0 */
  if (C.zf) goto L_129826e0;
L_129826b0:;
  /* 129826b0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 129826b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 129826b6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 129826b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 129826bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129826bf mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 129826c6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129826c8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 129826cb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129826ce mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 129826d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129826d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129826d5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129826d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129826db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129826dd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_129826e0:;
  /* 129826e0 jmp 0x1298265b */
  goto L_1298265b;
L_129826e5:;
  /* 129826e5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 129826ec jmp 0x129826f7 */
  goto L_129826f7;
L_129826ee:;
  /* 129826ee mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 129826f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129826f4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_129826f7:;
  /* 129826f7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129826fb jge 0x129827d4 */
  if ((C.sf==C.of)) goto L_129827d4;
  /* 12982701 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12982704 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12982707 mov edx, dword ptr [0x129afe60] */
  EDX = (r32((uint32_t)(0x129afe60)));
  /* 1298270d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298270f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12982712 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12982715 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982718 jne 0x129827c0 */
  if (!C.zf) goto L_129827c0;
  /* 1298271e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12982721 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12982725 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982729 jne 0x12982734 */
  if (!C.zf) goto L_12982734;
  /* 1298272b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12982732 jmp 0x12982744 */
  goto L_12982744;
L_12982734:;
  /* 12982734 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12982737 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298273a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298273c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298273e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982741 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12982744:;
  /* 12982744 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12982747 push eax */
  push32((uint32_t)(EAX));
  /* 12982748 call dword ptr [0x129b0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0250))), 0x1298274eu);
  /* 1298274e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12982751 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982755 je 0x129827af */
  if (C.zf) goto L_129827af;
  /* 12982757 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1298275a push ecx */
  push32((uint32_t)(ECX));
  /* 1298275b call dword ptr [0x129b02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a0))), 0x12982761u);
  /* 12982761 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12982764 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982768 je 0x129827af */
  if (C.zf) goto L_129827af;
  /* 1298276a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1298276d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12982770 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12982772 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12982775 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1298277b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298277e jne 0x12982790 */
  if (!C.zf) goto L_12982790;
  /* 12982780 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12982783 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12982786 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12982788 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1298278b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1298278e jmp 0x129827ad */
  goto L_129827ad;
L_12982790:;
  /* 12982790 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12982793 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12982799 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298279c jne 0x129827ad */
  if (!C.zf) goto L_129827ad;
  /* 1298279e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129827a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129827a4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 129827a7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129827aa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_129827ad:;
  /* 129827ad jmp 0x129827be */
  goto L_129827be;
L_129827af:;
  /* 129827af mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129827b2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129827b5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 129827b8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129827bb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_129827be:;
  /* 129827be jmp 0x129827cf */
  goto L_129827cf;
L_129827c0:;
  /* 129827c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 129827c3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129827c6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 129827c9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 129827cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_129827cf:;
  /* 129827cf jmp 0x129826ee */
  goto L_129826ee;
L_129827d4:;
  /* 129827d4 mov eax, dword ptr [0x129aff9c] */
  EAX = (r32((uint32_t)(0x129aff9c)));
  /* 129827d9 push eax */
  push32((uint32_t)(EAX));
  /* 129827da call dword ptr [0x129b029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b029c))), 0x129827e0u);
  /* 129827e0 mov esp, ebp */
  ESP = (EBP);
  /* 129827e2 pop ebp */
  EBP = (pop32());
  /* 129827e3 ret  */
  ESPCHK(0x129824c0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x129827f0 (155 bytes, 45 insns) */
void f_129827f0(void) {
  FTRACE(0x129827f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129827f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129827f1 mov ebp, esp */
  EBP = (ESP);
  /* 129827f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129827f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129827fd jmp 0x12982808 */
  goto L_12982808;
L_129827ff:;
  /* 129827ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982802 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982805 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12982808:;
  /* 12982808 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298280c jge 0x12982887 */
  if ((C.sf==C.of)) goto L_12982887;
  /* 1298280e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982811 cmp dword ptr [ecx*4 + 0x129afe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x129afe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982819 je 0x12982882 */
  if (C.zf) goto L_12982882;
  /* 1298281b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298281e mov eax, dword ptr [edx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129afe60)));
  /* 12982825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12982828 jmp 0x12982833 */
  goto L_12982833;
L_1298282a:;
  /* 1298282a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298282d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982830 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12982833:;
  /* 12982833 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982836 mov eax, dword ptr [edx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129afe60)));
  /* 1298283d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982842 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982845 jae 0x1298285f */
  if (!C.cf) goto L_1298285f;
  /* 12982847 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298284a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298284e je 0x1298285d */
  if (C.zf) goto L_1298285d;
  /* 12982850 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982853 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982856 push edx */
  push32((uint32_t)(EDX));
  /* 12982857 call dword ptr [0x129b02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a8))), 0x1298285du);
L_1298285d:;
  /* 1298285d jmp 0x1298282a */
  goto L_1298282a;
L_1298285f:;
  /* 1298285f push 2 */
  push32((uint32_t)(0x2u));
  /* 12982861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982864 mov ecx, dword ptr [eax*4 + 0x129afe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298286b push ecx */
  push32((uint32_t)(ECX));
  /* 1298286c call 0x12983340 */
  push32(0x12982871u); f_12983340();
  /* 12982871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982874 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982877 mov dword ptr [edx*4 + 0x129afe60], 0 */
  w32((uint32_t)(EDX*4 + 0x129afe60), (0x0u));
L_12982882:;
  /* 12982882 jmp 0x129827ff */
  goto L_129827ff;
L_12982887:;
  /* 12982887 mov esp, ebp */
  ESP = (EBP);
  /* 12982889 pop ebp */
  EBP = (pop32());
  /* 1298288a ret  */
  ESPCHK(0x129827f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002890 @ 0x12982890 (29 bytes, 13 insns) */
void f_12982890(void) {
  FTRACE(0x12982890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982890 push ebp */
  push32((uint32_t)(EBP));
  /* 12982891 mov ebp, esp */
  EBP = (ESP);
  /* 12982893 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982895 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982897 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982899 mov eax, dword ptr [0x129ae670] */
  EAX = (r32((uint32_t)(0x129ae670)));
  /* 1298289e push eax */
  push32((uint32_t)(EAX));
  /* 1298289f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129828a2 push ecx */
  push32((uint32_t)(ECX));
  /* 129828a3 call 0x12982900 */
  push32(0x129828a8u); f_12982900();
  /* 129828a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129828ab pop ebp */
  EBP = (pop32());
  /* 129828ac ret  */
  ESPCHK(0x12982890u, _esp0);
  ESP += 4; return;
}

/* FUN_100028b0 @ 0x129828b0 (35 bytes, 16 insns) */
void f_129828b0(void) {
  FTRACE(0x129828b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129828b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129828b1 mov ebp, esp */
  EBP = (ESP);
  /* 129828b3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129828b6 push eax */
  push32((uint32_t)(EAX));
  /* 129828b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129828ba push ecx */
  push32((uint32_t)(ECX));
  /* 129828bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129828be push edx */
  push32((uint32_t)(EDX));
  /* 129828bf mov eax, dword ptr [0x129ae670] */
  EAX = (r32((uint32_t)(0x129ae670)));
  /* 129828c4 push eax */
  push32((uint32_t)(EAX));
  /* 129828c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129828c8 push ecx */
  push32((uint32_t)(ECX));
  /* 129828c9 call 0x12982900 */
  push32(0x129828ceu); f_12982900();
  /* 129828ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129828d1 pop ebp */
  EBP = (pop32());
  /* 129828d2 ret  */
  ESPCHK(0x129828b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028e0 @ 0x129828e0 (27 bytes, 13 insns) */
void f_129828e0(void) {
  FTRACE(0x129828e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129828e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129828e1 mov ebp, esp */
  EBP = (ESP);
  /* 129828e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129828e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129828e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 129828e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129828ec push eax */
  push32((uint32_t)(EAX));
  /* 129828ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129828f0 push ecx */
  push32((uint32_t)(ECX));
  /* 129828f1 call 0x12982900 */
  push32(0x129828f6u); f_12982900();
  /* 129828f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129828f9 pop ebp */
  EBP = (pop32());
  /* 129828fa ret  */
  ESPCHK(0x129828e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x12982900 (94 bytes, 38 insns) */
void f_12982900(void) {
  FTRACE(0x12982900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982900 push ebp */
  push32((uint32_t)(EBP));
  /* 12982901 mov ebp, esp */
  EBP = (ESP);
  /* 12982903 push ecx */
  push32((uint32_t)(ECX));
L_12982904:;
  /* 12982904 push 9 */
  push32((uint32_t)(0x9u));
  /* 12982906 call 0x129862b0 */
  push32(0x1298290bu); f_129862b0();
  /* 1298290b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298290e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12982911 push eax */
  push32((uint32_t)(EAX));
  /* 12982912 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12982915 push ecx */
  push32((uint32_t)(ECX));
  /* 12982916 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982919 push edx */
  push32((uint32_t)(EDX));
  /* 1298291a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298291d push eax */
  push32((uint32_t)(EAX));
  /* 1298291e call 0x12982980 */
  push32(0x12982923u); f_12982980();
  /* 12982923 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982926 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12982929 push 9 */
  push32((uint32_t)(0x9u));
  /* 1298292b call 0x12986350 */
  push32(0x12982930u); f_12986350();
  /* 12982930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982933 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982937 jne 0x1298293f */
  if (!C.zf) goto L_1298293f;
  /* 12982939 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298293d jne 0x12982944 */
  if (!C.zf) goto L_12982944;
L_1298293f:;
  /* 1298293f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982942 jmp 0x1298295a */
  goto L_1298295a;
L_12982944:;
  /* 12982944 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982947 push ecx */
  push32((uint32_t)(ECX));
  /* 12982948 call 0x129865f0 */
  push32(0x1298294du); f_129865f0();
  /* 1298294d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982950 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982952 jne 0x12982958 */
  if (!C.zf) goto L_12982958;
  /* 12982954 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982956 jmp 0x1298295a */
  goto L_1298295a;
L_12982958:;
  /* 12982958 jmp 0x12982904 */
  goto L_12982904;
L_1298295a:;
  /* 1298295a mov esp, ebp */
  ESP = (EBP);
  /* 1298295c pop ebp */
  EBP = (pop32());
  /* 1298295d ret  */
  ESPCHK(0x12982900u, _esp0);
  ESP += 4; return;
}

/* FUN_10002960 @ 0x12982960 (23 bytes, 11 insns) */
void f_12982960(void) {
  FTRACE(0x12982960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982960 push ebp */
  push32((uint32_t)(EBP));
  /* 12982961 mov ebp, esp */
  EBP = (ESP);
  /* 12982963 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982965 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982967 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982969 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298296c push eax */
  push32((uint32_t)(EAX));
  /* 1298296d call 0x12982980 */
  push32(0x12982972u); f_12982980();
  /* 12982972 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982975 pop ebp */
  EBP = (pop32());
  /* 12982976 ret  */
  ESPCHK(0x12982960u, _esp0);
  ESP += 4; return;
}

/* FUN_10002980 @ 0x12982980 (787 bytes, 254 insns) */
void f_12982980(void) {
  FTRACE(0x12982980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982980 push ebp */
  push32((uint32_t)(EBP));
  /* 12982981 mov ebp, esp */
  EBP = (ESP);
  /* 12982983 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12982986 push ebx */
  push32((uint32_t)(EBX));
  /* 12982987 push esi */
  push32((uint32_t)(ESI));
  /* 12982988 push edi */
  push32((uint32_t)(EDI));
  /* 12982989 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12982990 mov eax, dword ptr [0x129aca84] */
  EAX = (r32((uint32_t)(0x129aca84)));
  /* 12982995 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12982998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298299a je 0x129829cc */
  if (C.zf) goto L_129829cc;
L_1298299c:;
  /* 1298299c call 0x12983a50 */
  push32(0x129829a1u); f_12983a50();
  /* 129829a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129829a3 jne 0x129829c6 */
  if (!C.zf) goto L_129829c6;
  /* 129829a5 push 0x129a9460 */
  push32((uint32_t)(0x129a9460u));
  /* 129829aa push 0 */
  push32((uint32_t)(0x0u));
  /* 129829ac push 0x141 */
  push32((uint32_t)(0x141u));
  /* 129829b1 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 129829b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129829b8 call 0x12981970 */
  push32(0x129829bdu); f_12981970();
  /* 129829bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129829c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129829c3 jne 0x129829c6 */
  if (!C.zf) goto L_129829c6;
  /* 129829c5 int3  */
  x86_unimpl("int3 @ 0x129829c5");
L_129829c6:;
  /* 129829c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129829c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129829ca jne 0x1298299c */
  if (!C.zf) goto L_1298299c;
L_129829cc:;
  /* 129829cc mov edx, dword ptr [0x129aca88] */
  EDX = (r32((uint32_t)(0x129aca88)));
  /* 129829d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129829d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129829d8 cmp eax, dword ptr [0x129aca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129829de jne 0x129829e1 */
  if (!C.zf) goto L_129829e1;
  /* 129829e0 int3  */
  x86_unimpl("int3 @ 0x129829e0");
L_129829e1:;
  /* 129829e1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129829e4 push ecx */
  push32((uint32_t)(ECX));
  /* 129829e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129829e8 push edx */
  push32((uint32_t)(EDX));
  /* 129829e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129829ec push eax */
  push32((uint32_t)(EAX));
  /* 129829ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129829f0 push ecx */
  push32((uint32_t)(ECX));
  /* 129829f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129829f4 push edx */
  push32((uint32_t)(EDX));
  /* 129829f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129829f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 129829f9 call dword ptr [0x129acc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x129acc90))), 0x129829ffu);
  /* 129829ff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982a04 jne 0x12982a64 */
  if (!C.zf) goto L_12982a64;
  /* 12982a06 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982a0a je 0x12982a37 */
  if (C.zf) goto L_12982a37;
L_12982a0c:;
  /* 12982a0c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12982a0f push eax */
  push32((uint32_t)(EAX));
  /* 12982a10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982a13 push ecx */
  push32((uint32_t)(ECX));
  /* 12982a14 push 0x129a941c */
  push32((uint32_t)(0x129a941cu));
  /* 12982a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12982a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12982a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12982a21 call 0x12981970 */
  push32(0x12982a26u); f_12981970();
  /* 12982a26 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982a29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982a2c jne 0x12982a2f */
  if (!C.zf) goto L_12982a2f;
  /* 12982a2e int3  */
  x86_unimpl("int3 @ 0x12982a2e");
L_12982a2f:;
  /* 12982a2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12982a31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12982a33 jne 0x12982a0c */
  if (!C.zf) goto L_12982a0c;
  /* 12982a35 jmp 0x12982a5d */
  goto L_12982a5d;
L_12982a37:;
  /* 12982a37 push 0x129a93f8 */
  push32((uint32_t)(0x129a93f8u));
  /* 12982a3c push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12982a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982a49 call 0x12981970 */
  push32(0x12982a4eu); f_12981970();
  /* 12982a4e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982a51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982a54 jne 0x12982a57 */
  if (!C.zf) goto L_12982a57;
  /* 12982a56 int3  */
  x86_unimpl("int3 @ 0x12982a56");
L_12982a57:;
  /* 12982a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982a59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982a5b jne 0x12982a37 */
  if (!C.zf) goto L_12982a37;
L_12982a5d:;
  /* 12982a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982a5f jmp 0x12982c8c */
  goto L_12982c8c;
L_12982a64:;
  /* 12982a64 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982a67 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12982a6d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982a70 je 0x12982a86 */
  if (C.zf) goto L_12982a86;
  /* 12982a72 mov edx, dword ptr [0x129aca84] */
  EDX = (r32((uint32_t)(0x129aca84)));
  /* 12982a78 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12982a7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12982a7d jne 0x12982a86 */
  if (!C.zf) goto L_12982a86;
  /* 12982a7f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12982a86:;
  /* 12982a86 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982a8a ja 0x12982a97 */
  if ((!C.cf&&!C.zf)) goto L_12982a97;
  /* 12982a8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982a8f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982a92 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982a95 jbe 0x12982ac3 */
  if ((C.cf||C.zf)) goto L_12982ac3;
L_12982a97:;
  /* 12982a97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982a9a push ecx */
  push32((uint32_t)(ECX));
  /* 12982a9b push 0x129a93d0 */
  push32((uint32_t)(0x129a93d0u));
  /* 12982aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982aa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982aa8 call 0x12981970 */
  push32(0x12982aadu); f_12981970();
  /* 12982aad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982ab0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982ab3 jne 0x12982ab6 */
  if (!C.zf) goto L_12982ab6;
  /* 12982ab5 int3  */
  x86_unimpl("int3 @ 0x12982ab5");
L_12982ab6:;
  /* 12982ab6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12982ab8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12982aba jne 0x12982a97 */
  if (!C.zf) goto L_12982a97;
  /* 12982abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982abe jmp 0x12982c8c */
  goto L_12982c8c;
L_12982ac3:;
  /* 12982ac3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982ac6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12982acb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982ace je 0x12982b10 */
  if (C.zf) goto L_12982b10;
  /* 12982ad0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982ad4 je 0x12982b10 */
  if (C.zf) goto L_12982b10;
  /* 12982ad6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982ad9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12982adf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982ae2 je 0x12982b10 */
  if (C.zf) goto L_12982b10;
  /* 12982ae4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982ae8 je 0x12982b10 */
  if (C.zf) goto L_12982b10;
L_12982aea:;
  /* 12982aea push 0x129a939c */
  push32((uint32_t)(0x129a939cu));
  /* 12982aef push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12982af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982afa push 1 */
  push32((uint32_t)(0x1u));
  /* 12982afc call 0x12981970 */
  push32(0x12982b01u); f_12981970();
  /* 12982b01 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982b04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982b07 jne 0x12982b0a */
  if (!C.zf) goto L_12982b0a;
  /* 12982b09 int3  */
  x86_unimpl("int3 @ 0x12982b09");
L_12982b0a:;
  /* 12982b0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12982b0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12982b0e jne 0x12982aea */
  if (!C.zf) goto L_12982aea;
L_12982b10:;
  /* 12982b10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982b13 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982b16 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12982b19 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12982b1c push ecx */
  push32((uint32_t)(ECX));
  /* 12982b1d call 0x12986700 */
  push32(0x12982b22u); f_12986700();
  /* 12982b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982b25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12982b28 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982b2c jne 0x12982b35 */
  if (!C.zf) goto L_12982b35;
  /* 12982b2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982b30 jmp 0x12982c8c */
  goto L_12982c8c;
L_12982b35:;
  /* 12982b35 mov edx, dword ptr [0x129aca88] */
  EDX = (r32((uint32_t)(0x129aca88)));
  /* 12982b3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982b3e mov dword ptr [0x129aca88], edx */
  w32((uint32_t)(0x129aca88), (EDX));
  /* 12982b44 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982b48 je 0x12982b93 */
  if (C.zf) goto L_12982b93;
  /* 12982b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982b4d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12982b53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982b56 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12982b5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982b60 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12982b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982b6a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12982b71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982b74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982b77 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12982b7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982b7d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12982b84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982b87 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12982b8e jmp 0x12982c33 */
  goto L_12982c33;
L_12982b93:;
  /* 12982b93 mov edx, dword ptr [0x129ae4d0] */
  EDX = (r32((uint32_t)(0x129ae4d0)));
  /* 12982b99 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982b9c mov dword ptr [0x129ae4d0], edx */
  w32((uint32_t)(0x129ae4d0), (EDX));
  /* 12982ba2 mov eax, dword ptr [0x129ae4d8] */
  EAX = (r32((uint32_t)(0x129ae4d8)));
  /* 12982ba7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982baa mov dword ptr [0x129ae4d8], eax */
  w32((uint32_t)(0x129ae4d8), (EAX));
  /* 12982baf mov ecx, dword ptr [0x129ae4d8] */
  ECX = (r32((uint32_t)(0x129ae4d8)));
  /* 12982bb5 cmp ecx, dword ptr [0x129ae4dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129ae4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982bbb jbe 0x12982bc9 */
  if ((C.cf||C.zf)) goto L_12982bc9;
  /* 12982bbd mov edx, dword ptr [0x129ae4d8] */
  EDX = (r32((uint32_t)(0x129ae4d8)));
  /* 12982bc3 mov dword ptr [0x129ae4dc], edx */
  w32((uint32_t)(0x129ae4dc), (EDX));
L_12982bc9:;
  /* 12982bc9 cmp dword ptr [0x129ae4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982bd0 je 0x12982bdf */
  if (C.zf) goto L_12982bdf;
  /* 12982bd2 mov eax, dword ptr [0x129ae4d4] */
  EAX = (r32((uint32_t)(0x129ae4d4)));
  /* 12982bd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982bda mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12982bdd jmp 0x12982be8 */
  goto L_12982be8;
L_12982bdf:;
  /* 12982bdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982be2 mov dword ptr [0x129ae4cc], edx */
  w32((uint32_t)(0x129ae4cc), (EDX));
L_12982be8:;
  /* 12982be8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982beb mov ecx, dword ptr [0x129ae4d4] */
  ECX = (r32((uint32_t)(0x129ae4d4)));
  /* 12982bf1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12982bf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982bf6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12982bfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c00 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982c03 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12982c06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c09 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12982c0c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12982c0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982c15 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12982c18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982c1e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12982c21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982c27 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12982c2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c2d mov dword ptr [0x129ae4d4], ecx */
  w32((uint32_t)(0x129ae4d4), (ECX));
L_12982c33:;
  /* 12982c33 push 4 */
  push32((uint32_t)(0x4u));
  /* 12982c35 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12982c37 mov dl, byte ptr [0x129aca90] */
  DL = (r8((uint32_t)(0x129aca90)));
  /* 12982c3d push edx */
  push32((uint32_t)(EDX));
  /* 12982c3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c41 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982c44 push eax */
  push32((uint32_t)(EAX));
  /* 12982c45 call 0x12986620 */
  push32(0x12982c4au); f_12986620();
  /* 12982c4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982c4d push 4 */
  push32((uint32_t)(0x4u));
  /* 12982c4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12982c51 mov cl, byte ptr [0x129aca90] */
  CL = (r8((uint32_t)(0x129aca90)));
  /* 12982c57 push ecx */
  push32((uint32_t)(ECX));
  /* 12982c58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982c5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c5e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12982c62 push ecx */
  push32((uint32_t)(ECX));
  /* 12982c63 call 0x12986620 */
  push32(0x12982c68u); f_12986620();
  /* 12982c68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982c6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982c6e push edx */
  push32((uint32_t)(EDX));
  /* 12982c6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982c71 mov al, byte ptr [0x129aca92] */
  AL = (r8((uint32_t)(0x129aca92)));
  /* 12982c76 push eax */
  push32((uint32_t)(EAX));
  /* 12982c77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c7a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982c7d push ecx */
  push32((uint32_t)(ECX));
  /* 12982c7e call 0x12986620 */
  push32(0x12982c83u); f_12986620();
  /* 12982c83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982c86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982c89 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12982c8c:;
  /* 12982c8c pop edi */
  EDI = (pop32());
  /* 12982c8d pop esi */
  ESI = (pop32());
  /* 12982c8e pop ebx */
  EBX = (pop32());
  /* 12982c8f mov esp, ebp */
  ESP = (EBP);
  /* 12982c91 pop ebp */
  EBP = (pop32());
  /* 12982c92 ret  */
  ESPCHK(0x12982980u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ca0 @ 0x12982ca0 (27 bytes, 13 insns) */
void f_12982ca0(void) {
  FTRACE(0x12982ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12982ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12982ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982ca7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982ca9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982cac push eax */
  push32((uint32_t)(EAX));
  /* 12982cad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12982cb1 call 0x12982cc0 */
  push32(0x12982cb6u); f_12982cc0();
  /* 12982cb6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982cb9 pop ebp */
  EBP = (pop32());
  /* 12982cba ret  */
  ESPCHK(0x12982ca0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12982cc0 (96 bytes, 37 insns) */
void f_12982cc0(void) {
  FTRACE(0x12982cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12982cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12982cc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12982cc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982cc9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12982ccd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12982cd0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12982cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12982cd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12982cd7 push edx */
  push32((uint32_t)(EDX));
  /* 12982cd8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982cdb push eax */
  push32((uint32_t)(EAX));
  /* 12982cdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982cdf push ecx */
  push32((uint32_t)(ECX));
  /* 12982ce0 call 0x129828b0 */
  push32(0x12982ce5u); f_129828b0();
  /* 12982ce5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982ce8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12982ceb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982cef je 0x12982d19 */
  if (C.zf) goto L_12982d19;
  /* 12982cf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982cf4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12982cf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12982cfa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982cfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12982d00:;
  /* 12982d00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12982d03 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982d06 jae 0x12982d19 */
  if (!C.cf) goto L_12982d19;
  /* 12982d08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12982d0b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12982d0e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12982d11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12982d14 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12982d17 jmp 0x12982d00 */
  goto L_12982d00;
L_12982d19:;
  /* 12982d19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982d1c mov esp, ebp */
  ESP = (EBP);
  /* 12982d1e pop ebp */
  EBP = (pop32());
  /* 12982d1f ret  */
  ESPCHK(0x12982cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d20 @ 0x12982d20 (27 bytes, 13 insns) */
void f_12982d20(void) {
  FTRACE(0x12982d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12982d21 mov ebp, esp */
  EBP = (ESP);
  /* 12982d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982d27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982d29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982d2c push eax */
  push32((uint32_t)(EAX));
  /* 12982d2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982d30 push ecx */
  push32((uint32_t)(ECX));
  /* 12982d31 call 0x12982d40 */
  push32(0x12982d36u); f_12982d40();
  /* 12982d36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982d39 pop ebp */
  EBP = (pop32());
  /* 12982d3a ret  */
  ESPCHK(0x12982d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d40 @ 0x12982d40 (64 bytes, 27 insns) */
void f_12982d40(void) {
  FTRACE(0x12982d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12982d41 mov ebp, esp */
  EBP = (ESP);
  /* 12982d43 push ecx */
  push32((uint32_t)(ECX));
  /* 12982d44 push 9 */
  push32((uint32_t)(0x9u));
  /* 12982d46 call 0x129862b0 */
  push32(0x12982d4bu); f_129862b0();
  /* 12982d4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982d4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12982d50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12982d53 push eax */
  push32((uint32_t)(EAX));
  /* 12982d54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12982d57 push ecx */
  push32((uint32_t)(ECX));
  /* 12982d58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982d5b push edx */
  push32((uint32_t)(EDX));
  /* 12982d5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982d5f push eax */
  push32((uint32_t)(EAX));
  /* 12982d60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982d63 push ecx */
  push32((uint32_t)(ECX));
  /* 12982d64 call 0x12982d80 */
  push32(0x12982d69u); f_12982d80();
  /* 12982d69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982d6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12982d6f push 9 */
  push32((uint32_t)(0x9u));
  /* 12982d71 call 0x12986350 */
  push32(0x12982d76u); f_12986350();
  /* 12982d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982d79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12982d7c mov esp, ebp */
  ESP = (EBP);
  /* 12982d7e pop ebp */
  EBP = (pop32());
  /* 12982d7f ret  */
  ESPCHK(0x12982d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d80 @ 0x12982d80 (1297 bytes, 431 insns) */
void f_12982d80(void) {
  FTRACE(0x12982d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12982d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12982d81 mov ebp, esp */
  EBP = (ESP);
  /* 12982d83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12982d86 push ebx */
  push32((uint32_t)(EBX));
  /* 12982d87 push esi */
  push32((uint32_t)(ESI));
  /* 12982d88 push edi */
  push32((uint32_t)(EDI));
  /* 12982d89 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12982d90 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982d94 jne 0x12982db3 */
  if (!C.zf) goto L_12982db3;
  /* 12982d96 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12982d99 push eax */
  push32((uint32_t)(EAX));
  /* 12982d9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12982d9d push ecx */
  push32((uint32_t)(ECX));
  /* 12982d9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982da1 push edx */
  push32((uint32_t)(EDX));
  /* 12982da2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982da5 push eax */
  push32((uint32_t)(EAX));
  /* 12982da6 call 0x129828b0 */
  push32(0x12982dabu); f_129828b0();
  /* 12982dab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982dae jmp 0x1298328a */
  goto L_1298328a;
L_12982db3:;
  /* 12982db3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982db7 je 0x12982dd6 */
  if (C.zf) goto L_12982dd6;
  /* 12982db9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982dbd jne 0x12982dd6 */
  if (!C.zf) goto L_12982dd6;
  /* 12982dbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982dc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12982dc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982dc6 push edx */
  push32((uint32_t)(EDX));
  /* 12982dc7 call 0x12983340 */
  push32(0x12982dccu); f_12983340();
  /* 12982dcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982dd1 jmp 0x1298328a */
  goto L_1298328a;
L_12982dd6:;
  /* 12982dd6 mov eax, dword ptr [0x129aca84] */
  EAX = (r32((uint32_t)(0x129aca84)));
  /* 12982ddb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12982dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982de0 je 0x12982e12 */
  if (C.zf) goto L_12982e12;
L_12982de2:;
  /* 12982de2 call 0x12983a50 */
  push32(0x12982de7u); f_12983a50();
  /* 12982de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982de9 jne 0x12982e0c */
  if (!C.zf) goto L_12982e0c;
  /* 12982deb push 0x129a9460 */
  push32((uint32_t)(0x129a9460u));
  /* 12982df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982df2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12982df7 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 12982dfc push 2 */
  push32((uint32_t)(0x2u));
  /* 12982dfe call 0x12981970 */
  push32(0x12982e03u); f_12981970();
  /* 12982e03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982e06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982e09 jne 0x12982e0c */
  if (!C.zf) goto L_12982e0c;
  /* 12982e0b int3  */
  x86_unimpl("int3 @ 0x12982e0b");
L_12982e0c:;
  /* 12982e0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12982e0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12982e10 jne 0x12982de2 */
  if (!C.zf) goto L_12982de2;
L_12982e12:;
  /* 12982e12 mov edx, dword ptr [0x129aca88] */
  EDX = (r32((uint32_t)(0x129aca88)));
  /* 12982e18 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12982e1b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12982e1e cmp eax, dword ptr [0x129aca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982e24 jne 0x12982e27 */
  if (!C.zf) goto L_12982e27;
  /* 12982e26 int3  */
  x86_unimpl("int3 @ 0x12982e26");
L_12982e27:;
  /* 12982e27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12982e2a push ecx */
  push32((uint32_t)(ECX));
  /* 12982e2b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12982e2e push edx */
  push32((uint32_t)(EDX));
  /* 12982e2f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12982e32 push eax */
  push32((uint32_t)(EAX));
  /* 12982e33 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982e36 push ecx */
  push32((uint32_t)(ECX));
  /* 12982e37 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982e3a push edx */
  push32((uint32_t)(EDX));
  /* 12982e3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982e3e push eax */
  push32((uint32_t)(EAX));
  /* 12982e3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12982e41 call dword ptr [0x129acc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x129acc90))), 0x12982e47u);
  /* 12982e47 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982e4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982e4c jne 0x12982eac */
  if (!C.zf) goto L_12982eac;
  /* 12982e4e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982e52 je 0x12982e7f */
  if (C.zf) goto L_12982e7f;
L_12982e54:;
  /* 12982e54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12982e57 push ecx */
  push32((uint32_t)(ECX));
  /* 12982e58 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12982e5b push edx */
  push32((uint32_t)(EDX));
  /* 12982e5c push 0x129a95dc */
  push32((uint32_t)(0x129a95dcu));
  /* 12982e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982e69 call 0x12981970 */
  push32(0x12982e6eu); f_12981970();
  /* 12982e6e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982e71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982e74 jne 0x12982e77 */
  if (!C.zf) goto L_12982e77;
  /* 12982e76 int3  */
  x86_unimpl("int3 @ 0x12982e76");
L_12982e77:;
  /* 12982e77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982e7b jne 0x12982e54 */
  if (!C.zf) goto L_12982e54;
  /* 12982e7d jmp 0x12982ea5 */
  goto L_12982ea5;
L_12982e7f:;
  /* 12982e7f push 0x129a95b8 */
  push32((uint32_t)(0x129a95b8u));
  /* 12982e84 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12982e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982e8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12982e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12982e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12982e91 call 0x12981970 */
  push32(0x12982e96u); f_12981970();
  /* 12982e96 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982e99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982e9c jne 0x12982e9f */
  if (!C.zf) goto L_12982e9f;
  /* 12982e9e int3  */
  x86_unimpl("int3 @ 0x12982e9e");
L_12982e9f:;
  /* 12982e9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12982ea1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12982ea3 jne 0x12982e7f */
  if (!C.zf) goto L_12982e7f;
L_12982ea5:;
  /* 12982ea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982ea7 jmp 0x1298328a */
  goto L_1298328a;
L_12982eac:;
  /* 12982eac cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982eb0 jbe 0x12982ede */
  if ((C.cf||C.zf)) goto L_12982ede;
L_12982eb2:;
  /* 12982eb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12982eb5 push edx */
  push32((uint32_t)(EDX));
  /* 12982eb6 push 0x129a9588 */
  push32((uint32_t)(0x129a9588u));
  /* 12982ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 12982ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 12982ebf push 0 */
  push32((uint32_t)(0x0u));
  /* 12982ec1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982ec3 call 0x12981970 */
  push32(0x12982ec8u); f_12981970();
  /* 12982ec8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982ecb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982ece jne 0x12982ed1 */
  if (!C.zf) goto L_12982ed1;
  /* 12982ed0 int3  */
  x86_unimpl("int3 @ 0x12982ed0");
L_12982ed1:;
  /* 12982ed1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982ed5 jne 0x12982eb2 */
  if (!C.zf) goto L_12982eb2;
  /* 12982ed7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982ed9 jmp 0x1298328a */
  goto L_1298328a;
L_12982ede:;
  /* 12982ede cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982ee2 je 0x12982f26 */
  if (C.zf) goto L_12982f26;
  /* 12982ee4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982ee7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12982eed cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982ef0 je 0x12982f26 */
  if (C.zf) goto L_12982f26;
  /* 12982ef2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982ef5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12982efb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982efe je 0x12982f26 */
  if (C.zf) goto L_12982f26;
L_12982f00:;
  /* 12982f00 push 0x129a939c */
  push32((uint32_t)(0x129a939cu));
  /* 12982f05 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12982f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12982f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12982f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12982f10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12982f12 call 0x12981970 */
  push32(0x12982f17u); f_12981970();
  /* 12982f17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982f1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982f1d jne 0x12982f20 */
  if (!C.zf) goto L_12982f20;
  /* 12982f1f int3  */
  x86_unimpl("int3 @ 0x12982f1f");
L_12982f20:;
  /* 12982f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12982f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982f24 jne 0x12982f00 */
  if (!C.zf) goto L_12982f00;
L_12982f26:;
  /* 12982f26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982f29 push ecx */
  push32((uint32_t)(ECX));
  /* 12982f2a call 0x12983eb0 */
  push32(0x12982f2fu); f_12983eb0();
  /* 12982f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12982f34 jne 0x12982f57 */
  if (!C.zf) goto L_12982f57;
  /* 12982f36 push 0x129a9564 */
  push32((uint32_t)(0x129a9564u));
  /* 12982f3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12982f3d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12982f42 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 12982f47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12982f49 call 0x12981970 */
  push32(0x12982f4eu); f_12981970();
  /* 12982f4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982f51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982f54 jne 0x12982f57 */
  if (!C.zf) goto L_12982f57;
  /* 12982f56 int3  */
  x86_unimpl("int3 @ 0x12982f56");
L_12982f57:;
  /* 12982f57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12982f59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12982f5b jne 0x12982f26 */
  if (!C.zf) goto L_12982f26;
  /* 12982f5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12982f60 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12982f63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12982f66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982f69 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982f6d jne 0x12982f76 */
  if (!C.zf) goto L_12982f76;
  /* 12982f6f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12982f76:;
  /* 12982f76 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982f7a je 0x12982fba */
  if (C.zf) goto L_12982fba;
L_12982f7c:;
  /* 12982f7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982f7f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982f86 jne 0x12982f91 */
  if (!C.zf) goto L_12982f91;
  /* 12982f88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982f8b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982f8f je 0x12982fb2 */
  if (C.zf) goto L_12982fb2;
L_12982f91:;
  /* 12982f91 push 0x129a951c */
  push32((uint32_t)(0x129a951cu));
  /* 12982f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12982f98 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12982f9d push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 12982fa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12982fa4 call 0x12981970 */
  push32(0x12982fa9u); f_12981970();
  /* 12982fa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12982fac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982faf jne 0x12982fb2 */
  if (!C.zf) goto L_12982fb2;
  /* 12982fb1 int3  */
  x86_unimpl("int3 @ 0x12982fb1");
L_12982fb2:;
  /* 12982fb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12982fb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12982fb6 jne 0x12982f7c */
  if (!C.zf) goto L_12982f7c;
  /* 12982fb8 jmp 0x1298301e */
  goto L_1298301e;
L_12982fba:;
  /* 12982fba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982fbd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12982fc0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12982fc5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982fc8 jne 0x12982fdf */
  if (!C.zf) goto L_12982fdf;
  /* 12982fca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982fcd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12982fd3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982fd6 jne 0x12982fdf */
  if (!C.zf) goto L_12982fdf;
  /* 12982fd8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12982fdf:;
  /* 12982fdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12982fe2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12982fe5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12982fea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12982fed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12982ff3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12982ff5 je 0x12983018 */
  if (C.zf) goto L_12983018;
  /* 12982ff7 push 0x129a94e0 */
  push32((uint32_t)(0x129a94e0u));
  /* 12982ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 12982ffe push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12983003 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 12983008 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298300a call 0x12981970 */
  push32(0x1298300fu); f_12981970();
  /* 1298300f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983012 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983015 jne 0x12983018 */
  if (!C.zf) goto L_12983018;
  /* 12983017 int3  */
  x86_unimpl("int3 @ 0x12983017");
L_12983018:;
  /* 12983018 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298301a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298301c jne 0x12982fdf */
  if (!C.zf) goto L_12982fdf;
L_1298301e:;
  /* 1298301e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983022 je 0x12983049 */
  if (C.zf) goto L_12983049;
  /* 12983024 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12983027 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298302a push eax */
  push32((uint32_t)(EAX));
  /* 1298302b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298302e push ecx */
  push32((uint32_t)(ECX));
  /* 1298302f call 0x12986830 */
  push32(0x12983034u); f_12986830();
  /* 12983034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983037 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298303a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298303e jne 0x12983047 */
  if (!C.zf) goto L_12983047;
  /* 12983040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983042 jmp 0x1298328a */
  goto L_1298328a;
L_12983047:;
  /* 12983047 jmp 0x1298306c */
  goto L_1298306c;
L_12983049:;
  /* 12983049 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298304c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298304f push edx */
  push32((uint32_t)(EDX));
  /* 12983050 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983053 push eax */
  push32((uint32_t)(EAX));
  /* 12983054 call 0x12986780 */
  push32(0x12983059u); f_12986780();
  /* 12983059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298305c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298305f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983063 jne 0x1298306c */
  if (!C.zf) goto L_1298306c;
  /* 12983065 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983067 jmp 0x1298328a */
  goto L_1298328a;
L_1298306c:;
  /* 1298306c mov ecx, dword ptr [0x129aca88] */
  ECX = (r32((uint32_t)(0x129aca88)));
  /* 12983072 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983075 mov dword ptr [0x129aca88], ecx */
  w32((uint32_t)(0x129aca88), (ECX));
  /* 1298307b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298307f jne 0x129830d7 */
  if (!C.zf) goto L_129830d7;
  /* 12983081 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983084 mov eax, dword ptr [0x129ae4d0] */
  EAX = (r32((uint32_t)(0x129ae4d0)));
  /* 12983089 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298308c mov dword ptr [0x129ae4d0], eax */
  w32((uint32_t)(0x129ae4d0), (EAX));
  /* 12983091 mov ecx, dword ptr [0x129ae4d0] */
  ECX = (r32((uint32_t)(0x129ae4d0)));
  /* 12983097 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298309a mov dword ptr [0x129ae4d0], ecx */
  w32((uint32_t)(0x129ae4d0), (ECX));
  /* 129830a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129830a3 mov eax, dword ptr [0x129ae4d8] */
  EAX = (r32((uint32_t)(0x129ae4d8)));
  /* 129830a8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129830ab mov dword ptr [0x129ae4d8], eax */
  w32((uint32_t)(0x129ae4d8), (EAX));
  /* 129830b0 mov ecx, dword ptr [0x129ae4d8] */
  ECX = (r32((uint32_t)(0x129ae4d8)));
  /* 129830b6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129830b9 mov dword ptr [0x129ae4d8], ecx */
  w32((uint32_t)(0x129ae4d8), (ECX));
  /* 129830bf mov edx, dword ptr [0x129ae4d8] */
  EDX = (r32((uint32_t)(0x129ae4d8)));
  /* 129830c5 cmp edx, dword ptr [0x129ae4dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129ae4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129830cb jbe 0x129830d7 */
  if ((C.cf||C.zf)) goto L_129830d7;
  /* 129830cd mov eax, dword ptr [0x129ae4d8] */
  EAX = (r32((uint32_t)(0x129ae4d8)));
  /* 129830d2 mov dword ptr [0x129ae4dc], eax */
  w32((uint32_t)(0x129ae4dc), (EAX));
L_129830d7:;
  /* 129830d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129830da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129830dd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129830e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129830e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129830e6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129830e9 jbe 0x1298310f */
  if ((C.cf||C.zf)) goto L_1298310f;
  /* 129830eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129830ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129830f1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129830f4 push edx */
  push32((uint32_t)(EDX));
  /* 129830f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129830f7 mov al, byte ptr [0x129aca92] */
  AL = (r8((uint32_t)(0x129aca92)));
  /* 129830fc push eax */
  push32((uint32_t)(EAX));
  /* 129830fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983100 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983103 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983106 push edx */
  push32((uint32_t)(EDX));
  /* 12983107 call 0x12986620 */
  push32(0x1298310cu); f_12986620();
  /* 1298310c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298310f:;
  /* 1298310f push 4 */
  push32((uint32_t)(0x4u));
  /* 12983111 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983113 mov al, byte ptr [0x129aca90] */
  AL = (r8((uint32_t)(0x129aca90)));
  /* 12983118 push eax */
  push32((uint32_t)(EAX));
  /* 12983119 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298311c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298311f push ecx */
  push32((uint32_t)(ECX));
  /* 12983120 call 0x12986620 */
  push32(0x12983125u); f_12986620();
  /* 12983125 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983128 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298312c jne 0x12983149 */
  if (!C.zf) goto L_12983149;
  /* 1298312e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983131 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12983134 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12983137 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298313a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298313d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12983140 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983143 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12983146 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12983149:;
  /* 12983149 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298314c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298314f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12983152:;
  /* 12983152 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983156 jne 0x12983187 */
  if (!C.zf) goto L_12983187;
  /* 12983158 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298315c jne 0x12983166 */
  if (!C.zf) goto L_12983166;
  /* 1298315e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983161 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983164 je 0x12983187 */
  if (C.zf) goto L_12983187;
L_12983166:;
  /* 12983166 push 0x129a94ac */
  push32((uint32_t)(0x129a94acu));
  /* 1298316b push 0 */
  push32((uint32_t)(0x0u));
  /* 1298316d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12983172 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 12983177 push 2 */
  push32((uint32_t)(0x2u));
  /* 12983179 call 0x12981970 */
  push32(0x1298317eu); f_12981970();
  /* 1298317e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983181 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983184 jne 0x12983187 */
  if (!C.zf) goto L_12983187;
  /* 12983186 int3  */
  x86_unimpl("int3 @ 0x12983186");
L_12983187:;
  /* 12983187 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12983189 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298318b jne 0x12983152 */
  if (!C.zf) goto L_12983152;
  /* 1298318d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983190 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983193 je 0x1298319b */
  if (C.zf) goto L_1298319b;
  /* 12983195 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983199 je 0x129831a3 */
  if (C.zf) goto L_129831a3;
L_1298319b:;
  /* 1298319b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298319e jmp 0x1298328a */
  goto L_1298328a;
L_129831a3:;
  /* 129831a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129831a6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129831a9 je 0x129831bb */
  if (C.zf) goto L_129831bb;
  /* 129831ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129831ae mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129831b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129831b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129831b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129831b9 jmp 0x129831f7 */
  goto L_129831f7;
L_129831bb:;
  /* 129831bb mov eax, dword ptr [0x129ae4cc] */
  EAX = (r32((uint32_t)(0x129ae4cc)));
  /* 129831c0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129831c3 je 0x129831e6 */
  if (C.zf) goto L_129831e6;
  /* 129831c5 push 0x129a9490 */
  push32((uint32_t)(0x129a9490u));
  /* 129831ca push 0 */
  push32((uint32_t)(0x0u));
  /* 129831cc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 129831d1 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 129831d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 129831d8 call 0x12981970 */
  push32(0x129831ddu); f_12981970();
  /* 129831dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129831e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129831e3 jne 0x129831e6 */
  if (!C.zf) goto L_129831e6;
  /* 129831e5 int3  */
  x86_unimpl("int3 @ 0x129831e5");
L_129831e6:;
  /* 129831e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129831e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129831ea jne 0x129831bb */
  if (!C.zf) goto L_129831bb;
  /* 129831ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129831ef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129831f2 mov dword ptr [0x129ae4cc], eax */
  w32((uint32_t)(0x129ae4cc), (EAX));
L_129831f7:;
  /* 129831f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129831fa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129831fe je 0x1298320f */
  if (C.zf) goto L_1298320f;
  /* 12983200 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983203 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12983206 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983209 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298320b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1298320d jmp 0x1298324a */
  goto L_1298324a;
L_1298320f:;
  /* 1298320f mov eax, dword ptr [0x129ae4d4] */
  EAX = (r32((uint32_t)(0x129ae4d4)));
  /* 12983214 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983217 je 0x1298323a */
  if (C.zf) goto L_1298323a;
  /* 12983219 push 0x129a9474 */
  push32((uint32_t)(0x129a9474u));
  /* 1298321e push 0 */
  push32((uint32_t)(0x0u));
  /* 12983220 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12983225 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 1298322a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298322c call 0x12981970 */
  push32(0x12983231u); f_12981970();
  /* 12983231 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983234 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983237 jne 0x1298323a */
  if (!C.zf) goto L_1298323a;
  /* 12983239 int3  */
  x86_unimpl("int3 @ 0x12983239");
L_1298323a:;
  /* 1298323a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298323c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298323e jne 0x1298320f */
  if (!C.zf) goto L_1298320f;
  /* 12983240 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983243 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12983245 mov dword ptr [0x129ae4d4], eax */
  w32((uint32_t)(0x129ae4d4), (EAX));
L_1298324a:;
  /* 1298324a cmp dword ptr [0x129ae4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983251 je 0x12983261 */
  if (C.zf) goto L_12983261;
  /* 12983253 mov ecx, dword ptr [0x129ae4d4] */
  ECX = (r32((uint32_t)(0x129ae4d4)));
  /* 12983259 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298325c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1298325f jmp 0x12983269 */
  goto L_12983269;
L_12983261:;
  /* 12983261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983264 mov dword ptr [0x129ae4cc], eax */
  w32((uint32_t)(0x129ae4cc), (EAX));
L_12983269:;
  /* 12983269 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298326c mov edx, dword ptr [0x129ae4d4] */
  EDX = (r32((uint32_t)(0x129ae4d4)));
  /* 12983272 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12983274 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983277 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1298327e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983281 mov dword ptr [0x129ae4d4], ecx */
  w32((uint32_t)(0x129ae4d4), (ECX));
  /* 12983287 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298328a:;
  /* 1298328a pop edi */
  EDI = (pop32());
  /* 1298328b pop esi */
  ESI = (pop32());
  /* 1298328c pop ebx */
  EBX = (pop32());
  /* 1298328d mov esp, ebp */
  ESP = (EBP);
  /* 1298328f pop ebp */
  EBP = (pop32());
  /* 12983290 ret  */
  ESPCHK(0x12982d80u, _esp0);
  ESP += 4; return;
}

/* FUN_100032a0 @ 0x129832a0 (27 bytes, 13 insns) */
void f_129832a0(void) {
  FTRACE(0x129832a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129832a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129832a1 mov ebp, esp */
  EBP = (ESP);
  /* 129832a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129832a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129832a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 129832a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129832ac push eax */
  push32((uint32_t)(EAX));
  /* 129832ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129832b0 push ecx */
  push32((uint32_t)(ECX));
  /* 129832b1 call 0x129832c0 */
  push32(0x129832b6u); f_129832c0();
  /* 129832b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129832b9 pop ebp */
  EBP = (pop32());
  /* 129832ba ret  */
  ESPCHK(0x129832a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032c0 @ 0x129832c0 (64 bytes, 27 insns) */
void f_129832c0(void) {
  FTRACE(0x129832c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129832c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129832c1 mov ebp, esp */
  EBP = (ESP);
  /* 129832c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129832c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 129832c6 call 0x129862b0 */
  push32(0x129832cbu); f_129862b0();
  /* 129832cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129832ce push 0 */
  push32((uint32_t)(0x0u));
  /* 129832d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 129832d3 push eax */
  push32((uint32_t)(EAX));
  /* 129832d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129832d7 push ecx */
  push32((uint32_t)(ECX));
  /* 129832d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129832db push edx */
  push32((uint32_t)(EDX));
  /* 129832dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129832df push eax */
  push32((uint32_t)(EAX));
  /* 129832e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129832e3 push ecx */
  push32((uint32_t)(ECX));
  /* 129832e4 call 0x12982d80 */
  push32(0x129832e9u); f_12982d80();
  /* 129832e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129832ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129832ef push 9 */
  push32((uint32_t)(0x9u));
  /* 129832f1 call 0x12986350 */
  push32(0x129832f6u); f_12986350();
  /* 129832f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129832f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129832fc mov esp, ebp */
  ESP = (EBP);
  /* 129832fe pop ebp */
  EBP = (pop32());
  /* 129832ff ret  */
  ESPCHK(0x129832c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003300 @ 0x12983300 (19 bytes, 9 insns) */
void f_12983300(void) {
  FTRACE(0x12983300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983300 push ebp */
  push32((uint32_t)(EBP));
  /* 12983301 mov ebp, esp */
  EBP = (ESP);
  /* 12983303 push 1 */
  push32((uint32_t)(0x1u));
  /* 12983305 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983308 push eax */
  push32((uint32_t)(EAX));
  /* 12983309 call 0x12983340 */
  push32(0x1298330eu); f_12983340();
  /* 1298330e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983311 pop ebp */
  EBP = (pop32());
  /* 12983312 ret  */
  ESPCHK(0x12983300u, _esp0);
  ESP += 4; return;
}

/* FUN_10003320 @ 0x12983320 (19 bytes, 9 insns) */
void f_12983320(void) {
  FTRACE(0x12983320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983320 push ebp */
  push32((uint32_t)(EBP));
  /* 12983321 mov ebp, esp */
  EBP = (ESP);
  /* 12983323 push 1 */
  push32((uint32_t)(0x1u));
  /* 12983325 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983328 push eax */
  push32((uint32_t)(EAX));
  /* 12983329 call 0x12983370 */
  push32(0x1298332eu); f_12983370();
  /* 1298332e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983331 pop ebp */
  EBP = (pop32());
  /* 12983332 ret  */
  ESPCHK(0x12983320u, _esp0);
  ESP += 4; return;
}

/* FUN_10003340 @ 0x12983340 (41 bytes, 16 insns) */
void f_12983340(void) {
  FTRACE(0x12983340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983340 push ebp */
  push32((uint32_t)(EBP));
  /* 12983341 mov ebp, esp */
  EBP = (ESP);
  /* 12983343 push 9 */
  push32((uint32_t)(0x9u));
  /* 12983345 call 0x129862b0 */
  push32(0x1298334au); f_129862b0();
  /* 1298334a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298334d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12983350 push eax */
  push32((uint32_t)(EAX));
  /* 12983351 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983354 push ecx */
  push32((uint32_t)(ECX));
  /* 12983355 call 0x12983370 */
  push32(0x1298335au); f_12983370();
  /* 1298335a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298335d push 9 */
  push32((uint32_t)(0x9u));
  /* 1298335f call 0x12986350 */
  push32(0x12983364u); f_12986350();
  /* 12983364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983367 pop ebp */
  EBP = (pop32());
  /* 12983368 ret  */
  ESPCHK(0x12983340u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x12983370 (1004 bytes, 342 insns) */
void f_12983370(void) {
  FTRACE(0x12983370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983370 push ebp */
  push32((uint32_t)(EBP));
  /* 12983371 mov ebp, esp */
  EBP = (ESP);
  /* 12983373 push ecx */
  push32((uint32_t)(ECX));
  /* 12983374 push ebx */
  push32((uint32_t)(EBX));
  /* 12983375 push esi */
  push32((uint32_t)(ESI));
  /* 12983376 push edi */
  push32((uint32_t)(EDI));
  /* 12983377 mov eax, dword ptr [0x129aca84] */
  EAX = (r32((uint32_t)(0x129aca84)));
  /* 1298337c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1298337f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983381 je 0x129833b3 */
  if (C.zf) goto L_129833b3;
L_12983383:;
  /* 12983383 call 0x12983a50 */
  push32(0x12983388u); f_12983a50();
  /* 12983388 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298338a jne 0x129833ad */
  if (!C.zf) goto L_129833ad;
  /* 1298338c push 0x129a9460 */
  push32((uint32_t)(0x129a9460u));
  /* 12983391 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983393 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12983398 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 1298339d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298339f call 0x12981970 */
  push32(0x129833a4u); f_12981970();
  /* 129833a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129833a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129833aa jne 0x129833ad */
  if (!C.zf) goto L_129833ad;
  /* 129833ac int3  */
  x86_unimpl("int3 @ 0x129833ac");
L_129833ad:;
  /* 129833ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129833af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129833b1 jne 0x12983383 */
  if (!C.zf) goto L_12983383;
L_129833b3:;
  /* 129833b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129833b7 jne 0x129833be */
  if (!C.zf) goto L_129833be;
  /* 129833b9 jmp 0x12983755 */
  goto L_12983755;
L_129833be:;
  /* 129833be push 0 */
  push32((uint32_t)(0x0u));
  /* 129833c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129833c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129833c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129833c7 push edx */
  push32((uint32_t)(EDX));
  /* 129833c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129833ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129833cd push eax */
  push32((uint32_t)(EAX));
  /* 129833ce push 3 */
  push32((uint32_t)(0x3u));
  /* 129833d0 call dword ptr [0x129acc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x129acc90))), 0x129833d6u);
  /* 129833d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129833d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129833db jne 0x12983408 */
  if (!C.zf) goto L_12983408;
L_129833dd:;
  /* 129833dd push 0x129a9724 */
  push32((uint32_t)(0x129a9724u));
  /* 129833e2 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 129833e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129833e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129833eb push 0 */
  push32((uint32_t)(0x0u));
  /* 129833ed push 0 */
  push32((uint32_t)(0x0u));
  /* 129833ef call 0x12981970 */
  push32(0x129833f4u); f_12981970();
  /* 129833f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129833f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129833fa jne 0x129833fd */
  if (!C.zf) goto L_129833fd;
  /* 129833fc int3  */
  x86_unimpl("int3 @ 0x129833fc");
L_129833fd:;
  /* 129833fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129833ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12983401 jne 0x129833dd */
  if (!C.zf) goto L_129833dd;
  /* 12983403 jmp 0x12983755 */
  goto L_12983755;
L_12983408:;
  /* 12983408 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298340b push edx */
  push32((uint32_t)(EDX));
  /* 1298340c call 0x12983eb0 */
  push32(0x12983411u); f_12983eb0();
  /* 12983411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983416 jne 0x12983439 */
  if (!C.zf) goto L_12983439;
  /* 12983418 push 0x129a9564 */
  push32((uint32_t)(0x129a9564u));
  /* 1298341d push 0 */
  push32((uint32_t)(0x0u));
  /* 1298341f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12983424 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 12983429 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298342b call 0x12981970 */
  push32(0x12983430u); f_12981970();
  /* 12983430 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983433 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983436 jne 0x12983439 */
  if (!C.zf) goto L_12983439;
  /* 12983438 int3  */
  x86_unimpl("int3 @ 0x12983438");
L_12983439:;
  /* 12983439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298343b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298343d jne 0x12983408 */
  if (!C.zf) goto L_12983408;
  /* 1298343f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983442 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983445 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12983448:;
  /* 12983448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298344b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1298344e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12983453 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983456 je 0x1298349b */
  if (C.zf) goto L_1298349b;
  /* 12983458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298345b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298345f je 0x1298349b */
  if (C.zf) goto L_1298349b;
  /* 12983461 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983464 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12983467 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298346c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298346f je 0x1298349b */
  if (C.zf) goto L_1298349b;
  /* 12983471 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983474 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983478 je 0x1298349b */
  if (C.zf) goto L_1298349b;
  /* 1298347a push 0x129a96fc */
  push32((uint32_t)(0x129a96fcu));
  /* 1298347f push 0 */
  push32((uint32_t)(0x0u));
  /* 12983481 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12983486 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 1298348b push 2 */
  push32((uint32_t)(0x2u));
  /* 1298348d call 0x12981970 */
  push32(0x12983492u); f_12981970();
  /* 12983492 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983495 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983498 jne 0x1298349b */
  if (!C.zf) goto L_1298349b;
  /* 1298349a int3  */
  x86_unimpl("int3 @ 0x1298349a");
L_1298349b:;
  /* 1298349b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298349d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298349f jne 0x12983448 */
  if (!C.zf) goto L_12983448;
  /* 129834a1 mov eax, dword ptr [0x129aca84] */
  EAX = (r32((uint32_t)(0x129aca84)));
  /* 129834a6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 129834a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129834ab jne 0x12983576 */
  if (!C.zf) goto L_12983576;
  /* 129834b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 129834b3 mov cl, byte ptr [0x129aca90] */
  CL = (r8((uint32_t)(0x129aca90)));
  /* 129834b9 push ecx */
  push32((uint32_t)(ECX));
  /* 129834ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129834bd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129834c0 push edx */
  push32((uint32_t)(EDX));
  /* 129834c1 call 0x129839c0 */
  push32(0x129834c6u); f_129839c0();
  /* 129834c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129834c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129834cb jne 0x12983510 */
  if (!C.zf) goto L_12983510;
L_129834cd:;
  /* 129834cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129834d0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129834d3 push eax */
  push32((uint32_t)(EAX));
  /* 129834d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129834d7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129834da push edx */
  push32((uint32_t)(EDX));
  /* 129834db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129834de mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 129834e1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 129834e7 mov edx, dword ptr [ecx*4 + 0x129aca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129aca94)));
  /* 129834ee push edx */
  push32((uint32_t)(EDX));
  /* 129834ef push 0x129a96d0 */
  push32((uint32_t)(0x129a96d0u));
  /* 129834f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129834f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129834f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129834fa push 1 */
  push32((uint32_t)(0x1u));
  /* 129834fc call 0x12981970 */
  push32(0x12983501u); f_12981970();
  /* 12983501 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983504 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983507 jne 0x1298350a */
  if (!C.zf) goto L_1298350a;
  /* 12983509 int3  */
  x86_unimpl("int3 @ 0x12983509");
L_1298350a:;
  /* 1298350a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298350c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298350e jne 0x129834cd */
  if (!C.zf) goto L_129834cd;
L_12983510:;
  /* 12983510 push 4 */
  push32((uint32_t)(0x4u));
  /* 12983512 mov cl, byte ptr [0x129aca90] */
  CL = (r8((uint32_t)(0x129aca90)));
  /* 12983518 push ecx */
  push32((uint32_t)(ECX));
  /* 12983519 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298351c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1298351f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983522 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12983526 push edx */
  push32((uint32_t)(EDX));
  /* 12983527 call 0x129839c0 */
  push32(0x1298352cu); f_129839c0();
  /* 1298352c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298352f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983531 jne 0x12983576 */
  if (!C.zf) goto L_12983576;
L_12983533:;
  /* 12983533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983536 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983539 push eax */
  push32((uint32_t)(EAX));
  /* 1298353a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298353d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12983540 push edx */
  push32((uint32_t)(EDX));
  /* 12983541 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983544 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12983547 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1298354d mov edx, dword ptr [ecx*4 + 0x129aca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129aca94)));
  /* 12983554 push edx */
  push32((uint32_t)(EDX));
  /* 12983555 push 0x129a96a4 */
  push32((uint32_t)(0x129a96a4u));
  /* 1298355a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298355c push 0 */
  push32((uint32_t)(0x0u));
  /* 1298355e push 0 */
  push32((uint32_t)(0x0u));
  /* 12983560 push 1 */
  push32((uint32_t)(0x1u));
  /* 12983562 call 0x12981970 */
  push32(0x12983567u); f_12981970();
  /* 12983567 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298356a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298356d jne 0x12983570 */
  if (!C.zf) goto L_12983570;
  /* 1298356f int3  */
  x86_unimpl("int3 @ 0x1298356f");
L_12983570:;
  /* 12983570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983572 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983574 jne 0x12983533 */
  if (!C.zf) goto L_12983533;
L_12983576:;
  /* 12983576 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983579 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298357d jne 0x129835eb */
  if (!C.zf) goto L_129835eb;
L_1298357f:;
  /* 1298357f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983582 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983589 jne 0x12983594 */
  if (!C.zf) goto L_12983594;
  /* 1298358b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298358e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983592 je 0x129835b5 */
  if (C.zf) goto L_129835b5;
L_12983594:;
  /* 12983594 push 0x129a9664 */
  push32((uint32_t)(0x129a9664u));
  /* 12983599 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298359b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 129835a0 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 129835a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 129835a7 call 0x12981970 */
  push32(0x129835acu); f_12981970();
  /* 129835ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129835af cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129835b2 jne 0x129835b5 */
  if (!C.zf) goto L_129835b5;
  /* 129835b4 int3  */
  x86_unimpl("int3 @ 0x129835b4");
L_129835b5:;
  /* 129835b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129835b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129835b9 jne 0x1298357f */
  if (!C.zf) goto L_1298357f;
  /* 129835bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129835be mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129835c1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129835c4 push eax */
  push32((uint32_t)(EAX));
  /* 129835c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129835c7 mov cl, byte ptr [0x129aca91] */
  CL = (r8((uint32_t)(0x129aca91)));
  /* 129835cd push ecx */
  push32((uint32_t)(ECX));
  /* 129835ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129835d1 push edx */
  push32((uint32_t)(EDX));
  /* 129835d2 call 0x12986620 */
  push32(0x129835d7u); f_12986620();
  /* 129835d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129835da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129835dd push eax */
  push32((uint32_t)(EAX));
  /* 129835de call 0x12986a20 */
  push32(0x129835e3u); f_12986a20();
  /* 129835e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129835e6 jmp 0x12983755 */
  goto L_12983755;
L_129835eb:;
  /* 129835eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129835ee cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129835f2 jne 0x12983601 */
  if (!C.zf) goto L_12983601;
  /* 129835f4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129835f8 jne 0x12983601 */
  if (!C.zf) goto L_12983601;
  /* 129835fa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12983601:;
  /* 12983601 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983604 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12983607 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298360a je 0x1298362d */
  if (C.zf) goto L_1298362d;
  /* 1298360c push 0x129a9644 */
  push32((uint32_t)(0x129a9644u));
  /* 12983611 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983613 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12983618 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 1298361d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298361f call 0x12981970 */
  push32(0x12983624u); f_12981970();
  /* 12983624 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983627 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298362a jne 0x1298362d */
  if (!C.zf) goto L_1298362d;
  /* 1298362c int3  */
  x86_unimpl("int3 @ 0x1298362c");
L_1298362d:;
  /* 1298362d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298362f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12983631 jne 0x12983601 */
  if (!C.zf) goto L_12983601;
  /* 12983633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983636 mov eax, dword ptr [0x129ae4d8] */
  EAX = (r32((uint32_t)(0x129ae4d8)));
  /* 1298363b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298363e mov dword ptr [0x129ae4d8], eax */
  w32((uint32_t)(0x129ae4d8), (EAX));
  /* 12983643 mov ecx, dword ptr [0x129aca84] */
  ECX = (r32((uint32_t)(0x129aca84)));
  /* 12983649 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1298364c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298364e jne 0x1298372c */
  if (!C.zf) goto L_1298372c;
  /* 12983654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983657 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298365a je 0x1298366c */
  if (C.zf) goto L_1298366c;
  /* 1298365c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298365f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12983661 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983664 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12983667 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1298366a jmp 0x129836aa */
  goto L_129836aa;
L_1298366c:;
  /* 1298366c mov ecx, dword ptr [0x129ae4cc] */
  ECX = (r32((uint32_t)(0x129ae4cc)));
  /* 12983672 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983675 je 0x12983698 */
  if (C.zf) goto L_12983698;
  /* 12983677 push 0x129a962c */
  push32((uint32_t)(0x129a962cu));
  /* 1298367c push 0 */
  push32((uint32_t)(0x0u));
  /* 1298367e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12983683 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 12983688 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298368a call 0x12981970 */
  push32(0x1298368fu); f_12981970();
  /* 1298368f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983692 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983695 jne 0x12983698 */
  if (!C.zf) goto L_12983698;
  /* 12983697 int3  */
  x86_unimpl("int3 @ 0x12983697");
L_12983698:;
  /* 12983698 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298369a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298369c jne 0x1298366c */
  if (!C.zf) goto L_1298366c;
  /* 1298369e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129836a1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129836a4 mov dword ptr [0x129ae4cc], ecx */
  w32((uint32_t)(0x129ae4cc), (ECX));
L_129836aa:;
  /* 129836aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129836ad cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129836b1 je 0x129836c2 */
  if (C.zf) goto L_129836c2;
  /* 129836b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129836b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129836b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129836bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129836be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129836c0 jmp 0x129836ff */
  goto L_129836ff;
L_129836c2:;
  /* 129836c2 mov ecx, dword ptr [0x129ae4d4] */
  ECX = (r32((uint32_t)(0x129ae4d4)));
  /* 129836c8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129836cb je 0x129836ee */
  if (C.zf) goto L_129836ee;
  /* 129836cd push 0x129a9614 */
  push32((uint32_t)(0x129a9614u));
  /* 129836d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129836d4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 129836d9 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 129836de push 2 */
  push32((uint32_t)(0x2u));
  /* 129836e0 call 0x12981970 */
  push32(0x129836e5u); f_12981970();
  /* 129836e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129836e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129836eb jne 0x129836ee */
  if (!C.zf) goto L_129836ee;
  /* 129836ed int3  */
  x86_unimpl("int3 @ 0x129836ed");
L_129836ee:;
  /* 129836ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129836f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129836f2 jne 0x129836c2 */
  if (!C.zf) goto L_129836c2;
  /* 129836f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129836f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129836f9 mov dword ptr [0x129ae4d4], ecx */
  w32((uint32_t)(0x129ae4d4), (ECX));
L_129836ff:;
  /* 129836ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983702 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12983705 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983708 push eax */
  push32((uint32_t)(EAX));
  /* 12983709 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298370b mov cl, byte ptr [0x129aca91] */
  CL = (r8((uint32_t)(0x129aca91)));
  /* 12983711 push ecx */
  push32((uint32_t)(ECX));
  /* 12983712 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983715 push edx */
  push32((uint32_t)(EDX));
  /* 12983716 call 0x12986620 */
  push32(0x1298371bu); f_12986620();
  /* 1298371b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298371e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983721 push eax */
  push32((uint32_t)(EAX));
  /* 12983722 call 0x12986a20 */
  push32(0x12983727u); f_12986a20();
  /* 12983727 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298372a jmp 0x12983755 */
  goto L_12983755;
L_1298372c:;
  /* 1298372c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298372f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12983736 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983739 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1298373c push eax */
  push32((uint32_t)(EAX));
  /* 1298373d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298373f mov cl, byte ptr [0x129aca91] */
  CL = (r8((uint32_t)(0x129aca91)));
  /* 12983745 push ecx */
  push32((uint32_t)(ECX));
  /* 12983746 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983749 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298374c push edx */
  push32((uint32_t)(EDX));
  /* 1298374d call 0x12986620 */
  push32(0x12983752u); f_12986620();
  /* 12983752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12983755:;
  /* 12983755 pop edi */
  EDI = (pop32());
  /* 12983756 pop esi */
  ESI = (pop32());
  /* 12983757 pop ebx */
  EBX = (pop32());
  /* 12983758 mov esp, ebp */
  ESP = (EBP);
  /* 1298375a pop ebp */
  EBP = (pop32());
  /* 1298375b ret  */
  ESPCHK(0x12983370u, _esp0);
  ESP += 4; return;
}

/* FUN_10003760 @ 0x12983760 (19 bytes, 9 insns) */
void f_12983760(void) {
  FTRACE(0x12983760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983760 push ebp */
  push32((uint32_t)(EBP));
  /* 12983761 mov ebp, esp */
  EBP = (ESP);
  /* 12983763 push 1 */
  push32((uint32_t)(0x1u));
  /* 12983765 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983768 push eax */
  push32((uint32_t)(EAX));
  /* 12983769 call 0x12983780 */
  push32(0x1298376eu); f_12983780();
  /* 1298376e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983771 pop ebp */
  EBP = (pop32());
  /* 12983772 ret  */
  ESPCHK(0x12983760u, _esp0);
  ESP += 4; return;
}

/* FUN_10003780 @ 0x12983780 (342 bytes, 119 insns) */
void f_12983780(void) {
  FTRACE(0x12983780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983780 push ebp */
  push32((uint32_t)(EBP));
  /* 12983781 mov ebp, esp */
  EBP = (ESP);
  /* 12983783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983786 push ebx */
  push32((uint32_t)(EBX));
  /* 12983787 push esi */
  push32((uint32_t)(ESI));
  /* 12983788 push edi */
  push32((uint32_t)(EDI));
  /* 12983789 mov eax, dword ptr [0x129aca84] */
  EAX = (r32((uint32_t)(0x129aca84)));
  /* 1298378e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12983791 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983793 je 0x129837c5 */
  if (C.zf) goto L_129837c5;
L_12983795:;
  /* 12983795 call 0x12983a50 */
  push32(0x1298379au); f_12983a50();
  /* 1298379a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298379c jne 0x129837bf */
  if (!C.zf) goto L_129837bf;
  /* 1298379e push 0x129a9460 */
  push32((uint32_t)(0x129a9460u));
  /* 129837a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129837a5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 129837aa push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 129837af push 2 */
  push32((uint32_t)(0x2u));
  /* 129837b1 call 0x12981970 */
  push32(0x129837b6u); f_12981970();
  /* 129837b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129837b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129837bc jne 0x129837bf */
  if (!C.zf) goto L_129837bf;
  /* 129837be int3  */
  x86_unimpl("int3 @ 0x129837be");
L_129837bf:;
  /* 129837bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129837c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129837c3 jne 0x12983795 */
  if (!C.zf) goto L_12983795;
L_129837c5:;
  /* 129837c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 129837c7 call 0x129862b0 */
  push32(0x129837ccu); f_129862b0();
  /* 129837cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129837cf:;
  /* 129837cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129837d2 push edx */
  push32((uint32_t)(EDX));
  /* 129837d3 call 0x12983eb0 */
  push32(0x129837d8u); f_12983eb0();
  /* 129837d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129837db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129837dd jne 0x12983800 */
  if (!C.zf) goto L_12983800;
  /* 129837df push 0x129a9564 */
  push32((uint32_t)(0x129a9564u));
  /* 129837e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129837e6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 129837eb push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 129837f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 129837f2 call 0x12981970 */
  push32(0x129837f7u); f_12981970();
  /* 129837f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129837fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129837fd jne 0x12983800 */
  if (!C.zf) goto L_12983800;
  /* 129837ff int3  */
  x86_unimpl("int3 @ 0x129837ff");
L_12983800:;
  /* 12983800 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983804 jne 0x129837cf */
  if (!C.zf) goto L_129837cf;
  /* 12983806 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983809 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298380c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1298380f:;
  /* 1298380f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983812 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12983815 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298381a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298381d je 0x12983862 */
  if (C.zf) goto L_12983862;
  /* 1298381f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983822 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983826 je 0x12983862 */
  if (C.zf) goto L_12983862;
  /* 12983828 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298382b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1298382e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12983833 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983836 je 0x12983862 */
  if (C.zf) goto L_12983862;
  /* 12983838 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298383b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298383f je 0x12983862 */
  if (C.zf) goto L_12983862;
  /* 12983841 push 0x129a96fc */
  push32((uint32_t)(0x129a96fcu));
  /* 12983846 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983848 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1298384d push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 12983852 push 2 */
  push32((uint32_t)(0x2u));
  /* 12983854 call 0x12981970 */
  push32(0x12983859u); f_12981970();
  /* 12983859 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298385c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298385f jne 0x12983862 */
  if (!C.zf) goto L_12983862;
  /* 12983861 int3  */
  x86_unimpl("int3 @ 0x12983861");
L_12983862:;
  /* 12983862 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12983864 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12983866 jne 0x1298380f */
  if (!C.zf) goto L_1298380f;
  /* 12983868 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298386b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298386f jne 0x1298387e */
  if (!C.zf) goto L_1298387e;
  /* 12983871 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983875 jne 0x1298387e */
  if (!C.zf) goto L_1298387e;
  /* 12983877 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1298387e:;
  /* 1298387e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983881 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983885 je 0x129838b9 */
  if (C.zf) goto L_129838b9;
L_12983887:;
  /* 12983887 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298388a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1298388d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983890 je 0x129838b3 */
  if (C.zf) goto L_129838b3;
  /* 12983892 push 0x129a9644 */
  push32((uint32_t)(0x129a9644u));
  /* 12983897 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983899 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1298389e push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 129838a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129838a5 call 0x12981970 */
  push32(0x129838aau); f_12981970();
  /* 129838aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129838ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129838b0 jne 0x129838b3 */
  if (!C.zf) goto L_129838b3;
  /* 129838b2 int3  */
  x86_unimpl("int3 @ 0x129838b2");
L_129838b3:;
  /* 129838b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129838b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129838b7 jne 0x12983887 */
  if (!C.zf) goto L_12983887;
L_129838b9:;
  /* 129838b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129838bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129838bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129838c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 129838c4 call 0x12986350 */
  push32(0x129838c9u); f_12986350();
  /* 129838c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129838cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129838cf pop edi */
  EDI = (pop32());
  /* 129838d0 pop esi */
  ESI = (pop32());
  /* 129838d1 pop ebx */
  EBX = (pop32());
  /* 129838d2 mov esp, ebp */
  ESP = (EBP);
  /* 129838d4 pop ebp */
  EBP = (pop32());
  /* 129838d5 ret  */
  ESPCHK(0x12983780u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x129838e0 (28 bytes, 11 insns) */
void f_129838e0(void) {
  FTRACE(0x129838e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129838e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129838e1 mov ebp, esp */
  EBP = (ESP);
  /* 129838e3 push ecx */
  push32((uint32_t)(ECX));
  /* 129838e4 mov eax, dword ptr [0x129aca8c] */
  EAX = (r32((uint32_t)(0x129aca8c)));
  /* 129838e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129838ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129838ef mov dword ptr [0x129aca8c], ecx */
  w32((uint32_t)(0x129aca8c), (ECX));
  /* 129838f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129838f8 mov esp, ebp */
  ESP = (EBP);
  /* 129838fa pop ebp */
  EBP = (pop32());
  /* 129838fb ret  */
  ESPCHK(0x129838e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003900 @ 0x12983900 (157 bytes, 59 insns) */
void f_12983900(void) {
  FTRACE(0x12983900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983900 push ebp */
  push32((uint32_t)(EBP));
  /* 12983901 mov ebp, esp */
  EBP = (ESP);
  /* 12983903 push ecx */
  push32((uint32_t)(ECX));
  /* 12983904 push ebx */
  push32((uint32_t)(EBX));
  /* 12983905 push esi */
  push32((uint32_t)(ESI));
  /* 12983906 push edi */
  push32((uint32_t)(EDI));
  /* 12983907 push 9 */
  push32((uint32_t)(0x9u));
  /* 12983909 call 0x129862b0 */
  push32(0x1298390eu); f_129862b0();
  /* 1298390e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983911 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983914 push eax */
  push32((uint32_t)(EAX));
  /* 12983915 call 0x12983eb0 */
  push32(0x1298391au); f_12983eb0();
  /* 1298391a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298391d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298391f je 0x1298398c */
  if (C.zf) goto L_1298398c;
  /* 12983921 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983924 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983927 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1298392a:;
  /* 1298392a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298392d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12983930 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12983935 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983938 je 0x1298397d */
  if (C.zf) goto L_1298397d;
  /* 1298393a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298393d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983941 je 0x1298397d */
  if (C.zf) goto L_1298397d;
  /* 12983943 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983946 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12983949 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298394e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983951 je 0x1298397d */
  if (C.zf) goto L_1298397d;
  /* 12983953 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983956 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298395a je 0x1298397d */
  if (C.zf) goto L_1298397d;
  /* 1298395c push 0x129a96fc */
  push32((uint32_t)(0x129a96fcu));
  /* 12983961 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983963 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12983968 push 0x129a9454 */
  push32((uint32_t)(0x129a9454u));
  /* 1298396d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298396f call 0x12981970 */
  push32(0x12983974u); f_12981970();
  /* 12983974 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983977 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298397a jne 0x1298397d */
  if (!C.zf) goto L_1298397d;
  /* 1298397c int3  */
  x86_unimpl("int3 @ 0x1298397c");
L_1298397d:;
  /* 1298397d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298397f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12983981 jne 0x1298392a */
  if (!C.zf) goto L_1298392a;
  /* 12983983 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983986 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12983989 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1298398c:;
  /* 1298398c push 9 */
  push32((uint32_t)(0x9u));
  /* 1298398e call 0x12986350 */
  push32(0x12983993u); f_12986350();
  /* 12983993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983996 pop edi */
  EDI = (pop32());
  /* 12983997 pop esi */
  ESI = (pop32());
  /* 12983998 pop ebx */
  EBX = (pop32());
  /* 12983999 mov esp, ebp */
  ESP = (EBP);
  /* 1298399b pop ebp */
  EBP = (pop32());
  /* 1298399c ret  */
  ESPCHK(0x12983900u, _esp0);
  ESP += 4; return;
}

/* FUN_100039a0 @ 0x129839a0 (28 bytes, 11 insns) */
void f_129839a0(void) {
  FTRACE(0x129839a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129839a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129839a1 mov ebp, esp */
  EBP = (ESP);
  /* 129839a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129839a4 mov eax, dword ptr [0x129acc90] */
  EAX = (r32((uint32_t)(0x129acc90)));
  /* 129839a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129839ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129839af mov dword ptr [0x129acc90], ecx */
  w32((uint32_t)(0x129acc90), (ECX));
  /* 129839b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129839b8 mov esp, ebp */
  ESP = (EBP);
  /* 129839ba pop ebp */
  EBP = (pop32());
  /* 129839bb ret  */
  ESPCHK(0x129839a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039c0 @ 0x129839c0 (136 bytes, 55 insns) */
void f_129839c0(void) {
  FTRACE(0x129839c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129839c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129839c1 mov ebp, esp */
  EBP = (ESP);
  /* 129839c3 push ecx */
  push32((uint32_t)(ECX));
  /* 129839c4 push ebx */
  push32((uint32_t)(EBX));
  /* 129839c5 push esi */
  push32((uint32_t)(ESI));
  /* 129839c6 push edi */
  push32((uint32_t)(EDI));
  /* 129839c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_129839ce:;
  /* 129839ce mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129839d1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129839d4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129839d7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 129839da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129839dc je 0x12983a3e */
  if (C.zf) goto L_12983a3e;
  /* 129839de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129839e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129839e3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 129839e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129839e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129839ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129839f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129839f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 129839f7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129839f9 je 0x12983a3c */
  if (C.zf) goto L_12983a3c;
L_129839fb:;
  /* 129839fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129839fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12983a03 push eax */
  push32((uint32_t)(EAX));
  /* 12983a04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983a07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12983a09 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12983a0c push edx */
  push32((uint32_t)(EDX));
  /* 12983a0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983a10 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983a13 push eax */
  push32((uint32_t)(EAX));
  /* 12983a14 push 0x129a9740 */
  push32((uint32_t)(0x129a9740u));
  /* 12983a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12983a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12983a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12983a21 call 0x12981970 */
  push32(0x12983a26u); f_12981970();
  /* 12983a26 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983a29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983a2c jne 0x12983a2f */
  if (!C.zf) goto L_12983a2f;
  /* 12983a2e int3  */
  x86_unimpl("int3 @ 0x12983a2e");
L_12983a2f:;
  /* 12983a2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12983a31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12983a33 jne 0x129839fb */
  if (!C.zf) goto L_129839fb;
  /* 12983a35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12983a3c:;
  /* 12983a3c jmp 0x129839ce */
  goto L_129839ce;
L_12983a3e:;
  /* 12983a3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983a41 pop edi */
  EDI = (pop32());
  /* 12983a42 pop esi */
  ESI = (pop32());
  /* 12983a43 pop ebx */
  EBX = (pop32());
  /* 12983a44 mov esp, ebp */
  ESP = (EBP);
  /* 12983a46 pop ebp */
  EBP = (pop32());
  /* 12983a47 ret  */
  ESPCHK(0x129839c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a50 @ 0x12983a50 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12983a50(void) {
  FTRACE(0x12983a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12983a51 mov ebp, esp */
  EBP = (ESP);
  /* 12983a53 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983a56 push ebx */
  push32((uint32_t)(EBX));
  /* 12983a57 push esi */
  push32((uint32_t)(ESI));
  /* 12983a58 push edi */
  push32((uint32_t)(EDI));
  /* 12983a59 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12983a60 mov eax, dword ptr [0x129aca84] */
  EAX = (r32((uint32_t)(0x129aca84)));
  /* 12983a65 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12983a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983a6a jne 0x12983a76 */
  if (!C.zf) goto L_12983a76;
  /* 12983a6c mov eax, 1 */
  EAX = (0x1u);
  /* 12983a71 jmp 0x12983da8 */
  goto L_12983da8;
L_12983a76:;
  /* 12983a76 push 9 */
  push32((uint32_t)(0x9u));
  /* 12983a78 call 0x129862b0 */
  push32(0x12983a7du); f_129862b0();
  /* 12983a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983a80 call 0x12986a90 */
  push32(0x12983a85u); f_12986a90();
  /* 12983a85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12983a88 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983a8c je 0x12983b99 */
  if (C.zf) goto L_12983b99;
  /* 12983a92 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983a96 je 0x12983b99 */
  if (C.zf) goto L_12983b99;
  /* 12983a9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12983a9f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12983aa2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12983aa5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983aa8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12983aab cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983aaf ja 0x12983b62 */
  if ((!C.cf&&!C.zf)) goto L_12983b62;
  /* 12983ab5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12983ab8 jmp dword ptr [eax*4 + 0x12983daf] */
  switch (EAX) {
    case 0: goto L_12983b3a;
    case 1: goto L_12983b12;
    case 2: goto L_12983aea;
    case 3: goto L_12983abf;
    default: x86_unimpl("switch@0x12983ab8 out of table"); return;
  }
L_12983abf:;
  /* 12983abf push 0x129a9894 */
  push32((uint32_t)(0x129a9894u));
  /* 12983ac4 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12983ac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983acb push 0 */
  push32((uint32_t)(0x0u));
  /* 12983acd push 0 */
  push32((uint32_t)(0x0u));
  /* 12983acf push 0 */
  push32((uint32_t)(0x0u));
  /* 12983ad1 call 0x12981970 */
  push32(0x12983ad6u); f_12981970();
  /* 12983ad6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983ad9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983adc jne 0x12983adf */
  if (!C.zf) goto L_12983adf;
  /* 12983ade int3  */
  x86_unimpl("int3 @ 0x12983ade");
L_12983adf:;
  /* 12983adf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12983ae1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12983ae3 jne 0x12983abf */
  if (!C.zf) goto L_12983abf;
  /* 12983ae5 jmp 0x12983b88 */
  goto L_12983b88;
L_12983aea:;
  /* 12983aea push 0x129a9870 */
  push32((uint32_t)(0x129a9870u));
  /* 12983aef push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12983af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983afa push 0 */
  push32((uint32_t)(0x0u));
  /* 12983afc call 0x12981970 */
  push32(0x12983b01u); f_12981970();
  /* 12983b01 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983b04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983b07 jne 0x12983b0a */
  if (!C.zf) goto L_12983b0a;
  /* 12983b09 int3  */
  x86_unimpl("int3 @ 0x12983b09");
L_12983b0a:;
  /* 12983b0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12983b0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12983b0e jne 0x12983aea */
  if (!C.zf) goto L_12983aea;
  /* 12983b10 jmp 0x12983b88 */
  goto L_12983b88;
L_12983b12:;
  /* 12983b12 push 0x129a984c */
  push32((uint32_t)(0x129a984cu));
  /* 12983b17 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12983b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b24 call 0x12981970 */
  push32(0x12983b29u); f_12981970();
  /* 12983b29 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983b2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983b2f jne 0x12983b32 */
  if (!C.zf) goto L_12983b32;
  /* 12983b31 int3  */
  x86_unimpl("int3 @ 0x12983b31");
L_12983b32:;
  /* 12983b32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983b36 jne 0x12983b12 */
  if (!C.zf) goto L_12983b12;
  /* 12983b38 jmp 0x12983b88 */
  goto L_12983b88;
L_12983b3a:;
  /* 12983b3a push 0x129a9828 */
  push32((uint32_t)(0x129a9828u));
  /* 12983b3f push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12983b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b4c call 0x12981970 */
  push32(0x12983b51u); f_12981970();
  /* 12983b51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983b54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983b57 jne 0x12983b5a */
  if (!C.zf) goto L_12983b5a;
  /* 12983b59 int3  */
  x86_unimpl("int3 @ 0x12983b59");
L_12983b5a:;
  /* 12983b5a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12983b5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12983b5e jne 0x12983b3a */
  if (!C.zf) goto L_12983b3a;
  /* 12983b60 jmp 0x12983b88 */
  goto L_12983b88;
L_12983b62:;
  /* 12983b62 push 0x129a97fc */
  push32((uint32_t)(0x129a97fcu));
  /* 12983b67 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12983b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983b74 call 0x12981970 */
  push32(0x12983b79u); f_12981970();
  /* 12983b79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983b7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983b7f jne 0x12983b82 */
  if (!C.zf) goto L_12983b82;
  /* 12983b81 int3  */
  x86_unimpl("int3 @ 0x12983b81");
L_12983b82:;
  /* 12983b82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12983b84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12983b86 jne 0x12983b62 */
  if (!C.zf) goto L_12983b62;
L_12983b88:;
  /* 12983b88 push 9 */
  push32((uint32_t)(0x9u));
  /* 12983b8a call 0x12986350 */
  push32(0x12983b8fu); f_12986350();
  /* 12983b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983b92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983b94 jmp 0x12983da8 */
  goto L_12983da8;
L_12983b99:;
  /* 12983b99 mov eax, dword ptr [0x129ae4d4] */
  EAX = (r32((uint32_t)(0x129ae4d4)));
  /* 12983b9e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12983ba1 jmp 0x12983bab */
  goto L_12983bab;
L_12983ba3:;
  /* 12983ba3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983ba6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12983ba8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12983bab:;
  /* 12983bab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983baf je 0x12983d9b */
  if (C.zf) goto L_12983d9b;
  /* 12983bb5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12983bbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983bbf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12983bc2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12983bc8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983bcb je 0x12983bf0 */
  if (C.zf) goto L_12983bf0;
  /* 12983bcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983bd0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983bd4 je 0x12983bf0 */
  if (C.zf) goto L_12983bf0;
  /* 12983bd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983bd9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12983bdc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12983be2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983be5 je 0x12983bf0 */
  if (C.zf) goto L_12983bf0;
  /* 12983be7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983bea cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983bee jne 0x12983c08 */
  if (!C.zf) goto L_12983c08;
L_12983bf0:;
  /* 12983bf0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983bf3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12983bf6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12983bfc mov edx, dword ptr [ecx*4 + 0x129aca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129aca94)));
  /* 12983c03 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12983c06 jmp 0x12983c0f */
  goto L_12983c0f;
L_12983c08:;
  /* 12983c08 mov dword ptr [ebp - 0x14], 0x129a97f4 */
  w32((uint32_t)(EBP + -0x14), (0x129a97f4u));
L_12983c0f:;
  /* 12983c0f push 4 */
  push32((uint32_t)(0x4u));
  /* 12983c11 mov al, byte ptr [0x129aca90] */
  AL = (r8((uint32_t)(0x129aca90)));
  /* 12983c16 push eax */
  push32((uint32_t)(EAX));
  /* 12983c17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983c1a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983c1d push ecx */
  push32((uint32_t)(ECX));
  /* 12983c1e call 0x129839c0 */
  push32(0x12983c23u); f_129839c0();
  /* 12983c23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983c26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983c28 jne 0x12983c64 */
  if (!C.zf) goto L_12983c64;
L_12983c2a:;
  /* 12983c2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983c2d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983c30 push edx */
  push32((uint32_t)(EDX));
  /* 12983c31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983c34 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12983c37 push ecx */
  push32((uint32_t)(ECX));
  /* 12983c38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12983c3b push edx */
  push32((uint32_t)(EDX));
  /* 12983c3c push 0x129a96d0 */
  push32((uint32_t)(0x129a96d0u));
  /* 12983c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983c49 call 0x12981970 */
  push32(0x12983c4eu); f_12981970();
  /* 12983c4e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983c51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983c54 jne 0x12983c57 */
  if (!C.zf) goto L_12983c57;
  /* 12983c56 int3  */
  x86_unimpl("int3 @ 0x12983c56");
L_12983c57:;
  /* 12983c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983c5b jne 0x12983c2a */
  if (!C.zf) goto L_12983c2a;
  /* 12983c5d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12983c64:;
  /* 12983c64 push 4 */
  push32((uint32_t)(0x4u));
  /* 12983c66 mov cl, byte ptr [0x129aca90] */
  CL = (r8((uint32_t)(0x129aca90)));
  /* 12983c6c push ecx */
  push32((uint32_t)(ECX));
  /* 12983c6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983c70 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12983c73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983c76 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12983c7a push edx */
  push32((uint32_t)(EDX));
  /* 12983c7b call 0x129839c0 */
  push32(0x12983c80u); f_129839c0();
  /* 12983c80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983c85 jne 0x12983cc1 */
  if (!C.zf) goto L_12983cc1;
L_12983c87:;
  /* 12983c87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983c8a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983c8d push eax */
  push32((uint32_t)(EAX));
  /* 12983c8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983c91 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12983c94 push edx */
  push32((uint32_t)(EDX));
  /* 12983c95 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12983c98 push eax */
  push32((uint32_t)(EAX));
  /* 12983c99 push 0x129a96a4 */
  push32((uint32_t)(0x129a96a4u));
  /* 12983c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12983ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983ca6 call 0x12981970 */
  push32(0x12983cabu); f_12981970();
  /* 12983cab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983cae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983cb1 jne 0x12983cb4 */
  if (!C.zf) goto L_12983cb4;
  /* 12983cb3 int3  */
  x86_unimpl("int3 @ 0x12983cb3");
L_12983cb4:;
  /* 12983cb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12983cb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12983cb8 jne 0x12983c87 */
  if (!C.zf) goto L_12983c87;
  /* 12983cba mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12983cc1:;
  /* 12983cc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983cc4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983cc8 jne 0x12983d1a */
  if (!C.zf) goto L_12983d1a;
  /* 12983cca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983ccd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12983cd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12983cd1 mov dl, byte ptr [0x129aca91] */
  DL = (r8((uint32_t)(0x129aca91)));
  /* 12983cd7 push edx */
  push32((uint32_t)(EDX));
  /* 12983cd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983cdb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983cde push eax */
  push32((uint32_t)(EAX));
  /* 12983cdf call 0x129839c0 */
  push32(0x12983ce4u); f_129839c0();
  /* 12983ce4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983ce7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983ce9 jne 0x12983d1a */
  if (!C.zf) goto L_12983d1a;
L_12983ceb:;
  /* 12983ceb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983cee add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983cf1 push ecx */
  push32((uint32_t)(ECX));
  /* 12983cf2 push 0x129a97c8 */
  push32((uint32_t)(0x129a97c8u));
  /* 12983cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983cf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12983cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12983cff call 0x12981970 */
  push32(0x12983d04u); f_12981970();
  /* 12983d04 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983d07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983d0a jne 0x12983d0d */
  if (!C.zf) goto L_12983d0d;
  /* 12983d0c int3  */
  x86_unimpl("int3 @ 0x12983d0c");
L_12983d0d:;
  /* 12983d0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12983d0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12983d11 jne 0x12983ceb */
  if (!C.zf) goto L_12983ceb;
  /* 12983d13 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12983d1a:;
  /* 12983d1a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983d1e jne 0x12983d96 */
  if (!C.zf) goto L_12983d96;
  /* 12983d20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983d23 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983d27 je 0x12983d5c */
  if (C.zf) goto L_12983d5c;
L_12983d29:;
  /* 12983d29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983d2c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12983d2f push edx */
  push32((uint32_t)(EDX));
  /* 12983d30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983d33 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12983d36 push ecx */
  push32((uint32_t)(ECX));
  /* 12983d37 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12983d3a push edx */
  push32((uint32_t)(EDX));
  /* 12983d3b push 0x129a97a8 */
  push32((uint32_t)(0x129a97a8u));
  /* 12983d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983d46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983d48 call 0x12981970 */
  push32(0x12983d4du); f_12981970();
  /* 12983d4d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983d50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983d53 jne 0x12983d56 */
  if (!C.zf) goto L_12983d56;
  /* 12983d55 int3  */
  x86_unimpl("int3 @ 0x12983d55");
L_12983d56:;
  /* 12983d56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983d58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983d5a jne 0x12983d29 */
  if (!C.zf) goto L_12983d29;
L_12983d5c:;
  /* 12983d5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983d5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12983d62 push edx */
  push32((uint32_t)(EDX));
  /* 12983d63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12983d66 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983d69 push eax */
  push32((uint32_t)(EAX));
  /* 12983d6a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12983d6d push ecx */
  push32((uint32_t)(ECX));
  /* 12983d6e push 0x129a977c */
  push32((uint32_t)(0x129a977cu));
  /* 12983d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983d7b call 0x12981970 */
  push32(0x12983d80u); f_12981970();
  /* 12983d80 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983d83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983d86 jne 0x12983d89 */
  if (!C.zf) goto L_12983d89;
  /* 12983d88 int3  */
  x86_unimpl("int3 @ 0x12983d88");
L_12983d89:;
  /* 12983d89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12983d8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12983d8d jne 0x12983d5c */
  if (!C.zf) goto L_12983d5c;
  /* 12983d8f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12983d96:;
  /* 12983d96 jmp 0x12983ba3 */
  goto L_12983ba3;
L_12983d9b:;
  /* 12983d9b push 9 */
  push32((uint32_t)(0x9u));
  /* 12983d9d call 0x12986350 */
  push32(0x12983da2u); f_12986350();
  /* 12983da2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983da5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12983da8:;
  /* 12983da8 pop edi */
  EDI = (pop32());
  /* 12983da9 pop esi */
  ESI = (pop32());
  /* 12983daa pop ebx */
  EBX = (pop32());
  /* 12983dab mov esp, ebp */
  ESP = (EBP);
  /* 12983dad pop ebp */
  EBP = (pop32());
  /* 12983dae ret  */
  ESPCHK(0x12983a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x12983dc0 (34 bytes, 13 insns) */
void f_12983dc0(void) {
  FTRACE(0x12983dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12983dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12983dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12983dc4 mov eax, dword ptr [0x129aca84] */
  EAX = (r32((uint32_t)(0x129aca84)));
  /* 12983dc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12983dcc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983dd0 je 0x12983ddb */
  if (C.zf) goto L_12983ddb;
  /* 12983dd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983dd5 mov dword ptr [0x129aca84], ecx */
  w32((uint32_t)(0x129aca84), (ECX));
L_12983ddb:;
  /* 12983ddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983dde mov esp, ebp */
  ESP = (EBP);
  /* 12983de0 pop ebp */
  EBP = (pop32());
  /* 12983de1 ret  */
  ESPCHK(0x12983dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df0 @ 0x12983df0 (103 bytes, 38 insns) */
void f_12983df0(void) {
  FTRACE(0x12983df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12983df1 mov ebp, esp */
  EBP = (ESP);
  /* 12983df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12983df4 mov eax, dword ptr [0x129aca84] */
  EAX = (r32((uint32_t)(0x129aca84)));
  /* 12983df9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12983dfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983dfe jne 0x12983e02 */
  if (!C.zf) goto L_12983e02;
  /* 12983e00 jmp 0x12983e53 */
  goto L_12983e53;
L_12983e02:;
  /* 12983e02 push 9 */
  push32((uint32_t)(0x9u));
  /* 12983e04 call 0x129862b0 */
  push32(0x12983e09u); f_129862b0();
  /* 12983e09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983e0c mov ecx, dword ptr [0x129ae4d4] */
  ECX = (r32((uint32_t)(0x129ae4d4)));
  /* 12983e12 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12983e15 jmp 0x12983e1f */
  goto L_12983e1f;
L_12983e17:;
  /* 12983e17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983e1a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12983e1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12983e1f:;
  /* 12983e1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983e23 je 0x12983e49 */
  if (C.zf) goto L_12983e49;
  /* 12983e25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983e28 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12983e2b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12983e31 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983e34 jne 0x12983e47 */
  if (!C.zf) goto L_12983e47;
  /* 12983e36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12983e39 push eax */
  push32((uint32_t)(EAX));
  /* 12983e3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983e3d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12983e40 push ecx */
  push32((uint32_t)(ECX));
  /* 12983e41 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12983e44u);
  /* 12983e44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12983e47:;
  /* 12983e47 jmp 0x12983e17 */
  goto L_12983e17;
L_12983e49:;
  /* 12983e49 push 9 */
  push32((uint32_t)(0x9u));
  /* 12983e4b call 0x12986350 */
  push32(0x12983e50u); f_12986350();
  /* 12983e50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12983e53:;
  /* 12983e53 mov esp, ebp */
  ESP = (EBP);
  /* 12983e55 pop ebp */
  EBP = (pop32());
  /* 12983e56 ret  */
  ESPCHK(0x12983df0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12983e60 (75 bytes, 28 insns) */
void f_12983e60(void) {
  FTRACE(0x12983e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12983e61 mov ebp, esp */
  EBP = (ESP);
  /* 12983e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12983e64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983e68 je 0x12983e9d */
  if (C.zf) goto L_12983e9d;
  /* 12983e6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12983e6d push eax */
  push32((uint32_t)(EAX));
  /* 12983e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983e71 push ecx */
  push32((uint32_t)(ECX));
  /* 12983e72 call dword ptr [0x129b02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02b0))), 0x12983e78u);
  /* 12983e78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983e7a jne 0x12983e9d */
  if (!C.zf) goto L_12983e9d;
  /* 12983e7c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983e80 je 0x12983e94 */
  if (C.zf) goto L_12983e94;
  /* 12983e82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12983e85 push edx */
  push32((uint32_t)(EDX));
  /* 12983e86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983e89 push eax */
  push32((uint32_t)(EAX));
  /* 12983e8a call dword ptr [0x129b02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02ac))), 0x12983e90u);
  /* 12983e90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983e92 jne 0x12983e9d */
  if (!C.zf) goto L_12983e9d;
L_12983e94:;
  /* 12983e94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12983e9b jmp 0x12983ea4 */
  goto L_12983ea4;
L_12983e9d:;
  /* 12983e9d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12983ea4:;
  /* 12983ea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983ea7 mov esp, ebp */
  ESP = (EBP);
  /* 12983ea9 pop ebp */
  EBP = (pop32());
  /* 12983eaa ret  */
  ESPCHK(0x12983e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eb0 @ 0x12983eb0 (134 bytes, 50 insns) */
void f_12983eb0(void) {
  FTRACE(0x12983eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12983eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12983eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12983eb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983eb8 jne 0x12983ebe */
  if (!C.zf) goto L_12983ebe;
  /* 12983eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983ebc jmp 0x12983f32 */
  goto L_12983f32;
L_12983ebe:;
  /* 12983ebe push 1 */
  push32((uint32_t)(0x1u));
  /* 12983ec0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12983ec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983ec5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983ec8 push eax */
  push32((uint32_t)(EAX));
  /* 12983ec9 call 0x12983e60 */
  push32(0x12983eceu); f_12983e60();
  /* 12983ece add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983ed1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983ed3 jne 0x12983ed9 */
  if (!C.zf) goto L_12983ed9;
  /* 12983ed5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983ed7 jmp 0x12983f32 */
  goto L_12983f32;
L_12983ed9:;
  /* 12983ed9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983edc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983edf push ecx */
  push32((uint32_t)(ECX));
  /* 12983ee0 call 0x12986bb0 */
  push32(0x12983ee5u); f_12986bb0();
  /* 12983ee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983ee8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12983eeb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983eef je 0x12983f06 */
  if (C.zf) goto L_12983f06;
  /* 12983ef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983ef4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983ef7 push edx */
  push32((uint32_t)(EDX));
  /* 12983ef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983efb push eax */
  push32((uint32_t)(EAX));
  /* 12983efc call 0x12986c10 */
  push32(0x12983f01u); f_12986c10();
  /* 12983f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983f04 jmp 0x12983f32 */
  goto L_12983f32;
L_12983f06:;
  /* 12983f06 mov ecx, dword ptr [0x129ae488] */
  ECX = (r32((uint32_t)(0x129ae488)));
  /* 12983f0c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12983f12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12983f14 je 0x12983f1d */
  if (C.zf) goto L_12983f1d;
  /* 12983f16 mov eax, 1 */
  EAX = (0x1u);
  /* 12983f1b jmp 0x12983f32 */
  goto L_12983f32;
L_12983f1d:;
  /* 12983f1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983f20 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983f23 push edx */
  push32((uint32_t)(EDX));
  /* 12983f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12983f26 mov eax, dword ptr [0x129afe2c] */
  EAX = (r32((uint32_t)(0x129afe2c)));
  /* 12983f2b push eax */
  push32((uint32_t)(EAX));
  /* 12983f2c call dword ptr [0x129b02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02b4))), 0x12983f32u);
L_12983f32:;
  /* 12983f32 mov esp, ebp */
  ESP = (EBP);
  /* 12983f34 pop ebp */
  EBP = (pop32());
  /* 12983f35 ret  */
  ESPCHK(0x12983eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f40 @ 0x12983f40 (227 bytes, 80 insns) */
void f_12983f40(void) {
  FTRACE(0x12983f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12983f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12983f41 mov ebp, esp */
  EBP = (ESP);
  /* 12983f43 push ecx */
  push32((uint32_t)(ECX));
  /* 12983f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983f47 push eax */
  push32((uint32_t)(EAX));
  /* 12983f48 call 0x12983eb0 */
  push32(0x12983f4du); f_12983eb0();
  /* 12983f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983f50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983f52 jne 0x12983f5b */
  if (!C.zf) goto L_12983f5b;
  /* 12983f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12983f56 jmp 0x1298401f */
  goto L_1298401f;
L_12983f5b:;
  /* 12983f5b push 9 */
  push32((uint32_t)(0x9u));
  /* 12983f5d call 0x129862b0 */
  push32(0x12983f62u); f_129862b0();
  /* 12983f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983f65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983f68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12983f6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12983f6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983f71 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12983f74 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12983f79 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983f7c je 0x12983fa0 */
  if (C.zf) goto L_12983fa0;
  /* 12983f7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983f81 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983f85 je 0x12983fa0 */
  if (C.zf) goto L_12983fa0;
  /* 12983f87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983f8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12983f8d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12983f92 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983f95 je 0x12983fa0 */
  if (C.zf) goto L_12983fa0;
  /* 12983f97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983f9a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983f9e jne 0x12984013 */
  if (!C.zf) goto L_12984013;
L_12983fa0:;
  /* 12983fa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12983fa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12983fa5 push edx */
  push32((uint32_t)(EDX));
  /* 12983fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12983fa9 push eax */
  push32((uint32_t)(EAX));
  /* 12983faa call 0x12983e60 */
  push32(0x12983fafu); f_12983e60();
  /* 12983faf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12983fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12983fb4 je 0x12984013 */
  if (C.zf) goto L_12984013;
  /* 12983fb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983fb9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12983fbc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983fbf jne 0x12984013 */
  if (!C.zf) goto L_12984013;
  /* 12983fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983fc4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12983fc7 cmp ecx, dword ptr [0x129aca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129aca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983fcd jg 0x12984013 */
  if ((!C.zf&&C.sf==C.of)) goto L_12984013;
  /* 12983fcf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983fd3 je 0x12983fe0 */
  if (C.zf) goto L_12983fe0;
  /* 12983fd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12983fd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983fdb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12983fde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12983fe0:;
  /* 12983fe0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983fe4 je 0x12983ff1 */
  if (C.zf) goto L_12983ff1;
  /* 12983fe6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12983fe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983fec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12983fef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12983ff1:;
  /* 12983ff1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12983ff5 je 0x12984002 */
  if (C.zf) goto L_12984002;
  /* 12983ff7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12983ffa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12983ffd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12984000 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12984002:;
  /* 12984002 push 9 */
  push32((uint32_t)(0x9u));
  /* 12984004 call 0x12986350 */
  push32(0x12984009u); f_12986350();
  /* 12984009 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298400c mov eax, 1 */
  EAX = (0x1u);
  /* 12984011 jmp 0x1298401f */
  goto L_1298401f;
L_12984013:;
  /* 12984013 push 9 */
  push32((uint32_t)(0x9u));
  /* 12984015 call 0x12986350 */
  push32(0x1298401au); f_12986350();
  /* 1298401a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298401d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298401f:;
  /* 1298401f mov esp, ebp */
  ESP = (EBP);
  /* 12984021 pop ebp */
  EBP = (pop32());
  /* 12984022 ret  */
  ESPCHK(0x12983f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004030 @ 0x12984030 (28 bytes, 11 insns) */
void f_12984030(void) {
  FTRACE(0x12984030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12984030 push ebp */
  push32((uint32_t)(EBP));
  /* 12984031 mov ebp, esp */
  EBP = (ESP);
  /* 12984033 push ecx */
  push32((uint32_t)(ECX));
  /* 12984034 mov eax, dword ptr [0x129afe38] */
  EAX = (r32((uint32_t)(0x129afe38)));
  /* 12984039 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298403c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298403f mov dword ptr [0x129afe38], ecx */
  w32((uint32_t)(0x129afe38), (ECX));
  /* 12984045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984048 mov esp, ebp */
  ESP = (EBP);
  /* 1298404a pop ebp */
  EBP = (pop32());
  /* 1298404b ret  */
  ESPCHK(0x12984030u, _esp0);
  ESP += 4; return;
}

/* FUN_10004050 @ 0x12984050 (362 bytes, 116 insns) */
void f_12984050(void) {
  FTRACE(0x12984050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12984050 push ebp */
  push32((uint32_t)(EBP));
  /* 12984051 mov ebp, esp */
  EBP = (ESP);
  /* 12984053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984056 push ebx */
  push32((uint32_t)(EBX));
  /* 12984057 push esi */
  push32((uint32_t)(ESI));
  /* 12984058 push edi */
  push32((uint32_t)(EDI));
  /* 12984059 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298405d jne 0x1298408a */
  if (!C.zf) goto L_1298408a;
L_1298405f:;
  /* 1298405f push 0x129a98dc */
  push32((uint32_t)(0x129a98dcu));
  /* 12984064 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12984069 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298406b push 0 */
  push32((uint32_t)(0x0u));
  /* 1298406d push 0 */
  push32((uint32_t)(0x0u));
  /* 1298406f push 0 */
  push32((uint32_t)(0x0u));
  /* 12984071 call 0x12981970 */
  push32(0x12984076u); f_12981970();
  /* 12984076 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984079 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298407c jne 0x1298407f */
  if (!C.zf) goto L_1298407f;
  /* 1298407e int3  */
  x86_unimpl("int3 @ 0x1298407e");
L_1298407f:;
  /* 1298407f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984083 jne 0x1298405f */
  if (!C.zf) goto L_1298405f;
  /* 12984085 jmp 0x129841b3 */
  goto L_129841b3;
L_1298408a:;
  /* 1298408a push 9 */
  push32((uint32_t)(0x9u));
  /* 1298408c call 0x129862b0 */
  push32(0x12984091u); f_129862b0();
  /* 12984091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984094 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984097 mov edx, dword ptr [0x129ae4d4] */
  EDX = (r32((uint32_t)(0x129ae4d4)));
  /* 1298409d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1298409f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129840a6 jmp 0x129840b1 */
  goto L_129840b1;
L_129840a8:;
  /* 129840a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129840ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129840ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129840b1:;
  /* 129840b1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129840b5 jge 0x129840d5 */
  if ((C.sf==C.of)) goto L_129840d5;
  /* 129840b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129840ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129840bd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 129840c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129840c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129840cb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 129840d3 jmp 0x129840a8 */
  goto L_129840a8;
L_129840d5:;
  /* 129840d5 mov edx, dword ptr [0x129ae4d4] */
  EDX = (r32((uint32_t)(0x129ae4d4)));
  /* 129840db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129840de jmp 0x129840e8 */
  goto L_129840e8;
L_129840e0:;
  /* 129840e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129840e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129840e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_129840e8:;
  /* 129840e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129840ec je 0x12984191 */
  if (C.zf) goto L_12984191;
  /* 129840f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129840f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 129840f8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129840fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129840ff jl 0x12984167 */
  if ((C.sf!=C.of)) goto L_12984167;
  /* 12984101 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984104 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12984107 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298410d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984110 jge 0x12984167 */
  if ((C.sf==C.of)) goto L_12984167;
  /* 12984112 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984115 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12984118 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1298411e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984121 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12984125 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984128 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298412b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1298412e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12984134 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984137 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1298413b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298413e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12984141 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12984146 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984149 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1298414d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984150 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984153 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984156 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12984159 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298415e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984161 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12984165 jmp 0x1298418c */
  goto L_1298418c;
L_12984167:;
  /* 12984167 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298416a push edx */
  push32((uint32_t)(EDX));
  /* 1298416b push 0x129a98b8 */
  push32((uint32_t)(0x129a98b8u));
  /* 12984170 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984172 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984174 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984176 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984178 call 0x12981970 */
  push32(0x1298417du); f_12981970();
  /* 1298417d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984180 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984183 jne 0x12984186 */
  if (!C.zf) goto L_12984186;
  /* 12984185 int3  */
  x86_unimpl("int3 @ 0x12984185");
L_12984186:;
  /* 12984186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298418a jne 0x12984167 */
  if (!C.zf) goto L_12984167;
L_1298418c:;
  /* 1298418c jmp 0x129840e0 */
  goto L_129840e0;
L_12984191:;
  /* 12984191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984194 mov edx, dword ptr [0x129ae4dc] */
  EDX = (r32((uint32_t)(0x129ae4dc)));
  /* 1298419a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1298419d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129841a0 mov ecx, dword ptr [0x129ae4d0] */
  ECX = (r32((uint32_t)(0x129ae4d0)));
  /* 129841a6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 129841a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 129841ab call 0x12986350 */
  push32(0x129841b0u); f_12986350();
  /* 129841b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129841b3:;
  /* 129841b3 pop edi */
  EDI = (pop32());
  /* 129841b4 pop esi */
  ESI = (pop32());
  /* 129841b5 pop ebx */
  EBX = (pop32());
  /* 129841b6 mov esp, ebp */
  ESP = (EBP);
  /* 129841b8 pop ebp */
  EBP = (pop32());
  /* 129841b9 ret  */
  ESPCHK(0x12984050u, _esp0);
  ESP += 4; return;
}

/* FUN_100041c0 @ 0x129841c0 (291 bytes, 95 insns) */
void f_129841c0(void) {
  FTRACE(0x129841c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129841c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129841c1 mov ebp, esp */
  EBP = (ESP);
  /* 129841c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129841c6 push ebx */
  push32((uint32_t)(EBX));
  /* 129841c7 push esi */
  push32((uint32_t)(ESI));
  /* 129841c8 push edi */
  push32((uint32_t)(EDI));
  /* 129841c9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129841d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129841d4 je 0x129841e2 */
  if (C.zf) goto L_129841e2;
  /* 129841d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129841da je 0x129841e2 */
  if (C.zf) goto L_129841e2;
  /* 129841dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129841e0 jne 0x12984210 */
  if (!C.zf) goto L_12984210;
L_129841e2:;
  /* 129841e2 push 0x129a9904 */
  push32((uint32_t)(0x129a9904u));
  /* 129841e7 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 129841ec push 0 */
  push32((uint32_t)(0x0u));
  /* 129841ee push 0 */
  push32((uint32_t)(0x0u));
  /* 129841f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129841f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129841f4 call 0x12981970 */
  push32(0x129841f9u); f_12981970();
  /* 129841f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129841fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129841ff jne 0x12984202 */
  if (!C.zf) goto L_12984202;
  /* 12984201 int3  */
  x86_unimpl("int3 @ 0x12984201");
L_12984202:;
  /* 12984202 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984206 jne 0x129841e2 */
  if (!C.zf) goto L_129841e2;
  /* 12984208 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298420b jmp 0x129842dc */
  goto L_129842dc;
L_12984210:;
  /* 12984210 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12984217 jmp 0x12984222 */
  goto L_12984222;
L_12984219:;
  /* 12984219 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298421c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298421f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12984222:;
  /* 12984222 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984226 jge 0x129842ac */
  if ((C.sf==C.of)) goto L_129842ac;
  /* 1298422c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298422f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984235 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12984238 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1298423c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984243 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984246 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1298424a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298424d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984250 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984253 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12984256 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1298425a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298425e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984261 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984264 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12984268 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298426b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298426e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984273 jne 0x12984282 */
  if (!C.zf) goto L_12984282;
  /* 12984275 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298427b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984280 je 0x129842a7 */
  if (C.zf) goto L_129842a7;
L_12984282:;
  /* 12984282 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984286 je 0x129842a7 */
  if (C.zf) goto L_129842a7;
  /* 12984288 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298428c jne 0x129842a0 */
  if (!C.zf) goto L_129842a0;
  /* 1298428e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984292 jne 0x129842a7 */
  if (!C.zf) goto L_129842a7;
  /* 12984294 mov eax, dword ptr [0x129aca84] */
  EAX = (r32((uint32_t)(0x129aca84)));
  /* 12984299 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1298429c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298429e je 0x129842a7 */
  if (C.zf) goto L_129842a7;
L_129842a0:;
  /* 129842a0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_129842a7:;
  /* 129842a7 jmp 0x12984219 */
  goto L_12984219;
L_129842ac:;
  /* 129842ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129842af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129842b2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 129842b5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129842b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129842bb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 129842be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129842c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129842c4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 129842c7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129842ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129842cd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 129842d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129842d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 129842d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_129842dc:;
  /* 129842dc pop edi */
  EDI = (pop32());
  /* 129842dd pop esi */
  ESI = (pop32());
  /* 129842de pop ebx */
  EBX = (pop32());
  /* 129842df mov esp, ebp */
  ESP = (EBP);
  /* 129842e1 pop ebp */
  EBP = (pop32());
  /* 129842e2 ret  */
  ESPCHK(0x129841c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042f0 @ 0x129842f0 (697 bytes, 253 insns) */
void f_129842f0(void) {
  FTRACE(0x129842f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129842f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129842f1 mov ebp, esp */
  EBP = (ESP);
  /* 129842f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129842f6 push ebx */
  push32((uint32_t)(EBX));
  /* 129842f7 push esi */
  push32((uint32_t)(ESI));
  /* 129842f8 push edi */
  push32((uint32_t)(EDI));
  /* 129842f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12984300 push 9 */
  push32((uint32_t)(0x9u));
  /* 12984302 call 0x129862b0 */
  push32(0x12984307u); f_129862b0();
  /* 12984307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298430a:;
  /* 1298430a push 0x129a99fc */
  push32((uint32_t)(0x129a99fcu));
  /* 1298430f push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12984314 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984316 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984318 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298431a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298431c call 0x12981970 */
  push32(0x12984321u); f_12981970();
  /* 12984321 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984324 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984327 jne 0x1298432a */
  if (!C.zf) goto L_1298432a;
  /* 12984329 int3  */
  x86_unimpl("int3 @ 0x12984329");
L_1298432a:;
  /* 1298432a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298432c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298432e jne 0x1298430a */
  if (!C.zf) goto L_1298430a;
  /* 12984330 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984334 je 0x1298433e */
  if (C.zf) goto L_1298433e;
  /* 12984336 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984339 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298433b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1298433e:;
  /* 1298433e mov eax, dword ptr [0x129ae4d4] */
  EAX = (r32((uint32_t)(0x129ae4d4)));
  /* 12984343 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12984346 jmp 0x12984350 */
  goto L_12984350;
L_12984348:;
  /* 12984348 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298434b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298434d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12984350:;
  /* 12984350 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984354 je 0x12984572 */
  if (C.zf) goto L_12984572;
  /* 1298435a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298435d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984360 je 0x12984572 */
  if (C.zf) goto L_12984572;
  /* 12984366 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984369 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1298436c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12984372 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984375 je 0x129843a4 */
  if (C.zf) goto L_129843a4;
  /* 12984377 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298437a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1298437d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12984383 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12984385 je 0x129843a4 */
  if (C.zf) goto L_129843a4;
  /* 12984387 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298438a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1298438d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12984392 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984395 jne 0x129843a9 */
  if (!C.zf) goto L_129843a9;
  /* 12984397 mov ecx, dword ptr [0x129aca84] */
  ECX = (r32((uint32_t)(0x129aca84)));
  /* 1298439d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 129843a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129843a2 jne 0x129843a9 */
  if (!C.zf) goto L_129843a9;
L_129843a4:;
  /* 129843a4 jmp 0x1298456d */
  goto L_1298456d;
L_129843a9:;
  /* 129843a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129843ac cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129843b0 je 0x12984422 */
  if (C.zf) goto L_12984422;
  /* 129843b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129843b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 129843b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129843b9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129843bc push ecx */
  push32((uint32_t)(ECX));
  /* 129843bd call 0x12983e60 */
  push32(0x129843c2u); f_12983e60();
  /* 129843c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129843c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129843c7 jne 0x129843f3 */
  if (!C.zf) goto L_129843f3;
L_129843c9:;
  /* 129843c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129843cc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129843cf push eax */
  push32((uint32_t)(EAX));
  /* 129843d0 push 0x129a99e8 */
  push32((uint32_t)(0x129a99e8u));
  /* 129843d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129843d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129843d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129843db push 0 */
  push32((uint32_t)(0x0u));
  /* 129843dd call 0x12981970 */
  push32(0x129843e2u); f_12981970();
  /* 129843e2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129843e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129843e8 jne 0x129843eb */
  if (!C.zf) goto L_129843eb;
  /* 129843ea int3  */
  x86_unimpl("int3 @ 0x129843ea");
L_129843eb:;
  /* 129843eb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129843ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129843ef jne 0x129843c9 */
  if (!C.zf) goto L_129843c9;
  /* 129843f1 jmp 0x12984422 */
  goto L_12984422;
L_129843f3:;
  /* 129843f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129843f6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129843f9 push eax */
  push32((uint32_t)(EAX));
  /* 129843fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129843fd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12984400 push edx */
  push32((uint32_t)(EDX));
  /* 12984401 push 0x129a99dc */
  push32((uint32_t)(0x129a99dcu));
  /* 12984406 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298440a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298440c push 0 */
  push32((uint32_t)(0x0u));
  /* 1298440e call 0x12981970 */
  push32(0x12984413u); f_12981970();
  /* 12984413 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984416 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984419 jne 0x1298441c */
  if (!C.zf) goto L_1298441c;
  /* 1298441b int3  */
  x86_unimpl("int3 @ 0x1298441b");
L_1298441c:;
  /* 1298441c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298441e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984420 jne 0x129843f3 */
  if (!C.zf) goto L_129843f3;
L_12984422:;
  /* 12984422 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984425 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12984428 push edx */
  push32((uint32_t)(EDX));
  /* 12984429 push 0x129a99d4 */
  push32((uint32_t)(0x129a99d4u));
  /* 1298442e push 0 */
  push32((uint32_t)(0x0u));
  /* 12984430 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984432 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984434 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984436 call 0x12981970 */
  push32(0x1298443bu); f_12981970();
  /* 1298443b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298443e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984441 jne 0x12984444 */
  if (!C.zf) goto L_12984444;
  /* 12984443 int3  */
  x86_unimpl("int3 @ 0x12984443");
L_12984444:;
  /* 12984444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984446 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984448 jne 0x12984422 */
  if (!C.zf) goto L_12984422;
  /* 1298444a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298444d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12984450 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12984456 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984459 jne 0x129844cc */
  if (!C.zf) goto L_129844cc;
L_1298445b:;
  /* 1298445b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298445e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12984461 push ecx */
  push32((uint32_t)(ECX));
  /* 12984462 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984465 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12984468 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1298446b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12984470 push eax */
  push32((uint32_t)(EAX));
  /* 12984471 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984474 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984477 push ecx */
  push32((uint32_t)(ECX));
  /* 12984478 push 0x129a99a0 */
  push32((uint32_t)(0x129a99a0u));
  /* 1298447d push 0 */
  push32((uint32_t)(0x0u));
  /* 1298447f push 0 */
  push32((uint32_t)(0x0u));
  /* 12984481 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984483 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984485 call 0x12981970 */
  push32(0x1298448au); f_12981970();
  /* 1298448a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298448d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984490 jne 0x12984493 */
  if (!C.zf) goto L_12984493;
  /* 12984492 int3  */
  x86_unimpl("int3 @ 0x12984492");
L_12984493:;
  /* 12984493 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12984495 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12984497 jne 0x1298445b */
  if (!C.zf) goto L_1298445b;
  /* 12984499 cmp dword ptr [0x129afe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129afe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129844a0 je 0x129844bb */
  if (C.zf) goto L_129844bb;
  /* 129844a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129844a5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129844a8 push ecx */
  push32((uint32_t)(ECX));
  /* 129844a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129844ac add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129844af push edx */
  push32((uint32_t)(EDX));
  /* 129844b0 call dword ptr [0x129afe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x129afe38))), 0x129844b6u);
  /* 129844b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129844b9 jmp 0x129844c7 */
  goto L_129844c7;
L_129844bb:;
  /* 129844bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129844be push eax */
  push32((uint32_t)(EAX));
  /* 129844bf call 0x129845b0 */
  push32(0x129844c4u); f_129845b0();
  /* 129844c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129844c7:;
  /* 129844c7 jmp 0x1298456d */
  goto L_1298456d;
L_129844cc:;
  /* 129844cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129844cf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129844d3 jne 0x12984512 */
  if (!C.zf) goto L_12984512;
L_129844d5:;
  /* 129844d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129844d8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129844db push eax */
  push32((uint32_t)(EAX));
  /* 129844dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129844df add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129844e2 push ecx */
  push32((uint32_t)(ECX));
  /* 129844e3 push 0x129a9978 */
  push32((uint32_t)(0x129a9978u));
  /* 129844e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129844ea push 0 */
  push32((uint32_t)(0x0u));
  /* 129844ec push 0 */
  push32((uint32_t)(0x0u));
  /* 129844ee push 0 */
  push32((uint32_t)(0x0u));
  /* 129844f0 call 0x12981970 */
  push32(0x129844f5u); f_12981970();
  /* 129844f5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129844f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129844fb jne 0x129844fe */
  if (!C.zf) goto L_129844fe;
  /* 129844fd int3  */
  x86_unimpl("int3 @ 0x129844fd");
L_129844fe:;
  /* 129844fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12984500 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12984502 jne 0x129844d5 */
  if (!C.zf) goto L_129844d5;
  /* 12984504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984507 push eax */
  push32((uint32_t)(EAX));
  /* 12984508 call 0x129845b0 */
  push32(0x1298450du); f_129845b0();
  /* 1298450d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984510 jmp 0x1298456d */
  goto L_1298456d;
L_12984512:;
  /* 12984512 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984515 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12984518 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298451e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984521 jne 0x1298456d */
  if (!C.zf) goto L_1298456d;
L_12984523:;
  /* 12984523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984526 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12984529 push ecx */
  push32((uint32_t)(ECX));
  /* 1298452a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298452d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12984530 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12984533 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12984538 push eax */
  push32((uint32_t)(EAX));
  /* 12984539 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298453c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298453f push ecx */
  push32((uint32_t)(ECX));
  /* 12984540 push 0x129a9944 */
  push32((uint32_t)(0x129a9944u));
  /* 12984545 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984547 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984549 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298454b push 0 */
  push32((uint32_t)(0x0u));
  /* 1298454d call 0x12981970 */
  push32(0x12984552u); f_12981970();
  /* 12984552 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984555 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984558 jne 0x1298455b */
  if (!C.zf) goto L_1298455b;
  /* 1298455a int3  */
  x86_unimpl("int3 @ 0x1298455a");
L_1298455b:;
  /* 1298455b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298455d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298455f jne 0x12984523 */
  if (!C.zf) goto L_12984523;
  /* 12984561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984564 push eax */
  push32((uint32_t)(EAX));
  /* 12984565 call 0x129845b0 */
  push32(0x1298456au); f_129845b0();
  /* 1298456a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298456d:;
  /* 1298456d jmp 0x12984348 */
  goto L_12984348;
L_12984572:;
  /* 12984572 push 9 */
  push32((uint32_t)(0x9u));
  /* 12984574 call 0x12986350 */
  push32(0x12984579u); f_12986350();
  /* 12984579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298457c:;
  /* 1298457c push 0x129a992c */
  push32((uint32_t)(0x129a992cu));
  /* 12984581 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 12984586 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984588 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298458a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298458c push 0 */
  push32((uint32_t)(0x0u));
  /* 1298458e call 0x12981970 */
  push32(0x12984593u); f_12981970();
  /* 12984593 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984596 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984599 jne 0x1298459c */
  if (!C.zf) goto L_1298459c;
  /* 1298459b int3  */
  x86_unimpl("int3 @ 0x1298459b");
L_1298459c:;
  /* 1298459c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298459e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129845a0 jne 0x1298457c */
  if (!C.zf) goto L_1298457c;
  /* 129845a2 pop edi */
  EDI = (pop32());
  /* 129845a3 pop esi */
  ESI = (pop32());
  /* 129845a4 pop ebx */
  EBX = (pop32());
  /* 129845a5 mov esp, ebp */
  ESP = (EBP);
  /* 129845a7 pop ebp */
  EBP = (pop32());
  /* 129845a8 ret  */
  ESPCHK(0x129842f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045b0 @ 0x129845b0 (276 bytes, 89 insns) */
void f_129845b0(void) {
  FTRACE(0x129845b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129845b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129845b1 mov ebp, esp */
  EBP = (ESP);
  /* 129845b3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129845b6 push ebx */
  push32((uint32_t)(EBX));
  /* 129845b7 push esi */
  push32((uint32_t)(ESI));
  /* 129845b8 push edi */
  push32((uint32_t)(EDI));
  /* 129845b9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 129845c0 jmp 0x129845cb */
  goto L_129845cb;
L_129845c2:;
  /* 129845c2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129845c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129845c8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_129845cb:;
  /* 129845cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129845ce cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129845d2 jge 0x129845df */
  if ((C.sf==C.of)) goto L_129845df;
  /* 129845d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129845d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129845da mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 129845dd jmp 0x129845e6 */
  goto L_129845e6;
L_129845df:;
  /* 129845df mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_129845e6:;
  /* 129845e6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 129845e9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129845ec jge 0x1298468c */
  if ((C.sf==C.of)) goto L_1298468c;
  /* 129845f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129845f5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129845f8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 129845fb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 129845fe cmp dword ptr [0x129acea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129acea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984605 jle 0x12984623 */
  if ((C.zf||C.sf!=C.of)) goto L_12984623;
  /* 12984607 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1298460c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1298460f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12984615 push ecx */
  push32((uint32_t)(ECX));
  /* 12984616 call 0x129888c0 */
  push32(0x1298461bu); f_129888c0();
  /* 1298461b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298461e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12984621 jmp 0x12984640 */
  goto L_12984640;
L_12984623:;
  /* 12984623 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12984626 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298462c mov eax, dword ptr [0x129acc98] */
  EAX = (r32((uint32_t)(0x129acc98)));
  /* 12984631 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12984633 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12984637 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1298463d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12984640:;
  /* 12984640 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984644 je 0x12984654 */
  if (C.zf) goto L_12984654;
  /* 12984646 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12984649 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298464f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12984652 jmp 0x1298465b */
  goto L_1298465b;
L_12984654:;
  /* 12984654 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1298465b:;
  /* 1298465b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1298465e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12984661 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12984665 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12984668 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298466e push edx */
  push32((uint32_t)(EDX));
  /* 1298466f push 0x129a9a20 */
  push32((uint32_t)(0x129a9a20u));
  /* 12984674 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12984677 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298467a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1298467e push ecx */
  push32((uint32_t)(ECX));
  /* 1298467f call 0x129887c0 */
  push32(0x12984684u); f_129887c0();
  /* 12984684 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984687 jmp 0x129845c2 */
  goto L_129845c2;
L_1298468c:;
  /* 1298468c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1298468f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12984694:;
  /* 12984694 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12984697 push eax */
  push32((uint32_t)(EAX));
  /* 12984698 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1298469b push ecx */
  push32((uint32_t)(ECX));
  /* 1298469c push 0x129a9a10 */
  push32((uint32_t)(0x129a9a10u));
  /* 129846a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129846a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129846a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129846a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129846a9 call 0x12981970 */
  push32(0x129846aeu); f_12981970();
  /* 129846ae add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129846b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129846b4 jne 0x129846b7 */
  if (!C.zf) goto L_129846b7;
  /* 129846b6 int3  */
  x86_unimpl("int3 @ 0x129846b6");
L_129846b7:;
  /* 129846b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129846b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129846bb jne 0x12984694 */
  if (!C.zf) goto L_12984694;
  /* 129846bd pop edi */
  EDI = (pop32());
  /* 129846be pop esi */
  ESI = (pop32());
  /* 129846bf pop ebx */
  EBX = (pop32());
  /* 129846c0 mov esp, ebp */
  ESP = (EBP);
  /* 129846c2 pop ebp */
  EBP = (pop32());
  /* 129846c3 ret  */
  ESPCHK(0x129845b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046d0 @ 0x129846d0 (116 bytes, 46 insns) */
void f_129846d0(void) {
  FTRACE(0x129846d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129846d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129846d1 mov ebp, esp */
  EBP = (ESP);
  /* 129846d3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129846d6 push ebx */
  push32((uint32_t)(EBX));
  /* 129846d7 push esi */
  push32((uint32_t)(ESI));
  /* 129846d8 push edi */
  push32((uint32_t)(EDI));
  /* 129846d9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 129846dc push eax */
  push32((uint32_t)(EAX));
  /* 129846dd call 0x12984050 */
  push32(0x129846e2u); f_12984050();
  /* 129846e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129846e5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129846e9 jne 0x12984704 */
  if (!C.zf) goto L_12984704;
  /* 129846eb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129846ef jne 0x12984704 */
  if (!C.zf) goto L_12984704;
  /* 129846f1 mov ecx, dword ptr [0x129aca84] */
  ECX = (r32((uint32_t)(0x129aca84)));
  /* 129846f7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 129846fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129846fc je 0x1298473b */
  if (C.zf) goto L_1298473b;
  /* 129846fe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984702 je 0x1298473b */
  if (C.zf) goto L_1298473b;
L_12984704:;
  /* 12984704 push 0x129a9a28 */
  push32((uint32_t)(0x129a9a28u));
  /* 12984709 push 0x129a93f4 */
  push32((uint32_t)(0x129a93f4u));
  /* 1298470e push 0 */
  push32((uint32_t)(0x0u));
  /* 12984710 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984714 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984716 call 0x12981970 */
  push32(0x1298471bu); f_12981970();
  /* 1298471b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298471e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984721 jne 0x12984724 */
  if (!C.zf) goto L_12984724;
  /* 12984723 int3  */
  x86_unimpl("int3 @ 0x12984723");
L_12984724:;
  /* 12984724 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12984726 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12984728 jne 0x12984704 */
  if (!C.zf) goto L_12984704;
  /* 1298472a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298472c call 0x129842f0 */
  push32(0x12984731u); f_129842f0();
  /* 12984731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984734 mov eax, 1 */
  EAX = (0x1u);
  /* 12984739 jmp 0x1298473d */
  goto L_1298473d;
L_1298473b:;
  /* 1298473b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298473d:;
  /* 1298473d pop edi */
  EDI = (pop32());
  /* 1298473e pop esi */
  ESI = (pop32());
  /* 1298473f pop ebx */
  EBX = (pop32());
  /* 12984740 mov esp, ebp */
  ESP = (EBP);
  /* 12984742 pop ebp */
  EBP = (pop32());
  /* 12984743 ret  */
  ESPCHK(0x129846d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004750 @ 0x12984750 (197 bytes, 79 insns) */
void f_12984750(void) {
  FTRACE(0x12984750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12984750 push ebp */
  push32((uint32_t)(EBP));
  /* 12984751 mov ebp, esp */
  EBP = (ESP);
  /* 12984753 push ecx */
  push32((uint32_t)(ECX));
  /* 12984754 push ebx */
  push32((uint32_t)(EBX));
  /* 12984755 push esi */
  push32((uint32_t)(ESI));
  /* 12984756 push edi */
  push32((uint32_t)(EDI));
  /* 12984757 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298475b jne 0x12984762 */
  if (!C.zf) goto L_12984762;
  /* 1298475d jmp 0x1298480e */
  goto L_1298480e;
L_12984762:;
  /* 12984762 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12984769 jmp 0x12984774 */
  goto L_12984774;
L_1298476b:;
  /* 1298476b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298476e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984771 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12984774:;
  /* 12984774 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984778 jge 0x129847be */
  if ((C.sf==C.of)) goto L_129847be;
L_1298477a:;
  /* 1298477a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298477d mov edx, dword ptr [ecx*4 + 0x129aca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129aca94)));
  /* 12984784 push edx */
  push32((uint32_t)(EDX));
  /* 12984785 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298478b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1298478f push edx */
  push32((uint32_t)(EDX));
  /* 12984790 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984793 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984796 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1298479a push edx */
  push32((uint32_t)(EDX));
  /* 1298479b push 0x129a9a84 */
  push32((uint32_t)(0x129a9a84u));
  /* 129847a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129847a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129847a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129847a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129847a8 call 0x12981970 */
  push32(0x129847adu); f_12981970();
  /* 129847ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129847b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129847b3 jne 0x129847b6 */
  if (!C.zf) goto L_129847b6;
  /* 129847b5 int3  */
  x86_unimpl("int3 @ 0x129847b5");
L_129847b6:;
  /* 129847b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129847b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129847ba jne 0x1298477a */
  if (!C.zf) goto L_1298477a;
  /* 129847bc jmp 0x1298476b */
  goto L_1298476b;
L_129847be:;
  /* 129847be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129847c1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 129847c4 push edx */
  push32((uint32_t)(EDX));
  /* 129847c5 push 0x129a9a60 */
  push32((uint32_t)(0x129a9a60u));
  /* 129847ca push 0 */
  push32((uint32_t)(0x0u));
  /* 129847cc push 0 */
  push32((uint32_t)(0x0u));
  /* 129847ce push 0 */
  push32((uint32_t)(0x0u));
  /* 129847d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129847d2 call 0x12981970 */
  push32(0x129847d7u); f_12981970();
  /* 129847d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129847da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129847dd jne 0x129847e0 */
  if (!C.zf) goto L_129847e0;
  /* 129847df int3  */
  x86_unimpl("int3 @ 0x129847df");
L_129847e0:;
  /* 129847e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129847e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129847e4 jne 0x129847be */
  if (!C.zf) goto L_129847be;
L_129847e6:;
  /* 129847e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129847e9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 129847ec push edx */
  push32((uint32_t)(EDX));
  /* 129847ed push 0x129a9a40 */
  push32((uint32_t)(0x129a9a40u));
  /* 129847f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 129847f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129847f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129847f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 129847fa call 0x12981970 */
  push32(0x129847ffu); f_12981970();
  /* 129847ff add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984802 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984805 jne 0x12984808 */
  if (!C.zf) goto L_12984808;
  /* 12984807 int3  */
  x86_unimpl("int3 @ 0x12984807");
L_12984808:;
  /* 12984808 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298480a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298480c jne 0x129847e6 */
  if (!C.zf) goto L_129847e6;
L_1298480e:;
  /* 1298480e pop edi */
  EDI = (pop32());
  /* 1298480f pop esi */
  ESI = (pop32());
  /* 12984810 pop ebx */
  EBX = (pop32());
  /* 12984811 mov esp, ebp */
  ESP = (EBP);
  /* 12984813 pop ebp */
  EBP = (pop32());
  /* 12984814 ret  */
  ESPCHK(0x12984750u, _esp0);
  ESP += 4; return;
}

/* FUN_10004820 @ 0x12984820 (329 bytes, 102 insns) */
void f_12984820(void) {
  FTRACE(0x12984820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12984820 push ebp */
  push32((uint32_t)(EBP));
  /* 12984821 mov ebp, esp */
  EBP = (ESP);
  /* 12984823 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984826 cmp dword ptr [0x129affb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129affb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298482d jne 0x12984834 */
  if (!C.zf) goto L_12984834;
  /* 1298482f call 0x12989160 */
  push32(0x12984834u); f_12989160();
L_12984834:;
  /* 12984834 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298483b mov eax, dword ptr [0x129ae470] */
  EAX = (r32((uint32_t)(0x129ae470)));
  /* 12984840 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12984843:;
  /* 12984843 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984846 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12984849 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298484b je 0x12984879 */
  if (C.zf) goto L_12984879;
  /* 1298484d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984850 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12984853 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984856 je 0x12984861 */
  if (C.zf) goto L_12984861;
  /* 12984858 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298485b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298485e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12984861:;
  /* 12984861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984864 push eax */
  push32((uint32_t)(EAX));
  /* 12984865 call 0x129856e0 */
  push32(0x1298486au); f_129856e0();
  /* 1298486a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298486d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984870 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12984874 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12984877 jmp 0x12984843 */
  goto L_12984843;
L_12984879:;
  /* 12984879 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1298487b push 0x129a9aa4 */
  push32((uint32_t)(0x129a9aa4u));
  /* 12984880 push 2 */
  push32((uint32_t)(0x2u));
  /* 12984882 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984885 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1298488c push ecx */
  push32((uint32_t)(ECX));
  /* 1298488d call 0x129828b0 */
  push32(0x12984892u); f_129828b0();
  /* 12984892 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984895 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12984898 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298489b mov dword ptr [0x129ae4a4], edx */
  w32((uint32_t)(0x129ae4a4), (EDX));
  /* 129848a1 cmp dword ptr [0x129ae4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129848a8 jne 0x129848b4 */
  if (!C.zf) goto L_129848b4;
  /* 129848aa push 9 */
  push32((uint32_t)(0x9u));
  /* 129848ac call 0x12981820 */
  push32(0x129848b1u); f_12981820();
  /* 129848b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129848b4:;
  /* 129848b4 mov eax, dword ptr [0x129ae470] */
  EAX = (r32((uint32_t)(0x129ae470)));
  /* 129848b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129848bc jmp 0x129848c7 */
  goto L_129848c7;
L_129848be:;
  /* 129848be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129848c1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129848c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129848c7:;
  /* 129848c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129848ca movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129848cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129848cf je 0x12984937 */
  if (C.zf) goto L_12984937;
  /* 129848d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129848d4 push ecx */
  push32((uint32_t)(ECX));
  /* 129848d5 call 0x129856e0 */
  push32(0x129848dau); f_129856e0();
  /* 129848da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129848dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129848e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129848e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129848e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 129848e9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129848ec je 0x12984935 */
  if (C.zf) goto L_12984935;
  /* 129848ee push 0x79 */
  push32((uint32_t)(0x79u));
  /* 129848f0 push 0x129a9aa4 */
  push32((uint32_t)(0x129a9aa4u));
  /* 129848f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 129848f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129848fa push ecx */
  push32((uint32_t)(ECX));
  /* 129848fb call 0x129828b0 */
  push32(0x12984900u); f_129828b0();
  /* 12984900 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984903 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984906 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12984908 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298490b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298490e jne 0x1298491a */
  if (!C.zf) goto L_1298491a;
  /* 12984910 push 9 */
  push32((uint32_t)(0x9u));
  /* 12984912 call 0x12981820 */
  push32(0x12984917u); f_12981820();
  /* 12984917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298491a:;
  /* 1298491a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298491d push ecx */
  push32((uint32_t)(ECX));
  /* 1298491e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984921 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12984923 push eax */
  push32((uint32_t)(EAX));
  /* 12984924 call 0x12985860 */
  push32(0x12984929u); f_12985860();
  /* 12984929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298492c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298492f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984932 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12984935:;
  /* 12984935 jmp 0x129848be */
  goto L_129848be;
L_12984937:;
  /* 12984937 push 2 */
  push32((uint32_t)(0x2u));
  /* 12984939 mov edx, dword ptr [0x129ae470] */
  EDX = (r32((uint32_t)(0x129ae470)));
  /* 1298493f push edx */
  push32((uint32_t)(EDX));
  /* 12984940 call 0x12983340 */
  push32(0x12984945u); f_12983340();
  /* 12984945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984948 mov dword ptr [0x129ae470], 0 */
  w32((uint32_t)(0x129ae470), (0x0u));
  /* 12984952 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984955 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298495b mov dword ptr [0x129affa0], 1 */
  w32((uint32_t)(0x129affa0), (0x1u));
  /* 12984965 mov esp, ebp */
  ESP = (EBP);
  /* 12984967 pop ebp */
  EBP = (pop32());
  /* 12984968 ret  */
  ESPCHK(0x12984820u, _esp0);
  ESP += 4; return;
}

/* FUN_10004970 @ 0x12984970 (216 bytes, 69 insns) */
void f_12984970(void) {
  FTRACE(0x12984970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12984970 push ebp */
  push32((uint32_t)(EBP));
  /* 12984971 mov ebp, esp */
  EBP = (ESP);
  /* 12984973 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984976 cmp dword ptr [0x129affb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129affb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298497d jne 0x12984984 */
  if (!C.zf) goto L_12984984;
  /* 1298497f call 0x12989160 */
  push32(0x12984984u); f_12989160();
L_12984984:;
  /* 12984984 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12984989 push 0x129ae4e0 */
  push32((uint32_t)(0x129ae4e0u));
  /* 1298498e push 0 */
  push32((uint32_t)(0x0u));
  /* 12984990 call dword ptr [0x129b026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b026c))), 0x12984996u);
  /* 12984996 mov dword ptr [0x129ae4b4], 0x129ae4e0 */
  w32((uint32_t)(0x129ae4b4), (0x129ae4e0u));
  /* 129849a0 mov eax, dword ptr [0x129affcc] */
  EAX = (r32((uint32_t)(0x129affcc)));
  /* 129849a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 129849a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129849aa jne 0x129849b7 */
  if (!C.zf) goto L_129849b7;
  /* 129849ac mov edx, dword ptr [0x129ae4b4] */
  EDX = (r32((uint32_t)(0x129ae4b4)));
  /* 129849b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129849b5 jmp 0x129849bf */
  goto L_129849bf;
L_129849b7:;
  /* 129849b7 mov eax, dword ptr [0x129affcc] */
  EAX = (r32((uint32_t)(0x129affcc)));
  /* 129849bc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_129849bf:;
  /* 129849bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129849c2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129849c5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 129849c8 push edx */
  push32((uint32_t)(EDX));
  /* 129849c9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 129849cc push eax */
  push32((uint32_t)(EAX));
  /* 129849cd push 0 */
  push32((uint32_t)(0x0u));
  /* 129849cf push 0 */
  push32((uint32_t)(0x0u));
  /* 129849d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129849d4 push ecx */
  push32((uint32_t)(ECX));
  /* 129849d5 call 0x12984a50 */
  push32(0x129849dau); f_12984a50();
  /* 129849da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129849dd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 129849e2 push 0x129a9ab0 */
  push32((uint32_t)(0x129a9ab0u));
  /* 129849e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 129849e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129849ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129849ef lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 129849f2 push ecx */
  push32((uint32_t)(ECX));
  /* 129849f3 call 0x129828b0 */
  push32(0x129849f8u); f_129828b0();
  /* 129849f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129849fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129849fe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984a02 jne 0x12984a0e */
  if (!C.zf) goto L_12984a0e;
  /* 12984a04 push 8 */
  push32((uint32_t)(0x8u));
  /* 12984a06 call 0x12981820 */
  push32(0x12984a0bu); f_12981820();
  /* 12984a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12984a0e:;
  /* 12984a0e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12984a11 push edx */
  push32((uint32_t)(EDX));
  /* 12984a12 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12984a15 push eax */
  push32((uint32_t)(EAX));
  /* 12984a16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984a19 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984a1c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12984a1f push eax */
  push32((uint32_t)(EAX));
  /* 12984a20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984a23 push ecx */
  push32((uint32_t)(ECX));
  /* 12984a24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12984a27 push edx */
  push32((uint32_t)(EDX));
  /* 12984a28 call 0x12984a50 */
  push32(0x12984a2du); f_12984a50();
  /* 12984a2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984a30 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984a33 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984a36 mov dword ptr [0x129ae498], eax */
  w32((uint32_t)(0x129ae498), (EAX));
  /* 12984a3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984a3e mov dword ptr [0x129ae49c], ecx */
  w32((uint32_t)(0x129ae49c), (ECX));
  /* 12984a44 mov esp, ebp */
  ESP = (EBP);
  /* 12984a46 pop ebp */
  EBP = (pop32());
  /* 12984a47 ret  */
  ESPCHK(0x12984970u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a50 @ 0x12984a50 (1060 bytes, 360 insns) */
void f_12984a50(void) {
  FTRACE(0x12984a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12984a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12984a51 mov ebp, esp */
  EBP = (ESP);
  /* 12984a53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984a56 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984a59 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12984a5f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12984a62 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12984a68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12984a6b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12984a6e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984a72 je 0x12984a85 */
  if (C.zf) goto L_12984a85;
  /* 12984a74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12984a77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984a7a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12984a7c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12984a7f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984a82 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12984a85:;
  /* 12984a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984a88 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12984a8b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984a8e jne 0x12984b5d */
  if (!C.zf) goto L_12984b5d;
L_12984a94:;
  /* 12984a94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984a97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984a9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12984a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984aa0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12984aa3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984aa6 je 0x12984b22 */
  if (C.zf) goto L_12984b22;
  /* 12984aa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984aab movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12984aae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984ab0 je 0x12984b22 */
  if (C.zf) goto L_12984b22;
  /* 12984ab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984ab5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12984ab7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12984ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984abb mov al, byte ptr [edx + 0x129afd01] */
  AL = (r8((uint32_t)(EDX + 0x129afd01)));
  /* 12984ac1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12984ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984ac6 je 0x12984af7 */
  if (C.zf) goto L_12984af7;
  /* 12984ac8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984acb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12984acd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984ad0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984ad3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12984ad5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984ad9 je 0x12984af7 */
  if (C.zf) goto L_12984af7;
  /* 12984adb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984ade mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984ae1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12984ae3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12984ae5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984ae8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984aeb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12984aee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984af1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984af4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12984af7:;
  /* 12984af7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984afa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12984afc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984aff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984b02 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12984b04 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984b08 je 0x12984b1d */
  if (C.zf) goto L_12984b1d;
  /* 12984b0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984b0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984b10 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12984b12 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12984b14 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984b17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984b1a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12984b1d:;
  /* 12984b1d jmp 0x12984a94 */
  goto L_12984a94;
L_12984b22:;
  /* 12984b22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984b25 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12984b27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984b2a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984b2d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12984b2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984b33 je 0x12984b44 */
  if (C.zf) goto L_12984b44;
  /* 12984b35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984b38 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12984b3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984b3e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984b41 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12984b44:;
  /* 12984b44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984b47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12984b4a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984b4d jne 0x12984b58 */
  if (!C.zf) goto L_12984b58;
  /* 12984b4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984b52 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984b55 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12984b58:;
  /* 12984b58 jmp 0x12984c2c */
  goto L_12984c2c;
L_12984b5d:;
  /* 12984b5d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984b60 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12984b62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984b65 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984b68 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12984b6a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984b6e je 0x12984b83 */
  if (C.zf) goto L_12984b83;
  /* 12984b70 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984b73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984b76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12984b78 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12984b7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984b7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984b80 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12984b83:;
  /* 12984b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984b86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12984b88 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12984b8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984b8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984b91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12984b94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984b97 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12984b9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12984b9f mov dl, byte ptr [ecx + 0x129afd01] */
  DL = (r8((uint32_t)(ECX + 0x129afd01)));
  /* 12984ba5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12984ba8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12984baa je 0x12984bdb */
  if (C.zf) goto L_12984bdb;
  /* 12984bac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984baf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12984bb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984bb4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984bb7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12984bb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984bbd je 0x12984bd2 */
  if (C.zf) goto L_12984bd2;
  /* 12984bbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984bc5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12984bc7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12984bc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984bcc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984bcf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12984bd2:;
  /* 12984bd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984bd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984bd8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12984bdb:;
  /* 12984bdb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984bde and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12984be4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984be7 je 0x12984c07 */
  if (C.zf) goto L_12984c07;
  /* 12984be9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984bec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12984bf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984bf3 je 0x12984c07 */
  if (C.zf) goto L_12984c07;
  /* 12984bf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984bf8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12984bfe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984c01 jne 0x12984b5d */
  if (!C.zf) goto L_12984b5d;
L_12984c07:;
  /* 12984c07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12984c0a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12984c10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12984c12 jne 0x12984c1f */
  if (!C.zf) goto L_12984c1f;
  /* 12984c14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984c17 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984c1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12984c1d jmp 0x12984c2c */
  goto L_12984c2c;
L_12984c1f:;
  /* 12984c1f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984c23 je 0x12984c2c */
  if (C.zf) goto L_12984c2c;
  /* 12984c25 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984c28 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12984c2c:;
  /* 12984c2c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12984c33:;
  /* 12984c33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984c36 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12984c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984c3b je 0x12984c5e */
  if (C.zf) goto L_12984c5e;
L_12984c3d:;
  /* 12984c3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984c40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12984c43 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984c46 je 0x12984c53 */
  if (C.zf) goto L_12984c53;
  /* 12984c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984c4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12984c4e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984c51 jne 0x12984c5e */
  if (!C.zf) goto L_12984c5e;
L_12984c53:;
  /* 12984c53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984c56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984c59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12984c5c jmp 0x12984c3d */
  goto L_12984c3d;
L_12984c5e:;
  /* 12984c5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984c61 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12984c64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12984c66 jne 0x12984c6d */
  if (!C.zf) goto L_12984c6d;
  /* 12984c68 jmp 0x12984e4b */
  goto L_12984e4b;
L_12984c6d:;
  /* 12984c6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984c71 je 0x12984c84 */
  if (C.zf) goto L_12984c84;
  /* 12984c73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12984c76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984c79 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12984c7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12984c7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984c81 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12984c84:;
  /* 12984c84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12984c87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12984c89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984c8c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12984c8f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12984c91:;
  /* 12984c91 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12984c98 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12984c9f:;
  /* 12984c9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984ca2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12984ca5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984ca8 jne 0x12984cbe */
  if (!C.zf) goto L_12984cbe;
  /* 12984caa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984cad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984cb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12984cb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12984cb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984cb9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12984cbc jmp 0x12984c9f */
  goto L_12984c9f;
L_12984cbe:;
  /* 12984cbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984cc1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12984cc4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984cc7 jne 0x12984d1a */
  if (!C.zf) goto L_12984d1a;
  /* 12984cc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12984ccc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12984cce mov ecx, 2 */
  ECX = (0x2u);
  /* 12984cd3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12984cd5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12984cd7 jne 0x12984d12 */
  if (!C.zf) goto L_12984d12;
  /* 12984cd9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984cdd je 0x12984cff */
  if (C.zf) goto L_12984cff;
  /* 12984cdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984ce2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12984ce6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984ce9 jne 0x12984cf6 */
  if (!C.zf) goto L_12984cf6;
  /* 12984ceb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984cee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984cf1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12984cf4 jmp 0x12984cfd */
  goto L_12984cfd;
L_12984cf6:;
  /* 12984cf6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12984cfd:;
  /* 12984cfd jmp 0x12984d06 */
  goto L_12984d06;
L_12984cff:;
  /* 12984cff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12984d06:;
  /* 12984d06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12984d08 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984d0c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12984d0f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12984d12:;
  /* 12984d12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12984d15 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12984d17 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12984d1a:;
  /* 12984d1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12984d1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12984d20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984d23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12984d26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12984d28 je 0x12984d4e */
  if (C.zf) goto L_12984d4e;
  /* 12984d2a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984d2e je 0x12984d3f */
  if (C.zf) goto L_12984d3f;
  /* 12984d30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984d33 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12984d36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984d39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984d3c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12984d3f:;
  /* 12984d3f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984d42 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12984d44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984d47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984d4a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12984d4c jmp 0x12984d1a */
  goto L_12984d1a;
L_12984d4e:;
  /* 12984d4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984d51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12984d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984d56 je 0x12984d74 */
  if (C.zf) goto L_12984d74;
  /* 12984d58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984d5c jne 0x12984d79 */
  if (!C.zf) goto L_12984d79;
  /* 12984d5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984d61 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12984d64 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984d67 je 0x12984d74 */
  if (C.zf) goto L_12984d74;
  /* 12984d69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984d6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12984d6f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984d72 jne 0x12984d79 */
  if (!C.zf) goto L_12984d79;
L_12984d74:;
  /* 12984d74 jmp 0x12984e24 */
  goto L_12984e24;
L_12984d79:;
  /* 12984d79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984d7d je 0x12984e16 */
  if (C.zf) goto L_12984e16;
  /* 12984d83 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984d87 je 0x12984ddd */
  if (C.zf) goto L_12984ddd;
  /* 12984d89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984d8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12984d90 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12984d92 mov cl, byte ptr [eax + 0x129afd01] */
  CL = (r8((uint32_t)(EAX + 0x129afd01)));
  /* 12984d98 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12984d9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12984d9d je 0x12984dc8 */
  if (C.zf) goto L_12984dc8;
  /* 12984d9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984da5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12984da7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12984da9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984dac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984daf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12984db2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984db5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984db8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12984dbb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984dbe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12984dc0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984dc3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984dc6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12984dc8:;
  /* 12984dc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984dcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984dce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12984dd0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12984dd2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984dd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984dd8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12984ddb jmp 0x12984e09 */
  goto L_12984e09;
L_12984ddd:;
  /* 12984ddd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984de0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984de2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12984de4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12984de6 mov cl, byte ptr [eax + 0x129afd01] */
  CL = (r8((uint32_t)(EAX + 0x129afd01)));
  /* 12984dec and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12984def test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12984df1 je 0x12984e09 */
  if (C.zf) goto L_12984e09;
  /* 12984df3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984df6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984df9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12984dfc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984dff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12984e01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984e04 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984e07 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12984e09:;
  /* 12984e09 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984e0c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12984e0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984e11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984e14 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12984e16:;
  /* 12984e16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984e19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984e1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12984e1f jmp 0x12984c91 */
  goto L_12984c91;
L_12984e24:;
  /* 12984e24 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984e28 je 0x12984e39 */
  if (C.zf) goto L_12984e39;
  /* 12984e2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984e2d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12984e30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12984e33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984e36 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12984e39:;
  /* 12984e39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984e3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12984e3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984e41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12984e44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12984e46 jmp 0x12984c33 */
  goto L_12984c33;
L_12984e4b:;
  /* 12984e4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984e4f je 0x12984e63 */
  if (C.zf) goto L_12984e63;
  /* 12984e51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12984e54 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12984e5a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12984e5d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984e60 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12984e63:;
  /* 12984e63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12984e66 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12984e68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984e6b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12984e6e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12984e70 mov esp, ebp */
  ESP = (EBP);
  /* 12984e72 pop ebp */
  EBP = (pop32());
  /* 12984e73 ret  */
  ESPCHK(0x12984a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e80 @ 0x12984e80 (537 bytes, 173 insns) */
void f_12984e80(void) {
  FTRACE(0x12984e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12984e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12984e81 mov ebp, esp */
  EBP = (ESP);
  /* 12984e83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984e86 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12984e8d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12984e94 cmp dword ptr [0x129ae5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984e9b jne 0x12984eda */
  if (!C.zf) goto L_12984eda;
  /* 12984e9d call dword ptr [0x129b02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02c8))), 0x12984ea3u);
  /* 12984ea3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12984ea6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984eaa je 0x12984eb8 */
  if (C.zf) goto L_12984eb8;
  /* 12984eac mov dword ptr [0x129ae5e4], 1 */
  w32((uint32_t)(0x129ae5e4), (0x1u));
  /* 12984eb6 jmp 0x12984eda */
  goto L_12984eda;
L_12984eb8:;
  /* 12984eb8 call dword ptr [0x129b02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02c4))), 0x12984ebeu);
  /* 12984ebe mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12984ec1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984ec5 je 0x12984ed3 */
  if (C.zf) goto L_12984ed3;
  /* 12984ec7 mov dword ptr [0x129ae5e4], 2 */
  w32((uint32_t)(0x129ae5e4), (0x2u));
  /* 12984ed1 jmp 0x12984eda */
  goto L_12984eda;
L_12984ed3:;
  /* 12984ed3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984ed5 jmp 0x12985095 */
  goto L_12985095;
L_12984eda:;
  /* 12984eda cmp dword ptr [0x129ae5e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae5e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984ee1 jne 0x12984fde */
  if (!C.zf) goto L_12984fde;
  /* 12984ee7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984eeb jne 0x12984f03 */
  if (!C.zf) goto L_12984f03;
  /* 12984eed call dword ptr [0x129b02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02c8))), 0x12984ef3u);
  /* 12984ef3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12984ef6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984efa jne 0x12984f03 */
  if (!C.zf) goto L_12984f03;
  /* 12984efc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984efe jmp 0x12985095 */
  goto L_12985095;
L_12984f03:;
  /* 12984f03 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12984f06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12984f09:;
  /* 12984f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984f0c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12984f0e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12984f11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12984f13 je 0x12984f35 */
  if (C.zf) goto L_12984f35;
  /* 12984f15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984f18 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984f1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12984f1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984f21 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12984f23 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12984f26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12984f28 jne 0x12984f33 */
  if (!C.zf) goto L_12984f33;
  /* 12984f2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984f2d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984f30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12984f33:;
  /* 12984f33 jmp 0x12984f09 */
  goto L_12984f09;
L_12984f35:;
  /* 12984f35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12984f38 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12984f3b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12984f3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12984f40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12984f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984f4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984f4e push edx */
  push32((uint32_t)(EDX));
  /* 12984f4f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12984f52 push eax */
  push32((uint32_t)(EAX));
  /* 12984f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984f57 call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x12984f5du);
  /* 12984f5d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12984f60 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984f64 je 0x12984f84 */
  if (C.zf) goto L_12984f84;
  /* 12984f66 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12984f68 push 0x129a9abc */
  push32((uint32_t)(0x129a9abcu));
  /* 12984f6d push 2 */
  push32((uint32_t)(0x2u));
  /* 12984f6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12984f72 push ecx */
  push32((uint32_t)(ECX));
  /* 12984f73 call 0x129828b0 */
  push32(0x12984f78u); f_129828b0();
  /* 12984f78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984f7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12984f7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984f82 jne 0x12984f95 */
  if (!C.zf) goto L_12984f95;
L_12984f84:;
  /* 12984f84 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12984f87 push edx */
  push32((uint32_t)(EDX));
  /* 12984f88 call dword ptr [0x129b0220] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0220))), 0x12984f8eu);
  /* 12984f8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12984f90 jmp 0x12985095 */
  goto L_12985095;
L_12984f95:;
  /* 12984f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984f99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12984f9c push eax */
  push32((uint32_t)(EAX));
  /* 12984f9d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12984fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12984fa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12984fa4 push edx */
  push32((uint32_t)(EDX));
  /* 12984fa5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12984fa8 push eax */
  push32((uint32_t)(EAX));
  /* 12984fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12984fab push 0 */
  push32((uint32_t)(0x0u));
  /* 12984fad call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x12984fb3u);
  /* 12984fb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12984fb5 jne 0x12984fcc */
  if (!C.zf) goto L_12984fcc;
  /* 12984fb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12984fb9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12984fbc push ecx */
  push32((uint32_t)(ECX));
  /* 12984fbd call 0x12983340 */
  push32(0x12984fc2u); f_12983340();
  /* 12984fc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12984fc5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12984fcc:;
  /* 12984fcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12984fcf push edx */
  push32((uint32_t)(EDX));
  /* 12984fd0 call dword ptr [0x129b0220] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0220))), 0x12984fd6u);
  /* 12984fd6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12984fd9 jmp 0x12985095 */
  goto L_12985095;
L_12984fde:;
  /* 12984fde cmp dword ptr [0x129ae5e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ae5e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984fe5 jne 0x12985093 */
  if (!C.zf) goto L_12985093;
  /* 12984feb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984fef jne 0x12985007 */
  if (!C.zf) goto L_12985007;
  /* 12984ff1 call dword ptr [0x129b02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02c4))), 0x12984ff7u);
  /* 12984ff7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12984ffa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12984ffe jne 0x12985007 */
  if (!C.zf) goto L_12985007;
  /* 12985000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12985002 jmp 0x12985095 */
  goto L_12985095;
L_12985007:;
  /* 12985007 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298500a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1298500d:;
  /* 1298500d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985010 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12985013 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12985015 je 0x12985035 */
  if (C.zf) goto L_12985035;
  /* 12985017 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298501a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298501d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12985020 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985023 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12985026 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12985028 jne 0x12985033 */
  if (!C.zf) goto L_12985033;
  /* 1298502a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298502d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985030 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12985033:;
  /* 12985033 jmp 0x1298500d */
  goto L_1298500d;
L_12985035:;
  /* 12985035 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985038 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298503b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298503e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12985041 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12985046 push 0x129a9abc */
  push32((uint32_t)(0x129a9abcu));
  /* 1298504b push 2 */
  push32((uint32_t)(0x2u));
  /* 1298504d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12985050 push edx */
  push32((uint32_t)(EDX));
  /* 12985051 call 0x129828b0 */
  push32(0x12985056u); f_129828b0();
  /* 12985056 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985059 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298505c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985060 jne 0x12985070 */
  if (!C.zf) goto L_12985070;
  /* 12985062 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12985065 push eax */
  push32((uint32_t)(EAX));
  /* 12985066 call dword ptr [0x129b02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02b8))), 0x1298506cu);
  /* 1298506c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298506e jmp 0x12985095 */
  goto L_12985095;
L_12985070:;
  /* 12985070 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12985073 push ecx */
  push32((uint32_t)(ECX));
  /* 12985074 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12985077 push edx */
  push32((uint32_t)(EDX));
  /* 12985078 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298507b push eax */
  push32((uint32_t)(EAX));
  /* 1298507c call 0x12989190 */
  push32(0x12985081u); f_12989190();
  /* 12985081 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985084 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12985087 push ecx */
  push32((uint32_t)(ECX));
  /* 12985088 call dword ptr [0x129b02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02b8))), 0x1298508eu);
  /* 1298508e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985091 jmp 0x12985095 */
  goto L_12985095;
L_12985093:;
  /* 12985093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12985095:;
  /* 12985095 mov esp, ebp */
  ESP = (EBP);
  /* 12985097 pop ebp */
  EBP = (pop32());
  /* 12985098 ret  */
  ESPCHK(0x12984e80u, _esp0);
  ESP += 4; return;
}

/* FUN_100050a0 @ 0x129850a0 (77 bytes, 25 insns) */
void f_129850a0(void) {
  FTRACE(0x129850a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129850a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129850a1 mov ebp, esp */
  EBP = (ESP);
  /* 129850a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129850a5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 129850aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129850ac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129850b0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 129850b3 push eax */
  push32((uint32_t)(EAX));
  /* 129850b4 call dword ptr [0x129b02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d0))), 0x129850bau);
  /* 129850ba mov dword ptr [0x129afe2c], eax */
  w32((uint32_t)(0x129afe2c), (EAX));
  /* 129850bf cmp dword ptr [0x129afe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129afe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129850c6 jne 0x129850cc */
  if (!C.zf) goto L_129850cc;
  /* 129850c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129850ca jmp 0x129850eb */
  goto L_129850eb;
L_129850cc:;
  /* 129850cc call 0x12986b50 */
  push32(0x129850d1u); f_12986b50();
  /* 129850d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129850d3 jne 0x129850e6 */
  if (!C.zf) goto L_129850e6;
  /* 129850d5 mov ecx, dword ptr [0x129afe2c] */
  ECX = (r32((uint32_t)(0x129afe2c)));
  /* 129850db push ecx */
  push32((uint32_t)(ECX));
  /* 129850dc call dword ptr [0x129b02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02cc))), 0x129850e2u);
  /* 129850e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129850e4 jmp 0x129850eb */
  goto L_129850eb;
L_129850e6:;
  /* 129850e6 mov eax, 1 */
  EAX = (0x1u);
L_129850eb:;
  /* 129850eb pop ebp */
  EBP = (pop32());
  /* 129850ec ret  */
  ESPCHK(0x129850a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050f0 @ 0x129850f0 (156 bytes, 48 insns) */
void f_129850f0(void) {
  FTRACE(0x129850f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129850f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129850f1 mov ebp, esp */
  EBP = (ESP);
  /* 129850f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129850f6 mov eax, dword ptr [0x129afe28] */
  EAX = (r32((uint32_t)(0x129afe28)));
  /* 129850fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129850fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12985105 jmp 0x12985110 */
  goto L_12985110;
L_12985107:;
  /* 12985107 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298510a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298510d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12985110:;
  /* 12985110 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985113 cmp edx, dword ptr [0x129afe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129afe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985119 jge 0x12985166 */
  if ((C.sf==C.of)) goto L_12985166;
  /* 1298511b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12985120 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12985125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985128 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1298512b push ecx */
  push32((uint32_t)(ECX));
  /* 1298512c call dword ptr [0x129b02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d8))), 0x12985132u);
  /* 12985132 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12985137 push 0 */
  push32((uint32_t)(0x0u));
  /* 12985139 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298513c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1298513f push eax */
  push32((uint32_t)(EAX));
  /* 12985140 call dword ptr [0x129b02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d8))), 0x12985146u);
  /* 12985146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985149 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1298514c push edx */
  push32((uint32_t)(EDX));
  /* 1298514d push 0 */
  push32((uint32_t)(0x0u));
  /* 1298514f mov eax, dword ptr [0x129afe2c] */
  EAX = (r32((uint32_t)(0x129afe2c)));
  /* 12985154 push eax */
  push32((uint32_t)(EAX));
  /* 12985155 call dword ptr [0x129b02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d4))), 0x1298515bu);
  /* 1298515b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298515e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985161 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12985164 jmp 0x12985107 */
  goto L_12985107;
L_12985166:;
  /* 12985166 mov edx, dword ptr [0x129afe28] */
  EDX = (r32((uint32_t)(0x129afe28)));
  /* 1298516c push edx */
  push32((uint32_t)(EDX));
  /* 1298516d push 0 */
  push32((uint32_t)(0x0u));
  /* 1298516f mov eax, dword ptr [0x129afe2c] */
  EAX = (r32((uint32_t)(0x129afe2c)));
  /* 12985174 push eax */
  push32((uint32_t)(EAX));
  /* 12985175 call dword ptr [0x129b02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d4))), 0x1298517bu);
  /* 1298517b mov ecx, dword ptr [0x129afe2c] */
  ECX = (r32((uint32_t)(0x129afe2c)));
  /* 12985181 push ecx */
  push32((uint32_t)(ECX));
  /* 12985182 call dword ptr [0x129b02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02cc))), 0x12985188u);
  /* 12985188 mov esp, ebp */
  ESP = (EBP);
  /* 1298518a pop ebp */
  EBP = (pop32());
  /* 1298518b ret  */
  ESPCHK(0x129850f0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12985190 (73 bytes, 19 insns) */
void f_12985190(void) {
  FTRACE(0x12985190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985190 push ebp */
  push32((uint32_t)(EBP));
  /* 12985191 mov ebp, esp */
  EBP = (ESP);
  /* 12985193 cmp dword ptr [0x129ae478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298519a je 0x129851ae */
  if (C.zf) goto L_129851ae;
  /* 1298519c cmp dword ptr [0x129ae478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129851a3 jne 0x129851d7 */
  if (!C.zf) goto L_129851d7;
  /* 129851a5 cmp dword ptr [0x129ae47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129851ac jne 0x129851d7 */
  if (!C.zf) goto L_129851d7;
L_129851ae:;
  /* 129851ae push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 129851b3 call 0x129851e0 */
  push32(0x129851b8u); f_129851e0();
  /* 129851b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129851bb cmp dword ptr [0x129ae5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129851c2 je 0x129851ca */
  if (C.zf) goto L_129851ca;
  /* 129851c4 call dword ptr [0x129ae5e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae5e8))), 0x129851cau);
L_129851ca:;
  /* 129851ca push 0xff */
  push32((uint32_t)(0xffu));
  /* 129851cf call 0x129851e0 */
  push32(0x129851d4u); f_129851e0();
  /* 129851d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129851d7:;
  /* 129851d7 pop ebp */
  EBP = (pop32());
  /* 129851d8 ret  */
  ESPCHK(0x12985190u, _esp0);
  ESP += 4; return;
}

/* FUN_100051e0 @ 0x129851e0 (447 bytes, 131 insns) */
void f_129851e0(void) {
  FTRACE(0x129851e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129851e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129851e1 mov ebp, esp */
  EBP = (ESP);
  /* 129851e3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129851e9 push ebx */
  push32((uint32_t)(EBX));
  /* 129851ea push esi */
  push32((uint32_t)(ESI));
  /* 129851eb push edi */
  push32((uint32_t)(EDI));
  /* 129851ec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129851f3 jmp 0x129851fe */
  goto L_129851fe;
L_129851f5:;
  /* 129851f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129851f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129851fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129851fe:;
  /* 129851fe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985202 jae 0x12985217 */
  if (!C.cf) goto L_12985217;
  /* 12985204 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985207 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298520a cmp edx, dword ptr [ecx*8 + 0x129acab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x129acab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985211 jne 0x12985215 */
  if (!C.zf) goto L_12985215;
  /* 12985213 jmp 0x12985217 */
  goto L_12985217;
L_12985215:;
  /* 12985215 jmp 0x129851f5 */
  goto L_129851f5;
L_12985217:;
  /* 12985217 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298521a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298521d cmp ecx, dword ptr [eax*8 + 0x129acab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x129acab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985224 jne 0x12985398 */
  if (!C.zf) goto L_12985398;
  /* 1298522a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985231 je 0x12985254 */
  if (C.zf) goto L_12985254;
  /* 12985233 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985236 mov eax, dword ptr [edx*8 + 0x129acab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x129acab4)));
  /* 1298523d push eax */
  push32((uint32_t)(EAX));
  /* 1298523e push 0 */
  push32((uint32_t)(0x0u));
  /* 12985240 push 0 */
  push32((uint32_t)(0x0u));
  /* 12985242 push 0 */
  push32((uint32_t)(0x0u));
  /* 12985244 push 1 */
  push32((uint32_t)(0x1u));
  /* 12985246 call 0x12981970 */
  push32(0x1298524bu); f_12981970();
  /* 1298524b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298524e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985251 jne 0x12985254 */
  if (!C.zf) goto L_12985254;
  /* 12985253 int3  */
  x86_unimpl("int3 @ 0x12985253");
L_12985254:;
  /* 12985254 cmp dword ptr [0x129ae478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298525b je 0x1298526f */
  if (C.zf) goto L_1298526f;
  /* 1298525d cmp dword ptr [0x129ae478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985264 jne 0x129852a8 */
  if (!C.zf) goto L_129852a8;
  /* 12985266 cmp dword ptr [0x129ae47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298526d jne 0x129852a8 */
  if (!C.zf) goto L_129852a8;
L_1298526f:;
  /* 1298526f push 0 */
  push32((uint32_t)(0x0u));
  /* 12985271 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12985274 push ecx */
  push32((uint32_t)(ECX));
  /* 12985275 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985278 mov eax, dword ptr [edx*8 + 0x129acab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x129acab4)));
  /* 1298527f push eax */
  push32((uint32_t)(EAX));
  /* 12985280 call 0x129856e0 */
  push32(0x12985285u); f_129856e0();
  /* 12985285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985288 push eax */
  push32((uint32_t)(EAX));
  /* 12985289 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298528c mov edx, dword ptr [ecx*8 + 0x129acab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x129acab4)));
  /* 12985293 push edx */
  push32((uint32_t)(EDX));
  /* 12985294 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12985296 call dword ptr [0x129b0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0250))), 0x1298529cu);
  /* 1298529c push eax */
  push32((uint32_t)(EAX));
  /* 1298529d call dword ptr [0x129b0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0254))), 0x129852a3u);
  /* 129852a3 jmp 0x12985398 */
  goto L_12985398;
L_129852a8:;
  /* 129852a8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129852af je 0x12985398 */
  if (C.zf) goto L_12985398;
  /* 129852b5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 129852ba lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 129852c0 push eax */
  push32((uint32_t)(EAX));
  /* 129852c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 129852c3 call dword ptr [0x129b026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b026c))), 0x129852c9u);
  /* 129852c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129852cb jne 0x129852e1 */
  if (!C.zf) goto L_129852e1;
  /* 129852cd push 0x129a9324 */
  push32((uint32_t)(0x129a9324u));
  /* 129852d2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 129852d8 push ecx */
  push32((uint32_t)(ECX));
  /* 129852d9 call 0x12985860 */
  push32(0x129852deu); f_12985860();
  /* 129852de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129852e1:;
  /* 129852e1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 129852e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129852ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129852ed push eax */
  push32((uint32_t)(EAX));
  /* 129852ee call 0x129856e0 */
  push32(0x129852f3u); f_129856e0();
  /* 129852f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129852f6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129852f9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129852fc jbe 0x1298532a */
  if ((C.cf||C.zf)) goto L_1298532a;
  /* 129852fe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12985304 push ecx */
  push32((uint32_t)(ECX));
  /* 12985305 call 0x129856e0 */
  push32(0x1298530au); f_129856e0();
  /* 1298530a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298530d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985310 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12985314 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12985317 push 3 */
  push32((uint32_t)(0x3u));
  /* 12985319 push 0x129a9320 */
  push32((uint32_t)(0x129a9320u));
  /* 1298531e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985321 push ecx */
  push32((uint32_t)(ECX));
  /* 12985322 call 0x129860d0 */
  push32(0x12985327u); f_129860d0();
  /* 12985327 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298532a:;
  /* 1298532a push 0x129a9d78 */
  push32((uint32_t)(0x129a9d78u));
  /* 1298532f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12985335 push edx */
  push32((uint32_t)(EDX));
  /* 12985336 call 0x12985860 */
  push32(0x1298533bu); f_12985860();
  /* 1298533b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298533e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985341 push eax */
  push32((uint32_t)(EAX));
  /* 12985342 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12985348 push ecx */
  push32((uint32_t)(ECX));
  /* 12985349 call 0x12985870 */
  push32(0x1298534eu); f_12985870();
  /* 1298534e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985351 push 0x129a9298 */
  push32((uint32_t)(0x129a9298u));
  /* 12985356 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1298535c push edx */
  push32((uint32_t)(EDX));
  /* 1298535d call 0x12985870 */
  push32(0x12985362u); f_12985870();
  /* 12985362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985365 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985368 mov ecx, dword ptr [eax*8 + 0x129acab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x129acab4)));
  /* 1298536f push ecx */
  push32((uint32_t)(ECX));
  /* 12985370 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12985376 push edx */
  push32((uint32_t)(EDX));
  /* 12985377 call 0x12985870 */
  push32(0x1298537cu); f_12985870();
  /* 1298537c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298537f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12985384 push 0x129a9d50 */
  push32((uint32_t)(0x129a9d50u));
  /* 12985389 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1298538f push eax */
  push32((uint32_t)(EAX));
  /* 12985390 call 0x12986010 */
  push32(0x12985395u); f_12986010();
  /* 12985395 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12985398:;
  /* 12985398 pop edi */
  EDI = (pop32());
  /* 12985399 pop esi */
  ESI = (pop32());
  /* 1298539a pop ebx */
  EBX = (pop32());
  /* 1298539b mov esp, ebp */
  ESP = (EBP);
  /* 1298539d pop ebp */
  EBP = (pop32());
  /* 1298539e ret  */
  ESPCHK(0x129851e0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x129853a0 (80 bytes, 27 insns) */
void f_129853a0(void) {
  FTRACE(0x129853a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129853a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129853a1 mov ebp, esp */
  EBP = (ESP);
  /* 129853a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129853a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129853ab jmp 0x129853b6 */
  goto L_129853b6;
L_129853ad:;
  /* 129853ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129853b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129853b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129853b6:;
  /* 129853b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129853ba jae 0x129853cf */
  if (!C.cf) goto L_129853cf;
  /* 129853bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129853bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129853c2 cmp edx, dword ptr [ecx*8 + 0x129acab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x129acab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129853c9 jne 0x129853cd */
  if (!C.zf) goto L_129853cd;
  /* 129853cb jmp 0x129853cf */
  goto L_129853cf;
L_129853cd:;
  /* 129853cd jmp 0x129853ad */
  goto L_129853ad;
L_129853cf:;
  /* 129853cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129853d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129853d5 cmp ecx, dword ptr [eax*8 + 0x129acab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x129acab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129853dc jne 0x129853ea */
  if (!C.zf) goto L_129853ea;
  /* 129853de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129853e1 mov eax, dword ptr [edx*8 + 0x129acab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x129acab4)));
  /* 129853e8 jmp 0x129853ec */
  goto L_129853ec;
L_129853ea:;
  /* 129853ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129853ec:;
  /* 129853ec mov esp, ebp */
  ESP = (EBP);
  /* 129853ee pop ebp */
  EBP = (pop32());
  /* 129853ef ret  */
  ESPCHK(0x129853a0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x129853f0 (66 bytes, 28 insns) */
void f_129853f0(void) {
  FTRACE(0x129853f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129853f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129853f1 mov ebp, esp */
  EBP = (ESP);
  /* 129853f3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129853f7 jne 0x12985417 */
  if (!C.zf) goto L_12985417;
  /* 129853f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129853fd jge 0x12985417 */
  if ((C.sf==C.of)) goto L_12985417;
  /* 129853ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12985401 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12985404 push eax */
  push32((uint32_t)(EAX));
  /* 12985405 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985408 push ecx */
  push32((uint32_t)(ECX));
  /* 12985409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298540c push edx */
  push32((uint32_t)(EDX));
  /* 1298540d call 0x12985440 */
  push32(0x12985412u); f_12985440();
  /* 12985412 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985415 jmp 0x1298542d */
  goto L_1298542d;
L_12985417:;
  /* 12985417 push 0 */
  push32((uint32_t)(0x0u));
  /* 12985419 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298541c push eax */
  push32((uint32_t)(EAX));
  /* 1298541d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985420 push ecx */
  push32((uint32_t)(ECX));
  /* 12985421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985424 push edx */
  push32((uint32_t)(EDX));
  /* 12985425 call 0x12985440 */
  push32(0x1298542au); f_12985440();
  /* 1298542a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298542d:;
  /* 1298542d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985430 pop ebp */
  EBP = (pop32());
  /* 12985431 ret  */
  ESPCHK(0x129853f0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12985440 (194 bytes, 71 insns) */
void f_12985440(void) {
  FTRACE(0x12985440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985440 push ebp */
  push32((uint32_t)(EBP));
  /* 12985441 mov ebp, esp */
  EBP = (ESP);
  /* 12985443 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985446 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985449 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298544c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985450 je 0x12985469 */
  if (C.zf) goto L_12985469;
  /* 12985452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985455 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12985458 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298545b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298545e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12985461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985464 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12985466 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12985469:;
  /* 12985469 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298546c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1298546f:;
  /* 1298546f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985472 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12985474 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12985477 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1298547a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298547d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298547f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12985482 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12985485 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985489 jbe 0x129854a1 */
  if ((C.cf||C.zf)) goto L_129854a1;
  /* 1298548b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298548e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985494 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12985496 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985499 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298549c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1298549f jmp 0x129854b5 */
  goto L_129854b5;
L_129854a1:;
  /* 129854a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129854a4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129854a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129854aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129854ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129854af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129854b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_129854b5:;
  /* 129854b5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129854b9 ja 0x1298546f */
  if ((!C.cf&&!C.zf)) goto L_1298546f;
  /* 129854bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129854be mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 129854c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129854c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129854c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129854ca:;
  /* 129854ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129854cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129854cf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 129854d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129854d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129854d8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129854da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 129854dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129854df mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 129854e2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 129854e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129854e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129854ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129854ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129854f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129854f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129854f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129854f9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129854fc jb 0x129854ca */
  if (C.cf) goto L_129854ca;
  /* 129854fe mov esp, ebp */
  ESP = (EBP);
  /* 12985500 pop ebp */
  EBP = (pop32());
  /* 12985501 ret  */
  ESPCHK(0x12985440u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12985510 (63 bytes, 24 insns) */
void f_12985510(void) {
  FTRACE(0x12985510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985510 push ebp */
  push32((uint32_t)(EBP));
  /* 12985511 mov ebp, esp */
  EBP = (ESP);
  /* 12985513 push ecx */
  push32((uint32_t)(ECX));
  /* 12985514 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985518 jne 0x12985529 */
  if (!C.zf) goto L_12985529;
  /* 1298551a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298551e jge 0x12985529 */
  if ((C.sf==C.of)) goto L_12985529;
  /* 12985520 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12985527 jmp 0x12985530 */
  goto L_12985530;
L_12985529:;
  /* 12985529 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12985530:;
  /* 12985530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985533 push eax */
  push32((uint32_t)(EAX));
  /* 12985534 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12985537 push ecx */
  push32((uint32_t)(ECX));
  /* 12985538 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298553b push edx */
  push32((uint32_t)(EDX));
  /* 1298553c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298553f push eax */
  push32((uint32_t)(EAX));
  /* 12985540 call 0x12985440 */
  push32(0x12985545u); f_12985440();
  /* 12985545 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985548 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298554b mov esp, ebp */
  ESP = (EBP);
  /* 1298554d pop ebp */
  EBP = (pop32());
  /* 1298554e ret  */
  ESPCHK(0x12985510u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12985550 (30 bytes, 14 insns) */
void f_12985550(void) {
  FTRACE(0x12985550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985550 push ebp */
  push32((uint32_t)(EBP));
  /* 12985551 mov ebp, esp */
  EBP = (ESP);
  /* 12985553 push 0 */
  push32((uint32_t)(0x0u));
  /* 12985555 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12985558 push eax */
  push32((uint32_t)(EAX));
  /* 12985559 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298555c push ecx */
  push32((uint32_t)(ECX));
  /* 1298555d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985560 push edx */
  push32((uint32_t)(EDX));
  /* 12985561 call 0x12985440 */
  push32(0x12985566u); f_12985440();
  /* 12985566 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985569 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298556c pop ebp */
  EBP = (pop32());
  /* 1298556d ret  */
  ESPCHK(0x12985550u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12985570 (72 bytes, 28 insns) */
void f_12985570(void) {
  FTRACE(0x12985570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985570 push ebp */
  push32((uint32_t)(EBP));
  /* 12985571 mov ebp, esp */
  EBP = (ESP);
  /* 12985573 push ecx */
  push32((uint32_t)(ECX));
  /* 12985574 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985578 jne 0x12985591 */
  if (!C.zf) goto L_12985591;
  /* 1298557a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298557e jg 0x12985591 */
  if ((!C.zf&&C.sf==C.of)) goto L_12985591;
  /* 12985580 jl 0x12985588 */
  if ((C.sf!=C.of)) goto L_12985588;
  /* 12985582 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985586 jae 0x12985591 */
  if (!C.cf) goto L_12985591;
L_12985588:;
  /* 12985588 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1298558f jmp 0x12985598 */
  goto L_12985598;
L_12985591:;
  /* 12985591 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12985598:;
  /* 12985598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298559b push eax */
  push32((uint32_t)(EAX));
  /* 1298559c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298559f push ecx */
  push32((uint32_t)(ECX));
  /* 129855a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129855a3 push edx */
  push32((uint32_t)(EDX));
  /* 129855a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129855a7 push eax */
  push32((uint32_t)(EAX));
  /* 129855a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129855ab push ecx */
  push32((uint32_t)(ECX));
  /* 129855ac call 0x129855c0 */
  push32(0x129855b1u); f_129855c0();
  /* 129855b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129855b4 mov esp, ebp */
  ESP = (EBP);
  /* 129855b6 pop ebp */
  EBP = (pop32());
  /* 129855b7 ret  */
  ESPCHK(0x12985570u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x129855c0 (242 bytes, 91 insns) */
void f_129855c0(void) {
  FTRACE(0x129855c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129855c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129855c1 mov ebp, esp */
  EBP = (ESP);
  /* 129855c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129855c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129855c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129855cc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129855d0 je 0x129855f4 */
  if (C.zf) goto L_129855f4;
  /* 129855d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129855d5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 129855d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129855db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129855de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129855e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129855e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129855e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129855e9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129855ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129855ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 129855f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_129855f4:;
  /* 129855f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129855f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_129855fa:;
  /* 129855fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129855fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 129855ff push ecx */
  push32((uint32_t)(ECX));
  /* 12985600 push eax */
  push32((uint32_t)(EAX));
  /* 12985601 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985604 push edx */
  push32((uint32_t)(EDX));
  /* 12985605 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985608 push eax */
  push32((uint32_t)(EAX));
  /* 12985609 call 0x12989540 */
  push32(0x1298560eu); f_12989540();
  /* 1298560e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12985611 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12985614 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12985616 push edx */
  push32((uint32_t)(EDX));
  /* 12985617 push ecx */
  push32((uint32_t)(ECX));
  /* 12985618 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298561b push eax */
  push32((uint32_t)(EAX));
  /* 1298561c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298561f push ecx */
  push32((uint32_t)(ECX));
  /* 12985620 call 0x129894d0 */
  push32(0x12985625u); f_129894d0();
  /* 12985625 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12985628 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1298562b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298562f jbe 0x12985647 */
  if ((C.cf||C.zf)) goto L_12985647;
  /* 12985631 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985634 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298563a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1298563c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298563f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985642 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12985645 jmp 0x1298565b */
  goto L_1298565b;
L_12985647:;
  /* 12985647 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298564a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298564d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985650 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12985652 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985655 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985658 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1298565b:;
  /* 1298565b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298565f ja 0x129855fa */
  if ((!C.cf&&!C.zf)) goto L_129855fa;
  /* 12985661 jb 0x12985669 */
  if (C.cf) goto L_12985669;
  /* 12985663 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985667 ja 0x129855fa */
  if ((!C.cf&&!C.zf)) goto L_129855fa;
L_12985669:;
  /* 12985669 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298566c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1298566f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985672 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985675 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12985678:;
  /* 12985678 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298567b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1298567d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12985680 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985683 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985686 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12985688 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1298568a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298568d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12985690 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12985692 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985695 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985698 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298569b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298569e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129856a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129856a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129856a7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129856aa jb 0x12985678 */
  if (C.cf) goto L_12985678;
  /* 129856ac mov esp, ebp */
  ESP = (EBP);
  /* 129856ae pop ebp */
  EBP = (pop32());
  /* 129856af ret 0x14 */
  ESPCHK(0x129855c0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x129856c0 (31 bytes, 15 insns) */
void f_129856c0(void) {
  FTRACE(0x129856c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129856c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129856c1 mov ebp, esp */
  EBP = (ESP);
  /* 129856c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129856c5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 129856c8 push eax */
  push32((uint32_t)(EAX));
  /* 129856c9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129856cc push ecx */
  push32((uint32_t)(ECX));
  /* 129856cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129856d0 push edx */
  push32((uint32_t)(EDX));
  /* 129856d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129856d4 push eax */
  push32((uint32_t)(EAX));
  /* 129856d5 call 0x129855c0 */
  push32(0x129856dau); f_129855c0();
  /* 129856da mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129856dd pop ebp */
  EBP = (pop32());
  /* 129856de ret  */
  ESPCHK(0x129856c0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x129856e0 (123 bytes, 44 insns) */
void f_129856e0(void) {
  FTRACE(0x129856e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129856e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 129856e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129856ea je 0x12985700 */
  if (C.zf) goto L_12985700;
L_129856ec:;
  /* 129856ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 129856ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 129856ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129856f1 je 0x12985733 */
  if (C.zf) goto L_12985733;
  /* 129856f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129856f9 jne 0x129856ec */
  if (!C.zf) goto L_129856ec;
  /* 129856fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12985700:;
  /* 12985700 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12985702 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12985707 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985709 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298570c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1298570e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985711 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12985716 je 0x12985700 */
  if (C.zf) goto L_12985700;
  /* 12985718 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1298571b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1298571d je 0x12985751 */
  if (C.zf) goto L_12985751;
  /* 1298571f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12985721 je 0x12985747 */
  if (C.zf) goto L_12985747;
  /* 12985723 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12985728 je 0x1298573d */
  if (C.zf) goto L_1298573d;
  /* 1298572a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1298572f je 0x12985733 */
  if (C.zf) goto L_12985733;
  /* 12985731 jmp 0x12985700 */
  goto L_12985700;
L_12985733:;
  /* 12985733 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12985736 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1298573a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298573c ret  */
  ESPCHK(0x129856e0u, _esp0);
  ESP += 4; return;
L_1298573d:;
  /* 1298573d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12985740 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12985744 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985746 ret  */
  ESPCHK(0x129856e0u, _esp0);
  ESP += 4; return;
L_12985747:;
  /* 12985747 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1298574a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1298574e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985750 ret  */
  ESPCHK(0x129856e0u, _esp0);
  ESP += 4; return;
L_12985751:;
  /* 12985751 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12985754 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12985758 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298575a ret  */
  ESPCHK(0x129856e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005760 @ 0x12985760 (249 bytes, 93 insns) */
void f_12985760(void) {
  FTRACE(0x12985760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985760 push ebp */
  push32((uint32_t)(EBP));
  /* 12985761 mov ebp, esp */
  EBP = (ESP);
  /* 12985763 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985766 push ebx */
  push32((uint32_t)(EBX));
  /* 12985767 push esi */
  push32((uint32_t)(ESI));
  /* 12985768 push edi */
  push32((uint32_t)(EDI));
  /* 12985769 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1298576c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1298576f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12985772 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12985775:;
  /* 12985775 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985779 jne 0x12985799 */
  if (!C.zf) goto L_12985799;
  /* 1298577b push 0x129a9db0 */
  push32((uint32_t)(0x129a9db0u));
  /* 12985780 push 0 */
  push32((uint32_t)(0x0u));
  /* 12985782 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12985784 push 0x129a9da4 */
  push32((uint32_t)(0x129a9da4u));
  /* 12985789 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298578b call 0x12981970 */
  push32(0x12985790u); f_12981970();
  /* 12985790 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985793 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985796 jne 0x12985799 */
  if (!C.zf) goto L_12985799;
  /* 12985798 int3  */
  x86_unimpl("int3 @ 0x12985798");
L_12985799:;
  /* 12985799 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298579b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298579d jne 0x12985775 */
  if (!C.zf) goto L_12985775;
L_1298579f:;
  /* 1298579f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129857a3 jne 0x129857c3 */
  if (!C.zf) goto L_129857c3;
  /* 129857a5 push 0x129a9d94 */
  push32((uint32_t)(0x129a9d94u));
  /* 129857aa push 0 */
  push32((uint32_t)(0x0u));
  /* 129857ac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 129857ae push 0x129a9da4 */
  push32((uint32_t)(0x129a9da4u));
  /* 129857b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129857b5 call 0x12981970 */
  push32(0x129857bau); f_12981970();
  /* 129857ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129857bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129857c0 jne 0x129857c3 */
  if (!C.zf) goto L_129857c3;
  /* 129857c2 int3  */
  x86_unimpl("int3 @ 0x129857c2");
L_129857c3:;
  /* 129857c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129857c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129857c7 jne 0x1298579f */
  if (!C.zf) goto L_1298579f;
  /* 129857c9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129857cc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 129857d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129857d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129857d9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129857dc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129857df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129857e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 129857e4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129857e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129857ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 129857ed mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129857f0 push edx */
  push32((uint32_t)(EDX));
  /* 129857f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 129857f4 push eax */
  push32((uint32_t)(EAX));
  /* 129857f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129857f8 push ecx */
  push32((uint32_t)(ECX));
  /* 129857f9 call 0x12989840 */
  push32(0x129857feu); f_12989840();
  /* 129857fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985801 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12985804 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985807 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1298580a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298580d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985810 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12985813 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985816 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298581a jl 0x1298583e */
  if ((C.sf!=C.of)) goto L_1298583e;
  /* 1298581c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298581f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12985821 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12985824 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12985826 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298582c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1298582f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985832 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12985834 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985837 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298583a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1298583c jmp 0x1298584f */
  goto L_1298584f;
L_1298583e:;
  /* 1298583e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985841 push eax */
  push32((uint32_t)(EAX));
  /* 12985842 push 0 */
  push32((uint32_t)(0x0u));
  /* 12985844 call 0x129895c0 */
  push32(0x12985849u); f_129895c0();
  /* 12985849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298584c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1298584f:;
  /* 1298584f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12985852 pop edi */
  EDI = (pop32());
  /* 12985853 pop esi */
  ESI = (pop32());
  /* 12985854 pop ebx */
  EBX = (pop32());
  /* 12985855 mov esp, ebp */
  ESP = (EBP);
  /* 12985857 pop ebp */
  EBP = (pop32());
  /* 12985858 ret  */
  ESPCHK(0x12985760u, _esp0);
  ESP += 4; return;
}

/* FUN_10005860 @ 0x12985860 (7 bytes, 3 insns) */
void f_12985860(void) {
  FTRACE(0x12985860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985860 push edi */
  push32((uint32_t)(EDI));
  /* 12985861 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12985865 jmp 0x129858d1 */
  jmp_ind(0x129858d1u); return;
}

/* FUN_10005870 @ 0x12985870 (224 bytes, 84 insns) */
void f_12985870(void) {
  FTRACE(0x12985870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985870 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12985874 push edi */
  push32((uint32_t)(EDI));
  /* 12985875 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1298587b je 0x1298588c */
  if (C.zf) goto L_1298588c;
L_1298587d:;
  /* 1298587d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1298587f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12985880 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12985882 je 0x129858bf */
  if (C.zf) goto L_129858bf;
  /* 12985884 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1298588a jne 0x1298587d */
  if (!C.zf) goto L_1298587d;
L_1298588c:;
  /* 1298588c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1298588e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12985893 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985895 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12985898 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1298589a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298589d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 129858a2 je 0x1298588c */
  if (C.zf) goto L_1298588c;
  /* 129858a4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 129858a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129858a9 je 0x129858ce */
  if (C.zf) goto L_129858ce;
  /* 129858ab test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 129858ad je 0x129858c9 */
  if (C.zf) goto L_129858c9;
  /* 129858af test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 129858b4 je 0x129858c4 */
  if (C.zf) goto L_129858c4;
  /* 129858b6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 129858bb je 0x129858bf */
  if (C.zf) goto L_129858bf;
  /* 129858bd jmp 0x1298588c */
  goto L_1298588c;
L_129858bf:;
  /* 129858bf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 129858c2 jmp 0x129858d1 */
  goto L_129858d1;
L_129858c4:;
  /* 129858c4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 129858c7 jmp 0x129858d1 */
  goto L_129858d1;
L_129858c9:;
  /* 129858c9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 129858cc jmp 0x129858d1 */
  goto L_129858d1;
L_129858ce:;
  /* 129858ce lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_129858d1:;
  /* 129858d1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 129858d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129858db je 0x129858f6 */
  if (C.zf) goto L_129858f6;
L_129858dd:;
  /* 129858dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 129858df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 129858e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 129858e2 je 0x12985948 */
  if (C.zf) goto L_12985948;
  /* 129858e4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 129858e6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129858e7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 129858ed jne 0x129858dd */
  if (!C.zf) goto L_129858dd;
  /* 129858ef jmp 0x129858f6 */
  goto L_129858f6;
L_129858f1:;
  /* 129858f1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129858f3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_129858f6:;
  /* 129858f6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 129858fb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 129858fd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129858ff xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12985902 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12985904 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12985906 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985909 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1298590e je 0x129858f1 */
  if (C.zf) goto L_129858f1;
  /* 12985910 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12985912 je 0x12985948 */
  if (C.zf) goto L_12985948;
  /* 12985914 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12985916 je 0x1298593f */
  if (C.zf) goto L_1298593f;
  /* 12985918 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1298591e je 0x12985932 */
  if (C.zf) goto L_12985932;
  /* 12985920 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12985926 je 0x1298592a */
  if (C.zf) goto L_1298592a;
  /* 12985928 jmp 0x129858f1 */
  goto L_129858f1;
L_1298592a:;
  /* 1298592a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1298592c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12985930 pop edi */
  EDI = (pop32());
  /* 12985931 ret  */
  ESPCHK(0x12985870u, _esp0);
  ESP += 4; return;
L_12985932:;
  /* 12985932 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12985935 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12985939 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1298593d pop edi */
  EDI = (pop32());
  /* 1298593e ret  */
  ESPCHK(0x12985870u, _esp0);
  ESP += 4; return;
L_1298593f:;
  /* 1298593f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12985942 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12985946 pop edi */
  EDI = (pop32());
  /* 12985947 ret  */
  ESPCHK(0x12985870u, _esp0);
  ESP += 4; return;
L_12985948:;
  /* 12985948 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1298594a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1298594e pop edi */
  EDI = (pop32());
  /* 1298594f ret  */
  ESPCHK(0x12985870u, _esp0);
  ESP += 4; return;
}

/* FUN_10005950 @ 0x12985950 (243 bytes, 91 insns) */
void f_12985950(void) {
  FTRACE(0x12985950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985950 push ebp */
  push32((uint32_t)(EBP));
  /* 12985951 mov ebp, esp */
  EBP = (ESP);
  /* 12985953 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985956 push ebx */
  push32((uint32_t)(EBX));
  /* 12985957 push esi */
  push32((uint32_t)(ESI));
  /* 12985958 push edi */
  push32((uint32_t)(EDI));
  /* 12985959 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1298595c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1298595f:;
  /* 1298595f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985963 jne 0x12985983 */
  if (!C.zf) goto L_12985983;
  /* 12985965 push 0x129a9db0 */
  push32((uint32_t)(0x129a9db0u));
  /* 1298596a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298596c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1298596e push 0x129a9dc0 */
  push32((uint32_t)(0x129a9dc0u));
  /* 12985973 push 2 */
  push32((uint32_t)(0x2u));
  /* 12985975 call 0x12981970 */
  push32(0x1298597au); f_12981970();
  /* 1298597a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298597d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985980 jne 0x12985983 */
  if (!C.zf) goto L_12985983;
  /* 12985982 int3  */
  x86_unimpl("int3 @ 0x12985982");
L_12985983:;
  /* 12985983 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12985985 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12985987 jne 0x1298595f */
  if (!C.zf) goto L_1298595f;
L_12985989:;
  /* 12985989 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298598d jne 0x129859ad */
  if (!C.zf) goto L_129859ad;
  /* 1298598f push 0x129a9d94 */
  push32((uint32_t)(0x129a9d94u));
  /* 12985994 push 0 */
  push32((uint32_t)(0x0u));
  /* 12985996 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12985998 push 0x129a9dc0 */
  push32((uint32_t)(0x129a9dc0u));
  /* 1298599d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298599f call 0x12981970 */
  push32(0x129859a4u); f_12981970();
  /* 129859a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129859a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129859aa jne 0x129859ad */
  if (!C.zf) goto L_129859ad;
  /* 129859ac int3  */
  x86_unimpl("int3 @ 0x129859ac");
L_129859ad:;
  /* 129859ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129859af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129859b1 jne 0x12985989 */
  if (!C.zf) goto L_12985989;
  /* 129859b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129859b6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 129859bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129859c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129859c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 129859c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129859c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129859cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129859ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129859d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129859d4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 129859d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 129859da push ecx */
  push32((uint32_t)(ECX));
  /* 129859db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 129859de push edx */
  push32((uint32_t)(EDX));
  /* 129859df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129859e2 push eax */
  push32((uint32_t)(EAX));
  /* 129859e3 call 0x12989840 */
  push32(0x129859e8u); f_12989840();
  /* 129859e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129859eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129859ee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129859f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129859f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129859f7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129859fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129859fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985a00 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985a04 jl 0x12985a28 */
  if ((C.sf!=C.of)) goto L_12985a28;
  /* 12985a06 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985a09 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12985a0b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12985a0e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12985a10 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12985a16 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12985a19 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985a1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12985a1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985a21 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985a24 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12985a26 jmp 0x12985a39 */
  goto L_12985a39;
L_12985a28:;
  /* 12985a28 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12985a2b push edx */
  push32((uint32_t)(EDX));
  /* 12985a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12985a2e call 0x129895c0 */
  push32(0x12985a33u); f_129895c0();
  /* 12985a33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985a36 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12985a39:;
  /* 12985a39 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12985a3c pop edi */
  EDI = (pop32());
  /* 12985a3d pop esi */
  ESI = (pop32());
  /* 12985a3e pop ebx */
  EBX = (pop32());
  /* 12985a3f mov esp, ebp */
  ESP = (EBP);
  /* 12985a41 pop ebp */
  EBP = (pop32());
  /* 12985a42 ret  */
  ESPCHK(0x12985950u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a50 @ 0x12985a50 (47 bytes, 17 insns) */
void f_12985a50(void) {
  FTRACE(0x12985a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985a50 push ecx */
  push32((uint32_t)(ECX));
  /* 12985a51 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985a56 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12985a5a jb 0x12985a70 */
  if (C.cf) goto L_12985a70;
L_12985a5c:;
  /* 12985a5c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985a62 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985a67 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12985a69 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985a6e jae 0x12985a5c */
  if (!C.cf) goto L_12985a5c;
L_12985a70:;
  /* 12985a70 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985a72 mov eax, esp */
  EAX = (ESP);
  /* 12985a74 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12985a76 mov esp, ecx */
  ESP = (ECX);
  /* 12985a78 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12985a7a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12985a7d push eax */
  push32((uint32_t)(EAX));
  /* 12985a7e ret  */
  ESPCHK(0x12985a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a80 @ 0x12985a80 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12985a80(void) {
  FTRACE(0x12985a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12985a81 mov ebp, esp */
  EBP = (ESP);
  /* 12985a83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985a86 push esi */
  push32((uint32_t)(ESI));
  /* 12985a87 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985a8b je 0x12985a93 */
  if (C.zf) goto L_12985a93;
  /* 12985a8d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985a91 jne 0x12985a98 */
  if (!C.zf) goto L_12985a98;
L_12985a93:;
  /* 12985a93 jmp 0x12985c68 */
  goto L_12985c68;
L_12985a98:;
  /* 12985a98 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985a9c je 0x12985ab4 */
  if (C.zf) goto L_12985ab4;
  /* 12985a9e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985aa2 je 0x12985ab4 */
  if (C.zf) goto L_12985ab4;
  /* 12985aa4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985aa8 je 0x12985ab4 */
  if (C.zf) goto L_12985ab4;
  /* 12985aaa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985aae jne 0x12985b91 */
  if (!C.zf) goto L_12985b91;
L_12985ab4:;
  /* 12985ab4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12985ab6 call 0x129862b0 */
  push32(0x12985abbu); f_129862b0();
  /* 12985abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985abe cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985ac2 je 0x12985aca */
  if (C.zf) goto L_12985aca;
  /* 12985ac4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985ac8 jne 0x12985b0f */
  if (!C.zf) goto L_12985b0f;
L_12985aca:;
  /* 12985aca cmp dword ptr [0x129ae5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985ad1 jne 0x12985b0f */
  if (!C.zf) goto L_12985b0f;
  /* 12985ad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12985ad5 push 0x12985cb0 */
  push32((uint32_t)(0x12985cb0u));
  /* 12985ada call dword ptr [0x129b02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02dc))), 0x12985ae0u);
  /* 12985ae0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985ae3 jne 0x12985af1 */
  if (!C.zf) goto L_12985af1;
  /* 12985ae5 mov dword ptr [0x129ae5fc], 1 */
  w32((uint32_t)(0x129ae5fc), (0x1u));
  /* 12985aef jmp 0x12985b0f */
  goto L_12985b0f;
L_12985af1:;
  /* 12985af1 call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x12985af7u);
  /* 12985af7 mov esi, eax */
  ESI = (EAX);
  /* 12985af9 call 0x1298a790 */
  push32(0x12985afeu); f_1298a790();
  /* 12985afe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12985b00 push 1 */
  push32((uint32_t)(0x1u));
  /* 12985b02 call 0x12986350 */
  push32(0x12985b07u); f_12986350();
  /* 12985b07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985b0a jmp 0x12985c68 */
  goto L_12985c68;
L_12985b0f:;
  /* 12985b0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985b12 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12985b15 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12985b18 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985b1b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12985b1e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985b22 ja 0x12985b82 */
  if ((!C.cf&&!C.zf)) goto L_12985b82;
  /* 12985b24 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12985b27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12985b29 mov dl, byte ptr [eax + 0x12985c8f] */
  DL = (r8((uint32_t)(EAX + 0x12985c8f)));
  /* 12985b2f jmp dword ptr [edx*4 + 0x12985c7b] */
  switch (EDX) {
    case 0: goto L_12985b36;
    case 1: goto L_12985b70;
    case 2: goto L_12985b4a;
    case 3: goto L_12985b5d;
    case 4: goto L_12985b82;
    default: x86_unimpl("switch@0x12985b2f out of table"); return;
  }
L_12985b36:;
  /* 12985b36 mov ecx, dword ptr [0x129ae5ec] */
  ECX = (r32((uint32_t)(0x129ae5ec)));
  /* 12985b3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12985b3f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985b42 mov dword ptr [0x129ae5ec], edx */
  w32((uint32_t)(0x129ae5ec), (EDX));
  /* 12985b48 jmp 0x12985b82 */
  goto L_12985b82;
L_12985b4a:;
  /* 12985b4a mov eax, dword ptr [0x129ae5f0] */
  EAX = (r32((uint32_t)(0x129ae5f0)));
  /* 12985b4f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12985b52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985b55 mov dword ptr [0x129ae5f0], ecx */
  w32((uint32_t)(0x129ae5f0), (ECX));
  /* 12985b5b jmp 0x12985b82 */
  goto L_12985b82;
L_12985b5d:;
  /* 12985b5d mov edx, dword ptr [0x129ae5f4] */
  EDX = (r32((uint32_t)(0x129ae5f4)));
  /* 12985b63 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12985b66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985b69 mov dword ptr [0x129ae5f4], eax */
  w32((uint32_t)(0x129ae5f4), (EAX));
  /* 12985b6e jmp 0x12985b82 */
  goto L_12985b82;
L_12985b70:;
  /* 12985b70 mov ecx, dword ptr [0x129ae5f8] */
  ECX = (r32((uint32_t)(0x129ae5f8)));
  /* 12985b76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12985b79 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985b7c mov dword ptr [0x129ae5f8], edx */
  w32((uint32_t)(0x129ae5f8), (EDX));
L_12985b82:;
  /* 12985b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 12985b84 call 0x12986350 */
  push32(0x12985b89u); f_12986350();
  /* 12985b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985b8c jmp 0x12985c63 */
  goto L_12985c63;
L_12985b91:;
  /* 12985b91 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985b95 je 0x12985ba8 */
  if (C.zf) goto L_12985ba8;
  /* 12985b97 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985b9b je 0x12985ba8 */
  if (C.zf) goto L_12985ba8;
  /* 12985b9d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985ba1 je 0x12985ba8 */
  if (C.zf) goto L_12985ba8;
  /* 12985ba3 jmp 0x12985c68 */
  goto L_12985c68;
L_12985ba8:;
  /* 12985ba8 call 0x129822f0 */
  push32(0x12985badu); f_129822f0();
  /* 12985bad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12985bb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985bb3 cmp dword ptr [eax + 0x50], 0x129acc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x129acc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985bba jne 0x12985c05 */
  if (!C.zf) goto L_12985c05;
  /* 12985bbc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12985bc1 push 0x129a9dcc */
  push32((uint32_t)(0x129a9dccu));
  /* 12985bc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12985bc8 mov ecx, dword ptr [0x129acc80] */
  ECX = (r32((uint32_t)(0x129acc80)));
  /* 12985bce push ecx */
  push32((uint32_t)(ECX));
  /* 12985bcf call 0x129828b0 */
  push32(0x12985bd4u); f_129828b0();
  /* 12985bd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985bd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985bda mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12985bdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985be0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985be4 je 0x12985c03 */
  if (C.zf) goto L_12985c03;
  /* 12985be6 mov ecx, dword ptr [0x129acc80] */
  ECX = (r32((uint32_t)(0x129acc80)));
  /* 12985bec push ecx */
  push32((uint32_t)(ECX));
  /* 12985bed push 0x129acc00 */
  push32((uint32_t)(0x129acc00u));
  /* 12985bf2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985bf5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12985bf8 push eax */
  push32((uint32_t)(EAX));
  /* 12985bf9 call 0x12989190 */
  push32(0x12985bfeu); f_12989190();
  /* 12985bfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985c01 jmp 0x12985c05 */
  goto L_12985c05;
L_12985c03:;
  /* 12985c03 jmp 0x12985c68 */
  goto L_12985c68;
L_12985c05:;
  /* 12985c05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985c08 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12985c0b push edx */
  push32((uint32_t)(EDX));
  /* 12985c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985c0f push eax */
  push32((uint32_t)(EAX));
  /* 12985c10 call 0x12985f90 */
  push32(0x12985c15u); f_12985f90();
  /* 12985c15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985c18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12985c1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985c1f jne 0x12985c23 */
  if (!C.zf) goto L_12985c23;
  /* 12985c21 jmp 0x12985c68 */
  goto L_12985c68;
L_12985c23:;
  /* 12985c23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985c26 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12985c29 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12985c2c:;
  /* 12985c2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985c2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12985c32 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985c35 jne 0x12985c63 */
  if (!C.zf) goto L_12985c63;
  /* 12985c37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985c3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985c3d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12985c40 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985c43 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985c46 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12985c49 mov edx, dword ptr [0x129acc84] */
  EDX = (r32((uint32_t)(0x129acc84)));
  /* 12985c4f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12985c52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985c55 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12985c58 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985c5a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985c5d jb 0x12985c61 */
  if (C.cf) goto L_12985c61;
  /* 12985c5f jmp 0x12985c63 */
  goto L_12985c63;
L_12985c61:;
  /* 12985c61 jmp 0x12985c2c */
  goto L_12985c2c;
L_12985c63:;
  /* 12985c63 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985c66 jmp 0x12985c76 */
  goto L_12985c76;
L_12985c68:;
  /* 12985c68 call 0x1298a780 */
  push32(0x12985c6du); f_1298a780();
  /* 12985c6d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12985c73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12985c76:;
  /* 12985c76 pop esi */
  ESI = (pop32());
  /* 12985c77 mov esp, ebp */
  ESP = (EBP);
  /* 12985c79 pop ebp */
  EBP = (pop32());
  /* 12985c7a ret  */
  ESPCHK(0x12985a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cb0 @ 0x12985cb0 (146 bytes, 45 insns) */
void f_12985cb0(void) {
  FTRACE(0x12985cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12985cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12985cb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985cb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12985cb8 call 0x129862b0 */
  push32(0x12985cbdu); f_129862b0();
  /* 12985cbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985cc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985cc4 jne 0x12985cde */
  if (!C.zf) goto L_12985cde;
  /* 12985cc6 mov dword ptr [ebp - 8], 0x129ae5ec */
  w32((uint32_t)(EBP + -0x8), (0x129ae5ecu));
  /* 12985ccd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985cd0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12985cd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12985cd5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12985cdc jmp 0x12985cf4 */
  goto L_12985cf4;
L_12985cde:;
  /* 12985cde mov dword ptr [ebp - 8], 0x129ae5f0 */
  w32((uint32_t)(EBP + -0x8), (0x129ae5f0u));
  /* 12985ce5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985ce8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12985cea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12985ced mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12985cf4:;
  /* 12985cf4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985cf8 jne 0x12985d08 */
  if (!C.zf) goto L_12985d08;
  /* 12985cfa push 1 */
  push32((uint32_t)(0x1u));
  /* 12985cfc call 0x12986350 */
  push32(0x12985d01u); f_12986350();
  /* 12985d01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985d04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12985d06 jmp 0x12985d3c */
  goto L_12985d3c;
L_12985d08:;
  /* 12985d08 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985d0c je 0x12985d2d */
  if (C.zf) goto L_12985d2d;
  /* 12985d0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985d11 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12985d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 12985d19 call 0x12986350 */
  push32(0x12985d1eu); f_12986350();
  /* 12985d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985d21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985d24 push edx */
  push32((uint32_t)(EDX));
  /* 12985d25 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12985d28u);
  /* 12985d28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985d2b jmp 0x12985d37 */
  goto L_12985d37;
L_12985d2d:;
  /* 12985d2d push 1 */
  push32((uint32_t)(0x1u));
  /* 12985d2f call 0x12986350 */
  push32(0x12985d34u); f_12986350();
  /* 12985d34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12985d37:;
  /* 12985d37 mov eax, 1 */
  EAX = (0x1u);
L_12985d3c:;
  /* 12985d3c mov esp, ebp */
  ESP = (EBP);
  /* 12985d3e pop ebp */
  EBP = (pop32());
  /* 12985d3f ret 4 */
  ESPCHK(0x12985cb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005d50 @ 0x12985d50 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12985d50(void) {
  FTRACE(0x12985d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12985d51 mov ebp, esp */
  EBP = (ESP);
  /* 12985d53 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985d56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12985d5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985d60 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12985d63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12985d66 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12985d69 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12985d6c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985d70 ja 0x12985e1e */
  if ((!C.cf&&!C.zf)) goto L_12985e1e;
  /* 12985d76 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12985d79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12985d7b mov dl, byte ptr [eax + 0x12985f72] */
  DL = (r8((uint32_t)(EAX + 0x12985f72)));
  /* 12985d81 jmp dword ptr [edx*4 + 0x12985f5a] */
  switch (EDX) {
    case 0: goto L_12985d88;
    case 1: goto L_12985df3;
    case 2: goto L_12985dd9;
    case 3: goto L_12985da5;
    case 4: goto L_12985dbf;
    case 5: goto L_12985e1e;
    default: x86_unimpl("switch@0x12985d81 out of table"); return;
  }
L_12985d88:;
  /* 12985d88 mov dword ptr [ebp - 0x18], 0x129ae5ec */
  w32((uint32_t)(EBP + -0x18), (0x129ae5ecu));
  /* 12985d8f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12985d92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12985d94 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12985d97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985d9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985d9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12985da0 jmp 0x12985e26 */
  goto L_12985e26;
L_12985da5:;
  /* 12985da5 mov dword ptr [ebp - 0x18], 0x129ae5f0 */
  w32((uint32_t)(EBP + -0x18), (0x129ae5f0u));
  /* 12985dac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12985daf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12985db1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12985db4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985db7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985dba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12985dbd jmp 0x12985e26 */
  goto L_12985e26;
L_12985dbf:;
  /* 12985dbf mov dword ptr [ebp - 0x18], 0x129ae5f4 */
  w32((uint32_t)(EBP + -0x18), (0x129ae5f4u));
  /* 12985dc6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12985dc9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12985dcb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12985dce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985dd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985dd4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12985dd7 jmp 0x12985e26 */
  goto L_12985e26;
L_12985dd9:;
  /* 12985dd9 mov dword ptr [ebp - 0x18], 0x129ae5f8 */
  w32((uint32_t)(EBP + -0x18), (0x129ae5f8u));
  /* 12985de0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12985de3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12985de5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12985de8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12985deb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985dee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12985df1 jmp 0x12985e26 */
  goto L_12985e26;
L_12985df3:;
  /* 12985df3 call 0x129822f0 */
  push32(0x12985df8u); f_129822f0();
  /* 12985df8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12985dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985dfe mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12985e01 push edx */
  push32((uint32_t)(EDX));
  /* 12985e02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985e05 push eax */
  push32((uint32_t)(EAX));
  /* 12985e06 call 0x12985f90 */
  push32(0x12985e0bu); f_12985f90();
  /* 12985e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985e0e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985e11 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12985e14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12985e17 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12985e19 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12985e1c jmp 0x12985e26 */
  goto L_12985e26;
L_12985e1e:;
  /* 12985e1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12985e21 jmp 0x12985f56 */
  goto L_12985f56;
L_12985e26:;
  /* 12985e26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985e2a je 0x12985e36 */
  if (C.zf) goto L_12985e36;
  /* 12985e2c push 1 */
  push32((uint32_t)(0x1u));
  /* 12985e2e call 0x129862b0 */
  push32(0x12985e33u); f_129862b0();
  /* 12985e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12985e36:;
  /* 12985e36 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985e3a jne 0x12985e53 */
  if (!C.zf) goto L_12985e53;
  /* 12985e3c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985e40 je 0x12985e4c */
  if (C.zf) goto L_12985e4c;
  /* 12985e42 push 1 */
  push32((uint32_t)(0x1u));
  /* 12985e44 call 0x12986350 */
  push32(0x12985e49u); f_12986350();
  /* 12985e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12985e4c:;
  /* 12985e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12985e4e jmp 0x12985f56 */
  goto L_12985f56;
L_12985e53:;
  /* 12985e53 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985e57 jne 0x12985e70 */
  if (!C.zf) goto L_12985e70;
  /* 12985e59 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985e5d je 0x12985e69 */
  if (C.zf) goto L_12985e69;
  /* 12985e5f push 1 */
  push32((uint32_t)(0x1u));
  /* 12985e61 call 0x12986350 */
  push32(0x12985e66u); f_12986350();
  /* 12985e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12985e69:;
  /* 12985e69 push 3 */
  push32((uint32_t)(0x3u));
  /* 12985e6b call 0x12982070 */
  push32(0x12985e70u); f_12982070();
L_12985e70:;
  /* 12985e70 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985e74 je 0x12985e82 */
  if (C.zf) goto L_12985e82;
  /* 12985e76 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985e7a je 0x12985e82 */
  if (C.zf) goto L_12985e82;
  /* 12985e7c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985e80 jne 0x12985eae */
  if (!C.zf) goto L_12985eae;
L_12985e82:;
  /* 12985e82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985e85 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12985e88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12985e8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985e8e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12985e95 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985e99 jne 0x12985eae */
  if (!C.zf) goto L_12985eae;
  /* 12985e9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985e9e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12985ea1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12985ea4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985ea7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12985eae:;
  /* 12985eae cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985eb2 jne 0x12985ef0 */
  if (!C.zf) goto L_12985ef0;
  /* 12985eb4 mov eax, dword ptr [0x129acc78] */
  EAX = (r32((uint32_t)(0x129acc78)));
  /* 12985eb9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12985ebc jmp 0x12985ec7 */
  goto L_12985ec7;
L_12985ebe:;
  /* 12985ebe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12985ec1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985ec4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12985ec7:;
  /* 12985ec7 mov edx, dword ptr [0x129acc78] */
  EDX = (r32((uint32_t)(0x129acc78)));
  /* 12985ecd add edx, dword ptr [0x129acc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129acc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985ed3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985ed6 jge 0x12985eee */
  if ((C.sf==C.of)) goto L_12985eee;
  /* 12985ed8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12985edb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12985ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985ee1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12985ee4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12985eec jmp 0x12985ebe */
  goto L_12985ebe;
L_12985eee:;
  /* 12985eee jmp 0x12985ef9 */
  goto L_12985ef9;
L_12985ef0:;
  /* 12985ef0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12985ef3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12985ef9:;
  /* 12985ef9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985efd je 0x12985f09 */
  if (C.zf) goto L_12985f09;
  /* 12985eff push 1 */
  push32((uint32_t)(0x1u));
  /* 12985f01 call 0x12986350 */
  push32(0x12985f06u); f_12986350();
  /* 12985f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12985f09:;
  /* 12985f09 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985f0d jne 0x12985f20 */
  if (!C.zf) goto L_12985f20;
  /* 12985f0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985f12 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12985f15 push edx */
  push32((uint32_t)(EDX));
  /* 12985f16 push 8 */
  push32((uint32_t)(0x8u));
  /* 12985f18 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12985f1bu);
  /* 12985f1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12985f1e jmp 0x12985f2a */
  goto L_12985f2a;
L_12985f20:;
  /* 12985f20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12985f23 push eax */
  push32((uint32_t)(EAX));
  /* 12985f24 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12985f27u);
  /* 12985f27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12985f2a:;
  /* 12985f2a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985f2e je 0x12985f3c */
  if (C.zf) goto L_12985f3c;
  /* 12985f30 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985f34 je 0x12985f3c */
  if (C.zf) goto L_12985f3c;
  /* 12985f36 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985f3a jne 0x12985f54 */
  if (!C.zf) goto L_12985f54;
L_12985f3c:;
  /* 12985f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985f3f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12985f42 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12985f45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985f49 jne 0x12985f54 */
  if (!C.zf) goto L_12985f54;
  /* 12985f4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985f4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12985f51 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12985f54:;
  /* 12985f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12985f56:;
  /* 12985f56 mov esp, ebp */
  ESP = (EBP);
  /* 12985f58 pop ebp */
  EBP = (pop32());
  /* 12985f59 ret  */
  ESPCHK(0x12985d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f90 @ 0x12985f90 (91 bytes, 35 insns) */
void f_12985f90(void) {
  FTRACE(0x12985f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12985f91 mov ebp, esp */
  EBP = (ESP);
  /* 12985f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12985f94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985f97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12985f9a:;
  /* 12985f9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985f9d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12985fa0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985fa3 je 0x12985fc3 */
  if (C.zf) goto L_12985fc3;
  /* 12985fa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985fa8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985fab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12985fae mov ecx, dword ptr [0x129acc84] */
  ECX = (r32((uint32_t)(0x129acc84)));
  /* 12985fb4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12985fb7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985fba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985fbc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985fbf jae 0x12985fc3 */
  if (!C.cf) goto L_12985fc3;
  /* 12985fc1 jmp 0x12985f9a */
  goto L_12985f9a;
L_12985fc3:;
  /* 12985fc3 mov eax, dword ptr [0x129acc84] */
  EAX = (r32((uint32_t)(0x129acc84)));
  /* 12985fc8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12985fcb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12985fce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985fd0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985fd3 jae 0x12985fe5 */
  if (!C.cf) goto L_12985fe5;
  /* 12985fd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985fd8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12985fdb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12985fde jne 0x12985fe5 */
  if (!C.zf) goto L_12985fe5;
  /* 12985fe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12985fe3 jmp 0x12985fe7 */
  goto L_12985fe7;
L_12985fe5:;
  /* 12985fe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12985fe7:;
  /* 12985fe7 mov esp, ebp */
  ESP = (EBP);
  /* 12985fe9 pop ebp */
  EBP = (pop32());
  /* 12985fea ret  */
  ESPCHK(0x12985f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x12985ff0 (13 bytes, 6 insns) */
void f_12985ff0(void) {
  FTRACE(0x12985ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12985ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12985ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12985ff3 call 0x129822f0 */
  push32(0x12985ff8u); f_129822f0();
  /* 12985ff8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12985ffb pop ebp */
  EBP = (pop32());
  /* 12985ffc ret  */
  ESPCHK(0x12985ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x12986000 (13 bytes, 6 insns) */
void f_12986000(void) {
  FTRACE(0x12986000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986000 push ebp */
  push32((uint32_t)(EBP));
  /* 12986001 mov ebp, esp */
  EBP = (ESP);
  /* 12986003 call 0x129822f0 */
  push32(0x12986008u); f_129822f0();
  /* 12986008 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298600b pop ebp */
  EBP = (pop32());
  /* 1298600c ret  */
  ESPCHK(0x12986000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006010 @ 0x12986010 (187 bytes, 54 insns) */
void f_12986010(void) {
  FTRACE(0x12986010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986010 push ebp */
  push32((uint32_t)(EBP));
  /* 12986011 mov ebp, esp */
  EBP = (ESP);
  /* 12986013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986016 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298601d cmp dword ptr [0x129ae600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986024 jne 0x12986083 */
  if (!C.zf) goto L_12986083;
  /* 12986026 push 0x129a91f8 */
  push32((uint32_t)(0x129a91f8u));
  /* 1298602b call dword ptr [0x129b0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0264))), 0x12986031u);
  /* 12986031 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12986034 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986038 je 0x12986057 */
  if (C.zf) goto L_12986057;
  /* 1298603a push 0x129a9dfc */
  push32((uint32_t)(0x129a9dfcu));
  /* 1298603f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986042 push eax */
  push32((uint32_t)(EAX));
  /* 12986043 call dword ptr [0x129b0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0260))), 0x12986049u);
  /* 12986049 mov dword ptr [0x129ae600], eax */
  w32((uint32_t)(0x129ae600), (EAX));
  /* 1298604e cmp dword ptr [0x129ae600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986055 jne 0x1298605b */
  if (!C.zf) goto L_1298605b;
L_12986057:;
  /* 12986057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12986059 jmp 0x129860c7 */
  goto L_129860c7;
L_1298605b:;
  /* 1298605b push 0x129a9dec */
  push32((uint32_t)(0x129a9decu));
  /* 12986060 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986063 push ecx */
  push32((uint32_t)(ECX));
  /* 12986064 call dword ptr [0x129b0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0260))), 0x1298606au);
  /* 1298606a mov dword ptr [0x129ae604], eax */
  w32((uint32_t)(0x129ae604), (EAX));
  /* 1298606f push 0x129a9dd8 */
  push32((uint32_t)(0x129a9dd8u));
  /* 12986074 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986077 push edx */
  push32((uint32_t)(EDX));
  /* 12986078 call dword ptr [0x129b0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0260))), 0x1298607eu);
  /* 1298607e mov dword ptr [0x129ae608], eax */
  w32((uint32_t)(0x129ae608), (EAX));
L_12986083:;
  /* 12986083 cmp dword ptr [0x129ae604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298608a je 0x12986095 */
  if (C.zf) goto L_12986095;
  /* 1298608c call dword ptr [0x129ae604] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae604))), 0x12986092u);
  /* 12986092 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12986095:;
  /* 12986095 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986099 je 0x129860b1 */
  if (C.zf) goto L_129860b1;
  /* 1298609b cmp dword ptr [0x129ae608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129860a2 je 0x129860b1 */
  if (C.zf) goto L_129860b1;
  /* 129860a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129860a7 push eax */
  push32((uint32_t)(EAX));
  /* 129860a8 call dword ptr [0x129ae608] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae608))), 0x129860aeu);
  /* 129860ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_129860b1:;
  /* 129860b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 129860b4 push ecx */
  push32((uint32_t)(ECX));
  /* 129860b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129860b8 push edx */
  push32((uint32_t)(EDX));
  /* 129860b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129860bc push eax */
  push32((uint32_t)(EAX));
  /* 129860bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129860c0 push ecx */
  push32((uint32_t)(ECX));
  /* 129860c1 call dword ptr [0x129ae600] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae600))), 0x129860c7u);
L_129860c7:;
  /* 129860c7 mov esp, ebp */
  ESP = (EBP);
  /* 129860c9 pop ebp */
  EBP = (pop32());
  /* 129860ca ret  */
  ESPCHK(0x12986010u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x129860d0 (254 bytes, 109 insns) */
void f_129860d0(void) {
  FTRACE(0x129860d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129860d0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 129860d4 push edi */
  push32((uint32_t)(EDI));
  /* 129860d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129860d7 je 0x12986153 */
  if (C.zf) goto L_12986153;
  /* 129860d9 push esi */
  push32((uint32_t)(ESI));
  /* 129860da push ebx */
  push32((uint32_t)(EBX));
  /* 129860db mov ebx, ecx */
  EBX = (ECX);
  /* 129860dd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 129860e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 129860e7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 129860eb jne 0x129860f4 */
  if (!C.zf) goto L_129860f4;
  /* 129860ed shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129860f0 jne 0x12986161 */
  if (!C.zf) goto L_12986161;
  /* 129860f2 jmp 0x12986115 */
  goto L_12986115;
L_129860f4:;
  /* 129860f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129860f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129860f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129860f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129860fa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129860fb je 0x12986122 */
  if (C.zf) goto L_12986122;
  /* 129860fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 129860ff je 0x1298612a */
  if (C.zf) goto L_1298612a;
  /* 12986101 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12986107 jne 0x129860f4 */
  if (!C.zf) goto L_129860f4;
  /* 12986109 mov ebx, ecx */
  EBX = (ECX);
  /* 1298610b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298610e jne 0x12986161 */
  if (!C.zf) goto L_12986161;
L_12986110:;
  /* 12986110 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12986113 je 0x12986122 */
  if (C.zf) goto L_12986122;
L_12986115:;
  /* 12986115 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12986117 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12986118 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1298611a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1298611b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1298611d je 0x1298614e */
  if (C.zf) goto L_1298614e;
  /* 1298611f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12986120 jne 0x12986115 */
  if (!C.zf) goto L_12986115;
L_12986122:;
  /* 12986122 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12986126 pop ebx */
  EBX = (pop32());
  /* 12986127 pop esi */
  ESI = (pop32());
  /* 12986128 pop edi */
  EDI = (pop32());
  /* 12986129 ret  */
  ESPCHK(0x129860d0u, _esp0);
  ESP += 4; return;
L_1298612a:;
  /* 1298612a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12986130 je 0x12986144 */
  if (C.zf) goto L_12986144;
L_12986132:;
  /* 12986132 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12986134 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12986135 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12986136 je 0x129861c6 */
  if (C.zf) goto L_129861c6;
  /* 1298613c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12986142 jne 0x12986132 */
  if (!C.zf) goto L_12986132;
L_12986144:;
  /* 12986144 mov ebx, ecx */
  EBX = (ECX);
  /* 12986146 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12986149 jne 0x129861b7 */
  if (!C.zf) goto L_129861b7;
L_1298614b:;
  /* 1298614b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1298614d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1298614e:;
  /* 1298614e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1298614f jne 0x1298614b */
  if (!C.zf) goto L_1298614b;
  /* 12986151 pop ebx */
  EBX = (pop32());
  /* 12986152 pop esi */
  ESI = (pop32());
L_12986153:;
  /* 12986153 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12986157 pop edi */
  EDI = (pop32());
  /* 12986158 ret  */
  ESPCHK(0x129860d0u, _esp0);
  ESP += 4; return;
L_12986159:;
  /* 12986159 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1298615b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1298615e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1298615f je 0x12986110 */
  if (C.zf) goto L_12986110;
L_12986161:;
  /* 12986161 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12986166 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12986168 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298616a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298616d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1298616f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12986171 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12986174 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12986179 je 0x12986159 */
  if (C.zf) goto L_12986159;
  /* 1298617b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1298617d je 0x129861ab */
  if (C.zf) goto L_129861ab;
  /* 1298617f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12986181 je 0x129861a1 */
  if (C.zf) goto L_129861a1;
  /* 12986183 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12986189 je 0x12986197 */
  if (C.zf) goto L_12986197;
  /* 1298618b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12986191 jne 0x12986159 */
  if (!C.zf) goto L_12986159;
  /* 12986193 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12986195 jmp 0x129861af */
  goto L_129861af;
L_12986197:;
  /* 12986197 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298619d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1298619f jmp 0x129861af */
  goto L_129861af;
L_129861a1:;
  /* 129861a1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 129861a7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 129861a9 jmp 0x129861af */
  goto L_129861af;
L_129861ab:;
  /* 129861ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129861ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_129861af:;
  /* 129861af add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129861b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129861b4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129861b5 je 0x129861c1 */
  if (C.zf) goto L_129861c1;
L_129861b7:;
  /* 129861b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129861b9:;
  /* 129861b9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 129861bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129861be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 129861bf jne 0x129861b9 */
  if (!C.zf) goto L_129861b9;
L_129861c1:;
  /* 129861c1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 129861c4 jne 0x1298614b */
  if (!C.zf) goto L_1298614b;
L_129861c6:;
  /* 129861c6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 129861ca pop ebx */
  EBX = (pop32());
  /* 129861cb pop esi */
  ESI = (pop32());
  /* 129861cc pop edi */
  EDI = (pop32());
  /* 129861cd ret  */
  ESPCHK(0x129860d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x129861d0 (55 bytes, 16 insns) */
void f_129861d0(void) {
  FTRACE(0x129861d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129861d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129861d1 mov ebp, esp */
  EBP = (ESP);
  /* 129861d3 mov eax, dword ptr [0x129acb84] */
  EAX = (r32((uint32_t)(0x129acb84)));
  /* 129861d8 push eax */
  push32((uint32_t)(EAX));
  /* 129861d9 call dword ptr [0x129b02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e0))), 0x129861dfu);
  /* 129861df mov ecx, dword ptr [0x129acb74] */
  ECX = (r32((uint32_t)(0x129acb74)));
  /* 129861e5 push ecx */
  push32((uint32_t)(ECX));
  /* 129861e6 call dword ptr [0x129b02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e0))), 0x129861ecu);
  /* 129861ec mov edx, dword ptr [0x129acb64] */
  EDX = (r32((uint32_t)(0x129acb64)));
  /* 129861f2 push edx */
  push32((uint32_t)(EDX));
  /* 129861f3 call dword ptr [0x129b02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e0))), 0x129861f9u);
  /* 129861f9 mov eax, dword ptr [0x129acb44] */
  EAX = (r32((uint32_t)(0x129acb44)));
  /* 129861fe push eax */
  push32((uint32_t)(EAX));
  /* 129861ff call dword ptr [0x129b02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e0))), 0x12986205u);
  /* 12986205 pop ebp */
  EBP = (pop32());
  /* 12986206 ret  */
  ESPCHK(0x129861d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x12986210 (159 bytes, 47 insns) */
void f_12986210(void) {
  FTRACE(0x12986210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986210 push ebp */
  push32((uint32_t)(EBP));
  /* 12986211 mov ebp, esp */
  EBP = (ESP);
  /* 12986213 push ecx */
  push32((uint32_t)(ECX));
  /* 12986214 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298621b jmp 0x12986226 */
  goto L_12986226;
L_1298621d:;
  /* 1298621d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986220 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986223 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12986226:;
  /* 12986226 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298622a jge 0x12986279 */
  if ((C.sf==C.of)) goto L_12986279;
  /* 1298622c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298622f cmp dword ptr [ecx*4 + 0x129acb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x129acb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986237 je 0x12986277 */
  if (C.zf) goto L_12986277;
  /* 12986239 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298623d je 0x12986277 */
  if (C.zf) goto L_12986277;
  /* 1298623f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986243 je 0x12986277 */
  if (C.zf) goto L_12986277;
  /* 12986245 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986249 je 0x12986277 */
  if (C.zf) goto L_12986277;
  /* 1298624b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298624f je 0x12986277 */
  if (C.zf) goto L_12986277;
  /* 12986251 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986254 mov eax, dword ptr [edx*4 + 0x129acb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129acb40)));
  /* 1298625b push eax */
  push32((uint32_t)(EAX));
  /* 1298625c call dword ptr [0x129b02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a8))), 0x12986262u);
  /* 12986262 push 2 */
  push32((uint32_t)(0x2u));
  /* 12986264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986267 mov edx, dword ptr [ecx*4 + 0x129acb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129acb40)));
  /* 1298626e push edx */
  push32((uint32_t)(EDX));
  /* 1298626f call 0x12983340 */
  push32(0x12986274u); f_12983340();
  /* 12986274 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12986277:;
  /* 12986277 jmp 0x1298621d */
  goto L_1298621d;
L_12986279:;
  /* 12986279 mov eax, dword ptr [0x129acb64] */
  EAX = (r32((uint32_t)(0x129acb64)));
  /* 1298627e push eax */
  push32((uint32_t)(EAX));
  /* 1298627f call dword ptr [0x129b02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a8))), 0x12986285u);
  /* 12986285 mov ecx, dword ptr [0x129acb74] */
  ECX = (r32((uint32_t)(0x129acb74)));
  /* 1298628b push ecx */
  push32((uint32_t)(ECX));
  /* 1298628c call dword ptr [0x129b02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a8))), 0x12986292u);
  /* 12986292 mov edx, dword ptr [0x129acb84] */
  EDX = (r32((uint32_t)(0x129acb84)));
  /* 12986298 push edx */
  push32((uint32_t)(EDX));
  /* 12986299 call dword ptr [0x129b02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a8))), 0x1298629fu);
  /* 1298629f mov eax, dword ptr [0x129acb44] */
  EAX = (r32((uint32_t)(0x129acb44)));
  /* 129862a4 push eax */
  push32((uint32_t)(EAX));
  /* 129862a5 call dword ptr [0x129b02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a8))), 0x129862abu);
  /* 129862ab mov esp, ebp */
  ESP = (EBP);
  /* 129862ad pop ebp */
  EBP = (pop32());
  /* 129862ae ret  */
  ESPCHK(0x12986210u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b0 @ 0x129862b0 (151 bytes, 46 insns) */
void f_129862b0(void) {
  FTRACE(0x129862b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129862b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129862b1 mov ebp, esp */
  EBP = (ESP);
  /* 129862b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129862b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129862b7 cmp dword ptr [eax*4 + 0x129acb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x129acb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129862bf jne 0x12986332 */
  if (!C.zf) goto L_12986332;
  /* 129862c1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 129862c6 push 0x129a9e08 */
  push32((uint32_t)(0x129a9e08u));
  /* 129862cb push 2 */
  push32((uint32_t)(0x2u));
  /* 129862cd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 129862cf call 0x129828b0 */
  push32(0x129862d4u); f_129828b0();
  /* 129862d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129862d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129862da cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129862de jne 0x129862ea */
  if (!C.zf) goto L_129862ea;
  /* 129862e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129862e2 call 0x12981820 */
  push32(0x129862e7u); f_12981820();
  /* 129862e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129862ea:;
  /* 129862ea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 129862ec call 0x129862b0 */
  push32(0x129862f1u); f_129862b0();
  /* 129862f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129862f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129862f7 cmp dword ptr [ecx*4 + 0x129acb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x129acb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129862ff jne 0x1298631a */
  if (!C.zf) goto L_1298631a;
  /* 12986301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986304 push edx */
  push32((uint32_t)(EDX));
  /* 12986305 call dword ptr [0x129b02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e0))), 0x1298630bu);
  /* 1298630b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298630e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986311 mov dword ptr [eax*4 + 0x129acb40], ecx */
  w32((uint32_t)(EAX*4 + 0x129acb40), (ECX));
  /* 12986318 jmp 0x12986328 */
  goto L_12986328;
L_1298631a:;
  /* 1298631a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298631c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298631f push edx */
  push32((uint32_t)(EDX));
  /* 12986320 call 0x12983340 */
  push32(0x12986325u); f_12983340();
  /* 12986325 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12986328:;
  /* 12986328 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1298632a call 0x12986350 */
  push32(0x1298632fu); f_12986350();
  /* 1298632f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12986332:;
  /* 12986332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986335 mov ecx, dword ptr [eax*4 + 0x129acb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129acb40)));
  /* 1298633c push ecx */
  push32((uint32_t)(ECX));
  /* 1298633d call dword ptr [0x129b02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e4))), 0x12986343u);
  /* 12986343 mov esp, ebp */
  ESP = (EBP);
  /* 12986345 pop ebp */
  EBP = (pop32());
  /* 12986346 ret  */
  ESPCHK(0x129862b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006350 @ 0x12986350 (22 bytes, 8 insns) */
void f_12986350(void) {
  FTRACE(0x12986350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986350 push ebp */
  push32((uint32_t)(EBP));
  /* 12986351 mov ebp, esp */
  EBP = (ESP);
  /* 12986353 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986356 mov ecx, dword ptr [eax*4 + 0x129acb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x129acb40)));
  /* 1298635d push ecx */
  push32((uint32_t)(ECX));
  /* 1298635e call dword ptr [0x129b02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e8))), 0x12986364u);
  /* 12986364 pop ebp */
  EBP = (pop32());
  /* 12986365 ret  */
  ESPCHK(0x12986350u, _esp0);
  ESP += 4; return;
}

/* FUN_10006370 @ 0x12986370 (26 bytes, 10 insns) */
void f_12986370(void) {
  FTRACE(0x12986370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986370 push ebp */
  push32((uint32_t)(EBP));
  /* 12986371 mov ebp, esp */
  EBP = (ESP);
  /* 12986373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986376 push eax */
  push32((uint32_t)(EAX));
  /* 12986377 push 0 */
  push32((uint32_t)(0x0u));
  /* 12986379 call dword ptr [0x129b02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02ec))), 0x1298637fu);
  /* 1298637f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12986384 call dword ptr [0x129b0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0270))), 0x1298638au);
  /* 1298638a pop ebp */
  EBP = (pop32());
  /* 1298638b ret  */
  ESPCHK(0x12986370u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12986390 (446 bytes, 130 insns) */
void f_12986390(void) {
  FTRACE(0x12986390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986390 push ebp */
  push32((uint32_t)(EBP));
  /* 12986391 mov ebp, esp */
  EBP = (ESP);
  /* 12986393 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986396 call 0x129822f0 */
  push32(0x1298639bu); f_129822f0();
  /* 1298639b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298639e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129863a1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 129863a4 push ecx */
  push32((uint32_t)(ECX));
  /* 129863a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129863a8 push edx */
  push32((uint32_t)(EDX));
  /* 129863a9 call 0x12986550 */
  push32(0x129863aeu); f_12986550();
  /* 129863ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129863b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129863b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129863b8 je 0x129863c3 */
  if (C.zf) goto L_129863c3;
  /* 129863ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129863bd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129863c1 jne 0x129863d2 */
  if (!C.zf) goto L_129863d2;
L_129863c3:;
  /* 129863c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129863c6 push ecx */
  push32((uint32_t)(ECX));
  /* 129863c7 call dword ptr [0x129b02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02f0))), 0x129863cdu);
  /* 129863cd jmp 0x1298654a */
  goto L_1298654a;
L_129863d2:;
  /* 129863d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129863d5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129863d9 jne 0x129863ef */
  if (!C.zf) goto L_129863ef;
  /* 129863db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129863de mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 129863e5 mov eax, 1 */
  EAX = (0x1u);
  /* 129863ea jmp 0x1298654a */
  goto L_1298654a;
L_129863ef:;
  /* 129863ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129863f2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129863f6 jne 0x12986400 */
  if (!C.zf) goto L_12986400;
  /* 129863f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129863fb jmp 0x1298654a */
  goto L_1298654a;
L_12986400:;
  /* 12986400 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12986403 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12986406 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12986409 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298640c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1298640f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12986412 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986415 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986418 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1298641b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298641e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986422 jne 0x12986527 */
  if (!C.zf) goto L_12986527;
  /* 12986428 mov eax, dword ptr [0x129acc78] */
  EAX = (r32((uint32_t)(0x129acc78)));
  /* 1298642d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12986430 jmp 0x1298643b */
  goto L_1298643b;
L_12986432:;
  /* 12986432 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12986435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986438 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1298643b:;
  /* 1298643b mov edx, dword ptr [0x129acc78] */
  EDX = (r32((uint32_t)(0x129acc78)));
  /* 12986441 add edx, dword ptr [0x129acc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129acc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986447 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298644a jge 0x12986462 */
  if ((C.sf==C.of)) goto L_12986462;
  /* 1298644c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298644f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12986452 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986455 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12986458 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12986460 jmp 0x12986432 */
  goto L_12986432;
L_12986462:;
  /* 12986462 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986465 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12986468 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298646b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298646e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986474 jne 0x12986485 */
  if (!C.zf) goto L_12986485;
  /* 12986476 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986479 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12986480 jmp 0x1298650d */
  goto L_1298650d;
L_12986485:;
  /* 12986485 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12986488 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298648e jne 0x1298649c */
  if (!C.zf) goto L_1298649c;
  /* 12986490 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986493 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1298649a jmp 0x1298650d */
  goto L_1298650d;
L_1298649c:;
  /* 1298649c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298649f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129864a5 jne 0x129864b3 */
  if (!C.zf) goto L_129864b3;
  /* 129864a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129864aa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 129864b1 jmp 0x1298650d */
  goto L_1298650d;
L_129864b3:;
  /* 129864b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129864b6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129864bc jne 0x129864ca */
  if (!C.zf) goto L_129864ca;
  /* 129864be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129864c1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 129864c8 jmp 0x1298650d */
  goto L_1298650d;
L_129864ca:;
  /* 129864ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129864cd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129864d3 jne 0x129864e1 */
  if (!C.zf) goto L_129864e1;
  /* 129864d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129864d8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 129864df jmp 0x1298650d */
  goto L_1298650d;
L_129864e1:;
  /* 129864e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129864e4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129864ea jne 0x129864f8 */
  if (!C.zf) goto L_129864f8;
  /* 129864ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129864ef mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 129864f6 jmp 0x1298650d */
  goto L_1298650d;
L_129864f8:;
  /* 129864f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129864fb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986501 jne 0x1298650d */
  if (!C.zf) goto L_1298650d;
  /* 12986503 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986506 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1298650d:;
  /* 1298650d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986510 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12986513 push edx */
  push32((uint32_t)(EDX));
  /* 12986514 push 8 */
  push32((uint32_t)(0x8u));
  /* 12986516 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12986519u);
  /* 12986519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298651c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298651f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12986522 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12986525 jmp 0x1298653e */
  goto L_1298653e;
L_12986527:;
  /* 12986527 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298652a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12986531 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12986534 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12986537 push ecx */
  push32((uint32_t)(ECX));
  /* 12986538 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1298653bu);
  /* 1298653b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298653e:;
  /* 1298653e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986541 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12986544 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12986547 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1298654a:;
  /* 1298654a mov esp, ebp */
  ESP = (EBP);
  /* 1298654c pop ebp */
  EBP = (pop32());
  /* 1298654d ret  */
  ESPCHK(0x12986390u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x12986550 (89 bytes, 35 insns) */
void f_12986550(void) {
  FTRACE(0x12986550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986550 push ebp */
  push32((uint32_t)(EBP));
  /* 12986551 mov ebp, esp */
  EBP = (ESP);
  /* 12986553 push ecx */
  push32((uint32_t)(ECX));
  /* 12986554 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986557 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298655a:;
  /* 1298655a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298655d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298655f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986562 je 0x12986582 */
  if (C.zf) goto L_12986582;
  /* 12986564 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986567 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298656a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298656d mov ecx, dword ptr [0x129acc84] */
  ECX = (r32((uint32_t)(0x129acc84)));
  /* 12986573 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12986576 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986579 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298657b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298657e jae 0x12986582 */
  if (!C.cf) goto L_12986582;
  /* 12986580 jmp 0x1298655a */
  goto L_1298655a;
L_12986582:;
  /* 12986582 mov eax, dword ptr [0x129acc84] */
  EAX = (r32((uint32_t)(0x129acc84)));
  /* 12986587 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298658a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298658d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298658f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986592 jae 0x1298659e */
  if (!C.cf) goto L_1298659e;
  /* 12986594 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986597 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12986599 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298659c je 0x129865a2 */
  if (C.zf) goto L_129865a2;
L_1298659e:;
  /* 1298659e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129865a0 jmp 0x129865a5 */
  goto L_129865a5;
L_129865a2:;
  /* 129865a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_129865a5:;
  /* 129865a5 mov esp, ebp */
  ESP = (EBP);
  /* 129865a7 pop ebp */
  EBP = (pop32());
  /* 129865a8 ret  */
  ESPCHK(0x12986550u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x129865b0 (48 bytes, 17 insns) */
void f_129865b0(void) {
  FTRACE(0x129865b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129865b0 push ebp */
  push32((uint32_t)(EBP));
  /* 129865b1 mov ebp, esp */
  EBP = (ESP);
  /* 129865b3 push ecx */
  push32((uint32_t)(ECX));
  /* 129865b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 129865b6 call 0x129862b0 */
  push32(0x129865bbu); f_129862b0();
  /* 129865bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129865be mov eax, dword ptr [0x129ae674] */
  EAX = (r32((uint32_t)(0x129ae674)));
  /* 129865c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129865c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129865c9 mov dword ptr [0x129ae674], ecx */
  w32((uint32_t)(0x129ae674), (ECX));
  /* 129865cf push 9 */
  push32((uint32_t)(0x9u));
  /* 129865d1 call 0x12986350 */
  push32(0x129865d6u); f_12986350();
  /* 129865d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129865d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129865dc mov esp, ebp */
  ESP = (EBP);
  /* 129865de pop ebp */
  EBP = (pop32());
  /* 129865df ret  */
  ESPCHK(0x129865b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x129865e0 (10 bytes, 5 insns) */
void f_129865e0(void) {
  FTRACE(0x129865e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129865e0 push ebp */
  push32((uint32_t)(EBP));
  /* 129865e1 mov ebp, esp */
  EBP = (ESP);
  /* 129865e3 mov eax, dword ptr [0x129ae674] */
  EAX = (r32((uint32_t)(0x129ae674)));
  /* 129865e8 pop ebp */
  EBP = (pop32());
  /* 129865e9 ret  */
  ESPCHK(0x129865e0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x129865f0 (45 bytes, 19 insns) */
void f_129865f0(void) {
  FTRACE(0x129865f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129865f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129865f1 mov ebp, esp */
  EBP = (ESP);
  /* 129865f3 push ecx */
  push32((uint32_t)(ECX));
  /* 129865f4 mov eax, dword ptr [0x129ae674] */
  EAX = (r32((uint32_t)(0x129ae674)));
  /* 129865f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129865fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986600 je 0x12986610 */
  if (C.zf) goto L_12986610;
  /* 12986602 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986605 push ecx */
  push32((uint32_t)(ECX));
  /* 12986606 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12986609u);
  /* 12986609 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298660c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298660e jne 0x12986614 */
  if (!C.zf) goto L_12986614;
L_12986610:;
  /* 12986610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12986612 jmp 0x12986619 */
  goto L_12986619;
L_12986614:;
  /* 12986614 mov eax, 1 */
  EAX = (0x1u);
L_12986619:;
  /* 12986619 mov esp, ebp */
  ESP = (EBP);
  /* 1298661b pop ebp */
  EBP = (pop32());
  /* 1298661c ret  */
  ESPCHK(0x129865f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12986620 (88 bytes, 40 insns) */
void f_12986620(void) {
  FTRACE(0x12986620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986620 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12986624 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12986628 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298662a je 0x12986673 */
  if (C.zf) goto L_12986673;
  /* 1298662c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298662e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12986632 push edi */
  push32((uint32_t)(EDI));
  /* 12986633 mov edi, ecx */
  EDI = (ECX);
  /* 12986635 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986638 jb 0x12986667 */
  if (C.cf) goto L_12986667;
  /* 1298663a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298663c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1298663f je 0x12986649 */
  if (C.zf) goto L_12986649;
  /* 12986641 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12986643:;
  /* 12986643 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12986645 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12986646 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12986647 jne 0x12986643 */
  if (!C.zf) goto L_12986643;
L_12986649:;
  /* 12986649 mov ecx, eax */
  ECX = (EAX);
  /* 1298664b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1298664e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986650 mov ecx, eax */
  ECX = (EAX);
  /* 12986652 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12986655 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986657 mov ecx, edx */
  ECX = (EDX);
  /* 12986659 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1298665c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298665f je 0x12986667 */
  if (C.zf) goto L_12986667;
  /* 12986661 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12986663 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12986665 je 0x1298666d */
  if (C.zf) goto L_1298666d;
L_12986667:;
  /* 12986667 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12986669 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1298666a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1298666b jne 0x12986667 */
  if (!C.zf) goto L_12986667;
L_1298666d:;
  /* 1298666d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12986671 pop edi */
  EDI = (pop32());
  /* 12986672 ret  */
  ESPCHK(0x12986620u, _esp0);
  ESP += 4; return;
L_12986673:;
  /* 12986673 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12986677 ret  */
  ESPCHK(0x12986620u, _esp0);
  ESP += 4; return;
}

/* FUN_10006680 @ 0x12986680 (23 bytes, 10 insns) */
void f_12986680(void) {
  FTRACE(0x12986680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986680 push ebp */
  push32((uint32_t)(EBP));
  /* 12986681 mov ebp, esp */
  EBP = (ESP);
  /* 12986683 mov eax, dword ptr [0x129ae670] */
  EAX = (r32((uint32_t)(0x129ae670)));
  /* 12986688 push eax */
  push32((uint32_t)(EAX));
  /* 12986689 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298668c push ecx */
  push32((uint32_t)(ECX));
  /* 1298668d call 0x129866a0 */
  push32(0x12986692u); f_129866a0();
  /* 12986692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986695 pop ebp */
  EBP = (pop32());
  /* 12986696 ret  */
  ESPCHK(0x12986680u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x129866a0 (87 bytes, 34 insns) */
void f_129866a0(void) {
  FTRACE(0x129866a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129866a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129866a1 mov ebp, esp */
  EBP = (ESP);
  /* 129866a3 push ecx */
  push32((uint32_t)(ECX));
  /* 129866a4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129866a8 jbe 0x129866ae */
  if ((C.cf||C.zf)) goto L_129866ae;
  /* 129866aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129866ac jmp 0x129866f3 */
  goto L_129866f3;
L_129866ae:;
  /* 129866ae cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129866b2 ja 0x129866c5 */
  if ((!C.cf&&!C.zf)) goto L_129866c5;
  /* 129866b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129866b7 push eax */
  push32((uint32_t)(EAX));
  /* 129866b8 call 0x12986700 */
  push32(0x129866bdu); f_12986700();
  /* 129866bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129866c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129866c3 jmp 0x129866cc */
  goto L_129866cc;
L_129866c5:;
  /* 129866c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_129866cc:;
  /* 129866cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129866d0 jne 0x129866d8 */
  if (!C.zf) goto L_129866d8;
  /* 129866d2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129866d6 jne 0x129866dd */
  if (!C.zf) goto L_129866dd;
L_129866d8:;
  /* 129866d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129866db jmp 0x129866f3 */
  goto L_129866f3;
L_129866dd:;
  /* 129866dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129866e0 push ecx */
  push32((uint32_t)(ECX));
  /* 129866e1 call 0x129865f0 */
  push32(0x129866e6u); f_129865f0();
  /* 129866e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129866e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129866eb jne 0x129866f1 */
  if (!C.zf) goto L_129866f1;
  /* 129866ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129866ef jmp 0x129866f3 */
  goto L_129866f3;
L_129866f1:;
  /* 129866f1 jmp 0x129866ae */
  goto L_129866ae;
L_129866f3:;
  /* 129866f3 mov esp, ebp */
  ESP = (EBP);
  /* 129866f5 pop ebp */
  EBP = (pop32());
  /* 129866f6 ret  */
  ESPCHK(0x129866a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006700 @ 0x12986700 (109 bytes, 37 insns) */
void f_12986700(void) {
  FTRACE(0x12986700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986700 push ebp */
  push32((uint32_t)(EBP));
  /* 12986701 mov ebp, esp */
  EBP = (ESP);
  /* 12986703 push ecx */
  push32((uint32_t)(ECX));
  /* 12986704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986707 cmp eax, dword ptr [0x129acc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129acc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298670d ja 0x1298673d */
  if ((!C.cf&&!C.zf)) goto L_1298673d;
  /* 1298670f push 9 */
  push32((uint32_t)(0x9u));
  /* 12986711 call 0x129862b0 */
  push32(0x12986716u); f_129862b0();
  /* 12986716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298671c push ecx */
  push32((uint32_t)(ECX));
  /* 1298671d call 0x12987240 */
  push32(0x12986722u); f_12987240();
  /* 12986722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986725 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12986728 push 9 */
  push32((uint32_t)(0x9u));
  /* 1298672a call 0x12986350 */
  push32(0x1298672fu); f_12986350();
  /* 1298672f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986732 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986736 je 0x1298673d */
  if (C.zf) goto L_1298673d;
  /* 12986738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298673b jmp 0x12986769 */
  goto L_12986769;
L_1298673d:;
  /* 1298673d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986741 jne 0x1298674a */
  if (!C.zf) goto L_1298674a;
  /* 12986743 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1298674a:;
  /* 1298674a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298674d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986750 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12986753 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12986756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986759 push eax */
  push32((uint32_t)(EAX));
  /* 1298675a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298675c mov ecx, dword ptr [0x129afe2c] */
  ECX = (r32((uint32_t)(0x129afe2c)));
  /* 12986762 push ecx */
  push32((uint32_t)(ECX));
  /* 12986763 call dword ptr [0x129b02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02f4))), 0x12986769u);
L_12986769:;
  /* 12986769 mov esp, ebp */
  ESP = (EBP);
  /* 1298676b pop ebp */
  EBP = (pop32());
  /* 1298676c ret  */
  ESPCHK(0x12986700u, _esp0);
  ESP += 4; return;
}

