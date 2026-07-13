#include "recomp.h"

/* thunk_FUN_100028b0 @ 0x12891005 (5 bytes, 1 insns) */
void f_12891005(void) {
  FTRACE(0x12891005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891005 jmp 0x128928b0 */
  f_128928b0(); return;
}

/* OnInit @ 0x1289100f (5 bytes, 1 insns) */
void f_1289100f(void) {
  FTRACE(0x1289100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289100f jmp 0x12892680 */
  f_12892680(); return;
}

/* thunk_FUN_10002630 @ 0x1289101e (5 bytes, 1 insns) */
void f_1289101e(void) {
  FTRACE(0x1289101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289101e jmp 0x12892630 */
  f_12892630(); return;
}

/* thunk_FUN_10001af0 @ 0x12891023 (5 bytes, 1 insns) */
void f_12891023(void) {
  FTRACE(0x12891023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891023 jmp 0x12891af0 */
  f_12891af0(); return;
}

/* thunk_FUN_100027e0 @ 0x12891037 (5 bytes, 1 insns) */
void f_12891037(void) {
  FTRACE(0x12891037u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891037 jmp 0x128927e0 */
  f_128927e0(); return;
}

/* thunk_FUN_10001a30 @ 0x12891041 (5 bytes, 1 insns) */
void f_12891041(void) {
  FTRACE(0x12891041u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891041 jmp 0x12891a30 */
  f_12891a30(); return;
}

/* thunk_FUN_10002520 @ 0x12891046 (5 bytes, 1 insns) */
void f_12891046(void) {
  FTRACE(0x12891046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891046 jmp 0x12892520 */
  f_12892520(); return;
}

/* thunk_FUN_10002570 @ 0x12891055 (5 bytes, 1 insns) */
void f_12891055(void) {
  FTRACE(0x12891055u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891055 jmp 0x12892570 */
  f_12892570(); return;
}

/* ProcessScenary @ 0x1289105a (5 bytes, 1 insns) */
void f_1289105a(void) {
  FTRACE(0x1289105au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289105a jmp 0x12892450 */
  f_12892450(); return;
}

/* thunk_FUN_100019e0 @ 0x12891064 (5 bytes, 1 insns) */
void f_12891064(void) {
  FTRACE(0x12891064u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891064 jmp 0x128919e0 */
  f_128919e0(); return;
}

/* thunk_FUN_100012c0 @ 0x128910a5 (5 bytes, 1 insns) */
void f_128910a5(void) {
  FTRACE(0x128910a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128910a5 jmp 0x128912c0 */
  f_128912c0(); return;
}

/* thunk_FUN_100025d0 @ 0x128910aa (5 bytes, 1 insns) */
void f_128910aa(void) {
  FTRACE(0x128910aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128910aa jmp 0x128925d0 */
  f_128925d0(); return;
}

/* thunk_FUN_10002770 @ 0x128910b4 (5 bytes, 1 insns) */
void f_128910b4(void) {
  FTRACE(0x128910b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128910b4 jmp 0x12892770 */
  f_12892770(); return;
}

/* thunk_FUN_10002400 @ 0x128910b9 (5 bytes, 1 insns) */
void f_128910b9(void) {
  FTRACE(0x128910b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128910b9 jmp 0x12892400 */
  f_12892400(); return;
}

/* thunk_FUN_10002320 @ 0x128910be (5 bytes, 1 insns) */
void f_128910be(void) {
  FTRACE(0x128910beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128910be jmp 0x12892320 */
  f_12892320(); return;
}

/* thunk_FUN_10002830 @ 0x128910c3 (5 bytes, 1 insns) */
void f_128910c3(void) {
  FTRACE(0x128910c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128910c3 jmp 0x12892830 */
  f_12892830(); return;
}

/* thunk_FUN_10002370 @ 0x128910c8 (5 bytes, 1 insns) */
void f_128910c8(void) {
  FTRACE(0x128910c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128910c8 jmp 0x12892370 */
  f_12892370(); return;
}

/* FUN_10001170 @ 0x12891170 (76 bytes, 30 insns) */
void f_12891170(void) {
  FTRACE(0x12891170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891170 push ebp */
  push32((uint32_t)(EBP));
  /* 12891171 mov ebp, esp */
  EBP = (ESP);
  /* 12891173 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891176 push ebx */
  push32((uint32_t)(EBX));
  /* 12891177 push esi */
  push32((uint32_t)(ESI));
  /* 12891178 push edi */
  push32((uint32_t)(EDI));
  /* 12891179 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289117c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891181 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891186 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891188 cmp dword ptr [0x128bf484], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf484))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289118f je 0x128911ab */
  if (C.zf) goto L_128911ab;
  /* 12891191 mov esi, esp */
  ESI = (ESP);
  /* 12891193 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12891196 push eax */
  push32((uint32_t)(EAX));
  /* 12891197 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289119a push ecx */
  push32((uint32_t)(ECX));
  /* 1289119b call dword ptr [0x128bf484] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf484))), 0x128911a1u);
  /* 128911a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128911a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128911a6 call 0x12892930 */
  push32(0x128911abu); f_12892930();
L_128911ab:;
  /* 128911ab pop edi */
  EDI = (pop32());
  /* 128911ac pop esi */
  ESI = (pop32());
  /* 128911ad pop ebx */
  EBX = (pop32());
  /* 128911ae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128911b1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128911b3 call 0x12892930 */
  push32(0x128911b8u); f_12892930();
  /* 128911b8 mov esp, ebp */
  ESP = (EBP);
  /* 128911ba pop ebp */
  EBP = (pop32());
  /* 128911bb ret  */
  ESPCHK(0x12891170u, _esp0);
  ESP += 4; return;
}

/* FUN_100011d0 @ 0x128911d0 (63 bytes, 26 insns) */
void f_128911d0(void) {
  FTRACE(0x128911d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128911d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128911d1 mov ebp, esp */
  EBP = (ESP);
  /* 128911d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128911d6 push ebx */
  push32((uint32_t)(EBX));
  /* 128911d7 push esi */
  push32((uint32_t)(ESI));
  /* 128911d8 push edi */
  push32((uint32_t)(EDI));
  /* 128911d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128911dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128911e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128911e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128911e8 mov esi, esp */
  ESI = (ESP);
  /* 128911ea mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 128911ed push eax */
  push32((uint32_t)(EAX));
  /* 128911ee call dword ptr [0x128bf4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf4b0))), 0x128911f4u);
  /* 128911f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128911f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128911f9 call 0x12892930 */
  push32(0x128911feu); f_12892930();
  /* 128911fe pop edi */
  EDI = (pop32());
  /* 128911ff pop esi */
  ESI = (pop32());
  /* 12891200 pop ebx */
  EBX = (pop32());
  /* 12891201 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891204 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891206 call 0x12892930 */
  push32(0x1289120bu); f_12892930();
  /* 1289120b mov esp, ebp */
  ESP = (EBP);
  /* 1289120d pop ebp */
  EBP = (pop32());
  /* 1289120e ret  */
  ESPCHK(0x128911d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001220 @ 0x12891220 (63 bytes, 26 insns) */
void f_12891220(void) {
  FTRACE(0x12891220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891220 push ebp */
  push32((uint32_t)(EBP));
  /* 12891221 mov ebp, esp */
  EBP = (ESP);
  /* 12891223 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891226 push ebx */
  push32((uint32_t)(EBX));
  /* 12891227 push esi */
  push32((uint32_t)(ESI));
  /* 12891228 push edi */
  push32((uint32_t)(EDI));
  /* 12891229 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289122c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891231 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891236 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891238 mov esi, esp */
  ESI = (ESP);
  /* 1289123a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1289123d push eax */
  push32((uint32_t)(EAX));
  /* 1289123e call dword ptr [0x128bf4cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf4cc))), 0x12891244u);
  /* 12891244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891247 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891249 call 0x12892930 */
  push32(0x1289124eu); f_12892930();
  /* 1289124e pop edi */
  EDI = (pop32());
  /* 1289124f pop esi */
  ESI = (pop32());
  /* 12891250 pop ebx */
  EBX = (pop32());
  /* 12891251 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891254 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891256 call 0x12892930 */
  push32(0x1289125bu); f_12892930();
  /* 1289125b mov esp, ebp */
  ESP = (EBP);
  /* 1289125d pop ebp */
  EBP = (pop32());
  /* 1289125e ret  */
  ESPCHK(0x12891220u, _esp0);
  ESP += 4; return;
}

/* FUN_10001270 @ 0x12891270 (63 bytes, 26 insns) */
void f_12891270(void) {
  FTRACE(0x12891270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891270 push ebp */
  push32((uint32_t)(EBP));
  /* 12891271 mov ebp, esp */
  EBP = (ESP);
  /* 12891273 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891276 push ebx */
  push32((uint32_t)(EBX));
  /* 12891277 push esi */
  push32((uint32_t)(ESI));
  /* 12891278 push edi */
  push32((uint32_t)(EDI));
  /* 12891279 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289127c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891281 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891286 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891288 mov esi, esp */
  ESI = (ESP);
  /* 1289128a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1289128d push eax */
  push32((uint32_t)(EAX));
  /* 1289128e call dword ptr [0x128bf4d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf4d0))), 0x12891294u);
  /* 12891294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891297 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891299 call 0x12892930 */
  push32(0x1289129eu); f_12892930();
  /* 1289129e pop edi */
  EDI = (pop32());
  /* 1289129f pop esi */
  ESI = (pop32());
  /* 128912a0 pop ebx */
  EBX = (pop32());
  /* 128912a1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128912a4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128912a6 call 0x12892930 */
  push32(0x128912abu); f_12892930();
  /* 128912ab mov esp, ebp */
  ESP = (EBP);
  /* 128912ad pop ebp */
  EBP = (pop32());
  /* 128912ae ret  */
  ESPCHK(0x12891270u, _esp0);
  ESP += 4; return;
}

/* FUN_100012c0 @ 0x128912c0 (53 bytes, 23 insns) */
void f_128912c0(void) {
  FTRACE(0x128912c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128912c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128912c1 mov ebp, esp */
  EBP = (ESP);
  /* 128912c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128912c6 push ebx */
  push32((uint32_t)(EBX));
  /* 128912c7 push esi */
  push32((uint32_t)(ESI));
  /* 128912c8 push edi */
  push32((uint32_t)(EDI));
  /* 128912c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128912cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128912d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128912d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128912d8 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 128912db push eax */
  push32((uint32_t)(EAX));
  /* 128912dc call 0x128910a5 */
  push32(0x128912e1u); f_128910a5();
  /* 128912e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128912e4 pop edi */
  EDI = (pop32());
  /* 128912e5 pop esi */
  ESI = (pop32());
  /* 128912e6 pop ebx */
  EBX = (pop32());
  /* 128912e7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128912ea cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128912ec call 0x12892930 */
  push32(0x128912f1u); f_12892930();
  /* 128912f1 mov esp, ebp */
  ESP = (EBP);
  /* 128912f3 pop ebp */
  EBP = (pop32());
  /* 128912f4 ret  */
  ESPCHK(0x128912c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001310 @ 0x12891310 (63 bytes, 26 insns) */
void f_12891310(void) {
  FTRACE(0x12891310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891310 push ebp */
  push32((uint32_t)(EBP));
  /* 12891311 mov ebp, esp */
  EBP = (ESP);
  /* 12891313 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891316 push ebx */
  push32((uint32_t)(EBX));
  /* 12891317 push esi */
  push32((uint32_t)(ESI));
  /* 12891318 push edi */
  push32((uint32_t)(EDI));
  /* 12891319 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289131c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891321 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891326 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891328 mov esi, esp */
  ESI = (ESP);
  /* 1289132a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1289132d push eax */
  push32((uint32_t)(EAX));
  /* 1289132e call dword ptr [0x128bf4d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf4d8))), 0x12891334u);
  /* 12891334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891337 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891339 call 0x12892930 */
  push32(0x1289133eu); f_12892930();
  /* 1289133e pop edi */
  EDI = (pop32());
  /* 1289133f pop esi */
  ESI = (pop32());
  /* 12891340 pop ebx */
  EBX = (pop32());
  /* 12891341 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891344 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891346 call 0x12892930 */
  push32(0x1289134bu); f_12892930();
  /* 1289134b mov esp, ebp */
  ESP = (EBP);
  /* 1289134d pop ebp */
  EBP = (pop32());
  /* 1289134e ret  */
  ESPCHK(0x12891310u, _esp0);
  ESP += 4; return;
}

/* FUN_10001360 @ 0x12891360 (63 bytes, 26 insns) */
void f_12891360(void) {
  FTRACE(0x12891360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891360 push ebp */
  push32((uint32_t)(EBP));
  /* 12891361 mov ebp, esp */
  EBP = (ESP);
  /* 12891363 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891366 push ebx */
  push32((uint32_t)(EBX));
  /* 12891367 push esi */
  push32((uint32_t)(ESI));
  /* 12891368 push edi */
  push32((uint32_t)(EDI));
  /* 12891369 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289136c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891371 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891376 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891378 mov esi, esp */
  ESI = (ESP);
  /* 1289137a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1289137d push eax */
  push32((uint32_t)(EAX));
  /* 1289137e call dword ptr [0x128bf4dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf4dc))), 0x12891384u);
  /* 12891384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891387 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891389 call 0x12892930 */
  push32(0x1289138eu); f_12892930();
  /* 1289138e pop edi */
  EDI = (pop32());
  /* 1289138f pop esi */
  ESI = (pop32());
  /* 12891390 pop ebx */
  EBX = (pop32());
  /* 12891391 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891394 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891396 call 0x12892930 */
  push32(0x1289139bu); f_12892930();
  /* 1289139b mov esp, ebp */
  ESP = (EBP);
  /* 1289139d pop ebp */
  EBP = (pop32());
  /* 1289139e ret  */
  ESPCHK(0x12891360u, _esp0);
  ESP += 4; return;
}

/* FUN_100013b0 @ 0x128913b0 (63 bytes, 26 insns) */
void f_128913b0(void) {
  FTRACE(0x128913b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128913b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128913b1 mov ebp, esp */
  EBP = (ESP);
  /* 128913b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128913b6 push ebx */
  push32((uint32_t)(EBX));
  /* 128913b7 push esi */
  push32((uint32_t)(ESI));
  /* 128913b8 push edi */
  push32((uint32_t)(EDI));
  /* 128913b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128913bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128913c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128913c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128913c8 mov esi, esp */
  ESI = (ESP);
  /* 128913ca mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 128913cd push eax */
  push32((uint32_t)(EAX));
  /* 128913ce call dword ptr [0x128bf4e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf4e0))), 0x128913d4u);
  /* 128913d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128913d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128913d9 call 0x12892930 */
  push32(0x128913deu); f_12892930();
  /* 128913de pop edi */
  EDI = (pop32());
  /* 128913df pop esi */
  ESI = (pop32());
  /* 128913e0 pop ebx */
  EBX = (pop32());
  /* 128913e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128913e4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128913e6 call 0x12892930 */
  push32(0x128913ebu); f_12892930();
  /* 128913eb mov esp, ebp */
  ESP = (EBP);
  /* 128913ed pop ebp */
  EBP = (pop32());
  /* 128913ee ret  */
  ESPCHK(0x128913b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001400 @ 0x12891400 (71 bytes, 30 insns) */
void f_12891400(void) {
  FTRACE(0x12891400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891400 push ebp */
  push32((uint32_t)(EBP));
  /* 12891401 mov ebp, esp */
  EBP = (ESP);
  /* 12891403 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891406 push ebx */
  push32((uint32_t)(EBX));
  /* 12891407 push esi */
  push32((uint32_t)(ESI));
  /* 12891408 push edi */
  push32((uint32_t)(EDI));
  /* 12891409 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289140c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891411 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891416 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891418 mov esi, esp */
  ESI = (ESP);
  /* 1289141a mov al, byte ptr [ebp + 0x10] */
  AL = (r8((uint32_t)(EBP + 0x10)));
  /* 1289141d push eax */
  push32((uint32_t)(EAX));
  /* 1289141e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12891421 push ecx */
  push32((uint32_t)(ECX));
  /* 12891422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12891425 push edx */
  push32((uint32_t)(EDX));
  /* 12891426 call dword ptr [0x128bf4e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf4e4))), 0x1289142cu);
  /* 1289142c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289142f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891431 call 0x12892930 */
  push32(0x12891436u); f_12892930();
  /* 12891436 pop edi */
  EDI = (pop32());
  /* 12891437 pop esi */
  ESI = (pop32());
  /* 12891438 pop ebx */
  EBX = (pop32());
  /* 12891439 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289143c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289143e call 0x12892930 */
  push32(0x12891443u); f_12892930();
  /* 12891443 mov esp, ebp */
  ESP = (EBP);
  /* 12891445 pop ebp */
  EBP = (pop32());
  /* 12891446 ret  */
  ESPCHK(0x12891400u, _esp0);
  ESP += 4; return;
}

/* FUN_10001460 @ 0x12891460 (71 bytes, 30 insns) */
void f_12891460(void) {
  FTRACE(0x12891460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891460 push ebp */
  push32((uint32_t)(EBP));
  /* 12891461 mov ebp, esp */
  EBP = (ESP);
  /* 12891463 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891466 push ebx */
  push32((uint32_t)(EBX));
  /* 12891467 push esi */
  push32((uint32_t)(ESI));
  /* 12891468 push edi */
  push32((uint32_t)(EDI));
  /* 12891469 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289146c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891471 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891476 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891478 mov esi, esp */
  ESI = (ESP);
  /* 1289147a mov al, byte ptr [ebp + 0x10] */
  AL = (r8((uint32_t)(EBP + 0x10)));
  /* 1289147d push eax */
  push32((uint32_t)(EAX));
  /* 1289147e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12891481 push ecx */
  push32((uint32_t)(ECX));
  /* 12891482 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12891485 push edx */
  push32((uint32_t)(EDX));
  /* 12891486 call dword ptr [0x128bf4e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf4e8))), 0x1289148cu);
  /* 1289148c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289148f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891491 call 0x12892930 */
  push32(0x12891496u); f_12892930();
  /* 12891496 pop edi */
  EDI = (pop32());
  /* 12891497 pop esi */
  ESI = (pop32());
  /* 12891498 pop ebx */
  EBX = (pop32());
  /* 12891499 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289149c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289149e call 0x12892930 */
  push32(0x128914a3u); f_12892930();
  /* 128914a3 mov esp, ebp */
  ESP = (EBP);
  /* 128914a5 pop ebp */
  EBP = (pop32());
  /* 128914a6 ret  */
  ESPCHK(0x12891460u, _esp0);
  ESP += 4; return;
}

/* FUN_100014c0 @ 0x128914c0 (76 bytes, 30 insns) */
void f_128914c0(void) {
  FTRACE(0x128914c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128914c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128914c1 mov ebp, esp */
  EBP = (ESP);
  /* 128914c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128914c6 push ebx */
  push32((uint32_t)(EBX));
  /* 128914c7 push esi */
  push32((uint32_t)(ESI));
  /* 128914c8 push edi */
  push32((uint32_t)(EDI));
  /* 128914c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128914cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128914d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128914d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128914d8 cmp dword ptr [0x128bf500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128914df je 0x128914fb */
  if (C.zf) goto L_128914fb;
  /* 128914e1 mov esi, esp */
  ESI = (ESP);
  /* 128914e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128914e6 push eax */
  push32((uint32_t)(EAX));
  /* 128914e7 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 128914ea push ecx */
  push32((uint32_t)(ECX));
  /* 128914eb call dword ptr [0x128bf500] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf500))), 0x128914f1u);
  /* 128914f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128914f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128914f6 call 0x12892930 */
  push32(0x128914fbu); f_12892930();
L_128914fb:;
  /* 128914fb pop edi */
  EDI = (pop32());
  /* 128914fc pop esi */
  ESI = (pop32());
  /* 128914fd pop ebx */
  EBX = (pop32());
  /* 128914fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891501 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891503 call 0x12892930 */
  push32(0x12891508u); f_12892930();
  /* 12891508 mov esp, ebp */
  ESP = (EBP);
  /* 1289150a pop ebp */
  EBP = (pop32());
  /* 1289150b ret  */
  ESPCHK(0x128914c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001520 @ 0x12891520 (72 bytes, 28 insns) */
void f_12891520(void) {
  FTRACE(0x12891520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891520 push ebp */
  push32((uint32_t)(EBP));
  /* 12891521 mov ebp, esp */
  EBP = (ESP);
  /* 12891523 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891526 push ebx */
  push32((uint32_t)(EBX));
  /* 12891527 push esi */
  push32((uint32_t)(ESI));
  /* 12891528 push edi */
  push32((uint32_t)(EDI));
  /* 12891529 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289152c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891531 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891536 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891538 cmp dword ptr [0x128bf518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289153f je 0x12891557 */
  if (C.zf) goto L_12891557;
  /* 12891541 mov esi, esp */
  ESI = (ESP);
  /* 12891543 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12891546 push eax */
  push32((uint32_t)(EAX));
  /* 12891547 call dword ptr [0x128bf518] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf518))), 0x1289154du);
  /* 1289154d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891550 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891552 call 0x12892930 */
  push32(0x12891557u); f_12892930();
L_12891557:;
  /* 12891557 pop edi */
  EDI = (pop32());
  /* 12891558 pop esi */
  ESI = (pop32());
  /* 12891559 pop ebx */
  EBX = (pop32());
  /* 1289155a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289155d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289155f call 0x12892930 */
  push32(0x12891564u); f_12892930();
  /* 12891564 mov esp, ebp */
  ESP = (EBP);
  /* 12891566 pop ebp */
  EBP = (pop32());
  /* 12891567 ret  */
  ESPCHK(0x12891520u, _esp0);
  ESP += 4; return;
}

/* FUN_10001580 @ 0x12891580 (67 bytes, 28 insns) */
void f_12891580(void) {
  FTRACE(0x12891580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891580 push ebp */
  push32((uint32_t)(EBP));
  /* 12891581 mov ebp, esp */
  EBP = (ESP);
  /* 12891583 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891586 push ebx */
  push32((uint32_t)(EBX));
  /* 12891587 push esi */
  push32((uint32_t)(ESI));
  /* 12891588 push edi */
  push32((uint32_t)(EDI));
  /* 12891589 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289158c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891591 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891596 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891598 mov esi, esp */
  ESI = (ESP);
  /* 1289159a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289159d push eax */
  push32((uint32_t)(EAX));
  /* 1289159e mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 128915a1 push ecx */
  push32((uint32_t)(ECX));
  /* 128915a2 call dword ptr [0x128bf3f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf3f0))), 0x128915a8u);
  /* 128915a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128915ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128915ad call 0x12892930 */
  push32(0x128915b2u); f_12892930();
  /* 128915b2 pop edi */
  EDI = (pop32());
  /* 128915b3 pop esi */
  ESI = (pop32());
  /* 128915b4 pop ebx */
  EBX = (pop32());
  /* 128915b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128915b8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128915ba call 0x12892930 */
  push32(0x128915bfu); f_12892930();
  /* 128915bf mov esp, ebp */
  ESP = (EBP);
  /* 128915c1 pop ebp */
  EBP = (pop32());
  /* 128915c2 ret  */
  ESPCHK(0x12891580u, _esp0);
  ESP += 4; return;
}

/* FUN_100015e0 @ 0x128915e0 (63 bytes, 26 insns) */
void f_128915e0(void) {
  FTRACE(0x128915e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128915e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128915e1 mov ebp, esp */
  EBP = (ESP);
  /* 128915e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128915e6 push ebx */
  push32((uint32_t)(EBX));
  /* 128915e7 push esi */
  push32((uint32_t)(ESI));
  /* 128915e8 push edi */
  push32((uint32_t)(EDI));
  /* 128915e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128915ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128915f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128915f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128915f8 mov esi, esp */
  ESI = (ESP);
  /* 128915fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128915fd push eax */
  push32((uint32_t)(EAX));
  /* 128915fe call dword ptr [0x128bf57c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf57c))), 0x12891604u);
  /* 12891604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891607 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891609 call 0x12892930 */
  push32(0x1289160eu); f_12892930();
  /* 1289160e pop edi */
  EDI = (pop32());
  /* 1289160f pop esi */
  ESI = (pop32());
  /* 12891610 pop ebx */
  EBX = (pop32());
  /* 12891611 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891614 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891616 call 0x12892930 */
  push32(0x1289161bu); f_12892930();
  /* 1289161b mov esp, ebp */
  ESP = (EBP);
  /* 1289161d pop ebp */
  EBP = (pop32());
  /* 1289161e ret  */
  ESPCHK(0x128915e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001630 @ 0x12891630 (72 bytes, 28 insns) */
void f_12891630(void) {
  FTRACE(0x12891630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891630 push ebp */
  push32((uint32_t)(EBP));
  /* 12891631 mov ebp, esp */
  EBP = (ESP);
  /* 12891633 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891636 push ebx */
  push32((uint32_t)(EBX));
  /* 12891637 push esi */
  push32((uint32_t)(ESI));
  /* 12891638 push edi */
  push32((uint32_t)(EDI));
  /* 12891639 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289163c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891641 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891646 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891648 cmp dword ptr [0x128bf590], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf590))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289164f je 0x12891667 */
  if (C.zf) goto L_12891667;
  /* 12891651 mov esi, esp */
  ESI = (ESP);
  /* 12891653 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12891656 push eax */
  push32((uint32_t)(EAX));
  /* 12891657 call dword ptr [0x128bf590] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf590))), 0x1289165du);
  /* 1289165d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891660 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891662 call 0x12892930 */
  push32(0x12891667u); f_12892930();
L_12891667:;
  /* 12891667 pop edi */
  EDI = (pop32());
  /* 12891668 pop esi */
  ESI = (pop32());
  /* 12891669 pop ebx */
  EBX = (pop32());
  /* 1289166a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289166d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289166f call 0x12892930 */
  push32(0x12891674u); f_12892930();
  /* 12891674 mov esp, ebp */
  ESP = (EBP);
  /* 12891676 pop ebp */
  EBP = (pop32());
  /* 12891677 ret  */
  ESPCHK(0x12891630u, _esp0);
  ESP += 4; return;
}

/* FUN_10001690 @ 0x12891690 (67 bytes, 28 insns) */
void f_12891690(void) {
  FTRACE(0x12891690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891690 push ebp */
  push32((uint32_t)(EBP));
  /* 12891691 mov ebp, esp */
  EBP = (ESP);
  /* 12891693 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891696 push ebx */
  push32((uint32_t)(EBX));
  /* 12891697 push esi */
  push32((uint32_t)(ESI));
  /* 12891698 push edi */
  push32((uint32_t)(EDI));
  /* 12891699 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289169c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128916a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128916a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128916a8 mov esi, esp */
  ESI = (ESP);
  /* 128916aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128916ad push eax */
  push32((uint32_t)(EAX));
  /* 128916ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128916b1 push ecx */
  push32((uint32_t)(ECX));
  /* 128916b2 call dword ptr [0x128bf594] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf594))), 0x128916b8u);
  /* 128916b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128916bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128916bd call 0x12892930 */
  push32(0x128916c2u); f_12892930();
  /* 128916c2 pop edi */
  EDI = (pop32());
  /* 128916c3 pop esi */
  ESI = (pop32());
  /* 128916c4 pop ebx */
  EBX = (pop32());
  /* 128916c5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128916c8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128916ca call 0x12892930 */
  push32(0x128916cfu); f_12892930();
  /* 128916cf mov esp, ebp */
  ESP = (EBP);
  /* 128916d1 pop ebp */
  EBP = (pop32());
  /* 128916d2 ret  */
  ESPCHK(0x12891690u, _esp0);
  ESP += 4; return;
}

/* FUN_100016f0 @ 0x128916f0 (71 bytes, 30 insns) */
void f_128916f0(void) {
  FTRACE(0x128916f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128916f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128916f1 mov ebp, esp */
  EBP = (ESP);
  /* 128916f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128916f6 push ebx */
  push32((uint32_t)(EBX));
  /* 128916f7 push esi */
  push32((uint32_t)(ESI));
  /* 128916f8 push edi */
  push32((uint32_t)(EDI));
  /* 128916f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128916fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891701 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891706 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891708 mov esi, esp */
  ESI = (ESP);
  /* 1289170a mov al, byte ptr [ebp + 0x10] */
  AL = (r8((uint32_t)(EBP + 0x10)));
  /* 1289170d push eax */
  push32((uint32_t)(EAX));
  /* 1289170e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12891711 push ecx */
  push32((uint32_t)(ECX));
  /* 12891712 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12891715 push edx */
  push32((uint32_t)(EDX));
  /* 12891716 call dword ptr [0x128bf598] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf598))), 0x1289171cu);
  /* 1289171c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289171f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891721 call 0x12892930 */
  push32(0x12891726u); f_12892930();
  /* 12891726 pop edi */
  EDI = (pop32());
  /* 12891727 pop esi */
  ESI = (pop32());
  /* 12891728 pop ebx */
  EBX = (pop32());
  /* 12891729 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289172c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289172e call 0x12892930 */
  push32(0x12891733u); f_12892930();
  /* 12891733 mov esp, ebp */
  ESP = (EBP);
  /* 12891735 pop ebp */
  EBP = (pop32());
  /* 12891736 ret  */
  ESPCHK(0x128916f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001750 @ 0x12891750 (83 bytes, 36 insns) */
void f_12891750(void) {
  FTRACE(0x12891750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891750 push ebp */
  push32((uint32_t)(EBP));
  /* 12891751 mov ebp, esp */
  EBP = (ESP);
  /* 12891753 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891756 push ebx */
  push32((uint32_t)(EBX));
  /* 12891757 push esi */
  push32((uint32_t)(ESI));
  /* 12891758 push edi */
  push32((uint32_t)(EDI));
  /* 12891759 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289175c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891761 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891766 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891768 mov esi, esp */
  ESI = (ESP);
  /* 1289176a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1289176d push eax */
  push32((uint32_t)(EAX));
  /* 1289176e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12891771 push ecx */
  push32((uint32_t)(ECX));
  /* 12891772 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12891775 push edx */
  push32((uint32_t)(EDX));
  /* 12891776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12891779 push eax */
  push32((uint32_t)(EAX));
  /* 1289177a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289177d push ecx */
  push32((uint32_t)(ECX));
  /* 1289177e mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12891781 push edx */
  push32((uint32_t)(EDX));
  /* 12891782 call dword ptr [0x128bf59c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf59c))), 0x12891788u);
  /* 12891788 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289178b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289178d call 0x12892930 */
  push32(0x12891792u); f_12892930();
  /* 12891792 pop edi */
  EDI = (pop32());
  /* 12891793 pop esi */
  ESI = (pop32());
  /* 12891794 pop ebx */
  EBX = (pop32());
  /* 12891795 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891798 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289179a call 0x12892930 */
  push32(0x1289179fu); f_12892930();
  /* 1289179f mov esp, ebp */
  ESP = (EBP);
  /* 128917a1 pop ebp */
  EBP = (pop32());
  /* 128917a2 ret  */
  ESPCHK(0x12891750u, _esp0);
  ESP += 4; return;
}

/* FUN_100017c0 @ 0x128917c0 (63 bytes, 26 insns) */
void f_128917c0(void) {
  FTRACE(0x128917c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128917c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128917c1 mov ebp, esp */
  EBP = (ESP);
  /* 128917c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128917c6 push ebx */
  push32((uint32_t)(EBX));
  /* 128917c7 push esi */
  push32((uint32_t)(ESI));
  /* 128917c8 push edi */
  push32((uint32_t)(EDI));
  /* 128917c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128917cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128917d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128917d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128917d8 mov esi, esp */
  ESI = (ESP);
  /* 128917da mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 128917dd push eax */
  push32((uint32_t)(EAX));
  /* 128917de call dword ptr [0x128bf5a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf5a0))), 0x128917e4u);
  /* 128917e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128917e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128917e9 call 0x12892930 */
  push32(0x128917eeu); f_12892930();
  /* 128917ee pop edi */
  EDI = (pop32());
  /* 128917ef pop esi */
  ESI = (pop32());
  /* 128917f0 pop ebx */
  EBX = (pop32());
  /* 128917f1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128917f4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128917f6 call 0x12892930 */
  push32(0x128917fbu); f_12892930();
  /* 128917fb mov esp, ebp */
  ESP = (EBP);
  /* 128917fd pop ebp */
  EBP = (pop32());
  /* 128917fe ret  */
  ESPCHK(0x128917c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001810 @ 0x12891810 (71 bytes, 30 insns) */
void f_12891810(void) {
  FTRACE(0x12891810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891810 push ebp */
  push32((uint32_t)(EBP));
  /* 12891811 mov ebp, esp */
  EBP = (ESP);
  /* 12891813 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891816 push ebx */
  push32((uint32_t)(EBX));
  /* 12891817 push esi */
  push32((uint32_t)(ESI));
  /* 12891818 push edi */
  push32((uint32_t)(EDI));
  /* 12891819 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289181c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891821 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891826 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891828 mov esi, esp */
  ESI = (ESP);
  /* 1289182a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289182d push eax */
  push32((uint32_t)(EAX));
  /* 1289182e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12891831 push ecx */
  push32((uint32_t)(ECX));
  /* 12891832 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12891835 push edx */
  push32((uint32_t)(EDX));
  /* 12891836 call dword ptr [0x128bf5a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf5a4))), 0x1289183cu);
  /* 1289183c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289183f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891841 call 0x12892930 */
  push32(0x12891846u); f_12892930();
  /* 12891846 pop edi */
  EDI = (pop32());
  /* 12891847 pop esi */
  ESI = (pop32());
  /* 12891848 pop ebx */
  EBX = (pop32());
  /* 12891849 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289184c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289184e call 0x12892930 */
  push32(0x12891853u); f_12892930();
  /* 12891853 mov esp, ebp */
  ESP = (EBP);
  /* 12891855 pop ebp */
  EBP = (pop32());
  /* 12891856 ret  */
  ESPCHK(0x12891810u, _esp0);
  ESP += 4; return;
}

/* FUN_10001870 @ 0x12891870 (83 bytes, 36 insns) */
void f_12891870(void) {
  FTRACE(0x12891870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891870 push ebp */
  push32((uint32_t)(EBP));
  /* 12891871 mov ebp, esp */
  EBP = (ESP);
  /* 12891873 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891876 push ebx */
  push32((uint32_t)(EBX));
  /* 12891877 push esi */
  push32((uint32_t)(ESI));
  /* 12891878 push edi */
  push32((uint32_t)(EDI));
  /* 12891879 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289187c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891881 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891886 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891888 mov esi, esp */
  ESI = (ESP);
  /* 1289188a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1289188d push eax */
  push32((uint32_t)(EAX));
  /* 1289188e mov cl, byte ptr [ebp + 0x18] */
  CL = (r8((uint32_t)(EBP + 0x18)));
  /* 12891891 push ecx */
  push32((uint32_t)(ECX));
  /* 12891892 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12891895 push edx */
  push32((uint32_t)(EDX));
  /* 12891896 mov al, byte ptr [ebp + 0x10] */
  AL = (r8((uint32_t)(EBP + 0x10)));
  /* 12891899 push eax */
  push32((uint32_t)(EAX));
  /* 1289189a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289189d push ecx */
  push32((uint32_t)(ECX));
  /* 1289189e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128918a1 push edx */
  push32((uint32_t)(EDX));
  /* 128918a2 call dword ptr [0x128bf5a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf5a8))), 0x128918a8u);
  /* 128918a8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128918ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128918ad call 0x12892930 */
  push32(0x128918b2u); f_12892930();
  /* 128918b2 pop edi */
  EDI = (pop32());
  /* 128918b3 pop esi */
  ESI = (pop32());
  /* 128918b4 pop ebx */
  EBX = (pop32());
  /* 128918b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128918b8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128918ba call 0x12892930 */
  push32(0x128918bfu); f_12892930();
  /* 128918bf mov esp, ebp */
  ESP = (EBP);
  /* 128918c1 pop ebp */
  EBP = (pop32());
  /* 128918c2 ret  */
  ESPCHK(0x12891870u, _esp0);
  ESP += 4; return;
}

/* FUN_100018e0 @ 0x128918e0 (63 bytes, 26 insns) */
void f_128918e0(void) {
  FTRACE(0x128918e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128918e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128918e1 mov ebp, esp */
  EBP = (ESP);
  /* 128918e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128918e6 push ebx */
  push32((uint32_t)(EBX));
  /* 128918e7 push esi */
  push32((uint32_t)(ESI));
  /* 128918e8 push edi */
  push32((uint32_t)(EDI));
  /* 128918e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128918ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128918f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128918f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128918f8 mov esi, esp */
  ESI = (ESP);
  /* 128918fa mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 128918fd push eax */
  push32((uint32_t)(EAX));
  /* 128918fe call dword ptr [0x128bf5ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf5ac))), 0x12891904u);
  /* 12891904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891907 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891909 call 0x12892930 */
  push32(0x1289190eu); f_12892930();
  /* 1289190e pop edi */
  EDI = (pop32());
  /* 1289190f pop esi */
  ESI = (pop32());
  /* 12891910 pop ebx */
  EBX = (pop32());
  /* 12891911 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891914 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891916 call 0x12892930 */
  push32(0x1289191bu); f_12892930();
  /* 1289191b mov esp, ebp */
  ESP = (EBP);
  /* 1289191d pop ebp */
  EBP = (pop32());
  /* 1289191e ret  */
  ESPCHK(0x128918e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001930 @ 0x12891930 (56 bytes, 23 insns) */
void f_12891930(void) {
  FTRACE(0x12891930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891930 push ebp */
  push32((uint32_t)(EBP));
  /* 12891931 mov ebp, esp */
  EBP = (ESP);
  /* 12891933 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891936 push ebx */
  push32((uint32_t)(EBX));
  /* 12891937 push esi */
  push32((uint32_t)(ESI));
  /* 12891938 push edi */
  push32((uint32_t)(EDI));
  /* 12891939 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289193c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891941 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891946 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891948 mov esi, esp */
  ESI = (ESP);
  /* 1289194a call dword ptr [0x128bf5b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf5b0))), 0x12891950u);
  /* 12891950 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891952 call 0x12892930 */
  push32(0x12891957u); f_12892930();
  /* 12891957 pop edi */
  EDI = (pop32());
  /* 12891958 pop esi */
  ESI = (pop32());
  /* 12891959 pop ebx */
  EBX = (pop32());
  /* 1289195a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289195d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289195f call 0x12892930 */
  push32(0x12891964u); f_12892930();
  /* 12891964 mov esp, ebp */
  ESP = (EBP);
  /* 12891966 pop ebp */
  EBP = (pop32());
  /* 12891967 ret  */
  ESPCHK(0x12891930u, _esp0);
  ESP += 4; return;
}

/* FUN_10001980 @ 0x12891980 (71 bytes, 30 insns) */
void f_12891980(void) {
  FTRACE(0x12891980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891980 push ebp */
  push32((uint32_t)(EBP));
  /* 12891981 mov ebp, esp */
  EBP = (ESP);
  /* 12891983 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891986 push ebx */
  push32((uint32_t)(EBX));
  /* 12891987 push esi */
  push32((uint32_t)(ESI));
  /* 12891988 push edi */
  push32((uint32_t)(EDI));
  /* 12891989 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289198c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12891991 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891996 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891998 mov esi, esp */
  ESI = (ESP);
  /* 1289199a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289199d push eax */
  push32((uint32_t)(EAX));
  /* 1289199e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128919a1 push ecx */
  push32((uint32_t)(ECX));
  /* 128919a2 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 128919a5 push edx */
  push32((uint32_t)(EDX));
  /* 128919a6 call dword ptr [0x128bf5b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf5b4))), 0x128919acu);
  /* 128919ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128919af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128919b1 call 0x12892930 */
  push32(0x128919b6u); f_12892930();
  /* 128919b6 pop edi */
  EDI = (pop32());
  /* 128919b7 pop esi */
  ESI = (pop32());
  /* 128919b8 pop ebx */
  EBX = (pop32());
  /* 128919b9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128919bc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128919be call 0x12892930 */
  push32(0x128919c3u); f_12892930();
  /* 128919c3 mov esp, ebp */
  ESP = (EBP);
  /* 128919c5 pop ebp */
  EBP = (pop32());
  /* 128919c6 ret  */
  ESPCHK(0x12891980u, _esp0);
  ESP += 4; return;
}

/* FUN_100019e0 @ 0x128919e0 (56 bytes, 23 insns) */
void f_128919e0(void) {
  FTRACE(0x128919e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128919e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128919e1 mov ebp, esp */
  EBP = (ESP);
  /* 128919e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128919e6 push ebx */
  push32((uint32_t)(EBX));
  /* 128919e7 push esi */
  push32((uint32_t)(ESI));
  /* 128919e8 push edi */
  push32((uint32_t)(EDI));
  /* 128919e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128919ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128919f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128919f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128919f8 mov esi, esp */
  ESI = (ESP);
  /* 128919fa call dword ptr [0x128bf5b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf5b8))), 0x12891a00u);
  /* 12891a00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891a02 call 0x12892930 */
  push32(0x12891a07u); f_12892930();
  /* 12891a07 pop edi */
  EDI = (pop32());
  /* 12891a08 pop esi */
  ESI = (pop32());
  /* 12891a09 pop ebx */
  EBX = (pop32());
  /* 12891a0a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891a0d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891a0f call 0x12892930 */
  push32(0x12891a14u); f_12892930();
  /* 12891a14 mov esp, ebp */
  ESP = (EBP);
  /* 12891a16 pop ebp */
  EBP = (pop32());
  /* 12891a17 ret  */
  ESPCHK(0x128919e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a30 @ 0x12891a30 (143 bytes, 47 insns) */
void f_12891a30(void) {
  FTRACE(0x12891a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12891a31 mov ebp, esp */
  EBP = (ESP);
  /* 12891a33 sub esp, 0x144 */
  { uint32_t _a=(ESP),_b=(0x144u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891a39 push ebx */
  push32((uint32_t)(EBX));
  /* 12891a3a push esi */
  push32((uint32_t)(ESI));
  /* 12891a3b push edi */
  push32((uint32_t)(EDI));
  /* 12891a3c lea edi, [ebp - 0x144] */
  EDI = ((uint32_t)(EBP + -0x144));
  /* 12891a42 mov ecx, 0x51 */
  ECX = (0x51u);
  /* 12891a47 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891a4c rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891a4e mov esi, esp */
  ESI = (ESP);
  /* 12891a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12891a53 push eax */
  push32((uint32_t)(EAX));
  /* 12891a54 mov ecx, dword ptr [0x128bf464] */
  ECX = (r32((uint32_t)(0x128bf464)));
  /* 12891a5a push ecx */
  push32((uint32_t)(ECX));
  /* 12891a5b call dword ptr [0x128c2288] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2288))), 0x12891a61u);
  /* 12891a61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891a63 call 0x12892930 */
  push32(0x12891a68u); f_12892930();
  /* 12891a68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12891a6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891a6f jne 0x12891aa8 */
  if (!C.zf) goto L_12891aa8;
  /* 12891a71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12891a74 push edx */
  push32((uint32_t)(EDX));
  /* 12891a75 push 0x128ba030 */
  push32((uint32_t)(0x128ba030u));
  /* 12891a7a lea eax, [ebp - 0x104] */
  EAX = ((uint32_t)(EBP + -0x104));
  /* 12891a80 push eax */
  push32((uint32_t)(EAX));
  /* 12891a81 call 0x12892970 */
  push32(0x12891a86u); f_12892970();
  /* 12891a86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891a89 mov esi, esp */
  ESI = (ESP);
  /* 12891a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12891a8d push 0x128ba01c */
  push32((uint32_t)(0x128ba01cu));
  /* 12891a92 lea ecx, [ebp - 0x104] */
  ECX = ((uint32_t)(EBP + -0x104));
  /* 12891a98 push ecx */
  push32((uint32_t)(ECX));
  /* 12891a99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12891a9b call dword ptr [0x128c237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c237c))), 0x12891aa1u);
  /* 12891aa1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891aa3 call 0x12892930 */
  push32(0x12891aa8u); f_12892930();
L_12891aa8:;
  /* 12891aa8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12891aab pop edi */
  EDI = (pop32());
  /* 12891aac pop esi */
  ESI = (pop32());
  /* 12891aad pop ebx */
  EBX = (pop32());
  /* 12891aae add esp, 0x144 */
  { uint32_t _a=(ESP),_b=(0x144u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891ab4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891ab6 call 0x12892930 */
  push32(0x12891abbu); f_12892930();
  /* 12891abb mov esp, ebp */
  ESP = (EBP);
  /* 12891abd pop ebp */
  EBP = (pop32());
  /* 12891abe ret  */
  ESPCHK(0x12891a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10001af0 @ 0x12891af0 (2087 bytes, 476 insns) */
void f_12891af0(void) {
  FTRACE(0x12891af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12891af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12891af1 mov ebp, esp */
  EBP = (ESP);
  /* 12891af3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12891af6 push ebx */
  push32((uint32_t)(EBX));
  /* 12891af7 push esi */
  push32((uint32_t)(ESI));
  /* 12891af8 push edi */
  push32((uint32_t)(EDI));
  /* 12891af9 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12891afc mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12891b01 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12891b06 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12891b08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12891b0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12891b0e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891b12 je 0x12891b19 */
  if (C.zf) goto L_12891b19;
  /* 12891b14 jmp 0x128922ff */
  goto L_128922ff;
L_12891b19:;
  /* 12891b19 mov esi, esp */
  ESI = (ESP);
  /* 12891b1b push 0x128ba810 */
  push32((uint32_t)(0x128ba810u));
  /* 12891b20 call dword ptr [0x128c21f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c21f8))), 0x12891b26u);
  /* 12891b26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891b28 call 0x12892930 */
  push32(0x12891b2du); f_12892930();
  /* 12891b2d mov dword ptr [0x128bf464], eax */
  w32((uint32_t)(0x128bf464), (EAX));
  /* 12891b32 cmp dword ptr [0x128bf464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891b39 jne 0x12891b62 */
  if (!C.zf) goto L_12891b62;
  /* 12891b3b mov esi, esp */
  ESI = (ESP);
  /* 12891b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12891b3f push 0x128ba808 */
  push32((uint32_t)(0x128ba808u));
  /* 12891b44 push 0x128ba7ec */
  push32((uint32_t)(0x128ba7ecu));
  /* 12891b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12891b4b call dword ptr [0x128c237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c237c))), 0x12891b51u);
  /* 12891b51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12891b53 call 0x12892930 */
  push32(0x12891b58u); f_12892930();
  /* 12891b58 mov eax, 1 */
  EAX = (0x1u);
  /* 12891b5d jmp 0x12892304 */
  goto L_12892304;
L_12891b62:;
  /* 12891b62 push 0x128ba7dc */
  push32((uint32_t)(0x128ba7dcu));
  /* 12891b67 call 0x12891041 */
  push32(0x12891b6cu); f_12891041();
  /* 12891b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891b6f mov dword ptr [0x128bf468], eax */
  w32((uint32_t)(0x128bf468), (EAX));
  /* 12891b74 push 0x128ba7c8 */
  push32((uint32_t)(0x128ba7c8u));
  /* 12891b79 call 0x12891041 */
  push32(0x12891b7eu); f_12891041();
  /* 12891b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891b81 mov dword ptr [0x128bf46c], eax */
  w32((uint32_t)(0x128bf46c), (EAX));
  /* 12891b86 push 0x128ba7b8 */
  push32((uint32_t)(0x128ba7b8u));
  /* 12891b8b call 0x12891041 */
  push32(0x12891b90u); f_12891041();
  /* 12891b90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891b93 mov dword ptr [0x128bf470], eax */
  w32((uint32_t)(0x128bf470), (EAX));
  /* 12891b98 push 0x128ba7a8 */
  push32((uint32_t)(0x128ba7a8u));
  /* 12891b9d call 0x12891041 */
  push32(0x12891ba2u); f_12891041();
  /* 12891ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891ba5 mov dword ptr [0x128bf474], eax */
  w32((uint32_t)(0x128bf474), (EAX));
  /* 12891baa push 0x128ba798 */
  push32((uint32_t)(0x128ba798u));
  /* 12891baf call 0x12891041 */
  push32(0x12891bb4u); f_12891041();
  /* 12891bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891bb7 mov dword ptr [0x128bf478], eax */
  w32((uint32_t)(0x128bf478), (EAX));
  /* 12891bbc push 0x128ba784 */
  push32((uint32_t)(0x128ba784u));
  /* 12891bc1 call 0x12891041 */
  push32(0x12891bc6u); f_12891041();
  /* 12891bc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891bc9 mov dword ptr [0x128bf47c], eax */
  w32((uint32_t)(0x128bf47c), (EAX));
  /* 12891bce push 0x128ba770 */
  push32((uint32_t)(0x128ba770u));
  /* 12891bd3 call 0x12891041 */
  push32(0x12891bd8u); f_12891041();
  /* 12891bd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891bdb mov dword ptr [0x128bf480], eax */
  w32((uint32_t)(0x128bf480), (EAX));
  /* 12891be0 push 0x128ba75c */
  push32((uint32_t)(0x128ba75cu));
  /* 12891be5 call 0x12891041 */
  push32(0x12891beau); f_12891041();
  /* 12891bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891bed mov dword ptr [0x128bf484], eax */
  w32((uint32_t)(0x128bf484), (EAX));
  /* 12891bf2 push 0x128ba744 */
  push32((uint32_t)(0x128ba744u));
  /* 12891bf7 call 0x12891041 */
  push32(0x12891bfcu); f_12891041();
  /* 12891bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891bff mov dword ptr [0x128bf488], eax */
  w32((uint32_t)(0x128bf488), (EAX));
  /* 12891c04 push 0x128ba72c */
  push32((uint32_t)(0x128ba72cu));
  /* 12891c09 call 0x12891041 */
  push32(0x12891c0eu); f_12891041();
  /* 12891c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891c11 mov dword ptr [0x128bf48c], eax */
  w32((uint32_t)(0x128bf48c), (EAX));
  /* 12891c16 push 0x128ba718 */
  push32((uint32_t)(0x128ba718u));
  /* 12891c1b call 0x12891041 */
  push32(0x12891c20u); f_12891041();
  /* 12891c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891c23 mov dword ptr [0x128bf490], eax */
  w32((uint32_t)(0x128bf490), (EAX));
  /* 12891c28 push 0x128ba704 */
  push32((uint32_t)(0x128ba704u));
  /* 12891c2d call 0x12891041 */
  push32(0x12891c32u); f_12891041();
  /* 12891c32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891c35 mov dword ptr [0x128bf494], eax */
  w32((uint32_t)(0x128bf494), (EAX));
  /* 12891c3a push 0x128ba6f0 */
  push32((uint32_t)(0x128ba6f0u));
  /* 12891c3f call 0x12891041 */
  push32(0x12891c44u); f_12891041();
  /* 12891c44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891c47 mov dword ptr [0x128bf498], eax */
  w32((uint32_t)(0x128bf498), (EAX));
  /* 12891c4c push 0x128ba6dc */
  push32((uint32_t)(0x128ba6dcu));
  /* 12891c51 call 0x12891041 */
  push32(0x12891c56u); f_12891041();
  /* 12891c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891c59 mov dword ptr [0x128bf49c], eax */
  w32((uint32_t)(0x128bf49c), (EAX));
  /* 12891c5e push 0x128ba6c8 */
  push32((uint32_t)(0x128ba6c8u));
  /* 12891c63 call 0x12891041 */
  push32(0x12891c68u); f_12891041();
  /* 12891c68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891c6b mov dword ptr [0x128bf4a0], eax */
  w32((uint32_t)(0x128bf4a0), (EAX));
  /* 12891c70 push 0x128ba6b4 */
  push32((uint32_t)(0x128ba6b4u));
  /* 12891c75 call 0x12891041 */
  push32(0x12891c7au); f_12891041();
  /* 12891c7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891c7d mov dword ptr [0x128bf4a4], eax */
  w32((uint32_t)(0x128bf4a4), (EAX));
  /* 12891c82 push 0x128ba6a0 */
  push32((uint32_t)(0x128ba6a0u));
  /* 12891c87 call 0x12891041 */
  push32(0x12891c8cu); f_12891041();
  /* 12891c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891c8f mov dword ptr [0x128bf4a8], eax */
  w32((uint32_t)(0x128bf4a8), (EAX));
  /* 12891c94 push 0x128ba690 */
  push32((uint32_t)(0x128ba690u));
  /* 12891c99 call 0x12891041 */
  push32(0x12891c9eu); f_12891041();
  /* 12891c9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891ca1 mov dword ptr [0x128bf4ac], eax */
  w32((uint32_t)(0x128bf4ac), (EAX));
  /* 12891ca6 push 0x128ba67c */
  push32((uint32_t)(0x128ba67cu));
  /* 12891cab call 0x12891041 */
  push32(0x12891cb0u); f_12891041();
  /* 12891cb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891cb3 mov dword ptr [0x128bf4b4], eax */
  w32((uint32_t)(0x128bf4b4), (EAX));
  /* 12891cb8 push 0x128ba670 */
  push32((uint32_t)(0x128ba670u));
  /* 12891cbd call 0x12891041 */
  push32(0x12891cc2u); f_12891041();
  /* 12891cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891cc5 mov dword ptr [0x128bf4b8], eax */
  w32((uint32_t)(0x128bf4b8), (EAX));
  /* 12891cca push 0x128ba660 */
  push32((uint32_t)(0x128ba660u));
  /* 12891ccf call 0x12891041 */
  push32(0x12891cd4u); f_12891041();
  /* 12891cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891cd7 mov dword ptr [0x128bf4bc], eax */
  w32((uint32_t)(0x128bf4bc), (EAX));
  /* 12891cdc push 0x128ba64c */
  push32((uint32_t)(0x128ba64cu));
  /* 12891ce1 call 0x12891041 */
  push32(0x12891ce6u); f_12891041();
  /* 12891ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891ce9 mov dword ptr [0x128bf4c0], eax */
  w32((uint32_t)(0x128bf4c0), (EAX));
  /* 12891cee push 0x128ba63c */
  push32((uint32_t)(0x128ba63cu));
  /* 12891cf3 call 0x12891041 */
  push32(0x12891cf8u); f_12891041();
  /* 12891cf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891cfb mov dword ptr [0x128bf4c4], eax */
  w32((uint32_t)(0x128bf4c4), (EAX));
  /* 12891d00 push 0x128ba628 */
  push32((uint32_t)(0x128ba628u));
  /* 12891d05 call 0x12891041 */
  push32(0x12891d0au); f_12891041();
  /* 12891d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891d0d mov dword ptr [0x128bf4c8], eax */
  w32((uint32_t)(0x128bf4c8), (EAX));
  /* 12891d12 push 0x128ba620 */
  push32((uint32_t)(0x128ba620u));
  /* 12891d17 call 0x12891041 */
  push32(0x12891d1cu); f_12891041();
  /* 12891d1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891d1f mov dword ptr [0x128bf4ec], eax */
  w32((uint32_t)(0x128bf4ec), (EAX));
  /* 12891d24 push 0x128ba610 */
  push32((uint32_t)(0x128ba610u));
  /* 12891d29 call 0x12891041 */
  push32(0x12891d2eu); f_12891041();
  /* 12891d2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891d31 mov dword ptr [0x128bf4f0], eax */
  w32((uint32_t)(0x128bf4f0), (EAX));
  /* 12891d36 push 0x128ba600 */
  push32((uint32_t)(0x128ba600u));
  /* 12891d3b call 0x12891041 */
  push32(0x12891d40u); f_12891041();
  /* 12891d40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891d43 mov dword ptr [0x128bf4f4], eax */
  w32((uint32_t)(0x128bf4f4), (EAX));
  /* 12891d48 push 0x128ba5f4 */
  push32((uint32_t)(0x128ba5f4u));
  /* 12891d4d call 0x12891041 */
  push32(0x12891d52u); f_12891041();
  /* 12891d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891d55 mov dword ptr [0x128bf4f8], eax */
  w32((uint32_t)(0x128bf4f8), (EAX));
  /* 12891d5a push 0x128ba5e0 */
  push32((uint32_t)(0x128ba5e0u));
  /* 12891d5f call 0x12891041 */
  push32(0x12891d64u); f_12891041();
  /* 12891d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891d67 mov dword ptr [0x128bf4fc], eax */
  w32((uint32_t)(0x128bf4fc), (EAX));
  /* 12891d6c push 0x128ba5d0 */
  push32((uint32_t)(0x128ba5d0u));
  /* 12891d71 call 0x12891041 */
  push32(0x12891d76u); f_12891041();
  /* 12891d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891d79 mov dword ptr [0x128bf518], eax */
  w32((uint32_t)(0x128bf518), (EAX));
  /* 12891d7e push 0x128ba5bc */
  push32((uint32_t)(0x128ba5bcu));
  /* 12891d83 call 0x12891041 */
  push32(0x12891d88u); f_12891041();
  /* 12891d88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891d8b mov dword ptr [0x128bf500], eax */
  w32((uint32_t)(0x128bf500), (EAX));
  /* 12891d90 push 0x128ba5b4 */
  push32((uint32_t)(0x128ba5b4u));
  /* 12891d95 call 0x12891041 */
  push32(0x12891d9au); f_12891041();
  /* 12891d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891d9d mov dword ptr [0x128bf504], eax */
  w32((uint32_t)(0x128bf504), (EAX));
  /* 12891da2 push 0x128ba5a4 */
  push32((uint32_t)(0x128ba5a4u));
  /* 12891da7 call 0x12891041 */
  push32(0x12891dacu); f_12891041();
  /* 12891dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891daf mov dword ptr [0x128bf508], eax */
  w32((uint32_t)(0x128bf508), (EAX));
  /* 12891db4 push 0x128ba590 */
  push32((uint32_t)(0x128ba590u));
  /* 12891db9 call 0x12891041 */
  push32(0x12891dbeu); f_12891041();
  /* 12891dbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891dc1 mov dword ptr [0x128bf50c], eax */
  w32((uint32_t)(0x128bf50c), (EAX));
  /* 12891dc6 push 0x128ba57c */
  push32((uint32_t)(0x128ba57cu));
  /* 12891dcb call 0x12891041 */
  push32(0x12891dd0u); f_12891041();
  /* 12891dd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891dd3 mov dword ptr [0x128bf510], eax */
  w32((uint32_t)(0x128bf510), (EAX));
  /* 12891dd8 push 0x128ba56c */
  push32((uint32_t)(0x128ba56cu));
  /* 12891ddd call 0x12891041 */
  push32(0x12891de2u); f_12891041();
  /* 12891de2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891de5 mov dword ptr [0x128bf514], eax */
  w32((uint32_t)(0x128bf514), (EAX));
  /* 12891dea push 0x128ba564 */
  push32((uint32_t)(0x128ba564u));
  /* 12891def call 0x12891041 */
  push32(0x12891df4u); f_12891041();
  /* 12891df4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891df7 mov dword ptr [0x128bf51c], eax */
  w32((uint32_t)(0x128bf51c), (EAX));
  /* 12891dfc push 0x128ba550 */
  push32((uint32_t)(0x128ba550u));
  /* 12891e01 call 0x12891041 */
  push32(0x12891e06u); f_12891041();
  /* 12891e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891e09 mov dword ptr [0x128bf520], eax */
  w32((uint32_t)(0x128bf520), (EAX));
  /* 12891e0e push 0x128ba540 */
  push32((uint32_t)(0x128ba540u));
  /* 12891e13 call 0x12891041 */
  push32(0x12891e18u); f_12891041();
  /* 12891e18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891e1b mov dword ptr [0x128bf524], eax */
  w32((uint32_t)(0x128bf524), (EAX));
  /* 12891e20 push 0x128ba52c */
  push32((uint32_t)(0x128ba52cu));
  /* 12891e25 call 0x12891041 */
  push32(0x12891e2au); f_12891041();
  /* 12891e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891e2d mov dword ptr [0x128bf528], eax */
  w32((uint32_t)(0x128bf528), (EAX));
  /* 12891e32 push 0x128ba51c */
  push32((uint32_t)(0x128ba51cu));
  /* 12891e37 call 0x12891041 */
  push32(0x12891e3cu); f_12891041();
  /* 12891e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891e3f mov dword ptr [0x128bf52c], eax */
  w32((uint32_t)(0x128bf52c), (EAX));
  /* 12891e44 push 0x128ba50c */
  push32((uint32_t)(0x128ba50cu));
  /* 12891e49 call 0x12891041 */
  push32(0x12891e4eu); f_12891041();
  /* 12891e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891e51 mov dword ptr [0x128bf530], eax */
  w32((uint32_t)(0x128bf530), (EAX));
  /* 12891e56 push 0x128ba500 */
  push32((uint32_t)(0x128ba500u));
  /* 12891e5b call 0x12891041 */
  push32(0x12891e60u); f_12891041();
  /* 12891e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891e63 mov dword ptr [0x128bf534], eax */
  w32((uint32_t)(0x128bf534), (EAX));
  /* 12891e68 push 0x128ba4ec */
  push32((uint32_t)(0x128ba4ecu));
  /* 12891e6d call 0x12891041 */
  push32(0x12891e72u); f_12891041();
  /* 12891e72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891e75 mov dword ptr [0x128bf538], eax */
  w32((uint32_t)(0x128bf538), (EAX));
  /* 12891e7a push 0x128ba4e0 */
  push32((uint32_t)(0x128ba4e0u));
  /* 12891e7f call 0x12891041 */
  push32(0x12891e84u); f_12891041();
  /* 12891e84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891e87 mov dword ptr [0x128bf53c], eax */
  w32((uint32_t)(0x128bf53c), (EAX));
  /* 12891e8c push 0x128ba4d0 */
  push32((uint32_t)(0x128ba4d0u));
  /* 12891e91 call 0x12891041 */
  push32(0x12891e96u); f_12891041();
  /* 12891e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891e99 mov dword ptr [0x128bf540], eax */
  w32((uint32_t)(0x128bf540), (EAX));
  /* 12891e9e push 0x128ba4c0 */
  push32((uint32_t)(0x128ba4c0u));
  /* 12891ea3 call 0x12891041 */
  push32(0x12891ea8u); f_12891041();
  /* 12891ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891eab mov dword ptr [0x128bf460], eax */
  w32((uint32_t)(0x128bf460), (EAX));
  /* 12891eb0 push 0x128ba4b0 */
  push32((uint32_t)(0x128ba4b0u));
  /* 12891eb5 call 0x12891041 */
  push32(0x12891ebau); f_12891041();
  /* 12891eba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891ebd mov dword ptr [0x128bf544], eax */
  w32((uint32_t)(0x128bf544), (EAX));
  /* 12891ec2 push 0x128ba4a0 */
  push32((uint32_t)(0x128ba4a0u));
  /* 12891ec7 call 0x12891041 */
  push32(0x12891eccu); f_12891041();
  /* 12891ecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891ecf mov dword ptr [0x128bf548], eax */
  w32((uint32_t)(0x128bf548), (EAX));
  /* 12891ed4 push 0x128ba490 */
  push32((uint32_t)(0x128ba490u));
  /* 12891ed9 call 0x12891041 */
  push32(0x12891edeu); f_12891041();
  /* 12891ede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891ee1 mov dword ptr [0x128bf54c], eax */
  w32((uint32_t)(0x128bf54c), (EAX));
  /* 12891ee6 push 0x128ba47c */
  push32((uint32_t)(0x128ba47cu));
  /* 12891eeb call 0x12891041 */
  push32(0x12891ef0u); f_12891041();
  /* 12891ef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891ef3 mov dword ptr [0x128bf550], eax */
  w32((uint32_t)(0x128bf550), (EAX));
  /* 12891ef8 push 0x128ba470 */
  push32((uint32_t)(0x128ba470u));
  /* 12891efd call 0x12891041 */
  push32(0x12891f02u); f_12891041();
  /* 12891f02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891f05 mov dword ptr [0x128bf554], eax */
  w32((uint32_t)(0x128bf554), (EAX));
  /* 12891f0a push 0x128ba464 */
  push32((uint32_t)(0x128ba464u));
  /* 12891f0f call 0x12891041 */
  push32(0x12891f14u); f_12891041();
  /* 12891f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891f17 mov dword ptr [0x128bf558], eax */
  w32((uint32_t)(0x128bf558), (EAX));
  /* 12891f1c push 0x128ba450 */
  push32((uint32_t)(0x128ba450u));
  /* 12891f21 call 0x12891041 */
  push32(0x12891f26u); f_12891041();
  /* 12891f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891f29 mov dword ptr [0x128bf55c], eax */
  w32((uint32_t)(0x128bf55c), (EAX));
  /* 12891f2e push 0x128ba440 */
  push32((uint32_t)(0x128ba440u));
  /* 12891f33 call 0x12891041 */
  push32(0x12891f38u); f_12891041();
  /* 12891f38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891f3b mov dword ptr [0x128bf560], eax */
  w32((uint32_t)(0x128bf560), (EAX));
  /* 12891f40 push 0x128ba434 */
  push32((uint32_t)(0x128ba434u));
  /* 12891f45 call 0x12891041 */
  push32(0x12891f4au); f_12891041();
  /* 12891f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891f4d mov dword ptr [0x128bf564], eax */
  w32((uint32_t)(0x128bf564), (EAX));
  /* 12891f52 push 0x128ba428 */
  push32((uint32_t)(0x128ba428u));
  /* 12891f57 call 0x12891041 */
  push32(0x12891f5cu); f_12891041();
  /* 12891f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891f5f mov dword ptr [0x128bf568], eax */
  w32((uint32_t)(0x128bf568), (EAX));
  /* 12891f64 push 0x128ba418 */
  push32((uint32_t)(0x128ba418u));
  /* 12891f69 call 0x12891041 */
  push32(0x12891f6eu); f_12891041();
  /* 12891f6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891f71 mov dword ptr [0x128bf56c], eax */
  w32((uint32_t)(0x128bf56c), (EAX));
  /* 12891f76 push 0x128ba410 */
  push32((uint32_t)(0x128ba410u));
  /* 12891f7b call 0x12891041 */
  push32(0x12891f80u); f_12891041();
  /* 12891f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891f83 mov dword ptr [0x128bf570], eax */
  w32((uint32_t)(0x128bf570), (EAX));
  /* 12891f88 push 0x128ba404 */
  push32((uint32_t)(0x128ba404u));
  /* 12891f8d call 0x12891041 */
  push32(0x12891f92u); f_12891041();
  /* 12891f92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891f95 mov dword ptr [0x128bf574], eax */
  w32((uint32_t)(0x128bf574), (EAX));
  /* 12891f9a push 0x128ba3fc */
  push32((uint32_t)(0x128ba3fcu));
  /* 12891f9f call 0x12891041 */
  push32(0x12891fa4u); f_12891041();
  /* 12891fa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891fa7 mov dword ptr [0x128bf578], eax */
  w32((uint32_t)(0x128bf578), (EAX));
  /* 12891fac push 0x128ba3e4 */
  push32((uint32_t)(0x128ba3e4u));
  /* 12891fb1 call 0x12891041 */
  push32(0x12891fb6u); f_12891041();
  /* 12891fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891fb9 mov dword ptr [0x128bf3f0], eax */
  w32((uint32_t)(0x128bf3f0), (EAX));
  /* 12891fbe push 0x128ba3d8 */
  push32((uint32_t)(0x128ba3d8u));
  /* 12891fc3 call 0x12891041 */
  push32(0x12891fc8u); f_12891041();
  /* 12891fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891fcb mov dword ptr [0x128bf584], eax */
  w32((uint32_t)(0x128bf584), (EAX));
  /* 12891fd0 push 0x128ba3c8 */
  push32((uint32_t)(0x128ba3c8u));
  /* 12891fd5 call 0x12891041 */
  push32(0x12891fdau); f_12891041();
  /* 12891fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891fdd mov dword ptr [0x128bf580], eax */
  w32((uint32_t)(0x128bf580), (EAX));
  /* 12891fe2 push 0x128ba3b0 */
  push32((uint32_t)(0x128ba3b0u));
  /* 12891fe7 call 0x12891041 */
  push32(0x12891fecu); f_12891041();
  /* 12891fec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12891fef mov dword ptr [0x128bf588], eax */
  w32((uint32_t)(0x128bf588), (EAX));
  /* 12891ff4 push 0x128ba3a0 */
  push32((uint32_t)(0x128ba3a0u));
  /* 12891ff9 call 0x12891041 */
  push32(0x12891ffeu); f_12891041();
  /* 12891ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892001 mov dword ptr [0x128bf58c], eax */
  w32((uint32_t)(0x128bf58c), (EAX));
  /* 12892006 push 0x128ba38c */
  push32((uint32_t)(0x128ba38cu));
  /* 1289200b call 0x12891041 */
  push32(0x12892010u); f_12891041();
  /* 12892010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892013 mov dword ptr [0x128bf590], eax */
  w32((uint32_t)(0x128bf590), (EAX));
  /* 12892018 push 0x128ba37c */
  push32((uint32_t)(0x128ba37cu));
  /* 1289201d call 0x12891041 */
  push32(0x12892022u); f_12891041();
  /* 12892022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892025 mov dword ptr [0x128bf4d0], eax */
  w32((uint32_t)(0x128bf4d0), (EAX));
  /* 1289202a push 0x128ba36c */
  push32((uint32_t)(0x128ba36cu));
  /* 1289202f call 0x12891041 */
  push32(0x12892034u); f_12891041();
  /* 12892034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892037 mov dword ptr [0x128bf4cc], eax */
  w32((uint32_t)(0x128bf4cc), (EAX));
  /* 1289203c push 0x128ba35c */
  push32((uint32_t)(0x128ba35cu));
  /* 12892041 call 0x12891041 */
  push32(0x12892046u); f_12891041();
  /* 12892046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892049 mov dword ptr [0x128bf4d4], eax */
  w32((uint32_t)(0x128bf4d4), (EAX));
  /* 1289204e push 0x128ba348 */
  push32((uint32_t)(0x128ba348u));
  /* 12892053 call 0x12891041 */
  push32(0x12892058u); f_12891041();
  /* 12892058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289205b mov dword ptr [0x128bf4e0], eax */
  w32((uint32_t)(0x128bf4e0), (EAX));
  /* 12892060 push 0x128ba32c */
  push32((uint32_t)(0x128ba32cu));
  /* 12892065 call 0x12891041 */
  push32(0x1289206au); f_12891041();
  /* 1289206a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289206d mov dword ptr [0x128bf4dc], eax */
  w32((uint32_t)(0x128bf4dc), (EAX));
  /* 12892072 push 0x128ba314 */
  push32((uint32_t)(0x128ba314u));
  /* 12892077 call 0x12891041 */
  push32(0x1289207cu); f_12891041();
  /* 1289207c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289207f mov dword ptr [0x128bf4d8], eax */
  w32((uint32_t)(0x128bf4d8), (EAX));
  /* 12892084 push 0x128ba2f8 */
  push32((uint32_t)(0x128ba2f8u));
  /* 12892089 call 0x12891041 */
  push32(0x1289208eu); f_12891041();
  /* 1289208e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892091 mov dword ptr [0x128bf4e4], eax */
  w32((uint32_t)(0x128bf4e4), (EAX));
  /* 12892096 push 0x128ba2dc */
  push32((uint32_t)(0x128ba2dcu));
  /* 1289209b call 0x12891041 */
  push32(0x128920a0u); f_12891041();
  /* 128920a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128920a3 mov dword ptr [0x128bf4e8], eax */
  w32((uint32_t)(0x128bf4e8), (EAX));
  /* 128920a8 push 0x128ba2c4 */
  push32((uint32_t)(0x128ba2c4u));
  /* 128920ad call 0x12891041 */
  push32(0x128920b2u); f_12891041();
  /* 128920b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128920b5 mov dword ptr [0x128bf4b0], eax */
  w32((uint32_t)(0x128bf4b0), (EAX));
  /* 128920ba push 0x128ba2ac */
  push32((uint32_t)(0x128ba2acu));
  /* 128920bf call 0x12891041 */
  push32(0x128920c4u); f_12891041();
  /* 128920c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128920c7 mov dword ptr [0x128bf598], eax */
  w32((uint32_t)(0x128bf598), (EAX));
  /* 128920cc push 0x128ba2a0 */
  push32((uint32_t)(0x128ba2a0u));
  /* 128920d1 call 0x12891041 */
  push32(0x128920d6u); f_12891041();
  /* 128920d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128920d9 mov dword ptr [0x128bf594], eax */
  w32((uint32_t)(0x128bf594), (EAX));
  /* 128920de push 0x128ba294 */
  push32((uint32_t)(0x128ba294u));
  /* 128920e3 call 0x12891041 */
  push32(0x128920e8u); f_12891041();
  /* 128920e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128920eb mov dword ptr [0x128bf59c], eax */
  w32((uint32_t)(0x128bf59c), (EAX));
  /* 128920f0 push 0x128ba280 */
  push32((uint32_t)(0x128ba280u));
  /* 128920f5 call 0x12891041 */
  push32(0x128920fau); f_12891041();
  /* 128920fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128920fd mov dword ptr [0x128bf5a0], eax */
  w32((uint32_t)(0x128bf5a0), (EAX));
  /* 12892102 push 0x128ba270 */
  push32((uint32_t)(0x128ba270u));
  /* 12892107 call 0x12891041 */
  push32(0x1289210cu); f_12891041();
  /* 1289210c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289210f mov dword ptr [0x128bf5a4], eax */
  w32((uint32_t)(0x128bf5a4), (EAX));
  /* 12892114 push 0x128ba258 */
  push32((uint32_t)(0x128ba258u));
  /* 12892119 call 0x12891041 */
  push32(0x1289211eu); f_12891041();
  /* 1289211e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892121 mov dword ptr [0x128bf5a8], eax */
  w32((uint32_t)(0x128bf5a8), (EAX));
  /* 12892126 push 0x128ba244 */
  push32((uint32_t)(0x128ba244u));
  /* 1289212b call 0x12891041 */
  push32(0x12892130u); f_12891041();
  /* 12892130 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892133 mov dword ptr [0x128bf5b0], eax */
  w32((uint32_t)(0x128bf5b0), (EAX));
  /* 12892138 push 0x128ba234 */
  push32((uint32_t)(0x128ba234u));
  /* 1289213d call 0x12891041 */
  push32(0x12892142u); f_12891041();
  /* 12892142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892145 mov dword ptr [0x128bf5ac], eax */
  w32((uint32_t)(0x128bf5ac), (EAX));
  /* 1289214a push 0x128ba220 */
  push32((uint32_t)(0x128ba220u));
  /* 1289214f call 0x12891041 */
  push32(0x12892154u); f_12891041();
  /* 12892154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892157 mov dword ptr [0x128bf5b4], eax */
  w32((uint32_t)(0x128bf5b4), (EAX));
  /* 1289215c push 0x128ba210 */
  push32((uint32_t)(0x128ba210u));
  /* 12892161 call 0x12891041 */
  push32(0x12892166u); f_12891041();
  /* 12892166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892169 mov dword ptr [0x128bf5b8], eax */
  w32((uint32_t)(0x128bf5b8), (EAX));
  /* 1289216e push 0x128ba200 */
  push32((uint32_t)(0x128ba200u));
  /* 12892173 call 0x12891041 */
  push32(0x12892178u); f_12891041();
  /* 12892178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289217b mov dword ptr [0x128bf5bc], eax */
  w32((uint32_t)(0x128bf5bc), (EAX));
  /* 12892180 push 0x128ba1f4 */
  push32((uint32_t)(0x128ba1f4u));
  /* 12892185 call 0x12891041 */
  push32(0x1289218au); f_12891041();
  /* 1289218a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289218d mov dword ptr [0x128bf5c0], eax */
  w32((uint32_t)(0x128bf5c0), (EAX));
  /* 12892192 push 0x128ba1e4 */
  push32((uint32_t)(0x128ba1e4u));
  /* 12892197 call 0x12891041 */
  push32(0x1289219cu); f_12891041();
  /* 1289219c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289219f mov dword ptr [0x128bf5c4], eax */
  w32((uint32_t)(0x128bf5c4), (EAX));
  /* 128921a4 push 0x128ba1d0 */
  push32((uint32_t)(0x128ba1d0u));
  /* 128921a9 call 0x12891041 */
  push32(0x128921aeu); f_12891041();
  /* 128921ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128921b1 mov dword ptr [0x128bf5c8], eax */
  w32((uint32_t)(0x128bf5c8), (EAX));
  /* 128921b6 push 0x128ba1bc */
  push32((uint32_t)(0x128ba1bcu));
  /* 128921bb call 0x12891041 */
  push32(0x128921c0u); f_12891041();
  /* 128921c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128921c3 mov dword ptr [0x128bf5cc], eax */
  w32((uint32_t)(0x128bf5cc), (EAX));
  /* 128921c8 push 0x128ba19c */
  push32((uint32_t)(0x128ba19cu));
  /* 128921cd call 0x12891041 */
  push32(0x128921d2u); f_12891041();
  /* 128921d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128921d5 mov dword ptr [0x128bf5d0], eax */
  w32((uint32_t)(0x128bf5d0), (EAX));
  /* 128921da push 0x128ba184 */
  push32((uint32_t)(0x128ba184u));
  /* 128921df call 0x12891041 */
  push32(0x128921e4u); f_12891041();
  /* 128921e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128921e7 mov dword ptr [0x128bf5d4], eax */
  w32((uint32_t)(0x128bf5d4), (EAX));
  /* 128921ec push 0x128ba174 */
  push32((uint32_t)(0x128ba174u));
  /* 128921f1 call 0x12891041 */
  push32(0x128921f6u); f_12891041();
  /* 128921f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128921f9 mov dword ptr [0x128bf600], eax */
  w32((uint32_t)(0x128bf600), (EAX));
  /* 128921fe push 0x128ba164 */
  push32((uint32_t)(0x128ba164u));
  /* 12892203 call 0x12891041 */
  push32(0x12892208u); f_12891041();
  /* 12892208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289220b mov dword ptr [0x128bf604], eax */
  w32((uint32_t)(0x128bf604), (EAX));
  /* 12892210 push 0x128ba154 */
  push32((uint32_t)(0x128ba154u));
  /* 12892215 call 0x12891041 */
  push32(0x1289221au); f_12891041();
  /* 1289221a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289221d mov dword ptr [0x128bf608], eax */
  w32((uint32_t)(0x128bf608), (EAX));
  /* 12892222 push 0x128ba144 */
  push32((uint32_t)(0x128ba144u));
  /* 12892227 call 0x12891041 */
  push32(0x1289222cu); f_12891041();
  /* 1289222c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289222f mov dword ptr [0x128bf60c], eax */
  w32((uint32_t)(0x128bf60c), (EAX));
  /* 12892234 push 0x128ba128 */
  push32((uint32_t)(0x128ba128u));
  /* 12892239 call 0x12891041 */
  push32(0x1289223eu); f_12891041();
  /* 1289223e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892241 mov dword ptr [0x128bf5d8], eax */
  w32((uint32_t)(0x128bf5d8), (EAX));
  /* 12892246 push 0x128ba108 */
  push32((uint32_t)(0x128ba108u));
  /* 1289224b call 0x12891041 */
  push32(0x12892250u); f_12891041();
  /* 12892250 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892253 mov dword ptr [0x128bf5dc], eax */
  w32((uint32_t)(0x128bf5dc), (EAX));
  /* 12892258 push 0x128ba0e8 */
  push32((uint32_t)(0x128ba0e8u));
  /* 1289225d call 0x12891041 */
  push32(0x12892262u); f_12891041();
  /* 12892262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892265 mov dword ptr [0x128bf5e0], eax */
  w32((uint32_t)(0x128bf5e0), (EAX));
  /* 1289226a push 0x128ba0cc */
  push32((uint32_t)(0x128ba0ccu));
  /* 1289226f call 0x12891041 */
  push32(0x12892274u); f_12891041();
  /* 12892274 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892277 mov dword ptr [0x128bf5e4], eax */
  w32((uint32_t)(0x128bf5e4), (EAX));
  /* 1289227c push 0x128ba0b0 */
  push32((uint32_t)(0x128ba0b0u));
  /* 12892281 call 0x12891041 */
  push32(0x12892286u); f_12891041();
  /* 12892286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892289 mov dword ptr [0x128bf5e8], eax */
  w32((uint32_t)(0x128bf5e8), (EAX));
  /* 1289228e push 0x128ba0a4 */
  push32((uint32_t)(0x128ba0a4u));
  /* 12892293 call 0x12891041 */
  push32(0x12892298u); f_12891041();
  /* 12892298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289229b mov dword ptr [0x128bf5ec], eax */
  w32((uint32_t)(0x128bf5ec), (EAX));
  /* 128922a0 push 0x128ba098 */
  push32((uint32_t)(0x128ba098u));
  /* 128922a5 call 0x12891041 */
  push32(0x128922aau); f_12891041();
  /* 128922aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128922ad mov dword ptr [0x128bf5f0], eax */
  w32((uint32_t)(0x128bf5f0), (EAX));
  /* 128922b2 push 0x128ba088 */
  push32((uint32_t)(0x128ba088u));
  /* 128922b7 call 0x12891041 */
  push32(0x128922bcu); f_12891041();
  /* 128922bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128922bf mov dword ptr [0x128bf5f4], eax */
  w32((uint32_t)(0x128bf5f4), (EAX));
  /* 128922c4 push 0x128ba07c */
  push32((uint32_t)(0x128ba07cu));
  /* 128922c9 call 0x12891041 */
  push32(0x128922ceu); f_12891041();
  /* 128922ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128922d1 mov dword ptr [0x128bf5f8], eax */
  w32((uint32_t)(0x128bf5f8), (EAX));
  /* 128922d6 push 0x128ba070 */
  push32((uint32_t)(0x128ba070u));
  /* 128922db call 0x12891041 */
  push32(0x128922e0u); f_12891041();
  /* 128922e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128922e3 mov dword ptr [0x128bf5fc], eax */
  w32((uint32_t)(0x128bf5fc), (EAX));
  /* 128922e8 push 0x128ba060 */
  push32((uint32_t)(0x128ba060u));
  /* 128922ed call 0x12891041 */
  push32(0x128922f2u); f_12891041();
  /* 128922f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128922f5 mov dword ptr [0x128bf57c], eax */
  w32((uint32_t)(0x128bf57c), (EAX));
  /* 128922fa call 0x1289100f */
  push32(0x128922ffu); f_1289100f();
L_128922ff:;
  /* 128922ff mov eax, 1 */
  EAX = (0x1u);
L_12892304:;
  /* 12892304 pop edi */
  EDI = (pop32());
  /* 12892305 pop esi */
  ESI = (pop32());
  /* 12892306 pop ebx */
  EBX = (pop32());
  /* 12892307 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289230a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289230c call 0x12892930 */
  push32(0x12892311u); f_12892930();
  /* 12892311 mov esp, ebp */
  ESP = (EBP);
  /* 12892313 pop ebp */
  EBP = (pop32());
  /* 12892314 ret 0xc */
  ESPCHK(0x12891af0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002320 @ 0x12892320 (76 bytes, 30 insns) */
void f_12892320(void) {
  FTRACE(0x12892320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892320 push ebp */
  push32((uint32_t)(EBP));
  /* 12892321 mov ebp, esp */
  EBP = (ESP);
  /* 12892323 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892326 push ebx */
  push32((uint32_t)(EBX));
  /* 12892327 push esi */
  push32((uint32_t)(ESI));
  /* 12892328 push edi */
  push32((uint32_t)(EDI));
  /* 12892329 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289232c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892331 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892336 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892338 cmp dword ptr [0x128bf538], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf538))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289233f je 0x1289235b */
  if (C.zf) goto L_1289235b;
  /* 12892341 mov esi, esp */
  ESI = (ESP);
  /* 12892343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892346 push eax */
  push32((uint32_t)(EAX));
  /* 12892347 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289234a push ecx */
  push32((uint32_t)(ECX));
  /* 1289234b call dword ptr [0x128bf538] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf538))), 0x12892351u);
  /* 12892351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892356 call 0x12892930 */
  push32(0x1289235bu); f_12892930();
L_1289235b:;
  /* 1289235b pop edi */
  EDI = (pop32());
  /* 1289235c pop esi */
  ESI = (pop32());
  /* 1289235d pop ebx */
  EBX = (pop32());
  /* 1289235e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892361 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892363 call 0x12892930 */
  push32(0x12892368u); f_12892930();
  /* 12892368 mov esp, ebp */
  ESP = (EBP);
  /* 1289236a pop ebp */
  EBP = (pop32());
  /* 1289236b ret  */
  ESPCHK(0x12892320u, _esp0);
  ESP += 4; return;
}

/* FUN_10002370 @ 0x12892370 (76 bytes, 30 insns) */
void f_12892370(void) {
  FTRACE(0x12892370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892370 push ebp */
  push32((uint32_t)(EBP));
  /* 12892371 mov ebp, esp */
  EBP = (ESP);
  /* 12892373 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892376 push ebx */
  push32((uint32_t)(EBX));
  /* 12892377 push esi */
  push32((uint32_t)(ESI));
  /* 12892378 push edi */
  push32((uint32_t)(EDI));
  /* 12892379 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289237c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892381 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892386 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892388 cmp dword ptr [0x128bf570], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf570))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289238f je 0x128923a9 */
  if (C.zf) goto L_128923a9;
  /* 12892391 mov esi, esp */
  ESI = (ESP);
  /* 12892393 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12892396 push eax */
  push32((uint32_t)(EAX));
  /* 12892397 call dword ptr [0x128bf570] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf570))), 0x1289239du);
  /* 1289239d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128923a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128923a2 call 0x12892930 */
  push32(0x128923a7u); f_12892930();
  /* 128923a7 jmp 0x128923ab */
  goto L_128923ab;
L_128923a9:;
  /* 128923a9 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
L_128923ab:;
  /* 128923ab pop edi */
  EDI = (pop32());
  /* 128923ac pop esi */
  ESI = (pop32());
  /* 128923ad pop ebx */
  EBX = (pop32());
  /* 128923ae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128923b1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128923b3 call 0x12892930 */
  push32(0x128923b8u); f_12892930();
  /* 128923b8 mov esp, ebp */
  ESP = (EBP);
  /* 128923ba pop ebp */
  EBP = (pop32());
  /* 128923bb ret  */
  ESPCHK(0x12892370u, _esp0);
  ESP += 4; return;
}

/* FUN_10002400 @ 0x12892400 (69 bytes, 27 insns) */
void f_12892400(void) {
  FTRACE(0x12892400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892400 push ebp */
  push32((uint32_t)(EBP));
  /* 12892401 mov ebp, esp */
  EBP = (ESP);
  /* 12892403 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892406 push ebx */
  push32((uint32_t)(EBX));
  /* 12892407 push esi */
  push32((uint32_t)(ESI));
  /* 12892408 push edi */
  push32((uint32_t)(EDI));
  /* 12892409 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289240c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892411 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892416 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892418 cmp dword ptr [0x128bf56c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf56c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289241f je 0x12892432 */
  if (C.zf) goto L_12892432;
  /* 12892421 mov esi, esp */
  ESI = (ESP);
  /* 12892423 call dword ptr [0x128bf56c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf56c))), 0x12892429u);
  /* 12892429 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289242b call 0x12892930 */
  push32(0x12892430u); f_12892930();
  /* 12892430 jmp 0x12892434 */
  goto L_12892434;
L_12892432:;
  /* 12892432 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12892434:;
  /* 12892434 pop edi */
  EDI = (pop32());
  /* 12892435 pop esi */
  ESI = (pop32());
  /* 12892436 pop ebx */
  EBX = (pop32());
  /* 12892437 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289243a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289243c call 0x12892930 */
  push32(0x12892441u); f_12892930();
  /* 12892441 mov esp, ebp */
  ESP = (EBP);
  /* 12892443 pop ebp */
  EBP = (pop32());
  /* 12892444 ret  */
  ESPCHK(0x12892400u, _esp0);
  ESP += 4; return;
}

/* FUN_10002450 @ 0x12892450 (160 bytes, 52 insns) */
void f_12892450(void) {
  FTRACE(0x12892450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892450 push ebp */
  push32((uint32_t)(EBP));
  /* 12892451 mov ebp, esp */
  EBP = (ESP);
  /* 12892453 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892456 push ebx */
  push32((uint32_t)(EBX));
  /* 12892457 push esi */
  push32((uint32_t)(ESI));
  /* 12892458 push edi */
  push32((uint32_t)(EDI));
  /* 12892459 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289245c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892461 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892466 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892468 push 0xa */
  push32((uint32_t)(0xau));
  /* 1289246a call 0x128910c8 */
  push32(0x1289246fu); f_128910c8();
  /* 1289246f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892472 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12892477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12892479 je 0x128924a2 */
  if (C.zf) goto L_128924a2;
  /* 1289247b call 0x128910b9 */
  push32(0x12892480u); f_128910b9();
  /* 12892480 cmp eax, 0x9470 */
  { uint32_t _a=(EAX),_b=(0x9470u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892485 jle 0x128924a2 */
  if ((C.zf||C.sf!=C.of)) goto L_128924a2;
  /* 12892487 push 0 */
  push32((uint32_t)(0x0u));
  /* 12892489 push 0xa */
  push32((uint32_t)(0xau));
  /* 1289248b call 0x128910c3 */
  push32(0x12892490u); f_128910c3();
  /* 12892490 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892493 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12892495 push 0x128ba058 */
  push32((uint32_t)(0x128ba058u));
  /* 1289249a call 0x128910be */
  push32(0x1289249fu); f_128910be();
  /* 1289249f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128924a2:;
  /* 128924a2 call 0x128910b9 */
  push32(0x128924a7u); f_128910b9();
  /* 128924a7 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128924ac jle 0x128924b3 */
  if ((C.zf||C.sf!=C.of)) goto L_128924b3;
  /* 128924ae call 0x1289101e */
  push32(0x128924b3u); f_1289101e();
L_128924b3:;
  /* 128924b3 push 0x128bf420 */
  push32((uint32_t)(0x128bf420u));
  /* 128924b8 call 0x12891005 */
  push32(0x128924bdu); f_12891005();
  /* 128924bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128924c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128924c2 jne 0x128924c9 */
  if (!C.zf) goto L_128924c9;
  /* 128924c4 call 0x1289101e */
  push32(0x128924c9u); f_1289101e();
L_128924c9:;
  /* 128924c9 push 0x128bf428 */
  push32((uint32_t)(0x128bf428u));
  /* 128924ce call 0x12891005 */
  push32(0x128924d3u); f_12891005();
  /* 128924d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128924d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128924d8 jne 0x128924df */
  if (!C.zf) goto L_128924df;
  /* 128924da call 0x12891046 */
  push32(0x128924dfu); f_12891046();
L_128924df:;
  /* 128924df pop edi */
  EDI = (pop32());
  /* 128924e0 pop esi */
  ESI = (pop32());
  /* 128924e1 pop ebx */
  EBX = (pop32());
  /* 128924e2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128924e5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128924e7 call 0x12892930 */
  push32(0x128924ecu); f_12892930();
  /* 128924ec mov esp, ebp */
  ESP = (EBP);
  /* 128924ee pop ebp */
  EBP = (pop32());
  /* 128924ef ret  */
  ESPCHK(0x12892450u, _esp0);
  ESP += 4; return;
}

/* FUN_10002520 @ 0x12892520 (62 bytes, 25 insns) */
void f_12892520(void) {
  FTRACE(0x12892520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892520 push ebp */
  push32((uint32_t)(EBP));
  /* 12892521 mov ebp, esp */
  EBP = (ESP);
  /* 12892523 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892526 push ebx */
  push32((uint32_t)(EBX));
  /* 12892527 push esi */
  push32((uint32_t)(ESI));
  /* 12892528 push edi */
  push32((uint32_t)(EDI));
  /* 12892529 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289252c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892531 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892536 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892538 call 0x12891064 */
  push32(0x1289253du); f_12891064();
  /* 1289253d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289253f jne 0x12892548 */
  if (!C.zf) goto L_12892548;
  /* 12892541 call 0x12891055 */
  push32(0x12892546u); f_12891055();
  /* 12892546 jmp 0x1289254d */
  goto L_1289254d;
L_12892548:;
  /* 12892548 call 0x128910aa */
  push32(0x1289254du); f_128910aa();
L_1289254d:;
  /* 1289254d pop edi */
  EDI = (pop32());
  /* 1289254e pop esi */
  ESI = (pop32());
  /* 1289254f pop ebx */
  EBX = (pop32());
  /* 12892550 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892553 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892555 call 0x12892930 */
  push32(0x1289255au); f_12892930();
  /* 1289255a mov esp, ebp */
  ESP = (EBP);
  /* 1289255c pop ebp */
  EBP = (pop32());
  /* 1289255d ret  */
  ESPCHK(0x12892520u, _esp0);
  ESP += 4; return;
}

/* FUN_10002570 @ 0x12892570 (65 bytes, 25 insns) */
void f_12892570(void) {
  FTRACE(0x12892570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892570 push ebp */
  push32((uint32_t)(EBP));
  /* 12892571 mov ebp, esp */
  EBP = (ESP);
  /* 12892573 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892576 push ebx */
  push32((uint32_t)(EBX));
  /* 12892577 push esi */
  push32((uint32_t)(ESI));
  /* 12892578 push edi */
  push32((uint32_t)(EDI));
  /* 12892579 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289257c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892581 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892586 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892588 cmp dword ptr [0x128bf530], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf530))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289258f je 0x128925a0 */
  if (C.zf) goto L_128925a0;
  /* 12892591 mov esi, esp */
  ESI = (ESP);
  /* 12892593 call dword ptr [0x128bf530] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf530))), 0x12892599u);
  /* 12892599 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289259b call 0x12892930 */
  push32(0x128925a0u); f_12892930();
L_128925a0:;
  /* 128925a0 pop edi */
  EDI = (pop32());
  /* 128925a1 pop esi */
  ESI = (pop32());
  /* 128925a2 pop ebx */
  EBX = (pop32());
  /* 128925a3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128925a6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128925a8 call 0x12892930 */
  push32(0x128925adu); f_12892930();
  /* 128925ad mov esp, ebp */
  ESP = (EBP);
  /* 128925af pop ebp */
  EBP = (pop32());
  /* 128925b0 ret  */
  ESPCHK(0x12892570u, _esp0);
  ESP += 4; return;
}

/* FUN_100025d0 @ 0x128925d0 (65 bytes, 25 insns) */
void f_128925d0(void) {
  FTRACE(0x128925d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128925d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128925d1 mov ebp, esp */
  EBP = (ESP);
  /* 128925d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128925d6 push ebx */
  push32((uint32_t)(EBX));
  /* 128925d7 push esi */
  push32((uint32_t)(ESI));
  /* 128925d8 push edi */
  push32((uint32_t)(EDI));
  /* 128925d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128925dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128925e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128925e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128925e8 cmp dword ptr [0x128bf534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128925ef je 0x12892600 */
  if (C.zf) goto L_12892600;
  /* 128925f1 mov esi, esp */
  ESI = (ESP);
  /* 128925f3 call dword ptr [0x128bf534] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf534))), 0x128925f9u);
  /* 128925f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128925fb call 0x12892930 */
  push32(0x12892600u); f_12892930();
L_12892600:;
  /* 12892600 pop edi */
  EDI = (pop32());
  /* 12892601 pop esi */
  ESI = (pop32());
  /* 12892602 pop ebx */
  EBX = (pop32());
  /* 12892603 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892606 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892608 call 0x12892930 */
  push32(0x1289260du); f_12892930();
  /* 1289260d mov esp, ebp */
  ESP = (EBP);
  /* 1289260f pop ebp */
  EBP = (pop32());
  /* 12892610 ret  */
  ESPCHK(0x128925d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x12892630 (63 bytes, 25 insns) */
void f_12892630(void) {
  FTRACE(0x12892630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892630 push ebp */
  push32((uint32_t)(EBP));
  /* 12892631 mov ebp, esp */
  EBP = (ESP);
  /* 12892633 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892636 push ebx */
  push32((uint32_t)(EBX));
  /* 12892637 push esi */
  push32((uint32_t)(ESI));
  /* 12892638 push edi */
  push32((uint32_t)(EDI));
  /* 12892639 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289263c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892641 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892646 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892648 call 0x12891064 */
  push32(0x1289264du); f_12891064();
  /* 1289264d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892650 jne 0x12892659 */
  if (!C.zf) goto L_12892659;
  /* 12892652 call 0x12891055 */
  push32(0x12892657u); f_12891055();
  /* 12892657 jmp 0x1289265e */
  goto L_1289265e;
L_12892659:;
  /* 12892659 call 0x128910aa */
  push32(0x1289265eu); f_128910aa();
L_1289265e:;
  /* 1289265e pop edi */
  EDI = (pop32());
  /* 1289265f pop esi */
  ESI = (pop32());
  /* 12892660 pop ebx */
  EBX = (pop32());
  /* 12892661 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892664 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892666 call 0x12892930 */
  push32(0x1289266bu); f_12892930();
  /* 1289266b mov esp, ebp */
  ESP = (EBP);
  /* 1289266d pop ebp */
  EBP = (pop32());
  /* 1289266e ret  */
  ESPCHK(0x12892630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002680 @ 0x12892680 (183 bytes, 51 insns) */
void f_12892680(void) {
  FTRACE(0x12892680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892680 push ebp */
  push32((uint32_t)(EBP));
  /* 12892681 mov ebp, esp */
  EBP = (ESP);
  /* 12892683 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892686 push ebx */
  push32((uint32_t)(EBX));
  /* 12892687 push esi */
  push32((uint32_t)(ESI));
  /* 12892688 push edi */
  push32((uint32_t)(EDI));
  /* 12892689 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289268c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892691 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892696 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892698 push 0x128ba824 */
  push32((uint32_t)(0x128ba824u));
  /* 1289269d push 0x128bf420 */
  push32((uint32_t)(0x128bf420u));
  /* 128926a2 call 0x128910b4 */
  push32(0x128926a7u); f_128910b4();
  /* 128926a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128926aa push 0x128ba81c */
  push32((uint32_t)(0x128ba81cu));
  /* 128926af push 0x128bf428 */
  push32((uint32_t)(0x128bf428u));
  /* 128926b4 call 0x128910b4 */
  push32(0x128926b9u); f_128910b4();
  /* 128926b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128926bc push 1 */
  push32((uint32_t)(0x1u));
  /* 128926be push 0 */
  push32((uint32_t)(0x0u));
  /* 128926c0 call 0x12891037 */
  push32(0x128926c5u); f_12891037();
  /* 128926c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128926c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 128926ca push 1 */
  push32((uint32_t)(0x1u));
  /* 128926cc call 0x12891037 */
  push32(0x128926d1u); f_12891037();
  /* 128926d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128926d4 push 7 */
  push32((uint32_t)(0x7u));
  /* 128926d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 128926d8 call 0x12891037 */
  push32(0x128926ddu); f_12891037();
  /* 128926dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128926e0 mov dword ptr [0x128bf3f4], 0 */
  w32((uint32_t)(0x128bf3f4), (0x0u));
  /* 128926ea jmp 0x128926f9 */
  goto L_128926f9;
L_128926ec:;
  /* 128926ec mov eax, dword ptr [0x128bf3f4] */
  EAX = (r32((uint32_t)(0x128bf3f4)));
  /* 128926f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128926f4 mov dword ptr [0x128bf3f4], eax */
  w32((uint32_t)(0x128bf3f4), (EAX));
L_128926f9:;
  /* 128926f9 cmp dword ptr [0x128bf3f4], 5 */
  { uint32_t _a=(r32((uint32_t)(0x128bf3f4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892700 jge 0x12892726 */
  if ((C.sf==C.of)) goto L_12892726;
  /* 12892702 mov ecx, dword ptr [0x128bf3f4] */
  ECX = (r32((uint32_t)(0x128bf3f4)));
  /* 12892708 mov dword ptr [ecx*4 + 0x128bf3f8], 0 */
  w32((uint32_t)(ECX*4 + 0x128bf3f8), (0x0u));
  /* 12892713 mov edx, dword ptr [0x128bf3f4] */
  EDX = (r32((uint32_t)(0x128bf3f4)));
  /* 12892719 mov dword ptr [edx*4 + 0x128bf40c], 0 */
  w32((uint32_t)(EDX*4 + 0x128bf40c), (0x0u));
  /* 12892724 jmp 0x128926ec */
  goto L_128926ec;
L_12892726:;
  /* 12892726 pop edi */
  EDI = (pop32());
  /* 12892727 pop esi */
  ESI = (pop32());
  /* 12892728 pop ebx */
  EBX = (pop32());
  /* 12892729 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289272c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289272e call 0x12892930 */
  push32(0x12892733u); f_12892930();
  /* 12892733 mov esp, ebp */
  ESP = (EBP);
  /* 12892735 pop ebp */
  EBP = (pop32());
  /* 12892736 ret  */
  ESPCHK(0x12892680u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x12892770 (80 bytes, 32 insns) */
void f_12892770(void) {
  FTRACE(0x12892770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892770 push ebp */
  push32((uint32_t)(EBP));
  /* 12892771 mov ebp, esp */
  EBP = (ESP);
  /* 12892773 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892776 push ebx */
  push32((uint32_t)(EBX));
  /* 12892777 push esi */
  push32((uint32_t)(ESI));
  /* 12892778 push edi */
  push32((uint32_t)(EDI));
  /* 12892779 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289277c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892781 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892786 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892788 cmp dword ptr [0x128bf468], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf468))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289278f je 0x128927ad */
  if (C.zf) goto L_128927ad;
  /* 12892791 mov esi, esp */
  ESI = (ESP);
  /* 12892793 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892796 push eax */
  push32((uint32_t)(EAX));
  /* 12892797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289279a push ecx */
  push32((uint32_t)(ECX));
  /* 1289279b call dword ptr [0x128bf468] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf468))), 0x128927a1u);
  /* 128927a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128927a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128927a6 call 0x12892930 */
  push32(0x128927abu); f_12892930();
  /* 128927ab jmp 0x128927af */
  goto L_128927af;
L_128927ad:;
  /* 128927ad xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
L_128927af:;
  /* 128927af pop edi */
  EDI = (pop32());
  /* 128927b0 pop esi */
  ESI = (pop32());
  /* 128927b1 pop ebx */
  EBX = (pop32());
  /* 128927b2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128927b5 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128927b7 call 0x12892930 */
  push32(0x128927bcu); f_12892930();
  /* 128927bc mov esp, ebp */
  ESP = (EBP);
  /* 128927be pop ebp */
  EBP = (pop32());
  /* 128927bf ret  */
  ESPCHK(0x12892770u, _esp0);
  ESP += 4; return;
}

/* FUN_100027e0 @ 0x128927e0 (76 bytes, 30 insns) */
void f_128927e0(void) {
  FTRACE(0x128927e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128927e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128927e1 mov ebp, esp */
  EBP = (ESP);
  /* 128927e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128927e6 push ebx */
  push32((uint32_t)(EBX));
  /* 128927e7 push esi */
  push32((uint32_t)(ESI));
  /* 128927e8 push edi */
  push32((uint32_t)(EDI));
  /* 128927e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128927ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128927f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128927f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128927f8 cmp dword ptr [0x128bf508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128927ff je 0x1289281b */
  if (C.zf) goto L_1289281b;
  /* 12892801 mov esi, esp */
  ESI = (ESP);
  /* 12892803 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12892806 push eax */
  push32((uint32_t)(EAX));
  /* 12892807 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1289280a push ecx */
  push32((uint32_t)(ECX));
  /* 1289280b call dword ptr [0x128bf508] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf508))), 0x12892811u);
  /* 12892811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892816 call 0x12892930 */
  push32(0x1289281bu); f_12892930();
L_1289281b:;
  /* 1289281b pop edi */
  EDI = (pop32());
  /* 1289281c pop esi */
  ESI = (pop32());
  /* 1289281d pop ebx */
  EBX = (pop32());
  /* 1289281e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892821 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892823 call 0x12892930 */
  push32(0x12892828u); f_12892930();
  /* 12892828 mov esp, ebp */
  ESP = (EBP);
  /* 1289282a pop ebp */
  EBP = (pop32());
  /* 1289282b ret  */
  ESPCHK(0x128927e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x12892830 (76 bytes, 30 insns) */
void f_12892830(void) {
  FTRACE(0x12892830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892830 push ebp */
  push32((uint32_t)(EBP));
  /* 12892831 mov ebp, esp */
  EBP = (ESP);
  /* 12892833 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892836 push ebx */
  push32((uint32_t)(EBX));
  /* 12892837 push esi */
  push32((uint32_t)(ESI));
  /* 12892838 push edi */
  push32((uint32_t)(EDI));
  /* 12892839 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1289283c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12892841 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12892846 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892848 cmp dword ptr [0x128bf574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289284f je 0x1289286b */
  if (C.zf) goto L_1289286b;
  /* 12892851 mov esi, esp */
  ESI = (ESP);
  /* 12892853 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12892856 push eax */
  push32((uint32_t)(EAX));
  /* 12892857 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1289285a push ecx */
  push32((uint32_t)(ECX));
  /* 1289285b call dword ptr [0x128bf574] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf574))), 0x12892861u);
  /* 12892861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892864 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892866 call 0x12892930 */
  push32(0x1289286bu); f_12892930();
L_1289286b:;
  /* 1289286b pop edi */
  EDI = (pop32());
  /* 1289286c pop esi */
  ESI = (pop32());
  /* 1289286d pop ebx */
  EBX = (pop32());
  /* 1289286e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892871 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892873 call 0x12892930 */
  push32(0x12892878u); f_12892930();
  /* 12892878 mov esp, ebp */
  ESP = (EBP);
  /* 1289287a pop ebp */
  EBP = (pop32());
  /* 1289287b ret  */
  ESPCHK(0x12892830u, _esp0);
  ESP += 4; return;
}

/* FUN_100028b0 @ 0x128928b0 (76 bytes, 30 insns) */
void f_128928b0(void) {
  FTRACE(0x128928b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128928b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128928b1 mov ebp, esp */
  EBP = (ESP);
  /* 128928b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128928b6 push ebx */
  push32((uint32_t)(EBX));
  /* 128928b7 push esi */
  push32((uint32_t)(ESI));
  /* 128928b8 push edi */
  push32((uint32_t)(EDI));
  /* 128928b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 128928bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 128928c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 128928c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 128928c8 cmp dword ptr [0x128bf49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128928cf je 0x128928e9 */
  if (C.zf) goto L_128928e9;
  /* 128928d1 mov esi, esp */
  ESI = (ESP);
  /* 128928d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128928d6 push eax */
  push32((uint32_t)(EAX));
  /* 128928d7 call dword ptr [0x128bf49c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf49c))), 0x128928ddu);
  /* 128928dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128928e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128928e2 call 0x12892930 */
  push32(0x128928e7u); f_12892930();
  /* 128928e7 jmp 0x128928eb */
  goto L_128928eb;
L_128928e9:;
  /* 128928e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128928eb:;
  /* 128928eb pop edi */
  EDI = (pop32());
  /* 128928ec pop esi */
  ESI = (pop32());
  /* 128928ed pop ebx */
  EBX = (pop32());
  /* 128928ee add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128928f1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128928f3 call 0x12892930 */
  push32(0x128928f8u); f_12892930();
  /* 128928f8 mov esp, ebp */
  ESP = (EBP);
  /* 128928fa pop ebp */
  EBP = (pop32());
  /* 128928fb ret  */
  ESPCHK(0x128928b0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12892930 (56 bytes, 28 insns) */
void f_12892930(void) {
  FTRACE(0x12892930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892930 jne 0x12892933 */
  if (!C.zf) goto L_12892933;
  /* 12892932 ret  */
  ESPCHK(0x12892930u, _esp0);
  ESP += 4; return;
L_12892933:;
  /* 12892933 push ebp */
  push32((uint32_t)(EBP));
  /* 12892934 mov ebp, esp */
  EBP = (ESP);
  /* 12892936 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892939 push eax */
  push32((uint32_t)(EAX));
  /* 1289293a push edx */
  push32((uint32_t)(EDX));
  /* 1289293b push ebx */
  push32((uint32_t)(EBX));
  /* 1289293c push esi */
  push32((uint32_t)(ESI));
  /* 1289293d push edi */
  push32((uint32_t)(EDI));
  /* 1289293e push 0x128ba840 */
  push32((uint32_t)(0x128ba840u));
  /* 12892943 push 0x128ba83c */
  push32((uint32_t)(0x128ba83cu));
  /* 12892948 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1289294a push 0x128ba82c */
  push32((uint32_t)(0x128ba82cu));
  /* 1289294f push 1 */
  push32((uint32_t)(0x1u));
  /* 12892951 call 0x12892e00 */
  push32(0x12892956u); f_12892e00();
  /* 12892956 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892959 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289295c jne 0x1289295f */
  if (!C.zf) goto L_1289295f;
  /* 1289295e int3  */
  x86_unimpl("int3 @ 0x1289295e");
L_1289295f:;
  /* 1289295f pop edi */
  EDI = (pop32());
  /* 12892960 pop esi */
  ESI = (pop32());
  /* 12892961 pop ebx */
  EBX = (pop32());
  /* 12892962 pop edx */
  EDX = (pop32());
  /* 12892963 pop eax */
  EAX = (pop32());
  /* 12892964 mov esp, ebp */
  ESP = (EBP);
  /* 12892966 pop ebp */
  EBP = (pop32());
  /* 12892967 ret  */
  ESPCHK(0x12892930u, _esp0);
  ESP += 4; return;
}

/* FUN_10002970 @ 0x12892970 (250 bytes, 92 insns) */
void f_12892970(void) {
  FTRACE(0x12892970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892970 push ebp */
  push32((uint32_t)(EBP));
  /* 12892971 mov ebp, esp */
  EBP = (ESP);
  /* 12892973 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892976 push ebx */
  push32((uint32_t)(EBX));
  /* 12892977 push esi */
  push32((uint32_t)(ESI));
  /* 12892978 push edi */
  push32((uint32_t)(EDI));
  /* 12892979 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1289297c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1289297f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12892982 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12892985:;
  /* 12892985 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892989 jne 0x128929a9 */
  if (!C.zf) goto L_128929a9;
  /* 1289298b push 0x128ba938 */
  push32((uint32_t)(0x128ba938u));
  /* 12892990 push 0 */
  push32((uint32_t)(0x0u));
  /* 12892992 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12892994 push 0x128ba92c */
  push32((uint32_t)(0x128ba92cu));
  /* 12892999 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289299b call 0x12892e00 */
  push32(0x128929a0u); f_12892e00();
  /* 128929a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128929a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128929a6 jne 0x128929a9 */
  if (!C.zf) goto L_128929a9;
  /* 128929a8 int3  */
  x86_unimpl("int3 @ 0x128929a8");
L_128929a9:;
  /* 128929a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128929ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128929ad jne 0x12892985 */
  if (!C.zf) goto L_12892985;
L_128929af:;
  /* 128929af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128929b3 jne 0x128929d3 */
  if (!C.zf) goto L_128929d3;
  /* 128929b5 push 0x128ba91c */
  push32((uint32_t)(0x128ba91cu));
  /* 128929ba push 0 */
  push32((uint32_t)(0x0u));
  /* 128929bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 128929be push 0x128ba92c */
  push32((uint32_t)(0x128ba92cu));
  /* 128929c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 128929c5 call 0x12892e00 */
  push32(0x128929cau); f_12892e00();
  /* 128929ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128929cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128929d0 jne 0x128929d3 */
  if (!C.zf) goto L_128929d3;
  /* 128929d2 int3  */
  x86_unimpl("int3 @ 0x128929d2");
L_128929d3:;
  /* 128929d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128929d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128929d7 jne 0x128929af */
  if (!C.zf) goto L_128929af;
  /* 128929d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128929dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 128929e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 128929e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128929e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 128929ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128929ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128929f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 128929f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 128929f7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 128929fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12892a01 push ecx */
  push32((uint32_t)(ECX));
  /* 12892a02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892a05 push edx */
  push32((uint32_t)(EDX));
  /* 12892a06 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12892a09 push eax */
  push32((uint32_t)(EAX));
  /* 12892a0a call 0x12893720 */
  push32(0x12892a0fu); f_12893720();
  /* 12892a0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892a12 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12892a15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12892a18 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12892a1b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892a1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12892a21 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12892a24 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12892a27 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892a2b jl 0x12892a4f */
  if ((C.sf!=C.of)) goto L_12892a4f;
  /* 12892a2d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12892a30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12892a32 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12892a35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12892a37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12892a3d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12892a40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12892a43 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12892a45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12892a48 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12892a4b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12892a4d jmp 0x12892a60 */
  goto L_12892a60;
L_12892a4f:;
  /* 12892a4f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12892a52 push edx */
  push32((uint32_t)(EDX));
  /* 12892a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12892a55 call 0x128934a0 */
  push32(0x12892a5au); f_128934a0();
  /* 12892a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892a5d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12892a60:;
  /* 12892a60 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12892a63 pop edi */
  EDI = (pop32());
  /* 12892a64 pop esi */
  ESI = (pop32());
  /* 12892a65 pop ebx */
  EBX = (pop32());
  /* 12892a66 mov esp, ebp */
  ESP = (EBP);
  /* 12892a68 pop ebp */
  EBP = (pop32());
  /* 12892a69 ret  */
  ESPCHK(0x12892970u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a70 @ 0x12892a70 (313 bytes, 78 insns) */
void f_12892a70(void) {
  FTRACE(0x12892a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12892a71 mov ebp, esp */
  EBP = (ESP);
  /* 12892a73 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892a77 jne 0x12892b37 */
  if (!C.zf) goto L_12892b37;
  /* 12892a7d call dword ptr [0x128c2208] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2208))), 0x12892a83u);
  /* 12892a83 mov dword ptr [0x128bf6a0], eax */
  w32((uint32_t)(0x128bf6a0), (EAX));
  /* 12892a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 12892a8a call 0x12897650 */
  push32(0x12892a8fu); f_12897650();
  /* 12892a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892a92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12892a94 jne 0x12892a9d */
  if (!C.zf) goto L_12892a9d;
  /* 12892a96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12892a98 jmp 0x12892ba5 */
  goto L_12892ba5;
L_12892a9d:;
  /* 12892a9d mov eax, dword ptr [0x128bf6a0] */
  EAX = (r32((uint32_t)(0x128bf6a0)));
  /* 12892aa2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12892aa5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12892aaa mov dword ptr [0x128bf6ac], eax */
  w32((uint32_t)(0x128bf6ac), (EAX));
  /* 12892aaf mov ecx, dword ptr [0x128bf6a0] */
  ECX = (r32((uint32_t)(0x128bf6a0)));
  /* 12892ab5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12892abb mov dword ptr [0x128bf6a8], ecx */
  w32((uint32_t)(0x128bf6a8), (ECX));
  /* 12892ac1 mov edx, dword ptr [0x128bf6a8] */
  EDX = (r32((uint32_t)(0x128bf6a8)));
  /* 12892ac7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12892aca add edx, dword ptr [0x128bf6ac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128bf6ac))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12892ad0 mov dword ptr [0x128bf6a4], edx */
  w32((uint32_t)(0x128bf6a4), (EDX));
  /* 12892ad6 mov eax, dword ptr [0x128bf6a0] */
  EAX = (r32((uint32_t)(0x128bf6a0)));
  /* 12892adb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12892ade and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12892ae3 mov dword ptr [0x128bf6a0], eax */
  w32((uint32_t)(0x128bf6a0), (EAX));
  /* 12892ae8 call 0x128947c0 */
  push32(0x12892aedu); f_128947c0();
  /* 12892aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12892aef jne 0x12892afd */
  if (!C.zf) goto L_12892afd;
  /* 12892af1 call 0x128976a0 */
  push32(0x12892af6u); f_128976a0();
  /* 12892af6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12892af8 jmp 0x12892ba5 */
  goto L_12892ba5;
L_12892afd:;
  /* 12892afd call dword ptr [0x128c2204] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2204))), 0x12892b03u);
  /* 12892b03 mov dword ptr [0x128c11cc], eax */
  w32((uint32_t)(0x128c11cc), (EAX));
  /* 12892b08 call 0x12897430 */
  push32(0x12892b0du); f_12897430();
  /* 12892b0d mov dword ptr [0x128bf688], eax */
  w32((uint32_t)(0x128bf688), (EAX));
  /* 12892b12 call 0x12894a70 */
  push32(0x12892b17u); f_12894a70();
  /* 12892b17 call 0x12896f20 */
  push32(0x12892b1cu); f_12896f20();
  /* 12892b1c call 0x12896dd0 */
  push32(0x12892b21u); f_12896dd0();
  /* 12892b21 call 0x128945c0 */
  push32(0x12892b26u); f_128945c0();
  /* 12892b26 mov ecx, dword ptr [0x128bf684] */
  ECX = (r32((uint32_t)(0x128bf684)));
  /* 12892b2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12892b2f mov dword ptr [0x128bf684], ecx */
  w32((uint32_t)(0x128bf684), (ECX));
  /* 12892b35 jmp 0x12892ba0 */
  goto L_12892ba0;
L_12892b37:;
  /* 12892b37 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892b3b jne 0x12892b90 */
  if (!C.zf) goto L_12892b90;
  /* 12892b3d cmp dword ptr [0x128bf684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892b44 jle 0x12892b8a */
  if ((C.zf||C.sf!=C.of)) goto L_12892b8a;
  /* 12892b46 mov edx, dword ptr [0x128bf684] */
  EDX = (r32((uint32_t)(0x128bf684)));
  /* 12892b4c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12892b4f mov dword ptr [0x128bf684], edx */
  w32((uint32_t)(0x128bf684), (EDX));
  /* 12892b55 cmp dword ptr [0x128bf6d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892b5c jne 0x12892b63 */
  if (!C.zf) goto L_12892b63;
  /* 12892b5e call 0x12894640 */
  push32(0x12892b63u); f_12894640();
L_12892b63:;
  /* 12892b63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12892b65 call 0x12896370 */
  push32(0x12892b6au); f_12896370();
  /* 12892b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892b6d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12892b70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12892b72 je 0x12892b79 */
  if (C.zf) goto L_12892b79;
  /* 12892b74 call 0x12896c80 */
  push32(0x12892b79u); f_12896c80();
L_12892b79:;
  /* 12892b79 call 0x12894da0 */
  push32(0x12892b7eu); f_12894da0();
  /* 12892b7e call 0x12894850 */
  push32(0x12892b83u); f_12894850();
  /* 12892b83 call 0x128976a0 */
  push32(0x12892b88u); f_128976a0();
  /* 12892b88 jmp 0x12892b8e */
  goto L_12892b8e;
L_12892b8a:;
  /* 12892b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12892b8c jmp 0x12892ba5 */
  goto L_12892ba5;
L_12892b8e:;
  /* 12892b8e jmp 0x12892ba0 */
  goto L_12892ba0;
L_12892b90:;
  /* 12892b90 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892b94 jne 0x12892ba0 */
  if (!C.zf) goto L_12892ba0;
  /* 12892b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12892b98 call 0x12894940 */
  push32(0x12892b9du); f_12894940();
  /* 12892b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12892ba0:;
  /* 12892ba0 mov eax, 1 */
  EAX = (0x1u);
L_12892ba5:;
  /* 12892ba5 pop ebp */
  EBP = (pop32());
  /* 12892ba6 ret 0xc */
  ESPCHK(0x12892a70u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12892bb0 (243 bytes, 86 insns) */
void f_12892bb0(void) {
  FTRACE(0x12892bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12892bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12892bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12892bb4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12892bbb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892bbf jne 0x12892bd1 */
  if (!C.zf) goto L_12892bd1;
  /* 12892bc1 cmp dword ptr [0x128bf684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892bc8 jne 0x12892bd1 */
  if (!C.zf) goto L_12892bd1;
  /* 12892bca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12892bcc jmp 0x12892c9d */
  goto L_12892c9d;
L_12892bd1:;
  /* 12892bd1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892bd5 je 0x12892bdd */
  if (C.zf) goto L_12892bdd;
  /* 12892bd7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892bdb jne 0x12892c1f */
  if (!C.zf) goto L_12892c1f;
L_12892bdd:;
  /* 12892bdd cmp dword ptr [0x128c11dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c11dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892be4 je 0x12892bfb */
  if (C.zf) goto L_12892bfb;
  /* 12892be6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12892be9 push eax */
  push32((uint32_t)(EAX));
  /* 12892bea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892bed push ecx */
  push32((uint32_t)(ECX));
  /* 12892bee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892bf1 push edx */
  push32((uint32_t)(EDX));
  /* 12892bf2 call dword ptr [0x128c11dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c11dc))), 0x12892bf8u);
  /* 12892bf8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12892bfb:;
  /* 12892bfb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892bff je 0x12892c15 */
  if (C.zf) goto L_12892c15;
  /* 12892c01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12892c04 push eax */
  push32((uint32_t)(EAX));
  /* 12892c05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892c08 push ecx */
  push32((uint32_t)(ECX));
  /* 12892c09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892c0c push edx */
  push32((uint32_t)(EDX));
  /* 12892c0d call 0x12892a70 */
  push32(0x12892c12u); f_12892a70();
  /* 12892c12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12892c15:;
  /* 12892c15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892c19 jne 0x12892c1f */
  if (!C.zf) goto L_12892c1f;
  /* 12892c1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12892c1d jmp 0x12892c9d */
  goto L_12892c9d;
L_12892c1f:;
  /* 12892c1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12892c22 push eax */
  push32((uint32_t)(EAX));
  /* 12892c23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892c26 push ecx */
  push32((uint32_t)(ECX));
  /* 12892c27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892c2a push edx */
  push32((uint32_t)(EDX));
  /* 12892c2b call 0x12891023 */
  push32(0x12892c30u); f_12891023();
  /* 12892c30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12892c33 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892c37 jne 0x12892c4e */
  if (!C.zf) goto L_12892c4e;
  /* 12892c39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892c3d jne 0x12892c4e */
  if (!C.zf) goto L_12892c4e;
  /* 12892c3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12892c42 push eax */
  push32((uint32_t)(EAX));
  /* 12892c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12892c45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892c48 push ecx */
  push32((uint32_t)(ECX));
  /* 12892c49 call 0x12892a70 */
  push32(0x12892c4eu); f_12892a70();
L_12892c4e:;
  /* 12892c4e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892c52 je 0x12892c5a */
  if (C.zf) goto L_12892c5a;
  /* 12892c54 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892c58 jne 0x12892c9a */
  if (!C.zf) goto L_12892c9a;
L_12892c5a:;
  /* 12892c5a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12892c5d push edx */
  push32((uint32_t)(EDX));
  /* 12892c5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892c61 push eax */
  push32((uint32_t)(EAX));
  /* 12892c62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892c65 push ecx */
  push32((uint32_t)(ECX));
  /* 12892c66 call 0x12892a70 */
  push32(0x12892c6bu); f_12892a70();
  /* 12892c6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12892c6d jne 0x12892c76 */
  if (!C.zf) goto L_12892c76;
  /* 12892c6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12892c76:;
  /* 12892c76 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892c7a je 0x12892c9a */
  if (C.zf) goto L_12892c9a;
  /* 12892c7c cmp dword ptr [0x128c11dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c11dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892c83 je 0x12892c9a */
  if (C.zf) goto L_12892c9a;
  /* 12892c85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12892c88 push edx */
  push32((uint32_t)(EDX));
  /* 12892c89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892c8c push eax */
  push32((uint32_t)(EAX));
  /* 12892c8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892c90 push ecx */
  push32((uint32_t)(ECX));
  /* 12892c91 call dword ptr [0x128c11dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c11dc))), 0x12892c97u);
  /* 12892c97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12892c9a:;
  /* 12892c9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12892c9d:;
  /* 12892c9d mov esp, ebp */
  ESP = (EBP);
  /* 12892c9f pop ebp */
  EBP = (pop32());
  /* 12892ca0 ret 0xc */
  ESPCHK(0x12892bb0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12892cb0 (58 bytes, 18 insns) */
void f_12892cb0(void) {
  FTRACE(0x12892cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12892cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12892cb3 cmp dword ptr [0x128bf690], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf690))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892cba je 0x12892cce */
  if (C.zf) goto L_12892cce;
  /* 12892cbc cmp dword ptr [0x128bf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892cc3 jne 0x12892cd3 */
  if (!C.zf) goto L_12892cd3;
  /* 12892cc5 cmp dword ptr [0x128bf694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892ccc jne 0x12892cd3 */
  if (!C.zf) goto L_12892cd3;
L_12892cce:;
  /* 12892cce call 0x12897740 */
  push32(0x12892cd3u); f_12897740();
L_12892cd3:;
  /* 12892cd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892cd6 push eax */
  push32((uint32_t)(EAX));
  /* 12892cd7 call 0x12897790 */
  push32(0x12892cdcu); f_12897790();
  /* 12892cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892cdf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12892ce4 call dword ptr [0x128bda30] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bda30))), 0x12892ceau);
  /* 12892cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892ced pop ebp */
  EBP = (pop32());
  /* 12892cee ret  */
  ESPCHK(0x12892cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf0 @ 0x12892cf0 (11 bytes, 5 insns) */
void f_12892cf0(void) {
  FTRACE(0x12892cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12892cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12892cf3 call dword ptr [0x128c220c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c220c))), 0x12892cf9u);
  /* 12892cf9 pop ebp */
  EBP = (pop32());
  /* 12892cfa ret  */
  ESPCHK(0x12892cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d00 @ 0x12892d00 (87 bytes, 30 insns) */
void f_12892d00(void) {
  FTRACE(0x12892d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12892d01 mov ebp, esp */
  EBP = (ESP);
  /* 12892d03 push ecx */
  push32((uint32_t)(ECX));
  /* 12892d04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892d08 jl 0x12892d10 */
  if ((C.sf!=C.of)) goto L_12892d10;
  /* 12892d0a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892d0e jl 0x12892d15 */
  if ((C.sf!=C.of)) goto L_12892d15;
L_12892d10:;
  /* 12892d10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12892d13 jmp 0x12892d53 */
  goto L_12892d53;
L_12892d15:;
  /* 12892d15 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892d19 jne 0x12892d27 */
  if (!C.zf) goto L_12892d27;
  /* 12892d1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892d1e mov eax, dword ptr [eax*4 + 0x128bda38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x128bda38)));
  /* 12892d25 jmp 0x12892d53 */
  goto L_12892d53;
L_12892d27:;
  /* 12892d27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892d2a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12892d2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12892d2f je 0x12892d36 */
  if (C.zf) goto L_12892d36;
  /* 12892d31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12892d34 jmp 0x12892d53 */
  goto L_12892d53;
L_12892d36:;
  /* 12892d36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892d39 mov eax, dword ptr [edx*4 + 0x128bda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128bda38)));
  /* 12892d40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12892d43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892d46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892d49 mov dword ptr [ecx*4 + 0x128bda38], edx */
  w32((uint32_t)(ECX*4 + 0x128bda38), (EDX));
  /* 12892d50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12892d53:;
  /* 12892d53 mov esp, ebp */
  ESP = (EBP);
  /* 12892d55 pop ebp */
  EBP = (pop32());
  /* 12892d56 ret  */
  ESPCHK(0x12892d00u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12892d60 (126 bytes, 38 insns) */
void f_12892d60(void) {
  FTRACE(0x12892d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12892d61 mov ebp, esp */
  EBP = (ESP);
  /* 12892d63 push ecx */
  push32((uint32_t)(ECX));
  /* 12892d64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892d68 jl 0x12892d70 */
  if ((C.sf!=C.of)) goto L_12892d70;
  /* 12892d6a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892d6e jl 0x12892d77 */
  if ((C.sf!=C.of)) goto L_12892d77;
L_12892d70:;
  /* 12892d70 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12892d75 jmp 0x12892dda */
  goto L_12892dda;
L_12892d77:;
  /* 12892d77 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892d7b jne 0x12892d89 */
  if (!C.zf) goto L_12892d89;
  /* 12892d7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892d80 mov eax, dword ptr [eax*4 + 0x128bda44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x128bda44)));
  /* 12892d87 jmp 0x12892dda */
  goto L_12892dda;
L_12892d89:;
  /* 12892d89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892d8c mov edx, dword ptr [ecx*4 + 0x128bda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bda44)));
  /* 12892d93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12892d96 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892d9a jne 0x12892db0 */
  if (!C.zf) goto L_12892db0;
  /* 12892d9c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12892d9e call dword ptr [0x128c2210] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2210))), 0x12892da4u);
  /* 12892da4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892da7 mov dword ptr [ecx*4 + 0x128bda44], eax */
  w32((uint32_t)(ECX*4 + 0x128bda44), (EAX));
  /* 12892dae jmp 0x12892dd7 */
  goto L_12892dd7;
L_12892db0:;
  /* 12892db0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892db4 jne 0x12892dca */
  if (!C.zf) goto L_12892dca;
  /* 12892db6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12892db8 call dword ptr [0x128c2210] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2210))), 0x12892dbeu);
  /* 12892dbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892dc1 mov dword ptr [edx*4 + 0x128bda44], eax */
  w32((uint32_t)(EDX*4 + 0x128bda44), (EAX));
  /* 12892dc8 jmp 0x12892dd7 */
  goto L_12892dd7;
L_12892dca:;
  /* 12892dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892dcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892dd0 mov dword ptr [eax*4 + 0x128bda44], ecx */
  w32((uint32_t)(EAX*4 + 0x128bda44), (ECX));
L_12892dd7:;
  /* 12892dd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12892dda:;
  /* 12892dda mov esp, ebp */
  ESP = (EBP);
  /* 12892ddc pop ebp */
  EBP = (pop32());
  /* 12892ddd ret  */
  ESPCHK(0x12892d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002de0 @ 0x12892de0 (28 bytes, 11 insns) */
void f_12892de0(void) {
  FTRACE(0x12892de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12892de1 mov ebp, esp */
  EBP = (ESP);
  /* 12892de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12892de4 mov eax, dword ptr [0x128c11c0] */
  EAX = (r32((uint32_t)(0x128c11c0)));
  /* 12892de9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12892dec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892def mov dword ptr [0x128c11c0], ecx */
  w32((uint32_t)(0x128c11c0), (ECX));
  /* 12892df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12892df8 mov esp, ebp */
  ESP = (EBP);
  /* 12892dfa pop ebp */
  EBP = (pop32());
  /* 12892dfb ret  */
  ESPCHK(0x12892de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e00 @ 0x12892e00 (912 bytes, 248 insns) */
void f_12892e00(void) {
  FTRACE(0x12892e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12892e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12892e01 mov ebp, esp */
  EBP = (ESP);
  /* 12892e03 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12892e08 call 0x12898000 */
  push32(0x12892e0du); f_12898000();
  /* 12892e0d push edi */
  push32((uint32_t)(EDI));
  /* 12892e0e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12892e15 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12892e1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12892e1c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12892e22 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892e24 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12892e26 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12892e27 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12892e2e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12892e33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12892e35 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12892e3b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892e3d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12892e3f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12892e40 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12892e47 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12892e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12892e4e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12892e54 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12892e56 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12892e58 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12892e59 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12892e5c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12892e62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892e66 jl 0x12892e6e */
  if ((C.sf!=C.of)) goto L_12892e6e;
  /* 12892e68 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892e6c jl 0x12892e76 */
  if ((C.sf!=C.of)) goto L_12892e76;
L_12892e6e:;
  /* 12892e6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12892e71 jmp 0x1289318b */
  goto L_1289318b;
L_12892e76:;
  /* 12892e76 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892e7a jne 0x12892f20 */
  if (!C.zf) goto L_12892f20;
  /* 12892e80 push 0x128bda34 */
  push32((uint32_t)(0x128bda34u));
  /* 12892e85 call dword ptr [0x128c2224] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2224))), 0x12892e8bu);
  /* 12892e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12892e8d jle 0x12892f20 */
  if ((C.zf||C.sf!=C.of)) goto L_12892f20;
  /* 12892e93 cmp dword ptr [0x128bf698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892e9a jne 0x12892ede */
  if (!C.zf) goto L_12892ede;
  /* 12892e9c push 0x128baa14 */
  push32((uint32_t)(0x128baa14u));
  /* 12892ea1 call dword ptr [0x128c2220] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2220))), 0x12892ea7u);
  /* 12892ea7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12892ead cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892eb4 je 0x12892ed6 */
  if (C.zf) goto L_12892ed6;
  /* 12892eb6 push 0x128baa08 */
  push32((uint32_t)(0x128baa08u));
  /* 12892ebb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12892ec1 push ecx */
  push32((uint32_t)(ECX));
  /* 12892ec2 call dword ptr [0x128c2288] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2288))), 0x12892ec8u);
  /* 12892ec8 mov dword ptr [0x128bf698], eax */
  w32((uint32_t)(0x128bf698), (EAX));
  /* 12892ecd cmp dword ptr [0x128bf698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892ed4 jne 0x12892ede */
  if (!C.zf) goto L_12892ede;
L_12892ed6:;
  /* 12892ed6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12892ed9 jmp 0x1289318b */
  goto L_1289318b;
L_12892ede:;
  /* 12892ede mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12892ee1 push edx */
  push32((uint32_t)(EDX));
  /* 12892ee2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892ee5 push eax */
  push32((uint32_t)(EAX));
  /* 12892ee6 push 0x128ba9d4 */
  push32((uint32_t)(0x128ba9d4u));
  /* 12892eeb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12892ef1 push ecx */
  push32((uint32_t)(ECX));
  /* 12892ef2 call dword ptr [0x128bf698] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf698))), 0x12892ef8u);
  /* 12892ef8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892efb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12892f01 push edx */
  push32((uint32_t)(EDX));
  /* 12892f02 call dword ptr [0x128c221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c221c))), 0x12892f08u);
  /* 12892f08 push 0x128bda34 */
  push32((uint32_t)(0x128bda34u));
  /* 12892f0d call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x12892f13u);
  /* 12892f13 call 0x12892cf0 */
  push32(0x12892f18u); f_12892cf0();
  /* 12892f18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12892f1b jmp 0x1289318b */
  goto L_1289318b;
L_12892f20:;
  /* 12892f20 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892f24 je 0x12892f5d */
  if (C.zf) goto L_12892f5d;
  /* 12892f26 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12892f2c push eax */
  push32((uint32_t)(EAX));
  /* 12892f2d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12892f30 push ecx */
  push32((uint32_t)(ECX));
  /* 12892f31 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12892f36 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12892f3c push edx */
  push32((uint32_t)(EDX));
  /* 12892f3d call 0x12897f00 */
  push32(0x12892f42u); f_12897f00();
  /* 12892f42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892f45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12892f47 jge 0x12892f5d */
  if ((C.sf==C.of)) goto L_12892f5d;
  /* 12892f49 push 0x128ba9a8 */
  push32((uint32_t)(0x128ba9a8u));
  /* 12892f4e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12892f54 push eax */
  push32((uint32_t)(EAX));
  /* 12892f55 call 0x12897e10 */
  push32(0x12892f5au); f_12897e10();
  /* 12892f5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12892f5d:;
  /* 12892f5d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892f61 jne 0x12892f95 */
  if (!C.zf) goto L_12892f95;
  /* 12892f63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892f67 je 0x12892f75 */
  if (C.zf) goto L_12892f75;
  /* 12892f69 mov dword ptr [ebp - 0x3028], 0x128ba994 */
  w32((uint32_t)(EBP + -0x3028), (0x128ba994u));
  /* 12892f73 jmp 0x12892f7f */
  goto L_12892f7f;
L_12892f75:;
  /* 12892f75 mov dword ptr [ebp - 0x3028], 0x128ba980 */
  w32((uint32_t)(EBP + -0x3028), (0x128ba980u));
L_12892f7f:;
  /* 12892f7f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12892f85 push ecx */
  push32((uint32_t)(ECX));
  /* 12892f86 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12892f8c push edx */
  push32((uint32_t)(EDX));
  /* 12892f8d call 0x12897e10 */
  push32(0x12892f92u); f_12897e10();
  /* 12892f92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12892f95:;
  /* 12892f95 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12892f9b push eax */
  push32((uint32_t)(EAX));
  /* 12892f9c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12892fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 12892fa3 call 0x12897e20 */
  push32(0x12892fa8u); f_12897e20();
  /* 12892fa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12892fab cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892faf jne 0x12892fea */
  if (!C.zf) goto L_12892fea;
  /* 12892fb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12892fb4 mov eax, dword ptr [edx*4 + 0x128bda38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128bda38)));
  /* 12892fbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12892fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12892fc0 je 0x12892fd6 */
  if (C.zf) goto L_12892fd6;
  /* 12892fc2 push 0x128ba97c */
  push32((uint32_t)(0x128ba97cu));
  /* 12892fc7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12892fcd push ecx */
  push32((uint32_t)(ECX));
  /* 12892fce call 0x12897e20 */
  push32(0x12892fd3u); f_12897e20();
  /* 12892fd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12892fd6:;
  /* 12892fd6 push 0x128ba978 */
  push32((uint32_t)(0x128ba978u));
  /* 12892fdb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12892fe1 push edx */
  push32((uint32_t)(EDX));
  /* 12892fe2 call 0x12897e20 */
  push32(0x12892fe7u); f_12897e20();
  /* 12892fe7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12892fea:;
  /* 12892fea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12892fee je 0x12893032 */
  if (C.zf) goto L_12893032;
  /* 12892ff0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12892ff6 push eax */
  push32((uint32_t)(EAX));
  /* 12892ff7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12892ffa push ecx */
  push32((uint32_t)(ECX));
  /* 12892ffb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12892ffe push edx */
  push32((uint32_t)(EDX));
  /* 12892fff push 0x128ba96c */
  push32((uint32_t)(0x128ba96cu));
  /* 12893004 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12893009 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1289300f push eax */
  push32((uint32_t)(EAX));
  /* 12893010 call 0x12897d10 */
  push32(0x12893015u); f_12897d10();
  /* 12893015 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289301a jge 0x12893030 */
  if ((C.sf==C.of)) goto L_12893030;
  /* 1289301c push 0x128ba9a8 */
  push32((uint32_t)(0x128ba9a8u));
  /* 12893021 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12893027 push ecx */
  push32((uint32_t)(ECX));
  /* 12893028 call 0x12897e10 */
  push32(0x1289302du); f_12897e10();
  /* 1289302d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12893030:;
  /* 12893030 jmp 0x12893048 */
  goto L_12893048;
L_12893032:;
  /* 12893032 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12893038 push edx */
  push32((uint32_t)(EDX));
  /* 12893039 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1289303f push eax */
  push32((uint32_t)(EAX));
  /* 12893040 call 0x12897e10 */
  push32(0x12893045u); f_12897e10();
  /* 12893045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12893048:;
  /* 12893048 cmp dword ptr [0x128c11c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c11c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289304f je 0x1289308c */
  if (C.zf) goto L_1289308c;
  /* 12893051 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12893057 push ecx */
  push32((uint32_t)(ECX));
  /* 12893058 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1289305e push edx */
  push32((uint32_t)(EDX));
  /* 1289305f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12893062 push eax */
  push32((uint32_t)(EAX));
  /* 12893063 call dword ptr [0x128c11c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c11c0))), 0x12893069u);
  /* 12893069 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289306c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289306e je 0x1289308c */
  if (C.zf) goto L_1289308c;
  /* 12893070 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893074 jne 0x12893081 */
  if (!C.zf) goto L_12893081;
  /* 12893076 push 0x128bda34 */
  push32((uint32_t)(0x128bda34u));
  /* 1289307b call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x12893081u);
L_12893081:;
  /* 12893081 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12893087 jmp 0x1289318b */
  goto L_1289318b;
L_1289308c:;
  /* 1289308c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289308f mov edx, dword ptr [ecx*4 + 0x128bda38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bda38)));
  /* 12893096 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12893099 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289309b je 0x128930db */
  if (C.zf) goto L_128930db;
  /* 1289309d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128930a0 cmp dword ptr [eax*4 + 0x128bda44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x128bda44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128930a8 je 0x128930db */
  if (C.zf) goto L_128930db;
  /* 128930aa push 0 */
  push32((uint32_t)(0x0u));
  /* 128930ac lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 128930b2 push ecx */
  push32((uint32_t)(ECX));
  /* 128930b3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 128930b9 push edx */
  push32((uint32_t)(EDX));
  /* 128930ba call 0x12897c90 */
  push32(0x128930bfu); f_12897c90();
  /* 128930bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128930c2 push eax */
  push32((uint32_t)(EAX));
  /* 128930c3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 128930c9 push eax */
  push32((uint32_t)(EAX));
  /* 128930ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128930cd mov edx, dword ptr [ecx*4 + 0x128bda44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bda44)));
  /* 128930d4 push edx */
  push32((uint32_t)(EDX));
  /* 128930d5 call dword ptr [0x128c2214] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2214))), 0x128930dbu);
L_128930db:;
  /* 128930db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128930de mov ecx, dword ptr [eax*4 + 0x128bda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x128bda38)));
  /* 128930e5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 128930e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128930ea je 0x128930f9 */
  if (C.zf) goto L_128930f9;
  /* 128930ec lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 128930f2 push edx */
  push32((uint32_t)(EDX));
  /* 128930f3 call dword ptr [0x128c221c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c221c))), 0x128930f9u);
L_128930f9:;
  /* 128930f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128930fc mov ecx, dword ptr [eax*4 + 0x128bda38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x128bda38)));
  /* 12893103 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12893106 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12893108 je 0x12893178 */
  if (C.zf) goto L_12893178;
  /* 1289310a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289310e je 0x1289312d */
  if (C.zf) goto L_1289312d;
  /* 12893110 push 0xa */
  push32((uint32_t)(0xau));
  /* 12893112 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12893118 push edx */
  push32((uint32_t)(EDX));
  /* 12893119 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289311c push eax */
  push32((uint32_t)(EAX));
  /* 1289311d call 0x128979a0 */
  push32(0x12893122u); f_128979a0();
  /* 12893122 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893125 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1289312b jmp 0x12893137 */
  goto L_12893137;
L_1289312d:;
  /* 1289312d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12893137:;
  /* 12893137 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1289313d push ecx */
  push32((uint32_t)(ECX));
  /* 1289313e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12893141 push edx */
  push32((uint32_t)(EDX));
  /* 12893142 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12893148 push eax */
  push32((uint32_t)(EAX));
  /* 12893149 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289314c push ecx */
  push32((uint32_t)(ECX));
  /* 1289314d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12893150 push edx */
  push32((uint32_t)(EDX));
  /* 12893151 call 0x12893190 */
  push32(0x12893156u); f_12893190();
  /* 12893156 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893159 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1289315f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893163 jne 0x12893170 */
  if (!C.zf) goto L_12893170;
  /* 12893165 push 0x128bda34 */
  push32((uint32_t)(0x128bda34u));
  /* 1289316a call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x12893170u);
L_12893170:;
  /* 12893170 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12893176 jmp 0x1289318b */
  goto L_1289318b;
L_12893178:;
  /* 12893178 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289317c jne 0x12893189 */
  if (!C.zf) goto L_12893189;
  /* 1289317e push 0x128bda34 */
  push32((uint32_t)(0x128bda34u));
  /* 12893183 call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x12893189u);
L_12893189:;
  /* 12893189 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289318b:;
  /* 1289318b pop edi */
  EDI = (pop32());
  /* 1289318c mov esp, ebp */
  ESP = (EBP);
  /* 1289318e pop ebp */
  EBP = (pop32());
  /* 1289318f ret  */
  ESPCHK(0x12892e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003190 @ 0x12893190 (780 bytes, 197 insns) */
void f_12893190(void) {
  FTRACE(0x12893190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12893190 push ebp */
  push32((uint32_t)(EBP));
  /* 12893191 mov ebp, esp */
  EBP = (ESP);
  /* 12893193 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12893198 call 0x12898000 */
  push32(0x1289319du); f_12898000();
L_1289319d:;
  /* 1289319d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128931a1 jne 0x128931c8 */
  if (!C.zf) goto L_128931c8;
  /* 128931a3 push 0x128bab64 */
  push32((uint32_t)(0x128bab64u));
  /* 128931a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 128931aa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 128931af push 0x128bab58 */
  push32((uint32_t)(0x128bab58u));
  /* 128931b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 128931b6 call 0x12892e00 */
  push32(0x128931bbu); f_12892e00();
  /* 128931bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128931be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128931c1 jne 0x128931c8 */
  if (!C.zf) goto L_128931c8;
  /* 128931c3 call 0x12892cf0 */
  push32(0x128931c8u); f_12892cf0();
L_128931c8:;
  /* 128931c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128931ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128931cc jne 0x1289319d */
  if (!C.zf) goto L_1289319d;
  /* 128931ce push 0x104 */
  push32((uint32_t)(0x104u));
  /* 128931d3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 128931d9 push ecx */
  push32((uint32_t)(ECX));
  /* 128931da push 0 */
  push32((uint32_t)(0x0u));
  /* 128931dc call dword ptr [0x128c2228] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2228))), 0x128931e2u);
  /* 128931e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128931e4 jne 0x128931fa */
  if (!C.zf) goto L_128931fa;
  /* 128931e6 push 0x128bab40 */
  push32((uint32_t)(0x128bab40u));
  /* 128931eb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 128931f1 push edx */
  push32((uint32_t)(EDX));
  /* 128931f2 call 0x12897e10 */
  push32(0x128931f7u); f_12897e10();
  /* 128931f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128931fa:;
  /* 128931fa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12893200 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12893203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893206 push ecx */
  push32((uint32_t)(ECX));
  /* 12893207 call 0x12897c90 */
  push32(0x1289320cu); f_12897c90();
  /* 1289320c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289320f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893212 jbe 0x1289323d */
  if ((C.cf||C.zf)) goto L_1289323d;
  /* 12893214 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893217 push edx */
  push32((uint32_t)(EDX));
  /* 12893218 call 0x12897c90 */
  push32(0x1289321du); f_12897c90();
  /* 1289321d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893220 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893223 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12893227 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289322a push 3 */
  push32((uint32_t)(0x3u));
  /* 1289322c push 0x128bab3c */
  push32((uint32_t)(0x128bab3cu));
  /* 12893231 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893234 push eax */
  push32((uint32_t)(EAX));
  /* 12893235 call 0x12898680 */
  push32(0x1289323au); f_12898680();
  /* 1289323a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289323d:;
  /* 1289323d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12893240 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12893246 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289324d je 0x12893298 */
  if (C.zf) goto L_12893298;
  /* 1289324f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12893255 push edx */
  push32((uint32_t)(EDX));
  /* 12893256 call 0x12897c90 */
  push32(0x1289325bu); f_12897c90();
  /* 1289325b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289325e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893261 jbe 0x12893298 */
  if ((C.cf||C.zf)) goto L_12893298;
  /* 12893263 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12893269 push eax */
  push32((uint32_t)(EAX));
  /* 1289326a call 0x12897c90 */
  push32(0x1289326fu); f_12897c90();
  /* 1289326f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893272 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12893278 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1289327c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12893282 push 3 */
  push32((uint32_t)(0x3u));
  /* 12893284 push 0x128bab3c */
  push32((uint32_t)(0x128bab3cu));
  /* 12893289 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1289328f push eax */
  push32((uint32_t)(EAX));
  /* 12893290 call 0x12898680 */
  push32(0x12893295u); f_12898680();
  /* 12893295 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12893298:;
  /* 12893298 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289329c jne 0x128932aa */
  if (!C.zf) goto L_128932aa;
  /* 1289329e mov dword ptr [ebp - 0x1114], 0x128baac8 */
  w32((uint32_t)(EBP + -0x1114), (0x128baac8u));
  /* 128932a8 jmp 0x128932b4 */
  goto L_128932b4;
L_128932aa:;
  /* 128932aa mov dword ptr [ebp - 0x1114], 0x128ba83c */
  w32((uint32_t)(EBP + -0x1114), (0x128ba83cu));
L_128932b4:;
  /* 128932b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128932b7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128932ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128932bc je 0x128932c9 */
  if (C.zf) goto L_128932c9;
  /* 128932be mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128932c1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 128932c7 jmp 0x128932d3 */
  goto L_128932d3;
L_128932c9:;
  /* 128932c9 mov dword ptr [ebp - 0x1118], 0x128ba83c */
  w32((uint32_t)(EBP + -0x1118), (0x128ba83cu));
L_128932d3:;
  /* 128932d3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128932d6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128932d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128932db je 0x128932ef */
  if (C.zf) goto L_128932ef;
  /* 128932dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128932e1 jne 0x128932ef */
  if (!C.zf) goto L_128932ef;
  /* 128932e3 mov dword ptr [ebp - 0x111c], 0x128baab8 */
  w32((uint32_t)(EBP + -0x111c), (0x128baab8u));
  /* 128932ed jmp 0x128932f9 */
  goto L_128932f9;
L_128932ef:;
  /* 128932ef mov dword ptr [ebp - 0x111c], 0x128ba83c */
  w32((uint32_t)(EBP + -0x111c), (0x128ba83cu));
L_128932f9:;
  /* 128932f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128932fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128932ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12893301 je 0x1289330f */
  if (C.zf) goto L_1289330f;
  /* 12893303 mov dword ptr [ebp - 0x1120], 0x128baab4 */
  w32((uint32_t)(EBP + -0x1120), (0x128baab4u));
  /* 1289330d jmp 0x12893319 */
  goto L_12893319;
L_1289330f:;
  /* 1289330f mov dword ptr [ebp - 0x1120], 0x128ba83c */
  w32((uint32_t)(EBP + -0x1120), (0x128ba83cu));
L_12893319:;
  /* 12893319 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289331d je 0x1289332a */
  if (C.zf) goto L_1289332a;
  /* 1289331f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12893322 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12893328 jmp 0x12893334 */
  goto L_12893334;
L_1289332a:;
  /* 1289332a mov dword ptr [ebp - 0x1124], 0x128ba83c */
  w32((uint32_t)(EBP + -0x1124), (0x128ba83cu));
L_12893334:;
  /* 12893334 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893338 je 0x12893346 */
  if (C.zf) goto L_12893346;
  /* 1289333a mov dword ptr [ebp - 0x1128], 0x128baaac */
  w32((uint32_t)(EBP + -0x1128), (0x128baaacu));
  /* 12893344 jmp 0x12893350 */
  goto L_12893350;
L_12893346:;
  /* 12893346 mov dword ptr [ebp - 0x1128], 0x128ba83c */
  w32((uint32_t)(EBP + -0x1128), (0x128ba83cu));
L_12893350:;
  /* 12893350 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893354 je 0x12893361 */
  if (C.zf) goto L_12893361;
  /* 12893356 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12893359 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1289335f jmp 0x1289336b */
  goto L_1289336b;
L_12893361:;
  /* 12893361 mov dword ptr [ebp - 0x112c], 0x128ba83c */
  w32((uint32_t)(EBP + -0x112c), (0x128ba83cu));
L_1289336b:;
  /* 1289336b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289336f je 0x1289337d */
  if (C.zf) goto L_1289337d;
  /* 12893371 mov dword ptr [ebp - 0x1130], 0x128baaa4 */
  w32((uint32_t)(EBP + -0x1130), (0x128baaa4u));
  /* 1289337b jmp 0x12893387 */
  goto L_12893387;
L_1289337d:;
  /* 1289337d mov dword ptr [ebp - 0x1130], 0x128ba83c */
  w32((uint32_t)(EBP + -0x1130), (0x128ba83cu));
L_12893387:;
  /* 12893387 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289338e je 0x1289339e */
  if (C.zf) goto L_1289339e;
  /* 12893390 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12893396 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1289339c jmp 0x128933a8 */
  goto L_128933a8;
L_1289339e:;
  /* 1289339e mov dword ptr [ebp - 0x1134], 0x128ba83c */
  w32((uint32_t)(EBP + -0x1134), (0x128ba83cu));
L_128933a8:;
  /* 128933a8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128933af je 0x128933bd */
  if (C.zf) goto L_128933bd;
  /* 128933b1 mov dword ptr [ebp - 0x1138], 0x128baa98 */
  w32((uint32_t)(EBP + -0x1138), (0x128baa98u));
  /* 128933bb jmp 0x128933c7 */
  goto L_128933c7;
L_128933bd:;
  /* 128933bd mov dword ptr [ebp - 0x1138], 0x128ba83c */
  w32((uint32_t)(EBP + -0x1138), (0x128ba83cu));
L_128933c7:;
  /* 128933c7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 128933cd push edx */
  push32((uint32_t)(EDX));
  /* 128933ce mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 128933d4 push eax */
  push32((uint32_t)(EAX));
  /* 128933d5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 128933db push ecx */
  push32((uint32_t)(ECX));
  /* 128933dc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 128933e2 push edx */
  push32((uint32_t)(EDX));
  /* 128933e3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 128933e9 push eax */
  push32((uint32_t)(EAX));
  /* 128933ea mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 128933f0 push ecx */
  push32((uint32_t)(ECX));
  /* 128933f1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 128933f7 push edx */
  push32((uint32_t)(EDX));
  /* 128933f8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 128933fe push eax */
  push32((uint32_t)(EAX));
  /* 128933ff mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12893405 push ecx */
  push32((uint32_t)(ECX));
  /* 12893406 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1289340c push edx */
  push32((uint32_t)(EDX));
  /* 1289340d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893410 push eax */
  push32((uint32_t)(EAX));
  /* 12893411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12893414 mov edx, dword ptr [ecx*4 + 0x128bda50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bda50)));
  /* 1289341b push edx */
  push32((uint32_t)(EDX));
  /* 1289341c push 0x128baa44 */
  push32((uint32_t)(0x128baa44u));
  /* 12893421 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12893426 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1289342c push eax */
  push32((uint32_t)(EAX));
  /* 1289342d call 0x12897d10 */
  push32(0x12893432u); f_12897d10();
  /* 12893432 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893437 jge 0x1289344d */
  if ((C.sf==C.of)) goto L_1289344d;
  /* 12893439 push 0x128ba9a8 */
  push32((uint32_t)(0x128ba9a8u));
  /* 1289343e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12893444 push ecx */
  push32((uint32_t)(ECX));
  /* 12893445 call 0x12897e10 */
  push32(0x1289344au); f_12897e10();
  /* 1289344a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289344d:;
  /* 1289344d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12893452 push 0x128baa20 */
  push32((uint32_t)(0x128baa20u));
  /* 12893457 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1289345d push edx */
  push32((uint32_t)(EDX));
  /* 1289345e call 0x128985c0 */
  push32(0x12893463u); f_128985c0();
  /* 12893463 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893466 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1289346c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893473 jne 0x12893486 */
  if (!C.zf) goto L_12893486;
  /* 12893475 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12893477 call 0x12898300 */
  push32(0x1289347cu); f_12898300();
  /* 1289347c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289347f push 3 */
  push32((uint32_t)(0x3u));
  /* 12893481 call 0x12894620 */
  push32(0x12893486u); f_12894620();
L_12893486:;
  /* 12893486 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289348d jne 0x12893496 */
  if (!C.zf) goto L_12893496;
  /* 1289348f mov eax, 1 */
  EAX = (0x1u);
  /* 12893494 jmp 0x12893498 */
  goto L_12893498;
L_12893496:;
  /* 12893496 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12893498:;
  /* 12893498 mov esp, ebp */
  ESP = (EBP);
  /* 1289349a pop ebp */
  EBP = (pop32());
  /* 1289349b ret  */
  ESPCHK(0x12893190u, _esp0);
  ESP += 4; return;
}

/* FUN_100034a0 @ 0x128934a0 (628 bytes, 214 insns) */
void f_128934a0(void) {
  FTRACE(0x128934a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128934a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128934a1 mov ebp, esp */
  EBP = (ESP);
  /* 128934a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128934a6 push ebx */
  push32((uint32_t)(EBX));
  /* 128934a7 push esi */
  push32((uint32_t)(ESI));
  /* 128934a8 push edi */
  push32((uint32_t)(EDI));
L_128934a9:;
  /* 128934a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128934ad jne 0x128934cd */
  if (!C.zf) goto L_128934cd;
  /* 128934af push 0x128babc8 */
  push32((uint32_t)(0x128babc8u));
  /* 128934b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128934b6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 128934b8 push 0x128babbc */
  push32((uint32_t)(0x128babbcu));
  /* 128934bd push 2 */
  push32((uint32_t)(0x2u));
  /* 128934bf call 0x12892e00 */
  push32(0x128934c4u); f_12892e00();
  /* 128934c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128934c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128934ca jne 0x128934cd */
  if (!C.zf) goto L_128934cd;
  /* 128934cc int3  */
  x86_unimpl("int3 @ 0x128934cc");
L_128934cd:;
  /* 128934cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128934cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128934d1 jne 0x128934a9 */
  if (!C.zf) goto L_128934a9;
  /* 128934d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128934d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128934d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128934dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 128934df mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128934e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128934e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 128934e8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 128934ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128934f0 je 0x128934ff */
  if (C.zf) goto L_128934ff;
  /* 128934f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128934f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 128934f8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 128934fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128934fd je 0x12893515 */
  if (C.zf) goto L_12893515;
L_128934ff:;
  /* 128934ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893502 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12893505 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12893507 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289350a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1289350d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12893510 jmp 0x1289370d */
  goto L_1289370d;
L_12893515:;
  /* 12893515 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893518 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1289351b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1289351e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893520 je 0x1289356c */
  if (C.zf) goto L_1289356c;
  /* 12893522 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893525 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1289352c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289352f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12893532 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12893535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893537 je 0x12893555 */
  if (C.zf) goto L_12893555;
  /* 12893539 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289353c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289353f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12893542 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12893544 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893547 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289354a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1289354d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893550 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12893553 jmp 0x1289356c */
  goto L_1289356c;
L_12893555:;
  /* 12893555 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893558 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289355b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1289355e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893561 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12893564 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12893567 jmp 0x1289370d */
  goto L_1289370d;
L_1289356c:;
  /* 1289356c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289356f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12893572 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12893575 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893578 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1289357b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289357e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12893581 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12893584 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893587 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1289358a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289358d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12893594 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289359b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289359e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 128935a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128935a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 128935a7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 128935ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128935af jne 0x128935df */
  if (!C.zf) goto L_128935df;
  /* 128935b1 cmp dword ptr [ebp - 8], 0x128bdb70 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x128bdb70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128935b8 je 0x128935c3 */
  if (C.zf) goto L_128935c3;
  /* 128935ba cmp dword ptr [ebp - 8], 0x128bdb90 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x128bdb90u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128935c1 jne 0x128935d3 */
  if (!C.zf) goto L_128935d3;
L_128935c3:;
  /* 128935c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128935c6 push edx */
  push32((uint32_t)(EDX));
  /* 128935c7 call 0x12898cb0 */
  push32(0x128935ccu); f_12898cb0();
  /* 128935cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128935cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128935d1 jne 0x128935df */
  if (!C.zf) goto L_128935df;
L_128935d3:;
  /* 128935d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128935d6 push eax */
  push32((uint32_t)(EAX));
  /* 128935d7 call 0x12898be0 */
  push32(0x128935dcu); f_12898be0();
  /* 128935dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128935df:;
  /* 128935df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128935e2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 128935e5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 128935eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128935ed je 0x128936cb */
  if (C.zf) goto L_128936cb;
L_128935f3:;
  /* 128935f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128935f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128935f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 128935fb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128935fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12893600 jge 0x12893623 */
  if ((C.sf==C.of)) goto L_12893623;
  /* 12893602 push 0x128bab7c */
  push32((uint32_t)(0x128bab7cu));
  /* 12893607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12893609 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1289360e push 0x128babbc */
  push32((uint32_t)(0x128babbcu));
  /* 12893613 push 2 */
  push32((uint32_t)(0x2u));
  /* 12893615 call 0x12892e00 */
  push32(0x1289361au); f_12892e00();
  /* 1289361a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289361d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893620 jne 0x12893623 */
  if (!C.zf) goto L_12893623;
  /* 12893622 int3  */
  x86_unimpl("int3 @ 0x12893622");
L_12893623:;
  /* 12893623 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12893625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893627 jne 0x128935f3 */
  if (!C.zf) goto L_128935f3;
  /* 12893629 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289362c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289362f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12893631 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12893634 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12893637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289363a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1289363d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893640 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893643 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12893645 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893648 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1289364b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289364e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893651 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12893654 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893658 jle 0x12893676 */
  if ((C.zf||C.sf!=C.of)) goto L_12893676;
  /* 1289365a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289365d push ecx */
  push32((uint32_t)(ECX));
  /* 1289365e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893661 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12893664 push eax */
  push32((uint32_t)(EAX));
  /* 12893665 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12893668 push ecx */
  push32((uint32_t)(ECX));
  /* 12893669 call 0x128988d0 */
  push32(0x1289366eu); f_128988d0();
  /* 1289366e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893671 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12893674 jmp 0x128936be */
  goto L_128936be;
L_12893676:;
  /* 12893676 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289367a je 0x12893699 */
  if (C.zf) goto L_12893699;
  /* 1289367c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289367f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12893682 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12893685 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12893688 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289368b mov ecx, dword ptr [edx*4 + 0x128c1060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x128c1060)));
  /* 12893692 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893694 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12893697 jmp 0x128936a0 */
  goto L_128936a0;
L_12893699:;
  /* 12893699 mov dword ptr [ebp - 0x14], 0x128bda68 */
  w32((uint32_t)(EBP + -0x14), (0x128bda68u));
L_128936a0:;
  /* 128936a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128936a3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 128936a7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 128936aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128936ac je 0x128936be */
  if (C.zf) goto L_128936be;
  /* 128936ae push 2 */
  push32((uint32_t)(0x2u));
  /* 128936b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128936b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128936b5 push ecx */
  push32((uint32_t)(ECX));
  /* 128936b6 call 0x12898780 */
  push32(0x128936bbu); f_12898780();
  /* 128936bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128936be:;
  /* 128936be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128936c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 128936c4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 128936c7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 128936c9 jmp 0x128936e9 */
  goto L_128936e9;
L_128936cb:;
  /* 128936cb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 128936d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128936d5 push edx */
  push32((uint32_t)(EDX));
  /* 128936d6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 128936d9 push eax */
  push32((uint32_t)(EAX));
  /* 128936da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128936dd push ecx */
  push32((uint32_t)(ECX));
  /* 128936de call 0x128988d0 */
  push32(0x128936e3u); f_128988d0();
  /* 128936e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128936e6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_128936e9:;
  /* 128936e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128936ec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128936ef je 0x12893705 */
  if (C.zf) goto L_12893705;
  /* 128936f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128936f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 128936f7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 128936fa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128936fd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12893700 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12893703 jmp 0x1289370d */
  goto L_1289370d;
L_12893705:;
  /* 12893705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12893708 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1289370d:;
  /* 1289370d pop edi */
  EDI = (pop32());
  /* 1289370e pop esi */
  ESI = (pop32());
  /* 1289370f pop ebx */
  EBX = (pop32());
  /* 12893710 mov esp, ebp */
  ESP = (EBP);
  /* 12893712 pop ebp */
  EBP = (pop32());
  /* 12893713 ret  */
  ESPCHK(0x128934a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003720 @ 0x12893720 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12893720(void) {
  FTRACE(0x12893720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12893720 push ebp */
  push32((uint32_t)(EBP));
  /* 12893721 mov ebp, esp */
  EBP = (ESP);
  /* 12893723 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12893729 push ebx */
  push32((uint32_t)(EBX));
  /* 1289372a push esi */
  push32((uint32_t)(ESI));
  /* 1289372b push edi */
  push32((uint32_t)(EDI));
  /* 1289372c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12893733 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1289373d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12893744:;
  /* 12893744 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12893747 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12893749 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1289374c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893750 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12893753 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893756 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12893759 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289375b je 0x12894337 */
  if (C.zf) goto L_12894337;
  /* 12893761 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893768 jl 0x12894337 */
  if ((C.sf!=C.of)) goto L_12894337;
  /* 1289376e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893772 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893775 jl 0x12893796 */
  if ((C.sf!=C.of)) goto L_12893796;
  /* 12893777 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1289377b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289377e jg 0x12893796 */
  if ((!C.zf&&C.sf==C.of)) goto L_12893796;
  /* 12893780 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893784 movsx ecx, byte ptr [eax + 0x128babb4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x128babb4))));
  /* 1289378b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1289378e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12893794 jmp 0x128937a0 */
  goto L_128937a0;
L_12893796:;
  /* 12893796 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_128937a0:;
  /* 128937a0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 128937a6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 128937a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128937ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128937af movsx edx, byte ptr [ecx + eax*8 + 0x128babd4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x128babd4))));
  /* 128937b7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 128937ba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 128937bd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128937c0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 128937c6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128937cd ja 0x12894332 */
  if ((!C.cf&&!C.zf)) goto L_12894332;
  /* 128937d3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 128937d9 jmp dword ptr [ecx*4 + 0x12894344] */
  switch (ECX) {
    case 0: goto L_128937e0;
    case 1: goto L_1289387a;
    case 2: goto L_128938bc;
    case 3: goto L_1289392b;
    case 4: goto L_12893983;
    case 5: goto L_12893992;
    case 6: goto L_128939de;
    case 7: goto L_12893a71;
    case 8: goto L_12893908;
    case 9: goto L_12893913;
    case 10: goto L_128938fe;
    case 11: goto L_128938f3;
    case 12: goto L_1289391e;
    case 13: goto L_12893926;
    default: x86_unimpl("switch@0x128937d9 out of table"); return;
  }
L_128937e0:;
  /* 128937e0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 128937e7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 128937ea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 128937f0 mov eax, dword ptr [0x128bdde8] */
  EAX = (r32((uint32_t)(0x128bdde8)));
  /* 128937f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128937f7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 128937fb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12893801 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12893803 je 0x1289385d */
  if (C.zf) goto L_1289385d;
  /* 12893805 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1289380b push edx */
  push32((uint32_t)(EDX));
  /* 1289380c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289380f push eax */
  push32((uint32_t)(EAX));
  /* 12893810 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893814 push ecx */
  push32((uint32_t)(ECX));
  /* 12893815 call 0x12894450 */
  push32(0x1289381au); f_12894450();
  /* 1289381a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289381d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12893820 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12893822 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12893825 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12893828 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289382b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1289382e:;
  /* 1289382e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893832 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12893834 jne 0x12893857 */
  if (!C.zf) goto L_12893857;
  /* 12893836 push 0x128bac54 */
  push32((uint32_t)(0x128bac54u));
  /* 1289383b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289383d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12893842 push 0x128bac48 */
  push32((uint32_t)(0x128bac48u));
  /* 12893847 push 2 */
  push32((uint32_t)(0x2u));
  /* 12893849 call 0x12892e00 */
  push32(0x1289384eu); f_12892e00();
  /* 1289384e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893851 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893854 jne 0x12893857 */
  if (!C.zf) goto L_12893857;
  /* 12893856 int3  */
  x86_unimpl("int3 @ 0x12893856");
L_12893857:;
  /* 12893857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12893859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289385b jne 0x1289382e */
  if (!C.zf) goto L_1289382e;
L_1289385d:;
  /* 1289385d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12893863 push ecx */
  push32((uint32_t)(ECX));
  /* 12893864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12893867 push edx */
  push32((uint32_t)(EDX));
  /* 12893868 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1289386c push eax */
  push32((uint32_t)(EAX));
  /* 1289386d call 0x12894450 */
  push32(0x12893872u); f_12894450();
  /* 12893872 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893875 jmp 0x12894332 */
  goto L_12894332;
L_1289387a:;
  /* 1289387a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12893881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893884 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1289388a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12893890 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12893896 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1289389c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1289389f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128938a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 128938b0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 128938b7 jmp 0x12894332 */
  goto L_12894332;
L_128938bc:;
  /* 128938bc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 128938c0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 128938c6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 128938cc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128938cf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 128938d5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128938dc ja 0x12893926 */
  if ((!C.cf&&!C.zf)) goto L_12893926;
  /* 128938de mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 128938e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128938e6 mov al, byte ptr [ecx + 0x1289437c] */
  AL = (r8((uint32_t)(ECX + 0x1289437c)));
  /* 128938ec jmp dword ptr [eax*4 + 0x12894364] */
  switch (EAX) {
    case 0: goto L_12893908;
    case 1: goto L_12893913;
    case 2: goto L_128938fe;
    case 3: goto L_128938f3;
    case 4: goto L_1289391e;
    case 5: goto L_12893926;
    default: x86_unimpl("switch@0x128938ec out of table"); return;
  }
L_128938f3:;
  /* 128938f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128938f6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 128938f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128938fc jmp 0x12893926 */
  goto L_12893926;
L_128938fe:;
  /* 128938fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893901 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12893903 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12893906 jmp 0x12893926 */
  goto L_12893926;
L_12893908:;
  /* 12893908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289390b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1289390e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12893911 jmp 0x12893926 */
  goto L_12893926;
L_12893913:;
  /* 12893913 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893916 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12893919 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1289391c jmp 0x12893926 */
  goto L_12893926;
L_1289391e:;
  /* 1289391e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893921 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12893923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12893926:;
  /* 12893926 jmp 0x12894332 */
  goto L_12894332;
L_1289392b:;
  /* 1289392b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1289392f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893932 jne 0x12893967 */
  if (!C.zf) goto L_12893967;
  /* 12893934 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12893937 push edx */
  push32((uint32_t)(EDX));
  /* 12893938 call 0x12894560 */
  push32(0x1289393du); f_12894560();
  /* 1289393d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893940 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12893946 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289394d jge 0x12893965 */
  if ((C.sf==C.of)) goto L_12893965;
  /* 1289394f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893952 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12893954 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12893957 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1289395d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289395f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12893965:;
  /* 12893965 jmp 0x1289397e */
  goto L_1289397e;
L_12893967:;
  /* 12893967 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1289396d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12893970 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893974 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12893978 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1289397e:;
  /* 1289397e jmp 0x12894332 */
  goto L_12894332;
L_12893983:;
  /* 12893983 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1289398d jmp 0x12894332 */
  goto L_12894332;
L_12893992:;
  /* 12893992 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893996 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893999 jne 0x128939c2 */
  if (!C.zf) goto L_128939c2;
  /* 1289399b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1289399e push eax */
  push32((uint32_t)(EAX));
  /* 1289399f call 0x12894560 */
  push32(0x128939a4u); f_12894560();
  /* 128939a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128939a7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 128939ad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128939b4 jge 0x128939c0 */
  if ((C.sf==C.of)) goto L_128939c0;
  /* 128939b6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_128939c0:;
  /* 128939c0 jmp 0x128939d9 */
  goto L_128939d9;
L_128939c2:;
  /* 128939c2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 128939c8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128939cb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 128939cf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 128939d3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_128939d9:;
  /* 128939d9 jmp 0x12894332 */
  goto L_12894332;
L_128939de:;
  /* 128939de movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 128939e2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 128939e8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 128939ee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128939f1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 128939f7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128939fe ja 0x12893a6c */
  if ((!C.cf&&!C.zf)) goto L_12893a6c;
  /* 12893a00 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12893a06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12893a08 mov al, byte ptr [ecx + 0x128943a1] */
  AL = (r8((uint32_t)(ECX + 0x128943a1)));
  /* 12893a0e jmp dword ptr [eax*4 + 0x1289438d] */
  switch (EAX) {
    case 0: goto L_12893a20;
    case 1: goto L_12893a59;
    case 2: goto L_12893a15;
    case 3: goto L_12893a63;
    case 4: goto L_12893a6c;
    default: x86_unimpl("switch@0x12893a0e out of table"); return;
  }
L_12893a15:;
  /* 12893a15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893a18 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12893a1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12893a1e jmp 0x12893a6c */
  goto L_12893a6c;
L_12893a20:;
  /* 12893a20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12893a23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12893a26 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893a29 jne 0x12893a4b */
  if (!C.zf) goto L_12893a4b;
  /* 12893a2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12893a2e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12893a32 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893a35 jne 0x12893a4b */
  if (!C.zf) goto L_12893a4b;
  /* 12893a37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12893a3a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893a3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12893a40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893a43 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12893a46 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12893a49 jmp 0x12893a57 */
  goto L_12893a57;
L_12893a4b:;
  /* 12893a4b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12893a52 jmp 0x128937e0 */
  goto L_128937e0;
L_12893a57:;
  /* 12893a57 jmp 0x12893a6c */
  goto L_12893a6c;
L_12893a59:;
  /* 12893a59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893a5c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12893a5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12893a61 jmp 0x12893a6c */
  goto L_12893a6c;
L_12893a63:;
  /* 12893a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893a66 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12893a69 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12893a6c:;
  /* 12893a6c jmp 0x12894332 */
  goto L_12894332;
L_12893a71:;
  /* 12893a71 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893a75 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12893a7b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12893a81 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12893a84 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12893a8a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893a91 ja 0x12894157 */
  if ((!C.cf&&!C.zf)) goto L_12894157;
  /* 12893a97 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12893a9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12893a9f mov cl, byte ptr [edx + 0x1289440c] */
  CL = (r8((uint32_t)(EDX + 0x1289440c)));
  /* 12893aa5 jmp dword ptr [ecx*4 + 0x128943d0] */
  switch (ECX) {
    case 0: goto L_12893aac;
    case 1: goto L_12893d40;
    case 2: goto L_12893bd0;
    case 3: goto L_12893e79;
    case 4: goto L_12893b3b;
    case 5: goto L_12893ac1;
    case 6: goto L_12893e4b;
    case 7: goto L_12893d50;
    case 8: goto L_12893cf5;
    case 9: goto L_12893ec5;
    case 10: goto L_12893e6f;
    case 11: goto L_12893be6;
    case 12: goto L_12893e63;
    case 13: goto L_12893e85;
    case 14: goto L_12894157;
    default: x86_unimpl("switch@0x12893aa5 out of table"); return;
  }
L_12893aac:;
  /* 12893aac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893aaf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12893ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893ab6 jne 0x12893ac1 */
  if (!C.zf) goto L_12893ac1;
  /* 12893ab8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893abb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12893abe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12893ac1:;
  /* 12893ac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893ac4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12893aca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12893acc je 0x12893b07 */
  if (C.zf) goto L_12893b07;
  /* 12893ace lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12893ad1 push eax */
  push32((uint32_t)(EAX));
  /* 12893ad2 call 0x128945a0 */
  push32(0x12893ad7u); f_128945a0();
  /* 12893ad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893ada mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12893ade mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12893ae2 push ecx */
  push32((uint32_t)(ECX));
  /* 12893ae3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12893ae9 push edx */
  push32((uint32_t)(EDX));
  /* 12893aea call 0x12898f20 */
  push32(0x12893aefu); f_12898f20();
  /* 12893aef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893af2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12893af5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893af9 jge 0x12893b05 */
  if ((C.sf==C.of)) goto L_12893b05;
  /* 12893afb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12893b05:;
  /* 12893b05 jmp 0x12893b2d */
  goto L_12893b2d;
L_12893b07:;
  /* 12893b07 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12893b0a push eax */
  push32((uint32_t)(EAX));
  /* 12893b0b call 0x12894560 */
  push32(0x12893b10u); f_12894560();
  /* 12893b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893b13 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12893b1a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12893b20 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12893b26 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12893b2d:;
  /* 12893b2d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12893b33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12893b36 jmp 0x12894157 */
  goto L_12894157;
L_12893b3b:;
  /* 12893b3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12893b3e push eax */
  push32((uint32_t)(EAX));
  /* 12893b3f call 0x12894560 */
  push32(0x12893b44u); f_12894560();
  /* 12893b44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893b47 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12893b4d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893b54 je 0x12893b62 */
  if (C.zf) goto L_12893b62;
  /* 12893b56 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12893b5c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893b60 jne 0x12893b7c */
  if (!C.zf) goto L_12893b7c;
L_12893b62:;
  /* 12893b62 mov edx, dword ptr [0x128bda5c] */
  EDX = (r32((uint32_t)(0x128bda5c)));
  /* 12893b68 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12893b6b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12893b6e push eax */
  push32((uint32_t)(EAX));
  /* 12893b6f call 0x12897c90 */
  push32(0x12893b74u); f_12897c90();
  /* 12893b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893b77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12893b7a jmp 0x12893bcb */
  goto L_12893bcb;
L_12893b7c:;
  /* 12893b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893b7f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12893b85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12893b87 je 0x12893bac */
  if (C.zf) goto L_12893bac;
  /* 12893b89 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12893b8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12893b92 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12893b95 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12893b9b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12893b9e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12893ba0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12893ba3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12893baa jmp 0x12893bcb */
  goto L_12893bcb;
L_12893bac:;
  /* 12893bac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12893bb3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12893bb9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12893bbc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12893bbf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12893bc5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12893bc8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12893bcb:;
  /* 12893bcb jmp 0x12894157 */
  goto L_12894157;
L_12893bd0:;
  /* 12893bd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893bd3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12893bd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12893bdb jne 0x12893be6 */
  if (!C.zf) goto L_12893be6;
  /* 12893bdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893be0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12893be3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12893be6:;
  /* 12893be6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893bed jne 0x12893bfb */
  if (!C.zf) goto L_12893bfb;
  /* 12893bef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12893bf9 jmp 0x12893c07 */
  goto L_12893c07;
L_12893bfb:;
  /* 12893bfb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12893c01 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12893c07:;
  /* 12893c07 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12893c0d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12893c13 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12893c16 push edx */
  push32((uint32_t)(EDX));
  /* 12893c17 call 0x12894560 */
  push32(0x12893c1cu); f_12894560();
  /* 12893c1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893c1f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12893c22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893c25 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12893c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893c2c je 0x12893c96 */
  if (C.zf) goto L_12893c96;
  /* 12893c2e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893c32 jne 0x12893c3d */
  if (!C.zf) goto L_12893c3d;
  /* 12893c34 mov ecx, dword ptr [0x128bda60] */
  ECX = (r32((uint32_t)(0x128bda60)));
  /* 12893c3a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12893c3d:;
  /* 12893c3d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12893c44 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12893c47 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12893c4d:;
  /* 12893c4d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12893c53 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12893c59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12893c5c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12893c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893c64 je 0x12893c86 */
  if (C.zf) goto L_12893c86;
  /* 12893c66 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12893c6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12893c6e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12893c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893c73 je 0x12893c86 */
  if (C.zf) goto L_12893c86;
  /* 12893c75 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12893c7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893c7e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12893c84 jmp 0x12893c4d */
  goto L_12893c4d;
L_12893c86:;
  /* 12893c86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12893c8c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12893c8f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12893c91 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12893c94 jmp 0x12893cf0 */
  goto L_12893cf0;
L_12893c96:;
  /* 12893c96 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893c9a jne 0x12893ca4 */
  if (!C.zf) goto L_12893ca4;
  /* 12893c9c mov eax, dword ptr [0x128bda5c] */
  EAX = (r32((uint32_t)(0x128bda5c)));
  /* 12893ca1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12893ca4:;
  /* 12893ca4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12893ca7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12893cad:;
  /* 12893cad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12893cb3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12893cb9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12893cbc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12893cc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12893cc4 je 0x12893ce4 */
  if (C.zf) goto L_12893ce4;
  /* 12893cc6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12893ccc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12893ccf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12893cd1 je 0x12893ce4 */
  if (C.zf) goto L_12893ce4;
  /* 12893cd3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12893cd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893cdc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12893ce2 jmp 0x12893cad */
  goto L_12893cad;
L_12893ce4:;
  /* 12893ce4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12893cea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12893ced mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12893cf0:;
  /* 12893cf0 jmp 0x12894157 */
  goto L_12894157;
L_12893cf5:;
  /* 12893cf5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12893cf8 push edx */
  push32((uint32_t)(EDX));
  /* 12893cf9 call 0x12894560 */
  push32(0x12893cfeu); f_12894560();
  /* 12893cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893d01 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12893d07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893d0a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12893d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893d0f je 0x12893d23 */
  if (C.zf) goto L_12893d23;
  /* 12893d11 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12893d17 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12893d1e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12893d21 jmp 0x12893d31 */
  goto L_12893d31;
L_12893d23:;
  /* 12893d23 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12893d29 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12893d2f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12893d31:;
  /* 12893d31 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12893d3b jmp 0x12894157 */
  goto L_12894157;
L_12893d40:;
  /* 12893d40 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12893d47 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12893d4a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12893d4d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12893d50:;
  /* 12893d50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893d53 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12893d55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12893d58 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12893d5e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12893d61 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893d68 jge 0x12893d76 */
  if ((C.sf==C.of)) goto L_12893d76;
  /* 12893d6a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12893d74 jmp 0x12893d92 */
  goto L_12893d92;
L_12893d76:;
  /* 12893d76 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893d7d jne 0x12893d92 */
  if (!C.zf) goto L_12893d92;
  /* 12893d7f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893d83 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893d86 jne 0x12893d92 */
  if (!C.zf) goto L_12893d92;
  /* 12893d88 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12893d92:;
  /* 12893d92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12893d95 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893d98 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12893d9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12893d9e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12893da1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12893da3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12893da6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12893dac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12893db2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12893db5 push ecx */
  push32((uint32_t)(ECX));
  /* 12893db6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12893dbc push edx */
  push32((uint32_t)(EDX));
  /* 12893dbd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893dc1 push eax */
  push32((uint32_t)(EAX));
  /* 12893dc2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12893dc5 push ecx */
  push32((uint32_t)(ECX));
  /* 12893dc6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12893dcc push edx */
  push32((uint32_t)(EDX));
  /* 12893dcd call dword ptr [0x128bddd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bddd0))), 0x12893dd3u);
  /* 12893dd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893dd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893dd9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12893dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893de0 je 0x12893df8 */
  if (C.zf) goto L_12893df8;
  /* 12893de2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893de9 jne 0x12893df8 */
  if (!C.zf) goto L_12893df8;
  /* 12893deb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12893dee push ecx */
  push32((uint32_t)(ECX));
  /* 12893def call dword ptr [0x128bdddc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bdddc))), 0x12893df5u);
  /* 12893df5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12893df8:;
  /* 12893df8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12893dfc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893dff jne 0x12893e1a */
  if (!C.zf) goto L_12893e1a;
  /* 12893e01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893e04 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12893e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893e0b jne 0x12893e1a */
  if (!C.zf) goto L_12893e1a;
  /* 12893e0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12893e10 push ecx */
  push32((uint32_t)(ECX));
  /* 12893e11 call dword ptr [0x128bddd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bddd4))), 0x12893e17u);
  /* 12893e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12893e1a:;
  /* 12893e1a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12893e1d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12893e20 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893e23 jne 0x12893e37 */
  if (!C.zf) goto L_12893e37;
  /* 12893e25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893e28 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12893e2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12893e2e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12893e31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893e34 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12893e37:;
  /* 12893e37 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12893e3a push eax */
  push32((uint32_t)(EAX));
  /* 12893e3b call 0x12897c90 */
  push32(0x12893e40u); f_12897c90();
  /* 12893e40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893e43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12893e46 jmp 0x12894157 */
  goto L_12894157;
L_12893e4b:;
  /* 12893e4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893e4e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12893e51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12893e54 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12893e5e jmp 0x12893ee5 */
  goto L_12893ee5;
L_12893e63:;
  /* 12893e63 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12893e6d jmp 0x12893ee5 */
  goto L_12893ee5;
L_12893e6f:;
  /* 12893e6f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12893e79:;
  /* 12893e79 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12893e83 jmp 0x12893e8f */
  goto L_12893e8f;
L_12893e85:;
  /* 12893e85 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12893e8f:;
  /* 12893e8f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12893e99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893e9c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12893ea2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12893ea4 je 0x12893ec3 */
  if (C.zf) goto L_12893ec3;
  /* 12893ea6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12893ead mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12893eb3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893eb6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12893ebc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12893ec3:;
  /* 12893ec3 jmp 0x12893ee5 */
  goto L_12893ee5;
L_12893ec5:;
  /* 12893ec5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12893ecf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893ed2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12893ed8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12893eda je 0x12893ee5 */
  if (C.zf) goto L_12893ee5;
  /* 12893edc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893edf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12893ee2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12893ee5:;
  /* 12893ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893ee8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12893eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893eef je 0x12893f0e */
  if (C.zf) goto L_12893f0e;
  /* 12893ef1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12893ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 12893ef5 call 0x12894580 */
  push32(0x12893efau); f_12894580();
  /* 12893efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893efd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12893f03 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12893f09 jmp 0x12893f9f */
  goto L_12893f9f;
L_12893f0e:;
  /* 12893f0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893f11 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12893f14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12893f16 je 0x12893f60 */
  if (C.zf) goto L_12893f60;
  /* 12893f18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893f1b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12893f1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893f20 je 0x12893f40 */
  if (C.zf) goto L_12893f40;
  /* 12893f22 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12893f25 push ecx */
  push32((uint32_t)(ECX));
  /* 12893f26 call 0x12894560 */
  push32(0x12893f2bu); f_12894560();
  /* 12893f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893f2e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12893f31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12893f32 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12893f38 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12893f3e jmp 0x12893f5e */
  goto L_12893f5e;
L_12893f40:;
  /* 12893f40 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12893f43 push edx */
  push32((uint32_t)(EDX));
  /* 12893f44 call 0x12894560 */
  push32(0x12893f49u); f_12894560();
  /* 12893f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893f4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12893f51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12893f52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12893f58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12893f5e:;
  /* 12893f5e jmp 0x12893f9f */
  goto L_12893f9f;
L_12893f60:;
  /* 12893f60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893f63 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12893f66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12893f68 je 0x12893f85 */
  if (C.zf) goto L_12893f85;
  /* 12893f6a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12893f6d push ecx */
  push32((uint32_t)(ECX));
  /* 12893f6e call 0x12894560 */
  push32(0x12893f73u); f_12894560();
  /* 12893f73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893f76 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12893f77 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12893f7d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12893f83 jmp 0x12893f9f */
  goto L_12893f9f;
L_12893f85:;
  /* 12893f85 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12893f88 push edx */
  push32((uint32_t)(EDX));
  /* 12893f89 call 0x12894560 */
  push32(0x12893f8eu); f_12894560();
  /* 12893f8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12893f91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12893f93 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12893f99 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12893f9f:;
  /* 12893f9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893fa2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12893fa5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12893fa7 je 0x12893fe7 */
  if (C.zf) goto L_12893fe7;
  /* 12893fa9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893fb0 jg 0x12893fe7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12893fe7;
  /* 12893fb2 jl 0x12893fbd */
  if ((C.sf!=C.of)) goto L_12893fbd;
  /* 12893fb4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12893fbb jae 0x12893fe7 */
  if (!C.cf) goto L_12893fe7;
L_12893fbd:;
  /* 12893fbd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12893fc3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12893fc5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12893fcb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12893fce neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12893fd0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12893fd6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12893fdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12893fdf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12893fe2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12893fe5 jmp 0x12893fff */
  goto L_12893fff;
L_12893fe7:;
  /* 12893fe7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12893fed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12893ff3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12893ff9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12893fff:;
  /* 12893fff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894002 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12894008 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289400a jne 0x12894027 */
  if (!C.zf) goto L_12894027;
  /* 1289400c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12894012 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12894018 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1289401b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12894021 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12894027:;
  /* 12894027 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289402e jge 0x1289403c */
  if ((C.sf==C.of)) goto L_1289403c;
  /* 12894030 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1289403a jmp 0x12894045 */
  goto L_12894045;
L_1289403c:;
  /* 1289403c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289403f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12894042 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12894045:;
  /* 12894045 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1289404b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12894051 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12894053 jne 0x1289405c */
  if (!C.zf) goto L_1289405c;
  /* 12894055 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1289405c:;
  /* 1289405c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1289405f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12894062:;
  /* 12894062 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12894068 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1289406e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894071 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12894077 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12894079 jg 0x1289408f */
  if ((!C.zf&&C.sf==C.of)) goto L_1289408f;
  /* 1289407b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12894081 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12894087 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12894089 je 0x12894110 */
  if (C.zf) goto L_12894110;
L_1289408f:;
  /* 1289408f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12894095 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12894096 push edx */
  push32((uint32_t)(EDX));
  /* 12894097 push eax */
  push32((uint32_t)(EAX));
  /* 12894098 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1289409e push edx */
  push32((uint32_t)(EDX));
  /* 1289409f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 128940a5 push eax */
  push32((uint32_t)(EAX));
  /* 128940a6 call 0x128990b0 */
  push32(0x128940abu); f_128990b0();
  /* 128940ab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128940ae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 128940b4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 128940ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128940bb push edx */
  push32((uint32_t)(EDX));
  /* 128940bc push eax */
  push32((uint32_t)(EAX));
  /* 128940bd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 128940c3 push ecx */
  push32((uint32_t)(ECX));
  /* 128940c4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 128940ca push edx */
  push32((uint32_t)(EDX));
  /* 128940cb call 0x12899040 */
  push32(0x128940d0u); f_12899040();
  /* 128940d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 128940d6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 128940dc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128940e3 jle 0x128940f7 */
  if ((C.zf||C.sf!=C.of)) goto L_128940f7;
  /* 128940e5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 128940eb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128940f1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_128940f7:;
  /* 128940f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 128940fa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12894100 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12894102 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12894105 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894108 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1289410b jmp 0x12894062 */
  goto L_12894062;
L_12894110:;
  /* 12894110 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12894113 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894116 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12894119 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289411c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289411f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12894122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894125 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1289412a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289412c je 0x12894157 */
  if (C.zf) goto L_12894157;
  /* 1289412e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12894131 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12894134 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894137 jne 0x1289413f */
  if (!C.zf) goto L_1289413f;
  /* 12894139 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289413d jne 0x12894157 */
  if (!C.zf) goto L_12894157;
L_1289413f:;
  /* 1289413f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12894142 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894145 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12894148 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289414b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1289414e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12894151 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894154 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12894157:;
  /* 12894157 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289415e jne 0x12894332 */
  if (!C.zf) goto L_12894332;
  /* 12894164 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894167 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1289416a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289416c je 0x128941bd */
  if (C.zf) goto L_128941bd;
  /* 1289416e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894171 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12894177 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12894179 je 0x1289418b */
  if (C.zf) goto L_1289418b;
  /* 1289417b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12894182 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12894189 jmp 0x128941bd */
  goto L_128941bd;
L_1289418b:;
  /* 1289418b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289418e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12894191 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12894193 je 0x128941a5 */
  if (C.zf) goto L_128941a5;
  /* 12894195 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1289419c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 128941a3 jmp 0x128941bd */
  goto L_128941bd;
L_128941a5:;
  /* 128941a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128941a8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 128941ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128941ad je 0x128941bd */
  if (C.zf) goto L_128941bd;
  /* 128941af mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 128941b6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_128941bd:;
  /* 128941bd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 128941c3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128941c6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128941c9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 128941cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128941d2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 128941d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128941d7 jne 0x128941f5 */
  if (!C.zf) goto L_128941f5;
  /* 128941d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 128941df push eax */
  push32((uint32_t)(EAX));
  /* 128941e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128941e3 push ecx */
  push32((uint32_t)(ECX));
  /* 128941e4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 128941ea push edx */
  push32((uint32_t)(EDX));
  /* 128941eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 128941ed call 0x128944d0 */
  push32(0x128941f2u); f_128944d0();
  /* 128941f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128941f5:;
  /* 128941f5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 128941fb push eax */
  push32((uint32_t)(EAX));
  /* 128941fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128941ff push ecx */
  push32((uint32_t)(ECX));
  /* 12894200 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12894203 push edx */
  push32((uint32_t)(EDX));
  /* 12894204 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1289420a push eax */
  push32((uint32_t)(EAX));
  /* 1289420b call 0x12894510 */
  push32(0x12894210u); f_12894510();
  /* 12894210 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894213 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894216 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12894219 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289421b je 0x12894243 */
  if (C.zf) goto L_12894243;
  /* 1289421d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894220 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12894223 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12894225 jne 0x12894243 */
  if (!C.zf) goto L_12894243;
  /* 12894227 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1289422d push eax */
  push32((uint32_t)(EAX));
  /* 1289422e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894231 push ecx */
  push32((uint32_t)(ECX));
  /* 12894232 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12894238 push edx */
  push32((uint32_t)(EDX));
  /* 12894239 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1289423b call 0x128944d0 */
  push32(0x12894240u); f_128944d0();
  /* 12894240 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12894243:;
  /* 12894243 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894247 je 0x128942f1 */
  if (C.zf) goto L_128942f1;
  /* 1289424d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894251 jle 0x128942f1 */
  if ((C.zf||C.sf!=C.of)) goto L_128942f1;
  /* 12894257 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289425a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12894260 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12894263 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12894269:;
  /* 12894269 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1289426f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12894275 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894278 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1289427e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12894280 je 0x128942ef */
  if (C.zf) goto L_128942ef;
  /* 12894282 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12894288 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1289428b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12894292 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12894299 push eax */
  push32((uint32_t)(EAX));
  /* 1289429a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 128942a0 push ecx */
  push32((uint32_t)(ECX));
  /* 128942a1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 128942a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128942aa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 128942b0 call 0x12898f20 */
  push32(0x128942b5u); f_12898f20();
  /* 128942b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128942b8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 128942be cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128942c5 jg 0x128942c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_128942c9;
  /* 128942c7 jmp 0x128942ef */
  goto L_128942ef;
L_128942c9:;
  /* 128942c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 128942cf push eax */
  push32((uint32_t)(EAX));
  /* 128942d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128942d3 push ecx */
  push32((uint32_t)(ECX));
  /* 128942d4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 128942da push edx */
  push32((uint32_t)(EDX));
  /* 128942db lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 128942e1 push eax */
  push32((uint32_t)(EAX));
  /* 128942e2 call 0x12894510 */
  push32(0x128942e7u); f_12894510();
  /* 128942e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128942ea jmp 0x12894269 */
  goto L_12894269;
L_128942ef:;
  /* 128942ef jmp 0x1289430c */
  goto L_1289430c;
L_128942f1:;
  /* 128942f1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 128942f7 push ecx */
  push32((uint32_t)(ECX));
  /* 128942f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128942fb push edx */
  push32((uint32_t)(EDX));
  /* 128942fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 128942ff push eax */
  push32((uint32_t)(EAX));
  /* 12894300 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12894303 push ecx */
  push32((uint32_t)(ECX));
  /* 12894304 call 0x12894510 */
  push32(0x12894309u); f_12894510();
  /* 12894309 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289430c:;
  /* 1289430c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289430f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12894312 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12894314 je 0x12894332 */
  if (C.zf) goto L_12894332;
  /* 12894316 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1289431c push eax */
  push32((uint32_t)(EAX));
  /* 1289431d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894320 push ecx */
  push32((uint32_t)(ECX));
  /* 12894321 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12894327 push edx */
  push32((uint32_t)(EDX));
  /* 12894328 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1289432a call 0x128944d0 */
  push32(0x1289432fu); f_128944d0();
  /* 1289432f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12894332:;
  /* 12894332 jmp 0x12893744 */
  goto L_12893744;
L_12894337:;
  /* 12894337 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1289433d pop edi */
  EDI = (pop32());
  /* 1289433e pop esi */
  ESI = (pop32());
  /* 1289433f pop ebx */
  EBX = (pop32());
  /* 12894340 mov esp, ebp */
  ESP = (EBP);
  /* 12894342 pop ebp */
  EBP = (pop32());
  /* 12894343 ret  */
  ESPCHK(0x12893720u, _esp0);
  ESP += 4; return;
}

/* FUN_10004450 @ 0x12894450 (119 bytes, 44 insns) */
void f_12894450(void) {
  FTRACE(0x12894450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894450 push ebp */
  push32((uint32_t)(EBP));
  /* 12894451 mov ebp, esp */
  EBP = (ESP);
  /* 12894453 push ecx */
  push32((uint32_t)(ECX));
  /* 12894454 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12894457 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289445a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289445d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12894460 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12894463 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12894466 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289446a jl 0x12894492 */
  if ((C.sf!=C.of)) goto L_12894492;
  /* 1289446c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289446f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12894471 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12894474 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12894476 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1289447a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12894480 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12894483 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12894486 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12894488 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289448b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289448e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12894490 jmp 0x128944a5 */
  goto L_128944a5;
L_12894492:;
  /* 12894492 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12894495 push edx */
  push32((uint32_t)(EDX));
  /* 12894496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894499 push eax */
  push32((uint32_t)(EAX));
  /* 1289449a call 0x128934a0 */
  push32(0x1289449fu); f_128934a0();
  /* 1289449f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128944a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128944a5:;
  /* 128944a5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128944a9 jne 0x128944b6 */
  if (!C.zf) goto L_128944b6;
  /* 128944ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128944ae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 128944b4 jmp 0x128944c3 */
  goto L_128944c3;
L_128944b6:;
  /* 128944b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128944b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128944bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128944be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128944c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_128944c3:;
  /* 128944c3 mov esp, ebp */
  ESP = (EBP);
  /* 128944c5 pop ebp */
  EBP = (pop32());
  /* 128944c6 ret  */
  ESPCHK(0x12894450u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d0 @ 0x128944d0 (53 bytes, 23 insns) */
void f_128944d0(void) {
  FTRACE(0x128944d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128944d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128944d1 mov ebp, esp */
  EBP = (ESP);
L_128944d3:;
  /* 128944d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128944d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128944d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128944dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 128944df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128944e1 jle 0x12894503 */
  if ((C.zf||C.sf!=C.of)) goto L_12894503;
  /* 128944e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128944e6 push edx */
  push32((uint32_t)(EDX));
  /* 128944e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128944ea push eax */
  push32((uint32_t)(EAX));
  /* 128944eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128944ee push ecx */
  push32((uint32_t)(ECX));
  /* 128944ef call 0x12894450 */
  push32(0x128944f4u); f_12894450();
  /* 128944f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128944f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128944fa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128944fd jne 0x12894501 */
  if (!C.zf) goto L_12894501;
  /* 128944ff jmp 0x12894503 */
  goto L_12894503;
L_12894501:;
  /* 12894501 jmp 0x128944d3 */
  goto L_128944d3;
L_12894503:;
  /* 12894503 pop ebp */
  EBP = (pop32());
  /* 12894504 ret  */
  ESPCHK(0x128944d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004510 @ 0x12894510 (74 bytes, 31 insns) */
void f_12894510(void) {
  FTRACE(0x12894510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894510 push ebp */
  push32((uint32_t)(EBP));
  /* 12894511 mov ebp, esp */
  EBP = (ESP);
  /* 12894513 push ecx */
  push32((uint32_t)(ECX));
L_12894514:;
  /* 12894514 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12894517 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289451a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289451d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12894520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12894522 jle 0x12894556 */
  if ((C.zf||C.sf!=C.of)) goto L_12894556;
  /* 12894524 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12894527 push edx */
  push32((uint32_t)(EDX));
  /* 12894528 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289452b push eax */
  push32((uint32_t)(EAX));
  /* 1289452c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289452f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12894532 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12894535 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894538 push eax */
  push32((uint32_t)(EAX));
  /* 12894539 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289453c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289453f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12894542 call 0x12894450 */
  push32(0x12894547u); f_12894450();
  /* 12894547 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289454a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289454d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894550 jne 0x12894554 */
  if (!C.zf) goto L_12894554;
  /* 12894552 jmp 0x12894556 */
  goto L_12894556;
L_12894554:;
  /* 12894554 jmp 0x12894514 */
  goto L_12894514;
L_12894556:;
  /* 12894556 mov esp, ebp */
  ESP = (EBP);
  /* 12894558 pop ebp */
  EBP = (pop32());
  /* 12894559 ret  */
  ESPCHK(0x12894510u, _esp0);
  ESP += 4; return;
}

/* FUN_10004560 @ 0x12894560 (26 bytes, 12 insns) */
void f_12894560(void) {
  FTRACE(0x12894560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894560 push ebp */
  push32((uint32_t)(EBP));
  /* 12894561 mov ebp, esp */
  EBP = (ESP);
  /* 12894563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894566 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12894568 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289456b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289456e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12894570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894573 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12894575 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12894578 pop ebp */
  EBP = (pop32());
  /* 12894579 ret  */
  ESPCHK(0x12894560u, _esp0);
  ESP += 4; return;
}

/* FUN_10004580 @ 0x12894580 (31 bytes, 14 insns) */
void f_12894580(void) {
  FTRACE(0x12894580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894580 push ebp */
  push32((uint32_t)(EBP));
  /* 12894581 mov ebp, esp */
  EBP = (ESP);
  /* 12894583 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894586 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12894588 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289458b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289458e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12894590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894593 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12894595 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894598 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1289459a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289459d pop ebp */
  EBP = (pop32());
  /* 1289459e ret  */
  ESPCHK(0x12894580u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x128945a0 (27 bytes, 12 insns) */
void f_128945a0(void) {
  FTRACE(0x128945a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128945a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128945a1 mov ebp, esp */
  EBP = (ESP);
  /* 128945a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128945a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128945a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128945ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128945ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 128945b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128945b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128945b5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 128945b9 pop ebp */
  EBP = (pop32());
  /* 128945ba ret  */
  ESPCHK(0x128945a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x128945c0 (56 bytes, 15 insns) */
void f_128945c0(void) {
  FTRACE(0x128945c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128945c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128945c1 mov ebp, esp */
  EBP = (ESP);
  /* 128945c3 cmp dword ptr [0x128c11bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c11bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128945ca je 0x128945d2 */
  if (C.zf) goto L_128945d2;
  /* 128945cc call dword ptr [0x128c11bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c11bc))), 0x128945d2u);
L_128945d2:;
  /* 128945d2 push 0x128bd418 */
  push32((uint32_t)(0x128bd418u));
  /* 128945d7 push 0x128bd208 */
  push32((uint32_t)(0x128bd208u));
  /* 128945dc call 0x12894790 */
  push32(0x128945e1u); f_12894790();
  /* 128945e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128945e4 push 0x128bd104 */
  push32((uint32_t)(0x128bd104u));
  /* 128945e9 push 0x128bd000 */
  push32((uint32_t)(0x128bd000u));
  /* 128945ee call 0x12894790 */
  push32(0x128945f3u); f_12894790();
  /* 128945f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128945f6 pop ebp */
  EBP = (pop32());
  /* 128945f7 ret  */
  ESPCHK(0x128945c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004600 @ 0x12894600 (21 bytes, 10 insns) */
void f_12894600(void) {
  FTRACE(0x12894600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894600 push ebp */
  push32((uint32_t)(EBP));
  /* 12894601 mov ebp, esp */
  EBP = (ESP);
  /* 12894603 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894605 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894607 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289460a push eax */
  push32((uint32_t)(EAX));
  /* 1289460b call 0x12894680 */
  push32(0x12894610u); f_12894680();
  /* 12894610 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894613 pop ebp */
  EBP = (pop32());
  /* 12894614 ret  */
  ESPCHK(0x12894600u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12894620 (21 bytes, 10 insns) */
void f_12894620(void) {
  FTRACE(0x12894620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894620 push ebp */
  push32((uint32_t)(EBP));
  /* 12894621 mov ebp, esp */
  EBP = (ESP);
  /* 12894623 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894625 push 1 */
  push32((uint32_t)(0x1u));
  /* 12894627 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289462a push eax */
  push32((uint32_t)(EAX));
  /* 1289462b call 0x12894680 */
  push32(0x12894630u); f_12894680();
  /* 12894630 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894633 pop ebp */
  EBP = (pop32());
  /* 12894634 ret  */
  ESPCHK(0x12894620u, _esp0);
  ESP += 4; return;
}

/* FUN_10004640 @ 0x12894640 (19 bytes, 9 insns) */
void f_12894640(void) {
  FTRACE(0x12894640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894640 push ebp */
  push32((uint32_t)(EBP));
  /* 12894641 mov ebp, esp */
  EBP = (ESP);
  /* 12894643 push 1 */
  push32((uint32_t)(0x1u));
  /* 12894645 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894647 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894649 call 0x12894680 */
  push32(0x1289464eu); f_12894680();
  /* 1289464e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894651 pop ebp */
  EBP = (pop32());
  /* 12894652 ret  */
  ESPCHK(0x12894640u, _esp0);
  ESP += 4; return;
}

/* FUN_10004660 @ 0x12894660 (19 bytes, 9 insns) */
void f_12894660(void) {
  FTRACE(0x12894660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894660 push ebp */
  push32((uint32_t)(EBP));
  /* 12894661 mov ebp, esp */
  EBP = (ESP);
  /* 12894663 push 1 */
  push32((uint32_t)(0x1u));
  /* 12894665 push 1 */
  push32((uint32_t)(0x1u));
  /* 12894667 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894669 call 0x12894680 */
  push32(0x1289466eu); f_12894680();
  /* 1289466e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894671 pop ebp */
  EBP = (pop32());
  /* 12894672 ret  */
  ESPCHK(0x12894660u, _esp0);
  ESP += 4; return;
}

/* FUN_10004680 @ 0x12894680 (227 bytes, 61 insns) */
void f_12894680(void) {
  FTRACE(0x12894680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894680 push ebp */
  push32((uint32_t)(EBP));
  /* 12894681 mov ebp, esp */
  EBP = (ESP);
  /* 12894683 push ecx */
  push32((uint32_t)(ECX));
  /* 12894684 call 0x12894770 */
  push32(0x12894689u); f_12894770();
  /* 12894689 cmp dword ptr [0x128bf6dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894690 jne 0x128946a3 */
  if (!C.zf) goto L_128946a3;
  /* 12894692 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894695 push eax */
  push32((uint32_t)(EAX));
  /* 12894696 call dword ptr [0x128c2234] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2234))), 0x1289469cu);
  /* 1289469c push eax */
  push32((uint32_t)(EAX));
  /* 1289469d call dword ptr [0x128c2230] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2230))), 0x128946a3u);
L_128946a3:;
  /* 128946a3 mov dword ptr [0x128bf6d8], 1 */
  w32((uint32_t)(0x128bf6d8), (0x1u));
  /* 128946ad mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 128946b0 mov byte ptr [0x128bf6d4], cl */
  w8((uint32_t)(0x128bf6d4), (CL));
  /* 128946b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128946ba jne 0x12894703 */
  if (!C.zf) goto L_12894703;
  /* 128946bc cmp dword ptr [0x128c11b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c11b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128946c3 je 0x128946f1 */
  if (C.zf) goto L_128946f1;
  /* 128946c5 mov edx, dword ptr [0x128c11b4] */
  EDX = (r32((uint32_t)(0x128c11b4)));
  /* 128946cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_128946ce:;
  /* 128946ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128946d1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128946d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128946d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128946da cmp ecx, dword ptr [0x128c11b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128c11b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128946e0 jb 0x128946f1 */
  if (C.cf) goto L_128946f1;
  /* 128946e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128946e5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128946e8 je 0x128946ef */
  if (C.zf) goto L_128946ef;
  /* 128946ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128946ed call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x128946efu);
L_128946ef:;
  /* 128946ef jmp 0x128946ce */
  goto L_128946ce;
L_128946f1:;
  /* 128946f1 push 0x128bd724 */
  push32((uint32_t)(0x128bd724u));
  /* 128946f6 push 0x128bd51c */
  push32((uint32_t)(0x128bd51cu));
  /* 128946fb call 0x12894790 */
  push32(0x12894700u); f_12894790();
  /* 12894700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12894703:;
  /* 12894703 push 0x128bd92c */
  push32((uint32_t)(0x128bd92cu));
  /* 12894708 push 0x128bd828 */
  push32((uint32_t)(0x128bd828u));
  /* 1289470d call 0x12894790 */
  push32(0x12894712u); f_12894790();
  /* 12894712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894715 cmp dword ptr [0x128bf6e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289471c jne 0x1289473e */
  if (!C.zf) goto L_1289473e;
  /* 1289471e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12894720 call 0x12896370 */
  push32(0x12894725u); f_12896370();
  /* 12894725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894728 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1289472b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289472d je 0x1289473e */
  if (C.zf) goto L_1289473e;
  /* 1289472f mov dword ptr [0x128bf6e0], 1 */
  w32((uint32_t)(0x128bf6e0), (0x1u));
  /* 12894739 call 0x12896c80 */
  push32(0x1289473eu); f_12896c80();
L_1289473e:;
  /* 1289473e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894742 je 0x1289474b */
  if (C.zf) goto L_1289474b;
  /* 12894744 call 0x12894780 */
  push32(0x12894749u); f_12894780();
  /* 12894749 jmp 0x1289475f */
  goto L_1289475f;
L_1289474b:;
  /* 1289474b mov dword ptr [0x128bf6dc], 1 */
  w32((uint32_t)(0x128bf6dc), (0x1u));
  /* 12894755 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894758 push ecx */
  push32((uint32_t)(ECX));
  /* 12894759 call dword ptr [0x128c222c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c222c))), 0x1289475fu);
L_1289475f:;
  /* 1289475f mov esp, ebp */
  ESP = (EBP);
  /* 12894761 pop ebp */
  EBP = (pop32());
  /* 12894762 ret  */
  ESPCHK(0x12894680u, _esp0);
  ESP += 4; return;
}

/* FUN_10004770 @ 0x12894770 (15 bytes, 7 insns) */
void f_12894770(void) {
  FTRACE(0x12894770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894770 push ebp */
  push32((uint32_t)(EBP));
  /* 12894771 mov ebp, esp */
  EBP = (ESP);
  /* 12894773 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12894775 call 0x12899210 */
  push32(0x1289477au); f_12899210();
  /* 1289477a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289477d pop ebp */
  EBP = (pop32());
  /* 1289477e ret  */
  ESPCHK(0x12894770u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x12894780 (15 bytes, 7 insns) */
void f_12894780(void) {
  FTRACE(0x12894780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894780 push ebp */
  push32((uint32_t)(EBP));
  /* 12894781 mov ebp, esp */
  EBP = (ESP);
  /* 12894783 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12894785 call 0x128992b0 */
  push32(0x1289478au); f_128992b0();
  /* 1289478a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289478d pop ebp */
  EBP = (pop32());
  /* 1289478e ret  */
  ESPCHK(0x12894780u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12894790 (37 bytes, 16 insns) */
void f_12894790(void) {
  FTRACE(0x12894790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894790 push ebp */
  push32((uint32_t)(EBP));
  /* 12894791 mov ebp, esp */
  EBP = (ESP);
L_12894793:;
  /* 12894793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894796 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894799 jae 0x128947b3 */
  if (!C.cf) goto L_128947b3;
  /* 1289479b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289479e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128947a1 je 0x128947a8 */
  if (C.zf) goto L_128947a8;
  /* 128947a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128947a6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x128947a8u);
L_128947a8:;
  /* 128947a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128947ab add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128947ae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128947b1 jmp 0x12894793 */
  goto L_12894793;
L_128947b3:;
  /* 128947b3 pop ebp */
  EBP = (pop32());
  /* 128947b4 ret  */
  ESPCHK(0x12894790u, _esp0);
  ESP += 4; return;
}

/* FUN_100047c0 @ 0x128947c0 (130 bytes, 42 insns) */
void f_128947c0(void) {
  FTRACE(0x128947c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128947c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128947c1 mov ebp, esp */
  EBP = (ESP);
  /* 128947c3 push ecx */
  push32((uint32_t)(ECX));
  /* 128947c4 call 0x12899130 */
  push32(0x128947c9u); f_12899130();
  /* 128947c9 call dword ptr [0x128c2240] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2240))), 0x128947cfu);
  /* 128947cf mov dword ptr [0x128bda64], eax */
  w32((uint32_t)(0x128bda64), (EAX));
  /* 128947d4 cmp dword ptr [0x128bda64], -1 */
  { uint32_t _a=(r32((uint32_t)(0x128bda64))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128947db jne 0x128947e1 */
  if (!C.zf) goto L_128947e1;
  /* 128947dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128947df jmp 0x1289483e */
  goto L_1289483e;
L_128947e1:;
  /* 128947e1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 128947e3 push 0x128bac64 */
  push32((uint32_t)(0x128bac64u));
  /* 128947e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 128947ea push 0x74 */
  push32((uint32_t)(0x74u));
  /* 128947ec push 1 */
  push32((uint32_t)(0x1u));
  /* 128947ee call 0x12895270 */
  push32(0x128947f3u); f_12895270();
  /* 128947f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128947f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128947f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128947fd je 0x12894814 */
  if (C.zf) goto L_12894814;
  /* 128947ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894802 push eax */
  push32((uint32_t)(EAX));
  /* 12894803 mov ecx, dword ptr [0x128bda64] */
  ECX = (r32((uint32_t)(0x128bda64)));
  /* 12894809 push ecx */
  push32((uint32_t)(ECX));
  /* 1289480a call dword ptr [0x128c223c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c223c))), 0x12894810u);
  /* 12894810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12894812 jne 0x12894818 */
  if (!C.zf) goto L_12894818;
L_12894814:;
  /* 12894814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12894816 jmp 0x1289483e */
  goto L_1289483e;
L_12894818:;
  /* 12894818 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289481b push edx */
  push32((uint32_t)(EDX));
  /* 1289481c call 0x12894880 */
  push32(0x12894821u); f_12894880();
  /* 12894821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894824 call dword ptr [0x128c2238] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2238))), 0x1289482au);
  /* 1289482a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289482d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1289482f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894832 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12894839 mov eax, 1 */
  EAX = (0x1u);
L_1289483e:;
  /* 1289483e mov esp, ebp */
  ESP = (EBP);
  /* 12894840 pop ebp */
  EBP = (pop32());
  /* 12894841 ret  */
  ESPCHK(0x128947c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x12894850 (41 bytes, 11 insns) */
void f_12894850(void) {
  FTRACE(0x12894850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894850 push ebp */
  push32((uint32_t)(EBP));
  /* 12894851 mov ebp, esp */
  EBP = (ESP);
  /* 12894853 call 0x12899170 */
  push32(0x12894858u); f_12899170();
  /* 12894858 cmp dword ptr [0x128bda64], -1 */
  { uint32_t _a=(r32((uint32_t)(0x128bda64))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289485f je 0x12894877 */
  if (C.zf) goto L_12894877;
  /* 12894861 mov eax, dword ptr [0x128bda64] */
  EAX = (r32((uint32_t)(0x128bda64)));
  /* 12894866 push eax */
  push32((uint32_t)(EAX));
  /* 12894867 call dword ptr [0x128c2244] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2244))), 0x1289486du);
  /* 1289486d mov dword ptr [0x128bda64], 0xffffffff */
  w32((uint32_t)(0x128bda64), (0xffffffffu));
L_12894877:;
  /* 12894877 pop ebp */
  EBP = (pop32());
  /* 12894878 ret  */
  ESPCHK(0x12894850u, _esp0);
  ESP += 4; return;
}

/* FUN_10004880 @ 0x12894880 (25 bytes, 8 insns) */
void f_12894880(void) {
  FTRACE(0x12894880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894880 push ebp */
  push32((uint32_t)(EBP));
  /* 12894881 mov ebp, esp */
  EBP = (ESP);
  /* 12894883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894886 mov dword ptr [eax + 0x50], 0x128be0c0 */
  w32((uint32_t)(EAX + 0x50), (0x128be0c0u));
  /* 1289488d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894890 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12894897 pop ebp */
  EBP = (pop32());
  /* 12894898 ret  */
  ESPCHK(0x12894880u, _esp0);
  ESP += 4; return;
}

/* FUN_100048a0 @ 0x128948a0 (152 bytes, 48 insns) */
void f_128948a0(void) {
  FTRACE(0x128948a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128948a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128948a1 mov ebp, esp */
  EBP = (ESP);
  /* 128948a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128948a6 call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x128948acu);
  /* 128948ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128948af mov eax, dword ptr [0x128bda64] */
  EAX = (r32((uint32_t)(0x128bda64)));
  /* 128948b4 push eax */
  push32((uint32_t)(EAX));
  /* 128948b5 call dword ptr [0x128c224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c224c))), 0x128948bbu);
  /* 128948bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128948be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128948c2 jne 0x12894927 */
  if (!C.zf) goto L_12894927;
  /* 128948c4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 128948c9 push 0x128bac64 */
  push32((uint32_t)(0x128bac64u));
  /* 128948ce push 2 */
  push32((uint32_t)(0x2u));
  /* 128948d0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 128948d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 128948d4 call 0x12895270 */
  push32(0x128948d9u); f_12895270();
  /* 128948d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128948dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128948df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128948e3 je 0x1289491d */
  if (C.zf) goto L_1289491d;
  /* 128948e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128948e8 push ecx */
  push32((uint32_t)(ECX));
  /* 128948e9 mov edx, dword ptr [0x128bda64] */
  EDX = (r32((uint32_t)(0x128bda64)));
  /* 128948ef push edx */
  push32((uint32_t)(EDX));
  /* 128948f0 call dword ptr [0x128c223c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c223c))), 0x128948f6u);
  /* 128948f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128948f8 je 0x1289491d */
  if (C.zf) goto L_1289491d;
  /* 128948fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128948fd push eax */
  push32((uint32_t)(EAX));
  /* 128948fe call 0x12894880 */
  push32(0x12894903u); f_12894880();
  /* 12894903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894906 call dword ptr [0x128c2238] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2238))), 0x1289490cu);
  /* 1289490c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289490f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12894911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894914 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1289491b jmp 0x12894927 */
  goto L_12894927;
L_1289491d:;
  /* 1289491d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1289491f call 0x12892cb0 */
  push32(0x12894924u); f_12892cb0();
  /* 12894924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12894927:;
  /* 12894927 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289492a push eax */
  push32((uint32_t)(EAX));
  /* 1289492b call dword ptr [0x128c2248] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2248))), 0x12894931u);
  /* 12894931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894934 mov esp, ebp */
  ESP = (EBP);
  /* 12894936 pop ebp */
  EBP = (pop32());
  /* 12894937 ret  */
  ESPCHK(0x128948a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004940 @ 0x12894940 (263 bytes, 86 insns) */
void f_12894940(void) {
  FTRACE(0x12894940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894940 push ebp */
  push32((uint32_t)(EBP));
  /* 12894941 mov ebp, esp */
  EBP = (ESP);
  /* 12894943 cmp dword ptr [0x128bda64], -1 */
  { uint32_t _a=(r32((uint32_t)(0x128bda64))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289494a je 0x12894a45 */
  if (C.zf) goto L_12894a45;
  /* 12894950 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894954 jne 0x12894965 */
  if (!C.zf) goto L_12894965;
  /* 12894956 mov eax, dword ptr [0x128bda64] */
  EAX = (r32((uint32_t)(0x128bda64)));
  /* 1289495b push eax */
  push32((uint32_t)(EAX));
  /* 1289495c call dword ptr [0x128c224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c224c))), 0x12894962u);
  /* 12894962 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12894965:;
  /* 12894965 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894969 je 0x12894a36 */
  if (C.zf) goto L_12894a36;
  /* 1289496f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894972 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894976 je 0x12894989 */
  if (C.zf) goto L_12894989;
  /* 12894978 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289497a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289497d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12894980 push eax */
  push32((uint32_t)(EAX));
  /* 12894981 call 0x128958f0 */
  push32(0x12894986u); f_128958f0();
  /* 12894986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12894989:;
  /* 12894989 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289498c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894990 je 0x128949a3 */
  if (C.zf) goto L_128949a3;
  /* 12894992 push 2 */
  push32((uint32_t)(0x2u));
  /* 12894994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894997 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1289499a push eax */
  push32((uint32_t)(EAX));
  /* 1289499b call 0x128958f0 */
  push32(0x128949a0u); f_128958f0();
  /* 128949a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128949a3:;
  /* 128949a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128949a6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128949aa je 0x128949bd */
  if (C.zf) goto L_128949bd;
  /* 128949ac push 2 */
  push32((uint32_t)(0x2u));
  /* 128949ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128949b1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 128949b4 push eax */
  push32((uint32_t)(EAX));
  /* 128949b5 call 0x128958f0 */
  push32(0x128949bau); f_128958f0();
  /* 128949ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128949bd:;
  /* 128949bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128949c0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128949c4 je 0x128949d7 */
  if (C.zf) goto L_128949d7;
  /* 128949c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 128949c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128949cb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 128949ce push eax */
  push32((uint32_t)(EAX));
  /* 128949cf call 0x128958f0 */
  push32(0x128949d4u); f_128958f0();
  /* 128949d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128949d7:;
  /* 128949d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128949da cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128949de je 0x128949f1 */
  if (C.zf) goto L_128949f1;
  /* 128949e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 128949e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128949e5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 128949e8 push eax */
  push32((uint32_t)(EAX));
  /* 128949e9 call 0x128958f0 */
  push32(0x128949eeu); f_128958f0();
  /* 128949ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128949f1:;
  /* 128949f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128949f4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128949f8 je 0x12894a0b */
  if (C.zf) goto L_12894a0b;
  /* 128949fa push 2 */
  push32((uint32_t)(0x2u));
  /* 128949fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128949ff mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12894a02 push eax */
  push32((uint32_t)(EAX));
  /* 12894a03 call 0x128958f0 */
  push32(0x12894a08u); f_128958f0();
  /* 12894a08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12894a0b:;
  /* 12894a0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894a0e cmp dword ptr [ecx + 0x50], 0x128be0c0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x128be0c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894a15 je 0x12894a28 */
  if (C.zf) goto L_12894a28;
  /* 12894a17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12894a19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894a1c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12894a1f push eax */
  push32((uint32_t)(EAX));
  /* 12894a20 call 0x128958f0 */
  push32(0x12894a25u); f_128958f0();
  /* 12894a25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12894a28:;
  /* 12894a28 push 2 */
  push32((uint32_t)(0x2u));
  /* 12894a2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894a2d push ecx */
  push32((uint32_t)(ECX));
  /* 12894a2e call 0x128958f0 */
  push32(0x12894a33u); f_128958f0();
  /* 12894a33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12894a36:;
  /* 12894a36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894a38 mov edx, dword ptr [0x128bda64] */
  EDX = (r32((uint32_t)(0x128bda64)));
  /* 12894a3e push edx */
  push32((uint32_t)(EDX));
  /* 12894a3f call dword ptr [0x128c223c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c223c))), 0x12894a45u);
L_12894a45:;
  /* 12894a45 pop ebp */
  EBP = (pop32());
  /* 12894a46 ret  */
  ESPCHK(0x12894940u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a50 @ 0x12894a50 (11 bytes, 5 insns) */
void f_12894a50(void) {
  FTRACE(0x12894a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12894a51 mov ebp, esp */
  EBP = (ESP);
  /* 12894a53 call dword ptr [0x128c2238] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2238))), 0x12894a59u);
  /* 12894a59 pop ebp */
  EBP = (pop32());
  /* 12894a5a ret  */
  ESPCHK(0x12894a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a60 @ 0x12894a60 (11 bytes, 5 insns) */
void f_12894a60(void) {
  FTRACE(0x12894a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12894a61 mov ebp, esp */
  EBP = (ESP);
  /* 12894a63 call dword ptr [0x128c2254] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2254))), 0x12894a69u);
  /* 12894a69 pop ebp */
  EBP = (pop32());
  /* 12894a6a ret  */
  ESPCHK(0x12894a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a70 @ 0x12894a70 (804 bytes, 236 insns) */
void f_12894a70(void) {
  FTRACE(0x12894a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12894a71 mov ebp, esp */
  EBP = (ESP);
  /* 12894a73 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894a76 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12894a7b push 0x128bac70 */
  push32((uint32_t)(0x128bac70u));
  /* 12894a80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12894a82 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12894a87 call 0x12894e60 */
  push32(0x12894a8cu); f_12894e60();
  /* 12894a8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894a8f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12894a92 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894a96 jne 0x12894aa2 */
  if (!C.zf) goto L_12894aa2;
  /* 12894a98 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12894a9a call 0x12892cb0 */
  push32(0x12894a9fu); f_12892cb0();
  /* 12894a9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12894aa2:;
  /* 12894aa2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894aa5 mov dword ptr [0x128c1060], eax */
  w32((uint32_t)(0x128c1060), (EAX));
  /* 12894aaa mov dword ptr [0x128c119c], 0x20 */
  w32((uint32_t)(0x128c119c), (0x20u));
  /* 12894ab4 jmp 0x12894abf */
  goto L_12894abf;
L_12894ab6:;
  /* 12894ab6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894ab9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894abc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12894abf:;
  /* 12894abf mov edx, dword ptr [0x128c1060] */
  EDX = (r32((uint32_t)(0x128c1060)));
  /* 12894ac5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894acb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894ace jae 0x12894af3 */
  if (!C.cf) goto L_12894af3;
  /* 12894ad0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894ad3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12894ad7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894ada mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12894ae0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894ae3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12894ae7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894aea mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12894af1 jmp 0x12894ab6 */
  goto L_12894ab6;
L_12894af3:;
  /* 12894af3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12894af6 push ecx */
  push32((uint32_t)(ECX));
  /* 12894af7 call dword ptr [0x128c2260] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2260))), 0x12894afdu);
  /* 12894afd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12894b00 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12894b06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12894b08 je 0x12894c95 */
  if (C.zf) goto L_12894c95;
  /* 12894b0e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894b12 je 0x12894c95 */
  if (C.zf) goto L_12894c95;
  /* 12894b18 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12894b1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12894b1d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12894b20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12894b23 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894b26 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12894b29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894b2c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894b2f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12894b32 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894b39 jge 0x12894b43 */
  if ((C.sf==C.of)) goto L_12894b43;
  /* 12894b3b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12894b3e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12894b41 jmp 0x12894b4a */
  goto L_12894b4a;
L_12894b43:;
  /* 12894b43 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12894b4a:;
  /* 12894b4a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12894b4d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12894b50 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12894b57 jmp 0x12894b62 */
  goto L_12894b62;
L_12894b59:;
  /* 12894b59 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12894b5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894b5f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12894b62:;
  /* 12894b62 mov ecx, dword ptr [0x128c119c] */
  ECX = (r32((uint32_t)(0x128c119c)));
  /* 12894b68 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894b6b jge 0x12894c02 */
  if ((C.sf==C.of)) goto L_12894c02;
  /* 12894b71 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12894b76 push 0x128bac70 */
  push32((uint32_t)(0x128bac70u));
  /* 12894b7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12894b7d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12894b82 call 0x12894e60 */
  push32(0x12894b87u); f_12894e60();
  /* 12894b87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894b8a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12894b8d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894b91 jne 0x12894b9e */
  if (!C.zf) goto L_12894b9e;
  /* 12894b93 mov edx, dword ptr [0x128c119c] */
  EDX = (r32((uint32_t)(0x128c119c)));
  /* 12894b99 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12894b9c jmp 0x12894c02 */
  goto L_12894c02;
L_12894b9e:;
  /* 12894b9e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12894ba1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894ba4 mov dword ptr [eax*4 + 0x128c1060], ecx */
  w32((uint32_t)(EAX*4 + 0x128c1060), (ECX));
  /* 12894bab mov edx, dword ptr [0x128c119c] */
  EDX = (r32((uint32_t)(0x128c119c)));
  /* 12894bb1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894bb4 mov dword ptr [0x128c119c], edx */
  w32((uint32_t)(0x128c119c), (EDX));
  /* 12894bba jmp 0x12894bc5 */
  goto L_12894bc5;
L_12894bbc:;
  /* 12894bbc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894bbf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894bc2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12894bc5:;
  /* 12894bc5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12894bc8 mov edx, dword ptr [ecx*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 12894bcf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894bd5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894bd8 jae 0x12894bfd */
  if (!C.cf) goto L_12894bfd;
  /* 12894bda mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894bdd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12894be1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894be4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12894bea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894bed mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12894bf1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894bf4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12894bfb jmp 0x12894bbc */
  goto L_12894bbc;
L_12894bfd:;
  /* 12894bfd jmp 0x12894b59 */
  goto L_12894b59;
L_12894c02:;
  /* 12894c02 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12894c09 jmp 0x12894c26 */
  goto L_12894c26;
L_12894c0b:;
  /* 12894c0b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12894c0e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894c11 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12894c14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894c17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894c1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12894c1d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12894c20 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894c23 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12894c26:;
  /* 12894c26 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12894c29 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894c2c jge 0x12894c95 */
  if ((C.sf==C.of)) goto L_12894c95;
  /* 12894c2e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12894c31 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894c34 je 0x12894c90 */
  if (C.zf) goto L_12894c90;
  /* 12894c36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894c39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12894c3c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12894c3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12894c41 je 0x12894c90 */
  if (C.zf) goto L_12894c90;
  /* 12894c43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894c46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12894c49 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12894c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12894c4e jne 0x12894c60 */
  if (!C.zf) goto L_12894c60;
  /* 12894c50 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12894c53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12894c55 push edx */
  push32((uint32_t)(EDX));
  /* 12894c56 call dword ptr [0x128c225c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c225c))), 0x12894c5cu);
  /* 12894c5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12894c5e je 0x12894c90 */
  if (C.zf) goto L_12894c90;
L_12894c60:;
  /* 12894c60 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12894c63 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12894c66 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12894c69 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12894c6c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12894c6f mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 12894c76 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894c78 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12894c7b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894c7e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12894c81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12894c83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12894c85 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894c88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894c8b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12894c8d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12894c90:;
  /* 12894c90 jmp 0x12894c0b */
  goto L_12894c0b;
L_12894c95:;
  /* 12894c95 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12894c9c jmp 0x12894ca7 */
  goto L_12894ca7;
L_12894c9e:;
  /* 12894c9e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12894ca1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894ca4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12894ca7:;
  /* 12894ca7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894cab jge 0x12894d84 */
  if ((C.sf==C.of)) goto L_12894d84;
  /* 12894cb1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12894cb4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12894cb7 mov edx, dword ptr [0x128c1060] */
  EDX = (r32((uint32_t)(0x128c1060)));
  /* 12894cbd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894cbf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12894cc2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894cc5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894cc8 jne 0x12894d70 */
  if (!C.zf) goto L_12894d70;
  /* 12894cce mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894cd1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12894cd5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894cd9 jne 0x12894ce4 */
  if (!C.zf) goto L_12894ce4;
  /* 12894cdb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12894ce2 jmp 0x12894cf4 */
  goto L_12894cf4;
L_12894ce4:;
  /* 12894ce4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12894ce7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894cea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12894cec sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894cee add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894cf1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12894cf4:;
  /* 12894cf4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12894cf7 push eax */
  push32((uint32_t)(EAX));
  /* 12894cf8 call dword ptr [0x128c2210] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2210))), 0x12894cfeu);
  /* 12894cfe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12894d01 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894d05 je 0x12894d5f */
  if (C.zf) goto L_12894d5f;
  /* 12894d07 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12894d0a push ecx */
  push32((uint32_t)(ECX));
  /* 12894d0b call dword ptr [0x128c225c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c225c))), 0x12894d11u);
  /* 12894d11 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12894d14 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894d18 je 0x12894d5f */
  if (C.zf) goto L_12894d5f;
  /* 12894d1a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894d1d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12894d20 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12894d22 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12894d25 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12894d2b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894d2e jne 0x12894d40 */
  if (!C.zf) goto L_12894d40;
  /* 12894d30 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894d33 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12894d36 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12894d38 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894d3b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12894d3e jmp 0x12894d5d */
  goto L_12894d5d;
L_12894d40:;
  /* 12894d40 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12894d43 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12894d49 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894d4c jne 0x12894d5d */
  if (!C.zf) goto L_12894d5d;
  /* 12894d4e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894d51 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12894d54 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12894d57 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894d5a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12894d5d:;
  /* 12894d5d jmp 0x12894d6e */
  goto L_12894d6e;
L_12894d5f:;
  /* 12894d5f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894d62 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12894d65 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12894d68 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894d6b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12894d6e:;
  /* 12894d6e jmp 0x12894d7f */
  goto L_12894d7f;
L_12894d70:;
  /* 12894d70 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894d73 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12894d76 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12894d79 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12894d7c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12894d7f:;
  /* 12894d7f jmp 0x12894c9e */
  goto L_12894c9e;
L_12894d84:;
  /* 12894d84 mov eax, dword ptr [0x128c119c] */
  EAX = (r32((uint32_t)(0x128c119c)));
  /* 12894d89 push eax */
  push32((uint32_t)(EAX));
  /* 12894d8a call dword ptr [0x128c2258] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2258))), 0x12894d90u);
  /* 12894d90 mov esp, ebp */
  ESP = (EBP);
  /* 12894d92 pop ebp */
  EBP = (pop32());
  /* 12894d93 ret  */
  ESPCHK(0x12894a70u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12894da0 (155 bytes, 45 insns) */
void f_12894da0(void) {
  FTRACE(0x12894da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12894da1 mov ebp, esp */
  EBP = (ESP);
  /* 12894da3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894da6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12894dad jmp 0x12894db8 */
  goto L_12894db8;
L_12894daf:;
  /* 12894daf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12894db2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894db5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12894db8:;
  /* 12894db8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894dbc jge 0x12894e37 */
  if ((C.sf==C.of)) goto L_12894e37;
  /* 12894dbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12894dc1 cmp dword ptr [ecx*4 + 0x128c1060], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x128c1060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894dc9 je 0x12894e32 */
  if (C.zf) goto L_12894e32;
  /* 12894dcb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12894dce mov eax, dword ptr [edx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128c1060)));
  /* 12894dd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12894dd8 jmp 0x12894de3 */
  goto L_12894de3;
L_12894dda:;
  /* 12894dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894ddd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894de0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12894de3:;
  /* 12894de3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12894de6 mov eax, dword ptr [edx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128c1060)));
  /* 12894ded add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894df2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894df5 jae 0x12894e0f */
  if (!C.cf) goto L_12894e0f;
  /* 12894df7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894dfa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894dfe je 0x12894e0d */
  if (C.zf) goto L_12894e0d;
  /* 12894e00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894e03 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12894e06 push edx */
  push32((uint32_t)(EDX));
  /* 12894e07 call dword ptr [0x128c2264] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2264))), 0x12894e0du);
L_12894e0d:;
  /* 12894e0d jmp 0x12894dda */
  goto L_12894dda;
L_12894e0f:;
  /* 12894e0f push 2 */
  push32((uint32_t)(0x2u));
  /* 12894e11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12894e14 mov ecx, dword ptr [eax*4 + 0x128c1060] */
  ECX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 12894e1b push ecx */
  push32((uint32_t)(ECX));
  /* 12894e1c call 0x128958f0 */
  push32(0x12894e21u); f_128958f0();
  /* 12894e21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894e24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12894e27 mov dword ptr [edx*4 + 0x128c1060], 0 */
  w32((uint32_t)(EDX*4 + 0x128c1060), (0x0u));
L_12894e32:;
  /* 12894e32 jmp 0x12894daf */
  goto L_12894daf;
L_12894e37:;
  /* 12894e37 mov esp, ebp */
  ESP = (EBP);
  /* 12894e39 pop ebp */
  EBP = (pop32());
  /* 12894e3a ret  */
  ESPCHK(0x12894da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x12894e40 (29 bytes, 13 insns) */
void f_12894e40(void) {
  FTRACE(0x12894e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12894e41 mov ebp, esp */
  EBP = (ESP);
  /* 12894e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894e47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12894e49 mov eax, dword ptr [0x128bf888] */
  EAX = (r32((uint32_t)(0x128bf888)));
  /* 12894e4e push eax */
  push32((uint32_t)(EAX));
  /* 12894e4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894e52 push ecx */
  push32((uint32_t)(ECX));
  /* 12894e53 call 0x12894eb0 */
  push32(0x12894e58u); f_12894eb0();
  /* 12894e58 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894e5b pop ebp */
  EBP = (pop32());
  /* 12894e5c ret  */
  ESPCHK(0x12894e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e60 @ 0x12894e60 (35 bytes, 16 insns) */
void f_12894e60(void) {
  FTRACE(0x12894e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12894e61 mov ebp, esp */
  EBP = (ESP);
  /* 12894e63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12894e66 push eax */
  push32((uint32_t)(EAX));
  /* 12894e67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12894e6a push ecx */
  push32((uint32_t)(ECX));
  /* 12894e6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12894e6e push edx */
  push32((uint32_t)(EDX));
  /* 12894e6f mov eax, dword ptr [0x128bf888] */
  EAX = (r32((uint32_t)(0x128bf888)));
  /* 12894e74 push eax */
  push32((uint32_t)(EAX));
  /* 12894e75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894e78 push ecx */
  push32((uint32_t)(ECX));
  /* 12894e79 call 0x12894eb0 */
  push32(0x12894e7eu); f_12894eb0();
  /* 12894e7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894e81 pop ebp */
  EBP = (pop32());
  /* 12894e82 ret  */
  ESPCHK(0x12894e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e90 @ 0x12894e90 (27 bytes, 13 insns) */
void f_12894e90(void) {
  FTRACE(0x12894e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12894e91 mov ebp, esp */
  EBP = (ESP);
  /* 12894e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894e97 push 1 */
  push32((uint32_t)(0x1u));
  /* 12894e99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12894e9c push eax */
  push32((uint32_t)(EAX));
  /* 12894e9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 12894ea1 call 0x12894eb0 */
  push32(0x12894ea6u); f_12894eb0();
  /* 12894ea6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894ea9 pop ebp */
  EBP = (pop32());
  /* 12894eaa ret  */
  ESPCHK(0x12894e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004eb0 @ 0x12894eb0 (94 bytes, 38 insns) */
void f_12894eb0(void) {
  FTRACE(0x12894eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12894eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12894eb3 push ecx */
  push32((uint32_t)(ECX));
L_12894eb4:;
  /* 12894eb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12894eb6 call 0x12899210 */
  push32(0x12894ebbu); f_12899210();
  /* 12894ebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894ebe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12894ec1 push eax */
  push32((uint32_t)(EAX));
  /* 12894ec2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12894ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 12894ec6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12894ec9 push edx */
  push32((uint32_t)(EDX));
  /* 12894eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894ecd push eax */
  push32((uint32_t)(EAX));
  /* 12894ece call 0x12894f30 */
  push32(0x12894ed3u); f_12894f30();
  /* 12894ed3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894ed6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12894ed9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12894edb call 0x128992b0 */
  push32(0x12894ee0u); f_128992b0();
  /* 12894ee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894ee3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894ee7 jne 0x12894eef */
  if (!C.zf) goto L_12894eef;
  /* 12894ee9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894eed jne 0x12894ef4 */
  if (!C.zf) goto L_12894ef4;
L_12894eef:;
  /* 12894eef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12894ef2 jmp 0x12894f0a */
  goto L_12894f0a;
L_12894ef4:;
  /* 12894ef4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 12894ef8 call 0x12899550 */
  push32(0x12894efdu); f_12899550();
  /* 12894efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12894f02 jne 0x12894f08 */
  if (!C.zf) goto L_12894f08;
  /* 12894f04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12894f06 jmp 0x12894f0a */
  goto L_12894f0a;
L_12894f08:;
  /* 12894f08 jmp 0x12894eb4 */
  goto L_12894eb4;
L_12894f0a:;
  /* 12894f0a mov esp, ebp */
  ESP = (EBP);
  /* 12894f0c pop ebp */
  EBP = (pop32());
  /* 12894f0d ret  */
  ESPCHK(0x12894eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f10 @ 0x12894f10 (23 bytes, 11 insns) */
void f_12894f10(void) {
  FTRACE(0x12894f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12894f11 mov ebp, esp */
  EBP = (ESP);
  /* 12894f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894f17 push 1 */
  push32((uint32_t)(0x1u));
  /* 12894f19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894f1c push eax */
  push32((uint32_t)(EAX));
  /* 12894f1d call 0x12894f30 */
  push32(0x12894f22u); f_12894f30();
  /* 12894f22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894f25 pop ebp */
  EBP = (pop32());
  /* 12894f26 ret  */
  ESPCHK(0x12894f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f30 @ 0x12894f30 (787 bytes, 254 insns) */
void f_12894f30(void) {
  FTRACE(0x12894f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12894f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12894f31 mov ebp, esp */
  EBP = (ESP);
  /* 12894f33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12894f36 push ebx */
  push32((uint32_t)(EBX));
  /* 12894f37 push esi */
  push32((uint32_t)(ESI));
  /* 12894f38 push edi */
  push32((uint32_t)(EDI));
  /* 12894f39 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12894f40 mov eax, dword ptr [0x128bda8c] */
  EAX = (r32((uint32_t)(0x128bda8c)));
  /* 12894f45 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12894f48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12894f4a je 0x12894f7c */
  if (C.zf) goto L_12894f7c;
L_12894f4c:;
  /* 12894f4c call 0x12896000 */
  push32(0x12894f51u); f_12896000();
  /* 12894f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12894f53 jne 0x12894f76 */
  if (!C.zf) goto L_12894f76;
  /* 12894f55 push 0x128bad64 */
  push32((uint32_t)(0x128bad64u));
  /* 12894f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12894f5c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12894f61 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12894f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12894f68 call 0x12892e00 */
  push32(0x12894f6du); f_12892e00();
  /* 12894f6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894f70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894f73 jne 0x12894f76 */
  if (!C.zf) goto L_12894f76;
  /* 12894f75 int3  */
  x86_unimpl("int3 @ 0x12894f75");
L_12894f76:;
  /* 12894f76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12894f78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12894f7a jne 0x12894f4c */
  if (!C.zf) goto L_12894f4c;
L_12894f7c:;
  /* 12894f7c mov edx, dword ptr [0x128bda90] */
  EDX = (r32((uint32_t)(0x128bda90)));
  /* 12894f82 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12894f85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12894f88 cmp eax, dword ptr [0x128bda94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bda94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894f8e jne 0x12894f91 */
  if (!C.zf) goto L_12894f91;
  /* 12894f90 int3  */
  x86_unimpl("int3 @ 0x12894f90");
L_12894f91:;
  /* 12894f91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12894f94 push ecx */
  push32((uint32_t)(ECX));
  /* 12894f95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12894f98 push edx */
  push32((uint32_t)(EDX));
  /* 12894f99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12894f9c push eax */
  push32((uint32_t)(EAX));
  /* 12894f9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12894fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12894fa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12894fa4 push edx */
  push32((uint32_t)(EDX));
  /* 12894fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12894fa9 call dword ptr [0x128be150] */
  call_ind((uint32_t)(r32((uint32_t)(0x128be150))), 0x12894fafu);
  /* 12894faf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12894fb4 jne 0x12895014 */
  if (!C.zf) goto L_12895014;
  /* 12894fb6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894fba je 0x12894fe7 */
  if (C.zf) goto L_12894fe7;
L_12894fbc:;
  /* 12894fbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12894fbf push eax */
  push32((uint32_t)(EAX));
  /* 12894fc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12894fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12894fc4 push 0x128bad20 */
  push32((uint32_t)(0x128bad20u));
  /* 12894fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12894fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12894fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 12894fd1 call 0x12892e00 */
  push32(0x12894fd6u); f_12892e00();
  /* 12894fd6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12894fd9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12894fdc jne 0x12894fdf */
  if (!C.zf) goto L_12894fdf;
  /* 12894fde int3  */
  x86_unimpl("int3 @ 0x12894fde");
L_12894fdf:;
  /* 12894fdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12894fe1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12894fe3 jne 0x12894fbc */
  if (!C.zf) goto L_12894fbc;
  /* 12894fe5 jmp 0x1289500d */
  goto L_1289500d;
L_12894fe7:;
  /* 12894fe7 push 0x128bacfc */
  push32((uint32_t)(0x128bacfcu));
  /* 12894fec push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 12894ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12894ff9 call 0x12892e00 */
  push32(0x12894ffeu); f_12892e00();
  /* 12894ffe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895001 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895004 jne 0x12895007 */
  if (!C.zf) goto L_12895007;
  /* 12895006 int3  */
  x86_unimpl("int3 @ 0x12895006");
L_12895007:;
  /* 12895007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895009 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289500b jne 0x12894fe7 */
  if (!C.zf) goto L_12894fe7;
L_1289500d:;
  /* 1289500d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289500f jmp 0x1289523c */
  goto L_1289523c;
L_12895014:;
  /* 12895014 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895017 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1289501d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895020 je 0x12895036 */
  if (C.zf) goto L_12895036;
  /* 12895022 mov edx, dword ptr [0x128bda8c] */
  EDX = (r32((uint32_t)(0x128bda8c)));
  /* 12895028 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1289502b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289502d jne 0x12895036 */
  if (!C.zf) goto L_12895036;
  /* 1289502f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12895036:;
  /* 12895036 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289503a ja 0x12895047 */
  if ((!C.cf&&!C.zf)) goto L_12895047;
  /* 1289503c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289503f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895042 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895045 jbe 0x12895073 */
  if ((C.cf||C.zf)) goto L_12895073;
L_12895047:;
  /* 12895047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289504a push ecx */
  push32((uint32_t)(ECX));
  /* 1289504b push 0x128bacd4 */
  push32((uint32_t)(0x128bacd4u));
  /* 12895050 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895052 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895054 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895056 push 1 */
  push32((uint32_t)(0x1u));
  /* 12895058 call 0x12892e00 */
  push32(0x1289505du); f_12892e00();
  /* 1289505d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895060 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895063 jne 0x12895066 */
  if (!C.zf) goto L_12895066;
  /* 12895065 int3  */
  x86_unimpl("int3 @ 0x12895065");
L_12895066:;
  /* 12895066 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12895068 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289506a jne 0x12895047 */
  if (!C.zf) goto L_12895047;
  /* 1289506c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289506e jmp 0x1289523c */
  goto L_1289523c;
L_12895073:;
  /* 12895073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895076 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289507b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289507e je 0x128950c0 */
  if (C.zf) goto L_128950c0;
  /* 12895080 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895084 je 0x128950c0 */
  if (C.zf) goto L_128950c0;
  /* 12895086 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895089 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1289508f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895092 je 0x128950c0 */
  if (C.zf) goto L_128950c0;
  /* 12895094 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895098 je 0x128950c0 */
  if (C.zf) goto L_128950c0;
L_1289509a:;
  /* 1289509a push 0x128baca0 */
  push32((uint32_t)(0x128baca0u));
  /* 1289509f push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 128950a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128950a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 128950a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 128950aa push 1 */
  push32((uint32_t)(0x1u));
  /* 128950ac call 0x12892e00 */
  push32(0x128950b1u); f_12892e00();
  /* 128950b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128950b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128950b7 jne 0x128950ba */
  if (!C.zf) goto L_128950ba;
  /* 128950b9 int3  */
  x86_unimpl("int3 @ 0x128950b9");
L_128950ba:;
  /* 128950ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128950bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128950be jne 0x1289509a */
  if (!C.zf) goto L_1289509a;
L_128950c0:;
  /* 128950c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128950c3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128950c6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128950c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128950cc push ecx */
  push32((uint32_t)(ECX));
  /* 128950cd call 0x12899660 */
  push32(0x128950d2u); f_12899660();
  /* 128950d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128950d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128950d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128950dc jne 0x128950e5 */
  if (!C.zf) goto L_128950e5;
  /* 128950de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128950e0 jmp 0x1289523c */
  goto L_1289523c;
L_128950e5:;
  /* 128950e5 mov edx, dword ptr [0x128bda90] */
  EDX = (r32((uint32_t)(0x128bda90)));
  /* 128950eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128950ee mov dword ptr [0x128bda90], edx */
  w32((uint32_t)(0x128bda90), (EDX));
  /* 128950f4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128950f8 je 0x12895143 */
  if (C.zf) goto L_12895143;
  /* 128950fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128950fd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12895103 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895106 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1289510d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895110 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12895117 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289511a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12895121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895124 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895127 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1289512a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289512d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12895134 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895137 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1289513e jmp 0x128951e3 */
  goto L_128951e3;
L_12895143:;
  /* 12895143 mov edx, dword ptr [0x128bf6e8] */
  EDX = (r32((uint32_t)(0x128bf6e8)));
  /* 12895149 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289514c mov dword ptr [0x128bf6e8], edx */
  w32((uint32_t)(0x128bf6e8), (EDX));
  /* 12895152 mov eax, dword ptr [0x128bf6f0] */
  EAX = (r32((uint32_t)(0x128bf6f0)));
  /* 12895157 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289515a mov dword ptr [0x128bf6f0], eax */
  w32((uint32_t)(0x128bf6f0), (EAX));
  /* 1289515f mov ecx, dword ptr [0x128bf6f0] */
  ECX = (r32((uint32_t)(0x128bf6f0)));
  /* 12895165 cmp ecx, dword ptr [0x128bf6f4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bf6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289516b jbe 0x12895179 */
  if ((C.cf||C.zf)) goto L_12895179;
  /* 1289516d mov edx, dword ptr [0x128bf6f0] */
  EDX = (r32((uint32_t)(0x128bf6f0)));
  /* 12895173 mov dword ptr [0x128bf6f4], edx */
  w32((uint32_t)(0x128bf6f4), (EDX));
L_12895179:;
  /* 12895179 cmp dword ptr [0x128bf6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895180 je 0x1289518f */
  if (C.zf) goto L_1289518f;
  /* 12895182 mov eax, dword ptr [0x128bf6ec] */
  EAX = (r32((uint32_t)(0x128bf6ec)));
  /* 12895187 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289518a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1289518d jmp 0x12895198 */
  goto L_12895198;
L_1289518f:;
  /* 1289518f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895192 mov dword ptr [0x128bf6e4], edx */
  w32((uint32_t)(0x128bf6e4), (EDX));
L_12895198:;
  /* 12895198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289519b mov ecx, dword ptr [0x128bf6ec] */
  ECX = (r32((uint32_t)(0x128bf6ec)));
  /* 128951a1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 128951a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128951a6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 128951ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128951b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128951b3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 128951b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128951b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128951bc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 128951bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128951c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128951c5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 128951c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128951cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128951ce mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 128951d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128951d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128951d7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 128951da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128951dd mov dword ptr [0x128bf6ec], ecx */
  w32((uint32_t)(0x128bf6ec), (ECX));
L_128951e3:;
  /* 128951e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 128951e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128951e7 mov dl, byte ptr [0x128bda98] */
  DL = (r8((uint32_t)(0x128bda98)));
  /* 128951ed push edx */
  push32((uint32_t)(EDX));
  /* 128951ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128951f1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128951f4 push eax */
  push32((uint32_t)(EAX));
  /* 128951f5 call 0x12899580 */
  push32(0x128951fau); f_12899580();
  /* 128951fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128951fd push 4 */
  push32((uint32_t)(0x4u));
  /* 128951ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895201 mov cl, byte ptr [0x128bda98] */
  CL = (r8((uint32_t)(0x128bda98)));
  /* 12895207 push ecx */
  push32((uint32_t)(ECX));
  /* 12895208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289520b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289520e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12895212 push ecx */
  push32((uint32_t)(ECX));
  /* 12895213 call 0x12899580 */
  push32(0x12895218u); f_12899580();
  /* 12895218 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289521b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289521e push edx */
  push32((uint32_t)(EDX));
  /* 1289521f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895221 mov al, byte ptr [0x128bda9a] */
  AL = (r8((uint32_t)(0x128bda9a)));
  /* 12895226 push eax */
  push32((uint32_t)(EAX));
  /* 12895227 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289522a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289522d push ecx */
  push32((uint32_t)(ECX));
  /* 1289522e call 0x12899580 */
  push32(0x12895233u); f_12899580();
  /* 12895233 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895239 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1289523c:;
  /* 1289523c pop edi */
  EDI = (pop32());
  /* 1289523d pop esi */
  ESI = (pop32());
  /* 1289523e pop ebx */
  EBX = (pop32());
  /* 1289523f mov esp, ebp */
  ESP = (EBP);
  /* 12895241 pop ebp */
  EBP = (pop32());
  /* 12895242 ret  */
  ESPCHK(0x12894f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005250 @ 0x12895250 (27 bytes, 13 insns) */
void f_12895250(void) {
  FTRACE(0x12895250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895250 push ebp */
  push32((uint32_t)(EBP));
  /* 12895251 mov ebp, esp */
  EBP = (ESP);
  /* 12895253 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895255 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895257 push 1 */
  push32((uint32_t)(0x1u));
  /* 12895259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289525c push eax */
  push32((uint32_t)(EAX));
  /* 1289525d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895260 push ecx */
  push32((uint32_t)(ECX));
  /* 12895261 call 0x12895270 */
  push32(0x12895266u); f_12895270();
  /* 12895266 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895269 pop ebp */
  EBP = (pop32());
  /* 1289526a ret  */
  ESPCHK(0x12895250u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12895270 (96 bytes, 37 insns) */
void f_12895270(void) {
  FTRACE(0x12895270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895270 push ebp */
  push32((uint32_t)(EBP));
  /* 12895271 mov ebp, esp */
  EBP = (ESP);
  /* 12895273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12895276 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895279 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289527d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12895280 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12895283 push ecx */
  push32((uint32_t)(ECX));
  /* 12895284 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12895287 push edx */
  push32((uint32_t)(EDX));
  /* 12895288 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289528b push eax */
  push32((uint32_t)(EAX));
  /* 1289528c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289528f push ecx */
  push32((uint32_t)(ECX));
  /* 12895290 call 0x12894e60 */
  push32(0x12895295u); f_12894e60();
  /* 12895295 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895298 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289529b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289529f je 0x128952c9 */
  if (C.zf) goto L_128952c9;
  /* 128952a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128952a4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 128952a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128952aa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128952ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128952b0:;
  /* 128952b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128952b3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128952b6 jae 0x128952c9 */
  if (!C.cf) goto L_128952c9;
  /* 128952b8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128952bb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 128952be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128952c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128952c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128952c7 jmp 0x128952b0 */
  goto L_128952b0;
L_128952c9:;
  /* 128952c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128952cc mov esp, ebp */
  ESP = (EBP);
  /* 128952ce pop ebp */
  EBP = (pop32());
  /* 128952cf ret  */
  ESPCHK(0x12895270u, _esp0);
  ESP += 4; return;
}

/* FUN_100052d0 @ 0x128952d0 (27 bytes, 13 insns) */
void f_128952d0(void) {
  FTRACE(0x128952d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128952d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128952d1 mov ebp, esp */
  EBP = (ESP);
  /* 128952d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128952d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128952d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 128952d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128952dc push eax */
  push32((uint32_t)(EAX));
  /* 128952dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128952e0 push ecx */
  push32((uint32_t)(ECX));
  /* 128952e1 call 0x128952f0 */
  push32(0x128952e6u); f_128952f0();
  /* 128952e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128952e9 pop ebp */
  EBP = (pop32());
  /* 128952ea ret  */
  ESPCHK(0x128952d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x128952f0 (64 bytes, 27 insns) */
void f_128952f0(void) {
  FTRACE(0x128952f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128952f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128952f1 mov ebp, esp */
  EBP = (ESP);
  /* 128952f3 push ecx */
  push32((uint32_t)(ECX));
  /* 128952f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 128952f6 call 0x12899210 */
  push32(0x128952fbu); f_12899210();
  /* 128952fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128952fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12895300 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12895303 push eax */
  push32((uint32_t)(EAX));
  /* 12895304 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12895307 push ecx */
  push32((uint32_t)(ECX));
  /* 12895308 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289530b push edx */
  push32((uint32_t)(EDX));
  /* 1289530c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289530f push eax */
  push32((uint32_t)(EAX));
  /* 12895310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895313 push ecx */
  push32((uint32_t)(ECX));
  /* 12895314 call 0x12895330 */
  push32(0x12895319u); f_12895330();
  /* 12895319 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289531c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289531f push 9 */
  push32((uint32_t)(0x9u));
  /* 12895321 call 0x128992b0 */
  push32(0x12895326u); f_128992b0();
  /* 12895326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289532c mov esp, ebp */
  ESP = (EBP);
  /* 1289532e pop ebp */
  EBP = (pop32());
  /* 1289532f ret  */
  ESPCHK(0x128952f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x12895330 (1297 bytes, 431 insns) */
void f_12895330(void) {
  FTRACE(0x12895330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895330 push ebp */
  push32((uint32_t)(EBP));
  /* 12895331 mov ebp, esp */
  EBP = (ESP);
  /* 12895333 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12895336 push ebx */
  push32((uint32_t)(EBX));
  /* 12895337 push esi */
  push32((uint32_t)(ESI));
  /* 12895338 push edi */
  push32((uint32_t)(EDI));
  /* 12895339 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12895340 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895344 jne 0x12895363 */
  if (!C.zf) goto L_12895363;
  /* 12895346 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12895349 push eax */
  push32((uint32_t)(EAX));
  /* 1289534a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289534d push ecx */
  push32((uint32_t)(ECX));
  /* 1289534e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12895351 push edx */
  push32((uint32_t)(EDX));
  /* 12895352 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895355 push eax */
  push32((uint32_t)(EAX));
  /* 12895356 call 0x12894e60 */
  push32(0x1289535bu); f_12894e60();
  /* 1289535b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289535e jmp 0x1289583a */
  goto L_1289583a;
L_12895363:;
  /* 12895363 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895367 je 0x12895386 */
  if (C.zf) goto L_12895386;
  /* 12895369 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289536d jne 0x12895386 */
  if (!C.zf) goto L_12895386;
  /* 1289536f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12895372 push ecx */
  push32((uint32_t)(ECX));
  /* 12895373 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895376 push edx */
  push32((uint32_t)(EDX));
  /* 12895377 call 0x128958f0 */
  push32(0x1289537cu); f_128958f0();
  /* 1289537c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289537f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895381 jmp 0x1289583a */
  goto L_1289583a;
L_12895386:;
  /* 12895386 mov eax, dword ptr [0x128bda8c] */
  EAX = (r32((uint32_t)(0x128bda8c)));
  /* 1289538b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1289538e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895390 je 0x128953c2 */
  if (C.zf) goto L_128953c2;
L_12895392:;
  /* 12895392 call 0x12896000 */
  push32(0x12895397u); f_12896000();
  /* 12895397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895399 jne 0x128953bc */
  if (!C.zf) goto L_128953bc;
  /* 1289539b push 0x128bad64 */
  push32((uint32_t)(0x128bad64u));
  /* 128953a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128953a2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 128953a7 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 128953ac push 2 */
  push32((uint32_t)(0x2u));
  /* 128953ae call 0x12892e00 */
  push32(0x128953b3u); f_12892e00();
  /* 128953b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128953b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128953b9 jne 0x128953bc */
  if (!C.zf) goto L_128953bc;
  /* 128953bb int3  */
  x86_unimpl("int3 @ 0x128953bb");
L_128953bc:;
  /* 128953bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128953be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128953c0 jne 0x12895392 */
  if (!C.zf) goto L_12895392;
L_128953c2:;
  /* 128953c2 mov edx, dword ptr [0x128bda90] */
  EDX = (r32((uint32_t)(0x128bda90)));
  /* 128953c8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 128953cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128953ce cmp eax, dword ptr [0x128bda94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bda94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128953d4 jne 0x128953d7 */
  if (!C.zf) goto L_128953d7;
  /* 128953d6 int3  */
  x86_unimpl("int3 @ 0x128953d6");
L_128953d7:;
  /* 128953d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128953da push ecx */
  push32((uint32_t)(ECX));
  /* 128953db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128953de push edx */
  push32((uint32_t)(EDX));
  /* 128953df mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128953e2 push eax */
  push32((uint32_t)(EAX));
  /* 128953e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128953e6 push ecx */
  push32((uint32_t)(ECX));
  /* 128953e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128953ea push edx */
  push32((uint32_t)(EDX));
  /* 128953eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128953ee push eax */
  push32((uint32_t)(EAX));
  /* 128953ef push 2 */
  push32((uint32_t)(0x2u));
  /* 128953f1 call dword ptr [0x128be150] */
  call_ind((uint32_t)(r32((uint32_t)(0x128be150))), 0x128953f7u);
  /* 128953f7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128953fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128953fc jne 0x1289545c */
  if (!C.zf) goto L_1289545c;
  /* 128953fe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895402 je 0x1289542f */
  if (C.zf) goto L_1289542f;
L_12895404:;
  /* 12895404 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12895407 push ecx */
  push32((uint32_t)(ECX));
  /* 12895408 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289540b push edx */
  push32((uint32_t)(EDX));
  /* 1289540c push 0x128baee0 */
  push32((uint32_t)(0x128baee0u));
  /* 12895411 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895413 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895415 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895417 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895419 call 0x12892e00 */
  push32(0x1289541eu); f_12892e00();
  /* 1289541e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895421 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895424 jne 0x12895427 */
  if (!C.zf) goto L_12895427;
  /* 12895426 int3  */
  x86_unimpl("int3 @ 0x12895426");
L_12895427:;
  /* 12895427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289542b jne 0x12895404 */
  if (!C.zf) goto L_12895404;
  /* 1289542d jmp 0x12895455 */
  goto L_12895455;
L_1289542f:;
  /* 1289542f push 0x128baebc */
  push32((uint32_t)(0x128baebcu));
  /* 12895434 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 12895439 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289543b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289543d push 0 */
  push32((uint32_t)(0x0u));
  /* 1289543f push 0 */
  push32((uint32_t)(0x0u));
  /* 12895441 call 0x12892e00 */
  push32(0x12895446u); f_12892e00();
  /* 12895446 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895449 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289544c jne 0x1289544f */
  if (!C.zf) goto L_1289544f;
  /* 1289544e int3  */
  x86_unimpl("int3 @ 0x1289544e");
L_1289544f:;
  /* 1289544f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12895453 jne 0x1289542f */
  if (!C.zf) goto L_1289542f;
L_12895455:;
  /* 12895455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895457 jmp 0x1289583a */
  goto L_1289583a;
L_1289545c:;
  /* 1289545c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895460 jbe 0x1289548e */
  if ((C.cf||C.zf)) goto L_1289548e;
L_12895462:;
  /* 12895462 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895465 push edx */
  push32((uint32_t)(EDX));
  /* 12895466 push 0x128bae8c */
  push32((uint32_t)(0x128bae8cu));
  /* 1289546b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289546d push 0 */
  push32((uint32_t)(0x0u));
  /* 1289546f push 0 */
  push32((uint32_t)(0x0u));
  /* 12895471 push 1 */
  push32((uint32_t)(0x1u));
  /* 12895473 call 0x12892e00 */
  push32(0x12895478u); f_12892e00();
  /* 12895478 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289547b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289547e jne 0x12895481 */
  if (!C.zf) goto L_12895481;
  /* 12895480 int3  */
  x86_unimpl("int3 @ 0x12895480");
L_12895481:;
  /* 12895481 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895485 jne 0x12895462 */
  if (!C.zf) goto L_12895462;
  /* 12895487 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895489 jmp 0x1289583a */
  goto L_1289583a;
L_1289548e:;
  /* 1289548e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895492 je 0x128954d6 */
  if (C.zf) goto L_128954d6;
  /* 12895494 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12895497 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1289549d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128954a0 je 0x128954d6 */
  if (C.zf) goto L_128954d6;
  /* 128954a2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128954a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128954ab cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128954ae je 0x128954d6 */
  if (C.zf) goto L_128954d6;
L_128954b0:;
  /* 128954b0 push 0x128baca0 */
  push32((uint32_t)(0x128baca0u));
  /* 128954b5 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 128954ba push 0 */
  push32((uint32_t)(0x0u));
  /* 128954bc push 0 */
  push32((uint32_t)(0x0u));
  /* 128954be push 0 */
  push32((uint32_t)(0x0u));
  /* 128954c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 128954c2 call 0x12892e00 */
  push32(0x128954c7u); f_12892e00();
  /* 128954c7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128954ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128954cd jne 0x128954d0 */
  if (!C.zf) goto L_128954d0;
  /* 128954cf int3  */
  x86_unimpl("int3 @ 0x128954cf");
L_128954d0:;
  /* 128954d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128954d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128954d4 jne 0x128954b0 */
  if (!C.zf) goto L_128954b0;
L_128954d6:;
  /* 128954d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128954d9 push ecx */
  push32((uint32_t)(ECX));
  /* 128954da call 0x12896460 */
  push32(0x128954dfu); f_12896460();
  /* 128954df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128954e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128954e4 jne 0x12895507 */
  if (!C.zf) goto L_12895507;
  /* 128954e6 push 0x128bae68 */
  push32((uint32_t)(0x128bae68u));
  /* 128954eb push 0 */
  push32((uint32_t)(0x0u));
  /* 128954ed push 0x261 */
  push32((uint32_t)(0x261u));
  /* 128954f2 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 128954f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 128954f9 call 0x12892e00 */
  push32(0x128954feu); f_12892e00();
  /* 128954fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895501 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895504 jne 0x12895507 */
  if (!C.zf) goto L_12895507;
  /* 12895506 int3  */
  x86_unimpl("int3 @ 0x12895506");
L_12895507:;
  /* 12895507 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12895509 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289550b jne 0x128954d6 */
  if (!C.zf) goto L_128954d6;
  /* 1289550d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895510 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12895513 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12895516 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895519 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289551d jne 0x12895526 */
  if (!C.zf) goto L_12895526;
  /* 1289551f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12895526:;
  /* 12895526 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289552a je 0x1289556a */
  if (C.zf) goto L_1289556a;
L_1289552c:;
  /* 1289552c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289552f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895536 jne 0x12895541 */
  if (!C.zf) goto L_12895541;
  /* 12895538 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289553b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289553f je 0x12895562 */
  if (C.zf) goto L_12895562;
L_12895541:;
  /* 12895541 push 0x128bae20 */
  push32((uint32_t)(0x128bae20u));
  /* 12895546 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895548 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1289554d push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895552 push 2 */
  push32((uint32_t)(0x2u));
  /* 12895554 call 0x12892e00 */
  push32(0x12895559u); f_12892e00();
  /* 12895559 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289555c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289555f jne 0x12895562 */
  if (!C.zf) goto L_12895562;
  /* 12895561 int3  */
  x86_unimpl("int3 @ 0x12895561");
L_12895562:;
  /* 12895562 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895564 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12895566 jne 0x1289552c */
  if (!C.zf) goto L_1289552c;
  /* 12895568 jmp 0x128955ce */
  goto L_128955ce;
L_1289556a:;
  /* 1289556a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289556d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12895570 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12895575 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895578 jne 0x1289558f */
  if (!C.zf) goto L_1289558f;
  /* 1289557a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289557d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12895583 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895586 jne 0x1289558f */
  if (!C.zf) goto L_1289558f;
  /* 12895588 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1289558f:;
  /* 1289558f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895592 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12895595 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289559a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289559d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 128955a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128955a5 je 0x128955c8 */
  if (C.zf) goto L_128955c8;
  /* 128955a7 push 0x128bade4 */
  push32((uint32_t)(0x128bade4u));
  /* 128955ac push 0 */
  push32((uint32_t)(0x0u));
  /* 128955ae push 0x272 */
  push32((uint32_t)(0x272u));
  /* 128955b3 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 128955b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 128955ba call 0x12892e00 */
  push32(0x128955bfu); f_12892e00();
  /* 128955bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128955c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128955c5 jne 0x128955c8 */
  if (!C.zf) goto L_128955c8;
  /* 128955c7 int3  */
  x86_unimpl("int3 @ 0x128955c7");
L_128955c8:;
  /* 128955c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128955ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128955cc jne 0x1289558f */
  if (!C.zf) goto L_1289558f;
L_128955ce:;
  /* 128955ce cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128955d2 je 0x128955f9 */
  if (C.zf) goto L_128955f9;
  /* 128955d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128955d7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128955da push eax */
  push32((uint32_t)(EAX));
  /* 128955db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128955de push ecx */
  push32((uint32_t)(ECX));
  /* 128955df call 0x12899790 */
  push32(0x128955e4u); f_12899790();
  /* 128955e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128955e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128955ea cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128955ee jne 0x128955f7 */
  if (!C.zf) goto L_128955f7;
  /* 128955f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128955f2 jmp 0x1289583a */
  goto L_1289583a;
L_128955f7:;
  /* 128955f7 jmp 0x1289561c */
  goto L_1289561c;
L_128955f9:;
  /* 128955f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128955fc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128955ff push edx */
  push32((uint32_t)(EDX));
  /* 12895600 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895603 push eax */
  push32((uint32_t)(EAX));
  /* 12895604 call 0x128996e0 */
  push32(0x12895609u); f_128996e0();
  /* 12895609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289560c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1289560f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895613 jne 0x1289561c */
  if (!C.zf) goto L_1289561c;
  /* 12895615 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895617 jmp 0x1289583a */
  goto L_1289583a;
L_1289561c:;
  /* 1289561c mov ecx, dword ptr [0x128bda90] */
  ECX = (r32((uint32_t)(0x128bda90)));
  /* 12895622 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895625 mov dword ptr [0x128bda90], ecx */
  w32((uint32_t)(0x128bda90), (ECX));
  /* 1289562b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289562f jne 0x12895687 */
  if (!C.zf) goto L_12895687;
  /* 12895631 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895634 mov eax, dword ptr [0x128bf6e8] */
  EAX = (r32((uint32_t)(0x128bf6e8)));
  /* 12895639 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289563c mov dword ptr [0x128bf6e8], eax */
  w32((uint32_t)(0x128bf6e8), (EAX));
  /* 12895641 mov ecx, dword ptr [0x128bf6e8] */
  ECX = (r32((uint32_t)(0x128bf6e8)));
  /* 12895647 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289564a mov dword ptr [0x128bf6e8], ecx */
  w32((uint32_t)(0x128bf6e8), (ECX));
  /* 12895650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895653 mov eax, dword ptr [0x128bf6f0] */
  EAX = (r32((uint32_t)(0x128bf6f0)));
  /* 12895658 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289565b mov dword ptr [0x128bf6f0], eax */
  w32((uint32_t)(0x128bf6f0), (EAX));
  /* 12895660 mov ecx, dword ptr [0x128bf6f0] */
  ECX = (r32((uint32_t)(0x128bf6f0)));
  /* 12895666 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895669 mov dword ptr [0x128bf6f0], ecx */
  w32((uint32_t)(0x128bf6f0), (ECX));
  /* 1289566f mov edx, dword ptr [0x128bf6f0] */
  EDX = (r32((uint32_t)(0x128bf6f0)));
  /* 12895675 cmp edx, dword ptr [0x128bf6f4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128bf6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289567b jbe 0x12895687 */
  if ((C.cf||C.zf)) goto L_12895687;
  /* 1289567d mov eax, dword ptr [0x128bf6f0] */
  EAX = (r32((uint32_t)(0x128bf6f0)));
  /* 12895682 mov dword ptr [0x128bf6f4], eax */
  w32((uint32_t)(0x128bf6f4), (EAX));
L_12895687:;
  /* 12895687 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289568a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289568d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12895690 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895693 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895696 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895699 jbe 0x128956bf */
  if ((C.cf||C.zf)) goto L_128956bf;
  /* 1289569b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289569e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128956a1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128956a4 push edx */
  push32((uint32_t)(EDX));
  /* 128956a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128956a7 mov al, byte ptr [0x128bda9a] */
  AL = (r8((uint32_t)(0x128bda9a)));
  /* 128956ac push eax */
  push32((uint32_t)(EAX));
  /* 128956ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128956b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128956b3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128956b6 push edx */
  push32((uint32_t)(EDX));
  /* 128956b7 call 0x12899580 */
  push32(0x128956bcu); f_12899580();
  /* 128956bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128956bf:;
  /* 128956bf push 4 */
  push32((uint32_t)(0x4u));
  /* 128956c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128956c3 mov al, byte ptr [0x128bda98] */
  AL = (r8((uint32_t)(0x128bda98)));
  /* 128956c8 push eax */
  push32((uint32_t)(EAX));
  /* 128956c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128956cc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128956cf push ecx */
  push32((uint32_t)(ECX));
  /* 128956d0 call 0x12899580 */
  push32(0x128956d5u); f_12899580();
  /* 128956d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128956d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128956dc jne 0x128956f9 */
  if (!C.zf) goto L_128956f9;
  /* 128956de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128956e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128956e4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 128956e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128956ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128956ed mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 128956f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128956f3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128956f6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_128956f9:;
  /* 128956f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128956fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128956ff mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12895702:;
  /* 12895702 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895706 jne 0x12895737 */
  if (!C.zf) goto L_12895737;
  /* 12895708 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289570c jne 0x12895716 */
  if (!C.zf) goto L_12895716;
  /* 1289570e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895711 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895714 je 0x12895737 */
  if (C.zf) goto L_12895737;
L_12895716:;
  /* 12895716 push 0x128badb0 */
  push32((uint32_t)(0x128badb0u));
  /* 1289571b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289571d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12895722 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895727 push 2 */
  push32((uint32_t)(0x2u));
  /* 12895729 call 0x12892e00 */
  push32(0x1289572eu); f_12892e00();
  /* 1289572e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895731 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895734 jne 0x12895737 */
  if (!C.zf) goto L_12895737;
  /* 12895736 int3  */
  x86_unimpl("int3 @ 0x12895736");
L_12895737:;
  /* 12895737 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12895739 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289573b jne 0x12895702 */
  if (!C.zf) goto L_12895702;
  /* 1289573d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895740 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895743 je 0x1289574b */
  if (C.zf) goto L_1289574b;
  /* 12895745 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895749 je 0x12895753 */
  if (C.zf) goto L_12895753;
L_1289574b:;
  /* 1289574b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289574e jmp 0x1289583a */
  goto L_1289583a;
L_12895753:;
  /* 12895753 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895756 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895759 je 0x1289576b */
  if (C.zf) goto L_1289576b;
  /* 1289575b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289575e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12895760 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895763 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12895766 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12895769 jmp 0x128957a7 */
  goto L_128957a7;
L_1289576b:;
  /* 1289576b mov eax, dword ptr [0x128bf6e4] */
  EAX = (r32((uint32_t)(0x128bf6e4)));
  /* 12895770 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895773 je 0x12895796 */
  if (C.zf) goto L_12895796;
  /* 12895775 push 0x128bad94 */
  push32((uint32_t)(0x128bad94u));
  /* 1289577a push 0 */
  push32((uint32_t)(0x0u));
  /* 1289577c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12895781 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895786 push 2 */
  push32((uint32_t)(0x2u));
  /* 12895788 call 0x12892e00 */
  push32(0x1289578du); f_12892e00();
  /* 1289578d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895790 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895793 jne 0x12895796 */
  if (!C.zf) goto L_12895796;
  /* 12895795 int3  */
  x86_unimpl("int3 @ 0x12895795");
L_12895796:;
  /* 12895796 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895798 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289579a jne 0x1289576b */
  if (!C.zf) goto L_1289576b;
  /* 1289579c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289579f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 128957a2 mov dword ptr [0x128bf6e4], eax */
  w32((uint32_t)(0x128bf6e4), (EAX));
L_128957a7:;
  /* 128957a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128957aa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128957ae je 0x128957bf */
  if (C.zf) goto L_128957bf;
  /* 128957b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128957b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 128957b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128957b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128957bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128957bd jmp 0x128957fa */
  goto L_128957fa;
L_128957bf:;
  /* 128957bf mov eax, dword ptr [0x128bf6ec] */
  EAX = (r32((uint32_t)(0x128bf6ec)));
  /* 128957c4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128957c7 je 0x128957ea */
  if (C.zf) goto L_128957ea;
  /* 128957c9 push 0x128bad78 */
  push32((uint32_t)(0x128bad78u));
  /* 128957ce push 0 */
  push32((uint32_t)(0x0u));
  /* 128957d0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 128957d5 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 128957da push 2 */
  push32((uint32_t)(0x2u));
  /* 128957dc call 0x12892e00 */
  push32(0x128957e1u); f_12892e00();
  /* 128957e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128957e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128957e7 jne 0x128957ea */
  if (!C.zf) goto L_128957ea;
  /* 128957e9 int3  */
  x86_unimpl("int3 @ 0x128957e9");
L_128957ea:;
  /* 128957ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128957ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128957ee jne 0x128957bf */
  if (!C.zf) goto L_128957bf;
  /* 128957f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128957f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128957f5 mov dword ptr [0x128bf6ec], eax */
  w32((uint32_t)(0x128bf6ec), (EAX));
L_128957fa:;
  /* 128957fa cmp dword ptr [0x128bf6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895801 je 0x12895811 */
  if (C.zf) goto L_12895811;
  /* 12895803 mov ecx, dword ptr [0x128bf6ec] */
  ECX = (r32((uint32_t)(0x128bf6ec)));
  /* 12895809 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289580c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1289580f jmp 0x12895819 */
  goto L_12895819;
L_12895811:;
  /* 12895811 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895814 mov dword ptr [0x128bf6e4], eax */
  w32((uint32_t)(0x128bf6e4), (EAX));
L_12895819:;
  /* 12895819 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289581c mov edx, dword ptr [0x128bf6ec] */
  EDX = (r32((uint32_t)(0x128bf6ec)));
  /* 12895822 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12895824 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895827 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1289582e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12895831 mov dword ptr [0x128bf6ec], ecx */
  w32((uint32_t)(0x128bf6ec), (ECX));
  /* 12895837 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1289583a:;
  /* 1289583a pop edi */
  EDI = (pop32());
  /* 1289583b pop esi */
  ESI = (pop32());
  /* 1289583c pop ebx */
  EBX = (pop32());
  /* 1289583d mov esp, ebp */
  ESP = (EBP);
  /* 1289583f pop ebp */
  EBP = (pop32());
  /* 12895840 ret  */
  ESPCHK(0x12895330u, _esp0);
  ESP += 4; return;
}

/* FUN_10005850 @ 0x12895850 (27 bytes, 13 insns) */
void f_12895850(void) {
  FTRACE(0x12895850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895850 push ebp */
  push32((uint32_t)(EBP));
  /* 12895851 mov ebp, esp */
  EBP = (ESP);
  /* 12895853 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895855 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895857 push 1 */
  push32((uint32_t)(0x1u));
  /* 12895859 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289585c push eax */
  push32((uint32_t)(EAX));
  /* 1289585d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895860 push ecx */
  push32((uint32_t)(ECX));
  /* 12895861 call 0x12895870 */
  push32(0x12895866u); f_12895870();
  /* 12895866 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895869 pop ebp */
  EBP = (pop32());
  /* 1289586a ret  */
  ESPCHK(0x12895850u, _esp0);
  ESP += 4; return;
}

/* FUN_10005870 @ 0x12895870 (64 bytes, 27 insns) */
void f_12895870(void) {
  FTRACE(0x12895870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895870 push ebp */
  push32((uint32_t)(EBP));
  /* 12895871 mov ebp, esp */
  EBP = (ESP);
  /* 12895873 push ecx */
  push32((uint32_t)(ECX));
  /* 12895874 push 9 */
  push32((uint32_t)(0x9u));
  /* 12895876 call 0x12899210 */
  push32(0x1289587bu); f_12899210();
  /* 1289587b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289587e push 0 */
  push32((uint32_t)(0x0u));
  /* 12895880 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12895883 push eax */
  push32((uint32_t)(EAX));
  /* 12895884 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12895887 push ecx */
  push32((uint32_t)(ECX));
  /* 12895888 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289588b push edx */
  push32((uint32_t)(EDX));
  /* 1289588c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289588f push eax */
  push32((uint32_t)(EAX));
  /* 12895890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895893 push ecx */
  push32((uint32_t)(ECX));
  /* 12895894 call 0x12895330 */
  push32(0x12895899u); f_12895330();
  /* 12895899 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289589c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289589f push 9 */
  push32((uint32_t)(0x9u));
  /* 128958a1 call 0x128992b0 */
  push32(0x128958a6u); f_128992b0();
  /* 128958a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128958a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128958ac mov esp, ebp */
  ESP = (EBP);
  /* 128958ae pop ebp */
  EBP = (pop32());
  /* 128958af ret  */
  ESPCHK(0x12895870u, _esp0);
  ESP += 4; return;
}

/* FUN_100058b0 @ 0x128958b0 (19 bytes, 9 insns) */
void f_128958b0(void) {
  FTRACE(0x128958b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128958b0 push ebp */
  push32((uint32_t)(EBP));
  /* 128958b1 mov ebp, esp */
  EBP = (ESP);
  /* 128958b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 128958b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128958b8 push eax */
  push32((uint32_t)(EAX));
  /* 128958b9 call 0x128958f0 */
  push32(0x128958beu); f_128958f0();
  /* 128958be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128958c1 pop ebp */
  EBP = (pop32());
  /* 128958c2 ret  */
  ESPCHK(0x128958b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058d0 @ 0x128958d0 (19 bytes, 9 insns) */
void f_128958d0(void) {
  FTRACE(0x128958d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128958d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128958d1 mov ebp, esp */
  EBP = (ESP);
  /* 128958d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 128958d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128958d8 push eax */
  push32((uint32_t)(EAX));
  /* 128958d9 call 0x12895920 */
  push32(0x128958deu); f_12895920();
  /* 128958de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128958e1 pop ebp */
  EBP = (pop32());
  /* 128958e2 ret  */
  ESPCHK(0x128958d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058f0 @ 0x128958f0 (41 bytes, 16 insns) */
void f_128958f0(void) {
  FTRACE(0x128958f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128958f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128958f1 mov ebp, esp */
  EBP = (ESP);
  /* 128958f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 128958f5 call 0x12899210 */
  push32(0x128958fau); f_12899210();
  /* 128958fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128958fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895900 push eax */
  push32((uint32_t)(EAX));
  /* 12895901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895904 push ecx */
  push32((uint32_t)(ECX));
  /* 12895905 call 0x12895920 */
  push32(0x1289590au); f_12895920();
  /* 1289590a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289590d push 9 */
  push32((uint32_t)(0x9u));
  /* 1289590f call 0x128992b0 */
  push32(0x12895914u); f_128992b0();
  /* 12895914 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895917 pop ebp */
  EBP = (pop32());
  /* 12895918 ret  */
  ESPCHK(0x128958f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x12895920 (1004 bytes, 342 insns) */
void f_12895920(void) {
  FTRACE(0x12895920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895920 push ebp */
  push32((uint32_t)(EBP));
  /* 12895921 mov ebp, esp */
  EBP = (ESP);
  /* 12895923 push ecx */
  push32((uint32_t)(ECX));
  /* 12895924 push ebx */
  push32((uint32_t)(EBX));
  /* 12895925 push esi */
  push32((uint32_t)(ESI));
  /* 12895926 push edi */
  push32((uint32_t)(EDI));
  /* 12895927 mov eax, dword ptr [0x128bda8c] */
  EAX = (r32((uint32_t)(0x128bda8c)));
  /* 1289592c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1289592f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895931 je 0x12895963 */
  if (C.zf) goto L_12895963;
L_12895933:;
  /* 12895933 call 0x12896000 */
  push32(0x12895938u); f_12896000();
  /* 12895938 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289593a jne 0x1289595d */
  if (!C.zf) goto L_1289595d;
  /* 1289593c push 0x128bad64 */
  push32((uint32_t)(0x128bad64u));
  /* 12895941 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895943 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12895948 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 1289594d push 2 */
  push32((uint32_t)(0x2u));
  /* 1289594f call 0x12892e00 */
  push32(0x12895954u); f_12892e00();
  /* 12895954 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895957 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289595a jne 0x1289595d */
  if (!C.zf) goto L_1289595d;
  /* 1289595c int3  */
  x86_unimpl("int3 @ 0x1289595c");
L_1289595d:;
  /* 1289595d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289595f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12895961 jne 0x12895933 */
  if (!C.zf) goto L_12895933;
L_12895963:;
  /* 12895963 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895967 jne 0x1289596e */
  if (!C.zf) goto L_1289596e;
  /* 12895969 jmp 0x12895d05 */
  goto L_12895d05;
L_1289596e:;
  /* 1289596e push 0 */
  push32((uint32_t)(0x0u));
  /* 12895970 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895972 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895974 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895977 push edx */
  push32((uint32_t)(EDX));
  /* 12895978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289597a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289597d push eax */
  push32((uint32_t)(EAX));
  /* 1289597e push 3 */
  push32((uint32_t)(0x3u));
  /* 12895980 call dword ptr [0x128be150] */
  call_ind((uint32_t)(r32((uint32_t)(0x128be150))), 0x12895986u);
  /* 12895986 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289598b jne 0x128959b8 */
  if (!C.zf) goto L_128959b8;
L_1289598d:;
  /* 1289598d push 0x128bb028 */
  push32((uint32_t)(0x128bb028u));
  /* 12895992 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 12895997 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289599b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289599d push 0 */
  push32((uint32_t)(0x0u));
  /* 1289599f call 0x12892e00 */
  push32(0x128959a4u); f_12892e00();
  /* 128959a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128959a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128959aa jne 0x128959ad */
  if (!C.zf) goto L_128959ad;
  /* 128959ac int3  */
  x86_unimpl("int3 @ 0x128959ac");
L_128959ad:;
  /* 128959ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128959af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128959b1 jne 0x1289598d */
  if (!C.zf) goto L_1289598d;
  /* 128959b3 jmp 0x12895d05 */
  goto L_12895d05;
L_128959b8:;
  /* 128959b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128959bb push edx */
  push32((uint32_t)(EDX));
  /* 128959bc call 0x12896460 */
  push32(0x128959c1u); f_12896460();
  /* 128959c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128959c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128959c6 jne 0x128959e9 */
  if (!C.zf) goto L_128959e9;
  /* 128959c8 push 0x128bae68 */
  push32((uint32_t)(0x128bae68u));
  /* 128959cd push 0 */
  push32((uint32_t)(0x0u));
  /* 128959cf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 128959d4 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 128959d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 128959db call 0x12892e00 */
  push32(0x128959e0u); f_12892e00();
  /* 128959e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128959e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128959e6 jne 0x128959e9 */
  if (!C.zf) goto L_128959e9;
  /* 128959e8 int3  */
  x86_unimpl("int3 @ 0x128959e8");
L_128959e9:;
  /* 128959e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128959eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128959ed jne 0x128959b8 */
  if (!C.zf) goto L_128959b8;
  /* 128959ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128959f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128959f5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128959f8:;
  /* 128959f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128959fb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128959fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12895a03 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895a06 je 0x12895a4b */
  if (C.zf) goto L_12895a4b;
  /* 12895a08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895a0b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895a0f je 0x12895a4b */
  if (C.zf) goto L_12895a4b;
  /* 12895a11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895a14 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12895a17 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12895a1c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895a1f je 0x12895a4b */
  if (C.zf) goto L_12895a4b;
  /* 12895a21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895a24 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895a28 je 0x12895a4b */
  if (C.zf) goto L_12895a4b;
  /* 12895a2a push 0x128bb000 */
  push32((uint32_t)(0x128bb000u));
  /* 12895a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12895a31 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12895a36 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895a3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12895a3d call 0x12892e00 */
  push32(0x12895a42u); f_12892e00();
  /* 12895a42 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895a45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895a48 jne 0x12895a4b */
  if (!C.zf) goto L_12895a4b;
  /* 12895a4a int3  */
  x86_unimpl("int3 @ 0x12895a4a");
L_12895a4b:;
  /* 12895a4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12895a4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12895a4f jne 0x128959f8 */
  if (!C.zf) goto L_128959f8;
  /* 12895a51 mov eax, dword ptr [0x128bda8c] */
  EAX = (r32((uint32_t)(0x128bda8c)));
  /* 12895a56 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12895a59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895a5b jne 0x12895b26 */
  if (!C.zf) goto L_12895b26;
  /* 12895a61 push 4 */
  push32((uint32_t)(0x4u));
  /* 12895a63 mov cl, byte ptr [0x128bda98] */
  CL = (r8((uint32_t)(0x128bda98)));
  /* 12895a69 push ecx */
  push32((uint32_t)(ECX));
  /* 12895a6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895a6d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895a70 push edx */
  push32((uint32_t)(EDX));
  /* 12895a71 call 0x12895f70 */
  push32(0x12895a76u); f_12895f70();
  /* 12895a76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895a79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895a7b jne 0x12895ac0 */
  if (!C.zf) goto L_12895ac0;
L_12895a7d:;
  /* 12895a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895a80 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895a83 push eax */
  push32((uint32_t)(EAX));
  /* 12895a84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895a87 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12895a8a push edx */
  push32((uint32_t)(EDX));
  /* 12895a8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895a8e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12895a91 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12895a97 mov edx, dword ptr [ecx*4 + 0x128bda9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bda9c)));
  /* 12895a9e push edx */
  push32((uint32_t)(EDX));
  /* 12895a9f push 0x128bafd4 */
  push32((uint32_t)(0x128bafd4u));
  /* 12895aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895aaa push 1 */
  push32((uint32_t)(0x1u));
  /* 12895aac call 0x12892e00 */
  push32(0x12895ab1u); f_12892e00();
  /* 12895ab1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895ab4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895ab7 jne 0x12895aba */
  if (!C.zf) goto L_12895aba;
  /* 12895ab9 int3  */
  x86_unimpl("int3 @ 0x12895ab9");
L_12895aba:;
  /* 12895aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895abc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895abe jne 0x12895a7d */
  if (!C.zf) goto L_12895a7d;
L_12895ac0:;
  /* 12895ac0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12895ac2 mov cl, byte ptr [0x128bda98] */
  CL = (r8((uint32_t)(0x128bda98)));
  /* 12895ac8 push ecx */
  push32((uint32_t)(ECX));
  /* 12895ac9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895acc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12895acf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895ad2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12895ad6 push edx */
  push32((uint32_t)(EDX));
  /* 12895ad7 call 0x12895f70 */
  push32(0x12895adcu); f_12895f70();
  /* 12895adc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895ae1 jne 0x12895b26 */
  if (!C.zf) goto L_12895b26;
L_12895ae3:;
  /* 12895ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895ae6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895ae9 push eax */
  push32((uint32_t)(EAX));
  /* 12895aea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895aed mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12895af0 push edx */
  push32((uint32_t)(EDX));
  /* 12895af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895af4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12895af7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12895afd mov edx, dword ptr [ecx*4 + 0x128bda9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bda9c)));
  /* 12895b04 push edx */
  push32((uint32_t)(EDX));
  /* 12895b05 push 0x128bafa8 */
  push32((uint32_t)(0x128bafa8u));
  /* 12895b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12895b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12895b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12895b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12895b12 call 0x12892e00 */
  push32(0x12895b17u); f_12892e00();
  /* 12895b17 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895b1a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895b1d jne 0x12895b20 */
  if (!C.zf) goto L_12895b20;
  /* 12895b1f int3  */
  x86_unimpl("int3 @ 0x12895b1f");
L_12895b20:;
  /* 12895b20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895b24 jne 0x12895ae3 */
  if (!C.zf) goto L_12895ae3;
L_12895b26:;
  /* 12895b26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895b29 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895b2d jne 0x12895b9b */
  if (!C.zf) goto L_12895b9b;
L_12895b2f:;
  /* 12895b2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895b32 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895b39 jne 0x12895b44 */
  if (!C.zf) goto L_12895b44;
  /* 12895b3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895b3e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895b42 je 0x12895b65 */
  if (C.zf) goto L_12895b65;
L_12895b44:;
  /* 12895b44 push 0x128baf68 */
  push32((uint32_t)(0x128baf68u));
  /* 12895b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895b4b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12895b50 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895b55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12895b57 call 0x12892e00 */
  push32(0x12895b5cu); f_12892e00();
  /* 12895b5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895b5f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895b62 jne 0x12895b65 */
  if (!C.zf) goto L_12895b65;
  /* 12895b64 int3  */
  x86_unimpl("int3 @ 0x12895b64");
L_12895b65:;
  /* 12895b65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895b67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12895b69 jne 0x12895b2f */
  if (!C.zf) goto L_12895b2f;
  /* 12895b6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895b6e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12895b71 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895b74 push eax */
  push32((uint32_t)(EAX));
  /* 12895b75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895b77 mov cl, byte ptr [0x128bda99] */
  CL = (r8((uint32_t)(0x128bda99)));
  /* 12895b7d push ecx */
  push32((uint32_t)(ECX));
  /* 12895b7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895b81 push edx */
  push32((uint32_t)(EDX));
  /* 12895b82 call 0x12899580 */
  push32(0x12895b87u); f_12899580();
  /* 12895b87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895b8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895b8d push eax */
  push32((uint32_t)(EAX));
  /* 12895b8e call 0x12899980 */
  push32(0x12895b93u); f_12899980();
  /* 12895b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895b96 jmp 0x12895d05 */
  goto L_12895d05;
L_12895b9b:;
  /* 12895b9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895b9e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895ba2 jne 0x12895bb1 */
  if (!C.zf) goto L_12895bb1;
  /* 12895ba4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895ba8 jne 0x12895bb1 */
  if (!C.zf) goto L_12895bb1;
  /* 12895baa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12895bb1:;
  /* 12895bb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895bb4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12895bb7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895bba je 0x12895bdd */
  if (C.zf) goto L_12895bdd;
  /* 12895bbc push 0x128baf48 */
  push32((uint32_t)(0x128baf48u));
  /* 12895bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895bc3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12895bc8 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895bcd push 2 */
  push32((uint32_t)(0x2u));
  /* 12895bcf call 0x12892e00 */
  push32(0x12895bd4u); f_12892e00();
  /* 12895bd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895bd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895bda jne 0x12895bdd */
  if (!C.zf) goto L_12895bdd;
  /* 12895bdc int3  */
  x86_unimpl("int3 @ 0x12895bdc");
L_12895bdd:;
  /* 12895bdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895bdf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12895be1 jne 0x12895bb1 */
  if (!C.zf) goto L_12895bb1;
  /* 12895be3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895be6 mov eax, dword ptr [0x128bf6f0] */
  EAX = (r32((uint32_t)(0x128bf6f0)));
  /* 12895beb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12895bee mov dword ptr [0x128bf6f0], eax */
  w32((uint32_t)(0x128bf6f0), (EAX));
  /* 12895bf3 mov ecx, dword ptr [0x128bda8c] */
  ECX = (r32((uint32_t)(0x128bda8c)));
  /* 12895bf9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12895bfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12895bfe jne 0x12895cdc */
  if (!C.zf) goto L_12895cdc;
  /* 12895c04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895c07 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895c0a je 0x12895c1c */
  if (C.zf) goto L_12895c1c;
  /* 12895c0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895c0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12895c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895c14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12895c17 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12895c1a jmp 0x12895c5a */
  goto L_12895c5a;
L_12895c1c:;
  /* 12895c1c mov ecx, dword ptr [0x128bf6e4] */
  ECX = (r32((uint32_t)(0x128bf6e4)));
  /* 12895c22 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895c25 je 0x12895c48 */
  if (C.zf) goto L_12895c48;
  /* 12895c27 push 0x128baf30 */
  push32((uint32_t)(0x128baf30u));
  /* 12895c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12895c2e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12895c33 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895c38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12895c3a call 0x12892e00 */
  push32(0x12895c3fu); f_12892e00();
  /* 12895c3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895c42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895c45 jne 0x12895c48 */
  if (!C.zf) goto L_12895c48;
  /* 12895c47 int3  */
  x86_unimpl("int3 @ 0x12895c47");
L_12895c48:;
  /* 12895c48 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12895c4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12895c4c jne 0x12895c1c */
  if (!C.zf) goto L_12895c1c;
  /* 12895c4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895c51 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12895c54 mov dword ptr [0x128bf6e4], ecx */
  w32((uint32_t)(0x128bf6e4), (ECX));
L_12895c5a:;
  /* 12895c5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895c5d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895c61 je 0x12895c72 */
  if (C.zf) goto L_12895c72;
  /* 12895c63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895c66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12895c69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895c6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12895c6e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12895c70 jmp 0x12895caf */
  goto L_12895caf;
L_12895c72:;
  /* 12895c72 mov ecx, dword ptr [0x128bf6ec] */
  ECX = (r32((uint32_t)(0x128bf6ec)));
  /* 12895c78 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895c7b je 0x12895c9e */
  if (C.zf) goto L_12895c9e;
  /* 12895c7d push 0x128baf18 */
  push32((uint32_t)(0x128baf18u));
  /* 12895c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895c84 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12895c89 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895c8e push 2 */
  push32((uint32_t)(0x2u));
  /* 12895c90 call 0x12892e00 */
  push32(0x12895c95u); f_12892e00();
  /* 12895c95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895c98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895c9b jne 0x12895c9e */
  if (!C.zf) goto L_12895c9e;
  /* 12895c9d int3  */
  x86_unimpl("int3 @ 0x12895c9d");
L_12895c9e:;
  /* 12895c9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12895ca0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12895ca2 jne 0x12895c72 */
  if (!C.zf) goto L_12895c72;
  /* 12895ca4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895ca7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12895ca9 mov dword ptr [0x128bf6ec], ecx */
  w32((uint32_t)(0x128bf6ec), (ECX));
L_12895caf:;
  /* 12895caf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895cb2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12895cb5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895cb8 push eax */
  push32((uint32_t)(EAX));
  /* 12895cb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895cbb mov cl, byte ptr [0x128bda99] */
  CL = (r8((uint32_t)(0x128bda99)));
  /* 12895cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12895cc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895cc5 push edx */
  push32((uint32_t)(EDX));
  /* 12895cc6 call 0x12899580 */
  push32(0x12895ccbu); f_12899580();
  /* 12895ccb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895cd1 push eax */
  push32((uint32_t)(EAX));
  /* 12895cd2 call 0x12899980 */
  push32(0x12895cd7u); f_12899980();
  /* 12895cd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895cda jmp 0x12895d05 */
  goto L_12895d05;
L_12895cdc:;
  /* 12895cdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895cdf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12895ce6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895ce9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12895cec push eax */
  push32((uint32_t)(EAX));
  /* 12895ced xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895cef mov cl, byte ptr [0x128bda99] */
  CL = (r8((uint32_t)(0x128bda99)));
  /* 12895cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12895cf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895cf9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895cfc push edx */
  push32((uint32_t)(EDX));
  /* 12895cfd call 0x12899580 */
  push32(0x12895d02u); f_12899580();
  /* 12895d02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12895d05:;
  /* 12895d05 pop edi */
  EDI = (pop32());
  /* 12895d06 pop esi */
  ESI = (pop32());
  /* 12895d07 pop ebx */
  EBX = (pop32());
  /* 12895d08 mov esp, ebp */
  ESP = (EBP);
  /* 12895d0a pop ebp */
  EBP = (pop32());
  /* 12895d0b ret  */
  ESPCHK(0x12895920u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d10 @ 0x12895d10 (19 bytes, 9 insns) */
void f_12895d10(void) {
  FTRACE(0x12895d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12895d11 mov ebp, esp */
  EBP = (ESP);
  /* 12895d13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12895d15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895d18 push eax */
  push32((uint32_t)(EAX));
  /* 12895d19 call 0x12895d30 */
  push32(0x12895d1eu); f_12895d30();
  /* 12895d1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895d21 pop ebp */
  EBP = (pop32());
  /* 12895d22 ret  */
  ESPCHK(0x12895d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d30 @ 0x12895d30 (342 bytes, 119 insns) */
void f_12895d30(void) {
  FTRACE(0x12895d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12895d31 mov ebp, esp */
  EBP = (ESP);
  /* 12895d33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12895d36 push ebx */
  push32((uint32_t)(EBX));
  /* 12895d37 push esi */
  push32((uint32_t)(ESI));
  /* 12895d38 push edi */
  push32((uint32_t)(EDI));
  /* 12895d39 mov eax, dword ptr [0x128bda8c] */
  EAX = (r32((uint32_t)(0x128bda8c)));
  /* 12895d3e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12895d41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895d43 je 0x12895d75 */
  if (C.zf) goto L_12895d75;
L_12895d45:;
  /* 12895d45 call 0x12896000 */
  push32(0x12895d4au); f_12896000();
  /* 12895d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895d4c jne 0x12895d6f */
  if (!C.zf) goto L_12895d6f;
  /* 12895d4e push 0x128bad64 */
  push32((uint32_t)(0x128bad64u));
  /* 12895d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895d55 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12895d5a push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12895d61 call 0x12892e00 */
  push32(0x12895d66u); f_12892e00();
  /* 12895d66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895d69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895d6c jne 0x12895d6f */
  if (!C.zf) goto L_12895d6f;
  /* 12895d6e int3  */
  x86_unimpl("int3 @ 0x12895d6e");
L_12895d6f:;
  /* 12895d6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895d71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12895d73 jne 0x12895d45 */
  if (!C.zf) goto L_12895d45;
L_12895d75:;
  /* 12895d75 push 9 */
  push32((uint32_t)(0x9u));
  /* 12895d77 call 0x12899210 */
  push32(0x12895d7cu); f_12899210();
  /* 12895d7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12895d7f:;
  /* 12895d7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895d82 push edx */
  push32((uint32_t)(EDX));
  /* 12895d83 call 0x12896460 */
  push32(0x12895d88u); f_12896460();
  /* 12895d88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895d8d jne 0x12895db0 */
  if (!C.zf) goto L_12895db0;
  /* 12895d8f push 0x128bae68 */
  push32((uint32_t)(0x128bae68u));
  /* 12895d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895d96 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12895d9b push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895da0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12895da2 call 0x12892e00 */
  push32(0x12895da7u); f_12892e00();
  /* 12895da7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895daa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895dad jne 0x12895db0 */
  if (!C.zf) goto L_12895db0;
  /* 12895daf int3  */
  x86_unimpl("int3 @ 0x12895daf");
L_12895db0:;
  /* 12895db0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895db2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895db4 jne 0x12895d7f */
  if (!C.zf) goto L_12895d7f;
  /* 12895db6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895db9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12895dbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12895dbf:;
  /* 12895dbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895dc2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12895dc5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12895dca cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895dcd je 0x12895e12 */
  if (C.zf) goto L_12895e12;
  /* 12895dcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895dd2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895dd6 je 0x12895e12 */
  if (C.zf) goto L_12895e12;
  /* 12895dd8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895ddb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12895dde and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12895de3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895de6 je 0x12895e12 */
  if (C.zf) goto L_12895e12;
  /* 12895de8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895deb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895def je 0x12895e12 */
  if (C.zf) goto L_12895e12;
  /* 12895df1 push 0x128bb000 */
  push32((uint32_t)(0x128bb000u));
  /* 12895df6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895df8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12895dfd push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895e02 push 2 */
  push32((uint32_t)(0x2u));
  /* 12895e04 call 0x12892e00 */
  push32(0x12895e09u); f_12892e00();
  /* 12895e09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895e0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895e0f jne 0x12895e12 */
  if (!C.zf) goto L_12895e12;
  /* 12895e11 int3  */
  x86_unimpl("int3 @ 0x12895e11");
L_12895e12:;
  /* 12895e12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12895e14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12895e16 jne 0x12895dbf */
  if (!C.zf) goto L_12895dbf;
  /* 12895e18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895e1b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895e1f jne 0x12895e2e */
  if (!C.zf) goto L_12895e2e;
  /* 12895e21 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895e25 jne 0x12895e2e */
  if (!C.zf) goto L_12895e2e;
  /* 12895e27 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12895e2e:;
  /* 12895e2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895e31 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895e35 je 0x12895e69 */
  if (C.zf) goto L_12895e69;
L_12895e37:;
  /* 12895e37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895e3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12895e3d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895e40 je 0x12895e63 */
  if (C.zf) goto L_12895e63;
  /* 12895e42 push 0x128baf48 */
  push32((uint32_t)(0x128baf48u));
  /* 12895e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895e49 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12895e4e push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895e53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12895e55 call 0x12892e00 */
  push32(0x12895e5au); f_12892e00();
  /* 12895e5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895e5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895e60 jne 0x12895e63 */
  if (!C.zf) goto L_12895e63;
  /* 12895e62 int3  */
  x86_unimpl("int3 @ 0x12895e62");
L_12895e63:;
  /* 12895e63 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895e65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12895e67 jne 0x12895e37 */
  if (!C.zf) goto L_12895e37;
L_12895e69:;
  /* 12895e69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12895e6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12895e6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12895e72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12895e74 call 0x128992b0 */
  push32(0x12895e79u); f_128992b0();
  /* 12895e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895e7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895e7f pop edi */
  EDI = (pop32());
  /* 12895e80 pop esi */
  ESI = (pop32());
  /* 12895e81 pop ebx */
  EBX = (pop32());
  /* 12895e82 mov esp, ebp */
  ESP = (EBP);
  /* 12895e84 pop ebp */
  EBP = (pop32());
  /* 12895e85 ret  */
  ESPCHK(0x12895d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e90 @ 0x12895e90 (28 bytes, 11 insns) */
void f_12895e90(void) {
  FTRACE(0x12895e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12895e91 mov ebp, esp */
  EBP = (ESP);
  /* 12895e93 push ecx */
  push32((uint32_t)(ECX));
  /* 12895e94 mov eax, dword ptr [0x128bda94] */
  EAX = (r32((uint32_t)(0x128bda94)));
  /* 12895e99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12895e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895e9f mov dword ptr [0x128bda94], ecx */
  w32((uint32_t)(0x128bda94), (ECX));
  /* 12895ea5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895ea8 mov esp, ebp */
  ESP = (EBP);
  /* 12895eaa pop ebp */
  EBP = (pop32());
  /* 12895eab ret  */
  ESPCHK(0x12895e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x12895eb0 (157 bytes, 59 insns) */
void f_12895eb0(void) {
  FTRACE(0x12895eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12895eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12895eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12895eb4 push ebx */
  push32((uint32_t)(EBX));
  /* 12895eb5 push esi */
  push32((uint32_t)(ESI));
  /* 12895eb6 push edi */
  push32((uint32_t)(EDI));
  /* 12895eb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12895eb9 call 0x12899210 */
  push32(0x12895ebeu); f_12899210();
  /* 12895ebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895ec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895ec4 push eax */
  push32((uint32_t)(EAX));
  /* 12895ec5 call 0x12896460 */
  push32(0x12895ecau); f_12896460();
  /* 12895eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895ecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895ecf je 0x12895f3c */
  if (C.zf) goto L_12895f3c;
  /* 12895ed1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895ed4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12895ed7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12895eda:;
  /* 12895eda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895edd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12895ee0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12895ee5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895ee8 je 0x12895f2d */
  if (C.zf) goto L_12895f2d;
  /* 12895eea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895eed cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895ef1 je 0x12895f2d */
  if (C.zf) goto L_12895f2d;
  /* 12895ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895ef6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12895ef9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12895efe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895f01 je 0x12895f2d */
  if (C.zf) goto L_12895f2d;
  /* 12895f03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895f06 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895f0a je 0x12895f2d */
  if (C.zf) goto L_12895f2d;
  /* 12895f0c push 0x128bb000 */
  push32((uint32_t)(0x128bb000u));
  /* 12895f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895f13 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12895f18 push 0x128bad58 */
  push32((uint32_t)(0x128bad58u));
  /* 12895f1d push 2 */
  push32((uint32_t)(0x2u));
  /* 12895f1f call 0x12892e00 */
  push32(0x12895f24u); f_12892e00();
  /* 12895f24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895f27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895f2a jne 0x12895f2d */
  if (!C.zf) goto L_12895f2d;
  /* 12895f2c int3  */
  x86_unimpl("int3 @ 0x12895f2c");
L_12895f2d:;
  /* 12895f2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12895f2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12895f31 jne 0x12895eda */
  if (!C.zf) goto L_12895eda;
  /* 12895f33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895f36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895f39 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12895f3c:;
  /* 12895f3c push 9 */
  push32((uint32_t)(0x9u));
  /* 12895f3e call 0x128992b0 */
  push32(0x12895f43u); f_128992b0();
  /* 12895f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895f46 pop edi */
  EDI = (pop32());
  /* 12895f47 pop esi */
  ESI = (pop32());
  /* 12895f48 pop ebx */
  EBX = (pop32());
  /* 12895f49 mov esp, ebp */
  ESP = (EBP);
  /* 12895f4b pop ebp */
  EBP = (pop32());
  /* 12895f4c ret  */
  ESPCHK(0x12895eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f50 @ 0x12895f50 (28 bytes, 11 insns) */
void f_12895f50(void) {
  FTRACE(0x12895f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12895f51 mov ebp, esp */
  EBP = (ESP);
  /* 12895f53 push ecx */
  push32((uint32_t)(ECX));
  /* 12895f54 mov eax, dword ptr [0x128be150] */
  EAX = (r32((uint32_t)(0x128be150)));
  /* 12895f59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12895f5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895f5f mov dword ptr [0x128be150], ecx */
  w32((uint32_t)(0x128be150), (ECX));
  /* 12895f65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895f68 mov esp, ebp */
  ESP = (EBP);
  /* 12895f6a pop ebp */
  EBP = (pop32());
  /* 12895f6b ret  */
  ESPCHK(0x12895f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f70 @ 0x12895f70 (136 bytes, 55 insns) */
void f_12895f70(void) {
  FTRACE(0x12895f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12895f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12895f71 mov ebp, esp */
  EBP = (ESP);
  /* 12895f73 push ecx */
  push32((uint32_t)(ECX));
  /* 12895f74 push ebx */
  push32((uint32_t)(EBX));
  /* 12895f75 push esi */
  push32((uint32_t)(ESI));
  /* 12895f76 push edi */
  push32((uint32_t)(EDI));
  /* 12895f77 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12895f7e:;
  /* 12895f7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12895f81 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12895f84 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12895f87 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12895f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12895f8c je 0x12895fee */
  if (C.zf) goto L_12895fee;
  /* 12895f8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895f91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12895f93 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12895f95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895f98 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12895f9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895fa1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12895fa4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12895fa7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895fa9 je 0x12895fec */
  if (C.zf) goto L_12895fec;
L_12895fab:;
  /* 12895fab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12895fae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12895fb3 push eax */
  push32((uint32_t)(EAX));
  /* 12895fb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895fb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12895fb9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12895fbc push edx */
  push32((uint32_t)(EDX));
  /* 12895fbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12895fc0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12895fc3 push eax */
  push32((uint32_t)(EAX));
  /* 12895fc4 push 0x128bb044 */
  push32((uint32_t)(0x128bb044u));
  /* 12895fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12895fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12895fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12895fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 12895fd1 call 0x12892e00 */
  push32(0x12895fd6u); f_12892e00();
  /* 12895fd6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12895fd9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12895fdc jne 0x12895fdf */
  if (!C.zf) goto L_12895fdf;
  /* 12895fde int3  */
  x86_unimpl("int3 @ 0x12895fde");
L_12895fdf:;
  /* 12895fdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12895fe1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12895fe3 jne 0x12895fab */
  if (!C.zf) goto L_12895fab;
  /* 12895fe5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12895fec:;
  /* 12895fec jmp 0x12895f7e */
  goto L_12895f7e;
L_12895fee:;
  /* 12895fee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12895ff1 pop edi */
  EDI = (pop32());
  /* 12895ff2 pop esi */
  ESI = (pop32());
  /* 12895ff3 pop ebx */
  EBX = (pop32());
  /* 12895ff4 mov esp, ebp */
  ESP = (EBP);
  /* 12895ff6 pop ebp */
  EBP = (pop32());
  /* 12895ff7 ret  */
  ESPCHK(0x12895f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x12896000 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12896000(void) {
  FTRACE(0x12896000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896000 push ebp */
  push32((uint32_t)(EBP));
  /* 12896001 mov ebp, esp */
  EBP = (ESP);
  /* 12896003 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12896006 push ebx */
  push32((uint32_t)(EBX));
  /* 12896007 push esi */
  push32((uint32_t)(ESI));
  /* 12896008 push edi */
  push32((uint32_t)(EDI));
  /* 12896009 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12896010 mov eax, dword ptr [0x128bda8c] */
  EAX = (r32((uint32_t)(0x128bda8c)));
  /* 12896015 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12896018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289601a jne 0x12896026 */
  if (!C.zf) goto L_12896026;
  /* 1289601c mov eax, 1 */
  EAX = (0x1u);
  /* 12896021 jmp 0x12896358 */
  goto L_12896358;
L_12896026:;
  /* 12896026 push 9 */
  push32((uint32_t)(0x9u));
  /* 12896028 call 0x12899210 */
  push32(0x1289602du); f_12899210();
  /* 1289602d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896030 call 0x128999f0 */
  push32(0x12896035u); f_128999f0();
  /* 12896035 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12896038 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289603c je 0x12896149 */
  if (C.zf) goto L_12896149;
  /* 12896042 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896046 je 0x12896149 */
  if (C.zf) goto L_12896149;
  /* 1289604c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289604f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12896052 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12896055 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896058 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1289605b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289605f ja 0x12896112 */
  if ((!C.cf&&!C.zf)) goto L_12896112;
  /* 12896065 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12896068 jmp dword ptr [eax*4 + 0x1289635f] */
  switch (EAX) {
    case 0: goto L_128960ea;
    case 1: goto L_128960c2;
    case 2: goto L_1289609a;
    case 3: goto L_1289606f;
    default: x86_unimpl("switch@0x12896068 out of table"); return;
  }
L_1289606f:;
  /* 1289606f push 0x128bb198 */
  push32((uint32_t)(0x128bb198u));
  /* 12896074 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 12896079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289607b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289607d push 0 */
  push32((uint32_t)(0x0u));
  /* 1289607f push 0 */
  push32((uint32_t)(0x0u));
  /* 12896081 call 0x12892e00 */
  push32(0x12896086u); f_12892e00();
  /* 12896086 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896089 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289608c jne 0x1289608f */
  if (!C.zf) goto L_1289608f;
  /* 1289608e int3  */
  x86_unimpl("int3 @ 0x1289608e");
L_1289608f:;
  /* 1289608f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12896091 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12896093 jne 0x1289606f */
  if (!C.zf) goto L_1289606f;
  /* 12896095 jmp 0x12896138 */
  goto L_12896138;
L_1289609a:;
  /* 1289609a push 0x128bb174 */
  push32((uint32_t)(0x128bb174u));
  /* 1289609f push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 128960a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128960a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 128960a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 128960aa push 0 */
  push32((uint32_t)(0x0u));
  /* 128960ac call 0x12892e00 */
  push32(0x128960b1u); f_12892e00();
  /* 128960b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128960b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128960b7 jne 0x128960ba */
  if (!C.zf) goto L_128960ba;
  /* 128960b9 int3  */
  x86_unimpl("int3 @ 0x128960b9");
L_128960ba:;
  /* 128960ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128960bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128960be jne 0x1289609a */
  if (!C.zf) goto L_1289609a;
  /* 128960c0 jmp 0x12896138 */
  goto L_12896138;
L_128960c2:;
  /* 128960c2 push 0x128bb150 */
  push32((uint32_t)(0x128bb150u));
  /* 128960c7 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 128960cc push 0 */
  push32((uint32_t)(0x0u));
  /* 128960ce push 0 */
  push32((uint32_t)(0x0u));
  /* 128960d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128960d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128960d4 call 0x12892e00 */
  push32(0x128960d9u); f_12892e00();
  /* 128960d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128960dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128960df jne 0x128960e2 */
  if (!C.zf) goto L_128960e2;
  /* 128960e1 int3  */
  x86_unimpl("int3 @ 0x128960e1");
L_128960e2:;
  /* 128960e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128960e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128960e6 jne 0x128960c2 */
  if (!C.zf) goto L_128960c2;
  /* 128960e8 jmp 0x12896138 */
  goto L_12896138;
L_128960ea:;
  /* 128960ea push 0x128bb12c */
  push32((uint32_t)(0x128bb12cu));
  /* 128960ef push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 128960f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128960f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 128960f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 128960fa push 0 */
  push32((uint32_t)(0x0u));
  /* 128960fc call 0x12892e00 */
  push32(0x12896101u); f_12892e00();
  /* 12896101 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896104 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896107 jne 0x1289610a */
  if (!C.zf) goto L_1289610a;
  /* 12896109 int3  */
  x86_unimpl("int3 @ 0x12896109");
L_1289610a:;
  /* 1289610a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289610c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289610e jne 0x128960ea */
  if (!C.zf) goto L_128960ea;
  /* 12896110 jmp 0x12896138 */
  goto L_12896138;
L_12896112:;
  /* 12896112 push 0x128bb100 */
  push32((uint32_t)(0x128bb100u));
  /* 12896117 push 0x128bacf8 */
  push32((uint32_t)(0x128bacf8u));
  /* 1289611c push 0 */
  push32((uint32_t)(0x0u));
  /* 1289611e push 0 */
  push32((uint32_t)(0x0u));
  /* 12896120 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896122 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896124 call 0x12892e00 */
  push32(0x12896129u); f_12892e00();
  /* 12896129 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289612c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289612f jne 0x12896132 */
  if (!C.zf) goto L_12896132;
  /* 12896131 int3  */
  x86_unimpl("int3 @ 0x12896131");
L_12896132:;
  /* 12896132 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12896134 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12896136 jne 0x12896112 */
  if (!C.zf) goto L_12896112;
L_12896138:;
  /* 12896138 push 9 */
  push32((uint32_t)(0x9u));
  /* 1289613a call 0x128992b0 */
  push32(0x1289613fu); f_128992b0();
  /* 1289613f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896142 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896144 jmp 0x12896358 */
  goto L_12896358;
L_12896149:;
  /* 12896149 mov eax, dword ptr [0x128bf6ec] */
  EAX = (r32((uint32_t)(0x128bf6ec)));
  /* 1289614e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12896151 jmp 0x1289615b */
  goto L_1289615b;
L_12896153:;
  /* 12896153 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896156 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12896158 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1289615b:;
  /* 1289615b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289615f je 0x1289634b */
  if (C.zf) goto L_1289634b;
  /* 12896165 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1289616c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289616f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12896172 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12896178 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289617b je 0x128961a0 */
  if (C.zf) goto L_128961a0;
  /* 1289617d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896180 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896184 je 0x128961a0 */
  if (C.zf) goto L_128961a0;
  /* 12896186 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896189 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1289618c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12896192 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896195 je 0x128961a0 */
  if (C.zf) goto L_128961a0;
  /* 12896197 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289619a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289619e jne 0x128961b8 */
  if (!C.zf) goto L_128961b8;
L_128961a0:;
  /* 128961a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128961a3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 128961a6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 128961ac mov edx, dword ptr [ecx*4 + 0x128bda9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bda9c)));
  /* 128961b3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 128961b6 jmp 0x128961bf */
  goto L_128961bf;
L_128961b8:;
  /* 128961b8 mov dword ptr [ebp - 0x14], 0x128bb0f8 */
  w32((uint32_t)(EBP + -0x14), (0x128bb0f8u));
L_128961bf:;
  /* 128961bf push 4 */
  push32((uint32_t)(0x4u));
  /* 128961c1 mov al, byte ptr [0x128bda98] */
  AL = (r8((uint32_t)(0x128bda98)));
  /* 128961c6 push eax */
  push32((uint32_t)(EAX));
  /* 128961c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128961ca add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128961cd push ecx */
  push32((uint32_t)(ECX));
  /* 128961ce call 0x12895f70 */
  push32(0x128961d3u); f_12895f70();
  /* 128961d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128961d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128961d8 jne 0x12896214 */
  if (!C.zf) goto L_12896214;
L_128961da:;
  /* 128961da mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128961dd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128961e0 push edx */
  push32((uint32_t)(EDX));
  /* 128961e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128961e4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 128961e7 push ecx */
  push32((uint32_t)(ECX));
  /* 128961e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128961eb push edx */
  push32((uint32_t)(EDX));
  /* 128961ec push 0x128bafd4 */
  push32((uint32_t)(0x128bafd4u));
  /* 128961f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 128961f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128961f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128961f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128961f9 call 0x12892e00 */
  push32(0x128961feu); f_12892e00();
  /* 128961fe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896201 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896204 jne 0x12896207 */
  if (!C.zf) goto L_12896207;
  /* 12896206 int3  */
  x86_unimpl("int3 @ 0x12896206");
L_12896207:;
  /* 12896207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289620b jne 0x128961da */
  if (!C.zf) goto L_128961da;
  /* 1289620d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12896214:;
  /* 12896214 push 4 */
  push32((uint32_t)(0x4u));
  /* 12896216 mov cl, byte ptr [0x128bda98] */
  CL = (r8((uint32_t)(0x128bda98)));
  /* 1289621c push ecx */
  push32((uint32_t)(ECX));
  /* 1289621d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896220 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12896223 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896226 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1289622a push edx */
  push32((uint32_t)(EDX));
  /* 1289622b call 0x12895f70 */
  push32(0x12896230u); f_12895f70();
  /* 12896230 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896233 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896235 jne 0x12896271 */
  if (!C.zf) goto L_12896271;
L_12896237:;
  /* 12896237 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289623a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289623d push eax */
  push32((uint32_t)(EAX));
  /* 1289623e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896241 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12896244 push edx */
  push32((uint32_t)(EDX));
  /* 12896245 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12896248 push eax */
  push32((uint32_t)(EAX));
  /* 12896249 push 0x128bafa8 */
  push32((uint32_t)(0x128bafa8u));
  /* 1289624e push 0 */
  push32((uint32_t)(0x0u));
  /* 12896250 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896252 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896254 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896256 call 0x12892e00 */
  push32(0x1289625bu); f_12892e00();
  /* 1289625b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289625e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896261 jne 0x12896264 */
  if (!C.zf) goto L_12896264;
  /* 12896263 int3  */
  x86_unimpl("int3 @ 0x12896263");
L_12896264:;
  /* 12896264 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12896266 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12896268 jne 0x12896237 */
  if (!C.zf) goto L_12896237;
  /* 1289626a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12896271:;
  /* 12896271 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896274 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896278 jne 0x128962ca */
  if (!C.zf) goto L_128962ca;
  /* 1289627a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289627d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12896280 push ecx */
  push32((uint32_t)(ECX));
  /* 12896281 mov dl, byte ptr [0x128bda99] */
  DL = (r8((uint32_t)(0x128bda99)));
  /* 12896287 push edx */
  push32((uint32_t)(EDX));
  /* 12896288 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289628b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289628e push eax */
  push32((uint32_t)(EAX));
  /* 1289628f call 0x12895f70 */
  push32(0x12896294u); f_12895f70();
  /* 12896294 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12896299 jne 0x128962ca */
  if (!C.zf) goto L_128962ca;
L_1289629b:;
  /* 1289629b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289629e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128962a1 push ecx */
  push32((uint32_t)(ECX));
  /* 128962a2 push 0x128bb0cc */
  push32((uint32_t)(0x128bb0ccu));
  /* 128962a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128962a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 128962ab push 0 */
  push32((uint32_t)(0x0u));
  /* 128962ad push 0 */
  push32((uint32_t)(0x0u));
  /* 128962af call 0x12892e00 */
  push32(0x128962b4u); f_12892e00();
  /* 128962b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128962b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128962ba jne 0x128962bd */
  if (!C.zf) goto L_128962bd;
  /* 128962bc int3  */
  x86_unimpl("int3 @ 0x128962bc");
L_128962bd:;
  /* 128962bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128962bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128962c1 jne 0x1289629b */
  if (!C.zf) goto L_1289629b;
  /* 128962c3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_128962ca:;
  /* 128962ca cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128962ce jne 0x12896346 */
  if (!C.zf) goto L_12896346;
  /* 128962d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128962d3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128962d7 je 0x1289630c */
  if (C.zf) goto L_1289630c;
L_128962d9:;
  /* 128962d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128962dc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 128962df push edx */
  push32((uint32_t)(EDX));
  /* 128962e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128962e3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 128962e6 push ecx */
  push32((uint32_t)(ECX));
  /* 128962e7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128962ea push edx */
  push32((uint32_t)(EDX));
  /* 128962eb push 0x128bb0ac */
  push32((uint32_t)(0x128bb0acu));
  /* 128962f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128962f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128962f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128962f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 128962f8 call 0x12892e00 */
  push32(0x128962fdu); f_12892e00();
  /* 128962fd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896300 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896303 jne 0x12896306 */
  if (!C.zf) goto L_12896306;
  /* 12896305 int3  */
  x86_unimpl("int3 @ 0x12896305");
L_12896306:;
  /* 12896306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12896308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289630a jne 0x128962d9 */
  if (!C.zf) goto L_128962d9;
L_1289630c:;
  /* 1289630c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289630f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12896312 push edx */
  push32((uint32_t)(EDX));
  /* 12896313 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12896316 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12896319 push eax */
  push32((uint32_t)(EAX));
  /* 1289631a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289631d push ecx */
  push32((uint32_t)(ECX));
  /* 1289631e push 0x128bb080 */
  push32((uint32_t)(0x128bb080u));
  /* 12896323 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896325 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896327 push 0 */
  push32((uint32_t)(0x0u));
  /* 12896329 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289632b call 0x12892e00 */
  push32(0x12896330u); f_12892e00();
  /* 12896330 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896333 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896336 jne 0x12896339 */
  if (!C.zf) goto L_12896339;
  /* 12896338 int3  */
  x86_unimpl("int3 @ 0x12896338");
L_12896339:;
  /* 12896339 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289633b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289633d jne 0x1289630c */
  if (!C.zf) goto L_1289630c;
  /* 1289633f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12896346:;
  /* 12896346 jmp 0x12896153 */
  goto L_12896153;
L_1289634b:;
  /* 1289634b push 9 */
  push32((uint32_t)(0x9u));
  /* 1289634d call 0x128992b0 */
  push32(0x12896352u); f_128992b0();
  /* 12896352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12896355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12896358:;
  /* 12896358 pop edi */
  EDI = (pop32());
  /* 12896359 pop esi */
  ESI = (pop32());
  /* 1289635a pop ebx */
  EBX = (pop32());
  /* 1289635b mov esp, ebp */
  ESP = (EBP);
  /* 1289635d pop ebp */
  EBP = (pop32());
  /* 1289635e ret  */
  ESPCHK(0x12896000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006370 @ 0x12896370 (34 bytes, 13 insns) */
void f_12896370(void) {
  FTRACE(0x12896370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12896370 push ebp */
  push32((uint32_t)(EBP));
  /* 12896371 mov ebp, esp */
  EBP = (ESP);
  /* 12896373 push ecx */
  push32((uint32_t)(ECX));
  /* 12896374 mov eax, dword ptr [0x128bda8c] */
  EAX = (r32((uint32_t)(0x128bda8c)));
  /* 12896379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289637c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12896380 je 0x1289638b */
  if (C.zf) goto L_1289638b;
  /* 12896382 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12896385 mov dword ptr [0x128bda8c], ecx */
  w32((uint32_t)(0x128bda8c), (ECX));
L_1289638b:;
  /* 1289638b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289638e mov esp, ebp */
  ESP = (EBP);
  /* 12896390 pop ebp */
  EBP = (pop32());
  /* 12896391 ret  */
  ESPCHK(0x12896370u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x128963a0 (103 bytes, 38 insns) */
void f_128963a0(void) {
  FTRACE(0x128963a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128963a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128963a1 mov ebp, esp */
  EBP = (ESP);
  /* 128963a3 push ecx */
  push32((uint32_t)(ECX));
  /* 128963a4 mov eax, dword ptr [0x128bda8c] */
  EAX = (r32((uint32_t)(0x128bda8c)));
  /* 128963a9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 128963ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128963ae jne 0x128963b2 */
  if (!C.zf) goto L_128963b2;
  /* 128963b0 jmp 0x12896403 */
  goto L_12896403;
L_128963b2:;
  /* 128963b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 128963b4 call 0x12899210 */
  push32(0x128963b9u); f_12899210();
  /* 128963b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128963bc mov ecx, dword ptr [0x128bf6ec] */
  ECX = (r32((uint32_t)(0x128bf6ec)));
  /* 128963c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128963c5 jmp 0x128963cf */
  goto L_128963cf;
L_128963c7:;
  /* 128963c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128963ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128963cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128963cf:;
  /* 128963cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128963d3 je 0x128963f9 */
  if (C.zf) goto L_128963f9;
  /* 128963d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128963d8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 128963db and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128963e1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128963e4 jne 0x128963f7 */
  if (!C.zf) goto L_128963f7;
  /* 128963e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128963e9 push eax */
  push32((uint32_t)(EAX));
  /* 128963ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128963ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128963f0 push ecx */
  push32((uint32_t)(ECX));
  /* 128963f1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x128963f4u);
  /* 128963f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128963f7:;
  /* 128963f7 jmp 0x128963c7 */
  goto L_128963c7;
L_128963f9:;
  /* 128963f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 128963fb call 0x128992b0 */
  push32(0x12896400u); f_128992b0();
  /* 12896400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12896403:;
  /* 12896403 mov esp, ebp */
  ESP = (EBP);
  /* 12896405 pop ebp */
  EBP = (pop32());
  /* 12896406 ret  */
  ESPCHK(0x128963a0u, _esp0);
  ESP += 4; return;
}

