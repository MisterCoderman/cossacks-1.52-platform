#include "recomp.h"

/* _memset @ 0x1144cca0 (88 bytes, 40 insns) */
void f_1144cca0(void) {
  FTRACE(0x1144cca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144cca0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1144cca4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1144cca8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144ccaa je 0x1144ccf3 */
  if (C.zf) goto L_1144ccf3;
  /* 1144ccac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ccae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1144ccb2 push edi */
  push32((uint32_t)(EDI));
  /* 1144ccb3 mov edi, ecx */
  EDI = (ECX);
  /* 1144ccb5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ccb8 jb 0x1144cce7 */
  if (C.cf) goto L_1144cce7;
  /* 1144ccba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1144ccbc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1144ccbf je 0x1144ccc9 */
  if (C.zf) goto L_1144ccc9;
  /* 1144ccc1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1144ccc3:;
  /* 1144ccc3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1144ccc5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1144ccc6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1144ccc7 jne 0x1144ccc3 */
  if (!C.zf) goto L_1144ccc3;
L_1144ccc9:;
  /* 1144ccc9 mov ecx, eax */
  ECX = (EAX);
  /* 1144cccb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1144ccce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ccd0 mov ecx, eax */
  ECX = (EAX);
  /* 1144ccd2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1144ccd5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ccd7 mov ecx, edx */
  ECX = (EDX);
  /* 1144ccd9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1144ccdc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1144ccdf je 0x1144cce7 */
  if (C.zf) goto L_1144cce7;
  /* 1144cce1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1144cce3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144cce5 je 0x1144cced */
  if (C.zf) goto L_1144cced;
L_1144cce7:;
  /* 1144cce7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1144cce9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1144ccea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1144cceb jne 0x1144cce7 */
  if (!C.zf) goto L_1144cce7;
L_1144cced:;
  /* 1144cced mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1144ccf1 pop edi */
  EDI = (pop32());
  /* 1144ccf2 ret  */
  ESPCHK(0x1144cca0u, _esp0);
  ESP += 4; return;
L_1144ccf3:;
  /* 1144ccf3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1144ccf7 ret  */
  ESPCHK(0x1144cca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd00 @ 0x1144cd00 (23 bytes, 10 insns) */
void f_1144cd00(void) {
  FTRACE(0x1144cd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144cd00 push ebp */
  push32((uint32_t)(EBP));
  /* 1144cd01 mov ebp, esp */
  EBP = (ESP);
  /* 1144cd03 mov eax, dword ptr [0x11474b44] */
  EAX = (r32((uint32_t)(0x11474b44)));
  /* 1144cd08 push eax */
  push32((uint32_t)(EAX));
  /* 1144cd09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cd0c push ecx */
  push32((uint32_t)(ECX));
  /* 1144cd0d call 0x1144cd20 */
  push32(0x1144cd12u); f_1144cd20();
  /* 1144cd12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cd15 pop ebp */
  EBP = (pop32());
  /* 1144cd16 ret  */
  ESPCHK(0x1144cd00u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1144cd20 (87 bytes, 34 insns) */
void f_1144cd20(void) {
  FTRACE(0x1144cd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144cd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1144cd21 mov ebp, esp */
  EBP = (ESP);
  /* 1144cd23 push ecx */
  push32((uint32_t)(ECX));
  /* 1144cd24 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cd28 jbe 0x1144cd2e */
  if ((C.cf||C.zf)) goto L_1144cd2e;
  /* 1144cd2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144cd2c jmp 0x1144cd73 */
  goto L_1144cd73;
L_1144cd2e:;
  /* 1144cd2e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cd32 ja 0x1144cd45 */
  if ((!C.cf&&!C.zf)) goto L_1144cd45;
  /* 1144cd34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cd37 push eax */
  push32((uint32_t)(EAX));
  /* 1144cd38 call 0x1144cd80 */
  push32(0x1144cd3du); f_1144cd80();
  /* 1144cd3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cd40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144cd43 jmp 0x1144cd4c */
  goto L_1144cd4c;
L_1144cd45:;
  /* 1144cd45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1144cd4c:;
  /* 1144cd4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cd50 jne 0x1144cd58 */
  if (!C.zf) goto L_1144cd58;
  /* 1144cd52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cd56 jne 0x1144cd5d */
  if (!C.zf) goto L_1144cd5d;
L_1144cd58:;
  /* 1144cd58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144cd5b jmp 0x1144cd73 */
  goto L_1144cd73;
L_1144cd5d:;
  /* 1144cd5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cd60 push ecx */
  push32((uint32_t)(ECX));
  /* 1144cd61 call 0x1144cc70 */
  push32(0x1144cd66u); f_1144cc70();
  /* 1144cd66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cd69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144cd6b jne 0x1144cd71 */
  if (!C.zf) goto L_1144cd71;
  /* 1144cd6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144cd6f jmp 0x1144cd73 */
  goto L_1144cd73;
L_1144cd71:;
  /* 1144cd71 jmp 0x1144cd2e */
  goto L_1144cd2e;
L_1144cd73:;
  /* 1144cd73 mov esp, ebp */
  ESP = (EBP);
  /* 1144cd75 pop ebp */
  EBP = (pop32());
  /* 1144cd76 ret  */
  ESPCHK(0x1144cd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd80 @ 0x1144cd80 (109 bytes, 37 insns) */
void f_1144cd80(void) {
  FTRACE(0x1144cd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144cd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1144cd81 mov ebp, esp */
  EBP = (ESP);
  /* 1144cd83 push ecx */
  push32((uint32_t)(ECX));
  /* 1144cd84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cd87 cmp eax, dword ptr [0x11472db4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11472db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cd8d ja 0x1144cdbd */
  if ((!C.cf&&!C.zf)) goto L_1144cdbd;
  /* 1144cd8f push 9 */
  push32((uint32_t)(0x9u));
  /* 1144cd91 call 0x1144b210 */
  push32(0x1144cd96u); f_1144b210();
  /* 1144cd96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cd99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cd9c push ecx */
  push32((uint32_t)(ECX));
  /* 1144cd9d call 0x1144d8c0 */
  push32(0x1144cda2u); f_1144d8c0();
  /* 1144cda2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cda5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144cda8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1144cdaa call 0x1144b2b0 */
  push32(0x1144cdafu); f_1144b2b0();
  /* 1144cdaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cdb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cdb6 je 0x1144cdbd */
  if (C.zf) goto L_1144cdbd;
  /* 1144cdb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144cdbb jmp 0x1144cde9 */
  goto L_1144cde9;
L_1144cdbd:;
  /* 1144cdbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cdc1 jne 0x1144cdca */
  if (!C.zf) goto L_1144cdca;
  /* 1144cdc3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1144cdca:;
  /* 1144cdca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cdcd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cdd0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1144cdd3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1144cdd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cdd9 push eax */
  push32((uint32_t)(EAX));
  /* 1144cdda push 0 */
  push32((uint32_t)(0x0u));
  /* 1144cddc mov ecx, dword ptr [0x1147624c] */
  ECX = (r32((uint32_t)(0x1147624c)));
  /* 1144cde2 push ecx */
  push32((uint32_t)(ECX));
  /* 1144cde3 call dword ptr [0x11477368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477368))), 0x1144cde9u);
L_1144cde9:;
  /* 1144cde9 mov esp, ebp */
  ESP = (EBP);
  /* 1144cdeb pop ebp */
  EBP = (pop32());
  /* 1144cdec ret  */
  ESPCHK(0x1144cd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdf0 @ 0x1144cdf0 (10 bytes, 5 insns) */
void f_1144cdf0(void) {
  FTRACE(0x1144cdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144cdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144cdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1144cdf3 mov eax, 1 */
  EAX = (0x1u);
  /* 1144cdf8 pop ebp */
  EBP = (pop32());
  /* 1144cdf9 ret  */
  ESPCHK(0x1144cdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce00 @ 0x1144ce00 (173 bytes, 59 insns) */
void f_1144ce00(void) {
  FTRACE(0x1144ce00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144ce00 push ebp */
  push32((uint32_t)(EBP));
  /* 1144ce01 mov ebp, esp */
  EBP = (ESP);
  /* 1144ce03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144ce06 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ce0a jbe 0x1144ce13 */
  if ((C.cf||C.zf)) goto L_1144ce13;
  /* 1144ce0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ce0e jmp 0x1144cea9 */
  goto L_1144cea9;
L_1144ce13:;
  /* 1144ce13 push 9 */
  push32((uint32_t)(0x9u));
  /* 1144ce15 call 0x1144b210 */
  push32(0x1144ce1au); f_1144b210();
  /* 1144ce1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ce1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144ce20 push eax */
  push32((uint32_t)(EAX));
  /* 1144ce21 call 0x1144d230 */
  push32(0x1144ce26u); f_1144d230();
  /* 1144ce26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ce29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1144ce2c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ce30 je 0x1144ce71 */
  if (C.zf) goto L_1144ce71;
  /* 1144ce32 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1144ce39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144ce3c cmp ecx, dword ptr [0x11472db4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11472db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ce42 ja 0x1144ce62 */
  if ((!C.cf&&!C.zf)) goto L_1144ce62;
  /* 1144ce44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144ce47 push edx */
  push32((uint32_t)(EDX));
  /* 1144ce48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144ce4b push eax */
  push32((uint32_t)(EAX));
  /* 1144ce4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144ce4f push ecx */
  push32((uint32_t)(ECX));
  /* 1144ce50 call 0x1144e100 */
  push32(0x1144ce55u); f_1144e100();
  /* 1144ce55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ce58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144ce5a je 0x1144ce62 */
  if (C.zf) goto L_1144ce62;
  /* 1144ce5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144ce5f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1144ce62:;
  /* 1144ce62 push 9 */
  push32((uint32_t)(0x9u));
  /* 1144ce64 call 0x1144b2b0 */
  push32(0x1144ce69u); f_1144b2b0();
  /* 1144ce69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ce6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144ce6f jmp 0x1144cea9 */
  goto L_1144cea9;
L_1144ce71:;
  /* 1144ce71 push 9 */
  push32((uint32_t)(0x9u));
  /* 1144ce73 call 0x1144b2b0 */
  push32(0x1144ce78u); f_1144b2b0();
  /* 1144ce78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ce7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ce7f jne 0x1144ce88 */
  if (!C.zf) goto L_1144ce88;
  /* 1144ce81 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1144ce88:;
  /* 1144ce88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144ce8b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ce8e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1144ce90 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1144ce93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144ce96 push ecx */
  push32((uint32_t)(ECX));
  /* 1144ce97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144ce9a push edx */
  push32((uint32_t)(EDX));
  /* 1144ce9b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1144ce9d mov eax, dword ptr [0x1147624c] */
  EAX = (r32((uint32_t)(0x1147624c)));
  /* 1144cea2 push eax */
  push32((uint32_t)(EAX));
  /* 1144cea3 call dword ptr [0x11477358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477358))), 0x1144cea9u);
L_1144cea9:;
  /* 1144cea9 mov esp, ebp */
  ESP = (EBP);
  /* 1144ceab pop ebp */
  EBP = (pop32());
  /* 1144ceac ret  */
  ESPCHK(0x1144ce00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ceb0 @ 0x1144ceb0 (490 bytes, 165 insns) */
void f_1144ceb0(void) {
  FTRACE(0x1144ceb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144ceb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144ceb1 mov ebp, esp */
  EBP = (ESP);
  /* 1144ceb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144ceb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ceba jne 0x1144cecd */
  if (!C.zf) goto L_1144cecd;
  /* 1144cebc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144cebf push eax */
  push32((uint32_t)(EAX));
  /* 1144cec0 call 0x1144cd00 */
  push32(0x1144cec5u); f_1144cd00();
  /* 1144cec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cec8 jmp 0x1144d096 */
  goto L_1144d096;
L_1144cecd:;
  /* 1144cecd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ced1 jne 0x1144cee6 */
  if (!C.zf) goto L_1144cee6;
  /* 1144ced3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144ced6 push ecx */
  push32((uint32_t)(ECX));
  /* 1144ced7 call 0x1144d0a0 */
  push32(0x1144cedcu); f_1144d0a0();
  /* 1144cedc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cedf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144cee1 jmp 0x1144d096 */
  goto L_1144d096;
L_1144cee6:;
  /* 1144cee6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1144ceed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cef1 ja 0x1144d069 */
  if ((!C.cf&&!C.zf)) goto L_1144d069;
  /* 1144cef7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1144cef9 call 0x1144b210 */
  push32(0x1144cefeu); f_1144b210();
  /* 1144cefe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cf01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cf04 push edx */
  push32((uint32_t)(EDX));
  /* 1144cf05 call 0x1144d230 */
  push32(0x1144cf0au); f_1144d230();
  /* 1144cf0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cf0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1144cf10 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cf14 je 0x1144d02c */
  if (C.zf) goto L_1144d02c;
  /* 1144cf1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144cf1d cmp eax, dword ptr [0x11472db4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11472db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cf23 ja 0x1144cfa0 */
  if ((!C.cf&&!C.zf)) goto L_1144cfa0;
  /* 1144cf25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144cf28 push ecx */
  push32((uint32_t)(ECX));
  /* 1144cf29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cf2c push edx */
  push32((uint32_t)(EDX));
  /* 1144cf2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144cf30 push eax */
  push32((uint32_t)(EAX));
  /* 1144cf31 call 0x1144e100 */
  push32(0x1144cf36u); f_1144e100();
  /* 1144cf36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cf39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144cf3b je 0x1144cf45 */
  if (C.zf) goto L_1144cf45;
  /* 1144cf3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cf40 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1144cf43 jmp 0x1144cfa0 */
  goto L_1144cfa0;
L_1144cf45:;
  /* 1144cf45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144cf48 push edx */
  push32((uint32_t)(EDX));
  /* 1144cf49 call 0x1144d8c0 */
  push32(0x1144cf4eu); f_1144d8c0();
  /* 1144cf4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cf51 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1144cf54 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cf58 je 0x1144cfa0 */
  if (C.zf) goto L_1144cfa0;
  /* 1144cf5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cf5d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1144cf60 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144cf63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1144cf66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144cf69 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cf6c jae 0x1144cf76 */
  if (!C.cf) goto L_1144cf76;
  /* 1144cf6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144cf71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1144cf74 jmp 0x1144cf7c */
  goto L_1144cf7c;
L_1144cf76:;
  /* 1144cf76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144cf79 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1144cf7c:;
  /* 1144cf7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144cf7f push edx */
  push32((uint32_t)(EDX));
  /* 1144cf80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cf83 push eax */
  push32((uint32_t)(EAX));
  /* 1144cf84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144cf87 push ecx */
  push32((uint32_t)(ECX));
  /* 1144cf88 call 0x1144f810 */
  push32(0x1144cf8du); f_1144f810();
  /* 1144cf8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cf90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cf93 push edx */
  push32((uint32_t)(EDX));
  /* 1144cf94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144cf97 push eax */
  push32((uint32_t)(EAX));
  /* 1144cf98 call 0x1144d2f0 */
  push32(0x1144cf9du); f_1144d2f0();
  /* 1144cf9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1144cfa0:;
  /* 1144cfa0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cfa4 jne 0x1144d020 */
  if (!C.zf) goto L_1144d020;
  /* 1144cfa6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cfaa jne 0x1144cfb3 */
  if (!C.zf) goto L_1144cfb3;
  /* 1144cfac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1144cfb3:;
  /* 1144cfb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144cfb6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144cfb9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1144cfbc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1144cfbf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144cfc2 push edx */
  push32((uint32_t)(EDX));
  /* 1144cfc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144cfc5 mov eax, dword ptr [0x1147624c] */
  EAX = (r32((uint32_t)(0x1147624c)));
  /* 1144cfca push eax */
  push32((uint32_t)(EAX));
  /* 1144cfcb call dword ptr [0x11477368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477368))), 0x1144cfd1u);
  /* 1144cfd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1144cfd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cfd8 je 0x1144d020 */
  if (C.zf) goto L_1144d020;
  /* 1144cfda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144cfdd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1144cfe0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144cfe3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1144cfe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144cfe9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144cfec jae 0x1144cff6 */
  if (!C.cf) goto L_1144cff6;
  /* 1144cfee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144cff1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1144cff4 jmp 0x1144cffc */
  goto L_1144cffc;
L_1144cff6:;
  /* 1144cff6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144cff9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1144cffc:;
  /* 1144cffc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144cfff push eax */
  push32((uint32_t)(EAX));
  /* 1144d000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d003 push ecx */
  push32((uint32_t)(ECX));
  /* 1144d004 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d007 push edx */
  push32((uint32_t)(EDX));
  /* 1144d008 call 0x1144f810 */
  push32(0x1144d00du); f_1144f810();
  /* 1144d00d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d013 push eax */
  push32((uint32_t)(EAX));
  /* 1144d014 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144d017 push ecx */
  push32((uint32_t)(ECX));
  /* 1144d018 call 0x1144d2f0 */
  push32(0x1144d01du); f_1144d2f0();
  /* 1144d01d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1144d020:;
  /* 1144d020 push 9 */
  push32((uint32_t)(0x9u));
  /* 1144d022 call 0x1144b2b0 */
  push32(0x1144d027u); f_1144b2b0();
  /* 1144d027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d02a jmp 0x1144d069 */
  goto L_1144d069;
L_1144d02c:;
  /* 1144d02c push 9 */
  push32((uint32_t)(0x9u));
  /* 1144d02e call 0x1144b2b0 */
  push32(0x1144d033u); f_1144b2b0();
  /* 1144d033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d036 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d03a jne 0x1144d043 */
  if (!C.zf) goto L_1144d043;
  /* 1144d03c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1144d043:;
  /* 1144d043 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144d046 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d049 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1144d04c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1144d04f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144d052 push eax */
  push32((uint32_t)(EAX));
  /* 1144d053 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d056 push ecx */
  push32((uint32_t)(ECX));
  /* 1144d057 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144d059 mov edx, dword ptr [0x1147624c] */
  EDX = (r32((uint32_t)(0x1147624c)));
  /* 1144d05f push edx */
  push32((uint32_t)(EDX));
  /* 1144d060 call dword ptr [0x11477358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477358))), 0x1144d066u);
  /* 1144d066 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1144d069:;
  /* 1144d069 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d06d jne 0x1144d078 */
  if (!C.zf) goto L_1144d078;
  /* 1144d06f cmp dword ptr [0x11474b44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d076 jne 0x1144d07d */
  if (!C.zf) goto L_1144d07d;
L_1144d078:;
  /* 1144d078 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d07b jmp 0x1144d096 */
  goto L_1144d096;
L_1144d07d:;
  /* 1144d07d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144d080 push eax */
  push32((uint32_t)(EAX));
  /* 1144d081 call 0x1144cc70 */
  push32(0x1144d086u); f_1144cc70();
  /* 1144d086 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144d08b jne 0x1144d091 */
  if (!C.zf) goto L_1144d091;
  /* 1144d08d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144d08f jmp 0x1144d096 */
  goto L_1144d096;
L_1144d091:;
  /* 1144d091 jmp 0x1144cee6 */
  goto L_1144cee6;
L_1144d096:;
  /* 1144d096 mov esp, ebp */
  ESP = (EBP);
  /* 1144d098 pop ebp */
  EBP = (pop32());
  /* 1144d099 ret  */
  ESPCHK(0x1144ceb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x1144d0a0 (104 bytes, 38 insns) */
void f_1144d0a0(void) {
  FTRACE(0x1144d0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1144d0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1144d0a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d0a8 jne 0x1144d0ac */
  if (!C.zf) goto L_1144d0ac;
  /* 1144d0aa jmp 0x1144d104 */
  goto L_1144d104;
L_1144d0ac:;
  /* 1144d0ac push 9 */
  push32((uint32_t)(0x9u));
  /* 1144d0ae call 0x1144b210 */
  push32(0x1144d0b3u); f_1144b210();
  /* 1144d0b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d0b9 push eax */
  push32((uint32_t)(EAX));
  /* 1144d0ba call 0x1144d230 */
  push32(0x1144d0bfu); f_1144d230();
  /* 1144d0bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d0c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144d0c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d0c9 je 0x1144d0e7 */
  if (C.zf) goto L_1144d0e7;
  /* 1144d0cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d0ce push ecx */
  push32((uint32_t)(ECX));
  /* 1144d0cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d0d2 push edx */
  push32((uint32_t)(EDX));
  /* 1144d0d3 call 0x1144d2f0 */
  push32(0x1144d0d8u); f_1144d2f0();
  /* 1144d0d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d0db push 9 */
  push32((uint32_t)(0x9u));
  /* 1144d0dd call 0x1144b2b0 */
  push32(0x1144d0e2u); f_1144b2b0();
  /* 1144d0e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d0e5 jmp 0x1144d104 */
  goto L_1144d104;
L_1144d0e7:;
  /* 1144d0e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1144d0e9 call 0x1144b2b0 */
  push32(0x1144d0eeu); f_1144b2b0();
  /* 1144d0ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d0f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d0f4 push eax */
  push32((uint32_t)(EAX));
  /* 1144d0f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144d0f7 mov ecx, dword ptr [0x1147624c] */
  ECX = (r32((uint32_t)(0x1147624c)));
  /* 1144d0fd push ecx */
  push32((uint32_t)(ECX));
  /* 1144d0fe call dword ptr [0x1147737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147737c))), 0x1144d104u);
L_1144d104:;
  /* 1144d104 mov esp, ebp */
  ESP = (EBP);
  /* 1144d106 pop ebp */
  EBP = (pop32());
  /* 1144d107 ret  */
  ESPCHK(0x1144d0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d110 @ 0x1144d110 (116 bytes, 34 insns) */
void f_1144d110(void) {
  FTRACE(0x1144d110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d110 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d111 mov ebp, esp */
  EBP = (ESP);
  /* 1144d113 push ecx */
  push32((uint32_t)(ECX));
  /* 1144d114 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1144d11b push 9 */
  push32((uint32_t)(0x9u));
  /* 1144d11d call 0x1144b210 */
  push32(0x1144d122u); f_1144b210();
  /* 1144d122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d125 call 0x1144e820 */
  push32(0x1144d12au); f_1144e820();
  /* 1144d12a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144d12c jge 0x1144d135 */
  if ((C.sf==C.of)) goto L_1144d135;
  /* 1144d12e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1144d135:;
  /* 1144d135 push 9 */
  push32((uint32_t)(0x9u));
  /* 1144d137 call 0x1144b2b0 */
  push32(0x1144d13cu); f_1144b2b0();
  /* 1144d13c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d13f push 0 */
  push32((uint32_t)(0x0u));
  /* 1144d141 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144d143 mov eax, dword ptr [0x1147624c] */
  EAX = (r32((uint32_t)(0x1147624c)));
  /* 1144d148 push eax */
  push32((uint32_t)(EAX));
  /* 1144d149 call dword ptr [0x1147739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147739c))), 0x1144d14fu);
  /* 1144d14f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144d151 jne 0x1144d17d */
  if (!C.zf) goto L_1144d17d;
  /* 1144d153 call dword ptr [0x114772f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f4))), 0x1144d159u);
  /* 1144d159 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d15c jne 0x1144d176 */
  if (!C.zf) goto L_1144d176;
  /* 1144d15e call 0x114511f0 */
  push32(0x1144d163u); f_114511f0();
  /* 1144d163 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1144d169 call 0x114511e0 */
  push32(0x1144d16eu); f_114511e0();
  /* 1144d16e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1144d174 jmp 0x1144d17d */
  goto L_1144d17d;
L_1144d176:;
  /* 1144d176 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1144d17d:;
  /* 1144d17d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d180 mov esp, ebp */
  ESP = (EBP);
  /* 1144d182 pop ebp */
  EBP = (pop32());
  /* 1144d183 ret  */
  ESPCHK(0x1144d110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x1144d190 (10 bytes, 5 insns) */
void f_1144d190(void) {
  FTRACE(0x1144d190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d190 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d191 mov ebp, esp */
  EBP = (ESP);
  /* 1144d193 call 0x1144d110 */
  push32(0x1144d198u); f_1144d110();
  /* 1144d198 pop ebp */
  EBP = (pop32());
  /* 1144d199 ret  */
  ESPCHK(0x1144d190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1a0 @ 0x1144d1a0 (10 bytes, 5 insns) */
void f_1144d1a0(void) {
  FTRACE(0x1144d1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1144d1a3 mov eax, dword ptr [0x11472db4] */
  EAX = (r32((uint32_t)(0x11472db4)));
  /* 1144d1a8 pop ebp */
  EBP = (pop32());
  /* 1144d1a9 ret  */
  ESPCHK(0x1144d1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1b0 @ 0x1144d1b0 (31 bytes, 11 insns) */
void f_1144d1b0(void) {
  FTRACE(0x1144d1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1144d1b3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d1ba jbe 0x1144d1c0 */
  if ((C.cf||C.zf)) goto L_1144d1c0;
  /* 1144d1bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144d1be jmp 0x1144d1cd */
  goto L_1144d1cd;
L_1144d1c0:;
  /* 1144d1c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d1c3 mov dword ptr [0x11472db4], eax */
  w32((uint32_t)(0x11472db4), (EAX));
  /* 1144d1c8 mov eax, 1 */
  EAX = (0x1u);
L_1144d1cd:;
  /* 1144d1cd pop ebp */
  EBP = (pop32());
  /* 1144d1ce ret  */
  ESPCHK(0x1144d1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1d0 @ 0x1144d1d0 (89 bytes, 20 insns) */
void f_1144d1d0(void) {
  FTRACE(0x1144d1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1144d1d3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1144d1d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144d1da mov eax, dword ptr [0x1147624c] */
  EAX = (r32((uint32_t)(0x1147624c)));
  /* 1144d1df push eax */
  push32((uint32_t)(EAX));
  /* 1144d1e0 call dword ptr [0x11477368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477368))), 0x1144d1e6u);
  /* 1144d1e6 mov dword ptr [0x11476248], eax */
  w32((uint32_t)(0x11476248), (EAX));
  /* 1144d1eb cmp dword ptr [0x11476248], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11476248))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d1f2 jne 0x1144d1f8 */
  if (!C.zf) goto L_1144d1f8;
  /* 1144d1f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144d1f6 jmp 0x1144d227 */
  goto L_1144d227;
L_1144d1f8:;
  /* 1144d1f8 mov ecx, dword ptr [0x11476248] */
  ECX = (r32((uint32_t)(0x11476248)));
  /* 1144d1fe mov dword ptr [0x1147623c], ecx */
  w32((uint32_t)(0x1147623c), (ECX));
  /* 1144d204 mov dword ptr [0x11476240], 0 */
  w32((uint32_t)(0x11476240), (0x0u));
  /* 1144d20e mov dword ptr [0x11476244], 0 */
  w32((uint32_t)(0x11476244), (0x0u));
  /* 1144d218 mov dword ptr [0x11476228], 0x10 */
  w32((uint32_t)(0x11476228), (0x10u));
  /* 1144d222 mov eax, 1 */
  EAX = (0x1u);
L_1144d227:;
  /* 1144d227 pop ebp */
  EBP = (pop32());
  /* 1144d228 ret  */
  ESPCHK(0x1144d1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d230 @ 0x1144d230 (85 bytes, 29 insns) */
void f_1144d230(void) {
  FTRACE(0x1144d230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d230 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d231 mov ebp, esp */
  EBP = (ESP);
  /* 1144d233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d236 mov eax, dword ptr [0x11476244] */
  EAX = (r32((uint32_t)(0x11476244)));
  /* 1144d23b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144d23e mov ecx, dword ptr [0x11476248] */
  ECX = (r32((uint32_t)(0x11476248)));
  /* 1144d244 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d246 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1144d249 mov edx, dword ptr [0x11476248] */
  EDX = (r32((uint32_t)(0x11476248)));
  /* 1144d24f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1144d252:;
  /* 1144d252 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d255 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d258 jae 0x1144d27f */
  if (!C.cf) goto L_1144d27f;
  /* 1144d25a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d25d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d260 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d263 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1144d266 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d26d jae 0x1144d274 */
  if (!C.cf) goto L_1144d274;
  /* 1144d26f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d272 jmp 0x1144d281 */
  goto L_1144d281;
L_1144d274:;
  /* 1144d274 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d277 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d27a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1144d27d jmp 0x1144d252 */
  goto L_1144d252;
L_1144d27f:;
  /* 1144d27f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1144d281:;
  /* 1144d281 mov esp, ebp */
  ESP = (EBP);
  /* 1144d283 pop ebp */
  EBP = (pop32());
  /* 1144d284 ret  */
  ESPCHK(0x1144d230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d290 @ 0x1144d290 (95 bytes, 33 insns) */
void f_1144d290(void) {
  FTRACE(0x1144d290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d290 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d291 mov ebp, esp */
  EBP = (ESP);
  /* 1144d293 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d299 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144d29c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d29f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1144d2a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d2a5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1144d2a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1144d2ab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144d2b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d2b3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144d2b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d2b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1144d2bb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144d2bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144d2bf jne 0x1144d2e1 */
  if (!C.zf) goto L_1144d2e1;
  /* 1144d2c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d2c4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1144d2c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144d2c9 jne 0x1144d2e1 */
  if (!C.zf) goto L_1144d2e1;
  /* 1144d2cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d2ce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1144d2d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144d2d6 je 0x1144d2e1 */
  if (C.zf) goto L_1144d2e1;
  /* 1144d2d8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1144d2df jmp 0x1144d2e8 */
  goto L_1144d2e8;
L_1144d2e1:;
  /* 1144d2e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1144d2e8:;
  /* 1144d2e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144d2eb mov esp, ebp */
  ESP = (EBP);
  /* 1144d2ed pop ebp */
  EBP = (pop32());
  /* 1144d2ee ret  */
  ESPCHK(0x1144d290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2f0 @ 0x1144d2f0 (1485 bytes, 453 insns) */
void f_1144d2f0(void) {
  FTRACE(0x1144d2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1144d2f3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d2f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d2f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144d2fc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1144d2ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d302 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144d305 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d308 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1144d30b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144d30e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1144d311 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1144d314 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d317 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144d31d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d320 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1144d327 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1144d32a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144d32d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d330 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1144d333 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d336 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144d338 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d33b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1144d33e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d341 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d344 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1144d347 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144d34a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144d34c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1144d34f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d352 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1144d355 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1144d358 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144d35b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1144d35e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144d360 jne 0x1144d488 */
  if (!C.zf) goto L_1144d488;
  /* 1144d366 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144d369 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1144d36c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d36f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1144d372 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d376 jbe 0x1144d37f */
  if ((C.cf||C.zf)) goto L_1144d37f;
  /* 1144d378 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1144d37f:;
  /* 1144d37f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144d382 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144d385 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144d388 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d38b jne 0x1144d461 */
  if (!C.zf) goto L_1144d461;
  /* 1144d391 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d395 jae 0x1144d3f6 */
  if (!C.cf) goto L_1144d3f6;
  /* 1144d397 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144d39c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144d39f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144d3a1 not eax */
  EAX = (~(EAX));
  /* 1144d3a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d3a6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d3a9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1144d3ad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d3af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d3b2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d3b5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1144d3b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d3bc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d3bf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1144d3c2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144d3c5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d3c8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d3cb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1144d3ce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d3d1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d3d4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1144d3d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144d3da jne 0x1144d3f4 */
  if (!C.zf) goto L_1144d3f4;
  /* 1144d3dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144d3e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144d3e4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144d3e6 not eax */
  EAX = (~(EAX));
  /* 1144d3e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d3eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1144d3ed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144d3ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d3f2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1144d3f4:;
  /* 1144d3f4 jmp 0x1144d461 */
  goto L_1144d461;
L_1144d3f6:;
  /* 1144d3f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144d3f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d3fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144d401 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144d403 not edx */
  EDX = (~(EDX));
  /* 1144d405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d408 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d40b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1144d412 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144d414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d417 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d41a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1144d421 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d424 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d427 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1144d42a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144d42d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d430 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d433 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1144d436 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d439 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d43c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1144d440 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144d442 jne 0x1144d461 */
  if (!C.zf) goto L_1144d461;
  /* 1144d444 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144d447 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d44a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144d44f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144d451 not edx */
  EDX = (~(EDX));
  /* 1144d453 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d456 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144d459 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d45b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d45e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1144d461:;
  /* 1144d461 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144d464 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1144d467 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144d46a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1144d46d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1144d470 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144d473 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144d476 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144d479 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1144d47c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1144d47f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144d482 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d485 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1144d488:;
  /* 1144d488 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144d48b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1144d48e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d491 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1144d494 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d498 jbe 0x1144d4a1 */
  if ((C.cf||C.zf)) goto L_1144d4a1;
  /* 1144d49a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1144d4a1:;
  /* 1144d4a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144d4a4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1144d4a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144d4a9 jne 0x1144d605 */
  if (!C.zf) goto L_1144d605;
  /* 1144d4af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d4b2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d4b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1144d4b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144d4bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1144d4be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d4c1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1144d4c4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d4c8 jbe 0x1144d4d1 */
  if ((C.cf||C.zf)) goto L_1144d4d1;
  /* 1144d4ca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1144d4d1:;
  /* 1144d4d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144d4d4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d4d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1144d4da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144d4dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1144d4e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d4e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1144d4e6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d4ea jbe 0x1144d4f3 */
  if ((C.cf||C.zf)) goto L_1144d4f3;
  /* 1144d4ec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1144d4f3:;
  /* 1144d4f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144d4f6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d4f9 je 0x1144d5ff */
  if (C.zf) goto L_1144d5ff;
  /* 1144d4ff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144d502 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144d505 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144d508 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d50b jne 0x1144d5e1 */
  if (!C.zf) goto L_1144d5e1;
  /* 1144d511 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d515 jae 0x1144d576 */
  if (!C.cf) goto L_1144d576;
  /* 1144d517 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144d51c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144d51f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144d521 not edx */
  EDX = (~(EDX));
  /* 1144d523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d526 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d529 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1144d52d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144d52f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d532 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d535 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1144d539 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d53c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d53f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1144d542 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144d545 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d548 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d54b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1144d54e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d551 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d554 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1144d558 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144d55a jne 0x1144d574 */
  if (!C.zf) goto L_1144d574;
  /* 1144d55c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144d561 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144d564 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144d566 not edx */
  EDX = (~(EDX));
  /* 1144d568 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d56b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144d56d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d56f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d572 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1144d574:;
  /* 1144d574 jmp 0x1144d5e1 */
  goto L_1144d5e1;
L_1144d576:;
  /* 1144d576 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144d579 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d57c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144d581 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144d583 not eax */
  EAX = (~(EAX));
  /* 1144d585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d588 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d58b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1144d592 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d594 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d597 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d59a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1144d5a1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d5a4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d5a7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1144d5aa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144d5ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d5b0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d5b3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1144d5b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d5b9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d5bc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1144d5c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144d5c2 jne 0x1144d5e1 */
  if (!C.zf) goto L_1144d5e1;
  /* 1144d5c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144d5c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d5ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144d5cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144d5d1 not eax */
  EAX = (~(EAX));
  /* 1144d5d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d5d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144d5d9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144d5db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d5de mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1144d5e1:;
  /* 1144d5e1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144d5e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1144d5e7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144d5ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144d5ed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1144d5f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144d5f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1144d5f6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144d5f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1144d5fc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1144d5ff:;
  /* 1144d5ff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144d602 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1144d605:;
  /* 1144d605 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144d608 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1144d60b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144d60d jne 0x1144d61b */
  if (!C.zf) goto L_1144d61b;
  /* 1144d60f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144d612 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d615 je 0x1144d72b */
  if (C.zf) goto L_1144d72b;
L_1144d61b:;
  /* 1144d61b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144d61e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d621 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1144d624 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1144d627 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d62a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144d62d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144d630 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1144d633 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d636 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144d639 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1144d63c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144d63f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d642 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1144d645 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d648 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144d64b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d64e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1144d651 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d654 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d657 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144d65a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d65d jne 0x1144d72b */
  if (!C.zf) goto L_1144d72b;
  /* 1144d663 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d667 jae 0x1144d6c4 */
  if (!C.cf) goto L_1144d6c4;
  /* 1144d669 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d66c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d66f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1144d673 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d676 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d679 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1144d67c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1144d67f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d682 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d685 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1144d688 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144d68a jne 0x1144d6a2 */
  if (!C.zf) goto L_1144d6a2;
  /* 1144d68c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144d691 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144d694 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144d696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d699 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144d69b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d69d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d6a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1144d6a2:;
  /* 1144d6a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144d6a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144d6aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144d6ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d6af mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d6b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1144d6b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d6b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d6bb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d6be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1144d6c2 jmp 0x1144d72b */
  goto L_1144d72b;
L_1144d6c4:;
  /* 1144d6c4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d6c7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d6ca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1144d6ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d6d1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d6d4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1144d6d7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1144d6da mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d6dd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d6e0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1144d6e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144d6e5 jne 0x1144d702 */
  if (!C.zf) goto L_1144d702;
  /* 1144d6e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144d6ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d6ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144d6f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144d6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d6f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144d6fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d6fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d6ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1144d702:;
  /* 1144d702 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144d705 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d708 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144d70d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144d70f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d712 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d715 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1144d71c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d71e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d721 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1144d724 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1144d72b:;
  /* 1144d72b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d72e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144d731 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1144d733 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144d736 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d739 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144d73c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1144d73f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d742 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1144d744 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d74a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1144d74c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144d74f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d752 jne 0x1144d8b9 */
  if (!C.zf) goto L_1144d8b9;
  /* 1144d758 cmp dword ptr [0x11476240], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11476240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d75f je 0x1144d8a8 */
  if (C.zf) goto L_1144d8a8;
  /* 1144d765 mov eax, dword ptr [0x11476238] */
  EAX = (r32((uint32_t)(0x11476238)));
  /* 1144d76a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1144d76d mov ecx, dword ptr [0x11476240] */
  ECX = (r32((uint32_t)(0x11476240)));
  /* 1144d773 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1144d776 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d778 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1144d77b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1144d780 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1144d785 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d788 push eax */
  push32((uint32_t)(EAX));
  /* 1144d789 call dword ptr [0x11477378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477378))), 0x1144d78fu);
  /* 1144d78f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144d794 mov ecx, dword ptr [0x11476238] */
  ECX = (r32((uint32_t)(0x11476238)));
  /* 1144d79a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144d79c mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144d7a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1144d7a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d7a6 mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144d7ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1144d7af mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144d7b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144d7b7 mov edx, dword ptr [0x11476238] */
  EDX = (r32((uint32_t)(0x11476238)));
  /* 1144d7bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1144d7c8 mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144d7cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144d7d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1144d7d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144d7d6 mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144d7db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144d7de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1144d7e1 mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144d7e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1144d7ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1144d7ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144d7f0 jne 0x1144d806 */
  if (!C.zf) goto L_1144d806;
  /* 1144d7f2 mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144d7f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1144d7fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1144d7fd mov ecx, dword ptr [0x11476240] */
  ECX = (r32((uint32_t)(0x11476240)));
  /* 1144d803 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1144d806:;
  /* 1144d806 mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144d80c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d810 jne 0x1144d8a8 */
  if (!C.zf) goto L_1144d8a8;
  /* 1144d816 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1144d81b push 0 */
  push32((uint32_t)(0x0u));
  /* 1144d81d mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144d822 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1144d825 push ecx */
  push32((uint32_t)(ECX));
  /* 1144d826 call dword ptr [0x11477378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477378))), 0x1144d82cu);
  /* 1144d82c mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144d832 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1144d835 push eax */
  push32((uint32_t)(EAX));
  /* 1144d836 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144d838 mov ecx, dword ptr [0x1147624c] */
  ECX = (r32((uint32_t)(0x1147624c)));
  /* 1144d83e push ecx */
  push32((uint32_t)(ECX));
  /* 1144d83f call dword ptr [0x1147737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147737c))), 0x1144d845u);
  /* 1144d845 mov edx, dword ptr [0x11476244] */
  EDX = (r32((uint32_t)(0x11476244)));
  /* 1144d84b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144d84e mov eax, dword ptr [0x11476248] */
  EAX = (r32((uint32_t)(0x11476248)));
  /* 1144d853 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d855 mov ecx, dword ptr [0x11476240] */
  ECX = (r32((uint32_t)(0x11476240)));
  /* 1144d85b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d85e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d860 push eax */
  push32((uint32_t)(EAX));
  /* 1144d861 mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144d867 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d86a push edx */
  push32((uint32_t)(EDX));
  /* 1144d86b mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144d870 push eax */
  push32((uint32_t)(EAX));
  /* 1144d871 call 0x11451200 */
  push32(0x1144d876u); f_11451200();
  /* 1144d876 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d879 mov ecx, dword ptr [0x11476244] */
  ECX = (r32((uint32_t)(0x11476244)));
  /* 1144d87f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d882 mov dword ptr [0x11476244], ecx */
  w32((uint32_t)(0x11476244), (ECX));
  /* 1144d888 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d88b cmp edx, dword ptr [0x11476240] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11476240))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d891 jbe 0x1144d89c */
  if ((C.cf||C.zf)) goto L_1144d89c;
  /* 1144d893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d896 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d899 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1144d89c:;
  /* 1144d89c mov ecx, dword ptr [0x11476248] */
  ECX = (r32((uint32_t)(0x11476248)));
  /* 1144d8a2 mov dword ptr [0x1147623c], ecx */
  w32((uint32_t)(0x1147623c), (ECX));
L_1144d8a8:;
  /* 1144d8a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d8ab mov dword ptr [0x11476240], edx */
  w32((uint32_t)(0x11476240), (EDX));
  /* 1144d8b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144d8b4 mov dword ptr [0x11476238], eax */
  w32((uint32_t)(0x11476238), (EAX));
L_1144d8b9:;
  /* 1144d8b9 mov esp, ebp */
  ESP = (EBP);
  /* 1144d8bb pop ebp */
  EBP = (pop32());
  /* 1144d8bc ret  */
  ESPCHK(0x1144d2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8c0 @ 0x1144d8c0 (1334 bytes, 427 insns) */
void f_1144d8c0(void) {
  FTRACE(0x1144d8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144d8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144d8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1144d8c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d8c6 push esi */
  push32((uint32_t)(ESI));
  /* 1144d8c7 mov eax, dword ptr [0x11476244] */
  EAX = (r32((uint32_t)(0x11476244)));
  /* 1144d8cc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144d8cf mov ecx, dword ptr [0x11476248] */
  ECX = (r32((uint32_t)(0x11476248)));
  /* 1144d8d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d8d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1144d8da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144d8dd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d8e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1144d8e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1144d8e6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144d8e9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1144d8ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d8ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1144d8f2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d8f6 jge 0x1144d90c */
  if ((C.sf==C.of)) goto L_1144d90c;
  /* 1144d8f8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1144d8fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144d8fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144d900 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1144d903 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1144d90a jmp 0x1144d921 */
  goto L_1144d921;
L_1144d90c:;
  /* 1144d90c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1144d913 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144d916 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144d919 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1144d91c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144d91e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1144d921:;
  /* 1144d921 mov ecx, dword ptr [0x1147623c] */
  ECX = (r32((uint32_t)(0x1147623c)));
  /* 1144d927 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1144d92a:;
  /* 1144d92a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d92d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d930 jae 0x1144d956 */
  if (!C.cf) goto L_1144d956;
  /* 1144d932 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d935 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144d938 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1144d93a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d93d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144d940 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1144d943 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144d945 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144d947 je 0x1144d94b */
  if (C.zf) goto L_1144d94b;
  /* 1144d949 jmp 0x1144d956 */
  goto L_1144d956;
L_1144d94b:;
  /* 1144d94b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d94e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d951 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1144d954 jmp 0x1144d92a */
  goto L_1144d92a;
L_1144d956:;
  /* 1144d956 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d959 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d95c jne 0x1144da3d */
  if (!C.zf) goto L_1144da3d;
  /* 1144d962 mov eax, dword ptr [0x11476248] */
  EAX = (r32((uint32_t)(0x11476248)));
  /* 1144d967 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1144d96a:;
  /* 1144d96a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d96d cmp ecx, dword ptr [0x1147623c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1147623c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d973 jae 0x1144d999 */
  if (!C.cf) goto L_1144d999;
  /* 1144d975 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d978 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144d97b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1144d97d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d980 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144d983 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1144d986 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144d988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144d98a je 0x1144d98e */
  if (C.zf) goto L_1144d98e;
  /* 1144d98c jmp 0x1144d999 */
  goto L_1144d999;
L_1144d98e:;
  /* 1144d98e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d991 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d994 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1144d997 jmp 0x1144d96a */
  goto L_1144d96a;
L_1144d999:;
  /* 1144d999 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d99c cmp ecx, dword ptr [0x1147623c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1147623c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d9a2 jne 0x1144da3d */
  if (!C.zf) goto L_1144da3d;
L_1144d9a8:;
  /* 1144d9a8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d9ab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d9ae jae 0x1144d9c6 */
  if (!C.cf) goto L_1144d9c6;
  /* 1144d9b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d9b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d9b7 je 0x1144d9bb */
  if (C.zf) goto L_1144d9bb;
  /* 1144d9b9 jmp 0x1144d9c6 */
  goto L_1144d9c6;
L_1144d9bb:;
  /* 1144d9bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d9be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d9c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1144d9c4 jmp 0x1144d9a8 */
  goto L_1144d9a8;
L_1144d9c6:;
  /* 1144d9c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d9c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d9cc jne 0x1144da17 */
  if (!C.zf) goto L_1144da17;
  /* 1144d9ce mov eax, dword ptr [0x11476248] */
  EAX = (r32((uint32_t)(0x11476248)));
  /* 1144d9d3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1144d9d6:;
  /* 1144d9d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d9d9 cmp ecx, dword ptr [0x1147623c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1147623c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d9df jae 0x1144d9f7 */
  if (!C.cf) goto L_1144d9f7;
  /* 1144d9e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d9e4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144d9e8 je 0x1144d9ec */
  if (C.zf) goto L_1144d9ec;
  /* 1144d9ea jmp 0x1144d9f7 */
  goto L_1144d9f7;
L_1144d9ec:;
  /* 1144d9ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d9ef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144d9f2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1144d9f5 jmp 0x1144d9d6 */
  goto L_1144d9d6;
L_1144d9f7:;
  /* 1144d9f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144d9fa cmp ecx, dword ptr [0x1147623c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1147623c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144da00 jne 0x1144da17 */
  if (!C.zf) goto L_1144da17;
  /* 1144da02 call 0x1144de00 */
  push32(0x1144da07u); f_1144de00();
  /* 1144da07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1144da0a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144da0e jne 0x1144da17 */
  if (!C.zf) goto L_1144da17;
  /* 1144da10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144da12 jmp 0x1144ddf1 */
  goto L_1144ddf1;
L_1144da17:;
  /* 1144da17 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144da1a push edx */
  push32((uint32_t)(EDX));
  /* 1144da1b call 0x1144df10 */
  push32(0x1144da20u); f_1144df10();
  /* 1144da20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144da23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144da26 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1144da29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1144da2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144da2e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144da31 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144da34 jne 0x1144da3d */
  if (!C.zf) goto L_1144da3d;
  /* 1144da36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144da38 jmp 0x1144ddf1 */
  goto L_1144ddf1;
L_1144da3d:;
  /* 1144da3d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144da40 mov dword ptr [0x1147623c], edx */
  w32((uint32_t)(0x1147623c), (EDX));
  /* 1144da46 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144da49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144da4c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1144da4f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144da52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1144da54 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1144da57 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144da5b je 0x1144da80 */
  if (C.zf) goto L_1144da80;
  /* 1144da5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144da60 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144da63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144da66 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1144da6a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144da6d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144da70 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1144da73 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1144da7a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1144da7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144da7e jne 0x1144dab5 */
  if (!C.zf) goto L_1144dab5;
L_1144da80:;
  /* 1144da80 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1144da87:;
  /* 1144da87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144da8a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144da8d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144da90 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1144da94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144da97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144da9a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1144da9d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1144daa4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1144daa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144daa8 jne 0x1144dab5 */
  if (!C.zf) goto L_1144dab5;
  /* 1144daaa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144daad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dab0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1144dab3 jmp 0x1144da87 */
  goto L_1144da87;
L_1144dab5:;
  /* 1144dab5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144dab8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144dabe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dac1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1144dac8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1144dacb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1144dad2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144dad5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dad8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144dadb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1144dadf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1144dae2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144dae6 jne 0x1144db02 */
  if (!C.zf) goto L_1144db02;
  /* 1144dae8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1144daef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144daf2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144daf5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1144daf8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1144daff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1144db02:;
  /* 1144db02 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144db06 jl 0x1144db1b */
  if ((C.sf!=C.of)) goto L_1144db1b;
  /* 1144db08 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144db0b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1144db0d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1144db10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144db13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144db16 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1144db19 jmp 0x1144db02 */
  goto L_1144db02;
L_1144db1b:;
  /* 1144db1b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144db1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144db21 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1144db25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1144db28 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144db2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1144db2d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144db30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1144db33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144db36 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1144db39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144db3c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1144db3f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144db43 jle 0x1144db4c */
  if ((C.zf||C.sf!=C.of)) goto L_1144db4c;
  /* 1144db45 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1144db4c:;
  /* 1144db4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144db4f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144db52 je 0x1144dd70 */
  if (C.zf) goto L_1144dd70;
  /* 1144db58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144db5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144db5e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144db61 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144db64 jne 0x1144dc3a */
  if (!C.zf) goto L_1144dc3a;
  /* 1144db6a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144db6e jge 0x1144dbcf */
  if ((C.sf==C.of)) goto L_1144dbcf;
  /* 1144db70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144db75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144db78 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144db7a not eax */
  EAX = (~(EAX));
  /* 1144db7c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144db7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144db82 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1144db86 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144db88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144db8b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144db8e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1144db92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144db95 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144db98 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1144db9b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144db9e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dba1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dba4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1144dba7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dbaa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dbad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1144dbb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144dbb3 jne 0x1144dbcd */
  if (!C.zf) goto L_1144dbcd;
  /* 1144dbb5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144dbba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144dbbd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144dbbf not eax */
  EAX = (~(EAX));
  /* 1144dbc1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144dbc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1144dbc6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144dbc8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144dbcb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1144dbcd:;
  /* 1144dbcd jmp 0x1144dc3a */
  goto L_1144dc3a;
L_1144dbcf:;
  /* 1144dbcf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144dbd2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144dbd5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144dbda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144dbdc not edx */
  EDX = (~(EDX));
  /* 1144dbde mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144dbe1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dbe4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1144dbeb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144dbed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144dbf0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dbf3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1144dbfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dbfd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dc00 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1144dc03 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144dc06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dc09 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dc0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1144dc0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dc12 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dc15 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1144dc19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144dc1b jne 0x1144dc3a */
  if (!C.zf) goto L_1144dc3a;
  /* 1144dc1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144dc20 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144dc23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144dc28 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144dc2a not edx */
  EDX = (~(EDX));
  /* 1144dc2c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144dc2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144dc32 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144dc34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144dc37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1144dc3a:;
  /* 1144dc3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc3d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1144dc40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1144dc46 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1144dc49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc4c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144dc4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc52 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1144dc55 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1144dc58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144dc5c je 0x1144dd70 */
  if (C.zf) goto L_1144dd70;
  /* 1144dc62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144dc65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144dc68 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1144dc6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1144dc6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144dc74 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144dc77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1144dc7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144dc80 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1144dc83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144dc86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc89 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1144dc8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144dc92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc95 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1144dc98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dc9e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144dca1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144dca4 jne 0x1144dd70 */
  if (!C.zf) goto L_1144dd70;
  /* 1144dcaa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144dcae jge 0x1144dd0a */
  if ((C.sf==C.of)) goto L_1144dd0a;
  /* 1144dcb0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dcb3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dcb6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1144dcba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dcbd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dcc0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1144dcc3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1144dcc5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dcc8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dccb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1144dcce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144dcd0 jne 0x1144dce8 */
  if (!C.zf) goto L_1144dce8;
  /* 1144dcd2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144dcd7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144dcda shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144dcdc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144dcdf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1144dce1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144dce3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144dce6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1144dce8:;
  /* 1144dce8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144dced mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144dcf0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144dcf2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144dcf5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dcf8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1144dcfc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144dcfe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144dd01 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dd04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1144dd08 jmp 0x1144dd70 */
  goto L_1144dd70;
L_1144dd0a:;
  /* 1144dd0a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dd0d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dd10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1144dd14 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dd17 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dd1a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1144dd1d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1144dd1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dd22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dd25 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1144dd28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144dd2a jne 0x1144dd47 */
  if (!C.zf) goto L_1144dd47;
  /* 1144dd2c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144dd2f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144dd32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144dd37 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144dd39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144dd3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144dd3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144dd41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144dd44 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1144dd47:;
  /* 1144dd47 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144dd4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144dd4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144dd52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144dd54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144dd57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dd5a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1144dd61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144dd63 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144dd66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dd69 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1144dd70:;
  /* 1144dd70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144dd74 je 0x1144dd8a */
  if (C.zf) goto L_1144dd8a;
  /* 1144dd76 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dd79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144dd7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1144dd7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dd81 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dd84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144dd87 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1144dd8a:;
  /* 1144dd8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dd8d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dd90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1144dd93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144dd96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dd99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dd9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1144dd9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144dda1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dda4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dda7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ddaa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1144ddad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144ddb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144ddb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144ddb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1144ddb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ddba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144ddbd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1144ddbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144ddc1 jne 0x1144dde3 */
  if (!C.zf) goto L_1144dde3;
  /* 1144ddc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144ddc6 cmp eax, dword ptr [0x11476240] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11476240))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ddcc jne 0x1144dde3 */
  if (!C.zf) goto L_1144dde3;
  /* 1144ddce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144ddd1 cmp ecx, dword ptr [0x11476238] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11476238))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ddd7 jne 0x1144dde3 */
  if (!C.zf) goto L_1144dde3;
  /* 1144ddd9 mov dword ptr [0x11476240], 0 */
  w32((uint32_t)(0x11476240), (0x0u));
L_1144dde3:;
  /* 1144dde3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1144dde6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144dde9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1144ddeb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144ddee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1144ddf1:;
  /* 1144ddf1 pop esi */
  ESI = (pop32());
  /* 1144ddf2 mov esp, ebp */
  ESP = (EBP);
  /* 1144ddf4 pop ebp */
  EBP = (pop32());
  /* 1144ddf5 ret  */
  ESPCHK(0x1144d8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x1144de00 (271 bytes, 78 insns) */
void f_1144de00(void) {
  FTRACE(0x1144de00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144de00 push ebp */
  push32((uint32_t)(EBP));
  /* 1144de01 mov ebp, esp */
  EBP = (ESP);
  /* 1144de03 push ecx */
  push32((uint32_t)(ECX));
  /* 1144de04 mov eax, dword ptr [0x11476244] */
  EAX = (r32((uint32_t)(0x11476244)));
  /* 1144de09 cmp eax, dword ptr [0x11476228] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11476228))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144de0f jne 0x1144de5b */
  if (!C.zf) goto L_1144de5b;
  /* 1144de11 mov ecx, dword ptr [0x11476228] */
  ECX = (r32((uint32_t)(0x11476228)));
  /* 1144de17 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144de1a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144de1d push ecx */
  push32((uint32_t)(ECX));
  /* 1144de1e mov edx, dword ptr [0x11476248] */
  EDX = (r32((uint32_t)(0x11476248)));
  /* 1144de24 push edx */
  push32((uint32_t)(EDX));
  /* 1144de25 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144de27 mov eax, dword ptr [0x1147624c] */
  EAX = (r32((uint32_t)(0x1147624c)));
  /* 1144de2c push eax */
  push32((uint32_t)(EAX));
  /* 1144de2d call dword ptr [0x11477358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477358))), 0x1144de33u);
  /* 1144de33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144de36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144de3a jne 0x1144de43 */
  if (!C.zf) goto L_1144de43;
  /* 1144de3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144de3e jmp 0x1144df0b */
  goto L_1144df0b;
L_1144de43:;
  /* 1144de43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144de46 mov dword ptr [0x11476248], ecx */
  w32((uint32_t)(0x11476248), (ECX));
  /* 1144de4c mov edx, dword ptr [0x11476228] */
  EDX = (r32((uint32_t)(0x11476228)));
  /* 1144de52 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144de55 mov dword ptr [0x11476228], edx */
  w32((uint32_t)(0x11476228), (EDX));
L_1144de5b:;
  /* 1144de5b mov eax, dword ptr [0x11476244] */
  EAX = (r32((uint32_t)(0x11476244)));
  /* 1144de60 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144de63 mov ecx, dword ptr [0x11476248] */
  ECX = (r32((uint32_t)(0x11476248)));
  /* 1144de69 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144de6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1144de6e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1144de73 push 8 */
  push32((uint32_t)(0x8u));
  /* 1144de75 mov edx, dword ptr [0x1147624c] */
  EDX = (r32((uint32_t)(0x1147624c)));
  /* 1144de7b push edx */
  push32((uint32_t)(EDX));
  /* 1144de7c call dword ptr [0x11477368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477368))), 0x1144de82u);
  /* 1144de82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144de85 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1144de88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144de8b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144de8f jne 0x1144de95 */
  if (!C.zf) goto L_1144de95;
  /* 1144de91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144de93 jmp 0x1144df0b */
  goto L_1144df0b;
L_1144de95:;
  /* 1144de95 push 4 */
  push32((uint32_t)(0x4u));
  /* 1144de97 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1144de9c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1144dea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144dea3 call dword ptr [0x11477354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477354))), 0x1144dea9u);
  /* 1144dea9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144deac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1144deaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144deb2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144deb6 jne 0x1144ded2 */
  if (!C.zf) goto L_1144ded2;
  /* 1144deb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144debb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144debe push ecx */
  push32((uint32_t)(ECX));
  /* 1144debf push 0 */
  push32((uint32_t)(0x0u));
  /* 1144dec1 mov edx, dword ptr [0x1147624c] */
  EDX = (r32((uint32_t)(0x1147624c)));
  /* 1144dec7 push edx */
  push32((uint32_t)(EDX));
  /* 1144dec8 call dword ptr [0x1147737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147737c))), 0x1144deceu);
  /* 1144dece xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ded0 jmp 0x1144df0b */
  goto L_1144df0b;
L_1144ded2:;
  /* 1144ded2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144ded5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1144dedb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144dede mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1144dee5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144dee8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1144deef mov eax, dword ptr [0x11476244] */
  EAX = (r32((uint32_t)(0x11476244)));
  /* 1144def4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144def7 mov dword ptr [0x11476244], eax */
  w32((uint32_t)(0x11476244), (EAX));
  /* 1144defc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144deff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1144df02 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1144df08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1144df0b:;
  /* 1144df0b mov esp, ebp */
  ESP = (EBP);
  /* 1144df0d pop ebp */
  EBP = (pop32());
  /* 1144df0e ret  */
  ESPCHK(0x1144de00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df10 @ 0x1144df10 (494 bytes, 149 insns) */
void f_1144df10(void) {
  FTRACE(0x1144df10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144df10 push ebp */
  push32((uint32_t)(EBP));
  /* 1144df11 mov ebp, esp */
  EBP = (ESP);
  /* 1144df13 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144df16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144df19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144df1c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1144df1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144df22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1144df25 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1144df28 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1144df2f:;
  /* 1144df2f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144df33 jl 0x1144df48 */
  if ((C.sf!=C.of)) goto L_1144df48;
  /* 1144df35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144df38 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1144df3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1144df3d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144df40 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144df43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1144df46 jmp 0x1144df2f */
  goto L_1144df2f;
L_1144df48:;
  /* 1144df48 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144df4b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144df51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144df54 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1144df5b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1144df5e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1144df65 jmp 0x1144df70 */
  goto L_1144df70;
L_1144df67:;
  /* 1144df67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144df6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144df6d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1144df70:;
  /* 1144df70 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144df74 jge 0x1144df96 */
  if ((C.sf==C.of)) goto L_1144df96;
  /* 1144df76 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144df79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144df7c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1144df7f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1144df82 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144df85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144df88 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1144df8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144df8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144df91 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1144df94 jmp 0x1144df67 */
  goto L_1144df67;
L_1144df96:;
  /* 1144df96 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144df99 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1144df9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144df9f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1144dfa2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dfa4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1144dfa7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1144dfa9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1144dfae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1144dfb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dfb6 push edx */
  push32((uint32_t)(EDX));
  /* 1144dfb7 call dword ptr [0x11477354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477354))), 0x1144dfbdu);
  /* 1144dfbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144dfbf jne 0x1144dfc9 */
  if (!C.zf) goto L_1144dfc9;
  /* 1144dfc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1144dfc4 jmp 0x1144e0fa */
  goto L_1144e0fa;
L_1144dfc9:;
  /* 1144dfc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dfcc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dfd1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1144dfd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144dfd7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1144dfda jmp 0x1144dfe8 */
  goto L_1144dfe8;
L_1144dfdc:;
  /* 1144dfdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144dfdf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144dfe5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1144dfe8:;
  /* 1144dfe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144dfeb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144dfee ja 0x1144e04d */
  if ((!C.cf&&!C.zf)) goto L_1144e04d;
  /* 1144dff0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144dff3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1144dffa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144dffd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1144e007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e00a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e00d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1144e010 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e013 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1144e019 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e01c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e022 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e025 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1144e028 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e02b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e031 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e034 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1144e037 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e03a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e03f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1144e042 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144e045 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1144e04b jmp 0x1144dfdc */
  goto L_1144dfdc;
L_1144e04d:;
  /* 1144e04d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144e050 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e056 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1144e059 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144e05c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e05f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e062 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1144e065 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e068 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1144e06b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1144e06e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e071 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e074 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1144e077 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144e07a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e07d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e080 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1144e083 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e086 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1144e089 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1144e08c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e08f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e092 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1144e095 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e098 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e09b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1144e0a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e0a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e0a9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1144e0b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e0b7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1144e0bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e0be mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1144e0c1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1144e0c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e0c7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1144e0ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144e0cc jne 0x1144e0dd */
  if (!C.zf) goto L_1144e0dd;
  /* 1144e0ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e0d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144e0d4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1144e0d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e0da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1144e0dd:;
  /* 1144e0dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e0e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e0e5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e0e7 not edx */
  EDX = (~(EDX));
  /* 1144e0e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e0ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1144e0ef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e0f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e0f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1144e0f7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1144e0fa:;
  /* 1144e0fa mov esp, ebp */
  ESP = (EBP);
  /* 1144e0fc pop ebp */
  EBP = (pop32());
  /* 1144e0fd ret  */
  ESPCHK(0x1144df10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e100 @ 0x1144e100 (1515 bytes, 489 insns) */
void f_1144e100(void) {
  FTRACE(0x1144e100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144e100 push ebp */
  push32((uint32_t)(EBP));
  /* 1144e101 mov ebp, esp */
  EBP = (ESP);
  /* 1144e103 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e106 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1144e109 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e10c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1144e10e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1144e111 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e114 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1144e117 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1144e11a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e11d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144e120 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e123 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1144e126 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144e129 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1144e12c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1144e12f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e132 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144e138 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e13b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1144e142 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1144e145 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144e148 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e14b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1144e14e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e151 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1144e153 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e156 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1144e159 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e15c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e15f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1144e162 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e165 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1144e167 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1144e16a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144e16d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e170 jle 0x1144e426 */
  if ((C.zf||C.sf!=C.of)) goto L_1144e426;
  /* 1144e176 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144e179 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1144e17c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144e17e jne 0x1144e18b */
  if (!C.zf) goto L_1144e18b;
  /* 1144e180 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e183 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e186 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e189 jle 0x1144e192 */
  if ((C.zf||C.sf!=C.of)) goto L_1144e192;
L_1144e18b:;
  /* 1144e18b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144e18d jmp 0x1144e6e7 */
  goto L_1144e6e7;
L_1144e192:;
  /* 1144e192 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144e195 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1144e198 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e19b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1144e19e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e1a2 jbe 0x1144e1ab */
  if ((C.cf||C.zf)) goto L_1144e1ab;
  /* 1144e1a4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1144e1ab:;
  /* 1144e1ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e1ae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e1b1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144e1b4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e1b7 jne 0x1144e28d */
  if (!C.zf) goto L_1144e28d;
  /* 1144e1bd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e1c1 jae 0x1144e222 */
  if (!C.cf) goto L_1144e222;
  /* 1144e1c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e1c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e1cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e1cd not edx */
  EDX = (~(EDX));
  /* 1144e1cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e1d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e1d5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1144e1d9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144e1db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e1de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e1e1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1144e1e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e1e8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e1eb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1144e1ee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144e1f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e1f4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e1f7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1144e1fa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e1fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e200 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1144e204 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144e206 jne 0x1144e220 */
  if (!C.zf) goto L_1144e220;
  /* 1144e208 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e20d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e210 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e212 not edx */
  EDX = (~(EDX));
  /* 1144e214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e217 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144e219 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e21b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e21e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1144e220:;
  /* 1144e220 jmp 0x1144e28d */
  goto L_1144e28d;
L_1144e222:;
  /* 1144e222 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e225 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e228 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144e22d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144e22f not eax */
  EAX = (~(EAX));
  /* 1144e231 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e234 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e237 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1144e23e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e240 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e243 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e246 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1144e24d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e250 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e253 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1144e256 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144e259 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e25c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e25f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1144e262 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e265 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e268 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1144e26c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144e26e jne 0x1144e28d */
  if (!C.zf) goto L_1144e28d;
  /* 1144e270 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e273 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e276 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144e27b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144e27d not eax */
  EAX = (~(EAX));
  /* 1144e27f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e282 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144e285 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144e287 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e28a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1144e28d:;
  /* 1144e28d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e290 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1144e293 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e296 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144e299 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1144e29c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e29f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1144e2a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e2a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1144e2a8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1144e2ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e2ae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e2b1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e2b4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1144e2b7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e2bb jle 0x1144e407 */
  if ((C.zf||C.sf!=C.of)) goto L_1144e407;
  /* 1144e2c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e2c4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e2c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1144e2ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144e2cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1144e2d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e2d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1144e2d6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e2da jbe 0x1144e2e3 */
  if ((C.cf||C.zf)) goto L_1144e2e3;
  /* 1144e2dc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1144e2e3:;
  /* 1144e2e3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e2e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144e2e9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1144e2ec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1144e2ef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e2f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e2f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144e2f8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1144e2fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e2fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e301 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1144e304 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e307 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e30a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1144e30d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e310 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144e313 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e316 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1144e319 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e31c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e31f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144e322 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e325 jne 0x1144e3f3 */
  if (!C.zf) goto L_1144e3f3;
  /* 1144e32b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e32f jae 0x1144e38c */
  if (!C.cf) goto L_1144e38c;
  /* 1144e331 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e334 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e337 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1144e33b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e33e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e341 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1144e344 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1144e347 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e34a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e34d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1144e350 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144e352 jne 0x1144e36a */
  if (!C.zf) goto L_1144e36a;
  /* 1144e354 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e359 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e35c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e35e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e361 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144e363 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e365 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e368 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1144e36a:;
  /* 1144e36a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144e36f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e372 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144e374 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e377 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e37a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1144e37e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e380 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e383 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e386 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1144e38a jmp 0x1144e3f3 */
  goto L_1144e3f3;
L_1144e38c:;
  /* 1144e38c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e38f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e392 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1144e396 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e399 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e39c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1144e39f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1144e3a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e3a5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e3a8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1144e3ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144e3ad jne 0x1144e3ca */
  if (!C.zf) goto L_1144e3ca;
  /* 1144e3af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e3b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e3b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e3ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e3bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e3bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144e3c2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e3c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e3c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1144e3ca:;
  /* 1144e3ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e3cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e3d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144e3d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144e3d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e3da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e3dd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1144e3e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e3e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e3e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e3ec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1144e3f3:;
  /* 1144e3f3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e3f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144e3f9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1144e3fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e3fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e401 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144e404 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1144e407:;
  /* 1144e407 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144e40a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e40d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e410 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1144e412 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144e415 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e418 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e41b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e41e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1144e421 jmp 0x1144e6e2 */
  goto L_1144e6e2;
L_1144e426:;
  /* 1144e426 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144e429 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e42c jge 0x1144e6e2 */
  if ((C.sf==C.of)) goto L_1144e6e2;
  /* 1144e432 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144e435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e438 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e43b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1144e43d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1144e440 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e443 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e446 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e449 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1144e44c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e44f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e452 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1144e455 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e458 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e45b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1144e45e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e461 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1144e464 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e467 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1144e46a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e46e jbe 0x1144e477 */
  if ((C.cf||C.zf)) goto L_1144e477;
  /* 1144e470 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1144e477:;
  /* 1144e477 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144e47a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1144e47d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144e47f jne 0x1144e5c0 */
  if (!C.zf) goto L_1144e5c0;
  /* 1144e485 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144e488 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1144e48b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e48e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1144e491 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e495 jbe 0x1144e49e */
  if ((C.cf||C.zf)) goto L_1144e49e;
  /* 1144e497 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1144e49e:;
  /* 1144e49e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e4a1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e4a4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144e4a7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e4aa jne 0x1144e580 */
  if (!C.zf) goto L_1144e580;
  /* 1144e4b0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e4b4 jae 0x1144e515 */
  if (!C.cf) goto L_1144e515;
  /* 1144e4b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e4bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e4be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e4c0 not edx */
  EDX = (~(EDX));
  /* 1144e4c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e4c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e4c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1144e4cc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144e4ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e4d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e4d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1144e4d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e4db add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e4de mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1144e4e1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144e4e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e4e7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e4ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1144e4ed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e4f0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e4f3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1144e4f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144e4f9 jne 0x1144e513 */
  if (!C.zf) goto L_1144e513;
  /* 1144e4fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e500 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e503 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e505 not edx */
  EDX = (~(EDX));
  /* 1144e507 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e50a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144e50c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e50e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e511 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1144e513:;
  /* 1144e513 jmp 0x1144e580 */
  goto L_1144e580;
L_1144e515:;
  /* 1144e515 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e518 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e51b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144e520 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144e522 not eax */
  EAX = (~(EAX));
  /* 1144e524 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e527 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e52a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1144e531 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e533 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e536 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e539 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1144e540 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e543 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e546 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1144e549 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144e54c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e54f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e552 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1144e555 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e558 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e55b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1144e55f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144e561 jne 0x1144e580 */
  if (!C.zf) goto L_1144e580;
  /* 1144e563 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1144e566 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e569 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144e56e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144e570 not eax */
  EAX = (~(EAX));
  /* 1144e572 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e575 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144e578 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144e57a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e57d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1144e580:;
  /* 1144e580 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e583 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1144e586 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e589 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144e58c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1144e58f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e592 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1144e595 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144e598 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1144e59b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1144e59e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e5a1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e5a4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1144e5a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e5aa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1144e5ad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e5b0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1144e5b3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e5b7 jbe 0x1144e5c0 */
  if ((C.cf||C.zf)) goto L_1144e5c0;
  /* 1144e5b9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1144e5c0:;
  /* 1144e5c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144e5c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144e5c6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1144e5c9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1144e5cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e5cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e5d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144e5d5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1144e5d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e5db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e5de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1144e5e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144e5e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e5e7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1144e5ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e5ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144e5f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e5f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1144e5f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e5f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e5fc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144e5ff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e602 jne 0x1144e6ce */
  if (!C.zf) goto L_1144e6ce;
  /* 1144e608 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e60c jae 0x1144e668 */
  if (!C.cf) goto L_1144e668;
  /* 1144e60e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e611 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e614 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1144e618 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e61b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e61e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1144e621 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1144e623 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e626 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e629 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1144e62c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144e62e jne 0x1144e646 */
  if (!C.zf) goto L_1144e646;
  /* 1144e630 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144e635 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144e638 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144e63a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e63d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1144e63f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144e641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e644 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1144e646:;
  /* 1144e646 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e64b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144e64e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e650 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e653 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e656 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1144e65a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144e65c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e65f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e662 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1144e666 jmp 0x1144e6ce */
  goto L_1144e6ce;
L_1144e668:;
  /* 1144e668 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e66b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e66e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1144e672 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e675 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e678 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1144e67b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1144e67d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e680 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e683 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1144e686 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144e688 jne 0x1144e6a5 */
  if (!C.zf) goto L_1144e6a5;
  /* 1144e68a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144e68d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e690 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1144e695 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1144e697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e69a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144e69d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1144e69f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144e6a2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1144e6a5:;
  /* 1144e6a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144e6a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e6ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e6b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e6b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e6b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e6b8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1144e6bf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144e6c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e6c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1144e6c7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1144e6ce:;
  /* 1144e6ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e6d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e6d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1144e6d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144e6d9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e6dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144e6df mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1144e6e2:;
  /* 1144e6e2 mov eax, 1 */
  EAX = (0x1u);
L_1144e6e7:;
  /* 1144e6e7 mov esp, ebp */
  ESP = (EBP);
  /* 1144e6e9 pop ebp */
  EBP = (pop32());
  /* 1144e6ea ret  */
  ESPCHK(0x1144e100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6f0 @ 0x1144e6f0 (304 bytes, 79 insns) */
void f_1144e6f0(void) {
  FTRACE(0x1144e6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144e6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144e6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1144e6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1144e6f4 cmp dword ptr [0x11476240], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11476240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e6fb je 0x1144e81c */
  if (C.zf) goto L_1144e81c;
  /* 1144e701 mov eax, dword ptr [0x11476238] */
  EAX = (r32((uint32_t)(0x11476238)));
  /* 1144e706 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1144e709 mov ecx, dword ptr [0x11476240] */
  ECX = (r32((uint32_t)(0x11476240)));
  /* 1144e70f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1144e712 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e714 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1144e717 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1144e71c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1144e721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144e724 push eax */
  push32((uint32_t)(EAX));
  /* 1144e725 call dword ptr [0x11477378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477378))), 0x1144e72bu);
  /* 1144e72b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144e730 mov ecx, dword ptr [0x11476238] */
  ECX = (r32((uint32_t)(0x11476238)));
  /* 1144e736 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144e738 mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144e73d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1144e740 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1144e742 mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144e748 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1144e74b mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144e750 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144e753 mov edx, dword ptr [0x11476238] */
  EDX = (r32((uint32_t)(0x11476238)));
  /* 1144e759 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1144e764 mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144e769 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144e76c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1144e76f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1144e772 mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144e777 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144e77a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1144e77d mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144e783 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1144e786 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1144e78a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144e78c jne 0x1144e7a2 */
  if (!C.zf) goto L_1144e7a2;
  /* 1144e78e mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144e794 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1144e797 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1144e799 mov ecx, dword ptr [0x11476240] */
  ECX = (r32((uint32_t)(0x11476240)));
  /* 1144e79f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1144e7a2:;
  /* 1144e7a2 mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144e7a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e7ac jne 0x1144e812 */
  if (!C.zf) goto L_1144e812;
  /* 1144e7ae cmp dword ptr [0x11476244], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11476244))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e7b5 jle 0x1144e812 */
  if ((C.zf||C.sf!=C.of)) goto L_1144e812;
  /* 1144e7b7 mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144e7bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1144e7bf push ecx */
  push32((uint32_t)(ECX));
  /* 1144e7c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144e7c2 mov edx, dword ptr [0x1147624c] */
  EDX = (r32((uint32_t)(0x1147624c)));
  /* 1144e7c8 push edx */
  push32((uint32_t)(EDX));
  /* 1144e7c9 call dword ptr [0x1147737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147737c))), 0x1144e7cfu);
  /* 1144e7cf mov eax, dword ptr [0x11476244] */
  EAX = (r32((uint32_t)(0x11476244)));
  /* 1144e7d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144e7d7 mov ecx, dword ptr [0x11476248] */
  ECX = (r32((uint32_t)(0x11476248)));
  /* 1144e7dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e7df mov edx, dword ptr [0x11476240] */
  EDX = (r32((uint32_t)(0x11476240)));
  /* 1144e7e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e7e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e7ea push ecx */
  push32((uint32_t)(ECX));
  /* 1144e7eb mov eax, dword ptr [0x11476240] */
  EAX = (r32((uint32_t)(0x11476240)));
  /* 1144e7f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e7f3 push eax */
  push32((uint32_t)(EAX));
  /* 1144e7f4 mov ecx, dword ptr [0x11476240] */
  ECX = (r32((uint32_t)(0x11476240)));
  /* 1144e7fa push ecx */
  push32((uint32_t)(ECX));
  /* 1144e7fb call 0x11451200 */
  push32(0x1144e800u); f_11451200();
  /* 1144e800 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e803 mov edx, dword ptr [0x11476244] */
  EDX = (r32((uint32_t)(0x11476244)));
  /* 1144e809 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e80c mov dword ptr [0x11476244], edx */
  w32((uint32_t)(0x11476244), (EDX));
L_1144e812:;
  /* 1144e812 mov dword ptr [0x11476240], 0 */
  w32((uint32_t)(0x11476240), (0x0u));
L_1144e81c:;
  /* 1144e81c mov esp, ebp */
  ESP = (EBP);
  /* 1144e81e pop ebp */
  EBP = (pop32());
  /* 1144e81f ret  */
  ESPCHK(0x1144e6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e820 @ 0x1144e820 (1565 bytes, 343 insns) */
void f_1144e820(void) {
  FTRACE(0x1144e820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144e820 push ebp */
  push32((uint32_t)(EBP));
  /* 1144e821 mov ebp, esp */
  EBP = (ESP);
  /* 1144e823 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144e829 mov eax, dword ptr [0x11476244] */
  EAX = (r32((uint32_t)(0x11476244)));
  /* 1144e82e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144e831 push eax */
  push32((uint32_t)(EAX));
  /* 1144e832 mov ecx, dword ptr [0x11476248] */
  ECX = (r32((uint32_t)(0x11476248)));
  /* 1144e838 push ecx */
  push32((uint32_t)(ECX));
  /* 1144e839 call dword ptr [0x114773b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114773b0))), 0x1144e83fu);
  /* 1144e83f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144e841 je 0x1144e84b */
  if (C.zf) goto L_1144e84b;
  /* 1144e843 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1144e846 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144e84b:;
  /* 1144e84b mov edx, dword ptr [0x11476248] */
  EDX = (r32((uint32_t)(0x11476248)));
  /* 1144e851 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1144e857 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1144e861 jmp 0x1144e872 */
  goto L_1144e872;
L_1144e863:;
  /* 1144e863 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1144e869 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e86c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1144e872:;
  /* 1144e872 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1144e878 cmp ecx, dword ptr [0x11476244] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11476244))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e87e jge 0x1144ee37 */
  if ((C.sf==C.of)) goto L_1144ee37;
  /* 1144e884 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1144e88a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1144e88d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1144e893 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1144e898 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1144e89e push ecx */
  push32((uint32_t)(ECX));
  /* 1144e89f call dword ptr [0x114773b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114773b0))), 0x1144e8a5u);
  /* 1144e8a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144e8a7 je 0x1144e8b3 */
  if (C.zf) goto L_1144e8b3;
  /* 1144e8a9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1144e8ae jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144e8b3:;
  /* 1144e8b3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1144e8b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1144e8bc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1144e8c2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1144e8c8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e8ce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1144e8d1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1144e8d7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1144e8da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144e8dd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1144e8e7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1144e8f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1144e8f8 jmp 0x1144e903 */
  goto L_1144e903;
L_1144e8fa:;
  /* 1144e8fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144e8fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e900 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1144e903:;
  /* 1144e903 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e907 jge 0x1144edfb */
  if ((C.sf==C.of)) goto L_1144edfb;
  /* 1144e90d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1144e917 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1144e921 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1144e92b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1144e935 jmp 0x1144e946 */
  goto L_1144e946;
L_1144e937:;
  /* 1144e937 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1144e93d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e940 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1144e946:;
  /* 1144e946 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e94d jge 0x1144e962 */
  if ((C.sf==C.of)) goto L_1144e962;
  /* 1144e94f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1144e955 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1144e960 jmp 0x1144e937 */
  goto L_1144e937;
L_1144e962:;
  /* 1144e962 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e966 jl 0x1144ed9d */
  if ((C.sf!=C.of)) goto L_1144ed9d;
  /* 1144e96c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1144e971 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1144e977 push ecx */
  push32((uint32_t)(ECX));
  /* 1144e978 call dword ptr [0x114773b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114773b0))), 0x1144e97eu);
  /* 1144e97e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144e980 je 0x1144e98c */
  if (C.zf) goto L_1144e98c;
  /* 1144e982 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1144e987 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144e98c:;
  /* 1144e98c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1144e992 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1144e995 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1144e99f jmp 0x1144e9b0 */
  goto L_1144e9b0;
L_1144e9a1:;
  /* 1144e9a1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1144e9a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e9aa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1144e9b0:;
  /* 1144e9b0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e9b7 jge 0x1144eb34 */
  if ((C.sf==C.of)) goto L_1144eb34;
  /* 1144e9bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144e9c0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e9c3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1144e9c9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1144e9cf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144e9d5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1144e9db mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1144e9e1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e9e5 jne 0x1144e9f2 */
  if (!C.zf) goto L_1144e9f2;
  /* 1144e9e7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1144e9ed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144e9f0 je 0x1144e9fc */
  if (C.zf) goto L_1144e9fc;
L_1144e9f2:;
  /* 1144e9f2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1144e9f7 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144e9fc:;
  /* 1144e9fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1144ea02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1144ea04 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1144ea0a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1144ea10 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1144ea16 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1144ea1c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1144ea1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144ea21 je 0x1144ea59 */
  if (C.zf) goto L_1144ea59;
  /* 1144ea23 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1144ea29 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144ea2c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1144ea32 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ea3c jle 0x1144ea48 */
  if ((C.zf||C.sf!=C.of)) goto L_1144ea48;
  /* 1144ea3e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1144ea43 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144ea48:;
  /* 1144ea48 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1144ea4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ea51 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1144ea57 jmp 0x1144ea9b */
  goto L_1144ea9b;
L_1144ea59:;
  /* 1144ea59 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1144ea5f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1144ea62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144ea65 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1144ea6b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ea72 jle 0x1144ea7e */
  if ((C.zf||C.sf!=C.of)) goto L_1144ea7e;
  /* 1144ea74 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1144ea7e:;
  /* 1144ea7e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1144ea84 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1144ea8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ea8e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1144ea94 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1144ea9b:;
  /* 1144ea9b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eaa2 jl 0x1144eabd */
  if ((C.sf!=C.of)) goto L_1144eabd;
  /* 1144eaa4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1144eaaa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1144eaad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144eaaf jne 0x1144eabd */
  if (!C.zf) goto L_1144eabd;
  /* 1144eab1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eabb jle 0x1144eac7 */
  if ((C.zf||C.sf!=C.of)) goto L_1144eac7;
L_1144eabd:;
  /* 1144eabd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1144eac2 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144eac7:;
  /* 1144eac7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1144eacd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ead3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1144ead6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eadc je 0x1144eae8 */
  if (C.zf) goto L_1144eae8;
  /* 1144eade mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1144eae3 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144eae8:;
  /* 1144eae8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1144eaee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144eaf4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1144eafa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1144eb00 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eb06 jb 0x1144e9fc */
  if (C.cf) goto L_1144e9fc;
  /* 1144eb0c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1144eb12 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eb18 je 0x1144eb24 */
  if (C.zf) goto L_1144eb24;
  /* 1144eb1a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1144eb1f jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144eb24:;
  /* 1144eb24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144eb27 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144eb2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1144eb2f jmp 0x1144e9a1 */
  goto L_1144e9a1;
L_1144eb34:;
  /* 1144eb34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144eb37 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1144eb39 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eb3f je 0x1144eb4b */
  if (C.zf) goto L_1144eb4b;
  /* 1144eb41 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1144eb46 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144eb4b:;
  /* 1144eb4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144eb4e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1144eb54 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1144eb5b jmp 0x1144eb66 */
  goto L_1144eb66;
L_1144eb5d:;
  /* 1144eb5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144eb60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144eb63 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1144eb66:;
  /* 1144eb66 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eb6a jge 0x1144ed9d */
  if ((C.sf==C.of)) goto L_1144ed9d;
  /* 1144eb70 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1144eb7a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1144eb80 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1144eb86:;
  /* 1144eb86 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1144eb8c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1144eb8f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1144eb95 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1144eb9b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eba1 je 0x1144ecca */
  if (C.zf) goto L_1144ecca;
  /* 1144eba7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144ebaa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1144ebb0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ebb7 je 0x1144ecca */
  if (C.zf) goto L_1144ecca;
  /* 1144ebbd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1144ebc3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ebc9 jb 0x1144ebde */
  if (C.cf) goto L_1144ebde;
  /* 1144ebcb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1144ebd1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ebd6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ebdc jb 0x1144ebe8 */
  if (C.cf) goto L_1144ebe8;
L_1144ebde:;
  /* 1144ebde mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1144ebe3 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144ebe8:;
  /* 1144ebe8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1144ebee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1144ebf4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1144ebfa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1144ec00 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ec03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1144ec06 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144ec09 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ec0e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1144ec14:;
  /* 1144ec14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144ec17 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ec1d je 0x1144ec3e */
  if (C.zf) goto L_1144ec3e;
  /* 1144ec1f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144ec22 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ec28 jne 0x1144ec2c */
  if (!C.zf) goto L_1144ec2c;
  /* 1144ec2a jmp 0x1144ec3e */
  goto L_1144ec3e;
L_1144ec2c:;
  /* 1144ec2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144ec2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144ec31 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1144ec34 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144ec37 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ec39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1144ec3c jmp 0x1144ec14 */
  goto L_1144ec14;
L_1144ec3e:;
  /* 1144ec3e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1144ec41 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ec47 jne 0x1144ec53 */
  if (!C.zf) goto L_1144ec53;
  /* 1144ec49 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1144ec4e jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144ec53:;
  /* 1144ec53 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1144ec59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1144ec5b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1144ec5e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144ec61 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1144ec67 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ec6e jle 0x1144ec7a */
  if ((C.zf||C.sf!=C.of)) goto L_1144ec7a;
  /* 1144ec70 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1144ec7a:;
  /* 1144ec7a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1144ec80 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ec83 je 0x1144ec8f */
  if (C.zf) goto L_1144ec8f;
  /* 1144ec85 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1144ec8a jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144ec8f:;
  /* 1144ec8f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1144ec95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1144ec98 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ec9e je 0x1144ecaa */
  if (C.zf) goto L_1144ecaa;
  /* 1144eca0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1144eca5 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144ecaa:;
  /* 1144ecaa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1144ecb0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1144ecb6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1144ecbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ecbf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1144ecc5 jmp 0x1144eb86 */
  goto L_1144eb86;
L_1144ecca:;
  /* 1144ecca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ecd1 je 0x1144ed41 */
  if (C.zf) goto L_1144ed41;
  /* 1144ecd3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ecd7 jge 0x1144ed0b */
  if ((C.sf==C.of)) goto L_1144ed0b;
  /* 1144ecd9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144ecde mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144ece1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144ece3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1144ece9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144eceb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1144ecf1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144ecf6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144ecf9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144ecfb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1144ed01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ed03 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1144ed09 jmp 0x1144ed41 */
  goto L_1144ed41;
L_1144ed0b:;
  /* 1144ed0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144ed0e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144ed11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144ed16 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144ed18 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1144ed1e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ed20 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1144ed26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144ed29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144ed2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1144ed31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1144ed33 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1144ed39 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ed3b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1144ed41:;
  /* 1144ed41 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1144ed47 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144ed4a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ed50 jne 0x1144ed64 */
  if (!C.zf) goto L_1144ed64;
  /* 1144ed52 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1144ed55 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1144ed5b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ed62 je 0x1144ed6e */
  if (C.zf) goto L_1144ed6e;
L_1144ed64:;
  /* 1144ed64 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1144ed69 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144ed6e:;
  /* 1144ed6e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1144ed74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1144ed77 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ed7d je 0x1144ed89 */
  if (C.zf) goto L_1144ed89;
  /* 1144ed7f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1144ed84 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144ed89:;
  /* 1144ed89 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1144ed8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ed92 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1144ed98 jmp 0x1144eb5d */
  goto L_1144eb5d;
L_1144ed9d:;
  /* 1144ed9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144eda0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1144eda6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1144edac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144edb0 jne 0x1144edca */
  if (!C.zf) goto L_1144edca;
  /* 1144edb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144edb5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1144edbb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1144edc1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144edc8 je 0x1144edd1 */
  if (C.zf) goto L_1144edd1;
L_1144edca:;
  /* 1144edca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1144edcf jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144edd1:;
  /* 1144edd1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1144edd7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144eddd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1144ede3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1144ede6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144edeb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1144edee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144edf1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1144edf3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1144edf6 jmp 0x1144e8fa */
  goto L_1144e8fa;
L_1144edfb:;
  /* 1144edfb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1144ee01 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1144ee07 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ee09 jne 0x1144ee1c */
  if (!C.zf) goto L_1144ee1c;
  /* 1144ee0b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1144ee11 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1144ee17 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ee1a je 0x1144ee23 */
  if (C.zf) goto L_1144ee23;
L_1144ee1c:;
  /* 1144ee1c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1144ee21 jmp 0x1144ee39 */
  goto L_1144ee39;
L_1144ee23:;
  /* 1144ee23 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1144ee29 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ee2c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1144ee32 jmp 0x1144e863 */
  goto L_1144e863;
L_1144ee37:;
  /* 1144ee37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1144ee39:;
  /* 1144ee39 mov esp, ebp */
  ESP = (EBP);
  /* 1144ee3b pop ebp */
  EBP = (pop32());
  /* 1144ee3c ret  */
  ESPCHK(0x1144e820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee40 @ 0x1144ee40 (250 bytes, 92 insns) */
void f_1144ee40(void) {
  FTRACE(0x1144ee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144ee40 push ebp */
  push32((uint32_t)(EBP));
  /* 1144ee41 mov ebp, esp */
  EBP = (ESP);
  /* 1144ee43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144ee46 push ebx */
  push32((uint32_t)(EBX));
  /* 1144ee47 push esi */
  push32((uint32_t)(ESI));
  /* 1144ee48 push edi */
  push32((uint32_t)(EDI));
  /* 1144ee49 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1144ee4c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1144ee4f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1144ee52 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1144ee55:;
  /* 1144ee55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ee59 jne 0x1144ee79 */
  if (!C.zf) goto L_1144ee79;
  /* 1144ee5b push 0x11470800 */
  push32((uint32_t)(0x11470800u));
  /* 1144ee60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144ee62 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1144ee64 push 0x114707f4 */
  push32((uint32_t)(0x114707f4u));
  /* 1144ee69 push 2 */
  push32((uint32_t)(0x2u));
  /* 1144ee6b call 0x11447960 */
  push32(0x1144ee70u); f_11447960();
  /* 1144ee70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ee73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ee76 jne 0x1144ee79 */
  if (!C.zf) goto L_1144ee79;
  /* 1144ee78 int3  */
  x86_unimpl("int3 @ 0x1144ee78");
L_1144ee79:;
  /* 1144ee79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144ee7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144ee7d jne 0x1144ee55 */
  if (!C.zf) goto L_1144ee55;
L_1144ee7f:;
  /* 1144ee7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ee83 jne 0x1144eea3 */
  if (!C.zf) goto L_1144eea3;
  /* 1144ee85 push 0x114707e4 */
  push32((uint32_t)(0x114707e4u));
  /* 1144ee8a push 0 */
  push32((uint32_t)(0x0u));
  /* 1144ee8c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1144ee8e push 0x114707f4 */
  push32((uint32_t)(0x114707f4u));
  /* 1144ee93 push 2 */
  push32((uint32_t)(0x2u));
  /* 1144ee95 call 0x11447960 */
  push32(0x1144ee9au); f_11447960();
  /* 1144ee9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ee9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eea0 jne 0x1144eea3 */
  if (!C.zf) goto L_1144eea3;
  /* 1144eea2 int3  */
  x86_unimpl("int3 @ 0x1144eea2");
L_1144eea3:;
  /* 1144eea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144eea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144eea7 jne 0x1144ee7f */
  if (!C.zf) goto L_1144ee7f;
  /* 1144eea9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144eeac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1144eeb3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144eeb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144eeb9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1144eebc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144eebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144eec2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1144eec4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144eec7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1144eece mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1144eed1 push ecx */
  push32((uint32_t)(ECX));
  /* 1144eed2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1144eed5 push edx */
  push32((uint32_t)(EDX));
  /* 1144eed6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144eed9 push eax */
  push32((uint32_t)(EAX));
  /* 1144eeda call 0x114502a0 */
  push32(0x1144eedfu); f_114502a0();
  /* 1144eedf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144eee2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1144eee5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144eee8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1144eeeb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144eeee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144eef1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1144eef4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144eef7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144eefb jl 0x1144ef1f */
  if ((C.sf!=C.of)) goto L_1144ef1f;
  /* 1144eefd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144ef00 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1144ef02 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1144ef05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144ef07 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1144ef0d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1144ef10 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144ef13 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1144ef15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ef18 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144ef1b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1144ef1d jmp 0x1144ef30 */
  goto L_1144ef30;
L_1144ef1f:;
  /* 1144ef1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144ef22 push edx */
  push32((uint32_t)(EDX));
  /* 1144ef23 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144ef25 call 0x11450020 */
  push32(0x1144ef2au); f_11450020();
  /* 1144ef2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ef2d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1144ef30:;
  /* 1144ef30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144ef33 pop edi */
  EDI = (pop32());
  /* 1144ef34 pop esi */
  ESI = (pop32());
  /* 1144ef35 pop ebx */
  EBX = (pop32());
  /* 1144ef36 mov esp, ebp */
  ESP = (EBP);
  /* 1144ef38 pop ebp */
  EBP = (pop32());
  /* 1144ef39 ret  */
  ESPCHK(0x1144ee40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef40 @ 0x1144ef40 (183 bytes, 58 insns) */
void f_1144ef40(void) {
  FTRACE(0x1144ef40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144ef40 push ebp */
  push32((uint32_t)(EBP));
  /* 1144ef41 mov ebp, esp */
  EBP = (ESP);
  /* 1144ef43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144ef46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144ef49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ef4c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ef51 ja 0x1144ef6a */
  if ((!C.cf&&!C.zf)) goto L_1144ef6a;
  /* 1144ef53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144ef56 mov edx, dword ptr [0x11472db8] */
  EDX = (r32((uint32_t)(0x11472db8)));
  /* 1144ef5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ef5e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1144ef62 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1144ef65 jmp 0x1144eff3 */
  goto L_1144eff3;
L_1144ef6a:;
  /* 1144ef6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144ef6d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1144ef70 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1144ef76 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1144ef7c mov edx, dword ptr [0x11472db8] */
  EDX = (r32((uint32_t)(0x11472db8)));
  /* 1144ef82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ef84 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1144ef88 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1144ef8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144ef8f je 0x1144efb3 */
  if (C.zf) goto L_1144efb3;
  /* 1144ef91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144ef94 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1144ef97 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1144ef9d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1144efa0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1144efa3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1144efa6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1144efaa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1144efb1 jmp 0x1144efc4 */
  goto L_1144efc4;
L_1144efb3:;
  /* 1144efb3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1144efb6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1144efb9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1144efbd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1144efc4:;
  /* 1144efc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1144efc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144efc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144efca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1144efcd push ecx */
  push32((uint32_t)(ECX));
  /* 1144efce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144efd1 push edx */
  push32((uint32_t)(EDX));
  /* 1144efd2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1144efd5 push eax */
  push32((uint32_t)(EAX));
  /* 1144efd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1144efd8 call 0x11451540 */
  push32(0x1144efddu); f_11451540();
  /* 1144efdd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144efe0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144efe2 jne 0x1144efe8 */
  if (!C.zf) goto L_1144efe8;
  /* 1144efe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144efe6 jmp 0x1144eff3 */
  goto L_1144eff3;
L_1144efe8:;
  /* 1144efe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144efeb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1144eff0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1144eff3:;
  /* 1144eff3 mov esp, ebp */
  ESP = (EBP);
  /* 1144eff5 pop ebp */
  EBP = (pop32());
  /* 1144eff6 ret  */
  ESPCHK(0x1144ef40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f000 @ 0x1144f000 (836 bytes, 238 insns) */
void f_1144f000(void) {
  FTRACE(0x1144f000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144f000 push ebp */
  push32((uint32_t)(EBP));
  /* 1144f001 mov ebp, esp */
  EBP = (ESP);
  /* 1144f003 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144f006 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1144f008 call 0x1144b210 */
  push32(0x1144f00du); f_1144b210();
  /* 1144f00d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f013 push eax */
  push32((uint32_t)(EAX));
  /* 1144f014 call 0x1144f350 */
  push32(0x1144f019u); f_1144f350();
  /* 1144f019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f01c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1144f01f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f022 cmp ecx, dword ptr [0x11475f84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11475f84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f028 jne 0x1144f03b */
  if (!C.zf) goto L_1144f03b;
  /* 1144f02a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1144f02c call 0x1144b2b0 */
  push32(0x1144f031u); f_1144b2b0();
  /* 1144f031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144f036 jmp 0x1144f340 */
  goto L_1144f340;
L_1144f03b:;
  /* 1144f03b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f03f jne 0x1144f05c */
  if (!C.zf) goto L_1144f05c;
  /* 1144f041 call 0x1144f430 */
  push32(0x1144f046u); f_1144f430();
  /* 1144f046 call 0x1144f4b0 */
  push32(0x1144f04bu); f_1144f4b0();
  /* 1144f04b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1144f04d call 0x1144b2b0 */
  push32(0x1144f052u); f_1144b2b0();
  /* 1144f052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144f057 jmp 0x1144f340 */
  goto L_1144f340;
L_1144f05c:;
  /* 1144f05c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1144f063 jmp 0x1144f06e */
  goto L_1144f06e;
L_1144f065:;
  /* 1144f065 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f068 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f06b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1144f06e:;
  /* 1144f06e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f072 jae 0x1144f1bf */
  if (!C.cf) goto L_1144f1bf;
  /* 1144f078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f07b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144f07e mov ecx, dword ptr [eax + 0x11472fd8] */
  ECX = (r32((uint32_t)(EAX + 0x11472fd8)));
  /* 1144f084 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f087 jne 0x1144f1ba */
  if (!C.zf) goto L_1144f1ba;
  /* 1144f08d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1144f094 jmp 0x1144f09f */
  goto L_1144f09f;
L_1144f096:;
  /* 1144f096 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f099 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f09c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1144f09f:;
  /* 1144f09f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f0a6 jae 0x1144f0b4 */
  if (!C.cf) goto L_1144f0b4;
  /* 1144f0a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f0ab mov byte ptr [eax + 0x11476120], 0 */
  w8((uint32_t)(EAX + 0x11476120), (0x0u));
  /* 1144f0b2 jmp 0x1144f096 */
  goto L_1144f096;
L_1144f0b4:;
  /* 1144f0b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1144f0bb jmp 0x1144f0c6 */
  goto L_1144f0c6;
L_1144f0bd:;
  /* 1144f0bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144f0c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f0c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1144f0c6:;
  /* 1144f0c6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f0ca jae 0x1144f147 */
  if (!C.cf) goto L_1144f147;
  /* 1144f0cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f0cf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144f0d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144f0d5 lea ecx, [edx + eax*8 + 0x11472fe8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11472fe8));
  /* 1144f0dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1144f0df jmp 0x1144f0ea */
  goto L_1144f0ea;
L_1144f0e1:;
  /* 1144f0e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144f0e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f0e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1144f0ea:;
  /* 1144f0ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144f0ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144f0ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1144f0f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144f0f3 je 0x1144f142 */
  if (C.zf) goto L_1144f142;
  /* 1144f0f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144f0f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144f0fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1144f0fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144f0ff je 0x1144f142 */
  if (C.zf) goto L_1144f142;
  /* 1144f101 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144f104 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f106 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1144f108 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1144f10b jmp 0x1144f116 */
  goto L_1144f116;
L_1144f10d:;
  /* 1144f10d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f110 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f113 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1144f116:;
  /* 1144f116 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144f119 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f11b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1144f11e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f121 ja 0x1144f140 */
  if ((!C.cf&&!C.zf)) goto L_1144f140;
  /* 1144f123 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f126 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144f129 mov dl, byte ptr [eax + 0x11476121] */
  DL = (r8((uint32_t)(EAX + 0x11476121)));
  /* 1144f12f or dl, byte ptr [ecx + 0x11472fd0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11472fd0))); DL = (_r); fl_logic(_r,8); }
  /* 1144f135 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f138 mov byte ptr [eax + 0x11476121], dl */
  w8((uint32_t)(EAX + 0x11476121), (DL));
  /* 1144f13e jmp 0x1144f10d */
  goto L_1144f10d;
L_1144f140:;
  /* 1144f140 jmp 0x1144f0e1 */
  goto L_1144f0e1;
L_1144f142:;
  /* 1144f142 jmp 0x1144f0bd */
  goto L_1144f0bd;
L_1144f147:;
  /* 1144f147 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f14a mov dword ptr [0x11475f84], ecx */
  w32((uint32_t)(0x11475f84), (ECX));
  /* 1144f150 mov dword ptr [0x1147600c], 1 */
  w32((uint32_t)(0x1147600c), (0x1u));
  /* 1144f15a mov edx, dword ptr [0x11475f84] */
  EDX = (r32((uint32_t)(0x11475f84)));
  /* 1144f160 push edx */
  push32((uint32_t)(EDX));
  /* 1144f161 call 0x1144f3b0 */
  push32(0x1144f166u); f_1144f3b0();
  /* 1144f166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f169 mov dword ptr [0x11476224], eax */
  w32((uint32_t)(0x11476224), (EAX));
  /* 1144f16e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1144f175 jmp 0x1144f180 */
  goto L_1144f180;
L_1144f177:;
  /* 1144f177 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144f17a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f17d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1144f180:;
  /* 1144f180 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f184 jae 0x1144f1a4 */
  if (!C.cf) goto L_1144f1a4;
  /* 1144f186 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f189 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144f18c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144f18f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144f192 mov cx, word ptr [ecx + eax*2 + 0x11472fdc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11472fdc)));
  /* 1144f19a mov word ptr [edx*2 + 0x11476000], cx */
  w16((uint32_t)(EDX*2 + 0x11476000), (CX));
  /* 1144f1a2 jmp 0x1144f177 */
  goto L_1144f177;
L_1144f1a4:;
  /* 1144f1a4 call 0x1144f4b0 */
  push32(0x1144f1a9u); f_1144f4b0();
  /* 1144f1a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1144f1ab call 0x1144b2b0 */
  push32(0x1144f1b0u); f_1144b2b0();
  /* 1144f1b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f1b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144f1b5 jmp 0x1144f340 */
  goto L_1144f340;
L_1144f1ba:;
  /* 1144f1ba jmp 0x1144f065 */
  goto L_1144f065;
L_1144f1bf:;
  /* 1144f1bf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1144f1c2 push edx */
  push32((uint32_t)(EDX));
  /* 1144f1c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f1c6 push eax */
  push32((uint32_t)(EAX));
  /* 1144f1c7 call dword ptr [0x1147735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147735c))), 0x1144f1cdu);
  /* 1144f1cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f1d0 jne 0x1144f312 */
  if (!C.zf) goto L_1144f312;
  /* 1144f1d6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1144f1dd jmp 0x1144f1e8 */
  goto L_1144f1e8;
L_1144f1df:;
  /* 1144f1df mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f1e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f1e5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1144f1e8:;
  /* 1144f1e8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f1ef jae 0x1144f1fd */
  if (!C.cf) goto L_1144f1fd;
  /* 1144f1f1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f1f4 mov byte ptr [edx + 0x11476120], 0 */
  w8((uint32_t)(EDX + 0x11476120), (0x0u));
  /* 1144f1fb jmp 0x1144f1df */
  goto L_1144f1df;
L_1144f1fd:;
  /* 1144f1fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f200 mov dword ptr [0x11475f84], eax */
  w32((uint32_t)(0x11475f84), (EAX));
  /* 1144f205 mov dword ptr [0x11476224], 0 */
  w32((uint32_t)(0x11476224), (0x0u));
  /* 1144f20f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f213 jbe 0x1144f2ce */
  if ((C.cf||C.zf)) goto L_1144f2ce;
  /* 1144f219 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1144f21c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1144f21f jmp 0x1144f22a */
  goto L_1144f22a;
L_1144f221:;
  /* 1144f221 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144f224 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f227 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1144f22a:;
  /* 1144f22a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144f22d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144f22f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1144f231 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144f233 je 0x1144f27c */
  if (C.zf) goto L_1144f27c;
  /* 1144f235 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144f238 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144f23a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1144f23d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144f23f je 0x1144f27c */
  if (C.zf) goto L_1144f27c;
  /* 1144f241 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144f244 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f246 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1144f248 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1144f24b jmp 0x1144f256 */
  goto L_1144f256;
L_1144f24d:;
  /* 1144f24d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f250 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f253 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1144f256:;
  /* 1144f256 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1144f259 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f25b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1144f25e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f261 ja 0x1144f27a */
  if ((!C.cf&&!C.zf)) goto L_1144f27a;
  /* 1144f263 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f266 mov cl, byte ptr [eax + 0x11476121] */
  CL = (r8((uint32_t)(EAX + 0x11476121)));
  /* 1144f26c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1144f26f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f272 mov byte ptr [edx + 0x11476121], cl */
  w8((uint32_t)(EDX + 0x11476121), (CL));
  /* 1144f278 jmp 0x1144f24d */
  goto L_1144f24d;
L_1144f27a:;
  /* 1144f27a jmp 0x1144f221 */
  goto L_1144f221;
L_1144f27c:;
  /* 1144f27c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1144f283 jmp 0x1144f28e */
  goto L_1144f28e;
L_1144f285:;
  /* 1144f285 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f288 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f28b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1144f28e:;
  /* 1144f28e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f295 jae 0x1144f2ae */
  if (!C.cf) goto L_1144f2ae;
  /* 1144f297 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f29a mov dl, byte ptr [ecx + 0x11476121] */
  DL = (r8((uint32_t)(ECX + 0x11476121)));
  /* 1144f2a0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1144f2a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1144f2a6 mov byte ptr [eax + 0x11476121], dl */
  w8((uint32_t)(EAX + 0x11476121), (DL));
  /* 1144f2ac jmp 0x1144f285 */
  goto L_1144f285;
L_1144f2ae:;
  /* 1144f2ae mov ecx, dword ptr [0x11475f84] */
  ECX = (r32((uint32_t)(0x11475f84)));
  /* 1144f2b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1144f2b5 call 0x1144f3b0 */
  push32(0x1144f2bau); f_1144f3b0();
  /* 1144f2ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f2bd mov dword ptr [0x11476224], eax */
  w32((uint32_t)(0x11476224), (EAX));
  /* 1144f2c2 mov dword ptr [0x1147600c], 1 */
  w32((uint32_t)(0x1147600c), (0x1u));
  /* 1144f2cc jmp 0x1144f2d8 */
  goto L_1144f2d8;
L_1144f2ce:;
  /* 1144f2ce mov dword ptr [0x1147600c], 0 */
  w32((uint32_t)(0x1147600c), (0x0u));
L_1144f2d8:;
  /* 1144f2d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1144f2df jmp 0x1144f2ea */
  goto L_1144f2ea;
L_1144f2e1:;
  /* 1144f2e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144f2e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f2e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1144f2ea:;
  /* 1144f2ea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f2ee jae 0x1144f2ff */
  if (!C.cf) goto L_1144f2ff;
  /* 1144f2f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144f2f3 mov word ptr [eax*2 + 0x11476000], 0 */
  w16((uint32_t)(EAX*2 + 0x11476000), (0x0u));
  /* 1144f2fd jmp 0x1144f2e1 */
  goto L_1144f2e1;
L_1144f2ff:;
  /* 1144f2ff call 0x1144f4b0 */
  push32(0x1144f304u); f_1144f4b0();
  /* 1144f304 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1144f306 call 0x1144b2b0 */
  push32(0x1144f30bu); f_1144b2b0();
  /* 1144f30b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f30e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144f310 jmp 0x1144f340 */
  goto L_1144f340;
L_1144f312:;
  /* 1144f312 cmp dword ptr [0x11474b4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f319 je 0x1144f333 */
  if (C.zf) goto L_1144f333;
  /* 1144f31b call 0x1144f430 */
  push32(0x1144f320u); f_1144f430();
  /* 1144f320 call 0x1144f4b0 */
  push32(0x1144f325u); f_1144f4b0();
  /* 1144f325 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1144f327 call 0x1144b2b0 */
  push32(0x1144f32cu); f_1144b2b0();
  /* 1144f32c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f32f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144f331 jmp 0x1144f340 */
  goto L_1144f340;
L_1144f333:;
  /* 1144f333 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1144f335 call 0x1144b2b0 */
  push32(0x1144f33au); f_1144b2b0();
  /* 1144f33a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f33d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1144f340:;
  /* 1144f340 mov esp, ebp */
  ESP = (EBP);
  /* 1144f342 pop ebp */
  EBP = (pop32());
  /* 1144f343 ret  */
  ESPCHK(0x1144f000u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1144f350 (89 bytes, 21 insns) */
void f_1144f350(void) {
  FTRACE(0x1144f350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144f350 push ebp */
  push32((uint32_t)(EBP));
  /* 1144f351 mov ebp, esp */
  EBP = (ESP);
  /* 1144f353 mov dword ptr [0x11474b4c], 0 */
  w32((uint32_t)(0x11474b4c), (0x0u));
  /* 1144f35d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f361 jne 0x1144f375 */
  if (!C.zf) goto L_1144f375;
  /* 1144f363 mov dword ptr [0x11474b4c], 1 */
  w32((uint32_t)(0x11474b4c), (0x1u));
  /* 1144f36d call dword ptr [0x11477348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477348))), 0x1144f373u);
  /* 1144f373 jmp 0x1144f3a7 */
  goto L_1144f3a7;
L_1144f375:;
  /* 1144f375 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f379 jne 0x1144f38d */
  if (!C.zf) goto L_1144f38d;
  /* 1144f37b mov dword ptr [0x11474b4c], 1 */
  w32((uint32_t)(0x11474b4c), (0x1u));
  /* 1144f385 call dword ptr [0x1147734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147734c))), 0x1144f38bu);
  /* 1144f38b jmp 0x1144f3a7 */
  goto L_1144f3a7;
L_1144f38d:;
  /* 1144f38d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f391 jne 0x1144f3a4 */
  if (!C.zf) goto L_1144f3a4;
  /* 1144f393 mov dword ptr [0x11474b4c], 1 */
  w32((uint32_t)(0x11474b4c), (0x1u));
  /* 1144f39d mov eax, dword ptr [0x11474b68] */
  EAX = (r32((uint32_t)(0x11474b68)));
  /* 1144f3a2 jmp 0x1144f3a7 */
  goto L_1144f3a7;
L_1144f3a4:;
  /* 1144f3a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1144f3a7:;
  /* 1144f3a7 pop ebp */
  EBP = (pop32());
  /* 1144f3a8 ret  */
  ESPCHK(0x1144f350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3b0 @ 0x1144f3b0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1144f3b0(void) {
  FTRACE(0x1144f3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144f3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144f3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1144f3b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1144f3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f3b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144f3ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f3bd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144f3c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1144f3c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f3ca ja 0x1144f3fa */
  if ((!C.cf&&!C.zf)) goto L_1144f3fa;
  /* 1144f3cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f3cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f3d1 mov dl, byte ptr [eax + 0x1144f414] */
  DL = (r8((uint32_t)(EAX + 0x1144f414)));
  /* 1144f3d7 jmp dword ptr [edx*4 + 0x1144f400] */
  switch (EDX) {
    case 0: goto L_1144f3de;
    case 1: goto L_1144f3e5;
    case 2: goto L_1144f3ec;
    case 3: goto L_1144f3f3;
    case 4: goto L_1144f3fa;
    default: x86_unimpl("switch@0x1144f3d7 out of table"); return;
  }
L_1144f3de:;
  /* 1144f3de mov eax, 0x411 */
  EAX = (0x411u);
  /* 1144f3e3 jmp 0x1144f3fc */
  goto L_1144f3fc;
L_1144f3e5:;
  /* 1144f3e5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1144f3ea jmp 0x1144f3fc */
  goto L_1144f3fc;
L_1144f3ec:;
  /* 1144f3ec mov eax, 0x412 */
  EAX = (0x412u);
  /* 1144f3f1 jmp 0x1144f3fc */
  goto L_1144f3fc;
L_1144f3f3:;
  /* 1144f3f3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1144f3f8 jmp 0x1144f3fc */
  goto L_1144f3fc;
L_1144f3fa:;
  /* 1144f3fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1144f3fc:;
  /* 1144f3fc mov esp, ebp */
  ESP = (EBP);
  /* 1144f3fe pop ebp */
  EBP = (pop32());
  /* 1144f3ff ret  */
  ESPCHK(0x1144f3b0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1144f430 (116 bytes, 29 insns) */
void f_1144f430(void) {
  FTRACE(0x1144f430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144f430 push ebp */
  push32((uint32_t)(EBP));
  /* 1144f431 mov ebp, esp */
  EBP = (ESP);
  /* 1144f433 push ecx */
  push32((uint32_t)(ECX));
  /* 1144f434 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1144f43b jmp 0x1144f446 */
  goto L_1144f446;
L_1144f43d:;
  /* 1144f43d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f440 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f443 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1144f446:;
  /* 1144f446 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f44d jge 0x1144f45b */
  if ((C.sf==C.of)) goto L_1144f45b;
  /* 1144f44f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f452 mov byte ptr [ecx + 0x11476120], 0 */
  w8((uint32_t)(ECX + 0x11476120), (0x0u));
  /* 1144f459 jmp 0x1144f43d */
  goto L_1144f43d;
L_1144f45b:;
  /* 1144f45b mov dword ptr [0x11475f84], 0 */
  w32((uint32_t)(0x11475f84), (0x0u));
  /* 1144f465 mov dword ptr [0x1147600c], 0 */
  w32((uint32_t)(0x1147600c), (0x0u));
  /* 1144f46f mov dword ptr [0x11476224], 0 */
  w32((uint32_t)(0x11476224), (0x0u));
  /* 1144f479 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1144f480 jmp 0x1144f48b */
  goto L_1144f48b;
L_1144f482:;
  /* 1144f482 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f485 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f488 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1144f48b:;
  /* 1144f48b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f48f jge 0x1144f4a0 */
  if ((C.sf==C.of)) goto L_1144f4a0;
  /* 1144f491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f494 mov word ptr [eax*2 + 0x11476000], 0 */
  w16((uint32_t)(EAX*2 + 0x11476000), (0x0u));
  /* 1144f49e jmp 0x1144f482 */
  goto L_1144f482;
L_1144f4a0:;
  /* 1144f4a0 mov esp, ebp */
  ESP = (EBP);
  /* 1144f4a2 pop ebp */
  EBP = (pop32());
  /* 1144f4a3 ret  */
  ESPCHK(0x1144f430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4b0 @ 0x1144f4b0 (770 bytes, 175 insns) */
void f_1144f4b0(void) {
  FTRACE(0x1144f4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144f4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144f4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1144f4b3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144f4b9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1144f4bf push eax */
  push32((uint32_t)(EAX));
  /* 1144f4c0 mov ecx, dword ptr [0x11475f84] */
  ECX = (r32((uint32_t)(0x11475f84)));
  /* 1144f4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1144f4c7 call dword ptr [0x1147735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147735c))), 0x1144f4cdu);
  /* 1144f4cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f4d0 jne 0x1144f6e9 */
  if (!C.zf) goto L_1144f6e9;
  /* 1144f4d6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1144f4e0 jmp 0x1144f4f1 */
  goto L_1144f4f1;
L_1144f4e2:;
  /* 1144f4e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f4e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f4eb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1144f4f1:;
  /* 1144f4f1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f4fb jae 0x1144f512 */
  if (!C.cf) goto L_1144f512;
  /* 1144f4fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f503 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1144f509 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1144f510 jmp 0x1144f4e2 */
  goto L_1144f4e2;
L_1144f512:;
  /* 1144f512 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1144f519 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1144f51f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1144f522 jmp 0x1144f52d */
  goto L_1144f52d;
L_1144f524:;
  /* 1144f524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f527 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f52a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1144f52d:;
  /* 1144f52d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f530 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f532 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1144f534 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144f536 je 0x1144f578 */
  if (C.zf) goto L_1144f578;
  /* 1144f538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f53b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144f53d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1144f53f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1144f545 jmp 0x1144f556 */
  goto L_1144f556;
L_1144f547:;
  /* 1144f547 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f54d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f550 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1144f556:;
  /* 1144f556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144f559 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144f55b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1144f55e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f564 ja 0x1144f576 */
  if ((!C.cf&&!C.zf)) goto L_1144f576;
  /* 1144f566 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f56c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1144f574 jmp 0x1144f547 */
  goto L_1144f547;
L_1144f576:;
  /* 1144f576 jmp 0x1144f524 */
  goto L_1144f524;
L_1144f578:;
  /* 1144f578 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144f57a mov eax, dword ptr [0x11476224] */
  EAX = (r32((uint32_t)(0x11476224)));
  /* 1144f57f push eax */
  push32((uint32_t)(EAX));
  /* 1144f580 mov ecx, dword ptr [0x11475f84] */
  ECX = (r32((uint32_t)(0x11475f84)));
  /* 1144f586 push ecx */
  push32((uint32_t)(ECX));
  /* 1144f587 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1144f58d push edx */
  push32((uint32_t)(EDX));
  /* 1144f58e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1144f593 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1144f599 push eax */
  push32((uint32_t)(EAX));
  /* 1144f59a push 1 */
  push32((uint32_t)(0x1u));
  /* 1144f59c call 0x11451540 */
  push32(0x1144f5a1u); f_11451540();
  /* 1144f5a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f5a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144f5a6 mov ecx, dword ptr [0x11475f84] */
  ECX = (r32((uint32_t)(0x11475f84)));
  /* 1144f5ac push ecx */
  push32((uint32_t)(ECX));
  /* 1144f5ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1144f5b2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1144f5b8 push edx */
  push32((uint32_t)(EDX));
  /* 1144f5b9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1144f5be lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1144f5c4 push eax */
  push32((uint32_t)(EAX));
  /* 1144f5c5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1144f5ca mov ecx, dword ptr [0x11476224] */
  ECX = (r32((uint32_t)(0x11476224)));
  /* 1144f5d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1144f5d1 call 0x11451700 */
  push32(0x1144f5d6u); f_11451700();
  /* 1144f5d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f5d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1144f5db mov edx, dword ptr [0x11475f84] */
  EDX = (r32((uint32_t)(0x11475f84)));
  /* 1144f5e1 push edx */
  push32((uint32_t)(EDX));
  /* 1144f5e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1144f5e7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1144f5ed push eax */
  push32((uint32_t)(EAX));
  /* 1144f5ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1144f5f3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1144f5f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1144f5fa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1144f5ff mov edx, dword ptr [0x11476224] */
  EDX = (r32((uint32_t)(0x11476224)));
  /* 1144f605 push edx */
  push32((uint32_t)(EDX));
  /* 1144f606 call 0x11451700 */
  push32(0x1144f60bu); f_11451700();
  /* 1144f60b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f60e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1144f618 jmp 0x1144f629 */
  goto L_1144f629;
L_1144f61a:;
  /* 1144f61a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f620 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f623 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1144f629:;
  /* 1144f629 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f633 jae 0x1144f6e4 */
  if (!C.cf) goto L_1144f6e4;
  /* 1144f639 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f63f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f641 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1144f649 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1144f64c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1144f64e je 0x1144f686 */
  if (C.zf) goto L_1144f686;
  /* 1144f650 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f656 mov cl, byte ptr [eax + 0x11476121] */
  CL = (r8((uint32_t)(EAX + 0x11476121)));
  /* 1144f65c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1144f65f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f665 mov byte ptr [edx + 0x11476121], cl */
  w8((uint32_t)(EDX + 0x11476121), (CL));
  /* 1144f66b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f671 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f677 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1144f67e mov byte ptr [eax + 0x11476020], dl */
  w8((uint32_t)(EAX + 0x11476020), (DL));
  /* 1144f684 jmp 0x1144f6df */
  goto L_1144f6df;
L_1144f686:;
  /* 1144f686 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f68c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144f68e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1144f696 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1144f699 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1144f69b je 0x1144f6d2 */
  if (C.zf) goto L_1144f6d2;
  /* 1144f69d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f6a3 mov al, byte ptr [edx + 0x11476121] */
  AL = (r8((uint32_t)(EDX + 0x11476121)));
  /* 1144f6a9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1144f6ab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f6b1 mov byte ptr [ecx + 0x11476121], al */
  w8((uint32_t)(ECX + 0x11476121), (AL));
  /* 1144f6b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f6bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f6c3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1144f6ca mov byte ptr [edx + 0x11476020], cl */
  w8((uint32_t)(EDX + 0x11476020), (CL));
  /* 1144f6d0 jmp 0x1144f6df */
  goto L_1144f6df;
L_1144f6d2:;
  /* 1144f6d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f6d8 mov byte ptr [edx + 0x11476020], 0 */
  w8((uint32_t)(EDX + 0x11476020), (0x0u));
L_1144f6df:;
  /* 1144f6df jmp 0x1144f61a */
  goto L_1144f61a;
L_1144f6e4:;
  /* 1144f6e4 jmp 0x1144f7ae */
  goto L_1144f7ae;
L_1144f6e9:;
  /* 1144f6e9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1144f6f3 jmp 0x1144f704 */
  goto L_1144f704;
L_1144f6f5:;
  /* 1144f6f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f6fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f6fe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1144f704:;
  /* 1144f704 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f70e jae 0x1144f7ae */
  if (!C.cf) goto L_1144f7ae;
  /* 1144f714 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f71b jb 0x1144f758 */
  if (C.cf) goto L_1144f758;
  /* 1144f71d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f724 ja 0x1144f758 */
  if ((!C.cf&&!C.zf)) goto L_1144f758;
  /* 1144f726 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f72c mov dl, byte ptr [ecx + 0x11476121] */
  DL = (r8((uint32_t)(ECX + 0x11476121)));
  /* 1144f732 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1144f735 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f73b mov byte ptr [eax + 0x11476121], dl */
  w8((uint32_t)(EAX + 0x11476121), (DL));
  /* 1144f741 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f747 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f74a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f750 mov byte ptr [edx + 0x11476020], cl */
  w8((uint32_t)(EDX + 0x11476020), (CL));
  /* 1144f756 jmp 0x1144f7a9 */
  goto L_1144f7a9;
L_1144f758:;
  /* 1144f758 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f75f jb 0x1144f79c */
  if (C.cf) goto L_1144f79c;
  /* 1144f761 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f768 ja 0x1144f79c */
  if ((!C.cf&&!C.zf)) goto L_1144f79c;
  /* 1144f76a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f770 mov cl, byte ptr [eax + 0x11476121] */
  CL = (r8((uint32_t)(EAX + 0x11476121)));
  /* 1144f776 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1144f779 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f77f mov byte ptr [edx + 0x11476121], cl */
  w8((uint32_t)(EDX + 0x11476121), (CL));
  /* 1144f785 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f78b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144f78e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f794 mov byte ptr [ecx + 0x11476020], al */
  w8((uint32_t)(ECX + 0x11476020), (AL));
  /* 1144f79a jmp 0x1144f7a9 */
  goto L_1144f7a9;
L_1144f79c:;
  /* 1144f79c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1144f7a2 mov byte ptr [edx + 0x11476020], 0 */
  w8((uint32_t)(EDX + 0x11476020), (0x0u));
L_1144f7a9:;
  /* 1144f7a9 jmp 0x1144f6f5 */
  goto L_1144f6f5;
L_1144f7ae:;
  /* 1144f7ae mov esp, ebp */
  ESP = (EBP);
  /* 1144f7b0 pop ebp */
  EBP = (pop32());
  /* 1144f7b1 ret  */
  ESPCHK(0x1144f4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7c0 @ 0x1144f7c0 (23 bytes, 9 insns) */
void f_1144f7c0(void) {
  FTRACE(0x1144f7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144f7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144f7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1144f7c3 cmp dword ptr [0x1147600c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1147600c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f7ca je 0x1144f7d3 */
  if (C.zf) goto L_1144f7d3;
  /* 1144f7cc mov eax, dword ptr [0x11475f84] */
  EAX = (r32((uint32_t)(0x11475f84)));
  /* 1144f7d1 jmp 0x1144f7d5 */
  goto L_1144f7d5;
L_1144f7d3:;
  /* 1144f7d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1144f7d5:;
  /* 1144f7d5 pop ebp */
  EBP = (pop32());
  /* 1144f7d6 ret  */
  ESPCHK(0x1144f7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7e0 @ 0x1144f7e0 (34 bytes, 10 insns) */
void f_1144f7e0(void) {
  FTRACE(0x1144f7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144f7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1144f7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1144f7e3 cmp dword ptr [0x114763d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114763d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f7ea jne 0x1144f800 */
  if (!C.zf) goto L_1144f800;
  /* 1144f7ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1144f7ee call 0x1144f000 */
  push32(0x1144f7f3u); f_1144f000();
  /* 1144f7f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f7f6 mov dword ptr [0x114763d0], 1 */
  w32((uint32_t)(0x114763d0), (0x1u));
L_1144f800:;
  /* 1144f800 pop ebp */
  EBP = (pop32());
  /* 1144f801 ret  */
  ESPCHK(0x1144f7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f810 @ 0x1144f810 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1144f810(void) {
  FTRACE(0x1144f810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144f810 push ebp */
  push32((uint32_t)(EBP));
  /* 1144f811 mov ebp, esp */
  EBP = (ESP);
  /* 1144f813 push edi */
  push32((uint32_t)(EDI));
  /* 1144f814 push esi */
  push32((uint32_t)(ESI));
  /* 1144f815 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1144f818 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1144f81b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f81e mov eax, ecx */
  EAX = (ECX);
  /* 1144f820 mov edx, ecx */
  EDX = (ECX);
  /* 1144f822 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f824 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f826 jbe 0x1144f830 */
  if ((C.cf||C.zf)) goto L_1144f830;
  /* 1144f828 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f82a jb 0x1144f9a8 */
  if (C.cf) goto L_1144f9a8;
L_1144f830:;
  /* 1144f830 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1144f836 jne 0x1144f84c */
  if (!C.zf) goto L_1144f84c;
  /* 1144f838 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1144f83b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1144f83e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f841 jb 0x1144f86c */
  if (C.cf) goto L_1144f86c;
  /* 1144f843 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1144f845 jmp dword ptr [edx*4 + 0x1144f958] */
  switch (EDX) {
    case 0: goto L_1144f968;
    case 1: goto L_1144f970;
    case 2: goto L_1144f97c;
    case 3: goto L_1144f990;
    default: x86_unimpl("switch@0x1144f845 out of table"); return;
  }
L_1144f84c:;
  /* 1144f84c mov eax, edi */
  EAX = (EDI);
  /* 1144f84e mov edx, 3 */
  EDX = (0x3u);
  /* 1144f853 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144f856 jb 0x1144f864 */
  if (C.cf) goto L_1144f864;
  /* 1144f858 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1144f85b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f85d jmp dword ptr [eax*4 + 0x1144f870] */
  switch (EAX) {
    case 1: goto L_1144f880;
    case 2: goto L_1144f8ac;
    case 3: goto L_1144f8d0;
    default: x86_unimpl("switch@0x1144f85d out of table"); return;
  }
L_1144f864:;
  /* 1144f864 jmp dword ptr [ecx*4 + 0x1144f968] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1144f968)))); return;
  /* 1144f86b nop  */
  /* nop */
L_1144f86c:;
  /* 1144f86c jmp dword ptr [ecx*4 + 0x1144f8ec] */
  switch (ECX) {
    case 0: goto L_1144f94f;
    case 1: goto L_1144f93c;
    case 2: goto L_1144f934;
    case 3: goto L_1144f92c;
    case 4: goto L_1144f924;
    case 5: goto L_1144f91c;
    case 6: goto L_1144f914;
    case 7: goto L_1144f90c;
    default: x86_unimpl("switch@0x1144f86c out of table"); return;
  }
  /* 1144f873 nop  */
  /* nop */
L_1144f880:;
  /* 1144f880 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f882 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1144f884 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1144f886 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1144f889 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1144f88c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1144f88f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1144f892 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1144f895 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f898 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f89b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f89e jb 0x1144f86c */
  if (C.cf) goto L_1144f86c;
  /* 1144f8a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1144f8a2 jmp dword ptr [edx*4 + 0x1144f958] */
  switch (EDX) {
    case 0: goto L_1144f968;
    case 1: goto L_1144f970;
    case 2: goto L_1144f97c;
    case 3: goto L_1144f990;
    default: x86_unimpl("switch@0x1144f8a2 out of table"); return;
  }
  /* 1144f8a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1144f8ac:;
  /* 1144f8ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f8ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1144f8b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1144f8b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1144f8b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1144f8b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1144f8bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f8be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f8c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f8c4 jb 0x1144f86c */
  if (C.cf) goto L_1144f86c;
  /* 1144f8c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1144f8c8 jmp dword ptr [edx*4 + 0x1144f958] */
  switch (EDX) {
    case 0: goto L_1144f968;
    case 1: goto L_1144f970;
    case 2: goto L_1144f97c;
    case 3: goto L_1144f990;
    default: x86_unimpl("switch@0x1144f8c8 out of table"); return;
  }
  /* 1144f8cf nop  */
  /* nop */
L_1144f8d0:;
  /* 1144f8d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1144f8d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1144f8d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1144f8d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1144f8d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1144f8da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1144f8db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f8de jb 0x1144f86c */
  if (C.cf) goto L_1144f86c;
  /* 1144f8e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1144f8e2 jmp dword ptr [edx*4 + 0x1144f958] */
  switch (EDX) {
    case 0: goto L_1144f968;
    case 1: goto L_1144f970;
    case 2: goto L_1144f97c;
    case 3: goto L_1144f990;
    default: x86_unimpl("switch@0x1144f8e2 out of table"); return;
  }
  /* 1144f8e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1144f90c:;
  /* 1144f90c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1144f910 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1144f914:;
  /* 1144f914 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1144f918 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1144f91c:;
  /* 1144f91c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1144f920 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1144f924:;
  /* 1144f924 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1144f928 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1144f92c:;
  /* 1144f92c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1144f930 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1144f934:;
  /* 1144f934 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1144f938 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1144f93c:;
  /* 1144f93c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1144f940 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1144f944 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1144f94b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1144f94d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1144f94f:;
  /* 1144f94f jmp dword ptr [edx*4 + 0x1144f958] */
  switch (EDX) {
    case 0: goto L_1144f968;
    case 1: goto L_1144f970;
    case 2: goto L_1144f97c;
    case 3: goto L_1144f990;
    default: x86_unimpl("switch@0x1144f94f out of table"); return;
  }
  /* 1144f956 mov edi, edi */
  EDI = (EDI);
L_1144f968:;
  /* 1144f968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f96b pop esi */
  ESI = (pop32());
  /* 1144f96c pop edi */
  EDI = (pop32());
  /* 1144f96d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1144f96e ret  */
  ESPCHK(0x1144f810u, _esp0);
  ESP += 4; return;
  /* 1144f96f nop  */
  /* nop */
L_1144f970:;
  /* 1144f970 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1144f972 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1144f974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f977 pop esi */
  ESI = (pop32());
  /* 1144f978 pop edi */
  EDI = (pop32());
  /* 1144f979 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1144f97a ret  */
  ESPCHK(0x1144f810u, _esp0);
  ESP += 4; return;
  /* 1144f97b nop  */
  /* nop */
L_1144f97c:;
  /* 1144f97c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1144f97e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1144f980 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1144f983 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1144f986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f989 pop esi */
  ESI = (pop32());
  /* 1144f98a pop edi */
  EDI = (pop32());
  /* 1144f98b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1144f98c ret  */
  ESPCHK(0x1144f810u, _esp0);
  ESP += 4; return;
  /* 1144f98d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1144f990:;
  /* 1144f990 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1144f992 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1144f994 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1144f997 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1144f99a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1144f99d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1144f9a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144f9a3 pop esi */
  ESI = (pop32());
  /* 1144f9a4 pop edi */
  EDI = (pop32());
  /* 1144f9a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1144f9a6 ret  */
  ESPCHK(0x1144f810u, _esp0);
  ESP += 4; return;
  /* 1144f9a7 nop  */
  /* nop */
L_1144f9a8:;
  /* 1144f9a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1144f9ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1144f9b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1144f9b6 jne 0x1144f9dc */
  if (!C.zf) goto L_1144f9dc;
  /* 1144f9b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1144f9bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1144f9be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f9c1 jb 0x1144f9d0 */
  if (C.cf) goto L_1144f9d0;
  /* 1144f9c3 std  */
  C.df=1;
  /* 1144f9c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1144f9c6 cld  */
  C.df=0;
  /* 1144f9c7 jmp dword ptr [edx*4 + 0x1144faf0] */
  switch (EDX) {
    case 0: goto L_1144fb00;
    case 1: goto L_1144fb08;
    case 2: goto L_1144fb18;
    case 3: goto L_1144fb2c;
    default: x86_unimpl("switch@0x1144f9c7 out of table"); return;
  }
  /* 1144f9ce mov edi, edi */
  EDI = (EDI);
L_1144f9d0:;
  /* 1144f9d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1144f9d2 jmp dword ptr [ecx*4 + 0x1144faa0] */
  switch (ECX) {
    case 0: goto L_1144fae7;
    default: x86_unimpl("switch@0x1144f9d2 out of table"); return;
  }
  /* 1144f9d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1144f9dc:;
  /* 1144f9dc mov eax, edi */
  EAX = (EDI);
  /* 1144f9de mov edx, 3 */
  EDX = (0x3u);
  /* 1144f9e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144f9e6 jb 0x1144f9f4 */
  if (C.cf) goto L_1144f9f4;
  /* 1144f9e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1144f9eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144f9ed jmp dword ptr [eax*4 + 0x1144f9f8] */
  switch (EAX) {
    case 1: goto L_1144fa08;
    case 2: goto L_1144fa28;
    case 3: goto L_1144fa50;
    default: x86_unimpl("switch@0x1144f9ed out of table"); return;
  }
L_1144f9f4:;
  /* 1144f9f4 jmp dword ptr [ecx*4 + 0x1144faf0] */
  switch (ECX) {
    case 0: goto L_1144fb00;
    case 1: goto L_1144fb08;
    case 2: goto L_1144fb18;
    case 3: goto L_1144fb2c;
    default: x86_unimpl("switch@0x1144f9f4 out of table"); return;
  }
  /* 1144f9fb nop  */
  /* nop */
L_1144fa08:;
  /* 1144fa08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1144fa0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1144fa0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1144fa10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1144fa11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1144fa14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1144fa15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fa18 jb 0x1144f9d0 */
  if (C.cf) goto L_1144f9d0;
  /* 1144fa1a std  */
  C.df=1;
  /* 1144fa1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1144fa1d cld  */
  C.df=0;
  /* 1144fa1e jmp dword ptr [edx*4 + 0x1144faf0] */
  switch (EDX) {
    case 0: goto L_1144fb00;
    case 1: goto L_1144fb08;
    case 2: goto L_1144fb18;
    case 3: goto L_1144fb2c;
    default: x86_unimpl("switch@0x1144fa1e out of table"); return;
  }
  /* 1144fa25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1144fa28:;
  /* 1144fa28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1144fa2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1144fa2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1144fa30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1144fa33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1144fa36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1144fa39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144fa3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144fa3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fa42 jb 0x1144f9d0 */
  if (C.cf) goto L_1144f9d0;
  /* 1144fa44 std  */
  C.df=1;
  /* 1144fa45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1144fa47 cld  */
  C.df=0;
  /* 1144fa48 jmp dword ptr [edx*4 + 0x1144faf0] */
  switch (EDX) {
    case 0: goto L_1144fb00;
    case 1: goto L_1144fb08;
    case 2: goto L_1144fb18;
    case 3: goto L_1144fb2c;
    default: x86_unimpl("switch@0x1144fa48 out of table"); return;
  }
  /* 1144fa4f nop  */
  /* nop */
L_1144fa50:;
  /* 1144fa50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1144fa53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1144fa55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1144fa58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1144fa5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1144fa5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1144fa61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1144fa64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1144fa67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144fa6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144fa6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fa70 jb 0x1144f9d0 */
  if (C.cf) goto L_1144f9d0;
  /* 1144fa76 std  */
  C.df=1;
  /* 1144fa77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1144fa79 cld  */
  C.df=0;
  /* 1144fa7a jmp dword ptr [edx*4 + 0x1144faf0] */
  switch (EDX) {
    case 0: goto L_1144fb00;
    case 1: goto L_1144fb08;
    case 2: goto L_1144fb18;
    case 3: goto L_1144fb2c;
    default: x86_unimpl("switch@0x1144fa7a out of table"); return;
  }
  /* 1144fa81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1144fa84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1144fa85 cli  */
  x86_unimpl("cli @ 0x1144fa85");
  /* 1144fa86 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1144fa87 adc dword ptr [edx + edi*8 - 0x54beebc], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*8 + -0x54beebc))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*8 + -0x54beebc), (_r)); fl_add(_a,_b,_r,32); }
  /* 1144fa8e inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1144fa8f adc dword ptr [edx + edi*8 - 0x53beebc], edi */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*8 + -0x53beebc))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*8 + -0x53beebc), (_r)); fl_add(_a,_b,_r,32); }
  /* 1144fa96 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1144fa97 adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fa99 cli  */
  x86_unimpl("cli @ 0x1144fa99");
  /* 1144fa9a inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1144fa9b adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fa9d cli  */
  x86_unimpl("cli @ 0x1144fa9d");
  /* 1144fa9e inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1144faa4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1144faa8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1144faac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1144fab0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1144fab4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1144fab8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1144fabc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1144fac0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1144fac4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1144fac8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1144facc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1144fad0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1144fad4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1144fad8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1144fadc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1144fae3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fae5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1144fae7:;
  /* 1144fae7 jmp dword ptr [edx*4 + 0x1144faf0] */
  switch (EDX) {
    case 0: goto L_1144fb00;
    case 1: goto L_1144fb08;
    case 2: goto L_1144fb18;
    case 3: goto L_1144fb2c;
    default: x86_unimpl("switch@0x1144fae7 out of table"); return;
  }
  /* 1144faee mov edi, edi */
  EDI = (EDI);
L_1144fb00:;
  /* 1144fb00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fb03 pop esi */
  ESI = (pop32());
  /* 1144fb04 pop edi */
  EDI = (pop32());
  /* 1144fb05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1144fb06 ret  */
  ESPCHK(0x1144f810u, _esp0);
  ESP += 4; return;
  /* 1144fb07 nop  */
  /* nop */
L_1144fb08:;
  /* 1144fb08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1144fb0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1144fb0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fb11 pop esi */
  ESI = (pop32());
  /* 1144fb12 pop edi */
  EDI = (pop32());
  /* 1144fb13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1144fb14 ret  */
  ESPCHK(0x1144f810u, _esp0);
  ESP += 4; return;
  /* 1144fb15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1144fb18:;
  /* 1144fb18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1144fb1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1144fb1e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1144fb21 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1144fb24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fb27 pop esi */
  ESI = (pop32());
  /* 1144fb28 pop edi */
  EDI = (pop32());
  /* 1144fb29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1144fb2a ret  */
  ESPCHK(0x1144f810u, _esp0);
  ESP += 4; return;
  /* 1144fb2b nop  */
  /* nop */
L_1144fb2c:;
  /* 1144fb2c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1144fb2f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1144fb32 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1144fb35 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1144fb38 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1144fb3b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1144fb3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fb41 pop esi */
  ESI = (pop32());
  /* 1144fb42 pop edi */
  EDI = (pop32());
  /* 1144fb43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1144fb44 ret  */
  ESPCHK(0x1144f810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb50 @ 0x1144fb50 (255 bytes, 88 insns) */
void f_1144fb50(void) {
  FTRACE(0x1144fb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144fb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1144fb51 mov ebp, esp */
  EBP = (ESP);
  /* 1144fb53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_1144fb56:;
  /* 1144fb56 cmp dword ptr [0x11472fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11472fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fb5d jle 0x1144fb76 */
  if ((C.zf||C.sf!=C.of)) goto L_1144fb76;
  /* 1144fb5f push 8 */
  push32((uint32_t)(0x8u));
  /* 1144fb61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fb64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144fb66 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1144fb68 push ecx */
  push32((uint32_t)(ECX));
  /* 1144fb69 call 0x1144ef40 */
  push32(0x1144fb6eu); f_1144ef40();
  /* 1144fb6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fb71 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1144fb74 jmp 0x1144fb8f */
  goto L_1144fb8f;
L_1144fb76:;
  /* 1144fb76 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fb79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144fb7b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1144fb7d mov ecx, dword ptr [0x11472db8] */
  ECX = (r32((uint32_t)(0x11472db8)));
  /* 1144fb83 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144fb85 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1144fb89 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1144fb8c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1144fb8f:;
  /* 1144fb8f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fb93 je 0x1144fba0 */
  if (C.zf) goto L_1144fba0;
  /* 1144fb95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fb98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fb9b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1144fb9e jmp 0x1144fb56 */
  goto L_1144fb56;
L_1144fba0:;
  /* 1144fba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fba3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144fba5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1144fba7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1144fbaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fbad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fbb0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1144fbb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fbb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1144fbb9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fbbd je 0x1144fbc5 */
  if (C.zf) goto L_1144fbc5;
  /* 1144fbbf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fbc3 jne 0x1144fbd8 */
  if (!C.zf) goto L_1144fbd8;
L_1144fbc5:;
  /* 1144fbc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fbc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144fbca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1144fbcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144fbcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fbd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fbd5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1144fbd8:;
  /* 1144fbd8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1144fbdf:;
  /* 1144fbdf cmp dword ptr [0x11472fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11472fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fbe6 jle 0x1144fbfb */
  if ((C.zf||C.sf!=C.of)) goto L_1144fbfb;
  /* 1144fbe8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1144fbea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fbed push edx */
  push32((uint32_t)(EDX));
  /* 1144fbee call 0x1144ef40 */
  push32(0x1144fbf3u); f_1144ef40();
  /* 1144fbf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fbf6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1144fbf9 jmp 0x1144fc10 */
  goto L_1144fc10;
L_1144fbfb:;
  /* 1144fbfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fbfe mov ecx, dword ptr [0x11472db8] */
  ECX = (r32((uint32_t)(0x11472db8)));
  /* 1144fc04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144fc06 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1144fc0a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1144fc0d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1144fc10:;
  /* 1144fc10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fc14 je 0x1144fc3b */
  if (C.zf) goto L_1144fc3b;
  /* 1144fc16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144fc19 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1144fc1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fc1f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 1144fc23 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1144fc26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fc29 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144fc2b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1144fc2d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1144fc30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fc33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fc36 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1144fc39 jmp 0x1144fbdf */
  goto L_1144fbdf;
L_1144fc3b:;
  /* 1144fc3b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fc3f jne 0x1144fc48 */
  if (!C.zf) goto L_1144fc48;
  /* 1144fc41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144fc44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1144fc46 jmp 0x1144fc4b */
  goto L_1144fc4b;
L_1144fc48:;
  /* 1144fc48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1144fc4b:;
  /* 1144fc4b mov esp, ebp */
  ESP = (EBP);
  /* 1144fc4d pop ebp */
  EBP = (pop32());
  /* 1144fc4e ret  */
  ESPCHK(0x1144fb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc50 @ 0x1144fc50 (17 bytes, 8 insns) */
void f_1144fc50(void) {
  FTRACE(0x1144fc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144fc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1144fc51 mov ebp, esp */
  EBP = (ESP);
  /* 1144fc53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fc56 push eax */
  push32((uint32_t)(EAX));
  /* 1144fc57 call 0x1144fb50 */
  push32(0x1144fc5cu); f_1144fb50();
  /* 1144fc5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fc5f pop ebp */
  EBP = (pop32());
  /* 1144fc60 ret  */
  ESPCHK(0x1144fc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc70 @ 0x1144fc70 (297 bytes, 106 insns) */
void f_1144fc70(void) {
  FTRACE(0x1144fc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144fc70 push ebp */
  push32((uint32_t)(EBP));
  /* 1144fc71 mov ebp, esp */
  EBP = (ESP);
  /* 1144fc73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144fc76 push esi */
  push32((uint32_t)(ESI));
L_1144fc77:;
  /* 1144fc77 cmp dword ptr [0x11472fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11472fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fc7e jle 0x1144fc97 */
  if ((C.zf||C.sf!=C.of)) goto L_1144fc97;
  /* 1144fc80 push 8 */
  push32((uint32_t)(0x8u));
  /* 1144fc82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fc85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144fc87 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1144fc89 push ecx */
  push32((uint32_t)(ECX));
  /* 1144fc8a call 0x1144ef40 */
  push32(0x1144fc8fu); f_1144ef40();
  /* 1144fc8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fc92 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1144fc95 jmp 0x1144fcb0 */
  goto L_1144fcb0;
L_1144fc97:;
  /* 1144fc97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fc9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144fc9c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1144fc9e mov ecx, dword ptr [0x11472db8] */
  ECX = (r32((uint32_t)(0x11472db8)));
  /* 1144fca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144fca6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1144fcaa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1144fcad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1144fcb0:;
  /* 1144fcb0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fcb4 je 0x1144fcc1 */
  if (C.zf) goto L_1144fcc1;
  /* 1144fcb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fcb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fcbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1144fcbf jmp 0x1144fc77 */
  goto L_1144fc77;
L_1144fcc1:;
  /* 1144fcc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fcc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144fcc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1144fcc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1144fccb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fcce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fcd1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1144fcd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fcd7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1144fcda cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fcde je 0x1144fce6 */
  if (C.zf) goto L_1144fce6;
  /* 1144fce0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fce4 jne 0x1144fcf9 */
  if (!C.zf) goto L_1144fcf9;
L_1144fce6:;
  /* 1144fce6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fce9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144fceb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1144fced mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144fcf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fcf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fcf6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1144fcf9:;
  /* 1144fcf9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1144fd00 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1144fd07:;
  /* 1144fd07 cmp dword ptr [0x11472fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11472fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fd0e jle 0x1144fd23 */
  if ((C.zf||C.sf!=C.of)) goto L_1144fd23;
  /* 1144fd10 push 4 */
  push32((uint32_t)(0x4u));
  /* 1144fd12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fd15 push edx */
  push32((uint32_t)(EDX));
  /* 1144fd16 call 0x1144ef40 */
  push32(0x1144fd1bu); f_1144ef40();
  /* 1144fd1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fd1e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1144fd21 jmp 0x1144fd38 */
  goto L_1144fd38;
L_1144fd23:;
  /* 1144fd23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fd26 mov ecx, dword ptr [0x11472db8] */
  ECX = (r32((uint32_t)(0x11472db8)));
  /* 1144fd2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144fd2e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1144fd32 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1144fd35 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_1144fd38:;
  /* 1144fd38 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fd3c je 0x1144fd79 */
  if (C.zf) goto L_1144fd79;
  /* 1144fd3e push 0 */
  push32((uint32_t)(0x0u));
  /* 1144fd40 push 0xa */
  push32((uint32_t)(0xau));
  /* 1144fd42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144fd45 push eax */
  push32((uint32_t)(EAX));
  /* 1144fd46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144fd49 push ecx */
  push32((uint32_t)(ECX));
  /* 1144fd4a call 0x11451a60 */
  push32(0x1144fd4fu); f_11451a60();
  /* 1144fd4f mov ecx, eax */
  ECX = (EAX);
  /* 1144fd51 mov esi, edx */
  ESI = (EDX);
  /* 1144fd53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fd56 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144fd59 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1144fd5a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fd5c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fd5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1144fd61 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 1144fd64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fd67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144fd69 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1144fd6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144fd6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fd71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fd74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1144fd77 jmp 0x1144fd07 */
  goto L_1144fd07;
L_1144fd79:;
  /* 1144fd79 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fd7d jne 0x1144fd8e */
  if (!C.zf) goto L_1144fd8e;
  /* 1144fd7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144fd82 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1144fd84 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144fd87 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fd8a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1144fd8c jmp 0x1144fd94 */
  goto L_1144fd94;
L_1144fd8e:;
  /* 1144fd8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1144fd91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_1144fd94:;
  /* 1144fd94 pop esi */
  ESI = (pop32());
  /* 1144fd95 mov esp, ebp */
  ESP = (EBP);
  /* 1144fd97 pop ebp */
  EBP = (pop32());
  /* 1144fd98 ret  */
  ESPCHK(0x1144fc70u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1144fda0 (129 bytes, 56 insns) */
void f_1144fda0(void) {
  FTRACE(0x1144fda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144fda0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1144fda4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1144fda8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1144fdae jne 0x1144fdec */
  if (!C.zf) goto L_1144fdec;
L_1144fdb0:;
  /* 1144fdb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1144fdb2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1144fdb4 jne 0x1144fde4 */
  if (!C.zf) goto L_1144fde4;
  /* 1144fdb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1144fdb8 je 0x1144fde0 */
  if (C.zf) goto L_1144fde0;
  /* 1144fdba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1144fdbd jne 0x1144fde4 */
  if (!C.zf) goto L_1144fde4;
  /* 1144fdbf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1144fdc1 je 0x1144fde0 */
  if (C.zf) goto L_1144fde0;
  /* 1144fdc3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1144fdc6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1144fdc9 jne 0x1144fde4 */
  if (!C.zf) goto L_1144fde4;
  /* 1144fdcb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1144fdcd je 0x1144fde0 */
  if (C.zf) goto L_1144fde0;
  /* 1144fdcf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1144fdd2 jne 0x1144fde4 */
  if (!C.zf) goto L_1144fde4;
  /* 1144fdd4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fdd7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fdda or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1144fddc jne 0x1144fdb0 */
  if (!C.zf) goto L_1144fdb0;
  /* 1144fdde mov edi, edi */
  EDI = (EDI);
L_1144fde0:;
  /* 1144fde0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144fde2 ret  */
  ESPCHK(0x1144fda0u, _esp0);
  ESP += 4; return;
  /* 1144fde3 nop  */
  /* nop */
L_1144fde4:;
  /* 1144fde4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144fde6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1144fde8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1144fde9 ret  */
  ESPCHK(0x1144fda0u, _esp0);
  ESP += 4; return;
  /* 1144fdea mov edi, edi */
  EDI = (EDI);
L_1144fdec:;
  /* 1144fdec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1144fdf2 je 0x1144fe08 */
  if (C.zf) goto L_1144fe08;
  /* 1144fdf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1144fdf6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1144fdf7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1144fdf9 jne 0x1144fde4 */
  if (!C.zf) goto L_1144fde4;
  /* 1144fdfb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1144fdfc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1144fdfe je 0x1144fde0 */
  if (C.zf) goto L_1144fde0;
  /* 1144fe00 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1144fe06 je 0x1144fdb0 */
  if (C.zf) goto L_1144fdb0;
L_1144fe08:;
  /* 1144fe08 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1144fe0b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fe0e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1144fe10 jne 0x1144fde4 */
  if (!C.zf) goto L_1144fde4;
  /* 1144fe12 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1144fe14 je 0x1144fde0 */
  if (C.zf) goto L_1144fde0;
  /* 1144fe16 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1144fe19 jne 0x1144fde4 */
  if (!C.zf) goto L_1144fde4;
  /* 1144fe1b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1144fe1d je 0x1144fde0 */
  if (C.zf) goto L_1144fde0;
  /* 1144fe1f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fe22 jmp 0x1144fdb0 */
  goto L_1144fdb0;
}

/* FUN_1000fe30 @ 0x1144fe30 (46 bytes, 18 insns) */
void f_1144fe30(void) {
  FTRACE(0x1144fe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144fe30 push ebp */
  push32((uint32_t)(EBP));
  /* 1144fe31 mov ebp, esp */
  EBP = (ESP);
  /* 1144fe33 push ecx */
  push32((uint32_t)(ECX));
  /* 1144fe34 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1144fe36 call 0x1144b210 */
  push32(0x1144fe3bu); f_1144b210();
  /* 1144fe3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fe3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fe41 push eax */
  push32((uint32_t)(EAX));
  /* 1144fe42 call 0x1144fe60 */
  push32(0x1144fe47u); f_1144fe60();
  /* 1144fe47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fe4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1144fe4d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1144fe4f call 0x1144b2b0 */
  push32(0x1144fe54u); f_1144b2b0();
  /* 1144fe54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fe57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fe5a mov esp, ebp */
  ESP = (EBP);
  /* 1144fe5c pop ebp */
  EBP = (pop32());
  /* 1144fe5d ret  */
  ESPCHK(0x1144fe30u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x1144fe60 (198 bytes, 69 insns) */
void f_1144fe60(void) {
  FTRACE(0x1144fe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144fe60 push ebp */
  push32((uint32_t)(EBP));
  /* 1144fe61 mov ebp, esp */
  EBP = (ESP);
  /* 1144fe63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144fe66 mov eax, dword ptr [0x114748c0] */
  EAX = (r32((uint32_t)(0x114748c0)));
  /* 1144fe6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1144fe6e cmp dword ptr [0x114763c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114763c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fe75 jne 0x1144fe7e */
  if (!C.zf) goto L_1144fe7e;
  /* 1144fe77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144fe79 jmp 0x1144ff22 */
  goto L_1144ff22;
L_1144fe7e:;
  /* 1144fe7e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fe82 jne 0x1144fea6 */
  if (!C.zf) goto L_1144fea6;
  /* 1144fe84 cmp dword ptr [0x114748c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114748c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fe8b je 0x1144fea6 */
  if (C.zf) goto L_1144fea6;
  /* 1144fe8d call 0x11451af0 */
  push32(0x1144fe92u); f_11451af0();
  /* 1144fe92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144fe94 je 0x1144fe9d */
  if (C.zf) goto L_1144fe9d;
  /* 1144fe96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144fe98 jmp 0x1144ff22 */
  goto L_1144ff22;
L_1144fe9d:;
  /* 1144fe9d mov ecx, dword ptr [0x114748c0] */
  ECX = (r32((uint32_t)(0x114748c0)));
  /* 1144fea3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1144fea6:;
  /* 1144fea6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144feaa je 0x1144ff20 */
  if (C.zf) goto L_1144ff20;
  /* 1144feac cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144feb0 je 0x1144ff20 */
  if (C.zf) goto L_1144ff20;
  /* 1144feb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144feb5 push edx */
  push32((uint32_t)(EDX));
  /* 1144feb6 call 0x1144c140 */
  push32(0x1144febbu); f_1144c140();
  /* 1144febb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144febe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1144fec1:;
  /* 1144fec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144fec4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fec7 je 0x1144ff20 */
  if (C.zf) goto L_1144ff20;
  /* 1144fec9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144fecc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1144fece push edx */
  push32((uint32_t)(EDX));
  /* 1144fecf call 0x1144c140 */
  push32(0x1144fed4u); f_1144c140();
  /* 1144fed4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144fed7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144feda jbe 0x1144ff15 */
  if ((C.cf||C.zf)) goto L_1144ff15;
  /* 1144fedc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144fedf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144fee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fee4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 1144fee8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144feeb jne 0x1144ff15 */
  if (!C.zf) goto L_1144ff15;
  /* 1144feed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144fef0 push ecx */
  push32((uint32_t)(ECX));
  /* 1144fef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1144fef4 push edx */
  push32((uint32_t)(EDX));
  /* 1144fef5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144fef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1144fefa push ecx */
  push32((uint32_t)(ECX));
  /* 1144fefb call 0x11451aa0 */
  push32(0x1144ff00u); f_11451aa0();
  /* 1144ff00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ff03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1144ff05 jne 0x1144ff15 */
  if (!C.zf) goto L_1144ff15;
  /* 1144ff07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144ff0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1144ff0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1144ff0f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 1144ff13 jmp 0x1144ff22 */
  goto L_1144ff22;
L_1144ff15:;
  /* 1144ff15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1144ff18 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ff1b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1144ff1e jmp 0x1144fec1 */
  goto L_1144fec1;
L_1144ff20:;
  /* 1144ff20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1144ff22:;
  /* 1144ff22 mov esp, ebp */
  ESP = (EBP);
  /* 1144ff24 pop ebp */
  EBP = (pop32());
  /* 1144ff25 ret  */
  ESPCHK(0x1144fe60u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1144ff30 (104 bytes, 43 insns) */
void f_1144ff30(void) {
  FTRACE(0x1144ff30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144ff30 push ebx */
  push32((uint32_t)(EBX));
  /* 1144ff31 push esi */
  push32((uint32_t)(ESI));
  /* 1144ff32 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1144ff36 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ff38 jne 0x1144ff52 */
  if (!C.zf) goto L_1144ff52;
  /* 1144ff3a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1144ff3e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1144ff42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144ff44 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1144ff46 mov ebx, eax */
  EBX = (EAX);
  /* 1144ff48 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1144ff4c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1144ff4e mov edx, ebx */
  EDX = (EBX);
  /* 1144ff50 jmp 0x1144ff93 */
  goto L_1144ff93;
L_1144ff52:;
  /* 1144ff52 mov ecx, eax */
  ECX = (EAX);
  /* 1144ff54 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1144ff58 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1144ff5c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1144ff60:;
  /* 1144ff60 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1144ff62 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1144ff64 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1144ff66 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1144ff68 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144ff6a jne 0x1144ff60 */
  if (!C.zf) goto L_1144ff60;
  /* 1144ff6c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1144ff6e mov esi, eax */
  ESI = (EAX);
  /* 1144ff70 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1144ff74 mov ecx, eax */
  ECX = (EAX);
  /* 1144ff76 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1144ff7a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1144ff7c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ff7e jb 0x1144ff8e */
  if (C.cf) goto L_1144ff8e;
  /* 1144ff80 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ff84 ja 0x1144ff8e */
  if ((!C.cf&&!C.zf)) goto L_1144ff8e;
  /* 1144ff86 jb 0x1144ff8f */
  if (C.cf) goto L_1144ff8f;
  /* 1144ff88 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144ff8c jbe 0x1144ff8f */
  if ((C.cf||C.zf)) goto L_1144ff8f;
L_1144ff8e:;
  /* 1144ff8e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1144ff8f:;
  /* 1144ff8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144ff91 mov eax, esi */
  EAX = (ESI);
L_1144ff93:;
  /* 1144ff93 pop esi */
  ESI = (pop32());
  /* 1144ff94 pop ebx */
  EBX = (pop32());
  /* 1144ff95 ret 0x10 */
  ESPCHK(0x1144ff30u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1144ffa0 (117 bytes, 44 insns) */
void f_1144ffa0(void) {
  FTRACE(0x1144ffa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1144ffa0 push ebx */
  push32((uint32_t)(EBX));
  /* 1144ffa1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1144ffa5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1144ffa7 jne 0x1144ffc1 */
  if (!C.zf) goto L_1144ffc1;
  /* 1144ffa9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1144ffad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1144ffb1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144ffb3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1144ffb5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1144ffb9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1144ffbb mov eax, edx */
  EAX = (EDX);
  /* 1144ffbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1144ffbf jmp 0x11450011 */
  goto L_11450011;
L_1144ffc1:;
  /* 1144ffc1 mov ecx, eax */
  ECX = (EAX);
  /* 1144ffc3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1144ffc7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1144ffcb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1144ffcf:;
  /* 1144ffcf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1144ffd1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1144ffd3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1144ffd5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1144ffd7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1144ffd9 jne 0x1144ffcf */
  if (!C.zf) goto L_1144ffcf;
  /* 1144ffdb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1144ffdd mov ecx, eax */
  ECX = (EAX);
  /* 1144ffdf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1144ffe3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1144ffe4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1144ffe8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1144ffea jb 0x1144fffa */
  if (C.cf) goto L_1144fffa;
  /* 1144ffec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fff0 ja 0x1144fffa */
  if ((!C.cf&&!C.zf)) goto L_1144fffa;
  /* 1144fff2 jb 0x11450002 */
  if (C.cf) goto L_11450002;
  /* 1144fff4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1144fff8 jbe 0x11450002 */
  if ((C.cf||C.zf)) goto L_11450002;
L_1144fffa:;
  /* 1144fffa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1144fffe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11450002:;
  /* 11450002 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450006 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145000a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1145000c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1145000e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11450011:;
  /* 11450011 pop ebx */
  EBX = (pop32());
  /* 11450012 ret 0x10 */
  ESPCHK(0x1144ffa0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010020 @ 0x11450020 (628 bytes, 214 insns) */
void f_11450020(void) {
  FTRACE(0x11450020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11450020 push ebp */
  push32((uint32_t)(EBP));
  /* 11450021 mov ebp, esp */
  EBP = (ESP);
  /* 11450023 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450026 push ebx */
  push32((uint32_t)(EBX));
  /* 11450027 push esi */
  push32((uint32_t)(ESI));
  /* 11450028 push edi */
  push32((uint32_t)(EDI));
L_11450029:;
  /* 11450029 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145002d jne 0x1145004d */
  if (!C.zf) goto L_1145004d;
  /* 1145002f push 0x114708a4 */
  push32((uint32_t)(0x114708a4u));
  /* 11450034 push 0 */
  push32((uint32_t)(0x0u));
  /* 11450036 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11450038 push 0x11470898 */
  push32((uint32_t)(0x11470898u));
  /* 1145003d push 2 */
  push32((uint32_t)(0x2u));
  /* 1145003f call 0x11447960 */
  push32(0x11450044u); f_11447960();
  /* 11450044 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450047 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145004a jne 0x1145004d */
  if (!C.zf) goto L_1145004d;
  /* 1145004c int3  */
  x86_unimpl("int3 @ 0x1145004c");
L_1145004d:;
  /* 1145004d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145004f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450051 jne 0x11450029 */
  if (!C.zf) goto L_11450029;
  /* 11450053 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11450056 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11450059 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145005c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1145005f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11450062 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450065 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11450068 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1145006e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450070 je 0x1145007f */
  if (C.zf) goto L_1145007f;
  /* 11450072 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450075 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11450078 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1145007b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1145007d je 0x11450095 */
  if (C.zf) goto L_11450095;
L_1145007f:;
  /* 1145007f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450082 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11450085 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11450087 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145008a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1145008d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11450090 jmp 0x1145028d */
  goto L_1145028d;
L_11450095:;
  /* 11450095 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450098 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1145009b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1145009e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114500a0 je 0x114500ec */
  if (C.zf) goto L_114500ec;
  /* 114500a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500a5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114500ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500af mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 114500b2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 114500b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114500b7 je 0x114500d5 */
  if (C.zf) goto L_114500d5;
  /* 114500b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500bf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114500c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114500c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114500ca and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 114500cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500d0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 114500d3 jmp 0x114500ec */
  goto L_114500ec;
L_114500d5:;
  /* 114500d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500d8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114500db or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 114500de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500e1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 114500e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114500e7 jmp 0x1145028d */
  goto L_1145028d;
L_114500ec:;
  /* 114500ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114500f2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114500f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500f8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 114500fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114500fe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11450101 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11450104 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450107 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1145010a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145010d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11450114 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1145011b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145011e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11450121 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450124 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11450127 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1145012d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1145012f jne 0x1145015f */
  if (!C.zf) goto L_1145015f;
  /* 11450131 cmp dword ptr [ebp - 8], 0x11473260 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11473260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450138 je 0x11450143 */
  if (C.zf) goto L_11450143;
  /* 1145013a cmp dword ptr [ebp - 8], 0x11473280 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11473280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450141 jne 0x11450153 */
  if (!C.zf) goto L_11450153;
L_11450143:;
  /* 11450143 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11450146 push edx */
  push32((uint32_t)(EDX));
  /* 11450147 call 0x114520d0 */
  push32(0x1145014cu); f_114520d0();
  /* 1145014c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145014f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450151 jne 0x1145015f */
  if (!C.zf) goto L_1145015f;
L_11450153:;
  /* 11450153 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450156 push eax */
  push32((uint32_t)(EAX));
  /* 11450157 call 0x11452000 */
  push32(0x1145015cu); f_11452000();
  /* 1145015c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1145015f:;
  /* 1145015f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450162 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11450165 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1145016b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1145016d je 0x1145024b */
  if (C.zf) goto L_1145024b;
L_11450173:;
  /* 11450173 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450176 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450179 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1145017b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145017e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450180 jge 0x114501a3 */
  if ((C.sf==C.of)) goto L_114501a3;
  /* 11450182 push 0x11470858 */
  push32((uint32_t)(0x11470858u));
  /* 11450187 push 0 */
  push32((uint32_t)(0x0u));
  /* 11450189 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1145018e push 0x11470898 */
  push32((uint32_t)(0x11470898u));
  /* 11450193 push 2 */
  push32((uint32_t)(0x2u));
  /* 11450195 call 0x11447960 */
  push32(0x1145019au); f_11447960();
  /* 1145019a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145019d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114501a0 jne 0x114501a3 */
  if (!C.zf) goto L_114501a3;
  /* 114501a2 int3  */
  x86_unimpl("int3 @ 0x114501a2");
L_114501a3:;
  /* 114501a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114501a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114501a7 jne 0x11450173 */
  if (!C.zf) goto L_11450173;
  /* 114501a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114501ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114501af mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 114501b1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114501b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114501b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114501ba mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114501bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114501c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114501c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114501c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114501c8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 114501cb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114501ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114501d1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114501d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114501d8 jle 0x114501f6 */
  if ((C.zf||C.sf!=C.of)) goto L_114501f6;
  /* 114501da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114501dd push ecx */
  push32((uint32_t)(ECX));
  /* 114501de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114501e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114501e4 push eax */
  push32((uint32_t)(EAX));
  /* 114501e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114501e8 push ecx */
  push32((uint32_t)(ECX));
  /* 114501e9 call 0x11451cf0 */
  push32(0x114501eeu); f_11451cf0();
  /* 114501ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114501f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 114501f4 jmp 0x1145023e */
  goto L_1145023e;
L_114501f6:;
  /* 114501f6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114501fa je 0x11450219 */
  if (C.zf) goto L_11450219;
  /* 114501fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114501ff sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11450202 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11450205 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11450208 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145020b mov ecx, dword ptr [edx*4 + 0x11476280] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11476280)));
  /* 11450212 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11450214 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11450217 jmp 0x11450220 */
  goto L_11450220;
L_11450219:;
  /* 11450219 mov dword ptr [ebp - 0x14], 0x11472a60 */
  w32((uint32_t)(EBP + -0x14), (0x11472a60u));
L_11450220:;
  /* 11450220 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11450223 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11450227 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1145022a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145022c je 0x1145023e */
  if (C.zf) goto L_1145023e;
  /* 1145022e push 2 */
  push32((uint32_t)(0x2u));
  /* 11450230 push 0 */
  push32((uint32_t)(0x0u));
  /* 11450232 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11450235 push ecx */
  push32((uint32_t)(ECX));
  /* 11450236 call 0x11451ba0 */
  push32(0x1145023bu); f_11451ba0();
  /* 1145023b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1145023e:;
  /* 1145023e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450241 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11450244 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11450247 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11450249 jmp 0x11450269 */
  goto L_11450269;
L_1145024b:;
  /* 1145024b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11450252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450255 push edx */
  push32((uint32_t)(EDX));
  /* 11450256 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11450259 push eax */
  push32((uint32_t)(EAX));
  /* 1145025a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1145025d push ecx */
  push32((uint32_t)(ECX));
  /* 1145025e call 0x11451cf0 */
  push32(0x11450263u); f_11451cf0();
  /* 11450263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450266 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11450269:;
  /* 11450269 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145026c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145026f je 0x11450285 */
  if (C.zf) goto L_11450285;
  /* 11450271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450274 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11450277 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1145027a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145027d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11450280 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11450283 jmp 0x1145028d */
  goto L_1145028d;
L_11450285:;
  /* 11450285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11450288 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1145028d:;
  /* 1145028d pop edi */
  EDI = (pop32());
  /* 1145028e pop esi */
  ESI = (pop32());
  /* 1145028f pop ebx */
  EBX = (pop32());
  /* 11450290 mov esp, ebp */
  ESP = (EBP);
  /* 11450292 pop ebp */
  EBP = (pop32());
  /* 11450293 ret  */
  ESPCHK(0x11450020u, _esp0);
  ESP += 4; return;
}

/* FUN_100102a0 @ 0x114502a0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_114502a0(void) {
  FTRACE(0x114502a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114502a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114502a1 mov ebp, esp */
  EBP = (ESP);
  /* 114502a3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114502a9 push ebx */
  push32((uint32_t)(EBX));
  /* 114502aa push esi */
  push32((uint32_t)(ESI));
  /* 114502ab push edi */
  push32((uint32_t)(EDI));
  /* 114502ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 114502b3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 114502bd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_114502c4:;
  /* 114502c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114502c7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114502c9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 114502cc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114502d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114502d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114502d6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 114502d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114502db je 0x11450eb7 */
  if (C.zf) goto L_11450eb7;
  /* 114502e1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114502e8 jl 0x11450eb7 */
  if ((C.sf!=C.of)) goto L_11450eb7;
  /* 114502ee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114502f2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114502f5 jl 0x11450316 */
  if ((C.sf!=C.of)) goto L_11450316;
  /* 114502f7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114502fb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114502fe jg 0x11450316 */
  if ((!C.zf&&C.sf==C.of)) goto L_11450316;
  /* 11450300 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11450304 movsx ecx, byte ptr [eax + 0x11470890] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11470890))));
  /* 1145030b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1145030e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11450314 jmp 0x11450320 */
  goto L_11450320;
L_11450316:;
  /* 11450316 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11450320:;
  /* 11450320 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11450326 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11450329 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145032c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1145032f movsx edx, byte ptr [ecx + eax*8 + 0x114708b0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x114708b0))));
  /* 11450337 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1145033a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1145033d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11450340 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11450346 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145034d ja 0x11450eb2 */
  if ((!C.cf&&!C.zf)) goto L_11450eb2;
  /* 11450353 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11450359 jmp dword ptr [ecx*4 + 0x11450ec4] */
  switch (ECX) {
    case 0: goto L_11450360;
    case 1: goto L_114503fa;
    case 2: goto L_1145043c;
    case 3: goto L_114504ab;
    case 4: goto L_11450503;
    case 5: goto L_11450512;
    case 6: goto L_1145055e;
    case 7: goto L_114505f1;
    case 8: goto L_11450488;
    case 9: goto L_11450493;
    case 10: goto L_1145047e;
    case 11: goto L_11450473;
    case 12: goto L_1145049e;
    case 13: goto L_114504a6;
    default: x86_unimpl("switch@0x11450359 out of table"); return;
  }
L_11450360:;
  /* 11450360 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11450367 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1145036a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11450370 mov eax, dword ptr [0x11472db8] */
  EAX = (r32((uint32_t)(0x11472db8)));
  /* 11450375 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11450377 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1145037b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11450381 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11450383 je 0x114503dd */
  if (C.zf) goto L_114503dd;
  /* 11450385 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1145038b push edx */
  push32((uint32_t)(EDX));
  /* 1145038c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145038f push eax */
  push32((uint32_t)(EAX));
  /* 11450390 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11450394 push ecx */
  push32((uint32_t)(ECX));
  /* 11450395 call 0x11450fd0 */
  push32(0x1145039au); f_11450fd0();
  /* 1145039a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145039d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114503a0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114503a2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 114503a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114503a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114503ab mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_114503ae:;
  /* 114503ae movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114503b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114503b4 jne 0x114503d7 */
  if (!C.zf) goto L_114503d7;
  /* 114503b6 push 0x11470930 */
  push32((uint32_t)(0x11470930u));
  /* 114503bb push 0 */
  push32((uint32_t)(0x0u));
  /* 114503bd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 114503c2 push 0x11470924 */
  push32((uint32_t)(0x11470924u));
  /* 114503c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114503c9 call 0x11447960 */
  push32(0x114503ceu); f_11447960();
  /* 114503ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114503d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114503d4 jne 0x114503d7 */
  if (!C.zf) goto L_114503d7;
  /* 114503d6 int3  */
  x86_unimpl("int3 @ 0x114503d6");
L_114503d7:;
  /* 114503d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114503d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114503db jne 0x114503ae */
  if (!C.zf) goto L_114503ae;
L_114503dd:;
  /* 114503dd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 114503e3 push ecx */
  push32((uint32_t)(ECX));
  /* 114503e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114503e7 push edx */
  push32((uint32_t)(EDX));
  /* 114503e8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114503ec push eax */
  push32((uint32_t)(EAX));
  /* 114503ed call 0x11450fd0 */
  push32(0x114503f2u); f_11450fd0();
  /* 114503f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114503f5 jmp 0x11450eb2 */
  goto L_11450eb2;
L_114503fa:;
  /* 114503fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11450401 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450404 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1145040a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11450410 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11450416 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1145041c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1145041f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11450426 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11450430 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11450437 jmp 0x11450eb2 */
  goto L_11450eb2;
L_1145043c:;
  /* 1145043c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11450440 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11450446 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1145044c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145044f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11450455 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145045c ja 0x114504a6 */
  if ((!C.cf&&!C.zf)) goto L_114504a6;
  /* 1145045e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11450464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11450466 mov al, byte ptr [ecx + 0x11450efc] */
  AL = (r8((uint32_t)(ECX + 0x11450efc)));
  /* 1145046c jmp dword ptr [eax*4 + 0x11450ee4] */
  switch (EAX) {
    case 0: goto L_11450488;
    case 1: goto L_11450493;
    case 2: goto L_1145047e;
    case 3: goto L_11450473;
    case 4: goto L_1145049e;
    case 5: goto L_114504a6;
    default: x86_unimpl("switch@0x1145046c out of table"); return;
  }
L_11450473:;
  /* 11450473 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450476 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11450479 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1145047c jmp 0x114504a6 */
  goto L_114504a6;
L_1145047e:;
  /* 1145047e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450481 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11450483 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11450486 jmp 0x114504a6 */
  goto L_114504a6;
L_11450488:;
  /* 11450488 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145048b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1145048e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11450491 jmp 0x114504a6 */
  goto L_114504a6;
L_11450493:;
  /* 11450493 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450496 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11450499 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1145049c jmp 0x114504a6 */
  goto L_114504a6;
L_1145049e:;
  /* 1145049e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114504a1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 114504a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114504a6:;
  /* 114504a6 jmp 0x11450eb2 */
  goto L_11450eb2;
L_114504ab:;
  /* 114504ab movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114504af cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114504b2 jne 0x114504e7 */
  if (!C.zf) goto L_114504e7;
  /* 114504b4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 114504b7 push edx */
  push32((uint32_t)(EDX));
  /* 114504b8 call 0x114510e0 */
  push32(0x114504bdu); f_114510e0();
  /* 114504bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114504c0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 114504c6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114504cd jge 0x114504e5 */
  if ((C.sf==C.of)) goto L_114504e5;
  /* 114504cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114504d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 114504d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114504d7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 114504dd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114504df mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_114504e5:;
  /* 114504e5 jmp 0x114504fe */
  goto L_114504fe;
L_114504e7:;
  /* 114504e7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 114504ed imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114504f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114504f4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 114504f8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_114504fe:;
  /* 114504fe jmp 0x11450eb2 */
  goto L_11450eb2;
L_11450503:;
  /* 11450503 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1145050d jmp 0x11450eb2 */
  goto L_11450eb2;
L_11450512:;
  /* 11450512 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11450516 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450519 jne 0x11450542 */
  if (!C.zf) goto L_11450542;
  /* 1145051b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1145051e push eax */
  push32((uint32_t)(EAX));
  /* 1145051f call 0x114510e0 */
  push32(0x11450524u); f_114510e0();
  /* 11450524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450527 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1145052d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450534 jge 0x11450540 */
  if ((C.sf==C.of)) goto L_11450540;
  /* 11450536 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11450540:;
  /* 11450540 jmp 0x11450559 */
  goto L_11450559;
L_11450542:;
  /* 11450542 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11450548 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145054b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1145054f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11450553 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11450559:;
  /* 11450559 jmp 0x11450eb2 */
  goto L_11450eb2;
L_1145055e:;
  /* 1145055e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11450562 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11450568 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1145056e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450571 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11450577 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145057e ja 0x114505ec */
  if ((!C.cf&&!C.zf)) goto L_114505ec;
  /* 11450580 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11450586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11450588 mov al, byte ptr [ecx + 0x11450f21] */
  AL = (r8((uint32_t)(ECX + 0x11450f21)));
  /* 1145058e jmp dword ptr [eax*4 + 0x11450f0d] */
  switch (EAX) {
    case 0: goto L_114505a0;
    case 1: goto L_114505d9;
    case 2: goto L_11450595;
    case 3: goto L_114505e3;
    case 4: goto L_114505ec;
    default: x86_unimpl("switch@0x1145058e out of table"); return;
  }
L_11450595:;
  /* 11450595 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450598 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1145059b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1145059e jmp 0x114505ec */
  goto L_114505ec;
L_114505a0:;
  /* 114505a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114505a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114505a6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114505a9 jne 0x114505cb */
  if (!C.zf) goto L_114505cb;
  /* 114505ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114505ae movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114505b2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114505b5 jne 0x114505cb */
  if (!C.zf) goto L_114505cb;
  /* 114505b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114505ba add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114505bd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114505c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114505c3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 114505c6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114505c9 jmp 0x114505d7 */
  goto L_114505d7;
L_114505cb:;
  /* 114505cb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 114505d2 jmp 0x11450360 */
  goto L_11450360;
L_114505d7:;
  /* 114505d7 jmp 0x114505ec */
  goto L_114505ec;
L_114505d9:;
  /* 114505d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114505dc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 114505de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114505e1 jmp 0x114505ec */
  goto L_114505ec;
L_114505e3:;
  /* 114505e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114505e6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114505e9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114505ec:;
  /* 114505ec jmp 0x11450eb2 */
  goto L_11450eb2;
L_114505f1:;
  /* 114505f1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 114505f5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 114505fb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11450601 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450604 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1145060a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450611 ja 0x11450cd7 */
  if ((!C.cf&&!C.zf)) goto L_11450cd7;
  /* 11450617 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1145061d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1145061f mov cl, byte ptr [edx + 0x11450f8c] */
  CL = (r8((uint32_t)(EDX + 0x11450f8c)));
  /* 11450625 jmp dword ptr [ecx*4 + 0x11450f50] */
  switch (ECX) {
    case 0: goto L_1145062c;
    case 1: goto L_114508c0;
    case 2: goto L_11450750;
    case 3: goto L_114509f9;
    case 4: goto L_114506bb;
    case 5: goto L_11450641;
    case 6: goto L_114509cb;
    case 7: goto L_114508d0;
    case 8: goto L_11450875;
    case 9: goto L_11450a45;
    case 10: goto L_114509ef;
    case 11: goto L_11450766;
    case 12: goto L_114509e3;
    case 13: goto L_11450a05;
    case 14: goto L_11450cd7;
    default: x86_unimpl("switch@0x11450625 out of table"); return;
  }
L_1145062c:;
  /* 1145062c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145062f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11450634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450636 jne 0x11450641 */
  if (!C.zf) goto L_11450641;
  /* 11450638 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145063b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1145063e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11450641:;
  /* 11450641 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450644 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1145064a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1145064c je 0x11450687 */
  if (C.zf) goto L_11450687;
  /* 1145064e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11450651 push eax */
  push32((uint32_t)(EAX));
  /* 11450652 call 0x11451120 */
  push32(0x11450657u); f_11451120();
  /* 11450657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145065a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1145065e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11450662 push ecx */
  push32((uint32_t)(ECX));
  /* 11450663 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11450669 push edx */
  push32((uint32_t)(EDX));
  /* 1145066a call 0x11452340 */
  push32(0x1145066fu); f_11452340();
  /* 1145066f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450672 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11450675 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450679 jge 0x11450685 */
  if ((C.sf==C.of)) goto L_11450685;
  /* 1145067b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11450685:;
  /* 11450685 jmp 0x114506ad */
  goto L_114506ad;
L_11450687:;
  /* 11450687 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1145068a push eax */
  push32((uint32_t)(EAX));
  /* 1145068b call 0x114510e0 */
  push32(0x11450690u); f_114510e0();
  /* 11450690 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450693 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1145069a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 114506a0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 114506a6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_114506ad:;
  /* 114506ad lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 114506b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114506b6 jmp 0x11450cd7 */
  goto L_11450cd7;
L_114506bb:;
  /* 114506bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 114506be push eax */
  push32((uint32_t)(EAX));
  /* 114506bf call 0x114510e0 */
  push32(0x114506c4u); f_114510e0();
  /* 114506c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114506c7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 114506cd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114506d4 je 0x114506e2 */
  if (C.zf) goto L_114506e2;
  /* 114506d6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 114506dc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114506e0 jne 0x114506fc */
  if (!C.zf) goto L_114506fc;
L_114506e2:;
  /* 114506e2 mov edx, dword ptr [0x114730d0] */
  EDX = (r32((uint32_t)(0x114730d0)));
  /* 114506e8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 114506eb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114506ee push eax */
  push32((uint32_t)(EAX));
  /* 114506ef call 0x1144c140 */
  push32(0x114506f4u); f_1144c140();
  /* 114506f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114506f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114506fa jmp 0x1145074b */
  goto L_1145074b;
L_114506fc:;
  /* 114506fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114506ff and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11450705 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11450707 je 0x1145072c */
  if (C.zf) goto L_1145072c;
  /* 11450709 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1145070f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11450712 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11450715 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1145071b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1145071e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11450720 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11450723 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1145072a jmp 0x1145074b */
  goto L_1145074b;
L_1145072c:;
  /* 1145072c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11450733 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11450739 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1145073c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1145073f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11450745 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11450748 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1145074b:;
  /* 1145074b jmp 0x11450cd7 */
  goto L_11450cd7;
L_11450750:;
  /* 11450750 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450753 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11450759 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1145075b jne 0x11450766 */
  if (!C.zf) goto L_11450766;
  /* 1145075d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450760 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11450763 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11450766:;
  /* 11450766 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145076d jne 0x1145077b */
  if (!C.zf) goto L_1145077b;
  /* 1145076f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11450779 jmp 0x11450787 */
  goto L_11450787;
L_1145077b:;
  /* 1145077b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11450781 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11450787:;
  /* 11450787 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1145078d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11450793 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11450796 push edx */
  push32((uint32_t)(EDX));
  /* 11450797 call 0x114510e0 */
  push32(0x1145079cu); f_114510e0();
  /* 1145079c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145079f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114507a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114507a5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 114507aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114507ac je 0x11450816 */
  if (C.zf) goto L_11450816;
  /* 114507ae cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114507b2 jne 0x114507bd */
  if (!C.zf) goto L_114507bd;
  /* 114507b4 mov ecx, dword ptr [0x114730d4] */
  ECX = (r32((uint32_t)(0x114730d4)));
  /* 114507ba mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_114507bd:;
  /* 114507bd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 114507c4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114507c7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_114507cd:;
  /* 114507cd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 114507d3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 114507d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114507dc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 114507e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114507e4 je 0x11450806 */
  if (C.zf) goto L_11450806;
  /* 114507e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 114507ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114507ee mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 114507f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114507f3 je 0x11450806 */
  if (C.zf) goto L_11450806;
  /* 114507f5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 114507fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114507fe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11450804 jmp 0x114507cd */
  goto L_114507cd;
L_11450806:;
  /* 11450806 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1145080c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145080f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11450811 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11450814 jmp 0x11450870 */
  goto L_11450870;
L_11450816:;
  /* 11450816 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145081a jne 0x11450824 */
  if (!C.zf) goto L_11450824;
  /* 1145081c mov eax, dword ptr [0x114730d0] */
  EAX = (r32((uint32_t)(0x114730d0)));
  /* 11450821 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11450824:;
  /* 11450824 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450827 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1145082d:;
  /* 1145082d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11450833 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11450839 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145083c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11450842 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450844 je 0x11450864 */
  if (C.zf) goto L_11450864;
  /* 11450846 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1145084c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1145084f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450851 je 0x11450864 */
  if (C.zf) goto L_11450864;
  /* 11450853 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11450859 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145085c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11450862 jmp 0x1145082d */
  goto L_1145082d;
L_11450864:;
  /* 11450864 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1145086a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145086d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11450870:;
  /* 11450870 jmp 0x11450cd7 */
  goto L_11450cd7;
L_11450875:;
  /* 11450875 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11450878 push edx */
  push32((uint32_t)(EDX));
  /* 11450879 call 0x114510e0 */
  push32(0x1145087eu); f_114510e0();
  /* 1145087e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450881 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11450887 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145088a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1145088d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145088f je 0x114508a3 */
  if (C.zf) goto L_114508a3;
  /* 11450891 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11450897 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1145089e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 114508a1 jmp 0x114508b1 */
  goto L_114508b1;
L_114508a3:;
  /* 114508a3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 114508a9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 114508af mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_114508b1:;
  /* 114508b1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 114508bb jmp 0x11450cd7 */
  goto L_11450cd7;
L_114508c0:;
  /* 114508c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 114508c7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 114508ca add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 114508cd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_114508d0:;
  /* 114508d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114508d3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 114508d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114508d8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 114508de mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 114508e1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114508e8 jge 0x114508f6 */
  if ((C.sf==C.of)) goto L_114508f6;
  /* 114508ea mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 114508f4 jmp 0x11450912 */
  goto L_11450912;
L_114508f6:;
  /* 114508f6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114508fd jne 0x11450912 */
  if (!C.zf) goto L_11450912;
  /* 114508ff movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11450903 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450906 jne 0x11450912 */
  if (!C.zf) goto L_11450912;
  /* 11450908 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11450912:;
  /* 11450912 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11450915 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11450918 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1145091b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145091e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450921 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11450923 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11450926 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1145092c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11450932 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11450935 push ecx */
  push32((uint32_t)(ECX));
  /* 11450936 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1145093c push edx */
  push32((uint32_t)(EDX));
  /* 1145093d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11450941 push eax */
  push32((uint32_t)(EAX));
  /* 11450942 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450945 push ecx */
  push32((uint32_t)(ECX));
  /* 11450946 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1145094c push edx */
  push32((uint32_t)(EDX));
  /* 1145094d call dword ptr [0x114734c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114734c0))), 0x11450953u);
  /* 11450953 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450959 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1145095e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450960 je 0x11450978 */
  if (C.zf) goto L_11450978;
  /* 11450962 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450969 jne 0x11450978 */
  if (!C.zf) goto L_11450978;
  /* 1145096b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145096e push ecx */
  push32((uint32_t)(ECX));
  /* 1145096f call dword ptr [0x114734cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114734cc))), 0x11450975u);
  /* 11450975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11450978:;
  /* 11450978 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1145097c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145097f jne 0x1145099a */
  if (!C.zf) goto L_1145099a;
  /* 11450981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450984 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11450989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145098b jne 0x1145099a */
  if (!C.zf) goto L_1145099a;
  /* 1145098d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450990 push ecx */
  push32((uint32_t)(ECX));
  /* 11450991 call dword ptr [0x114734c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114734c4))), 0x11450997u);
  /* 11450997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1145099a:;
  /* 1145099a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145099d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114509a0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114509a3 jne 0x114509b7 */
  if (!C.zf) goto L_114509b7;
  /* 114509a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114509a8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 114509ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114509ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114509b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114509b4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_114509b7:;
  /* 114509b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114509ba push eax */
  push32((uint32_t)(EAX));
  /* 114509bb call 0x1144c140 */
  push32(0x114509c0u); f_1144c140();
  /* 114509c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114509c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 114509c6 jmp 0x11450cd7 */
  goto L_11450cd7;
L_114509cb:;
  /* 114509cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114509ce or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 114509d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114509d4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 114509de jmp 0x11450a65 */
  goto L_11450a65;
L_114509e3:;
  /* 114509e3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 114509ed jmp 0x11450a65 */
  goto L_11450a65;
L_114509ef:;
  /* 114509ef mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_114509f9:;
  /* 114509f9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11450a03 jmp 0x11450a0f */
  goto L_11450a0f;
L_11450a05:;
  /* 11450a05 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11450a0f:;
  /* 11450a0f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11450a19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450a1c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11450a22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450a24 je 0x11450a43 */
  if (C.zf) goto L_11450a43;
  /* 11450a26 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11450a2d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11450a33 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11450a36 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11450a3c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11450a43:;
  /* 11450a43 jmp 0x11450a65 */
  goto L_11450a65;
L_11450a45:;
  /* 11450a45 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11450a4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450a52 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11450a58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11450a5a je 0x11450a65 */
  if (C.zf) goto L_11450a65;
  /* 11450a5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450a5f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11450a62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11450a65:;
  /* 11450a65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450a68 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11450a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450a6f je 0x11450a8e */
  if (C.zf) goto L_11450a8e;
  /* 11450a71 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11450a74 push ecx */
  push32((uint32_t)(ECX));
  /* 11450a75 call 0x11451100 */
  push32(0x11450a7au); f_11451100();
  /* 11450a7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450a7d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11450a83 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11450a89 jmp 0x11450b1f */
  goto L_11450b1f;
L_11450a8e:;
  /* 11450a8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450a91 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11450a94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450a96 je 0x11450ae0 */
  if (C.zf) goto L_11450ae0;
  /* 11450a98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450a9b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11450a9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450aa0 je 0x11450ac0 */
  if (C.zf) goto L_11450ac0;
  /* 11450aa2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11450aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 11450aa6 call 0x114510e0 */
  push32(0x11450aabu); f_114510e0();
  /* 11450aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450aae movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11450ab1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11450ab2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11450ab8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11450abe jmp 0x11450ade */
  goto L_11450ade;
L_11450ac0:;
  /* 11450ac0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11450ac3 push edx */
  push32((uint32_t)(EDX));
  /* 11450ac4 call 0x114510e0 */
  push32(0x11450ac9u); f_114510e0();
  /* 11450ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450acc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11450ad1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11450ad2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11450ad8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11450ade:;
  /* 11450ade jmp 0x11450b1f */
  goto L_11450b1f;
L_11450ae0:;
  /* 11450ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450ae3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11450ae6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450ae8 je 0x11450b05 */
  if (C.zf) goto L_11450b05;
  /* 11450aea lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11450aed push ecx */
  push32((uint32_t)(ECX));
  /* 11450aee call 0x114510e0 */
  push32(0x11450af3u); f_114510e0();
  /* 11450af3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450af6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11450af7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11450afd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11450b03 jmp 0x11450b1f */
  goto L_11450b1f;
L_11450b05:;
  /* 11450b05 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11450b08 push edx */
  push32((uint32_t)(EDX));
  /* 11450b09 call 0x114510e0 */
  push32(0x11450b0eu); f_114510e0();
  /* 11450b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450b11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11450b13 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11450b19 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11450b1f:;
  /* 11450b1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450b22 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11450b25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450b27 je 0x11450b67 */
  if (C.zf) goto L_11450b67;
  /* 11450b29 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450b30 jg 0x11450b67 */
  if ((!C.zf&&C.sf==C.of)) goto L_11450b67;
  /* 11450b32 jl 0x11450b3d */
  if ((C.sf!=C.of)) goto L_11450b3d;
  /* 11450b34 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450b3b jae 0x11450b67 */
  if (!C.cf) goto L_11450b67;
L_11450b3d:;
  /* 11450b3d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11450b43 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11450b45 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11450b4b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11450b4e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11450b50 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11450b56 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11450b5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450b5f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11450b62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11450b65 jmp 0x11450b7f */
  goto L_11450b7f;
L_11450b67:;
  /* 11450b67 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11450b6d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11450b73 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11450b79 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11450b7f:;
  /* 11450b7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450b82 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11450b88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450b8a jne 0x11450ba7 */
  if (!C.zf) goto L_11450ba7;
  /* 11450b8c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11450b92 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11450b98 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11450b9b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11450ba1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11450ba7:;
  /* 11450ba7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450bae jge 0x11450bbc */
  if ((C.sf==C.of)) goto L_11450bbc;
  /* 11450bb0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11450bba jmp 0x11450bc5 */
  goto L_11450bc5;
L_11450bbc:;
  /* 11450bbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450bbf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11450bc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11450bc5:;
  /* 11450bc5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11450bcb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11450bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450bd3 jne 0x11450bdc */
  if (!C.zf) goto L_11450bdc;
  /* 11450bd5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11450bdc:;
  /* 11450bdc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11450bdf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11450be2:;
  /* 11450be2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11450be8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11450bee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450bf1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11450bf7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450bf9 jg 0x11450c0f */
  if ((!C.zf&&C.sf==C.of)) goto L_11450c0f;
  /* 11450bfb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11450c01 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11450c07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11450c09 je 0x11450c90 */
  if (C.zf) goto L_11450c90;
L_11450c0f:;
  /* 11450c0f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11450c15 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11450c16 push edx */
  push32((uint32_t)(EDX));
  /* 11450c17 push eax */
  push32((uint32_t)(EAX));
  /* 11450c18 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11450c1e push edx */
  push32((uint32_t)(EDX));
  /* 11450c1f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11450c25 push eax */
  push32((uint32_t)(EAX));
  /* 11450c26 call 0x1144ffa0 */
  push32(0x11450c2bu); f_1144ffa0();
  /* 11450c2b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11450c2e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11450c34 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11450c3a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11450c3b push edx */
  push32((uint32_t)(EDX));
  /* 11450c3c push eax */
  push32((uint32_t)(EAX));
  /* 11450c3d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11450c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11450c44 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11450c4a push edx */
  push32((uint32_t)(EDX));
  /* 11450c4b call 0x1144ff30 */
  push32(0x11450c50u); f_1144ff30();
  /* 11450c50 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11450c56 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11450c5c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450c63 jle 0x11450c77 */
  if ((C.zf||C.sf!=C.of)) goto L_11450c77;
  /* 11450c65 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11450c6b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11450c71 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11450c77:;
  /* 11450c77 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450c7a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11450c80 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11450c82 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450c85 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450c88 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11450c8b jmp 0x11450be2 */
  goto L_11450be2;
L_11450c90:;
  /* 11450c90 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11450c93 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450c96 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11450c99 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450c9c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11450c9f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11450ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450ca5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11450caa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450cac je 0x11450cd7 */
  if (C.zf) goto L_11450cd7;
  /* 11450cae mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450cb1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11450cb4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450cb7 jne 0x11450cbf */
  if (!C.zf) goto L_11450cbf;
  /* 11450cb9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450cbd jne 0x11450cd7 */
  if (!C.zf) goto L_11450cd7;
L_11450cbf:;
  /* 11450cbf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450cc2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450cc5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11450cc8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450ccb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11450cce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11450cd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11450cd4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11450cd7:;
  /* 11450cd7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450cde jne 0x11450eb2 */
  if (!C.zf) goto L_11450eb2;
  /* 11450ce4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450ce7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11450cea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450cec je 0x11450d3d */
  if (C.zf) goto L_11450d3d;
  /* 11450cee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450cf1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11450cf7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11450cf9 je 0x11450d0b */
  if (C.zf) goto L_11450d0b;
  /* 11450cfb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11450d02 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11450d09 jmp 0x11450d3d */
  goto L_11450d3d;
L_11450d0b:;
  /* 11450d0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450d0e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11450d11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450d13 je 0x11450d25 */
  if (C.zf) goto L_11450d25;
  /* 11450d15 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11450d1c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11450d23 jmp 0x11450d3d */
  goto L_11450d3d;
L_11450d25:;
  /* 11450d25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450d28 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11450d2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11450d2d je 0x11450d3d */
  if (C.zf) goto L_11450d3d;
  /* 11450d2f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11450d36 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11450d3d:;
  /* 11450d3d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11450d43 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450d46 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450d49 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11450d4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450d52 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11450d55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450d57 jne 0x11450d75 */
  if (!C.zf) goto L_11450d75;
  /* 11450d59 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11450d5f push eax */
  push32((uint32_t)(EAX));
  /* 11450d60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11450d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11450d64 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11450d6a push edx */
  push32((uint32_t)(EDX));
  /* 11450d6b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11450d6d call 0x11451050 */
  push32(0x11450d72u); f_11451050();
  /* 11450d72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11450d75:;
  /* 11450d75 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11450d7b push eax */
  push32((uint32_t)(EAX));
  /* 11450d7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11450d7f push ecx */
  push32((uint32_t)(ECX));
  /* 11450d80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11450d83 push edx */
  push32((uint32_t)(EDX));
  /* 11450d84 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11450d8a push eax */
  push32((uint32_t)(EAX));
  /* 11450d8b call 0x11451090 */
  push32(0x11450d90u); f_11451090();
  /* 11450d90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450d96 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11450d99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11450d9b je 0x11450dc3 */
  if (C.zf) goto L_11450dc3;
  /* 11450d9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450da0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11450da3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450da5 jne 0x11450dc3 */
  if (!C.zf) goto L_11450dc3;
  /* 11450da7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11450dad push eax */
  push32((uint32_t)(EAX));
  /* 11450dae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11450db1 push ecx */
  push32((uint32_t)(ECX));
  /* 11450db2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11450db8 push edx */
  push32((uint32_t)(EDX));
  /* 11450db9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11450dbb call 0x11451050 */
  push32(0x11450dc0u); f_11451050();
  /* 11450dc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11450dc3:;
  /* 11450dc3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450dc7 je 0x11450e71 */
  if (C.zf) goto L_11450e71;
  /* 11450dcd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450dd1 jle 0x11450e71 */
  if ((C.zf||C.sf!=C.of)) goto L_11450e71;
  /* 11450dd7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450dda mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11450de0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11450de3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11450de9:;
  /* 11450de9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11450def mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11450df5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450df8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11450dfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450e00 je 0x11450e6f */
  if (C.zf) goto L_11450e6f;
  /* 11450e02 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11450e08 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11450e0b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11450e12 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11450e19 push eax */
  push32((uint32_t)(EAX));
  /* 11450e1a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11450e20 push ecx */
  push32((uint32_t)(ECX));
  /* 11450e21 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11450e27 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11450e2a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11450e30 call 0x11452340 */
  push32(0x11450e35u); f_11452340();
  /* 11450e35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450e38 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11450e3e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450e45 jg 0x11450e49 */
  if ((!C.zf&&C.sf==C.of)) goto L_11450e49;
  /* 11450e47 jmp 0x11450e6f */
  goto L_11450e6f;
L_11450e49:;
  /* 11450e49 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11450e4f push eax */
  push32((uint32_t)(EAX));
  /* 11450e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11450e53 push ecx */
  push32((uint32_t)(ECX));
  /* 11450e54 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11450e5a push edx */
  push32((uint32_t)(EDX));
  /* 11450e5b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11450e61 push eax */
  push32((uint32_t)(EAX));
  /* 11450e62 call 0x11451090 */
  push32(0x11450e67u); f_11451090();
  /* 11450e67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11450e6a jmp 0x11450de9 */
  goto L_11450de9;
L_11450e6f:;
  /* 11450e6f jmp 0x11450e8c */
  goto L_11450e8c;
L_11450e71:;
  /* 11450e71 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11450e77 push ecx */
  push32((uint32_t)(ECX));
  /* 11450e78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11450e7b push edx */
  push32((uint32_t)(EDX));
  /* 11450e7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11450e7f push eax */
  push32((uint32_t)(EAX));
  /* 11450e80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11450e83 push ecx */
  push32((uint32_t)(ECX));
  /* 11450e84 call 0x11451090 */
  push32(0x11450e89u); f_11451090();
  /* 11450e89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11450e8c:;
  /* 11450e8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11450e8f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11450e92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11450e94 je 0x11450eb2 */
  if (C.zf) goto L_11450eb2;
  /* 11450e96 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11450e9c push eax */
  push32((uint32_t)(EAX));
  /* 11450e9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11450ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 11450ea1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11450ea7 push edx */
  push32((uint32_t)(EDX));
  /* 11450ea8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11450eaa call 0x11451050 */
  push32(0x11450eafu); f_11451050();
  /* 11450eaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11450eb2:;
  /* 11450eb2 jmp 0x114502c4 */
  goto L_114502c4;
L_11450eb7:;
  /* 11450eb7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11450ebd pop edi */
  EDI = (pop32());
  /* 11450ebe pop esi */
  ESI = (pop32());
  /* 11450ebf pop ebx */
  EBX = (pop32());
  /* 11450ec0 mov esp, ebp */
  ESP = (EBP);
  /* 11450ec2 pop ebp */
  EBP = (pop32());
  /* 11450ec3 ret  */
  ESPCHK(0x114502a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fd0 @ 0x11450fd0 (119 bytes, 44 insns) */
void f_11450fd0(void) {
  FTRACE(0x11450fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11450fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11450fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11450fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11450fd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11450fd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11450fda sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11450fdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11450fe0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11450fe3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11450fe6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11450fea jl 0x11451012 */
  if ((C.sf!=C.of)) goto L_11451012;
  /* 11450fec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11450fef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11450ff1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11450ff4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11450ff6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11450ffa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11451000 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11451003 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451006 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11451008 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145100b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145100e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11451010 jmp 0x11451025 */
  goto L_11451025;
L_11451012:;
  /* 11451012 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451015 push edx */
  push32((uint32_t)(EDX));
  /* 11451016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451019 push eax */
  push32((uint32_t)(EAX));
  /* 1145101a call 0x11450020 */
  push32(0x1145101fu); f_11450020();
  /* 1145101f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451022 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11451025:;
  /* 11451025 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451029 jne 0x11451036 */
  if (!C.zf) goto L_11451036;
  /* 1145102b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145102e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11451034 jmp 0x11451043 */
  goto L_11451043;
L_11451036:;
  /* 11451036 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451039 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1145103b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145103e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451041 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11451043:;
  /* 11451043 mov esp, ebp */
  ESP = (EBP);
  /* 11451045 pop ebp */
  EBP = (pop32());
  /* 11451046 ret  */
  ESPCHK(0x11450fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011050 @ 0x11451050 (53 bytes, 23 insns) */
void f_11451050(void) {
  FTRACE(0x11451050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451050 push ebp */
  push32((uint32_t)(EBP));
  /* 11451051 mov ebp, esp */
  EBP = (ESP);
L_11451053:;
  /* 11451053 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451056 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451059 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145105c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1145105f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451061 jle 0x11451083 */
  if ((C.zf||C.sf!=C.of)) goto L_11451083;
  /* 11451063 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11451066 push edx */
  push32((uint32_t)(EDX));
  /* 11451067 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145106a push eax */
  push32((uint32_t)(EAX));
  /* 1145106b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145106e push ecx */
  push32((uint32_t)(ECX));
  /* 1145106f call 0x11450fd0 */
  push32(0x11451074u); f_11450fd0();
  /* 11451074 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451077 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145107a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145107d jne 0x11451081 */
  if (!C.zf) goto L_11451081;
  /* 1145107f jmp 0x11451083 */
  goto L_11451083;
L_11451081:;
  /* 11451081 jmp 0x11451053 */
  goto L_11451053;
L_11451083:;
  /* 11451083 pop ebp */
  EBP = (pop32());
  /* 11451084 ret  */
  ESPCHK(0x11451050u, _esp0);
  ESP += 4; return;
}

/* FUN_10011090 @ 0x11451090 (74 bytes, 31 insns) */
void f_11451090(void) {
  FTRACE(0x11451090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451090 push ebp */
  push32((uint32_t)(EBP));
  /* 11451091 mov ebp, esp */
  EBP = (ESP);
  /* 11451093 push ecx */
  push32((uint32_t)(ECX));
L_11451094:;
  /* 11451094 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451097 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145109a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145109d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 114510a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114510a2 jle 0x114510d6 */
  if ((C.zf||C.sf!=C.of)) goto L_114510d6;
  /* 114510a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114510a7 push edx */
  push32((uint32_t)(EDX));
  /* 114510a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114510ab push eax */
  push32((uint32_t)(EAX));
  /* 114510ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114510af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114510b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114510b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114510b8 push eax */
  push32((uint32_t)(EAX));
  /* 114510b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114510bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114510bf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114510c2 call 0x11450fd0 */
  push32(0x114510c7u); f_11450fd0();
  /* 114510c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114510ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 114510cd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114510d0 jne 0x114510d4 */
  if (!C.zf) goto L_114510d4;
  /* 114510d2 jmp 0x114510d6 */
  goto L_114510d6;
L_114510d4:;
  /* 114510d4 jmp 0x11451094 */
  goto L_11451094;
L_114510d6:;
  /* 114510d6 mov esp, ebp */
  ESP = (EBP);
  /* 114510d8 pop ebp */
  EBP = (pop32());
  /* 114510d9 ret  */
  ESPCHK(0x11451090u, _esp0);
  ESP += 4; return;
}

/* FUN_100110e0 @ 0x114510e0 (26 bytes, 12 insns) */
void f_114510e0(void) {
  FTRACE(0x114510e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114510e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114510e1 mov ebp, esp */
  EBP = (ESP);
  /* 114510e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114510e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114510e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114510eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114510ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114510f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114510f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 114510f5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 114510f8 pop ebp */
  EBP = (pop32());
  /* 114510f9 ret  */
  ESPCHK(0x114510e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011100 @ 0x11451100 (31 bytes, 14 insns) */
void f_11451100(void) {
  FTRACE(0x11451100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451100 push ebp */
  push32((uint32_t)(EBP));
  /* 11451101 mov ebp, esp */
  EBP = (ESP);
  /* 11451103 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451106 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11451108 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145110b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145110e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11451110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451113 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11451115 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451118 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1145111a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1145111d pop ebp */
  EBP = (pop32());
  /* 1145111e ret  */
  ESPCHK(0x11451100u, _esp0);
  ESP += 4; return;
}

/* FUN_10011120 @ 0x11451120 (27 bytes, 12 insns) */
void f_11451120(void) {
  FTRACE(0x11451120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451120 push ebp */
  push32((uint32_t)(EBP));
  /* 11451121 mov ebp, esp */
  EBP = (ESP);
  /* 11451123 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451126 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11451128 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145112b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145112e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11451130 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451133 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11451135 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11451139 pop ebp */
  EBP = (pop32());
  /* 1145113a ret  */
  ESPCHK(0x11451120u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11451140 (145 bytes, 42 insns) */
void f_11451140(void) {
  FTRACE(0x11451140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451140 push ebp */
  push32((uint32_t)(EBP));
  /* 11451141 mov ebp, esp */
  EBP = (ESP);
  /* 11451143 push ecx */
  push32((uint32_t)(ECX));
  /* 11451144 call 0x114511f0 */
  push32(0x11451149u); f_114511f0();
  /* 11451149 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145114c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1145114e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11451155 jmp 0x11451160 */
  goto L_11451160;
L_11451157:;
  /* 11451157 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145115a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145115d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11451160:;
  /* 11451160 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451164 jae 0x1145118a */
  if (!C.cf) goto L_1145118a;
  /* 11451166 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451169 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145116c cmp ecx, dword ptr [eax*8 + 0x114730d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x114730d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451173 jne 0x11451188 */
  if (!C.zf) goto L_11451188;
  /* 11451175 call 0x114511e0 */
  push32(0x1145117au); f_114511e0();
  /* 1145117a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145117d mov ecx, dword ptr [edx*8 + 0x114730dc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x114730dc)));
  /* 11451184 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11451186 jmp 0x114511cd */
  goto L_114511cd;
L_11451188:;
  /* 11451188 jmp 0x11451157 */
  goto L_11451157;
L_1145118a:;
  /* 1145118a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145118e jb 0x114511a3 */
  if (C.cf) goto L_114511a3;
  /* 11451190 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451194 ja 0x114511a3 */
  if ((!C.cf&&!C.zf)) goto L_114511a3;
  /* 11451196 call 0x114511e0 */
  push32(0x1145119bu); f_114511e0();
  /* 1145119b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 114511a1 jmp 0x114511cd */
  goto L_114511cd;
L_114511a3:;
  /* 114511a3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114511aa jb 0x114511c2 */
  if (C.cf) goto L_114511c2;
  /* 114511ac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114511b3 ja 0x114511c2 */
  if ((!C.cf&&!C.zf)) goto L_114511c2;
  /* 114511b5 call 0x114511e0 */
  push32(0x114511bau); f_114511e0();
  /* 114511ba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 114511c0 jmp 0x114511cd */
  goto L_114511cd;
L_114511c2:;
  /* 114511c2 call 0x114511e0 */
  push32(0x114511c7u); f_114511e0();
  /* 114511c7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_114511cd:;
  /* 114511cd mov esp, ebp */
  ESP = (EBP);
  /* 114511cf pop ebp */
  EBP = (pop32());
  /* 114511d0 ret  */
  ESPCHK(0x11451140u, _esp0);
  ESP += 4; return;
}

/* FUN_100111e0 @ 0x114511e0 (13 bytes, 6 insns) */
void f_114511e0(void) {
  FTRACE(0x114511e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114511e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114511e1 mov ebp, esp */
  EBP = (ESP);
  /* 114511e3 call 0x11447590 */
  push32(0x114511e8u); f_11447590();
  /* 114511e8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114511eb pop ebp */
  EBP = (pop32());
  /* 114511ec ret  */
  ESPCHK(0x114511e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111f0 @ 0x114511f0 (13 bytes, 6 insns) */
void f_114511f0(void) {
  FTRACE(0x114511f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114511f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114511f1 mov ebp, esp */
  EBP = (ESP);
  /* 114511f3 call 0x11447590 */
  push32(0x114511f8u); f_11447590();
  /* 114511f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114511fb pop ebp */
  EBP = (pop32());
  /* 114511fc ret  */
  ESPCHK(0x114511f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x11451200 (664 bytes, 259 insns) [15 switch table(s)] */
void f_11451200(void) {
  FTRACE(0x11451200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451200 push ebp */
  push32((uint32_t)(EBP));
  /* 11451201 mov ebp, esp */
  EBP = (ESP);
  /* 11451203 push edi */
  push32((uint32_t)(EDI));
  /* 11451204 push esi */
  push32((uint32_t)(ESI));
  /* 11451205 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11451208 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145120b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1145120e mov eax, ecx */
  EAX = (ECX);
  /* 11451210 mov edx, ecx */
  EDX = (ECX);
  /* 11451212 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451214 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451216 jbe 0x11451220 */
  if ((C.cf||C.zf)) goto L_11451220;
  /* 11451218 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145121a jb 0x11451398 */
  if (C.cf) goto L_11451398;
L_11451220:;
  /* 11451220 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11451226 jne 0x1145123c */
  if (!C.zf) goto L_1145123c;
  /* 11451228 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1145122b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1145122e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451231 jb 0x1145125c */
  if (C.cf) goto L_1145125c;
  /* 11451233 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11451235 jmp dword ptr [edx*4 + 0x11451348] */
  switch (EDX) {
    case 0: goto L_11451358;
    case 1: goto L_11451360;
    case 2: goto L_1145136c;
    case 3: goto L_11451380;
    default: x86_unimpl("switch@0x11451235 out of table"); return;
  }
L_1145123c:;
  /* 1145123c mov eax, edi */
  EAX = (EDI);
  /* 1145123e mov edx, 3 */
  EDX = (0x3u);
  /* 11451243 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451246 jb 0x11451254 */
  if (C.cf) goto L_11451254;
  /* 11451248 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1145124b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145124d jmp dword ptr [eax*4 + 0x11451260] */
  switch (EAX) {
    case 1: goto L_11451270;
    case 2: goto L_1145129c;
    case 3: goto L_114512c0;
    default: x86_unimpl("switch@0x1145124d out of table"); return;
  }
L_11451254:;
  /* 11451254 jmp dword ptr [ecx*4 + 0x11451358] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11451358)))); return;
  /* 1145125b nop  */
  /* nop */
L_1145125c:;
  /* 1145125c jmp dword ptr [ecx*4 + 0x114512dc] */
  switch (ECX) {
    case 0: goto L_1145133f;
    case 1: goto L_1145132c;
    case 2: goto L_11451324;
    case 3: goto L_1145131c;
    case 4: goto L_11451314;
    case 5: goto L_1145130c;
    case 6: goto L_11451304;
    case 7: goto L_114512fc;
    default: x86_unimpl("switch@0x1145125c out of table"); return;
  }
  /* 11451263 nop  */
  /* nop */
L_11451270:;
  /* 11451270 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11451272 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11451274 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11451276 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11451279 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1145127c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1145127f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11451282 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11451285 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11451288 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1145128b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145128e jb 0x1145125c */
  if (C.cf) goto L_1145125c;
  /* 11451290 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11451292 jmp dword ptr [edx*4 + 0x11451348] */
  switch (EDX) {
    case 0: goto L_11451358;
    case 1: goto L_11451360;
    case 2: goto L_1145136c;
    case 3: goto L_11451380;
    default: x86_unimpl("switch@0x11451292 out of table"); return;
  }
  /* 11451299 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1145129c:;
  /* 1145129c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1145129e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114512a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114512a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114512a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114512a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114512ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114512ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114512b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114512b4 jb 0x1145125c */
  if (C.cf) goto L_1145125c;
  /* 114512b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114512b8 jmp dword ptr [edx*4 + 0x11451348] */
  switch (EDX) {
    case 0: goto L_11451358;
    case 1: goto L_11451360;
    case 2: goto L_1145136c;
    case 3: goto L_11451380;
    default: x86_unimpl("switch@0x114512b8 out of table"); return;
  }
  /* 114512bf nop  */
  /* nop */
L_114512c0:;
  /* 114512c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114512c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114512c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114512c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114512c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114512ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114512cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114512ce jb 0x1145125c */
  if (C.cf) goto L_1145125c;
  /* 114512d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114512d2 jmp dword ptr [edx*4 + 0x11451348] */
  switch (EDX) {
    case 0: goto L_11451358;
    case 1: goto L_11451360;
    case 2: goto L_1145136c;
    case 3: goto L_11451380;
    default: x86_unimpl("switch@0x114512d2 out of table"); return;
  }
  /* 114512d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114512fc:;
  /* 114512fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11451300 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11451304:;
  /* 11451304 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11451308 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1145130c:;
  /* 1145130c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11451310 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11451314:;
  /* 11451314 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11451318 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1145131c:;
  /* 1145131c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11451320 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11451324:;
  /* 11451324 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11451328 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1145132c:;
  /* 1145132c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11451330 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11451334 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1145133b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1145133d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1145133f:;
  /* 1145133f jmp dword ptr [edx*4 + 0x11451348] */
  switch (EDX) {
    case 0: goto L_11451358;
    case 1: goto L_11451360;
    case 2: goto L_1145136c;
    case 3: goto L_11451380;
    default: x86_unimpl("switch@0x1145133f out of table"); return;
  }
  /* 11451346 mov edi, edi */
  EDI = (EDI);
L_11451358:;
  /* 11451358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145135b pop esi */
  ESI = (pop32());
  /* 1145135c pop edi */
  EDI = (pop32());
  /* 1145135d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1145135e ret  */
  ESPCHK(0x11451200u, _esp0);
  ESP += 4; return;
  /* 1145135f nop  */
  /* nop */
L_11451360:;
  /* 11451360 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11451362 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11451364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451367 pop esi */
  ESI = (pop32());
  /* 11451368 pop edi */
  EDI = (pop32());
  /* 11451369 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1145136a ret  */
  ESPCHK(0x11451200u, _esp0);
  ESP += 4; return;
  /* 1145136b nop  */
  /* nop */
L_1145136c:;
  /* 1145136c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1145136e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11451370 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11451373 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11451376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451379 pop esi */
  ESI = (pop32());
  /* 1145137a pop edi */
  EDI = (pop32());
  /* 1145137b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1145137c ret  */
  ESPCHK(0x11451200u, _esp0);
  ESP += 4; return;
  /* 1145137d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11451380:;
  /* 11451380 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11451382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11451384 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11451387 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1145138a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1145138d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11451390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451393 pop esi */
  ESI = (pop32());
  /* 11451394 pop edi */
  EDI = (pop32());
  /* 11451395 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11451396 ret  */
  ESPCHK(0x11451200u, _esp0);
  ESP += 4; return;
  /* 11451397 nop  */
  /* nop */
L_11451398:;
  /* 11451398 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1145139c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 114513a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 114513a6 jne 0x114513cc */
  if (!C.zf) goto L_114513cc;
  /* 114513a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114513ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114513ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114513b1 jb 0x114513c0 */
  if (C.cf) goto L_114513c0;
  /* 114513b3 std  */
  C.df=1;
  /* 114513b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114513b6 cld  */
  C.df=0;
  /* 114513b7 jmp dword ptr [edx*4 + 0x114514e0] */
  switch (EDX) {
    case 0: goto L_114514f0;
    case 1: goto L_114514f8;
    case 2: goto L_11451508;
    case 3: goto L_1145151c;
    default: x86_unimpl("switch@0x114513b7 out of table"); return;
  }
  /* 114513be mov edi, edi */
  EDI = (EDI);
L_114513c0:;
  /* 114513c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114513c2 jmp dword ptr [ecx*4 + 0x11451490] */
  switch (ECX) {
    case 0: goto L_114514d7;
    default: x86_unimpl("switch@0x114513c2 out of table"); return;
  }
  /* 114513c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114513cc:;
  /* 114513cc mov eax, edi */
  EAX = (EDI);
  /* 114513ce mov edx, 3 */
  EDX = (0x3u);
  /* 114513d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114513d6 jb 0x114513e4 */
  if (C.cf) goto L_114513e4;
  /* 114513d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114513db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114513dd jmp dword ptr [eax*4 + 0x114513e8] */
  switch (EAX) {
    case 1: goto L_114513f8;
    case 2: goto L_11451418;
    case 3: goto L_11451440;
    default: x86_unimpl("switch@0x114513dd out of table"); return;
  }
L_114513e4:;
  /* 114513e4 jmp dword ptr [ecx*4 + 0x114514e0] */
  switch (ECX) {
    case 0: goto L_114514f0;
    case 1: goto L_114514f8;
    case 2: goto L_11451508;
    case 3: goto L_1145151c;
    default: x86_unimpl("switch@0x114513e4 out of table"); return;
  }
  /* 114513eb nop  */
  /* nop */
L_114513f8:;
  /* 114513f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114513fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114513fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11451400 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11451401 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11451404 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11451405 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451408 jb 0x114513c0 */
  if (C.cf) goto L_114513c0;
  /* 1145140a std  */
  C.df=1;
  /* 1145140b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1145140d cld  */
  C.df=0;
  /* 1145140e jmp dword ptr [edx*4 + 0x114514e0] */
  switch (EDX) {
    case 0: goto L_114514f0;
    case 1: goto L_114514f8;
    case 2: goto L_11451508;
    case 3: goto L_1145151c;
    default: x86_unimpl("switch@0x1145140e out of table"); return;
  }
  /* 11451415 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11451418:;
  /* 11451418 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1145141b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1145141d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11451420 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11451423 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11451426 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11451429 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145142c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145142f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451432 jb 0x114513c0 */
  if (C.cf) goto L_114513c0;
  /* 11451434 std  */
  C.df=1;
  /* 11451435 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11451437 cld  */
  C.df=0;
  /* 11451438 jmp dword ptr [edx*4 + 0x114514e0] */
  switch (EDX) {
    case 0: goto L_114514f0;
    case 1: goto L_114514f8;
    case 2: goto L_11451508;
    case 3: goto L_1145151c;
    default: x86_unimpl("switch@0x11451438 out of table"); return;
  }
  /* 1145143f nop  */
  /* nop */
L_11451440:;
  /* 11451440 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11451443 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11451445 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11451448 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1145144b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1145144e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11451451 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11451454 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11451457 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145145a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145145d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451460 jb 0x114513c0 */
  if (C.cf) goto L_114513c0;
  /* 11451466 std  */
  C.df=1;
  /* 11451467 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11451469 cld  */
  C.df=0;
  /* 1145146a jmp dword ptr [edx*4 + 0x114514e0] */
  switch (EDX) {
    case 0: goto L_114514f0;
    case 1: goto L_114514f8;
    case 2: goto L_11451508;
    case 3: goto L_1145151c;
    default: x86_unimpl("switch@0x1145146a out of table"); return;
  }
  /* 11451471 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11451474 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11451475 adc al, 0x45 */
  { uint32_t _a=(AL),_b=(0x45u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11451477 adc dword ptr [esp + edx + 0x14a41145], ebx */
  { uint32_t _a=(r32((uint32_t)(ESP + EDX*1 + 0x14a41145))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EDX*1 + 0x14a41145), (_r)); fl_add(_a,_b,_r,32); }
  /* 1145147e inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1145147f adc dword ptr [esp + edx + 0x14b41145], ebp */
  { uint32_t _a=(r32((uint32_t)(ESP + EDX*1 + 0x14b41145))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EDX*1 + 0x14b41145), (_r)); fl_add(_a,_b,_r,32); }
  /* 11451486 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11451487 adc dword ptr [esp + edx + 0x14c41145], edi */
  { uint32_t _a=(r32((uint32_t)(ESP + EDX*1 + 0x14c41145))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ESP + EDX*1 + 0x14c41145), (_r)); fl_add(_a,_b,_r,32); }
  /* 1145148e inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11451494 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11451498 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1145149c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 114514a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 114514a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 114514a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 114514ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 114514b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 114514b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 114514b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 114514bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 114514c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 114514c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 114514c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 114514cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 114514d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114514d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_114514d7:;
  /* 114514d7 jmp dword ptr [edx*4 + 0x114514e0] */
  switch (EDX) {
    case 0: goto L_114514f0;
    case 1: goto L_114514f8;
    case 2: goto L_11451508;
    case 3: goto L_1145151c;
    default: x86_unimpl("switch@0x114514d7 out of table"); return;
  }
  /* 114514de mov edi, edi */
  EDI = (EDI);
L_114514f0:;
  /* 114514f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114514f3 pop esi */
  ESI = (pop32());
  /* 114514f4 pop edi */
  EDI = (pop32());
  /* 114514f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114514f6 ret  */
  ESPCHK(0x11451200u, _esp0);
  ESP += 4; return;
  /* 114514f7 nop  */
  /* nop */
L_114514f8:;
  /* 114514f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114514fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 114514fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451501 pop esi */
  ESI = (pop32());
  /* 11451502 pop edi */
  EDI = (pop32());
  /* 11451503 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11451504 ret  */
  ESPCHK(0x11451200u, _esp0);
  ESP += 4; return;
  /* 11451505 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11451508:;
  /* 11451508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1145150b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1145150e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11451511 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11451514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451517 pop esi */
  ESI = (pop32());
  /* 11451518 pop edi */
  EDI = (pop32());
  /* 11451519 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1145151a ret  */
  ESPCHK(0x11451200u, _esp0);
  ESP += 4; return;
  /* 1145151b nop  */
  /* nop */
L_1145151c:;
  /* 1145151c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1145151f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11451522 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11451525 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11451528 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1145152b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1145152e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451531 pop esi */
  ESI = (pop32());
  /* 11451532 pop edi */
  EDI = (pop32());
  /* 11451533 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11451534 ret  */
  ESPCHK(0x11451200u, _esp0);
  ESP += 4; return;
}

/* FUN_10011540 @ 0x11451540 (421 bytes, 148 insns) */
void f_11451540(void) {
  FTRACE(0x11451540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451540 push ebp */
  push32((uint32_t)(EBP));
  /* 11451541 mov ebp, esp */
  EBP = (ESP);
  /* 11451543 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11451545 push 0x11470948 */
  push32((uint32_t)(0x11470948u));
  /* 1145154a push 0x11452558 */
  push32((uint32_t)(0x11452558u));
  /* 1145154f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11451555 push eax */
  push32((uint32_t)(EAX));
  /* 11451556 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1145155d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451560 push ebx */
  push32((uint32_t)(EBX));
  /* 11451561 push esi */
  push32((uint32_t)(ESI));
  /* 11451562 push edi */
  push32((uint32_t)(EDI));
  /* 11451563 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11451566 cmp dword ptr [0x11474b70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145156d jne 0x114515be */
  if (!C.zf) goto L_114515be;
  /* 1145156f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11451572 push eax */
  push32((uint32_t)(EAX));
  /* 11451573 push 1 */
  push32((uint32_t)(0x1u));
  /* 11451575 push 0x11470944 */
  push32((uint32_t)(0x11470944u));
  /* 1145157a push 1 */
  push32((uint32_t)(0x1u));
  /* 1145157c call dword ptr [0x1147733c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147733c))), 0x11451582u);
  /* 11451582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451584 je 0x11451592 */
  if (C.zf) goto L_11451592;
  /* 11451586 mov dword ptr [0x11474b70], 1 */
  w32((uint32_t)(0x11474b70), (0x1u));
  /* 11451590 jmp 0x114515be */
  goto L_114515be;
L_11451592:;
  /* 11451592 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11451595 push ecx */
  push32((uint32_t)(ECX));
  /* 11451596 push 1 */
  push32((uint32_t)(0x1u));
  /* 11451598 push 0x11470940 */
  push32((uint32_t)(0x11470940u));
  /* 1145159d push 1 */
  push32((uint32_t)(0x1u));
  /* 1145159f push 0 */
  push32((uint32_t)(0x0u));
  /* 114515a1 call dword ptr [0x11477340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477340))), 0x114515a7u);
  /* 114515a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114515a9 je 0x114515b7 */
  if (C.zf) goto L_114515b7;
  /* 114515ab mov dword ptr [0x11474b70], 2 */
  w32((uint32_t)(0x11474b70), (0x2u));
  /* 114515b5 jmp 0x114515be */
  goto L_114515be;
L_114515b7:;
  /* 114515b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114515b9 jmp 0x114516e8 */
  goto L_114516e8;
L_114515be:;
  /* 114515be cmp dword ptr [0x11474b70], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11474b70))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114515c5 jne 0x114515f5 */
  if (!C.zf) goto L_114515f5;
  /* 114515c7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114515cb jne 0x114515d6 */
  if (!C.zf) goto L_114515d6;
  /* 114515cd mov edx, dword ptr [0x11474b58] */
  EDX = (r32((uint32_t)(0x11474b58)));
  /* 114515d3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_114515d6:;
  /* 114515d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114515d9 push eax */
  push32((uint32_t)(EAX));
  /* 114515da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114515dd push ecx */
  push32((uint32_t)(ECX));
  /* 114515de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114515e1 push edx */
  push32((uint32_t)(EDX));
  /* 114515e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114515e5 push eax */
  push32((uint32_t)(EAX));
  /* 114515e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114515e9 push ecx */
  push32((uint32_t)(ECX));
  /* 114515ea call dword ptr [0x11477340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477340))), 0x114515f0u);
  /* 114515f0 jmp 0x114516e8 */
  goto L_114516e8;
L_114515f5:;
  /* 114515f5 cmp dword ptr [0x11474b70], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11474b70))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114515fc jne 0x114516e6 */
  if (!C.zf) goto L_114516e6;
  /* 11451602 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451606 jne 0x11451611 */
  if (!C.zf) goto L_11451611;
  /* 11451608 mov edx, dword ptr [0x11474b68] */
  EDX = (r32((uint32_t)(0x11474b68)));
  /* 1145160e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11451611:;
  /* 11451611 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451613 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451615 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451618 push eax */
  push32((uint32_t)(EAX));
  /* 11451619 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145161c push ecx */
  push32((uint32_t)(ECX));
  /* 1145161d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11451620 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11451622 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451624 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11451627 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145162a push edx */
  push32((uint32_t)(EDX));
  /* 1145162b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1145162e push eax */
  push32((uint32_t)(EAX));
  /* 1145162f call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x11451635u);
  /* 11451635 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11451638 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145163c jne 0x11451645 */
  if (!C.zf) goto L_11451645;
  /* 1145163e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11451640 jmp 0x114516e8 */
  goto L_114516e8;
L_11451645:;
  /* 11451645 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1145164c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145164f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11451651 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451654 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11451656 call 0x1144c4b0 */
  push32(0x1145165bu); f_1144c4b0();
  /* 1145165b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1145165e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11451661 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11451664 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11451667 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145166a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1145166c push edx */
  push32((uint32_t)(EDX));
  /* 1145166d push 0 */
  push32((uint32_t)(0x0u));
  /* 1145166f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11451672 push eax */
  push32((uint32_t)(EAX));
  /* 11451673 call 0x1144cca0 */
  push32(0x11451678u); f_1144cca0();
  /* 11451678 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145167b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11451682 jmp 0x1145169b */
  goto L_1145169b;
  /* 11451684 mov eax, 1 */
  EAX = (0x1u);
  /* 11451689 ret  */
  ESPCHK(0x11451540u, _esp0);
  ESP += 4; return;
  /* 1145168a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1145168d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11451694 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1145169b:;
  /* 1145169b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145169f jne 0x114516a5 */
  if (!C.zf) goto L_114516a5;
  /* 114516a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114516a3 jmp 0x114516e8 */
  goto L_114516e8;
L_114516a5:;
  /* 114516a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114516a8 push ecx */
  push32((uint32_t)(ECX));
  /* 114516a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114516ac push edx */
  push32((uint32_t)(EDX));
  /* 114516ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 114516b0 push eax */
  push32((uint32_t)(EAX));
  /* 114516b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114516b4 push ecx */
  push32((uint32_t)(ECX));
  /* 114516b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 114516b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114516ba push edx */
  push32((uint32_t)(EDX));
  /* 114516bb call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x114516c1u);
  /* 114516c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114516c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114516c8 jne 0x114516ce */
  if (!C.zf) goto L_114516ce;
  /* 114516ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114516cc jmp 0x114516e8 */
  goto L_114516e8;
L_114516ce:;
  /* 114516ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114516d1 push eax */
  push32((uint32_t)(EAX));
  /* 114516d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114516d5 push ecx */
  push32((uint32_t)(ECX));
  /* 114516d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114516d9 push edx */
  push32((uint32_t)(EDX));
  /* 114516da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114516dd push eax */
  push32((uint32_t)(EAX));
  /* 114516de call dword ptr [0x1147733c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147733c))), 0x114516e4u);
  /* 114516e4 jmp 0x114516e8 */
  goto L_114516e8;
L_114516e6:;
  /* 114516e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114516e8:;
  /* 114516e8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 114516eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114516ee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114516f5 pop edi */
  EDI = (pop32());
  /* 114516f6 pop esi */
  ESI = (pop32());
  /* 114516f7 pop ebx */
  EBX = (pop32());
  /* 114516f8 mov esp, ebp */
  ESP = (EBP);
  /* 114516fa pop ebp */
  EBP = (pop32());
  /* 114516fb ret  */
  ESPCHK(0x11451540u, _esp0);
  ESP += 4; return;
}

/* FUN_10011700 @ 0x11451700 (727 bytes, 263 insns) */
void f_11451700(void) {
  FTRACE(0x11451700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451700 push ebp */
  push32((uint32_t)(EBP));
  /* 11451701 mov ebp, esp */
  EBP = (ESP);
  /* 11451703 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11451705 push 0x11470958 */
  push32((uint32_t)(0x11470958u));
  /* 1145170a push 0x11452558 */
  push32((uint32_t)(0x11452558u));
  /* 1145170f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11451715 push eax */
  push32((uint32_t)(EAX));
  /* 11451716 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1145171d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451720 push ebx */
  push32((uint32_t)(EBX));
  /* 11451721 push esi */
  push32((uint32_t)(ESI));
  /* 11451722 push edi */
  push32((uint32_t)(EDI));
  /* 11451723 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11451726 cmp dword ptr [0x11474b74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145172d jne 0x11451786 */
  if (!C.zf) goto L_11451786;
  /* 1145172f push 0 */
  push32((uint32_t)(0x0u));
  /* 11451731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451733 push 1 */
  push32((uint32_t)(0x1u));
  /* 11451735 push 0x11470944 */
  push32((uint32_t)(0x11470944u));
  /* 1145173a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1145173f push 0 */
  push32((uint32_t)(0x0u));
  /* 11451741 call dword ptr [0x11477334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477334))), 0x11451747u);
  /* 11451747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451749 je 0x11451757 */
  if (C.zf) goto L_11451757;
  /* 1145174b mov dword ptr [0x11474b74], 1 */
  w32((uint32_t)(0x11474b74), (0x1u));
  /* 11451755 jmp 0x11451786 */
  goto L_11451786;
L_11451757:;
  /* 11451757 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451759 push 0 */
  push32((uint32_t)(0x0u));
  /* 1145175b push 1 */
  push32((uint32_t)(0x1u));
  /* 1145175d push 0x11470940 */
  push32((uint32_t)(0x11470940u));
  /* 11451762 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11451767 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451769 call dword ptr [0x11477344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477344))), 0x1145176fu);
  /* 1145176f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451771 je 0x1145177f */
  if (C.zf) goto L_1145177f;
  /* 11451773 mov dword ptr [0x11474b74], 2 */
  w32((uint32_t)(0x11474b74), (0x2u));
  /* 1145177d jmp 0x11451786 */
  goto L_11451786;
L_1145177f:;
  /* 1145177f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11451781 jmp 0x114519f1 */
  goto L_114519f1;
L_11451786:;
  /* 11451786 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145178a jle 0x1145179f */
  if ((C.zf||C.sf!=C.of)) goto L_1145179f;
  /* 1145178c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145178f push eax */
  push32((uint32_t)(EAX));
  /* 11451790 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451793 push ecx */
  push32((uint32_t)(ECX));
  /* 11451794 call 0x11451a10 */
  push32(0x11451799u); f_11451a10();
  /* 11451799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145179c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1145179f:;
  /* 1145179f cmp dword ptr [0x11474b74], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11474b74))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114517a6 jne 0x114517cb */
  if (!C.zf) goto L_114517cb;
  /* 114517a8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114517ab push edx */
  push32((uint32_t)(EDX));
  /* 114517ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114517af push eax */
  push32((uint32_t)(EAX));
  /* 114517b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114517b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114517b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114517b7 push edx */
  push32((uint32_t)(EDX));
  /* 114517b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114517bb push eax */
  push32((uint32_t)(EAX));
  /* 114517bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114517bf push ecx */
  push32((uint32_t)(ECX));
  /* 114517c0 call dword ptr [0x11477344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477344))), 0x114517c6u);
  /* 114517c6 jmp 0x114519f1 */
  goto L_114519f1;
L_114517cb:;
  /* 114517cb cmp dword ptr [0x11474b74], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11474b74))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114517d2 jne 0x114519ef */
  if (!C.zf) goto L_114519ef;
  /* 114517d8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114517dc jne 0x114517e7 */
  if (!C.zf) goto L_114517e7;
  /* 114517de mov edx, dword ptr [0x11474b68] */
  EDX = (r32((uint32_t)(0x11474b68)));
  /* 114517e4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_114517e7:;
  /* 114517e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114517e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114517eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114517ee push eax */
  push32((uint32_t)(EAX));
  /* 114517ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114517f2 push ecx */
  push32((uint32_t)(ECX));
  /* 114517f3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 114517f6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 114517f8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114517fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 114517fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451800 push edx */
  push32((uint32_t)(EDX));
  /* 11451801 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11451804 push eax */
  push32((uint32_t)(EAX));
  /* 11451805 call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x1145180bu);
  /* 1145180b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1145180e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451812 jne 0x1145181b */
  if (!C.zf) goto L_1145181b;
  /* 11451814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11451816 jmp 0x114519f1 */
  goto L_114519f1;
L_1145181b:;
  /* 1145181b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11451822 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11451825 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11451827 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145182a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1145182c call 0x1144c4b0 */
  push32(0x11451831u); f_1144c4b0();
  /* 11451831 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11451834 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11451837 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1145183a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1145183d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11451844 jmp 0x1145185d */
  goto L_1145185d;
  /* 11451846 mov eax, 1 */
  EAX = (0x1u);
  /* 1145184b ret  */
  ESPCHK(0x11451700u, _esp0);
  ESP += 4; return;
  /* 1145184c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1145184f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11451856 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1145185d:;
  /* 1145185d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451861 jne 0x1145186a */
  if (!C.zf) goto L_1145186a;
  /* 11451863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11451865 jmp 0x114519f1 */
  goto L_114519f1;
L_1145186a:;
  /* 1145186a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1145186d push edx */
  push32((uint32_t)(EDX));
  /* 1145186e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11451871 push eax */
  push32((uint32_t)(EAX));
  /* 11451872 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11451875 push ecx */
  push32((uint32_t)(ECX));
  /* 11451876 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451879 push edx */
  push32((uint32_t)(EDX));
  /* 1145187a push 1 */
  push32((uint32_t)(0x1u));
  /* 1145187c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1145187f push eax */
  push32((uint32_t)(EAX));
  /* 11451880 call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x11451886u);
  /* 11451886 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451888 jne 0x11451891 */
  if (!C.zf) goto L_11451891;
  /* 1145188a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145188c jmp 0x114519f1 */
  goto L_114519f1;
L_11451891:;
  /* 11451891 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451893 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451895 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11451898 push ecx */
  push32((uint32_t)(ECX));
  /* 11451899 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1145189c push edx */
  push32((uint32_t)(EDX));
  /* 1145189d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114518a0 push eax */
  push32((uint32_t)(EAX));
  /* 114518a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114518a4 push ecx */
  push32((uint32_t)(ECX));
  /* 114518a5 call dword ptr [0x11477334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477334))), 0x114518abu);
  /* 114518ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114518ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114518b2 jne 0x114518bb */
  if (!C.zf) goto L_114518bb;
  /* 114518b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114518b6 jmp 0x114519f1 */
  goto L_114519f1;
L_114518bb:;
  /* 114518bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114518be and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 114518c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114518c6 je 0x1145190b */
  if (C.zf) goto L_1145190b;
  /* 114518c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114518cc je 0x11451906 */
  if (C.zf) goto L_11451906;
  /* 114518ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114518d1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114518d4 jle 0x114518dd */
  if ((C.zf||C.sf!=C.of)) goto L_114518dd;
  /* 114518d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114518d8 jmp 0x114519f1 */
  goto L_114519f1;
L_114518dd:;
  /* 114518dd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114518e0 push ecx */
  push32((uint32_t)(ECX));
  /* 114518e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114518e4 push edx */
  push32((uint32_t)(EDX));
  /* 114518e5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114518e8 push eax */
  push32((uint32_t)(EAX));
  /* 114518e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114518ec push ecx */
  push32((uint32_t)(ECX));
  /* 114518ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114518f0 push edx */
  push32((uint32_t)(EDX));
  /* 114518f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114518f4 push eax */
  push32((uint32_t)(EAX));
  /* 114518f5 call dword ptr [0x11477334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477334))), 0x114518fbu);
  /* 114518fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114518fd jne 0x11451906 */
  if (!C.zf) goto L_11451906;
  /* 114518ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11451901 jmp 0x114519f1 */
  goto L_114519f1;
L_11451906:;
  /* 11451906 jmp 0x114519ea */
  goto L_114519ea;
L_1145190b:;
  /* 1145190b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1145190e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11451911 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11451918 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1145191b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1145191d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451920 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11451922 call 0x1144c4b0 */
  push32(0x11451927u); f_1144c4b0();
  /* 11451927 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1145192a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1145192d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11451930 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11451933 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1145193a jmp 0x11451953 */
  goto L_11451953;
  /* 1145193c mov eax, 1 */
  EAX = (0x1u);
  /* 11451941 ret  */
  ESPCHK(0x11451700u, _esp0);
  ESP += 4; return;
  /* 11451942 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11451945 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1145194c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11451953:;
  /* 11451953 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451957 jne 0x11451960 */
  if (!C.zf) goto L_11451960;
  /* 11451959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145195b jmp 0x114519f1 */
  goto L_114519f1;
L_11451960:;
  /* 11451960 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11451963 push eax */
  push32((uint32_t)(EAX));
  /* 11451964 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11451967 push ecx */
  push32((uint32_t)(ECX));
  /* 11451968 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1145196b push edx */
  push32((uint32_t)(EDX));
  /* 1145196c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1145196f push eax */
  push32((uint32_t)(EAX));
  /* 11451970 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451973 push ecx */
  push32((uint32_t)(ECX));
  /* 11451974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451977 push edx */
  push32((uint32_t)(EDX));
  /* 11451978 call dword ptr [0x11477334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477334))), 0x1145197eu);
  /* 1145197e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451980 jne 0x11451986 */
  if (!C.zf) goto L_11451986;
  /* 11451982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11451984 jmp 0x114519f1 */
  goto L_114519f1;
L_11451986:;
  /* 11451986 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145198a jne 0x114519ba */
  if (!C.zf) goto L_114519ba;
  /* 1145198c push 0 */
  push32((uint32_t)(0x0u));
  /* 1145198e push 0 */
  push32((uint32_t)(0x0u));
  /* 11451990 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451992 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451994 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11451997 push eax */
  push32((uint32_t)(EAX));
  /* 11451998 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145199b push ecx */
  push32((uint32_t)(ECX));
  /* 1145199c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114519a1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 114519a4 push edx */
  push32((uint32_t)(EDX));
  /* 114519a5 call dword ptr [0x11477390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477390))), 0x114519abu);
  /* 114519ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114519ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114519b2 jne 0x114519b8 */
  if (!C.zf) goto L_114519b8;
  /* 114519b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114519b6 jmp 0x114519f1 */
  goto L_114519f1;
L_114519b8:;
  /* 114519b8 jmp 0x114519ea */
  goto L_114519ea;
L_114519ba:;
  /* 114519ba push 0 */
  push32((uint32_t)(0x0u));
  /* 114519bc push 0 */
  push32((uint32_t)(0x0u));
  /* 114519be mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114519c1 push eax */
  push32((uint32_t)(EAX));
  /* 114519c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 114519c5 push ecx */
  push32((uint32_t)(ECX));
  /* 114519c6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114519c9 push edx */
  push32((uint32_t)(EDX));
  /* 114519ca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 114519cd push eax */
  push32((uint32_t)(EAX));
  /* 114519ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 114519d3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 114519d6 push ecx */
  push32((uint32_t)(ECX));
  /* 114519d7 call dword ptr [0x11477390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477390))), 0x114519ddu);
  /* 114519dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 114519e0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114519e4 jne 0x114519ea */
  if (!C.zf) goto L_114519ea;
  /* 114519e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114519e8 jmp 0x114519f1 */
  goto L_114519f1;
L_114519ea:;
  /* 114519ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114519ed jmp 0x114519f1 */
  goto L_114519f1;
L_114519ef:;
  /* 114519ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114519f1:;
  /* 114519f1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 114519f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 114519f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 114519fe pop edi */
  EDI = (pop32());
  /* 114519ff pop esi */
  ESI = (pop32());
  /* 11451a00 pop ebx */
  EBX = (pop32());
  /* 11451a01 mov esp, ebp */
  ESP = (EBP);
  /* 11451a03 pop ebp */
  EBP = (pop32());
  /* 11451a04 ret  */
  ESPCHK(0x11451700u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a10 @ 0x11451a10 (80 bytes, 32 insns) */
void f_11451a10(void) {
  FTRACE(0x11451a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11451a11 mov ebp, esp */
  EBP = (ESP);
  /* 11451a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451a16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451a19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11451a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451a1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11451a22:;
  /* 11451a22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451a25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451a28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451a2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11451a2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11451a30 je 0x11451a47 */
  if (C.zf) goto L_11451a47;
  /* 11451a32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451a35 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11451a38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11451a3a je 0x11451a47 */
  if (C.zf) goto L_11451a47;
  /* 11451a3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451a3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451a42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11451a45 jmp 0x11451a22 */
  goto L_11451a22;
L_11451a47:;
  /* 11451a47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451a4a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11451a4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11451a4f jne 0x11451a59 */
  if (!C.zf) goto L_11451a59;
  /* 11451a51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451a54 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451a57 jmp 0x11451a5c */
  goto L_11451a5c;
L_11451a59:;
  /* 11451a59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11451a5c:;
  /* 11451a5c mov esp, ebp */
  ESP = (EBP);
  /* 11451a5e pop ebp */
  EBP = (pop32());
  /* 11451a5f ret  */
  ESPCHK(0x11451a10u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11451a60 (52 bytes, 19 insns) */
void f_11451a60(void) {
  FTRACE(0x11451a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451a60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11451a64 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11451a68 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11451a6a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11451a6e jne 0x11451a79 */
  if (!C.zf) goto L_11451a79;
  /* 11451a70 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11451a74 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11451a76 ret 0x10 */
  ESPCHK(0x11451a60u, _esp0);
  ESP += 20; return;
L_11451a79:;
  /* 11451a79 push ebx */
  push32((uint32_t)(EBX));
  /* 11451a7a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11451a7c mov ebx, eax */
  EBX = (EAX);
  /* 11451a7e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11451a82 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11451a86 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451a88 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11451a8c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11451a8e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451a90 pop ebx */
  EBX = (pop32());
  /* 11451a91 ret 0x10 */
  ESPCHK(0x11451a60u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x11451aa0 (79 bytes, 32 insns) */
void f_11451aa0(void) {
  FTRACE(0x11451aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11451aa1 mov ebp, esp */
  EBP = (ESP);
  /* 11451aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11451aa4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451aa8 jne 0x11451aae */
  if (!C.zf) goto L_11451aae;
  /* 11451aaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11451aac jmp 0x11451aeb */
  goto L_11451aeb;
L_11451aae:;
  /* 11451aae mov eax, dword ptr [0x11475f84] */
  EAX = (r32((uint32_t)(0x11475f84)));
  /* 11451ab3 push eax */
  push32((uint32_t)(EAX));
  /* 11451ab4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 11451ab8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451abb push edx */
  push32((uint32_t)(EDX));
  /* 11451abc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451abf push eax */
  push32((uint32_t)(EAX));
  /* 11451ac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11451ac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11451ac6 mov edx, dword ptr [0x11476224] */
  EDX = (r32((uint32_t)(0x11476224)));
  /* 11451acc push edx */
  push32((uint32_t)(EDX));
  /* 11451acd call 0x11452630 */
  push32(0x11451ad2u); f_11452630();
  /* 11451ad2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451ad5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11451ad8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451adc jne 0x11451ae5 */
  if (!C.zf) goto L_11451ae5;
  /* 11451ade mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11451ae3 jmp 0x11451aeb */
  goto L_11451aeb;
L_11451ae5:;
  /* 11451ae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451ae8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11451aeb:;
  /* 11451aeb mov esp, ebp */
  ESP = (EBP);
  /* 11451aed pop ebp */
  EBP = (pop32());
  /* 11451aee ret  */
  ESPCHK(0x11451aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011af0 @ 0x11451af0 (174 bytes, 66 insns) */
void f_11451af0(void) {
  FTRACE(0x11451af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11451af1 mov ebp, esp */
  EBP = (ESP);
  /* 11451af3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451af6 mov eax, dword ptr [0x114748c8] */
  EAX = (r32((uint32_t)(0x114748c8)));
  /* 11451afb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11451afe:;
  /* 11451afe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451b01 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451b04 je 0x11451b98 */
  if (C.zf) goto L_11451b98;
  /* 11451b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11451b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11451b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11451b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451b12 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11451b14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451b17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11451b19 push eax */
  push32((uint32_t)(EAX));
  /* 11451b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11451b1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11451b1e call dword ptr [0x11477390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477390))), 0x11451b24u);
  /* 11451b24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11451b27 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451b2b jne 0x11451b32 */
  if (!C.zf) goto L_11451b32;
  /* 11451b2d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11451b30 jmp 0x11451b9a */
  goto L_11451b9a;
L_11451b32:;
  /* 11451b32 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11451b34 push 0x11470970 */
  push32((uint32_t)(0x11470970u));
  /* 11451b39 push 2 */
  push32((uint32_t)(0x2u));
  /* 11451b3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11451b3e push ecx */
  push32((uint32_t)(ECX));
  /* 11451b3f call 0x114485f0 */
  push32(0x11451b44u); f_114485f0();
  /* 11451b44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451b47 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11451b4a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451b4e jne 0x11451b55 */
  if (!C.zf) goto L_11451b55;
  /* 11451b50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11451b53 jmp 0x11451b9a */
  goto L_11451b9a;
L_11451b55:;
  /* 11451b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451b59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11451b5c push edx */
  push32((uint32_t)(EDX));
  /* 11451b5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451b60 push eax */
  push32((uint32_t)(EAX));
  /* 11451b61 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11451b63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451b66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11451b68 push edx */
  push32((uint32_t)(EDX));
  /* 11451b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451b6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11451b6d call dword ptr [0x11477390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477390))), 0x11451b73u);
  /* 11451b73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451b75 jne 0x11451b7c */
  if (!C.zf) goto L_11451b7c;
  /* 11451b77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11451b7a jmp 0x11451b9a */
  goto L_11451b9a;
L_11451b7c:;
  /* 11451b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11451b7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451b81 push eax */
  push32((uint32_t)(EAX));
  /* 11451b82 call 0x11452a80 */
  push32(0x11451b87u); f_11452a80();
  /* 11451b87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451b8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451b8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451b90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11451b93 jmp 0x11451afe */
  goto L_11451afe;
L_11451b98:;
  /* 11451b98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11451b9a:;
  /* 11451b9a mov esp, ebp */
  ESP = (EBP);
  /* 11451b9c pop ebp */
  EBP = (pop32());
  /* 11451b9d ret  */
  ESPCHK(0x11451af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ba0 @ 0x11451ba0 (130 bytes, 43 insns) */
void f_11451ba0(void) {
  FTRACE(0x11451ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11451ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11451ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11451ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451ba7 cmp eax, dword ptr [0x114763bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114763bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451bad jae 0x11451bd1 */
  if (!C.cf) goto L_11451bd1;
  /* 11451baf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451bb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11451bb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451bb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11451bbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11451bbe mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 11451bc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11451bca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11451bcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11451bcf jne 0x11451bec */
  if (!C.zf) goto L_11451bec;
L_11451bd1:;
  /* 11451bd1 call 0x114511e0 */
  push32(0x11451bd6u); f_114511e0();
  /* 11451bd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11451bdc call 0x114511f0 */
  push32(0x11451be1u); f_114511f0();
  /* 11451be1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11451be7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11451bea jmp 0x11451c1e */
  goto L_11451c1e;
L_11451bec:;
  /* 11451bec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451bef push edx */
  push32((uint32_t)(EDX));
  /* 11451bf0 call 0x114533e0 */
  push32(0x11451bf5u); f_114533e0();
  /* 11451bf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451bf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451bfb push eax */
  push32((uint32_t)(EAX));
  /* 11451bfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451bff push ecx */
  push32((uint32_t)(ECX));
  /* 11451c00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451c03 push edx */
  push32((uint32_t)(EDX));
  /* 11451c04 call 0x11451c30 */
  push32(0x11451c09u); f_11451c30();
  /* 11451c09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451c0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11451c0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451c12 push eax */
  push32((uint32_t)(EAX));
  /* 11451c13 call 0x11453470 */
  push32(0x11451c18u); f_11453470();
  /* 11451c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451c1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11451c1e:;
  /* 11451c1e mov esp, ebp */
  ESP = (EBP);
  /* 11451c20 pop ebp */
  EBP = (pop32());
  /* 11451c21 ret  */
  ESPCHK(0x11451ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c30 @ 0x11451c30 (178 bytes, 56 insns) */
void f_11451c30(void) {
  FTRACE(0x11451c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11451c31 mov ebp, esp */
  EBP = (ESP);
  /* 11451c33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451c39 push eax */
  push32((uint32_t)(EAX));
  /* 11451c3a call 0x11453260 */
  push32(0x11451c3fu); f_11453260();
  /* 11451c3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451c42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11451c45 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451c49 jne 0x11451c5e */
  if (!C.zf) goto L_11451c5e;
  /* 11451c4b call 0x114511e0 */
  push32(0x11451c50u); f_114511e0();
  /* 11451c50 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11451c56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11451c59 jmp 0x11451cde */
  goto L_11451cde;
L_11451c5e:;
  /* 11451c5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451c61 push ecx */
  push32((uint32_t)(ECX));
  /* 11451c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451c64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451c67 push edx */
  push32((uint32_t)(EDX));
  /* 11451c68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11451c6b push eax */
  push32((uint32_t)(EAX));
  /* 11451c6c call dword ptr [0x11477330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477330))), 0x11451c72u);
  /* 11451c72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11451c75 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451c79 jne 0x11451c86 */
  if (!C.zf) goto L_11451c86;
  /* 11451c7b call dword ptr [0x114772f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f4))), 0x11451c81u);
  /* 11451c81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11451c84 jmp 0x11451c8d */
  goto L_11451c8d;
L_11451c86:;
  /* 11451c86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11451c8d:;
  /* 11451c8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451c91 je 0x11451ca4 */
  if (C.zf) goto L_11451ca4;
  /* 11451c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451c96 push ecx */
  push32((uint32_t)(ECX));
  /* 11451c97 call 0x11451140 */
  push32(0x11451c9cu); f_11451140();
  /* 11451c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451c9f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11451ca2 jmp 0x11451cde */
  goto L_11451cde;
L_11451ca4:;
  /* 11451ca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451ca7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11451caa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451cad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11451cb0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11451cb3 mov ecx, dword ptr [edx*4 + 0x11476280] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11476280)));
  /* 11451cba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11451cbe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11451cc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451cc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11451cc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451cca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11451ccd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11451cd0 mov eax, dword ptr [eax*4 + 0x11476280] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 11451cd7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11451cdb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11451cde:;
  /* 11451cde mov esp, ebp */
  ESP = (EBP);
  /* 11451ce0 pop ebp */
  EBP = (pop32());
  /* 11451ce1 ret  */
  ESPCHK(0x11451c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cf0 @ 0x11451cf0 (130 bytes, 43 insns) */
void f_11451cf0(void) {
  FTRACE(0x11451cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11451cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11451cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11451cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451cf7 cmp eax, dword ptr [0x114763bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114763bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451cfd jae 0x11451d21 */
  if (!C.cf) goto L_11451d21;
  /* 11451cff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451d02 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11451d05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451d08 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11451d0b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11451d0e mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 11451d15 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11451d1a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11451d1d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11451d1f jne 0x11451d3c */
  if (!C.zf) goto L_11451d3c;
L_11451d21:;
  /* 11451d21 call 0x114511e0 */
  push32(0x11451d26u); f_114511e0();
  /* 11451d26 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11451d2c call 0x114511f0 */
  push32(0x11451d31u); f_114511f0();
  /* 11451d31 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11451d37 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11451d3a jmp 0x11451d6e */
  goto L_11451d6e;
L_11451d3c:;
  /* 11451d3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451d3f push edx */
  push32((uint32_t)(EDX));
  /* 11451d40 call 0x114533e0 */
  push32(0x11451d45u); f_114533e0();
  /* 11451d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451d48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451d4b push eax */
  push32((uint32_t)(EAX));
  /* 11451d4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451d4f push ecx */
  push32((uint32_t)(ECX));
  /* 11451d50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451d53 push edx */
  push32((uint32_t)(EDX));
  /* 11451d54 call 0x11451d80 */
  push32(0x11451d59u); f_11451d80();
  /* 11451d59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451d5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11451d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451d62 push eax */
  push32((uint32_t)(EAX));
  /* 11451d63 call 0x11453470 */
  push32(0x11451d68u); f_11453470();
  /* 11451d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11451d6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11451d6e:;
  /* 11451d6e mov esp, ebp */
  ESP = (EBP);
  /* 11451d70 pop ebp */
  EBP = (pop32());
  /* 11451d71 ret  */
  ESPCHK(0x11451cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d80 @ 0x11451d80 (627 bytes, 182 insns) */
void f_11451d80(void) {
  FTRACE(0x11451d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11451d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11451d81 mov ebp, esp */
  EBP = (ESP);
  /* 11451d83 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451d89 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11451d90 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11451d93 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11451d99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451d9d jne 0x11451da6 */
  if (!C.zf) goto L_11451da6;
  /* 11451d9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11451da1 jmp 0x11451fef */
  goto L_11451fef;
L_11451da6:;
  /* 11451da6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451da9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11451dac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451daf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11451db2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11451db5 mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 11451dbc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11451dc1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11451dc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11451dc6 je 0x11451dd8 */
  if (C.zf) goto L_11451dd8;
  /* 11451dc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11451dca push 0 */
  push32((uint32_t)(0x0u));
  /* 11451dcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451dcf push edx */
  push32((uint32_t)(EDX));
  /* 11451dd0 call 0x11451c30 */
  push32(0x11451dd5u); f_11451c30();
  /* 11451dd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11451dd8:;
  /* 11451dd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451ddb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11451dde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451de1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11451de4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11451de7 mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 11451dee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11451df3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11451df8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451dfa je 0x11451f0c */
  if (C.zf) goto L_11451f0c;
  /* 11451e00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451e03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11451e06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11451e0d:;
  /* 11451e0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451e10 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451e13 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451e16 jae 0x11451f0a */
  if (!C.cf) goto L_11451f0a;
  /* 11451e1c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11451e22 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11451e25:;
  /* 11451e25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451e28 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11451e2e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451e30 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451e36 jge 0x11451e97 */
  if ((C.sf==C.of)) goto L_11451e97;
  /* 11451e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451e3b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451e3e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451e41 jae 0x11451e97 */
  if (!C.cf) goto L_11451e97;
  /* 11451e43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451e46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11451e48 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11451e4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11451e51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451e54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11451e57 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11451e5e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451e61 jne 0x11451e81 */
  if (!C.zf) goto L_11451e81;
  /* 11451e63 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11451e69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451e6c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11451e72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451e75 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11451e78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451e7b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451e7e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11451e81:;
  /* 11451e81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451e84 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11451e8a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11451e8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451e8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451e92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11451e95 jmp 0x11451e25 */
  goto L_11451e25;
L_11451e97:;
  /* 11451e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11451e99 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11451e9f push edx */
  push32((uint32_t)(EDX));
  /* 11451ea0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451ea3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11451ea9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451eab push eax */
  push32((uint32_t)(EAX));
  /* 11451eac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11451eb2 push edx */
  push32((uint32_t)(EDX));
  /* 11451eb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451eb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11451eb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451ebc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11451ebf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11451ec2 mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 11451ec9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11451ecc push eax */
  push32((uint32_t)(EAX));
  /* 11451ecd call dword ptr [0x11477400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477400))), 0x11451ed3u);
  /* 11451ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451ed5 je 0x11451efa */
  if (C.zf) goto L_11451efa;
  /* 11451ed7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11451eda add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11451ee0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11451ee3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11451ee6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11451eec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11451eee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451ef4 jge 0x11451ef8 */
  if ((C.sf==C.of)) goto L_11451ef8;
  /* 11451ef6 jmp 0x11451f0a */
  goto L_11451f0a;
L_11451ef8:;
  /* 11451ef8 jmp 0x11451f05 */
  goto L_11451f05;
L_11451efa:;
  /* 11451efa call dword ptr [0x114772f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f4))), 0x11451f00u);
  /* 11451f00 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11451f03 jmp 0x11451f0a */
  goto L_11451f0a;
L_11451f05:;
  /* 11451f05 jmp 0x11451e0d */
  goto L_11451e0d;
L_11451f0a:;
  /* 11451f0a jmp 0x11451f5c */
  goto L_11451f5c;
L_11451f0c:;
  /* 11451f0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11451f0e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11451f14 push ecx */
  push32((uint32_t)(ECX));
  /* 11451f15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11451f18 push edx */
  push32((uint32_t)(EDX));
  /* 11451f19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451f1c push eax */
  push32((uint32_t)(EAX));
  /* 11451f1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451f20 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11451f23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451f26 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11451f29 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11451f2c mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 11451f33 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11451f36 push ecx */
  push32((uint32_t)(ECX));
  /* 11451f37 call dword ptr [0x11477400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477400))), 0x11451f3du);
  /* 11451f3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451f3f je 0x11451f53 */
  if (C.zf) goto L_11451f53;
  /* 11451f41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11451f48 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11451f4e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11451f51 jmp 0x11451f5c */
  goto L_11451f5c;
L_11451f53:;
  /* 11451f53 call dword ptr [0x114772f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f4))), 0x11451f59u);
  /* 11451f59 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11451f5c:;
  /* 11451f5c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451f60 jne 0x11451fe6 */
  if (!C.zf) goto L_11451fe6;
  /* 11451f66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451f6a je 0x11451f9a */
  if (C.zf) goto L_11451f9a;
  /* 11451f6c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451f70 jne 0x11451f89 */
  if (!C.zf) goto L_11451f89;
  /* 11451f72 call 0x114511e0 */
  push32(0x11451f77u); f_114511e0();
  /* 11451f77 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11451f7d call 0x114511f0 */
  push32(0x11451f82u); f_114511f0();
  /* 11451f82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11451f85 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11451f87 jmp 0x11451f95 */
  goto L_11451f95;
L_11451f89:;
  /* 11451f89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11451f8c push edx */
  push32((uint32_t)(EDX));
  /* 11451f8d call 0x11451140 */
  push32(0x11451f92u); f_11451140();
  /* 11451f92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11451f95:;
  /* 11451f95 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11451f98 jmp 0x11451fef */
  goto L_11451fef;
L_11451f9a:;
  /* 11451f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451f9d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11451fa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11451fa3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11451fa6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11451fa9 mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 11451fb0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11451fb5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11451fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11451fba je 0x11451fcb */
  if (C.zf) goto L_11451fcb;
  /* 11451fbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11451fbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11451fc2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11451fc5 jne 0x11451fcb */
  if (!C.zf) goto L_11451fcb;
  /* 11451fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11451fc9 jmp 0x11451fef */
  goto L_11451fef;
L_11451fcb:;
  /* 11451fcb call 0x114511e0 */
  push32(0x11451fd0u); f_114511e0();
  /* 11451fd0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11451fd6 call 0x114511f0 */
  push32(0x11451fdbu); f_114511f0();
  /* 11451fdb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11451fe1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11451fe4 jmp 0x11451fef */
  goto L_11451fef;
L_11451fe6:;
  /* 11451fe6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11451fe9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11451fef:;
  /* 11451fef mov esp, ebp */
  ESP = (EBP);
  /* 11451ff1 pop ebp */
  EBP = (pop32());
  /* 11451ff2 ret  */
  ESPCHK(0x11451d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012000 @ 0x11452000 (199 bytes, 68 insns) */
void f_11452000(void) {
  FTRACE(0x11452000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452000 push ebp */
  push32((uint32_t)(EBP));
  /* 11452001 mov ebp, esp */
  EBP = (ESP);
  /* 11452003 push ecx */
  push32((uint32_t)(ECX));
  /* 11452004 push ebx */
  push32((uint32_t)(EBX));
  /* 11452005 push esi */
  push32((uint32_t)(ESI));
  /* 11452006 push edi */
  push32((uint32_t)(EDI));
L_11452007:;
  /* 11452007 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145200b jne 0x1145202b */
  if (!C.zf) goto L_1145202b;
  /* 1145200d push 0x114708a4 */
  push32((uint32_t)(0x114708a4u));
  /* 11452012 push 0 */
  push32((uint32_t)(0x0u));
  /* 11452014 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11452016 push 0x1147097c */
  push32((uint32_t)(0x1147097cu));
  /* 1145201b push 2 */
  push32((uint32_t)(0x2u));
  /* 1145201d call 0x11447960 */
  push32(0x11452022u); f_11447960();
  /* 11452022 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452025 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452028 jne 0x1145202b */
  if (!C.zf) goto L_1145202b;
  /* 1145202a int3  */
  x86_unimpl("int3 @ 0x1145202a");
L_1145202b:;
  /* 1145202b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145202d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145202f jne 0x11452007 */
  if (!C.zf) goto L_11452007;
  /* 11452031 mov ecx, dword ptr [0x11474b78] */
  ECX = (r32((uint32_t)(0x11474b78)));
  /* 11452037 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145203a mov dword ptr [0x11474b78], ecx */
  w32((uint32_t)(0x11474b78), (ECX));
  /* 11452040 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452043 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11452046 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11452048 push 0x1147097c */
  push32((uint32_t)(0x1147097cu));
  /* 1145204d push 2 */
  push32((uint32_t)(0x2u));
  /* 1145204f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11452054 call 0x114485f0 */
  push32(0x11452059u); f_114485f0();
  /* 11452059 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145205c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145205f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11452062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452065 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452069 je 0x11452086 */
  if (C.zf) goto L_11452086;
  /* 1145206b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145206e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11452071 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11452074 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452077 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1145207a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145207d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11452084 jmp 0x114520ab */
  goto L_114520ab;
L_11452086:;
  /* 11452086 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452089 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1145208c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1145208f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452092 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11452095 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452098 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145209b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145209e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 114520a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114520a4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_114520ab:;
  /* 114520ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114520ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114520b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 114520b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114520b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114520b9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 114520c0 pop edi */
  EDI = (pop32());
  /* 114520c1 pop esi */
  ESI = (pop32());
  /* 114520c2 pop ebx */
  EBX = (pop32());
  /* 114520c3 mov esp, ebp */
  ESP = (EBP);
  /* 114520c5 pop ebp */
  EBP = (pop32());
  /* 114520c6 ret  */
  ESPCHK(0x11452000u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x114520d0 (50 bytes, 17 insns) */
void f_114520d0(void) {
  FTRACE(0x114520d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114520d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114520d1 mov ebp, esp */
  EBP = (ESP);
  /* 114520d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114520d6 cmp eax, dword ptr [0x114763bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114763bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114520dc jb 0x114520e2 */
  if (C.cf) goto L_114520e2;
  /* 114520de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114520e0 jmp 0x11452100 */
  goto L_11452100;
L_114520e2:;
  /* 114520e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114520e5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114520e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114520eb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114520ee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114520f1 mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 114520f8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114520fd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11452100:;
  /* 11452100 pop ebp */
  EBP = (pop32());
  /* 11452101 ret  */
  ESPCHK(0x114520d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012110 @ 0x11452110 (300 bytes, 80 insns) */
void f_11452110(void) {
  FTRACE(0x11452110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452110 push ebp */
  push32((uint32_t)(EBP));
  /* 11452111 mov ebp, esp */
  EBP = (ESP);
  /* 11452113 push ecx */
  push32((uint32_t)(ECX));
  /* 11452114 cmp dword ptr [0x11475f80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11475f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145211b jne 0x11452129 */
  if (!C.zf) goto L_11452129;
  /* 1145211d mov dword ptr [0x11475f80], 0x200 */
  w32((uint32_t)(0x11475f80), (0x200u));
  /* 11452127 jmp 0x1145213c */
  goto L_1145213c;
L_11452129:;
  /* 11452129 cmp dword ptr [0x11475f80], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11475f80))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452130 jge 0x1145213c */
  if ((C.sf==C.of)) goto L_1145213c;
  /* 11452132 mov dword ptr [0x11475f80], 0x14 */
  w32((uint32_t)(0x11475f80), (0x14u));
L_1145213c:;
  /* 1145213c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11452141 push 0x11470988 */
  push32((uint32_t)(0x11470988u));
  /* 11452146 push 2 */
  push32((uint32_t)(0x2u));
  /* 11452148 push 4 */
  push32((uint32_t)(0x4u));
  /* 1145214a mov eax, dword ptr [0x11475f80] */
  EAX = (r32((uint32_t)(0x11475f80)));
  /* 1145214f push eax */
  push32((uint32_t)(EAX));
  /* 11452150 call 0x11448a00 */
  push32(0x11452155u); f_11448a00();
  /* 11452155 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452158 mov dword ptr [0x11474c30], eax */
  w32((uint32_t)(0x11474c30), (EAX));
  /* 1145215d cmp dword ptr [0x11474c30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452164 jne 0x114521a5 */
  if (!C.zf) goto L_114521a5;
  /* 11452166 mov dword ptr [0x11475f80], 0x14 */
  w32((uint32_t)(0x11475f80), (0x14u));
  /* 11452170 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11452175 push 0x11470988 */
  push32((uint32_t)(0x11470988u));
  /* 1145217a push 2 */
  push32((uint32_t)(0x2u));
  /* 1145217c push 4 */
  push32((uint32_t)(0x4u));
  /* 1145217e mov ecx, dword ptr [0x11475f80] */
  ECX = (r32((uint32_t)(0x11475f80)));
  /* 11452184 push ecx */
  push32((uint32_t)(ECX));
  /* 11452185 call 0x11448a00 */
  push32(0x1145218au); f_11448a00();
  /* 1145218a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145218d mov dword ptr [0x11474c30], eax */
  w32((uint32_t)(0x11474c30), (EAX));
  /* 11452192 cmp dword ptr [0x11474c30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452199 jne 0x114521a5 */
  if (!C.zf) goto L_114521a5;
  /* 1145219b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1145219d call 0x11447470 */
  push32(0x114521a2u); f_11447470();
  /* 114521a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114521a5:;
  /* 114521a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114521ac jmp 0x114521b7 */
  goto L_114521b7;
L_114521ae:;
  /* 114521ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114521b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114521b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_114521b7:;
  /* 114521b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114521bb jge 0x114521d6 */
  if ((C.sf==C.of)) goto L_114521d6;
  /* 114521bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114521c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114521c3 add eax, 0x11473240 */
  { uint32_t _a=(EAX),_b=(0x11473240u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114521c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114521cb mov edx, dword ptr [0x11474c30] */
  EDX = (r32((uint32_t)(0x11474c30)));
  /* 114521d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 114521d4 jmp 0x114521ae */
  goto L_114521ae;
L_114521d6:;
  /* 114521d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114521dd jmp 0x114521e8 */
  goto L_114521e8;
L_114521df:;
  /* 114521df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114521e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114521e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114521e8:;
  /* 114521e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114521ec jge 0x11452238 */
  if ((C.sf==C.of)) goto L_11452238;
  /* 114521ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114521f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114521f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114521f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114521fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114521fd mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 11452204 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452208 je 0x11452226 */
  if (C.zf) goto L_11452226;
  /* 1145220a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145220d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11452210 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452213 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11452216 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11452219 mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 11452220 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452224 jne 0x11452236 */
  if (!C.zf) goto L_11452236;
L_11452226:;
  /* 11452226 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452229 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1145222c mov dword ptr [ecx + 0x11473250], 0xffffffff */
  w32((uint32_t)(ECX + 0x11473250), (0xffffffffu));
L_11452236:;
  /* 11452236 jmp 0x114521df */
  goto L_114521df;
L_11452238:;
  /* 11452238 mov esp, ebp */
  ESP = (EBP);
  /* 1145223a pop ebp */
  EBP = (pop32());
  /* 1145223b ret  */
  ESPCHK(0x11452110u, _esp0);
  ESP += 4; return;
}

/* FUN_10012240 @ 0x11452240 (26 bytes, 9 insns) */
void f_11452240(void) {
  FTRACE(0x11452240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452240 push ebp */
  push32((uint32_t)(EBP));
  /* 11452241 mov ebp, esp */
  EBP = (ESP);
  /* 11452243 call 0x114536e0 */
  push32(0x11452248u); f_114536e0();
  /* 11452248 movsx eax, byte ptr [0x114748d8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x114748d8))));
  /* 1145224f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11452251 je 0x11452258 */
  if (C.zf) goto L_11452258;
  /* 11452253 call 0x114534a0 */
  push32(0x11452258u); f_114534a0();
L_11452258:;
  /* 11452258 pop ebp */
  EBP = (pop32());
  /* 11452259 ret  */
  ESPCHK(0x11452240u, _esp0);
  ESP += 4; return;
}

/* FUN_10012260 @ 0x11452260 (61 bytes, 20 insns) */
void f_11452260(void) {
  FTRACE(0x11452260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452260 push ebp */
  push32((uint32_t)(EBP));
  /* 11452261 mov ebp, esp */
  EBP = (ESP);
  /* 11452263 cmp dword ptr [ebp + 8], 0x11473240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11473240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145226a jb 0x1145228e */
  if (C.cf) goto L_1145228e;
  /* 1145226c cmp dword ptr [ebp + 8], 0x114734a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114734a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452273 ja 0x1145228e */
  if ((!C.cf&&!C.zf)) goto L_1145228e;
  /* 11452275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452278 sub eax, 0x11473240 */
  { uint32_t _a=(EAX),_b=(0x11473240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145227d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11452280 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452283 push eax */
  push32((uint32_t)(EAX));
  /* 11452284 call 0x1144b210 */
  push32(0x11452289u); f_1144b210();
  /* 11452289 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145228c jmp 0x1145229b */
  goto L_1145229b;
L_1145228e:;
  /* 1145228e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452291 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452294 push ecx */
  push32((uint32_t)(ECX));
  /* 11452295 call dword ptr [0x11477370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477370))), 0x1145229bu);
L_1145229b:;
  /* 1145229b pop ebp */
  EBP = (pop32());
  /* 1145229c ret  */
  ESPCHK(0x11452260u, _esp0);
  ESP += 4; return;
}

/* FUN_100122a0 @ 0x114522a0 (41 bytes, 16 insns) */
void f_114522a0(void) {
  FTRACE(0x114522a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114522a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114522a1 mov ebp, esp */
  EBP = (ESP);
  /* 114522a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114522a7 jge 0x114522ba */
  if ((C.sf==C.of)) goto L_114522ba;
  /* 114522a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114522ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114522af push eax */
  push32((uint32_t)(EAX));
  /* 114522b0 call 0x1144b210 */
  push32(0x114522b5u); f_1144b210();
  /* 114522b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114522b8 jmp 0x114522c7 */
  goto L_114522c7;
L_114522ba:;
  /* 114522ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114522bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114522c0 push ecx */
  push32((uint32_t)(ECX));
  /* 114522c1 call dword ptr [0x11477370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477370))), 0x114522c7u);
L_114522c7:;
  /* 114522c7 pop ebp */
  EBP = (pop32());
  /* 114522c8 ret  */
  ESPCHK(0x114522a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122d0 @ 0x114522d0 (61 bytes, 20 insns) */
void f_114522d0(void) {
  FTRACE(0x114522d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114522d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114522d1 mov ebp, esp */
  EBP = (ESP);
  /* 114522d3 cmp dword ptr [ebp + 8], 0x11473240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11473240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114522da jb 0x114522fe */
  if (C.cf) goto L_114522fe;
  /* 114522dc cmp dword ptr [ebp + 8], 0x114734a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x114734a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114522e3 ja 0x114522fe */
  if ((!C.cf&&!C.zf)) goto L_114522fe;
  /* 114522e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114522e8 sub eax, 0x11473240 */
  { uint32_t _a=(EAX),_b=(0x11473240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114522ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114522f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114522f3 push eax */
  push32((uint32_t)(EAX));
  /* 114522f4 call 0x1144b2b0 */
  push32(0x114522f9u); f_1144b2b0();
  /* 114522f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114522fc jmp 0x1145230b */
  goto L_1145230b;
L_114522fe:;
  /* 114522fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452301 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452304 push ecx */
  push32((uint32_t)(ECX));
  /* 11452305 call dword ptr [0x1147736c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147736c))), 0x1145230bu);
L_1145230b:;
  /* 1145230b pop ebp */
  EBP = (pop32());
  /* 1145230c ret  */
  ESPCHK(0x114522d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012310 @ 0x11452310 (41 bytes, 16 insns) */
void f_11452310(void) {
  FTRACE(0x11452310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452310 push ebp */
  push32((uint32_t)(EBP));
  /* 11452311 mov ebp, esp */
  EBP = (ESP);
  /* 11452313 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452317 jge 0x1145232a */
  if ((C.sf==C.of)) goto L_1145232a;
  /* 11452319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145231c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145231f push eax */
  push32((uint32_t)(EAX));
  /* 11452320 call 0x1144b2b0 */
  push32(0x11452325u); f_1144b2b0();
  /* 11452325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452328 jmp 0x11452337 */
  goto L_11452337;
L_1145232a:;
  /* 1145232a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145232d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452330 push ecx */
  push32((uint32_t)(ECX));
  /* 11452331 call dword ptr [0x1147736c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147736c))), 0x11452337u);
L_11452337:;
  /* 11452337 pop ebp */
  EBP = (pop32());
  /* 11452338 ret  */
  ESPCHK(0x11452310u, _esp0);
  ESP += 4; return;
}

/* FUN_10012340 @ 0x11452340 (119 bytes, 34 insns) */
void f_11452340(void) {
  FTRACE(0x11452340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452340 push ebp */
  push32((uint32_t)(EBP));
  /* 11452341 mov ebp, esp */
  EBP = (ESP);
  /* 11452343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452346 push 0x11474c2c */
  push32((uint32_t)(0x11474c2cu));
  /* 1145234b call dword ptr [0x11477414] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477414))), 0x11452351u);
  /* 11452351 cmp dword ptr [0x11474c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452358 je 0x11452378 */
  if (C.zf) goto L_11452378;
  /* 1145235a push 0x11474c2c */
  push32((uint32_t)(0x11474c2cu));
  /* 1145235f call dword ptr [0x11477404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477404))), 0x11452365u);
  /* 11452365 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11452367 call 0x1144b210 */
  push32(0x1145236cu); f_1144b210();
  /* 1145236c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145236f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11452376 jmp 0x1145237f */
  goto L_1145237f;
L_11452378:;
  /* 11452378 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1145237f:;
  /* 1145237f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11452383 push eax */
  push32((uint32_t)(EAX));
  /* 11452384 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452387 push ecx */
  push32((uint32_t)(ECX));
  /* 11452388 call 0x114523c0 */
  push32(0x1145238du); f_114523c0();
  /* 1145238d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452390 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11452393 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452397 je 0x114523a5 */
  if (C.zf) goto L_114523a5;
  /* 11452399 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1145239b call 0x1144b2b0 */
  push32(0x114523a0u); f_1144b2b0();
  /* 114523a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114523a3 jmp 0x114523b0 */
  goto L_114523b0;
L_114523a5:;
  /* 114523a5 push 0x11474c2c */
  push32((uint32_t)(0x11474c2cu));
  /* 114523aa call dword ptr [0x11477404] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477404))), 0x114523b0u);
L_114523b0:;
  /* 114523b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114523b3 mov esp, ebp */
  ESP = (EBP);
  /* 114523b5 pop ebp */
  EBP = (pop32());
  /* 114523b6 ret  */
  ESPCHK(0x11452340u, _esp0);
  ESP += 4; return;
}

/* FUN_100123c0 @ 0x114523c0 (160 bytes, 50 insns) */
void f_114523c0(void) {
  FTRACE(0x114523c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114523c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114523c1 mov ebp, esp */
  EBP = (ESP);
  /* 114523c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114523c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114523ca jne 0x114523d3 */
  if (!C.zf) goto L_114523d3;
  /* 114523cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114523ce jmp 0x1145245c */
  goto L_1145245c;
L_114523d3:;
  /* 114523d3 cmp dword ptr [0x11474b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114523da jne 0x1145240a */
  if (!C.zf) goto L_1145240a;
  /* 114523dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114523df and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114523e4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114523e9 jle 0x114523fb */
  if ((C.zf||C.sf!=C.of)) goto L_114523fb;
  /* 114523eb call 0x114511e0 */
  push32(0x114523f0u); f_114511e0();
  /* 114523f0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 114523f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114523f9 jmp 0x1145245c */
  goto L_1145245c;
L_114523fb:;
  /* 114523fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114523fe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11452401 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11452403 mov eax, 1 */
  EAX = (0x1u);
  /* 11452408 jmp 0x1145245c */
  goto L_1145245c;
L_1145240a:;
  /* 1145240a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11452411 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11452414 push eax */
  push32((uint32_t)(EAX));
  /* 11452415 push 0 */
  push32((uint32_t)(0x0u));
  /* 11452417 mov ecx, dword ptr [0x11472fc4] */
  ECX = (r32((uint32_t)(0x11472fc4)));
  /* 1145241d push ecx */
  push32((uint32_t)(ECX));
  /* 1145241e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452421 push edx */
  push32((uint32_t)(EDX));
  /* 11452422 push 1 */
  push32((uint32_t)(0x1u));
  /* 11452424 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11452427 push eax */
  push32((uint32_t)(EAX));
  /* 11452428 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1145242d mov ecx, dword ptr [0x11474b68] */
  ECX = (r32((uint32_t)(0x11474b68)));
  /* 11452433 push ecx */
  push32((uint32_t)(ECX));
  /* 11452434 call dword ptr [0x11477390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477390))), 0x1145243au);
  /* 1145243a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1145243d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452441 je 0x11452449 */
  if (C.zf) goto L_11452449;
  /* 11452443 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452447 je 0x11452459 */
  if (C.zf) goto L_11452459;
L_11452449:;
  /* 11452449 call 0x114511e0 */
  push32(0x1145244eu); f_114511e0();
  /* 1145244e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11452454 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11452457 jmp 0x1145245c */
  goto L_1145245c;
L_11452459:;
  /* 11452459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1145245c:;
  /* 1145245c mov esp, ebp */
  ESP = (EBP);
  /* 1145245e pop ebp */
  EBP = (pop32());
  /* 1145245f ret  */
  ESPCHK(0x114523c0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11452460 (32 bytes, 18 insns) */
void f_11452460(void) {
  FTRACE(0x11452460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452460 push ebp */
  push32((uint32_t)(EBP));
  /* 11452461 mov ebp, esp */
  EBP = (ESP);
  /* 11452463 push ebx */
  push32((uint32_t)(EBX));
  /* 11452464 push esi */
  push32((uint32_t)(ESI));
  /* 11452465 push edi */
  push32((uint32_t)(EDI));
  /* 11452466 push ebp */
  push32((uint32_t)(EBP));
  /* 11452467 push 0 */
  push32((uint32_t)(0x0u));
  /* 11452469 push 0 */
  push32((uint32_t)(0x0u));
  /* 1145246b push 0x11452478 */
  push32((uint32_t)(0x11452478u));
  /* 11452470 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11452473 call 0x11458d5e */
  push32(0x11452478u); f_11458d5e();
  /* 11452478 pop ebp */
  EBP = (pop32());
  /* 11452479 pop edi */
  EDI = (pop32());
  /* 1145247a pop esi */
  ESI = (pop32());
  /* 1145247b pop ebx */
  EBX = (pop32());
  /* 1145247c mov esp, ebp */
  ESP = (EBP);
  /* 1145247e pop ebp */
  EBP = (pop32());
  /* 1145247f ret  */
  ESPCHK(0x11452460u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x114524a2 (104 bytes, 33 insns) */
void f_114524a2(void) {
  FTRACE(0x114524a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114524a2 push ebx */
  push32((uint32_t)(EBX));
  /* 114524a3 push esi */
  push32((uint32_t)(ESI));
  /* 114524a4 push edi */
  push32((uint32_t)(EDI));
  /* 114524a5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 114524a9 push eax */
  push32((uint32_t)(EAX));
  /* 114524aa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 114524ac push 0x11452480 */
  push32((uint32_t)(0x11452480u));
  /* 114524b1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 114524b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_114524bf:;
  /* 114524bf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 114524c3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 114524c6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 114524c9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114524cc je 0x114524fc */
  if (C.zf) goto L_114524fc;
  /* 114524ce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114524d2 je 0x114524fc */
  if (C.zf) goto L_114524fc;
  /* 114524d4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 114524d7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 114524da mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 114524de mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 114524e1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114524e6 jne 0x114524fa */
  if (!C.zf) goto L_114524fa;
  /* 114524e8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 114524ed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 114524f1 call 0x11452536 */
  push32(0x114524f6u); f_11452536();
  /* 114524f6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x114524fau);
L_114524fa:;
  /* 114524fa jmp 0x114524bf */
  goto L_114524bf;
L_114524fc:;
  /* 114524fc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11452503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452506 pop edi */
  EDI = (pop32());
  /* 11452507 pop esi */
  ESI = (pop32());
  /* 11452508 pop ebx */
  EBX = (pop32());
  /* 11452509 ret  */
  ESPCHK(0x114524a2u, _esp0);
  ESP += 4; return;
}

/* FUN_10012536 @ 0x11452536 (24 bytes, 10 insns) */
void f_11452536(void) {
  FTRACE(0x11452536u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452536 push ebx */
  push32((uint32_t)(EBX));
  /* 11452537 push ecx */
  push32((uint32_t)(ECX));
  /* 11452538 mov ebx, 0x114734d8 */
  EBX = (0x114734d8u);
  /* 1145253d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452540 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11452543 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11452546 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11452549 pop ecx */
  ECX = (pop32());
  /* 1145254a pop ebx */
  EBX = (pop32());
  /* 1145254b ret 4 */
  ESPCHK(0x11452536u, _esp0);
  ESP += 8; return;
}

/* FUN_10012615 @ 0x11452615 (27 bytes, 11 insns) */
void f_11452615(void) {
  FTRACE(0x11452615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452615 push ebp */
  push32((uint32_t)(EBP));
  /* 11452616 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1145261a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1145261c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1145261f push eax */
  push32((uint32_t)(EAX));
  /* 11452620 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11452623 push eax */
  push32((uint32_t)(EAX));
  /* 11452624 call 0x114524a2 */
  push32(0x11452629u); f_114524a2();
  /* 11452629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145262c pop ebp */
  EBP = (pop32());
  /* 1145262d ret 4 */
  ESPCHK(0x11452615u, _esp0);
  ESP += 8; return;
}

/* FUN_10012630 @ 0x11452630 (970 bytes, 340 insns) */
void f_11452630(void) {
  FTRACE(0x11452630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452630 push ebp */
  push32((uint32_t)(EBP));
  /* 11452631 mov ebp, esp */
  EBP = (ESP);
  /* 11452633 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11452635 push 0x114709d8 */
  push32((uint32_t)(0x114709d8u));
  /* 1145263a push 0x11452558 */
  push32((uint32_t)(0x11452558u));
  /* 1145263f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11452645 push eax */
  push32((uint32_t)(EAX));
  /* 11452646 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1145264d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452650 push ebx */
  push32((uint32_t)(EBX));
  /* 11452651 push esi */
  push32((uint32_t)(ESI));
  /* 11452652 push edi */
  push32((uint32_t)(EDI));
  /* 11452653 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11452656 cmp dword ptr [0x11474b7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145265d jne 0x114526b6 */
  if (!C.zf) goto L_114526b6;
  /* 1145265f push 1 */
  push32((uint32_t)(0x1u));
  /* 11452661 push 0x11470944 */
  push32((uint32_t)(0x11470944u));
  /* 11452666 push 1 */
  push32((uint32_t)(0x1u));
  /* 11452668 push 0x11470944 */
  push32((uint32_t)(0x11470944u));
  /* 1145266d push 0 */
  push32((uint32_t)(0x0u));
  /* 1145266f push 0 */
  push32((uint32_t)(0x0u));
  /* 11452671 call dword ptr [0x11477324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477324))), 0x11452677u);
  /* 11452677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11452679 je 0x11452687 */
  if (C.zf) goto L_11452687;
  /* 1145267b mov dword ptr [0x11474b7c], 1 */
  w32((uint32_t)(0x11474b7c), (0x1u));
  /* 11452685 jmp 0x114526b6 */
  goto L_114526b6;
L_11452687:;
  /* 11452687 push 1 */
  push32((uint32_t)(0x1u));
  /* 11452689 push 0x11470940 */
  push32((uint32_t)(0x11470940u));
  /* 1145268e push 1 */
  push32((uint32_t)(0x1u));
  /* 11452690 push 0x11470940 */
  push32((uint32_t)(0x11470940u));
  /* 11452695 push 0 */
  push32((uint32_t)(0x0u));
  /* 11452697 push 0 */
  push32((uint32_t)(0x0u));
  /* 11452699 call dword ptr [0x11477328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477328))), 0x1145269fu);
  /* 1145269f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114526a1 je 0x114526af */
  if (C.zf) goto L_114526af;
  /* 114526a3 mov dword ptr [0x11474b7c], 2 */
  w32((uint32_t)(0x11474b7c), (0x2u));
  /* 114526ad jmp 0x114526b6 */
  goto L_114526b6;
L_114526af:;
  /* 114526af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114526b1 jmp 0x11452a14 */
  goto L_11452a14;
L_114526b6:;
  /* 114526b6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114526ba jle 0x114526cf */
  if ((C.zf||C.sf!=C.of)) goto L_114526cf;
  /* 114526bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114526bf push eax */
  push32((uint32_t)(EAX));
  /* 114526c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 114526c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114526c4 call 0x11452a30 */
  push32(0x114526c9u); f_11452a30();
  /* 114526c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114526cc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_114526cf:;
  /* 114526cf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114526d3 jle 0x114526e8 */
  if ((C.zf||C.sf!=C.of)) goto L_114526e8;
  /* 114526d5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114526d8 push edx */
  push32((uint32_t)(EDX));
  /* 114526d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 114526dc push eax */
  push32((uint32_t)(EAX));
  /* 114526dd call 0x11452a30 */
  push32(0x114526e2u); f_11452a30();
  /* 114526e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114526e5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_114526e8:;
  /* 114526e8 cmp dword ptr [0x11474b7c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11474b7c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114526ef jne 0x11452714 */
  if (!C.zf) goto L_11452714;
  /* 114526f1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114526f4 push ecx */
  push32((uint32_t)(ECX));
  /* 114526f5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114526f8 push edx */
  push32((uint32_t)(EDX));
  /* 114526f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 114526fc push eax */
  push32((uint32_t)(EAX));
  /* 114526fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11452700 push ecx */
  push32((uint32_t)(ECX));
  /* 11452701 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11452704 push edx */
  push32((uint32_t)(EDX));
  /* 11452705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452708 push eax */
  push32((uint32_t)(EAX));
  /* 11452709 call dword ptr [0x11477328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477328))), 0x1145270fu);
  /* 1145270f jmp 0x11452a14 */
  goto L_11452a14;
L_11452714:;
  /* 11452714 cmp dword ptr [0x11474b7c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11474b7c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145271b jne 0x11452a12 */
  if (!C.zf) goto L_11452a12;
  /* 11452721 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452725 jne 0x11452730 */
  if (!C.zf) goto L_11452730;
  /* 11452727 mov ecx, dword ptr [0x11474b68] */
  ECX = (r32((uint32_t)(0x11474b68)));
  /* 1145272d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11452730:;
  /* 11452730 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452734 je 0x11452740 */
  if (C.zf) goto L_11452740;
  /* 11452736 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145273a jne 0x114528bc */
  if (!C.zf) goto L_114528bc;
L_11452740:;
  /* 11452740 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11452743 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452746 jne 0x11452752 */
  if (!C.zf) goto L_11452752;
  /* 11452748 mov eax, 2 */
  EAX = (0x2u);
  /* 1145274d jmp 0x11452a14 */
  goto L_11452a14;
L_11452752:;
  /* 11452752 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452756 jle 0x11452762 */
  if ((C.zf||C.sf!=C.of)) goto L_11452762;
  /* 11452758 mov eax, 1 */
  EAX = (0x1u);
  /* 1145275d jmp 0x11452a14 */
  goto L_11452a14;
L_11452762:;
  /* 11452762 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452766 jle 0x11452772 */
  if ((C.zf||C.sf!=C.of)) goto L_11452772;
  /* 11452768 mov eax, 3 */
  EAX = (0x3u);
  /* 1145276d jmp 0x11452a14 */
  goto L_11452a14;
L_11452772:;
  /* 11452772 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11452775 push eax */
  push32((uint32_t)(EAX));
  /* 11452776 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11452779 push ecx */
  push32((uint32_t)(ECX));
  /* 1145277a call dword ptr [0x1147735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147735c))), 0x11452780u);
  /* 11452780 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11452782 jne 0x1145278b */
  if (!C.zf) goto L_1145278b;
  /* 11452784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11452786 jmp 0x11452a14 */
  goto L_11452a14;
L_1145278b:;
  /* 1145278b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145278f jne 0x11452797 */
  if (!C.zf) goto L_11452797;
  /* 11452791 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452795 je 0x114527c4 */
  if (C.zf) goto L_114527c4;
L_11452797:;
  /* 11452797 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145279b jne 0x114527a3 */
  if (!C.zf) goto L_114527a3;
  /* 1145279d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114527a1 je 0x114527c4 */
  if (C.zf) goto L_114527c4;
L_114527a3:;
  /* 114527a3 push 0x11470998 */
  push32((uint32_t)(0x11470998u));
  /* 114527a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114527aa push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 114527af push 0x11470990 */
  push32((uint32_t)(0x11470990u));
  /* 114527b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 114527b6 call 0x11447960 */
  push32(0x114527bbu); f_11447960();
  /* 114527bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114527be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114527c1 jne 0x114527c4 */
  if (!C.zf) goto L_114527c4;
  /* 114527c3 int3  */
  x86_unimpl("int3 @ 0x114527c3");
L_114527c4:;
  /* 114527c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114527c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114527c8 jne 0x1145278b */
  if (!C.zf) goto L_1145278b;
  /* 114527ca cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114527ce jle 0x11452843 */
  if ((C.zf||C.sf!=C.of)) goto L_11452843;
  /* 114527d0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114527d4 jae 0x114527e0 */
  if (!C.cf) goto L_114527e0;
  /* 114527d6 mov eax, 3 */
  EAX = (0x3u);
  /* 114527db jmp 0x11452a14 */
  goto L_11452a14;
L_114527e0:;
  /* 114527e0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 114527e3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 114527e6 jmp 0x114527f1 */
  goto L_114527f1;
L_114527e8:;
  /* 114527e8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 114527eb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114527ee mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_114527f1:;
  /* 114527f1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 114527f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114527f6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 114527f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114527fa je 0x11452839 */
  if (C.zf) goto L_11452839;
  /* 114527fc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 114527ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11452801 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11452804 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11452806 je 0x11452839 */
  if (C.zf) goto L_11452839;
  /* 11452808 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145280b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1145280d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1145280f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11452812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11452814 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11452816 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452818 jl 0x11452837 */
  if ((C.sf!=C.of)) goto L_11452837;
  /* 1145281a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1145281d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1145281f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11452821 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11452824 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11452826 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11452829 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145282b jg 0x11452837 */
  if ((!C.zf&&C.sf==C.of)) goto L_11452837;
  /* 1145282d mov eax, 2 */
  EAX = (0x2u);
  /* 11452832 jmp 0x11452a14 */
  goto L_11452a14;
L_11452837:;
  /* 11452837 jmp 0x114527e8 */
  goto L_114527e8;
L_11452839:;
  /* 11452839 mov eax, 3 */
  EAX = (0x3u);
  /* 1145283e jmp 0x11452a14 */
  goto L_11452a14;
L_11452843:;
  /* 11452843 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452847 jle 0x114528bc */
  if ((C.zf||C.sf!=C.of)) goto L_114528bc;
  /* 11452849 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145284d jae 0x11452859 */
  if (!C.cf) goto L_11452859;
  /* 1145284f mov eax, 1 */
  EAX = (0x1u);
  /* 11452854 jmp 0x11452a14 */
  goto L_11452a14;
L_11452859:;
  /* 11452859 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 1145285c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 1145285f jmp 0x1145286a */
  goto L_1145286a;
L_11452861:;
  /* 11452861 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11452864 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452867 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_1145286a:;
  /* 1145286a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1145286d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1145286f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11452871 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11452873 je 0x114528b2 */
  if (C.zf) goto L_114528b2;
  /* 11452875 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11452878 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1145287a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1145287d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1145287f je 0x114528b2 */
  if (C.zf) goto L_114528b2;
  /* 11452881 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11452884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11452886 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11452888 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 1145288b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1145288d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1145288f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452891 jl 0x114528b0 */
  if ((C.sf!=C.of)) goto L_114528b0;
  /* 11452893 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11452896 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11452898 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1145289a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1145289d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145289f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114528a2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114528a4 jg 0x114528b0 */
  if ((!C.zf&&C.sf==C.of)) goto L_114528b0;
  /* 114528a6 mov eax, 2 */
  EAX = (0x2u);
  /* 114528ab jmp 0x11452a14 */
  goto L_11452a14;
L_114528b0:;
  /* 114528b0 jmp 0x11452861 */
  goto L_11452861;
L_114528b2:;
  /* 114528b2 mov eax, 1 */
  EAX = (0x1u);
  /* 114528b7 jmp 0x11452a14 */
  goto L_11452a14;
L_114528bc:;
  /* 114528bc push 0 */
  push32((uint32_t)(0x0u));
  /* 114528be push 0 */
  push32((uint32_t)(0x0u));
  /* 114528c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 114528c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114528c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114528c7 push edx */
  push32((uint32_t)(EDX));
  /* 114528c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 114528ca mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114528cd push eax */
  push32((uint32_t)(EAX));
  /* 114528ce call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x114528d4u);
  /* 114528d4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 114528d7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114528db jne 0x114528e4 */
  if (!C.zf) goto L_114528e4;
  /* 114528dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114528df jmp 0x11452a14 */
  goto L_11452a14;
L_114528e4:;
  /* 114528e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114528eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114528ee shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 114528f0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114528f3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114528f5 call 0x1144c4b0 */
  push32(0x114528fau); f_1144c4b0();
  /* 114528fa mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 114528fd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11452900 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11452903 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11452906 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1145290d jmp 0x11452926 */
  goto L_11452926;
  /* 1145290f mov eax, 1 */
  EAX = (0x1u);
  /* 11452914 ret  */
  ESPCHK(0x11452630u, _esp0);
  ESP += 4; return;
  /* 11452915 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11452918 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1145291f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11452926:;
  /* 11452926 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145292a jne 0x11452933 */
  if (!C.zf) goto L_11452933;
  /* 1145292c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145292e jmp 0x11452a14 */
  goto L_11452a14;
L_11452933:;
  /* 11452933 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11452936 push edx */
  push32((uint32_t)(EDX));
  /* 11452937 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1145293a push eax */
  push32((uint32_t)(EAX));
  /* 1145293b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1145293e push ecx */
  push32((uint32_t)(ECX));
  /* 1145293f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11452942 push edx */
  push32((uint32_t)(EDX));
  /* 11452943 push 1 */
  push32((uint32_t)(0x1u));
  /* 11452945 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11452948 push eax */
  push32((uint32_t)(EAX));
  /* 11452949 call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x1145294fu);
  /* 1145294f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11452951 jne 0x1145295a */
  if (!C.zf) goto L_1145295a;
  /* 11452953 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11452955 jmp 0x11452a14 */
  goto L_11452a14;
L_1145295a:;
  /* 1145295a push 0 */
  push32((uint32_t)(0x0u));
  /* 1145295c push 0 */
  push32((uint32_t)(0x0u));
  /* 1145295e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11452961 push ecx */
  push32((uint32_t)(ECX));
  /* 11452962 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11452965 push edx */
  push32((uint32_t)(EDX));
  /* 11452966 push 9 */
  push32((uint32_t)(0x9u));
  /* 11452968 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1145296b push eax */
  push32((uint32_t)(EAX));
  /* 1145296c call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x11452972u);
  /* 11452972 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11452975 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452979 jne 0x11452982 */
  if (!C.zf) goto L_11452982;
  /* 1145297b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145297d jmp 0x11452a14 */
  goto L_11452a14;
L_11452982:;
  /* 11452982 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11452989 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145298c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1145298e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452991 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11452993 call 0x1144c4b0 */
  push32(0x11452998u); f_1144c4b0();
  /* 11452998 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1145299b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1145299e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 114529a1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 114529a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 114529ab jmp 0x114529c4 */
  goto L_114529c4;
  /* 114529ad mov eax, 1 */
  EAX = (0x1u);
  /* 114529b2 ret  */
  ESPCHK(0x11452630u, _esp0);
  ESP += 4; return;
  /* 114529b3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114529b6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 114529bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114529c4:;
  /* 114529c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114529c8 jne 0x114529ce */
  if (!C.zf) goto L_114529ce;
  /* 114529ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114529cc jmp 0x11452a14 */
  goto L_11452a14;
L_114529ce:;
  /* 114529ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114529d1 push edx */
  push32((uint32_t)(EDX));
  /* 114529d2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114529d5 push eax */
  push32((uint32_t)(EAX));
  /* 114529d6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 114529d9 push ecx */
  push32((uint32_t)(ECX));
  /* 114529da mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 114529dd push edx */
  push32((uint32_t)(EDX));
  /* 114529de push 1 */
  push32((uint32_t)(0x1u));
  /* 114529e0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 114529e3 push eax */
  push32((uint32_t)(EAX));
  /* 114529e4 call dword ptr [0x11477350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477350))), 0x114529eau);
  /* 114529ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114529ec jne 0x114529f2 */
  if (!C.zf) goto L_114529f2;
  /* 114529ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114529f0 jmp 0x11452a14 */
  goto L_11452a14;
L_114529f2:;
  /* 114529f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 114529f5 push ecx */
  push32((uint32_t)(ECX));
  /* 114529f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 114529f9 push edx */
  push32((uint32_t)(EDX));
  /* 114529fa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114529fd push eax */
  push32((uint32_t)(EAX));
  /* 114529fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11452a01 push ecx */
  push32((uint32_t)(ECX));
  /* 11452a02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11452a05 push edx */
  push32((uint32_t)(EDX));
  /* 11452a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452a09 push eax */
  push32((uint32_t)(EAX));
  /* 11452a0a call dword ptr [0x11477324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477324))), 0x11452a10u);
  /* 11452a10 jmp 0x11452a14 */
  goto L_11452a14;
L_11452a12:;
  /* 11452a12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11452a14:;
  /* 11452a14 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 11452a17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11452a1a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11452a21 pop edi */
  EDI = (pop32());
  /* 11452a22 pop esi */
  ESI = (pop32());
  /* 11452a23 pop ebx */
  EBX = (pop32());
  /* 11452a24 mov esp, ebp */
  ESP = (EBP);
  /* 11452a26 pop ebp */
  EBP = (pop32());
  /* 11452a27 ret  */
  ESPCHK(0x11452630u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a30 @ 0x11452a30 (80 bytes, 32 insns) */
void f_11452a30(void) {
  FTRACE(0x11452a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11452a31 mov ebp, esp */
  EBP = (ESP);
  /* 11452a33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452a36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11452a39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11452a3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452a3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11452a42:;
  /* 11452a42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452a45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452a48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452a4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11452a4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11452a50 je 0x11452a67 */
  if (C.zf) goto L_11452a67;
  /* 11452a52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452a55 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11452a58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11452a5a je 0x11452a67 */
  if (C.zf) goto L_11452a67;
  /* 11452a5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452a5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452a62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11452a65 jmp 0x11452a42 */
  goto L_11452a42;
L_11452a67:;
  /* 11452a67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452a6a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11452a6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11452a6f jne 0x11452a79 */
  if (!C.zf) goto L_11452a79;
  /* 11452a71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452a74 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452a77 jmp 0x11452a7c */
  goto L_11452a7c;
L_11452a79:;
  /* 11452a79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11452a7c:;
  /* 11452a7c mov esp, ebp */
  ESP = (EBP);
  /* 11452a7e pop ebp */
  EBP = (pop32());
  /* 11452a7f ret  */
  ESPCHK(0x11452a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a80 @ 0x11452a80 (736 bytes, 224 insns) */
void f_11452a80(void) {
  FTRACE(0x11452a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11452a81 mov ebp, esp */
  EBP = (ESP);
  /* 11452a83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452a86 push esi */
  push32((uint32_t)(ESI));
  /* 11452a87 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452a8b je 0x11452aac */
  if (C.zf) goto L_11452aac;
  /* 11452a8d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11452a8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452a92 push eax */
  push32((uint32_t)(EAX));
  /* 11452a93 call 0x11454290 */
  push32(0x11452a98u); f_11454290();
  /* 11452a98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452a9b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11452a9e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452aa2 je 0x11452aac */
  if (C.zf) goto L_11452aac;
  /* 11452aa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452aa7 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452aaa jne 0x11452ab4 */
  if (!C.zf) goto L_11452ab4;
L_11452aac:;
  /* 11452aac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11452aaf jmp 0x11452d5b */
  goto L_11452d5b;
L_11452ab4:;
  /* 11452ab4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11452ab7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11452abb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11452abd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452abf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11452ac0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11452ac3 mov ecx, dword ptr [0x114748c0] */
  ECX = (r32((uint32_t)(0x114748c0)));
  /* 11452ac9 cmp ecx, dword ptr [0x114748c4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x114748c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452acf jne 0x11452ae5 */
  if (!C.zf) goto L_11452ae5;
  /* 11452ad1 mov edx, dword ptr [0x114748c0] */
  EDX = (r32((uint32_t)(0x114748c0)));
  /* 11452ad7 push edx */
  push32((uint32_t)(EDX));
  /* 11452ad8 call 0x11452de0 */
  push32(0x11452addu); f_11452de0();
  /* 11452add add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452ae0 mov dword ptr [0x114748c0], eax */
  w32((uint32_t)(0x114748c0), (EAX));
L_11452ae5:;
  /* 11452ae5 cmp dword ptr [0x114748c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114748c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452aec jne 0x11452ba5 */
  if (!C.zf) goto L_11452ba5;
  /* 11452af2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452af6 je 0x11452b17 */
  if (C.zf) goto L_11452b17;
  /* 11452af8 cmp dword ptr [0x114748c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114748c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452aff je 0x11452b17 */
  if (C.zf) goto L_11452b17;
  /* 11452b01 call 0x11451af0 */
  push32(0x11452b06u); f_11451af0();
  /* 11452b06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11452b08 je 0x11452b12 */
  if (C.zf) goto L_11452b12;
  /* 11452b0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11452b0d jmp 0x11452d5b */
  goto L_11452d5b;
L_11452b12:;
  /* 11452b12 jmp 0x11452ba5 */
  goto L_11452ba5;
L_11452b17:;
  /* 11452b17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452b1b je 0x11452b24 */
  if (C.zf) goto L_11452b24;
  /* 11452b1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11452b1f jmp 0x11452d5b */
  goto L_11452d5b;
L_11452b24:;
  /* 11452b24 cmp dword ptr [0x114748c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114748c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452b2b jne 0x11452b64 */
  if (!C.zf) goto L_11452b64;
  /* 11452b2d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 11452b32 push 0x114709f0 */
  push32((uint32_t)(0x114709f0u));
  /* 11452b37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11452b39 push 4 */
  push32((uint32_t)(0x4u));
  /* 11452b3b call 0x114485f0 */
  push32(0x11452b40u); f_114485f0();
  /* 11452b40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452b43 mov dword ptr [0x114748c0], eax */
  w32((uint32_t)(0x114748c0), (EAX));
  /* 11452b48 cmp dword ptr [0x114748c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114748c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452b4f jne 0x11452b59 */
  if (!C.zf) goto L_11452b59;
  /* 11452b51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11452b54 jmp 0x11452d5b */
  goto L_11452d5b;
L_11452b59:;
  /* 11452b59 mov eax, dword ptr [0x114748c0] */
  EAX = (r32((uint32_t)(0x114748c0)));
  /* 11452b5e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11452b64:;
  /* 11452b64 cmp dword ptr [0x114748c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114748c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452b6b jne 0x11452ba5 */
  if (!C.zf) goto L_11452ba5;
  /* 11452b6d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11452b72 push 0x114709f0 */
  push32((uint32_t)(0x114709f0u));
  /* 11452b77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11452b79 push 4 */
  push32((uint32_t)(0x4u));
  /* 11452b7b call 0x114485f0 */
  push32(0x11452b80u); f_114485f0();
  /* 11452b80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452b83 mov dword ptr [0x114748c8], eax */
  w32((uint32_t)(0x114748c8), (EAX));
  /* 11452b88 cmp dword ptr [0x114748c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114748c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452b8f jne 0x11452b99 */
  if (!C.zf) goto L_11452b99;
  /* 11452b91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11452b94 jmp 0x11452d5b */
  goto L_11452d5b;
L_11452b99:;
  /* 11452b99 mov ecx, dword ptr [0x114748c8] */
  ECX = (r32((uint32_t)(0x114748c8)));
  /* 11452b9f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11452ba5:;
  /* 11452ba5 mov edx, dword ptr [0x114748c0] */
  EDX = (r32((uint32_t)(0x114748c0)));
  /* 11452bab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11452bae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11452bb1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452bb4 push eax */
  push32((uint32_t)(EAX));
  /* 11452bb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452bb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11452bb9 call 0x11452d60 */
  push32(0x11452bbeu); f_11452d60();
  /* 11452bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452bc1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11452bc4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452bc8 jl 0x11452c61 */
  if ((C.sf!=C.of)) goto L_11452c61;
  /* 11452bce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452bd1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452bd4 je 0x11452c61 */
  if (C.zf) goto L_11452c61;
  /* 11452bda cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452bde je 0x11452c53 */
  if (C.zf) goto L_11452c53;
  /* 11452be0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11452be2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452be5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452be8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11452beb push edx */
  push32((uint32_t)(EDX));
  /* 11452bec call 0x11449080 */
  push32(0x11452bf1u); f_11449080();
  /* 11452bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452bf4 jmp 0x11452bff */
  goto L_11452bff;
L_11452bf6:;
  /* 11452bf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452bf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452bfc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11452bff:;
  /* 11452bff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452c02 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452c05 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452c09 je 0x11452c20 */
  if (C.zf) goto L_11452c20;
  /* 11452c0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452c0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452c11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452c14 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11452c17 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 11452c1b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11452c1e jmp 0x11452bf6 */
  goto L_11452bf6;
L_11452c20:;
  /* 11452c20 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 11452c25 push 0x114709f0 */
  push32((uint32_t)(0x114709f0u));
  /* 11452c2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11452c2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452c2f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11452c32 push eax */
  push32((uint32_t)(EAX));
  /* 11452c33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452c36 push ecx */
  push32((uint32_t)(ECX));
  /* 11452c37 call 0x11448a80 */
  push32(0x11452c3cu); f_11448a80();
  /* 11452c3c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452c3f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11452c42 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452c46 je 0x11452c51 */
  if (C.zf) goto L_11452c51;
  /* 11452c48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452c4b mov dword ptr [0x114748c0], edx */
  w32((uint32_t)(0x114748c0), (EDX));
L_11452c51:;
  /* 11452c51 jmp 0x11452c5f */
  goto L_11452c5f;
L_11452c53:;
  /* 11452c53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452c56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452c59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452c5c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_11452c5f:;
  /* 11452c5f jmp 0x11452cd4 */
  goto L_11452cd4;
L_11452c61:;
  /* 11452c61 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452c65 jne 0x11452ccd */
  if (!C.zf) goto L_11452ccd;
  /* 11452c67 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452c6b jge 0x11452c75 */
  if ((C.sf==C.of)) goto L_11452c75;
  /* 11452c6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452c70 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11452c72 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11452c75:;
  /* 11452c75 push 0xce */
  push32((uint32_t)(0xceu));
  /* 11452c7a push 0x114709f0 */
  push32((uint32_t)(0x114709f0u));
  /* 11452c7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11452c81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452c84 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 11452c8b push edx */
  push32((uint32_t)(EDX));
  /* 11452c8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452c8f push eax */
  push32((uint32_t)(EAX));
  /* 11452c90 call 0x11448a80 */
  push32(0x11452c95u); f_11448a80();
  /* 11452c95 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452c98 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11452c9b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452c9f jne 0x11452ca9 */
  if (!C.zf) goto L_11452ca9;
  /* 11452ca1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11452ca4 jmp 0x11452d5b */
  goto L_11452d5b;
L_11452ca9:;
  /* 11452ca9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452cac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452caf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452cb2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11452cb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452cb8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452cbb mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11452cc3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452cc6 mov dword ptr [0x114748c0], eax */
  w32((uint32_t)(0x114748c0), (EAX));
  /* 11452ccb jmp 0x11452cd4 */
  goto L_11452cd4;
L_11452ccd:;
  /* 11452ccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11452ccf jmp 0x11452d5b */
  goto L_11452d5b;
L_11452cd4:;
  /* 11452cd4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452cd8 je 0x11452d59 */
  if (C.zf) goto L_11452d59;
  /* 11452cda push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 11452cdf push 0x114709f0 */
  push32((uint32_t)(0x114709f0u));
  /* 11452ce4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11452ce6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 11452cea call 0x1144c140 */
  push32(0x11452cefu); f_1144c140();
  /* 11452cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452cf2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452cf5 push eax */
  push32((uint32_t)(EAX));
  /* 11452cf6 call 0x114485f0 */
  push32(0x11452cfbu); f_114485f0();
  /* 11452cfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452cfe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11452d01 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452d05 je 0x11452d59 */
  if (C.zf) goto L_11452d59;
  /* 11452d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452d0a push edx */
  push32((uint32_t)(EDX));
  /* 11452d0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11452d0e push eax */
  push32((uint32_t)(EAX));
  /* 11452d0f call 0x1144c2c0 */
  push32(0x11452d14u); f_1144c2c0();
  /* 11452d14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452d17 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11452d1a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452d1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11452d20 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452d22 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11452d25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452d28 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11452d2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452d2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452d31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11452d34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11452d37 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11452d39 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452d3b not edx */
  EDX = (~(EDX));
  /* 11452d3d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11452d40 push edx */
  push32((uint32_t)(EDX));
  /* 11452d41 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11452d44 push eax */
  push32((uint32_t)(EAX));
  /* 11452d45 call dword ptr [0x1147732c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147732c))), 0x11452d4bu);
  /* 11452d4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11452d4d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11452d50 push ecx */
  push32((uint32_t)(ECX));
  /* 11452d51 call 0x11449080 */
  push32(0x11452d56u); f_11449080();
  /* 11452d56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11452d59:;
  /* 11452d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11452d5b:;
  /* 11452d5b pop esi */
  ESI = (pop32());
  /* 11452d5c mov esp, ebp */
  ESP = (EBP);
  /* 11452d5e pop ebp */
  EBP = (pop32());
  /* 11452d5f ret  */
  ESPCHK(0x11452a80u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x11452d60 (124 bytes, 47 insns) */
void f_11452d60(void) {
  FTRACE(0x11452d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11452d61 mov ebp, esp */
  EBP = (ESP);
  /* 11452d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11452d64 mov eax, dword ptr [0x114748c0] */
  EAX = (r32((uint32_t)(0x114748c0)));
  /* 11452d69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11452d6c jmp 0x11452d77 */
  goto L_11452d77;
L_11452d6e:;
  /* 11452d6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452d71 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452d74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11452d77:;
  /* 11452d77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452d7a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452d7d je 0x11452dca */
  if (C.zf) goto L_11452dca;
  /* 11452d7f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11452d82 push eax */
  push32((uint32_t)(EAX));
  /* 11452d83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452d86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11452d88 push edx */
  push32((uint32_t)(EDX));
  /* 11452d89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452d8c push eax */
  push32((uint32_t)(EAX));
  /* 11452d8d call 0x11451aa0 */
  push32(0x11452d92u); f_11451aa0();
  /* 11452d92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11452d97 jne 0x11452dc8 */
  if (!C.zf) goto L_11452dc8;
  /* 11452d99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452d9c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11452d9e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11452da1 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11452da5 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452da8 je 0x11452dba */
  if (C.zf) goto L_11452dba;
  /* 11452daa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452dad mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11452daf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11452db2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11452db6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11452db8 jne 0x11452dc8 */
  if (!C.zf) goto L_11452dc8;
L_11452dba:;
  /* 11452dba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452dbd sub eax, dword ptr [0x114748c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114748c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452dc3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11452dc6 jmp 0x11452dd8 */
  goto L_11452dd8;
L_11452dc8:;
  /* 11452dc8 jmp 0x11452d6e */
  goto L_11452d6e;
L_11452dca:;
  /* 11452dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452dcd sub eax, dword ptr [0x114748c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114748c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452dd3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11452dd6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11452dd8:;
  /* 11452dd8 mov esp, ebp */
  ESP = (EBP);
  /* 11452dda pop ebp */
  EBP = (pop32());
  /* 11452ddb ret  */
  ESPCHK(0x11452d60u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11452de0 (238 bytes, 80 insns) */
void f_11452de0(void) {
  FTRACE(0x11452de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11452de1 mov ebp, esp */
  EBP = (ESP);
  /* 11452de3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452de6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11452ded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452df0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11452df3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452df7 jne 0x11452e00 */
  if (!C.zf) goto L_11452e00;
  /* 11452df9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11452dfb jmp 0x11452eca */
  goto L_11452eca;
L_11452e00:;
  /* 11452e00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452e03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11452e05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452e08 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452e0b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11452e0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11452e10 je 0x11452e1d */
  if (C.zf) goto L_11452e1d;
  /* 11452e12 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11452e15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452e18 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11452e1b jmp 0x11452e00 */
  goto L_11452e00;
L_11452e1d:;
  /* 11452e1d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 11452e22 push 0x114709f0 */
  push32((uint32_t)(0x114709f0u));
  /* 11452e27 push 2 */
  push32((uint32_t)(0x2u));
  /* 11452e29 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11452e2c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 11452e33 push eax */
  push32((uint32_t)(EAX));
  /* 11452e34 call 0x114485f0 */
  push32(0x11452e39u); f_114485f0();
  /* 11452e39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452e3c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11452e3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452e42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11452e45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452e49 jne 0x11452e55 */
  if (!C.zf) goto L_11452e55;
  /* 11452e4b push 9 */
  push32((uint32_t)(0x9u));
  /* 11452e4d call 0x11447470 */
  push32(0x11452e52u); f_11447470();
  /* 11452e52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11452e55:;
  /* 11452e55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11452e58 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11452e5b:;
  /* 11452e5b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452e5e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452e61 je 0x11452ebe */
  if (C.zf) goto L_11452ebe;
  /* 11452e63 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 11452e68 push 0x114709f0 */
  push32((uint32_t)(0x114709f0u));
  /* 11452e6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11452e6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452e72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11452e74 push edx */
  push32((uint32_t)(EDX));
  /* 11452e75 call 0x1144c140 */
  push32(0x11452e7au); f_1144c140();
  /* 11452e7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452e7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452e80 push eax */
  push32((uint32_t)(EAX));
  /* 11452e81 call 0x114485f0 */
  push32(0x11452e86u); f_114485f0();
  /* 11452e86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452e89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452e8c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11452e8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452e91 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452e94 je 0x11452eaa */
  if (C.zf) goto L_11452eaa;
  /* 11452e96 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452e99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11452e9b push ecx */
  push32((uint32_t)(ECX));
  /* 11452e9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452e9f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11452ea1 push eax */
  push32((uint32_t)(EAX));
  /* 11452ea2 call 0x1144c2c0 */
  push32(0x11452ea7u); f_1144c2c0();
  /* 11452ea7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11452eaa:;
  /* 11452eaa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452ead add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452eb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11452eb3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452eb6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452eb9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11452ebc jmp 0x11452e5b */
  goto L_11452e5b;
L_11452ebe:;
  /* 11452ebe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11452ec1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11452ec7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11452eca:;
  /* 11452eca mov esp, ebp */
  ESP = (EBP);
  /* 11452ecc pop ebp */
  EBP = (pop32());
  /* 11452ecd ret  */
  ESPCHK(0x11452de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ed0 @ 0x11452ed0 (482 bytes, 138 insns) */
void f_11452ed0(void) {
  FTRACE(0x11452ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11452ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11452ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11452ed3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452ed6 push esi */
  push32((uint32_t)(ESI));
  /* 11452ed7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 11452ede push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11452ee0 call 0x1144b210 */
  push32(0x11452ee5u); f_1144b210();
  /* 11452ee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452ee8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11452eef jmp 0x11452efa */
  goto L_11452efa;
L_11452ef1:;
  /* 11452ef1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452ef4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452ef7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11452efa:;
  /* 11452efa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452efe jge 0x114530a0 */
  if ((C.sf==C.of)) goto L_114530a0;
  /* 11452f04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452f07 cmp dword ptr [ecx*4 + 0x11476280], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11476280))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452f0f je 0x11453006 */
  if (C.zf) goto L_11453006;
  /* 11452f15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452f18 mov eax, dword ptr [edx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11476280)));
  /* 11452f1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11452f22 jmp 0x11452f2d */
  goto L_11452f2d;
L_11452f24:;
  /* 11452f24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452f27 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452f2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11452f2d:;
  /* 11452f2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452f30 mov eax, dword ptr [edx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11476280)));
  /* 11452f37 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452f3c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452f3f jae 0x11452ff6 */
  if (!C.cf) goto L_11452ff6;
  /* 11452f45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452f48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11452f4c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11452f4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11452f51 jne 0x11452ff1 */
  if (!C.zf) goto L_11452ff1;
  /* 11452f57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452f5a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452f5e jne 0x11452f99 */
  if (!C.zf) goto L_11452f99;
  /* 11452f60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11452f62 call 0x1144b210 */
  push32(0x11452f67u); f_1144b210();
  /* 11452f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11452f6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452f6d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452f71 jne 0x11452f8f */
  if (!C.zf) goto L_11452f8f;
  /* 11452f73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452f76 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452f79 push edx */
  push32((uint32_t)(EDX));
  /* 11452f7a call dword ptr [0x11477380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477380))), 0x11452f80u);
  /* 11452f80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452f83 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11452f86 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452f89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452f8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11452f8f:;
  /* 11452f8f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11452f91 call 0x1144b2b0 */
  push32(0x11452f96u); f_1144b2b0();
  /* 11452f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11452f99:;
  /* 11452f99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452f9c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452f9f push eax */
  push32((uint32_t)(EAX));
  /* 11452fa0 call dword ptr [0x11477370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477370))), 0x11452fa6u);
  /* 11452fa6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452fa9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11452fad and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11452fb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11452fb2 je 0x11452fc6 */
  if (C.zf) goto L_11452fc6;
  /* 11452fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452fb7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452fba push eax */
  push32((uint32_t)(EAX));
  /* 11452fbb call dword ptr [0x1147736c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147736c))), 0x11452fc1u);
  /* 11452fc1 jmp 0x11452f24 */
  goto L_11452f24;
L_11452fc6:;
  /* 11452fc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452fc9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11452fcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452fd2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11452fd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11452fd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11452fdb sub eax, dword ptr [edx*4 + 0x11476280] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11476280))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11452fe2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11452fe3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 11452fe8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11452fea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11452fec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11452fef jmp 0x11452ff6 */
  goto L_11452ff6;
L_11452ff1:;
  /* 11452ff1 jmp 0x11452f24 */
  goto L_11452f24;
L_11452ff6:;
  /* 11452ff6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11452ffa je 0x11453001 */
  if (C.zf) goto L_11453001;
  /* 11452ffc jmp 0x114530a0 */
  goto L_114530a0;
L_11453001:;
  /* 11453001 jmp 0x1145309b */
  goto L_1145309b;
L_11453006:;
  /* 11453006 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11453008 push 0x114709fc */
  push32((uint32_t)(0x114709fcu));
  /* 1145300d push 2 */
  push32((uint32_t)(0x2u));
  /* 1145300f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11453014 call 0x114485f0 */
  push32(0x11453019u); f_114485f0();
  /* 11453019 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145301c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1145301f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453023 je 0x11453099 */
  if (C.zf) goto L_11453099;
  /* 11453025 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453028 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145302b mov dword ptr [eax*4 + 0x11476280], ecx */
  w32((uint32_t)(EAX*4 + 0x11476280), (ECX));
  /* 11453032 mov edx, dword ptr [0x114763bc] */
  EDX = (r32((uint32_t)(0x114763bc)));
  /* 11453038 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145303b mov dword ptr [0x114763bc], edx */
  w32((uint32_t)(0x114763bc), (EDX));
  /* 11453041 jmp 0x1145304c */
  goto L_1145304c;
L_11453043:;
  /* 11453043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453046 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453049 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1145304c:;
  /* 1145304c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145304f mov edx, dword ptr [ecx*4 + 0x11476280] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 11453056 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145305c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145305f jae 0x11453084 */
  if (!C.cf) goto L_11453084;
  /* 11453061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453064 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11453068 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145306b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11453071 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453074 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11453078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145307b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11453082 jmp 0x11453043 */
  goto L_11453043;
L_11453084:;
  /* 11453084 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453087 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1145308a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1145308d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453090 push edx */
  push32((uint32_t)(EDX));
  /* 11453091 call 0x114533e0 */
  push32(0x11453096u); f_114533e0();
  /* 11453096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11453099:;
  /* 11453099 jmp 0x114530a0 */
  goto L_114530a0;
L_1145309b:;
  /* 1145309b jmp 0x11452ef1 */
  goto L_11452ef1;
L_114530a0:;
  /* 114530a0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 114530a2 call 0x1144b2b0 */
  push32(0x114530a7u); f_1144b2b0();
  /* 114530a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114530aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114530ad pop esi */
  ESI = (pop32());
  /* 114530ae mov esp, ebp */
  ESP = (EBP);
  /* 114530b0 pop ebp */
  EBP = (pop32());
  /* 114530b1 ret  */
  ESPCHK(0x11452ed0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x114530c0 (183 bytes, 57 insns) */
void f_114530c0(void) {
  FTRACE(0x114530c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114530c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114530c1 mov ebp, esp */
  EBP = (ESP);
  /* 114530c3 push ecx */
  push32((uint32_t)(ECX));
  /* 114530c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114530c7 cmp eax, dword ptr [0x114763bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114763bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114530cd jae 0x1145315a */
  if (!C.cf) goto L_1145315a;
  /* 114530d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114530d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114530d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114530dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114530df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114530e2 mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 114530e9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114530ed jne 0x1145315a */
  if (!C.zf) goto L_1145315a;
  /* 114530ef cmp dword ptr [0x11474898], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11474898))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114530f6 jne 0x1145313a */
  if (!C.zf) goto L_1145313a;
  /* 114530f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114530fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114530fe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453102 je 0x11453112 */
  if (C.zf) goto L_11453112;
  /* 11453104 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453108 je 0x11453120 */
  if (C.zf) goto L_11453120;
  /* 1145310a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145310e je 0x1145312e */
  if (C.zf) goto L_1145312e;
  /* 11453110 jmp 0x1145313a */
  goto L_1145313a;
L_11453112:;
  /* 11453112 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453115 push edx */
  push32((uint32_t)(EDX));
  /* 11453116 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11453118 call dword ptr [0x1147731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147731c))), 0x1145311eu);
  /* 1145311e jmp 0x1145313a */
  goto L_1145313a;
L_11453120:;
  /* 11453120 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453123 push eax */
  push32((uint32_t)(EAX));
  /* 11453124 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11453126 call dword ptr [0x1147731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147731c))), 0x1145312cu);
  /* 1145312c jmp 0x1145313a */
  goto L_1145313a;
L_1145312e:;
  /* 1145312e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453131 push ecx */
  push32((uint32_t)(ECX));
  /* 11453132 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11453134 call dword ptr [0x1147731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147731c))), 0x1145313au);
L_1145313a:;
  /* 1145313a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145313d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11453140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453143 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11453146 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453149 mov ecx, dword ptr [edx*4 + 0x11476280] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11476280)));
  /* 11453150 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453153 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11453156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453158 jmp 0x11453173 */
  goto L_11453173;
L_1145315a:;
  /* 1145315a call 0x114511e0 */
  push32(0x1145315fu); f_114511e0();
  /* 1145315f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11453165 call 0x114511f0 */
  push32(0x1145316au); f_114511f0();
  /* 1145316a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11453170 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11453173:;
  /* 11453173 mov esp, ebp */
  ESP = (EBP);
  /* 11453175 pop ebp */
  EBP = (pop32());
  /* 11453176 ret  */
  ESPCHK(0x114530c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013180 @ 0x11453180 (216 bytes, 63 insns) */
void f_11453180(void) {
  FTRACE(0x11453180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453180 push ebp */
  push32((uint32_t)(EBP));
  /* 11453181 mov ebp, esp */
  EBP = (ESP);
  /* 11453183 push ecx */
  push32((uint32_t)(ECX));
  /* 11453184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453187 cmp eax, dword ptr [0x114763bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114763bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145318d jae 0x1145323b */
  if (!C.cf) goto L_1145323b;
  /* 11453193 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453196 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11453199 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145319c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1145319f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114531a2 mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 114531a9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114531ae and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114531b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114531b3 je 0x1145323b */
  if (C.zf) goto L_1145323b;
  /* 114531b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114531bc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 114531bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114531c2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114531c5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114531c8 mov ecx, dword ptr [edx*4 + 0x11476280] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11476280)));
  /* 114531cf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114531d3 je 0x1145323b */
  if (C.zf) goto L_1145323b;
  /* 114531d5 cmp dword ptr [0x11474898], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11474898))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114531dc jne 0x1145321a */
  if (!C.zf) goto L_1145321a;
  /* 114531de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114531e1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114531e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114531e8 je 0x114531f8 */
  if (C.zf) goto L_114531f8;
  /* 114531ea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114531ee je 0x11453204 */
  if (C.zf) goto L_11453204;
  /* 114531f0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114531f4 je 0x11453210 */
  if (C.zf) goto L_11453210;
  /* 114531f6 jmp 0x1145321a */
  goto L_1145321a;
L_114531f8:;
  /* 114531f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114531fa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 114531fc call dword ptr [0x1147731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147731c))), 0x11453202u);
  /* 11453202 jmp 0x1145321a */
  goto L_1145321a;
L_11453204:;
  /* 11453204 push 0 */
  push32((uint32_t)(0x0u));
  /* 11453206 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11453208 call dword ptr [0x1147731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147731c))), 0x1145320eu);
  /* 1145320e jmp 0x1145321a */
  goto L_1145321a;
L_11453210:;
  /* 11453210 push 0 */
  push32((uint32_t)(0x0u));
  /* 11453212 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11453214 call dword ptr [0x1147731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147731c))), 0x1145321au);
L_1145321a:;
  /* 1145321a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145321d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11453220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453223 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11453226 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453229 mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 11453230 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11453237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453239 jmp 0x11453254 */
  goto L_11453254;
L_1145323b:;
  /* 1145323b call 0x114511e0 */
  push32(0x11453240u); f_114511e0();
  /* 11453240 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11453246 call 0x114511f0 */
  push32(0x1145324bu); f_114511f0();
  /* 1145324b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11453251 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11453254:;
  /* 11453254 mov esp, ebp */
  ESP = (EBP);
  /* 11453256 pop ebp */
  EBP = (pop32());
  /* 11453257 ret  */
  ESPCHK(0x11453180u, _esp0);
  ESP += 4; return;
}

/* FUN_10013260 @ 0x11453260 (102 bytes, 30 insns) */
void f_11453260(void) {
  FTRACE(0x11453260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453260 push ebp */
  push32((uint32_t)(EBP));
  /* 11453261 mov ebp, esp */
  EBP = (ESP);
  /* 11453263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453266 cmp eax, dword ptr [0x114763bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114763bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145326c jae 0x114532ab */
  if (!C.cf) goto L_114532ab;
  /* 1145326e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453271 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11453274 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453277 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1145327a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145327d mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 11453284 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11453289 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1145328c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1145328e je 0x114532ab */
  if (C.zf) goto L_114532ab;
  /* 11453290 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453293 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11453296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453299 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1145329c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145329f mov ecx, dword ptr [edx*4 + 0x11476280] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11476280)));
  /* 114532a6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 114532a9 jmp 0x114532c4 */
  goto L_114532c4;
L_114532ab:;
  /* 114532ab call 0x114511e0 */
  push32(0x114532b0u); f_114511e0();
  /* 114532b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114532b6 call 0x114511f0 */
  push32(0x114532bbu); f_114511f0();
  /* 114532bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 114532c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114532c4:;
  /* 114532c4 pop ebp */
  EBP = (pop32());
  /* 114532c5 ret  */
  ESPCHK(0x11453260u, _esp0);
  ESP += 4; return;
}

/* FUN_100132d0 @ 0x114532d0 (260 bytes, 83 insns) */
void f_114532d0(void) {
  FTRACE(0x114532d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114532d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114532d1 mov ebp, esp */
  EBP = (ESP);
  /* 114532d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114532d6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 114532da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114532dd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 114532e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114532e2 je 0x114532ed */
  if (C.zf) goto L_114532ed;
  /* 114532e4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 114532e7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 114532ea mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_114532ed:;
  /* 114532ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114532f0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 114532f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114532f8 je 0x11453302 */
  if (C.zf) goto L_11453302;
  /* 114532fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 114532fd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 114532ff mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11453302:;
  /* 11453302 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453305 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1145330b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1145330d je 0x11453318 */
  if (C.zf) goto L_11453318;
  /* 1145330f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11453312 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11453315 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11453318:;
  /* 11453318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145331b push eax */
  push32((uint32_t)(EAX));
  /* 1145331c call dword ptr [0x114773bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114773bc))), 0x11453322u);
  /* 11453322 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11453325 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453329 jne 0x11453342 */
  if (!C.zf) goto L_11453342;
  /* 1145332b call dword ptr [0x114772f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f4))), 0x11453331u);
  /* 11453331 push eax */
  push32((uint32_t)(EAX));
  /* 11453332 call 0x11451140 */
  push32(0x11453337u); f_11451140();
  /* 11453337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145333a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1145333d jmp 0x114533d0 */
  goto L_114533d0;
L_11453342:;
  /* 11453342 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453346 jne 0x11453353 */
  if (!C.zf) goto L_11453353;
  /* 11453348 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1145334b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1145334e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11453351 jmp 0x11453362 */
  goto L_11453362;
L_11453353:;
  /* 11453353 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453357 jne 0x11453362 */
  if (!C.zf) goto L_11453362;
  /* 11453359 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1145335c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1145335f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11453362:;
  /* 11453362 call 0x11452ed0 */
  push32(0x11453367u); f_11452ed0();
  /* 11453367 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1145336a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145336e jne 0x1145338b */
  if (!C.zf) goto L_1145338b;
  /* 11453370 call 0x114511e0 */
  push32(0x11453375u); f_114511e0();
  /* 11453375 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1145337b call 0x114511f0 */
  push32(0x11453380u); f_114511f0();
  /* 11453380 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11453386 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11453389 jmp 0x114533d0 */
  goto L_114533d0;
L_1145338b:;
  /* 1145338b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145338e push eax */
  push32((uint32_t)(EAX));
  /* 1145338f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453392 push ecx */
  push32((uint32_t)(ECX));
  /* 11453393 call 0x114530c0 */
  push32(0x11453398u); f_114530c0();
  /* 11453398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145339b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1145339e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 114533a1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 114533a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114533a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114533aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114533ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114533b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114533b3 mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 114533ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 114533bd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 114533c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114533c4 push ecx */
  push32((uint32_t)(ECX));
  /* 114533c5 call 0x11453470 */
  push32(0x114533cau); f_11453470();
  /* 114533ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114533cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_114533d0:;
  /* 114533d0 mov esp, ebp */
  ESP = (EBP);
  /* 114533d2 pop ebp */
  EBP = (pop32());
  /* 114533d3 ret  */
  ESPCHK(0x114532d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133e0 @ 0x114533e0 (134 bytes, 44 insns) */
void f_114533e0(void) {
  FTRACE(0x114533e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114533e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114533e1 mov ebp, esp */
  EBP = (ESP);
  /* 114533e3 push ecx */
  push32((uint32_t)(ECX));
  /* 114533e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114533e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114533ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114533ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 114533f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114533f3 mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 114533fa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114533fc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114533ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453402 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453406 jne 0x11453441 */
  if (!C.zf) goto L_11453441;
  /* 11453408 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1145340a call 0x1144b210 */
  push32(0x1145340fu); f_1144b210();
  /* 1145340f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453415 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453419 jne 0x11453437 */
  if (!C.zf) goto L_11453437;
  /* 1145341b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145341e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453421 push edx */
  push32((uint32_t)(EDX));
  /* 11453422 call dword ptr [0x11477380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477380))), 0x11453428u);
  /* 11453428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145342b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1145342e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453434 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11453437:;
  /* 11453437 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11453439 call 0x1144b2b0 */
  push32(0x1145343eu); f_1144b2b0();
  /* 1145343e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11453441:;
  /* 11453441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453444 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11453447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145344a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1145344d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453450 mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 11453457 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1145345b push eax */
  push32((uint32_t)(EAX));
  /* 1145345c call dword ptr [0x11477370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477370))), 0x11453462u);
  /* 11453462 mov esp, ebp */
  ESP = (EBP);
  /* 11453464 pop ebp */
  EBP = (pop32());
  /* 11453465 ret  */
  ESPCHK(0x114533e0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11453470 (38 bytes, 13 insns) */
void f_11453470(void) {
  FTRACE(0x11453470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453470 push ebp */
  push32((uint32_t)(EBP));
  /* 11453471 mov ebp, esp */
  EBP = (ESP);
  /* 11453473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453476 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11453479 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145347c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1145347f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453482 mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 11453489 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1145348d push eax */
  push32((uint32_t)(EAX));
  /* 1145348e call dword ptr [0x1147736c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147736c))), 0x11453494u);
  /* 11453494 pop ebp */
  EBP = (pop32());
  /* 11453495 ret  */
  ESPCHK(0x11453470u, _esp0);
  ESP += 4; return;
}

/* FUN_100134a0 @ 0x114534a0 (218 bytes, 63 insns) */
void f_114534a0(void) {
  FTRACE(0x114534a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114534a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114534a1 mov ebp, esp */
  EBP = (ESP);
  /* 114534a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114534a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114534ad push 2 */
  push32((uint32_t)(0x2u));
  /* 114534af call 0x1144b210 */
  push32(0x114534b4u); f_1144b210();
  /* 114534b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114534b7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 114534be jmp 0x114534c9 */
  goto L_114534c9;
L_114534c0:;
  /* 114534c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114534c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114534c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_114534c9:;
  /* 114534c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114534cc cmp ecx, dword ptr [0x11475f80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11475f80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114534d2 jge 0x11453569 */
  if ((C.sf==C.of)) goto L_11453569;
  /* 114534d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114534db mov eax, dword ptr [0x11474c30] */
  EAX = (r32((uint32_t)(0x11474c30)));
  /* 114534e0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114534e4 je 0x11453564 */
  if (C.zf) goto L_11453564;
  /* 114534e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114534e9 mov edx, dword ptr [0x11474c30] */
  EDX = (r32((uint32_t)(0x11474c30)));
  /* 114534ef mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114534f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114534f5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 114534fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114534fd je 0x11453521 */
  if (C.zf) goto L_11453521;
  /* 114534ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453502 mov eax, dword ptr [0x11474c30] */
  EAX = (r32((uint32_t)(0x11474c30)));
  /* 11453507 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1145350a push ecx */
  push32((uint32_t)(ECX));
  /* 1145350b call 0x11454380 */
  push32(0x11453510u); f_11454380();
  /* 11453510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453513 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453516 je 0x11453521 */
  if (C.zf) goto L_11453521;
  /* 11453518 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145351b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145351e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11453521:;
  /* 11453521 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453525 jl 0x11453564 */
  if ((C.sf!=C.of)) goto L_11453564;
  /* 11453527 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145352a mov ecx, dword ptr [0x11474c30] */
  ECX = (r32((uint32_t)(0x11474c30)));
  /* 11453530 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11453533 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453536 push edx */
  push32((uint32_t)(EDX));
  /* 11453537 call dword ptr [0x114773a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114773a8))), 0x1145353du);
  /* 1145353d push 2 */
  push32((uint32_t)(0x2u));
  /* 1145353f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453542 mov ecx, dword ptr [0x11474c30] */
  ECX = (r32((uint32_t)(0x11474c30)));
  /* 11453548 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1145354b push edx */
  push32((uint32_t)(EDX));
  /* 1145354c call 0x11449080 */
  push32(0x11453551u); f_11449080();
  /* 11453551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453554 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453557 mov ecx, dword ptr [0x11474c30] */
  ECX = (r32((uint32_t)(0x11474c30)));
  /* 1145355d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11453564:;
  /* 11453564 jmp 0x114534c0 */
  goto L_114534c0;
L_11453569:;
  /* 11453569 push 2 */
  push32((uint32_t)(0x2u));
  /* 1145356b call 0x1144b2b0 */
  push32(0x11453570u); f_1144b2b0();
  /* 11453570 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453576 mov esp, ebp */
  ESP = (EBP);
  /* 11453578 pop ebp */
  EBP = (pop32());
  /* 11453579 ret  */
  ESPCHK(0x114534a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013580 @ 0x11453580 (68 bytes, 26 insns) */
void f_11453580(void) {
  FTRACE(0x11453580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453580 push ebp */
  push32((uint32_t)(EBP));
  /* 11453581 mov ebp, esp */
  EBP = (ESP);
  /* 11453583 push ecx */
  push32((uint32_t)(ECX));
  /* 11453584 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453588 jne 0x11453596 */
  if (!C.zf) goto L_11453596;
  /* 1145358a push 0 */
  push32((uint32_t)(0x0u));
  /* 1145358c call 0x114536f0 */
  push32(0x11453591u); f_114536f0();
  /* 11453591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453594 jmp 0x114535c0 */
  goto L_114535c0;
L_11453596:;
  /* 11453596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453599 push eax */
  push32((uint32_t)(EAX));
  /* 1145359a call 0x11452260 */
  push32(0x1145359fu); f_11452260();
  /* 1145359f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114535a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114535a5 push ecx */
  push32((uint32_t)(ECX));
  /* 114535a6 call 0x114535d0 */
  push32(0x114535abu); f_114535d0();
  /* 114535ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114535ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114535b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114535b4 push edx */
  push32((uint32_t)(EDX));
  /* 114535b5 call 0x114522d0 */
  push32(0x114535bau); f_114522d0();
  /* 114535ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114535bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_114535c0:;
  /* 114535c0 mov esp, ebp */
  ESP = (EBP);
  /* 114535c2 pop ebp */
  EBP = (pop32());
  /* 114535c3 ret  */
  ESPCHK(0x11453580u, _esp0);
  ESP += 4; return;
}

/* FUN_100135d0 @ 0x114535d0 (65 bytes, 26 insns) */
void f_114535d0(void) {
  FTRACE(0x114535d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114535d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114535d1 mov ebp, esp */
  EBP = (ESP);
  /* 114535d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114535d6 push eax */
  push32((uint32_t)(EAX));
  /* 114535d7 call 0x11453620 */
  push32(0x114535dcu); f_11453620();
  /* 114535dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114535df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114535e1 je 0x114535e8 */
  if (C.zf) goto L_114535e8;
  /* 114535e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114535e6 jmp 0x1145360f */
  goto L_1145360f;
L_114535e8:;
  /* 114535e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114535eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114535ee and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 114535f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114535f6 je 0x1145360d */
  if (C.zf) goto L_1145360d;
  /* 114535f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114535fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 114535fe push ecx */
  push32((uint32_t)(ECX));
  /* 114535ff call 0x114544d0 */
  push32(0x11453604u); f_114544d0();
  /* 11453604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453607 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11453609 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145360b jmp 0x1145360f */
  goto L_1145360f;
L_1145360d:;
  /* 1145360d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1145360f:;
  /* 1145360f pop ebp */
  EBP = (pop32());
  /* 11453610 ret  */
  ESPCHK(0x114535d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013620 @ 0x11453620 (183 bytes, 62 insns) */
void f_11453620(void) {
  FTRACE(0x11453620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453620 push ebp */
  push32((uint32_t)(EBP));
  /* 11453621 mov ebp, esp */
  EBP = (ESP);
  /* 11453623 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11453626 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1145362d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453630 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11453633 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453636 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11453639 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1145363c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145363f jne 0x114536bb */
  if (!C.zf) goto L_114536bb;
  /* 11453641 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453644 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11453647 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1145364d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1145364f je 0x114536bb */
  if (C.zf) goto L_114536bb;
  /* 11453651 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453654 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453657 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11453659 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145365c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1145365f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453663 jle 0x114536bb */
  if ((C.zf||C.sf!=C.of)) goto L_114536bb;
  /* 11453665 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453668 push edx */
  push32((uint32_t)(EDX));
  /* 11453669 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145366c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1145366f push ecx */
  push32((uint32_t)(ECX));
  /* 11453670 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453673 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11453676 push eax */
  push32((uint32_t)(EAX));
  /* 11453677 call 0x11451cf0 */
  push32(0x1145367cu); f_11451cf0();
  /* 1145367c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145367f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453682 jne 0x114536a5 */
  if (!C.zf) goto L_114536a5;
  /* 11453684 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453687 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1145368a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11453690 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11453692 je 0x114536a3 */
  if (C.zf) goto L_114536a3;
  /* 11453694 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453697 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1145369a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1145369d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114536a0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_114536a3:;
  /* 114536a3 jmp 0x114536bb */
  goto L_114536bb;
L_114536a5:;
  /* 114536a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114536a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 114536ab or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 114536ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114536b1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 114536b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_114536bb:;
  /* 114536bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114536be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114536c1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114536c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114536c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114536c9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 114536d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114536d3 mov esp, ebp */
  ESP = (EBP);
  /* 114536d5 pop ebp */
  EBP = (pop32());
  /* 114536d6 ret  */
  ESPCHK(0x11453620u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e0 @ 0x114536e0 (15 bytes, 7 insns) */
void f_114536e0(void) {
  FTRACE(0x114536e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114536e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114536e1 mov ebp, esp */
  EBP = (ESP);
  /* 114536e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114536e5 call 0x114536f0 */
  push32(0x114536eau); f_114536f0();
  /* 114536ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114536ed pop ebp */
  EBP = (pop32());
  /* 114536ee ret  */
  ESPCHK(0x114536e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136f0 @ 0x114536f0 (319 bytes, 94 insns) */
void f_114536f0(void) {
  FTRACE(0x114536f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114536f0 push ebp */
  push32((uint32_t)(EBP));
  /* 114536f1 mov ebp, esp */
  EBP = (ESP);
  /* 114536f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114536f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114536fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11453704 push 2 */
  push32((uint32_t)(0x2u));
  /* 11453706 call 0x1144b210 */
  push32(0x1145370bu); f_1144b210();
  /* 1145370b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145370e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11453715 jmp 0x11453720 */
  goto L_11453720;
L_11453717:;
  /* 11453717 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145371a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145371d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11453720:;
  /* 11453720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453723 cmp ecx, dword ptr [0x11475f80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11475f80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453729 jge 0x11453813 */
  if ((C.sf==C.of)) goto L_11453813;
  /* 1145372f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453732 mov eax, dword ptr [0x11474c30] */
  EAX = (r32((uint32_t)(0x11474c30)));
  /* 11453737 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145373b je 0x1145380e */
  if (C.zf) goto L_1145380e;
  /* 11453741 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453744 mov edx, dword ptr [0x11474c30] */
  EDX = (r32((uint32_t)(0x11474c30)));
  /* 1145374a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1145374d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11453750 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11453756 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11453758 je 0x1145380e */
  if (C.zf) goto L_1145380e;
  /* 1145375e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453761 mov eax, dword ptr [0x11474c30] */
  EAX = (r32((uint32_t)(0x11474c30)));
  /* 11453766 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11453769 push ecx */
  push32((uint32_t)(ECX));
  /* 1145376a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145376d push edx */
  push32((uint32_t)(EDX));
  /* 1145376e call 0x114522a0 */
  push32(0x11453773u); f_114522a0();
  /* 11453773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453776 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453779 mov ecx, dword ptr [0x11474c30] */
  ECX = (r32((uint32_t)(0x11474c30)));
  /* 1145377f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11453782 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11453785 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1145378a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145378c je 0x114537f5 */
  if (C.zf) goto L_114537f5;
  /* 1145378e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453792 jne 0x114537b9 */
  if (!C.zf) goto L_114537b9;
  /* 11453794 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453797 mov edx, dword ptr [0x11474c30] */
  EDX = (r32((uint32_t)(0x11474c30)));
  /* 1145379d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 114537a0 push eax */
  push32((uint32_t)(EAX));
  /* 114537a1 call 0x114535d0 */
  push32(0x114537a6u); f_114535d0();
  /* 114537a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114537a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114537ac je 0x114537b7 */
  if (C.zf) goto L_114537b7;
  /* 114537ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114537b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114537b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_114537b7:;
  /* 114537b7 jmp 0x114537f5 */
  goto L_114537f5;
L_114537b9:;
  /* 114537b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114537bd jne 0x114537f5 */
  if (!C.zf) goto L_114537f5;
  /* 114537bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114537c2 mov eax, dword ptr [0x11474c30] */
  EAX = (r32((uint32_t)(0x11474c30)));
  /* 114537c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 114537ca mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114537cd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 114537d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114537d2 je 0x114537f5 */
  if (C.zf) goto L_114537f5;
  /* 114537d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114537d7 mov ecx, dword ptr [0x11474c30] */
  ECX = (r32((uint32_t)(0x11474c30)));
  /* 114537dd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 114537e0 push edx */
  push32((uint32_t)(EDX));
  /* 114537e1 call 0x114535d0 */
  push32(0x114537e6u); f_114535d0();
  /* 114537e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114537e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114537ec jne 0x114537f5 */
  if (!C.zf) goto L_114537f5;
  /* 114537ee mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_114537f5:;
  /* 114537f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114537f8 mov ecx, dword ptr [0x11474c30] */
  ECX = (r32((uint32_t)(0x11474c30)));
  /* 114537fe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11453801 push edx */
  push32((uint32_t)(EDX));
  /* 11453802 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453805 push eax */
  push32((uint32_t)(EAX));
  /* 11453806 call 0x11452310 */
  push32(0x1145380bu); f_11452310();
  /* 1145380b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1145380e:;
  /* 1145380e jmp 0x11453717 */
  goto L_11453717;
L_11453813:;
  /* 11453813 push 2 */
  push32((uint32_t)(0x2u));
  /* 11453815 call 0x1144b2b0 */
  push32(0x1145381au); f_1144b2b0();
  /* 1145381a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145381d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453821 jne 0x11453828 */
  if (!C.zf) goto L_11453828;
  /* 11453823 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453826 jmp 0x1145382b */
  goto L_1145382b;
L_11453828:;
  /* 11453828 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1145382b:;
  /* 1145382b mov esp, ebp */
  ESP = (EBP);
  /* 1145382d pop ebp */
  EBP = (pop32());
  /* 1145382e ret  */
  ESPCHK(0x114536f0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11453830 (15 bytes, 7 insns) */
void f_11453830(void) {
  FTRACE(0x11453830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453830 push ebp */
  push32((uint32_t)(EBP));
  /* 11453831 mov ebp, esp */
  EBP = (ESP);
  /* 11453833 push 2 */
  push32((uint32_t)(0x2u));
  /* 11453835 call 0x11447470 */
  push32(0x1145383au); f_11447470();
  /* 1145383a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145383d pop ebp */
  EBP = (pop32());
  /* 1145383e ret  */
  ESPCHK(0x11453830u, _esp0);
  ESP += 4; return;
}

/* FUN_10013840 @ 0x11453840 (1007 bytes, 269 insns) */
void f_11453840(void) {
  FTRACE(0x11453840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453840 push ebp */
  push32((uint32_t)(EBP));
  /* 11453841 mov ebp, esp */
  EBP = (ESP);
  /* 11453843 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11453849 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145384d jl 0x11453855 */
  if ((C.sf!=C.of)) goto L_11453855;
  /* 1145384f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453853 jle 0x1145385c */
  if ((C.zf||C.sf!=C.of)) goto L_1145385c;
L_11453855:;
  /* 11453855 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453857 jmp 0x11453c2b */
  goto L_11453c2b;
L_1145385c:;
  /* 1145385c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1145385e call 0x1144b210 */
  push32(0x11453863u); f_1144b210();
  /* 11453863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453866 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1145386d mov eax, dword ptr [0x11474c1c] */
  EAX = (r32((uint32_t)(0x11474c1c)));
  /* 11453872 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453875 mov dword ptr [0x11474c1c], eax */
  w32((uint32_t)(0x11474c1c), (EAX));
L_1145387a:;
  /* 1145387a cmp dword ptr [0x11474c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453881 je 0x1145388d */
  if (C.zf) goto L_1145388d;
  /* 11453883 push 1 */
  push32((uint32_t)(0x1u));
  /* 11453885 call dword ptr [0x11477318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477318))), 0x1145388bu);
  /* 1145388b jmp 0x1145387a */
  goto L_1145387a;
L_1145388d:;
  /* 1145388d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453891 je 0x114538d1 */
  if (C.zf) goto L_114538d1;
  /* 11453893 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453897 je 0x114538b1 */
  if (C.zf) goto L_114538b1;
  /* 11453899 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145389c push ecx */
  push32((uint32_t)(ECX));
  /* 1145389d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114538a0 push edx */
  push32((uint32_t)(EDX));
  /* 114538a1 call 0x11453c30 */
  push32(0x114538a6u); f_11453c30();
  /* 114538a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114538a9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 114538af jmp 0x114538c3 */
  goto L_114538c3;
L_114538b1:;
  /* 114538b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114538b4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114538b7 mov ecx, dword ptr [eax + 0x114735fc] */
  ECX = (r32((uint32_t)(EAX + 0x114735fc)));
  /* 114538bd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_114538c3:;
  /* 114538c3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 114538c9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 114538cc jmp 0x11453c0b */
  goto L_11453c0b;
L_114538d1:;
  /* 114538d1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 114538d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 114538df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114538e3 je 0x11453c03 */
  if (C.zf) goto L_11453c03;
  /* 114538e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114538ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114538ef cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114538f2 jne 0x11453b14 */
  if (!C.zf) goto L_11453b14;
  /* 114538f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114538fb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114538ff cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453902 jne 0x11453b14 */
  if (!C.zf) goto L_11453b14;
  /* 11453908 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145390b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1145390f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453912 jne 0x11453b14 */
  if (!C.zf) goto L_11453b14;
  /* 11453918 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145391b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11453921:;
  /* 11453921 push 0x11470a4c */
  push32((uint32_t)(0x11470a4cu));
  /* 11453926 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1145392c push ecx */
  push32((uint32_t)(ECX));
  /* 1145392d call 0x11455af0 */
  push32(0x11453932u); f_11455af0();
  /* 11453932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453935 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1145393b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453942 je 0x1145396d */
  if (C.zf) goto L_1145396d;
  /* 11453944 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1145394a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11453950 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11453956 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145395d je 0x1145396d */
  if (C.zf) goto L_1145396d;
  /* 1145395f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11453965 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11453968 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145396b jne 0x11453993 */
  if (!C.zf) goto L_11453993;
L_1145396d:;
  /* 1145396d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453971 je 0x1145398c */
  if (C.zf) goto L_1145398c;
  /* 11453973 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11453975 call 0x1144b2b0 */
  push32(0x1145397au); f_1144b2b0();
  /* 1145397a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145397d mov edx, dword ptr [0x11474c1c] */
  EDX = (r32((uint32_t)(0x11474c1c)));
  /* 11453983 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11453986 mov dword ptr [0x11474c1c], edx */
  w32((uint32_t)(0x11474c1c), (EDX));
L_1145398c:;
  /* 1145398c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145398e jmp 0x11453c2b */
  goto L_11453c2b;
L_11453993:;
  /* 11453993 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1145399a jmp 0x114539a5 */
  goto L_114539a5;
L_1145399c:;
  /* 1145399c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1145399f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114539a2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_114539a5:;
  /* 114539a5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114539a9 jg 0x114539f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_114539f3;
  /* 114539ab mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 114539b1 push ecx */
  push32((uint32_t)(ECX));
  /* 114539b2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 114539b8 push edx */
  push32((uint32_t)(EDX));
  /* 114539b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114539bc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114539bf mov ecx, dword ptr [eax + 0x114735f8] */
  ECX = (r32((uint32_t)(EAX + 0x114735f8)));
  /* 114539c5 push ecx */
  push32((uint32_t)(ECX));
  /* 114539c6 call 0x11455ab0 */
  push32(0x114539cbu); f_11455ab0();
  /* 114539cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114539ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114539d0 jne 0x114539f1 */
  if (!C.zf) goto L_114539f1;
  /* 114539d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 114539d5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114539d8 mov eax, dword ptr [edx + 0x114735f8] */
  EAX = (r32((uint32_t)(EDX + 0x114735f8)));
  /* 114539de push eax */
  push32((uint32_t)(EAX));
  /* 114539df call 0x1144c140 */
  push32(0x114539e4u); f_1144c140();
  /* 114539e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114539e7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114539ed jne 0x114539f1 */
  if (!C.zf) goto L_114539f1;
  /* 114539ef jmp 0x114539f3 */
  goto L_114539f3;
L_114539f1:;
  /* 114539f1 jmp 0x1145399c */
  goto L_1145399c;
L_114539f3:;
  /* 114539f3 push 0x11470a48 */
  push32((uint32_t)(0x11470a48u));
  /* 114539f8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 114539fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453a01 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11453a07 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11453a0d push edx */
  push32((uint32_t)(EDX));
  /* 11453a0e call 0x11455a70 */
  push32(0x11453a13u); f_11455a70();
  /* 11453a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453a16 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11453a1c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453a23 jne 0x11453a59 */
  if (!C.zf) goto L_11453a59;
  /* 11453a25 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11453a2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11453a2e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453a31 je 0x11453a59 */
  if (C.zf) goto L_11453a59;
  /* 11453a33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453a37 je 0x11453a52 */
  if (C.zf) goto L_11453a52;
  /* 11453a39 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11453a3b call 0x1144b2b0 */
  push32(0x11453a40u); f_1144b2b0();
  /* 11453a40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453a43 mov edx, dword ptr [0x11474c1c] */
  EDX = (r32((uint32_t)(0x11474c1c)));
  /* 11453a49 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11453a4c mov dword ptr [0x11474c1c], edx */
  w32((uint32_t)(0x11474c1c), (EDX));
L_11453a52:;
  /* 11453a52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453a54 jmp 0x11453c2b */
  goto L_11453c2b;
L_11453a59:;
  /* 11453a59 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453a5d jg 0x11453aaa */
  if ((!C.zf&&C.sf==C.of)) goto L_11453aaa;
  /* 11453a5f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11453a65 push eax */
  push32((uint32_t)(EAX));
  /* 11453a66 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11453a6c push ecx */
  push32((uint32_t)(ECX));
  /* 11453a6d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11453a73 push edx */
  push32((uint32_t)(EDX));
  /* 11453a74 call 0x1144cb30 */
  push32(0x11453a79u); f_1144cb30();
  /* 11453a79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453a7c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11453a82 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11453a8a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11453a90 push ecx */
  push32((uint32_t)(ECX));
  /* 11453a91 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11453a94 push edx */
  push32((uint32_t)(EDX));
  /* 11453a95 call 0x11453c30 */
  push32(0x11453a9au); f_11453c30();
  /* 11453a9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453a9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453a9f je 0x11453aaa */
  if (C.zf) goto L_11453aaa;
  /* 11453aa1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453aa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453aa7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11453aaa:;
  /* 11453aaa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11453ab0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453ab6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11453abc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11453ac2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11453ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453ac7 je 0x11453ad8 */
  if (C.zf) goto L_11453ad8;
  /* 11453ac9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11453acf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453ad2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11453ad8:;
  /* 11453ad8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11453ade movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11453ae1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453ae3 jne 0x11453921 */
  if (!C.zf) goto L_11453921;
  /* 11453ae9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453aed je 0x11453afc */
  if (C.zf) goto L_11453afc;
  /* 11453aef call 0x11453dd0 */
  push32(0x11453af4u); f_11453dd0();
  /* 11453af4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11453afa jmp 0x11453b06 */
  goto L_11453b06;
L_11453afc:;
  /* 11453afc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11453b06:;
  /* 11453b06 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11453b0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11453b0f jmp 0x11453c01 */
  goto L_11453c01;
L_11453b14:;
  /* 11453b14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453b17 push edx */
  push32((uint32_t)(EDX));
  /* 11453b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11453b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11453b1c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11453b22 push eax */
  push32((uint32_t)(EAX));
  /* 11453b23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453b26 push ecx */
  push32((uint32_t)(ECX));
  /* 11453b27 call 0x11453ed0 */
  push32(0x11453b2cu); f_11453ed0();
  /* 11453b2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453b2f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11453b32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453b36 je 0x11453c01 */
  if (C.zf) goto L_11453c01;
  /* 11453b3c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11453b43 jmp 0x11453b4e */
  goto L_11453b4e;
L_11453b45:;
  /* 11453b45 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11453b48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453b4b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11453b4e:;
  /* 11453b4e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453b52 jg 0x11453bb0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11453bb0;
  /* 11453b54 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453b58 je 0x11453bae */
  if (C.zf) goto L_11453bae;
  /* 11453b5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11453b5d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453b60 mov ecx, dword ptr [eax + 0x114735fc] */
  ECX = (r32((uint32_t)(EAX + 0x114735fc)));
  /* 11453b66 push ecx */
  push32((uint32_t)(ECX));
  /* 11453b67 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11453b6d push edx */
  push32((uint32_t)(EDX));
  /* 11453b6e call 0x1144fda0 */
  push32(0x11453b73u); f_1144fda0();
  /* 11453b73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453b78 je 0x11453ba5 */
  if (C.zf) goto L_11453ba5;
  /* 11453b7a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11453b80 push eax */
  push32((uint32_t)(EAX));
  /* 11453b81 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11453b84 push ecx */
  push32((uint32_t)(ECX));
  /* 11453b85 call 0x11453c30 */
  push32(0x11453b8au); f_11453c30();
  /* 11453b8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453b8f je 0x11453b9c */
  if (C.zf) goto L_11453b9c;
  /* 11453b91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453b94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453b97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11453b9a jmp 0x11453ba3 */
  goto L_11453ba3;
L_11453b9c:;
  /* 11453b9c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11453ba3:;
  /* 11453ba3 jmp 0x11453bae */
  goto L_11453bae;
L_11453ba5:;
  /* 11453ba5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453ba8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453bab mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11453bae:;
  /* 11453bae jmp 0x11453b45 */
  goto L_11453b45;
L_11453bb0:;
  /* 11453bb0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453bb4 je 0x11453bdb */
  if (C.zf) goto L_11453bdb;
  /* 11453bb6 call 0x11453dd0 */
  push32(0x11453bbbu); f_11453dd0();
  /* 11453bbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11453bbe push 2 */
  push32((uint32_t)(0x2u));
  /* 11453bc0 mov ecx, dword ptr [0x114735fc] */
  ECX = (r32((uint32_t)(0x114735fc)));
  /* 11453bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11453bc7 call 0x11449080 */
  push32(0x11453bccu); f_11449080();
  /* 11453bcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453bcf mov dword ptr [0x114735fc], 0 */
  w32((uint32_t)(0x114735fc), (0x0u));
  /* 11453bd9 jmp 0x11453c01 */
  goto L_11453c01;
L_11453bdb:;
  /* 11453bdb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453bdf je 0x11453bee */
  if (C.zf) goto L_11453bee;
  /* 11453be1 call 0x11453dd0 */
  push32(0x11453be6u); f_11453dd0();
  /* 11453be6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11453bec jmp 0x11453bf8 */
  goto L_11453bf8;
L_11453bee:;
  /* 11453bee mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11453bf8:;
  /* 11453bf8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11453bfe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11453c01:;
  /* 11453c01 jmp 0x11453c0b */
  goto L_11453c0b;
L_11453c03:;
  /* 11453c03 call 0x11453dd0 */
  push32(0x11453c08u); f_11453dd0();
  /* 11453c08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11453c0b:;
  /* 11453c0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453c0f je 0x11453c28 */
  if (C.zf) goto L_11453c28;
  /* 11453c11 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11453c13 call 0x1144b2b0 */
  push32(0x11453c18u); f_1144b2b0();
  /* 11453c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453c1b mov eax, dword ptr [0x11474c1c] */
  EAX = (r32((uint32_t)(0x11474c1c)));
  /* 11453c20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11453c23 mov dword ptr [0x11474c1c], eax */
  w32((uint32_t)(0x11474c1c), (EAX));
L_11453c28:;
  /* 11453c28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11453c2b:;
  /* 11453c2b mov esp, ebp */
  ESP = (EBP);
  /* 11453c2d pop ebp */
  EBP = (pop32());
  /* 11453c2e ret  */
  ESPCHK(0x11453840u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c30 @ 0x11453c30 (403 bytes, 117 insns) */
void f_11453c30(void) {
  FTRACE(0x11453c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11453c31 mov ebp, esp */
  EBP = (ESP);
  /* 11453c33 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11453c39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453c3c push eax */
  push32((uint32_t)(EAX));
  /* 11453c3d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11453c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11453c44 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11453c4a push edx */
  push32((uint32_t)(EDX));
  /* 11453c4b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11453c51 push eax */
  push32((uint32_t)(EAX));
  /* 11453c52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453c55 push ecx */
  push32((uint32_t)(ECX));
  /* 11453c56 call 0x11453ed0 */
  push32(0x11453c5bu); f_11453ed0();
  /* 11453c5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453c5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453c60 jne 0x11453c69 */
  if (!C.zf) goto L_11453c69;
  /* 11453c62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453c64 jmp 0x11453dbf */
  goto L_11453dbf;
L_11453c69:;
  /* 11453c69 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11453c6e push 0x11470a50 */
  push32((uint32_t)(0x11470a50u));
  /* 11453c73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11453c75 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11453c7b push edx */
  push32((uint32_t)(EDX));
  /* 11453c7c call 0x1144c140 */
  push32(0x11453c81u); f_1144c140();
  /* 11453c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453c84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453c87 push eax */
  push32((uint32_t)(EAX));
  /* 11453c88 call 0x114485f0 */
  push32(0x11453c8du); f_114485f0();
  /* 11453c8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453c90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11453c93 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453c97 jne 0x11453ca0 */
  if (!C.zf) goto L_11453ca0;
  /* 11453c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453c9b jmp 0x11453dbf */
  goto L_11453dbf;
L_11453ca0:;
  /* 11453ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453ca3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453ca6 mov ecx, dword ptr [eax + 0x114735fc] */
  ECX = (r32((uint32_t)(EAX + 0x114735fc)));
  /* 11453cac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11453caf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453cb2 mov eax, dword ptr [edx*4 + 0x11474b50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11474b50)));
  /* 11453cb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11453cbc push 6 */
  push32((uint32_t)(0x6u));
  /* 11453cbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453cc1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453cc4 add ecx, 0x11474ba8 */
  { uint32_t _a=(ECX),_b=(0x11474ba8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453cca push ecx */
  push32((uint32_t)(ECX));
  /* 11453ccb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11453cce push edx */
  push32((uint32_t)(EDX));
  /* 11453ccf call 0x1144f810 */
  push32(0x11453cd4u); f_1144f810();
  /* 11453cd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453cd7 mov eax, dword ptr [0x11474b68] */
  EAX = (r32((uint32_t)(0x11474b68)));
  /* 11453cdc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11453cdf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11453ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 11453ce6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453ce9 push edx */
  push32((uint32_t)(EDX));
  /* 11453cea call 0x1144c2c0 */
  push32(0x11453cefu); f_1144c2c0();
  /* 11453cef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453cf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453cf5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453cf8 mov dword ptr [ecx + 0x114735fc], eax */
  w32((uint32_t)(ECX + 0x114735fc), (EAX));
  /* 11453cfe mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11453d04 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11453d0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453d0d mov dword ptr [eax*4 + 0x11474b50], edx */
  w32((uint32_t)(EAX*4 + 0x11474b50), (EDX));
  /* 11453d14 push 6 */
  push32((uint32_t)(0x6u));
  /* 11453d16 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11453d1c push ecx */
  push32((uint32_t)(ECX));
  /* 11453d1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453d20 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453d23 add edx, 0x11474ba8 */
  { uint32_t _a=(EDX),_b=(0x11474ba8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453d29 push edx */
  push32((uint32_t)(EDX));
  /* 11453d2a call 0x1144f810 */
  push32(0x11453d2fu); f_1144f810();
  /* 11453d2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453d32 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453d36 jne 0x11453d43 */
  if (!C.zf) goto L_11453d43;
  /* 11453d38 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11453d3e mov dword ptr [0x11474b68], eax */
  w32((uint32_t)(0x11474b68), (EAX));
L_11453d43:;
  /* 11453d43 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453d47 jne 0x11453d55 */
  if (!C.zf) goto L_11453d55;
  /* 11453d49 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11453d4f mov dword ptr [0x11474b6c], ecx */
  w32((uint32_t)(0x11474b6c), (ECX));
L_11453d55:;
  /* 11453d55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453d58 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453d5b call dword ptr [edx + 0x11473600] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11473600))), 0x11453d61u);
  /* 11453d61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453d63 je 0x11453d9c */
  if (C.zf) goto L_11453d9c;
  /* 11453d65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453d68 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453d6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453d6e mov dword ptr [eax + 0x114735fc], ecx */
  w32((uint32_t)(EAX + 0x114735fc), (ECX));
  /* 11453d74 push 2 */
  push32((uint32_t)(0x2u));
  /* 11453d76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11453d79 push edx */
  push32((uint32_t)(EDX));
  /* 11453d7a call 0x11449080 */
  push32(0x11453d7fu); f_11449080();
  /* 11453d7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453d82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453d85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453d88 mov dword ptr [eax*4 + 0x11474b50], ecx */
  w32((uint32_t)(EAX*4 + 0x11474b50), (ECX));
  /* 11453d8f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11453d92 mov dword ptr [0x11474b68], edx */
  w32((uint32_t)(0x11474b68), (EDX));
  /* 11453d98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453d9a jmp 0x11453dbf */
  goto L_11453dbf;
L_11453d9c:;
  /* 11453d9c cmp dword ptr [ebp - 0xc], 0x114734e8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x114734e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453da3 je 0x11453db3 */
  if (C.zf) goto L_11453db3;
  /* 11453da5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11453da7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11453daa push eax */
  push32((uint32_t)(EAX));
  /* 11453dab call 0x11449080 */
  push32(0x11453db0u); f_11449080();
  /* 11453db0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11453db3:;
  /* 11453db3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453db6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453db9 mov eax, dword ptr [ecx + 0x114735fc] */
  EAX = (r32((uint32_t)(ECX + 0x114735fc)));
L_11453dbf:;
  /* 11453dbf mov esp, ebp */
  ESP = (EBP);
  /* 11453dc1 pop ebp */
  EBP = (pop32());
  /* 11453dc2 ret  */
  ESPCHK(0x11453c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013dd0 @ 0x11453dd0 (256 bytes, 72 insns) */
void f_11453dd0(void) {
  FTRACE(0x11453dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11453dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11453dd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11453dd6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11453ddd cmp dword ptr [0x114735fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114735fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453de4 jne 0x11453e04 */
  if (!C.zf) goto L_11453e04;
  /* 11453de6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11453deb push 0x11470a50 */
  push32((uint32_t)(0x11470a50u));
  /* 11453df0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11453df2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11453df7 call 0x114485f0 */
  push32(0x11453dfcu); f_114485f0();
  /* 11453dfc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453dff mov dword ptr [0x114735fc], eax */
  w32((uint32_t)(0x114735fc), (EAX));
L_11453e04:;
  /* 11453e04 mov eax, dword ptr [0x114735fc] */
  EAX = (r32((uint32_t)(0x114735fc)));
  /* 11453e09 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11453e0c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11453e13 jmp 0x11453e1e */
  goto L_11453e1e;
L_11453e15:;
  /* 11453e15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453e18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453e1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11453e1e:;
  /* 11453e1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453e21 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453e24 mov eax, dword ptr [edx + 0x114735fc] */
  EAX = (r32((uint32_t)(EDX + 0x114735fc)));
  /* 11453e2a push eax */
  push32((uint32_t)(EAX));
  /* 11453e2b push 0x11470a5c */
  push32((uint32_t)(0x11470a5cu));
  /* 11453e30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453e33 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453e36 mov edx, dword ptr [ecx + 0x114735f8] */
  EDX = (r32((uint32_t)(ECX + 0x114735f8)));
  /* 11453e3c push edx */
  push32((uint32_t)(EDX));
  /* 11453e3d push 3 */
  push32((uint32_t)(0x3u));
  /* 11453e3f mov eax, dword ptr [0x114735fc] */
  EAX = (r32((uint32_t)(0x114735fc)));
  /* 11453e44 push eax */
  push32((uint32_t)(EAX));
  /* 11453e45 call 0x11454070 */
  push32(0x11453e4au); f_11454070();
  /* 11453e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453e4d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453e51 jge 0x11453e99 */
  if ((C.sf==C.of)) goto L_11453e99;
  /* 11453e53 push 0x11470a48 */
  push32((uint32_t)(0x11470a48u));
  /* 11453e58 mov ecx, dword ptr [0x114735fc] */
  ECX = (r32((uint32_t)(0x114735fc)));
  /* 11453e5e push ecx */
  push32((uint32_t)(ECX));
  /* 11453e5f call 0x1144c2d0 */
  push32(0x11453e64u); f_1144c2d0();
  /* 11453e64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453e67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453e6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11453e6d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453e70 mov eax, dword ptr [edx + 0x114735fc] */
  EAX = (r32((uint32_t)(EDX + 0x114735fc)));
  /* 11453e76 push eax */
  push32((uint32_t)(EAX));
  /* 11453e77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11453e7a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11453e7d mov edx, dword ptr [ecx + 0x114735fc] */
  EDX = (r32((uint32_t)(ECX + 0x114735fc)));
  /* 11453e83 push edx */
  push32((uint32_t)(EDX));
  /* 11453e84 call 0x1144fda0 */
  push32(0x11453e89u); f_1144fda0();
  /* 11453e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453e8e je 0x11453e97 */
  if (C.zf) goto L_11453e97;
  /* 11453e90 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11453e97:;
  /* 11453e97 jmp 0x11453ec7 */
  goto L_11453ec7;
L_11453e99:;
  /* 11453e99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453e9d jne 0x11453ea6 */
  if (!C.zf) goto L_11453ea6;
  /* 11453e9f mov eax, dword ptr [0x114735fc] */
  EAX = (r32((uint32_t)(0x114735fc)));
  /* 11453ea4 jmp 0x11453ecc */
  goto L_11453ecc;
L_11453ea6:;
  /* 11453ea6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11453ea8 mov eax, dword ptr [0x114735fc] */
  EAX = (r32((uint32_t)(0x114735fc)));
  /* 11453ead push eax */
  push32((uint32_t)(EAX));
  /* 11453eae call 0x11449080 */
  push32(0x11453eb3u); f_11449080();
  /* 11453eb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453eb6 mov dword ptr [0x114735fc], 0 */
  w32((uint32_t)(0x114735fc), (0x0u));
  /* 11453ec0 mov eax, dword ptr [0x11473614] */
  EAX = (r32((uint32_t)(0x11473614)));
  /* 11453ec5 jmp 0x11453ecc */
  goto L_11453ecc;
L_11453ec7:;
  /* 11453ec7 jmp 0x11453e15 */
  goto L_11453e15;
L_11453ecc:;
  /* 11453ecc mov esp, ebp */
  ESP = (EBP);
  /* 11453ece pop ebp */
  EBP = (pop32());
  /* 11453ecf ret  */
  ESPCHK(0x11453dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ed0 @ 0x11453ed0 (388 bytes, 115 insns) */
void f_11453ed0(void) {
  FTRACE(0x11453ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11453ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11453ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11453ed3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11453ed9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453edd jne 0x11453ee6 */
  if (!C.zf) goto L_11453ee6;
  /* 11453edf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453ee1 jmp 0x11454050 */
  goto L_11454050;
L_11453ee6:;
  /* 11453ee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453ee9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11453eec cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453eef jne 0x11453f40 */
  if (!C.zf) goto L_11453f40;
  /* 11453ef1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453ef4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11453ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453efa jne 0x11453f40 */
  if (!C.zf) goto L_11453f40;
  /* 11453efc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453eff mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11453f02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453f05 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11453f09 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453f0d je 0x11453f29 */
  if (C.zf) goto L_11453f29;
  /* 11453f0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11453f12 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11453f17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11453f1a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11453f20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11453f23 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11453f29:;
  /* 11453f29 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11453f2d je 0x11453f38 */
  if (C.zf) goto L_11453f38;
  /* 11453f2f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11453f32 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11453f38:;
  /* 11453f38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11453f3b jmp 0x11454050 */
  goto L_11454050;
L_11453f40:;
  /* 11453f40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453f43 push ecx */
  push32((uint32_t)(ECX));
  /* 11453f44 push 0x11473570 */
  push32((uint32_t)(0x11473570u));
  /* 11453f49 call 0x1144fda0 */
  push32(0x11453f4eu); f_1144fda0();
  /* 11453f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453f53 je 0x11454008 */
  if (C.zf) goto L_11454008;
  /* 11453f59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453f5c push edx */
  push32((uint32_t)(EDX));
  /* 11453f5d push 0x114734ec */
  push32((uint32_t)(0x114734ecu));
  /* 11453f62 call 0x1144fda0 */
  push32(0x11453f67u); f_1144fda0();
  /* 11453f67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453f6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453f6c je 0x11454008 */
  if (C.zf) goto L_11454008;
  /* 11453f72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453f75 push eax */
  push32((uint32_t)(EAX));
  /* 11453f76 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11453f7c push ecx */
  push32((uint32_t)(ECX));
  /* 11453f7d call 0x114540c0 */
  push32(0x11453f82u); f_114540c0();
  /* 11453f82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453f85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453f87 je 0x11453f90 */
  if (C.zf) goto L_11453f90;
  /* 11453f89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453f8b jmp 0x11454050 */
  goto L_11454050;
L_11453f90:;
  /* 11453f90 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11453f96 push edx */
  push32((uint32_t)(EDX));
  /* 11453f97 push 0x11474b80 */
  push32((uint32_t)(0x11474b80u));
  /* 11453f9c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11453fa2 push eax */
  push32((uint32_t)(EAX));
  /* 11453fa3 call 0x11455b30 */
  push32(0x11453fa8u); f_11455b30();
  /* 11453fa8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11453fad jne 0x11453fb6 */
  if (!C.zf) goto L_11453fb6;
  /* 11453faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11453fb1 jmp 0x11454050 */
  goto L_11454050;
L_11453fb6:;
  /* 11453fb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11453fb8 mov cx, word ptr [0x11474b84] */
  CX = (r16((uint32_t)(0x11474b84)));
  /* 11453fbf mov dword ptr [0x11474b88], ecx */
  w32((uint32_t)(0x11474b88), (ECX));
  /* 11453fc5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11453fcb push edx */
  push32((uint32_t)(EDX));
  /* 11453fcc push 0x11473570 */
  push32((uint32_t)(0x11473570u));
  /* 11453fd1 call 0x11454220 */
  push32(0x11453fd6u); f_11454220();
  /* 11453fd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453fd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453fdc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11453fdf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11453fe1 je 0x11453ff6 */
  if (C.zf) goto L_11453ff6;
  /* 11453fe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11453fe6 push edx */
  push32((uint32_t)(EDX));
  /* 11453fe7 push 0x114734ec */
  push32((uint32_t)(0x114734ecu));
  /* 11453fec call 0x1144c2c0 */
  push32(0x11453ff1u); f_1144c2c0();
  /* 11453ff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11453ff4 jmp 0x11454008 */
  goto L_11454008;
L_11453ff6:;
  /* 11453ff6 push 0x11473570 */
  push32((uint32_t)(0x11473570u));
  /* 11453ffb push 0x114734ec */
  push32((uint32_t)(0x114734ecu));
  /* 11454000 call 0x1144c2c0 */
  push32(0x11454005u); f_1144c2c0();
  /* 11454005 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11454008:;
  /* 11454008 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145400c je 0x11454021 */
  if (C.zf) goto L_11454021;
  /* 1145400e push 6 */
  push32((uint32_t)(0x6u));
  /* 11454010 push 0x11474b80 */
  push32((uint32_t)(0x11474b80u));
  /* 11454015 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11454018 push eax */
  push32((uint32_t)(EAX));
  /* 11454019 call 0x1144f810 */
  push32(0x1145401eu); f_1144f810();
  /* 1145401e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11454021:;
  /* 11454021 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454025 je 0x1145403a */
  if (C.zf) goto L_1145403a;
  /* 11454027 push 4 */
  push32((uint32_t)(0x4u));
  /* 11454029 push 0x11474b88 */
  push32((uint32_t)(0x11474b88u));
  /* 1145402e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11454031 push ecx */
  push32((uint32_t)(ECX));
  /* 11454032 call 0x1144f810 */
  push32(0x11454037u); f_1144f810();
  /* 11454037 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1145403a:;
  /* 1145403a push 0x11473570 */
  push32((uint32_t)(0x11473570u));
  /* 1145403f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11454042 push edx */
  push32((uint32_t)(EDX));
  /* 11454043 call 0x1144c2c0 */
  push32(0x11454048u); f_1144c2c0();
  /* 11454048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145404b mov eax, 0x11473570 */
  EAX = (0x11473570u);
L_11454050:;
  /* 11454050 mov esp, ebp */
  ESP = (EBP);
  /* 11454052 pop ebp */
  EBP = (pop32());
  /* 11454053 ret  */
  ESPCHK(0x11453ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014060 @ 0x11454060 (7 bytes, 5 insns) */
void f_11454060(void) {
  FTRACE(0x11454060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11454060 push ebp */
  push32((uint32_t)(EBP));
  /* 11454061 mov ebp, esp */
  EBP = (ESP);
  /* 11454063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11454065 pop ebp */
  EBP = (pop32());
  /* 11454066 ret  */
  ESPCHK(0x11454060u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11454070 (79 bytes, 28 insns) */
void f_11454070(void) {
  FTRACE(0x11454070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11454070 push ebp */
  push32((uint32_t)(EBP));
  /* 11454071 mov ebp, esp */
  EBP = (ESP);
  /* 11454073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11454076 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11454079 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1145407c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11454083 jmp 0x1145408e */
  goto L_1145408e;
L_11454085:;
  /* 11454085 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454088 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145408b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1145408e:;
  /* 1145408e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454091 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454094 jge 0x114540b4 */
  if ((C.sf==C.of)) goto L_114540b4;
  /* 11454096 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454099 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145409c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1145409f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114540a2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 114540a5 push edx */
  push32((uint32_t)(EDX));
  /* 114540a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114540a9 push eax */
  push32((uint32_t)(EAX));
  /* 114540aa call 0x1144c2d0 */
  push32(0x114540afu); f_1144c2d0();
  /* 114540af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114540b2 jmp 0x11454085 */
  goto L_11454085;
L_114540b4:;
  /* 114540b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 114540bb mov esp, ebp */
  ESP = (EBP);
  /* 114540bd pop ebp */
  EBP = (pop32());
  /* 114540be ret  */
  ESPCHK(0x11454070u, _esp0);
  ESP += 4; return;
}

/* FUN_100140c0 @ 0x114540c0 (349 bytes, 122 insns) */
void f_114540c0(void) {
  FTRACE(0x114540c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114540c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114540c1 mov ebp, esp */
  EBP = (ESP);
  /* 114540c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114540c6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 114540cb push 0 */
  push32((uint32_t)(0x0u));
  /* 114540cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114540d0 push eax */
  push32((uint32_t)(EAX));
  /* 114540d1 call 0x1144cca0 */
  push32(0x114540d6u); f_1144cca0();
  /* 114540d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114540d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114540dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114540df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114540e1 jne 0x114540ea */
  if (!C.zf) goto L_114540ea;
  /* 114540e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114540e5 jmp 0x11454219 */
  goto L_11454219;
L_114540ea:;
  /* 114540ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114540ed movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114540f0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114540f3 jne 0x11454120 */
  if (!C.zf) goto L_11454120;
  /* 114540f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 114540f8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 114540fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114540fe je 0x11454120 */
  if (C.zf) goto L_11454120;
  /* 11454100 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11454103 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454106 push ecx */
  push32((uint32_t)(ECX));
  /* 11454107 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145410a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454110 push edx */
  push32((uint32_t)(EDX));
  /* 11454111 call 0x1144c2c0 */
  push32(0x11454116u); f_1144c2c0();
  /* 11454116 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454119 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145411b jmp 0x11454219 */
  goto L_11454219;
L_11454120:;
  /* 11454120 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11454127 jmp 0x11454132 */
  goto L_11454132;
L_11454129:;
  /* 11454129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145412c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145412f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11454132:;
  /* 11454132 push 0x11470a60 */
  push32((uint32_t)(0x11470a60u));
  /* 11454137 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145413a push ecx */
  push32((uint32_t)(ECX));
  /* 1145413b call 0x11455a70 */
  push32(0x11454140u); f_11455a70();
  /* 11454140 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454143 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11454146 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145414a jne 0x11454154 */
  if (!C.zf) goto L_11454154;
  /* 1145414c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1145414f jmp 0x11454219 */
  goto L_11454219;
L_11454154:;
  /* 11454154 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11454157 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145415a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1145415c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1145415f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454163 jne 0x1145418a */
  if (!C.zf) goto L_1145418a;
  /* 11454165 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454169 jge 0x1145418a */
  if ((C.sf==C.of)) goto L_1145418a;
  /* 1145416b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1145416f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454172 je 0x1145418a */
  if (C.zf) goto L_1145418a;
  /* 11454174 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454177 push edx */
  push32((uint32_t)(EDX));
  /* 11454178 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145417b push eax */
  push32((uint32_t)(EAX));
  /* 1145417c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145417f push ecx */
  push32((uint32_t)(ECX));
  /* 11454180 call 0x1144cb30 */
  push32(0x11454185u); f_1144cb30();
  /* 11454185 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454188 jmp 0x114541f0 */
  goto L_114541f0;
L_1145418a:;
  /* 1145418a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145418e jne 0x114541b8 */
  if (!C.zf) goto L_114541b8;
  /* 11454190 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454194 jge 0x114541b8 */
  if ((C.sf==C.of)) goto L_114541b8;
  /* 11454196 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1145419a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145419d je 0x114541b8 */
  if (C.zf) goto L_114541b8;
  /* 1145419f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 114541a2 push eax */
  push32((uint32_t)(EAX));
  /* 114541a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114541a6 push ecx */
  push32((uint32_t)(ECX));
  /* 114541a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114541aa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114541ad push edx */
  push32((uint32_t)(EDX));
  /* 114541ae call 0x1144cb30 */
  push32(0x114541b3u); f_1144cb30();
  /* 114541b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114541b6 jmp 0x114541f0 */
  goto L_114541f0;
L_114541b8:;
  /* 114541b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114541bc jne 0x114541eb */
  if (!C.zf) goto L_114541eb;
  /* 114541be movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114541c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114541c4 je 0x114541cf */
  if (C.zf) goto L_114541cf;
  /* 114541c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114541ca cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114541cd jne 0x114541eb */
  if (!C.zf) goto L_114541eb;
L_114541cf:;
  /* 114541cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 114541d2 push edx */
  push32((uint32_t)(EDX));
  /* 114541d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114541d6 push eax */
  push32((uint32_t)(EAX));
  /* 114541d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114541da add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114541e0 push ecx */
  push32((uint32_t)(ECX));
  /* 114541e1 call 0x1144cb30 */
  push32(0x114541e6u); f_1144cb30();
  /* 114541e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114541e9 jmp 0x114541f0 */
  goto L_114541f0;
L_114541eb:;
  /* 114541eb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114541ee jmp 0x11454219 */
  goto L_11454219;
L_114541f0:;
  /* 114541f0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114541f4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114541f7 jne 0x114541fb */
  if (!C.zf) goto L_114541fb;
  /* 114541f9 jmp 0x11454217 */
  goto L_11454217;
L_114541fb:;
  /* 114541fb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 114541ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11454201 jne 0x11454205 */
  if (!C.zf) goto L_11454205;
  /* 11454203 jmp 0x11454217 */
  goto L_11454217;
L_11454205:;
  /* 11454205 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454208 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145420b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1145420f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11454212 jmp 0x11454129 */
  goto L_11454129;
L_11454217:;
  /* 11454217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11454219:;
  /* 11454219 mov esp, ebp */
  ESP = (EBP);
  /* 1145421b pop ebp */
  EBP = (pop32());
  /* 1145421c ret  */
  ESPCHK(0x114540c0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11454220 (101 bytes, 36 insns) */
void f_11454220(void) {
  FTRACE(0x11454220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11454220 push ebp */
  push32((uint32_t)(EBP));
  /* 11454221 mov ebp, esp */
  EBP = (ESP);
  /* 11454223 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11454226 push eax */
  push32((uint32_t)(EAX));
  /* 11454227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145422a push ecx */
  push32((uint32_t)(ECX));
  /* 1145422b call 0x1144c2c0 */
  push32(0x11454230u); f_1144c2c0();
  /* 11454230 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454233 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11454236 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1145423a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145423c je 0x11454258 */
  if (C.zf) goto L_11454258;
  /* 1145423e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11454241 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454244 push ecx */
  push32((uint32_t)(ECX));
  /* 11454245 push 0x11470a68 */
  push32((uint32_t)(0x11470a68u));
  /* 1145424a push 2 */
  push32((uint32_t)(0x2u));
  /* 1145424c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145424f push edx */
  push32((uint32_t)(EDX));
  /* 11454250 call 0x11454070 */
  push32(0x11454255u); f_11454070();
  /* 11454255 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11454258:;
  /* 11454258 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1145425b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11454262 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11454264 je 0x11454283 */
  if (C.zf) goto L_11454283;
  /* 11454266 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11454269 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145426f push edx */
  push32((uint32_t)(EDX));
  /* 11454270 push 0x11470a64 */
  push32((uint32_t)(0x11470a64u));
  /* 11454275 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454277 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145427a push eax */
  push32((uint32_t)(EAX));
  /* 1145427b call 0x11454070 */
  push32(0x11454280u); f_11454070();
  /* 11454280 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11454283:;
  /* 11454283 pop ebp */
  EBP = (pop32());
  /* 11454284 ret  */
  ESPCHK(0x11454220u, _esp0);
  ESP += 4; return;
}

/* FUN_10014290 @ 0x11454290 (237 bytes, 81 insns) */
void f_11454290(void) {
  FTRACE(0x11454290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11454290 push ebp */
  push32((uint32_t)(EBP));
  /* 11454291 mov ebp, esp */
  EBP = (ESP);
  /* 11454293 push ecx */
  push32((uint32_t)(ECX));
  /* 11454294 cmp dword ptr [0x1147600c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1147600c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145429b jne 0x114542b2 */
  if (!C.zf) goto L_114542b2;
  /* 1145429d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 114542a0 push eax */
  push32((uint32_t)(EAX));
  /* 114542a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114542a4 push ecx */
  push32((uint32_t)(ECX));
  /* 114542a5 call 0x114568e0 */
  push32(0x114542aau); f_114568e0();
  /* 114542aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114542ad jmp 0x11454379 */
  goto L_11454379;
L_114542b2:;
  /* 114542b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114542b4 call 0x1144b210 */
  push32(0x114542b9u); f_1144b210();
  /* 114542b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114542bc jmp 0x114542c7 */
  goto L_114542c7;
L_114542be:;
  /* 114542be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114542c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114542c4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_114542c7:;
  /* 114542c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114542ca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 114542ce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 114542d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114542d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114542db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114542dd je 0x1145435b */
  if (C.zf) goto L_1145435b;
  /* 114542df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114542e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114542e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114542e9 mov cl, byte ptr [eax + 0x11476121] */
  CL = (r8((uint32_t)(EAX + 0x11476121)));
  /* 114542ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 114542f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114542f4 je 0x11454346 */
  if (C.zf) goto L_11454346;
  /* 114542f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114542f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114542fc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 114542ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454302 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11454304 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11454306 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11454308 jne 0x11454318 */
  if (!C.zf) goto L_11454318;
  /* 1145430a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1145430c call 0x1144b2b0 */
  push32(0x11454311u); f_1144b2b0();
  /* 11454311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454314 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11454316 jmp 0x11454379 */
  goto L_11454379;
L_11454318:;
  /* 11454318 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145431b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11454321 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11454324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454327 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11454329 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1145432b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1145432d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454330 jne 0x11454344 */
  if (!C.zf) goto L_11454344;
  /* 11454332 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11454334 call 0x1144b2b0 */
  push32(0x11454339u); f_1144b2b0();
  /* 11454339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145433c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145433f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11454342 jmp 0x11454379 */
  goto L_11454379;
L_11454344:;
  /* 11454344 jmp 0x11454356 */
  goto L_11454356;
L_11454346:;
  /* 11454346 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454349 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1145434f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454352 jne 0x11454356 */
  if (!C.zf) goto L_11454356;
  /* 11454354 jmp 0x1145435b */
  goto L_1145435b;
L_11454356:;
  /* 11454356 jmp 0x114542be */
  goto L_114542be;
L_1145435b:;
  /* 1145435b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1145435d call 0x1144b2b0 */
  push32(0x11454362u); f_1144b2b0();
  /* 11454362 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454368 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1145436d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454370 jne 0x11454377 */
  if (!C.zf) goto L_11454377;
  /* 11454372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454375 jmp 0x11454379 */
  goto L_11454379;
L_11454377:;
  /* 11454377 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11454379:;
  /* 11454379 mov esp, ebp */
  ESP = (EBP);
  /* 1145437b pop ebp */
  EBP = (pop32());
  /* 1145437c ret  */
  ESPCHK(0x11454290u, _esp0);
  ESP += 4; return;
}

/* FUN_10014380 @ 0x11454380 (130 bytes, 50 insns) */
void f_11454380(void) {
  FTRACE(0x11454380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11454380 push ebp */
  push32((uint32_t)(EBP));
  /* 11454381 mov ebp, esp */
  EBP = (ESP);
  /* 11454383 push ecx */
  push32((uint32_t)(ECX));
  /* 11454384 push ebx */
  push32((uint32_t)(EBX));
  /* 11454385 push esi */
  push32((uint32_t)(ESI));
  /* 11454386 push edi */
  push32((uint32_t)(EDI));
  /* 11454387 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1145438e:;
  /* 1145438e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454392 jne 0x114543b2 */
  if (!C.zf) goto L_114543b2;
  /* 11454394 push 0x11470a78 */
  push32((uint32_t)(0x11470a78u));
  /* 11454399 push 0 */
  push32((uint32_t)(0x0u));
  /* 1145439b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1145439d push 0x11470a6c */
  push32((uint32_t)(0x11470a6cu));
  /* 114543a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114543a4 call 0x11447960 */
  push32(0x114543a9u); f_11447960();
  /* 114543a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114543ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114543af jne 0x114543b2 */
  if (!C.zf) goto L_114543b2;
  /* 114543b1 int3  */
  x86_unimpl("int3 @ 0x114543b1");
L_114543b2:;
  /* 114543b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114543b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114543b6 jne 0x1145438e */
  if (!C.zf) goto L_1145438e;
  /* 114543b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114543bb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 114543be and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 114543c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114543c3 je 0x114543d1 */
  if (C.zf) goto L_114543d1;
  /* 114543c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114543c8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 114543cf jmp 0x114543f8 */
  goto L_114543f8;
L_114543d1:;
  /* 114543d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114543d4 push ecx */
  push32((uint32_t)(ECX));
  /* 114543d5 call 0x11452260 */
  push32(0x114543dau); f_11452260();
  /* 114543da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114543dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114543e0 push edx */
  push32((uint32_t)(EDX));
  /* 114543e1 call 0x11454410 */
  push32(0x114543e6u); f_11454410();
  /* 114543e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114543e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114543ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114543ef push eax */
  push32((uint32_t)(EAX));
  /* 114543f0 call 0x114522d0 */
  push32(0x114543f5u); f_114522d0();
  /* 114543f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114543f8:;
  /* 114543f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114543fb pop edi */
  EDI = (pop32());
  /* 114543fc pop esi */
  ESI = (pop32());
  /* 114543fd pop ebx */
  EBX = (pop32());
  /* 114543fe mov esp, ebp */
  ESP = (EBP);
  /* 11454400 pop ebp */
  EBP = (pop32());
  /* 11454401 ret  */
  ESPCHK(0x11454380u, _esp0);
  ESP += 4; return;
}

/* FUN_10014410 @ 0x11454410 (190 bytes, 67 insns) */
void f_11454410(void) {
  FTRACE(0x11454410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11454410 push ebp */
  push32((uint32_t)(EBP));
  /* 11454411 mov ebp, esp */
  EBP = (ESP);
  /* 11454413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11454416 push ebx */
  push32((uint32_t)(EBX));
  /* 11454417 push esi */
  push32((uint32_t)(ESI));
  /* 11454418 push edi */
  push32((uint32_t)(EDI));
  /* 11454419 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11454420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454423 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11454426:;
  /* 11454426 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145442a jne 0x1145444a */
  if (!C.zf) goto L_1145444a;
  /* 1145442c push 0x114708a4 */
  push32((uint32_t)(0x114708a4u));
  /* 11454431 push 0 */
  push32((uint32_t)(0x0u));
  /* 11454433 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11454435 push 0x11470a6c */
  push32((uint32_t)(0x11470a6cu));
  /* 1145443a push 2 */
  push32((uint32_t)(0x2u));
  /* 1145443c call 0x11447960 */
  push32(0x11454441u); f_11447960();
  /* 11454441 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454444 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454447 jne 0x1145444a */
  if (!C.zf) goto L_1145444a;
  /* 11454449 int3  */
  x86_unimpl("int3 @ 0x11454449");
L_1145444a:;
  /* 1145444a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1145444c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1145444e jne 0x11454426 */
  if (!C.zf) goto L_11454426;
  /* 11454450 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454453 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11454456 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1145445b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145445d je 0x114544ba */
  if (C.zf) goto L_114544ba;
  /* 1145445f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454462 push ecx */
  push32((uint32_t)(ECX));
  /* 11454463 call 0x11453620 */
  push32(0x11454468u); f_11453620();
  /* 11454468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145446b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1145446e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454471 push edx */
  push32((uint32_t)(EDX));
  /* 11454472 call 0x11456ad0 */
  push32(0x11454477u); f_11456ad0();
  /* 11454477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145447a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145447d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11454480 push ecx */
  push32((uint32_t)(ECX));
  /* 11454481 call 0x114569a0 */
  push32(0x11454486u); f_114569a0();
  /* 11454486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145448b jge 0x11454496 */
  if ((C.sf==C.of)) goto L_11454496;
  /* 1145448d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11454494 jmp 0x114544ba */
  goto L_114544ba;
L_11454496:;
  /* 11454496 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454499 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145449d je 0x114544ba */
  if (C.zf) goto L_114544ba;
  /* 1145449f push 2 */
  push32((uint32_t)(0x2u));
  /* 114544a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114544a4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 114544a7 push ecx */
  push32((uint32_t)(ECX));
  /* 114544a8 call 0x11449080 */
  push32(0x114544adu); f_11449080();
  /* 114544ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114544b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 114544b3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_114544ba:;
  /* 114544ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 114544bd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 114544c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114544c7 pop edi */
  EDI = (pop32());
  /* 114544c8 pop esi */
  ESI = (pop32());
  /* 114544c9 pop ebx */
  EBX = (pop32());
  /* 114544ca mov esp, ebp */
  ESP = (EBP);
  /* 114544cc pop ebp */
  EBP = (pop32());
  /* 114544cd ret  */
  ESPCHK(0x11454410u, _esp0);
  ESP += 4; return;
}

/* FUN_100144d0 @ 0x114544d0 (210 bytes, 63 insns) */
void f_114544d0(void) {
  FTRACE(0x114544d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114544d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114544d1 mov ebp, esp */
  EBP = (ESP);
  /* 114544d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114544d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114544d7 cmp eax, dword ptr [0x114763bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114763bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114544dd jae 0x11454501 */
  if (!C.cf) goto L_11454501;
  /* 114544df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114544e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114544e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114544e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 114544eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114544ee mov eax, dword ptr [ecx*4 + 0x11476280] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11476280)));
  /* 114544f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 114544fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 114544fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114544ff jne 0x11454514 */
  if (!C.zf) goto L_11454514;
L_11454501:;
  /* 11454501 call 0x114511e0 */
  push32(0x11454506u); f_114511e0();
  /* 11454506 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1145450c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1145450f jmp 0x1145459e */
  goto L_1145459e;
L_11454514:;
  /* 11454514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454517 push edx */
  push32((uint32_t)(EDX));
  /* 11454518 call 0x114533e0 */
  push32(0x1145451du); f_114533e0();
  /* 1145451d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454523 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11454526 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454529 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1145452c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1145452f mov edx, dword ptr [eax*4 + 0x11476280] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11476280)));
  /* 11454536 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1145453b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1145453e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11454540 je 0x1145457d */
  if (C.zf) goto L_1145457d;
  /* 11454542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454545 push ecx */
  push32((uint32_t)(ECX));
  /* 11454546 call 0x11453260 */
  push32(0x1145454bu); f_11453260();
  /* 1145454b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145454e push eax */
  push32((uint32_t)(EAX));
  /* 1145454f call dword ptr [0x11477320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11477320))), 0x11454555u);
  /* 11454555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11454557 jne 0x11454564 */
  if (!C.zf) goto L_11454564;
  /* 11454559 call dword ptr [0x114772f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114772f4))), 0x1145455fu);
  /* 1145455f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11454562 jmp 0x1145456b */
  goto L_1145456b;
L_11454564:;
  /* 11454564 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1145456b:;
  /* 1145456b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145456f jne 0x11454573 */
  if (!C.zf) goto L_11454573;
  /* 11454571 jmp 0x1145458f */
  goto L_1145458f;
L_11454573:;
  /* 11454573 call 0x114511f0 */
  push32(0x11454578u); f_114511f0();
  /* 11454578 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145457b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1145457d:;
  /* 1145457d call 0x114511e0 */
  push32(0x11454582u); f_114511e0();
  /* 11454582 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11454588 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1145458f:;
  /* 1145458f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454592 push eax */
  push32((uint32_t)(EAX));
  /* 11454593 call 0x11453470 */
  push32(0x11454598u); f_11453470();
  /* 11454598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145459b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1145459e:;
  /* 1145459e mov esp, ebp */
  ESP = (EBP);
  /* 114545a0 pop ebp */
  EBP = (pop32());
  /* 114545a1 ret  */
  ESPCHK(0x114544d0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x114545b0 (219 bytes, 64 insns) */
void f_114545b0(void) {
  FTRACE(0x114545b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114545b0 push ebp */
  push32((uint32_t)(EBP));
  /* 114545b1 mov ebp, esp */
  EBP = (ESP);
  /* 114545b3 push ecx */
  push32((uint32_t)(ECX));
  /* 114545b4 cmp dword ptr [0x11474b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114545bb je 0x11454651 */
  if (C.zf) goto L_11454651;
  /* 114545c1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 114545c3 push 0x11470a88 */
  push32((uint32_t)(0x11470a88u));
  /* 114545c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 114545ca push 0xac */
  push32((uint32_t)(0xacu));
  /* 114545cf push 1 */
  push32((uint32_t)(0x1u));
  /* 114545d1 call 0x11448a00 */
  push32(0x114545d6u); f_11448a00();
  /* 114545d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114545d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114545dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114545e0 jne 0x114545ec */
  if (!C.zf) goto L_114545ec;
  /* 114545e2 mov eax, 1 */
  EAX = (0x1u);
  /* 114545e7 jmp 0x11454687 */
  goto L_11454687;
L_114545ec:;
  /* 114545ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114545ef push eax */
  push32((uint32_t)(EAX));
  /* 114545f0 call 0x11454690 */
  push32(0x114545f5u); f_11454690();
  /* 114545f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114545f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114545fa je 0x1145461d */
  if (C.zf) goto L_1145461d;
  /* 114545fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114545ff push ecx */
  push32((uint32_t)(ECX));
  /* 11454600 call 0x11454c20 */
  push32(0x11454605u); f_11454c20();
  /* 11454605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454608 push 2 */
  push32((uint32_t)(0x2u));
  /* 1145460a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145460d push edx */
  push32((uint32_t)(EDX));
  /* 1145460e call 0x11449080 */
  push32(0x11454613u); f_11449080();
  /* 11454613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454616 mov eax, 1 */
  EAX = (0x1u);
  /* 1145461b jmp 0x11454687 */
  goto L_11454687;
L_1145461d:;
  /* 1145461d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454620 mov dword ptr [0x11473dc0], eax */
  w32((uint32_t)(0x11473dc0), (EAX));
  /* 11454625 mov ecx, dword ptr [0x11474b8c] */
  ECX = (r32((uint32_t)(0x11474b8c)));
  /* 1145462b push ecx */
  push32((uint32_t)(ECX));
  /* 1145462c call 0x11454c20 */
  push32(0x11454631u); f_11454c20();
  /* 11454631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454634 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454636 mov edx, dword ptr [0x11474b8c] */
  EDX = (r32((uint32_t)(0x11474b8c)));
  /* 1145463c push edx */
  push32((uint32_t)(EDX));
  /* 1145463d call 0x11449080 */
  push32(0x11454642u); f_11449080();
  /* 11454642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454648 mov dword ptr [0x11474b8c], eax */
  w32((uint32_t)(0x11474b8c), (EAX));
  /* 1145464d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145464f jmp 0x11454687 */
  goto L_11454687;
L_11454651:;
  /* 11454651 mov dword ptr [0x11473dc0], 0x11473dc8 */
  w32((uint32_t)(0x11473dc0), (0x11473dc8u));
  /* 1145465b mov ecx, dword ptr [0x11474b8c] */
  ECX = (r32((uint32_t)(0x11474b8c)));
  /* 11454661 push ecx */
  push32((uint32_t)(ECX));
  /* 11454662 call 0x11454c20 */
  push32(0x11454667u); f_11454c20();
  /* 11454667 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145466a push 2 */
  push32((uint32_t)(0x2u));
  /* 1145466c mov edx, dword ptr [0x11474b8c] */
  EDX = (r32((uint32_t)(0x11474b8c)));
  /* 11454672 push edx */
  push32((uint32_t)(EDX));
  /* 11454673 call 0x11449080 */
  push32(0x11454678u); f_11449080();
  /* 11454678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145467b mov dword ptr [0x11474b8c], 0 */
  w32((uint32_t)(0x11474b8c), (0x0u));
  /* 11454685 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11454687:;
  /* 11454687 mov esp, ebp */
  ESP = (EBP);
  /* 11454689 pop ebp */
  EBP = (pop32());
  /* 1145468a ret  */
  ESPCHK(0x114545b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014690 @ 0x11454690 (1423 bytes, 533 insns) */
void f_11454690(void) {
  FTRACE(0x11454690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11454690 push ebp */
  push32((uint32_t)(EBP));
  /* 11454691 mov ebp, esp */
  EBP = (ESP);
  /* 11454693 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11454696 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1145469d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145469f mov ax, word ptr [0x11474bc6] */
  AX = (r16((uint32_t)(0x11474bc6)));
  /* 114546a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114546a8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114546aa mov cx, word ptr [0x11474bc8] */
  CX = (r16((uint32_t)(0x11474bc8)));
  /* 114546b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114546b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114546b8 jne 0x114546c2 */
  if (!C.zf) goto L_114546c2;
  /* 114546ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114546bd jmp 0x11454c1b */
  goto L_11454c1b;
L_114546c2:;
  /* 114546c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114546c5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114546c8 push edx */
  push32((uint32_t)(EDX));
  /* 114546c9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 114546cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114546ce push eax */
  push32((uint32_t)(EAX));
  /* 114546cf push 1 */
  push32((uint32_t)(0x1u));
  /* 114546d1 call 0x11457fe0 */
  push32(0x114546d6u); f_11457fe0();
  /* 114546d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114546d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114546dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114546de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114546e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114546e4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114546e7 push edx */
  push32((uint32_t)(EDX));
  /* 114546e8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 114546ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114546ed push eax */
  push32((uint32_t)(EAX));
  /* 114546ee push 1 */
  push32((uint32_t)(0x1u));
  /* 114546f0 call 0x11457fe0 */
  push32(0x114546f5u); f_11457fe0();
  /* 114546f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114546f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114546fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114546fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454700 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454703 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454706 push edx */
  push32((uint32_t)(EDX));
  /* 11454707 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11454709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145470c push eax */
  push32((uint32_t)(EAX));
  /* 1145470d push 1 */
  push32((uint32_t)(0x1u));
  /* 1145470f call 0x11457fe0 */
  push32(0x11454714u); f_11457fe0();
  /* 11454714 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454717 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145471a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145471c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1145471f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454722 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454725 push edx */
  push32((uint32_t)(EDX));
  /* 11454726 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11454728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145472b push eax */
  push32((uint32_t)(EAX));
  /* 1145472c push 1 */
  push32((uint32_t)(0x1u));
  /* 1145472e call 0x11457fe0 */
  push32(0x11454733u); f_11457fe0();
  /* 11454733 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454736 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454739 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145473b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1145473e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454741 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454744 push edx */
  push32((uint32_t)(EDX));
  /* 11454745 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11454747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145474a push eax */
  push32((uint32_t)(EAX));
  /* 1145474b push 1 */
  push32((uint32_t)(0x1u));
  /* 1145474d call 0x11457fe0 */
  push32(0x11454752u); f_11457fe0();
  /* 11454752 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454758 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145475a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1145475d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454760 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454763 push edx */
  push32((uint32_t)(EDX));
  /* 11454764 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11454766 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454769 push eax */
  push32((uint32_t)(EAX));
  /* 1145476a push 1 */
  push32((uint32_t)(0x1u));
  /* 1145476c call 0x11457fe0 */
  push32(0x11454771u); f_11457fe0();
  /* 11454771 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454774 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454777 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454779 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1145477c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145477f push edx */
  push32((uint32_t)(EDX));
  /* 11454780 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11454782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454785 push eax */
  push32((uint32_t)(EAX));
  /* 11454786 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454788 call 0x11457fe0 */
  push32(0x1145478du); f_11457fe0();
  /* 1145478d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454790 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454793 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454795 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145479b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145479e push edx */
  push32((uint32_t)(EDX));
  /* 1145479f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 114547a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114547a4 push eax */
  push32((uint32_t)(EAX));
  /* 114547a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 114547a7 call 0x11457fe0 */
  push32(0x114547acu); f_11457fe0();
  /* 114547ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114547af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114547b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114547b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114547b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114547ba add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114547bd push edx */
  push32((uint32_t)(EDX));
  /* 114547be push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 114547c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114547c3 push eax */
  push32((uint32_t)(EAX));
  /* 114547c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 114547c6 call 0x11457fe0 */
  push32(0x114547cbu); f_11457fe0();
  /* 114547cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114547ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114547d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114547d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114547d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114547d9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114547dc push edx */
  push32((uint32_t)(EDX));
  /* 114547dd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 114547df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114547e2 push eax */
  push32((uint32_t)(EAX));
  /* 114547e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114547e5 call 0x11457fe0 */
  push32(0x114547eau); f_11457fe0();
  /* 114547ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114547ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114547f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114547f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114547f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114547f8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114547fb push edx */
  push32((uint32_t)(EDX));
  /* 114547fc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 114547fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454801 push eax */
  push32((uint32_t)(EAX));
  /* 11454802 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454804 call 0x11457fe0 */
  push32(0x11454809u); f_11457fe0();
  /* 11454809 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145480c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145480f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454811 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454817 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145481a push edx */
  push32((uint32_t)(EDX));
  /* 1145481b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1145481d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454820 push eax */
  push32((uint32_t)(EAX));
  /* 11454821 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454823 call 0x11457fe0 */
  push32(0x11454828u); f_11457fe0();
  /* 11454828 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145482b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145482e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454830 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454833 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454836 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454839 push edx */
  push32((uint32_t)(EDX));
  /* 1145483a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1145483c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145483f push eax */
  push32((uint32_t)(EAX));
  /* 11454840 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454842 call 0x11457fe0 */
  push32(0x11454847u); f_11457fe0();
  /* 11454847 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145484a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145484d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145484f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454855 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454858 push edx */
  push32((uint32_t)(EDX));
  /* 11454859 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1145485b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145485e push eax */
  push32((uint32_t)(EAX));
  /* 1145485f push 1 */
  push32((uint32_t)(0x1u));
  /* 11454861 call 0x11457fe0 */
  push32(0x11454866u); f_11457fe0();
  /* 11454866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454869 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145486c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145486e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454874 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454877 push edx */
  push32((uint32_t)(EDX));
  /* 11454878 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1145487a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145487d push eax */
  push32((uint32_t)(EAX));
  /* 1145487e push 1 */
  push32((uint32_t)(0x1u));
  /* 11454880 call 0x11457fe0 */
  push32(0x11454885u); f_11457fe0();
  /* 11454885 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454888 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1145488b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145488d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454890 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454893 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454896 push edx */
  push32((uint32_t)(EDX));
  /* 11454897 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11454899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145489c push eax */
  push32((uint32_t)(EAX));
  /* 1145489d push 1 */
  push32((uint32_t)(0x1u));
  /* 1145489f call 0x11457fe0 */
  push32(0x114548a4u); f_11457fe0();
  /* 114548a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114548a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114548aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114548ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114548af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114548b2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114548b5 push edx */
  push32((uint32_t)(EDX));
  /* 114548b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 114548b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114548bb push eax */
  push32((uint32_t)(EAX));
  /* 114548bc push 1 */
  push32((uint32_t)(0x1u));
  /* 114548be call 0x11457fe0 */
  push32(0x114548c3u); f_11457fe0();
  /* 114548c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114548c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114548c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114548cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114548ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114548d1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114548d4 push edx */
  push32((uint32_t)(EDX));
  /* 114548d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 114548d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114548da push eax */
  push32((uint32_t)(EAX));
  /* 114548db push 1 */
  push32((uint32_t)(0x1u));
  /* 114548dd call 0x11457fe0 */
  push32(0x114548e2u); f_11457fe0();
  /* 114548e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114548e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114548e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114548ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114548ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114548f0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114548f3 push edx */
  push32((uint32_t)(EDX));
  /* 114548f4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 114548f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114548f9 push eax */
  push32((uint32_t)(EAX));
  /* 114548fa push 1 */
  push32((uint32_t)(0x1u));
  /* 114548fc call 0x11457fe0 */
  push32(0x11454901u); f_11457fe0();
  /* 11454901 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454904 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454907 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454909 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1145490c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145490f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454912 push edx */
  push32((uint32_t)(EDX));
  /* 11454913 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11454915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454918 push eax */
  push32((uint32_t)(EAX));
  /* 11454919 push 1 */
  push32((uint32_t)(0x1u));
  /* 1145491b call 0x11457fe0 */
  push32(0x11454920u); f_11457fe0();
  /* 11454920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454923 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454926 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454928 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1145492b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145492e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454931 push edx */
  push32((uint32_t)(EDX));
  /* 11454932 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11454934 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454937 push eax */
  push32((uint32_t)(EAX));
  /* 11454938 push 1 */
  push32((uint32_t)(0x1u));
  /* 1145493a call 0x11457fe0 */
  push32(0x1145493fu); f_11457fe0();
  /* 1145493f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454942 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454945 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454947 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1145494a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145494d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454950 push edx */
  push32((uint32_t)(EDX));
  /* 11454951 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11454953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454956 push eax */
  push32((uint32_t)(EAX));
  /* 11454957 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454959 call 0x11457fe0 */
  push32(0x1145495eu); f_11457fe0();
  /* 1145495e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454961 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454964 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454966 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454969 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145496c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145496f push edx */
  push32((uint32_t)(EDX));
  /* 11454970 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11454972 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454975 push eax */
  push32((uint32_t)(EAX));
  /* 11454976 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454978 call 0x11457fe0 */
  push32(0x1145497du); f_11457fe0();
  /* 1145497d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454980 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454983 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454985 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145498b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145498e push edx */
  push32((uint32_t)(EDX));
  /* 1145498f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11454991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454994 push eax */
  push32((uint32_t)(EAX));
  /* 11454995 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454997 call 0x11457fe0 */
  push32(0x1145499cu); f_11457fe0();
  /* 1145499c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145499f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114549a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114549a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114549a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114549aa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114549ad push edx */
  push32((uint32_t)(EDX));
  /* 114549ae push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 114549b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114549b3 push eax */
  push32((uint32_t)(EAX));
  /* 114549b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 114549b6 call 0x11457fe0 */
  push32(0x114549bbu); f_11457fe0();
  /* 114549bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114549be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114549c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114549c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114549c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114549c9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114549cc push edx */
  push32((uint32_t)(EDX));
  /* 114549cd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 114549cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114549d2 push eax */
  push32((uint32_t)(EAX));
  /* 114549d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114549d5 call 0x11457fe0 */
  push32(0x114549dau); f_11457fe0();
  /* 114549da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114549dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114549e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114549e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 114549e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114549e8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114549eb push edx */
  push32((uint32_t)(EDX));
  /* 114549ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 114549ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114549f1 push eax */
  push32((uint32_t)(EAX));
  /* 114549f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 114549f4 call 0x11457fe0 */
  push32(0x114549f9u); f_11457fe0();
  /* 114549f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114549fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114549ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454a01 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454a04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454a07 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a0a push edx */
  push32((uint32_t)(EDX));
  /* 11454a0b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11454a0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454a10 push eax */
  push32((uint32_t)(EAX));
  /* 11454a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454a13 call 0x11457fe0 */
  push32(0x11454a18u); f_11457fe0();
  /* 11454a18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454a1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454a20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454a23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454a26 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a29 push edx */
  push32((uint32_t)(EDX));
  /* 11454a2a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11454a2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454a2f push eax */
  push32((uint32_t)(EAX));
  /* 11454a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454a32 call 0x11457fe0 */
  push32(0x11454a37u); f_11457fe0();
  /* 11454a37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454a3d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454a3f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454a45 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a48 push edx */
  push32((uint32_t)(EDX));
  /* 11454a49 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11454a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454a4e push eax */
  push32((uint32_t)(EAX));
  /* 11454a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11454a51 call 0x11457fe0 */
  push32(0x11454a56u); f_11457fe0();
  /* 11454a56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454a5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454a5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454a64 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a67 push edx */
  push32((uint32_t)(EDX));
  /* 11454a68 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11454a6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454a6d push eax */
  push32((uint32_t)(EAX));
  /* 11454a6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11454a70 call 0x11457fe0 */
  push32(0x11454a75u); f_11457fe0();
  /* 11454a75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454a7b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454a7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454a80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454a83 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a86 push edx */
  push32((uint32_t)(EDX));
  /* 11454a87 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11454a89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454a8c push eax */
  push32((uint32_t)(EAX));
  /* 11454a8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11454a8f call 0x11457fe0 */
  push32(0x11454a94u); f_11457fe0();
  /* 11454a94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454a97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454a9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454a9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454a9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454aa2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454aa8 push edx */
  push32((uint32_t)(EDX));
  /* 11454aa9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11454aab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454aae push eax */
  push32((uint32_t)(EAX));
  /* 11454aaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11454ab1 call 0x11457fe0 */
  push32(0x11454ab6u); f_11457fe0();
  /* 11454ab6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454ab9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454abc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454abe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454ac1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454ac4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454aca push edx */
  push32((uint32_t)(EDX));
  /* 11454acb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11454acd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454ad0 push eax */
  push32((uint32_t)(EAX));
  /* 11454ad1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454ad3 call 0x11457fe0 */
  push32(0x11454ad8u); f_11457fe0();
  /* 11454ad8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454adb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454ade or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454ae0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454ae3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454ae6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454aec push edx */
  push32((uint32_t)(EDX));
  /* 11454aed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11454aef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454af2 push eax */
  push32((uint32_t)(EAX));
  /* 11454af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454af5 call 0x11457fe0 */
  push32(0x11454afau); f_11457fe0();
  /* 11454afa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454afd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454b00 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454b02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454b05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454b08 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454b0e push edx */
  push32((uint32_t)(EDX));
  /* 11454b0f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11454b11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454b14 push eax */
  push32((uint32_t)(EAX));
  /* 11454b15 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454b17 call 0x11457fe0 */
  push32(0x11454b1cu); f_11457fe0();
  /* 11454b1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454b1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454b22 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454b24 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454b27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454b2a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454b30 push edx */
  push32((uint32_t)(EDX));
  /* 11454b31 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11454b33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454b36 push eax */
  push32((uint32_t)(EAX));
  /* 11454b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454b39 call 0x11457fe0 */
  push32(0x11454b3eu); f_11457fe0();
  /* 11454b3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454b41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454b44 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454b46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454b4c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454b52 push edx */
  push32((uint32_t)(EDX));
  /* 11454b53 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11454b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454b58 push eax */
  push32((uint32_t)(EAX));
  /* 11454b59 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454b5b call 0x11457fe0 */
  push32(0x11454b60u); f_11457fe0();
  /* 11454b60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454b63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454b66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454b68 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454b6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454b6e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454b74 push edx */
  push32((uint32_t)(EDX));
  /* 11454b75 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11454b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454b7a push eax */
  push32((uint32_t)(EAX));
  /* 11454b7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11454b7d call 0x11457fe0 */
  push32(0x11454b82u); f_11457fe0();
  /* 11454b82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454b85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454b88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454b8a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454b8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454b90 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454b96 push edx */
  push32((uint32_t)(EDX));
  /* 11454b97 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11454b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454b9c push eax */
  push32((uint32_t)(EAX));
  /* 11454b9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11454b9f call 0x11457fe0 */
  push32(0x11454ba4u); f_11457fe0();
  /* 11454ba4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454ba7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454baa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454bac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454baf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454bb2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454bb8 push edx */
  push32((uint32_t)(EDX));
  /* 11454bb9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11454bbb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454bbe push eax */
  push32((uint32_t)(EAX));
  /* 11454bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11454bc1 call 0x11457fe0 */
  push32(0x11454bc6u); f_11457fe0();
  /* 11454bc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454bc9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454bcc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454bce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454bd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454bd4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454bda push edx */
  push32((uint32_t)(EDX));
  /* 11454bdb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11454bdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454be0 push eax */
  push32((uint32_t)(EAX));
  /* 11454be1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454be3 call 0x11457fe0 */
  push32(0x11454be8u); f_11457fe0();
  /* 11454be8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454beb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454bee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454bf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454bf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454bf6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11454bfc push edx */
  push32((uint32_t)(EDX));
  /* 11454bfd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11454c02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454c05 push eax */
  push32((uint32_t)(EAX));
  /* 11454c06 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454c08 call 0x11457fe0 */
  push32(0x11454c0du); f_11457fe0();
  /* 11454c0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454c10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11454c13 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454c15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11454c18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_11454c1b:;
  /* 11454c1b mov esp, ebp */
  ESP = (EBP);
  /* 11454c1d pop ebp */
  EBP = (pop32());
  /* 11454c1e ret  */
  ESPCHK(0x11454690u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11454c20 (779 bytes, 265 insns) */
void f_11454c20(void) {
  FTRACE(0x11454c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11454c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11454c21 mov ebp, esp */
  EBP = (ESP);
  /* 11454c23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454c27 jne 0x11454c2e */
  if (!C.zf) goto L_11454c2e;
  /* 11454c29 jmp 0x11454f29 */
  goto L_11454f29;
L_11454c2e:;
  /* 11454c2e push 2 */
  push32((uint32_t)(0x2u));
  /* 11454c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454c33 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11454c36 push ecx */
  push32((uint32_t)(ECX));
  /* 11454c37 call 0x11449080 */
  push32(0x11454c3cu); f_11449080();
  /* 11454c3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454c3f push 2 */
  push32((uint32_t)(0x2u));
  /* 11454c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454c44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11454c47 push eax */
  push32((uint32_t)(EAX));
  /* 11454c48 call 0x11449080 */
  push32(0x11454c4du); f_11449080();
  /* 11454c4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454c50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454c52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454c55 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11454c58 push edx */
  push32((uint32_t)(EDX));
  /* 11454c59 call 0x11449080 */
  push32(0x11454c5eu); f_11449080();
  /* 11454c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454c61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454c63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454c66 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11454c69 push ecx */
  push32((uint32_t)(ECX));
  /* 11454c6a call 0x11449080 */
  push32(0x11454c6fu); f_11449080();
  /* 11454c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454c72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454c74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454c77 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11454c7a push eax */
  push32((uint32_t)(EAX));
  /* 11454c7b call 0x11449080 */
  push32(0x11454c80u); f_11449080();
  /* 11454c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454c83 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454c85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454c88 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11454c8b push edx */
  push32((uint32_t)(EDX));
  /* 11454c8c call 0x11449080 */
  push32(0x11454c91u); f_11449080();
  /* 11454c91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454c94 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454c96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454c99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11454c9b push ecx */
  push32((uint32_t)(ECX));
  /* 11454c9c call 0x11449080 */
  push32(0x11454ca1u); f_11449080();
  /* 11454ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454ca4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454ca6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454ca9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11454cac push eax */
  push32((uint32_t)(EAX));
  /* 11454cad call 0x11449080 */
  push32(0x11454cb2u); f_11449080();
  /* 11454cb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454cb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454cb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454cba mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11454cbd push edx */
  push32((uint32_t)(EDX));
  /* 11454cbe call 0x11449080 */
  push32(0x11454cc3u); f_11449080();
  /* 11454cc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454cc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454cc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454ccb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11454cce push ecx */
  push32((uint32_t)(ECX));
  /* 11454ccf call 0x11449080 */
  push32(0x11454cd4u); f_11449080();
  /* 11454cd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454cd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454cd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454cdc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 11454cdf push eax */
  push32((uint32_t)(EAX));
  /* 11454ce0 call 0x11449080 */
  push32(0x11454ce5u); f_11449080();
  /* 11454ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454ce8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454cea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454ced mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11454cf0 push edx */
  push32((uint32_t)(EDX));
  /* 11454cf1 call 0x11449080 */
  push32(0x11454cf6u); f_11449080();
  /* 11454cf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454cfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454cfe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11454d01 push ecx */
  push32((uint32_t)(ECX));
  /* 11454d02 call 0x11449080 */
  push32(0x11454d07u); f_11449080();
  /* 11454d07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454d0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11454d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454d0f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11454d12 push eax */
  push32((uint32_t)(EAX));
  /* 11454d13 call 0x11449080 */
  push32(0x11454d18u); f_11449080();
  /* 11454d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454d1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11454d1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454d20 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11454d23 push edx */
  push32((uint32_t)(EDX));
  /* 11454d24 call 0x11449080 */
  push32(0x11454d29u); f_11449080();
  /* 11454d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11454d2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454d31 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11454d34 push ecx */
  push32((uint32_t)(ECX));
  /* 11454d35 call 0x11449080 */
  push32(0x11454d3au); f_11449080();
  /* 11454d3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454d3d push 2 */
  push32((uint32_t)(0x2u));
  /* 11454d3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454d42 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11454d45 push eax */
  push32((uint32_t)(EAX));
  /* 11454d46 call 0x11449080 */
  push32(0x11454d4bu); f_11449080();
  /* 11454d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454d4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11454d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454d53 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11454d56 push edx */
  push32((uint32_t)(EDX));
  /* 11454d57 call 0x11449080 */
  push32(0x11454d5cu); f_11449080();
  /* 11454d5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11454d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454d64 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11454d67 push ecx */
  push32((uint32_t)(ECX));
  /* 11454d68 call 0x11449080 */
  push32(0x11454d6du); f_11449080();
  /* 11454d6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454d70 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454d72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454d75 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11454d78 push eax */
  push32((uint32_t)(EAX));
  /* 11454d79 call 0x11449080 */
  push32(0x11454d7eu); f_11449080();
  /* 11454d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454d81 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454d86 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11454d89 push edx */
  push32((uint32_t)(EDX));
  /* 11454d8a call 0x11449080 */
  push32(0x11454d8fu); f_11449080();
  /* 11454d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454d92 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454d97 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11454d9a push ecx */
  push32((uint32_t)(ECX));
  /* 11454d9b call 0x11449080 */
  push32(0x11454da0u); f_11449080();
  /* 11454da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454da3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454da5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454da8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 11454dab push eax */
  push32((uint32_t)(EAX));
  /* 11454dac call 0x11449080 */
  push32(0x11454db1u); f_11449080();
  /* 11454db1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454db4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454db6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454db9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 11454dbc push edx */
  push32((uint32_t)(EDX));
  /* 11454dbd call 0x11449080 */
  push32(0x11454dc2u); f_11449080();
  /* 11454dc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454dc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454dc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454dca mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 11454dcd push ecx */
  push32((uint32_t)(ECX));
  /* 11454dce call 0x11449080 */
  push32(0x11454dd3u); f_11449080();
  /* 11454dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454dd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454dd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454ddb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 11454dde push eax */
  push32((uint32_t)(EAX));
  /* 11454ddf call 0x11449080 */
  push32(0x11454de4u); f_11449080();
  /* 11454de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454de9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454dec mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 11454def push edx */
  push32((uint32_t)(EDX));
  /* 11454df0 call 0x11449080 */
  push32(0x11454df5u); f_11449080();
  /* 11454df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454df8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454dfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454dfd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11454e00 push ecx */
  push32((uint32_t)(ECX));
  /* 11454e01 call 0x11449080 */
  push32(0x11454e06u); f_11449080();
  /* 11454e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454e09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454e0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454e0e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11454e11 push eax */
  push32((uint32_t)(EAX));
  /* 11454e12 call 0x11449080 */
  push32(0x11454e17u); f_11449080();
  /* 11454e17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454e1a push 2 */
  push32((uint32_t)(0x2u));
  /* 11454e1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454e1f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11454e22 push edx */
  push32((uint32_t)(EDX));
  /* 11454e23 call 0x11449080 */
  push32(0x11454e28u); f_11449080();
  /* 11454e28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454e2b push 2 */
  push32((uint32_t)(0x2u));
  /* 11454e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454e30 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11454e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11454e34 call 0x11449080 */
  push32(0x11454e39u); f_11449080();
  /* 11454e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454e3c push 2 */
  push32((uint32_t)(0x2u));
  /* 11454e3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454e41 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11454e44 push eax */
  push32((uint32_t)(EAX));
  /* 11454e45 call 0x11449080 */
  push32(0x11454e4au); f_11449080();
  /* 11454e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454e4d push 2 */
  push32((uint32_t)(0x2u));
  /* 11454e4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454e52 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11454e58 push edx */
  push32((uint32_t)(EDX));
  /* 11454e59 call 0x11449080 */
  push32(0x11454e5eu); f_11449080();
  /* 11454e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454e61 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454e66 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 11454e6c push ecx */
  push32((uint32_t)(ECX));
  /* 11454e6d call 0x11449080 */
  push32(0x11454e72u); f_11449080();
  /* 11454e72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454e75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454e7a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11454e80 push eax */
  push32((uint32_t)(EAX));
  /* 11454e81 call 0x11449080 */
  push32(0x11454e86u); f_11449080();
  /* 11454e86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454e89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454e8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454e8e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11454e94 push edx */
  push32((uint32_t)(EDX));
  /* 11454e95 call 0x11449080 */
  push32(0x11454e9au); f_11449080();
  /* 11454e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11454e9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454ea2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11454ea8 push ecx */
  push32((uint32_t)(ECX));
  /* 11454ea9 call 0x11449080 */
  push32(0x11454eaeu); f_11449080();
  /* 11454eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454eb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454eb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454eb6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 11454ebc push eax */
  push32((uint32_t)(EAX));
  /* 11454ebd call 0x11449080 */
  push32(0x11454ec2u); f_11449080();
  /* 11454ec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454ec5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454ec7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454eca mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11454ed0 push edx */
  push32((uint32_t)(EDX));
  /* 11454ed1 call 0x11449080 */
  push32(0x11454ed6u); f_11449080();
  /* 11454ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454ed9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454edb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454ede mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11454ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 11454ee5 call 0x11449080 */
  push32(0x11454eeau); f_11449080();
  /* 11454eea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454eed push 2 */
  push32((uint32_t)(0x2u));
  /* 11454eef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454ef2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11454ef8 push eax */
  push32((uint32_t)(EAX));
  /* 11454ef9 call 0x11449080 */
  push32(0x11454efeu); f_11449080();
  /* 11454efe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454f01 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454f03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454f06 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11454f0c push edx */
  push32((uint32_t)(EDX));
  /* 11454f0d call 0x11449080 */
  push32(0x11454f12u); f_11449080();
  /* 11454f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454f15 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454f17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11454f1a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11454f20 push ecx */
  push32((uint32_t)(ECX));
  /* 11454f21 call 0x11449080 */
  push32(0x11454f26u); f_11449080();
  /* 11454f26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11454f29:;
  /* 11454f29 pop ebp */
  EBP = (pop32());
  /* 11454f2a ret  */
  ESPCHK(0x11454c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f30 @ 0x11454f30 (678 bytes, 180 insns) */
void f_11454f30(void) {
  FTRACE(0x11454f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11454f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11454f31 mov ebp, esp */
  EBP = (ESP);
  /* 11454f33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11454f36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11454f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11454f3f mov ax, word ptr [0x11474bc2] */
  AX = (r16((uint32_t)(0x11474bc2)));
  /* 11454f45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11454f48 cmp dword ptr [0x11474b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454f4f je 0x114550aa */
  if (C.zf) goto L_114550aa;
  /* 11454f55 push 0x11474b90 */
  push32((uint32_t)(0x11474b90u));
  /* 11454f5a push 0xe */
  push32((uint32_t)(0xeu));
  /* 11454f5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454f5f push ecx */
  push32((uint32_t)(ECX));
  /* 11454f60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11454f62 call 0x11457fe0 */
  push32(0x11454f67u); f_11457fe0();
  /* 11454f67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454f6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454f6d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11454f6f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11454f72 push 0x11474b94 */
  push32((uint32_t)(0x11474b94u));
  /* 11454f77 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11454f79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454f7c push eax */
  push32((uint32_t)(EAX));
  /* 11454f7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11454f7f call 0x11457fe0 */
  push32(0x11454f84u); f_11457fe0();
  /* 11454f84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454f87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454f8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454f8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11454f8f push 0x11474b98 */
  push32((uint32_t)(0x11474b98u));
  /* 11454f94 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11454f96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11454f99 push edx */
  push32((uint32_t)(EDX));
  /* 11454f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 11454f9c call 0x11457fe0 */
  push32(0x11454fa1u); f_11457fe0();
  /* 11454fa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454fa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11454fa7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11454fa9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11454fac mov edx, dword ptr [0x11474b98] */
  EDX = (r32((uint32_t)(0x11474b98)));
  /* 11454fb2 push edx */
  push32((uint32_t)(EDX));
  /* 11454fb3 call 0x114551e0 */
  push32(0x11454fb8u); f_114551e0();
  /* 11454fb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454fbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11454fbf je 0x11455019 */
  if (C.zf) goto L_11455019;
  /* 11454fc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454fc3 mov eax, dword ptr [0x11474b90] */
  EAX = (r32((uint32_t)(0x11474b90)));
  /* 11454fc8 push eax */
  push32((uint32_t)(EAX));
  /* 11454fc9 call 0x11449080 */
  push32(0x11454fceu); f_11449080();
  /* 11454fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454fd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454fd3 mov ecx, dword ptr [0x11474b94] */
  ECX = (r32((uint32_t)(0x11474b94)));
  /* 11454fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11454fda call 0x11449080 */
  push32(0x11454fdfu); f_11449080();
  /* 11454fdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11454fe4 mov edx, dword ptr [0x11474b98] */
  EDX = (r32((uint32_t)(0x11474b98)));
  /* 11454fea push edx */
  push32((uint32_t)(EDX));
  /* 11454feb call 0x11449080 */
  push32(0x11454ff0u); f_11449080();
  /* 11454ff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11454ff3 mov dword ptr [0x11474b90], 0 */
  w32((uint32_t)(0x11474b90), (0x0u));
  /* 11454ffd mov dword ptr [0x11474b94], 0 */
  w32((uint32_t)(0x11474b94), (0x0u));
  /* 11455007 mov dword ptr [0x11474b98], 0 */
  w32((uint32_t)(0x11474b98), (0x0u));
  /* 11455011 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11455014 jmp 0x114551d2 */
  goto L_114551d2;
L_11455019:;
  /* 11455019 mov eax, dword ptr [0x11473eb0] */
  EAX = (r32((uint32_t)(0x11473eb0)));
  /* 1145501e cmp dword ptr [eax], 0x11473e78 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11473e78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455024 je 0x11455060 */
  if (C.zf) goto L_11455060;
  /* 11455026 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455028 mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 1145502e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11455030 push edx */
  push32((uint32_t)(EDX));
  /* 11455031 call 0x11449080 */
  push32(0x11455036u); f_11449080();
  /* 11455036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455039 push 2 */
  push32((uint32_t)(0x2u));
  /* 1145503b mov eax, dword ptr [0x11473eb0] */
  EAX = (r32((uint32_t)(0x11473eb0)));
  /* 11455040 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11455043 push ecx */
  push32((uint32_t)(ECX));
  /* 11455044 call 0x11449080 */
  push32(0x11455049u); f_11449080();
  /* 11455049 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145504c push 2 */
  push32((uint32_t)(0x2u));
  /* 1145504e mov edx, dword ptr [0x11473eb0] */
  EDX = (r32((uint32_t)(0x11473eb0)));
  /* 11455054 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11455057 push eax */
  push32((uint32_t)(EAX));
  /* 11455058 call 0x11449080 */
  push32(0x1145505du); f_11449080();
  /* 1145505d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11455060:;
  /* 11455060 mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 11455066 mov edx, dword ptr [0x11474b90] */
  EDX = (r32((uint32_t)(0x11474b90)));
  /* 1145506c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1145506e mov eax, dword ptr [0x11473eb0] */
  EAX = (r32((uint32_t)(0x11473eb0)));
  /* 11455073 mov ecx, dword ptr [0x11474b94] */
  ECX = (r32((uint32_t)(0x11474b94)));
  /* 11455079 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1145507c mov edx, dword ptr [0x11473eb0] */
  EDX = (r32((uint32_t)(0x11473eb0)));
  /* 11455082 mov eax, dword ptr [0x11474b98] */
  EAX = (r32((uint32_t)(0x11474b98)));
  /* 11455087 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1145508a mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 11455090 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11455092 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11455094 mov byte ptr [0x11472fc8], al */
  w8((uint32_t)(0x11472fc8), (AL));
  /* 11455099 mov dword ptr [0x11472fcc], 1 */
  w32((uint32_t)(0x11472fcc), (0x1u));
  /* 114550a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114550a5 jmp 0x114551d2 */
  goto L_114551d2;
L_114550aa:;
  /* 114550aa push 2 */
  push32((uint32_t)(0x2u));
  /* 114550ac mov ecx, dword ptr [0x11474b90] */
  ECX = (r32((uint32_t)(0x11474b90)));
  /* 114550b2 push ecx */
  push32((uint32_t)(ECX));
  /* 114550b3 call 0x11449080 */
  push32(0x114550b8u); f_11449080();
  /* 114550b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114550bb push 2 */
  push32((uint32_t)(0x2u));
  /* 114550bd mov edx, dword ptr [0x11474b94] */
  EDX = (r32((uint32_t)(0x11474b94)));
  /* 114550c3 push edx */
  push32((uint32_t)(EDX));
  /* 114550c4 call 0x11449080 */
  push32(0x114550c9u); f_11449080();
  /* 114550c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114550cc push 2 */
  push32((uint32_t)(0x2u));
  /* 114550ce mov eax, dword ptr [0x11474b98] */
  EAX = (r32((uint32_t)(0x11474b98)));
  /* 114550d3 push eax */
  push32((uint32_t)(EAX));
  /* 114550d4 call 0x11449080 */
  push32(0x114550d9u); f_11449080();
  /* 114550d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114550dc mov dword ptr [0x11474b90], 0 */
  w32((uint32_t)(0x11474b90), (0x0u));
  /* 114550e6 mov dword ptr [0x11474b94], 0 */
  w32((uint32_t)(0x11474b94), (0x0u));
  /* 114550f0 mov dword ptr [0x11474b98], 0 */
  w32((uint32_t)(0x11474b98), (0x0u));
  /* 114550fa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 114550ff push 0x11470a94 */
  push32((uint32_t)(0x11470a94u));
  /* 11455104 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455106 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455108 call 0x114485f0 */
  push32(0x1145510du); f_114485f0();
  /* 1145510d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455110 mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 11455116 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11455118 mov edx, dword ptr [0x11473eb0] */
  EDX = (r32((uint32_t)(0x11473eb0)));
  /* 1145511e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455121 jne 0x1145512b */
  if (!C.zf) goto L_1145512b;
  /* 11455123 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11455126 jmp 0x114551d2 */
  goto L_114551d2;
L_1145512b:;
  /* 1145512b push 0x11470a64 */
  push32((uint32_t)(0x11470a64u));
  /* 11455130 mov eax, dword ptr [0x11473eb0] */
  EAX = (r32((uint32_t)(0x11473eb0)));
  /* 11455135 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11455137 push ecx */
  push32((uint32_t)(ECX));
  /* 11455138 call 0x1144c2c0 */
  push32(0x1145513du); f_1144c2c0();
  /* 1145513d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455140 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11455145 push 0x11470a94 */
  push32((uint32_t)(0x11470a94u));
  /* 1145514a push 2 */
  push32((uint32_t)(0x2u));
  /* 1145514c push 2 */
  push32((uint32_t)(0x2u));
  /* 1145514e call 0x114485f0 */
  push32(0x11455153u); f_114485f0();
  /* 11455153 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455156 mov edx, dword ptr [0x11473eb0] */
  EDX = (r32((uint32_t)(0x11473eb0)));
  /* 1145515c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1145515f mov eax, dword ptr [0x11473eb0] */
  EAX = (r32((uint32_t)(0x11473eb0)));
  /* 11455164 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455168 jne 0x1145516f */
  if (!C.zf) goto L_1145516f;
  /* 1145516a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1145516d jmp 0x114551d2 */
  goto L_114551d2;
L_1145516f:;
  /* 1145516f mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 11455175 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11455178 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1145517b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11455180 push 0x11470a94 */
  push32((uint32_t)(0x11470a94u));
  /* 11455185 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455187 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455189 call 0x114485f0 */
  push32(0x1145518eu); f_114485f0();
  /* 1145518e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455191 mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 11455197 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1145519a mov edx, dword ptr [0x11473eb0] */
  EDX = (r32((uint32_t)(0x11473eb0)));
  /* 114551a0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114551a4 jne 0x114551ab */
  if (!C.zf) goto L_114551ab;
  /* 114551a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114551a9 jmp 0x114551d2 */
  goto L_114551d2;
L_114551ab:;
  /* 114551ab mov eax, dword ptr [0x11473eb0] */
  EAX = (r32((uint32_t)(0x11473eb0)));
  /* 114551b0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 114551b3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 114551b6 mov edx, dword ptr [0x11473eb0] */
  EDX = (r32((uint32_t)(0x11473eb0)));
  /* 114551bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 114551be mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 114551c0 mov byte ptr [0x11472fc8], cl */
  w8((uint32_t)(0x11472fc8), (CL));
  /* 114551c6 mov dword ptr [0x11472fcc], 1 */
  w32((uint32_t)(0x11472fcc), (0x1u));
  /* 114551d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114551d2:;
  /* 114551d2 mov esp, ebp */
  ESP = (EBP);
  /* 114551d4 pop ebp */
  EBP = (pop32());
  /* 114551d5 ret  */
  ESPCHK(0x11454f30u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x114551e0 (125 bytes, 49 insns) */
void f_114551e0(void) {
  FTRACE(0x114551e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114551e0 push ebp */
  push32((uint32_t)(EBP));
  /* 114551e1 mov ebp, esp */
  EBP = (ESP);
  /* 114551e3 push ecx */
  push32((uint32_t)(ECX));
L_114551e4:;
  /* 114551e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114551e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114551ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114551ec je 0x11455259 */
  if (C.zf) goto L_11455259;
  /* 114551ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114551f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114551f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114551f7 jl 0x1145521d */
  if ((C.sf!=C.of)) goto L_1145521d;
  /* 114551f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114551fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114551ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455202 jg 0x1145521d */
  if ((!C.zf&&C.sf==C.of)) goto L_1145521d;
  /* 11455204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455207 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1145520a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1145520d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455210 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11455212 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455215 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455218 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1145521b jmp 0x11455257 */
  goto L_11455257;
L_1145521d:;
  /* 1145521d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455220 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11455223 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455226 jne 0x1145524e */
  if (!C.zf) goto L_1145524e;
  /* 11455228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145522b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1145522e:;
  /* 1145522e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455234 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11455237 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11455239 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145523c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145523f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11455242 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455245 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11455248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145524a jne 0x1145522e */
  if (!C.zf) goto L_1145522e;
  /* 1145524c jmp 0x11455257 */
  goto L_11455257;
L_1145524e:;
  /* 1145524e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455251 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455254 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11455257:;
  /* 11455257 jmp 0x114551e4 */
  goto L_114551e4;
L_11455259:;
  /* 11455259 mov esp, ebp */
  ESP = (EBP);
  /* 1145525b pop ebp */
  EBP = (pop32());
  /* 1145525c ret  */
  ESPCHK(0x114551e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015260 @ 0x11455260 (304 bytes, 85 insns) */
void f_11455260(void) {
  FTRACE(0x11455260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455260 push ebp */
  push32((uint32_t)(EBP));
  /* 11455261 mov ebp, esp */
  EBP = (ESP);
  /* 11455263 push ecx */
  push32((uint32_t)(ECX));
  /* 11455264 cmp dword ptr [0x11474b5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145526b je 0x1145532c */
  if (C.zf) goto L_1145532c;
  /* 11455271 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11455273 push 0x11470aa0 */
  push32((uint32_t)(0x11470aa0u));
  /* 11455278 push 2 */
  push32((uint32_t)(0x2u));
  /* 1145527a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1145527c push 1 */
  push32((uint32_t)(0x1u));
  /* 1145527e call 0x11448a00 */
  push32(0x11455283u); f_11448a00();
  /* 11455283 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455286 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11455289 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145528d jne 0x11455299 */
  if (!C.zf) goto L_11455299;
  /* 1145528f mov eax, 1 */
  EAX = (0x1u);
  /* 11455294 jmp 0x1145538c */
  goto L_1145538c;
L_11455299:;
  /* 11455299 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145529c push eax */
  push32((uint32_t)(EAX));
  /* 1145529d call 0x11455390 */
  push32(0x114552a2u); f_11455390();
  /* 114552a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114552a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114552a7 je 0x114552cd */
  if (C.zf) goto L_114552cd;
  /* 114552a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114552ac push ecx */
  push32((uint32_t)(ECX));
  /* 114552ad call 0x11455620 */
  push32(0x114552b2u); f_11455620();
  /* 114552b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114552b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114552b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114552ba push edx */
  push32((uint32_t)(EDX));
  /* 114552bb call 0x11449080 */
  push32(0x114552c0u); f_11449080();
  /* 114552c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114552c3 mov eax, 1 */
  EAX = (0x1u);
  /* 114552c8 jmp 0x1145538c */
  goto L_1145538c;
L_114552cd:;
  /* 114552cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114552d0 mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 114552d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 114552d8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 114552da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114552dd mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 114552e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 114552e6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 114552e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114552ec mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 114552f2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 114552f5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 114552f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114552fb mov dword ptr [0x11473eb0], eax */
  w32((uint32_t)(0x11473eb0), (EAX));
  /* 11455300 mov ecx, dword ptr [0x11474b9c] */
  ECX = (r32((uint32_t)(0x11474b9c)));
  /* 11455306 push ecx */
  push32((uint32_t)(ECX));
  /* 11455307 call 0x11455620 */
  push32(0x1145530cu); f_11455620();
  /* 1145530c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145530f push 2 */
  push32((uint32_t)(0x2u));
  /* 11455311 mov edx, dword ptr [0x11474b9c] */
  EDX = (r32((uint32_t)(0x11474b9c)));
  /* 11455317 push edx */
  push32((uint32_t)(EDX));
  /* 11455318 call 0x11449080 */
  push32(0x1145531du); f_11449080();
  /* 1145531d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455323 mov dword ptr [0x11474b9c], eax */
  w32((uint32_t)(0x11474b9c), (EAX));
  /* 11455328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145532a jmp 0x1145538c */
  goto L_1145538c;
L_1145532c:;
  /* 1145532c mov ecx, dword ptr [0x11473eb0] */
  ECX = (r32((uint32_t)(0x11473eb0)));
  /* 11455332 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11455334 mov dword ptr [0x11473e80], edx */
  w32((uint32_t)(0x11473e80), (EDX));
  /* 1145533a mov eax, dword ptr [0x11473eb0] */
  EAX = (r32((uint32_t)(0x11473eb0)));
  /* 1145533f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11455342 mov dword ptr [0x11473e84], ecx */
  w32((uint32_t)(0x11473e84), (ECX));
  /* 11455348 mov edx, dword ptr [0x11473eb0] */
  EDX = (r32((uint32_t)(0x11473eb0)));
  /* 1145534e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11455351 mov dword ptr [0x11473e88], eax */
  w32((uint32_t)(0x11473e88), (EAX));
  /* 11455356 mov dword ptr [0x11473eb0], 0x11473e80 */
  w32((uint32_t)(0x11473eb0), (0x11473e80u));
  /* 11455360 mov ecx, dword ptr [0x11474b9c] */
  ECX = (r32((uint32_t)(0x11474b9c)));
  /* 11455366 push ecx */
  push32((uint32_t)(ECX));
  /* 11455367 call 0x11455620 */
  push32(0x1145536cu); f_11455620();
  /* 1145536c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145536f push 2 */
  push32((uint32_t)(0x2u));
  /* 11455371 mov edx, dword ptr [0x11474b9c] */
  EDX = (r32((uint32_t)(0x11474b9c)));
  /* 11455377 push edx */
  push32((uint32_t)(EDX));
  /* 11455378 call 0x11449080 */
  push32(0x1145537du); f_11449080();
  /* 1145537d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455380 mov dword ptr [0x11474b9c], 0 */
  w32((uint32_t)(0x11474b9c), (0x0u));
  /* 1145538a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1145538c:;
  /* 1145538c mov esp, ebp */
  ESP = (EBP);
  /* 1145538e pop ebp */
  EBP = (pop32());
  /* 1145538f ret  */
  ESPCHK(0x11455260u, _esp0);
  ESP += 4; return;
}

/* FUN_10015390 @ 0x11455390 (525 bytes, 200 insns) */
void f_11455390(void) {
  FTRACE(0x11455390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455390 push ebp */
  push32((uint32_t)(EBP));
  /* 11455391 mov ebp, esp */
  EBP = (ESP);
  /* 11455393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11455396 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1145539d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145539f mov ax, word ptr [0x11474bbc] */
  AX = (r16((uint32_t)(0x11474bbc)));
  /* 114553a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114553a8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114553ac jne 0x114553b6 */
  if (!C.zf) goto L_114553b6;
  /* 114553ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114553b1 jmp 0x11455599 */
  goto L_11455599;
L_114553b6:;
  /* 114553b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114553b9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114553bc push ecx */
  push32((uint32_t)(ECX));
  /* 114553bd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 114553bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114553c2 push edx */
  push32((uint32_t)(EDX));
  /* 114553c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114553c5 call 0x11457fe0 */
  push32(0x114553cau); f_11457fe0();
  /* 114553ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114553cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114553d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114553d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114553d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114553d8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114553db push edx */
  push32((uint32_t)(EDX));
  /* 114553dc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 114553de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114553e1 push eax */
  push32((uint32_t)(EAX));
  /* 114553e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 114553e4 call 0x11457fe0 */
  push32(0x114553e9u); f_11457fe0();
  /* 114553e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114553ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114553ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114553f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114553f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114553f7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114553fa push edx */
  push32((uint32_t)(EDX));
  /* 114553fb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 114553fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455400 push eax */
  push32((uint32_t)(EAX));
  /* 11455401 push 1 */
  push32((uint32_t)(0x1u));
  /* 11455403 call 0x11457fe0 */
  push32(0x11455408u); f_11457fe0();
  /* 11455408 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145540b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145540e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11455410 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11455413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455416 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455419 push edx */
  push32((uint32_t)(EDX));
  /* 1145541a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1145541c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145541f push eax */
  push32((uint32_t)(EAX));
  /* 11455420 push 1 */
  push32((uint32_t)(0x1u));
  /* 11455422 call 0x11457fe0 */
  push32(0x11455427u); f_11457fe0();
  /* 11455427 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145542a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145542d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145542f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11455432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455435 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455438 push edx */
  push32((uint32_t)(EDX));
  /* 11455439 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1145543b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145543e push eax */
  push32((uint32_t)(EAX));
  /* 1145543f push 1 */
  push32((uint32_t)(0x1u));
  /* 11455441 call 0x11457fe0 */
  push32(0x11455446u); f_11457fe0();
  /* 11455446 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455449 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145544c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145544e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11455451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455454 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11455457 push eax */
  push32((uint32_t)(EAX));
  /* 11455458 call 0x114555a0 */
  push32(0x1145545du); f_114555a0();
  /* 1145545d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455463 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455466 push ecx */
  push32((uint32_t)(ECX));
  /* 11455467 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11455469 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145546c push edx */
  push32((uint32_t)(EDX));
  /* 1145546d push 1 */
  push32((uint32_t)(0x1u));
  /* 1145546f call 0x11457fe0 */
  push32(0x11455474u); f_11457fe0();
  /* 11455474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455477 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1145547a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145547c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1145547f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455482 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455485 push edx */
  push32((uint32_t)(EDX));
  /* 11455486 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11455488 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1145548b push eax */
  push32((uint32_t)(EAX));
  /* 1145548c push 1 */
  push32((uint32_t)(0x1u));
  /* 1145548e call 0x11457fe0 */
  push32(0x11455493u); f_11457fe0();
  /* 11455493 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455496 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11455499 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1145549b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1145549e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114554a1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114554a4 push edx */
  push32((uint32_t)(EDX));
  /* 114554a5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 114554a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114554aa push eax */
  push32((uint32_t)(EAX));
  /* 114554ab push 0 */
  push32((uint32_t)(0x0u));
  /* 114554ad call 0x11457fe0 */
  push32(0x114554b2u); f_11457fe0();
  /* 114554b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114554b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114554b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114554ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114554bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114554c0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114554c3 push edx */
  push32((uint32_t)(EDX));
  /* 114554c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114554c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114554c9 push eax */
  push32((uint32_t)(EAX));
  /* 114554ca push 0 */
  push32((uint32_t)(0x0u));
  /* 114554cc call 0x11457fe0 */
  push32(0x114554d1u); f_11457fe0();
  /* 114554d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114554d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114554d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114554d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114554dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114554df add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114554e2 push edx */
  push32((uint32_t)(EDX));
  /* 114554e3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 114554e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114554e8 push eax */
  push32((uint32_t)(EAX));
  /* 114554e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114554eb call 0x11457fe0 */
  push32(0x114554f0u); f_11457fe0();
  /* 114554f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114554f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 114554f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114554f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 114554fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114554fe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455501 push edx */
  push32((uint32_t)(EDX));
  /* 11455502 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11455504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455507 push eax */
  push32((uint32_t)(EAX));
  /* 11455508 push 0 */
  push32((uint32_t)(0x0u));
  /* 1145550a call 0x11457fe0 */
  push32(0x1145550fu); f_11457fe0();
  /* 1145550f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455512 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11455515 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11455517 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1145551a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145551d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455520 push edx */
  push32((uint32_t)(EDX));
  /* 11455521 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11455523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455526 push eax */
  push32((uint32_t)(EAX));
  /* 11455527 push 0 */
  push32((uint32_t)(0x0u));
  /* 11455529 call 0x11457fe0 */
  push32(0x1145552eu); f_11457fe0();
  /* 1145552e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455531 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11455534 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11455536 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11455539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145553c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145553f push edx */
  push32((uint32_t)(EDX));
  /* 11455540 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11455542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455545 push eax */
  push32((uint32_t)(EAX));
  /* 11455546 push 0 */
  push32((uint32_t)(0x0u));
  /* 11455548 call 0x11457fe0 */
  push32(0x1145554du); f_11457fe0();
  /* 1145554d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455550 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11455553 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11455555 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11455558 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145555b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145555e push edx */
  push32((uint32_t)(EDX));
  /* 1145555f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11455561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455564 push eax */
  push32((uint32_t)(EAX));
  /* 11455565 push 0 */
  push32((uint32_t)(0x0u));
  /* 11455567 call 0x11457fe0 */
  push32(0x1145556cu); f_11457fe0();
  /* 1145556c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145556f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11455572 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11455574 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11455577 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145557a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145557d push edx */
  push32((uint32_t)(EDX));
  /* 1145557e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11455580 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455583 push eax */
  push32((uint32_t)(EAX));
  /* 11455584 push 0 */
  push32((uint32_t)(0x0u));
  /* 11455586 call 0x11457fe0 */
  push32(0x1145558bu); f_11457fe0();
  /* 1145558b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145558e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11455591 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11455593 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11455596 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11455599:;
  /* 11455599 mov esp, ebp */
  ESP = (EBP);
  /* 1145559b pop ebp */
  EBP = (pop32());
  /* 1145559c ret  */
  ESPCHK(0x11455390u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x114555a0 (125 bytes, 49 insns) */
void f_114555a0(void) {
  FTRACE(0x114555a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114555a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114555a1 mov ebp, esp */
  EBP = (ESP);
  /* 114555a3 push ecx */
  push32((uint32_t)(ECX));
L_114555a4:;
  /* 114555a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114555a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114555aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114555ac je 0x11455619 */
  if (C.zf) goto L_11455619;
  /* 114555ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114555b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 114555b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114555b7 jl 0x114555dd */
  if ((C.sf!=C.of)) goto L_114555dd;
  /* 114555b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114555bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114555bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114555c2 jg 0x114555dd */
  if ((!C.zf&&C.sf==C.of)) goto L_114555dd;
  /* 114555c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114555c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 114555ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114555cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 114555d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 114555d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114555d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114555d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 114555db jmp 0x11455617 */
  goto L_11455617;
L_114555dd:;
  /* 114555dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114555e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 114555e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114555e6 jne 0x1145560e */
  if (!C.zf) goto L_1145560e;
  /* 114555e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114555eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114555ee:;
  /* 114555ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114555f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114555f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 114555f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 114555f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114555fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114555ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11455602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11455605 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11455608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145560a jne 0x114555ee */
  if (!C.zf) goto L_114555ee;
  /* 1145560c jmp 0x11455617 */
  goto L_11455617;
L_1145560e:;
  /* 1145560e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455611 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455614 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11455617:;
  /* 11455617 jmp 0x114555a4 */
  goto L_114555a4;
L_11455619:;
  /* 11455619 mov esp, ebp */
  ESP = (EBP);
  /* 1145561b pop ebp */
  EBP = (pop32());
  /* 1145561c ret  */
  ESPCHK(0x114555a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015620 @ 0x11455620 (147 bytes, 52 insns) */
void f_11455620(void) {
  FTRACE(0x11455620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455620 push ebp */
  push32((uint32_t)(EBP));
  /* 11455621 mov ebp, esp */
  EBP = (ESP);
  /* 11455623 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455627 jne 0x1145562e */
  if (!C.zf) goto L_1145562e;
  /* 11455629 jmp 0x114556b1 */
  goto L_114556b1;
L_1145562e:;
  /* 1145562e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455631 cmp dword ptr [eax + 0xc], 0x11474bf8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11474bf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455638 je 0x114556b1 */
  if (C.zf) goto L_114556b1;
  /* 1145563a push 2 */
  push32((uint32_t)(0x2u));
  /* 1145563c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1145563f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11455642 push edx */
  push32((uint32_t)(EDX));
  /* 11455643 call 0x11449080 */
  push32(0x11455648u); f_11449080();
  /* 11455648 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145564b push 2 */
  push32((uint32_t)(0x2u));
  /* 1145564d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455650 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11455653 push ecx */
  push32((uint32_t)(ECX));
  /* 11455654 call 0x11449080 */
  push32(0x11455659u); f_11449080();
  /* 11455659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145565c push 2 */
  push32((uint32_t)(0x2u));
  /* 1145565e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455661 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11455664 push eax */
  push32((uint32_t)(EAX));
  /* 11455665 call 0x11449080 */
  push32(0x1145566au); f_11449080();
  /* 1145566a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145566d push 2 */
  push32((uint32_t)(0x2u));
  /* 1145566f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455672 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11455675 push edx */
  push32((uint32_t)(EDX));
  /* 11455676 call 0x11449080 */
  push32(0x1145567bu); f_11449080();
  /* 1145567b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145567e push 2 */
  push32((uint32_t)(0x2u));
  /* 11455680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455683 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11455686 push ecx */
  push32((uint32_t)(ECX));
  /* 11455687 call 0x11449080 */
  push32(0x1145568cu); f_11449080();
  /* 1145568c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145568f push 2 */
  push32((uint32_t)(0x2u));
  /* 11455691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11455694 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11455697 push eax */
  push32((uint32_t)(EAX));
  /* 11455698 call 0x11449080 */
  push32(0x1145569du); f_11449080();
  /* 1145569d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114556a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114556a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114556a5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 114556a8 push edx */
  push32((uint32_t)(EDX));
  /* 114556a9 call 0x11449080 */
  push32(0x114556aeu); f_11449080();
  /* 114556ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114556b1:;
  /* 114556b1 pop ebp */
  EBP = (pop32());
  /* 114556b2 ret  */
  ESPCHK(0x11455620u, _esp0);
  ESP += 4; return;
}

/* FUN_100156c0 @ 0x114556c0 (928 bytes, 284 insns) */
void f_114556c0(void) {
  FTRACE(0x114556c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114556c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114556c1 mov ebp, esp */
  EBP = (ESP);
  /* 114556c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114556c6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 114556cd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 114556d4 cmp dword ptr [0x11474b58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114556db je 0x11455a11 */
  if (C.zf) goto L_11455a11;
  /* 114556e1 cmp dword ptr [0x11474b68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474b68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114556e8 jne 0x11455710 */
  if (!C.zf) goto L_11455710;
  /* 114556ea push 0x11474b68 */
  push32((uint32_t)(0x11474b68u));
  /* 114556ef push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 114556f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114556f6 mov ax, word ptr [0x11474bb4] */
  AX = (r16((uint32_t)(0x11474bb4)));
  /* 114556fc push eax */
  push32((uint32_t)(EAX));
  /* 114556fd push 0 */
  push32((uint32_t)(0x0u));
  /* 114556ff call 0x11457fe0 */
  push32(0x11455704u); f_11457fe0();
  /* 11455704 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11455709 je 0x11455710 */
  if (C.zf) goto L_11455710;
  /* 1145570b jmp 0x114559d2 */
  goto L_114559d2;
L_11455710:;
  /* 11455710 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11455712 push 0x11470aac */
  push32((uint32_t)(0x11470aacu));
  /* 11455717 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455719 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1145571e call 0x114485f0 */
  push32(0x11455723u); f_114485f0();
  /* 11455723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455726 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11455729 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1145572b push 0x11470aac */
  push32((uint32_t)(0x11470aacu));
  /* 11455730 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455732 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11455737 call 0x114485f0 */
  push32(0x1145573cu); f_114485f0();
  /* 1145573c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1145573f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11455742 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11455744 push 0x11470aac */
  push32((uint32_t)(0x11470aacu));
  /* 11455749 push 2 */
  push32((uint32_t)(0x2u));
  /* 1145574b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11455750 call 0x114485f0 */
  push32(0x11455755u); f_114485f0();
  /* 11455755 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455758 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1145575b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1145575d push 0x11470aac */
  push32((uint32_t)(0x11470aacu));
  /* 11455762 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455764 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11455769 call 0x114485f0 */
  push32(0x1145576eu); f_114485f0();
  /* 1145576e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455771 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11455774 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455778 je 0x1145578c */
  if (C.zf) goto L_1145578c;
  /* 1145577a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145577e je 0x1145578c */
  if (C.zf) goto L_1145578c;
  /* 11455780 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455784 je 0x1145578c */
  if (C.zf) goto L_1145578c;
  /* 11455786 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145578a jne 0x11455791 */
  if (!C.zf) goto L_11455791;
L_1145578c:;
  /* 1145578c jmp 0x114559d2 */
  goto L_114559d2;
L_11455791:;
  /* 11455791 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11455794 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11455797 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1145579e jmp 0x114557a9 */
  goto L_114557a9;
L_114557a0:;
  /* 114557a0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 114557a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114557a6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_114557a9:;
  /* 114557a9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114557b0 jge 0x114557c5 */
  if ((C.sf==C.of)) goto L_114557c5;
  /* 114557b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 114557b5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 114557b8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 114557ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 114557bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114557c0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114557c3 jmp 0x114557a0 */
  goto L_114557a0;
L_114557c5:;
  /* 114557c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 114557c8 push eax */
  push32((uint32_t)(EAX));
  /* 114557c9 mov ecx, dword ptr [0x11474b68] */
  ECX = (r32((uint32_t)(0x11474b68)));
  /* 114557cf push ecx */
  push32((uint32_t)(ECX));
  /* 114557d0 call dword ptr [0x1147735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1147735c))), 0x114557d6u);
  /* 114557d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114557d8 jne 0x114557df */
  if (!C.zf) goto L_114557df;
  /* 114557da jmp 0x114559d2 */
  goto L_114559d2;
L_114557df:;
  /* 114557df cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114557e3 jbe 0x114557ea */
  if ((C.cf||C.zf)) goto L_114557ea;
  /* 114557e5 jmp 0x114559d2 */
  goto L_114559d2;
L_114557ea:;
  /* 114557ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 114557ed and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114557f3 mov dword ptr [0x11472fc4], edx */
  w32((uint32_t)(0x11472fc4), (EDX));
  /* 114557f9 cmp dword ptr [0x11472fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11472fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455800 jle 0x11455859 */
  if ((C.zf||C.sf!=C.of)) goto L_11455859;
  /* 11455802 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11455805 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11455808 jmp 0x11455813 */
  goto L_11455813;
L_1145580a:;
  /* 1145580a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1145580d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455810 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11455813:;
  /* 11455813 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11455816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455818 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1145581a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145581c je 0x11455859 */
  if (C.zf) goto L_11455859;
  /* 1145581e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11455821 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11455823 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11455826 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11455828 je 0x11455859 */
  if (C.zf) goto L_11455859;
  /* 1145582a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1145582d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1145582f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11455831 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11455834 jmp 0x1145583f */
  goto L_1145583f;
L_11455836:;
  /* 11455836 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11455839 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145583c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1145583f:;
  /* 1145583f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11455842 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11455844 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11455847 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1145584a jg 0x11455857 */
  if ((!C.zf&&C.sf==C.of)) goto L_11455857;
  /* 1145584c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1145584f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455852 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11455855 jmp 0x11455836 */
  goto L_11455836;
L_11455857:;
  /* 11455857 jmp 0x1145580a */
  goto L_1145580a;
L_11455859:;
  /* 11455859 push 0 */
  push32((uint32_t)(0x0u));
  /* 1145585b push 0 */
  push32((uint32_t)(0x0u));
  /* 1145585d push 0 */
  push32((uint32_t)(0x0u));
  /* 1145585f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11455862 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455865 push eax */
  push32((uint32_t)(EAX));
  /* 11455866 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1145586b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1145586e push ecx */
  push32((uint32_t)(ECX));
  /* 1145586f push 1 */
  push32((uint32_t)(0x1u));
  /* 11455871 call 0x11451540 */
  push32(0x11455876u); f_11451540();
  /* 11455876 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1145587b jne 0x11455882 */
  if (!C.zf) goto L_11455882;
  /* 1145587d jmp 0x114559d2 */
  goto L_114559d2;
L_11455882:;
  /* 11455882 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11455885 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1145588a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1145588d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11455890 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11455897 jmp 0x114558a2 */
  goto L_114558a2;
L_11455899:;
  /* 11455899 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145589c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1145589f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_114558a2:;
  /* 114558a2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114558a9 jge 0x114558c0 */
  if ((C.sf==C.of)) goto L_114558c0;
  /* 114558ab mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 114558ae mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 114558b2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 114558b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 114558b8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114558bb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 114558be jmp 0x11455899 */
  goto L_11455899;
L_114558c0:;
  /* 114558c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114558c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114558c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114558c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114558ca push edx */
  push32((uint32_t)(EDX));
  /* 114558cb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 114558d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 114558d3 push eax */
  push32((uint32_t)(EAX));
  /* 114558d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 114558d6 call 0x11458280 */
  push32(0x114558dbu); f_11458280();
  /* 114558db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114558de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114558e0 jne 0x114558e7 */
  if (!C.zf) goto L_114558e7;
  /* 114558e2 jmp 0x114559d2 */
  goto L_114559d2;
L_114558e7:;
  /* 114558e7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114558ea mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 114558ef cmp dword ptr [0x11472fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11472fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114558f6 jle 0x11455953 */
  if ((C.zf||C.sf!=C.of)) goto L_11455953;
  /* 114558f8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 114558fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 114558fe jmp 0x11455909 */
  goto L_11455909;
L_11455900:;
  /* 11455900 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11455903 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455906 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11455909:;
  /* 11455909 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1145590c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1145590e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11455910 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11455912 je 0x11455953 */
  if (C.zf) goto L_11455953;
  /* 11455914 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11455917 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11455919 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1145591c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1145591e je 0x11455953 */
  if (C.zf) goto L_11455953;
  /* 11455920 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11455923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455925 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11455927 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1145592a jmp 0x11455935 */
  goto L_11455935;
L_1145592c:;
  /* 1145592c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1145592f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455932 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11455935:;
  /* 11455935 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11455938 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1145593a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1145593d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455940 jg 0x11455951 */
  if ((!C.zf&&C.sf==C.of)) goto L_11455951;
  /* 11455942 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11455945 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11455948 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1145594f jmp 0x1145592c */
  goto L_1145592c;
L_11455951:;
  /* 11455951 jmp 0x11455900 */
  goto L_11455900;
L_11455953:;
  /* 11455953 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11455956 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455959 mov dword ptr [0x11472db8], eax */
  w32((uint32_t)(0x11472db8), (EAX));
  /* 1145595e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11455961 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455964 mov dword ptr [0x11472dbc], ecx */
  w32((uint32_t)(0x11472dbc), (ECX));
  /* 1145596a cmp dword ptr [0x11474ba0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474ba0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455971 je 0x11455984 */
  if (C.zf) goto L_11455984;
  /* 11455973 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455975 mov edx, dword ptr [0x11474ba0] */
  EDX = (r32((uint32_t)(0x11474ba0)));
  /* 1145597b push edx */
  push32((uint32_t)(EDX));
  /* 1145597c call 0x11449080 */
  push32(0x11455981u); f_11449080();
  /* 11455981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11455984:;
  /* 11455984 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11455987 mov dword ptr [0x11474ba0], eax */
  w32((uint32_t)(0x11474ba0), (EAX));
  /* 1145598c cmp dword ptr [0x11474ba4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11474ba4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11455993 je 0x114559a6 */
  if (C.zf) goto L_114559a6;
  /* 11455995 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455997 mov ecx, dword ptr [0x11474ba4] */
  ECX = (r32((uint32_t)(0x11474ba4)));
  /* 1145599d push ecx */
  push32((uint32_t)(ECX));
  /* 1145599e call 0x11449080 */
  push32(0x114559a3u); f_11449080();
  /* 114559a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114559a6:;
  /* 114559a6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114559a9 mov dword ptr [0x11474ba4], edx */
  w32((uint32_t)(0x11474ba4), (EDX));
  /* 114559af push 2 */
  push32((uint32_t)(0x2u));
  /* 114559b1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114559b4 push eax */
  push32((uint32_t)(EAX));
  /* 114559b5 call 0x11449080 */
  push32(0x114559bau); f_11449080();
  /* 114559ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114559bd push 2 */
  push32((uint32_t)(0x2u));
  /* 114559bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 114559c2 push ecx */
  push32((uint32_t)(ECX));
  /* 114559c3 call 0x11449080 */
  push32(0x114559c8u); f_11449080();
  /* 114559c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114559cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114559cd jmp 0x11455a5c */
  goto L_11455a5c;
L_114559d2:;
  /* 114559d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114559d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 114559d7 push edx */
  push32((uint32_t)(EDX));
  /* 114559d8 call 0x11449080 */
  push32(0x114559ddu); f_11449080();
  /* 114559dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114559e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114559e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 114559e5 push eax */
  push32((uint32_t)(EAX));
  /* 114559e6 call 0x11449080 */
  push32(0x114559ebu); f_11449080();
  /* 114559eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114559ee push 2 */
  push32((uint32_t)(0x2u));
  /* 114559f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 114559f3 push ecx */
  push32((uint32_t)(ECX));
  /* 114559f4 call 0x11449080 */
  push32(0x114559f9u); f_11449080();
  /* 114559f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114559fc push 2 */
  push32((uint32_t)(0x2u));
  /* 114559fe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11455a01 push edx */
  push32((uint32_t)(EDX));
  /* 11455a02 call 0x11449080 */
  push32(0x11455a07u); f_11449080();
  /* 11455a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455a0a mov eax, 1 */
  EAX = (0x1u);
  /* 11455a0f jmp 0x11455a5c */
  goto L_11455a5c;
L_11455a11:;
  /* 11455a11 mov dword ptr [0x11472db8], 0x11472dc2 */
  w32((uint32_t)(0x11472db8), (0x11472dc2u));
  /* 11455a1b mov dword ptr [0x11472dbc], 0x11472dc2 */
  w32((uint32_t)(0x11472dbc), (0x11472dc2u));
  /* 11455a25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455a27 mov eax, dword ptr [0x11474ba0] */
  EAX = (r32((uint32_t)(0x11474ba0)));
  /* 11455a2c push eax */
  push32((uint32_t)(EAX));
  /* 11455a2d call 0x11449080 */
  push32(0x11455a32u); f_11449080();
  /* 11455a32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455a35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11455a37 mov ecx, dword ptr [0x11474ba4] */
  ECX = (r32((uint32_t)(0x11474ba4)));
  /* 11455a3d push ecx */
  push32((uint32_t)(ECX));
  /* 11455a3e call 0x11449080 */
  push32(0x11455a43u); f_11449080();
  /* 11455a43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455a46 mov dword ptr [0x11474ba0], 0 */
  w32((uint32_t)(0x11474ba0), (0x0u));
  /* 11455a50 mov dword ptr [0x11474ba4], 0 */
  w32((uint32_t)(0x11474ba4), (0x0u));
  /* 11455a5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11455a5c:;
  /* 11455a5c mov esp, ebp */
  ESP = (EBP);
  /* 11455a5e pop ebp */
  EBP = (pop32());
  /* 11455a5f ret  */
  ESPCHK(0x114556c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a60 @ 0x11455a60 (7 bytes, 5 insns) */
void f_11455a60(void) {
  FTRACE(0x11455a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11455a61 mov ebp, esp */
  EBP = (ESP);
  /* 11455a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455a65 pop ebp */
  EBP = (pop32());
  /* 11455a66 ret  */
  ESPCHK(0x11455a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a70 @ 0x11455a70 (62 bytes, 35 insns) */
void f_11455a70(void) {
  FTRACE(0x11455a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11455a71 mov ebp, esp */
  EBP = (ESP);
  /* 11455a73 push esi */
  push32((uint32_t)(ESI));
  /* 11455a74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455a76 push eax */
  push32((uint32_t)(EAX));
  /* 11455a77 push eax */
  push32((uint32_t)(EAX));
  /* 11455a78 push eax */
  push32((uint32_t)(EAX));
  /* 11455a79 push eax */
  push32((uint32_t)(EAX));
  /* 11455a7a push eax */
  push32((uint32_t)(EAX));
  /* 11455a7b push eax */
  push32((uint32_t)(EAX));
  /* 11455a7c push eax */
  push32((uint32_t)(EAX));
  /* 11455a7d push eax */
  push32((uint32_t)(EAX));
  /* 11455a7e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11455a81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11455a84:;
  /* 11455a84 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11455a86 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11455a88 je 0x11455a91 */
  if (C.zf) goto L_11455a91;
  /* 11455a8a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11455a8b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11455a8b");
  /* 11455a8f jmp 0x11455a84 */
  goto L_11455a84;
L_11455a91:;
  /* 11455a91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11455a94 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11455a97 nop  */
  /* nop */
L_11455a98:;
  /* 11455a98 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11455a99 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11455a9b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11455a9d je 0x11455aa6 */
  if (C.zf) goto L_11455aa6;
  /* 11455a9f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11455aa0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11455aa0");
  /* 11455aa4 jae 0x11455a98 */
  if (!C.cf) goto L_11455a98;
L_11455aa6:;
  /* 11455aa6 mov eax, ecx */
  EAX = (ECX);
  /* 11455aa8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11455aab pop esi */
  ESI = (pop32());
  /* 11455aac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11455aad ret  */
  ESPCHK(0x11455a70u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11455ab0 (56 bytes, 31 insns) */
void f_11455ab0(void) {
  FTRACE(0x11455ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11455ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11455ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11455ab3 push edi */
  push32((uint32_t)(EDI));
  /* 11455ab4 push esi */
  push32((uint32_t)(ESI));
  /* 11455ab5 push ebx */
  push32((uint32_t)(EBX));
  /* 11455ab6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11455ab9 jecxz 0x11455ae1 */
  x86_unimpl("jecxz @ 0x11455ab9");
  /* 11455abb mov ebx, ecx */
  EBX = (ECX);
  /* 11455abd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11455ac0 mov esi, edi */
  ESI = (EDI);
  /* 11455ac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11455ac4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11455ac6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11455ac8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11455aca mov edi, esi */
  EDI = (ESI);
  /* 11455acc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11455acf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11455ad1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11455ad4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11455ad6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11455ad9 ja 0x11455adf */
  if ((!C.cf&&!C.zf)) goto L_11455adf;
  /* 11455adb je 0x11455ae1 */
  if (C.zf) goto L_11455ae1;
  /* 11455add dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11455ade dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11455adf:;
  /* 11455adf not ecx */
  ECX = (~(ECX));
L_11455ae1:;
  /* 11455ae1 mov eax, ecx */
  EAX = (ECX);
  /* 11455ae3 pop ebx */
  EBX = (pop32());
  /* 11455ae4 pop esi */
  ESI = (pop32());
  /* 11455ae5 pop edi */
  EDI = (pop32());
  /* 11455ae6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11455ae7 ret  */
  ESPCHK(0x11455ab0u, _esp0);
  ESP += 4; return;
}

