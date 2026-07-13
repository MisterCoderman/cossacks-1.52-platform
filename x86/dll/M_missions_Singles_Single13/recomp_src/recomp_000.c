#include "recomp.h"

/* OnInit @ 0x11101005 (5 bytes, 1 insns) */
void f_11101005(void) {
  FTRACE(0x11101005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11101005 jmp 0x11101090 */
  f_11101090(); return;
}

/* thunk_FUN_10001030 @ 0x1110100a (5 bytes, 1 insns) */
void f_1110100a(void) {
  FTRACE(0x1110100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110100a jmp 0x11101030 */
  f_11101030(); return;
}

/* ProcessScenary @ 0x1110100f (5 bytes, 1 insns) */
void f_1110100f(void) {
  FTRACE(0x1110100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1110100f jmp 0x111014f0 */
  f_111014f0(); return;
}

/* FUN_10001030 @ 0x11101030 (67 bytes, 26 insns) */
void f_11101030(void) {
  FTRACE(0x11101030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11101030 push ebp */
  push32((uint32_t)(EBP));
  /* 11101031 mov ebp, esp */
  EBP = (ESP);
  /* 11101033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11101036 push ebx */
  push32((uint32_t)(EBX));
  /* 11101037 push esi */
  push32((uint32_t)(ESI));
  /* 11101038 push edi */
  push32((uint32_t)(EDI));
  /* 11101039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1110103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11101041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11101046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11101048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101052 je 0x11101056 */
  if (C.zf) goto L_11101056;
  /* 11101054 jmp 0x1110105b */
  goto L_1110105b;
L_11101056:;
  /* 11101056 call 0x11101005 */
  push32(0x1110105bu); f_11101005();
L_1110105b:;
  /* 1110105b mov eax, 1 */
  EAX = (0x1u);
  /* 11101060 pop edi */
  EDI = (pop32());
  /* 11101061 pop esi */
  ESI = (pop32());
  /* 11101062 pop ebx */
  EBX = (pop32());
  /* 11101063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101068 call 0x11102230 */
  push32(0x1110106du); f_11102230();
  /* 1110106d mov esp, ebp */
  ESP = (EBP);
  /* 1110106f pop ebp */
  EBP = (pop32());
  /* 11101070 ret 0xc */
  ESPCHK(0x11101030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x11101090 (887 bytes, 237 insns) */
void f_11101090(void) {
  FTRACE(0x11101090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11101090 push ebp */
  push32((uint32_t)(EBP));
  /* 11101091 mov ebp, esp */
  EBP = (ESP);
  /* 11101093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11101096 push ebx */
  push32((uint32_t)(EBX));
  /* 11101097 push esi */
  push32((uint32_t)(ESI));
  /* 11101098 push edi */
  push32((uint32_t)(EDI));
  /* 11101099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1110109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 111010a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 111010a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111010a8 mov esi, esp */
  ESI = (ESP);
  /* 111010aa push 0x1112a0e0 */
  push32((uint32_t)(0x1112a0e0u));
  /* 111010af push 1 */
  push32((uint32_t)(0x1u));
  /* 111010b1 call dword ptr [0x11132488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132488))), 0x111010b7u);
  /* 111010b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111010ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111010bc call 0x11102230 */
  push32(0x111010c1u); f_11102230();
  /* 111010c1 mov esi, esp */
  ESI = (ESP);
  /* 111010c3 push 0x1112a0d8 */
  push32((uint32_t)(0x1112a0d8u));
  /* 111010c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 111010ca call dword ptr [0x11132488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132488))), 0x111010d0u);
  /* 111010d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111010d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111010d5 call 0x11102230 */
  push32(0x111010dau); f_11102230();
  /* 111010da mov esi, esp */
  ESI = (ESP);
  /* 111010dc push 0x1112a0cc */
  push32((uint32_t)(0x1112a0ccu));
  /* 111010e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 111010e3 call dword ptr [0x11132488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132488))), 0x111010e9u);
  /* 111010e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111010ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111010ee call 0x11102230 */
  push32(0x111010f3u); f_11102230();
  /* 111010f3 mov esi, esp */
  ESI = (ESP);
  /* 111010f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 111010f7 push 0x1112f450 */
  push32((uint32_t)(0x1112f450u));
  /* 111010fc call dword ptr [0x1113248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113248c))), 0x11101102u);
  /* 11101102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101107 call 0x11102230 */
  push32(0x1110110cu); f_11102230();
  /* 1110110c mov esi, esp */
  ESI = (ESP);
  /* 1110110e push 4 */
  push32((uint32_t)(0x4u));
  /* 11101110 push 0x1112f4c4 */
  push32((uint32_t)(0x1112f4c4u));
  /* 11101115 call dword ptr [0x1113248c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113248c))), 0x1110111bu);
  /* 1110111b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110111e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101120 call 0x11102230 */
  push32(0x11101125u); f_11102230();
  /* 11101125 mov esi, esp */
  ESI = (ESP);
  /* 11101127 push 0x1112a0c8 */
  push32((uint32_t)(0x1112a0c8u));
  /* 1110112c push 0x1112f3f8 */
  push32((uint32_t)(0x1112f3f8u));
  /* 11101131 call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x11101137u);
  /* 11101137 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110113a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110113c call 0x11102230 */
  push32(0x11101141u); f_11102230();
  /* 11101141 mov esi, esp */
  ESI = (ESP);
  /* 11101143 push 0x1112a0c4 */
  push32((uint32_t)(0x1112a0c4u));
  /* 11101148 push 0x1112f400 */
  push32((uint32_t)(0x1112f400u));
  /* 1110114d call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x11101153u);
  /* 11101153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101156 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101158 call 0x11102230 */
  push32(0x1110115du); f_11102230();
  /* 1110115d mov esi, esp */
  ESI = (ESP);
  /* 1110115f push 0x1112a0c0 */
  push32((uint32_t)(0x1112a0c0u));
  /* 11101164 push 0x1112f408 */
  push32((uint32_t)(0x1112f408u));
  /* 11101169 call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x1110116fu);
  /* 1110116f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101172 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101174 call 0x11102230 */
  push32(0x11101179u); f_11102230();
  /* 11101179 mov esi, esp */
  ESI = (ESP);
  /* 1110117b push 0x1112a0bc */
  push32((uint32_t)(0x1112a0bcu));
  /* 11101180 push 0x1112f478 */
  push32((uint32_t)(0x1112f478u));
  /* 11101185 call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x1110118bu);
  /* 1110118b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110118e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101190 call 0x11102230 */
  push32(0x11101195u); f_11102230();
  /* 11101195 mov esi, esp */
  ESI = (ESP);
  /* 11101197 push 0x1112a0b8 */
  push32((uint32_t)(0x1112a0b8u));
  /* 1110119c push 0x1112f480 */
  push32((uint32_t)(0x1112f480u));
  /* 111011a1 call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x111011a7u);
  /* 111011a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111011aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111011ac call 0x11102230 */
  push32(0x111011b1u); f_11102230();
  /* 111011b1 mov esi, esp */
  ESI = (ESP);
  /* 111011b3 push 0x1112a0b4 */
  push32((uint32_t)(0x1112a0b4u));
  /* 111011b8 push 0x1112f488 */
  push32((uint32_t)(0x1112f488u));
  /* 111011bd call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x111011c3u);
  /* 111011c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111011c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111011c8 call 0x11102230 */
  push32(0x111011cdu); f_11102230();
  /* 111011cd mov esi, esp */
  ESI = (ESP);
  /* 111011cf push 0x1112a0b0 */
  push32((uint32_t)(0x1112a0b0u));
  /* 111011d4 push 0x1112f490 */
  push32((uint32_t)(0x1112f490u));
  /* 111011d9 call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x111011dfu);
  /* 111011df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111011e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111011e4 call 0x11102230 */
  push32(0x111011e9u); f_11102230();
  /* 111011e9 mov esi, esp */
  ESI = (ESP);
  /* 111011eb push 0x1112a0ac */
  push32((uint32_t)(0x1112a0acu));
  /* 111011f0 push 0x1112f498 */
  push32((uint32_t)(0x1112f498u));
  /* 111011f5 call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x111011fbu);
  /* 111011fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111011fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101200 call 0x11102230 */
  push32(0x11101205u); f_11102230();
  /* 11101205 mov esi, esp */
  ESI = (ESP);
  /* 11101207 push 0x1112a0a8 */
  push32((uint32_t)(0x1112a0a8u));
  /* 1110120c push 0x1112f4a0 */
  push32((uint32_t)(0x1112f4a0u));
  /* 11101211 call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x11101217u);
  /* 11101217 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110121a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110121c call 0x11102230 */
  push32(0x11101221u); f_11102230();
  /* 11101221 mov esi, esp */
  ESI = (ESP);
  /* 11101223 push 0x1112a0a4 */
  push32((uint32_t)(0x1112a0a4u));
  /* 11101228 push 0x1112f4a8 */
  push32((uint32_t)(0x1112f4a8u));
  /* 1110122d call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x11101233u);
  /* 11101233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101236 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101238 call 0x11102230 */
  push32(0x1110123du); f_11102230();
  /* 1110123d mov esi, esp */
  ESI = (ESP);
  /* 1110123f push 0x1112a0a0 */
  push32((uint32_t)(0x1112a0a0u));
  /* 11101244 push 0x1112f4b0 */
  push32((uint32_t)(0x1112f4b0u));
  /* 11101249 call dword ptr [0x11132490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132490))), 0x1110124fu);
  /* 1110124f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101252 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101254 call 0x11102230 */
  push32(0x11101259u); f_11102230();
  /* 11101259 mov esi, esp */
  ESI = (ESP);
  /* 1110125b push 0x1112a09c */
  push32((uint32_t)(0x1112a09cu));
  /* 11101260 push 0x1112f420 */
  push32((uint32_t)(0x1112f420u));
  /* 11101265 call dword ptr [0x11132494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132494))), 0x1110126bu);
  /* 1110126b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110126e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101270 call 0x11102230 */
  push32(0x11101275u); f_11102230();
  /* 11101275 mov esi, esp */
  ESI = (ESP);
  /* 11101277 push 0x1112a098 */
  push32((uint32_t)(0x1112a098u));
  /* 1110127c push 0x1112f428 */
  push32((uint32_t)(0x1112f428u));
  /* 11101281 call dword ptr [0x11132494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132494))), 0x11101287u);
  /* 11101287 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110128a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110128c call 0x11102230 */
  push32(0x11101291u); f_11102230();
  /* 11101291 mov esi, esp */
  ESI = (ESP);
  /* 11101293 push 0x1112a094 */
  push32((uint32_t)(0x1112a094u));
  /* 11101298 push 0x1112f430 */
  push32((uint32_t)(0x1112f430u));
  /* 1110129d call dword ptr [0x11132494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132494))), 0x111012a3u);
  /* 111012a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111012a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111012a8 call 0x11102230 */
  push32(0x111012adu); f_11102230();
  /* 111012ad mov esi, esp */
  ESI = (ESP);
  /* 111012af push 0x1112a090 */
  push32((uint32_t)(0x1112a090u));
  /* 111012b4 push 0x1112f438 */
  push32((uint32_t)(0x1112f438u));
  /* 111012b9 call dword ptr [0x11132494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132494))), 0x111012bfu);
  /* 111012bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111012c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111012c4 call 0x11102230 */
  push32(0x111012c9u); f_11102230();
  /* 111012c9 mov esi, esp */
  ESI = (ESP);
  /* 111012cb push 0x1112a08c */
  push32((uint32_t)(0x1112a08cu));
  /* 111012d0 push 0x1112f440 */
  push32((uint32_t)(0x1112f440u));
  /* 111012d5 call dword ptr [0x11132494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132494))), 0x111012dbu);
  /* 111012db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111012de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111012e0 call 0x11102230 */
  push32(0x111012e5u); f_11102230();
  /* 111012e5 mov esi, esp */
  ESI = (ESP);
  /* 111012e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111012e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111012eb push 0x1112f3f8 */
  push32((uint32_t)(0x1112f3f8u));
  /* 111012f0 call dword ptr [0x11132498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132498))), 0x111012f6u);
  /* 111012f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111012f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111012fb call 0x11102230 */
  push32(0x11101300u); f_11102230();
  /* 11101300 mov esi, esp */
  ESI = (ESP);
  /* 11101302 push 0x1112a084 */
  push32((uint32_t)(0x1112a084u));
  /* 11101307 push 0x1112f410 */
  push32((uint32_t)(0x1112f410u));
  /* 1110130c call dword ptr [0x1113249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113249c))), 0x11101312u);
  /* 11101312 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101315 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101317 call 0x11102230 */
  push32(0x1110131cu); f_11102230();
  /* 1110131c mov esi, esp */
  ESI = (ESP);
  /* 1110131e push 0x1112a074 */
  push32((uint32_t)(0x1112a074u));
  /* 11101323 push 0x1112f418 */
  push32((uint32_t)(0x1112f418u));
  /* 11101328 call dword ptr [0x111324a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111324a0))), 0x1110132eu);
  /* 1110132e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101331 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101333 call 0x11102230 */
  push32(0x11101338u); f_11102230();
  /* 11101338 mov esi, esp */
  ESI = (ESP);
  /* 1110133a push 0x1112a064 */
  push32((uint32_t)(0x1112a064u));
  /* 1110133f push 0x1112f448 */
  push32((uint32_t)(0x1112f448u));
  /* 11101344 call dword ptr [0x111324a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111324a0))), 0x1110134au);
  /* 1110134a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110134d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110134f call 0x11102230 */
  push32(0x11101354u); f_11102230();
  /* 11101354 mov esi, esp */
  ESI = (ESP);
  /* 11101356 push 0x1112a054 */
  push32((uint32_t)(0x1112a054u));
  /* 1110135b push 0x1112f460 */
  push32((uint32_t)(0x1112f460u));
  /* 11101360 call dword ptr [0x111324a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111324a0))), 0x11101366u);
  /* 11101366 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101369 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110136b call 0x11102230 */
  push32(0x11101370u); f_11102230();
  /* 11101370 mov esi, esp */
  ESI = (ESP);
  /* 11101372 push 0x1112a038 */
  push32((uint32_t)(0x1112a038u));
  /* 11101377 push 0x1112f468 */
  push32((uint32_t)(0x1112f468u));
  /* 1110137c call dword ptr [0x111324a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111324a0))), 0x11101382u);
  /* 11101382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101385 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101387 call 0x11102230 */
  push32(0x1110138cu); f_11102230();
  /* 1110138c mov esi, esp */
  ESI = (ESP);
  /* 1110138e push 0x1112a024 */
  push32((uint32_t)(0x1112a024u));
  /* 11101393 push 0x1112f458 */
  push32((uint32_t)(0x1112f458u));
  /* 11101398 call dword ptr [0x111324a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111324a0))), 0x1110139eu);
  /* 1110139e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111013a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111013a3 call 0x11102230 */
  push32(0x111013a8u); f_11102230();
  /* 111013a8 mov esi, esp */
  ESI = (ESP);
  /* 111013aa push 0x1112a01c */
  push32((uint32_t)(0x1112a01cu));
  /* 111013af push 0x1112f470 */
  push32((uint32_t)(0x1112f470u));
  /* 111013b4 call dword ptr [0x1113249c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113249c))), 0x111013bau);
  /* 111013ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111013bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111013bf call 0x11102230 */
  push32(0x111013c4u); f_11102230();
  /* 111013c4 mov esi, esp */
  ESI = (ESP);
  /* 111013c6 push 0x1112f3f0 */
  push32((uint32_t)(0x1112f3f0u));
  /* 111013cb call dword ptr [0x111324a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111324a4))), 0x111013d1u);
  /* 111013d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111013d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111013d6 call 0x11102230 */
  push32(0x111013dbu); f_11102230();
  /* 111013db mov esi, esp */
  ESI = (ESP);
  /* 111013dd push 0 */
  push32((uint32_t)(0x0u));
  /* 111013df push 0x1112f448 */
  push32((uint32_t)(0x1112f448u));
  /* 111013e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111013e6 call dword ptr [0x111324a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111324a8))), 0x111013ecu);
  /* 111013ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111013ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111013f1 call 0x11102230 */
  push32(0x111013f6u); f_11102230();
  /* 111013f6 pop edi */
  EDI = (pop32());
  /* 111013f7 pop esi */
  ESI = (pop32());
  /* 111013f8 pop ebx */
  EBX = (pop32());
  /* 111013f9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111013fc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111013fe call 0x11102230 */
  push32(0x11101403u); f_11102230();
  /* 11101403 mov esp, ebp */
  ESP = (EBP);
  /* 11101405 pop ebp */
  EBP = (pop32());
  /* 11101406 ret  */
  ESPCHK(0x11101090u, _esp0);
  ESP += 4; return;
}

/* FUN_100014f0 @ 0x111014f0 (2541 bytes, 729 insns) */
void f_111014f0(void) {
  FTRACE(0x111014f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111014f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111014f1 mov ebp, esp */
  EBP = (ESP);
  /* 111014f3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111014f6 push ebx */
  push32((uint32_t)(EBX));
  /* 111014f7 push esi */
  push32((uint32_t)(ESI));
  /* 111014f8 push edi */
  push32((uint32_t)(EDI));
  /* 111014f9 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 111014fc mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11101501 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11101506 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11101508 mov esi, esp */
  ESI = (ESP);
  /* 1110150a push 1 */
  push32((uint32_t)(0x1u));
  /* 1110150c call dword ptr [0x1113241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113241c))), 0x11101512u);
  /* 11101512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101515 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101517 call 0x11102230 */
  push32(0x1110151cu); f_11102230();
  /* 1110151c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11101521 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101523 je 0x111018dc */
  if (C.zf) goto L_111018dc;
  /* 11101529 mov esi, esp */
  ESI = (ESP);
  /* 1110152b push 0 */
  push32((uint32_t)(0x0u));
  /* 1110152d call dword ptr [0x11132420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132420))), 0x11101533u);
  /* 11101533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101536 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101538 call 0x11102230 */
  push32(0x1110153du); f_11102230();
  /* 1110153d mov dword ptr [0x1112f450], eax */
  w32((uint32_t)(0x1112f450), (EAX));
  /* 11101542 mov eax, dword ptr [0x1112f450] */
  EAX = (r32((uint32_t)(0x1112f450)));
  /* 11101547 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110154d mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 11101552 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11101554 mov esi, esp */
  ESI = (ESP);
  /* 11101556 push ecx */
  push32((uint32_t)(ECX));
  /* 11101557 push 3 */
  push32((uint32_t)(0x3u));
  /* 11101559 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110155b call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x11101561u);
  /* 11101561 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101564 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101566 call 0x11102230 */
  push32(0x1110156bu); f_11102230();
  /* 1110156b mov edx, dword ptr [0x1112f450] */
  EDX = (r32((uint32_t)(0x1112f450)));
  /* 11101571 imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11101577 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 1110157c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110157e mov esi, esp */
  ESI = (ESP);
  /* 11101580 push eax */
  push32((uint32_t)(EAX));
  /* 11101581 push 1 */
  push32((uint32_t)(0x1u));
  /* 11101583 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101585 call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x1110158bu);
  /* 1110158b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110158e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101590 call 0x11102230 */
  push32(0x11101595u); f_11102230();
  /* 11101595 mov ecx, dword ptr [0x1112f450] */
  ECX = (r32((uint32_t)(0x1112f450)));
  /* 1110159b imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111015a1 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 111015a6 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111015a8 mov esi, esp */
  ESI = (ESP);
  /* 111015aa push edx */
  push32((uint32_t)(EDX));
  /* 111015ab push 0 */
  push32((uint32_t)(0x0u));
  /* 111015ad push 0 */
  push32((uint32_t)(0x0u));
  /* 111015af call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x111015b5u);
  /* 111015b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111015b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111015ba call 0x11102230 */
  push32(0x111015bfu); f_11102230();
  /* 111015bf mov eax, dword ptr [0x1112f450] */
  EAX = (r32((uint32_t)(0x1112f450)));
  /* 111015c4 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111015ca mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 111015cf sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111015d1 mov esi, esp */
  ESI = (ESP);
  /* 111015d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111015d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111015d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111015d8 call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x111015deu);
  /* 111015de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111015e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111015e3 call 0x11102230 */
  push32(0x111015e8u); f_11102230();
  /* 111015e8 mov edx, dword ptr [0x1112f450] */
  EDX = (r32((uint32_t)(0x1112f450)));
  /* 111015ee imul edx, edx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xbb8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111015f4 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 111015f9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111015fb mov esi, esp */
  ESI = (ESP);
  /* 111015fd push eax */
  push32((uint32_t)(EAX));
  /* 111015fe push 5 */
  push32((uint32_t)(0x5u));
  /* 11101600 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101602 call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x11101608u);
  /* 11101608 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110160b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110160d call 0x11102230 */
  push32(0x11101612u); f_11102230();
  /* 11101612 mov ecx, dword ptr [0x1112f450] */
  ECX = (r32((uint32_t)(0x1112f450)));
  /* 11101618 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110161e mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 11101623 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11101625 mov esi, esp */
  ESI = (ESP);
  /* 11101627 push edx */
  push32((uint32_t)(EDX));
  /* 11101628 push 4 */
  push32((uint32_t)(0x4u));
  /* 1110162a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110162c call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x11101632u);
  /* 11101632 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101637 call 0x11102230 */
  push32(0x1110163cu); f_11102230();
  /* 1110163c mov esi, esp */
  ESI = (ESP);
  /* 1110163e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11101643 push 3 */
  push32((uint32_t)(0x3u));
  /* 11101645 push 1 */
  push32((uint32_t)(0x1u));
  /* 11101647 call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x1110164du);
  /* 1110164d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101650 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101652 call 0x11102230 */
  push32(0x11101657u); f_11102230();
  /* 11101657 mov esi, esp */
  ESI = (ESP);
  /* 11101659 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1110165e push 1 */
  push32((uint32_t)(0x1u));
  /* 11101660 push 1 */
  push32((uint32_t)(0x1u));
  /* 11101662 call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x11101668u);
  /* 11101668 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110166b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110166d call 0x11102230 */
  push32(0x11101672u); f_11102230();
  /* 11101672 mov esi, esp */
  ESI = (ESP);
  /* 11101674 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11101679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110167b push 1 */
  push32((uint32_t)(0x1u));
  /* 1110167d call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x11101683u);
  /* 11101683 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101688 call 0x11102230 */
  push32(0x1110168du); f_11102230();
  /* 1110168d mov esi, esp */
  ESI = (ESP);
  /* 1110168f push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 11101694 push 2 */
  push32((uint32_t)(0x2u));
  /* 11101696 push 1 */
  push32((uint32_t)(0x1u));
  /* 11101698 call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x1110169eu);
  /* 1110169e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111016a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111016a3 call 0x11102230 */
  push32(0x111016a8u); f_11102230();
  /* 111016a8 mov esi, esp */
  ESI = (ESP);
  /* 111016aa push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 111016af push 5 */
  push32((uint32_t)(0x5u));
  /* 111016b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 111016b3 call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x111016b9u);
  /* 111016b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111016bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111016be call 0x11102230 */
  push32(0x111016c3u); f_11102230();
  /* 111016c3 mov esi, esp */
  ESI = (ESP);
  /* 111016c5 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 111016ca push 4 */
  push32((uint32_t)(0x4u));
  /* 111016cc push 1 */
  push32((uint32_t)(0x1u));
  /* 111016ce call dword ptr [0x11132424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132424))), 0x111016d4u);
  /* 111016d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111016d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111016d9 call 0x11102230 */
  push32(0x111016deu); f_11102230();
  /* 111016de mov esi, esp */
  ESI = (ESP);
  /* 111016e0 push 7 */
  push32((uint32_t)(0x7u));
  /* 111016e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111016e4 call dword ptr [0x11132428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132428))), 0x111016eau);
  /* 111016ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111016ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111016ef call 0x11102230 */
  push32(0x111016f4u); f_11102230();
  /* 111016f4 mov esi, esp */
  ESI = (ESP);
  /* 111016f6 mov eax, dword ptr [0x1112f450] */
  EAX = (r32((uint32_t)(0x1112f450)));
  /* 111016fb push eax */
  push32((uint32_t)(EAX));
  /* 111016fc push 0 */
  push32((uint32_t)(0x0u));
  /* 111016fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11101700 push 2 */
  push32((uint32_t)(0x2u));
  /* 11101702 push 0x1112a14c */
  push32((uint32_t)(0x1112a14cu));
  /* 11101707 push 1 */
  push32((uint32_t)(0x1u));
  /* 11101709 call dword ptr [0x1113242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113242c))), 0x1110170fu);
  /* 1110170f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101714 call 0x11102230 */
  push32(0x11101719u); f_11102230();
  /* 11101719 mov esi, esp */
  ESI = (ESP);
  /* 1110171b push 1 */
  push32((uint32_t)(0x1u));
  /* 1110171d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1110171f call dword ptr [0x11132430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132430))), 0x11101725u);
  /* 11101725 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101728 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110172a call 0x11102230 */
  push32(0x1110172fu); f_11102230();
  /* 1110172f mov esi, esp */
  ESI = (ESP);
  /* 11101731 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11101733 call dword ptr [0x11132434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132434))), 0x11101739u);
  /* 11101739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110173c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110173e call 0x11102230 */
  push32(0x11101743u); f_11102230();
  /* 11101743 cmp dword ptr [0x1112f450], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f450))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110174a jle 0x11101768 */
  if ((C.zf||C.sf!=C.of)) goto L_11101768;
  /* 1110174c mov esi, esp */
  ESI = (ESP);
  /* 1110174e push 0x1112a140 */
  push32((uint32_t)(0x1112a140u));
  /* 11101753 push 0x1112a09c */
  push32((uint32_t)(0x1112a09cu));
  /* 11101758 call dword ptr [0x11132438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132438))), 0x1110175eu);
  /* 1110175e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101763 call 0x11102230 */
  push32(0x11101768u); f_11102230();
L_11101768:;
  /* 11101768 cmp dword ptr [0x1112f450], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f450))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110176f jle 0x1110178d */
  if ((C.zf||C.sf!=C.of)) goto L_1110178d;
  /* 11101771 mov esi, esp */
  ESI = (ESP);
  /* 11101773 push 0x1112a134 */
  push32((uint32_t)(0x1112a134u));
  /* 11101778 push 0x1112a09c */
  push32((uint32_t)(0x1112a09cu));
  /* 1110177d call dword ptr [0x11132438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132438))), 0x11101783u);
  /* 11101783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101788 call 0x11102230 */
  push32(0x1110178du); f_11102230();
L_1110178d:;
  /* 1110178d cmp dword ptr [0x1112f450], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1112f450))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101794 jle 0x111017b2 */
  if ((C.zf||C.sf!=C.of)) goto L_111017b2;
  /* 11101796 mov esi, esp */
  ESI = (ESP);
  /* 11101798 push 0x1112a128 */
  push32((uint32_t)(0x1112a128u));
  /* 1110179d push 0x1112a09c */
  push32((uint32_t)(0x1112a09cu));
  /* 111017a2 call dword ptr [0x11132438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132438))), 0x111017a8u);
  /* 111017a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111017ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111017ad call 0x11102230 */
  push32(0x111017b2u); f_11102230();
L_111017b2:;
  /* 111017b2 mov esi, esp */
  ESI = (ESP);
  /* 111017b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111017b6 push 0x1112f420 */
  push32((uint32_t)(0x1112f420u));
  /* 111017bb call dword ptr [0x1113243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113243c))), 0x111017c1u);
  /* 111017c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111017c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111017c6 call 0x11102230 */
  push32(0x111017cbu); f_11102230();
  /* 111017cb mov esi, esp */
  ESI = (ESP);
  /* 111017cd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 111017d2 push 0x1112f488 */
  push32((uint32_t)(0x1112f488u));
  /* 111017d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 111017d9 call dword ptr [0x11132440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132440))), 0x111017dfu);
  /* 111017df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111017e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111017e4 call 0x11102230 */
  push32(0x111017e9u); f_11102230();
  /* 111017e9 mov esi, esp */
  ESI = (ESP);
  /* 111017eb push 0 */
  push32((uint32_t)(0x0u));
  /* 111017ed push 0x1112f428 */
  push32((uint32_t)(0x1112f428u));
  /* 111017f2 call dword ptr [0x1113243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113243c))), 0x111017f8u);
  /* 111017f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111017fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111017fd call 0x11102230 */
  push32(0x11101802u); f_11102230();
  /* 11101802 mov esi, esp */
  ESI = (ESP);
  /* 11101804 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11101809 push 0x1112f490 */
  push32((uint32_t)(0x1112f490u));
  /* 1110180e push 5 */
  push32((uint32_t)(0x5u));
  /* 11101810 call dword ptr [0x11132440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132440))), 0x11101816u);
  /* 11101816 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101819 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110181b call 0x11102230 */
  push32(0x11101820u); f_11102230();
  /* 11101820 mov esi, esp */
  ESI = (ESP);
  /* 11101822 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101824 push 0x1112f430 */
  push32((uint32_t)(0x1112f430u));
  /* 11101829 call dword ptr [0x1113243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113243c))), 0x1110182fu);
  /* 1110182f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101834 call 0x11102230 */
  push32(0x11101839u); f_11102230();
  /* 11101839 mov esi, esp */
  ESI = (ESP);
  /* 1110183b push 0 */
  push32((uint32_t)(0x0u));
  /* 1110183d push 0x1112f480 */
  push32((uint32_t)(0x1112f480u));
  /* 11101842 push 5 */
  push32((uint32_t)(0x5u));
  /* 11101844 call dword ptr [0x11132440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132440))), 0x1110184au);
  /* 1110184a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110184d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110184f call 0x11102230 */
  push32(0x11101854u); f_11102230();
  /* 11101854 mov esi, esp */
  ESI = (ESP);
  /* 11101856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101858 push 0x1112f438 */
  push32((uint32_t)(0x1112f438u));
  /* 1110185d call dword ptr [0x1113243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113243c))), 0x11101863u);
  /* 11101863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101866 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101868 call 0x11102230 */
  push32(0x1110186du); f_11102230();
  /* 1110186d mov esi, esp */
  ESI = (ESP);
  /* 1110186f push 0 */
  push32((uint32_t)(0x0u));
  /* 11101871 push 0x1112f478 */
  push32((uint32_t)(0x1112f478u));
  /* 11101876 push 5 */
  push32((uint32_t)(0x5u));
  /* 11101878 call dword ptr [0x11132440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132440))), 0x1110187eu);
  /* 1110187e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101883 call 0x11102230 */
  push32(0x11101888u); f_11102230();
  /* 11101888 mov esi, esp */
  ESI = (ESP);
  /* 1110188a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110188c push 1 */
  push32((uint32_t)(0x1u));
  /* 1110188e call dword ptr [0x11132430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132430))), 0x11101894u);
  /* 11101894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101899 call 0x11102230 */
  push32(0x1110189eu); f_11102230();
  /* 1110189e mov ecx, dword ptr [0x1112f450] */
  ECX = (r32((uint32_t)(0x1112f450)));
  /* 111018a4 imul ecx, ecx, 0x12c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x12cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111018aa mov edx, 0x3e8 */
  EDX = (0x3e8u);
  /* 111018af sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111018b1 mov esi, esp */
  ESI = (ESP);
  /* 111018b3 push edx */
  push32((uint32_t)(EDX));
  /* 111018b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111018b6 call dword ptr [0x11132444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132444))), 0x111018bcu);
  /* 111018bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111018bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111018c1 call 0x11102230 */
  push32(0x111018c6u); f_11102230();
  /* 111018c6 mov esi, esp */
  ESI = (ESP);
  /* 111018c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 111018ca push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 111018cc call dword ptr [0x11132444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132444))), 0x111018d2u);
  /* 111018d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111018d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111018d7 call 0x11102230 */
  push32(0x111018dcu); f_11102230();
L_111018dc:;
  /* 111018dc mov esi, esp */
  ESI = (ESP);
  /* 111018de push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 111018e0 call dword ptr [0x11132448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132448))), 0x111018e6u);
  /* 111018e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111018e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111018eb call 0x11102230 */
  push32(0x111018f0u); f_11102230();
  /* 111018f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111018f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111018f7 je 0x11101910 */
  if (C.zf) goto L_11101910;
  /* 111018f9 mov esi, esp */
  ESI = (ESP);
  /* 111018fb push 0x1112a120 */
  push32((uint32_t)(0x1112a120u));
  /* 11101900 call dword ptr [0x1113244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113244c))), 0x11101906u);
  /* 11101906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101909 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110190b call 0x11102230 */
  push32(0x11101910u); f_11102230();
L_11101910:;
  /* 11101910 mov esi, esp */
  ESI = (ESP);
  /* 11101912 push 1 */
  push32((uint32_t)(0x1u));
  /* 11101914 call dword ptr [0x11132448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132448))), 0x1110191au);
  /* 1110191a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110191d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110191f call 0x11102230 */
  push32(0x11101924u); f_11102230();
  /* 11101924 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11101929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110192b je 0x11101961 */
  if (C.zf) goto L_11101961;
  /* 1110192d mov esi, esp */
  ESI = (ESP);
  /* 1110192f push 0 */
  push32((uint32_t)(0x0u));
  /* 11101931 push 0x1112f440 */
  push32((uint32_t)(0x1112f440u));
  /* 11101936 call dword ptr [0x1113243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113243c))), 0x1110193cu);
  /* 1110193c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110193f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101941 call 0x11102230 */
  push32(0x11101946u); f_11102230();
  /* 11101946 mov esi, esp */
  ESI = (ESP);
  /* 11101948 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110194a push 0x1112f4a0 */
  push32((uint32_t)(0x1112f4a0u));
  /* 1110194f push 5 */
  push32((uint32_t)(0x5u));
  /* 11101951 call dword ptr [0x11132440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132440))), 0x11101957u);
  /* 11101957 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110195a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110195c call 0x11102230 */
  push32(0x11101961u); f_11102230();
L_11101961:;
  /* 11101961 mov esi, esp */
  ESI = (ESP);
  /* 11101963 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101965 push 0x1112f3f8 */
  push32((uint32_t)(0x1112f3f8u));
  /* 1110196a call dword ptr [0x11132450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132450))), 0x11101970u);
  /* 11101970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101975 call 0x11102230 */
  push32(0x1110197au); f_11102230();
  /* 1110197a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110197c jle 0x11101ba0 */
  if ((C.zf||C.sf!=C.of)) goto L_11101ba0;
  /* 11101982 mov esi, esp */
  ESI = (ESP);
  /* 11101984 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11101986 call dword ptr [0x1113241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113241c))), 0x1110198cu);
  /* 1110198c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110198f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101991 call 0x11102230 */
  push32(0x11101996u); f_11102230();
  /* 11101996 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110199b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110199d je 0x11101ba0 */
  if (C.zf) goto L_11101ba0;
  /* 111019a3 mov esi, esp */
  ESI = (ESP);
  /* 111019a5 push 0x1112a108 */
  push32((uint32_t)(0x1112a108u));
  /* 111019aa push 0 */
  push32((uint32_t)(0x0u));
  /* 111019ac push 0x1112a100 */
  push32((uint32_t)(0x1112a100u));
  /* 111019b1 push 7 */
  push32((uint32_t)(0x7u));
  /* 111019b3 call dword ptr [0x11132454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132454))), 0x111019b9u);
  /* 111019b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111019bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111019be call 0x11102230 */
  push32(0x111019c3u); f_11102230();
  /* 111019c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111019c6 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111019ca je 0x111019e5 */
  if (C.zf) goto L_111019e5;
  /* 111019cc cmp dword ptr [ebp - 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111019d0 je 0x11101ab9 */
  if (C.zf) goto L_11101ab9;
  /* 111019d6 cmp dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111019da je 0x11101b8a */
  if (C.zf) goto L_11101b8a;
  /* 111019e0 jmp 0x11101ba0 */
  goto L_11101ba0;
L_111019e5:;
  /* 111019e5 mov esi, esp */
  ESI = (ESP);
  /* 111019e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 111019e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111019eb call dword ptr [0x11132458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132458))), 0x111019f1u);
  /* 111019f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111019f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111019f6 call 0x11102230 */
  push32(0x111019fbu); f_11102230();
  /* 111019fb cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101a00 jl 0x11101a9d */
  if ((C.sf!=C.of)) goto L_11101a9d;
  /* 11101a06 mov esi, esp */
  ESI = (ESP);
  /* 11101a08 push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 11101a0d push 4 */
  push32((uint32_t)(0x4u));
  /* 11101a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11101a11 call dword ptr [0x1113245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113245c))), 0x11101a17u);
  /* 11101a17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101a1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101a1c call 0x11102230 */
  push32(0x11101a21u); f_11102230();
  /* 11101a21 mov esi, esp */
  ESI = (ESP);
  /* 11101a23 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 11101a25 push 0x1112f400 */
  push32((uint32_t)(0x1112f400u));
  /* 11101a2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11101a2c push 0x1112f418 */
  push32((uint32_t)(0x1112f418u));
  /* 11101a31 push 0x1112f410 */
  push32((uint32_t)(0x1112f410u));
  /* 11101a36 push 0x1112f3f0 */
  push32((uint32_t)(0x1112f3f0u));
  /* 11101a3b call dword ptr [0x11132460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132460))), 0x11101a41u);
  /* 11101a41 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101a44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101a46 call 0x11102230 */
  push32(0x11101a4bu); f_11102230();
  /* 11101a4b mov esi, esp */
  ESI = (ESP);
  /* 11101a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11101a4f push 0x1112f3f0 */
  push32((uint32_t)(0x1112f3f0u));
  /* 11101a54 call dword ptr [0x1113243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113243c))), 0x11101a5au);
  /* 11101a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101a5f call 0x11102230 */
  push32(0x11101a64u); f_11102230();
  /* 11101a64 mov esi, esp */
  ESI = (ESP);
  /* 11101a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101a68 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11101a6d push 0x1112f3f8 */
  push32((uint32_t)(0x1112f3f8u));
  /* 11101a72 push 2 */
  push32((uint32_t)(0x2u));
  /* 11101a74 call dword ptr [0x11132464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132464))), 0x11101a7au);
  /* 11101a7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101a7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101a7f call 0x11102230 */
  push32(0x11101a84u); f_11102230();
  /* 11101a84 mov esi, esp */
  ESI = (ESP);
  /* 11101a86 push 0x1112a0f8 */
  push32((uint32_t)(0x1112a0f8u));
  /* 11101a8b call dword ptr [0x1113244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113244c))), 0x11101a91u);
  /* 11101a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101a96 call 0x11102230 */
  push32(0x11101a9bu); f_11102230();
  /* 11101a9b jmp 0x11101ab4 */
  goto L_11101ab4;
L_11101a9d:;
  /* 11101a9d mov esi, esp */
  ESI = (ESP);
  /* 11101a9f push 0x1112a0f0 */
  push32((uint32_t)(0x1112a0f0u));
  /* 11101aa4 call dword ptr [0x1113244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113244c))), 0x11101aaau);
  /* 11101aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101aad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101aaf call 0x11102230 */
  push32(0x11101ab4u); f_11102230();
L_11101ab4:;
  /* 11101ab4 jmp 0x11101ba0 */
  goto L_11101ba0;
L_11101ab9:;
  /* 11101ab9 mov esi, esp */
  ESI = (ESP);
  /* 11101abb push 4 */
  push32((uint32_t)(0x4u));
  /* 11101abd push 0 */
  push32((uint32_t)(0x0u));
  /* 11101abf call dword ptr [0x11132458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132458))), 0x11101ac5u);
  /* 11101ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101ac8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101aca call 0x11102230 */
  push32(0x11101acfu); f_11102230();
  /* 11101acf cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101ad4 jl 0x11101b71 */
  if ((C.sf!=C.of)) goto L_11101b71;
  /* 11101ada mov esi, esp */
  ESI = (ESP);
  /* 11101adc push 0xffffe890 */
  push32((uint32_t)(0xffffe890u));
  /* 11101ae1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11101ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101ae5 call dword ptr [0x1113245c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113245c))), 0x11101aebu);
  /* 11101aeb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101aee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101af0 call 0x11102230 */
  push32(0x11101af5u); f_11102230();
  /* 11101af5 mov esi, esp */
  ESI = (ESP);
  /* 11101af7 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 11101af9 push 0x1112f400 */
  push32((uint32_t)(0x1112f400u));
  /* 11101afe push 2 */
  push32((uint32_t)(0x2u));
  /* 11101b00 push 0x1112f460 */
  push32((uint32_t)(0x1112f460u));
  /* 11101b05 push 0x1112f410 */
  push32((uint32_t)(0x1112f410u));
  /* 11101b0a push 0x1112f3f0 */
  push32((uint32_t)(0x1112f3f0u));
  /* 11101b0f call dword ptr [0x11132460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132460))), 0x11101b15u);
  /* 11101b15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101b18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101b1a call 0x11102230 */
  push32(0x11101b1fu); f_11102230();
  /* 11101b1f mov esi, esp */
  ESI = (ESP);
  /* 11101b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101b23 push 0x1112f3f0 */
  push32((uint32_t)(0x1112f3f0u));
  /* 11101b28 call dword ptr [0x1113243c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113243c))), 0x11101b2eu);
  /* 11101b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101b31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101b33 call 0x11102230 */
  push32(0x11101b38u); f_11102230();
  /* 11101b38 mov esi, esp */
  ESI = (ESP);
  /* 11101b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11101b3c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11101b41 push 0x1112f3f8 */
  push32((uint32_t)(0x1112f3f8u));
  /* 11101b46 push 2 */
  push32((uint32_t)(0x2u));
  /* 11101b48 call dword ptr [0x11132464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132464))), 0x11101b4eu);
  /* 11101b4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101b51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101b53 call 0x11102230 */
  push32(0x11101b58u); f_11102230();
  /* 11101b58 mov esi, esp */
  ESI = (ESP);
  /* 11101b5a push 0x1112a0f8 */
  push32((uint32_t)(0x1112a0f8u));
  /* 11101b5f call dword ptr [0x1113244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113244c))), 0x11101b65u);
  /* 11101b65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101b68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101b6a call 0x11102230 */
  push32(0x11101b6fu); f_11102230();
  /* 11101b6f jmp 0x11101b88 */
  goto L_11101b88;
L_11101b71:;
  /* 11101b71 mov esi, esp */
  ESI = (ESP);
  /* 11101b73 push 0x1112a0f0 */
  push32((uint32_t)(0x1112a0f0u));
  /* 11101b78 call dword ptr [0x1113244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113244c))), 0x11101b7eu);
  /* 11101b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101b81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101b83 call 0x11102230 */
  push32(0x11101b88u); f_11102230();
L_11101b88:;
  /* 11101b88 jmp 0x11101ba0 */
  goto L_11101ba0;
L_11101b8a:;
  /* 11101b8a mov esi, esp */
  ESI = (ESP);
  /* 11101b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11101b8e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11101b90 call dword ptr [0x11132430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132430))), 0x11101b96u);
  /* 11101b96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101b99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101b9b call 0x11102230 */
  push32(0x11101ba0u); f_11102230();
L_11101ba0:;
  /* 11101ba0 mov esi, esp */
  ESI = (ESP);
  /* 11101ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101ba4 push 0x1112f3f8 */
  push32((uint32_t)(0x1112f3f8u));
  /* 11101ba9 call dword ptr [0x11132450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132450))), 0x11101bafu);
  /* 11101baf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101bb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101bb4 call 0x11102230 */
  push32(0x11101bb9u); f_11102230();
  /* 11101bb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101bbb jne 0x11101bf0 */
  if (!C.zf) goto L_11101bf0;
  /* 11101bbd mov esi, esp */
  ESI = (ESP);
  /* 11101bbf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11101bc1 call dword ptr [0x1113241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113241c))), 0x11101bc7u);
  /* 11101bc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101bca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101bcc call 0x11102230 */
  push32(0x11101bd1u); f_11102230();
  /* 11101bd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11101bd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101bd8 jne 0x11101bf0 */
  if (!C.zf) goto L_11101bf0;
  /* 11101bda mov esi, esp */
  ESI = (ESP);
  /* 11101bdc push 1 */
  push32((uint32_t)(0x1u));
  /* 11101bde push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11101be0 call dword ptr [0x11132430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132430))), 0x11101be6u);
  /* 11101be6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101be9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101beb call 0x11102230 */
  push32(0x11101bf0u); f_11102230();
L_11101bf0:;
  /* 11101bf0 mov esi, esp */
  ESI = (ESP);
  /* 11101bf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11101bf4 push 0x1112f408 */
  push32((uint32_t)(0x1112f408u));
  /* 11101bf9 call dword ptr [0x11132450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132450))), 0x11101bffu);
  /* 11101bff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101c02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101c04 call 0x11102230 */
  push32(0x11101c09u); f_11102230();
  /* 11101c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101c0b jle 0x11101c3e */
  if ((C.zf||C.sf!=C.of)) goto L_11101c3e;
  /* 11101c0d mov esi, esp */
  ESI = (ESP);
  /* 11101c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11101c11 push 2 */
  push32((uint32_t)(0x2u));
  /* 11101c13 push 0x1112f408 */
  push32((uint32_t)(0x1112f408u));
  /* 11101c18 call dword ptr [0x11132468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132468))), 0x11101c1eu);
  /* 11101c1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101c21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101c23 call 0x11102230 */
  push32(0x11101c28u); f_11102230();
  /* 11101c28 mov esi, esp */
  ESI = (ESP);
  /* 11101c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11101c2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11101c2e call dword ptr [0x1113246c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113246c))), 0x11101c34u);
  /* 11101c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101c37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101c39 call 0x11102230 */
  push32(0x11101c3eu); f_11102230();
L_11101c3e:;
  /* 11101c3e mov esi, esp */
  ESI = (ESP);
  /* 11101c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11101c42 call dword ptr [0x11132470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132470))), 0x11101c48u);
  /* 11101c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101c4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101c4d call 0x11102230 */
  push32(0x11101c52u); f_11102230();
  /* 11101c52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11101c57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101c59 je 0x11101c81 */
  if (C.zf) goto L_11101c81;
  /* 11101c5b mov esi, esp */
  ESI = (ESP);
  /* 11101c5d push 0x1112a0e8 */
  push32((uint32_t)(0x1112a0e8u));
  /* 11101c62 call dword ptr [0x1113244c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113244c))), 0x11101c68u);
  /* 11101c68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101c6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101c6d call 0x11102230 */
  push32(0x11101c72u); f_11102230();
  /* 11101c72 mov esi, esp */
  ESI = (ESP);
  /* 11101c74 call dword ptr [0x11132474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132474))), 0x11101c7au);
  /* 11101c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101c7c call 0x11102230 */
  push32(0x11101c81u); f_11102230();
L_11101c81:;
  /* 11101c81 mov esi, esp */
  ESI = (ESP);
  /* 11101c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101c85 call dword ptr [0x11132470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132470))), 0x11101c8bu);
  /* 11101c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101c8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101c90 call 0x11102230 */
  push32(0x11101c95u); f_11102230();
  /* 11101c95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11101c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101c9c je 0x11101cad */
  if (C.zf) goto L_11101cad;
  /* 11101c9e mov esi, esp */
  ESI = (ESP);
  /* 11101ca0 call dword ptr [0x11132478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132478))), 0x11101ca6u);
  /* 11101ca6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101ca8 call 0x11102230 */
  push32(0x11101cadu); f_11102230();
L_11101cad:;
  /* 11101cad mov esi, esp */
  ESI = (ESP);
  /* 11101caf push 0x1112f420 */
  push32((uint32_t)(0x1112f420u));
  /* 11101cb4 call dword ptr [0x1113247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113247c))), 0x11101cbau);
  /* 11101cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101cbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101cbf call 0x11102230 */
  push32(0x11101cc4u); f_11102230();
  /* 11101cc4 mov esi, eax */
  ESI = (EAX);
  /* 11101cc6 mov edi, esp */
  EDI = (ESP);
  /* 11101cc8 push 0x1112f428 */
  push32((uint32_t)(0x1112f428u));
  /* 11101ccd call dword ptr [0x1113247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113247c))), 0x11101cd3u);
  /* 11101cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101cd6 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101cd8 call 0x11102230 */
  push32(0x11101cddu); f_11102230();
  /* 11101cdd add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11101cdf mov edi, esp */
  EDI = (ESP);
  /* 11101ce1 push 0x1112f430 */
  push32((uint32_t)(0x1112f430u));
  /* 11101ce6 call dword ptr [0x1113247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113247c))), 0x11101cecu);
  /* 11101cec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101cef cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101cf1 call 0x11102230 */
  push32(0x11101cf6u); f_11102230();
  /* 11101cf6 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11101cf8 mov edi, esp */
  EDI = (ESP);
  /* 11101cfa push 0x1112f438 */
  push32((uint32_t)(0x1112f438u));
  /* 11101cff call dword ptr [0x1113247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113247c))), 0x11101d05u);
  /* 11101d05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101d08 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101d0a call 0x11102230 */
  push32(0x11101d0fu); f_11102230();
  /* 11101d0f add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11101d11 mov edi, esp */
  EDI = (ESP);
  /* 11101d13 push 0x1112f440 */
  push32((uint32_t)(0x1112f440u));
  /* 11101d18 call dword ptr [0x1113247c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113247c))), 0x11101d1eu);
  /* 11101d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101d21 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101d23 call 0x11102230 */
  push32(0x11101d28u); f_11102230();
  /* 11101d28 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11101d2a cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101d2d jge 0x11101d57 */
  if ((C.sf==C.of)) goto L_11101d57;
  /* 11101d2f mov esi, esp */
  ESI = (ESP);
  /* 11101d31 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11101d33 call dword ptr [0x11132434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132434))), 0x11101d39u);
  /* 11101d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101d3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101d3e call 0x11102230 */
  push32(0x11101d43u); f_11102230();
  /* 11101d43 mov esi, esp */
  ESI = (ESP);
  /* 11101d45 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11101d47 call dword ptr [0x11132480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132480))), 0x11101d4du);
  /* 11101d4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101d50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101d52 call 0x11102230 */
  push32(0x11101d57u); f_11102230();
L_11101d57:;
  /* 11101d57 mov esi, esp */
  ESI = (ESP);
  /* 11101d59 push 5 */
  push32((uint32_t)(0x5u));
  /* 11101d5b push 0x1112f4a0 */
  push32((uint32_t)(0x1112f4a0u));
  /* 11101d60 call dword ptr [0x11132450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132450))), 0x11101d66u);
  /* 11101d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101d69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101d6b call 0x11102230 */
  push32(0x11101d70u); f_11102230();
  /* 11101d70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101d72 jle 0x11101e41 */
  if ((C.zf||C.sf!=C.of)) goto L_11101e41;
  /* 11101d78 mov esi, esp */
  ESI = (ESP);
  /* 11101d7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11101d7c call dword ptr [0x1113241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113241c))), 0x11101d82u);
  /* 11101d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101d87 call 0x11102230 */
  push32(0x11101d8cu); f_11102230();
  /* 11101d8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11101d91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101d93 je 0x11101e41 */
  if (C.zf) goto L_11101e41;
  /* 11101d99 mov esi, esp */
  ESI = (ESP);
  /* 11101d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11101d9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11101d9f call dword ptr [0x11132430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132430))), 0x11101da5u);
  /* 11101da5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101da8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101daa call 0x11102230 */
  push32(0x11101dafu); f_11102230();
  /* 11101daf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11101db6 jmp 0x11101dc1 */
  goto L_11101dc1;
L_11101db8:;
  /* 11101db8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11101dbb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11101dbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11101dc1:;
  /* 11101dc1 mov ecx, dword ptr [0x1112f4c4] */
  ECX = (r32((uint32_t)(0x1112f4c4)));
  /* 11101dc7 mov edx, dword ptr [0x1112f450] */
  EDX = (r32((uint32_t)(0x1112f450)));
  /* 11101dcd lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11101dd1 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101dd4 jge 0x11101e32 */
  if ((C.sf==C.of)) goto L_11101e32;
  /* 11101dd6 mov esi, esp */
  ESI = (ESP);
  /* 11101dd8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11101ddd push 0x1112f4a8 */
  push32((uint32_t)(0x1112f4a8u));
  /* 11101de2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11101de4 push 0x1112f458 */
  push32((uint32_t)(0x1112f458u));
  /* 11101de9 push 0x1112f470 */
  push32((uint32_t)(0x1112f470u));
  /* 11101dee push 0x1112f3f0 */
  push32((uint32_t)(0x1112f3f0u));
  /* 11101df3 call dword ptr [0x11132460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132460))), 0x11101df9u);
  /* 11101df9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101dfe call 0x11102230 */
  push32(0x11101e03u); f_11102230();
  /* 11101e03 mov esi, esp */
  ESI = (ESP);
  /* 11101e05 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11101e0a push 0x1112f4a8 */
  push32((uint32_t)(0x1112f4a8u));
  /* 11101e0f push 5 */
  push32((uint32_t)(0x5u));
  /* 11101e11 push 0x1112f468 */
  push32((uint32_t)(0x1112f468u));
  /* 11101e16 push 0x1112f470 */
  push32((uint32_t)(0x1112f470u));
  /* 11101e1b push 0x1112f3f0 */
  push32((uint32_t)(0x1112f3f0u));
  /* 11101e20 call dword ptr [0x11132460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132460))), 0x11101e26u);
  /* 11101e26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101e29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101e2b call 0x11102230 */
  push32(0x11101e30u); f_11102230();
  /* 11101e30 jmp 0x11101db8 */
  goto L_11101db8;
L_11101e32:;
  /* 11101e32 mov ecx, dword ptr [0x1112f4c4] */
  ECX = (r32((uint32_t)(0x1112f4c4)));
  /* 11101e38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11101e3b mov dword ptr [0x1112f4c4], ecx */
  w32((uint32_t)(0x1112f4c4), (ECX));
L_11101e41:;
  /* 11101e41 mov esi, esp */
  ESI = (ESP);
  /* 11101e43 push 5 */
  push32((uint32_t)(0x5u));
  /* 11101e45 push 0x1112f4a0 */
  push32((uint32_t)(0x1112f4a0u));
  /* 11101e4a call dword ptr [0x11132450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132450))), 0x11101e50u);
  /* 11101e50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101e53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101e55 call 0x11102230 */
  push32(0x11101e5au); f_11102230();
  /* 11101e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101e5c jne 0x11101ecc */
  if (!C.zf) goto L_11101ecc;
  /* 11101e5e mov esi, esp */
  ESI = (ESP);
  /* 11101e60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11101e62 call dword ptr [0x1113241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113241c))), 0x11101e68u);
  /* 11101e68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101e6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101e6d call 0x11102230 */
  push32(0x11101e72u); f_11102230();
  /* 11101e72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11101e77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11101e79 jne 0x11101ecc */
  if (!C.zf) goto L_11101ecc;
  /* 11101e7b mov esi, esp */
  ESI = (ESP);
  /* 11101e7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11101e7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11101e81 call dword ptr [0x11132430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132430))), 0x11101e87u);
  /* 11101e87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101e8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101e8c call 0x11102230 */
  push32(0x11101e91u); f_11102230();
  /* 11101e91 mov esi, esp */
  ESI = (ESP);
  /* 11101e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11101e95 push 5 */
  push32((uint32_t)(0x5u));
  /* 11101e97 push 0x1112f4a8 */
  push32((uint32_t)(0x1112f4a8u));
  /* 11101e9c call dword ptr [0x11132468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132468))), 0x11101ea2u);
  /* 11101ea2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101ea5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101ea7 call 0x11102230 */
  push32(0x11101eacu); f_11102230();
  /* 11101eac mov esi, esp */
  ESI = (ESP);
  /* 11101eae push 0 */
  push32((uint32_t)(0x0u));
  /* 11101eb0 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11101eb5 push 0x1112f4b0 */
  push32((uint32_t)(0x1112f4b0u));
  /* 11101eba push 5 */
  push32((uint32_t)(0x5u));
  /* 11101ebc call dword ptr [0x11132484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132484))), 0x11101ec2u);
  /* 11101ec2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101ec5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101ec7 call 0x11102230 */
  push32(0x11101eccu); f_11102230();
L_11101ecc:;
  /* 11101ecc pop edi */
  EDI = (pop32());
  /* 11101ecd pop esi */
  ESI = (pop32());
  /* 11101ece pop ebx */
  EBX = (pop32());
  /* 11101ecf add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11101ed2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11101ed4 call 0x11102230 */
  push32(0x11101ed9u); f_11102230();
  /* 11101ed9 mov esp, ebp */
  ESP = (EBP);
  /* 11101edb pop ebp */
  EBP = (pop32());
  /* 11101edc ret  */
  ESPCHK(0x111014f0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11102230 (56 bytes, 28 insns) */
void f_11102230(void) {
  FTRACE(0x11102230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102230 jne 0x11102233 */
  if (!C.zf) goto L_11102233;
  /* 11102232 ret  */
  ESPCHK(0x11102230u, _esp0);
  ESP += 4; return;
L_11102233:;
  /* 11102233 push ebp */
  push32((uint32_t)(EBP));
  /* 11102234 mov ebp, esp */
  EBP = (ESP);
  /* 11102236 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11102239 push eax */
  push32((uint32_t)(EAX));
  /* 1110223a push edx */
  push32((uint32_t)(EDX));
  /* 1110223b push ebx */
  push32((uint32_t)(EBX));
  /* 1110223c push esi */
  push32((uint32_t)(ESI));
  /* 1110223d push edi */
  push32((uint32_t)(EDI));
  /* 1110223e push 0x1112a16c */
  push32((uint32_t)(0x1112a16cu));
  /* 11102243 push 0x1112a168 */
  push32((uint32_t)(0x1112a168u));
  /* 11102248 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1110224a push 0x1112a158 */
  push32((uint32_t)(0x1112a158u));
  /* 1110224f push 1 */
  push32((uint32_t)(0x1u));
  /* 11102251 call 0x11102600 */
  push32(0x11102256u); f_11102600();
  /* 11102256 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102259 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110225c jne 0x1110225f */
  if (!C.zf) goto L_1110225f;
  /* 1110225e int3  */
  x86_unimpl("int3 @ 0x1110225e");
L_1110225f:;
  /* 1110225f pop edi */
  EDI = (pop32());
  /* 11102260 pop esi */
  ESI = (pop32());
  /* 11102261 pop ebx */
  EBX = (pop32());
  /* 11102262 pop edx */
  EDX = (pop32());
  /* 11102263 pop eax */
  EAX = (pop32());
  /* 11102264 mov esp, ebp */
  ESP = (EBP);
  /* 11102266 pop ebp */
  EBP = (pop32());
  /* 11102267 ret  */
  ESPCHK(0x11102230u, _esp0);
  ESP += 4; return;
}

/* FUN_10002270 @ 0x11102270 (313 bytes, 78 insns) */
void f_11102270(void) {
  FTRACE(0x11102270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102270 push ebp */
  push32((uint32_t)(EBP));
  /* 11102271 mov ebp, esp */
  EBP = (ESP);
  /* 11102273 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102277 jne 0x11102337 */
  if (!C.zf) goto L_11102337;
  /* 1110227d call dword ptr [0x1113232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113232c))), 0x11102283u);
  /* 11102283 mov dword ptr [0x1112f514], eax */
  w32((uint32_t)(0x1112f514), (EAX));
  /* 11102288 push 1 */
  push32((uint32_t)(0x1u));
  /* 1110228a call 0x11105d30 */
  push32(0x1110228fu); f_11105d30();
  /* 1110228f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11102294 jne 0x1110229d */
  if (!C.zf) goto L_1110229d;
  /* 11102296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11102298 jmp 0x111023a5 */
  goto L_111023a5;
L_1110229d:;
  /* 1110229d mov eax, dword ptr [0x1112f514] */
  EAX = (r32((uint32_t)(0x1112f514)));
  /* 111022a2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111022a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111022aa mov dword ptr [0x1112f520], eax */
  w32((uint32_t)(0x1112f520), (EAX));
  /* 111022af mov ecx, dword ptr [0x1112f514] */
  ECX = (r32((uint32_t)(0x1112f514)));
  /* 111022b5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111022bb mov dword ptr [0x1112f51c], ecx */
  w32((uint32_t)(0x1112f51c), (ECX));
  /* 111022c1 mov edx, dword ptr [0x1112f51c] */
  EDX = (r32((uint32_t)(0x1112f51c)));
  /* 111022c7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 111022ca add edx, dword ptr [0x1112f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1112f520))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111022d0 mov dword ptr [0x1112f518], edx */
  w32((uint32_t)(0x1112f518), (EDX));
  /* 111022d6 mov eax, dword ptr [0x1112f514] */
  EAX = (r32((uint32_t)(0x1112f514)));
  /* 111022db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111022de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111022e3 mov dword ptr [0x1112f514], eax */
  w32((uint32_t)(0x1112f514), (EAX));
  /* 111022e8 call 0x11102ea0 */
  push32(0x111022edu); f_11102ea0();
  /* 111022ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111022ef jne 0x111022fd */
  if (!C.zf) goto L_111022fd;
  /* 111022f1 call 0x11105d80 */
  push32(0x111022f6u); f_11105d80();
  /* 111022f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111022f8 jmp 0x111023a5 */
  goto L_111023a5;
L_111022fd:;
  /* 111022fd call dword ptr [0x11132328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132328))), 0x11102303u);
  /* 11102303 mov dword ptr [0x1113104c], eax */
  w32((uint32_t)(0x1113104c), (EAX));
  /* 11102308 call 0x11105b10 */
  push32(0x1110230du); f_11105b10();
  /* 1110230d mov dword ptr [0x1112f4fc], eax */
  w32((uint32_t)(0x1112f4fc), (EAX));
  /* 11102312 call 0x11103150 */
  push32(0x11102317u); f_11103150();
  /* 11102317 call 0x11105600 */
  push32(0x1110231cu); f_11105600();
  /* 1110231c call 0x111054b0 */
  push32(0x11102321u); f_111054b0();
  /* 11102321 call 0x11102ca0 */
  push32(0x11102326u); f_11102ca0();
  /* 11102326 mov ecx, dword ptr [0x1112f4f8] */
  ECX = (r32((uint32_t)(0x1112f4f8)));
  /* 1110232c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110232f mov dword ptr [0x1112f4f8], ecx */
  w32((uint32_t)(0x1112f4f8), (ECX));
  /* 11102335 jmp 0x111023a0 */
  goto L_111023a0;
L_11102337:;
  /* 11102337 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110233b jne 0x11102390 */
  if (!C.zf) goto L_11102390;
  /* 1110233d cmp dword ptr [0x1112f4f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f4f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102344 jle 0x1110238a */
  if ((C.zf||C.sf!=C.of)) goto L_1110238a;
  /* 11102346 mov edx, dword ptr [0x1112f4f8] */
  EDX = (r32((uint32_t)(0x1112f4f8)));
  /* 1110234c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110234f mov dword ptr [0x1112f4f8], edx */
  w32((uint32_t)(0x1112f4f8), (EDX));
  /* 11102355 cmp dword ptr [0x1112f54c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f54c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110235c jne 0x11102363 */
  if (!C.zf) goto L_11102363;
  /* 1110235e call 0x11102d20 */
  push32(0x11102363u); f_11102d20();
L_11102363:;
  /* 11102363 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11102365 call 0x11104a50 */
  push32(0x1110236au); f_11104a50();
  /* 1110236a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110236d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11102370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11102372 je 0x11102379 */
  if (C.zf) goto L_11102379;
  /* 11102374 call 0x11105360 */
  push32(0x11102379u); f_11105360();
L_11102379:;
  /* 11102379 call 0x11103480 */
  push32(0x1110237eu); f_11103480();
  /* 1110237e call 0x11102f30 */
  push32(0x11102383u); f_11102f30();
  /* 11102383 call 0x11105d80 */
  push32(0x11102388u); f_11105d80();
  /* 11102388 jmp 0x1110238e */
  goto L_1110238e;
L_1110238a:;
  /* 1110238a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110238c jmp 0x111023a5 */
  goto L_111023a5;
L_1110238e:;
  /* 1110238e jmp 0x111023a0 */
  goto L_111023a0;
L_11102390:;
  /* 11102390 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102394 jne 0x111023a0 */
  if (!C.zf) goto L_111023a0;
  /* 11102396 push 0 */
  push32((uint32_t)(0x0u));
  /* 11102398 call 0x11103020 */
  push32(0x1110239du); f_11103020();
  /* 1110239d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111023a0:;
  /* 111023a0 mov eax, 1 */
  EAX = (0x1u);
L_111023a5:;
  /* 111023a5 pop ebp */
  EBP = (pop32());
  /* 111023a6 ret 0xc */
  ESPCHK(0x11102270u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x111023b0 (243 bytes, 86 insns) */
void f_111023b0(void) {
  FTRACE(0x111023b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111023b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111023b1 mov ebp, esp */
  EBP = (ESP);
  /* 111023b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111023b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111023bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111023bf jne 0x111023d1 */
  if (!C.zf) goto L_111023d1;
  /* 111023c1 cmp dword ptr [0x1112f4f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f4f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111023c8 jne 0x111023d1 */
  if (!C.zf) goto L_111023d1;
  /* 111023ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111023cc jmp 0x1110249d */
  goto L_1110249d;
L_111023d1:;
  /* 111023d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111023d5 je 0x111023dd */
  if (C.zf) goto L_111023dd;
  /* 111023d7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111023db jne 0x1110241f */
  if (!C.zf) goto L_1110241f;
L_111023dd:;
  /* 111023dd cmp dword ptr [0x1113105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1113105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111023e4 je 0x111023fb */
  if (C.zf) goto L_111023fb;
  /* 111023e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111023e9 push eax */
  push32((uint32_t)(EAX));
  /* 111023ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111023ed push ecx */
  push32((uint32_t)(ECX));
  /* 111023ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111023f1 push edx */
  push32((uint32_t)(EDX));
  /* 111023f2 call dword ptr [0x1113105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113105c))), 0x111023f8u);
  /* 111023f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111023fb:;
  /* 111023fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111023ff je 0x11102415 */
  if (C.zf) goto L_11102415;
  /* 11102401 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11102404 push eax */
  push32((uint32_t)(EAX));
  /* 11102405 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11102408 push ecx */
  push32((uint32_t)(ECX));
  /* 11102409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110240c push edx */
  push32((uint32_t)(EDX));
  /* 1110240d call 0x11102270 */
  push32(0x11102412u); f_11102270();
  /* 11102412 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11102415:;
  /* 11102415 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102419 jne 0x1110241f */
  if (!C.zf) goto L_1110241f;
  /* 1110241b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110241d jmp 0x1110249d */
  goto L_1110249d;
L_1110241f:;
  /* 1110241f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11102422 push eax */
  push32((uint32_t)(EAX));
  /* 11102423 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11102426 push ecx */
  push32((uint32_t)(ECX));
  /* 11102427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110242a push edx */
  push32((uint32_t)(EDX));
  /* 1110242b call 0x1110100a */
  push32(0x11102430u); f_1110100a();
  /* 11102430 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11102433 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102437 jne 0x1110244e */
  if (!C.zf) goto L_1110244e;
  /* 11102439 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110243d jne 0x1110244e */
  if (!C.zf) goto L_1110244e;
  /* 1110243f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11102442 push eax */
  push32((uint32_t)(EAX));
  /* 11102443 push 0 */
  push32((uint32_t)(0x0u));
  /* 11102445 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102448 push ecx */
  push32((uint32_t)(ECX));
  /* 11102449 call 0x11102270 */
  push32(0x1110244eu); f_11102270();
L_1110244e:;
  /* 1110244e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102452 je 0x1110245a */
  if (C.zf) goto L_1110245a;
  /* 11102454 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102458 jne 0x1110249a */
  if (!C.zf) goto L_1110249a;
L_1110245a:;
  /* 1110245a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110245d push edx */
  push32((uint32_t)(EDX));
  /* 1110245e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11102461 push eax */
  push32((uint32_t)(EAX));
  /* 11102462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102465 push ecx */
  push32((uint32_t)(ECX));
  /* 11102466 call 0x11102270 */
  push32(0x1110246bu); f_11102270();
  /* 1110246b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110246d jne 0x11102476 */
  if (!C.zf) goto L_11102476;
  /* 1110246f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11102476:;
  /* 11102476 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110247a je 0x1110249a */
  if (C.zf) goto L_1110249a;
  /* 1110247c cmp dword ptr [0x1113105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1113105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102483 je 0x1110249a */
  if (C.zf) goto L_1110249a;
  /* 11102485 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11102488 push edx */
  push32((uint32_t)(EDX));
  /* 11102489 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110248c push eax */
  push32((uint32_t)(EAX));
  /* 1110248d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102490 push ecx */
  push32((uint32_t)(ECX));
  /* 11102491 call dword ptr [0x1113105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113105c))), 0x11102497u);
  /* 11102497 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110249a:;
  /* 1110249a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1110249d:;
  /* 1110249d mov esp, ebp */
  ESP = (EBP);
  /* 1110249f pop ebp */
  EBP = (pop32());
  /* 111024a0 ret 0xc */
  ESPCHK(0x111023b0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x111024b0 (58 bytes, 18 insns) */
void f_111024b0(void) {
  FTRACE(0x111024b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111024b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111024b1 mov ebp, esp */
  EBP = (ESP);
  /* 111024b3 cmp dword ptr [0x1112f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111024ba je 0x111024ce */
  if (C.zf) goto L_111024ce;
  /* 111024bc cmp dword ptr [0x1112f504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111024c3 jne 0x111024d3 */
  if (!C.zf) goto L_111024d3;
  /* 111024c5 cmp dword ptr [0x1112f508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111024cc jne 0x111024d3 */
  if (!C.zf) goto L_111024d3;
L_111024ce:;
  /* 111024ce call 0x11105e20 */
  push32(0x111024d3u); f_11105e20();
L_111024d3:;
  /* 111024d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111024d6 push eax */
  push32((uint32_t)(EAX));
  /* 111024d7 call 0x11105e70 */
  push32(0x111024dcu); f_11105e70();
  /* 111024dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111024df push 0xff */
  push32((uint32_t)(0xffu));
  /* 111024e4 call dword ptr [0x1112da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112da30))), 0x111024eau);
  /* 111024ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111024ed pop ebp */
  EBP = (pop32());
  /* 111024ee ret  */
  ESPCHK(0x111024b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024f0 @ 0x111024f0 (11 bytes, 5 insns) */
void f_111024f0(void) {
  FTRACE(0x111024f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111024f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111024f1 mov ebp, esp */
  EBP = (ESP);
  /* 111024f3 call dword ptr [0x11132330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132330))), 0x111024f9u);
  /* 111024f9 pop ebp */
  EBP = (pop32());
  /* 111024fa ret  */
  ESPCHK(0x111024f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002500 @ 0x11102500 (87 bytes, 30 insns) */
void f_11102500(void) {
  FTRACE(0x11102500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102500 push ebp */
  push32((uint32_t)(EBP));
  /* 11102501 mov ebp, esp */
  EBP = (ESP);
  /* 11102503 push ecx */
  push32((uint32_t)(ECX));
  /* 11102504 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102508 jl 0x11102510 */
  if ((C.sf!=C.of)) goto L_11102510;
  /* 1110250a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110250e jl 0x11102515 */
  if ((C.sf!=C.of)) goto L_11102515;
L_11102510:;
  /* 11102510 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11102513 jmp 0x11102553 */
  goto L_11102553;
L_11102515:;
  /* 11102515 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102519 jne 0x11102527 */
  if (!C.zf) goto L_11102527;
  /* 1110251b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110251e mov eax, dword ptr [eax*4 + 0x1112da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1112da38)));
  /* 11102525 jmp 0x11102553 */
  goto L_11102553;
L_11102527:;
  /* 11102527 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110252a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1110252d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110252f je 0x11102536 */
  if (C.zf) goto L_11102536;
  /* 11102531 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11102534 jmp 0x11102553 */
  goto L_11102553;
L_11102536:;
  /* 11102536 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102539 mov eax, dword ptr [edx*4 + 0x1112da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1112da38)));
  /* 11102540 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11102543 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102546 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11102549 mov dword ptr [ecx*4 + 0x1112da38], edx */
  w32((uint32_t)(ECX*4 + 0x1112da38), (EDX));
  /* 11102550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11102553:;
  /* 11102553 mov esp, ebp */
  ESP = (EBP);
  /* 11102555 pop ebp */
  EBP = (pop32());
  /* 11102556 ret  */
  ESPCHK(0x11102500u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11102560 (126 bytes, 38 insns) */
void f_11102560(void) {
  FTRACE(0x11102560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102560 push ebp */
  push32((uint32_t)(EBP));
  /* 11102561 mov ebp, esp */
  EBP = (ESP);
  /* 11102563 push ecx */
  push32((uint32_t)(ECX));
  /* 11102564 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102568 jl 0x11102570 */
  if ((C.sf!=C.of)) goto L_11102570;
  /* 1110256a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110256e jl 0x11102577 */
  if ((C.sf!=C.of)) goto L_11102577;
L_11102570:;
  /* 11102570 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11102575 jmp 0x111025da */
  goto L_111025da;
L_11102577:;
  /* 11102577 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110257b jne 0x11102589 */
  if (!C.zf) goto L_11102589;
  /* 1110257d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102580 mov eax, dword ptr [eax*4 + 0x1112da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1112da44)));
  /* 11102587 jmp 0x111025da */
  goto L_111025da;
L_11102589:;
  /* 11102589 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110258c mov edx, dword ptr [ecx*4 + 0x1112da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112da44)));
  /* 11102593 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11102596 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110259a jne 0x111025b0 */
  if (!C.zf) goto L_111025b0;
  /* 1110259c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1110259e call dword ptr [0x11132334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132334))), 0x111025a4u);
  /* 111025a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111025a7 mov dword ptr [ecx*4 + 0x1112da44], eax */
  w32((uint32_t)(ECX*4 + 0x1112da44), (EAX));
  /* 111025ae jmp 0x111025d7 */
  goto L_111025d7;
L_111025b0:;
  /* 111025b0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111025b4 jne 0x111025ca */
  if (!C.zf) goto L_111025ca;
  /* 111025b6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111025b8 call dword ptr [0x11132334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132334))), 0x111025beu);
  /* 111025be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111025c1 mov dword ptr [edx*4 + 0x1112da44], eax */
  w32((uint32_t)(EDX*4 + 0x1112da44), (EAX));
  /* 111025c8 jmp 0x111025d7 */
  goto L_111025d7;
L_111025ca:;
  /* 111025ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111025cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111025d0 mov dword ptr [eax*4 + 0x1112da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1112da44), (ECX));
L_111025d7:;
  /* 111025d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_111025da:;
  /* 111025da mov esp, ebp */
  ESP = (EBP);
  /* 111025dc pop ebp */
  EBP = (pop32());
  /* 111025dd ret  */
  ESPCHK(0x11102560u, _esp0);
  ESP += 4; return;
}

/* FUN_100025e0 @ 0x111025e0 (28 bytes, 11 insns) */
void f_111025e0(void) {
  FTRACE(0x111025e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111025e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111025e1 mov ebp, esp */
  EBP = (ESP);
  /* 111025e3 push ecx */
  push32((uint32_t)(ECX));
  /* 111025e4 mov eax, dword ptr [0x11131040] */
  EAX = (r32((uint32_t)(0x11131040)));
  /* 111025e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111025ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111025ef mov dword ptr [0x11131040], ecx */
  w32((uint32_t)(0x11131040), (ECX));
  /* 111025f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111025f8 mov esp, ebp */
  ESP = (EBP);
  /* 111025fa pop ebp */
  EBP = (pop32());
  /* 111025fb ret  */
  ESPCHK(0x111025e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002600 @ 0x11102600 (912 bytes, 248 insns) */
void f_11102600(void) {
  FTRACE(0x11102600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102600 push ebp */
  push32((uint32_t)(EBP));
  /* 11102601 mov ebp, esp */
  EBP = (ESP);
  /* 11102603 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 11102608 call 0x111066e0 */
  push32(0x1110260du); f_111066e0();
  /* 1110260d push edi */
  push32((uint32_t)(EDI));
  /* 1110260e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11102615 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1110261a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110261c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11102622 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11102624 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11102626 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11102627 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1110262e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11102633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11102635 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1110263b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1110263d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1110263f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11102640 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11102647 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1110264c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110264e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11102654 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11102656 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11102658 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11102659 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1110265c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11102662 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102666 jl 0x1110266e */
  if ((C.sf!=C.of)) goto L_1110266e;
  /* 11102668 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110266c jl 0x11102676 */
  if ((C.sf!=C.of)) goto L_11102676;
L_1110266e:;
  /* 1110266e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11102671 jmp 0x1110298b */
  goto L_1110298b;
L_11102676:;
  /* 11102676 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110267a jne 0x11102720 */
  if (!C.zf) goto L_11102720;
  /* 11102680 push 0x1112da34 */
  push32((uint32_t)(0x1112da34u));
  /* 11102685 call dword ptr [0x1113234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113234c))), 0x1110268bu);
  /* 1110268b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110268d jle 0x11102720 */
  if ((C.zf||C.sf!=C.of)) goto L_11102720;
  /* 11102693 cmp dword ptr [0x1112f50c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f50c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110269a jne 0x111026de */
  if (!C.zf) goto L_111026de;
  /* 1110269c push 0x1112a314 */
  push32((uint32_t)(0x1112a314u));
  /* 111026a1 call dword ptr [0x11132348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132348))), 0x111026a7u);
  /* 111026a7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 111026ad cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111026b4 je 0x111026d6 */
  if (C.zf) goto L_111026d6;
  /* 111026b6 push 0x1112a308 */
  push32((uint32_t)(0x1112a308u));
  /* 111026bb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 111026c1 push ecx */
  push32((uint32_t)(ECX));
  /* 111026c2 call dword ptr [0x11132344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132344))), 0x111026c8u);
  /* 111026c8 mov dword ptr [0x1112f50c], eax */
  w32((uint32_t)(0x1112f50c), (EAX));
  /* 111026cd cmp dword ptr [0x1112f50c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f50c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111026d4 jne 0x111026de */
  if (!C.zf) goto L_111026de;
L_111026d6:;
  /* 111026d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111026d9 jmp 0x1110298b */
  goto L_1110298b;
L_111026de:;
  /* 111026de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111026e1 push edx */
  push32((uint32_t)(EDX));
  /* 111026e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111026e5 push eax */
  push32((uint32_t)(EAX));
  /* 111026e6 push 0x1112a2d4 */
  push32((uint32_t)(0x1112a2d4u));
  /* 111026eb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 111026f1 push ecx */
  push32((uint32_t)(ECX));
  /* 111026f2 call dword ptr [0x1112f50c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f50c))), 0x111026f8u);
  /* 111026f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111026fb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 11102701 push edx */
  push32((uint32_t)(EDX));
  /* 11102702 call dword ptr [0x11132340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132340))), 0x11102708u);
  /* 11102708 push 0x1112da34 */
  push32((uint32_t)(0x1112da34u));
  /* 1110270d call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x11102713u);
  /* 11102713 call 0x111024f0 */
  push32(0x11102718u); f_111024f0();
  /* 11102718 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110271b jmp 0x1110298b */
  goto L_1110298b;
L_11102720:;
  /* 11102720 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102724 je 0x1110275d */
  if (C.zf) goto L_1110275d;
  /* 11102726 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1110272c push eax */
  push32((uint32_t)(EAX));
  /* 1110272d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11102730 push ecx */
  push32((uint32_t)(ECX));
  /* 11102731 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11102736 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1110273c push edx */
  push32((uint32_t)(EDX));
  /* 1110273d call 0x111065e0 */
  push32(0x11102742u); f_111065e0();
  /* 11102742 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11102747 jge 0x1110275d */
  if ((C.sf==C.of)) goto L_1110275d;
  /* 11102749 push 0x1112a2a8 */
  push32((uint32_t)(0x1112a2a8u));
  /* 1110274e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11102754 push eax */
  push32((uint32_t)(EAX));
  /* 11102755 call 0x111064f0 */
  push32(0x1110275au); f_111064f0();
  /* 1110275a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110275d:;
  /* 1110275d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102761 jne 0x11102795 */
  if (!C.zf) goto L_11102795;
  /* 11102763 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102767 je 0x11102775 */
  if (C.zf) goto L_11102775;
  /* 11102769 mov dword ptr [ebp - 0x3028], 0x1112a294 */
  w32((uint32_t)(EBP + -0x3028), (0x1112a294u));
  /* 11102773 jmp 0x1110277f */
  goto L_1110277f;
L_11102775:;
  /* 11102775 mov dword ptr [ebp - 0x3028], 0x1112a280 */
  w32((uint32_t)(EBP + -0x3028), (0x1112a280u));
L_1110277f:;
  /* 1110277f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11102785 push ecx */
  push32((uint32_t)(ECX));
  /* 11102786 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1110278c push edx */
  push32((uint32_t)(EDX));
  /* 1110278d call 0x111064f0 */
  push32(0x11102792u); f_111064f0();
  /* 11102792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11102795:;
  /* 11102795 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1110279b push eax */
  push32((uint32_t)(EAX));
  /* 1110279c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 111027a2 push ecx */
  push32((uint32_t)(ECX));
  /* 111027a3 call 0x11106500 */
  push32(0x111027a8u); f_11106500();
  /* 111027a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111027ab cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111027af jne 0x111027ea */
  if (!C.zf) goto L_111027ea;
  /* 111027b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111027b4 mov eax, dword ptr [edx*4 + 0x1112da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1112da38)));
  /* 111027bb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 111027be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111027c0 je 0x111027d6 */
  if (C.zf) goto L_111027d6;
  /* 111027c2 push 0x1112a27c */
  push32((uint32_t)(0x1112a27cu));
  /* 111027c7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 111027cd push ecx */
  push32((uint32_t)(ECX));
  /* 111027ce call 0x11106500 */
  push32(0x111027d3u); f_11106500();
  /* 111027d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111027d6:;
  /* 111027d6 push 0x1112a278 */
  push32((uint32_t)(0x1112a278u));
  /* 111027db lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 111027e1 push edx */
  push32((uint32_t)(EDX));
  /* 111027e2 call 0x11106500 */
  push32(0x111027e7u); f_11106500();
  /* 111027e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111027ea:;
  /* 111027ea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111027ee je 0x11102832 */
  if (C.zf) goto L_11102832;
  /* 111027f0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 111027f6 push eax */
  push32((uint32_t)(EAX));
  /* 111027f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111027fa push ecx */
  push32((uint32_t)(ECX));
  /* 111027fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111027fe push edx */
  push32((uint32_t)(EDX));
  /* 111027ff push 0x1112a26c */
  push32((uint32_t)(0x1112a26cu));
  /* 11102804 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11102809 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1110280f push eax */
  push32((uint32_t)(EAX));
  /* 11102810 call 0x111063f0 */
  push32(0x11102815u); f_111063f0();
  /* 11102815 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110281a jge 0x11102830 */
  if ((C.sf==C.of)) goto L_11102830;
  /* 1110281c push 0x1112a2a8 */
  push32((uint32_t)(0x1112a2a8u));
  /* 11102821 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11102827 push ecx */
  push32((uint32_t)(ECX));
  /* 11102828 call 0x111064f0 */
  push32(0x1110282du); f_111064f0();
  /* 1110282d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11102830:;
  /* 11102830 jmp 0x11102848 */
  goto L_11102848;
L_11102832:;
  /* 11102832 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11102838 push edx */
  push32((uint32_t)(EDX));
  /* 11102839 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1110283f push eax */
  push32((uint32_t)(EAX));
  /* 11102840 call 0x111064f0 */
  push32(0x11102845u); f_111064f0();
  /* 11102845 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11102848:;
  /* 11102848 cmp dword ptr [0x11131040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11131040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110284f je 0x1110288c */
  if (C.zf) goto L_1110288c;
  /* 11102851 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11102857 push ecx */
  push32((uint32_t)(ECX));
  /* 11102858 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1110285e push edx */
  push32((uint32_t)(EDX));
  /* 1110285f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102862 push eax */
  push32((uint32_t)(EAX));
  /* 11102863 call dword ptr [0x11131040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11131040))), 0x11102869u);
  /* 11102869 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110286c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110286e je 0x1110288c */
  if (C.zf) goto L_1110288c;
  /* 11102870 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102874 jne 0x11102881 */
  if (!C.zf) goto L_11102881;
  /* 11102876 push 0x1112da34 */
  push32((uint32_t)(0x1112da34u));
  /* 1110287b call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x11102881u);
L_11102881:;
  /* 11102881 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11102887 jmp 0x1110298b */
  goto L_1110298b;
L_1110288c:;
  /* 1110288c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110288f mov edx, dword ptr [ecx*4 + 0x1112da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112da38)));
  /* 11102896 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11102899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110289b je 0x111028db */
  if (C.zf) goto L_111028db;
  /* 1110289d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111028a0 cmp dword ptr [eax*4 + 0x1112da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1112da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111028a8 je 0x111028db */
  if (C.zf) goto L_111028db;
  /* 111028aa push 0 */
  push32((uint32_t)(0x0u));
  /* 111028ac lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 111028b2 push ecx */
  push32((uint32_t)(ECX));
  /* 111028b3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 111028b9 push edx */
  push32((uint32_t)(EDX));
  /* 111028ba call 0x11106370 */
  push32(0x111028bfu); f_11106370();
  /* 111028bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111028c2 push eax */
  push32((uint32_t)(EAX));
  /* 111028c3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 111028c9 push eax */
  push32((uint32_t)(EAX));
  /* 111028ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111028cd mov edx, dword ptr [ecx*4 + 0x1112da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112da44)));
  /* 111028d4 push edx */
  push32((uint32_t)(EDX));
  /* 111028d5 call dword ptr [0x11132338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132338))), 0x111028dbu);
L_111028db:;
  /* 111028db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111028de mov ecx, dword ptr [eax*4 + 0x1112da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1112da38)));
  /* 111028e5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 111028e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111028ea je 0x111028f9 */
  if (C.zf) goto L_111028f9;
  /* 111028ec lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 111028f2 push edx */
  push32((uint32_t)(EDX));
  /* 111028f3 call dword ptr [0x11132340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132340))), 0x111028f9u);
L_111028f9:;
  /* 111028f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111028fc mov ecx, dword ptr [eax*4 + 0x1112da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1112da38)));
  /* 11102903 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11102906 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11102908 je 0x11102978 */
  if (C.zf) goto L_11102978;
  /* 1110290a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110290e je 0x1110292d */
  if (C.zf) goto L_1110292d;
  /* 11102910 push 0xa */
  push32((uint32_t)(0xau));
  /* 11102912 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11102918 push edx */
  push32((uint32_t)(EDX));
  /* 11102919 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110291c push eax */
  push32((uint32_t)(EAX));
  /* 1110291d call 0x11106080 */
  push32(0x11102922u); f_11106080();
  /* 11102922 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102925 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1110292b jmp 0x11102937 */
  goto L_11102937;
L_1110292d:;
  /* 1110292d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11102937:;
  /* 11102937 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1110293d push ecx */
  push32((uint32_t)(ECX));
  /* 1110293e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11102941 push edx */
  push32((uint32_t)(EDX));
  /* 11102942 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11102948 push eax */
  push32((uint32_t)(EAX));
  /* 11102949 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110294c push ecx */
  push32((uint32_t)(ECX));
  /* 1110294d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102950 push edx */
  push32((uint32_t)(EDX));
  /* 11102951 call 0x11102990 */
  push32(0x11102956u); f_11102990();
  /* 11102956 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102959 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1110295f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102963 jne 0x11102970 */
  if (!C.zf) goto L_11102970;
  /* 11102965 push 0x1112da34 */
  push32((uint32_t)(0x1112da34u));
  /* 1110296a call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x11102970u);
L_11102970:;
  /* 11102970 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11102976 jmp 0x1110298b */
  goto L_1110298b;
L_11102978:;
  /* 11102978 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110297c jne 0x11102989 */
  if (!C.zf) goto L_11102989;
  /* 1110297e push 0x1112da34 */
  push32((uint32_t)(0x1112da34u));
  /* 11102983 call dword ptr [0x1113233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113233c))), 0x11102989u);
L_11102989:;
  /* 11102989 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110298b:;
  /* 1110298b pop edi */
  EDI = (pop32());
  /* 1110298c mov esp, ebp */
  ESP = (EBP);
  /* 1110298e pop ebp */
  EBP = (pop32());
  /* 1110298f ret  */
  ESPCHK(0x11102600u, _esp0);
  ESP += 4; return;
}

/* FUN_10002990 @ 0x11102990 (780 bytes, 197 insns) */
void f_11102990(void) {
  FTRACE(0x11102990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102990 push ebp */
  push32((uint32_t)(EBP));
  /* 11102991 mov ebp, esp */
  EBP = (ESP);
  /* 11102993 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11102998 call 0x111066e0 */
  push32(0x1110299du); f_111066e0();
L_1110299d:;
  /* 1110299d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111029a1 jne 0x111029c8 */
  if (!C.zf) goto L_111029c8;
  /* 111029a3 push 0x1112a464 */
  push32((uint32_t)(0x1112a464u));
  /* 111029a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111029aa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 111029af push 0x1112a458 */
  push32((uint32_t)(0x1112a458u));
  /* 111029b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 111029b6 call 0x11102600 */
  push32(0x111029bbu); f_11102600();
  /* 111029bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111029be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111029c1 jne 0x111029c8 */
  if (!C.zf) goto L_111029c8;
  /* 111029c3 call 0x111024f0 */
  push32(0x111029c8u); f_111024f0();
L_111029c8:;
  /* 111029c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111029ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111029cc jne 0x1110299d */
  if (!C.zf) goto L_1110299d;
  /* 111029ce push 0x104 */
  push32((uint32_t)(0x104u));
  /* 111029d3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 111029d9 push ecx */
  push32((uint32_t)(ECX));
  /* 111029da push 0 */
  push32((uint32_t)(0x0u));
  /* 111029dc call dword ptr [0x11132350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132350))), 0x111029e2u);
  /* 111029e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111029e4 jne 0x111029fa */
  if (!C.zf) goto L_111029fa;
  /* 111029e6 push 0x1112a440 */
  push32((uint32_t)(0x1112a440u));
  /* 111029eb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 111029f1 push edx */
  push32((uint32_t)(EDX));
  /* 111029f2 call 0x111064f0 */
  push32(0x111029f7u); f_111064f0();
  /* 111029f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111029fa:;
  /* 111029fa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 11102a00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11102a03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102a06 push ecx */
  push32((uint32_t)(ECX));
  /* 11102a07 call 0x11106370 */
  push32(0x11102a0cu); f_11106370();
  /* 11102a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102a0f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102a12 jbe 0x11102a3d */
  if ((C.cf||C.zf)) goto L_11102a3d;
  /* 11102a14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102a17 push edx */
  push32((uint32_t)(EDX));
  /* 11102a18 call 0x11106370 */
  push32(0x11102a1du); f_11106370();
  /* 11102a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102a20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102a23 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11102a27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11102a2a push 3 */
  push32((uint32_t)(0x3u));
  /* 11102a2c push 0x1112a43c */
  push32((uint32_t)(0x1112a43cu));
  /* 11102a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102a34 push eax */
  push32((uint32_t)(EAX));
  /* 11102a35 call 0x11106d60 */
  push32(0x11102a3au); f_11106d60();
  /* 11102a3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11102a3d:;
  /* 11102a3d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11102a40 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11102a46 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102a4d je 0x11102a98 */
  if (C.zf) goto L_11102a98;
  /* 11102a4f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11102a55 push edx */
  push32((uint32_t)(EDX));
  /* 11102a56 call 0x11106370 */
  push32(0x11102a5bu); f_11106370();
  /* 11102a5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102a5e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102a61 jbe 0x11102a98 */
  if ((C.cf||C.zf)) goto L_11102a98;
  /* 11102a63 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11102a69 push eax */
  push32((uint32_t)(EAX));
  /* 11102a6a call 0x11106370 */
  push32(0x11102a6fu); f_11106370();
  /* 11102a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102a72 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11102a78 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11102a7c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11102a82 push 3 */
  push32((uint32_t)(0x3u));
  /* 11102a84 push 0x1112a43c */
  push32((uint32_t)(0x1112a43cu));
  /* 11102a89 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11102a8f push eax */
  push32((uint32_t)(EAX));
  /* 11102a90 call 0x11106d60 */
  push32(0x11102a95u); f_11106d60();
  /* 11102a95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11102a98:;
  /* 11102a98 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102a9c jne 0x11102aaa */
  if (!C.zf) goto L_11102aaa;
  /* 11102a9e mov dword ptr [ebp - 0x1114], 0x1112a3c8 */
  w32((uint32_t)(EBP + -0x1114), (0x1112a3c8u));
  /* 11102aa8 jmp 0x11102ab4 */
  goto L_11102ab4;
L_11102aaa:;
  /* 11102aaa mov dword ptr [ebp - 0x1114], 0x1112a168 */
  w32((uint32_t)(EBP + -0x1114), (0x1112a168u));
L_11102ab4:;
  /* 11102ab4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11102ab7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11102aba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11102abc je 0x11102ac9 */
  if (C.zf) goto L_11102ac9;
  /* 11102abe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11102ac1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 11102ac7 jmp 0x11102ad3 */
  goto L_11102ad3;
L_11102ac9:;
  /* 11102ac9 mov dword ptr [ebp - 0x1118], 0x1112a168 */
  w32((uint32_t)(EBP + -0x1118), (0x1112a168u));
L_11102ad3:;
  /* 11102ad3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11102ad6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11102ad9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11102adb je 0x11102aef */
  if (C.zf) goto L_11102aef;
  /* 11102add cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102ae1 jne 0x11102aef */
  if (!C.zf) goto L_11102aef;
  /* 11102ae3 mov dword ptr [ebp - 0x111c], 0x1112a3b8 */
  w32((uint32_t)(EBP + -0x111c), (0x1112a3b8u));
  /* 11102aed jmp 0x11102af9 */
  goto L_11102af9;
L_11102aef:;
  /* 11102aef mov dword ptr [ebp - 0x111c], 0x1112a168 */
  w32((uint32_t)(EBP + -0x111c), (0x1112a168u));
L_11102af9:;
  /* 11102af9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11102afc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11102aff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11102b01 je 0x11102b0f */
  if (C.zf) goto L_11102b0f;
  /* 11102b03 mov dword ptr [ebp - 0x1120], 0x1112a3b4 */
  w32((uint32_t)(EBP + -0x1120), (0x1112a3b4u));
  /* 11102b0d jmp 0x11102b19 */
  goto L_11102b19;
L_11102b0f:;
  /* 11102b0f mov dword ptr [ebp - 0x1120], 0x1112a168 */
  w32((uint32_t)(EBP + -0x1120), (0x1112a168u));
L_11102b19:;
  /* 11102b19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102b1d je 0x11102b2a */
  if (C.zf) goto L_11102b2a;
  /* 11102b1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11102b22 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11102b28 jmp 0x11102b34 */
  goto L_11102b34;
L_11102b2a:;
  /* 11102b2a mov dword ptr [ebp - 0x1124], 0x1112a168 */
  w32((uint32_t)(EBP + -0x1124), (0x1112a168u));
L_11102b34:;
  /* 11102b34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102b38 je 0x11102b46 */
  if (C.zf) goto L_11102b46;
  /* 11102b3a mov dword ptr [ebp - 0x1128], 0x1112a3ac */
  w32((uint32_t)(EBP + -0x1128), (0x1112a3acu));
  /* 11102b44 jmp 0x11102b50 */
  goto L_11102b50;
L_11102b46:;
  /* 11102b46 mov dword ptr [ebp - 0x1128], 0x1112a168 */
  w32((uint32_t)(EBP + -0x1128), (0x1112a168u));
L_11102b50:;
  /* 11102b50 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102b54 je 0x11102b61 */
  if (C.zf) goto L_11102b61;
  /* 11102b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11102b59 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 11102b5f jmp 0x11102b6b */
  goto L_11102b6b;
L_11102b61:;
  /* 11102b61 mov dword ptr [ebp - 0x112c], 0x1112a168 */
  w32((uint32_t)(EBP + -0x112c), (0x1112a168u));
L_11102b6b:;
  /* 11102b6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102b6f je 0x11102b7d */
  if (C.zf) goto L_11102b7d;
  /* 11102b71 mov dword ptr [ebp - 0x1130], 0x1112a3a4 */
  w32((uint32_t)(EBP + -0x1130), (0x1112a3a4u));
  /* 11102b7b jmp 0x11102b87 */
  goto L_11102b87;
L_11102b7d:;
  /* 11102b7d mov dword ptr [ebp - 0x1130], 0x1112a168 */
  w32((uint32_t)(EBP + -0x1130), (0x1112a168u));
L_11102b87:;
  /* 11102b87 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102b8e je 0x11102b9e */
  if (C.zf) goto L_11102b9e;
  /* 11102b90 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11102b96 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 11102b9c jmp 0x11102ba8 */
  goto L_11102ba8;
L_11102b9e:;
  /* 11102b9e mov dword ptr [ebp - 0x1134], 0x1112a168 */
  w32((uint32_t)(EBP + -0x1134), (0x1112a168u));
L_11102ba8:;
  /* 11102ba8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102baf je 0x11102bbd */
  if (C.zf) goto L_11102bbd;
  /* 11102bb1 mov dword ptr [ebp - 0x1138], 0x1112a398 */
  w32((uint32_t)(EBP + -0x1138), (0x1112a398u));
  /* 11102bbb jmp 0x11102bc7 */
  goto L_11102bc7;
L_11102bbd:;
  /* 11102bbd mov dword ptr [ebp - 0x1138], 0x1112a168 */
  w32((uint32_t)(EBP + -0x1138), (0x1112a168u));
L_11102bc7:;
  /* 11102bc7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 11102bcd push edx */
  push32((uint32_t)(EDX));
  /* 11102bce mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 11102bd4 push eax */
  push32((uint32_t)(EAX));
  /* 11102bd5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 11102bdb push ecx */
  push32((uint32_t)(ECX));
  /* 11102bdc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 11102be2 push edx */
  push32((uint32_t)(EDX));
  /* 11102be3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 11102be9 push eax */
  push32((uint32_t)(EAX));
  /* 11102bea mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 11102bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11102bf1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 11102bf7 push edx */
  push32((uint32_t)(EDX));
  /* 11102bf8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 11102bfe push eax */
  push32((uint32_t)(EAX));
  /* 11102bff mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 11102c05 push ecx */
  push32((uint32_t)(ECX));
  /* 11102c06 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 11102c0c push edx */
  push32((uint32_t)(EDX));
  /* 11102c0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102c10 push eax */
  push32((uint32_t)(EAX));
  /* 11102c11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102c14 mov edx, dword ptr [ecx*4 + 0x1112da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112da50)));
  /* 11102c1b push edx */
  push32((uint32_t)(EDX));
  /* 11102c1c push 0x1112a344 */
  push32((uint32_t)(0x1112a344u));
  /* 11102c21 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11102c26 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 11102c2c push eax */
  push32((uint32_t)(EAX));
  /* 11102c2d call 0x111063f0 */
  push32(0x11102c32u); f_111063f0();
  /* 11102c32 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102c35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11102c37 jge 0x11102c4d */
  if ((C.sf==C.of)) goto L_11102c4d;
  /* 11102c39 push 0x1112a2a8 */
  push32((uint32_t)(0x1112a2a8u));
  /* 11102c3e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11102c44 push ecx */
  push32((uint32_t)(ECX));
  /* 11102c45 call 0x111064f0 */
  push32(0x11102c4au); f_111064f0();
  /* 11102c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11102c4d:;
  /* 11102c4d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11102c52 push 0x1112a320 */
  push32((uint32_t)(0x1112a320u));
  /* 11102c57 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 11102c5d push edx */
  push32((uint32_t)(EDX));
  /* 11102c5e call 0x11106ca0 */
  push32(0x11102c63u); f_11106ca0();
  /* 11102c63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102c66 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 11102c6c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102c73 jne 0x11102c86 */
  if (!C.zf) goto L_11102c86;
  /* 11102c75 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11102c77 call 0x111069e0 */
  push32(0x11102c7cu); f_111069e0();
  /* 11102c7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102c7f push 3 */
  push32((uint32_t)(0x3u));
  /* 11102c81 call 0x11102d00 */
  push32(0x11102c86u); f_11102d00();
L_11102c86:;
  /* 11102c86 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102c8d jne 0x11102c96 */
  if (!C.zf) goto L_11102c96;
  /* 11102c8f mov eax, 1 */
  EAX = (0x1u);
  /* 11102c94 jmp 0x11102c98 */
  goto L_11102c98;
L_11102c96:;
  /* 11102c96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11102c98:;
  /* 11102c98 mov esp, ebp */
  ESP = (EBP);
  /* 11102c9a pop ebp */
  EBP = (pop32());
  /* 11102c9b ret  */
  ESPCHK(0x11102990u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ca0 @ 0x11102ca0 (56 bytes, 15 insns) */
void f_11102ca0(void) {
  FTRACE(0x11102ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11102ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11102ca3 cmp dword ptr [0x1113103c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1113103c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102caa je 0x11102cb2 */
  if (C.zf) goto L_11102cb2;
  /* 11102cac call dword ptr [0x1113103c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113103c))), 0x11102cb2u);
L_11102cb2:;
  /* 11102cb2 push 0x1112d418 */
  push32((uint32_t)(0x1112d418u));
  /* 11102cb7 push 0x1112d208 */
  push32((uint32_t)(0x1112d208u));
  /* 11102cbc call 0x11102e70 */
  push32(0x11102cc1u); f_11102e70();
  /* 11102cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102cc4 push 0x1112d104 */
  push32((uint32_t)(0x1112d104u));
  /* 11102cc9 push 0x1112d000 */
  push32((uint32_t)(0x1112d000u));
  /* 11102cce call 0x11102e70 */
  push32(0x11102cd3u); f_11102e70();
  /* 11102cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102cd6 pop ebp */
  EBP = (pop32());
  /* 11102cd7 ret  */
  ESPCHK(0x11102ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce0 @ 0x11102ce0 (21 bytes, 10 insns) */
void f_11102ce0(void) {
  FTRACE(0x11102ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11102ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11102ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11102ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11102ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102cea push eax */
  push32((uint32_t)(EAX));
  /* 11102ceb call 0x11102d60 */
  push32(0x11102cf0u); f_11102d60();
  /* 11102cf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102cf3 pop ebp */
  EBP = (pop32());
  /* 11102cf4 ret  */
  ESPCHK(0x11102ce0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11102d00 (21 bytes, 10 insns) */
void f_11102d00(void) {
  FTRACE(0x11102d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11102d01 mov ebp, esp */
  EBP = (ESP);
  /* 11102d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11102d05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11102d07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102d0a push eax */
  push32((uint32_t)(EAX));
  /* 11102d0b call 0x11102d60 */
  push32(0x11102d10u); f_11102d60();
  /* 11102d10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102d13 pop ebp */
  EBP = (pop32());
  /* 11102d14 ret  */
  ESPCHK(0x11102d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d20 @ 0x11102d20 (19 bytes, 9 insns) */
void f_11102d20(void) {
  FTRACE(0x11102d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11102d21 mov ebp, esp */
  EBP = (ESP);
  /* 11102d23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11102d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11102d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11102d29 call 0x11102d60 */
  push32(0x11102d2eu); f_11102d60();
  /* 11102d2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102d31 pop ebp */
  EBP = (pop32());
  /* 11102d32 ret  */
  ESPCHK(0x11102d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d40 @ 0x11102d40 (19 bytes, 9 insns) */
void f_11102d40(void) {
  FTRACE(0x11102d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11102d41 mov ebp, esp */
  EBP = (ESP);
  /* 11102d43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11102d45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11102d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11102d49 call 0x11102d60 */
  push32(0x11102d4eu); f_11102d60();
  /* 11102d4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102d51 pop ebp */
  EBP = (pop32());
  /* 11102d52 ret  */
  ESPCHK(0x11102d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d60 @ 0x11102d60 (227 bytes, 61 insns) */
void f_11102d60(void) {
  FTRACE(0x11102d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11102d61 mov ebp, esp */
  EBP = (ESP);
  /* 11102d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11102d64 call 0x11102e50 */
  push32(0x11102d69u); f_11102e50();
  /* 11102d69 cmp dword ptr [0x1112f550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102d70 jne 0x11102d83 */
  if (!C.zf) goto L_11102d83;
  /* 11102d72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102d75 push eax */
  push32((uint32_t)(EAX));
  /* 11102d76 call dword ptr [0x1113235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113235c))), 0x11102d7cu);
  /* 11102d7c push eax */
  push32((uint32_t)(EAX));
  /* 11102d7d call dword ptr [0x11132358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132358))), 0x11102d83u);
L_11102d83:;
  /* 11102d83 mov dword ptr [0x1112f54c], 1 */
  w32((uint32_t)(0x1112f54c), (0x1u));
  /* 11102d8d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11102d90 mov byte ptr [0x1112f548], cl */
  w8((uint32_t)(0x1112f548), (CL));
  /* 11102d96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102d9a jne 0x11102de3 */
  if (!C.zf) goto L_11102de3;
  /* 11102d9c cmp dword ptr [0x11131038], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11131038))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102da3 je 0x11102dd1 */
  if (C.zf) goto L_11102dd1;
  /* 11102da5 mov edx, dword ptr [0x11131034] */
  EDX = (r32((uint32_t)(0x11131034)));
  /* 11102dab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11102dae:;
  /* 11102dae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102db1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11102db4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11102db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102dba cmp ecx, dword ptr [0x11131038] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11131038))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102dc0 jb 0x11102dd1 */
  if (C.cf) goto L_11102dd1;
  /* 11102dc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102dc5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102dc8 je 0x11102dcf */
  if (C.zf) goto L_11102dcf;
  /* 11102dca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102dcd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11102dcfu);
L_11102dcf:;
  /* 11102dcf jmp 0x11102dae */
  goto L_11102dae;
L_11102dd1:;
  /* 11102dd1 push 0x1112d724 */
  push32((uint32_t)(0x1112d724u));
  /* 11102dd6 push 0x1112d51c */
  push32((uint32_t)(0x1112d51cu));
  /* 11102ddb call 0x11102e70 */
  push32(0x11102de0u); f_11102e70();
  /* 11102de0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11102de3:;
  /* 11102de3 push 0x1112d92c */
  push32((uint32_t)(0x1112d92cu));
  /* 11102de8 push 0x1112d828 */
  push32((uint32_t)(0x1112d828u));
  /* 11102ded call 0x11102e70 */
  push32(0x11102df2u); f_11102e70();
  /* 11102df2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102df5 cmp dword ptr [0x1112f554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102dfc jne 0x11102e1e */
  if (!C.zf) goto L_11102e1e;
  /* 11102dfe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11102e00 call 0x11104a50 */
  push32(0x11102e05u); f_11104a50();
  /* 11102e05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102e08 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11102e0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11102e0d je 0x11102e1e */
  if (C.zf) goto L_11102e1e;
  /* 11102e0f mov dword ptr [0x1112f554], 1 */
  w32((uint32_t)(0x1112f554), (0x1u));
  /* 11102e19 call 0x11105360 */
  push32(0x11102e1eu); f_11105360();
L_11102e1e:;
  /* 11102e1e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102e22 je 0x11102e2b */
  if (C.zf) goto L_11102e2b;
  /* 11102e24 call 0x11102e60 */
  push32(0x11102e29u); f_11102e60();
  /* 11102e29 jmp 0x11102e3f */
  goto L_11102e3f;
L_11102e2b:;
  /* 11102e2b mov dword ptr [0x1112f550], 1 */
  w32((uint32_t)(0x1112f550), (0x1u));
  /* 11102e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102e38 push ecx */
  push32((uint32_t)(ECX));
  /* 11102e39 call dword ptr [0x11132354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132354))), 0x11102e3fu);
L_11102e3f:;
  /* 11102e3f mov esp, ebp */
  ESP = (EBP);
  /* 11102e41 pop ebp */
  EBP = (pop32());
  /* 11102e42 ret  */
  ESPCHK(0x11102d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e50 @ 0x11102e50 (15 bytes, 7 insns) */
void f_11102e50(void) {
  FTRACE(0x11102e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11102e51 mov ebp, esp */
  EBP = (ESP);
  /* 11102e53 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11102e55 call 0x11106f40 */
  push32(0x11102e5au); f_11106f40();
  /* 11102e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102e5d pop ebp */
  EBP = (pop32());
  /* 11102e5e ret  */
  ESPCHK(0x11102e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e60 @ 0x11102e60 (15 bytes, 7 insns) */
void f_11102e60(void) {
  FTRACE(0x11102e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11102e61 mov ebp, esp */
  EBP = (ESP);
  /* 11102e63 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11102e65 call 0x11106fe0 */
  push32(0x11102e6au); f_11106fe0();
  /* 11102e6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102e6d pop ebp */
  EBP = (pop32());
  /* 11102e6e ret  */
  ESPCHK(0x11102e60u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11102e70 (37 bytes, 16 insns) */
void f_11102e70(void) {
  FTRACE(0x11102e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11102e71 mov ebp, esp */
  EBP = (ESP);
L_11102e73:;
  /* 11102e73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102e76 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102e79 jae 0x11102e93 */
  if (!C.cf) goto L_11102e93;
  /* 11102e7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102e7e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102e81 je 0x11102e88 */
  if (C.zf) goto L_11102e88;
  /* 11102e83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102e86 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11102e88u);
L_11102e88:;
  /* 11102e88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102e8b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11102e8e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11102e91 jmp 0x11102e73 */
  goto L_11102e73;
L_11102e93:;
  /* 11102e93 pop ebp */
  EBP = (pop32());
  /* 11102e94 ret  */
  ESPCHK(0x11102e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ea0 @ 0x11102ea0 (130 bytes, 42 insns) */
void f_11102ea0(void) {
  FTRACE(0x11102ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11102ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11102ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11102ea4 call 0x11106e60 */
  push32(0x11102ea9u); f_11106e60();
  /* 11102ea9 call dword ptr [0x11132368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132368))), 0x11102eafu);
  /* 11102eaf mov dword ptr [0x1112da5c], eax */
  w32((uint32_t)(0x1112da5c), (EAX));
  /* 11102eb4 cmp dword ptr [0x1112da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1112da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102ebb jne 0x11102ec1 */
  if (!C.zf) goto L_11102ec1;
  /* 11102ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11102ebf jmp 0x11102f1e */
  goto L_11102f1e;
L_11102ec1:;
  /* 11102ec1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11102ec3 push 0x1112a47c */
  push32((uint32_t)(0x1112a47cu));
  /* 11102ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11102eca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11102ecc push 1 */
  push32((uint32_t)(0x1u));
  /* 11102ece call 0x11103950 */
  push32(0x11102ed3u); f_11103950();
  /* 11102ed3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102ed6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11102ed9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102edd je 0x11102ef4 */
  if (C.zf) goto L_11102ef4;
  /* 11102edf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102ee2 push eax */
  push32((uint32_t)(EAX));
  /* 11102ee3 mov ecx, dword ptr [0x1112da5c] */
  ECX = (r32((uint32_t)(0x1112da5c)));
  /* 11102ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 11102eea call dword ptr [0x11132364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132364))), 0x11102ef0u);
  /* 11102ef0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11102ef2 jne 0x11102ef8 */
  if (!C.zf) goto L_11102ef8;
L_11102ef4:;
  /* 11102ef4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11102ef6 jmp 0x11102f1e */
  goto L_11102f1e;
L_11102ef8:;
  /* 11102ef8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102efb push edx */
  push32((uint32_t)(EDX));
  /* 11102efc call 0x11102f60 */
  push32(0x11102f01u); f_11102f60();
  /* 11102f01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102f04 call dword ptr [0x11132360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132360))), 0x11102f0au);
  /* 11102f0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102f0d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11102f0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102f12 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11102f19 mov eax, 1 */
  EAX = (0x1u);
L_11102f1e:;
  /* 11102f1e mov esp, ebp */
  ESP = (EBP);
  /* 11102f20 pop ebp */
  EBP = (pop32());
  /* 11102f21 ret  */
  ESPCHK(0x11102ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f30 @ 0x11102f30 (41 bytes, 11 insns) */
void f_11102f30(void) {
  FTRACE(0x11102f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11102f31 mov ebp, esp */
  EBP = (ESP);
  /* 11102f33 call 0x11106ea0 */
  push32(0x11102f38u); f_11106ea0();
  /* 11102f38 cmp dword ptr [0x1112da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1112da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102f3f je 0x11102f57 */
  if (C.zf) goto L_11102f57;
  /* 11102f41 mov eax, dword ptr [0x1112da5c] */
  EAX = (r32((uint32_t)(0x1112da5c)));
  /* 11102f46 push eax */
  push32((uint32_t)(EAX));
  /* 11102f47 call dword ptr [0x1113229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113229c))), 0x11102f4du);
  /* 11102f4d mov dword ptr [0x1112da5c], 0xffffffff */
  w32((uint32_t)(0x1112da5c), (0xffffffffu));
L_11102f57:;
  /* 11102f57 pop ebp */
  EBP = (pop32());
  /* 11102f58 ret  */
  ESPCHK(0x11102f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f60 @ 0x11102f60 (25 bytes, 8 insns) */
void f_11102f60(void) {
  FTRACE(0x11102f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11102f61 mov ebp, esp */
  EBP = (ESP);
  /* 11102f63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102f66 mov dword ptr [eax + 0x50], 0x1112dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1112dc00u));
  /* 11102f6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11102f70 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11102f77 pop ebp */
  EBP = (pop32());
  /* 11102f78 ret  */
  ESPCHK(0x11102f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f80 @ 0x11102f80 (152 bytes, 48 insns) */
void f_11102f80(void) {
  FTRACE(0x11102f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11102f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11102f81 mov ebp, esp */
  EBP = (ESP);
  /* 11102f83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11102f86 call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x11102f8cu);
  /* 11102f8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11102f8f mov eax, dword ptr [0x1112da5c] */
  EAX = (r32((uint32_t)(0x1112da5c)));
  /* 11102f94 push eax */
  push32((uint32_t)(EAX));
  /* 11102f95 call dword ptr [0x11132374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132374))), 0x11102f9bu);
  /* 11102f9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11102f9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102fa2 jne 0x11103007 */
  if (!C.zf) goto L_11103007;
  /* 11102fa4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11102fa9 push 0x1112a47c */
  push32((uint32_t)(0x1112a47cu));
  /* 11102fae push 2 */
  push32((uint32_t)(0x2u));
  /* 11102fb0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11102fb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11102fb4 call 0x11103950 */
  push32(0x11102fb9u); f_11103950();
  /* 11102fb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102fbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11102fbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11102fc3 je 0x11102ffd */
  if (C.zf) goto L_11102ffd;
  /* 11102fc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102fc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11102fc9 mov edx, dword ptr [0x1112da5c] */
  EDX = (r32((uint32_t)(0x1112da5c)));
  /* 11102fcf push edx */
  push32((uint32_t)(EDX));
  /* 11102fd0 call dword ptr [0x11132364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132364))), 0x11102fd6u);
  /* 11102fd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11102fd8 je 0x11102ffd */
  if (C.zf) goto L_11102ffd;
  /* 11102fda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102fdd push eax */
  push32((uint32_t)(EAX));
  /* 11102fde call 0x11102f60 */
  push32(0x11102fe3u); f_11102f60();
  /* 11102fe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11102fe6 call dword ptr [0x11132360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132360))), 0x11102fecu);
  /* 11102fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102fef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11102ff1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11102ff4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11102ffb jmp 0x11103007 */
  goto L_11103007;
L_11102ffd:;
  /* 11102ffd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11102fff call 0x111024b0 */
  push32(0x11103004u); f_111024b0();
  /* 11103004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11103007:;
  /* 11103007 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110300a push eax */
  push32((uint32_t)(EAX));
  /* 1110300b call dword ptr [0x11132298] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132298))), 0x11103011u);
  /* 11103011 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103014 mov esp, ebp */
  ESP = (EBP);
  /* 11103016 pop ebp */
  EBP = (pop32());
  /* 11103017 ret  */
  ESPCHK(0x11102f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003020 @ 0x11103020 (263 bytes, 86 insns) */
void f_11103020(void) {
  FTRACE(0x11103020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103020 push ebp */
  push32((uint32_t)(EBP));
  /* 11103021 mov ebp, esp */
  EBP = (ESP);
  /* 11103023 cmp dword ptr [0x1112da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1112da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110302a je 0x11103125 */
  if (C.zf) goto L_11103125;
  /* 11103030 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103034 jne 0x11103045 */
  if (!C.zf) goto L_11103045;
  /* 11103036 mov eax, dword ptr [0x1112da5c] */
  EAX = (r32((uint32_t)(0x1112da5c)));
  /* 1110303b push eax */
  push32((uint32_t)(EAX));
  /* 1110303c call dword ptr [0x11132374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132374))), 0x11103042u);
  /* 11103042 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11103045:;
  /* 11103045 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103049 je 0x11103116 */
  if (C.zf) goto L_11103116;
  /* 1110304f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103052 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103056 je 0x11103069 */
  if (C.zf) goto L_11103069;
  /* 11103058 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110305a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110305d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11103060 push eax */
  push32((uint32_t)(EAX));
  /* 11103061 call 0x11103fd0 */
  push32(0x11103066u); f_11103fd0();
  /* 11103066 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11103069:;
  /* 11103069 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110306c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103070 je 0x11103083 */
  if (C.zf) goto L_11103083;
  /* 11103072 push 2 */
  push32((uint32_t)(0x2u));
  /* 11103074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103077 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1110307a push eax */
  push32((uint32_t)(EAX));
  /* 1110307b call 0x11103fd0 */
  push32(0x11103080u); f_11103fd0();
  /* 11103080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11103083:;
  /* 11103083 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103086 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110308a je 0x1110309d */
  if (C.zf) goto L_1110309d;
  /* 1110308c push 2 */
  push32((uint32_t)(0x2u));
  /* 1110308e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103091 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11103094 push eax */
  push32((uint32_t)(EAX));
  /* 11103095 call 0x11103fd0 */
  push32(0x1110309au); f_11103fd0();
  /* 1110309a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110309d:;
  /* 1110309d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111030a0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111030a4 je 0x111030b7 */
  if (C.zf) goto L_111030b7;
  /* 111030a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111030a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111030ab mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 111030ae push eax */
  push32((uint32_t)(EAX));
  /* 111030af call 0x11103fd0 */
  push32(0x111030b4u); f_11103fd0();
  /* 111030b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111030b7:;
  /* 111030b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111030ba cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111030be je 0x111030d1 */
  if (C.zf) goto L_111030d1;
  /* 111030c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111030c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111030c5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 111030c8 push eax */
  push32((uint32_t)(EAX));
  /* 111030c9 call 0x11103fd0 */
  push32(0x111030ceu); f_11103fd0();
  /* 111030ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111030d1:;
  /* 111030d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111030d4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111030d8 je 0x111030eb */
  if (C.zf) goto L_111030eb;
  /* 111030da push 2 */
  push32((uint32_t)(0x2u));
  /* 111030dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111030df mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 111030e2 push eax */
  push32((uint32_t)(EAX));
  /* 111030e3 call 0x11103fd0 */
  push32(0x111030e8u); f_11103fd0();
  /* 111030e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111030eb:;
  /* 111030eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111030ee cmp dword ptr [ecx + 0x50], 0x1112dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1112dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111030f5 je 0x11103108 */
  if (C.zf) goto L_11103108;
  /* 111030f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111030f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111030fc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 111030ff push eax */
  push32((uint32_t)(EAX));
  /* 11103100 call 0x11103fd0 */
  push32(0x11103105u); f_11103fd0();
  /* 11103105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11103108:;
  /* 11103108 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110310a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110310d push ecx */
  push32((uint32_t)(ECX));
  /* 1110310e call 0x11103fd0 */
  push32(0x11103113u); f_11103fd0();
  /* 11103113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11103116:;
  /* 11103116 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103118 mov edx, dword ptr [0x1112da5c] */
  EDX = (r32((uint32_t)(0x1112da5c)));
  /* 1110311e push edx */
  push32((uint32_t)(EDX));
  /* 1110311f call dword ptr [0x11132364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132364))), 0x11103125u);
L_11103125:;
  /* 11103125 pop ebp */
  EBP = (pop32());
  /* 11103126 ret  */
  ESPCHK(0x11103020u, _esp0);
  ESP += 4; return;
}

/* FUN_10003130 @ 0x11103130 (11 bytes, 5 insns) */
void f_11103130(void) {
  FTRACE(0x11103130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103130 push ebp */
  push32((uint32_t)(EBP));
  /* 11103131 mov ebp, esp */
  EBP = (ESP);
  /* 11103133 call dword ptr [0x11132360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132360))), 0x11103139u);
  /* 11103139 pop ebp */
  EBP = (pop32());
  /* 1110313a ret  */
  ESPCHK(0x11103130u, _esp0);
  ESP += 4; return;
}

/* FUN_10003140 @ 0x11103140 (11 bytes, 5 insns) */
void f_11103140(void) {
  FTRACE(0x11103140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103140 push ebp */
  push32((uint32_t)(EBP));
  /* 11103141 mov ebp, esp */
  EBP = (ESP);
  /* 11103143 call dword ptr [0x1113237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113237c))), 0x11103149u);
  /* 11103149 pop ebp */
  EBP = (pop32());
  /* 1110314a ret  */
  ESPCHK(0x11103140u, _esp0);
  ESP += 4; return;
}

/* FUN_10003150 @ 0x11103150 (804 bytes, 236 insns) */
void f_11103150(void) {
  FTRACE(0x11103150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103150 push ebp */
  push32((uint32_t)(EBP));
  /* 11103151 mov ebp, esp */
  EBP = (ESP);
  /* 11103153 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11103156 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1110315b push 0x1112a488 */
  push32((uint32_t)(0x1112a488u));
  /* 11103160 push 2 */
  push32((uint32_t)(0x2u));
  /* 11103162 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11103167 call 0x11103540 */
  push32(0x1110316cu); f_11103540();
  /* 1110316c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110316f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11103172 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103176 jne 0x11103182 */
  if (!C.zf) goto L_11103182;
  /* 11103178 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1110317a call 0x111024b0 */
  push32(0x1110317fu); f_111024b0();
  /* 1110317f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11103182:;
  /* 11103182 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11103185 mov dword ptr [0x11130ee0], eax */
  w32((uint32_t)(0x11130ee0), (EAX));
  /* 1110318a mov dword ptr [0x1113101c], 0x20 */
  w32((uint32_t)(0x1113101c), (0x20u));
  /* 11103194 jmp 0x1110319f */
  goto L_1110319f;
L_11103196:;
  /* 11103196 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11103199 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110319c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1110319f:;
  /* 1110319f mov edx, dword ptr [0x11130ee0] */
  EDX = (r32((uint32_t)(0x11130ee0)));
  /* 111031a5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111031ab cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111031ae jae 0x111031d3 */
  if (!C.cf) goto L_111031d3;
  /* 111031b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111031b3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 111031b7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111031ba mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111031c0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111031c3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 111031c7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111031ca mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 111031d1 jmp 0x11103196 */
  goto L_11103196;
L_111031d3:;
  /* 111031d3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 111031d6 push ecx */
  push32((uint32_t)(ECX));
  /* 111031d7 call dword ptr [0x11132388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132388))), 0x111031ddu);
  /* 111031dd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 111031e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111031e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111031e8 je 0x11103375 */
  if (C.zf) goto L_11103375;
  /* 111031ee cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111031f2 je 0x11103375 */
  if (C.zf) goto L_11103375;
  /* 111031f8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111031fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111031fd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11103200 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11103203 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103206 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11103209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110320c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110320f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11103212 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103219 jge 0x11103223 */
  if ((C.sf==C.of)) goto L_11103223;
  /* 1110321b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1110321e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11103221 jmp 0x1110322a */
  goto L_1110322a;
L_11103223:;
  /* 11103223 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1110322a:;
  /* 1110322a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1110322d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11103230 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11103237 jmp 0x11103242 */
  goto L_11103242;
L_11103239:;
  /* 11103239 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1110323c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110323f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11103242:;
  /* 11103242 mov ecx, dword ptr [0x1113101c] */
  ECX = (r32((uint32_t)(0x1113101c)));
  /* 11103248 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110324b jge 0x111032e2 */
  if ((C.sf==C.of)) goto L_111032e2;
  /* 11103251 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11103256 push 0x1112a488 */
  push32((uint32_t)(0x1112a488u));
  /* 1110325b push 2 */
  push32((uint32_t)(0x2u));
  /* 1110325d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11103262 call 0x11103540 */
  push32(0x11103267u); f_11103540();
  /* 11103267 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110326a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1110326d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103271 jne 0x1110327e */
  if (!C.zf) goto L_1110327e;
  /* 11103273 mov edx, dword ptr [0x1113101c] */
  EDX = (r32((uint32_t)(0x1113101c)));
  /* 11103279 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1110327c jmp 0x111032e2 */
  goto L_111032e2;
L_1110327e:;
  /* 1110327e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11103281 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11103284 mov dword ptr [eax*4 + 0x11130ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x11130ee0), (ECX));
  /* 1110328b mov edx, dword ptr [0x1113101c] */
  EDX = (r32((uint32_t)(0x1113101c)));
  /* 11103291 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103294 mov dword ptr [0x1113101c], edx */
  w32((uint32_t)(0x1113101c), (EDX));
  /* 1110329a jmp 0x111032a5 */
  goto L_111032a5;
L_1110329c:;
  /* 1110329c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1110329f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111032a2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_111032a5:;
  /* 111032a5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 111032a8 mov edx, dword ptr [ecx*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11130ee0)));
  /* 111032af add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111032b5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111032b8 jae 0x111032dd */
  if (!C.cf) goto L_111032dd;
  /* 111032ba mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111032bd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 111032c1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111032c4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 111032ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111032cd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 111032d1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111032d4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 111032db jmp 0x1110329c */
  goto L_1110329c;
L_111032dd:;
  /* 111032dd jmp 0x11103239 */
  goto L_11103239;
L_111032e2:;
  /* 111032e2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 111032e9 jmp 0x11103306 */
  goto L_11103306;
L_111032eb:;
  /* 111032eb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 111032ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111032f1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 111032f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111032f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111032fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111032fd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11103300 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103303 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11103306:;
  /* 11103306 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11103309 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110330c jge 0x11103375 */
  if ((C.sf==C.of)) goto L_11103375;
  /* 1110330e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11103311 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103314 je 0x11103370 */
  if (C.zf) goto L_11103370;
  /* 11103316 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103319 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110331c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1110331f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11103321 je 0x11103370 */
  if (C.zf) goto L_11103370;
  /* 11103323 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103326 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11103329 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1110332c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110332e jne 0x11103340 */
  if (!C.zf) goto L_11103340;
  /* 11103330 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11103333 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11103335 push edx */
  push32((uint32_t)(EDX));
  /* 11103336 call dword ptr [0x11132384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132384))), 0x1110333cu);
  /* 1110333c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110333e je 0x11103370 */
  if (C.zf) goto L_11103370;
L_11103340:;
  /* 11103340 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11103343 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11103346 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11103349 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1110334c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110334f mov edx, dword ptr [eax*4 + 0x11130ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 11103356 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103358 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1110335b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1110335e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11103361 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11103363 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11103365 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11103368 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110336b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1110336d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11103370:;
  /* 11103370 jmp 0x111032eb */
  goto L_111032eb;
L_11103375:;
  /* 11103375 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1110337c jmp 0x11103387 */
  goto L_11103387;
L_1110337e:;
  /* 1110337e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11103381 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103384 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11103387:;
  /* 11103387 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110338b jge 0x11103464 */
  if ((C.sf==C.of)) goto L_11103464;
  /* 11103391 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11103394 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11103397 mov edx, dword ptr [0x11130ee0] */
  EDX = (r32((uint32_t)(0x11130ee0)));
  /* 1110339d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110339f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 111033a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 111033a5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111033a8 jne 0x11103450 */
  if (!C.zf) goto L_11103450;
  /* 111033ae mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 111033b1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 111033b5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111033b9 jne 0x111033c4 */
  if (!C.zf) goto L_111033c4;
  /* 111033bb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 111033c2 jmp 0x111033d4 */
  goto L_111033d4;
L_111033c4:;
  /* 111033c4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 111033c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111033ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 111033cc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111033ce add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111033d1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_111033d4:;
  /* 111033d4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 111033d7 push eax */
  push32((uint32_t)(EAX));
  /* 111033d8 call dword ptr [0x11132334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132334))), 0x111033deu);
  /* 111033de mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 111033e1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111033e5 je 0x1110343f */
  if (C.zf) goto L_1110343f;
  /* 111033e7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 111033ea push ecx */
  push32((uint32_t)(ECX));
  /* 111033eb call dword ptr [0x11132384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132384))), 0x111033f1u);
  /* 111033f1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 111033f4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111033f8 je 0x1110343f */
  if (C.zf) goto L_1110343f;
  /* 111033fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111033fd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11103400 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11103402 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11103405 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110340b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110340e jne 0x11103420 */
  if (!C.zf) goto L_11103420;
  /* 11103410 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11103413 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11103416 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11103418 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1110341b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1110341e jmp 0x1110343d */
  goto L_1110343d;
L_11103420:;
  /* 11103420 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11103423 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11103429 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110342c jne 0x1110343d */
  if (!C.zf) goto L_1110343d;
  /* 1110342e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11103431 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11103434 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11103437 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1110343a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1110343d:;
  /* 1110343d jmp 0x1110344e */
  goto L_1110344e;
L_1110343f:;
  /* 1110343f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11103442 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11103445 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11103448 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1110344b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1110344e:;
  /* 1110344e jmp 0x1110345f */
  goto L_1110345f;
L_11103450:;
  /* 11103450 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11103453 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11103456 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11103459 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1110345c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1110345f:;
  /* 1110345f jmp 0x1110337e */
  goto L_1110337e;
L_11103464:;
  /* 11103464 mov eax, dword ptr [0x1113101c] */
  EAX = (r32((uint32_t)(0x1113101c)));
  /* 11103469 push eax */
  push32((uint32_t)(EAX));
  /* 1110346a call dword ptr [0x11132380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132380))), 0x11103470u);
  /* 11103470 mov esp, ebp */
  ESP = (EBP);
  /* 11103472 pop ebp */
  EBP = (pop32());
  /* 11103473 ret  */
  ESPCHK(0x11103150u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11103480 (155 bytes, 45 insns) */
void f_11103480(void) {
  FTRACE(0x11103480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103480 push ebp */
  push32((uint32_t)(EBP));
  /* 11103481 mov ebp, esp */
  EBP = (ESP);
  /* 11103483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11103486 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1110348d jmp 0x11103498 */
  goto L_11103498;
L_1110348f:;
  /* 1110348f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103492 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103495 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11103498:;
  /* 11103498 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110349c jge 0x11103517 */
  if ((C.sf==C.of)) goto L_11103517;
  /* 1110349e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111034a1 cmp dword ptr [ecx*4 + 0x11130ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11130ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111034a9 je 0x11103512 */
  if (C.zf) goto L_11103512;
  /* 111034ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111034ae mov eax, dword ptr [edx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11130ee0)));
  /* 111034b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111034b8 jmp 0x111034c3 */
  goto L_111034c3;
L_111034ba:;
  /* 111034ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111034bd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111034c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111034c3:;
  /* 111034c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111034c6 mov eax, dword ptr [edx*4 + 0x11130ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11130ee0)));
  /* 111034cd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111034d2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111034d5 jae 0x111034ef */
  if (!C.cf) goto L_111034ef;
  /* 111034d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111034da cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111034de je 0x111034ed */
  if (C.zf) goto L_111034ed;
  /* 111034e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111034e3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111034e6 push edx */
  push32((uint32_t)(EDX));
  /* 111034e7 call dword ptr [0x1113238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113238c))), 0x111034edu);
L_111034ed:;
  /* 111034ed jmp 0x111034ba */
  goto L_111034ba;
L_111034ef:;
  /* 111034ef push 2 */
  push32((uint32_t)(0x2u));
  /* 111034f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111034f4 mov ecx, dword ptr [eax*4 + 0x11130ee0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11130ee0)));
  /* 111034fb push ecx */
  push32((uint32_t)(ECX));
  /* 111034fc call 0x11103fd0 */
  push32(0x11103501u); f_11103fd0();
  /* 11103501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103504 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103507 mov dword ptr [edx*4 + 0x11130ee0], 0 */
  w32((uint32_t)(EDX*4 + 0x11130ee0), (0x0u));
L_11103512:;
  /* 11103512 jmp 0x1110348f */
  goto L_1110348f;
L_11103517:;
  /* 11103517 mov esp, ebp */
  ESP = (EBP);
  /* 11103519 pop ebp */
  EBP = (pop32());
  /* 1110351a ret  */
  ESPCHK(0x11103480u, _esp0);
  ESP += 4; return;
}

/* FUN_10003520 @ 0x11103520 (29 bytes, 13 insns) */
void f_11103520(void) {
  FTRACE(0x11103520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103520 push ebp */
  push32((uint32_t)(EBP));
  /* 11103521 mov ebp, esp */
  EBP = (ESP);
  /* 11103523 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103525 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103527 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103529 mov eax, dword ptr [0x1112f6f8] */
  EAX = (r32((uint32_t)(0x1112f6f8)));
  /* 1110352e push eax */
  push32((uint32_t)(EAX));
  /* 1110352f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103532 push ecx */
  push32((uint32_t)(ECX));
  /* 11103533 call 0x11103590 */
  push32(0x11103538u); f_11103590();
  /* 11103538 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110353b pop ebp */
  EBP = (pop32());
  /* 1110353c ret  */
  ESPCHK(0x11103520u, _esp0);
  ESP += 4; return;
}

/* FUN_10003540 @ 0x11103540 (35 bytes, 16 insns) */
void f_11103540(void) {
  FTRACE(0x11103540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103540 push ebp */
  push32((uint32_t)(EBP));
  /* 11103541 mov ebp, esp */
  EBP = (ESP);
  /* 11103543 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11103546 push eax */
  push32((uint32_t)(EAX));
  /* 11103547 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110354a push ecx */
  push32((uint32_t)(ECX));
  /* 1110354b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110354e push edx */
  push32((uint32_t)(EDX));
  /* 1110354f mov eax, dword ptr [0x1112f6f8] */
  EAX = (r32((uint32_t)(0x1112f6f8)));
  /* 11103554 push eax */
  push32((uint32_t)(EAX));
  /* 11103555 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103558 push ecx */
  push32((uint32_t)(ECX));
  /* 11103559 call 0x11103590 */
  push32(0x1110355eu); f_11103590();
  /* 1110355e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103561 pop ebp */
  EBP = (pop32());
  /* 11103562 ret  */
  ESPCHK(0x11103540u, _esp0);
  ESP += 4; return;
}

/* FUN_10003570 @ 0x11103570 (27 bytes, 13 insns) */
void f_11103570(void) {
  FTRACE(0x11103570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103570 push ebp */
  push32((uint32_t)(EBP));
  /* 11103571 mov ebp, esp */
  EBP = (ESP);
  /* 11103573 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103575 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103577 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103579 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110357c push eax */
  push32((uint32_t)(EAX));
  /* 1110357d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103580 push ecx */
  push32((uint32_t)(ECX));
  /* 11103581 call 0x11103590 */
  push32(0x11103586u); f_11103590();
  /* 11103586 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103589 pop ebp */
  EBP = (pop32());
  /* 1110358a ret  */
  ESPCHK(0x11103570u, _esp0);
  ESP += 4; return;
}

/* FUN_10003590 @ 0x11103590 (94 bytes, 38 insns) */
void f_11103590(void) {
  FTRACE(0x11103590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103590 push ebp */
  push32((uint32_t)(EBP));
  /* 11103591 mov ebp, esp */
  EBP = (ESP);
  /* 11103593 push ecx */
  push32((uint32_t)(ECX));
L_11103594:;
  /* 11103594 push 9 */
  push32((uint32_t)(0x9u));
  /* 11103596 call 0x11106f40 */
  push32(0x1110359bu); f_11106f40();
  /* 1110359b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110359e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111035a1 push eax */
  push32((uint32_t)(EAX));
  /* 111035a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111035a5 push ecx */
  push32((uint32_t)(ECX));
  /* 111035a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111035a9 push edx */
  push32((uint32_t)(EDX));
  /* 111035aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111035ad push eax */
  push32((uint32_t)(EAX));
  /* 111035ae call 0x11103610 */
  push32(0x111035b3u); f_11103610();
  /* 111035b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111035b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111035b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 111035bb call 0x11106fe0 */
  push32(0x111035c0u); f_11106fe0();
  /* 111035c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111035c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111035c7 jne 0x111035cf */
  if (!C.zf) goto L_111035cf;
  /* 111035c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111035cd jne 0x111035d4 */
  if (!C.zf) goto L_111035d4;
L_111035cf:;
  /* 111035cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111035d2 jmp 0x111035ea */
  goto L_111035ea;
L_111035d4:;
  /* 111035d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111035d7 push ecx */
  push32((uint32_t)(ECX));
  /* 111035d8 call 0x11107280 */
  push32(0x111035ddu); f_11107280();
  /* 111035dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111035e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111035e2 jne 0x111035e8 */
  if (!C.zf) goto L_111035e8;
  /* 111035e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111035e6 jmp 0x111035ea */
  goto L_111035ea;
L_111035e8:;
  /* 111035e8 jmp 0x11103594 */
  goto L_11103594;
L_111035ea:;
  /* 111035ea mov esp, ebp */
  ESP = (EBP);
  /* 111035ec pop ebp */
  EBP = (pop32());
  /* 111035ed ret  */
  ESPCHK(0x11103590u, _esp0);
  ESP += 4; return;
}

/* FUN_100035f0 @ 0x111035f0 (23 bytes, 11 insns) */
void f_111035f0(void) {
  FTRACE(0x111035f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111035f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111035f1 mov ebp, esp */
  EBP = (ESP);
  /* 111035f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111035f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111035f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111035f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111035fc push eax */
  push32((uint32_t)(EAX));
  /* 111035fd call 0x11103610 */
  push32(0x11103602u); f_11103610();
  /* 11103602 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103605 pop ebp */
  EBP = (pop32());
  /* 11103606 ret  */
  ESPCHK(0x111035f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003610 @ 0x11103610 (787 bytes, 254 insns) */
void f_11103610(void) {
  FTRACE(0x11103610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103610 push ebp */
  push32((uint32_t)(EBP));
  /* 11103611 mov ebp, esp */
  EBP = (ESP);
  /* 11103613 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11103616 push ebx */
  push32((uint32_t)(EBX));
  /* 11103617 push esi */
  push32((uint32_t)(ESI));
  /* 11103618 push edi */
  push32((uint32_t)(EDI));
  /* 11103619 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11103620 mov eax, dword ptr [0x1112da84] */
  EAX = (r32((uint32_t)(0x1112da84)));
  /* 11103625 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11103628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110362a je 0x1110365c */
  if (C.zf) goto L_1110365c;
L_1110362c:;
  /* 1110362c call 0x111046e0 */
  push32(0x11103631u); f_111046e0();
  /* 11103631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11103633 jne 0x11103656 */
  if (!C.zf) goto L_11103656;
  /* 11103635 push 0x1112a57c */
  push32((uint32_t)(0x1112a57cu));
  /* 1110363a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110363c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11103641 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11103646 push 2 */
  push32((uint32_t)(0x2u));
  /* 11103648 call 0x11102600 */
  push32(0x1110364du); f_11102600();
  /* 1110364d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103650 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103653 jne 0x11103656 */
  if (!C.zf) goto L_11103656;
  /* 11103655 int3  */
  x86_unimpl("int3 @ 0x11103655");
L_11103656:;
  /* 11103656 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11103658 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110365a jne 0x1110362c */
  if (!C.zf) goto L_1110362c;
L_1110365c:;
  /* 1110365c mov edx, dword ptr [0x1112da88] */
  EDX = (r32((uint32_t)(0x1112da88)));
  /* 11103662 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11103665 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103668 cmp eax, dword ptr [0x1112da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110366e jne 0x11103671 */
  if (!C.zf) goto L_11103671;
  /* 11103670 int3  */
  x86_unimpl("int3 @ 0x11103670");
L_11103671:;
  /* 11103671 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11103674 push ecx */
  push32((uint32_t)(ECX));
  /* 11103675 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103678 push edx */
  push32((uint32_t)(EDX));
  /* 11103679 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110367c push eax */
  push32((uint32_t)(EAX));
  /* 1110367d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103680 push ecx */
  push32((uint32_t)(ECX));
  /* 11103681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103684 push edx */
  push32((uint32_t)(EDX));
  /* 11103685 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103687 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103689 call dword ptr [0x1112dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112dc90))), 0x1110368fu);
  /* 1110368f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11103694 jne 0x111036f4 */
  if (!C.zf) goto L_111036f4;
  /* 11103696 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110369a je 0x111036c7 */
  if (C.zf) goto L_111036c7;
L_1110369c:;
  /* 1110369c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110369f push eax */
  push32((uint32_t)(EAX));
  /* 111036a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111036a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111036a4 push 0x1112a538 */
  push32((uint32_t)(0x1112a538u));
  /* 111036a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111036ab push 0 */
  push32((uint32_t)(0x0u));
  /* 111036ad push 0 */
  push32((uint32_t)(0x0u));
  /* 111036af push 0 */
  push32((uint32_t)(0x0u));
  /* 111036b1 call 0x11102600 */
  push32(0x111036b6u); f_11102600();
  /* 111036b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111036b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111036bc jne 0x111036bf */
  if (!C.zf) goto L_111036bf;
  /* 111036be int3  */
  x86_unimpl("int3 @ 0x111036be");
L_111036bf:;
  /* 111036bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111036c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111036c3 jne 0x1110369c */
  if (!C.zf) goto L_1110369c;
  /* 111036c5 jmp 0x111036ed */
  goto L_111036ed;
L_111036c7:;
  /* 111036c7 push 0x1112a514 */
  push32((uint32_t)(0x1112a514u));
  /* 111036cc push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 111036d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111036d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111036d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111036d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111036d9 call 0x11102600 */
  push32(0x111036deu); f_11102600();
  /* 111036de add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111036e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111036e4 jne 0x111036e7 */
  if (!C.zf) goto L_111036e7;
  /* 111036e6 int3  */
  x86_unimpl("int3 @ 0x111036e6");
L_111036e7:;
  /* 111036e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111036e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111036eb jne 0x111036c7 */
  if (!C.zf) goto L_111036c7;
L_111036ed:;
  /* 111036ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111036ef jmp 0x1110391c */
  goto L_1110391c;
L_111036f4:;
  /* 111036f4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111036f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111036fd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103700 je 0x11103716 */
  if (C.zf) goto L_11103716;
  /* 11103702 mov edx, dword ptr [0x1112da84] */
  EDX = (r32((uint32_t)(0x1112da84)));
  /* 11103708 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1110370b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110370d jne 0x11103716 */
  if (!C.zf) goto L_11103716;
  /* 1110370f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11103716:;
  /* 11103716 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110371a ja 0x11103727 */
  if ((!C.cf&&!C.zf)) goto L_11103727;
  /* 1110371c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110371f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103722 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103725 jbe 0x11103753 */
  if ((C.cf||C.zf)) goto L_11103753;
L_11103727:;
  /* 11103727 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110372a push ecx */
  push32((uint32_t)(ECX));
  /* 1110372b push 0x1112a4ec */
  push32((uint32_t)(0x1112a4ecu));
  /* 11103730 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103732 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103734 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103736 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103738 call 0x11102600 */
  push32(0x1110373du); f_11102600();
  /* 1110373d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103740 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103743 jne 0x11103746 */
  if (!C.zf) goto L_11103746;
  /* 11103745 int3  */
  x86_unimpl("int3 @ 0x11103745");
L_11103746:;
  /* 11103746 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11103748 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110374a jne 0x11103727 */
  if (!C.zf) goto L_11103727;
  /* 1110374c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110374e jmp 0x1110391c */
  goto L_1110391c;
L_11103753:;
  /* 11103753 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103756 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110375b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110375e je 0x111037a0 */
  if (C.zf) goto L_111037a0;
  /* 11103760 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103764 je 0x111037a0 */
  if (C.zf) goto L_111037a0;
  /* 11103766 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103769 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110376f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103772 je 0x111037a0 */
  if (C.zf) goto L_111037a0;
  /* 11103774 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103778 je 0x111037a0 */
  if (C.zf) goto L_111037a0;
L_1110377a:;
  /* 1110377a push 0x1112a4b8 */
  push32((uint32_t)(0x1112a4b8u));
  /* 1110377f push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11103784 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103786 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110378a push 1 */
  push32((uint32_t)(0x1u));
  /* 1110378c call 0x11102600 */
  push32(0x11103791u); f_11102600();
  /* 11103791 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103794 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103797 jne 0x1110379a */
  if (!C.zf) goto L_1110379a;
  /* 11103799 int3  */
  x86_unimpl("int3 @ 0x11103799");
L_1110379a:;
  /* 1110379a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110379c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110379e jne 0x1110377a */
  if (!C.zf) goto L_1110377a;
L_111037a0:;
  /* 111037a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111037a3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111037a6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111037a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111037ac push ecx */
  push32((uint32_t)(ECX));
  /* 111037ad call 0x11107390 */
  push32(0x111037b2u); f_11107390();
  /* 111037b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111037b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111037b8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111037bc jne 0x111037c5 */
  if (!C.zf) goto L_111037c5;
  /* 111037be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111037c0 jmp 0x1110391c */
  goto L_1110391c;
L_111037c5:;
  /* 111037c5 mov edx, dword ptr [0x1112da88] */
  EDX = (r32((uint32_t)(0x1112da88)));
  /* 111037cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111037ce mov dword ptr [0x1112da88], edx */
  w32((uint32_t)(0x1112da88), (EDX));
  /* 111037d4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111037d8 je 0x11103823 */
  if (C.zf) goto L_11103823;
  /* 111037da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111037dd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111037e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111037e6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 111037ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111037f0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 111037f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111037fa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11103801 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103804 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103807 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1110380a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110380d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11103814 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103817 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1110381e jmp 0x111038c3 */
  goto L_111038c3;
L_11103823:;
  /* 11103823 mov edx, dword ptr [0x1112f55c] */
  EDX = (r32((uint32_t)(0x1112f55c)));
  /* 11103829 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110382c mov dword ptr [0x1112f55c], edx */
  w32((uint32_t)(0x1112f55c), (EDX));
  /* 11103832 mov eax, dword ptr [0x1112f564] */
  EAX = (r32((uint32_t)(0x1112f564)));
  /* 11103837 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110383a mov dword ptr [0x1112f564], eax */
  w32((uint32_t)(0x1112f564), (EAX));
  /* 1110383f mov ecx, dword ptr [0x1112f564] */
  ECX = (r32((uint32_t)(0x1112f564)));
  /* 11103845 cmp ecx, dword ptr [0x1112f568] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1112f568))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110384b jbe 0x11103859 */
  if ((C.cf||C.zf)) goto L_11103859;
  /* 1110384d mov edx, dword ptr [0x1112f564] */
  EDX = (r32((uint32_t)(0x1112f564)));
  /* 11103853 mov dword ptr [0x1112f568], edx */
  w32((uint32_t)(0x1112f568), (EDX));
L_11103859:;
  /* 11103859 cmp dword ptr [0x1112f560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103860 je 0x1110386f */
  if (C.zf) goto L_1110386f;
  /* 11103862 mov eax, dword ptr [0x1112f560] */
  EAX = (r32((uint32_t)(0x1112f560)));
  /* 11103867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110386a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1110386d jmp 0x11103878 */
  goto L_11103878;
L_1110386f:;
  /* 1110386f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103872 mov dword ptr [0x1112f558], edx */
  w32((uint32_t)(0x1112f558), (EDX));
L_11103878:;
  /* 11103878 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110387b mov ecx, dword ptr [0x1112f560] */
  ECX = (r32((uint32_t)(0x1112f560)));
  /* 11103881 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11103883 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103886 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1110388d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103890 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103893 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11103896 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103899 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110389c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1110389f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111038a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111038a5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 111038a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111038ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111038ae mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 111038b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111038b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111038b7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 111038ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111038bd mov dword ptr [0x1112f560], ecx */
  w32((uint32_t)(0x1112f560), (ECX));
L_111038c3:;
  /* 111038c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 111038c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111038c7 mov dl, byte ptr [0x1112da90] */
  DL = (r8((uint32_t)(0x1112da90)));
  /* 111038cd push edx */
  push32((uint32_t)(EDX));
  /* 111038ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111038d1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111038d4 push eax */
  push32((uint32_t)(EAX));
  /* 111038d5 call 0x111072b0 */
  push32(0x111038dau); f_111072b0();
  /* 111038da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111038dd push 4 */
  push32((uint32_t)(0x4u));
  /* 111038df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111038e1 mov cl, byte ptr [0x1112da90] */
  CL = (r8((uint32_t)(0x1112da90)));
  /* 111038e7 push ecx */
  push32((uint32_t)(ECX));
  /* 111038e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111038eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111038ee lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 111038f2 push ecx */
  push32((uint32_t)(ECX));
  /* 111038f3 call 0x111072b0 */
  push32(0x111038f8u); f_111072b0();
  /* 111038f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111038fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111038fe push edx */
  push32((uint32_t)(EDX));
  /* 111038ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103901 mov al, byte ptr [0x1112da92] */
  AL = (r8((uint32_t)(0x1112da92)));
  /* 11103906 push eax */
  push32((uint32_t)(EAX));
  /* 11103907 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110390a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110390d push ecx */
  push32((uint32_t)(ECX));
  /* 1110390e call 0x111072b0 */
  push32(0x11103913u); f_111072b0();
  /* 11103913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103916 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103919 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1110391c:;
  /* 1110391c pop edi */
  EDI = (pop32());
  /* 1110391d pop esi */
  ESI = (pop32());
  /* 1110391e pop ebx */
  EBX = (pop32());
  /* 1110391f mov esp, ebp */
  ESP = (EBP);
  /* 11103921 pop ebp */
  EBP = (pop32());
  /* 11103922 ret  */
  ESPCHK(0x11103610u, _esp0);
  ESP += 4; return;
}

/* FUN_10003930 @ 0x11103930 (27 bytes, 13 insns) */
void f_11103930(void) {
  FTRACE(0x11103930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103930 push ebp */
  push32((uint32_t)(EBP));
  /* 11103931 mov ebp, esp */
  EBP = (ESP);
  /* 11103933 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103935 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103937 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103939 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110393c push eax */
  push32((uint32_t)(EAX));
  /* 1110393d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103940 push ecx */
  push32((uint32_t)(ECX));
  /* 11103941 call 0x11103950 */
  push32(0x11103946u); f_11103950();
  /* 11103946 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103949 pop ebp */
  EBP = (pop32());
  /* 1110394a ret  */
  ESPCHK(0x11103930u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11103950 (96 bytes, 37 insns) */
void f_11103950(void) {
  FTRACE(0x11103950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103950 push ebp */
  push32((uint32_t)(EBP));
  /* 11103951 mov ebp, esp */
  EBP = (ESP);
  /* 11103953 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11103956 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103959 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110395d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11103960 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11103963 push ecx */
  push32((uint32_t)(ECX));
  /* 11103964 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11103967 push edx */
  push32((uint32_t)(EDX));
  /* 11103968 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110396b push eax */
  push32((uint32_t)(EAX));
  /* 1110396c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110396f push ecx */
  push32((uint32_t)(ECX));
  /* 11103970 call 0x11103540 */
  push32(0x11103975u); f_11103540();
  /* 11103975 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103978 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110397b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110397f je 0x111039a9 */
  if (C.zf) goto L_111039a9;
  /* 11103981 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103984 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11103987 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110398a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110398d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11103990:;
  /* 11103990 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103993 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103996 jae 0x111039a9 */
  if (!C.cf) goto L_111039a9;
  /* 11103998 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110399b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1110399e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111039a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111039a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111039a7 jmp 0x11103990 */
  goto L_11103990;
L_111039a9:;
  /* 111039a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111039ac mov esp, ebp */
  ESP = (EBP);
  /* 111039ae pop ebp */
  EBP = (pop32());
  /* 111039af ret  */
  ESPCHK(0x11103950u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b0 @ 0x111039b0 (27 bytes, 13 insns) */
void f_111039b0(void) {
  FTRACE(0x111039b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111039b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111039b1 mov ebp, esp */
  EBP = (ESP);
  /* 111039b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111039b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111039b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111039b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111039bc push eax */
  push32((uint32_t)(EAX));
  /* 111039bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111039c0 push ecx */
  push32((uint32_t)(ECX));
  /* 111039c1 call 0x111039d0 */
  push32(0x111039c6u); f_111039d0();
  /* 111039c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111039c9 pop ebp */
  EBP = (pop32());
  /* 111039ca ret  */
  ESPCHK(0x111039b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x111039d0 (64 bytes, 27 insns) */
void f_111039d0(void) {
  FTRACE(0x111039d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111039d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111039d1 mov ebp, esp */
  EBP = (ESP);
  /* 111039d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111039d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 111039d6 call 0x11106f40 */
  push32(0x111039dbu); f_11106f40();
  /* 111039db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111039de push 1 */
  push32((uint32_t)(0x1u));
  /* 111039e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111039e3 push eax */
  push32((uint32_t)(EAX));
  /* 111039e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111039e7 push ecx */
  push32((uint32_t)(ECX));
  /* 111039e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111039eb push edx */
  push32((uint32_t)(EDX));
  /* 111039ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111039ef push eax */
  push32((uint32_t)(EAX));
  /* 111039f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111039f3 push ecx */
  push32((uint32_t)(ECX));
  /* 111039f4 call 0x11103a10 */
  push32(0x111039f9u); f_11103a10();
  /* 111039f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111039fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111039ff push 9 */
  push32((uint32_t)(0x9u));
  /* 11103a01 call 0x11106fe0 */
  push32(0x11103a06u); f_11106fe0();
  /* 11103a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103a09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103a0c mov esp, ebp */
  ESP = (EBP);
  /* 11103a0e pop ebp */
  EBP = (pop32());
  /* 11103a0f ret  */
  ESPCHK(0x111039d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a10 @ 0x11103a10 (1297 bytes, 431 insns) */
void f_11103a10(void) {
  FTRACE(0x11103a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11103a11 mov ebp, esp */
  EBP = (ESP);
  /* 11103a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11103a16 push ebx */
  push32((uint32_t)(EBX));
  /* 11103a17 push esi */
  push32((uint32_t)(ESI));
  /* 11103a18 push edi */
  push32((uint32_t)(EDI));
  /* 11103a19 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11103a20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103a24 jne 0x11103a43 */
  if (!C.zf) goto L_11103a43;
  /* 11103a26 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11103a29 push eax */
  push32((uint32_t)(EAX));
  /* 11103a2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11103a2d push ecx */
  push32((uint32_t)(ECX));
  /* 11103a2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103a31 push edx */
  push32((uint32_t)(EDX));
  /* 11103a32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103a35 push eax */
  push32((uint32_t)(EAX));
  /* 11103a36 call 0x11103540 */
  push32(0x11103a3bu); f_11103540();
  /* 11103a3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103a3e jmp 0x11103f1a */
  goto L_11103f1a;
L_11103a43:;
  /* 11103a43 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103a47 je 0x11103a66 */
  if (C.zf) goto L_11103a66;
  /* 11103a49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103a4d jne 0x11103a66 */
  if (!C.zf) goto L_11103a66;
  /* 11103a4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103a52 push ecx */
  push32((uint32_t)(ECX));
  /* 11103a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103a56 push edx */
  push32((uint32_t)(EDX));
  /* 11103a57 call 0x11103fd0 */
  push32(0x11103a5cu); f_11103fd0();
  /* 11103a5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103a5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103a61 jmp 0x11103f1a */
  goto L_11103f1a;
L_11103a66:;
  /* 11103a66 mov eax, dword ptr [0x1112da84] */
  EAX = (r32((uint32_t)(0x1112da84)));
  /* 11103a6b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11103a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11103a70 je 0x11103aa2 */
  if (C.zf) goto L_11103aa2;
L_11103a72:;
  /* 11103a72 call 0x111046e0 */
  push32(0x11103a77u); f_111046e0();
  /* 11103a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11103a79 jne 0x11103a9c */
  if (!C.zf) goto L_11103a9c;
  /* 11103a7b push 0x1112a57c */
  push32((uint32_t)(0x1112a57cu));
  /* 11103a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103a82 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11103a87 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11103a8c push 2 */
  push32((uint32_t)(0x2u));
  /* 11103a8e call 0x11102600 */
  push32(0x11103a93u); f_11102600();
  /* 11103a93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103a96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103a99 jne 0x11103a9c */
  if (!C.zf) goto L_11103a9c;
  /* 11103a9b int3  */
  x86_unimpl("int3 @ 0x11103a9b");
L_11103a9c:;
  /* 11103a9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11103a9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11103aa0 jne 0x11103a72 */
  if (!C.zf) goto L_11103a72;
L_11103aa2:;
  /* 11103aa2 mov edx, dword ptr [0x1112da88] */
  EDX = (r32((uint32_t)(0x1112da88)));
  /* 11103aa8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11103aab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11103aae cmp eax, dword ptr [0x1112da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103ab4 jne 0x11103ab7 */
  if (!C.zf) goto L_11103ab7;
  /* 11103ab6 int3  */
  x86_unimpl("int3 @ 0x11103ab6");
L_11103ab7:;
  /* 11103ab7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11103aba push ecx */
  push32((uint32_t)(ECX));
  /* 11103abb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11103abe push edx */
  push32((uint32_t)(EDX));
  /* 11103abf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11103ac2 push eax */
  push32((uint32_t)(EAX));
  /* 11103ac3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 11103ac7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103aca push edx */
  push32((uint32_t)(EDX));
  /* 11103acb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103ace push eax */
  push32((uint32_t)(EAX));
  /* 11103acf push 2 */
  push32((uint32_t)(0x2u));
  /* 11103ad1 call dword ptr [0x1112dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112dc90))), 0x11103ad7u);
  /* 11103ad7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11103adc jne 0x11103b3c */
  if (!C.zf) goto L_11103b3c;
  /* 11103ade cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103ae2 je 0x11103b0f */
  if (C.zf) goto L_11103b0f;
L_11103ae4:;
  /* 11103ae4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11103ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 11103ae8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11103aeb push edx */
  push32((uint32_t)(EDX));
  /* 11103aec push 0x1112a6f8 */
  push32((uint32_t)(0x1112a6f8u));
  /* 11103af1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103af9 call 0x11102600 */
  push32(0x11103afeu); f_11102600();
  /* 11103afe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103b01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103b04 jne 0x11103b07 */
  if (!C.zf) goto L_11103b07;
  /* 11103b06 int3  */
  x86_unimpl("int3 @ 0x11103b06");
L_11103b07:;
  /* 11103b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11103b0b jne 0x11103ae4 */
  if (!C.zf) goto L_11103ae4;
  /* 11103b0d jmp 0x11103b35 */
  goto L_11103b35;
L_11103b0f:;
  /* 11103b0f push 0x1112a6d4 */
  push32((uint32_t)(0x1112a6d4u));
  /* 11103b14 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11103b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103b1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11103b1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11103b1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11103b21 call 0x11102600 */
  push32(0x11103b26u); f_11102600();
  /* 11103b26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103b29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103b2c jne 0x11103b2f */
  if (!C.zf) goto L_11103b2f;
  /* 11103b2e int3  */
  x86_unimpl("int3 @ 0x11103b2e");
L_11103b2f:;
  /* 11103b2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11103b31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11103b33 jne 0x11103b0f */
  if (!C.zf) goto L_11103b0f;
L_11103b35:;
  /* 11103b35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103b37 jmp 0x11103f1a */
  goto L_11103f1a;
L_11103b3c:;
  /* 11103b3c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103b40 jbe 0x11103b6e */
  if ((C.cf||C.zf)) goto L_11103b6e;
L_11103b42:;
  /* 11103b42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103b45 push edx */
  push32((uint32_t)(EDX));
  /* 11103b46 push 0x1112a6a4 */
  push32((uint32_t)(0x1112a6a4u));
  /* 11103b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11103b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11103b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11103b51 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103b53 call 0x11102600 */
  push32(0x11103b58u); f_11102600();
  /* 11103b58 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103b5b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103b5e jne 0x11103b61 */
  if (!C.zf) goto L_11103b61;
  /* 11103b60 int3  */
  x86_unimpl("int3 @ 0x11103b60");
L_11103b61:;
  /* 11103b61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103b63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11103b65 jne 0x11103b42 */
  if (!C.zf) goto L_11103b42;
  /* 11103b67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103b69 jmp 0x11103f1a */
  goto L_11103f1a;
L_11103b6e:;
  /* 11103b6e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103b72 je 0x11103bb6 */
  if (C.zf) goto L_11103bb6;
  /* 11103b74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103b77 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11103b7d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103b80 je 0x11103bb6 */
  if (C.zf) goto L_11103bb6;
  /* 11103b82 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103b85 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11103b8b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103b8e je 0x11103bb6 */
  if (C.zf) goto L_11103bb6;
L_11103b90:;
  /* 11103b90 push 0x1112a4b8 */
  push32((uint32_t)(0x1112a4b8u));
  /* 11103b95 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11103b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11103b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11103b9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11103ba0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103ba2 call 0x11102600 */
  push32(0x11103ba7u); f_11102600();
  /* 11103ba7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103baa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103bad jne 0x11103bb0 */
  if (!C.zf) goto L_11103bb0;
  /* 11103baf int3  */
  x86_unimpl("int3 @ 0x11103baf");
L_11103bb0:;
  /* 11103bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11103bb4 jne 0x11103b90 */
  if (!C.zf) goto L_11103b90;
L_11103bb6:;
  /* 11103bb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11103bba call 0x11104b40 */
  push32(0x11103bbfu); f_11104b40();
  /* 11103bbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103bc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11103bc4 jne 0x11103be7 */
  if (!C.zf) goto L_11103be7;
  /* 11103bc6 push 0x1112a680 */
  push32((uint32_t)(0x1112a680u));
  /* 11103bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11103bcd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11103bd2 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11103bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11103bd9 call 0x11102600 */
  push32(0x11103bdeu); f_11102600();
  /* 11103bde add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103be1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103be4 jne 0x11103be7 */
  if (!C.zf) goto L_11103be7;
  /* 11103be6 int3  */
  x86_unimpl("int3 @ 0x11103be6");
L_11103be7:;
  /* 11103be7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11103be9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11103beb jne 0x11103bb6 */
  if (!C.zf) goto L_11103bb6;
  /* 11103bed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103bf0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11103bf3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11103bf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103bf9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103bfd jne 0x11103c06 */
  if (!C.zf) goto L_11103c06;
  /* 11103bff mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11103c06:;
  /* 11103c06 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103c0a je 0x11103c4a */
  if (C.zf) goto L_11103c4a;
L_11103c0c:;
  /* 11103c0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103c0f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103c16 jne 0x11103c21 */
  if (!C.zf) goto L_11103c21;
  /* 11103c18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103c1b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103c1f je 0x11103c42 */
  if (C.zf) goto L_11103c42;
L_11103c21:;
  /* 11103c21 push 0x1112a638 */
  push32((uint32_t)(0x1112a638u));
  /* 11103c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103c28 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11103c2d push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11103c32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11103c34 call 0x11102600 */
  push32(0x11103c39u); f_11102600();
  /* 11103c39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103c3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103c3f jne 0x11103c42 */
  if (!C.zf) goto L_11103c42;
  /* 11103c41 int3  */
  x86_unimpl("int3 @ 0x11103c41");
L_11103c42:;
  /* 11103c42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11103c44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11103c46 jne 0x11103c0c */
  if (!C.zf) goto L_11103c0c;
  /* 11103c48 jmp 0x11103cae */
  goto L_11103cae;
L_11103c4a:;
  /* 11103c4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103c4d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11103c50 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11103c55 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103c58 jne 0x11103c6f */
  if (!C.zf) goto L_11103c6f;
  /* 11103c5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103c5d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11103c63 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103c66 jne 0x11103c6f */
  if (!C.zf) goto L_11103c6f;
  /* 11103c68 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11103c6f:;
  /* 11103c6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103c72 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11103c75 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11103c7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103c7d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11103c83 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103c85 je 0x11103ca8 */
  if (C.zf) goto L_11103ca8;
  /* 11103c87 push 0x1112a5fc */
  push32((uint32_t)(0x1112a5fcu));
  /* 11103c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11103c8e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11103c93 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11103c98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11103c9a call 0x11102600 */
  push32(0x11103c9fu); f_11102600();
  /* 11103c9f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103ca2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103ca5 jne 0x11103ca8 */
  if (!C.zf) goto L_11103ca8;
  /* 11103ca7 int3  */
  x86_unimpl("int3 @ 0x11103ca7");
L_11103ca8:;
  /* 11103ca8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11103caa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11103cac jne 0x11103c6f */
  if (!C.zf) goto L_11103c6f;
L_11103cae:;
  /* 11103cae cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103cb2 je 0x11103cd9 */
  if (C.zf) goto L_11103cd9;
  /* 11103cb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103cb7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103cba push eax */
  push32((uint32_t)(EAX));
  /* 11103cbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103cbe push ecx */
  push32((uint32_t)(ECX));
  /* 11103cbf call 0x111074c0 */
  push32(0x11103cc4u); f_111074c0();
  /* 11103cc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103cc7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11103cca cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103cce jne 0x11103cd7 */
  if (!C.zf) goto L_11103cd7;
  /* 11103cd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103cd2 jmp 0x11103f1a */
  goto L_11103f1a;
L_11103cd7:;
  /* 11103cd7 jmp 0x11103cfc */
  goto L_11103cfc;
L_11103cd9:;
  /* 11103cd9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103cdc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103cdf push edx */
  push32((uint32_t)(EDX));
  /* 11103ce0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11103ce3 push eax */
  push32((uint32_t)(EAX));
  /* 11103ce4 call 0x11107410 */
  push32(0x11103ce9u); f_11107410();
  /* 11103ce9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103cec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11103cef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103cf3 jne 0x11103cfc */
  if (!C.zf) goto L_11103cfc;
  /* 11103cf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103cf7 jmp 0x11103f1a */
  goto L_11103f1a;
L_11103cfc:;
  /* 11103cfc mov ecx, dword ptr [0x1112da88] */
  ECX = (r32((uint32_t)(0x1112da88)));
  /* 11103d02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103d05 mov dword ptr [0x1112da88], ecx */
  w32((uint32_t)(0x1112da88), (ECX));
  /* 11103d0b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103d0f jne 0x11103d67 */
  if (!C.zf) goto L_11103d67;
  /* 11103d11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103d14 mov eax, dword ptr [0x1112f55c] */
  EAX = (r32((uint32_t)(0x1112f55c)));
  /* 11103d19 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11103d1c mov dword ptr [0x1112f55c], eax */
  w32((uint32_t)(0x1112f55c), (EAX));
  /* 11103d21 mov ecx, dword ptr [0x1112f55c] */
  ECX = (r32((uint32_t)(0x1112f55c)));
  /* 11103d27 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103d2a mov dword ptr [0x1112f55c], ecx */
  w32((uint32_t)(0x1112f55c), (ECX));
  /* 11103d30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103d33 mov eax, dword ptr [0x1112f564] */
  EAX = (r32((uint32_t)(0x1112f564)));
  /* 11103d38 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11103d3b mov dword ptr [0x1112f564], eax */
  w32((uint32_t)(0x1112f564), (EAX));
  /* 11103d40 mov ecx, dword ptr [0x1112f564] */
  ECX = (r32((uint32_t)(0x1112f564)));
  /* 11103d46 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103d49 mov dword ptr [0x1112f564], ecx */
  w32((uint32_t)(0x1112f564), (ECX));
  /* 11103d4f mov edx, dword ptr [0x1112f564] */
  EDX = (r32((uint32_t)(0x1112f564)));
  /* 11103d55 cmp edx, dword ptr [0x1112f568] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1112f568))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103d5b jbe 0x11103d67 */
  if ((C.cf||C.zf)) goto L_11103d67;
  /* 11103d5d mov eax, dword ptr [0x1112f564] */
  EAX = (r32((uint32_t)(0x1112f564)));
  /* 11103d62 mov dword ptr [0x1112f568], eax */
  w32((uint32_t)(0x1112f568), (EAX));
L_11103d67:;
  /* 11103d67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103d6a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103d6d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11103d70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103d73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103d76 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103d79 jbe 0x11103d9f */
  if ((C.cf||C.zf)) goto L_11103d9f;
  /* 11103d7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103d7e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103d81 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11103d84 push edx */
  push32((uint32_t)(EDX));
  /* 11103d85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103d87 mov al, byte ptr [0x1112da92] */
  AL = (r8((uint32_t)(0x1112da92)));
  /* 11103d8c push eax */
  push32((uint32_t)(EAX));
  /* 11103d8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103d90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103d93 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103d96 push edx */
  push32((uint32_t)(EDX));
  /* 11103d97 call 0x111072b0 */
  push32(0x11103d9cu); f_111072b0();
  /* 11103d9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11103d9f:;
  /* 11103d9f push 4 */
  push32((uint32_t)(0x4u));
  /* 11103da1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11103da3 mov al, byte ptr [0x1112da90] */
  AL = (r8((uint32_t)(0x1112da90)));
  /* 11103da8 push eax */
  push32((uint32_t)(EAX));
  /* 11103da9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103dac add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11103daf push ecx */
  push32((uint32_t)(ECX));
  /* 11103db0 call 0x111072b0 */
  push32(0x11103db5u); f_111072b0();
  /* 11103db5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103db8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103dbc jne 0x11103dd9 */
  if (!C.zf) goto L_11103dd9;
  /* 11103dbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103dc1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11103dc4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11103dc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103dca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11103dcd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11103dd0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103dd3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11103dd6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11103dd9:;
  /* 11103dd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103ddc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103ddf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11103de2:;
  /* 11103de2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103de6 jne 0x11103e17 */
  if (!C.zf) goto L_11103e17;
  /* 11103de8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103dec jne 0x11103df6 */
  if (!C.zf) goto L_11103df6;
  /* 11103dee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103df1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103df4 je 0x11103e17 */
  if (C.zf) goto L_11103e17;
L_11103df6:;
  /* 11103df6 push 0x1112a5c8 */
  push32((uint32_t)(0x1112a5c8u));
  /* 11103dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11103dfd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11103e02 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11103e07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11103e09 call 0x11102600 */
  push32(0x11103e0eu); f_11102600();
  /* 11103e0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103e11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103e14 jne 0x11103e17 */
  if (!C.zf) goto L_11103e17;
  /* 11103e16 int3  */
  x86_unimpl("int3 @ 0x11103e16");
L_11103e17:;
  /* 11103e17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11103e19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11103e1b jne 0x11103de2 */
  if (!C.zf) goto L_11103de2;
  /* 11103e1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103e20 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103e23 je 0x11103e2b */
  if (C.zf) goto L_11103e2b;
  /* 11103e25 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103e29 je 0x11103e33 */
  if (C.zf) goto L_11103e33;
L_11103e2b:;
  /* 11103e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103e2e jmp 0x11103f1a */
  goto L_11103f1a;
L_11103e33:;
  /* 11103e33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103e36 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103e39 je 0x11103e4b */
  if (C.zf) goto L_11103e4b;
  /* 11103e3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103e3e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11103e40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103e43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11103e46 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11103e49 jmp 0x11103e87 */
  goto L_11103e87;
L_11103e4b:;
  /* 11103e4b mov eax, dword ptr [0x1112f558] */
  EAX = (r32((uint32_t)(0x1112f558)));
  /* 11103e50 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103e53 je 0x11103e76 */
  if (C.zf) goto L_11103e76;
  /* 11103e55 push 0x1112a5ac */
  push32((uint32_t)(0x1112a5acu));
  /* 11103e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11103e5c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11103e61 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11103e66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11103e68 call 0x11102600 */
  push32(0x11103e6du); f_11102600();
  /* 11103e6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103e70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103e73 jne 0x11103e76 */
  if (!C.zf) goto L_11103e76;
  /* 11103e75 int3  */
  x86_unimpl("int3 @ 0x11103e75");
L_11103e76:;
  /* 11103e76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11103e78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11103e7a jne 0x11103e4b */
  if (!C.zf) goto L_11103e4b;
  /* 11103e7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103e7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11103e82 mov dword ptr [0x1112f558], eax */
  w32((uint32_t)(0x1112f558), (EAX));
L_11103e87:;
  /* 11103e87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103e8a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103e8e je 0x11103e9f */
  if (C.zf) goto L_11103e9f;
  /* 11103e90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103e93 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11103e96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103e99 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11103e9b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11103e9d jmp 0x11103eda */
  goto L_11103eda;
L_11103e9f:;
  /* 11103e9f mov eax, dword ptr [0x1112f560] */
  EAX = (r32((uint32_t)(0x1112f560)));
  /* 11103ea4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103ea7 je 0x11103eca */
  if (C.zf) goto L_11103eca;
  /* 11103ea9 push 0x1112a590 */
  push32((uint32_t)(0x1112a590u));
  /* 11103eae push 0 */
  push32((uint32_t)(0x0u));
  /* 11103eb0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11103eb5 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11103eba push 2 */
  push32((uint32_t)(0x2u));
  /* 11103ebc call 0x11102600 */
  push32(0x11103ec1u); f_11102600();
  /* 11103ec1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103ec4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103ec7 jne 0x11103eca */
  if (!C.zf) goto L_11103eca;
  /* 11103ec9 int3  */
  x86_unimpl("int3 @ 0x11103ec9");
L_11103eca:;
  /* 11103eca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11103ecc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11103ece jne 0x11103e9f */
  if (!C.zf) goto L_11103e9f;
  /* 11103ed0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103ed3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11103ed5 mov dword ptr [0x1112f560], eax */
  w32((uint32_t)(0x1112f560), (EAX));
L_11103eda:;
  /* 11103eda cmp dword ptr [0x1112f560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11103ee1 je 0x11103ef1 */
  if (C.zf) goto L_11103ef1;
  /* 11103ee3 mov ecx, dword ptr [0x1112f560] */
  ECX = (r32((uint32_t)(0x1112f560)));
  /* 11103ee9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103eec mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11103eef jmp 0x11103ef9 */
  goto L_11103ef9;
L_11103ef1:;
  /* 11103ef1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103ef4 mov dword ptr [0x1112f558], eax */
  w32((uint32_t)(0x1112f558), (EAX));
L_11103ef9:;
  /* 11103ef9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103efc mov edx, dword ptr [0x1112f560] */
  EDX = (r32((uint32_t)(0x1112f560)));
  /* 11103f02 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11103f04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103f07 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11103f0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11103f11 mov dword ptr [0x1112f560], ecx */
  w32((uint32_t)(0x1112f560), (ECX));
  /* 11103f17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11103f1a:;
  /* 11103f1a pop edi */
  EDI = (pop32());
  /* 11103f1b pop esi */
  ESI = (pop32());
  /* 11103f1c pop ebx */
  EBX = (pop32());
  /* 11103f1d mov esp, ebp */
  ESP = (EBP);
  /* 11103f1f pop ebp */
  EBP = (pop32());
  /* 11103f20 ret  */
  ESPCHK(0x11103a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f30 @ 0x11103f30 (27 bytes, 13 insns) */
void f_11103f30(void) {
  FTRACE(0x11103f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11103f31 mov ebp, esp */
  EBP = (ESP);
  /* 11103f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11103f37 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103f39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103f3c push eax */
  push32((uint32_t)(EAX));
  /* 11103f3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103f40 push ecx */
  push32((uint32_t)(ECX));
  /* 11103f41 call 0x11103f50 */
  push32(0x11103f46u); f_11103f50();
  /* 11103f46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103f49 pop ebp */
  EBP = (pop32());
  /* 11103f4a ret  */
  ESPCHK(0x11103f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f50 @ 0x11103f50 (64 bytes, 27 insns) */
void f_11103f50(void) {
  FTRACE(0x11103f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11103f51 mov ebp, esp */
  EBP = (ESP);
  /* 11103f53 push ecx */
  push32((uint32_t)(ECX));
  /* 11103f54 push 9 */
  push32((uint32_t)(0x9u));
  /* 11103f56 call 0x11106f40 */
  push32(0x11103f5bu); f_11106f40();
  /* 11103f5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11103f60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11103f63 push eax */
  push32((uint32_t)(EAX));
  /* 11103f64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11103f67 push ecx */
  push32((uint32_t)(ECX));
  /* 11103f68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11103f6b push edx */
  push32((uint32_t)(EDX));
  /* 11103f6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103f6f push eax */
  push32((uint32_t)(EAX));
  /* 11103f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11103f74 call 0x11103a10 */
  push32(0x11103f79u); f_11103a10();
  /* 11103f79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103f7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11103f7f push 9 */
  push32((uint32_t)(0x9u));
  /* 11103f81 call 0x11106fe0 */
  push32(0x11103f86u); f_11106fe0();
  /* 11103f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103f89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11103f8c mov esp, ebp */
  ESP = (EBP);
  /* 11103f8e pop ebp */
  EBP = (pop32());
  /* 11103f8f ret  */
  ESPCHK(0x11103f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x11103f90 (19 bytes, 9 insns) */
void f_11103f90(void) {
  FTRACE(0x11103f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11103f91 mov ebp, esp */
  EBP = (ESP);
  /* 11103f93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103f95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103f98 push eax */
  push32((uint32_t)(EAX));
  /* 11103f99 call 0x11103fd0 */
  push32(0x11103f9eu); f_11103fd0();
  /* 11103f9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103fa1 pop ebp */
  EBP = (pop32());
  /* 11103fa2 ret  */
  ESPCHK(0x11103f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb0 @ 0x11103fb0 (19 bytes, 9 insns) */
void f_11103fb0(void) {
  FTRACE(0x11103fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11103fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11103fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11103fb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11103fb9 call 0x11104000 */
  push32(0x11103fbeu); f_11104000();
  /* 11103fbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103fc1 pop ebp */
  EBP = (pop32());
  /* 11103fc2 ret  */
  ESPCHK(0x11103fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd0 @ 0x11103fd0 (41 bytes, 16 insns) */
void f_11103fd0(void) {
  FTRACE(0x11103fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11103fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11103fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11103fd3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11103fd5 call 0x11106f40 */
  push32(0x11103fdau); f_11106f40();
  /* 11103fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103fdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11103fe0 push eax */
  push32((uint32_t)(EAX));
  /* 11103fe1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11103fe4 push ecx */
  push32((uint32_t)(ECX));
  /* 11103fe5 call 0x11104000 */
  push32(0x11103feau); f_11104000();
  /* 11103fea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103fed push 9 */
  push32((uint32_t)(0x9u));
  /* 11103fef call 0x11106fe0 */
  push32(0x11103ff4u); f_11106fe0();
  /* 11103ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11103ff7 pop ebp */
  EBP = (pop32());
  /* 11103ff8 ret  */
  ESPCHK(0x11103fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004000 @ 0x11104000 (1004 bytes, 342 insns) */
void f_11104000(void) {
  FTRACE(0x11104000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104000 push ebp */
  push32((uint32_t)(EBP));
  /* 11104001 mov ebp, esp */
  EBP = (ESP);
  /* 11104003 push ecx */
  push32((uint32_t)(ECX));
  /* 11104004 push ebx */
  push32((uint32_t)(EBX));
  /* 11104005 push esi */
  push32((uint32_t)(ESI));
  /* 11104006 push edi */
  push32((uint32_t)(EDI));
  /* 11104007 mov eax, dword ptr [0x1112da84] */
  EAX = (r32((uint32_t)(0x1112da84)));
  /* 1110400c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1110400f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104011 je 0x11104043 */
  if (C.zf) goto L_11104043;
L_11104013:;
  /* 11104013 call 0x111046e0 */
  push32(0x11104018u); f_111046e0();
  /* 11104018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110401a jne 0x1110403d */
  if (!C.zf) goto L_1110403d;
  /* 1110401c push 0x1112a57c */
  push32((uint32_t)(0x1112a57cu));
  /* 11104021 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104023 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11104028 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 1110402d push 2 */
  push32((uint32_t)(0x2u));
  /* 1110402f call 0x11102600 */
  push32(0x11104034u); f_11102600();
  /* 11104034 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104037 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110403a jne 0x1110403d */
  if (!C.zf) goto L_1110403d;
  /* 1110403c int3  */
  x86_unimpl("int3 @ 0x1110403c");
L_1110403d:;
  /* 1110403d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110403f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11104041 jne 0x11104013 */
  if (!C.zf) goto L_11104013;
L_11104043:;
  /* 11104043 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104047 jne 0x1110404e */
  if (!C.zf) goto L_1110404e;
  /* 11104049 jmp 0x111043e5 */
  goto L_111043e5;
L_1110404e:;
  /* 1110404e push 0 */
  push32((uint32_t)(0x0u));
  /* 11104050 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104052 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104054 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11104057 push edx */
  push32((uint32_t)(EDX));
  /* 11104058 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110405a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110405d push eax */
  push32((uint32_t)(EAX));
  /* 1110405e push 3 */
  push32((uint32_t)(0x3u));
  /* 11104060 call dword ptr [0x1112dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112dc90))), 0x11104066u);
  /* 11104066 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110406b jne 0x11104098 */
  if (!C.zf) goto L_11104098;
L_1110406d:;
  /* 1110406d push 0x1112a840 */
  push32((uint32_t)(0x1112a840u));
  /* 11104072 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11104077 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110407b push 0 */
  push32((uint32_t)(0x0u));
  /* 1110407d push 0 */
  push32((uint32_t)(0x0u));
  /* 1110407f call 0x11102600 */
  push32(0x11104084u); f_11102600();
  /* 11104084 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104087 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110408a jne 0x1110408d */
  if (!C.zf) goto L_1110408d;
  /* 1110408c int3  */
  x86_unimpl("int3 @ 0x1110408c");
L_1110408d:;
  /* 1110408d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110408f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11104091 jne 0x1110406d */
  if (!C.zf) goto L_1110406d;
  /* 11104093 jmp 0x111043e5 */
  goto L_111043e5;
L_11104098:;
  /* 11104098 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110409b push edx */
  push32((uint32_t)(EDX));
  /* 1110409c call 0x11104b40 */
  push32(0x111040a1u); f_11104b40();
  /* 111040a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111040a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111040a6 jne 0x111040c9 */
  if (!C.zf) goto L_111040c9;
  /* 111040a8 push 0x1112a680 */
  push32((uint32_t)(0x1112a680u));
  /* 111040ad push 0 */
  push32((uint32_t)(0x0u));
  /* 111040af push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 111040b4 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 111040b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111040bb call 0x11102600 */
  push32(0x111040c0u); f_11102600();
  /* 111040c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111040c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111040c6 jne 0x111040c9 */
  if (!C.zf) goto L_111040c9;
  /* 111040c8 int3  */
  x86_unimpl("int3 @ 0x111040c8");
L_111040c9:;
  /* 111040c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111040cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111040cd jne 0x11104098 */
  if (!C.zf) goto L_11104098;
  /* 111040cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111040d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111040d5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111040d8:;
  /* 111040d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111040db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111040de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111040e3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111040e6 je 0x1110412b */
  if (C.zf) goto L_1110412b;
  /* 111040e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111040eb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111040ef je 0x1110412b */
  if (C.zf) goto L_1110412b;
  /* 111040f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111040f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111040f7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111040fc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111040ff je 0x1110412b */
  if (C.zf) goto L_1110412b;
  /* 11104101 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104104 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104108 je 0x1110412b */
  if (C.zf) goto L_1110412b;
  /* 1110410a push 0x1112a818 */
  push32((uint32_t)(0x1112a818u));
  /* 1110410f push 0 */
  push32((uint32_t)(0x0u));
  /* 11104111 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11104116 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 1110411b push 2 */
  push32((uint32_t)(0x2u));
  /* 1110411d call 0x11102600 */
  push32(0x11104122u); f_11102600();
  /* 11104122 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104125 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104128 jne 0x1110412b */
  if (!C.zf) goto L_1110412b;
  /* 1110412a int3  */
  x86_unimpl("int3 @ 0x1110412a");
L_1110412b:;
  /* 1110412b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110412d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110412f jne 0x111040d8 */
  if (!C.zf) goto L_111040d8;
  /* 11104131 mov eax, dword ptr [0x1112da84] */
  EAX = (r32((uint32_t)(0x1112da84)));
  /* 11104136 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11104139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110413b jne 0x11104206 */
  if (!C.zf) goto L_11104206;
  /* 11104141 push 4 */
  push32((uint32_t)(0x4u));
  /* 11104143 mov cl, byte ptr [0x1112da90] */
  CL = (r8((uint32_t)(0x1112da90)));
  /* 11104149 push ecx */
  push32((uint32_t)(ECX));
  /* 1110414a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110414d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104150 push edx */
  push32((uint32_t)(EDX));
  /* 11104151 call 0x11104650 */
  push32(0x11104156u); f_11104650();
  /* 11104156 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110415b jne 0x111041a0 */
  if (!C.zf) goto L_111041a0;
L_1110415d:;
  /* 1110415d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104160 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104163 push eax */
  push32((uint32_t)(EAX));
  /* 11104164 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104167 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1110416a push edx */
  push32((uint32_t)(EDX));
  /* 1110416b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110416e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11104171 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11104177 mov edx, dword ptr [ecx*4 + 0x1112da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112da94)));
  /* 1110417e push edx */
  push32((uint32_t)(EDX));
  /* 1110417f push 0x1112a7ec */
  push32((uint32_t)(0x1112a7ecu));
  /* 11104184 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104186 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110418a push 1 */
  push32((uint32_t)(0x1u));
  /* 1110418c call 0x11102600 */
  push32(0x11104191u); f_11102600();
  /* 11104191 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104194 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104197 jne 0x1110419a */
  if (!C.zf) goto L_1110419a;
  /* 11104199 int3  */
  x86_unimpl("int3 @ 0x11104199");
L_1110419a:;
  /* 1110419a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110419c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110419e jne 0x1110415d */
  if (!C.zf) goto L_1110415d;
L_111041a0:;
  /* 111041a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 111041a2 mov cl, byte ptr [0x1112da90] */
  CL = (r8((uint32_t)(0x1112da90)));
  /* 111041a8 push ecx */
  push32((uint32_t)(ECX));
  /* 111041a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111041ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111041af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111041b2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 111041b6 push edx */
  push32((uint32_t)(EDX));
  /* 111041b7 call 0x11104650 */
  push32(0x111041bcu); f_11104650();
  /* 111041bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111041bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111041c1 jne 0x11104206 */
  if (!C.zf) goto L_11104206;
L_111041c3:;
  /* 111041c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111041c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111041c9 push eax */
  push32((uint32_t)(EAX));
  /* 111041ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111041cd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111041d0 push edx */
  push32((uint32_t)(EDX));
  /* 111041d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111041d4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 111041d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111041dd mov edx, dword ptr [ecx*4 + 0x1112da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112da94)));
  /* 111041e4 push edx */
  push32((uint32_t)(EDX));
  /* 111041e5 push 0x1112a7c0 */
  push32((uint32_t)(0x1112a7c0u));
  /* 111041ea push 0 */
  push32((uint32_t)(0x0u));
  /* 111041ec push 0 */
  push32((uint32_t)(0x0u));
  /* 111041ee push 0 */
  push32((uint32_t)(0x0u));
  /* 111041f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 111041f2 call 0x11102600 */
  push32(0x111041f7u); f_11102600();
  /* 111041f7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111041fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111041fd jne 0x11104200 */
  if (!C.zf) goto L_11104200;
  /* 111041ff int3  */
  x86_unimpl("int3 @ 0x111041ff");
L_11104200:;
  /* 11104200 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104204 jne 0x111041c3 */
  if (!C.zf) goto L_111041c3;
L_11104206:;
  /* 11104206 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104209 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110420d jne 0x1110427b */
  if (!C.zf) goto L_1110427b;
L_1110420f:;
  /* 1110420f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104212 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104219 jne 0x11104224 */
  if (!C.zf) goto L_11104224;
  /* 1110421b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110421e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104222 je 0x11104245 */
  if (C.zf) goto L_11104245;
L_11104224:;
  /* 11104224 push 0x1112a780 */
  push32((uint32_t)(0x1112a780u));
  /* 11104229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110422b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11104230 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11104235 push 2 */
  push32((uint32_t)(0x2u));
  /* 11104237 call 0x11102600 */
  push32(0x1110423cu); f_11102600();
  /* 1110423c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110423f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104242 jne 0x11104245 */
  if (!C.zf) goto L_11104245;
  /* 11104244 int3  */
  x86_unimpl("int3 @ 0x11104244");
L_11104245:;
  /* 11104245 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11104247 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11104249 jne 0x1110420f */
  if (!C.zf) goto L_1110420f;
  /* 1110424b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110424e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11104251 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104254 push eax */
  push32((uint32_t)(EAX));
  /* 11104255 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11104257 mov cl, byte ptr [0x1112da91] */
  CL = (r8((uint32_t)(0x1112da91)));
  /* 1110425d push ecx */
  push32((uint32_t)(ECX));
  /* 1110425e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104261 push edx */
  push32((uint32_t)(EDX));
  /* 11104262 call 0x111072b0 */
  push32(0x11104267u); f_111072b0();
  /* 11104267 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110426a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110426d push eax */
  push32((uint32_t)(EAX));
  /* 1110426e call 0x111076b0 */
  push32(0x11104273u); f_111076b0();
  /* 11104273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104276 jmp 0x111043e5 */
  goto L_111043e5;
L_1110427b:;
  /* 1110427b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110427e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104282 jne 0x11104291 */
  if (!C.zf) goto L_11104291;
  /* 11104284 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104288 jne 0x11104291 */
  if (!C.zf) goto L_11104291;
  /* 1110428a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11104291:;
  /* 11104291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104294 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11104297 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110429a je 0x111042bd */
  if (C.zf) goto L_111042bd;
  /* 1110429c push 0x1112a760 */
  push32((uint32_t)(0x1112a760u));
  /* 111042a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111042a3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 111042a8 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 111042ad push 2 */
  push32((uint32_t)(0x2u));
  /* 111042af call 0x11102600 */
  push32(0x111042b4u); f_11102600();
  /* 111042b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111042b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111042ba jne 0x111042bd */
  if (!C.zf) goto L_111042bd;
  /* 111042bc int3  */
  x86_unimpl("int3 @ 0x111042bc");
L_111042bd:;
  /* 111042bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111042bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111042c1 jne 0x11104291 */
  if (!C.zf) goto L_11104291;
  /* 111042c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111042c6 mov eax, dword ptr [0x1112f564] */
  EAX = (r32((uint32_t)(0x1112f564)));
  /* 111042cb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111042ce mov dword ptr [0x1112f564], eax */
  w32((uint32_t)(0x1112f564), (EAX));
  /* 111042d3 mov ecx, dword ptr [0x1112da84] */
  ECX = (r32((uint32_t)(0x1112da84)));
  /* 111042d9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 111042dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111042de jne 0x111043bc */
  if (!C.zf) goto L_111043bc;
  /* 111042e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111042e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111042ea je 0x111042fc */
  if (C.zf) goto L_111042fc;
  /* 111042ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111042ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111042f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111042f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 111042f7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111042fa jmp 0x1110433a */
  goto L_1110433a;
L_111042fc:;
  /* 111042fc mov ecx, dword ptr [0x1112f558] */
  ECX = (r32((uint32_t)(0x1112f558)));
  /* 11104302 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104305 je 0x11104328 */
  if (C.zf) goto L_11104328;
  /* 11104307 push 0x1112a748 */
  push32((uint32_t)(0x1112a748u));
  /* 1110430c push 0 */
  push32((uint32_t)(0x0u));
  /* 1110430e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11104313 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11104318 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110431a call 0x11102600 */
  push32(0x1110431fu); f_11102600();
  /* 1110431f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104322 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104325 jne 0x11104328 */
  if (!C.zf) goto L_11104328;
  /* 11104327 int3  */
  x86_unimpl("int3 @ 0x11104327");
L_11104328:;
  /* 11104328 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110432a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110432c jne 0x111042fc */
  if (!C.zf) goto L_111042fc;
  /* 1110432e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104331 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11104334 mov dword ptr [0x1112f558], ecx */
  w32((uint32_t)(0x1112f558), (ECX));
L_1110433a:;
  /* 1110433a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110433d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104341 je 0x11104352 */
  if (C.zf) goto L_11104352;
  /* 11104343 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104346 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11104349 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110434c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1110434e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11104350 jmp 0x1110438f */
  goto L_1110438f;
L_11104352:;
  /* 11104352 mov ecx, dword ptr [0x1112f560] */
  ECX = (r32((uint32_t)(0x1112f560)));
  /* 11104358 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110435b je 0x1110437e */
  if (C.zf) goto L_1110437e;
  /* 1110435d push 0x1112a730 */
  push32((uint32_t)(0x1112a730u));
  /* 11104362 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104364 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11104369 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 1110436e push 2 */
  push32((uint32_t)(0x2u));
  /* 11104370 call 0x11102600 */
  push32(0x11104375u); f_11102600();
  /* 11104375 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104378 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110437b jne 0x1110437e */
  if (!C.zf) goto L_1110437e;
  /* 1110437d int3  */
  x86_unimpl("int3 @ 0x1110437d");
L_1110437e:;
  /* 1110437e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11104380 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11104382 jne 0x11104352 */
  if (!C.zf) goto L_11104352;
  /* 11104384 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104387 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11104389 mov dword ptr [0x1112f560], ecx */
  w32((uint32_t)(0x1112f560), (ECX));
L_1110438f:;
  /* 1110438f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104392 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11104395 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104398 push eax */
  push32((uint32_t)(EAX));
  /* 11104399 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110439b mov cl, byte ptr [0x1112da91] */
  CL = (r8((uint32_t)(0x1112da91)));
  /* 111043a1 push ecx */
  push32((uint32_t)(ECX));
  /* 111043a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111043a5 push edx */
  push32((uint32_t)(EDX));
  /* 111043a6 call 0x111072b0 */
  push32(0x111043abu); f_111072b0();
  /* 111043ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111043ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111043b1 push eax */
  push32((uint32_t)(EAX));
  /* 111043b2 call 0x111076b0 */
  push32(0x111043b7u); f_111076b0();
  /* 111043b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111043ba jmp 0x111043e5 */
  goto L_111043e5;
L_111043bc:;
  /* 111043bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111043bf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 111043c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111043c9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 111043cc push eax */
  push32((uint32_t)(EAX));
  /* 111043cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111043cf mov cl, byte ptr [0x1112da91] */
  CL = (r8((uint32_t)(0x1112da91)));
  /* 111043d5 push ecx */
  push32((uint32_t)(ECX));
  /* 111043d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111043d9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111043dc push edx */
  push32((uint32_t)(EDX));
  /* 111043dd call 0x111072b0 */
  push32(0x111043e2u); f_111072b0();
  /* 111043e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111043e5:;
  /* 111043e5 pop edi */
  EDI = (pop32());
  /* 111043e6 pop esi */
  ESI = (pop32());
  /* 111043e7 pop ebx */
  EBX = (pop32());
  /* 111043e8 mov esp, ebp */
  ESP = (EBP);
  /* 111043ea pop ebp */
  EBP = (pop32());
  /* 111043eb ret  */
  ESPCHK(0x11104000u, _esp0);
  ESP += 4; return;
}

/* FUN_100043f0 @ 0x111043f0 (19 bytes, 9 insns) */
void f_111043f0(void) {
  FTRACE(0x111043f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111043f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111043f1 mov ebp, esp */
  EBP = (ESP);
  /* 111043f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111043f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111043f8 push eax */
  push32((uint32_t)(EAX));
  /* 111043f9 call 0x11104410 */
  push32(0x111043feu); f_11104410();
  /* 111043fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104401 pop ebp */
  EBP = (pop32());
  /* 11104402 ret  */
  ESPCHK(0x111043f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004410 @ 0x11104410 (342 bytes, 119 insns) */
void f_11104410(void) {
  FTRACE(0x11104410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104410 push ebp */
  push32((uint32_t)(EBP));
  /* 11104411 mov ebp, esp */
  EBP = (ESP);
  /* 11104413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104416 push ebx */
  push32((uint32_t)(EBX));
  /* 11104417 push esi */
  push32((uint32_t)(ESI));
  /* 11104418 push edi */
  push32((uint32_t)(EDI));
  /* 11104419 mov eax, dword ptr [0x1112da84] */
  EAX = (r32((uint32_t)(0x1112da84)));
  /* 1110441e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11104421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104423 je 0x11104455 */
  if (C.zf) goto L_11104455;
L_11104425:;
  /* 11104425 call 0x111046e0 */
  push32(0x1110442au); f_111046e0();
  /* 1110442a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110442c jne 0x1110444f */
  if (!C.zf) goto L_1110444f;
  /* 1110442e push 0x1112a57c */
  push32((uint32_t)(0x1112a57cu));
  /* 11104433 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104435 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1110443a push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 1110443f push 2 */
  push32((uint32_t)(0x2u));
  /* 11104441 call 0x11102600 */
  push32(0x11104446u); f_11102600();
  /* 11104446 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104449 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110444c jne 0x1110444f */
  if (!C.zf) goto L_1110444f;
  /* 1110444e int3  */
  x86_unimpl("int3 @ 0x1110444e");
L_1110444f:;
  /* 1110444f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11104451 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11104453 jne 0x11104425 */
  if (!C.zf) goto L_11104425;
L_11104455:;
  /* 11104455 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104457 call 0x11106f40 */
  push32(0x1110445cu); f_11106f40();
  /* 1110445c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110445f:;
  /* 1110445f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104462 push edx */
  push32((uint32_t)(EDX));
  /* 11104463 call 0x11104b40 */
  push32(0x11104468u); f_11104b40();
  /* 11104468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110446b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110446d jne 0x11104490 */
  if (!C.zf) goto L_11104490;
  /* 1110446f push 0x1112a680 */
  push32((uint32_t)(0x1112a680u));
  /* 11104474 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104476 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1110447b push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11104480 push 2 */
  push32((uint32_t)(0x2u));
  /* 11104482 call 0x11102600 */
  push32(0x11104487u); f_11102600();
  /* 11104487 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110448a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110448d jne 0x11104490 */
  if (!C.zf) goto L_11104490;
  /* 1110448f int3  */
  x86_unimpl("int3 @ 0x1110448f");
L_11104490:;
  /* 11104490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104494 jne 0x1110445f */
  if (!C.zf) goto L_1110445f;
  /* 11104496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104499 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110449c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1110449f:;
  /* 1110449f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111044a2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111044a5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111044aa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111044ad je 0x111044f2 */
  if (C.zf) goto L_111044f2;
  /* 111044af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111044b2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111044b6 je 0x111044f2 */
  if (C.zf) goto L_111044f2;
  /* 111044b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111044bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111044be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111044c3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111044c6 je 0x111044f2 */
  if (C.zf) goto L_111044f2;
  /* 111044c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111044cb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111044cf je 0x111044f2 */
  if (C.zf) goto L_111044f2;
  /* 111044d1 push 0x1112a818 */
  push32((uint32_t)(0x1112a818u));
  /* 111044d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111044d8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 111044dd push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 111044e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 111044e4 call 0x11102600 */
  push32(0x111044e9u); f_11102600();
  /* 111044e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111044ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111044ef jne 0x111044f2 */
  if (!C.zf) goto L_111044f2;
  /* 111044f1 int3  */
  x86_unimpl("int3 @ 0x111044f1");
L_111044f2:;
  /* 111044f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111044f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111044f6 jne 0x1110449f */
  if (!C.zf) goto L_1110449f;
  /* 111044f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111044fb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111044ff jne 0x1110450e */
  if (!C.zf) goto L_1110450e;
  /* 11104501 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104505 jne 0x1110450e */
  if (!C.zf) goto L_1110450e;
  /* 11104507 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1110450e:;
  /* 1110450e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104511 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104515 je 0x11104549 */
  if (C.zf) goto L_11104549;
L_11104517:;
  /* 11104517 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110451a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1110451d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104520 je 0x11104543 */
  if (C.zf) goto L_11104543;
  /* 11104522 push 0x1112a760 */
  push32((uint32_t)(0x1112a760u));
  /* 11104527 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104529 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1110452e push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 11104533 push 2 */
  push32((uint32_t)(0x2u));
  /* 11104535 call 0x11102600 */
  push32(0x1110453au); f_11102600();
  /* 1110453a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110453d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104540 jne 0x11104543 */
  if (!C.zf) goto L_11104543;
  /* 11104542 int3  */
  x86_unimpl("int3 @ 0x11104542");
L_11104543:;
  /* 11104543 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11104545 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11104547 jne 0x11104517 */
  if (!C.zf) goto L_11104517;
L_11104549:;
  /* 11104549 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110454c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1110454f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11104552 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104554 call 0x11106fe0 */
  push32(0x11104559u); f_11106fe0();
  /* 11104559 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110455c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110455f pop edi */
  EDI = (pop32());
  /* 11104560 pop esi */
  ESI = (pop32());
  /* 11104561 pop ebx */
  EBX = (pop32());
  /* 11104562 mov esp, ebp */
  ESP = (EBP);
  /* 11104564 pop ebp */
  EBP = (pop32());
  /* 11104565 ret  */
  ESPCHK(0x11104410u, _esp0);
  ESP += 4; return;
}

/* FUN_10004570 @ 0x11104570 (28 bytes, 11 insns) */
void f_11104570(void) {
  FTRACE(0x11104570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104570 push ebp */
  push32((uint32_t)(EBP));
  /* 11104571 mov ebp, esp */
  EBP = (ESP);
  /* 11104573 push ecx */
  push32((uint32_t)(ECX));
  /* 11104574 mov eax, dword ptr [0x1112da8c] */
  EAX = (r32((uint32_t)(0x1112da8c)));
  /* 11104579 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110457c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110457f mov dword ptr [0x1112da8c], ecx */
  w32((uint32_t)(0x1112da8c), (ECX));
  /* 11104585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104588 mov esp, ebp */
  ESP = (EBP);
  /* 1110458a pop ebp */
  EBP = (pop32());
  /* 1110458b ret  */
  ESPCHK(0x11104570u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x11104590 (157 bytes, 59 insns) */
void f_11104590(void) {
  FTRACE(0x11104590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104590 push ebp */
  push32((uint32_t)(EBP));
  /* 11104591 mov ebp, esp */
  EBP = (ESP);
  /* 11104593 push ecx */
  push32((uint32_t)(ECX));
  /* 11104594 push ebx */
  push32((uint32_t)(EBX));
  /* 11104595 push esi */
  push32((uint32_t)(ESI));
  /* 11104596 push edi */
  push32((uint32_t)(EDI));
  /* 11104597 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104599 call 0x11106f40 */
  push32(0x1110459eu); f_11106f40();
  /* 1110459e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111045a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111045a4 push eax */
  push32((uint32_t)(EAX));
  /* 111045a5 call 0x11104b40 */
  push32(0x111045aau); f_11104b40();
  /* 111045aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111045ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111045af je 0x1110461c */
  if (C.zf) goto L_1110461c;
  /* 111045b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111045b4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111045b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111045ba:;
  /* 111045ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111045bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111045c0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111045c5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111045c8 je 0x1110460d */
  if (C.zf) goto L_1110460d;
  /* 111045ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111045cd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111045d1 je 0x1110460d */
  if (C.zf) goto L_1110460d;
  /* 111045d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111045d6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111045d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111045de cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111045e1 je 0x1110460d */
  if (C.zf) goto L_1110460d;
  /* 111045e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111045e6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111045ea je 0x1110460d */
  if (C.zf) goto L_1110460d;
  /* 111045ec push 0x1112a818 */
  push32((uint32_t)(0x1112a818u));
  /* 111045f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111045f3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 111045f8 push 0x1112a570 */
  push32((uint32_t)(0x1112a570u));
  /* 111045fd push 2 */
  push32((uint32_t)(0x2u));
  /* 111045ff call 0x11102600 */
  push32(0x11104604u); f_11102600();
  /* 11104604 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104607 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110460a jne 0x1110460d */
  if (!C.zf) goto L_1110460d;
  /* 1110460c int3  */
  x86_unimpl("int3 @ 0x1110460c");
L_1110460d:;
  /* 1110460d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110460f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11104611 jne 0x111045ba */
  if (!C.zf) goto L_111045ba;
  /* 11104613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104616 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11104619 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1110461c:;
  /* 1110461c push 9 */
  push32((uint32_t)(0x9u));
  /* 1110461e call 0x11106fe0 */
  push32(0x11104623u); f_11106fe0();
  /* 11104623 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104626 pop edi */
  EDI = (pop32());
  /* 11104627 pop esi */
  ESI = (pop32());
  /* 11104628 pop ebx */
  EBX = (pop32());
  /* 11104629 mov esp, ebp */
  ESP = (EBP);
  /* 1110462b pop ebp */
  EBP = (pop32());
  /* 1110462c ret  */
  ESPCHK(0x11104590u, _esp0);
  ESP += 4; return;
}

/* FUN_10004630 @ 0x11104630 (28 bytes, 11 insns) */
void f_11104630(void) {
  FTRACE(0x11104630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104630 push ebp */
  push32((uint32_t)(EBP));
  /* 11104631 mov ebp, esp */
  EBP = (ESP);
  /* 11104633 push ecx */
  push32((uint32_t)(ECX));
  /* 11104634 mov eax, dword ptr [0x1112dc90] */
  EAX = (r32((uint32_t)(0x1112dc90)));
  /* 11104639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110463c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110463f mov dword ptr [0x1112dc90], ecx */
  w32((uint32_t)(0x1112dc90), (ECX));
  /* 11104645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104648 mov esp, ebp */
  ESP = (EBP);
  /* 1110464a pop ebp */
  EBP = (pop32());
  /* 1110464b ret  */
  ESPCHK(0x11104630u, _esp0);
  ESP += 4; return;
}

/* FUN_10004650 @ 0x11104650 (136 bytes, 55 insns) */
void f_11104650(void) {
  FTRACE(0x11104650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104650 push ebp */
  push32((uint32_t)(EBP));
  /* 11104651 mov ebp, esp */
  EBP = (ESP);
  /* 11104653 push ecx */
  push32((uint32_t)(ECX));
  /* 11104654 push ebx */
  push32((uint32_t)(EBX));
  /* 11104655 push esi */
  push32((uint32_t)(ESI));
  /* 11104656 push edi */
  push32((uint32_t)(EDI));
  /* 11104657 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1110465e:;
  /* 1110465e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11104661 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11104664 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104667 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1110466a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110466c je 0x111046ce */
  if (C.zf) goto L_111046ce;
  /* 1110466e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104671 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104673 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11104675 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11104678 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110467e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104681 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104684 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11104687 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104689 je 0x111046cc */
  if (C.zf) goto L_111046cc;
L_1110468b:;
  /* 1110468b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110468e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11104693 push eax */
  push32((uint32_t)(EAX));
  /* 11104694 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104697 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11104699 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1110469c push edx */
  push32((uint32_t)(EDX));
  /* 1110469d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111046a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111046a3 push eax */
  push32((uint32_t)(EAX));
  /* 111046a4 push 0x1112a85c */
  push32((uint32_t)(0x1112a85cu));
  /* 111046a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111046ab push 0 */
  push32((uint32_t)(0x0u));
  /* 111046ad push 0 */
  push32((uint32_t)(0x0u));
  /* 111046af push 0 */
  push32((uint32_t)(0x0u));
  /* 111046b1 call 0x11102600 */
  push32(0x111046b6u); f_11102600();
  /* 111046b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111046b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111046bc jne 0x111046bf */
  if (!C.zf) goto L_111046bf;
  /* 111046be int3  */
  x86_unimpl("int3 @ 0x111046be");
L_111046bf:;
  /* 111046bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111046c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111046c3 jne 0x1110468b */
  if (!C.zf) goto L_1110468b;
  /* 111046c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111046cc:;
  /* 111046cc jmp 0x1110465e */
  goto L_1110465e;
L_111046ce:;
  /* 111046ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111046d1 pop edi */
  EDI = (pop32());
  /* 111046d2 pop esi */
  ESI = (pop32());
  /* 111046d3 pop ebx */
  EBX = (pop32());
  /* 111046d4 mov esp, ebp */
  ESP = (EBP);
  /* 111046d6 pop ebp */
  EBP = (pop32());
  /* 111046d7 ret  */
  ESPCHK(0x11104650u, _esp0);
  ESP += 4; return;
}

/* FUN_100046e0 @ 0x111046e0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_111046e0(void) {
  FTRACE(0x111046e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111046e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111046e1 mov ebp, esp */
  EBP = (ESP);
  /* 111046e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111046e6 push ebx */
  push32((uint32_t)(EBX));
  /* 111046e7 push esi */
  push32((uint32_t)(ESI));
  /* 111046e8 push edi */
  push32((uint32_t)(EDI));
  /* 111046e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111046f0 mov eax, dword ptr [0x1112da84] */
  EAX = (r32((uint32_t)(0x1112da84)));
  /* 111046f5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 111046f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111046fa jne 0x11104706 */
  if (!C.zf) goto L_11104706;
  /* 111046fc mov eax, 1 */
  EAX = (0x1u);
  /* 11104701 jmp 0x11104a38 */
  goto L_11104a38;
L_11104706:;
  /* 11104706 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104708 call 0x11106f40 */
  push32(0x1110470du); f_11106f40();
  /* 1110470d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104710 call 0x11107720 */
  push32(0x11104715u); f_11107720();
  /* 11104715 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11104718 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110471c je 0x11104829 */
  if (C.zf) goto L_11104829;
  /* 11104722 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104726 je 0x11104829 */
  if (C.zf) goto L_11104829;
  /* 1110472c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110472f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11104732 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11104735 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104738 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1110473b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110473f ja 0x111047f2 */
  if ((!C.cf&&!C.zf)) goto L_111047f2;
  /* 11104745 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11104748 jmp dword ptr [eax*4 + 0x11104a3f] */
  switch (EAX) {
    case 0: goto L_111047ca;
    case 1: goto L_111047a2;
    case 2: goto L_1110477a;
    case 3: goto L_1110474f;
    default: x86_unimpl("switch@0x11104748 out of table"); return;
  }
L_1110474f:;
  /* 1110474f push 0x1112a9b0 */
  push32((uint32_t)(0x1112a9b0u));
  /* 11104754 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11104759 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110475b push 0 */
  push32((uint32_t)(0x0u));
  /* 1110475d push 0 */
  push32((uint32_t)(0x0u));
  /* 1110475f push 0 */
  push32((uint32_t)(0x0u));
  /* 11104761 call 0x11102600 */
  push32(0x11104766u); f_11102600();
  /* 11104766 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104769 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110476c jne 0x1110476f */
  if (!C.zf) goto L_1110476f;
  /* 1110476e int3  */
  x86_unimpl("int3 @ 0x1110476e");
L_1110476f:;
  /* 1110476f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11104771 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11104773 jne 0x1110474f */
  if (!C.zf) goto L_1110474f;
  /* 11104775 jmp 0x11104818 */
  goto L_11104818;
L_1110477a:;
  /* 1110477a push 0x1112a98c */
  push32((uint32_t)(0x1112a98cu));
  /* 1110477f push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11104784 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104786 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110478a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110478c call 0x11102600 */
  push32(0x11104791u); f_11102600();
  /* 11104791 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104794 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104797 jne 0x1110479a */
  if (!C.zf) goto L_1110479a;
  /* 11104799 int3  */
  x86_unimpl("int3 @ 0x11104799");
L_1110479a:;
  /* 1110479a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110479c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110479e jne 0x1110477a */
  if (!C.zf) goto L_1110477a;
  /* 111047a0 jmp 0x11104818 */
  goto L_11104818;
L_111047a2:;
  /* 111047a2 push 0x1112a968 */
  push32((uint32_t)(0x1112a968u));
  /* 111047a7 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 111047ac push 0 */
  push32((uint32_t)(0x0u));
  /* 111047ae push 0 */
  push32((uint32_t)(0x0u));
  /* 111047b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111047b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111047b4 call 0x11102600 */
  push32(0x111047b9u); f_11102600();
  /* 111047b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111047bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111047bf jne 0x111047c2 */
  if (!C.zf) goto L_111047c2;
  /* 111047c1 int3  */
  x86_unimpl("int3 @ 0x111047c1");
L_111047c2:;
  /* 111047c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111047c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111047c6 jne 0x111047a2 */
  if (!C.zf) goto L_111047a2;
  /* 111047c8 jmp 0x11104818 */
  goto L_11104818;
L_111047ca:;
  /* 111047ca push 0x1112a944 */
  push32((uint32_t)(0x1112a944u));
  /* 111047cf push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 111047d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111047d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111047d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111047da push 0 */
  push32((uint32_t)(0x0u));
  /* 111047dc call 0x11102600 */
  push32(0x111047e1u); f_11102600();
  /* 111047e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111047e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111047e7 jne 0x111047ea */
  if (!C.zf) goto L_111047ea;
  /* 111047e9 int3  */
  x86_unimpl("int3 @ 0x111047e9");
L_111047ea:;
  /* 111047ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111047ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111047ee jne 0x111047ca */
  if (!C.zf) goto L_111047ca;
  /* 111047f0 jmp 0x11104818 */
  goto L_11104818;
L_111047f2:;
  /* 111047f2 push 0x1112a918 */
  push32((uint32_t)(0x1112a918u));
  /* 111047f7 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 111047fc push 0 */
  push32((uint32_t)(0x0u));
  /* 111047fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11104800 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104802 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104804 call 0x11102600 */
  push32(0x11104809u); f_11102600();
  /* 11104809 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110480c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110480f jne 0x11104812 */
  if (!C.zf) goto L_11104812;
  /* 11104811 int3  */
  x86_unimpl("int3 @ 0x11104811");
L_11104812:;
  /* 11104812 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11104814 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11104816 jne 0x111047f2 */
  if (!C.zf) goto L_111047f2;
L_11104818:;
  /* 11104818 push 9 */
  push32((uint32_t)(0x9u));
  /* 1110481a call 0x11106fe0 */
  push32(0x1110481fu); f_11106fe0();
  /* 1110481f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104824 jmp 0x11104a38 */
  goto L_11104a38;
L_11104829:;
  /* 11104829 mov eax, dword ptr [0x1112f560] */
  EAX = (r32((uint32_t)(0x1112f560)));
  /* 1110482e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11104831 jmp 0x1110483b */
  goto L_1110483b;
L_11104833:;
  /* 11104833 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104836 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11104838 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1110483b:;
  /* 1110483b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110483f je 0x11104a2b */
  if (C.zf) goto L_11104a2b;
  /* 11104845 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1110484c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110484f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11104852 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11104858 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110485b je 0x11104880 */
  if (C.zf) goto L_11104880;
  /* 1110485d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104860 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104864 je 0x11104880 */
  if (C.zf) goto L_11104880;
  /* 11104866 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104869 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1110486c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11104872 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104875 je 0x11104880 */
  if (C.zf) goto L_11104880;
  /* 11104877 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110487a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110487e jne 0x11104898 */
  if (!C.zf) goto L_11104898;
L_11104880:;
  /* 11104880 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104883 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11104886 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110488c mov edx, dword ptr [ecx*4 + 0x1112da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112da94)));
  /* 11104893 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11104896 jmp 0x1110489f */
  goto L_1110489f;
L_11104898:;
  /* 11104898 mov dword ptr [ebp - 0x14], 0x1112a910 */
  w32((uint32_t)(EBP + -0x14), (0x1112a910u));
L_1110489f:;
  /* 1110489f push 4 */
  push32((uint32_t)(0x4u));
  /* 111048a1 mov al, byte ptr [0x1112da90] */
  AL = (r8((uint32_t)(0x1112da90)));
  /* 111048a6 push eax */
  push32((uint32_t)(EAX));
  /* 111048a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111048aa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111048ad push ecx */
  push32((uint32_t)(ECX));
  /* 111048ae call 0x11104650 */
  push32(0x111048b3u); f_11104650();
  /* 111048b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111048b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111048b8 jne 0x111048f4 */
  if (!C.zf) goto L_111048f4;
L_111048ba:;
  /* 111048ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111048bd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111048c0 push edx */
  push32((uint32_t)(EDX));
  /* 111048c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111048c4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 111048c7 push ecx */
  push32((uint32_t)(ECX));
  /* 111048c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111048cb push edx */
  push32((uint32_t)(EDX));
  /* 111048cc push 0x1112a7ec */
  push32((uint32_t)(0x1112a7ecu));
  /* 111048d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111048d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111048d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111048d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111048d9 call 0x11102600 */
  push32(0x111048deu); f_11102600();
  /* 111048de add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111048e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111048e4 jne 0x111048e7 */
  if (!C.zf) goto L_111048e7;
  /* 111048e6 int3  */
  x86_unimpl("int3 @ 0x111048e6");
L_111048e7:;
  /* 111048e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111048e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111048eb jne 0x111048ba */
  if (!C.zf) goto L_111048ba;
  /* 111048ed mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_111048f4:;
  /* 111048f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 111048f6 mov cl, byte ptr [0x1112da90] */
  CL = (r8((uint32_t)(0x1112da90)));
  /* 111048fc push ecx */
  push32((uint32_t)(ECX));
  /* 111048fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104900 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11104903 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104906 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1110490a push edx */
  push32((uint32_t)(EDX));
  /* 1110490b call 0x11104650 */
  push32(0x11104910u); f_11104650();
  /* 11104910 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104913 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104915 jne 0x11104951 */
  if (!C.zf) goto L_11104951;
L_11104917:;
  /* 11104917 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110491a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110491d push eax */
  push32((uint32_t)(EAX));
  /* 1110491e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104921 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11104924 push edx */
  push32((uint32_t)(EDX));
  /* 11104925 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11104928 push eax */
  push32((uint32_t)(EAX));
  /* 11104929 push 0x1112a7c0 */
  push32((uint32_t)(0x1112a7c0u));
  /* 1110492e push 0 */
  push32((uint32_t)(0x0u));
  /* 11104930 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104932 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104934 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104936 call 0x11102600 */
  push32(0x1110493bu); f_11102600();
  /* 1110493b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110493e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104941 jne 0x11104944 */
  if (!C.zf) goto L_11104944;
  /* 11104943 int3  */
  x86_unimpl("int3 @ 0x11104943");
L_11104944:;
  /* 11104944 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11104946 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11104948 jne 0x11104917 */
  if (!C.zf) goto L_11104917;
  /* 1110494a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11104951:;
  /* 11104951 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104954 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104958 jne 0x111049aa */
  if (!C.zf) goto L_111049aa;
  /* 1110495a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110495d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11104960 push ecx */
  push32((uint32_t)(ECX));
  /* 11104961 mov dl, byte ptr [0x1112da91] */
  DL = (r8((uint32_t)(0x1112da91)));
  /* 11104967 push edx */
  push32((uint32_t)(EDX));
  /* 11104968 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110496b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110496e push eax */
  push32((uint32_t)(EAX));
  /* 1110496f call 0x11104650 */
  push32(0x11104974u); f_11104650();
  /* 11104974 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104979 jne 0x111049aa */
  if (!C.zf) goto L_111049aa;
L_1110497b:;
  /* 1110497b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110497e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104981 push ecx */
  push32((uint32_t)(ECX));
  /* 11104982 push 0x1112a8e4 */
  push32((uint32_t)(0x1112a8e4u));
  /* 11104987 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110498b push 0 */
  push32((uint32_t)(0x0u));
  /* 1110498d push 0 */
  push32((uint32_t)(0x0u));
  /* 1110498f call 0x11102600 */
  push32(0x11104994u); f_11102600();
  /* 11104994 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104997 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110499a jne 0x1110499d */
  if (!C.zf) goto L_1110499d;
  /* 1110499c int3  */
  x86_unimpl("int3 @ 0x1110499c");
L_1110499d:;
  /* 1110499d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110499f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111049a1 jne 0x1110497b */
  if (!C.zf) goto L_1110497b;
  /* 111049a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_111049aa:;
  /* 111049aa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111049ae jne 0x11104a26 */
  if (!C.zf) goto L_11104a26;
  /* 111049b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111049b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111049b7 je 0x111049ec */
  if (C.zf) goto L_111049ec;
L_111049b9:;
  /* 111049b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111049bc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 111049bf push edx */
  push32((uint32_t)(EDX));
  /* 111049c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111049c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 111049c6 push ecx */
  push32((uint32_t)(ECX));
  /* 111049c7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 111049ca push edx */
  push32((uint32_t)(EDX));
  /* 111049cb push 0x1112a8c4 */
  push32((uint32_t)(0x1112a8c4u));
  /* 111049d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111049d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111049d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111049d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111049d8 call 0x11102600 */
  push32(0x111049ddu); f_11102600();
  /* 111049dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111049e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111049e3 jne 0x111049e6 */
  if (!C.zf) goto L_111049e6;
  /* 111049e5 int3  */
  x86_unimpl("int3 @ 0x111049e5");
L_111049e6:;
  /* 111049e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111049e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111049ea jne 0x111049b9 */
  if (!C.zf) goto L_111049b9;
L_111049ec:;
  /* 111049ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111049ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 111049f2 push edx */
  push32((uint32_t)(EDX));
  /* 111049f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111049f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111049f9 push eax */
  push32((uint32_t)(EAX));
  /* 111049fa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111049fd push ecx */
  push32((uint32_t)(ECX));
  /* 111049fe push 0x1112a898 */
  push32((uint32_t)(0x1112a898u));
  /* 11104a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104a0b call 0x11102600 */
  push32(0x11104a10u); f_11102600();
  /* 11104a10 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104a13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104a16 jne 0x11104a19 */
  if (!C.zf) goto L_11104a19;
  /* 11104a18 int3  */
  x86_unimpl("int3 @ 0x11104a18");
L_11104a19:;
  /* 11104a19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11104a1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11104a1d jne 0x111049ec */
  if (!C.zf) goto L_111049ec;
  /* 11104a1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11104a26:;
  /* 11104a26 jmp 0x11104833 */
  goto L_11104833;
L_11104a2b:;
  /* 11104a2b push 9 */
  push32((uint32_t)(0x9u));
  /* 11104a2d call 0x11106fe0 */
  push32(0x11104a32u); f_11106fe0();
  /* 11104a32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104a35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11104a38:;
  /* 11104a38 pop edi */
  EDI = (pop32());
  /* 11104a39 pop esi */
  ESI = (pop32());
  /* 11104a3a pop ebx */
  EBX = (pop32());
  /* 11104a3b mov esp, ebp */
  ESP = (EBP);
  /* 11104a3d pop ebp */
  EBP = (pop32());
  /* 11104a3e ret  */
  ESPCHK(0x111046e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a50 @ 0x11104a50 (34 bytes, 13 insns) */
void f_11104a50(void) {
  FTRACE(0x11104a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11104a51 mov ebp, esp */
  EBP = (ESP);
  /* 11104a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11104a54 mov eax, dword ptr [0x1112da84] */
  EAX = (r32((uint32_t)(0x1112da84)));
  /* 11104a59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11104a5c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104a60 je 0x11104a6b */
  if (C.zf) goto L_11104a6b;
  /* 11104a62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104a65 mov dword ptr [0x1112da84], ecx */
  w32((uint32_t)(0x1112da84), (ECX));
L_11104a6b:;
  /* 11104a6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104a6e mov esp, ebp */
  ESP = (EBP);
  /* 11104a70 pop ebp */
  EBP = (pop32());
  /* 11104a71 ret  */
  ESPCHK(0x11104a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a80 @ 0x11104a80 (103 bytes, 38 insns) */
void f_11104a80(void) {
  FTRACE(0x11104a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11104a81 mov ebp, esp */
  EBP = (ESP);
  /* 11104a83 push ecx */
  push32((uint32_t)(ECX));
  /* 11104a84 mov eax, dword ptr [0x1112da84] */
  EAX = (r32((uint32_t)(0x1112da84)));
  /* 11104a89 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11104a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104a8e jne 0x11104a92 */
  if (!C.zf) goto L_11104a92;
  /* 11104a90 jmp 0x11104ae3 */
  goto L_11104ae3;
L_11104a92:;
  /* 11104a92 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104a94 call 0x11106f40 */
  push32(0x11104a99u); f_11106f40();
  /* 11104a99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104a9c mov ecx, dword ptr [0x1112f560] */
  ECX = (r32((uint32_t)(0x1112f560)));
  /* 11104aa2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11104aa5 jmp 0x11104aaf */
  goto L_11104aaf;
L_11104aa7:;
  /* 11104aa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104aaa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11104aac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11104aaf:;
  /* 11104aaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104ab3 je 0x11104ad9 */
  if (C.zf) goto L_11104ad9;
  /* 11104ab5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104ab8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11104abb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11104ac1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104ac4 jne 0x11104ad7 */
  if (!C.zf) goto L_11104ad7;
  /* 11104ac6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11104ac9 push eax */
  push32((uint32_t)(EAX));
  /* 11104aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104acd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 11104ad1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11104ad4u);
  /* 11104ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11104ad7:;
  /* 11104ad7 jmp 0x11104aa7 */
  goto L_11104aa7;
L_11104ad9:;
  /* 11104ad9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104adb call 0x11106fe0 */
  push32(0x11104ae0u); f_11106fe0();
  /* 11104ae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11104ae3:;
  /* 11104ae3 mov esp, ebp */
  ESP = (EBP);
  /* 11104ae5 pop ebp */
  EBP = (pop32());
  /* 11104ae6 ret  */
  ESPCHK(0x11104a80u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11104af0 (75 bytes, 28 insns) */
void f_11104af0(void) {
  FTRACE(0x11104af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11104af1 mov ebp, esp */
  EBP = (ESP);
  /* 11104af3 push ecx */
  push32((uint32_t)(ECX));
  /* 11104af4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104af8 je 0x11104b2d */
  if (C.zf) goto L_11104b2d;
  /* 11104afa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11104afd push eax */
  push32((uint32_t)(EAX));
  /* 11104afe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104b01 push ecx */
  push32((uint32_t)(ECX));
  /* 11104b02 call dword ptr [0x11132370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132370))), 0x11104b08u);
  /* 11104b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104b0a jne 0x11104b2d */
  if (!C.zf) goto L_11104b2d;
  /* 11104b0c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104b10 je 0x11104b24 */
  if (C.zf) goto L_11104b24;
  /* 11104b12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11104b15 push edx */
  push32((uint32_t)(EDX));
  /* 11104b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104b19 push eax */
  push32((uint32_t)(EAX));
  /* 11104b1a call dword ptr [0x11132390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132390))), 0x11104b20u);
  /* 11104b20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104b22 jne 0x11104b2d */
  if (!C.zf) goto L_11104b2d;
L_11104b24:;
  /* 11104b24 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11104b2b jmp 0x11104b34 */
  goto L_11104b34;
L_11104b2d:;
  /* 11104b2d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11104b34:;
  /* 11104b34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104b37 mov esp, ebp */
  ESP = (EBP);
  /* 11104b39 pop ebp */
  EBP = (pop32());
  /* 11104b3a ret  */
  ESPCHK(0x11104af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b40 @ 0x11104b40 (134 bytes, 50 insns) */
void f_11104b40(void) {
  FTRACE(0x11104b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11104b41 mov ebp, esp */
  EBP = (ESP);
  /* 11104b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11104b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104b48 jne 0x11104b4e */
  if (!C.zf) goto L_11104b4e;
  /* 11104b4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104b4c jmp 0x11104bc2 */
  goto L_11104bc2;
L_11104b4e:;
  /* 11104b4e push 1 */
  push32((uint32_t)(0x1u));
  /* 11104b50 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11104b52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104b55 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104b58 push eax */
  push32((uint32_t)(EAX));
  /* 11104b59 call 0x11104af0 */
  push32(0x11104b5eu); f_11104af0();
  /* 11104b5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104b61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104b63 jne 0x11104b69 */
  if (!C.zf) goto L_11104b69;
  /* 11104b65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104b67 jmp 0x11104bc2 */
  goto L_11104bc2;
L_11104b69:;
  /* 11104b69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104b6c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104b6f push ecx */
  push32((uint32_t)(ECX));
  /* 11104b70 call 0x11107840 */
  push32(0x11104b75u); f_11107840();
  /* 11104b75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104b78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11104b7b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104b7f je 0x11104b96 */
  if (C.zf) goto L_11104b96;
  /* 11104b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104b84 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104b87 push edx */
  push32((uint32_t)(EDX));
  /* 11104b88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104b8b push eax */
  push32((uint32_t)(EAX));
  /* 11104b8c call 0x111078a0 */
  push32(0x11104b91u); f_111078a0();
  /* 11104b91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104b94 jmp 0x11104bc2 */
  goto L_11104bc2;
L_11104b96:;
  /* 11104b96 mov ecx, dword ptr [0x1112f514] */
  ECX = (r32((uint32_t)(0x1112f514)));
  /* 11104b9c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11104ba2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11104ba4 je 0x11104bad */
  if (C.zf) goto L_11104bad;
  /* 11104ba6 mov eax, 1 */
  EAX = (0x1u);
  /* 11104bab jmp 0x11104bc2 */
  goto L_11104bc2;
L_11104bad:;
  /* 11104bad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104bb0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104bb3 push edx */
  push32((uint32_t)(EDX));
  /* 11104bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104bb6 mov eax, dword ptr [0x11130eac] */
  EAX = (r32((uint32_t)(0x11130eac)));
  /* 11104bbb push eax */
  push32((uint32_t)(EAX));
  /* 11104bbc call dword ptr [0x11132398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132398))), 0x11104bc2u);
L_11104bc2:;
  /* 11104bc2 mov esp, ebp */
  ESP = (EBP);
  /* 11104bc4 pop ebp */
  EBP = (pop32());
  /* 11104bc5 ret  */
  ESPCHK(0x11104b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bd0 @ 0x11104bd0 (227 bytes, 80 insns) */
void f_11104bd0(void) {
  FTRACE(0x11104bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11104bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11104bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11104bd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104bd7 push eax */
  push32((uint32_t)(EAX));
  /* 11104bd8 call 0x11104b40 */
  push32(0x11104bddu); f_11104b40();
  /* 11104bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104be0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104be2 jne 0x11104beb */
  if (!C.zf) goto L_11104beb;
  /* 11104be4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104be6 jmp 0x11104caf */
  goto L_11104caf;
L_11104beb:;
  /* 11104beb push 9 */
  push32((uint32_t)(0x9u));
  /* 11104bed call 0x11106f40 */
  push32(0x11104bf2u); f_11106f40();
  /* 11104bf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104bf5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104bf8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104bfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11104bfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104c01 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11104c04 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11104c09 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104c0c je 0x11104c30 */
  if (C.zf) goto L_11104c30;
  /* 11104c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104c11 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104c15 je 0x11104c30 */
  if (C.zf) goto L_11104c30;
  /* 11104c17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104c1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11104c1d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11104c22 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104c25 je 0x11104c30 */
  if (C.zf) goto L_11104c30;
  /* 11104c27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104c2a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104c2e jne 0x11104ca3 */
  if (!C.zf) goto L_11104ca3;
L_11104c30:;
  /* 11104c30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11104c32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11104c35 push edx */
  push32((uint32_t)(EDX));
  /* 11104c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104c39 push eax */
  push32((uint32_t)(EAX));
  /* 11104c3a call 0x11104af0 */
  push32(0x11104c3fu); f_11104af0();
  /* 11104c3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104c44 je 0x11104ca3 */
  if (C.zf) goto L_11104ca3;
  /* 11104c46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104c49 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11104c4c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104c4f jne 0x11104ca3 */
  if (!C.zf) goto L_11104ca3;
  /* 11104c51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104c54 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11104c57 cmp ecx, dword ptr [0x1112da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1112da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104c5d jg 0x11104ca3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11104ca3;
  /* 11104c5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104c63 je 0x11104c70 */
  if (C.zf) goto L_11104c70;
  /* 11104c65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11104c68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104c6b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11104c6e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11104c70:;
  /* 11104c70 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104c74 je 0x11104c81 */
  if (C.zf) goto L_11104c81;
  /* 11104c76 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11104c79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104c7c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11104c7f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11104c81:;
  /* 11104c81 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104c85 je 0x11104c92 */
  if (C.zf) goto L_11104c92;
  /* 11104c87 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11104c8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104c8d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11104c90 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11104c92:;
  /* 11104c92 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104c94 call 0x11106fe0 */
  push32(0x11104c99u); f_11106fe0();
  /* 11104c99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104c9c mov eax, 1 */
  EAX = (0x1u);
  /* 11104ca1 jmp 0x11104caf */
  goto L_11104caf;
L_11104ca3:;
  /* 11104ca3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104ca5 call 0x11106fe0 */
  push32(0x11104caau); f_11106fe0();
  /* 11104caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11104caf:;
  /* 11104caf mov esp, ebp */
  ESP = (EBP);
  /* 11104cb1 pop ebp */
  EBP = (pop32());
  /* 11104cb2 ret  */
  ESPCHK(0x11104bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cc0 @ 0x11104cc0 (28 bytes, 11 insns) */
void f_11104cc0(void) {
  FTRACE(0x11104cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11104cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11104cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11104cc4 mov eax, dword ptr [0x11130eb8] */
  EAX = (r32((uint32_t)(0x11130eb8)));
  /* 11104cc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11104ccc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104ccf mov dword ptr [0x11130eb8], ecx */
  w32((uint32_t)(0x11130eb8), (ECX));
  /* 11104cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104cd8 mov esp, ebp */
  ESP = (EBP);
  /* 11104cda pop ebp */
  EBP = (pop32());
  /* 11104cdb ret  */
  ESPCHK(0x11104cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ce0 @ 0x11104ce0 (362 bytes, 116 insns) */
void f_11104ce0(void) {
  FTRACE(0x11104ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11104ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11104ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 11104ce7 push esi */
  push32((uint32_t)(ESI));
  /* 11104ce8 push edi */
  push32((uint32_t)(EDI));
  /* 11104ce9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104ced jne 0x11104d1a */
  if (!C.zf) goto L_11104d1a;
L_11104cef:;
  /* 11104cef push 0x1112a9f8 */
  push32((uint32_t)(0x1112a9f8u));
  /* 11104cf4 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11104cf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11104cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11104cff push 0 */
  push32((uint32_t)(0x0u));
  /* 11104d01 call 0x11102600 */
  push32(0x11104d06u); f_11102600();
  /* 11104d06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104d09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104d0c jne 0x11104d0f */
  if (!C.zf) goto L_11104d0f;
  /* 11104d0e int3  */
  x86_unimpl("int3 @ 0x11104d0e");
L_11104d0f:;
  /* 11104d0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104d11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104d13 jne 0x11104cef */
  if (!C.zf) goto L_11104cef;
  /* 11104d15 jmp 0x11104e43 */
  goto L_11104e43;
L_11104d1a:;
  /* 11104d1a push 9 */
  push32((uint32_t)(0x9u));
  /* 11104d1c call 0x11106f40 */
  push32(0x11104d21u); f_11106f40();
  /* 11104d21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104d24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104d27 mov edx, dword ptr [0x1112f560] */
  EDX = (r32((uint32_t)(0x1112f560)));
  /* 11104d2d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11104d2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11104d36 jmp 0x11104d41 */
  goto L_11104d41;
L_11104d38:;
  /* 11104d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104d3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11104d41:;
  /* 11104d41 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104d45 jge 0x11104d65 */
  if ((C.sf==C.of)) goto L_11104d65;
  /* 11104d47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104d4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104d4d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11104d55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104d58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104d5b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11104d63 jmp 0x11104d38 */
  goto L_11104d38;
L_11104d65:;
  /* 11104d65 mov edx, dword ptr [0x1112f560] */
  EDX = (r32((uint32_t)(0x1112f560)));
  /* 11104d6b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11104d6e jmp 0x11104d78 */
  goto L_11104d78;
L_11104d70:;
  /* 11104d70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104d73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11104d75 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11104d78:;
  /* 11104d78 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104d7c je 0x11104e21 */
  if (C.zf) goto L_11104e21;
  /* 11104d82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104d85 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11104d88 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11104d8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104d8f jl 0x11104df7 */
  if ((C.sf!=C.of)) goto L_11104df7;
  /* 11104d91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104d94 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11104d97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11104d9d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104da0 jge 0x11104df7 */
  if ((C.sf==C.of)) goto L_11104df7;
  /* 11104da2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104da5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11104da8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11104dae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104db1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11104db5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104db8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104dbb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11104dbe and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11104dc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104dc7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11104dcb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104dce mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11104dd1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11104dd6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104dd9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11104ddd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104de0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104de3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104de6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11104de9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11104dee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104df1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11104df5 jmp 0x11104e1c */
  goto L_11104e1c;
L_11104df7:;
  /* 11104df7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104dfa push edx */
  push32((uint32_t)(EDX));
  /* 11104dfb push 0x1112a9d4 */
  push32((uint32_t)(0x1112a9d4u));
  /* 11104e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104e08 call 0x11102600 */
  push32(0x11104e0du); f_11102600();
  /* 11104e0d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104e10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104e13 jne 0x11104e16 */
  if (!C.zf) goto L_11104e16;
  /* 11104e15 int3  */
  x86_unimpl("int3 @ 0x11104e15");
L_11104e16:;
  /* 11104e16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104e18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104e1a jne 0x11104df7 */
  if (!C.zf) goto L_11104df7;
L_11104e1c:;
  /* 11104e1c jmp 0x11104d70 */
  goto L_11104d70;
L_11104e21:;
  /* 11104e21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104e24 mov edx, dword ptr [0x1112f568] */
  EDX = (r32((uint32_t)(0x1112f568)));
  /* 11104e2a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11104e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104e30 mov ecx, dword ptr [0x1112f55c] */
  ECX = (r32((uint32_t)(0x1112f55c)));
  /* 11104e36 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11104e39 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104e3b call 0x11106fe0 */
  push32(0x11104e40u); f_11106fe0();
  /* 11104e40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11104e43:;
  /* 11104e43 pop edi */
  EDI = (pop32());
  /* 11104e44 pop esi */
  ESI = (pop32());
  /* 11104e45 pop ebx */
  EBX = (pop32());
  /* 11104e46 mov esp, ebp */
  ESP = (EBP);
  /* 11104e48 pop ebp */
  EBP = (pop32());
  /* 11104e49 ret  */
  ESPCHK(0x11104ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e50 @ 0x11104e50 (291 bytes, 95 insns) */
void f_11104e50(void) {
  FTRACE(0x11104e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11104e51 mov ebp, esp */
  EBP = (ESP);
  /* 11104e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104e56 push ebx */
  push32((uint32_t)(EBX));
  /* 11104e57 push esi */
  push32((uint32_t)(ESI));
  /* 11104e58 push edi */
  push32((uint32_t)(EDI));
  /* 11104e59 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11104e60 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104e64 je 0x11104e72 */
  if (C.zf) goto L_11104e72;
  /* 11104e66 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104e6a je 0x11104e72 */
  if (C.zf) goto L_11104e72;
  /* 11104e6c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104e70 jne 0x11104ea0 */
  if (!C.zf) goto L_11104ea0;
L_11104e72:;
  /* 11104e72 push 0x1112aa20 */
  push32((uint32_t)(0x1112aa20u));
  /* 11104e77 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11104e7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11104e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11104e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104e84 call 0x11102600 */
  push32(0x11104e89u); f_11102600();
  /* 11104e89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104e8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104e8f jne 0x11104e92 */
  if (!C.zf) goto L_11104e92;
  /* 11104e91 int3  */
  x86_unimpl("int3 @ 0x11104e91");
L_11104e92:;
  /* 11104e92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104e94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104e96 jne 0x11104e72 */
  if (!C.zf) goto L_11104e72;
  /* 11104e98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11104e9b jmp 0x11104f6c */
  goto L_11104f6c;
L_11104ea0:;
  /* 11104ea0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11104ea7 jmp 0x11104eb2 */
  goto L_11104eb2;
L_11104ea9:;
  /* 11104ea9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104eac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11104eaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11104eb2:;
  /* 11104eb2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104eb6 jge 0x11104f3c */
  if ((C.sf==C.of)) goto L_11104f3c;
  /* 11104ebc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104ebf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11104ec2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104ec5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11104ec8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11104ecc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104ed0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104ed3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104ed6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11104eda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104edd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11104ee0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104ee3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11104ee6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11104eea sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104eee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104ef1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104ef4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11104ef8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104efb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104efe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104f03 jne 0x11104f12 */
  if (!C.zf) goto L_11104f12;
  /* 11104f05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104f08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104f0b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104f10 je 0x11104f37 */
  if (C.zf) goto L_11104f37;
L_11104f12:;
  /* 11104f12 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104f16 je 0x11104f37 */
  if (C.zf) goto L_11104f37;
  /* 11104f18 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104f1c jne 0x11104f30 */
  if (!C.zf) goto L_11104f30;
  /* 11104f1e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104f22 jne 0x11104f37 */
  if (!C.zf) goto L_11104f37;
  /* 11104f24 mov eax, dword ptr [0x1112da84] */
  EAX = (r32((uint32_t)(0x1112da84)));
  /* 11104f29 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11104f2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104f2e je 0x11104f37 */
  if (C.zf) goto L_11104f37;
L_11104f30:;
  /* 11104f30 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11104f37:;
  /* 11104f37 jmp 0x11104ea9 */
  goto L_11104ea9;
L_11104f3c:;
  /* 11104f3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11104f3f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11104f42 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11104f45 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104f48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104f4b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11104f4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11104f51 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11104f54 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11104f57 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104f5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104f5d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11104f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104f63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11104f69 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11104f6c:;
  /* 11104f6c pop edi */
  EDI = (pop32());
  /* 11104f6d pop esi */
  ESI = (pop32());
  /* 11104f6e pop ebx */
  EBX = (pop32());
  /* 11104f6f mov esp, ebp */
  ESP = (EBP);
  /* 11104f71 pop ebp */
  EBP = (pop32());
  /* 11104f72 ret  */
  ESPCHK(0x11104e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f80 @ 0x11104f80 (697 bytes, 253 insns) */
void f_11104f80(void) {
  FTRACE(0x11104f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11104f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11104f81 mov ebp, esp */
  EBP = (ESP);
  /* 11104f83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11104f86 push ebx */
  push32((uint32_t)(EBX));
  /* 11104f87 push esi */
  push32((uint32_t)(ESI));
  /* 11104f88 push edi */
  push32((uint32_t)(EDI));
  /* 11104f89 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11104f90 push 9 */
  push32((uint32_t)(0x9u));
  /* 11104f92 call 0x11106f40 */
  push32(0x11104f97u); f_11106f40();
  /* 11104f97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11104f9a:;
  /* 11104f9a push 0x1112ab18 */
  push32((uint32_t)(0x1112ab18u));
  /* 11104f9f push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11104fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11104faa push 0 */
  push32((uint32_t)(0x0u));
  /* 11104fac call 0x11102600 */
  push32(0x11104fb1u); f_11102600();
  /* 11104fb1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11104fb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104fb7 jne 0x11104fba */
  if (!C.zf) goto L_11104fba;
  /* 11104fb9 int3  */
  x86_unimpl("int3 @ 0x11104fb9");
L_11104fba:;
  /* 11104fba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11104fbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11104fbe jne 0x11104f9a */
  if (!C.zf) goto L_11104f9a;
  /* 11104fc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104fc4 je 0x11104fce */
  if (C.zf) goto L_11104fce;
  /* 11104fc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11104fc9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11104fcb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11104fce:;
  /* 11104fce mov eax, dword ptr [0x1112f560] */
  EAX = (r32((uint32_t)(0x1112f560)));
  /* 11104fd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11104fd6 jmp 0x11104fe0 */
  goto L_11104fe0;
L_11104fd8:;
  /* 11104fd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104fdb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11104fdd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11104fe0:;
  /* 11104fe0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104fe4 je 0x11105202 */
  if (C.zf) goto L_11105202;
  /* 11104fea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104fed cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11104ff0 je 0x11105202 */
  if (C.zf) goto L_11105202;
  /* 11104ff6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11104ff9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11104ffc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11105002 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105005 je 0x11105034 */
  if (C.zf) goto L_11105034;
  /* 11105007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110500a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1110500d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11105013 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11105015 je 0x11105034 */
  if (C.zf) goto L_11105034;
  /* 11105017 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110501a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1110501d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11105022 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105025 jne 0x11105039 */
  if (!C.zf) goto L_11105039;
  /* 11105027 mov ecx, dword ptr [0x1112da84] */
  ECX = (r32((uint32_t)(0x1112da84)));
  /* 1110502d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11105030 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11105032 jne 0x11105039 */
  if (!C.zf) goto L_11105039;
L_11105034:;
  /* 11105034 jmp 0x111051fd */
  goto L_111051fd;
L_11105039:;
  /* 11105039 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110503c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105040 je 0x111050b2 */
  if (C.zf) goto L_111050b2;
  /* 11105042 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105044 push 1 */
  push32((uint32_t)(0x1u));
  /* 11105046 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105049 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1110504c push ecx */
  push32((uint32_t)(ECX));
  /* 1110504d call 0x11104af0 */
  push32(0x11105052u); f_11104af0();
  /* 11105052 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11105057 jne 0x11105083 */
  if (!C.zf) goto L_11105083;
L_11105059:;
  /* 11105059 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110505c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1110505f push eax */
  push32((uint32_t)(EAX));
  /* 11105060 push 0x1112ab04 */
  push32((uint32_t)(0x1112ab04u));
  /* 11105065 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105067 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105069 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110506b push 0 */
  push32((uint32_t)(0x0u));
  /* 1110506d call 0x11102600 */
  push32(0x11105072u); f_11102600();
  /* 11105072 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105075 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105078 jne 0x1110507b */
  if (!C.zf) goto L_1110507b;
  /* 1110507a int3  */
  x86_unimpl("int3 @ 0x1110507a");
L_1110507b:;
  /* 1110507b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110507d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110507f jne 0x11105059 */
  if (!C.zf) goto L_11105059;
  /* 11105081 jmp 0x111050b2 */
  goto L_111050b2;
L_11105083:;
  /* 11105083 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105086 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11105089 push eax */
  push32((uint32_t)(EAX));
  /* 1110508a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110508d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11105090 push edx */
  push32((uint32_t)(EDX));
  /* 11105091 push 0x1112aaf8 */
  push32((uint32_t)(0x1112aaf8u));
  /* 11105096 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105098 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110509a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110509c push 0 */
  push32((uint32_t)(0x0u));
  /* 1110509e call 0x11102600 */
  push32(0x111050a3u); f_11102600();
  /* 111050a3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111050a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111050a9 jne 0x111050ac */
  if (!C.zf) goto L_111050ac;
  /* 111050ab int3  */
  x86_unimpl("int3 @ 0x111050ab");
L_111050ac:;
  /* 111050ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111050ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111050b0 jne 0x11105083 */
  if (!C.zf) goto L_11105083;
L_111050b2:;
  /* 111050b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111050b5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 111050b8 push edx */
  push32((uint32_t)(EDX));
  /* 111050b9 push 0x1112aaf0 */
  push32((uint32_t)(0x1112aaf0u));
  /* 111050be push 0 */
  push32((uint32_t)(0x0u));
  /* 111050c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111050c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111050c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111050c6 call 0x11102600 */
  push32(0x111050cbu); f_11102600();
  /* 111050cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111050ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111050d1 jne 0x111050d4 */
  if (!C.zf) goto L_111050d4;
  /* 111050d3 int3  */
  x86_unimpl("int3 @ 0x111050d3");
L_111050d4:;
  /* 111050d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111050d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111050d8 jne 0x111050b2 */
  if (!C.zf) goto L_111050b2;
  /* 111050da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111050dd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111050e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111050e6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111050e9 jne 0x1110515c */
  if (!C.zf) goto L_1110515c;
L_111050eb:;
  /* 111050eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111050ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111050f1 push ecx */
  push32((uint32_t)(ECX));
  /* 111050f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111050f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111050f8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111050fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11105100 push eax */
  push32((uint32_t)(EAX));
  /* 11105101 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105104 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105107 push ecx */
  push32((uint32_t)(ECX));
  /* 11105108 push 0x1112aabc */
  push32((uint32_t)(0x1112aabcu));
  /* 1110510d push 0 */
  push32((uint32_t)(0x0u));
  /* 1110510f push 0 */
  push32((uint32_t)(0x0u));
  /* 11105111 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105113 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105115 call 0x11102600 */
  push32(0x1110511au); f_11102600();
  /* 1110511a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110511d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105120 jne 0x11105123 */
  if (!C.zf) goto L_11105123;
  /* 11105122 int3  */
  x86_unimpl("int3 @ 0x11105122");
L_11105123:;
  /* 11105123 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11105125 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11105127 jne 0x111050eb */
  if (!C.zf) goto L_111050eb;
  /* 11105129 cmp dword ptr [0x11130eb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11130eb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105130 je 0x1110514b */
  if (C.zf) goto L_1110514b;
  /* 11105132 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105135 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11105138 push ecx */
  push32((uint32_t)(ECX));
  /* 11105139 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110513c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110513f push edx */
  push32((uint32_t)(EDX));
  /* 11105140 call dword ptr [0x11130eb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11130eb8))), 0x11105146u);
  /* 11105146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105149 jmp 0x11105157 */
  goto L_11105157;
L_1110514b:;
  /* 1110514b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110514e push eax */
  push32((uint32_t)(EAX));
  /* 1110514f call 0x11105240 */
  push32(0x11105154u); f_11105240();
  /* 11105154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11105157:;
  /* 11105157 jmp 0x111051fd */
  goto L_111051fd;
L_1110515c:;
  /* 1110515c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110515f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105163 jne 0x111051a2 */
  if (!C.zf) goto L_111051a2;
L_11105165:;
  /* 11105165 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105168 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1110516b push eax */
  push32((uint32_t)(EAX));
  /* 1110516c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110516f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105172 push ecx */
  push32((uint32_t)(ECX));
  /* 11105173 push 0x1112aa94 */
  push32((uint32_t)(0x1112aa94u));
  /* 11105178 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110517a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110517c push 0 */
  push32((uint32_t)(0x0u));
  /* 1110517e push 0 */
  push32((uint32_t)(0x0u));
  /* 11105180 call 0x11102600 */
  push32(0x11105185u); f_11102600();
  /* 11105185 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105188 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110518b jne 0x1110518e */
  if (!C.zf) goto L_1110518e;
  /* 1110518d int3  */
  x86_unimpl("int3 @ 0x1110518d");
L_1110518e:;
  /* 1110518e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11105190 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11105192 jne 0x11105165 */
  if (!C.zf) goto L_11105165;
  /* 11105194 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105197 push eax */
  push32((uint32_t)(EAX));
  /* 11105198 call 0x11105240 */
  push32(0x1110519du); f_11105240();
  /* 1110519d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111051a0 jmp 0x111051fd */
  goto L_111051fd;
L_111051a2:;
  /* 111051a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111051a5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 111051a8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111051ae cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111051b1 jne 0x111051fd */
  if (!C.zf) goto L_111051fd;
L_111051b3:;
  /* 111051b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111051b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111051b9 push ecx */
  push32((uint32_t)(ECX));
  /* 111051ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111051bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 111051c0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111051c3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111051c8 push eax */
  push32((uint32_t)(EAX));
  /* 111051c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111051cc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111051cf push ecx */
  push32((uint32_t)(ECX));
  /* 111051d0 push 0x1112aa60 */
  push32((uint32_t)(0x1112aa60u));
  /* 111051d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111051d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111051d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111051db push 0 */
  push32((uint32_t)(0x0u));
  /* 111051dd call 0x11102600 */
  push32(0x111051e2u); f_11102600();
  /* 111051e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111051e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111051e8 jne 0x111051eb */
  if (!C.zf) goto L_111051eb;
  /* 111051ea int3  */
  x86_unimpl("int3 @ 0x111051ea");
L_111051eb:;
  /* 111051eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111051ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111051ef jne 0x111051b3 */
  if (!C.zf) goto L_111051b3;
  /* 111051f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111051f4 push eax */
  push32((uint32_t)(EAX));
  /* 111051f5 call 0x11105240 */
  push32(0x111051fau); f_11105240();
  /* 111051fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111051fd:;
  /* 111051fd jmp 0x11104fd8 */
  goto L_11104fd8;
L_11105202:;
  /* 11105202 push 9 */
  push32((uint32_t)(0x9u));
  /* 11105204 call 0x11106fe0 */
  push32(0x11105209u); f_11106fe0();
  /* 11105209 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110520c:;
  /* 1110520c push 0x1112aa48 */
  push32((uint32_t)(0x1112aa48u));
  /* 11105211 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 11105216 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105218 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110521a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110521c push 0 */
  push32((uint32_t)(0x0u));
  /* 1110521e call 0x11102600 */
  push32(0x11105223u); f_11102600();
  /* 11105223 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105226 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105229 jne 0x1110522c */
  if (!C.zf) goto L_1110522c;
  /* 1110522b int3  */
  x86_unimpl("int3 @ 0x1110522b");
L_1110522c:;
  /* 1110522c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110522e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11105230 jne 0x1110520c */
  if (!C.zf) goto L_1110520c;
  /* 11105232 pop edi */
  EDI = (pop32());
  /* 11105233 pop esi */
  ESI = (pop32());
  /* 11105234 pop ebx */
  EBX = (pop32());
  /* 11105235 mov esp, ebp */
  ESP = (EBP);
  /* 11105237 pop ebp */
  EBP = (pop32());
  /* 11105238 ret  */
  ESPCHK(0x11104f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005240 @ 0x11105240 (276 bytes, 89 insns) */
void f_11105240(void) {
  FTRACE(0x11105240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11105240 push ebp */
  push32((uint32_t)(EBP));
  /* 11105241 mov ebp, esp */
  EBP = (ESP);
  /* 11105243 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11105246 push ebx */
  push32((uint32_t)(EBX));
  /* 11105247 push esi */
  push32((uint32_t)(ESI));
  /* 11105248 push edi */
  push32((uint32_t)(EDI));
  /* 11105249 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11105250 jmp 0x1110525b */
  goto L_1110525b;
L_11105252:;
  /* 11105252 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11105255 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105258 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1110525b:;
  /* 1110525b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110525e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105262 jge 0x1110526f */
  if ((C.sf==C.of)) goto L_1110526f;
  /* 11105264 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11105267 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1110526a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1110526d jmp 0x11105276 */
  goto L_11105276;
L_1110526f:;
  /* 1110526f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11105276:;
  /* 11105276 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11105279 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110527c jge 0x1110531c */
  if ((C.sf==C.of)) goto L_1110531c;
  /* 11105282 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11105285 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105288 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1110528b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1110528e cmp dword ptr [0x1112dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105295 jle 0x111052b3 */
  if ((C.zf||C.sf!=C.of)) goto L_111052b3;
  /* 11105297 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1110529c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1110529f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111052a5 push ecx */
  push32((uint32_t)(ECX));
  /* 111052a6 call 0x11109550 */
  push32(0x111052abu); f_11109550();
  /* 111052ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111052ae mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 111052b1 jmp 0x111052d0 */
  goto L_111052d0;
L_111052b3:;
  /* 111052b3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111052b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111052bc mov eax, dword ptr [0x1112dc98] */
  EAX = (r32((uint32_t)(0x1112dc98)));
  /* 111052c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111052c3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 111052c7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 111052cd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_111052d0:;
  /* 111052d0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111052d4 je 0x111052e4 */
  if (C.zf) goto L_111052e4;
  /* 111052d6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111052d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111052df mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 111052e2 jmp 0x111052eb */
  goto L_111052eb;
L_111052e4:;
  /* 111052e4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_111052eb:;
  /* 111052eb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 111052ee mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 111052f1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 111052f5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 111052f8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111052fe push edx */
  push32((uint32_t)(EDX));
  /* 111052ff push 0x1112ab3c */
  push32((uint32_t)(0x1112ab3cu));
  /* 11105304 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11105307 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110530a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1110530e push ecx */
  push32((uint32_t)(ECX));
  /* 1110530f call 0x11109450 */
  push32(0x11105314u); f_11109450();
  /* 11105314 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105317 jmp 0x11105252 */
  goto L_11105252;
L_1110531c:;
  /* 1110531c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1110531f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11105324:;
  /* 11105324 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11105327 push eax */
  push32((uint32_t)(EAX));
  /* 11105328 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1110532b push ecx */
  push32((uint32_t)(ECX));
  /* 1110532c push 0x1112ab2c */
  push32((uint32_t)(0x1112ab2cu));
  /* 11105331 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105333 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105335 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105337 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105339 call 0x11102600 */
  push32(0x1110533eu); f_11102600();
  /* 1110533e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105341 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105344 jne 0x11105347 */
  if (!C.zf) goto L_11105347;
  /* 11105346 int3  */
  x86_unimpl("int3 @ 0x11105346");
L_11105347:;
  /* 11105347 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11105349 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110534b jne 0x11105324 */
  if (!C.zf) goto L_11105324;
  /* 1110534d pop edi */
  EDI = (pop32());
  /* 1110534e pop esi */
  ESI = (pop32());
  /* 1110534f pop ebx */
  EBX = (pop32());
  /* 11105350 mov esp, ebp */
  ESP = (EBP);
  /* 11105352 pop ebp */
  EBP = (pop32());
  /* 11105353 ret  */
  ESPCHK(0x11105240u, _esp0);
  ESP += 4; return;
}

/* FUN_10005360 @ 0x11105360 (116 bytes, 46 insns) */
void f_11105360(void) {
  FTRACE(0x11105360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11105360 push ebp */
  push32((uint32_t)(EBP));
  /* 11105361 mov ebp, esp */
  EBP = (ESP);
  /* 11105363 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11105366 push ebx */
  push32((uint32_t)(EBX));
  /* 11105367 push esi */
  push32((uint32_t)(ESI));
  /* 11105368 push edi */
  push32((uint32_t)(EDI));
  /* 11105369 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1110536c push eax */
  push32((uint32_t)(EAX));
  /* 1110536d call 0x11104ce0 */
  push32(0x11105372u); f_11104ce0();
  /* 11105372 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105375 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105379 jne 0x11105394 */
  if (!C.zf) goto L_11105394;
  /* 1110537b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110537f jne 0x11105394 */
  if (!C.zf) goto L_11105394;
  /* 11105381 mov ecx, dword ptr [0x1112da84] */
  ECX = (r32((uint32_t)(0x1112da84)));
  /* 11105387 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1110538a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110538c je 0x111053cb */
  if (C.zf) goto L_111053cb;
  /* 1110538e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105392 je 0x111053cb */
  if (C.zf) goto L_111053cb;
L_11105394:;
  /* 11105394 push 0x1112ab44 */
  push32((uint32_t)(0x1112ab44u));
  /* 11105399 push 0x1112a510 */
  push32((uint32_t)(0x1112a510u));
  /* 1110539e push 0 */
  push32((uint32_t)(0x0u));
  /* 111053a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111053a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111053a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111053a6 call 0x11102600 */
  push32(0x111053abu); f_11102600();
  /* 111053ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111053ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111053b1 jne 0x111053b4 */
  if (!C.zf) goto L_111053b4;
  /* 111053b3 int3  */
  x86_unimpl("int3 @ 0x111053b3");
L_111053b4:;
  /* 111053b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111053b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111053b8 jne 0x11105394 */
  if (!C.zf) goto L_11105394;
  /* 111053ba push 0 */
  push32((uint32_t)(0x0u));
  /* 111053bc call 0x11104f80 */
  push32(0x111053c1u); f_11104f80();
  /* 111053c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111053c4 mov eax, 1 */
  EAX = (0x1u);
  /* 111053c9 jmp 0x111053cd */
  goto L_111053cd;
L_111053cb:;
  /* 111053cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111053cd:;
  /* 111053cd pop edi */
  EDI = (pop32());
  /* 111053ce pop esi */
  ESI = (pop32());
  /* 111053cf pop ebx */
  EBX = (pop32());
  /* 111053d0 mov esp, ebp */
  ESP = (EBP);
  /* 111053d2 pop ebp */
  EBP = (pop32());
  /* 111053d3 ret  */
  ESPCHK(0x11105360u, _esp0);
  ESP += 4; return;
}

/* FUN_100053e0 @ 0x111053e0 (197 bytes, 79 insns) */
void f_111053e0(void) {
  FTRACE(0x111053e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111053e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111053e1 mov ebp, esp */
  EBP = (ESP);
  /* 111053e3 push ecx */
  push32((uint32_t)(ECX));
  /* 111053e4 push ebx */
  push32((uint32_t)(EBX));
  /* 111053e5 push esi */
  push32((uint32_t)(ESI));
  /* 111053e6 push edi */
  push32((uint32_t)(EDI));
  /* 111053e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111053eb jne 0x111053f2 */
  if (!C.zf) goto L_111053f2;
  /* 111053ed jmp 0x1110549e */
  goto L_1110549e;
L_111053f2:;
  /* 111053f2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 111053f9 jmp 0x11105404 */
  goto L_11105404;
L_111053fb:;
  /* 111053fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111053fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105401 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11105404:;
  /* 11105404 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105408 jge 0x1110544e */
  if ((C.sf==C.of)) goto L_1110544e;
L_1110540a:;
  /* 1110540a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110540d mov edx, dword ptr [ecx*4 + 0x1112da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112da94)));
  /* 11105414 push edx */
  push32((uint32_t)(EDX));
  /* 11105415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105418 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110541b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1110541f push edx */
  push32((uint32_t)(EDX));
  /* 11105420 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11105426 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1110542a push edx */
  push32((uint32_t)(EDX));
  /* 1110542b push 0x1112aba0 */
  push32((uint32_t)(0x1112aba0u));
  /* 11105430 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105432 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105434 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105436 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105438 call 0x11102600 */
  push32(0x1110543du); f_11102600();
  /* 1110543d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105440 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105443 jne 0x11105446 */
  if (!C.zf) goto L_11105446;
  /* 11105445 int3  */
  x86_unimpl("int3 @ 0x11105445");
L_11105446:;
  /* 11105446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110544a jne 0x1110540a */
  if (!C.zf) goto L_1110540a;
  /* 1110544c jmp 0x111053fb */
  goto L_111053fb;
L_1110544e:;
  /* 1110544e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11105451 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11105454 push edx */
  push32((uint32_t)(EDX));
  /* 11105455 push 0x1112ab7c */
  push32((uint32_t)(0x1112ab7cu));
  /* 1110545a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110545c push 0 */
  push32((uint32_t)(0x0u));
  /* 1110545e push 0 */
  push32((uint32_t)(0x0u));
  /* 11105460 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105462 call 0x11102600 */
  push32(0x11105467u); f_11102600();
  /* 11105467 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110546a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110546d jne 0x11105470 */
  if (!C.zf) goto L_11105470;
  /* 1110546f int3  */
  x86_unimpl("int3 @ 0x1110546f");
L_11105470:;
  /* 11105470 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11105474 jne 0x1110544e */
  if (!C.zf) goto L_1110544e;
L_11105476:;
  /* 11105476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11105479 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1110547c push edx */
  push32((uint32_t)(EDX));
  /* 1110547d push 0x1112ab5c */
  push32((uint32_t)(0x1112ab5cu));
  /* 11105482 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105484 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105486 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105488 push 0 */
  push32((uint32_t)(0x0u));
  /* 1110548a call 0x11102600 */
  push32(0x1110548fu); f_11102600();
  /* 1110548f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105492 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105495 jne 0x11105498 */
  if (!C.zf) goto L_11105498;
  /* 11105497 int3  */
  x86_unimpl("int3 @ 0x11105497");
L_11105498:;
  /* 11105498 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110549a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110549c jne 0x11105476 */
  if (!C.zf) goto L_11105476;
L_1110549e:;
  /* 1110549e pop edi */
  EDI = (pop32());
  /* 1110549f pop esi */
  ESI = (pop32());
  /* 111054a0 pop ebx */
  EBX = (pop32());
  /* 111054a1 mov esp, ebp */
  ESP = (EBP);
  /* 111054a3 pop ebp */
  EBP = (pop32());
  /* 111054a4 ret  */
  ESPCHK(0x111053e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b0 @ 0x111054b0 (329 bytes, 102 insns) */
void f_111054b0(void) {
  FTRACE(0x111054b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111054b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111054b1 mov ebp, esp */
  EBP = (ESP);
  /* 111054b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111054b6 cmp dword ptr [0x11131030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11131030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111054bd jne 0x111054c4 */
  if (!C.zf) goto L_111054c4;
  /* 111054bf call 0x11109df0 */
  push32(0x111054c4u); f_11109df0();
L_111054c4:;
  /* 111054c4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111054cb mov eax, dword ptr [0x1112f4fc] */
  EAX = (r32((uint32_t)(0x1112f4fc)));
  /* 111054d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111054d3:;
  /* 111054d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111054d6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111054d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111054db je 0x11105509 */
  if (C.zf) goto L_11105509;
  /* 111054dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111054e0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111054e3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111054e6 je 0x111054f1 */
  if (C.zf) goto L_111054f1;
  /* 111054e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111054eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111054ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_111054f1:;
  /* 111054f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111054f4 push eax */
  push32((uint32_t)(EAX));
  /* 111054f5 call 0x11106370 */
  push32(0x111054fau); f_11106370();
  /* 111054fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111054fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105500 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11105504 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11105507 jmp 0x111054d3 */
  goto L_111054d3;
L_11105509:;
  /* 11105509 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1110550b push 0x1112abc0 */
  push32((uint32_t)(0x1112abc0u));
  /* 11105510 push 2 */
  push32((uint32_t)(0x2u));
  /* 11105512 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105515 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1110551c push ecx */
  push32((uint32_t)(ECX));
  /* 1110551d call 0x11103540 */
  push32(0x11105522u); f_11103540();
  /* 11105522 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105525 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11105528 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110552b mov dword ptr [0x1112f530], edx */
  w32((uint32_t)(0x1112f530), (EDX));
  /* 11105531 cmp dword ptr [0x1112f530], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f530))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105538 jne 0x11105544 */
  if (!C.zf) goto L_11105544;
  /* 1110553a push 9 */
  push32((uint32_t)(0x9u));
  /* 1110553c call 0x111024b0 */
  push32(0x11105541u); f_111024b0();
  /* 11105541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11105544:;
  /* 11105544 mov eax, dword ptr [0x1112f4fc] */
  EAX = (r32((uint32_t)(0x1112f4fc)));
  /* 11105549 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110554c jmp 0x11105557 */
  goto L_11105557;
L_1110554e:;
  /* 1110554e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105551 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105554 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11105557:;
  /* 11105557 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110555a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110555d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110555f je 0x111055c7 */
  if (C.zf) goto L_111055c7;
  /* 11105561 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105564 push ecx */
  push32((uint32_t)(ECX));
  /* 11105565 call 0x11106370 */
  push32(0x1110556au); f_11106370();
  /* 1110556a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110556d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105570 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11105573 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105576 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11105579 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110557c je 0x111055c5 */
  if (C.zf) goto L_111055c5;
  /* 1110557e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11105580 push 0x1112abc0 */
  push32((uint32_t)(0x1112abc0u));
  /* 11105585 push 2 */
  push32((uint32_t)(0x2u));
  /* 11105587 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110558a push ecx */
  push32((uint32_t)(ECX));
  /* 1110558b call 0x11103540 */
  push32(0x11105590u); f_11103540();
  /* 11105590 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105593 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105596 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11105598 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110559b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110559e jne 0x111055aa */
  if (!C.zf) goto L_111055aa;
  /* 111055a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 111055a2 call 0x111024b0 */
  push32(0x111055a7u); f_111024b0();
  /* 111055a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111055aa:;
  /* 111055aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111055ad push ecx */
  push32((uint32_t)(ECX));
  /* 111055ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111055b1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111055b3 push eax */
  push32((uint32_t)(EAX));
  /* 111055b4 call 0x111064f0 */
  push32(0x111055b9u); f_111064f0();
  /* 111055b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111055bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111055bf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111055c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_111055c5:;
  /* 111055c5 jmp 0x1110554e */
  goto L_1110554e;
L_111055c7:;
  /* 111055c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111055c9 mov edx, dword ptr [0x1112f4fc] */
  EDX = (r32((uint32_t)(0x1112f4fc)));
  /* 111055cf push edx */
  push32((uint32_t)(EDX));
  /* 111055d0 call 0x11103fd0 */
  push32(0x111055d5u); f_11103fd0();
  /* 111055d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111055d8 mov dword ptr [0x1112f4fc], 0 */
  w32((uint32_t)(0x1112f4fc), (0x0u));
  /* 111055e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111055e5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111055eb mov dword ptr [0x11131020], 1 */
  w32((uint32_t)(0x11131020), (0x1u));
  /* 111055f5 mov esp, ebp */
  ESP = (EBP);
  /* 111055f7 pop ebp */
  EBP = (pop32());
  /* 111055f8 ret  */
  ESPCHK(0x111054b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005600 @ 0x11105600 (216 bytes, 69 insns) */
void f_11105600(void) {
  FTRACE(0x11105600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11105600 push ebp */
  push32((uint32_t)(EBP));
  /* 11105601 mov ebp, esp */
  EBP = (ESP);
  /* 11105603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11105606 cmp dword ptr [0x11131030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11131030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110560d jne 0x11105614 */
  if (!C.zf) goto L_11105614;
  /* 1110560f call 0x11109df0 */
  push32(0x11105614u); f_11109df0();
L_11105614:;
  /* 11105614 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11105619 push 0x1112f56c */
  push32((uint32_t)(0x1112f56cu));
  /* 1110561e push 0 */
  push32((uint32_t)(0x0u));
  /* 11105620 call dword ptr [0x11132350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132350))), 0x11105626u);
  /* 11105626 mov dword ptr [0x1112f540], 0x1112f56c */
  w32((uint32_t)(0x1112f540), (0x1112f56cu));
  /* 11105630 mov eax, dword ptr [0x1113104c] */
  EAX = (r32((uint32_t)(0x1113104c)));
  /* 11105635 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11105638 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1110563a jne 0x11105647 */
  if (!C.zf) goto L_11105647;
  /* 1110563c mov edx, dword ptr [0x1112f540] */
  EDX = (r32((uint32_t)(0x1112f540)));
  /* 11105642 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11105645 jmp 0x1110564f */
  goto L_1110564f;
L_11105647:;
  /* 11105647 mov eax, dword ptr [0x1113104c] */
  EAX = (r32((uint32_t)(0x1113104c)));
  /* 1110564c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1110564f:;
  /* 1110564f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11105652 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11105655 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11105658 push edx */
  push32((uint32_t)(EDX));
  /* 11105659 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1110565c push eax */
  push32((uint32_t)(EAX));
  /* 1110565d push 0 */
  push32((uint32_t)(0x0u));
  /* 1110565f push 0 */
  push32((uint32_t)(0x0u));
  /* 11105661 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11105664 push ecx */
  push32((uint32_t)(ECX));
  /* 11105665 call 0x111056e0 */
  push32(0x1110566au); f_111056e0();
  /* 1110566a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110566d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11105672 push 0x1112abcc */
  push32((uint32_t)(0x1112abccu));
  /* 11105677 push 2 */
  push32((uint32_t)(0x2u));
  /* 11105679 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110567c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110567f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11105682 push ecx */
  push32((uint32_t)(ECX));
  /* 11105683 call 0x11103540 */
  push32(0x11105688u); f_11103540();
  /* 11105688 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110568b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110568e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105692 jne 0x1110569e */
  if (!C.zf) goto L_1110569e;
  /* 11105694 push 8 */
  push32((uint32_t)(0x8u));
  /* 11105696 call 0x111024b0 */
  push32(0x1110569bu); f_111024b0();
  /* 1110569b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1110569e:;
  /* 1110569e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 111056a1 push edx */
  push32((uint32_t)(EDX));
  /* 111056a2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 111056a5 push eax */
  push32((uint32_t)(EAX));
  /* 111056a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111056a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111056ac lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 111056af push eax */
  push32((uint32_t)(EAX));
  /* 111056b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111056b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111056b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111056b7 push edx */
  push32((uint32_t)(EDX));
  /* 111056b8 call 0x111056e0 */
  push32(0x111056bdu); f_111056e0();
  /* 111056bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111056c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111056c3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111056c6 mov dword ptr [0x1112f524], eax */
  w32((uint32_t)(0x1112f524), (EAX));
  /* 111056cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111056ce mov dword ptr [0x1112f528], ecx */
  w32((uint32_t)(0x1112f528), (ECX));
  /* 111056d4 mov esp, ebp */
  ESP = (EBP);
  /* 111056d6 pop ebp */
  EBP = (pop32());
  /* 111056d7 ret  */
  ESPCHK(0x11105600u, _esp0);
  ESP += 4; return;
}

/* FUN_100056e0 @ 0x111056e0 (1060 bytes, 360 insns) */
void f_111056e0(void) {
  FTRACE(0x111056e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111056e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111056e1 mov ebp, esp */
  EBP = (ESP);
  /* 111056e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111056e6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111056e9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 111056ef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111056f2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 111056f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111056fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111056fe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105702 je 0x11105715 */
  if (C.zf) goto L_11105715;
  /* 11105704 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11105707 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110570a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1110570c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110570f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105712 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11105715:;
  /* 11105715 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105718 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1110571b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110571e jne 0x111057ed */
  if (!C.zf) goto L_111057ed;
L_11105724:;
  /* 11105724 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105727 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110572a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110572d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105730 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11105733 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105736 je 0x111057b2 */
  if (C.zf) goto L_111057b2;
  /* 11105738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110573b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1110573e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11105740 je 0x111057b2 */
  if (C.zf) goto L_111057b2;
  /* 11105742 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105745 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11105747 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11105749 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110574b mov al, byte ptr [edx + 0x11130d81] */
  AL = (r8((uint32_t)(EDX + 0x11130d81)));
  /* 11105751 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11105754 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11105756 je 0x11105787 */
  if (C.zf) goto L_11105787;
  /* 11105758 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1110575b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1110575d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105760 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105763 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11105765 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105769 je 0x11105787 */
  if (C.zf) goto L_11105787;
  /* 1110576b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110576e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105771 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11105773 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11105775 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105778 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110577b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1110577e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105781 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105784 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11105787:;
  /* 11105787 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1110578a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110578c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110578f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105792 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11105794 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105798 je 0x111057ad */
  if (C.zf) goto L_111057ad;
  /* 1110579a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110579d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111057a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111057a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111057a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111057a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111057aa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_111057ad:;
  /* 111057ad jmp 0x11105724 */
  goto L_11105724;
L_111057b2:;
  /* 111057b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111057b5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111057b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111057ba mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111057bd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111057bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111057c3 je 0x111057d4 */
  if (C.zf) goto L_111057d4;
  /* 111057c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111057c8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 111057cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111057ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111057d1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_111057d4:;
  /* 111057d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111057d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111057da cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111057dd jne 0x111057e8 */
  if (!C.zf) goto L_111057e8;
  /* 111057df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111057e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111057e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111057e8:;
  /* 111057e8 jmp 0x111058bc */
  goto L_111058bc;
L_111057ed:;
  /* 111057ed mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 111057f0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111057f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111057f5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111057f8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111057fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111057fe je 0x11105813 */
  if (C.zf) goto L_11105813;
  /* 11105800 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105803 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105806 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11105808 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1110580a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110580d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105810 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11105813:;
  /* 11105813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105816 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11105818 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1110581b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110581e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105821 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11105824 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105827 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110582d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110582f mov dl, byte ptr [ecx + 0x11130d81] */
  DL = (r8((uint32_t)(ECX + 0x11130d81)));
  /* 11105835 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11105838 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110583a je 0x1110586b */
  if (C.zf) goto L_1110586b;
  /* 1110583c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1110583f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11105841 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105844 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105847 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11105849 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110584d je 0x11105862 */
  if (C.zf) goto L_11105862;
  /* 1110584f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105852 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105855 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11105857 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11105859 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110585c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110585f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11105862:;
  /* 11105862 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105865 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105868 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1110586b:;
  /* 1110586b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110586e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11105874 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105877 je 0x11105897 */
  if (C.zf) goto L_11105897;
  /* 11105879 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110587c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11105881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11105883 je 0x11105897 */
  if (C.zf) goto L_11105897;
  /* 11105885 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105888 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1110588e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105891 jne 0x111057ed */
  if (!C.zf) goto L_111057ed;
L_11105897:;
  /* 11105897 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110589a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111058a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111058a2 jne 0x111058af */
  if (!C.zf) goto L_111058af;
  /* 111058a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111058a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111058aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111058ad jmp 0x111058bc */
  goto L_111058bc;
L_111058af:;
  /* 111058af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111058b3 je 0x111058bc */
  if (C.zf) goto L_111058bc;
  /* 111058b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111058b8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_111058bc:;
  /* 111058bc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_111058c3:;
  /* 111058c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111058c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111058c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111058cb je 0x111058ee */
  if (C.zf) goto L_111058ee;
L_111058cd:;
  /* 111058cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111058d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111058d3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111058d6 je 0x111058e3 */
  if (C.zf) goto L_111058e3;
  /* 111058d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111058db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111058de cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111058e1 jne 0x111058ee */
  if (!C.zf) goto L_111058ee;
L_111058e3:;
  /* 111058e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111058e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111058e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111058ec jmp 0x111058cd */
  goto L_111058cd;
L_111058ee:;
  /* 111058ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111058f1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111058f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111058f6 jne 0x111058fd */
  if (!C.zf) goto L_111058fd;
  /* 111058f8 jmp 0x11105adb */
  goto L_11105adb;
L_111058fd:;
  /* 111058fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105901 je 0x11105914 */
  if (C.zf) goto L_11105914;
  /* 11105903 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11105906 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105909 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1110590b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110590e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105911 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11105914:;
  /* 11105914 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11105917 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11105919 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110591c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110591f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11105921:;
  /* 11105921 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11105928 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1110592f:;
  /* 1110592f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105932 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11105935 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105938 jne 0x1110594e */
  if (!C.zf) goto L_1110594e;
  /* 1110593a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110593d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105940 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11105943 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11105946 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105949 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1110594c jmp 0x1110592f */
  goto L_1110592f;
L_1110594e:;
  /* 1110594e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105951 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11105954 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105957 jne 0x111059aa */
  if (!C.zf) goto L_111059aa;
  /* 11105959 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110595c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110595e mov ecx, 2 */
  ECX = (0x2u);
  /* 11105963 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11105965 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11105967 jne 0x111059a2 */
  if (!C.zf) goto L_111059a2;
  /* 11105969 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110596d je 0x1110598f */
  if (C.zf) goto L_1110598f;
  /* 1110596f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105972 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11105976 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105979 jne 0x11105986 */
  if (!C.zf) goto L_11105986;
  /* 1110597b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110597e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105981 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11105984 jmp 0x1110598d */
  goto L_1110598d;
L_11105986:;
  /* 11105986 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1110598d:;
  /* 1110598d jmp 0x11105996 */
  goto L_11105996;
L_1110598f:;
  /* 1110598f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11105996:;
  /* 11105996 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11105998 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110599c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1110599f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_111059a2:;
  /* 111059a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111059a5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111059a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_111059aa:;
  /* 111059aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111059ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111059b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111059b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 111059b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111059b8 je 0x111059de */
  if (C.zf) goto L_111059de;
  /* 111059ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111059be je 0x111059cf */
  if (C.zf) goto L_111059cf;
  /* 111059c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111059c3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 111059c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111059c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111059cc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_111059cf:;
  /* 111059cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 111059d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111059d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111059d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111059da mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111059dc jmp 0x111059aa */
  goto L_111059aa;
L_111059de:;
  /* 111059de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111059e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 111059e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111059e6 je 0x11105a04 */
  if (C.zf) goto L_11105a04;
  /* 111059e8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111059ec jne 0x11105a09 */
  if (!C.zf) goto L_11105a09;
  /* 111059ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111059f1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 111059f4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111059f7 je 0x11105a04 */
  if (C.zf) goto L_11105a04;
  /* 111059f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111059fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 111059ff cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105a02 jne 0x11105a09 */
  if (!C.zf) goto L_11105a09;
L_11105a04:;
  /* 11105a04 jmp 0x11105ab4 */
  goto L_11105ab4;
L_11105a09:;
  /* 11105a09 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105a0d je 0x11105aa6 */
  if (C.zf) goto L_11105aa6;
  /* 11105a13 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105a17 je 0x11105a6d */
  if (C.zf) goto L_11105a6d;
  /* 11105a19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105a1e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11105a20 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11105a22 mov cl, byte ptr [eax + 0x11130d81] */
  CL = (r8((uint32_t)(EAX + 0x11130d81)));
  /* 11105a28 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11105a2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11105a2d je 0x11105a58 */
  if (C.zf) goto L_11105a58;
  /* 11105a2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105a32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105a35 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11105a37 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11105a39 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105a3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105a3f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11105a42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105a45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105a48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11105a4b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105a4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11105a50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105a53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105a56 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11105a58:;
  /* 11105a58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105a5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105a5e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11105a60 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11105a62 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105a65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105a68 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11105a6b jmp 0x11105a99 */
  goto L_11105a99;
L_11105a6d:;
  /* 11105a6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105a70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105a72 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11105a74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11105a76 mov cl, byte ptr [eax + 0x11130d81] */
  CL = (r8((uint32_t)(EAX + 0x11130d81)));
  /* 11105a7c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11105a7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11105a81 je 0x11105a99 */
  if (C.zf) goto L_11105a99;
  /* 11105a83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105a86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105a89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11105a8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105a8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11105a91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105a94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105a97 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11105a99:;
  /* 11105a99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105a9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11105a9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105aa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105aa4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11105aa6:;
  /* 11105aa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105aa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105aac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11105aaf jmp 0x11105921 */
  goto L_11105921;
L_11105ab4:;
  /* 11105ab4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105ab8 je 0x11105ac9 */
  if (C.zf) goto L_11105ac9;
  /* 11105aba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105abd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11105ac0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11105ac3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105ac6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11105ac9:;
  /* 11105ac9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105acc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11105ace add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105ad1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11105ad4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11105ad6 jmp 0x111058c3 */
  goto L_111058c3;
L_11105adb:;
  /* 11105adb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105adf je 0x11105af3 */
  if (C.zf) goto L_11105af3;
  /* 11105ae1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11105ae4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11105aea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11105aed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105af0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11105af3:;
  /* 11105af3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11105af6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11105af8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105afb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11105afe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11105b00 mov esp, ebp */
  ESP = (EBP);
  /* 11105b02 pop ebp */
  EBP = (pop32());
  /* 11105b03 ret  */
  ESPCHK(0x111056e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b10 @ 0x11105b10 (537 bytes, 173 insns) */
void f_11105b10(void) {
  FTRACE(0x11105b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11105b10 push ebp */
  push32((uint32_t)(EBP));
  /* 11105b11 mov ebp, esp */
  EBP = (ESP);
  /* 11105b13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11105b16 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11105b1d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11105b24 cmp dword ptr [0x1112f670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105b2b jne 0x11105b6a */
  if (!C.zf) goto L_11105b6a;
  /* 11105b2d call dword ptr [0x111323a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a8))), 0x11105b33u);
  /* 11105b33 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11105b36 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105b3a je 0x11105b48 */
  if (C.zf) goto L_11105b48;
  /* 11105b3c mov dword ptr [0x1112f670], 1 */
  w32((uint32_t)(0x1112f670), (0x1u));
  /* 11105b46 jmp 0x11105b6a */
  goto L_11105b6a;
L_11105b48:;
  /* 11105b48 call dword ptr [0x11132394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132394))), 0x11105b4eu);
  /* 11105b4e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11105b51 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105b55 je 0x11105b63 */
  if (C.zf) goto L_11105b63;
  /* 11105b57 mov dword ptr [0x1112f670], 2 */
  w32((uint32_t)(0x1112f670), (0x2u));
  /* 11105b61 jmp 0x11105b6a */
  goto L_11105b6a;
L_11105b63:;
  /* 11105b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105b65 jmp 0x11105d25 */
  goto L_11105d25;
L_11105b6a:;
  /* 11105b6a cmp dword ptr [0x1112f670], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f670))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105b71 jne 0x11105c6e */
  if (!C.zf) goto L_11105c6e;
  /* 11105b77 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105b7b jne 0x11105b93 */
  if (!C.zf) goto L_11105b93;
  /* 11105b7d call dword ptr [0x111323a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a8))), 0x11105b83u);
  /* 11105b83 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11105b86 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105b8a jne 0x11105b93 */
  if (!C.zf) goto L_11105b93;
  /* 11105b8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105b8e jmp 0x11105d25 */
  goto L_11105d25;
L_11105b93:;
  /* 11105b93 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11105b96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11105b99:;
  /* 11105b99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105b9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11105b9e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11105ba1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11105ba3 je 0x11105bc5 */
  if (C.zf) goto L_11105bc5;
  /* 11105ba5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105ba8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105bab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11105bae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105bb1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11105bb3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11105bb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11105bb8 jne 0x11105bc3 */
  if (!C.zf) goto L_11105bc3;
  /* 11105bba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105bbd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105bc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11105bc3:;
  /* 11105bc3 jmp 0x11105b99 */
  goto L_11105b99;
L_11105bc5:;
  /* 11105bc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105bc8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11105bcb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11105bcd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105bd0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11105bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105bdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105bde push edx */
  push32((uint32_t)(EDX));
  /* 11105bdf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11105be2 push eax */
  push32((uint32_t)(EAX));
  /* 11105be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105be7 call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x11105bedu);
  /* 11105bed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11105bf0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105bf4 je 0x11105c14 */
  if (C.zf) goto L_11105c14;
  /* 11105bf6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11105bf8 push 0x1112abd8 */
  push32((uint32_t)(0x1112abd8u));
  /* 11105bfd push 2 */
  push32((uint32_t)(0x2u));
  /* 11105bff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11105c02 push ecx */
  push32((uint32_t)(ECX));
  /* 11105c03 call 0x11103540 */
  push32(0x11105c08u); f_11103540();
  /* 11105c08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105c0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11105c0e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105c12 jne 0x11105c25 */
  if (!C.zf) goto L_11105c25;
L_11105c14:;
  /* 11105c14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11105c17 push edx */
  push32((uint32_t)(EDX));
  /* 11105c18 call dword ptr [0x111323a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a0))), 0x11105c1eu);
  /* 11105c1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105c20 jmp 0x11105d25 */
  goto L_11105d25;
L_11105c25:;
  /* 11105c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105c29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11105c2c push eax */
  push32((uint32_t)(EAX));
  /* 11105c2d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11105c30 push ecx */
  push32((uint32_t)(ECX));
  /* 11105c31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105c34 push edx */
  push32((uint32_t)(EDX));
  /* 11105c35 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11105c38 push eax */
  push32((uint32_t)(EAX));
  /* 11105c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11105c3d call dword ptr [0x111323a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a4))), 0x11105c43u);
  /* 11105c43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11105c45 jne 0x11105c5c */
  if (!C.zf) goto L_11105c5c;
  /* 11105c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 11105c49 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11105c4c push ecx */
  push32((uint32_t)(ECX));
  /* 11105c4d call 0x11103fd0 */
  push32(0x11105c52u); f_11103fd0();
  /* 11105c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105c55 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11105c5c:;
  /* 11105c5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11105c5f push edx */
  push32((uint32_t)(EDX));
  /* 11105c60 call dword ptr [0x111323a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323a0))), 0x11105c66u);
  /* 11105c66 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11105c69 jmp 0x11105d25 */
  goto L_11105d25;
L_11105c6e:;
  /* 11105c6e cmp dword ptr [0x1112f670], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1112f670))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105c75 jne 0x11105d23 */
  if (!C.zf) goto L_11105d23;
  /* 11105c7b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105c7f jne 0x11105c97 */
  if (!C.zf) goto L_11105c97;
  /* 11105c81 call dword ptr [0x11132394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132394))), 0x11105c87u);
  /* 11105c87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11105c8a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105c8e jne 0x11105c97 */
  if (!C.zf) goto L_11105c97;
  /* 11105c90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105c92 jmp 0x11105d25 */
  goto L_11105d25;
L_11105c97:;
  /* 11105c97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11105c9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11105c9d:;
  /* 11105c9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105ca0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11105ca3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11105ca5 je 0x11105cc5 */
  if (C.zf) goto L_11105cc5;
  /* 11105ca7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105caa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105cad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11105cb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105cb3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11105cb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11105cb8 jne 0x11105cc3 */
  if (!C.zf) goto L_11105cc3;
  /* 11105cba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105cbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105cc0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11105cc3:;
  /* 11105cc3 jmp 0x11105c9d */
  goto L_11105c9d;
L_11105cc5:;
  /* 11105cc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105cc8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11105ccb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105cce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11105cd1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11105cd6 push 0x1112abd8 */
  push32((uint32_t)(0x1112abd8u));
  /* 11105cdb push 2 */
  push32((uint32_t)(0x2u));
  /* 11105cdd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11105ce0 push edx */
  push32((uint32_t)(EDX));
  /* 11105ce1 call 0x11103540 */
  push32(0x11105ce6u); f_11103540();
  /* 11105ce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105ce9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11105cec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105cf0 jne 0x11105d00 */
  if (!C.zf) goto L_11105d00;
  /* 11105cf2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11105cf5 push eax */
  push32((uint32_t)(EAX));
  /* 11105cf6 call dword ptr [0x1113239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113239c))), 0x11105cfcu);
  /* 11105cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105cfe jmp 0x11105d25 */
  goto L_11105d25;
L_11105d00:;
  /* 11105d00 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11105d03 push ecx */
  push32((uint32_t)(ECX));
  /* 11105d04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11105d07 push edx */
  push32((uint32_t)(EDX));
  /* 11105d08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105d0b push eax */
  push32((uint32_t)(EAX));
  /* 11105d0c call 0x11109e20 */
  push32(0x11105d11u); f_11109e20();
  /* 11105d11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105d14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11105d17 push ecx */
  push32((uint32_t)(ECX));
  /* 11105d18 call dword ptr [0x1113239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113239c))), 0x11105d1eu);
  /* 11105d1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105d21 jmp 0x11105d25 */
  goto L_11105d25;
L_11105d23:;
  /* 11105d23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11105d25:;
  /* 11105d25 mov esp, ebp */
  ESP = (EBP);
  /* 11105d27 pop ebp */
  EBP = (pop32());
  /* 11105d28 ret  */
  ESPCHK(0x11105b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d30 @ 0x11105d30 (77 bytes, 25 insns) */
void f_11105d30(void) {
  FTRACE(0x11105d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11105d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11105d31 mov ebp, esp */
  EBP = (ESP);
  /* 11105d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105d35 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11105d3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105d3c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105d40 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11105d43 push eax */
  push32((uint32_t)(EAX));
  /* 11105d44 call dword ptr [0x111323b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323b0))), 0x11105d4au);
  /* 11105d4a mov dword ptr [0x11130eac], eax */
  w32((uint32_t)(0x11130eac), (EAX));
  /* 11105d4f cmp dword ptr [0x11130eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11130eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105d56 jne 0x11105d5c */
  if (!C.zf) goto L_11105d5c;
  /* 11105d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105d5a jmp 0x11105d7b */
  goto L_11105d7b;
L_11105d5c:;
  /* 11105d5c call 0x111077e0 */
  push32(0x11105d61u); f_111077e0();
  /* 11105d61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11105d63 jne 0x11105d76 */
  if (!C.zf) goto L_11105d76;
  /* 11105d65 mov ecx, dword ptr [0x11130eac] */
  ECX = (r32((uint32_t)(0x11130eac)));
  /* 11105d6b push ecx */
  push32((uint32_t)(ECX));
  /* 11105d6c call dword ptr [0x111323ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323ac))), 0x11105d72u);
  /* 11105d72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11105d74 jmp 0x11105d7b */
  goto L_11105d7b;
L_11105d76:;
  /* 11105d76 mov eax, 1 */
  EAX = (0x1u);
L_11105d7b:;
  /* 11105d7b pop ebp */
  EBP = (pop32());
  /* 11105d7c ret  */
  ESPCHK(0x11105d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d80 @ 0x11105d80 (156 bytes, 48 insns) */
void f_11105d80(void) {
  FTRACE(0x11105d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11105d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11105d81 mov ebp, esp */
  EBP = (ESP);
  /* 11105d83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11105d86 mov eax, dword ptr [0x11130ea8] */
  EAX = (r32((uint32_t)(0x11130ea8)));
  /* 11105d8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11105d8e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11105d95 jmp 0x11105da0 */
  goto L_11105da0;
L_11105d97:;
  /* 11105d97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105d9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105d9d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11105da0:;
  /* 11105da0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11105da3 cmp edx, dword ptr [0x11130ea4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11130ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105da9 jge 0x11105df6 */
  if ((C.sf==C.of)) goto L_11105df6;
  /* 11105dab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11105db0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11105db5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105db8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11105dbb push ecx */
  push32((uint32_t)(ECX));
  /* 11105dbc call dword ptr [0x1113236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113236c))), 0x11105dc2u);
  /* 11105dc2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11105dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105dc9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105dcc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11105dcf push eax */
  push32((uint32_t)(EAX));
  /* 11105dd0 call dword ptr [0x1113236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113236c))), 0x11105dd6u);
  /* 11105dd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105dd9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11105ddc push edx */
  push32((uint32_t)(EDX));
  /* 11105ddd push 0 */
  push32((uint32_t)(0x0u));
  /* 11105ddf mov eax, dword ptr [0x11130eac] */
  EAX = (r32((uint32_t)(0x11130eac)));
  /* 11105de4 push eax */
  push32((uint32_t)(EAX));
  /* 11105de5 call dword ptr [0x111323b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323b4))), 0x11105debu);
  /* 11105deb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105dee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105df1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11105df4 jmp 0x11105d97 */
  goto L_11105d97;
L_11105df6:;
  /* 11105df6 mov edx, dword ptr [0x11130ea8] */
  EDX = (r32((uint32_t)(0x11130ea8)));
  /* 11105dfc push edx */
  push32((uint32_t)(EDX));
  /* 11105dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11105dff mov eax, dword ptr [0x11130eac] */
  EAX = (r32((uint32_t)(0x11130eac)));
  /* 11105e04 push eax */
  push32((uint32_t)(EAX));
  /* 11105e05 call dword ptr [0x111323b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323b4))), 0x11105e0bu);
  /* 11105e0b mov ecx, dword ptr [0x11130eac] */
  ECX = (r32((uint32_t)(0x11130eac)));
  /* 11105e11 push ecx */
  push32((uint32_t)(ECX));
  /* 11105e12 call dword ptr [0x111323ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323ac))), 0x11105e18u);
  /* 11105e18 mov esp, ebp */
  ESP = (EBP);
  /* 11105e1a pop ebp */
  EBP = (pop32());
  /* 11105e1b ret  */
  ESPCHK(0x11105d80u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11105e20 (73 bytes, 19 insns) */
void f_11105e20(void) {
  FTRACE(0x11105e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11105e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11105e21 mov ebp, esp */
  EBP = (ESP);
  /* 11105e23 cmp dword ptr [0x1112f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105e2a je 0x11105e3e */
  if (C.zf) goto L_11105e3e;
  /* 11105e2c cmp dword ptr [0x1112f504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105e33 jne 0x11105e67 */
  if (!C.zf) goto L_11105e67;
  /* 11105e35 cmp dword ptr [0x1112f508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105e3c jne 0x11105e67 */
  if (!C.zf) goto L_11105e67;
L_11105e3e:;
  /* 11105e3e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11105e43 call 0x11105e70 */
  push32(0x11105e48u); f_11105e70();
  /* 11105e48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105e4b cmp dword ptr [0x1112f674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105e52 je 0x11105e5a */
  if (C.zf) goto L_11105e5a;
  /* 11105e54 call dword ptr [0x1112f674] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f674))), 0x11105e5au);
L_11105e5a:;
  /* 11105e5a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11105e5f call 0x11105e70 */
  push32(0x11105e64u); f_11105e70();
  /* 11105e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11105e67:;
  /* 11105e67 pop ebp */
  EBP = (pop32());
  /* 11105e68 ret  */
  ESPCHK(0x11105e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e70 @ 0x11105e70 (447 bytes, 131 insns) */
void f_11105e70(void) {
  FTRACE(0x11105e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11105e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11105e71 mov ebp, esp */
  EBP = (ESP);
  /* 11105e73 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11105e79 push ebx */
  push32((uint32_t)(EBX));
  /* 11105e7a push esi */
  push32((uint32_t)(ESI));
  /* 11105e7b push edi */
  push32((uint32_t)(EDI));
  /* 11105e7c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11105e83 jmp 0x11105e8e */
  goto L_11105e8e;
L_11105e85:;
  /* 11105e85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105e88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105e8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11105e8e:;
  /* 11105e8e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105e92 jae 0x11105ea7 */
  if (!C.cf) goto L_11105ea7;
  /* 11105e94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105e97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11105e9a cmp edx, dword ptr [ecx*8 + 0x1112dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1112dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105ea1 jne 0x11105ea5 */
  if (!C.zf) goto L_11105ea5;
  /* 11105ea3 jmp 0x11105ea7 */
  goto L_11105ea7;
L_11105ea5:;
  /* 11105ea5 jmp 0x11105e85 */
  goto L_11105e85;
L_11105ea7:;
  /* 11105ea7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105eaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11105ead cmp ecx, dword ptr [eax*8 + 0x1112dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1112dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105eb4 jne 0x11106028 */
  if (!C.zf) goto L_11106028;
  /* 11105eba cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105ec1 je 0x11105ee4 */
  if (C.zf) goto L_11105ee4;
  /* 11105ec3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105ec6 mov eax, dword ptr [edx*8 + 0x1112dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1112dab4)));
  /* 11105ecd push eax */
  push32((uint32_t)(EAX));
  /* 11105ece push 0 */
  push32((uint32_t)(0x0u));
  /* 11105ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11105ed6 call 0x11102600 */
  push32(0x11105edbu); f_11102600();
  /* 11105edb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105ede cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105ee1 jne 0x11105ee4 */
  if (!C.zf) goto L_11105ee4;
  /* 11105ee3 int3  */
  x86_unimpl("int3 @ 0x11105ee3");
L_11105ee4:;
  /* 11105ee4 cmp dword ptr [0x1112f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105eeb je 0x11105eff */
  if (C.zf) goto L_11105eff;
  /* 11105eed cmp dword ptr [0x1112f504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105ef4 jne 0x11105f38 */
  if (!C.zf) goto L_11105f38;
  /* 11105ef6 cmp dword ptr [0x1112f508], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1112f508))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105efd jne 0x11105f38 */
  if (!C.zf) goto L_11105f38;
L_11105eff:;
  /* 11105eff push 0 */
  push32((uint32_t)(0x0u));
  /* 11105f01 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11105f04 push ecx */
  push32((uint32_t)(ECX));
  /* 11105f05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105f08 mov eax, dword ptr [edx*8 + 0x1112dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1112dab4)));
  /* 11105f0f push eax */
  push32((uint32_t)(EAX));
  /* 11105f10 call 0x11106370 */
  push32(0x11105f15u); f_11106370();
  /* 11105f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105f18 push eax */
  push32((uint32_t)(EAX));
  /* 11105f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105f1c mov edx, dword ptr [ecx*8 + 0x1112dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1112dab4)));
  /* 11105f23 push edx */
  push32((uint32_t)(EDX));
  /* 11105f24 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11105f26 call dword ptr [0x11132334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132334))), 0x11105f2cu);
  /* 11105f2c push eax */
  push32((uint32_t)(EAX));
  /* 11105f2d call dword ptr [0x11132338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132338))), 0x11105f33u);
  /* 11105f33 jmp 0x11106028 */
  goto L_11106028;
L_11105f38:;
  /* 11105f38 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105f3f je 0x11106028 */
  if (C.zf) goto L_11106028;
  /* 11105f45 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11105f4a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11105f50 push eax */
  push32((uint32_t)(EAX));
  /* 11105f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11105f53 call dword ptr [0x11132350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132350))), 0x11105f59u);
  /* 11105f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11105f5b jne 0x11105f71 */
  if (!C.zf) goto L_11105f71;
  /* 11105f5d push 0x1112a440 */
  push32((uint32_t)(0x1112a440u));
  /* 11105f62 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11105f68 push ecx */
  push32((uint32_t)(ECX));
  /* 11105f69 call 0x111064f0 */
  push32(0x11105f6eu); f_111064f0();
  /* 11105f6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11105f71:;
  /* 11105f71 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11105f77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11105f7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105f7d push eax */
  push32((uint32_t)(EAX));
  /* 11105f7e call 0x11106370 */
  push32(0x11105f83u); f_11106370();
  /* 11105f83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105f86 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11105f89 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11105f8c jbe 0x11105fba */
  if ((C.cf||C.zf)) goto L_11105fba;
  /* 11105f8e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11105f94 push ecx */
  push32((uint32_t)(ECX));
  /* 11105f95 call 0x11106370 */
  push32(0x11105f9au); f_11106370();
  /* 11105f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105f9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105fa0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11105fa4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11105fa7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11105fa9 push 0x1112a43c */
  push32((uint32_t)(0x1112a43cu));
  /* 11105fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11105fb2 call 0x11106d60 */
  push32(0x11105fb7u); f_11106d60();
  /* 11105fb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11105fba:;
  /* 11105fba push 0x1112ae94 */
  push32((uint32_t)(0x1112ae94u));
  /* 11105fbf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11105fc5 push edx */
  push32((uint32_t)(EDX));
  /* 11105fc6 call 0x111064f0 */
  push32(0x11105fcbu); f_111064f0();
  /* 11105fcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105fce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11105fd1 push eax */
  push32((uint32_t)(EAX));
  /* 11105fd2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11105fd8 push ecx */
  push32((uint32_t)(ECX));
  /* 11105fd9 call 0x11106500 */
  push32(0x11105fdeu); f_11106500();
  /* 11105fde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105fe1 push 0x1112a3b4 */
  push32((uint32_t)(0x1112a3b4u));
  /* 11105fe6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11105fec push edx */
  push32((uint32_t)(EDX));
  /* 11105fed call 0x11106500 */
  push32(0x11105ff2u); f_11106500();
  /* 11105ff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11105ff5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11105ff8 mov ecx, dword ptr [eax*8 + 0x1112dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1112dab4)));
  /* 11105fff push ecx */
  push32((uint32_t)(ECX));
  /* 11106000 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11106006 push edx */
  push32((uint32_t)(EDX));
  /* 11106007 call 0x11106500 */
  push32(0x1110600cu); f_11106500();
  /* 1110600c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110600f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11106014 push 0x1112ae6c */
  push32((uint32_t)(0x1112ae6cu));
  /* 11106019 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1110601f push eax */
  push32((uint32_t)(EAX));
  /* 11106020 call 0x11106ca0 */
  push32(0x11106025u); f_11106ca0();
  /* 11106025 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106028:;
  /* 11106028 pop edi */
  EDI = (pop32());
  /* 11106029 pop esi */
  ESI = (pop32());
  /* 1110602a pop ebx */
  EBX = (pop32());
  /* 1110602b mov esp, ebp */
  ESP = (EBP);
  /* 1110602d pop ebp */
  EBP = (pop32());
  /* 1110602e ret  */
  ESPCHK(0x11105e70u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11106030 (80 bytes, 27 insns) */
void f_11106030(void) {
  FTRACE(0x11106030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106030 push ebp */
  push32((uint32_t)(EBP));
  /* 11106031 mov ebp, esp */
  EBP = (ESP);
  /* 11106033 push ecx */
  push32((uint32_t)(ECX));
  /* 11106034 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1110603b jmp 0x11106046 */
  goto L_11106046;
L_1110603d:;
  /* 1110603d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106040 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106043 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11106046:;
  /* 11106046 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110604a jae 0x1110605f */
  if (!C.cf) goto L_1110605f;
  /* 1110604c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110604f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106052 cmp edx, dword ptr [ecx*8 + 0x1112dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1112dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106059 jne 0x1110605d */
  if (!C.zf) goto L_1110605d;
  /* 1110605b jmp 0x1110605f */
  goto L_1110605f;
L_1110605d:;
  /* 1110605d jmp 0x1110603d */
  goto L_1110603d;
L_1110605f:;
  /* 1110605f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106062 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106065 cmp ecx, dword ptr [eax*8 + 0x1112dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1112dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110606c jne 0x1110607a */
  if (!C.zf) goto L_1110607a;
  /* 1110606e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106071 mov eax, dword ptr [edx*8 + 0x1112dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1112dab4)));
  /* 11106078 jmp 0x1110607c */
  goto L_1110607c;
L_1110607a:;
  /* 1110607a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1110607c:;
  /* 1110607c mov esp, ebp */
  ESP = (EBP);
  /* 1110607e pop ebp */
  EBP = (pop32());
  /* 1110607f ret  */
  ESPCHK(0x11106030u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11106080 (66 bytes, 28 insns) */
void f_11106080(void) {
  FTRACE(0x11106080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106080 push ebp */
  push32((uint32_t)(EBP));
  /* 11106081 mov ebp, esp */
  EBP = (ESP);
  /* 11106083 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106087 jne 0x111060a7 */
  if (!C.zf) goto L_111060a7;
  /* 11106089 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110608d jge 0x111060a7 */
  if ((C.sf==C.of)) goto L_111060a7;
  /* 1110608f push 1 */
  push32((uint32_t)(0x1u));
  /* 11106091 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11106094 push eax */
  push32((uint32_t)(EAX));
  /* 11106095 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106098 push ecx */
  push32((uint32_t)(ECX));
  /* 11106099 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110609c push edx */
  push32((uint32_t)(EDX));
  /* 1110609d call 0x111060d0 */
  push32(0x111060a2u); f_111060d0();
  /* 111060a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111060a5 jmp 0x111060bd */
  goto L_111060bd;
L_111060a7:;
  /* 111060a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111060a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111060ac push eax */
  push32((uint32_t)(EAX));
  /* 111060ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111060b0 push ecx */
  push32((uint32_t)(ECX));
  /* 111060b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111060b4 push edx */
  push32((uint32_t)(EDX));
  /* 111060b5 call 0x111060d0 */
  push32(0x111060bau); f_111060d0();
  /* 111060ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111060bd:;
  /* 111060bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111060c0 pop ebp */
  EBP = (pop32());
  /* 111060c1 ret  */
  ESPCHK(0x11106080u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x111060d0 (194 bytes, 71 insns) */
void f_111060d0(void) {
  FTRACE(0x111060d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111060d0 push ebp */
  push32((uint32_t)(EBP));
  /* 111060d1 mov ebp, esp */
  EBP = (ESP);
  /* 111060d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111060d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111060d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111060dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111060e0 je 0x111060f9 */
  if (C.zf) goto L_111060f9;
  /* 111060e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111060e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 111060e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111060eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111060ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111060f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111060f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111060f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_111060f9:;
  /* 111060f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111060fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_111060ff:;
  /* 111060ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106102 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11106104 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11106107 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1110610a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110610d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110610f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11106112 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11106115 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106119 jbe 0x11106131 */
  if ((C.cf||C.zf)) goto L_11106131;
  /* 1110611b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1110611e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106121 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106124 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11106126 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106129 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110612c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1110612f jmp 0x11106145 */
  goto L_11106145;
L_11106131:;
  /* 11106131 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11106134 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110613a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1110613c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110613f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106142 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11106145:;
  /* 11106145 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106149 ja 0x111060ff */
  if ((!C.cf&&!C.zf)) goto L_111060ff;
  /* 1110614b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110614e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11106151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106154 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11106157 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1110615a:;
  /* 1110615a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110615d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1110615f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11106162 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106165 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106168 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1110616a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1110616c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110616f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11106172 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11106174 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106177 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110617a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110617d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106180 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106183 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11106186 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106189 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110618c jb 0x1110615a */
  if (C.cf) goto L_1110615a;
  /* 1110618e mov esp, ebp */
  ESP = (EBP);
  /* 11106190 pop ebp */
  EBP = (pop32());
  /* 11106191 ret  */
  ESPCHK(0x111060d0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x111061a0 (63 bytes, 24 insns) */
void f_111061a0(void) {
  FTRACE(0x111061a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111061a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111061a1 mov ebp, esp */
  EBP = (ESP);
  /* 111061a3 push ecx */
  push32((uint32_t)(ECX));
  /* 111061a4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111061a8 jne 0x111061b9 */
  if (!C.zf) goto L_111061b9;
  /* 111061aa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111061ae jge 0x111061b9 */
  if ((C.sf==C.of)) goto L_111061b9;
  /* 111061b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111061b7 jmp 0x111061c0 */
  goto L_111061c0;
L_111061b9:;
  /* 111061b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_111061c0:;
  /* 111061c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111061c3 push eax */
  push32((uint32_t)(EAX));
  /* 111061c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111061c7 push ecx */
  push32((uint32_t)(ECX));
  /* 111061c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111061cb push edx */
  push32((uint32_t)(EDX));
  /* 111061cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111061cf push eax */
  push32((uint32_t)(EAX));
  /* 111061d0 call 0x111060d0 */
  push32(0x111061d5u); f_111060d0();
  /* 111061d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111061d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111061db mov esp, ebp */
  ESP = (EBP);
  /* 111061dd pop ebp */
  EBP = (pop32());
  /* 111061de ret  */
  ESPCHK(0x111061a0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x111061e0 (30 bytes, 14 insns) */
void f_111061e0(void) {
  FTRACE(0x111061e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111061e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111061e1 mov ebp, esp */
  EBP = (ESP);
  /* 111061e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111061e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111061e8 push eax */
  push32((uint32_t)(EAX));
  /* 111061e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111061ec push ecx */
  push32((uint32_t)(ECX));
  /* 111061ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111061f0 push edx */
  push32((uint32_t)(EDX));
  /* 111061f1 call 0x111060d0 */
  push32(0x111061f6u); f_111060d0();
  /* 111061f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111061f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111061fc pop ebp */
  EBP = (pop32());
  /* 111061fd ret  */
  ESPCHK(0x111061e0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11106200 (72 bytes, 28 insns) */
void f_11106200(void) {
  FTRACE(0x11106200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106200 push ebp */
  push32((uint32_t)(EBP));
  /* 11106201 mov ebp, esp */
  EBP = (ESP);
  /* 11106203 push ecx */
  push32((uint32_t)(ECX));
  /* 11106204 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106208 jne 0x11106221 */
  if (!C.zf) goto L_11106221;
  /* 1110620a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110620e jg 0x11106221 */
  if ((!C.zf&&C.sf==C.of)) goto L_11106221;
  /* 11106210 jl 0x11106218 */
  if ((C.sf!=C.of)) goto L_11106218;
  /* 11106212 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106216 jae 0x11106221 */
  if (!C.cf) goto L_11106221;
L_11106218:;
  /* 11106218 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1110621f jmp 0x11106228 */
  goto L_11106228;
L_11106221:;
  /* 11106221 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11106228:;
  /* 11106228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110622b push eax */
  push32((uint32_t)(EAX));
  /* 1110622c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110622f push ecx */
  push32((uint32_t)(ECX));
  /* 11106230 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11106233 push edx */
  push32((uint32_t)(EDX));
  /* 11106234 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106237 push eax */
  push32((uint32_t)(EAX));
  /* 11106238 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110623b push ecx */
  push32((uint32_t)(ECX));
  /* 1110623c call 0x11106250 */
  push32(0x11106241u); f_11106250();
  /* 11106241 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11106244 mov esp, ebp */
  ESP = (EBP);
  /* 11106246 pop ebp */
  EBP = (pop32());
  /* 11106247 ret  */
  ESPCHK(0x11106200u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11106250 (242 bytes, 91 insns) */
void f_11106250(void) {
  FTRACE(0x11106250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106250 push ebp */
  push32((uint32_t)(EBP));
  /* 11106251 mov ebp, esp */
  EBP = (ESP);
  /* 11106253 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11106256 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11106259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110625c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106260 je 0x11106284 */
  if (C.zf) goto L_11106284;
  /* 11106262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106265 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11106268 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110626b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110626e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11106271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106274 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11106276 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106279 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110627c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1110627e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11106281 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11106284:;
  /* 11106284 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106287 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1110628a:;
  /* 1110628a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110628d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1110628f push ecx */
  push32((uint32_t)(ECX));
  /* 11106290 push eax */
  push32((uint32_t)(EAX));
  /* 11106291 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106294 push edx */
  push32((uint32_t)(EDX));
  /* 11106295 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106298 push eax */
  push32((uint32_t)(EAX));
  /* 11106299 call 0x1110a1d0 */
  push32(0x1110629eu); f_1110a1d0();
  /* 1110629e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111062a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 111062a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111062a6 push edx */
  push32((uint32_t)(EDX));
  /* 111062a7 push ecx */
  push32((uint32_t)(ECX));
  /* 111062a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111062ab push eax */
  push32((uint32_t)(EAX));
  /* 111062ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111062af push ecx */
  push32((uint32_t)(ECX));
  /* 111062b0 call 0x1110a160 */
  push32(0x111062b5u); f_1110a160();
  /* 111062b5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111062b8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 111062bb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111062bf jbe 0x111062d7 */
  if ((C.cf||C.zf)) goto L_111062d7;
  /* 111062c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111062c4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111062c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111062ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111062cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111062cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111062d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111062d5 jmp 0x111062eb */
  goto L_111062eb;
L_111062d7:;
  /* 111062d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111062da add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111062dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111062e0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111062e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111062e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111062e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_111062eb:;
  /* 111062eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111062ef ja 0x1110628a */
  if ((!C.cf&&!C.zf)) goto L_1110628a;
  /* 111062f1 jb 0x111062f9 */
  if (C.cf) goto L_111062f9;
  /* 111062f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111062f7 ja 0x1110628a */
  if ((!C.cf&&!C.zf)) goto L_1110628a;
L_111062f9:;
  /* 111062f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111062fc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 111062ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106302 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11106305 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11106308:;
  /* 11106308 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110630b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1110630d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11106310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106313 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106316 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11106318 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1110631a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110631d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11106320 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11106322 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106325 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11106328 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1110632b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110632e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106331 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11106334 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106337 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110633a jb 0x11106308 */
  if (C.cf) goto L_11106308;
  /* 1110633c mov esp, ebp */
  ESP = (EBP);
  /* 1110633e pop ebp */
  EBP = (pop32());
  /* 1110633f ret 0x14 */
  ESPCHK(0x11106250u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11106350 (31 bytes, 15 insns) */
void f_11106350(void) {
  FTRACE(0x11106350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106350 push ebp */
  push32((uint32_t)(EBP));
  /* 11106351 mov ebp, esp */
  EBP = (ESP);
  /* 11106353 push 0 */
  push32((uint32_t)(0x0u));
  /* 11106355 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11106358 push eax */
  push32((uint32_t)(EAX));
  /* 11106359 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110635c push ecx */
  push32((uint32_t)(ECX));
  /* 1110635d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106360 push edx */
  push32((uint32_t)(EDX));
  /* 11106361 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106364 push eax */
  push32((uint32_t)(EAX));
  /* 11106365 call 0x11106250 */
  push32(0x1110636au); f_11106250();
  /* 1110636a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110636d pop ebp */
  EBP = (pop32());
  /* 1110636e ret  */
  ESPCHK(0x11106350u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11106370 (123 bytes, 44 insns) */
void f_11106370(void) {
  FTRACE(0x11106370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106370 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11106374 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1110637a je 0x11106390 */
  if (C.zf) goto L_11106390;
L_1110637c:;
  /* 1110637c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1110637e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1110637f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11106381 je 0x111063c3 */
  if (C.zf) goto L_111063c3;
  /* 11106383 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11106389 jne 0x1110637c */
  if (!C.zf) goto L_1110637c;
  /* 1110638b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11106390:;
  /* 11106390 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11106392 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11106397 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106399 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110639c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1110639e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111063a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111063a6 je 0x11106390 */
  if (C.zf) goto L_11106390;
  /* 111063a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 111063ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111063ad je 0x111063e1 */
  if (C.zf) goto L_111063e1;
  /* 111063af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111063b1 je 0x111063d7 */
  if (C.zf) goto L_111063d7;
  /* 111063b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 111063b8 je 0x111063cd */
  if (C.zf) goto L_111063cd;
  /* 111063ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 111063bf je 0x111063c3 */
  if (C.zf) goto L_111063c3;
  /* 111063c1 jmp 0x11106390 */
  goto L_11106390;
L_111063c3:;
  /* 111063c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 111063c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111063ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111063cc ret  */
  ESPCHK(0x11106370u, _esp0);
  ESP += 4; return;
L_111063cd:;
  /* 111063cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 111063d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111063d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111063d6 ret  */
  ESPCHK(0x11106370u, _esp0);
  ESP += 4; return;
L_111063d7:;
  /* 111063d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 111063da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111063de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111063e0 ret  */
  ESPCHK(0x11106370u, _esp0);
  ESP += 4; return;
L_111063e1:;
  /* 111063e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 111063e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111063e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111063ea ret  */
  ESPCHK(0x11106370u, _esp0);
  ESP += 4; return;
}

/* FUN_100063f0 @ 0x111063f0 (249 bytes, 93 insns) */
void f_111063f0(void) {
  FTRACE(0x111063f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111063f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111063f1 mov ebp, esp */
  EBP = (ESP);
  /* 111063f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111063f6 push ebx */
  push32((uint32_t)(EBX));
  /* 111063f7 push esi */
  push32((uint32_t)(ESI));
  /* 111063f8 push edi */
  push32((uint32_t)(EDI));
  /* 111063f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 111063fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111063ff lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11106402 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11106405:;
  /* 11106405 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106409 jne 0x11106429 */
  if (!C.zf) goto L_11106429;
  /* 1110640b push 0x1112aecc */
  push32((uint32_t)(0x1112aeccu));
  /* 11106410 push 0 */
  push32((uint32_t)(0x0u));
  /* 11106412 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11106414 push 0x1112aec0 */
  push32((uint32_t)(0x1112aec0u));
  /* 11106419 push 2 */
  push32((uint32_t)(0x2u));
  /* 1110641b call 0x11102600 */
  push32(0x11106420u); f_11102600();
  /* 11106420 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106423 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106426 jne 0x11106429 */
  if (!C.zf) goto L_11106429;
  /* 11106428 int3  */
  x86_unimpl("int3 @ 0x11106428");
L_11106429:;
  /* 11106429 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110642b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1110642d jne 0x11106405 */
  if (!C.zf) goto L_11106405;
L_1110642f:;
  /* 1110642f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106433 jne 0x11106453 */
  if (!C.zf) goto L_11106453;
  /* 11106435 push 0x1112aeb0 */
  push32((uint32_t)(0x1112aeb0u));
  /* 1110643a push 0 */
  push32((uint32_t)(0x0u));
  /* 1110643c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1110643e push 0x1112aec0 */
  push32((uint32_t)(0x1112aec0u));
  /* 11106443 push 2 */
  push32((uint32_t)(0x2u));
  /* 11106445 call 0x11102600 */
  push32(0x1110644au); f_11102600();
  /* 1110644a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110644d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106450 jne 0x11106453 */
  if (!C.zf) goto L_11106453;
  /* 11106452 int3  */
  x86_unimpl("int3 @ 0x11106452");
L_11106453:;
  /* 11106453 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11106455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11106457 jne 0x1110642f */
  if (!C.zf) goto L_1110642f;
  /* 11106459 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110645c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11106463 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106469 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1110646c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110646f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106472 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11106474 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106477 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110647a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1110647d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11106480 push edx */
  push32((uint32_t)(EDX));
  /* 11106481 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11106484 push eax */
  push32((uint32_t)(EAX));
  /* 11106485 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106488 push ecx */
  push32((uint32_t)(ECX));
  /* 11106489 call 0x1110a4d0 */
  push32(0x1110648eu); f_1110a4d0();
  /* 1110648e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106491 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11106494 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106497 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1110649a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1110649d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111064a0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111064a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111064a6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111064aa jl 0x111064ce */
  if ((C.sf!=C.of)) goto L_111064ce;
  /* 111064ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111064af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111064b1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 111064b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111064b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111064bc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 111064bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111064c2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111064c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111064c7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111064ca mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111064cc jmp 0x111064df */
  goto L_111064df;
L_111064ce:;
  /* 111064ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 111064d1 push eax */
  push32((uint32_t)(EAX));
  /* 111064d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111064d4 call 0x1110a250 */
  push32(0x111064d9u); f_1110a250();
  /* 111064d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111064dc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_111064df:;
  /* 111064df mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111064e2 pop edi */
  EDI = (pop32());
  /* 111064e3 pop esi */
  ESI = (pop32());
  /* 111064e4 pop ebx */
  EBX = (pop32());
  /* 111064e5 mov esp, ebp */
  ESP = (EBP);
  /* 111064e7 pop ebp */
  EBP = (pop32());
  /* 111064e8 ret  */
  ESPCHK(0x111063f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064f0 @ 0x111064f0 (7 bytes, 3 insns) */
void f_111064f0(void) {
  FTRACE(0x111064f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111064f0 push edi */
  push32((uint32_t)(EDI));
  /* 111064f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 111064f5 jmp 0x11106561 */
  jmp_ind(0x11106561u); return;
}

/* FUN_10006500 @ 0x11106500 (224 bytes, 84 insns) */
void f_11106500(void) {
  FTRACE(0x11106500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106500 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11106504 push edi */
  push32((uint32_t)(EDI));
  /* 11106505 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1110650b je 0x1110651c */
  if (C.zf) goto L_1110651c;
L_1110650d:;
  /* 1110650d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1110650f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11106510 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11106512 je 0x1110654f */
  if (C.zf) goto L_1110654f;
  /* 11106514 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1110651a jne 0x1110650d */
  if (!C.zf) goto L_1110650d;
L_1110651c:;
  /* 1110651c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1110651e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11106523 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106525 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11106528 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1110652a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110652d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11106532 je 0x1110651c */
  if (C.zf) goto L_1110651c;
  /* 11106534 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11106537 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11106539 je 0x1110655e */
  if (C.zf) goto L_1110655e;
  /* 1110653b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1110653d je 0x11106559 */
  if (C.zf) goto L_11106559;
  /* 1110653f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11106544 je 0x11106554 */
  if (C.zf) goto L_11106554;
  /* 11106546 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1110654b je 0x1110654f */
  if (C.zf) goto L_1110654f;
  /* 1110654d jmp 0x1110651c */
  goto L_1110651c;
L_1110654f:;
  /* 1110654f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11106552 jmp 0x11106561 */
  goto L_11106561;
L_11106554:;
  /* 11106554 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11106557 jmp 0x11106561 */
  goto L_11106561;
L_11106559:;
  /* 11106559 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1110655c jmp 0x11106561 */
  goto L_11106561;
L_1110655e:;
  /* 1110655e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11106561:;
  /* 11106561 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11106565 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1110656b je 0x11106586 */
  if (C.zf) goto L_11106586;
L_1110656d:;
  /* 1110656d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1110656f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11106570 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11106572 je 0x111065d8 */
  if (C.zf) goto L_111065d8;
  /* 11106574 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11106576 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11106577 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1110657d jne 0x1110656d */
  if (!C.zf) goto L_1110656d;
  /* 1110657f jmp 0x11106586 */
  goto L_11106586;
L_11106581:;
  /* 11106581 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11106583 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11106586:;
  /* 11106586 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1110658b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1110658d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110658f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11106592 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11106594 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11106596 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106599 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1110659e je 0x11106581 */
  if (C.zf) goto L_11106581;
  /* 111065a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111065a2 je 0x111065d8 */
  if (C.zf) goto L_111065d8;
  /* 111065a4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 111065a6 je 0x111065cf */
  if (C.zf) goto L_111065cf;
  /* 111065a8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 111065ae je 0x111065c2 */
  if (C.zf) goto L_111065c2;
  /* 111065b0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 111065b6 je 0x111065ba */
  if (C.zf) goto L_111065ba;
  /* 111065b8 jmp 0x11106581 */
  goto L_11106581;
L_111065ba:;
  /* 111065ba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111065bc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111065c0 pop edi */
  EDI = (pop32());
  /* 111065c1 ret  */
  ESPCHK(0x11106500u, _esp0);
  ESP += 4; return;
L_111065c2:;
  /* 111065c2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 111065c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111065c9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 111065cd pop edi */
  EDI = (pop32());
  /* 111065ce ret  */
  ESPCHK(0x11106500u, _esp0);
  ESP += 4; return;
L_111065cf:;
  /* 111065cf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 111065d2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111065d6 pop edi */
  EDI = (pop32());
  /* 111065d7 ret  */
  ESPCHK(0x11106500u, _esp0);
  ESP += 4; return;
L_111065d8:;
  /* 111065d8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 111065da mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111065de pop edi */
  EDI = (pop32());
  /* 111065df ret  */
  ESPCHK(0x11106500u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e0 @ 0x111065e0 (243 bytes, 91 insns) */
void f_111065e0(void) {
  FTRACE(0x111065e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111065e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111065e1 mov ebp, esp */
  EBP = (ESP);
  /* 111065e3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111065e6 push ebx */
  push32((uint32_t)(EBX));
  /* 111065e7 push esi */
  push32((uint32_t)(ESI));
  /* 111065e8 push edi */
  push32((uint32_t)(EDI));
  /* 111065e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 111065ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_111065ef:;
  /* 111065ef cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111065f3 jne 0x11106613 */
  if (!C.zf) goto L_11106613;
  /* 111065f5 push 0x1112aecc */
  push32((uint32_t)(0x1112aeccu));
  /* 111065fa push 0 */
  push32((uint32_t)(0x0u));
  /* 111065fc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 111065fe push 0x1112aedc */
  push32((uint32_t)(0x1112aedcu));
  /* 11106603 push 2 */
  push32((uint32_t)(0x2u));
  /* 11106605 call 0x11102600 */
  push32(0x1110660au); f_11102600();
  /* 1110660a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110660d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106610 jne 0x11106613 */
  if (!C.zf) goto L_11106613;
  /* 11106612 int3  */
  x86_unimpl("int3 @ 0x11106612");
L_11106613:;
  /* 11106613 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11106615 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11106617 jne 0x111065ef */
  if (!C.zf) goto L_111065ef;
L_11106619:;
  /* 11106619 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110661d jne 0x1110663d */
  if (!C.zf) goto L_1110663d;
  /* 1110661f push 0x1112aeb0 */
  push32((uint32_t)(0x1112aeb0u));
  /* 11106624 push 0 */
  push32((uint32_t)(0x0u));
  /* 11106626 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11106628 push 0x1112aedc */
  push32((uint32_t)(0x1112aedcu));
  /* 1110662d push 2 */
  push32((uint32_t)(0x2u));
  /* 1110662f call 0x11102600 */
  push32(0x11106634u); f_11102600();
  /* 11106634 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106637 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110663a jne 0x1110663d */
  if (!C.zf) goto L_1110663d;
  /* 1110663c int3  */
  x86_unimpl("int3 @ 0x1110663c");
L_1110663d:;
  /* 1110663d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1110663f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11106641 jne 0x11106619 */
  if (!C.zf) goto L_11106619;
  /* 11106643 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106646 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1110664d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106650 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106653 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11106656 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110665c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1110665e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106661 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106664 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11106667 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1110666a push ecx */
  push32((uint32_t)(ECX));
  /* 1110666b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1110666e push edx */
  push32((uint32_t)(EDX));
  /* 1110666f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106672 push eax */
  push32((uint32_t)(EAX));
  /* 11106673 call 0x1110a4d0 */
  push32(0x11106678u); f_1110a4d0();
  /* 11106678 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110667b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1110667e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106681 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11106684 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11106687 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1110668a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1110668d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106690 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106694 jl 0x111066b8 */
  if ((C.sf!=C.of)) goto L_111066b8;
  /* 11106696 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11106699 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1110669b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1110669e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111066a0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 111066a6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 111066a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111066ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 111066ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111066b1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 111066b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111066b6 jmp 0x111066c9 */
  goto L_111066c9;
L_111066b8:;
  /* 111066b8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 111066bb push edx */
  push32((uint32_t)(EDX));
  /* 111066bc push 0 */
  push32((uint32_t)(0x0u));
  /* 111066be call 0x1110a250 */
  push32(0x111066c3u); f_1110a250();
  /* 111066c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111066c6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_111066c9:;
  /* 111066c9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 111066cc pop edi */
  EDI = (pop32());
  /* 111066cd pop esi */
  ESI = (pop32());
  /* 111066ce pop ebx */
  EBX = (pop32());
  /* 111066cf mov esp, ebp */
  ESP = (EBP);
  /* 111066d1 pop ebp */
  EBP = (pop32());
  /* 111066d2 ret  */
  ESPCHK(0x111065e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x111066e0 (47 bytes, 17 insns) */
void f_111066e0(void) {
  FTRACE(0x111066e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111066e0 push ecx */
  push32((uint32_t)(ECX));
  /* 111066e1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111066e6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 111066ea jb 0x11106700 */
  if (C.cf) goto L_11106700;
L_111066ec:;
  /* 111066ec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111066f2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111066f7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 111066f9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111066fe jae 0x111066ec */
  if (!C.cf) goto L_111066ec;
L_11106700:;
  /* 11106700 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11106702 mov eax, esp */
  EAX = (ESP);
  /* 11106704 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11106706 mov esp, ecx */
  ESP = (ECX);
  /* 11106708 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1110670a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1110670d push eax */
  push32((uint32_t)(EAX));
  /* 1110670e ret  */
  ESPCHK(0x111066e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006710 @ 0x11106710 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11106710(void) {
  FTRACE(0x11106710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106710 push ebp */
  push32((uint32_t)(EBP));
  /* 11106711 mov ebp, esp */
  EBP = (ESP);
  /* 11106713 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11106716 push esi */
  push32((uint32_t)(ESI));
  /* 11106717 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110671b je 0x11106723 */
  if (C.zf) goto L_11106723;
  /* 1110671d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106721 jne 0x11106728 */
  if (!C.zf) goto L_11106728;
L_11106723:;
  /* 11106723 jmp 0x111068f8 */
  goto L_111068f8;
L_11106728:;
  /* 11106728 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110672c je 0x11106744 */
  if (C.zf) goto L_11106744;
  /* 1110672e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106732 je 0x11106744 */
  if (C.zf) goto L_11106744;
  /* 11106734 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106738 je 0x11106744 */
  if (C.zf) goto L_11106744;
  /* 1110673a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110673e jne 0x11106821 */
  if (!C.zf) goto L_11106821;
L_11106744:;
  /* 11106744 push 1 */
  push32((uint32_t)(0x1u));
  /* 11106746 call 0x11106f40 */
  push32(0x1110674bu); f_11106f40();
  /* 1110674b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110674e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106752 je 0x1110675a */
  if (C.zf) goto L_1110675a;
  /* 11106754 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106758 jne 0x1110679f */
  if (!C.zf) goto L_1110679f;
L_1110675a:;
  /* 1110675a cmp dword ptr [0x1112f688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106761 jne 0x1110679f */
  if (!C.zf) goto L_1110679f;
  /* 11106763 push 1 */
  push32((uint32_t)(0x1u));
  /* 11106765 push 0x11106940 */
  push32((uint32_t)(0x11106940u));
  /* 1110676a call dword ptr [0x11132324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132324))), 0x11106770u);
  /* 11106770 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106773 jne 0x11106781 */
  if (!C.zf) goto L_11106781;
  /* 11106775 mov dword ptr [0x1112f688], 1 */
  w32((uint32_t)(0x1112f688), (0x1u));
  /* 1110677f jmp 0x1110679f */
  goto L_1110679f;
L_11106781:;
  /* 11106781 call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x11106787u);
  /* 11106787 mov esi, eax */
  ESI = (EAX);
  /* 11106789 call 0x1110b420 */
  push32(0x1110678eu); f_1110b420();
  /* 1110678e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11106790 push 1 */
  push32((uint32_t)(0x1u));
  /* 11106792 call 0x11106fe0 */
  push32(0x11106797u); f_11106fe0();
  /* 11106797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110679a jmp 0x111068f8 */
  goto L_111068f8;
L_1110679f:;
  /* 1110679f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111067a2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 111067a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111067a8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111067ab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111067ae cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111067b2 ja 0x11106812 */
  if ((!C.cf&&!C.zf)) goto L_11106812;
  /* 111067b4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111067b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111067b9 mov dl, byte ptr [eax + 0x1110691f] */
  DL = (r8((uint32_t)(EAX + 0x1110691f)));
  /* 111067bf jmp dword ptr [edx*4 + 0x1110690b] */
  switch (EDX) {
    case 0: goto L_111067c6;
    case 1: goto L_11106800;
    case 2: goto L_111067da;
    case 3: goto L_111067ed;
    case 4: goto L_11106812;
    default: x86_unimpl("switch@0x111067bf out of table"); return;
  }
L_111067c6:;
  /* 111067c6 mov ecx, dword ptr [0x1112f678] */
  ECX = (r32((uint32_t)(0x1112f678)));
  /* 111067cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111067cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111067d2 mov dword ptr [0x1112f678], edx */
  w32((uint32_t)(0x1112f678), (EDX));
  /* 111067d8 jmp 0x11106812 */
  goto L_11106812;
L_111067da:;
  /* 111067da mov eax, dword ptr [0x1112f67c] */
  EAX = (r32((uint32_t)(0x1112f67c)));
  /* 111067df mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 111067e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111067e5 mov dword ptr [0x1112f67c], ecx */
  w32((uint32_t)(0x1112f67c), (ECX));
  /* 111067eb jmp 0x11106812 */
  goto L_11106812;
L_111067ed:;
  /* 111067ed mov edx, dword ptr [0x1112f680] */
  EDX = (r32((uint32_t)(0x1112f680)));
  /* 111067f3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111067f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111067f9 mov dword ptr [0x1112f680], eax */
  w32((uint32_t)(0x1112f680), (EAX));
  /* 111067fe jmp 0x11106812 */
  goto L_11106812;
L_11106800:;
  /* 11106800 mov ecx, dword ptr [0x1112f684] */
  ECX = (r32((uint32_t)(0x1112f684)));
  /* 11106806 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11106809 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110680c mov dword ptr [0x1112f684], edx */
  w32((uint32_t)(0x1112f684), (EDX));
L_11106812:;
  /* 11106812 push 1 */
  push32((uint32_t)(0x1u));
  /* 11106814 call 0x11106fe0 */
  push32(0x11106819u); f_11106fe0();
  /* 11106819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110681c jmp 0x111068f3 */
  goto L_111068f3;
L_11106821:;
  /* 11106821 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106825 je 0x11106838 */
  if (C.zf) goto L_11106838;
  /* 11106827 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110682b je 0x11106838 */
  if (C.zf) goto L_11106838;
  /* 1110682d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106831 je 0x11106838 */
  if (C.zf) goto L_11106838;
  /* 11106833 jmp 0x111068f8 */
  goto L_111068f8;
L_11106838:;
  /* 11106838 call 0x11102f80 */
  push32(0x1110683du); f_11102f80();
  /* 1110683d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11106840 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106843 cmp dword ptr [eax + 0x50], 0x1112dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1112dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110684a jne 0x11106895 */
  if (!C.zf) goto L_11106895;
  /* 1110684c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11106851 push 0x1112aee8 */
  push32((uint32_t)(0x1112aee8u));
  /* 11106856 push 2 */
  push32((uint32_t)(0x2u));
  /* 11106858 mov ecx, dword ptr [0x1112dc80] */
  ECX = (r32((uint32_t)(0x1112dc80)));
  /* 1110685e push ecx */
  push32((uint32_t)(ECX));
  /* 1110685f call 0x11103540 */
  push32(0x11106864u); f_11103540();
  /* 11106864 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106867 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110686a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1110686d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106870 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106874 je 0x11106893 */
  if (C.zf) goto L_11106893;
  /* 11106876 mov ecx, dword ptr [0x1112dc80] */
  ECX = (r32((uint32_t)(0x1112dc80)));
  /* 1110687c push ecx */
  push32((uint32_t)(ECX));
  /* 1110687d push 0x1112dc00 */
  push32((uint32_t)(0x1112dc00u));
  /* 11106882 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106885 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11106888 push eax */
  push32((uint32_t)(EAX));
  /* 11106889 call 0x11109e20 */
  push32(0x1110688eu); f_11109e20();
  /* 1110688e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106891 jmp 0x11106895 */
  goto L_11106895;
L_11106893:;
  /* 11106893 jmp 0x111068f8 */
  goto L_111068f8;
L_11106895:;
  /* 11106895 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106898 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1110689b push edx */
  push32((uint32_t)(EDX));
  /* 1110689c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110689f push eax */
  push32((uint32_t)(EAX));
  /* 111068a0 call 0x11106c20 */
  push32(0x111068a5u); f_11106c20();
  /* 111068a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111068a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111068ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111068af jne 0x111068b3 */
  if (!C.zf) goto L_111068b3;
  /* 111068b1 jmp 0x111068f8 */
  goto L_111068f8;
L_111068b3:;
  /* 111068b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111068b6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 111068b9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_111068bc:;
  /* 111068bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111068bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111068c2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111068c5 jne 0x111068f3 */
  if (!C.zf) goto L_111068f3;
  /* 111068c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111068ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111068cd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 111068d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111068d3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111068d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111068d9 mov edx, dword ptr [0x1112dc84] */
  EDX = (r32((uint32_t)(0x1112dc84)));
  /* 111068df imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111068e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111068e5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 111068e8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111068ea cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111068ed jb 0x111068f1 */
  if (C.cf) goto L_111068f1;
  /* 111068ef jmp 0x111068f3 */
  goto L_111068f3;
L_111068f1:;
  /* 111068f1 jmp 0x111068bc */
  goto L_111068bc;
L_111068f3:;
  /* 111068f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111068f6 jmp 0x11106906 */
  goto L_11106906;
L_111068f8:;
  /* 111068f8 call 0x1110b410 */
  push32(0x111068fdu); f_1110b410();
  /* 111068fd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11106903 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11106906:;
  /* 11106906 pop esi */
  ESI = (pop32());
  /* 11106907 mov esp, ebp */
  ESP = (EBP);
  /* 11106909 pop ebp */
  EBP = (pop32());
  /* 1110690a ret  */
  ESPCHK(0x11106710u, _esp0);
  ESP += 4; return;
}

/* FUN_10006940 @ 0x11106940 (146 bytes, 45 insns) */
void f_11106940(void) {
  FTRACE(0x11106940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106940 push ebp */
  push32((uint32_t)(EBP));
  /* 11106941 mov ebp, esp */
  EBP = (ESP);
  /* 11106943 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11106946 push 1 */
  push32((uint32_t)(0x1u));
  /* 11106948 call 0x11106f40 */
  push32(0x1110694du); f_11106f40();
  /* 1110694d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106950 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106954 jne 0x1110696e */
  if (!C.zf) goto L_1110696e;
  /* 11106956 mov dword ptr [ebp - 8], 0x1112f678 */
  w32((uint32_t)(EBP + -0x8), (0x1112f678u));
  /* 1110695d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106960 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11106962 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11106965 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1110696c jmp 0x11106984 */
  goto L_11106984;
L_1110696e:;
  /* 1110696e mov dword ptr [ebp - 8], 0x1112f67c */
  w32((uint32_t)(EBP + -0x8), (0x1112f67cu));
  /* 11106975 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106978 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1110697a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1110697d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11106984:;
  /* 11106984 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106988 jne 0x11106998 */
  if (!C.zf) goto L_11106998;
  /* 1110698a push 1 */
  push32((uint32_t)(0x1u));
  /* 1110698c call 0x11106fe0 */
  push32(0x11106991u); f_11106fe0();
  /* 11106991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106994 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11106996 jmp 0x111069cc */
  goto L_111069cc;
L_11106998:;
  /* 11106998 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110699c je 0x111069bd */
  if (C.zf) goto L_111069bd;
  /* 1110699e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111069a1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 111069a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111069a9 call 0x11106fe0 */
  push32(0x111069aeu); f_11106fe0();
  /* 111069ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111069b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111069b4 push edx */
  push32((uint32_t)(EDX));
  /* 111069b5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x111069b8u);
  /* 111069b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111069bb jmp 0x111069c7 */
  goto L_111069c7;
L_111069bd:;
  /* 111069bd push 1 */
  push32((uint32_t)(0x1u));
  /* 111069bf call 0x11106fe0 */
  push32(0x111069c4u); f_11106fe0();
  /* 111069c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111069c7:;
  /* 111069c7 mov eax, 1 */
  EAX = (0x1u);
L_111069cc:;
  /* 111069cc mov esp, ebp */
  ESP = (EBP);
  /* 111069ce pop ebp */
  EBP = (pop32());
  /* 111069cf ret 4 */
  ESPCHK(0x11106940u, _esp0);
  ESP += 8; return;
}

/* FUN_100069e0 @ 0x111069e0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_111069e0(void) {
  FTRACE(0x111069e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111069e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111069e1 mov ebp, esp */
  EBP = (ESP);
  /* 111069e3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111069e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 111069ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111069f0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 111069f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 111069f6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111069f9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 111069fc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106a00 ja 0x11106aae */
  if ((!C.cf&&!C.zf)) goto L_11106aae;
  /* 11106a06 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11106a09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11106a0b mov dl, byte ptr [eax + 0x11106c02] */
  DL = (r8((uint32_t)(EAX + 0x11106c02)));
  /* 11106a11 jmp dword ptr [edx*4 + 0x11106bea] */
  switch (EDX) {
    case 0: goto L_11106a18;
    case 1: goto L_11106a83;
    case 2: goto L_11106a69;
    case 3: goto L_11106a35;
    case 4: goto L_11106a4f;
    case 5: goto L_11106aae;
    default: x86_unimpl("switch@0x11106a11 out of table"); return;
  }
L_11106a18:;
  /* 11106a18 mov dword ptr [ebp - 0x18], 0x1112f678 */
  w32((uint32_t)(EBP + -0x18), (0x1112f678u));
  /* 11106a1f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11106a22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11106a24 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11106a27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11106a2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106a2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11106a30 jmp 0x11106ab6 */
  goto L_11106ab6;
L_11106a35:;
  /* 11106a35 mov dword ptr [ebp - 0x18], 0x1112f67c */
  w32((uint32_t)(EBP + -0x18), (0x1112f67cu));
  /* 11106a3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11106a3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11106a41 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11106a44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11106a47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106a4a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11106a4d jmp 0x11106ab6 */
  goto L_11106ab6;
L_11106a4f:;
  /* 11106a4f mov dword ptr [ebp - 0x18], 0x1112f680 */
  w32((uint32_t)(EBP + -0x18), (0x1112f680u));
  /* 11106a56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11106a59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11106a5b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11106a5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11106a61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106a64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11106a67 jmp 0x11106ab6 */
  goto L_11106ab6;
L_11106a69:;
  /* 11106a69 mov dword ptr [ebp - 0x18], 0x1112f684 */
  w32((uint32_t)(EBP + -0x18), (0x1112f684u));
  /* 11106a70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11106a73 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11106a75 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11106a78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11106a7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106a7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11106a81 jmp 0x11106ab6 */
  goto L_11106ab6;
L_11106a83:;
  /* 11106a83 call 0x11102f80 */
  push32(0x11106a88u); f_11102f80();
  /* 11106a88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11106a8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106a8e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11106a91 push edx */
  push32((uint32_t)(EDX));
  /* 11106a92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106a95 push eax */
  push32((uint32_t)(EAX));
  /* 11106a96 call 0x11106c20 */
  push32(0x11106a9bu); f_11106c20();
  /* 11106a9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106a9e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106aa1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11106aa4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11106aa7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11106aa9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11106aac jmp 0x11106ab6 */
  goto L_11106ab6;
L_11106aae:;
  /* 11106aae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11106ab1 jmp 0x11106be6 */
  goto L_11106be6;
L_11106ab6:;
  /* 11106ab6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106aba je 0x11106ac6 */
  if (C.zf) goto L_11106ac6;
  /* 11106abc push 1 */
  push32((uint32_t)(0x1u));
  /* 11106abe call 0x11106f40 */
  push32(0x11106ac3u); f_11106f40();
  /* 11106ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106ac6:;
  /* 11106ac6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106aca jne 0x11106ae3 */
  if (!C.zf) goto L_11106ae3;
  /* 11106acc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106ad0 je 0x11106adc */
  if (C.zf) goto L_11106adc;
  /* 11106ad2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11106ad4 call 0x11106fe0 */
  push32(0x11106ad9u); f_11106fe0();
  /* 11106ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106adc:;
  /* 11106adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11106ade jmp 0x11106be6 */
  goto L_11106be6;
L_11106ae3:;
  /* 11106ae3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106ae7 jne 0x11106b00 */
  if (!C.zf) goto L_11106b00;
  /* 11106ae9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106aed je 0x11106af9 */
  if (C.zf) goto L_11106af9;
  /* 11106aef push 1 */
  push32((uint32_t)(0x1u));
  /* 11106af1 call 0x11106fe0 */
  push32(0x11106af6u); f_11106fe0();
  /* 11106af6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106af9:;
  /* 11106af9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11106afb call 0x11102d00 */
  push32(0x11106b00u); f_11102d00();
L_11106b00:;
  /* 11106b00 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106b04 je 0x11106b12 */
  if (C.zf) goto L_11106b12;
  /* 11106b06 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106b0a je 0x11106b12 */
  if (C.zf) goto L_11106b12;
  /* 11106b0c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106b10 jne 0x11106b3e */
  if (!C.zf) goto L_11106b3e;
L_11106b12:;
  /* 11106b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106b15 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11106b18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11106b1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106b1e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11106b25 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106b29 jne 0x11106b3e */
  if (!C.zf) goto L_11106b3e;
  /* 11106b2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106b2e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11106b31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11106b34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106b37 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11106b3e:;
  /* 11106b3e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106b42 jne 0x11106b80 */
  if (!C.zf) goto L_11106b80;
  /* 11106b44 mov eax, dword ptr [0x1112dc78] */
  EAX = (r32((uint32_t)(0x1112dc78)));
  /* 11106b49 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11106b4c jmp 0x11106b57 */
  goto L_11106b57;
L_11106b4e:;
  /* 11106b4e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11106b51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106b54 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11106b57:;
  /* 11106b57 mov edx, dword ptr [0x1112dc78] */
  EDX = (r32((uint32_t)(0x1112dc78)));
  /* 11106b5d add edx, dword ptr [0x1112dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1112dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106b63 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106b66 jge 0x11106b7e */
  if ((C.sf==C.of)) goto L_11106b7e;
  /* 11106b68 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11106b6b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11106b6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106b71 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11106b74 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11106b7c jmp 0x11106b4e */
  goto L_11106b4e;
L_11106b7e:;
  /* 11106b7e jmp 0x11106b89 */
  goto L_11106b89;
L_11106b80:;
  /* 11106b80 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11106b83 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11106b89:;
  /* 11106b89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106b8d je 0x11106b99 */
  if (C.zf) goto L_11106b99;
  /* 11106b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11106b91 call 0x11106fe0 */
  push32(0x11106b96u); f_11106fe0();
  /* 11106b96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106b99:;
  /* 11106b99 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106b9d jne 0x11106bb0 */
  if (!C.zf) goto L_11106bb0;
  /* 11106b9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106ba2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11106ba5 push edx */
  push32((uint32_t)(EDX));
  /* 11106ba6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11106ba8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11106babu);
  /* 11106bab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106bae jmp 0x11106bba */
  goto L_11106bba;
L_11106bb0:;
  /* 11106bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106bb3 push eax */
  push32((uint32_t)(EAX));
  /* 11106bb4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11106bb7u);
  /* 11106bb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106bba:;
  /* 11106bba cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106bbe je 0x11106bcc */
  if (C.zf) goto L_11106bcc;
  /* 11106bc0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106bc4 je 0x11106bcc */
  if (C.zf) goto L_11106bcc;
  /* 11106bc6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106bca jne 0x11106be4 */
  if (!C.zf) goto L_11106be4;
L_11106bcc:;
  /* 11106bcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106bcf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11106bd2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11106bd5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106bd9 jne 0x11106be4 */
  if (!C.zf) goto L_11106be4;
  /* 11106bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106bde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106be1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11106be4:;
  /* 11106be4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11106be6:;
  /* 11106be6 mov esp, ebp */
  ESP = (EBP);
  /* 11106be8 pop ebp */
  EBP = (pop32());
  /* 11106be9 ret  */
  ESPCHK(0x111069e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c20 @ 0x11106c20 (91 bytes, 35 insns) */
void f_11106c20(void) {
  FTRACE(0x11106c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11106c21 mov ebp, esp */
  EBP = (ESP);
  /* 11106c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11106c24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106c27 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11106c2a:;
  /* 11106c2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106c2d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11106c30 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106c33 je 0x11106c53 */
  if (C.zf) goto L_11106c53;
  /* 11106c35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106c38 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106c3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11106c3e mov ecx, dword ptr [0x1112dc84] */
  ECX = (r32((uint32_t)(0x1112dc84)));
  /* 11106c44 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11106c47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106c4a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106c4c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106c4f jae 0x11106c53 */
  if (!C.cf) goto L_11106c53;
  /* 11106c51 jmp 0x11106c2a */
  goto L_11106c2a;
L_11106c53:;
  /* 11106c53 mov eax, dword ptr [0x1112dc84] */
  EAX = (r32((uint32_t)(0x1112dc84)));
  /* 11106c58 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11106c5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106c5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106c60 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106c63 jae 0x11106c75 */
  if (!C.cf) goto L_11106c75;
  /* 11106c65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106c68 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11106c6b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106c6e jne 0x11106c75 */
  if (!C.zf) goto L_11106c75;
  /* 11106c70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106c73 jmp 0x11106c77 */
  goto L_11106c77;
L_11106c75:;
  /* 11106c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11106c77:;
  /* 11106c77 mov esp, ebp */
  ESP = (EBP);
  /* 11106c79 pop ebp */
  EBP = (pop32());
  /* 11106c7a ret  */
  ESPCHK(0x11106c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c80 @ 0x11106c80 (13 bytes, 6 insns) */
void f_11106c80(void) {
  FTRACE(0x11106c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11106c81 mov ebp, esp */
  EBP = (ESP);
  /* 11106c83 call 0x11102f80 */
  push32(0x11106c88u); f_11102f80();
  /* 11106c88 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106c8b pop ebp */
  EBP = (pop32());
  /* 11106c8c ret  */
  ESPCHK(0x11106c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c90 @ 0x11106c90 (13 bytes, 6 insns) */
void f_11106c90(void) {
  FTRACE(0x11106c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11106c91 mov ebp, esp */
  EBP = (ESP);
  /* 11106c93 call 0x11102f80 */
  push32(0x11106c98u); f_11102f80();
  /* 11106c98 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106c9b pop ebp */
  EBP = (pop32());
  /* 11106c9c ret  */
  ESPCHK(0x11106c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca0 @ 0x11106ca0 (187 bytes, 54 insns) */
void f_11106ca0(void) {
  FTRACE(0x11106ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11106ca1 mov ebp, esp */
  EBP = (ESP);
  /* 11106ca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11106ca6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11106cad cmp dword ptr [0x1112f68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106cb4 jne 0x11106d13 */
  if (!C.zf) goto L_11106d13;
  /* 11106cb6 push 0x1112a314 */
  push32((uint32_t)(0x1112a314u));
  /* 11106cbb call dword ptr [0x11132348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132348))), 0x11106cc1u);
  /* 11106cc1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11106cc4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106cc8 je 0x11106ce7 */
  if (C.zf) goto L_11106ce7;
  /* 11106cca push 0x1112af18 */
  push32((uint32_t)(0x1112af18u));
  /* 11106ccf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106cd2 push eax */
  push32((uint32_t)(EAX));
  /* 11106cd3 call dword ptr [0x11132344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132344))), 0x11106cd9u);
  /* 11106cd9 mov dword ptr [0x1112f68c], eax */
  w32((uint32_t)(0x1112f68c), (EAX));
  /* 11106cde cmp dword ptr [0x1112f68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106ce5 jne 0x11106ceb */
  if (!C.zf) goto L_11106ceb;
L_11106ce7:;
  /* 11106ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11106ce9 jmp 0x11106d57 */
  goto L_11106d57;
L_11106ceb:;
  /* 11106ceb push 0x1112af08 */
  push32((uint32_t)(0x1112af08u));
  /* 11106cf0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11106cf4 call dword ptr [0x11132344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132344))), 0x11106cfau);
  /* 11106cfa mov dword ptr [0x1112f690], eax */
  w32((uint32_t)(0x1112f690), (EAX));
  /* 11106cff push 0x1112aef4 */
  push32((uint32_t)(0x1112aef4u));
  /* 11106d04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11106d07 push edx */
  push32((uint32_t)(EDX));
  /* 11106d08 call dword ptr [0x11132344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132344))), 0x11106d0eu);
  /* 11106d0e mov dword ptr [0x1112f694], eax */
  w32((uint32_t)(0x1112f694), (EAX));
L_11106d13:;
  /* 11106d13 cmp dword ptr [0x1112f690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106d1a je 0x11106d25 */
  if (C.zf) goto L_11106d25;
  /* 11106d1c call dword ptr [0x1112f690] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f690))), 0x11106d22u);
  /* 11106d22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11106d25:;
  /* 11106d25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106d29 je 0x11106d41 */
  if (C.zf) goto L_11106d41;
  /* 11106d2b cmp dword ptr [0x1112f694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106d32 je 0x11106d41 */
  if (C.zf) goto L_11106d41;
  /* 11106d34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106d37 push eax */
  push32((uint32_t)(EAX));
  /* 11106d38 call dword ptr [0x1112f694] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f694))), 0x11106d3eu);
  /* 11106d3e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11106d41:;
  /* 11106d41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11106d44 push ecx */
  push32((uint32_t)(ECX));
  /* 11106d45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11106d48 push edx */
  push32((uint32_t)(EDX));
  /* 11106d49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106d4c push eax */
  push32((uint32_t)(EAX));
  /* 11106d4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106d50 push ecx */
  push32((uint32_t)(ECX));
  /* 11106d51 call dword ptr [0x1112f68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1112f68c))), 0x11106d57u);
L_11106d57:;
  /* 11106d57 mov esp, ebp */
  ESP = (EBP);
  /* 11106d59 pop ebp */
  EBP = (pop32());
  /* 11106d5a ret  */
  ESPCHK(0x11106ca0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11106d60 (254 bytes, 109 insns) */
void f_11106d60(void) {
  FTRACE(0x11106d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106d60 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11106d64 push edi */
  push32((uint32_t)(EDI));
  /* 11106d65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11106d67 je 0x11106de3 */
  if (C.zf) goto L_11106de3;
  /* 11106d69 push esi */
  push32((uint32_t)(ESI));
  /* 11106d6a push ebx */
  push32((uint32_t)(EBX));
  /* 11106d6b mov ebx, ecx */
  EBX = (ECX);
  /* 11106d6d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11106d71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11106d77 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11106d7b jne 0x11106d84 */
  if (!C.zf) goto L_11106d84;
  /* 11106d7d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11106d80 jne 0x11106df1 */
  if (!C.zf) goto L_11106df1;
  /* 11106d82 jmp 0x11106da5 */
  goto L_11106da5;
L_11106d84:;
  /* 11106d84 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11106d86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11106d87 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11106d89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11106d8a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11106d8b je 0x11106db2 */
  if (C.zf) goto L_11106db2;
  /* 11106d8d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11106d8f je 0x11106dba */
  if (C.zf) goto L_11106dba;
  /* 11106d91 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11106d97 jne 0x11106d84 */
  if (!C.zf) goto L_11106d84;
  /* 11106d99 mov ebx, ecx */
  EBX = (ECX);
  /* 11106d9b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11106d9e jne 0x11106df1 */
  if (!C.zf) goto L_11106df1;
L_11106da0:;
  /* 11106da0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11106da3 je 0x11106db2 */
  if (C.zf) goto L_11106db2;
L_11106da5:;
  /* 11106da5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11106da7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11106da8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11106daa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11106dab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11106dad je 0x11106dde */
  if (C.zf) goto L_11106dde;
  /* 11106daf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11106db0 jne 0x11106da5 */
  if (!C.zf) goto L_11106da5;
L_11106db2:;
  /* 11106db2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11106db6 pop ebx */
  EBX = (pop32());
  /* 11106db7 pop esi */
  ESI = (pop32());
  /* 11106db8 pop edi */
  EDI = (pop32());
  /* 11106db9 ret  */
  ESPCHK(0x11106d60u, _esp0);
  ESP += 4; return;
L_11106dba:;
  /* 11106dba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11106dc0 je 0x11106dd4 */
  if (C.zf) goto L_11106dd4;
L_11106dc2:;
  /* 11106dc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11106dc4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11106dc5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11106dc6 je 0x11106e56 */
  if (C.zf) goto L_11106e56;
  /* 11106dcc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11106dd2 jne 0x11106dc2 */
  if (!C.zf) goto L_11106dc2;
L_11106dd4:;
  /* 11106dd4 mov ebx, ecx */
  EBX = (ECX);
  /* 11106dd6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11106dd9 jne 0x11106e47 */
  if (!C.zf) goto L_11106e47;
L_11106ddb:;
  /* 11106ddb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11106ddd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11106dde:;
  /* 11106dde dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11106ddf jne 0x11106ddb */
  if (!C.zf) goto L_11106ddb;
  /* 11106de1 pop ebx */
  EBX = (pop32());
  /* 11106de2 pop esi */
  ESI = (pop32());
L_11106de3:;
  /* 11106de3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11106de7 pop edi */
  EDI = (pop32());
  /* 11106de8 ret  */
  ESPCHK(0x11106d60u, _esp0);
  ESP += 4; return;
L_11106de9:;
  /* 11106de9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11106deb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11106dee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11106def je 0x11106da0 */
  if (C.zf) goto L_11106da0;
L_11106df1:;
  /* 11106df1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11106df6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11106df8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106dfa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11106dfd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11106dff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11106e01 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11106e04 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11106e09 je 0x11106de9 */
  if (C.zf) goto L_11106de9;
  /* 11106e0b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11106e0d je 0x11106e3b */
  if (C.zf) goto L_11106e3b;
  /* 11106e0f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11106e11 je 0x11106e31 */
  if (C.zf) goto L_11106e31;
  /* 11106e13 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11106e19 je 0x11106e27 */
  if (C.zf) goto L_11106e27;
  /* 11106e1b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11106e21 jne 0x11106de9 */
  if (!C.zf) goto L_11106de9;
  /* 11106e23 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11106e25 jmp 0x11106e3f */
  goto L_11106e3f;
L_11106e27:;
  /* 11106e27 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11106e2d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11106e2f jmp 0x11106e3f */
  goto L_11106e3f;
L_11106e31:;
  /* 11106e31 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11106e37 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11106e39 jmp 0x11106e3f */
  goto L_11106e3f;
L_11106e3b:;
  /* 11106e3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11106e3d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11106e3f:;
  /* 11106e3f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11106e42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11106e44 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11106e45 je 0x11106e51 */
  if (C.zf) goto L_11106e51;
L_11106e47:;
  /* 11106e47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11106e49:;
  /* 11106e49 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11106e4b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11106e4e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11106e4f jne 0x11106e49 */
  if (!C.zf) goto L_11106e49;
L_11106e51:;
  /* 11106e51 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11106e54 jne 0x11106ddb */
  if (!C.zf) goto L_11106ddb;
L_11106e56:;
  /* 11106e56 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11106e5a pop ebx */
  EBX = (pop32());
  /* 11106e5b pop esi */
  ESI = (pop32());
  /* 11106e5c pop edi */
  EDI = (pop32());
  /* 11106e5d ret  */
  ESPCHK(0x11106d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e60 @ 0x11106e60 (55 bytes, 16 insns) */
void f_11106e60(void) {
  FTRACE(0x11106e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11106e61 mov ebp, esp */
  EBP = (ESP);
  /* 11106e63 mov eax, dword ptr [0x1112db84] */
  EAX = (r32((uint32_t)(0x1112db84)));
  /* 11106e68 push eax */
  push32((uint32_t)(EAX));
  /* 11106e69 call dword ptr [0x11132320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132320))), 0x11106e6fu);
  /* 11106e6f mov ecx, dword ptr [0x1112db74] */
  ECX = (r32((uint32_t)(0x1112db74)));
  /* 11106e75 push ecx */
  push32((uint32_t)(ECX));
  /* 11106e76 call dword ptr [0x11132320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132320))), 0x11106e7cu);
  /* 11106e7c mov edx, dword ptr [0x1112db64] */
  EDX = (r32((uint32_t)(0x1112db64)));
  /* 11106e82 push edx */
  push32((uint32_t)(EDX));
  /* 11106e83 call dword ptr [0x11132320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132320))), 0x11106e89u);
  /* 11106e89 mov eax, dword ptr [0x1112db44] */
  EAX = (r32((uint32_t)(0x1112db44)));
  /* 11106e8e push eax */
  push32((uint32_t)(EAX));
  /* 11106e8f call dword ptr [0x11132320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132320))), 0x11106e95u);
  /* 11106e95 pop ebp */
  EBP = (pop32());
  /* 11106e96 ret  */
  ESPCHK(0x11106e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x11106ea0 (159 bytes, 47 insns) */
void f_11106ea0(void) {
  FTRACE(0x11106ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11106ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11106ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 11106ea4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11106eab jmp 0x11106eb6 */
  goto L_11106eb6;
L_11106ead:;
  /* 11106ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106eb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11106eb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11106eb6:;
  /* 11106eb6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106eba jge 0x11106f09 */
  if ((C.sf==C.of)) goto L_11106f09;
  /* 11106ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106ebf cmp dword ptr [ecx*4 + 0x1112db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1112db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106ec7 je 0x11106f07 */
  if (C.zf) goto L_11106f07;
  /* 11106ec9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106ecd je 0x11106f07 */
  if (C.zf) goto L_11106f07;
  /* 11106ecf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106ed3 je 0x11106f07 */
  if (C.zf) goto L_11106f07;
  /* 11106ed5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106ed9 je 0x11106f07 */
  if (C.zf) goto L_11106f07;
  /* 11106edb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106edf je 0x11106f07 */
  if (C.zf) goto L_11106f07;
  /* 11106ee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106ee4 mov eax, dword ptr [edx*4 + 0x1112db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1112db40)));
  /* 11106eeb push eax */
  push32((uint32_t)(EAX));
  /* 11106eec call dword ptr [0x1113238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113238c))), 0x11106ef2u);
  /* 11106ef2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11106ef4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106ef7 mov edx, dword ptr [ecx*4 + 0x1112db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1112db40)));
  /* 11106efe push edx */
  push32((uint32_t)(EDX));
  /* 11106eff call 0x11103fd0 */
  push32(0x11106f04u); f_11103fd0();
  /* 11106f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106f07:;
  /* 11106f07 jmp 0x11106ead */
  goto L_11106ead;
L_11106f09:;
  /* 11106f09 mov eax, dword ptr [0x1112db64] */
  EAX = (r32((uint32_t)(0x1112db64)));
  /* 11106f0e push eax */
  push32((uint32_t)(EAX));
  /* 11106f0f call dword ptr [0x1113238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113238c))), 0x11106f15u);
  /* 11106f15 mov ecx, dword ptr [0x1112db74] */
  ECX = (r32((uint32_t)(0x1112db74)));
  /* 11106f1b push ecx */
  push32((uint32_t)(ECX));
  /* 11106f1c call dword ptr [0x1113238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113238c))), 0x11106f22u);
  /* 11106f22 mov edx, dword ptr [0x1112db84] */
  EDX = (r32((uint32_t)(0x1112db84)));
  /* 11106f28 push edx */
  push32((uint32_t)(EDX));
  /* 11106f29 call dword ptr [0x1113238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113238c))), 0x11106f2fu);
  /* 11106f2f mov eax, dword ptr [0x1112db44] */
  EAX = (r32((uint32_t)(0x1112db44)));
  /* 11106f34 push eax */
  push32((uint32_t)(EAX));
  /* 11106f35 call dword ptr [0x1113238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113238c))), 0x11106f3bu);
  /* 11106f3b mov esp, ebp */
  ESP = (EBP);
  /* 11106f3d pop ebp */
  EBP = (pop32());
  /* 11106f3e ret  */
  ESPCHK(0x11106ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f40 @ 0x11106f40 (151 bytes, 46 insns) */
void f_11106f40(void) {
  FTRACE(0x11106f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11106f41 mov ebp, esp */
  EBP = (ESP);
  /* 11106f43 push ecx */
  push32((uint32_t)(ECX));
  /* 11106f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106f47 cmp dword ptr [eax*4 + 0x1112db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1112db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106f4f jne 0x11106fc2 */
  if (!C.zf) goto L_11106fc2;
  /* 11106f51 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11106f56 push 0x1112af24 */
  push32((uint32_t)(0x1112af24u));
  /* 11106f5b push 2 */
  push32((uint32_t)(0x2u));
  /* 11106f5d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11106f5f call 0x11103540 */
  push32(0x11106f64u); f_11103540();
  /* 11106f64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106f67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11106f6a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106f6e jne 0x11106f7a */
  if (!C.zf) goto L_11106f7a;
  /* 11106f70 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11106f72 call 0x111024b0 */
  push32(0x11106f77u); f_111024b0();
  /* 11106f77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106f7a:;
  /* 11106f7a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11106f7c call 0x11106f40 */
  push32(0x11106f81u); f_11106f40();
  /* 11106f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11106f84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106f87 cmp dword ptr [ecx*4 + 0x1112db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1112db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11106f8f jne 0x11106faa */
  if (!C.zf) goto L_11106faa;
  /* 11106f91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106f94 push edx */
  push32((uint32_t)(EDX));
  /* 11106f95 call dword ptr [0x11132320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132320))), 0x11106f9bu);
  /* 11106f9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106f9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106fa1 mov dword ptr [eax*4 + 0x1112db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1112db40), (ECX));
  /* 11106fa8 jmp 0x11106fb8 */
  goto L_11106fb8;
L_11106faa:;
  /* 11106faa push 2 */
  push32((uint32_t)(0x2u));
  /* 11106fac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11106faf push edx */
  push32((uint32_t)(EDX));
  /* 11106fb0 call 0x11103fd0 */
  push32(0x11106fb5u); f_11103fd0();
  /* 11106fb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106fb8:;
  /* 11106fb8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11106fba call 0x11106fe0 */
  push32(0x11106fbfu); f_11106fe0();
  /* 11106fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11106fc2:;
  /* 11106fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106fc5 mov ecx, dword ptr [eax*4 + 0x1112db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1112db40)));
  /* 11106fcc push ecx */
  push32((uint32_t)(ECX));
  /* 11106fcd call dword ptr [0x1113231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113231c))), 0x11106fd3u);
  /* 11106fd3 mov esp, ebp */
  ESP = (EBP);
  /* 11106fd5 pop ebp */
  EBP = (pop32());
  /* 11106fd6 ret  */
  ESPCHK(0x11106f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe0 @ 0x11106fe0 (22 bytes, 8 insns) */
void f_11106fe0(void) {
  FTRACE(0x11106fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11106fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11106fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11106fe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11106fe6 mov ecx, dword ptr [eax*4 + 0x1112db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1112db40)));
  /* 11106fed push ecx */
  push32((uint32_t)(ECX));
  /* 11106fee call dword ptr [0x11132318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132318))), 0x11106ff4u);
  /* 11106ff4 pop ebp */
  EBP = (pop32());
  /* 11106ff5 ret  */
  ESPCHK(0x11106fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x11107000 (26 bytes, 10 insns) */
void f_11107000(void) {
  FTRACE(0x11107000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107000 push ebp */
  push32((uint32_t)(EBP));
  /* 11107001 mov ebp, esp */
  EBP = (ESP);
  /* 11107003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107006 push eax */
  push32((uint32_t)(EAX));
  /* 11107007 push 0 */
  push32((uint32_t)(0x0u));
  /* 11107009 call dword ptr [0x11132314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132314))), 0x1110700fu);
  /* 1110700f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11107014 call dword ptr [0x11132354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132354))), 0x1110701au);
  /* 1110701a pop ebp */
  EBP = (pop32());
  /* 1110701b ret  */
  ESPCHK(0x11107000u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11107020 (446 bytes, 130 insns) */
void f_11107020(void) {
  FTRACE(0x11107020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107020 push ebp */
  push32((uint32_t)(EBP));
  /* 11107021 mov ebp, esp */
  EBP = (ESP);
  /* 11107023 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107026 call 0x11102f80 */
  push32(0x1110702bu); f_11102f80();
  /* 1110702b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110702e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107031 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11107034 push ecx */
  push32((uint32_t)(ECX));
  /* 11107035 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107038 push edx */
  push32((uint32_t)(EDX));
  /* 11107039 call 0x111071e0 */
  push32(0x1110703eu); f_111071e0();
  /* 1110703e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107041 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11107044 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107048 je 0x11107053 */
  if (C.zf) goto L_11107053;
  /* 1110704a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110704d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107051 jne 0x11107062 */
  if (!C.zf) goto L_11107062;
L_11107053:;
  /* 11107053 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107056 push ecx */
  push32((uint32_t)(ECX));
  /* 11107057 call dword ptr [0x11132310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132310))), 0x1110705du);
  /* 1110705d jmp 0x111071da */
  goto L_111071da;
L_11107062:;
  /* 11107062 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11107065 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107069 jne 0x1110707f */
  if (!C.zf) goto L_1110707f;
  /* 1110706b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110706e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11107075 mov eax, 1 */
  EAX = (0x1u);
  /* 1110707a jmp 0x111071da */
  goto L_111071da;
L_1110707f:;
  /* 1110707f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11107082 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107086 jne 0x11107090 */
  if (!C.zf) goto L_11107090;
  /* 11107088 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1110708b jmp 0x111071da */
  goto L_111071da;
L_11107090:;
  /* 11107090 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11107093 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11107096 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11107099 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110709c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1110709f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 111070a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111070a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111070a8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 111070ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111070ae cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111070b2 jne 0x111071b7 */
  if (!C.zf) goto L_111071b7;
  /* 111070b8 mov eax, dword ptr [0x1112dc78] */
  EAX = (r32((uint32_t)(0x1112dc78)));
  /* 111070bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 111070c0 jmp 0x111070cb */
  goto L_111070cb;
L_111070c2:;
  /* 111070c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111070c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111070c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_111070cb:;
  /* 111070cb mov edx, dword ptr [0x1112dc78] */
  EDX = (r32((uint32_t)(0x1112dc78)));
  /* 111070d1 add edx, dword ptr [0x1112dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1112dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111070d7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111070da jge 0x111070f2 */
  if ((C.sf==C.of)) goto L_111070f2;
  /* 111070dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111070df imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111070e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111070e5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 111070e8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 111070f0 jmp 0x111070c2 */
  goto L_111070c2;
L_111070f2:;
  /* 111070f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111070f5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 111070f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111070fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111070fe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107104 jne 0x11107115 */
  if (!C.zf) goto L_11107115;
  /* 11107106 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107109 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11107110 jmp 0x1110719d */
  goto L_1110719d;
L_11107115:;
  /* 11107115 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11107118 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110711e jne 0x1110712c */
  if (!C.zf) goto L_1110712c;
  /* 11107120 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107123 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1110712a jmp 0x1110719d */
  goto L_1110719d;
L_1110712c:;
  /* 1110712c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110712f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107135 jne 0x11107143 */
  if (!C.zf) goto L_11107143;
  /* 11107137 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110713a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11107141 jmp 0x1110719d */
  goto L_1110719d;
L_11107143:;
  /* 11107143 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11107146 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110714c jne 0x1110715a */
  if (!C.zf) goto L_1110715a;
  /* 1110714e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107151 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11107158 jmp 0x1110719d */
  goto L_1110719d;
L_1110715a:;
  /* 1110715a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110715d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107163 jne 0x11107171 */
  if (!C.zf) goto L_11107171;
  /* 11107165 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107168 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1110716f jmp 0x1110719d */
  goto L_1110719d;
L_11107171:;
  /* 11107171 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11107174 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110717a jne 0x11107188 */
  if (!C.zf) goto L_11107188;
  /* 1110717c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110717f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11107186 jmp 0x1110719d */
  goto L_1110719d;
L_11107188:;
  /* 11107188 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110718b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107191 jne 0x1110719d */
  if (!C.zf) goto L_1110719d;
  /* 11107193 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107196 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1110719d:;
  /* 1110719d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111071a0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 111071a3 push edx */
  push32((uint32_t)(EDX));
  /* 111071a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 111071a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x111071a9u);
  /* 111071a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111071ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111071af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111071b2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 111071b5 jmp 0x111071ce */
  goto L_111071ce;
L_111071b7:;
  /* 111071b7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 111071ba mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 111071c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111071c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 111071c7 push ecx */
  push32((uint32_t)(ECX));
  /* 111071c8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x111071cbu);
  /* 111071cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111071ce:;
  /* 111071ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 111071d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 111071d4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 111071d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111071da:;
  /* 111071da mov esp, ebp */
  ESP = (EBP);
  /* 111071dc pop ebp */
  EBP = (pop32());
  /* 111071dd ret  */
  ESPCHK(0x11107020u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x111071e0 (89 bytes, 35 insns) */
void f_111071e0(void) {
  FTRACE(0x111071e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111071e0 push ebp */
  push32((uint32_t)(EBP));
  /* 111071e1 mov ebp, esp */
  EBP = (ESP);
  /* 111071e3 push ecx */
  push32((uint32_t)(ECX));
  /* 111071e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111071e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111071ea:;
  /* 111071ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111071ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 111071ef cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111071f2 je 0x11107212 */
  if (C.zf) goto L_11107212;
  /* 111071f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111071f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111071fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111071fd mov ecx, dword ptr [0x1112dc84] */
  ECX = (r32((uint32_t)(0x1112dc84)));
  /* 11107203 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11107206 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107209 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110720b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110720e jae 0x11107212 */
  if (!C.cf) goto L_11107212;
  /* 11107210 jmp 0x111071ea */
  goto L_111071ea;
L_11107212:;
  /* 11107212 mov eax, dword ptr [0x1112dc84] */
  EAX = (r32((uint32_t)(0x1112dc84)));
  /* 11107217 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1110721a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110721d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110721f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107222 jae 0x1110722e */
  if (!C.cf) goto L_1110722e;
  /* 11107224 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107227 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11107229 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110722c je 0x11107232 */
  if (C.zf) goto L_11107232;
L_1110722e:;
  /* 1110722e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11107230 jmp 0x11107235 */
  goto L_11107235;
L_11107232:;
  /* 11107232 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11107235:;
  /* 11107235 mov esp, ebp */
  ESP = (EBP);
  /* 11107237 pop ebp */
  EBP = (pop32());
  /* 11107238 ret  */
  ESPCHK(0x111071e0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11107240 (48 bytes, 17 insns) */
void f_11107240(void) {
  FTRACE(0x11107240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107240 push ebp */
  push32((uint32_t)(EBP));
  /* 11107241 mov ebp, esp */
  EBP = (ESP);
  /* 11107243 push ecx */
  push32((uint32_t)(ECX));
  /* 11107244 push 9 */
  push32((uint32_t)(0x9u));
  /* 11107246 call 0x11106f40 */
  push32(0x1110724bu); f_11106f40();
  /* 1110724b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110724e mov eax, dword ptr [0x1112f6fc] */
  EAX = (r32((uint32_t)(0x1112f6fc)));
  /* 11107253 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11107256 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107259 mov dword ptr [0x1112f6fc], ecx */
  w32((uint32_t)(0x1112f6fc), (ECX));
  /* 1110725f push 9 */
  push32((uint32_t)(0x9u));
  /* 11107261 call 0x11106fe0 */
  push32(0x11107266u); f_11106fe0();
  /* 11107266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110726c mov esp, ebp */
  ESP = (EBP);
  /* 1110726e pop ebp */
  EBP = (pop32());
  /* 1110726f ret  */
  ESPCHK(0x11107240u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x11107270 (10 bytes, 5 insns) */
void f_11107270(void) {
  FTRACE(0x11107270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107270 push ebp */
  push32((uint32_t)(EBP));
  /* 11107271 mov ebp, esp */
  EBP = (ESP);
  /* 11107273 mov eax, dword ptr [0x1112f6fc] */
  EAX = (r32((uint32_t)(0x1112f6fc)));
  /* 11107278 pop ebp */
  EBP = (pop32());
  /* 11107279 ret  */
  ESPCHK(0x11107270u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11107280 (45 bytes, 19 insns) */
void f_11107280(void) {
  FTRACE(0x11107280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107280 push ebp */
  push32((uint32_t)(EBP));
  /* 11107281 mov ebp, esp */
  EBP = (ESP);
  /* 11107283 push ecx */
  push32((uint32_t)(ECX));
  /* 11107284 mov eax, dword ptr [0x1112f6fc] */
  EAX = (r32((uint32_t)(0x1112f6fc)));
  /* 11107289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1110728c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107290 je 0x111072a0 */
  if (C.zf) goto L_111072a0;
  /* 11107292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107295 push ecx */
  push32((uint32_t)(ECX));
  /* 11107296 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11107299u);
  /* 11107299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110729c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110729e jne 0x111072a4 */
  if (!C.zf) goto L_111072a4;
L_111072a0:;
  /* 111072a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111072a2 jmp 0x111072a9 */
  goto L_111072a9;
L_111072a4:;
  /* 111072a4 mov eax, 1 */
  EAX = (0x1u);
L_111072a9:;
  /* 111072a9 mov esp, ebp */
  ESP = (EBP);
  /* 111072ab pop ebp */
  EBP = (pop32());
  /* 111072ac ret  */
  ESPCHK(0x11107280u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x111072b0 (88 bytes, 40 insns) */
void f_111072b0(void) {
  FTRACE(0x111072b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111072b0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 111072b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111072b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111072ba je 0x11107303 */
  if (C.zf) goto L_11107303;
  /* 111072bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111072be mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 111072c2 push edi */
  push32((uint32_t)(EDI));
  /* 111072c3 mov edi, ecx */
  EDI = (ECX);
  /* 111072c5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111072c8 jb 0x111072f7 */
  if (C.cf) goto L_111072f7;
  /* 111072ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111072cc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111072cf je 0x111072d9 */
  if (C.zf) goto L_111072d9;
  /* 111072d1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_111072d3:;
  /* 111072d3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111072d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111072d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111072d7 jne 0x111072d3 */
  if (!C.zf) goto L_111072d3;
L_111072d9:;
  /* 111072d9 mov ecx, eax */
  ECX = (EAX);
  /* 111072db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111072de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111072e0 mov ecx, eax */
  ECX = (EAX);
  /* 111072e2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111072e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111072e7 mov ecx, edx */
  ECX = (EDX);
  /* 111072e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111072ec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111072ef je 0x111072f7 */
  if (C.zf) goto L_111072f7;
  /* 111072f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 111072f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111072f5 je 0x111072fd */
  if (C.zf) goto L_111072fd;
L_111072f7:;
  /* 111072f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111072f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111072fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111072fb jne 0x111072f7 */
  if (!C.zf) goto L_111072f7;
L_111072fd:;
  /* 111072fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11107301 pop edi */
  EDI = (pop32());
  /* 11107302 ret  */
  ESPCHK(0x111072b0u, _esp0);
  ESP += 4; return;
L_11107303:;
  /* 11107303 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11107307 ret  */
  ESPCHK(0x111072b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x11107310 (23 bytes, 10 insns) */
void f_11107310(void) {
  FTRACE(0x11107310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107310 push ebp */
  push32((uint32_t)(EBP));
  /* 11107311 mov ebp, esp */
  EBP = (ESP);
  /* 11107313 mov eax, dword ptr [0x1112f6f8] */
  EAX = (r32((uint32_t)(0x1112f6f8)));
  /* 11107318 push eax */
  push32((uint32_t)(EAX));
  /* 11107319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110731c push ecx */
  push32((uint32_t)(ECX));
  /* 1110731d call 0x11107330 */
  push32(0x11107322u); f_11107330();
  /* 11107322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107325 pop ebp */
  EBP = (pop32());
  /* 11107326 ret  */
  ESPCHK(0x11107310u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11107330 (87 bytes, 34 insns) */
void f_11107330(void) {
  FTRACE(0x11107330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107330 push ebp */
  push32((uint32_t)(EBP));
  /* 11107331 mov ebp, esp */
  EBP = (ESP);
  /* 11107333 push ecx */
  push32((uint32_t)(ECX));
  /* 11107334 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107338 jbe 0x1110733e */
  if ((C.cf||C.zf)) goto L_1110733e;
  /* 1110733a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110733c jmp 0x11107383 */
  goto L_11107383;
L_1110733e:;
  /* 1110733e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107342 ja 0x11107355 */
  if ((!C.cf&&!C.zf)) goto L_11107355;
  /* 11107344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107347 push eax */
  push32((uint32_t)(EAX));
  /* 11107348 call 0x11107390 */
  push32(0x1110734du); f_11107390();
  /* 1110734d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107350 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11107353 jmp 0x1110735c */
  goto L_1110735c;
L_11107355:;
  /* 11107355 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1110735c:;
  /* 1110735c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107360 jne 0x11107368 */
  if (!C.zf) goto L_11107368;
  /* 11107362 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107366 jne 0x1110736d */
  if (!C.zf) goto L_1110736d;
L_11107368:;
  /* 11107368 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110736b jmp 0x11107383 */
  goto L_11107383;
L_1110736d:;
  /* 1110736d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107370 push ecx */
  push32((uint32_t)(ECX));
  /* 11107371 call 0x11107280 */
  push32(0x11107376u); f_11107280();
  /* 11107376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110737b jne 0x11107381 */
  if (!C.zf) goto L_11107381;
  /* 1110737d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110737f jmp 0x11107383 */
  goto L_11107383;
L_11107381:;
  /* 11107381 jmp 0x1110733e */
  goto L_1110733e;
L_11107383:;
  /* 11107383 mov esp, ebp */
  ESP = (EBP);
  /* 11107385 pop ebp */
  EBP = (pop32());
  /* 11107386 ret  */
  ESPCHK(0x11107330u, _esp0);
  ESP += 4; return;
}

/* FUN_10007390 @ 0x11107390 (109 bytes, 37 insns) */
void f_11107390(void) {
  FTRACE(0x11107390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107390 push ebp */
  push32((uint32_t)(EBP));
  /* 11107391 mov ebp, esp */
  EBP = (ESP);
  /* 11107393 push ecx */
  push32((uint32_t)(ECX));
  /* 11107394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107397 cmp eax, dword ptr [0x1112dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110739d ja 0x111073cd */
  if ((!C.cf&&!C.zf)) goto L_111073cd;
  /* 1110739f push 9 */
  push32((uint32_t)(0x9u));
  /* 111073a1 call 0x11106f40 */
  push32(0x111073a6u); f_11106f40();
  /* 111073a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111073a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111073ac push ecx */
  push32((uint32_t)(ECX));
  /* 111073ad call 0x11107ed0 */
  push32(0x111073b2u); f_11107ed0();
  /* 111073b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111073b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111073b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 111073ba call 0x11106fe0 */
  push32(0x111073bfu); f_11106fe0();
  /* 111073bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111073c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111073c6 je 0x111073cd */
  if (C.zf) goto L_111073cd;
  /* 111073c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111073cb jmp 0x111073f9 */
  goto L_111073f9;
L_111073cd:;
  /* 111073cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111073d1 jne 0x111073da */
  if (!C.zf) goto L_111073da;
  /* 111073d3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_111073da:;
  /* 111073da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111073dd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111073e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 111073e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 111073e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111073e9 push eax */
  push32((uint32_t)(EAX));
  /* 111073ea push 0 */
  push32((uint32_t)(0x0u));
  /* 111073ec mov ecx, dword ptr [0x11130eac] */
  ECX = (r32((uint32_t)(0x11130eac)));
  /* 111073f2 push ecx */
  push32((uint32_t)(ECX));
  /* 111073f3 call dword ptr [0x1113230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113230c))), 0x111073f9u);
L_111073f9:;
  /* 111073f9 mov esp, ebp */
  ESP = (EBP);
  /* 111073fb pop ebp */
  EBP = (pop32());
  /* 111073fc ret  */
  ESPCHK(0x11107390u, _esp0);
  ESP += 4; return;
}

/* FUN_10007400 @ 0x11107400 (10 bytes, 5 insns) */
void f_11107400(void) {
  FTRACE(0x11107400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107400 push ebp */
  push32((uint32_t)(EBP));
  /* 11107401 mov ebp, esp */
  EBP = (ESP);
  /* 11107403 mov eax, 1 */
  EAX = (0x1u);
  /* 11107408 pop ebp */
  EBP = (pop32());
  /* 11107409 ret  */
  ESPCHK(0x11107400u, _esp0);
  ESP += 4; return;
}

/* FUN_10007410 @ 0x11107410 (173 bytes, 59 insns) */
void f_11107410(void) {
  FTRACE(0x11107410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107410 push ebp */
  push32((uint32_t)(EBP));
  /* 11107411 mov ebp, esp */
  EBP = (ESP);
  /* 11107413 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107416 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110741a jbe 0x11107423 */
  if ((C.cf||C.zf)) goto L_11107423;
  /* 1110741c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110741e jmp 0x111074b9 */
  goto L_111074b9;
L_11107423:;
  /* 11107423 push 9 */
  push32((uint32_t)(0x9u));
  /* 11107425 call 0x11106f40 */
  push32(0x1110742au); f_11106f40();
  /* 1110742a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110742d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107430 push eax */
  push32((uint32_t)(EAX));
  /* 11107431 call 0x11107840 */
  push32(0x11107436u); f_11107840();
  /* 11107436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107439 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1110743c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107440 je 0x11107481 */
  if (C.zf) goto L_11107481;
  /* 11107442 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11107449 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110744c cmp ecx, dword ptr [0x1112dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1112dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107452 ja 0x11107472 */
  if ((!C.cf&&!C.zf)) goto L_11107472;
  /* 11107454 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107457 push edx */
  push32((uint32_t)(EDX));
  /* 11107458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110745b push eax */
  push32((uint32_t)(EAX));
  /* 1110745c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110745f push ecx */
  push32((uint32_t)(ECX));
  /* 11107460 call 0x11108710 */
  push32(0x11107465u); f_11108710();
  /* 11107465 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110746a je 0x11107472 */
  if (C.zf) goto L_11107472;
  /* 1110746c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110746f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11107472:;
  /* 11107472 push 9 */
  push32((uint32_t)(0x9u));
  /* 11107474 call 0x11106fe0 */
  push32(0x11107479u); f_11106fe0();
  /* 11107479 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110747c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1110747f jmp 0x111074b9 */
  goto L_111074b9;
L_11107481:;
  /* 11107481 push 9 */
  push32((uint32_t)(0x9u));
  /* 11107483 call 0x11106fe0 */
  push32(0x11107488u); f_11106fe0();
  /* 11107488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110748b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110748f jne 0x11107498 */
  if (!C.zf) goto L_11107498;
  /* 11107491 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11107498:;
  /* 11107498 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110749b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1110749e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 111074a0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 111074a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111074a6 push ecx */
  push32((uint32_t)(ECX));
  /* 111074a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111074aa push edx */
  push32((uint32_t)(EDX));
  /* 111074ab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 111074ad mov eax, dword ptr [0x11130eac] */
  EAX = (r32((uint32_t)(0x11130eac)));
  /* 111074b2 push eax */
  push32((uint32_t)(EAX));
  /* 111074b3 call dword ptr [0x11132308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132308))), 0x111074b9u);
L_111074b9:;
  /* 111074b9 mov esp, ebp */
  ESP = (EBP);
  /* 111074bb pop ebp */
  EBP = (pop32());
  /* 111074bc ret  */
  ESPCHK(0x11107410u, _esp0);
  ESP += 4; return;
}

/* FUN_100074c0 @ 0x111074c0 (490 bytes, 165 insns) */
void f_111074c0(void) {
  FTRACE(0x111074c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111074c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111074c1 mov ebp, esp */
  EBP = (ESP);
  /* 111074c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111074c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111074ca jne 0x111074dd */
  if (!C.zf) goto L_111074dd;
  /* 111074cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111074cf push eax */
  push32((uint32_t)(EAX));
  /* 111074d0 call 0x11107310 */
  push32(0x111074d5u); f_11107310();
  /* 111074d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111074d8 jmp 0x111076a6 */
  goto L_111076a6;
L_111074dd:;
  /* 111074dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111074e1 jne 0x111074f6 */
  if (!C.zf) goto L_111074f6;
  /* 111074e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111074e6 push ecx */
  push32((uint32_t)(ECX));
  /* 111074e7 call 0x111076b0 */
  push32(0x111074ecu); f_111076b0();
  /* 111074ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111074ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111074f1 jmp 0x111076a6 */
  goto L_111076a6;
L_111074f6:;
  /* 111074f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 111074fd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107501 ja 0x11107679 */
  if ((!C.cf&&!C.zf)) goto L_11107679;
  /* 11107507 push 9 */
  push32((uint32_t)(0x9u));
  /* 11107509 call 0x11106f40 */
  push32(0x1110750eu); f_11106f40();
  /* 1110750e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107511 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107514 push edx */
  push32((uint32_t)(EDX));
  /* 11107515 call 0x11107840 */
  push32(0x1110751au); f_11107840();
  /* 1110751a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110751d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11107520 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107524 je 0x1110763c */
  if (C.zf) goto L_1110763c;
  /* 1110752a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1110752d cmp eax, dword ptr [0x1112dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1112dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107533 ja 0x111075b0 */
  if ((!C.cf&&!C.zf)) goto L_111075b0;
  /* 11107535 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107538 push ecx */
  push32((uint32_t)(ECX));
  /* 11107539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110753c push edx */
  push32((uint32_t)(EDX));
  /* 1110753d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11107540 push eax */
  push32((uint32_t)(EAX));
  /* 11107541 call 0x11108710 */
  push32(0x11107546u); f_11108710();
  /* 11107546 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107549 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110754b je 0x11107555 */
  if (C.zf) goto L_11107555;
  /* 1110754d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107550 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11107553 jmp 0x111075b0 */
  goto L_111075b0;
L_11107555:;
  /* 11107555 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107558 push edx */
  push32((uint32_t)(EDX));
  /* 11107559 call 0x11107ed0 */
  push32(0x1110755eu); f_11107ed0();
  /* 1110755e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107561 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11107564 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107568 je 0x111075b0 */
  if (C.zf) goto L_111075b0;
  /* 1110756a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1110756d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11107570 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11107573 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11107576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107579 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110757c jae 0x11107586 */
  if (!C.cf) goto L_11107586;
  /* 1110757e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107581 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11107584 jmp 0x1110758c */
  goto L_1110758c;
L_11107586:;
  /* 11107586 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107589 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1110758c:;
  /* 1110758c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1110758f push edx */
  push32((uint32_t)(EDX));
  /* 11107590 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107593 push eax */
  push32((uint32_t)(EAX));
  /* 11107594 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107597 push ecx */
  push32((uint32_t)(ECX));
  /* 11107598 call 0x11109e20 */
  push32(0x1110759du); f_11109e20();
  /* 1110759d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111075a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111075a3 push edx */
  push32((uint32_t)(EDX));
  /* 111075a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 111075a7 push eax */
  push32((uint32_t)(EAX));
  /* 111075a8 call 0x11107900 */
  push32(0x111075adu); f_11107900();
  /* 111075ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111075b0:;
  /* 111075b0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111075b4 jne 0x11107630 */
  if (!C.zf) goto L_11107630;
  /* 111075b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111075ba jne 0x111075c3 */
  if (!C.zf) goto L_111075c3;
  /* 111075bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_111075c3:;
  /* 111075c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111075c6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111075c9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 111075cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 111075cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111075d2 push edx */
  push32((uint32_t)(EDX));
  /* 111075d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111075d5 mov eax, dword ptr [0x11130eac] */
  EAX = (r32((uint32_t)(0x11130eac)));
  /* 111075da push eax */
  push32((uint32_t)(EAX));
  /* 111075db call dword ptr [0x1113230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1113230c))), 0x111075e1u);
  /* 111075e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111075e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111075e8 je 0x11107630 */
  if (C.zf) goto L_11107630;
  /* 111075ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111075ed mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 111075f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111075f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111075f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111075f9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111075fc jae 0x11107606 */
  if (!C.cf) goto L_11107606;
  /* 111075fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107601 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11107604 jmp 0x1110760c */
  goto L_1110760c;
L_11107606:;
  /* 11107606 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107609 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1110760c:;
  /* 1110760c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1110760f push eax */
  push32((uint32_t)(EAX));
  /* 11107610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107613 push ecx */
  push32((uint32_t)(ECX));
  /* 11107614 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11107617 push edx */
  push32((uint32_t)(EDX));
  /* 11107618 call 0x11109e20 */
  push32(0x1110761du); f_11109e20();
  /* 1110761d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107623 push eax */
  push32((uint32_t)(EAX));
  /* 11107624 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11107627 push ecx */
  push32((uint32_t)(ECX));
  /* 11107628 call 0x11107900 */
  push32(0x1110762du); f_11107900();
  /* 1110762d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11107630:;
  /* 11107630 push 9 */
  push32((uint32_t)(0x9u));
  /* 11107632 call 0x11106fe0 */
  push32(0x11107637u); f_11106fe0();
  /* 11107637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110763a jmp 0x11107679 */
  goto L_11107679;
L_1110763c:;
  /* 1110763c push 9 */
  push32((uint32_t)(0x9u));
  /* 1110763e call 0x11106fe0 */
  push32(0x11107643u); f_11106fe0();
  /* 11107643 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107646 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110764a jne 0x11107653 */
  if (!C.zf) goto L_11107653;
  /* 1110764c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11107653:;
  /* 11107653 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107656 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11107659 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1110765c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1110765f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107662 push eax */
  push32((uint32_t)(EAX));
  /* 11107663 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107666 push ecx */
  push32((uint32_t)(ECX));
  /* 11107667 push 0 */
  push32((uint32_t)(0x0u));
  /* 11107669 mov edx, dword ptr [0x11130eac] */
  EDX = (r32((uint32_t)(0x11130eac)));
  /* 1110766f push edx */
  push32((uint32_t)(EDX));
  /* 11107670 call dword ptr [0x11132308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132308))), 0x11107676u);
  /* 11107676 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11107679:;
  /* 11107679 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110767d jne 0x11107688 */
  if (!C.zf) goto L_11107688;
  /* 1110767f cmp dword ptr [0x1112f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1112f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11107686 jne 0x1110768d */
  if (!C.zf) goto L_1110768d;
L_11107688:;
  /* 11107688 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1110768b jmp 0x111076a6 */
  goto L_111076a6;
L_1110768d:;
  /* 1110768d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11107690 push eax */
  push32((uint32_t)(EAX));
  /* 11107691 call 0x11107280 */
  push32(0x11107696u); f_11107280();
  /* 11107696 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107699 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110769b jne 0x111076a1 */
  if (!C.zf) goto L_111076a1;
  /* 1110769d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1110769f jmp 0x111076a6 */
  goto L_111076a6;
L_111076a1:;
  /* 111076a1 jmp 0x111074f6 */
  goto L_111074f6;
L_111076a6:;
  /* 111076a6 mov esp, ebp */
  ESP = (EBP);
  /* 111076a8 pop ebp */
  EBP = (pop32());
  /* 111076a9 ret  */
  ESPCHK(0x111074c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b0 @ 0x111076b0 (104 bytes, 38 insns) */
void f_111076b0(void) {
  FTRACE(0x111076b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111076b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111076b1 mov ebp, esp */
  EBP = (ESP);
  /* 111076b3 push ecx */
  push32((uint32_t)(ECX));
  /* 111076b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111076b8 jne 0x111076bc */
  if (!C.zf) goto L_111076bc;
  /* 111076ba jmp 0x11107714 */
  goto L_11107714;
L_111076bc:;
  /* 111076bc push 9 */
  push32((uint32_t)(0x9u));
  /* 111076be call 0x11106f40 */
  push32(0x111076c3u); f_11106f40();
  /* 111076c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111076c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111076c9 push eax */
  push32((uint32_t)(EAX));
  /* 111076ca call 0x11107840 */
  push32(0x111076cfu); f_11107840();
  /* 111076cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111076d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111076d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111076d9 je 0x111076f7 */
  if (C.zf) goto L_111076f7;
  /* 111076db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111076de push ecx */
  push32((uint32_t)(ECX));
  /* 111076df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111076e2 push edx */
  push32((uint32_t)(EDX));
  /* 111076e3 call 0x11107900 */
  push32(0x111076e8u); f_11107900();
  /* 111076e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111076eb push 9 */
  push32((uint32_t)(0x9u));
  /* 111076ed call 0x11106fe0 */
  push32(0x111076f2u); f_11106fe0();
  /* 111076f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111076f5 jmp 0x11107714 */
  goto L_11107714;
L_111076f7:;
  /* 111076f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 111076f9 call 0x11106fe0 */
  push32(0x111076feu); f_11106fe0();
  /* 111076fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11107704 push eax */
  push32((uint32_t)(EAX));
  /* 11107705 push 0 */
  push32((uint32_t)(0x0u));
  /* 11107707 mov ecx, dword ptr [0x11130eac] */
  ECX = (r32((uint32_t)(0x11130eac)));
  /* 1110770d push ecx */
  push32((uint32_t)(ECX));
  /* 1110770e call dword ptr [0x111323b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111323b4))), 0x11107714u);
L_11107714:;
  /* 11107714 mov esp, ebp */
  ESP = (EBP);
  /* 11107716 pop ebp */
  EBP = (pop32());
  /* 11107717 ret  */
  ESPCHK(0x111076b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007720 @ 0x11107720 (116 bytes, 34 insns) */
void f_11107720(void) {
  FTRACE(0x11107720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11107720 push ebp */
  push32((uint32_t)(EBP));
  /* 11107721 mov ebp, esp */
  EBP = (ESP);
  /* 11107723 push ecx */
  push32((uint32_t)(ECX));
  /* 11107724 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1110772b push 9 */
  push32((uint32_t)(0x9u));
  /* 1110772d call 0x11106f40 */
  push32(0x11107732u); f_11106f40();
  /* 11107732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11107735 call 0x11108e30 */
  push32(0x1110773au); f_11108e30();
  /* 1110773a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1110773c jge 0x11107745 */
  if ((C.sf==C.of)) goto L_11107745;
  /* 1110773e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11107745:;
  /* 11107745 push 9 */
  push32((uint32_t)(0x9u));
  /* 11107747 call 0x11106fe0 */
  push32(0x1110774cu); f_11106fe0();
  /* 1110774c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1110774f push 0 */
  push32((uint32_t)(0x0u));
  /* 11107751 push 0 */
  push32((uint32_t)(0x0u));
  /* 11107753 mov eax, dword ptr [0x11130eac] */
  EAX = (r32((uint32_t)(0x11130eac)));
  /* 11107758 push eax */
  push32((uint32_t)(EAX));
  /* 11107759 call dword ptr [0x11132398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132398))), 0x1110775fu);
  /* 1110775f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11107761 jne 0x1110778d */
  if (!C.zf) goto L_1110778d;
  /* 11107763 call dword ptr [0x11132378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11132378))), 0x11107769u);
  /* 11107769 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1110776c jne 0x11107786 */
  if (!C.zf) goto L_11107786;
  /* 1110776e call 0x1110b420 */
  push32(0x11107773u); f_1110b420();
  /* 11107773 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11107779 call 0x1110b410 */
  push32(0x1110777eu); f_1110b410();
  /* 1110777e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11107784 jmp 0x1110778d */
  goto L_1110778d;
L_11107786:;
  /* 11107786 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1110778d:;
  /* 1110778d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11107790 mov esp, ebp */
  ESP = (EBP);
  /* 11107792 pop ebp */
  EBP = (pop32());
  /* 11107793 ret  */
  ESPCHK(0x11107720u, _esp0);
  ESP += 4; return;
}

/* FUN_100077a0 @ 0x111077a0 (10 bytes, 5 insns) */
void f_111077a0(void) {
  FTRACE(0x111077a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111077a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111077a1 mov ebp, esp */
  EBP = (ESP);
  /* 111077a3 call 0x11107720 */
  push32(0x111077a8u); f_11107720();
  /* 111077a8 pop ebp */
  EBP = (pop32());
  /* 111077a9 ret  */
  ESPCHK(0x111077a0u, _esp0);
  ESP += 4; return;
}

