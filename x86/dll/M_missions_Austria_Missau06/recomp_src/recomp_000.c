#include "recomp.h"

/* FUN_10001000 @ 0x10351000 (18 bytes, 7 insns) */
void f_10351000(void) {
  FTRACE(0x10351000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10351004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10351005 jne 0x1035100c */
  if (!C.zf) goto L_1035100c;
  /* 10351007 call 0x10351012 */
  push32(0x1035100cu); f_10351012();
L_1035100c:;
  /* 1035100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1035100e pop eax */
  EAX = (pop32());
  /* 1035100f ret 0xc */
  ESPCHK(0x10351000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x10351012 (33 bytes, 8 insns) */
void f_10351012(void) {
  FTRACE(0x10351012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351012 push 0x10355038 */
  push32((uint32_t)(0x10355038u));
  /* 10351017 push 0x103553a0 */
  push32((uint32_t)(0x103553a0u));
  /* 1035101c call dword ptr [0x103540dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540dc))), 0x10351022u);
  /* 10351022 push 0x10355030 */
  push32((uint32_t)(0x10355030u));
  /* 10351027 push 1 */
  push32((uint32_t)(0x1u));
  /* 10351029 call dword ptr [0x103540d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540d4))), 0x1035102fu);
  /* 1035102f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10351032 ret  */
  ESPCHK(0x10351012u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10351033 (508 bytes, 213 insns) */
void f_10351033(void) {
  FTRACE(0x10351033u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351033 push ebx */
  push32((uint32_t)(EBX));
  /* 10351034 push ebp */
  push32((uint32_t)(EBP));
  /* 10351035 push esi */
  push32((uint32_t)(ESI));
  /* 10351036 push edi */
  push32((uint32_t)(EDI));
  /* 10351037 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10351039 call dword ptr [0x103540b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540b4))), 0x1035103fu);
  /* 1035103f mov ebx, dword ptr [0x103540b8] */
  EBX = (r32((uint32_t)(0x103540b8)));
  /* 10351045 pop ecx */
  ECX = (pop32());
  /* 10351046 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10351048 push 1 */
  push32((uint32_t)(0x1u));
  /* 1035104a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1035104c pop ebp */
  EBP = (pop32());
  /* 1035104d je 0x10351187 */
  if (C.zf) goto L_10351187;
  /* 10351053 push edi */
  push32((uint32_t)(EDI));
  /* 10351054 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10351056 call dword ptr [0x103540b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540b0))), 0x1035105cu);
  /* 1035105c push edi */
  push32((uint32_t)(EDI));
  /* 1035105d call ebx */
  call_ind((uint32_t)(EBX), 0x1035105fu);
  /* 1035105f push 8 */
  push32((uint32_t)(0x8u));
  /* 10351061 mov esi, dword ptr [0x103540c0] */
  ESI = (r32((uint32_t)(0x103540c0)));
  /* 10351067 pop ecx */
  ECX = (pop32());
  /* 10351068 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035106a imul ecx, ecx, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1388u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10351070 push ecx */
  push32((uint32_t)(ECX));
  /* 10351071 push 3 */
  push32((uint32_t)(0x3u));
  /* 10351073 push edi */
  push32((uint32_t)(EDI));
  /* 10351074 call esi */
  call_ind((uint32_t)(ESI), 0x10351076u);
  /* 10351076 push edi */
  push32((uint32_t)(EDI));
  /* 10351077 call ebx */
  call_ind((uint32_t)(EBX), 0x10351079u);
  /* 10351079 push 8 */
  push32((uint32_t)(0x8u));
  /* 1035107b pop ecx */
  ECX = (pop32());
  /* 1035107c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035107e imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10351084 push ecx */
  push32((uint32_t)(ECX));
  /* 10351085 push ebp */
  push32((uint32_t)(EBP));
  /* 10351086 push edi */
  push32((uint32_t)(EDI));
  /* 10351087 call esi */
  call_ind((uint32_t)(ESI), 0x10351089u);
  /* 10351089 push edi */
  push32((uint32_t)(EDI));
  /* 1035108a push edi */
  push32((uint32_t)(EDI));
  /* 1035108b push edi */
  push32((uint32_t)(EDI));
  /* 1035108c call esi */
  call_ind((uint32_t)(ESI), 0x1035108eu);
  /* 1035108e push edi */
  push32((uint32_t)(EDI));
  /* 1035108f push 2 */
  push32((uint32_t)(0x2u));
  /* 10351091 push edi */
  push32((uint32_t)(EDI));
  /* 10351092 call esi */
  call_ind((uint32_t)(ESI), 0x10351094u);
  /* 10351094 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10351097 push edi */
  push32((uint32_t)(EDI));
  /* 10351098 call ebx */
  call_ind((uint32_t)(EBX), 0x1035109au);
  /* 1035109a push 6 */
  push32((uint32_t)(0x6u));
  /* 1035109c pop ecx */
  ECX = (pop32());
  /* 1035109d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035109f imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103510a5 push ecx */
  push32((uint32_t)(ECX));
  /* 103510a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 103510a8 push edi */
  push32((uint32_t)(EDI));
  /* 103510a9 call esi */
  call_ind((uint32_t)(ESI), 0x103510abu);
  /* 103510ab push edi */
  push32((uint32_t)(EDI));
  /* 103510ac call ebx */
  call_ind((uint32_t)(EBX), 0x103510aeu);
  /* 103510ae push 6 */
  push32((uint32_t)(0x6u));
  /* 103510b0 pop ecx */
  ECX = (pop32());
  /* 103510b1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103510b3 imul ecx, ecx, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xbb8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103510b9 push ecx */
  push32((uint32_t)(ECX));
  /* 103510ba push 4 */
  push32((uint32_t)(0x4u));
  /* 103510bc push edi */
  push32((uint32_t)(EDI));
  /* 103510bd call esi */
  call_ind((uint32_t)(ESI), 0x103510bfu);
  /* 103510bf push 0x493e0 */
  push32((uint32_t)(0x493e0u));
  /* 103510c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 103510c6 push ebp */
  push32((uint32_t)(EBP));
  /* 103510c7 call esi */
  call_ind((uint32_t)(ESI), 0x103510c9u);
  /* 103510c9 push 0x3d090 */
  push32((uint32_t)(0x3d090u));
  /* 103510ce push ebp */
  push32((uint32_t)(EBP));
  /* 103510cf push ebp */
  push32((uint32_t)(EBP));
  /* 103510d0 call esi */
  call_ind((uint32_t)(ESI), 0x103510d2u);
  /* 103510d2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 103510d7 push edi */
  push32((uint32_t)(EDI));
  /* 103510d8 push ebp */
  push32((uint32_t)(EBP));
  /* 103510d9 call esi */
  call_ind((uint32_t)(ESI), 0x103510dbu);
  /* 103510db add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103510de push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 103510e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103510e5 push ebp */
  push32((uint32_t)(EBP));
  /* 103510e6 call esi */
  call_ind((uint32_t)(ESI), 0x103510e8u);
  /* 103510e8 push 0xe4e1c0 */
  push32((uint32_t)(0xe4e1c0u));
  /* 103510ed push 5 */
  push32((uint32_t)(0x5u));
  /* 103510ef push ebp */
  push32((uint32_t)(EBP));
  /* 103510f0 call esi */
  call_ind((uint32_t)(ESI), 0x103510f2u);
  /* 103510f2 push 0xe4e1c0 */
  push32((uint32_t)(0xe4e1c0u));
  /* 103510f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 103510f9 push ebp */
  push32((uint32_t)(EBP));
  /* 103510fa call esi */
  call_ind((uint32_t)(ESI), 0x103510fcu);
  /* 103510fc push edi */
  push32((uint32_t)(EDI));
  /* 103510fd call ebx */
  call_ind((uint32_t)(EBX), 0x103510ffu);
  /* 103510ff add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10351102 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351105 jge 0x1035111c */
  if ((C.sf==C.of)) goto L_1035111c;
  /* 10351107 push ebp */
  push32((uint32_t)(EBP));
  /* 10351108 push edi */
  push32((uint32_t)(EDI));
  /* 10351109 push ebp */
  push32((uint32_t)(EBP));
  /* 1035110a push edi */
  push32((uint32_t)(EDI));
  /* 1035110b push 0x10355064 */
  push32((uint32_t)(0x10355064u));
  /* 10351110 push ebp */
  push32((uint32_t)(EBP));
  /* 10351111 call dword ptr [0x103540c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540c4))), 0x10351117u);
  /* 10351117 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1035111a jmp 0x10351132 */
  goto L_10351132;
L_1035111c:;
  /* 1035111c push edi */
  push32((uint32_t)(EDI));
  /* 1035111d call ebx */
  call_ind((uint32_t)(EBX), 0x1035111fu);
  /* 1035111f push eax */
  push32((uint32_t)(EAX));
  /* 10351120 push edi */
  push32((uint32_t)(EDI));
  /* 10351121 push ebp */
  push32((uint32_t)(EBP));
  /* 10351122 push edi */
  push32((uint32_t)(EDI));
  /* 10351123 push 0x10355064 */
  push32((uint32_t)(0x10355064u));
  /* 10351128 push ebp */
  push32((uint32_t)(EBP));
  /* 10351129 call dword ptr [0x103540c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540c4))), 0x1035112fu);
  /* 1035112f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10351132:;
  /* 10351132 push 0x1035505c */
  push32((uint32_t)(0x1035505cu));
  /* 10351137 call dword ptr [0x103540bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540bc))), 0x1035113du);
  /* 1035113d push edi */
  push32((uint32_t)(EDI));
  /* 1035113e call ebx */
  call_ind((uint32_t)(EBX), 0x10351140u);
  /* 10351140 pop ecx */
  ECX = (pop32());
  /* 10351141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351143 pop ecx */
  ECX = (pop32());
  /* 10351144 jne 0x10351187 */
  if (!C.zf) goto L_10351187;
  /* 10351146 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1035114b push 3 */
  push32((uint32_t)(0x3u));
  /* 1035114d push edi */
  push32((uint32_t)(EDI));
  /* 1035114e call esi */
  call_ind((uint32_t)(ESI), 0x10351150u);
  /* 10351150 push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 10351155 push ebp */
  push32((uint32_t)(EBP));
  /* 10351156 push edi */
  push32((uint32_t)(EDI));
  /* 10351157 call esi */
  call_ind((uint32_t)(ESI), 0x10351159u);
  /* 10351159 push edi */
  push32((uint32_t)(EDI));
  /* 1035115a push edi */
  push32((uint32_t)(EDI));
  /* 1035115b push edi */
  push32((uint32_t)(EDI));
  /* 1035115c call esi */
  call_ind((uint32_t)(ESI), 0x1035115eu);
  /* 1035115e push edi */
  push32((uint32_t)(EDI));
  /* 1035115f push 2 */
  push32((uint32_t)(0x2u));
  /* 10351161 push edi */
  push32((uint32_t)(EDI));
  /* 10351162 call esi */
  call_ind((uint32_t)(ESI), 0x10351164u);
  /* 10351164 push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 10351169 push 5 */
  push32((uint32_t)(0x5u));
  /* 1035116b push edi */
  push32((uint32_t)(EDI));
  /* 1035116c call esi */
  call_ind((uint32_t)(ESI), 0x1035116eu);
  /* 1035116e push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 10351173 push 4 */
  push32((uint32_t)(0x4u));
  /* 10351175 push edi */
  push32((uint32_t)(EDI));
  /* 10351176 call esi */
  call_ind((uint32_t)(ESI), 0x10351178u);
  /* 10351178 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1035117b push 0x10355054 */
  push32((uint32_t)(0x10355054u));
  /* 10351180 call dword ptr [0x103540bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540bc))), 0x10351186u);
  /* 10351186 pop ecx */
  ECX = (pop32());
L_10351187:;
  /* 10351187 push ebp */
  push32((uint32_t)(EBP));
  /* 10351188 call dword ptr [0x103540b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540b4))), 0x1035118eu);
  /* 1035118e mov esi, dword ptr [0x103540cc] */
  ESI = (r32((uint32_t)(0x103540cc)));
  /* 10351194 pop ecx */
  ECX = (pop32());
  /* 10351195 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10351197 je 0x103511bd */
  if (C.zf) goto L_103511bd;
  /* 10351199 push ebp */
  push32((uint32_t)(EBP));
  /* 1035119a call esi */
  call_ind((uint32_t)(ESI), 0x1035119cu);
  /* 1035119c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1035119e pop ecx */
  ECX = (pop32());
  /* 1035119f je 0x103511bd */
  if (C.zf) goto L_103511bd;
  /* 103511a1 push edi */
  push32((uint32_t)(EDI));
  /* 103511a2 push ebp */
  push32((uint32_t)(EBP));
  /* 103511a3 call dword ptr [0x103540b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540b0))), 0x103511a9u);
  /* 103511a9 push 0x1035504c */
  push32((uint32_t)(0x1035504cu));
  /* 103511ae call dword ptr [0x103540bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540bc))), 0x103511b4u);
  /* 103511b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103511b7 call dword ptr [0x103540d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540d0))), 0x103511bdu);
L_103511bd:;
  /* 103511bd mov ebp, dword ptr [0x103540b4] */
  EBP = (r32((uint32_t)(0x103540b4)));
  /* 103511c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103511c5 call ebp */
  call_ind((uint32_t)(EBP), 0x103511c7u);
  /* 103511c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103511c9 pop ecx */
  ECX = (pop32());
  /* 103511ca je 0x103511f1 */
  if (C.zf) goto L_103511f1;
  /* 103511cc push edi */
  push32((uint32_t)(EDI));
  /* 103511cd call esi */
  call_ind((uint32_t)(ESI), 0x103511cfu);
  /* 103511cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103511d1 pop ecx */
  ECX = (pop32());
  /* 103511d2 je 0x103511f1 */
  if (C.zf) goto L_103511f1;
  /* 103511d4 push edi */
  push32((uint32_t)(EDI));
  /* 103511d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103511d7 call dword ptr [0x103540b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540b0))), 0x103511ddu);
  /* 103511dd push 0x10355044 */
  push32((uint32_t)(0x10355044u));
  /* 103511e2 call dword ptr [0x103540bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540bc))), 0x103511e8u);
  /* 103511e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103511eb call dword ptr [0x103540c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540c8))), 0x103511f1u);
L_103511f1:;
  /* 103511f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 103511f3 call ebp */
  call_ind((uint32_t)(EBP), 0x103511f5u);
  /* 103511f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103511f7 pop ecx */
  ECX = (pop32());
  /* 103511f8 je 0x1035122a */
  if (C.zf) goto L_1035122a;
  /* 103511fa push 0x103553a0 */
  push32((uint32_t)(0x103553a0u));
  /* 103511ff call dword ptr [0x103540d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540d8))), 0x10351205u);
  /* 10351205 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351208 pop ecx */
  ECX = (pop32());
  /* 10351209 jge 0x1035122a */
  if ((C.sf==C.of)) goto L_1035122a;
  /* 1035120b push edi */
  push32((uint32_t)(EDI));
  /* 1035120c call ebx */
  call_ind((uint32_t)(EBX), 0x1035120eu);
  /* 1035120e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351210 pop ecx */
  ECX = (pop32());
  /* 10351211 jne 0x1035122a */
  if (!C.zf) goto L_1035122a;
  /* 10351213 push edi */
  push32((uint32_t)(EDI));
  /* 10351214 push 3 */
  push32((uint32_t)(0x3u));
  /* 10351216 call dword ptr [0x103540b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540b0))), 0x1035121cu);
  /* 1035121c push 0x1035503c */
  push32((uint32_t)(0x1035503cu));
  /* 10351221 call dword ptr [0x103540bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540bc))), 0x10351227u);
  /* 10351227 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1035122a:;
  /* 1035122a pop edi */
  EDI = (pop32());
  /* 1035122b pop esi */
  ESI = (pop32());
  /* 1035122c pop ebp */
  EBP = (pop32());
  /* 1035122d pop ebx */
  EBX = (pop32());
  /* 1035122e ret  */
  ESPCHK(0x10351033u, _esp0);
  ESP += 4; return;
}

/* FUN_1000122f @ 0x1035122f (217 bytes, 57 insns) */
void f_1035122f(void) {
  FTRACE(0x1035122fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1035122f mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10351233 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351236 jne 0x103512c4 */
  if (!C.zf) goto L_103512c4;
  /* 1035123c call dword ptr [0x10354034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354034))), 0x10351242u);
  /* 10351242 push 1 */
  push32((uint32_t)(0x1u));
  /* 10351244 mov dword ptr [0x103553c4], eax */
  w32((uint32_t)(0x103553c4), (EAX));
  /* 10351249 call 0x10351c63 */
  push32(0x1035124eu); f_10351c63();
  /* 1035124e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351250 pop ecx */
  ECX = (pop32());
  /* 10351251 je 0x1035128f */
  if (C.zf) goto L_1035128f;
  /* 10351253 mov eax, dword ptr [0x103553c4] */
  EAX = (r32((uint32_t)(0x103553c4)));
  /* 10351258 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1035125a mov cl, byte ptr [0x103553c5] */
  CL = (r8((uint32_t)(0x103553c5)));
  /* 10351260 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10351265 shr dword ptr [0x103553c4], 0x10 */
  w32((uint32_t)(0x103553c4), (sh_shr((uint32_t)(r32((uint32_t)(0x103553c4))), (0x10u)&0x1f, 32)));
  /* 1035126c mov dword ptr [0x103553cc], eax */
  w32((uint32_t)(0x103553cc), (EAX));
  /* 10351271 mov dword ptr [0x103553d0], ecx */
  w32((uint32_t)(0x103553d0), (ECX));
  /* 10351277 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1035127a add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1035127c mov dword ptr [0x103553c8], eax */
  w32((uint32_t)(0x103553c8), (EAX));
  /* 10351281 call 0x103514f6 */
  push32(0x10351286u); f_103514f6();
  /* 10351286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351288 jne 0x10351293 */
  if (!C.zf) goto L_10351293;
  /* 1035128a call 0x10351c9f */
  push32(0x1035128fu); f_10351c9f();
L_1035128f:;
  /* 1035128f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10351291 jmp 0x10351305 */
  goto L_10351305;
L_10351293:;
  /* 10351293 call dword ptr [0x10354030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354030))), 0x10351299u);
  /* 10351299 mov dword ptr [0x10355918], eax */
  w32((uint32_t)(0x10355918), (EAX));
  /* 1035129e call 0x10351b31 */
  push32(0x103512a3u); f_10351b31();
  /* 103512a3 mov dword ptr [0x103553b0], eax */
  w32((uint32_t)(0x103553b0), (EAX));
  /* 103512a8 call 0x1035161b */
  push32(0x103512adu); f_1035161b();
  /* 103512ad call 0x103518e4 */
  push32(0x103512b2u); f_103518e4();
  /* 103512b2 call 0x1035182b */
  push32(0x103512b7u); f_1035182b();
  /* 103512b7 call 0x103513d8 */
  push32(0x103512bcu); f_103513d8();
  /* 103512bc inc dword ptr [0x103553ac] */
  { uint32_t _r=(r32((uint32_t)(0x103553ac)))+1; w32((uint32_t)(0x103553ac), (_r)); fl_inc(_r,32); }
  /* 103512c2 jmp 0x10351302 */
  goto L_10351302;
L_103512c4:;
  /* 103512c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103512c6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103512c8 jne 0x103512f6 */
  if (!C.zf) goto L_103512f6;
  /* 103512ca cmp dword ptr [0x103553ac], ecx */
  { uint32_t _a=(r32((uint32_t)(0x103553ac))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103512d0 jle 0x1035128f */
  if ((C.zf||C.sf!=C.of)) goto L_1035128f;
  /* 103512d2 dec dword ptr [0x103553ac] */
  { uint32_t _r=(r32((uint32_t)(0x103553ac)))-1; w32((uint32_t)(0x103553ac), (_r)); fl_dec(_r,32); }
  /* 103512d8 cmp dword ptr [0x103553fc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x103553fc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103512de jne 0x103512e5 */
  if (!C.zf) goto L_103512e5;
  /* 103512e0 call 0x10351416 */
  push32(0x103512e5u); f_10351416();
L_103512e5:;
  /* 103512e5 call 0x103517d7 */
  push32(0x103512eau); f_103517d7();
  /* 103512ea call 0x1035154a */
  push32(0x103512efu); f_1035154a();
  /* 103512ef call 0x10351c9f */
  push32(0x103512f4u); f_10351c9f();
  /* 103512f4 jmp 0x10351302 */
  goto L_10351302;
L_103512f6:;
  /* 103512f6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103512f9 jne 0x10351302 */
  if (!C.zf) goto L_10351302;
  /* 103512fb push ecx */
  push32((uint32_t)(ECX));
  /* 103512fc call 0x1035157b */
  push32(0x10351301u); f_1035157b();
  /* 10351301 pop ecx */
  ECX = (pop32());
L_10351302:;
  /* 10351302 push 1 */
  push32((uint32_t)(0x1u));
  /* 10351304 pop eax */
  EAX = (pop32());
L_10351305:;
  /* 10351305 ret 0xc */
  ESPCHK(0x1035122fu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10351308 (157 bytes, 73 insns) */
void f_10351308(void) {
  FTRACE(0x10351308u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351308 push ebp */
  push32((uint32_t)(EBP));
  /* 10351309 mov ebp, esp */
  EBP = (ESP);
  /* 1035130b push ebx */
  push32((uint32_t)(EBX));
  /* 1035130c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1035130f push esi */
  push32((uint32_t)(ESI));
  /* 10351310 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10351313 push edi */
  push32((uint32_t)(EDI));
  /* 10351314 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10351317 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10351319 jne 0x10351324 */
  if (!C.zf) goto L_10351324;
  /* 1035131b cmp dword ptr [0x103553ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103553ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351322 jmp 0x1035134a */
  goto L_1035134a;
L_10351324:;
  /* 10351324 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351327 je 0x1035132e */
  if (C.zf) goto L_1035132e;
  /* 10351329 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035132c jne 0x10351350 */
  if (!C.zf) goto L_10351350;
L_1035132e:;
  /* 1035132e mov eax, dword ptr [0x1035591c] */
  EAX = (r32((uint32_t)(0x1035591c)));
  /* 10351333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351335 je 0x10351340 */
  if (C.zf) goto L_10351340;
  /* 10351337 push edi */
  push32((uint32_t)(EDI));
  /* 10351338 push esi */
  push32((uint32_t)(ESI));
  /* 10351339 push ebx */
  push32((uint32_t)(EBX));
  /* 1035133a call eax */
  call_ind((uint32_t)(EAX), 0x1035133cu);
  /* 1035133c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035133e je 0x1035134c */
  if (C.zf) goto L_1035134c;
L_10351340:;
  /* 10351340 push edi */
  push32((uint32_t)(EDI));
  /* 10351341 push esi */
  push32((uint32_t)(ESI));
  /* 10351342 push ebx */
  push32((uint32_t)(EBX));
  /* 10351343 call 0x1035122f */
  push32(0x10351348u); f_1035122f();
  /* 10351348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_1035134a:;
  /* 1035134a jne 0x10351350 */
  if (!C.zf) goto L_10351350;
L_1035134c:;
  /* 1035134c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1035134e jmp 0x1035139e */
  goto L_1035139e;
L_10351350:;
  /* 10351350 push edi */
  push32((uint32_t)(EDI));
  /* 10351351 push esi */
  push32((uint32_t)(ESI));
  /* 10351352 push ebx */
  push32((uint32_t)(EBX));
  /* 10351353 call 0x10351000 */
  push32(0x10351358u); f_10351000();
  /* 10351358 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035135b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1035135e jne 0x1035136c */
  if (!C.zf) goto L_1035136c;
  /* 10351360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351362 jne 0x1035139b */
  if (!C.zf) goto L_1035139b;
  /* 10351364 push edi */
  push32((uint32_t)(EDI));
  /* 10351365 push eax */
  push32((uint32_t)(EAX));
  /* 10351366 push ebx */
  push32((uint32_t)(EBX));
  /* 10351367 call 0x1035122f */
  push32(0x1035136cu); f_1035122f();
L_1035136c:;
  /* 1035136c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1035136e je 0x10351375 */
  if (C.zf) goto L_10351375;
  /* 10351370 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351373 jne 0x1035139b */
  if (!C.zf) goto L_1035139b;
L_10351375:;
  /* 10351375 push edi */
  push32((uint32_t)(EDI));
  /* 10351376 push esi */
  push32((uint32_t)(ESI));
  /* 10351377 push ebx */
  push32((uint32_t)(EBX));
  /* 10351378 call 0x1035122f */
  push32(0x1035137du); f_1035122f();
  /* 1035137d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035137f jne 0x10351384 */
  if (!C.zf) goto L_10351384;
  /* 10351381 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10351384:;
  /* 10351384 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351388 je 0x1035139b */
  if (C.zf) goto L_1035139b;
  /* 1035138a mov eax, dword ptr [0x1035591c] */
  EAX = (r32((uint32_t)(0x1035591c)));
  /* 1035138f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351391 je 0x1035139b */
  if (C.zf) goto L_1035139b;
  /* 10351393 push edi */
  push32((uint32_t)(EDI));
  /* 10351394 push esi */
  push32((uint32_t)(ESI));
  /* 10351395 push ebx */
  push32((uint32_t)(EBX));
  /* 10351396 call eax */
  call_ind((uint32_t)(EAX), 0x10351398u);
  /* 10351398 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1035139b:;
  /* 1035139b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1035139e:;
  /* 1035139e pop edi */
  EDI = (pop32());
  /* 1035139f pop esi */
  ESI = (pop32());
  /* 103513a0 pop ebx */
  EBX = (pop32());
  /* 103513a1 pop ebp */
  EBP = (pop32());
  /* 103513a2 ret 0xc */
  ESPCHK(0x10351308u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x103513a5 (48 bytes, 15 insns) */
void f_103513a5(void) {
  FTRACE(0x103513a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103513a5 mov eax, dword ptr [0x103553b8] */
  EAX = (r32((uint32_t)(0x103553b8)));
  /* 103513aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103513ad je 0x103513bc */
  if (C.zf) goto L_103513bc;
  /* 103513af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103513b1 jne 0x103513c1 */
  if (!C.zf) goto L_103513c1;
  /* 103513b3 cmp dword ptr [0x103553bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103553bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103513ba jne 0x103513c1 */
  if (!C.zf) goto L_103513c1;
L_103513bc:;
  /* 103513bc call 0x10351d14 */
  push32(0x103513c1u); f_10351d14();
L_103513c1:;
  /* 103513c1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 103513c5 call 0x10351d4d */
  push32(0x103513cau); f_10351d4d();
  /* 103513ca push 0xff */
  push32((uint32_t)(0xffu));
  /* 103513cf call dword ptr [0x10355070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10355070))), 0x103513d5u);
  /* 103513d5 pop ecx */
  ECX = (pop32());
  /* 103513d6 pop ecx */
  ECX = (pop32());
  /* 103513d7 ret  */
  ESPCHK(0x103513a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100013d8 @ 0x103513d8 (45 bytes, 12 insns) */
void f_103513d8(void) {
  FTRACE(0x103513d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103513d8 mov eax, dword ptr [0x10355914] */
  EAX = (r32((uint32_t)(0x10355914)));
  /* 103513dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103513df je 0x103513e3 */
  if (C.zf) goto L_103513e3;
  /* 103513e1 call eax */
  call_ind((uint32_t)(EAX), 0x103513e3u);
L_103513e3:;
  /* 103513e3 push 0x10355010 */
  push32((uint32_t)(0x10355010u));
  /* 103513e8 push 0x10355008 */
  push32((uint32_t)(0x10355008u));
  /* 103513ed call 0x103514dc */
  push32(0x103513f2u); f_103514dc();
  /* 103513f2 push 0x10355004 */
  push32((uint32_t)(0x10355004u));
  /* 103513f7 push 0x10355000 */
  push32((uint32_t)(0x10355000u));
  /* 103513fc call 0x103514dc */
  push32(0x10351401u); f_103514dc();
  /* 10351401 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10351404 ret  */
  ESPCHK(0x103513d8u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10351405 (17 bytes, 6 insns) */
void f_10351405(void) {
  FTRACE(0x10351405u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351405 push 0 */
  push32((uint32_t)(0x0u));
  /* 10351407 push 1 */
  push32((uint32_t)(0x1u));
  /* 10351409 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1035140d call 0x10351425 */
  push32(0x10351412u); f_10351425();
  /* 10351412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10351415 ret  */
  ESPCHK(0x10351405u, _esp0);
  ESP += 4; return;
}

/* FUN_10001416 @ 0x10351416 (15 bytes, 6 insns) */
void f_10351416(void) {
  FTRACE(0x10351416u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351416 push 1 */
  push32((uint32_t)(0x1u));
  /* 10351418 push 0 */
  push32((uint32_t)(0x0u));
  /* 1035141a push 0 */
  push32((uint32_t)(0x0u));
  /* 1035141c call 0x10351425 */
  push32(0x10351421u); f_10351425();
  /* 10351421 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10351424 ret  */
  ESPCHK(0x10351416u, _esp0);
  ESP += 4; return;
}

/* FUN_10001425 @ 0x10351425 (163 bytes, 53 insns) */
void f_10351425(void) {
  FTRACE(0x10351425u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351425 push edi */
  push32((uint32_t)(EDI));
  /* 10351426 call 0x103514ca */
  push32(0x1035142bu); f_103514ca();
  /* 1035142b push 1 */
  push32((uint32_t)(0x1u));
  /* 1035142d pop edi */
  EDI = (pop32());
  /* 1035142e cmp dword ptr [0x10355400], edi */
  { uint32_t _a=(r32((uint32_t)(0x10355400))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351434 jne 0x10351447 */
  if (!C.zf) goto L_10351447;
  /* 10351436 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1035143a call dword ptr [0x10354040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354040))), 0x10351440u);
  /* 10351440 push eax */
  push32((uint32_t)(EAX));
  /* 10351441 call dword ptr [0x1035403c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035403c))), 0x10351447u);
L_10351447:;
  /* 10351447 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035144c push ebx */
  push32((uint32_t)(EBX));
  /* 1035144d mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10351451 mov dword ptr [0x103553fc], edi */
  w32((uint32_t)(0x103553fc), (EDI));
  /* 10351457 mov byte ptr [0x103553f8], bl */
  w8((uint32_t)(0x103553f8), (BL));
  /* 1035145d jne 0x1035149b */
  if (!C.zf) goto L_1035149b;
  /* 1035145f mov eax, dword ptr [0x10355910] */
  EAX = (r32((uint32_t)(0x10355910)));
  /* 10351464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351466 je 0x1035148a */
  if (C.zf) goto L_1035148a;
  /* 10351468 mov ecx, dword ptr [0x1035590c] */
  ECX = (r32((uint32_t)(0x1035590c)));
  /* 1035146e push esi */
  push32((uint32_t)(ESI));
  /* 1035146f lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10351472 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351474 jb 0x10351489 */
  if (C.cf) goto L_10351489;
L_10351476:;
  /* 10351476 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10351478 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035147a je 0x1035147e */
  if (C.zf) goto L_1035147e;
  /* 1035147c call eax */
  call_ind((uint32_t)(EAX), 0x1035147eu);
L_1035147e:;
  /* 1035147e sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10351481 cmp esi, dword ptr [0x10355910] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10355910))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351487 jae 0x10351476 */
  if (!C.cf) goto L_10351476;
L_10351489:;
  /* 10351489 pop esi */
  ESI = (pop32());
L_1035148a:;
  /* 1035148a push 0x10355018 */
  push32((uint32_t)(0x10355018u));
  /* 1035148f push 0x10355014 */
  push32((uint32_t)(0x10355014u));
  /* 10351494 call 0x103514dc */
  push32(0x10351499u); f_103514dc();
  /* 10351499 pop ecx */
  ECX = (pop32());
  /* 1035149a pop ecx */
  ECX = (pop32());
L_1035149b:;
  /* 1035149b push 0x10355020 */
  push32((uint32_t)(0x10355020u));
  /* 103514a0 push 0x1035501c */
  push32((uint32_t)(0x1035501cu));
  /* 103514a5 call 0x103514dc */
  push32(0x103514aau); f_103514dc();
  /* 103514aa pop ecx */
  ECX = (pop32());
  /* 103514ab pop ecx */
  ECX = (pop32());
  /* 103514ac test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 103514ae pop ebx */
  EBX = (pop32());
  /* 103514af je 0x103514b8 */
  if (C.zf) goto L_103514b8;
  /* 103514b1 call 0x103514d3 */
  push32(0x103514b6u); f_103514d3();
  /* 103514b6 pop edi */
  EDI = (pop32());
  /* 103514b7 ret  */
  ESPCHK(0x10351425u, _esp0);
  ESP += 4; return;
L_103514b8:;
  /* 103514b8 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 103514bc mov dword ptr [0x10355400], edi */
  w32((uint32_t)(0x10355400), (EDI));
  /* 103514c2 call dword ptr [0x10354038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354038))), 0x103514c8u);
  /* 103514c8 pop edi */
  EDI = (pop32());
  /* 103514c9 ret  */
  ESPCHK(0x10351425u, _esp0);
  ESP += 4; return;
}

/* FUN_100014ca @ 0x103514ca (9 bytes, 4 insns) */
void f_103514ca(void) {
  FTRACE(0x103514cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103514ca push 0xd */
  push32((uint32_t)(0xdu));
  /* 103514cc call 0x10351f35 */
  push32(0x103514d1u); f_10351f35();
  /* 103514d1 pop ecx */
  ECX = (pop32());
  /* 103514d2 ret  */
  ESPCHK(0x103514cau, _esp0);
  ESP += 4; return;
}

/* FUN_100014d3 @ 0x103514d3 (9 bytes, 4 insns) */
void f_103514d3(void) {
  FTRACE(0x103514d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103514d3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103514d5 call 0x10351f96 */
  push32(0x103514dau); f_10351f96();
  /* 103514da pop ecx */
  ECX = (pop32());
  /* 103514db ret  */
  ESPCHK(0x103514d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100014dc @ 0x103514dc (26 bytes, 12 insns) */
void f_103514dc(void) {
  FTRACE(0x103514dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103514dc push esi */
  push32((uint32_t)(ESI));
  /* 103514dd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_103514e1:;
  /* 103514e1 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103514e5 jae 0x103514f4 */
  if (!C.cf) goto L_103514f4;
  /* 103514e7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 103514e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103514eb je 0x103514ef */
  if (C.zf) goto L_103514ef;
  /* 103514ed call eax */
  call_ind((uint32_t)(EAX), 0x103514efu);
L_103514ef:;
  /* 103514ef add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103514f2 jmp 0x103514e1 */
  goto L_103514e1;
L_103514f4:;
  /* 103514f4 pop esi */
  ESI = (pop32());
  /* 103514f5 ret  */
  ESPCHK(0x103514dcu, _esp0);
  ESP += 4; return;
}

/* FUN_100014f6 @ 0x103514f6 (84 bytes, 32 insns) */
void f_103514f6(void) {
  FTRACE(0x103514f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103514f6 push esi */
  push32((uint32_t)(ESI));
  /* 103514f7 call 0x10351ea0 */
  push32(0x103514fcu); f_10351ea0();
  /* 103514fc call dword ptr [0x1035404c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035404c))), 0x10351502u);
  /* 10351502 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351505 mov dword ptr [0x10355074], eax */
  w32((uint32_t)(0x10355074), (EAX));
  /* 1035150a je 0x10351546 */
  if (C.zf) goto L_10351546;
  /* 1035150c push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1035150e push 1 */
  push32((uint32_t)(0x1u));
  /* 10351510 call 0x10351fab */
  push32(0x10351515u); f_10351fab();
  /* 10351515 mov esi, eax */
  ESI = (EAX);
  /* 10351517 pop ecx */
  ECX = (pop32());
  /* 10351518 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1035151a pop ecx */
  ECX = (pop32());
  /* 1035151b je 0x10351546 */
  if (C.zf) goto L_10351546;
  /* 1035151d push esi */
  push32((uint32_t)(ESI));
  /* 1035151e push dword ptr [0x10355074] */
  push32((uint32_t)(r32((uint32_t)(0x10355074))));
  /* 10351524 call dword ptr [0x10354048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354048))), 0x1035152au);
  /* 1035152a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035152c je 0x10351546 */
  if (C.zf) goto L_10351546;
  /* 1035152e push esi */
  push32((uint32_t)(ESI));
  /* 1035152f call 0x10351568 */
  push32(0x10351534u); f_10351568();
  /* 10351534 pop ecx */
  ECX = (pop32());
  /* 10351535 call dword ptr [0x10354044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354044))), 0x1035153bu);
  /* 1035153b or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1035153f push 1 */
  push32((uint32_t)(0x1u));
  /* 10351541 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10351543 pop eax */
  EAX = (pop32());
  /* 10351544 pop esi */
  ESI = (pop32());
  /* 10351545 ret  */
  ESPCHK(0x103514f6u, _esp0);
  ESP += 4; return;
L_10351546:;
  /* 10351546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10351548 pop esi */
  ESI = (pop32());
  /* 10351549 ret  */
  ESPCHK(0x103514f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000154a @ 0x1035154a (30 bytes, 8 insns) */
void f_1035154a(void) {
  FTRACE(0x1035154au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1035154a call 0x10351ec9 */
  push32(0x1035154fu); f_10351ec9();
  /* 1035154f mov eax, dword ptr [0x10355074] */
  EAX = (r32((uint32_t)(0x10355074)));
  /* 10351554 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351557 je 0x10351567 */
  if (C.zf) goto L_10351567;
  /* 10351559 push eax */
  push32((uint32_t)(EAX));
  /* 1035155a call dword ptr [0x10354050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354050))), 0x10351560u);
  /* 10351560 or dword ptr [0x10355074], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10355074)))|(0xffffffffu); w32((uint32_t)(0x10355074), (_r)); fl_logic(_r,32); }
L_10351567:;
  /* 10351567 ret  */
  ESPCHK(0x1035154au, _esp0);
  ESP += 4; return;
}

/* FUN_10001568 @ 0x10351568 (19 bytes, 4 insns) */
void f_10351568(void) {
  FTRACE(0x10351568u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351568 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1035156c mov dword ptr [eax + 0x50], 0x103551f0 */
  w32((uint32_t)(EAX + 0x50), (0x103551f0u));
  /* 10351573 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 1035157a ret  */
  ESPCHK(0x10351568u, _esp0);
  ESP += 4; return;
}

/* FUN_1000157b @ 0x1035157b (160 bytes, 62 insns) */
void f_1035157b(void) {
  FTRACE(0x1035157bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1035157b mov eax, dword ptr [0x10355074] */
  EAX = (r32((uint32_t)(0x10355074)));
  /* 10351580 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351583 je 0x1035161a */
  if (C.zf) goto L_1035161a;
  /* 10351589 push esi */
  push32((uint32_t)(ESI));
  /* 1035158a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1035158e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10351590 jne 0x1035159f */
  if (!C.zf) goto L_1035159f;
  /* 10351592 push eax */
  push32((uint32_t)(EAX));
  /* 10351593 call dword ptr [0x10354054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354054))), 0x10351599u);
  /* 10351599 mov esi, eax */
  ESI = (EAX);
  /* 1035159b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1035159d je 0x1035160b */
  if (C.zf) goto L_1035160b;
L_1035159f:;
  /* 1035159f mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 103515a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103515a4 je 0x103515ad */
  if (C.zf) goto L_103515ad;
  /* 103515a6 push eax */
  push32((uint32_t)(EAX));
  /* 103515a7 call 0x10352038 */
  push32(0x103515acu); f_10352038();
  /* 103515ac pop ecx */
  ECX = (pop32());
L_103515ad:;
  /* 103515ad mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 103515b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103515b2 je 0x103515bb */
  if (C.zf) goto L_103515bb;
  /* 103515b4 push eax */
  push32((uint32_t)(EAX));
  /* 103515b5 call 0x10352038 */
  push32(0x103515bau); f_10352038();
  /* 103515ba pop ecx */
  ECX = (pop32());
L_103515bb:;
  /* 103515bb mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 103515be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103515c0 je 0x103515c9 */
  if (C.zf) goto L_103515c9;
  /* 103515c2 push eax */
  push32((uint32_t)(EAX));
  /* 103515c3 call 0x10352038 */
  push32(0x103515c8u); f_10352038();
  /* 103515c8 pop ecx */
  ECX = (pop32());
L_103515c9:;
  /* 103515c9 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 103515cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103515ce je 0x103515d7 */
  if (C.zf) goto L_103515d7;
  /* 103515d0 push eax */
  push32((uint32_t)(EAX));
  /* 103515d1 call 0x10352038 */
  push32(0x103515d6u); f_10352038();
  /* 103515d6 pop ecx */
  ECX = (pop32());
L_103515d7:;
  /* 103515d7 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 103515da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103515dc je 0x103515e5 */
  if (C.zf) goto L_103515e5;
  /* 103515de push eax */
  push32((uint32_t)(EAX));
  /* 103515df call 0x10352038 */
  push32(0x103515e4u); f_10352038();
  /* 103515e4 pop ecx */
  ECX = (pop32());
L_103515e5:;
  /* 103515e5 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 103515e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103515ea je 0x103515f3 */
  if (C.zf) goto L_103515f3;
  /* 103515ec push eax */
  push32((uint32_t)(EAX));
  /* 103515ed call 0x10352038 */
  push32(0x103515f2u); f_10352038();
  /* 103515f2 pop ecx */
  ECX = (pop32());
L_103515f3:;
  /* 103515f3 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 103515f6 cmp eax, 0x103551f0 */
  { uint32_t _a=(EAX),_b=(0x103551f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103515fb je 0x10351604 */
  if (C.zf) goto L_10351604;
  /* 103515fd push eax */
  push32((uint32_t)(EAX));
  /* 103515fe call 0x10352038 */
  push32(0x10351603u); f_10352038();
  /* 10351603 pop ecx */
  ECX = (pop32());
L_10351604:;
  /* 10351604 push esi */
  push32((uint32_t)(ESI));
  /* 10351605 call 0x10352038 */
  push32(0x1035160au); f_10352038();
  /* 1035160a pop ecx */
  ECX = (pop32());
L_1035160b:;
  /* 1035160b push 0 */
  push32((uint32_t)(0x0u));
  /* 1035160d push dword ptr [0x10355074] */
  push32((uint32_t)(r32((uint32_t)(0x10355074))));
  /* 10351613 call dword ptr [0x10354048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354048))), 0x10351619u);
  /* 10351619 pop esi */
  ESI = (pop32());
L_1035161a:;
  /* 1035161a ret  */
  ESPCHK(0x1035157bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000161b @ 0x1035161b (444 bytes, 150 insns) */
void f_1035161b(void) {
  FTRACE(0x1035161bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1035161b push ebp */
  push32((uint32_t)(EBP));
  /* 1035161c mov ebp, esp */
  EBP = (ESP);
  /* 1035161e sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10351621 push ebx */
  push32((uint32_t)(EBX));
  /* 10351622 push esi */
  push32((uint32_t)(ESI));
  /* 10351623 push edi */
  push32((uint32_t)(EDI));
  /* 10351624 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10351629 call 0x10352080 */
  push32(0x1035162eu); f_10352080();
  /* 1035162e mov esi, eax */
  ESI = (EAX);
  /* 10351630 pop ecx */
  ECX = (pop32());
  /* 10351631 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10351633 jne 0x1035163d */
  if (!C.zf) goto L_1035163d;
  /* 10351635 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10351637 call 0x103513a5 */
  push32(0x1035163cu); f_103513a5();
  /* 1035163c pop ecx */
  ECX = (pop32());
L_1035163d:;
  /* 1035163d mov dword ptr [0x10355800], esi */
  w32((uint32_t)(0x10355800), (ESI));
  /* 10351643 mov dword ptr [0x10355900], 0x20 */
  w32((uint32_t)(0x10355900), (0x20u));
  /* 1035164d lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10351653:;
  /* 10351653 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351655 jae 0x10351675 */
  if (!C.cf) goto L_10351675;
  /* 10351657 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1035165b or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1035165e and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10351662 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10351666 mov eax, dword ptr [0x10355800] */
  EAX = (r32((uint32_t)(0x10355800)));
  /* 1035166b add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1035166e add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10351673 jmp 0x10351653 */
  goto L_10351653;
L_10351675:;
  /* 10351675 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10351678 push eax */
  push32((uint32_t)(EAX));
  /* 10351679 call dword ptr [0x10354064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354064))), 0x1035167fu);
  /* 1035167f cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10351684 je 0x1035175b */
  if (C.zf) goto L_1035175b;
  /* 1035168a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1035168d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035168f je 0x1035175b */
  if (C.zf) goto L_1035175b;
  /* 10351695 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10351697 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1035169a lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 1035169d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103516a0 mov eax, 0x800 */
  EAX = (0x800u);
  /* 103516a5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103516a7 jl 0x103516ab */
  if ((C.sf!=C.of)) goto L_103516ab;
  /* 103516a9 mov edi, eax */
  EDI = (EAX);
L_103516ab:;
  /* 103516ab cmp dword ptr [0x10355900], edi */
  { uint32_t _a=(r32((uint32_t)(0x10355900))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103516b1 jge 0x10351709 */
  if ((C.sf==C.of)) goto L_10351709;
  /* 103516b3 mov esi, 0x10355804 */
  ESI = (0x10355804u);
L_103516b8:;
  /* 103516b8 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103516bd call 0x10352080 */
  push32(0x103516c2u); f_10352080();
  /* 103516c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103516c4 pop ecx */
  ECX = (pop32());
  /* 103516c5 je 0x10351703 */
  if (C.zf) goto L_10351703;
  /* 103516c7 add dword ptr [0x10355900], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10355900))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10355900), (_r)); fl_add(_a,_b,_r,32); }
  /* 103516ce mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 103516d0 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_103516d6:;
  /* 103516d6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103516d8 jae 0x103516f6 */
  if (!C.cf) goto L_103516f6;
  /* 103516da and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 103516de or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 103516e1 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 103516e5 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 103516e9 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 103516eb add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103516ee add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103516f4 jmp 0x103516d6 */
  goto L_103516d6;
L_103516f6:;
  /* 103516f6 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103516f9 cmp dword ptr [0x10355900], edi */
  { uint32_t _a=(r32((uint32_t)(0x10355900))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103516ff jl 0x103516b8 */
  if ((C.sf!=C.of)) goto L_103516b8;
  /* 10351701 jmp 0x10351709 */
  goto L_10351709;
L_10351703:;
  /* 10351703 mov edi, dword ptr [0x10355900] */
  EDI = (r32((uint32_t)(0x10355900)));
L_10351709:;
  /* 10351709 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1035170b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1035170d jle 0x1035175b */
  if ((C.zf||C.sf!=C.of)) goto L_1035175b;
L_1035170f:;
  /* 1035170f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10351712 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10351714 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351717 je 0x10351751 */
  if (C.zf) goto L_10351751;
  /* 10351719 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1035171b test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1035171d je 0x10351751 */
  if (C.zf) goto L_10351751;
  /* 1035171f test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10351721 jne 0x1035172e */
  if (!C.zf) goto L_1035172e;
  /* 10351723 push ecx */
  push32((uint32_t)(ECX));
  /* 10351724 call dword ptr [0x10354060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354060))), 0x1035172au);
  /* 1035172a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035172c je 0x10351751 */
  if (C.zf) goto L_10351751;
L_1035172e:;
  /* 1035172e mov ecx, esi */
  ECX = (ESI);
  /* 10351730 mov eax, esi */
  EAX = (ESI);
  /* 10351732 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10351735 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10351738 mov ecx, dword ptr [ecx*4 + 0x10355800] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10355800)));
  /* 1035173f lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10351742 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10351745 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10351748 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1035174a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1035174c mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 1035174e mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10351751:;
  /* 10351751 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10351755 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10351756 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10351757 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351759 jl 0x1035170f */
  if ((C.sf!=C.of)) goto L_1035170f;
L_1035175b:;
  /* 1035175b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1035175d:;
  /* 1035175d mov ecx, dword ptr [0x10355800] */
  ECX = (r32((uint32_t)(0x10355800)));
  /* 10351763 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10351766 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035176a lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1035176d jne 0x103517bc */
  if (!C.zf) goto L_103517bc;
  /* 1035176f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10351771 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10351775 jne 0x1035177c */
  if (!C.zf) goto L_1035177c;
  /* 10351777 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10351779 pop eax */
  EAX = (pop32());
  /* 1035177a jmp 0x10351786 */
  goto L_10351786;
L_1035177c:;
  /* 1035177c mov eax, ebx */
  EAX = (EBX);
  /* 1035177e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1035177f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10351781 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10351783 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10351786:;
  /* 10351786 push eax */
  push32((uint32_t)(EAX));
  /* 10351787 call dword ptr [0x1035405c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035405c))), 0x1035178du);
  /* 1035178d mov edi, eax */
  EDI = (EAX);
  /* 1035178f cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351792 je 0x103517ab */
  if (C.zf) goto L_103517ab;
  /* 10351794 push edi */
  push32((uint32_t)(EDI));
  /* 10351795 call dword ptr [0x10354060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354060))), 0x1035179bu);
  /* 1035179b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035179d je 0x103517ab */
  if (C.zf) goto L_103517ab;
  /* 1035179f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103517a4 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 103517a6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103517a9 jne 0x103517b1 */
  if (!C.zf) goto L_103517b1;
L_103517ab:;
  /* 103517ab or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 103517af jmp 0x103517c0 */
  goto L_103517c0;
L_103517b1:;
  /* 103517b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103517b4 jne 0x103517c0 */
  if (!C.zf) goto L_103517c0;
  /* 103517b6 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 103517ba jmp 0x103517c0 */
  goto L_103517c0;
L_103517bc:;
  /* 103517bc or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_103517c0:;
  /* 103517c0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103517c1 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103517c4 jl 0x1035175d */
  if ((C.sf!=C.of)) goto L_1035175d;
  /* 103517c6 push dword ptr [0x10355900] */
  push32((uint32_t)(r32((uint32_t)(0x10355900))));
  /* 103517cc call dword ptr [0x10354058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354058))), 0x103517d2u);
  /* 103517d2 pop edi */
  EDI = (pop32());
  /* 103517d3 pop esi */
  ESI = (pop32());
  /* 103517d4 pop ebx */
  EBX = (pop32());
  /* 103517d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103517d6 ret  */
  ESPCHK(0x1035161bu, _esp0);
  ESP += 4; return;
}

/* FUN_100017d7 @ 0x103517d7 (84 bytes, 33 insns) */
void f_103517d7(void) {
  FTRACE(0x103517d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103517d7 push ebx */
  push32((uint32_t)(EBX));
  /* 103517d8 push esi */
  push32((uint32_t)(ESI));
  /* 103517d9 push edi */
  push32((uint32_t)(EDI));
  /* 103517da mov esi, 0x10355800 */
  ESI = (0x10355800u);
L_103517df:;
  /* 103517df mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 103517e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103517e3 je 0x1035181c */
  if (C.zf) goto L_1035181c;
  /* 103517e5 mov edi, eax */
  EDI = (EAX);
  /* 103517e7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103517ec cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103517ee jae 0x10351811 */
  if (!C.cf) goto L_10351811;
  /* 103517f0 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_103517f3:;
  /* 103517f3 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103517f7 je 0x10351800 */
  if (C.zf) goto L_10351800;
  /* 103517f9 push ebx */
  push32((uint32_t)(EBX));
  /* 103517fa call dword ptr [0x10354068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354068))), 0x10351800u);
L_10351800:;
  /* 10351800 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10351802 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10351805 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1035180a add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1035180d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035180f jb 0x103517f3 */
  if (C.cf) goto L_103517f3;
L_10351811:;
  /* 10351811 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10351813 call 0x10352038 */
  push32(0x10351818u); f_10352038();
  /* 10351818 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1035181b pop ecx */
  ECX = (pop32());
L_1035181c:;
  /* 1035181c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1035181f cmp esi, 0x10355900 */
  { uint32_t _a=(ESI),_b=(0x10355900u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351825 jl 0x103517df */
  if ((C.sf!=C.of)) goto L_103517df;
  /* 10351827 pop edi */
  EDI = (pop32());
  /* 10351828 pop esi */
  ESI = (pop32());
  /* 10351829 pop ebx */
  EBX = (pop32());
  /* 1035182a ret  */
  ESPCHK(0x103517d7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000182b @ 0x1035182b (185 bytes, 71 insns) */
void f_1035182b(void) {
  FTRACE(0x1035182bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1035182b push ebx */
  push32((uint32_t)(EBX));
  /* 1035182c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1035182e cmp dword ptr [0x10355908], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10355908))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351834 push esi */
  push32((uint32_t)(ESI));
  /* 10351835 push edi */
  push32((uint32_t)(EDI));
  /* 10351836 jne 0x1035183d */
  if (!C.zf) goto L_1035183d;
  /* 10351838 call 0x10352653 */
  push32(0x1035183du); f_10352653();
L_1035183d:;
  /* 1035183d mov esi, dword ptr [0x103553b0] */
  ESI = (r32((uint32_t)(0x103553b0)));
  /* 10351843 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10351845:;
  /* 10351845 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10351847 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351849 je 0x1035185d */
  if (C.zf) goto L_1035185d;
  /* 1035184b cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1035184d je 0x10351850 */
  if (C.zf) goto L_10351850;
  /* 1035184f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10351850:;
  /* 10351850 push esi */
  push32((uint32_t)(ESI));
  /* 10351851 call 0x10352200 */
  push32(0x10351856u); f_10352200();
  /* 10351856 pop ecx */
  ECX = (pop32());
  /* 10351857 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1035185b jmp 0x10351845 */
  goto L_10351845;
L_1035185d:;
  /* 1035185d lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10351864 push eax */
  push32((uint32_t)(EAX));
  /* 10351865 call 0x10352080 */
  push32(0x1035186au); f_10352080();
  /* 1035186a mov esi, eax */
  ESI = (EAX);
  /* 1035186c pop ecx */
  ECX = (pop32());
  /* 1035186d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035186f mov dword ptr [0x103553e0], esi */
  w32((uint32_t)(0x103553e0), (ESI));
  /* 10351875 jne 0x1035187f */
  if (!C.zf) goto L_1035187f;
  /* 10351877 push 9 */
  push32((uint32_t)(0x9u));
  /* 10351879 call 0x103513a5 */
  push32(0x1035187eu); f_103513a5();
  /* 1035187e pop ecx */
  ECX = (pop32());
L_1035187f:;
  /* 1035187f mov edi, dword ptr [0x103553b0] */
  EDI = (r32((uint32_t)(0x103553b0)));
  /* 10351885 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351887 je 0x103518c2 */
  if (C.zf) goto L_103518c2;
  /* 10351889 push ebp */
  push32((uint32_t)(EBP));
L_1035188a:;
  /* 1035188a push edi */
  push32((uint32_t)(EDI));
  /* 1035188b call 0x10352200 */
  push32(0x10351890u); f_10352200();
  /* 10351890 mov ebp, eax */
  EBP = (EAX);
  /* 10351892 pop ecx */
  ECX = (pop32());
  /* 10351893 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10351894 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351897 je 0x103518bb */
  if (C.zf) goto L_103518bb;
  /* 10351899 push ebp */
  push32((uint32_t)(EBP));
  /* 1035189a call 0x10352080 */
  push32(0x1035189fu); f_10352080();
  /* 1035189f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103518a1 pop ecx */
  ECX = (pop32());
  /* 103518a2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 103518a4 jne 0x103518ae */
  if (!C.zf) goto L_103518ae;
  /* 103518a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 103518a8 call 0x103513a5 */
  push32(0x103518adu); f_103513a5();
  /* 103518ad pop ecx */
  ECX = (pop32());
L_103518ae:;
  /* 103518ae push edi */
  push32((uint32_t)(EDI));
  /* 103518af push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103518b1 call 0x10352110 */
  push32(0x103518b6u); f_10352110();
  /* 103518b6 pop ecx */
  ECX = (pop32());
  /* 103518b7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103518ba pop ecx */
  ECX = (pop32());
L_103518bb:;
  /* 103518bb add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103518bd cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103518bf jne 0x1035188a */
  if (!C.zf) goto L_1035188a;
  /* 103518c1 pop ebp */
  EBP = (pop32());
L_103518c2:;
  /* 103518c2 push dword ptr [0x103553b0] */
  push32((uint32_t)(r32((uint32_t)(0x103553b0))));
  /* 103518c8 call 0x10352038 */
  push32(0x103518cdu); f_10352038();
  /* 103518cd pop ecx */
  ECX = (pop32());
  /* 103518ce mov dword ptr [0x103553b0], ebx */
  w32((uint32_t)(0x103553b0), (EBX));
  /* 103518d4 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 103518d6 pop edi */
  EDI = (pop32());
  /* 103518d7 pop esi */
  ESI = (pop32());
  /* 103518d8 mov dword ptr [0x10355904], 1 */
  w32((uint32_t)(0x10355904), (0x1u));
  /* 103518e2 pop ebx */
  EBX = (pop32());
  /* 103518e3 ret  */
  ESPCHK(0x1035182bu, _esp0);
  ESP += 4; return;
}

/* FUN_100018e4 @ 0x103518e4 (153 bytes, 62 insns) */
void f_103518e4(void) {
  FTRACE(0x103518e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103518e4 push ebp */
  push32((uint32_t)(EBP));
  /* 103518e5 mov ebp, esp */
  EBP = (ESP);
  /* 103518e7 push ecx */
  push32((uint32_t)(ECX));
  /* 103518e8 push ecx */
  push32((uint32_t)(ECX));
  /* 103518e9 push ebx */
  push32((uint32_t)(EBX));
  /* 103518ea xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103518ec cmp dword ptr [0x10355908], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10355908))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103518f2 push esi */
  push32((uint32_t)(ESI));
  /* 103518f3 push edi */
  push32((uint32_t)(EDI));
  /* 103518f4 jne 0x103518fb */
  if (!C.zf) goto L_103518fb;
  /* 103518f6 call 0x10352653 */
  push32(0x103518fbu); f_10352653();
L_103518fb:;
  /* 103518fb mov esi, 0x10355404 */
  ESI = (0x10355404u);
  /* 10351900 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10351905 push esi */
  push32((uint32_t)(ESI));
  /* 10351906 push ebx */
  push32((uint32_t)(EBX));
  /* 10351907 call dword ptr [0x10354000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354000))), 0x1035190du);
  /* 1035190d mov eax, dword ptr [0x10355918] */
  EAX = (r32((uint32_t)(0x10355918)));
  /* 10351912 mov dword ptr [0x103553f0], esi */
  w32((uint32_t)(0x103553f0), (ESI));
  /* 10351918 mov edi, esi */
  EDI = (ESI);
  /* 1035191a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1035191c je 0x10351920 */
  if (C.zf) goto L_10351920;
  /* 1035191e mov edi, eax */
  EDI = (EAX);
L_10351920:;
  /* 10351920 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10351923 push eax */
  push32((uint32_t)(EAX));
  /* 10351924 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10351927 push eax */
  push32((uint32_t)(EAX));
  /* 10351928 push ebx */
  push32((uint32_t)(EBX));
  /* 10351929 push ebx */
  push32((uint32_t)(EBX));
  /* 1035192a push edi */
  push32((uint32_t)(EDI));
  /* 1035192b call 0x1035197d */
  push32(0x10351930u); f_1035197d();
  /* 10351930 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10351933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10351936 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10351939 push eax */
  push32((uint32_t)(EAX));
  /* 1035193a call 0x10352080 */
  push32(0x1035193fu); f_10352080();
  /* 1035193f mov esi, eax */
  ESI = (EAX);
  /* 10351941 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10351944 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351946 jne 0x10351950 */
  if (!C.zf) goto L_10351950;
  /* 10351948 push 8 */
  push32((uint32_t)(0x8u));
  /* 1035194a call 0x103513a5 */
  push32(0x1035194fu); f_103513a5();
  /* 1035194f pop ecx */
  ECX = (pop32());
L_10351950:;
  /* 10351950 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10351953 push eax */
  push32((uint32_t)(EAX));
  /* 10351954 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10351957 push eax */
  push32((uint32_t)(EAX));
  /* 10351958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1035195b lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 1035195e push eax */
  push32((uint32_t)(EAX));
  /* 1035195f push esi */
  push32((uint32_t)(ESI));
  /* 10351960 push edi */
  push32((uint32_t)(EDI));
  /* 10351961 call 0x1035197d */
  push32(0x10351966u); f_1035197d();
  /* 10351966 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10351969 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1035196c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1035196d mov dword ptr [0x103553d8], esi */
  w32((uint32_t)(0x103553d8), (ESI));
  /* 10351973 pop edi */
  EDI = (pop32());
  /* 10351974 pop esi */
  ESI = (pop32());
  /* 10351975 mov dword ptr [0x103553d4], eax */
  w32((uint32_t)(0x103553d4), (EAX));
  /* 1035197a pop ebx */
  EBX = (pop32());
  /* 1035197b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1035197c ret  */
  ESPCHK(0x103518e4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000197d @ 0x1035197d (436 bytes, 187 insns) */
void f_1035197d(void) {
  FTRACE(0x1035197du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1035197d push ebp */
  push32((uint32_t)(EBP));
  /* 1035197e mov ebp, esp */
  EBP = (ESP);
  /* 10351980 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10351983 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10351986 push ebx */
  push32((uint32_t)(EBX));
  /* 10351987 push esi */
  push32((uint32_t)(ESI));
  /* 10351988 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1035198b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1035198e push edi */
  push32((uint32_t)(EDI));
  /* 1035198f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10351992 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10351998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1035199b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1035199d je 0x103519a7 */
  if (C.zf) goto L_103519a7;
  /* 1035199f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 103519a1 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103519a4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_103519a7:;
  /* 103519a7 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103519aa jne 0x103519f0 */
  if (!C.zf) goto L_103519f0;
L_103519ac:;
  /* 103519ac mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 103519af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103519b0 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103519b3 je 0x103519de */
  if (C.zf) goto L_103519de;
  /* 103519b5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103519b7 je 0x103519de */
  if (C.zf) goto L_103519de;
  /* 103519b9 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 103519bc test byte ptr [edx + 0x103556e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x103556e1)))&(0x4u); fl_logic(_r,8); }
  /* 103519c3 je 0x103519d1 */
  if (C.zf) goto L_103519d1;
  /* 103519c5 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103519c7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103519c9 je 0x103519d1 */
  if (C.zf) goto L_103519d1;
  /* 103519cb mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103519cd mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 103519cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103519d0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_103519d1:;
  /* 103519d1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103519d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103519d5 je 0x103519ac */
  if (C.zf) goto L_103519ac;
  /* 103519d7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103519d9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 103519db inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103519dc jmp 0x103519ac */
  goto L_103519ac;
L_103519de:;
  /* 103519de inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103519e0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103519e2 je 0x103519e8 */
  if (C.zf) goto L_103519e8;
  /* 103519e4 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 103519e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_103519e8:;
  /* 103519e8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103519eb jne 0x10351a33 */
  if (!C.zf) goto L_10351a33;
  /* 103519ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103519ee jmp 0x10351a33 */
  goto L_10351a33;
L_103519f0:;
  /* 103519f0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103519f2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103519f4 je 0x103519fb */
  if (C.zf) goto L_103519fb;
  /* 103519f6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103519f8 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 103519fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_103519fb:;
  /* 103519fb mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103519fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103519fe movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10351a01 test byte ptr [ebx + 0x103556e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x103556e1)))&(0x4u); fl_logic(_r,8); }
  /* 10351a08 je 0x10351a16 */
  if (C.zf) goto L_10351a16;
  /* 10351a0a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10351a0c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10351a0e je 0x10351a15 */
  if (C.zf) goto L_10351a15;
  /* 10351a10 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10351a12 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10351a14 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10351a15:;
  /* 10351a15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10351a16:;
  /* 10351a16 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351a19 je 0x10351a24 */
  if (C.zf) goto L_10351a24;
  /* 10351a1b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10351a1d je 0x10351a28 */
  if (C.zf) goto L_10351a28;
  /* 10351a1f cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351a22 jne 0x103519f0 */
  if (!C.zf) goto L_103519f0;
L_10351a24:;
  /* 10351a24 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10351a26 jne 0x10351a2b */
  if (!C.zf) goto L_10351a2b;
L_10351a28:;
  /* 10351a28 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10351a29 jmp 0x10351a33 */
  goto L_10351a33;
L_10351a2b:;
  /* 10351a2b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10351a2d je 0x10351a33 */
  if (C.zf) goto L_10351a33;
  /* 10351a2f and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10351a33:;
  /* 10351a33 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10351a37:;
  /* 10351a37 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351a3a je 0x10351b20 */
  if (C.zf) goto L_10351b20;
L_10351a40:;
  /* 10351a40 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10351a42 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351a45 je 0x10351a4c */
  if (C.zf) goto L_10351a4c;
  /* 10351a47 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351a4a jne 0x10351a4f */
  if (!C.zf) goto L_10351a4f;
L_10351a4c:;
  /* 10351a4c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351a4d jmp 0x10351a40 */
  goto L_10351a40;
L_10351a4f:;
  /* 10351a4f cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351a52 je 0x10351b20 */
  if (C.zf) goto L_10351b20;
  /* 10351a58 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10351a5a je 0x10351a64 */
  if (C.zf) goto L_10351a64;
  /* 10351a5c mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10351a5e add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10351a61 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10351a64:;
  /* 10351a64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10351a67 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10351a69:;
  /* 10351a69 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10351a70 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10351a72:;
  /* 10351a72 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351a75 jne 0x10351a7b */
  if (!C.zf) goto L_10351a7b;
  /* 10351a77 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351a78 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10351a79 jmp 0x10351a72 */
  goto L_10351a72;
L_10351a7b:;
  /* 10351a7b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351a7e jne 0x10351aac */
  if (!C.zf) goto L_10351aac;
  /* 10351a80 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10351a83 jne 0x10351aaa */
  if (!C.zf) goto L_10351aaa;
  /* 10351a85 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10351a87 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351a8a je 0x10351a99 */
  if (C.zf) goto L_10351a99;
  /* 10351a8c cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351a90 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10351a93 jne 0x10351a99 */
  if (!C.zf) goto L_10351a99;
  /* 10351a95 mov eax, edx */
  EAX = (EDX);
  /* 10351a97 jmp 0x10351a9c */
  goto L_10351a9c;
L_10351a99:;
  /* 10351a99 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10351a9c:;
  /* 10351a9c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10351a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10351aa1 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351aa4 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10351aa7 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10351aaa:;
  /* 10351aaa shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10351aac:;
  /* 10351aac mov edx, ebx */
  EDX = (EBX);
  /* 10351aae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10351aaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10351ab1 je 0x10351ac1 */
  if (C.zf) goto L_10351ac1;
  /* 10351ab3 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10351ab4:;
  /* 10351ab4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10351ab6 je 0x10351abc */
  if (C.zf) goto L_10351abc;
  /* 10351ab8 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10351abb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10351abc:;
  /* 10351abc inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10351abe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10351abf jne 0x10351ab4 */
  if (!C.zf) goto L_10351ab4;
L_10351ac1:;
  /* 10351ac1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10351ac3 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10351ac5 je 0x10351b11 */
  if (C.zf) goto L_10351b11;
  /* 10351ac7 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351acb jne 0x10351ad7 */
  if (!C.zf) goto L_10351ad7;
  /* 10351acd cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351ad0 je 0x10351b11 */
  if (C.zf) goto L_10351b11;
  /* 10351ad2 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351ad5 je 0x10351b11 */
  if (C.zf) goto L_10351b11;
L_10351ad7:;
  /* 10351ad7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351adb je 0x10351b0b */
  if (C.zf) goto L_10351b0b;
  /* 10351add test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10351adf je 0x10351afa */
  if (C.zf) goto L_10351afa;
  /* 10351ae1 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10351ae4 test byte ptr [ebx + 0x103556e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x103556e1)))&(0x4u); fl_logic(_r,8); }
  /* 10351aeb je 0x10351af3 */
  if (C.zf) goto L_10351af3;
  /* 10351aed mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10351aef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10351af0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351af1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10351af3:;
  /* 10351af3 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10351af5 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10351af7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10351af8 jmp 0x10351b09 */
  goto L_10351b09;
L_10351afa:;
  /* 10351afa movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10351afd test byte ptr [edx + 0x103556e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x103556e1)))&(0x4u); fl_logic(_r,8); }
  /* 10351b04 je 0x10351b09 */
  if (C.zf) goto L_10351b09;
  /* 10351b06 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351b07 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10351b09:;
  /* 10351b09 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10351b0b:;
  /* 10351b0b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351b0c jmp 0x10351a69 */
  goto L_10351a69;
L_10351b11:;
  /* 10351b11 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10351b13 je 0x10351b19 */
  if (C.zf) goto L_10351b19;
  /* 10351b15 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10351b18 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10351b19:;
  /* 10351b19 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10351b1b jmp 0x10351a37 */
  goto L_10351a37;
L_10351b20:;
  /* 10351b20 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10351b22 je 0x10351b27 */
  if (C.zf) goto L_10351b27;
  /* 10351b24 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10351b27:;
  /* 10351b27 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10351b2a pop edi */
  EDI = (pop32());
  /* 10351b2b pop esi */
  ESI = (pop32());
  /* 10351b2c pop ebx */
  EBX = (pop32());
  /* 10351b2d inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10351b2f pop ebp */
  EBP = (pop32());
  /* 10351b30 ret  */
  ESPCHK(0x1035197du, _esp0);
  ESP += 4; return;
}

/* FUN_10001b31 @ 0x10351b31 (306 bytes, 132 insns) */
void f_10351b31(void) {
  FTRACE(0x10351b31u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351b31 push ecx */
  push32((uint32_t)(ECX));
  /* 10351b32 push ecx */
  push32((uint32_t)(ECX));
  /* 10351b33 mov eax, dword ptr [0x10355508] */
  EAX = (r32((uint32_t)(0x10355508)));
  /* 10351b38 push ebx */
  push32((uint32_t)(EBX));
  /* 10351b39 push ebp */
  push32((uint32_t)(EBP));
  /* 10351b3a mov ebp, dword ptr [0x1035407c] */
  EBP = (r32((uint32_t)(0x1035407c)));
  /* 10351b40 push esi */
  push32((uint32_t)(ESI));
  /* 10351b41 push edi */
  push32((uint32_t)(EDI));
  /* 10351b42 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10351b44 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10351b46 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10351b48 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351b4a jne 0x10351b7f */
  if (!C.zf) goto L_10351b7f;
  /* 10351b4c call ebp */
  call_ind((uint32_t)(EBP), 0x10351b4eu);
  /* 10351b4e mov esi, eax */
  ESI = (EAX);
  /* 10351b50 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351b52 je 0x10351b60 */
  if (C.zf) goto L_10351b60;
  /* 10351b54 mov dword ptr [0x10355508], 1 */
  w32((uint32_t)(0x10355508), (0x1u));
  /* 10351b5e jmp 0x10351b88 */
  goto L_10351b88;
L_10351b60:;
  /* 10351b60 call dword ptr [0x10354078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354078))), 0x10351b66u);
  /* 10351b66 mov edi, eax */
  EDI = (EAX);
  /* 10351b68 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351b6a je 0x10351c5a */
  if (C.zf) goto L_10351c5a;
  /* 10351b70 mov dword ptr [0x10355508], 2 */
  w32((uint32_t)(0x10355508), (0x2u));
  /* 10351b7a jmp 0x10351c0e */
  goto L_10351c0e;
L_10351b7f:;
  /* 10351b7f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351b82 jne 0x10351c09 */
  if (!C.zf) goto L_10351c09;
L_10351b88:;
  /* 10351b88 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351b8a jne 0x10351b98 */
  if (!C.zf) goto L_10351b98;
  /* 10351b8c call ebp */
  call_ind((uint32_t)(EBP), 0x10351b8eu);
  /* 10351b8e mov esi, eax */
  ESI = (EAX);
  /* 10351b90 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351b92 je 0x10351c5a */
  if (C.zf) goto L_10351c5a;
L_10351b98:;
  /* 10351b98 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10351b9b mov eax, esi */
  EAX = (ESI);
  /* 10351b9d je 0x10351bad */
  if (C.zf) goto L_10351bad;
L_10351b9f:;
  /* 10351b9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351ba0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351ba1 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10351ba4 jne 0x10351b9f */
  if (!C.zf) goto L_10351b9f;
  /* 10351ba6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351ba7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351ba8 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10351bab jne 0x10351b9f */
  if (!C.zf) goto L_10351b9f;
L_10351bad:;
  /* 10351bad sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10351baf mov edi, dword ptr [0x10354074] */
  EDI = (r32((uint32_t)(0x10354074)));
  /* 10351bb5 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10351bb7 push ebx */
  push32((uint32_t)(EBX));
  /* 10351bb8 push ebx */
  push32((uint32_t)(EBX));
  /* 10351bb9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351bba push ebx */
  push32((uint32_t)(EBX));
  /* 10351bbb push ebx */
  push32((uint32_t)(EBX));
  /* 10351bbc push eax */
  push32((uint32_t)(EAX));
  /* 10351bbd push esi */
  push32((uint32_t)(ESI));
  /* 10351bbe push ebx */
  push32((uint32_t)(EBX));
  /* 10351bbf push ebx */
  push32((uint32_t)(EBX));
  /* 10351bc0 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10351bc4 call edi */
  call_ind((uint32_t)(EDI), 0x10351bc6u);
  /* 10351bc6 mov ebp, eax */
  EBP = (EAX);
  /* 10351bc8 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351bca je 0x10351bfe */
  if (C.zf) goto L_10351bfe;
  /* 10351bcc push ebp */
  push32((uint32_t)(EBP));
  /* 10351bcd call 0x10352080 */
  push32(0x10351bd2u); f_10352080();
  /* 10351bd2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351bd4 pop ecx */
  ECX = (pop32());
  /* 10351bd5 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10351bd9 je 0x10351bfe */
  if (C.zf) goto L_10351bfe;
  /* 10351bdb push ebx */
  push32((uint32_t)(EBX));
  /* 10351bdc push ebx */
  push32((uint32_t)(EBX));
  /* 10351bdd push ebp */
  push32((uint32_t)(EBP));
  /* 10351bde push eax */
  push32((uint32_t)(EAX));
  /* 10351bdf push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10351be3 push esi */
  push32((uint32_t)(ESI));
  /* 10351be4 push ebx */
  push32((uint32_t)(EBX));
  /* 10351be5 push ebx */
  push32((uint32_t)(EBX));
  /* 10351be6 call edi */
  call_ind((uint32_t)(EDI), 0x10351be8u);
  /* 10351be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351bea jne 0x10351bfa */
  if (!C.zf) goto L_10351bfa;
  /* 10351bec push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10351bf0 call 0x10352038 */
  push32(0x10351bf5u); f_10352038();
  /* 10351bf5 pop ecx */
  ECX = (pop32());
  /* 10351bf6 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10351bfa:;
  /* 10351bfa mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10351bfe:;
  /* 10351bfe push esi */
  push32((uint32_t)(ESI));
  /* 10351bff call dword ptr [0x10354070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354070))), 0x10351c05u);
  /* 10351c05 mov eax, ebx */
  EAX = (EBX);
  /* 10351c07 jmp 0x10351c5c */
  goto L_10351c5c;
L_10351c09:;
  /* 10351c09 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351c0c jne 0x10351c5a */
  if (!C.zf) goto L_10351c5a;
L_10351c0e:;
  /* 10351c0e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351c10 jne 0x10351c1e */
  if (!C.zf) goto L_10351c1e;
  /* 10351c12 call dword ptr [0x10354078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354078))), 0x10351c18u);
  /* 10351c18 mov edi, eax */
  EDI = (EAX);
  /* 10351c1a cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351c1c je 0x10351c5a */
  if (C.zf) goto L_10351c5a;
L_10351c1e:;
  /* 10351c1e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351c20 mov eax, edi */
  EAX = (EDI);
  /* 10351c22 je 0x10351c2e */
  if (C.zf) goto L_10351c2e;
L_10351c24:;
  /* 10351c24 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351c25 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351c27 jne 0x10351c24 */
  if (!C.zf) goto L_10351c24;
  /* 10351c29 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351c2a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10351c2c jne 0x10351c24 */
  if (!C.zf) goto L_10351c24;
L_10351c2e:;
  /* 10351c2e sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10351c30 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351c31 mov ebp, eax */
  EBP = (EAX);
  /* 10351c33 push ebp */
  push32((uint32_t)(EBP));
  /* 10351c34 call 0x10352080 */
  push32(0x10351c39u); f_10352080();
  /* 10351c39 mov esi, eax */
  ESI = (EAX);
  /* 10351c3b pop ecx */
  ECX = (pop32());
  /* 10351c3c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351c3e jne 0x10351c44 */
  if (!C.zf) goto L_10351c44;
  /* 10351c40 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10351c42 jmp 0x10351c4f */
  goto L_10351c4f;
L_10351c44:;
  /* 10351c44 push ebp */
  push32((uint32_t)(EBP));
  /* 10351c45 push edi */
  push32((uint32_t)(EDI));
  /* 10351c46 push esi */
  push32((uint32_t)(ESI));
  /* 10351c47 call 0x10352670 */
  push32(0x10351c4cu); f_10352670();
  /* 10351c4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10351c4f:;
  /* 10351c4f push edi */
  push32((uint32_t)(EDI));
  /* 10351c50 call dword ptr [0x10354004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354004))), 0x10351c56u);
  /* 10351c56 mov eax, esi */
  EAX = (ESI);
  /* 10351c58 jmp 0x10351c5c */
  goto L_10351c5c;
L_10351c5a:;
  /* 10351c5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10351c5c:;
  /* 10351c5c pop edi */
  EDI = (pop32());
  /* 10351c5d pop esi */
  ESI = (pop32());
  /* 10351c5e pop ebp */
  EBP = (pop32());
  /* 10351c5f pop ebx */
  EBX = (pop32());
  /* 10351c60 pop ecx */
  ECX = (pop32());
  /* 10351c61 pop ecx */
  ECX = (pop32());
  /* 10351c62 ret  */
  ESPCHK(0x10351b31u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c63 @ 0x10351c63 (60 bytes, 20 insns) */
void f_10351c63(void) {
  FTRACE(0x10351c63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351c63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10351c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10351c67 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351c6b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10351c70 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10351c73 push eax */
  push32((uint32_t)(EAX));
  /* 10351c74 call dword ptr [0x10354084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354084))), 0x10351c7au);
  /* 10351c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351c7c mov dword ptr [0x103557e8], eax */
  w32((uint32_t)(0x103557e8), (EAX));
  /* 10351c81 je 0x10351c98 */
  if (C.zf) goto L_10351c98;
  /* 10351c83 call 0x103529a5 */
  push32(0x10351c88u); f_103529a5();
  /* 10351c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351c8a jne 0x10351c9b */
  if (!C.zf) goto L_10351c9b;
  /* 10351c8c push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 10351c92 call dword ptr [0x10354080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354080))), 0x10351c98u);
L_10351c98:;
  /* 10351c98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10351c9a ret  */
  ESPCHK(0x10351c63u, _esp0);
  ESP += 4; return;
L_10351c9b:;
  /* 10351c9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10351c9d pop eax */
  EAX = (pop32());
  /* 10351c9e ret  */
  ESPCHK(0x10351c63u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c9f @ 0x10351c9f (117 bytes, 38 insns) */
void f_10351c9f(void) {
  FTRACE(0x10351c9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351c9f push ebx */
  push32((uint32_t)(EBX));
  /* 10351ca0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10351ca2 cmp dword ptr [0x103555c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x103555c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351ca8 push ebp */
  push32((uint32_t)(EBP));
  /* 10351ca9 mov ebp, dword ptr [0x1035408c] */
  EBP = (r32((uint32_t)(0x1035408c)));
  /* 10351caf jle 0x10351cf5 */
  if ((C.zf||C.sf!=C.of)) goto L_10351cf5;
  /* 10351cb1 mov eax, dword ptr [0x103555c4] */
  EAX = (r32((uint32_t)(0x103555c4)));
  /* 10351cb6 push esi */
  push32((uint32_t)(ESI));
  /* 10351cb7 push edi */
  push32((uint32_t)(EDI));
  /* 10351cb8 mov edi, dword ptr [0x10354088] */
  EDI = (r32((uint32_t)(0x10354088)));
  /* 10351cbe lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10351cc1:;
  /* 10351cc1 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10351cc6 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10351ccb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10351ccd call edi */
  call_ind((uint32_t)(EDI), 0x10351ccfu);
  /* 10351ccf push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10351cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10351cd6 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10351cd8 call edi */
  call_ind((uint32_t)(EDI), 0x10351cdau);
  /* 10351cda push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10351cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 10351cdf push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 10351ce5 call ebp */
  call_ind((uint32_t)(EBP), 0x10351ce7u);
  /* 10351ce7 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10351cea inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10351ceb cmp ebx, dword ptr [0x103555c0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x103555c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351cf1 jl 0x10351cc1 */
  if ((C.sf!=C.of)) goto L_10351cc1;
  /* 10351cf3 pop edi */
  EDI = (pop32());
  /* 10351cf4 pop esi */
  ESI = (pop32());
L_10351cf5:;
  /* 10351cf5 push dword ptr [0x103555c4] */
  push32((uint32_t)(r32((uint32_t)(0x103555c4))));
  /* 10351cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10351cfd push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 10351d03 call ebp */
  call_ind((uint32_t)(EBP), 0x10351d05u);
  /* 10351d05 push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 10351d0b call dword ptr [0x10354080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354080))), 0x10351d11u);
  /* 10351d11 pop ebp */
  EBP = (pop32());
  /* 10351d12 pop ebx */
  EBX = (pop32());
  /* 10351d13 ret  */
  ESPCHK(0x10351c9fu, _esp0);
  ESP += 4; return;
}

/* FUN_10001d14 @ 0x10351d14 (57 bytes, 18 insns) */
void f_10351d14(void) {
  FTRACE(0x10351d14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351d14 mov eax, dword ptr [0x103553b8] */
  EAX = (r32((uint32_t)(0x103553b8)));
  /* 10351d19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351d1c je 0x10351d2b */
  if (C.zf) goto L_10351d2b;
  /* 10351d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351d20 jne 0x10351d4c */
  if (!C.zf) goto L_10351d4c;
  /* 10351d22 cmp dword ptr [0x103553bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103553bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351d29 jne 0x10351d4c */
  if (!C.zf) goto L_10351d4c;
L_10351d2b:;
  /* 10351d2b push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10351d30 call 0x10351d4d */
  push32(0x10351d35u); f_10351d4d();
  /* 10351d35 mov eax, dword ptr [0x1035550c] */
  EAX = (r32((uint32_t)(0x1035550c)));
  /* 10351d3a pop ecx */
  ECX = (pop32());
  /* 10351d3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351d3d je 0x10351d41 */
  if (C.zf) goto L_10351d41;
  /* 10351d3f call eax */
  call_ind((uint32_t)(EAX), 0x10351d41u);
L_10351d41:;
  /* 10351d41 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10351d46 call 0x10351d4d */
  push32(0x10351d4bu); f_10351d4d();
  /* 10351d4b pop ecx */
  ECX = (pop32());
L_10351d4c:;
  /* 10351d4c ret  */
  ESPCHK(0x10351d14u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d4d @ 0x10351d4d (339 bytes, 100 insns) */
void f_10351d4d(void) {
  FTRACE(0x10351d4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351d4d push ebp */
  push32((uint32_t)(EBP));
  /* 10351d4e mov ebp, esp */
  EBP = (ESP);
  /* 10351d50 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10351d56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10351d59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10351d5b mov eax, 0x103550a0 */
  EAX = (0x103550a0u);
L_10351d60:;
  /* 10351d60 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351d62 je 0x10351d6f */
  if (C.zf) goto L_10351d6f;
  /* 10351d64 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10351d67 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10351d68 cmp eax, 0x10355130 */
  { uint32_t _a=(EAX),_b=(0x10355130u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351d6d jl 0x10351d60 */
  if ((C.sf!=C.of)) goto L_10351d60;
L_10351d6f:;
  /* 10351d6f push esi */
  push32((uint32_t)(ESI));
  /* 10351d70 mov esi, ecx */
  ESI = (ECX);
  /* 10351d72 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10351d75 cmp edx, dword ptr [esi + 0x103550a0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x103550a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351d7b jne 0x10351e9d */
  if (!C.zf) goto L_10351e9d;
  /* 10351d81 mov eax, dword ptr [0x103553b8] */
  EAX = (r32((uint32_t)(0x103553b8)));
  /* 10351d86 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351d89 je 0x10351e77 */
  if (C.zf) goto L_10351e77;
  /* 10351d8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351d91 jne 0x10351da0 */
  if (!C.zf) goto L_10351da0;
  /* 10351d93 cmp dword ptr [0x103553bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x103553bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351d9a je 0x10351e77 */
  if (C.zf) goto L_10351e77;
L_10351da0:;
  /* 10351da0 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351da6 je 0x10351e9d */
  if (C.zf) goto L_10351e9d;
  /* 10351dac lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10351db2 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10351db7 push eax */
  push32((uint32_t)(EAX));
  /* 10351db8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10351dba call dword ptr [0x10354000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354000))), 0x10351dc0u);
  /* 10351dc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351dc2 jne 0x10351dd7 */
  if (!C.zf) goto L_10351dd7;
  /* 10351dc4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10351dca push 0x103543c0 */
  push32((uint32_t)(0x103543c0u));
  /* 10351dcf push eax */
  push32((uint32_t)(EAX));
  /* 10351dd0 call 0x10352110 */
  push32(0x10351dd5u); f_10352110();
  /* 10351dd5 pop ecx */
  ECX = (pop32());
  /* 10351dd6 pop ecx */
  ECX = (pop32());
L_10351dd7:;
  /* 10351dd7 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10351ddd push edi */
  push32((uint32_t)(EDI));
  /* 10351dde push eax */
  push32((uint32_t)(EAX));
  /* 10351ddf lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10351de5 call 0x10352200 */
  push32(0x10351deau); f_10352200();
  /* 10351dea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10351deb pop ecx */
  ECX = (pop32());
  /* 10351dec cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351def jbe 0x10351e1a */
  if ((C.cf||C.zf)) goto L_10351e1a;
  /* 10351df1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10351df7 push eax */
  push32((uint32_t)(EAX));
  /* 10351df8 call 0x10352200 */
  push32(0x10351dfdu); f_10352200();
  /* 10351dfd mov edi, eax */
  EDI = (EAX);
  /* 10351dff lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10351e05 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10351e08 push 3 */
  push32((uint32_t)(0x3u));
  /* 10351e0a add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10351e0c push 0x103543bc */
  push32((uint32_t)(0x103543bcu));
  /* 10351e11 push edi */
  push32((uint32_t)(EDI));
  /* 10351e12 call 0x10353280 */
  push32(0x10351e17u); f_10353280();
  /* 10351e17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10351e1a:;
  /* 10351e1a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10351e20 push 0x103543a0 */
  push32((uint32_t)(0x103543a0u));
  /* 10351e25 push eax */
  push32((uint32_t)(EAX));
  /* 10351e26 call 0x10352110 */
  push32(0x10351e2bu); f_10352110();
  /* 10351e2b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10351e31 push edi */
  push32((uint32_t)(EDI));
  /* 10351e32 push eax */
  push32((uint32_t)(EAX));
  /* 10351e33 call 0x10352120 */
  push32(0x10351e38u); f_10352120();
  /* 10351e38 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10351e3e push 0x1035439c */
  push32((uint32_t)(0x1035439cu));
  /* 10351e43 push eax */
  push32((uint32_t)(EAX));
  /* 10351e44 call 0x10352120 */
  push32(0x10351e49u); f_10352120();
  /* 10351e49 push dword ptr [esi + 0x103550a4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x103550a4))));
  /* 10351e4f lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10351e55 push eax */
  push32((uint32_t)(EAX));
  /* 10351e56 call 0x10352120 */
  push32(0x10351e5bu); f_10352120();
  /* 10351e5b push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10351e60 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10351e66 push 0x10354374 */
  push32((uint32_t)(0x10354374u));
  /* 10351e6b push eax */
  push32((uint32_t)(EAX));
  /* 10351e6c call 0x103531ee */
  push32(0x10351e71u); f_103531ee();
  /* 10351e71 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10351e74 pop edi */
  EDI = (pop32());
  /* 10351e75 jmp 0x10351e9d */
  goto L_10351e9d;
L_10351e77:;
  /* 10351e77 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10351e7a lea esi, [esi + 0x103550a4] */
  ESI = ((uint32_t)(ESI + 0x103550a4));
  /* 10351e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10351e82 push eax */
  push32((uint32_t)(EAX));
  /* 10351e83 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10351e85 call 0x10352200 */
  push32(0x10351e8au); f_10352200();
  /* 10351e8a pop ecx */
  ECX = (pop32());
  /* 10351e8b push eax */
  push32((uint32_t)(EAX));
  /* 10351e8c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10351e8e push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10351e90 call dword ptr [0x1035405c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035405c))), 0x10351e96u);
  /* 10351e96 push eax */
  push32((uint32_t)(EAX));
  /* 10351e97 call dword ptr [0x1035406c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035406c))), 0x10351e9du);
L_10351e9d:;
  /* 10351e9d pop esi */
  ESI = (pop32());
  /* 10351e9e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10351e9f ret  */
  ESPCHK(0x10351d4du, _esp0);
  ESP += 4; return;
}

/* FUN_10001ea0 @ 0x10351ea0 (41 bytes, 12 insns) */
void f_10351ea0(void) {
  FTRACE(0x10351ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351ea0 push esi */
  push32((uint32_t)(ESI));
  /* 10351ea1 mov esi, dword ptr [0x10354094] */
  ESI = (r32((uint32_t)(0x10354094)));
  /* 10351ea7 push dword ptr [0x10355174] */
  push32((uint32_t)(r32((uint32_t)(0x10355174))));
  /* 10351ead call esi */
  call_ind((uint32_t)(ESI), 0x10351eafu);
  /* 10351eaf push dword ptr [0x10355164] */
  push32((uint32_t)(r32((uint32_t)(0x10355164))));
  /* 10351eb5 call esi */
  call_ind((uint32_t)(ESI), 0x10351eb7u);
  /* 10351eb7 push dword ptr [0x10355154] */
  push32((uint32_t)(r32((uint32_t)(0x10355154))));
  /* 10351ebd call esi */
  call_ind((uint32_t)(ESI), 0x10351ebfu);
  /* 10351ebf push dword ptr [0x10355134] */
  push32((uint32_t)(r32((uint32_t)(0x10355134))));
  /* 10351ec5 call esi */
  call_ind((uint32_t)(ESI), 0x10351ec7u);
  /* 10351ec7 pop esi */
  ESI = (pop32());
  /* 10351ec8 ret  */
  ESPCHK(0x10351ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ec9 @ 0x10351ec9 (108 bytes, 34 insns) */
void f_10351ec9(void) {
  FTRACE(0x10351ec9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351ec9 push esi */
  push32((uint32_t)(ESI));
  /* 10351eca push edi */
  push32((uint32_t)(EDI));
  /* 10351ecb mov edi, dword ptr [0x10354068] */
  EDI = (r32((uint32_t)(0x10354068)));
  /* 10351ed1 mov esi, 0x10355130 */
  ESI = (0x10355130u);
L_10351ed6:;
  /* 10351ed6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10351ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10351eda je 0x10351f07 */
  if (C.zf) goto L_10351f07;
  /* 10351edc cmp esi, 0x10355174 */
  { uint32_t _a=(ESI),_b=(0x10355174u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351ee2 je 0x10351f07 */
  if (C.zf) goto L_10351f07;
  /* 10351ee4 cmp esi, 0x10355164 */
  { uint32_t _a=(ESI),_b=(0x10355164u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351eea je 0x10351f07 */
  if (C.zf) goto L_10351f07;
  /* 10351eec cmp esi, 0x10355154 */
  { uint32_t _a=(ESI),_b=(0x10355154u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351ef2 je 0x10351f07 */
  if (C.zf) goto L_10351f07;
  /* 10351ef4 cmp esi, 0x10355134 */
  { uint32_t _a=(ESI),_b=(0x10355134u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351efa je 0x10351f07 */
  if (C.zf) goto L_10351f07;
  /* 10351efc push eax */
  push32((uint32_t)(EAX));
  /* 10351efd call edi */
  call_ind((uint32_t)(EDI), 0x10351effu);
  /* 10351eff push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10351f01 call 0x10352038 */
  push32(0x10351f06u); f_10352038();
  /* 10351f06 pop ecx */
  ECX = (pop32());
L_10351f07:;
  /* 10351f07 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10351f0a cmp esi, 0x103551f0 */
  { uint32_t _a=(ESI),_b=(0x103551f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351f10 jl 0x10351ed6 */
  if ((C.sf!=C.of)) goto L_10351ed6;
  /* 10351f12 push dword ptr [0x10355154] */
  push32((uint32_t)(r32((uint32_t)(0x10355154))));
  /* 10351f18 call edi */
  call_ind((uint32_t)(EDI), 0x10351f1au);
  /* 10351f1a push dword ptr [0x10355164] */
  push32((uint32_t)(r32((uint32_t)(0x10355164))));
  /* 10351f20 call edi */
  call_ind((uint32_t)(EDI), 0x10351f22u);
  /* 10351f22 push dword ptr [0x10355174] */
  push32((uint32_t)(r32((uint32_t)(0x10355174))));
  /* 10351f28 call edi */
  call_ind((uint32_t)(EDI), 0x10351f2au);
  /* 10351f2a push dword ptr [0x10355134] */
  push32((uint32_t)(r32((uint32_t)(0x10355134))));
  /* 10351f30 call edi */
  call_ind((uint32_t)(EDI), 0x10351f32u);
  /* 10351f32 pop edi */
  EDI = (pop32());
  /* 10351f33 pop esi */
  ESI = (pop32());
  /* 10351f34 ret  */
  ESPCHK(0x10351ec9u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f35 @ 0x10351f35 (97 bytes, 37 insns) */
void f_10351f35(void) {
  FTRACE(0x10351f35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351f35 push ebp */
  push32((uint32_t)(EBP));
  /* 10351f36 mov ebp, esp */
  EBP = (ESP);
  /* 10351f38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10351f3b push esi */
  push32((uint32_t)(ESI));
  /* 10351f3c cmp dword ptr [eax*4 + 0x10355130], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10355130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351f44 lea esi, [eax*4 + 0x10355130] */
  ESI = ((uint32_t)(EAX*4 + 0x10355130));
  /* 10351f4b jne 0x10351f8b */
  if (!C.zf) goto L_10351f8b;
  /* 10351f4d push edi */
  push32((uint32_t)(EDI));
  /* 10351f4e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10351f50 call 0x10352080 */
  push32(0x10351f55u); f_10352080();
  /* 10351f55 mov edi, eax */
  EDI = (EAX);
  /* 10351f57 pop ecx */
  ECX = (pop32());
  /* 10351f58 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10351f5a jne 0x10351f64 */
  if (!C.zf) goto L_10351f64;
  /* 10351f5c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10351f5e call 0x103513a5 */
  push32(0x10351f63u); f_103513a5();
  /* 10351f63 pop ecx */
  ECX = (pop32());
L_10351f64:;
  /* 10351f64 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10351f66 call 0x10351f35 */
  push32(0x10351f6bu); f_10351f35();
  /* 10351f6b cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351f6e pop ecx */
  ECX = (pop32());
  /* 10351f6f push edi */
  push32((uint32_t)(EDI));
  /* 10351f70 jne 0x10351f7c */
  if (!C.zf) goto L_10351f7c;
  /* 10351f72 call dword ptr [0x10354094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354094))), 0x10351f78u);
  /* 10351f78 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10351f7a jmp 0x10351f82 */
  goto L_10351f82;
L_10351f7c:;
  /* 10351f7c call 0x10352038 */
  push32(0x10351f81u); f_10352038();
  /* 10351f81 pop ecx */
  ECX = (pop32());
L_10351f82:;
  /* 10351f82 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10351f84 call 0x10351f96 */
  push32(0x10351f89u); f_10351f96();
  /* 10351f89 pop ecx */
  ECX = (pop32());
  /* 10351f8a pop edi */
  EDI = (pop32());
L_10351f8b:;
  /* 10351f8b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10351f8d call dword ptr [0x10354098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354098))), 0x10351f93u);
  /* 10351f93 pop esi */
  ESI = (pop32());
  /* 10351f94 pop ebp */
  EBP = (pop32());
  /* 10351f95 ret  */
  ESPCHK(0x10351f35u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f96 @ 0x10351f96 (21 bytes, 7 insns) */
void f_10351f96(void) {
  FTRACE(0x10351f96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351f96 push ebp */
  push32((uint32_t)(EBP));
  /* 10351f97 mov ebp, esp */
  EBP = (ESP);
  /* 10351f99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10351f9c push dword ptr [eax*4 + 0x10355130] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10355130))));
  /* 10351fa3 call dword ptr [0x1035409c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035409c))), 0x10351fa9u);
  /* 10351fa9 pop ebp */
  EBP = (pop32());
  /* 10351faa ret  */
  ESPCHK(0x10351f96u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fab @ 0x10351fab (141 bytes, 56 insns) */
void f_10351fab(void) {
  FTRACE(0x10351fabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10351fab push ebx */
  push32((uint32_t)(EBX));
  /* 10351fac push esi */
  push32((uint32_t)(ESI));
  /* 10351fad mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10351fb1 push edi */
  push32((uint32_t)(EDI));
  /* 10351fb2 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10351fb7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351fba mov ebx, esi */
  EBX = (ESI);
  /* 10351fbc ja 0x10351fcb */
  if ((!C.cf&&!C.zf)) goto L_10351fcb;
  /* 10351fbe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10351fc0 jne 0x10351fc5 */
  if (!C.zf) goto L_10351fc5;
  /* 10351fc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10351fc4 pop esi */
  ESI = (pop32());
L_10351fc5:;
  /* 10351fc5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10351fc8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10351fcb:;
  /* 10351fcb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10351fcd cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351fd0 ja 0x1035200c */
  if ((!C.cf&&!C.zf)) goto L_1035200c;
  /* 10351fd2 cmp ebx, dword ptr [0x10355380] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10355380))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10351fd8 ja 0x10351ff7 */
  if ((!C.cf&&!C.zf)) goto L_10351ff7;
  /* 10351fda push 9 */
  push32((uint32_t)(0x9u));
  /* 10351fdc call 0x10351f35 */
  push32(0x10351fe1u); f_10351f35();
  /* 10351fe1 push ebx */
  push32((uint32_t)(EBX));
  /* 10351fe2 call 0x10352d39 */
  push32(0x10351fe7u); f_10352d39();
  /* 10351fe7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10351fe9 mov edi, eax */
  EDI = (EAX);
  /* 10351feb call 0x10351f96 */
  push32(0x10351ff0u); f_10351f96();
  /* 10351ff0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10351ff3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10351ff5 jne 0x10352022 */
  if (!C.zf) goto L_10352022;
L_10351ff7:;
  /* 10351ff7 push esi */
  push32((uint32_t)(ESI));
  /* 10351ff8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10351ffa push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 10352000 call dword ptr [0x10354090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354090))), 0x10352006u);
  /* 10352006 mov edi, eax */
  EDI = (EAX);
  /* 10352008 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1035200a jne 0x1035202e */
  if (!C.zf) goto L_1035202e;
L_1035200c:;
  /* 1035200c cmp dword ptr [0x10355584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10355584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352013 je 0x1035202e */
  if (C.zf) goto L_1035202e;
  /* 10352015 push esi */
  push32((uint32_t)(ESI));
  /* 10352016 call 0x103533d8 */
  push32(0x1035201bu); f_103533d8();
  /* 1035201b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035201d pop ecx */
  ECX = (pop32());
  /* 1035201e je 0x10352034 */
  if (C.zf) goto L_10352034;
  /* 10352020 jmp 0x10351fcb */
  goto L_10351fcb;
L_10352022:;
  /* 10352022 push ebx */
  push32((uint32_t)(EBX));
  /* 10352023 push 0 */
  push32((uint32_t)(0x0u));
  /* 10352025 push edi */
  push32((uint32_t)(EDI));
  /* 10352026 call 0x10353380 */
  push32(0x1035202bu); f_10353380();
  /* 1035202b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1035202e:;
  /* 1035202e mov eax, edi */
  EAX = (EDI);
L_10352030:;
  /* 10352030 pop edi */
  EDI = (pop32());
  /* 10352031 pop esi */
  ESI = (pop32());
  /* 10352032 pop ebx */
  EBX = (pop32());
  /* 10352033 ret  */
  ESPCHK(0x10351fabu, _esp0);
  ESP += 4; return;
L_10352034:;
  /* 10352034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10352036 jmp 0x10352030 */
  goto L_10352030;
}

/* FUN_10002038 @ 0x10352038 (72 bytes, 29 insns) */
void f_10352038(void) {
  FTRACE(0x10352038u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352038 push esi */
  push32((uint32_t)(ESI));
  /* 10352039 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1035203d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1035203f je 0x1035207e */
  if (C.zf) goto L_1035207e;
  /* 10352041 push 9 */
  push32((uint32_t)(0x9u));
  /* 10352043 call 0x10351f35 */
  push32(0x10352048u); f_10351f35();
  /* 10352048 push esi */
  push32((uint32_t)(ESI));
  /* 10352049 call 0x103529e3 */
  push32(0x1035204eu); f_103529e3();
  /* 1035204e pop ecx */
  ECX = (pop32());
  /* 1035204f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10352051 pop ecx */
  ECX = (pop32());
  /* 10352052 je 0x10352067 */
  if (C.zf) goto L_10352067;
  /* 10352054 push esi */
  push32((uint32_t)(ESI));
  /* 10352055 push eax */
  push32((uint32_t)(EAX));
  /* 10352056 call 0x10352a0e */
  push32(0x1035205bu); f_10352a0e();
  /* 1035205b push 9 */
  push32((uint32_t)(0x9u));
  /* 1035205d call 0x10351f96 */
  push32(0x10352062u); f_10351f96();
  /* 10352062 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10352065 pop esi */
  ESI = (pop32());
  /* 10352066 ret  */
  ESPCHK(0x10352038u, _esp0);
  ESP += 4; return;
L_10352067:;
  /* 10352067 push 9 */
  push32((uint32_t)(0x9u));
  /* 10352069 call 0x10351f96 */
  push32(0x1035206eu); f_10351f96();
  /* 1035206e pop ecx */
  ECX = (pop32());
  /* 1035206f push esi */
  push32((uint32_t)(ESI));
  /* 10352070 push 0 */
  push32((uint32_t)(0x0u));
  /* 10352072 push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 10352078 call dword ptr [0x1035408c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035408c))), 0x1035207eu);
L_1035207e:;
  /* 1035207e pop esi */
  ESI = (pop32());
  /* 1035207f ret  */
  ESPCHK(0x10352038u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10352080 (18 bytes, 6 insns) */
void f_10352080(void) {
  FTRACE(0x10352080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352080 push dword ptr [0x10355584] */
  push32((uint32_t)(r32((uint32_t)(0x10355584))));
  /* 10352086 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1035208a call 0x10352092 */
  push32(0x1035208fu); f_10352092();
  /* 1035208f pop ecx */
  ECX = (pop32());
  /* 10352090 pop ecx */
  ECX = (pop32());
  /* 10352091 ret  */
  ESPCHK(0x10352080u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10352092 (44 bytes, 16 insns) */
void f_10352092(void) {
  FTRACE(0x10352092u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352092 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352097 ja 0x103520bb */
  if ((!C.cf&&!C.zf)) goto L_103520bb;
L_10352099:;
  /* 10352099 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1035209d call 0x103520be */
  push32(0x103520a2u); f_103520be();
  /* 103520a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103520a4 pop ecx */
  ECX = (pop32());
  /* 103520a5 jne 0x103520bd */
  if (!C.zf) goto L_103520bd;
  /* 103520a7 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103520ab je 0x103520bd */
  if (C.zf) goto L_103520bd;
  /* 103520ad push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 103520b1 call 0x103533d8 */
  push32(0x103520b6u); f_103533d8();
  /* 103520b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103520b8 pop ecx */
  ECX = (pop32());
  /* 103520b9 jne 0x10352099 */
  if (!C.zf) goto L_10352099;
L_103520bb:;
  /* 103520bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103520bd:;
  /* 103520bd ret  */
  ESPCHK(0x10352092u, _esp0);
  ESP += 4; return;
}

/* FUN_100020be @ 0x103520be (78 bytes, 30 insns) */
void f_103520be(void) {
  FTRACE(0x103520beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103520be push esi */
  push32((uint32_t)(ESI));
  /* 103520bf mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 103520c3 cmp esi, dword ptr [0x10355380] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10355380))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103520c9 push edi */
  push32((uint32_t)(EDI));
  /* 103520ca ja 0x103520ed */
  if ((!C.cf&&!C.zf)) goto L_103520ed;
  /* 103520cc push 9 */
  push32((uint32_t)(0x9u));
  /* 103520ce call 0x10351f35 */
  push32(0x103520d3u); f_10351f35();
  /* 103520d3 push esi */
  push32((uint32_t)(ESI));
  /* 103520d4 call 0x10352d39 */
  push32(0x103520d9u); f_10352d39();
  /* 103520d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 103520db mov edi, eax */
  EDI = (EAX);
  /* 103520dd call 0x10351f96 */
  push32(0x103520e2u); f_10351f96();
  /* 103520e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103520e5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103520e7 je 0x103520ed */
  if (C.zf) goto L_103520ed;
  /* 103520e9 mov eax, edi */
  EAX = (EDI);
  /* 103520eb jmp 0x10352109 */
  goto L_10352109;
L_103520ed:;
  /* 103520ed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103520ef jne 0x103520f4 */
  if (!C.zf) goto L_103520f4;
  /* 103520f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103520f3 pop esi */
  ESI = (pop32());
L_103520f4:;
  /* 103520f4 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103520f7 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 103520fa push esi */
  push32((uint32_t)(ESI));
  /* 103520fb push 0 */
  push32((uint32_t)(0x0u));
  /* 103520fd push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 10352103 call dword ptr [0x10354090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354090))), 0x10352109u);
L_10352109:;
  /* 10352109 pop edi */
  EDI = (pop32());
  /* 1035210a pop esi */
  ESI = (pop32());
  /* 1035210b ret  */
  ESPCHK(0x103520beu, _esp0);
  ESP += 4; return;
}

/* FUN_10002110 @ 0x10352110 (7 bytes, 3 insns) */
void f_10352110(void) {
  FTRACE(0x10352110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352110 push edi */
  push32((uint32_t)(EDI));
  /* 10352111 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10352115 jmp 0x10352181 */
  jmp_ind(0x10352181u); return;
}

/* FUN_10002120 @ 0x10352120 (224 bytes, 84 insns) */
void f_10352120(void) {
  FTRACE(0x10352120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352120 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10352124 push edi */
  push32((uint32_t)(EDI));
  /* 10352125 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1035212b je 0x1035213c */
  if (C.zf) goto L_1035213c;
L_1035212d:;
  /* 1035212d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1035212f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10352130 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10352132 je 0x1035216f */
  if (C.zf) goto L_1035216f;
  /* 10352134 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1035213a jne 0x1035212d */
  if (!C.zf) goto L_1035212d;
L_1035213c:;
  /* 1035213c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1035213e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10352143 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352145 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10352148 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1035214a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1035214d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10352152 je 0x1035213c */
  if (C.zf) goto L_1035213c;
  /* 10352154 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10352157 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10352159 je 0x1035217e */
  if (C.zf) goto L_1035217e;
  /* 1035215b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1035215d je 0x10352179 */
  if (C.zf) goto L_10352179;
  /* 1035215f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10352164 je 0x10352174 */
  if (C.zf) goto L_10352174;
  /* 10352166 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1035216b je 0x1035216f */
  if (C.zf) goto L_1035216f;
  /* 1035216d jmp 0x1035213c */
  goto L_1035213c;
L_1035216f:;
  /* 1035216f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10352172 jmp 0x10352181 */
  goto L_10352181;
L_10352174:;
  /* 10352174 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10352177 jmp 0x10352181 */
  goto L_10352181;
L_10352179:;
  /* 10352179 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1035217c jmp 0x10352181 */
  goto L_10352181;
L_1035217e:;
  /* 1035217e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10352181:;
  /* 10352181 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10352185 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1035218b je 0x103521a6 */
  if (C.zf) goto L_103521a6;
L_1035218d:;
  /* 1035218d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1035218f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10352190 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10352192 je 0x103521f8 */
  if (C.zf) goto L_103521f8;
  /* 10352194 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10352196 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10352197 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1035219d jne 0x1035218d */
  if (!C.zf) goto L_1035218d;
  /* 1035219f jmp 0x103521a6 */
  goto L_103521a6;
L_103521a1:;
  /* 103521a1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103521a3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103521a6:;
  /* 103521a6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103521ab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103521ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103521af xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103521b2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103521b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103521b6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103521b9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103521be je 0x103521a1 */
  if (C.zf) goto L_103521a1;
  /* 103521c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103521c2 je 0x103521f8 */
  if (C.zf) goto L_103521f8;
  /* 103521c4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 103521c6 je 0x103521ef */
  if (C.zf) goto L_103521ef;
  /* 103521c8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 103521ce je 0x103521e2 */
  if (C.zf) goto L_103521e2;
  /* 103521d0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 103521d6 je 0x103521da */
  if (C.zf) goto L_103521da;
  /* 103521d8 jmp 0x103521a1 */
  goto L_103521a1;
L_103521da:;
  /* 103521da mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103521dc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103521e0 pop edi */
  EDI = (pop32());
  /* 103521e1 ret  */
  ESPCHK(0x10352120u, _esp0);
  ESP += 4; return;
L_103521e2:;
  /* 103521e2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 103521e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103521e9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 103521ed pop edi */
  EDI = (pop32());
  /* 103521ee ret  */
  ESPCHK(0x10352120u, _esp0);
  ESP += 4; return;
L_103521ef:;
  /* 103521ef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 103521f2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103521f6 pop edi */
  EDI = (pop32());
  /* 103521f7 ret  */
  ESPCHK(0x10352120u, _esp0);
  ESP += 4; return;
L_103521f8:;
  /* 103521f8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 103521fa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103521fe pop edi */
  EDI = (pop32());
  /* 103521ff ret  */
  ESPCHK(0x10352120u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10352200 (123 bytes, 44 insns) */
void f_10352200(void) {
  FTRACE(0x10352200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352200 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10352204 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1035220a je 0x10352220 */
  if (C.zf) goto L_10352220;
L_1035220c:;
  /* 1035220c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1035220e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1035220f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10352211 je 0x10352253 */
  if (C.zf) goto L_10352253;
  /* 10352213 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10352219 jne 0x1035220c */
  if (!C.zf) goto L_1035220c;
  /* 1035221b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10352220:;
  /* 10352220 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10352222 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10352227 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352229 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1035222c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1035222e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352231 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10352236 je 0x10352220 */
  if (C.zf) goto L_10352220;
  /* 10352238 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1035223b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1035223d je 0x10352271 */
  if (C.zf) goto L_10352271;
  /* 1035223f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10352241 je 0x10352267 */
  if (C.zf) goto L_10352267;
  /* 10352243 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10352248 je 0x1035225d */
  if (C.zf) goto L_1035225d;
  /* 1035224a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1035224f je 0x10352253 */
  if (C.zf) goto L_10352253;
  /* 10352251 jmp 0x10352220 */
  goto L_10352220;
L_10352253:;
  /* 10352253 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10352256 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1035225a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035225c ret  */
  ESPCHK(0x10352200u, _esp0);
  ESP += 4; return;
L_1035225d:;
  /* 1035225d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10352260 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10352264 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352266 ret  */
  ESPCHK(0x10352200u, _esp0);
  ESP += 4; return;
L_10352267:;
  /* 10352267 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1035226a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1035226e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352270 ret  */
  ESPCHK(0x10352200u, _esp0);
  ESP += 4; return;
L_10352271:;
  /* 10352271 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10352274 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10352278 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035227a ret  */
  ESPCHK(0x10352200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000227b @ 0x1035227b (429 bytes, 143 insns) */
void f_1035227b(void) {
  FTRACE(0x1035227bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1035227b push ebp */
  push32((uint32_t)(EBP));
  /* 1035227c mov ebp, esp */
  EBP = (ESP);
  /* 1035227e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352281 push ebx */
  push32((uint32_t)(EBX));
  /* 10352282 push esi */
  push32((uint32_t)(ESI));
  /* 10352283 push edi */
  push32((uint32_t)(EDI));
  /* 10352284 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10352286 call 0x10351f35 */
  push32(0x1035228bu); f_10351f35();
  /* 1035228b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1035228e call 0x10352428 */
  push32(0x10352293u); f_10352428();
  /* 10352293 mov ebx, eax */
  EBX = (EAX);
  /* 10352295 pop ecx */
  ECX = (pop32());
  /* 10352296 cmp ebx, dword ptr [0x103555c8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x103555c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035229c pop ecx */
  ECX = (pop32());
  /* 1035229d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 103522a0 jne 0x103522a9 */
  if (!C.zf) goto L_103522a9;
L_103522a2:;
  /* 103522a2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103522a4 jmp 0x10352419 */
  goto L_10352419;
L_103522a9:;
  /* 103522a9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 103522ab je 0x10352407 */
  if (C.zf) goto L_10352407;
  /* 103522b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103522b3 mov eax, 0x10355288 */
  EAX = (0x10355288u);
L_103522b8:;
  /* 103522b8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103522ba je 0x10352330 */
  if (C.zf) goto L_10352330;
  /* 103522bc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103522bf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103522c0 cmp eax, 0x10355378 */
  { uint32_t _a=(EAX),_b=(0x10355378u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103522c5 jl 0x103522b8 */
  if ((C.sf!=C.of)) goto L_103522b8;
  /* 103522c7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 103522ca push eax */
  push32((uint32_t)(EAX));
  /* 103522cb push ebx */
  push32((uint32_t)(EBX));
  /* 103522cc call dword ptr [0x103540a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540a0))), 0x103522d2u);
  /* 103522d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103522d4 pop esi */
  ESI = (pop32());
  /* 103522d5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103522d7 jne 0x103523fe */
  if (!C.zf) goto L_103523fe;
  /* 103522dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103522df and dword ptr [0x103557e4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103557e4)))&(0x0u); w32((uint32_t)(0x103557e4), (_r)); fl_logic(_r,32); }
  /* 103522e6 pop ecx */
  ECX = (pop32());
  /* 103522e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103522e9 mov edi, 0x103556e0 */
  EDI = (0x103556e0u);
  /* 103522ee cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103522f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103522f3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103522f4 mov dword ptr [0x103555c8], ebx */
  w32((uint32_t)(0x103555c8), (EBX));
  /* 103522fa jbe 0x103523eb */
  if ((C.cf||C.zf)) goto L_103523eb;
  /* 10352300 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10352304 je 0x103523c6 */
  if (C.zf) goto L_103523c6;
  /* 1035230a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1035230d:;
  /* 1035230d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1035230f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10352311 je 0x103523c6 */
  if (C.zf) goto L_103523c6;
  /* 10352317 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1035231b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1035231e:;
  /* 1035231e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352320 ja 0x103523ba */
  if ((!C.cf&&!C.zf)) goto L_103523ba;
  /* 10352326 or byte ptr [eax + 0x103556e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103556e1)))|(0x4u); w8((uint32_t)(EAX + 0x103556e1), (_r)); fl_logic(_r,8); }
  /* 1035232d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1035232e jmp 0x1035231e */
  goto L_1035231e;
L_10352330:;
  /* 10352330 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10352334 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10352336 pop ecx */
  ECX = (pop32());
  /* 10352337 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10352339 mov edi, 0x103556e0 */
  EDI = (0x103556e0u);
  /* 1035233e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10352341 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10352343 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10352346 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10352347 lea ebx, [esi + 0x10355298] */
  EBX = ((uint32_t)(ESI + 0x10355298));
L_1035234d:;
  /* 1035234d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10352350 mov ecx, ebx */
  ECX = (EBX);
  /* 10352352 je 0x10352380 */
  if (C.zf) goto L_10352380;
L_10352354:;
  /* 10352354 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10352357 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10352359 je 0x10352380 */
  if (C.zf) goto L_10352380;
  /* 1035235b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1035235e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10352361 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352363 ja 0x10352379 */
  if ((!C.cf&&!C.zf)) goto L_10352379;
  /* 10352365 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10352368 mov dl, byte ptr [edx + 0x10355280] */
  DL = (r8((uint32_t)(EDX + 0x10355280)));
L_1035236e:;
  /* 1035236e or byte ptr [eax + 0x103556e1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103556e1)))|(DL); w8((uint32_t)(EAX + 0x103556e1), (_r)); fl_logic(_r,8); }
  /* 10352374 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10352375 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352377 jbe 0x1035236e */
  if ((C.cf||C.zf)) goto L_1035236e;
L_10352379:;
  /* 10352379 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1035237a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1035237b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1035237e jne 0x10352354 */
  if (!C.zf) goto L_10352354;
L_10352380:;
  /* 10352380 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10352383 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352386 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035238a jb 0x1035234d */
  if (C.cf) goto L_1035234d;
  /* 1035238c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1035238f mov dword ptr [0x103555dc], 1 */
  w32((uint32_t)(0x103555dc), (0x1u));
  /* 10352399 push eax */
  push32((uint32_t)(EAX));
  /* 1035239a mov dword ptr [0x103555c8], eax */
  w32((uint32_t)(0x103555c8), (EAX));
  /* 1035239f call 0x10352472 */
  push32(0x103523a4u); f_10352472();
  /* 103523a4 lea esi, [esi + 0x1035528c] */
  ESI = ((uint32_t)(ESI + 0x1035528c));
  /* 103523aa mov edi, 0x103555d0 */
  EDI = (0x103555d0u);
  /* 103523af movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 103523b0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 103523b1 pop ecx */
  ECX = (pop32());
  /* 103523b2 mov dword ptr [0x103557e4], eax */
  w32((uint32_t)(0x103557e4), (EAX));
  /* 103523b7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 103523b8 jmp 0x1035240c */
  goto L_1035240c;
L_103523ba:;
  /* 103523ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103523bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103523bc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103523c0 jne 0x1035230d */
  if (!C.zf) goto L_1035230d;
L_103523c6:;
  /* 103523c6 mov eax, esi */
  EAX = (ESI);
L_103523c8:;
  /* 103523c8 or byte ptr [eax + 0x103556e1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103556e1)))|(0x8u); w8((uint32_t)(EAX + 0x103556e1), (_r)); fl_logic(_r,8); }
  /* 103523cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103523d0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103523d5 jb 0x103523c8 */
  if (C.cf) goto L_103523c8;
  /* 103523d7 push ebx */
  push32((uint32_t)(EBX));
  /* 103523d8 call 0x10352472 */
  push32(0x103523ddu); f_10352472();
  /* 103523dd pop ecx */
  ECX = (pop32());
  /* 103523de mov dword ptr [0x103557e4], eax */
  w32((uint32_t)(0x103557e4), (EAX));
  /* 103523e3 mov dword ptr [0x103555dc], esi */
  w32((uint32_t)(0x103555dc), (ESI));
  /* 103523e9 jmp 0x103523f2 */
  goto L_103523f2;
L_103523eb:;
  /* 103523eb and dword ptr [0x103555dc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103555dc)))&(0x0u); w32((uint32_t)(0x103555dc), (_r)); fl_logic(_r,32); }
L_103523f2:;
  /* 103523f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103523f4 mov edi, 0x103555d0 */
  EDI = (0x103555d0u);
  /* 103523f9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103523fa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103523fb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103523fc jmp 0x1035240c */
  goto L_1035240c;
L_103523fe:;
  /* 103523fe cmp dword ptr [0x10355570], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10355570))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352405 je 0x10352416 */
  if (C.zf) goto L_10352416;
L_10352407:;
  /* 10352407 call 0x103524a5 */
  push32(0x1035240cu); f_103524a5();
L_1035240c:;
  /* 1035240c call 0x103524ce */
  push32(0x10352411u); f_103524ce();
  /* 10352411 jmp 0x103522a2 */
  goto L_103522a2;
L_10352416:;
  /* 10352416 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10352419:;
  /* 10352419 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1035241b call 0x10351f96 */
  push32(0x10352420u); f_10351f96();
  /* 10352420 pop ecx */
  ECX = (pop32());
  /* 10352421 mov eax, esi */
  EAX = (ESI);
  /* 10352423 pop edi */
  EDI = (pop32());
  /* 10352424 pop esi */
  ESI = (pop32());
  /* 10352425 pop ebx */
  EBX = (pop32());
  /* 10352426 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10352427 ret  */
  ESPCHK(0x1035227bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002428 @ 0x10352428 (74 bytes, 15 insns) */
void f_10352428(void) {
  FTRACE(0x10352428u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352428 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1035242c and dword ptr [0x10355570], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10355570)))&(0x0u); w32((uint32_t)(0x10355570), (_r)); fl_logic(_r,32); }
  /* 10352433 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352436 jne 0x10352448 */
  if (!C.zf) goto L_10352448;
  /* 10352438 mov dword ptr [0x10355570], 1 */
  w32((uint32_t)(0x10355570), (0x1u));
  /* 10352442 jmp dword ptr [0x103540a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x103540a8)))); return;
L_10352448:;
  /* 10352448 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035244b jne 0x1035245d */
  if (!C.zf) goto L_1035245d;
  /* 1035244d mov dword ptr [0x10355570], 1 */
  w32((uint32_t)(0x10355570), (0x1u));
  /* 10352457 jmp dword ptr [0x103540a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x103540a4)))); return;
L_1035245d:;
  /* 1035245d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352460 jne 0x10352471 */
  if (!C.zf) goto L_10352471;
  /* 10352462 mov eax, dword ptr [0x103555a0] */
  EAX = (r32((uint32_t)(0x103555a0)));
  /* 10352467 mov dword ptr [0x10355570], 1 */
  w32((uint32_t)(0x10355570), (0x1u));
L_10352471:;
  /* 10352471 ret  */
  ESPCHK(0x10352428u, _esp0);
  ESP += 4; return;
}

/* FUN_10002472 @ 0x10352472 (51 bytes, 19 insns) */
void f_10352472(void) {
  FTRACE(0x10352472u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352472 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10352476 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035247b je 0x1035249f */
  if (C.zf) goto L_1035249f;
  /* 1035247d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352480 je 0x10352499 */
  if (C.zf) goto L_10352499;
  /* 10352482 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352485 je 0x10352493 */
  if (C.zf) goto L_10352493;
  /* 10352487 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10352488 je 0x1035248d */
  if (C.zf) goto L_1035248d;
  /* 1035248a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1035248c ret  */
  ESPCHK(0x10352472u, _esp0);
  ESP += 4; return;
L_1035248d:;
  /* 1035248d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10352492 ret  */
  ESPCHK(0x10352472u, _esp0);
  ESP += 4; return;
L_10352493:;
  /* 10352493 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10352498 ret  */
  ESPCHK(0x10352472u, _esp0);
  ESP += 4; return;
L_10352499:;
  /* 10352499 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1035249e ret  */
  ESPCHK(0x10352472u, _esp0);
  ESP += 4; return;
L_1035249f:;
  /* 1035249f mov eax, 0x411 */
  EAX = (0x411u);
  /* 103524a4 ret  */
  ESPCHK(0x10352472u, _esp0);
  ESP += 4; return;
}

/* FUN_100024a5 @ 0x103524a5 (41 bytes, 17 insns) */
void f_103524a5(void) {
  FTRACE(0x103524a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103524a5 push edi */
  push32((uint32_t)(EDI));
  /* 103524a6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103524a8 pop ecx */
  ECX = (pop32());
  /* 103524a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103524ab mov edi, 0x103556e0 */
  EDI = (0x103556e0u);
  /* 103524b0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103524b2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103524b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103524b5 mov edi, 0x103555d0 */
  EDI = (0x103555d0u);
  /* 103524ba mov dword ptr [0x103555c8], eax */
  w32((uint32_t)(0x103555c8), (EAX));
  /* 103524bf mov dword ptr [0x103555dc], eax */
  w32((uint32_t)(0x103555dc), (EAX));
  /* 103524c4 mov dword ptr [0x103557e4], eax */
  w32((uint32_t)(0x103557e4), (EAX));
  /* 103524c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103524ca stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103524cb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103524cc pop edi */
  EDI = (pop32());
  /* 103524cd ret  */
  ESPCHK(0x103524a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100024ce @ 0x103524ce (389 bytes, 124 insns) */
void f_103524ce(void) {
  FTRACE(0x103524ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103524ce push ebp */
  push32((uint32_t)(EBP));
  /* 103524cf mov ebp, esp */
  EBP = (ESP);
  /* 103524d1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103524d7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 103524da push esi */
  push32((uint32_t)(ESI));
  /* 103524db push eax */
  push32((uint32_t)(EAX));
  /* 103524dc push dword ptr [0x103555c8] */
  push32((uint32_t)(r32((uint32_t)(0x103555c8))));
  /* 103524e2 call dword ptr [0x103540a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103540a0))), 0x103524e8u);
  /* 103524e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103524eb jne 0x10352607 */
  if (!C.zf) goto L_10352607;
  /* 103524f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103524f3 mov esi, 0x100 */
  ESI = (0x100u);
L_103524f8:;
  /* 103524f8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 103524ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10352500 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352502 jb 0x103524f8 */
  if (C.cf) goto L_103524f8;
  /* 10352504 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10352507 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1035250e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10352510 je 0x10352549 */
  if (C.zf) goto L_10352549;
  /* 10352512 push ebx */
  push32((uint32_t)(EBX));
  /* 10352513 push edi */
  push32((uint32_t)(EDI));
  /* 10352514 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10352517:;
  /* 10352517 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1035251a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1035251d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035251f ja 0x1035253e */
  if ((!C.cf&&!C.zf)) goto L_1035253e;
  /* 10352521 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352523 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1035252a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1035252b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10352530 mov ebx, ecx */
  EBX = (ECX);
  /* 10352532 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10352535 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10352537 mov ecx, ebx */
  ECX = (EBX);
  /* 10352539 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1035253c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1035253e:;
  /* 1035253e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1035253f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10352540 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10352543 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10352545 jne 0x10352517 */
  if (!C.zf) goto L_10352517;
  /* 10352547 pop edi */
  EDI = (pop32());
  /* 10352548 pop ebx */
  EBX = (pop32());
L_10352549:;
  /* 10352549 push 0 */
  push32((uint32_t)(0x0u));
  /* 1035254b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10352551 push dword ptr [0x103557e4] */
  push32((uint32_t)(r32((uint32_t)(0x103557e4))));
  /* 10352557 push dword ptr [0x103555c8] */
  push32((uint32_t)(r32((uint32_t)(0x103555c8))));
  /* 1035255d push eax */
  push32((uint32_t)(EAX));
  /* 1035255e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10352564 push esi */
  push32((uint32_t)(ESI));
  /* 10352565 push eax */
  push32((uint32_t)(EAX));
  /* 10352566 push 1 */
  push32((uint32_t)(0x1u));
  /* 10352568 call 0x10353642 */
  push32(0x1035256du); f_10353642();
  /* 1035256d push 0 */
  push32((uint32_t)(0x0u));
  /* 1035256f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10352575 push dword ptr [0x103555c8] */
  push32((uint32_t)(r32((uint32_t)(0x103555c8))));
  /* 1035257b push esi */
  push32((uint32_t)(ESI));
  /* 1035257c push eax */
  push32((uint32_t)(EAX));
  /* 1035257d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10352583 push esi */
  push32((uint32_t)(ESI));
  /* 10352584 push eax */
  push32((uint32_t)(EAX));
  /* 10352585 push esi */
  push32((uint32_t)(ESI));
  /* 10352586 push dword ptr [0x103557e4] */
  push32((uint32_t)(r32((uint32_t)(0x103557e4))));
  /* 1035258c call 0x103533f3 */
  push32(0x10352591u); f_103533f3();
  /* 10352591 push 0 */
  push32((uint32_t)(0x0u));
  /* 10352593 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10352599 push dword ptr [0x103555c8] */
  push32((uint32_t)(r32((uint32_t)(0x103555c8))));
  /* 1035259f push esi */
  push32((uint32_t)(ESI));
  /* 103525a0 push eax */
  push32((uint32_t)(EAX));
  /* 103525a1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 103525a7 push esi */
  push32((uint32_t)(ESI));
  /* 103525a8 push eax */
  push32((uint32_t)(EAX));
  /* 103525a9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 103525ae push dword ptr [0x103557e4] */
  push32((uint32_t)(r32((uint32_t)(0x103557e4))));
  /* 103525b4 call 0x103533f3 */
  push32(0x103525b9u); f_103533f3();
  /* 103525b9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103525bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103525be lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_103525c4:;
  /* 103525c4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 103525c7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 103525ca je 0x103525e2 */
  if (C.zf) goto L_103525e2;
  /* 103525cc or byte ptr [eax + 0x103556e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103556e1)))|(0x10u); w8((uint32_t)(EAX + 0x103556e1), (_r)); fl_logic(_r,8); }
  /* 103525d3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_103525da:;
  /* 103525da mov byte ptr [eax + 0x103555e0], dl */
  w8((uint32_t)(EAX + 0x103555e0), (DL));
  /* 103525e0 jmp 0x103525fe */
  goto L_103525fe;
L_103525e2:;
  /* 103525e2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 103525e5 je 0x103525f7 */
  if (C.zf) goto L_103525f7;
  /* 103525e7 or byte ptr [eax + 0x103556e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103556e1)))|(0x20u); w8((uint32_t)(EAX + 0x103556e1), (_r)); fl_logic(_r,8); }
  /* 103525ee mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 103525f5 jmp 0x103525da */
  goto L_103525da;
L_103525f7:;
  /* 103525f7 and byte ptr [eax + 0x103555e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103555e0)))&(0x0u); w8((uint32_t)(EAX + 0x103555e0), (_r)); fl_logic(_r,8); }
L_103525fe:;
  /* 103525fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103525ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10352600 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10352601 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352603 jb 0x103525c4 */
  if (C.cf) goto L_103525c4;
  /* 10352605 jmp 0x10352650 */
  goto L_10352650;
L_10352607:;
  /* 10352607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10352609 mov esi, 0x100 */
  ESI = (0x100u);
L_1035260e:;
  /* 1035260e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352611 jb 0x1035262c */
  if (C.cf) goto L_1035262c;
  /* 10352613 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352616 ja 0x1035262c */
  if ((!C.cf&&!C.zf)) goto L_1035262c;
  /* 10352618 or byte ptr [eax + 0x103556e1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103556e1)))|(0x10u); w8((uint32_t)(EAX + 0x103556e1), (_r)); fl_logic(_r,8); }
  /* 1035261f mov cl, al */
  CL = (AL);
  /* 10352621 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10352624:;
  /* 10352624 mov byte ptr [eax + 0x103555e0], cl */
  w8((uint32_t)(EAX + 0x103555e0), (CL));
  /* 1035262a jmp 0x1035264b */
  goto L_1035264b;
L_1035262c:;
  /* 1035262c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035262f jb 0x10352644 */
  if (C.cf) goto L_10352644;
  /* 10352631 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352634 ja 0x10352644 */
  if ((!C.cf&&!C.zf)) goto L_10352644;
  /* 10352636 or byte ptr [eax + 0x103556e1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103556e1)))|(0x20u); w8((uint32_t)(EAX + 0x103556e1), (_r)); fl_logic(_r,8); }
  /* 1035263d mov cl, al */
  CL = (AL);
  /* 1035263f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10352642 jmp 0x10352624 */
  goto L_10352624;
L_10352644:;
  /* 10352644 and byte ptr [eax + 0x103555e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103555e0)))&(0x0u); w8((uint32_t)(EAX + 0x103555e0), (_r)); fl_logic(_r,8); }
L_1035264b:;
  /* 1035264b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1035264c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035264e jb 0x1035260e */
  if (C.cf) goto L_1035260e;
L_10352650:;
  /* 10352650 pop esi */
  ESI = (pop32());
  /* 10352651 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10352652 ret  */
  ESPCHK(0x103524ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10002653 @ 0x10352653 (28 bytes, 7 insns) */
void f_10352653(void) {
  FTRACE(0x10352653u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352653 cmp dword ptr [0x10355908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10355908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035265a jne 0x1035266e */
  if (!C.zf) goto L_1035266e;
  /* 1035265c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1035265e call 0x1035227b */
  push32(0x10352663u); f_1035227b();
  /* 10352663 pop ecx */
  ECX = (pop32());
  /* 10352664 mov dword ptr [0x10355908], 1 */
  w32((uint32_t)(0x10355908), (0x1u));
L_1035266e:;
  /* 1035266e ret  */
  ESPCHK(0x10352653u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x10352670 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10352670(void) {
  FTRACE(0x10352670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352670 push ebp */
  push32((uint32_t)(EBP));
  /* 10352671 mov ebp, esp */
  EBP = (ESP);
  /* 10352673 push edi */
  push32((uint32_t)(EDI));
  /* 10352674 push esi */
  push32((uint32_t)(ESI));
  /* 10352675 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10352678 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1035267b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1035267e mov eax, ecx */
  EAX = (ECX);
  /* 10352680 mov edx, ecx */
  EDX = (ECX);
  /* 10352682 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352684 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352686 jbe 0x10352690 */
  if ((C.cf||C.zf)) goto L_10352690;
  /* 10352688 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035268a jb 0x10352808 */
  if (C.cf) goto L_10352808;
L_10352690:;
  /* 10352690 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10352696 jne 0x103526ac */
  if (!C.zf) goto L_103526ac;
  /* 10352698 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1035269b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1035269e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103526a1 jb 0x103526cc */
  if (C.cf) goto L_103526cc;
  /* 103526a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103526a5 jmp dword ptr [edx*4 + 0x103527b8] */
  switch (EDX) {
    case 0: goto L_103527c8;
    case 1: goto L_103527d0;
    case 2: goto L_103527dc;
    case 3: goto L_103527f0;
    default: x86_unimpl("switch@0x103526a5 out of table"); return;
  }
L_103526ac:;
  /* 103526ac mov eax, edi */
  EAX = (EDI);
  /* 103526ae mov edx, 3 */
  EDX = (0x3u);
  /* 103526b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103526b6 jb 0x103526c4 */
  if (C.cf) goto L_103526c4;
  /* 103526b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103526bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103526bd jmp dword ptr [eax*4 + 0x103526d0] */
  switch (EAX) {
    case 1: goto L_103526e0;
    case 2: goto L_1035270c;
    case 3: goto L_10352730;
    default: x86_unimpl("switch@0x103526bd out of table"); return;
  }
L_103526c4:;
  /* 103526c4 jmp dword ptr [ecx*4 + 0x103527c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x103527c8)))); return;
  /* 103526cb nop  */
  /* nop */
L_103526cc:;
  /* 103526cc jmp dword ptr [ecx*4 + 0x1035274c] */
  switch (ECX) {
    case 0: goto L_103527af;
    case 1: goto L_1035279c;
    case 2: goto L_10352794;
    case 3: goto L_1035278c;
    case 4: goto L_10352784;
    case 5: goto L_1035277c;
    case 6: goto L_10352774;
    case 7: goto L_1035276c;
    default: x86_unimpl("switch@0x103526cc out of table"); return;
  }
  /* 103526d3 nop  */
  /* nop */
L_103526e0:;
  /* 103526e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103526e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103526e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103526e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103526e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103526ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103526ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103526f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103526f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103526f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103526fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103526fe jb 0x103526cc */
  if (C.cf) goto L_103526cc;
  /* 10352700 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10352702 jmp dword ptr [edx*4 + 0x103527b8] */
  switch (EDX) {
    case 0: goto L_103527c8;
    case 1: goto L_103527d0;
    case 2: goto L_103527dc;
    case 3: goto L_103527f0;
    default: x86_unimpl("switch@0x10352702 out of table"); return;
  }
  /* 10352709 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1035270c:;
  /* 1035270c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1035270e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10352710 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10352712 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10352715 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10352718 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1035271b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1035271e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10352721 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352724 jb 0x103526cc */
  if (C.cf) goto L_103526cc;
  /* 10352726 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10352728 jmp dword ptr [edx*4 + 0x103527b8] */
  switch (EDX) {
    case 0: goto L_103527c8;
    case 1: goto L_103527d0;
    case 2: goto L_103527dc;
    case 3: goto L_103527f0;
    default: x86_unimpl("switch@0x10352728 out of table"); return;
  }
  /* 1035272f nop  */
  /* nop */
L_10352730:;
  /* 10352730 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10352732 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10352734 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10352736 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10352737 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1035273a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1035273b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035273e jb 0x103526cc */
  if (C.cf) goto L_103526cc;
  /* 10352740 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10352742 jmp dword ptr [edx*4 + 0x103527b8] */
  switch (EDX) {
    case 0: goto L_103527c8;
    case 1: goto L_103527d0;
    case 2: goto L_103527dc;
    case 3: goto L_103527f0;
    default: x86_unimpl("switch@0x10352742 out of table"); return;
  }
  /* 10352749 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1035276c:;
  /* 1035276c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10352770 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10352774:;
  /* 10352774 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10352778 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1035277c:;
  /* 1035277c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10352780 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10352784:;
  /* 10352784 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10352788 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1035278c:;
  /* 1035278c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10352790 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10352794:;
  /* 10352794 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10352798 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1035279c:;
  /* 1035279c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 103527a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 103527a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103527ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103527ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103527af:;
  /* 103527af jmp dword ptr [edx*4 + 0x103527b8] */
  switch (EDX) {
    case 0: goto L_103527c8;
    case 1: goto L_103527d0;
    case 2: goto L_103527dc;
    case 3: goto L_103527f0;
    default: x86_unimpl("switch@0x103527af out of table"); return;
  }
  /* 103527b6 mov edi, edi */
  EDI = (EDI);
L_103527c8:;
  /* 103527c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103527cb pop esi */
  ESI = (pop32());
  /* 103527cc pop edi */
  EDI = (pop32());
  /* 103527cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103527ce ret  */
  ESPCHK(0x10352670u, _esp0);
  ESP += 4; return;
  /* 103527cf nop  */
  /* nop */
L_103527d0:;
  /* 103527d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103527d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103527d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103527d7 pop esi */
  ESI = (pop32());
  /* 103527d8 pop edi */
  EDI = (pop32());
  /* 103527d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103527da ret  */
  ESPCHK(0x10352670u, _esp0);
  ESP += 4; return;
  /* 103527db nop  */
  /* nop */
L_103527dc:;
  /* 103527dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103527de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103527e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103527e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103527e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103527e9 pop esi */
  ESI = (pop32());
  /* 103527ea pop edi */
  EDI = (pop32());
  /* 103527eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103527ec ret  */
  ESPCHK(0x10352670u, _esp0);
  ESP += 4; return;
  /* 103527ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103527f0:;
  /* 103527f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103527f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103527f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103527f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103527fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103527fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10352800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352803 pop esi */
  ESI = (pop32());
  /* 10352804 pop edi */
  EDI = (pop32());
  /* 10352805 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10352806 ret  */
  ESPCHK(0x10352670u, _esp0);
  ESP += 4; return;
  /* 10352807 nop  */
  /* nop */
L_10352808:;
  /* 10352808 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1035280c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10352810 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10352816 jne 0x1035283c */
  if (!C.zf) goto L_1035283c;
  /* 10352818 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1035281b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1035281e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352821 jb 0x10352830 */
  if (C.cf) goto L_10352830;
  /* 10352823 std  */
  C.df=1;
  /* 10352824 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10352826 cld  */
  C.df=0;
  /* 10352827 jmp dword ptr [edx*4 + 0x10352950] */
  switch (EDX) {
    case 0: goto L_10352960;
    case 1: goto L_10352968;
    case 2: goto L_10352978;
    case 3: goto L_1035298c;
    default: x86_unimpl("switch@0x10352827 out of table"); return;
  }
  /* 1035282e mov edi, edi */
  EDI = (EDI);
L_10352830:;
  /* 10352830 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10352832 jmp dword ptr [ecx*4 + 0x10352900] */
  switch (ECX) {
    case 0: goto L_10352947;
    default: x86_unimpl("switch@0x10352832 out of table"); return;
  }
  /* 10352839 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1035283c:;
  /* 1035283c mov eax, edi */
  EAX = (EDI);
  /* 1035283e mov edx, 3 */
  EDX = (0x3u);
  /* 10352843 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352846 jb 0x10352854 */
  if (C.cf) goto L_10352854;
  /* 10352848 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1035284b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035284d jmp dword ptr [eax*4 + 0x10352858] */
  switch (EAX) {
    case 1: goto L_10352868;
    case 2: goto L_10352888;
    case 3: goto L_103528b0;
    default: x86_unimpl("switch@0x1035284d out of table"); return;
  }
L_10352854:;
  /* 10352854 jmp dword ptr [ecx*4 + 0x10352950] */
  switch (ECX) {
    case 0: goto L_10352960;
    case 1: goto L_10352968;
    case 2: goto L_10352978;
    case 3: goto L_1035298c;
    default: x86_unimpl("switch@0x10352854 out of table"); return;
  }
  /* 1035285b nop  */
  /* nop */
L_10352868:;
  /* 10352868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1035286b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1035286d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10352870 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10352871 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10352874 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10352875 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352878 jb 0x10352830 */
  if (C.cf) goto L_10352830;
  /* 1035287a std  */
  C.df=1;
  /* 1035287b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1035287d cld  */
  C.df=0;
  /* 1035287e jmp dword ptr [edx*4 + 0x10352950] */
  switch (EDX) {
    case 0: goto L_10352960;
    case 1: goto L_10352968;
    case 2: goto L_10352978;
    case 3: goto L_1035298c;
    default: x86_unimpl("switch@0x1035287e out of table"); return;
  }
  /* 10352885 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10352888:;
  /* 10352888 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1035288b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1035288d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10352890 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10352893 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10352896 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10352899 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035289c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035289f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103528a2 jb 0x10352830 */
  if (C.cf) goto L_10352830;
  /* 103528a4 std  */
  C.df=1;
  /* 103528a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103528a7 cld  */
  C.df=0;
  /* 103528a8 jmp dword ptr [edx*4 + 0x10352950] */
  switch (EDX) {
    case 0: goto L_10352960;
    case 1: goto L_10352968;
    case 2: goto L_10352978;
    case 3: goto L_1035298c;
    default: x86_unimpl("switch@0x103528a8 out of table"); return;
  }
  /* 103528af nop  */
  /* nop */
L_103528b0:;
  /* 103528b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103528b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103528b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103528b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103528bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103528be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103528c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103528c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103528c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103528ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103528cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103528d0 jb 0x10352830 */
  if (C.cf) goto L_10352830;
  /* 103528d6 std  */
  C.df=1;
  /* 103528d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103528d9 cld  */
  C.df=0;
  /* 103528da jmp dword ptr [edx*4 + 0x10352950] */
  switch (EDX) {
    case 0: goto L_10352960;
    case 1: goto L_10352968;
    case 2: goto L_10352978;
    case 3: goto L_1035298c;
    default: x86_unimpl("switch@0x103528da out of table"); return;
  }
  /* 103528e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 103528e4 add al, 0x29 */
  { uint32_t _a=(AL),_b=(0x29u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103528e6 xor eax, 0x35290c10 */
  { uint32_t _r=(EAX)^(0x35290c10u); EAX = (_r); fl_logic(_r,32); }
  /* 103528eb adc byte ptr [ecx + ebp], dl */
  { uint32_t _a=(r8((uint32_t)(ECX + EBP*1))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBP*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 103528ee xor eax, 0x35291c10 */
  { uint32_t _r=(EAX)^(0x35291c10u); EAX = (_r); fl_logic(_r,32); }
  /* 103528f3 adc byte ptr [ecx + ebp], ah */
  { uint32_t _a=(r8((uint32_t)(ECX + EBP*1))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBP*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 103528f6 xor eax, 0x35292c10 */
  { uint32_t _r=(EAX)^(0x35292c10u); EAX = (_r); fl_logic(_r,32); }
  /* 103528fb adc byte ptr [ecx + ebp], dh */
  { uint32_t _a=(r8((uint32_t)(ECX + EBP*1))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBP*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10352904 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10352908 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1035290c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10352910 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10352914 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10352918 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1035291c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10352920 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10352924 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10352928 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1035292c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10352930 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10352934 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10352938 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1035293c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10352943 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10352945 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10352947:;
  /* 10352947 jmp dword ptr [edx*4 + 0x10352950] */
  switch (EDX) {
    case 0: goto L_10352960;
    case 1: goto L_10352968;
    case 2: goto L_10352978;
    case 3: goto L_1035298c;
    default: x86_unimpl("switch@0x10352947 out of table"); return;
  }
  /* 1035294e mov edi, edi */
  EDI = (EDI);
L_10352960:;
  /* 10352960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352963 pop esi */
  ESI = (pop32());
  /* 10352964 pop edi */
  EDI = (pop32());
  /* 10352965 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10352966 ret  */
  ESPCHK(0x10352670u, _esp0);
  ESP += 4; return;
  /* 10352967 nop  */
  /* nop */
L_10352968:;
  /* 10352968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1035296b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1035296e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352971 pop esi */
  ESI = (pop32());
  /* 10352972 pop edi */
  EDI = (pop32());
  /* 10352973 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10352974 ret  */
  ESPCHK(0x10352670u, _esp0);
  ESP += 4; return;
  /* 10352975 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10352978:;
  /* 10352978 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1035297b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1035297e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10352981 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10352984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352987 pop esi */
  ESI = (pop32());
  /* 10352988 pop edi */
  EDI = (pop32());
  /* 10352989 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1035298a ret  */
  ESPCHK(0x10352670u, _esp0);
  ESP += 4; return;
  /* 1035298b nop  */
  /* nop */
L_1035298c:;
  /* 1035298c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1035298f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10352992 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10352995 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10352998 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1035299b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1035299e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103529a1 pop esi */
  ESI = (pop32());
  /* 103529a2 pop edi */
  EDI = (pop32());
  /* 103529a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103529a4 ret  */
  ESPCHK(0x10352670u, _esp0);
  ESP += 4; return;
}

/* FUN_100029a5 @ 0x103529a5 (62 bytes, 15 insns) */
void f_103529a5(void) {
  FTRACE(0x103529a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103529a5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 103529aa push 0 */
  push32((uint32_t)(0x0u));
  /* 103529ac push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 103529b2 call dword ptr [0x10354090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354090))), 0x103529b8u);
  /* 103529b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103529ba mov dword ptr [0x103555c4], eax */
  w32((uint32_t)(0x103555c4), (EAX));
  /* 103529bf jne 0x103529c2 */
  if (!C.zf) goto L_103529c2;
  /* 103529c1 ret  */
  ESPCHK(0x103529a5u, _esp0);
  ESP += 4; return;
L_103529c2:;
  /* 103529c2 and dword ptr [0x103555bc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103555bc)))&(0x0u); w32((uint32_t)(0x103555bc), (_r)); fl_logic(_r,32); }
  /* 103529c9 and dword ptr [0x103555c0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103555c0)))&(0x0u); w32((uint32_t)(0x103555c0), (_r)); fl_logic(_r,32); }
  /* 103529d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103529d2 mov dword ptr [0x103555b8], eax */
  w32((uint32_t)(0x103555b8), (EAX));
  /* 103529d7 mov dword ptr [0x103555b0], 0x10 */
  w32((uint32_t)(0x103555b0), (0x10u));
  /* 103529e1 pop eax */
  EAX = (pop32());
  /* 103529e2 ret  */
  ESPCHK(0x103529a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100029e3 @ 0x103529e3 (43 bytes, 14 insns) */
void f_103529e3(void) {
  FTRACE(0x103529e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103529e3 mov eax, dword ptr [0x103555c0] */
  EAX = (r32((uint32_t)(0x103555c0)));
  /* 103529e8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 103529eb mov eax, dword ptr [0x103555c4] */
  EAX = (r32((uint32_t)(0x103555c4)));
  /* 103529f0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_103529f3:;
  /* 103529f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103529f5 jae 0x10352a0b */
  if (!C.cf) goto L_10352a0b;
  /* 103529f7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 103529fb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103529fe cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352a04 jb 0x10352a0d */
  if (C.cf) goto L_10352a0d;
  /* 10352a06 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352a09 jmp 0x103529f3 */
  goto L_103529f3;
L_10352a0b:;
  /* 10352a0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10352a0d:;
  /* 10352a0d ret  */
  ESPCHK(0x103529e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a0e @ 0x10352a0e (811 bytes, 264 insns) */
void f_10352a0e(void) {
  FTRACE(0x10352a0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352a0e push ebp */
  push32((uint32_t)(EBP));
  /* 10352a0f mov ebp, esp */
  EBP = (ESP);
  /* 10352a11 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352a14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10352a17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352a1a push ebx */
  push32((uint32_t)(EBX));
  /* 10352a1b push esi */
  push32((uint32_t)(ESI));
  /* 10352a1c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10352a1f mov esi, edx */
  ESI = (EDX);
  /* 10352a21 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352a24 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10352a27 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352a2a push edi */
  push32((uint32_t)(EDI));
  /* 10352a2b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 10352a2e mov ecx, esi */
  ECX = (ESI);
  /* 10352a30 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10352a33 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10352a39 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10352a3a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10352a3d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10352a44 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10352a47 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10352a4a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 10352a4d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10352a50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10352a53 jne 0x10352ad4 */
  if (!C.zf) goto L_10352ad4;
  /* 10352a55 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10352a58 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10352a5a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10352a5b pop edi */
  EDI = (pop32());
  /* 10352a5c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10352a5f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352a61 jbe 0x10352a66 */
  if ((C.cf||C.zf)) goto L_10352a66;
  /* 10352a63 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10352a66:;
  /* 10352a66 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10352a6a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352a6e jne 0x10352ab8 */
  if (!C.zf) goto L_10352ab8;
  /* 10352a70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10352a73 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352a76 jae 0x10352a94 */
  if (!C.cf) goto L_10352a94;
  /* 10352a78 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10352a7d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10352a7f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10352a83 not edi */
  EDI = (~(EDI));
  /* 10352a85 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10352a89 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10352a8b jne 0x10352ab8 */
  if (!C.zf) goto L_10352ab8;
  /* 10352a8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352a90 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10352a92 jmp 0x10352ab8 */
  goto L_10352ab8;
L_10352a94:;
  /* 10352a94 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352a97 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10352a9c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10352a9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10352aa1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10352aa5 not edi */
  EDI = (~(EDI));
  /* 10352aa7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10352aae dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10352ab0 jne 0x10352ab8 */
  if (!C.zf) goto L_10352ab8;
  /* 10352ab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352ab5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10352ab8:;
  /* 10352ab8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10352abc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10352ac0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10352ac3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10352ac7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10352acb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352ace mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10352ad1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10352ad4:;
  /* 10352ad4 mov edi, ebx */
  EDI = (EBX);
  /* 10352ad6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10352ad9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10352ada cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352add jbe 0x10352ae2 */
  if ((C.cf||C.zf)) goto L_10352ae2;
  /* 10352adf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10352ae1 pop edi */
  EDI = (pop32());
L_10352ae2:;
  /* 10352ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10352ae5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10352ae8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10352aeb jne 0x10352b91 */
  if (!C.zf) goto L_10352b91;
  /* 10352af1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352af4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10352af7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10352afa push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10352afc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10352aff dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10352b00 pop edx */
  EDX = (pop32());
  /* 10352b01 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352b03 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10352b06 jbe 0x10352b0d */
  if ((C.cf||C.zf)) goto L_10352b0d;
  /* 10352b08 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10352b0b mov ecx, edx */
  ECX = (EDX);
L_10352b0d:;
  /* 10352b0d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352b10 mov edi, ebx */
  EDI = (EBX);
  /* 10352b12 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10352b15 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10352b18 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10352b19 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352b1b jbe 0x10352b1f */
  if ((C.cf||C.zf)) goto L_10352b1f;
  /* 10352b1d mov edi, edx */
  EDI = (EDX);
L_10352b1f:;
  /* 10352b1f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352b21 je 0x10352b8e */
  if (C.zf) goto L_10352b8e;
  /* 10352b23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10352b26 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10352b29 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352b2c jne 0x10352b76 */
  if (!C.zf) goto L_10352b76;
  /* 10352b2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10352b31 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352b34 jae 0x10352b52 */
  if (!C.cf) goto L_10352b52;
  /* 10352b36 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10352b3b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10352b3d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10352b41 not edx */
  EDX = (~(EDX));
  /* 10352b43 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10352b47 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10352b49 jne 0x10352b76 */
  if (!C.zf) goto L_10352b76;
  /* 10352b4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352b4e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10352b50 jmp 0x10352b76 */
  goto L_10352b76;
L_10352b52:;
  /* 10352b52 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352b55 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10352b5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10352b5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10352b5f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10352b63 not edx */
  EDX = (~(EDX));
  /* 10352b65 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10352b6c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10352b6e jne 0x10352b76 */
  if (!C.zf) goto L_10352b76;
  /* 10352b70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352b73 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10352b76:;
  /* 10352b76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10352b79 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10352b7c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10352b7f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10352b82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10352b85 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10352b88 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10352b8b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10352b8e:;
  /* 10352b8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10352b91:;
  /* 10352b91 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352b95 jne 0x10352ba0 */
  if (!C.zf) goto L_10352ba0;
  /* 10352b97 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352b9a je 0x10352c29 */
  if (C.zf) goto L_10352c29;
L_10352ba0:;
  /* 10352ba0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10352ba3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10352ba6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10352ba9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10352bac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10352baf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10352bb2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10352bb5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10352bb8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10352bbb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10352bbe mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10352bc1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352bc4 jne 0x10352c29 */
  if (!C.zf) goto L_10352c29;
  /* 10352bc6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10352bca cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352bcd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10352bd0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10352bd2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10352bd6 jae 0x10352bfd */
  if (!C.cf) goto L_10352bfd;
  /* 10352bd8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10352bdc jne 0x10352bec */
  if (!C.zf) goto L_10352bec;
  /* 10352bde mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10352be3 mov ecx, edi */
  ECX = (EDI);
  /* 10352be5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10352be7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352bea or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10352bec:;
  /* 10352bec mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10352bf1 mov ecx, edi */
  ECX = (EDI);
  /* 10352bf3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10352bf5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10352bf9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10352bfb jmp 0x10352c26 */
  goto L_10352c26;
L_10352bfd:;
  /* 10352bfd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10352c01 jne 0x10352c13 */
  if (!C.zf) goto L_10352c13;
  /* 10352c03 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10352c06 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10352c0b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10352c0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352c10 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10352c13:;
  /* 10352c13 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10352c16 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10352c1b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10352c1d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10352c24 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10352c26:;
  /* 10352c26 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10352c29:;
  /* 10352c29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10352c2c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10352c2e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10352c32 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10352c34 jne 0x10352d34 */
  if (!C.zf) goto L_10352d34;
  /* 10352c3a mov eax, dword ptr [0x103555bc] */
  EAX = (r32((uint32_t)(0x103555bc)));
  /* 10352c3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10352c41 je 0x10352d26 */
  if (C.zf) goto L_10352d26;
  /* 10352c47 mov ecx, dword ptr [0x103555b4] */
  ECX = (r32((uint32_t)(0x103555b4)));
  /* 10352c4d mov edi, dword ptr [0x10354088] */
  EDI = (r32((uint32_t)(0x10354088)));
  /* 10352c53 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10352c56 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352c59 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10352c5e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10352c63 push ebx */
  push32((uint32_t)(EBX));
  /* 10352c64 push ecx */
  push32((uint32_t)(ECX));
  /* 10352c65 call edi */
  call_ind((uint32_t)(EDI), 0x10352c67u);
  /* 10352c67 mov ecx, dword ptr [0x103555b4] */
  ECX = (r32((uint32_t)(0x103555b4)));
  /* 10352c6d mov eax, dword ptr [0x103555bc] */
  EAX = (r32((uint32_t)(0x103555bc)));
  /* 10352c72 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10352c77 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10352c79 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10352c7c mov eax, dword ptr [0x103555bc] */
  EAX = (r32((uint32_t)(0x103555bc)));
  /* 10352c81 mov ecx, dword ptr [0x103555b4] */
  ECX = (r32((uint32_t)(0x103555b4)));
  /* 10352c87 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10352c8a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10352c92 mov eax, dword ptr [0x103555bc] */
  EAX = (r32((uint32_t)(0x103555bc)));
  /* 10352c97 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10352c9a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10352c9d mov eax, dword ptr [0x103555bc] */
  EAX = (r32((uint32_t)(0x103555bc)));
  /* 10352ca2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10352ca5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10352ca9 jne 0x10352cb4 */
  if (!C.zf) goto L_10352cb4;
  /* 10352cab and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10352caf mov eax, dword ptr [0x103555bc] */
  EAX = (r32((uint32_t)(0x103555bc)));
L_10352cb4:;
  /* 10352cb4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352cb8 jne 0x10352d26 */
  if (!C.zf) goto L_10352d26;
  /* 10352cba push ebx */
  push32((uint32_t)(EBX));
  /* 10352cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10352cbd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10352cc0 call edi */
  call_ind((uint32_t)(EDI), 0x10352cc2u);
  /* 10352cc2 mov eax, dword ptr [0x103555bc] */
  EAX = (r32((uint32_t)(0x103555bc)));
  /* 10352cc7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10352cca push 0 */
  push32((uint32_t)(0x0u));
  /* 10352ccc push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 10352cd2 call dword ptr [0x1035408c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035408c))), 0x10352cd8u);
  /* 10352cd8 mov eax, dword ptr [0x103555c0] */
  EAX = (r32((uint32_t)(0x103555c0)));
  /* 10352cdd mov edx, dword ptr [0x103555c4] */
  EDX = (r32((uint32_t)(0x103555c4)));
  /* 10352ce3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10352ce6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10352ce9 mov ecx, eax */
  ECX = (EAX);
  /* 10352ceb mov eax, dword ptr [0x103555bc] */
  EAX = (r32((uint32_t)(0x103555bc)));
  /* 10352cf0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352cf2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10352cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10352cf7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10352cfa push ecx */
  push32((uint32_t)(ECX));
  /* 10352cfb push eax */
  push32((uint32_t)(EAX));
  /* 10352cfc call 0x10353790 */
  push32(0x10352d01u); f_10353790();
  /* 10352d01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352d04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10352d07 dec dword ptr [0x103555c0] */
  { uint32_t _r=(r32((uint32_t)(0x103555c0)))-1; w32((uint32_t)(0x103555c0), (_r)); fl_dec(_r,32); }
  /* 10352d0d cmp eax, dword ptr [0x103555bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x103555bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352d13 jbe 0x10352d18 */
  if ((C.cf||C.zf)) goto L_10352d18;
  /* 10352d15 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10352d18:;
  /* 10352d18 mov ecx, dword ptr [0x103555c4] */
  ECX = (r32((uint32_t)(0x103555c4)));
  /* 10352d1e mov dword ptr [0x103555b8], ecx */
  w32((uint32_t)(0x103555b8), (ECX));
  /* 10352d24 jmp 0x10352d29 */
  goto L_10352d29;
L_10352d26:;
  /* 10352d26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10352d29:;
  /* 10352d29 mov dword ptr [0x103555bc], eax */
  w32((uint32_t)(0x103555bc), (EAX));
  /* 10352d2e mov dword ptr [0x103555b4], esi */
  w32((uint32_t)(0x103555b4), (ESI));
L_10352d34:;
  /* 10352d34 pop edi */
  EDI = (pop32());
  /* 10352d35 pop esi */
  ESI = (pop32());
  /* 10352d36 pop ebx */
  EBX = (pop32());
  /* 10352d37 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10352d38 ret  */
  ESPCHK(0x10352a0eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d39 @ 0x10352d39 (777 bytes, 275 insns) */
void f_10352d39(void) {
  FTRACE(0x10352d39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10352d39 push ebp */
  push32((uint32_t)(EBP));
  /* 10352d3a mov ebp, esp */
  EBP = (ESP);
  /* 10352d3c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352d3f mov eax, dword ptr [0x103555c0] */
  EAX = (r32((uint32_t)(0x103555c0)));
  /* 10352d44 mov edx, dword ptr [0x103555c4] */
  EDX = (r32((uint32_t)(0x103555c4)));
  /* 10352d4a push ebx */
  push32((uint32_t)(EBX));
  /* 10352d4b push esi */
  push32((uint32_t)(ESI));
  /* 10352d4c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10352d4f push edi */
  push32((uint32_t)(EDI));
  /* 10352d50 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10352d53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352d56 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10352d59 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10352d5c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10352d5f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10352d62 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10352d65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10352d66 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352d69 jge 0x10352d79 */
  if ((C.sf==C.of)) goto L_10352d79;
  /* 10352d6b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10352d6e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10352d70 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10352d74 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10352d77 jmp 0x10352d89 */
  goto L_10352d89;
L_10352d79:;
  /* 10352d79 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352d7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10352d7f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10352d81 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10352d83 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10352d86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10352d89:;
  /* 10352d89 mov eax, dword ptr [0x103555b8] */
  EAX = (r32((uint32_t)(0x103555b8)));
  /* 10352d8e mov ebx, eax */
  EBX = (EAX);
  /* 10352d90 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352d92 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10352d95 jae 0x10352db0 */
  if (!C.cf) goto L_10352db0;
L_10352d97:;
  /* 10352d97 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10352d9a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10352d9c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10352d9f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10352da1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10352da3 jne 0x10352db0 */
  if (!C.zf) goto L_10352db0;
  /* 10352da5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352da8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352dab mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10352dae jb 0x10352d97 */
  if (C.cf) goto L_10352d97;
L_10352db0:;
  /* 10352db0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352db3 jne 0x10352e2e */
  if (!C.zf) goto L_10352e2e;
  /* 10352db5 mov ebx, edx */
  EBX = (EDX);
L_10352db7:;
  /* 10352db7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352db9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10352dbc jae 0x10352dd3 */
  if (!C.cf) goto L_10352dd3;
  /* 10352dbe mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10352dc1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10352dc3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10352dc6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10352dc8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10352dca jne 0x10352dd1 */
  if (!C.zf) goto L_10352dd1;
  /* 10352dcc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352dcf jmp 0x10352db7 */
  goto L_10352db7;
L_10352dd1:;
  /* 10352dd1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10352dd3:;
  /* 10352dd3 jne 0x10352e2e */
  if (!C.zf) goto L_10352e2e;
L_10352dd5:;
  /* 10352dd5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352dd8 jae 0x10352deb */
  if (!C.cf) goto L_10352deb;
  /* 10352dda cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352dde jne 0x10352de8 */
  if (!C.zf) goto L_10352de8;
  /* 10352de0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352de3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10352de6 jmp 0x10352dd5 */
  goto L_10352dd5;
L_10352de8:;
  /* 10352de8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10352deb:;
  /* 10352deb jne 0x10352e13 */
  if (!C.zf) goto L_10352e13;
  /* 10352ded mov ebx, edx */
  EBX = (EDX);
L_10352def:;
  /* 10352def cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352df1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10352df4 jae 0x10352e03 */
  if (!C.cf) goto L_10352e03;
  /* 10352df6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352dfa jne 0x10352e01 */
  if (!C.zf) goto L_10352e01;
  /* 10352dfc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352dff jmp 0x10352def */
  goto L_10352def;
L_10352e01:;
  /* 10352e01 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10352e03:;
  /* 10352e03 jne 0x10352e13 */
  if (!C.zf) goto L_10352e13;
  /* 10352e05 call 0x10353042 */
  push32(0x10352e0au); f_10353042();
  /* 10352e0a mov ebx, eax */
  EBX = (EAX);
  /* 10352e0c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10352e0e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10352e11 je 0x10352e27 */
  if (C.zf) goto L_10352e27;
L_10352e13:;
  /* 10352e13 push ebx */
  push32((uint32_t)(EBX));
  /* 10352e14 call 0x103530f3 */
  push32(0x10352e19u); f_103530f3();
  /* 10352e19 pop ecx */
  ECX = (pop32());
  /* 10352e1a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10352e1d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10352e1f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10352e22 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352e25 jne 0x10352e2e */
  if (!C.zf) goto L_10352e2e;
L_10352e27:;
  /* 10352e27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10352e29 jmp 0x1035303d */
  goto L_1035303d;
L_10352e2e:;
  /* 10352e2e mov dword ptr [0x103555b8], ebx */
  w32((uint32_t)(0x103555b8), (EBX));
  /* 10352e34 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10352e37 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10352e39 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352e3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10352e3f je 0x10352e55 */
  if (C.zf) goto L_10352e55;
  /* 10352e41 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10352e48 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10352e4c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10352e4f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10352e51 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10352e53 jne 0x10352e8c */
  if (!C.zf) goto L_10352e8c;
L_10352e55:;
  /* 10352e55 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10352e5b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10352e5e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10352e61 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10352e64 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10352e68 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10352e6b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10352e6d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10352e70 jne 0x10352e89 */
  if (!C.zf) goto L_10352e89;
L_10352e72:;
  /* 10352e72 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10352e78 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10352e7b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10352e7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10352e81 mov edi, esi */
  EDI = (ESI);
  /* 10352e83 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10352e85 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10352e87 je 0x10352e72 */
  if (C.zf) goto L_10352e72;
L_10352e89:;
  /* 10352e89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10352e8c:;
  /* 10352e8c mov ecx, edx */
  ECX = (EDX);
  /* 10352e8e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10352e90 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10352e96 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10352e9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10352ea0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10352ea4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10352ea6 jne 0x10352eb5 */
  if (!C.zf) goto L_10352eb5;
  /* 10352ea8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10352eaf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10352eb1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10352eb4 pop edi */
  EDI = (pop32());
L_10352eb5:;
  /* 10352eb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10352eb7 jl 0x10352ebe */
  if ((C.sf!=C.of)) goto L_10352ebe;
  /* 10352eb9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10352ebb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10352ebc jmp 0x10352eb5 */
  goto L_10352eb5;
L_10352ebe:;
  /* 10352ebe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10352ec1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10352ec5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10352ec7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10352eca mov esi, ecx */
  ESI = (ECX);
  /* 10352ecc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10352ecf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10352ed2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10352ed3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352ed6 jle 0x10352edb */
  if ((C.zf||C.sf!=C.of)) goto L_10352edb;
  /* 10352ed8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10352eda pop esi */
  ESI = (pop32());
L_10352edb:;
  /* 10352edb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352edd je 0x10352ff0 */
  if (C.zf) goto L_10352ff0;
  /* 10352ee3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10352ee6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352ee9 jne 0x10352f4c */
  if (!C.zf) goto L_10352f4c;
  /* 10352eeb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352eee jge 0x10352f1b */
  if ((C.sf==C.of)) goto L_10352f1b;
  /* 10352ef0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10352ef5 mov ecx, edi */
  ECX = (EDI);
  /* 10352ef7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10352ef9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10352efc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10352f00 not ebx */
  EBX = (~(EBX));
  /* 10352f02 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10352f05 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10352f09 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10352f0d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10352f0f jne 0x10352f49 */
  if (!C.zf) goto L_10352f49;
  /* 10352f11 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352f14 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10352f17 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10352f19 jmp 0x10352f4c */
  goto L_10352f4c;
L_10352f1b:;
  /* 10352f1b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10352f1e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10352f23 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10352f25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10352f28 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10352f2c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10352f33 not ebx */
  EBX = (~(EBX));
  /* 10352f35 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10352f37 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10352f39 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10352f3c jne 0x10352f49 */
  if (!C.zf) goto L_10352f49;
  /* 10352f3e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10352f41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10352f44 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10352f47 jmp 0x10352f4c */
  goto L_10352f4c;
L_10352f49:;
  /* 10352f49 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10352f4c:;
  /* 10352f4c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10352f4f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10352f52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352f56 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10352f59 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10352f5c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10352f5f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10352f62 je 0x10352ffc */
  if (C.zf) goto L_10352ffc;
  /* 10352f68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10352f6b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10352f6f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10352f72 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10352f75 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10352f78 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10352f7b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10352f7e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10352f81 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10352f84 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352f87 jne 0x10352fed */
  if (!C.zf) goto L_10352fed;
  /* 10352f89 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10352f8d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10352f90 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10352f93 jge 0x10352fbe */
  if ((C.sf==C.of)) goto L_10352fbe;
  /* 10352f95 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10352f97 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10352f9b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10352f9f jne 0x10352fac */
  if (!C.zf) goto L_10352fac;
  /* 10352fa1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10352fa6 mov ecx, esi */
  ECX = (ESI);
  /* 10352fa8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10352faa or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10352fac:;
  /* 10352fac mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10352fb1 mov ecx, esi */
  ECX = (ESI);
  /* 10352fb3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10352fb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10352fb8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10352fbc jmp 0x10352fed */
  goto L_10352fed;
L_10352fbe:;
  /* 10352fbe inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10352fc0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10352fc4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10352fc8 jne 0x10352fd7 */
  if (!C.zf) goto L_10352fd7;
  /* 10352fca lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10352fcd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10352fd2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10352fd4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10352fd7:;
  /* 10352fd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10352fda lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10352fe1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10352fe4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10352fe9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10352feb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10352fed:;
  /* 10352fed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10352ff0:;
  /* 10352ff0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10352ff2 je 0x10352fff */
  if (C.zf) goto L_10352fff;
  /* 10352ff4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10352ff6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10352ffa jmp 0x10352fff */
  goto L_10352fff;
L_10352ffc:;
  /* 10352ffc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10352fff:;
  /* 10352fff mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10353002 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10353004 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10353007 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10353009 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1035300d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10353010 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10353012 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10353014 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10353017 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10353019 jne 0x10353035 */
  if (!C.zf) goto L_10353035;
  /* 1035301b cmp ebx, dword ptr [0x103555bc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x103555bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353021 jne 0x10353035 */
  if (!C.zf) goto L_10353035;
  /* 10353023 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10353026 cmp ecx, dword ptr [0x103555b4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x103555b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035302c jne 0x10353035 */
  if (!C.zf) goto L_10353035;
  /* 1035302e and dword ptr [0x103555bc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103555bc)))&(0x0u); w32((uint32_t)(0x103555bc), (_r)); fl_logic(_r,32); }
L_10353035:;
  /* 10353035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10353038 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1035303a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1035303d:;
  /* 1035303d pop edi */
  EDI = (pop32());
  /* 1035303e pop esi */
  ESI = (pop32());
  /* 1035303f pop ebx */
  EBX = (pop32());
  /* 10353040 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10353041 ret  */
  ESPCHK(0x10352d39u, _esp0);
  ESP += 4; return;
}

/* FUN_10003042 @ 0x10353042 (177 bytes, 53 insns) */
void f_10353042(void) {
  FTRACE(0x10353042u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353042 mov eax, dword ptr [0x103555c0] */
  EAX = (r32((uint32_t)(0x103555c0)));
  /* 10353047 mov ecx, dword ptr [0x103555b0] */
  ECX = (r32((uint32_t)(0x103555b0)));
  /* 1035304d push esi */
  push32((uint32_t)(ESI));
  /* 1035304e push edi */
  push32((uint32_t)(EDI));
  /* 1035304f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10353051 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353053 jne 0x10353085 */
  if (!C.zf) goto L_10353085;
  /* 10353055 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10353059 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1035305c push eax */
  push32((uint32_t)(EAX));
  /* 1035305d push dword ptr [0x103555c4] */
  push32((uint32_t)(r32((uint32_t)(0x103555c4))));
  /* 10353063 push edi */
  push32((uint32_t)(EDI));
  /* 10353064 push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 1035306a call dword ptr [0x10354028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354028))), 0x10353070u);
  /* 10353070 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353072 je 0x103530d5 */
  if (C.zf) goto L_103530d5;
  /* 10353074 add dword ptr [0x103555b0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x103555b0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x103555b0), (_r)); fl_add(_a,_b,_r,32); }
  /* 1035307b mov dword ptr [0x103555c4], eax */
  w32((uint32_t)(0x103555c4), (EAX));
  /* 10353080 mov eax, dword ptr [0x103555c0] */
  EAX = (r32((uint32_t)(0x103555c0)));
L_10353085:;
  /* 10353085 mov ecx, dword ptr [0x103555c4] */
  ECX = (r32((uint32_t)(0x103555c4)));
  /* 1035308b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10353090 push 8 */
  push32((uint32_t)(0x8u));
  /* 10353092 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10353095 push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 1035309b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1035309e call dword ptr [0x10354090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354090))), 0x103530a4u);
  /* 103530a4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103530a6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 103530a9 je 0x103530d5 */
  if (C.zf) goto L_103530d5;
  /* 103530ab push 4 */
  push32((uint32_t)(0x4u));
  /* 103530ad push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 103530b2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 103530b7 push edi */
  push32((uint32_t)(EDI));
  /* 103530b8 call dword ptr [0x1035402c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035402c))), 0x103530beu);
  /* 103530be cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103530c0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 103530c3 jne 0x103530d9 */
  if (!C.zf) goto L_103530d9;
  /* 103530c5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 103530c8 push edi */
  push32((uint32_t)(EDI));
  /* 103530c9 push dword ptr [0x103557e8] */
  push32((uint32_t)(r32((uint32_t)(0x103557e8))));
  /* 103530cf call dword ptr [0x1035408c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035408c))), 0x103530d5u);
L_103530d5:;
  /* 103530d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103530d7 jmp 0x103530f0 */
  goto L_103530f0;
L_103530d9:;
  /* 103530d9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 103530dd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 103530df mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 103530e2 inc dword ptr [0x103555c0] */
  { uint32_t _r=(r32((uint32_t)(0x103555c0)))+1; w32((uint32_t)(0x103555c0), (_r)); fl_inc(_r,32); }
  /* 103530e8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 103530eb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 103530ee mov eax, esi */
  EAX = (ESI);
L_103530f0:;
  /* 103530f0 pop edi */
  EDI = (pop32());
  /* 103530f1 pop esi */
  ESI = (pop32());
  /* 103530f2 ret  */
  ESPCHK(0x10353042u, _esp0);
  ESP += 4; return;
}

/* FUN_100030f3 @ 0x103530f3 (251 bytes, 85 insns) */
void f_103530f3(void) {
  FTRACE(0x103530f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103530f3 push ebp */
  push32((uint32_t)(EBP));
  /* 103530f4 mov ebp, esp */
  EBP = (ESP);
  /* 103530f6 push ecx */
  push32((uint32_t)(ECX));
  /* 103530f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103530fa push ebx */
  push32((uint32_t)(EBX));
  /* 103530fb push esi */
  push32((uint32_t)(ESI));
  /* 103530fc push edi */
  push32((uint32_t)(EDI));
  /* 103530fd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10353100 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10353103 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10353105:;
  /* 10353105 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10353107 jl 0x1035310e */
  if ((C.sf!=C.of)) goto L_1035310e;
  /* 10353109 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1035310b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1035310c jmp 0x10353105 */
  goto L_10353105;
L_1035310e:;
  /* 1035310e mov eax, ebx */
  EAX = (EBX);
  /* 10353110 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10353112 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10353118 pop edx */
  EDX = (pop32());
  /* 10353119 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10353120 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10353123:;
  /* 10353123 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10353126 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10353129 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1035312c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1035312d jne 0x10353123 */
  if (!C.zf) goto L_10353123;
  /* 1035312f mov edi, ebx */
  EDI = (EBX);
  /* 10353131 push 4 */
  push32((uint32_t)(0x4u));
  /* 10353133 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10353136 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10353139 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1035313e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10353143 push edi */
  push32((uint32_t)(EDI));
  /* 10353144 call dword ptr [0x1035402c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035402c))), 0x1035314au);
  /* 1035314a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035314c jne 0x10353156 */
  if (!C.zf) goto L_10353156;
  /* 1035314e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10353151 jmp 0x103531e9 */
  goto L_103531e9;
L_10353156:;
  /* 10353156 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1035315c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035315e ja 0x1035319c */
  if ((!C.cf&&!C.zf)) goto L_1035319c;
  /* 10353160 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10353163:;
  /* 10353163 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10353167 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1035316e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10353174 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1035317b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1035317d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10353183 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10353186 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10353190 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10353195 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10353198 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035319a jbe 0x10353163 */
  if ((C.cf||C.zf)) goto L_10353163;
L_1035319c:;
  /* 1035319c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1035319f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 103531a2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103531a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103531a9 pop edi */
  EDI = (pop32());
  /* 103531aa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103531ad mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 103531b0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 103531b3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 103531b6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103531b9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 103531be mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 103531c5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 103531c8 mov cl, al */
  CL = (AL);
  /* 103531ca inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 103531cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103531ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103531d1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 103531d4 jne 0x103531d9 */
  if (!C.zf) goto L_103531d9;
  /* 103531d6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_103531d9:;
  /* 103531d9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103531de mov ecx, ebx */
  ECX = (EBX);
  /* 103531e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103531e2 not edx */
  EDX = (~(EDX));
  /* 103531e4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 103531e7 mov eax, ebx */
  EAX = (EBX);
L_103531e9:;
  /* 103531e9 pop edi */
  EDI = (pop32());
  /* 103531ea pop esi */
  ESI = (pop32());
  /* 103531eb pop ebx */
  EBX = (pop32());
  /* 103531ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103531ed ret  */
  ESPCHK(0x103530f3u, _esp0);
  ESP += 4; return;
}

/* FUN_100031ee @ 0x103531ee (137 bytes, 50 insns) */
void f_103531ee(void) {
  FTRACE(0x103531eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103531ee push ebx */
  push32((uint32_t)(EBX));
  /* 103531ef xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103531f1 cmp dword ptr [0x10355574], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10355574))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103531f7 push esi */
  push32((uint32_t)(ESI));
  /* 103531f8 push edi */
  push32((uint32_t)(EDI));
  /* 103531f9 jne 0x1035323d */
  if (!C.zf) goto L_1035323d;
  /* 103531fb push 0x10354408 */
  push32((uint32_t)(0x10354408u));
  /* 10353200 call dword ptr [0x1035401c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035401c))), 0x10353206u);
  /* 10353206 mov edi, eax */
  EDI = (EAX);
  /* 10353208 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035320a je 0x10353273 */
  if (C.zf) goto L_10353273;
  /* 1035320c mov esi, dword ptr [0x10354020] */
  ESI = (r32((uint32_t)(0x10354020)));
  /* 10353212 push 0x103543fc */
  push32((uint32_t)(0x103543fcu));
  /* 10353217 push edi */
  push32((uint32_t)(EDI));
  /* 10353218 call esi */
  call_ind((uint32_t)(ESI), 0x1035321au);
  /* 1035321a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035321c mov dword ptr [0x10355574], eax */
  w32((uint32_t)(0x10355574), (EAX));
  /* 10353221 je 0x10353273 */
  if (C.zf) goto L_10353273;
  /* 10353223 push 0x103543ec */
  push32((uint32_t)(0x103543ecu));
  /* 10353228 push edi */
  push32((uint32_t)(EDI));
  /* 10353229 call esi */
  call_ind((uint32_t)(ESI), 0x1035322bu);
  /* 1035322b push 0x103543d8 */
  push32((uint32_t)(0x103543d8u));
  /* 10353230 push edi */
  push32((uint32_t)(EDI));
  /* 10353231 mov dword ptr [0x10355578], eax */
  w32((uint32_t)(0x10355578), (EAX));
  /* 10353236 call esi */
  call_ind((uint32_t)(ESI), 0x10353238u);
  /* 10353238 mov dword ptr [0x1035557c], eax */
  w32((uint32_t)(0x1035557c), (EAX));
L_1035323d:;
  /* 1035323d mov eax, dword ptr [0x10355578] */
  EAX = (r32((uint32_t)(0x10355578)));
  /* 10353242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10353244 je 0x1035325c */
  if (C.zf) goto L_1035325c;
  /* 10353246 call eax */
  call_ind((uint32_t)(EAX), 0x10353248u);
  /* 10353248 mov ebx, eax */
  EBX = (EAX);
  /* 1035324a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1035324c je 0x1035325c */
  if (C.zf) goto L_1035325c;
  /* 1035324e mov eax, dword ptr [0x1035557c] */
  EAX = (r32((uint32_t)(0x1035557c)));
  /* 10353253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10353255 je 0x1035325c */
  if (C.zf) goto L_1035325c;
  /* 10353257 push ebx */
  push32((uint32_t)(EBX));
  /* 10353258 call eax */
  call_ind((uint32_t)(EAX), 0x1035325au);
  /* 1035325a mov ebx, eax */
  EBX = (EAX);
L_1035325c:;
  /* 1035325c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10353260 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10353264 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10353268 push ebx */
  push32((uint32_t)(EBX));
  /* 10353269 call dword ptr [0x10355574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10355574))), 0x1035326fu);
L_1035326f:;
  /* 1035326f pop edi */
  EDI = (pop32());
  /* 10353270 pop esi */
  ESI = (pop32());
  /* 10353271 pop ebx */
  EBX = (pop32());
  /* 10353272 ret  */
  ESPCHK(0x103531eeu, _esp0);
  ESP += 4; return;
L_10353273:;
  /* 10353273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10353275 jmp 0x1035326f */
  goto L_1035326f;
}

/* _strncpy @ 0x10353280 (254 bytes, 109 insns) */
void f_10353280(void) {
  FTRACE(0x10353280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353280 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10353284 push edi */
  push32((uint32_t)(EDI));
  /* 10353285 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10353287 je 0x10353303 */
  if (C.zf) goto L_10353303;
  /* 10353289 push esi */
  push32((uint32_t)(ESI));
  /* 1035328a push ebx */
  push32((uint32_t)(EBX));
  /* 1035328b mov ebx, ecx */
  EBX = (ECX);
  /* 1035328d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10353291 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10353297 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1035329b jne 0x103532a4 */
  if (!C.zf) goto L_103532a4;
  /* 1035329d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103532a0 jne 0x10353311 */
  if (!C.zf) goto L_10353311;
  /* 103532a2 jmp 0x103532c5 */
  goto L_103532c5;
L_103532a4:;
  /* 103532a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103532a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103532a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103532a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103532aa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103532ab je 0x103532d2 */
  if (C.zf) goto L_103532d2;
  /* 103532ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103532af je 0x103532da */
  if (C.zf) goto L_103532da;
  /* 103532b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 103532b7 jne 0x103532a4 */
  if (!C.zf) goto L_103532a4;
  /* 103532b9 mov ebx, ecx */
  EBX = (ECX);
  /* 103532bb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103532be jne 0x10353311 */
  if (!C.zf) goto L_10353311;
L_103532c0:;
  /* 103532c0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 103532c3 je 0x103532d2 */
  if (C.zf) goto L_103532d2;
L_103532c5:;
  /* 103532c5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103532c7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103532c8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103532ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103532cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103532cd je 0x103532fe */
  if (C.zf) goto L_103532fe;
  /* 103532cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103532d0 jne 0x103532c5 */
  if (!C.zf) goto L_103532c5;
L_103532d2:;
  /* 103532d2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103532d6 pop ebx */
  EBX = (pop32());
  /* 103532d7 pop esi */
  ESI = (pop32());
  /* 103532d8 pop edi */
  EDI = (pop32());
  /* 103532d9 ret  */
  ESPCHK(0x10353280u, _esp0);
  ESP += 4; return;
L_103532da:;
  /* 103532da test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103532e0 je 0x103532f4 */
  if (C.zf) goto L_103532f4;
L_103532e2:;
  /* 103532e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103532e4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103532e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103532e6 je 0x10353376 */
  if (C.zf) goto L_10353376;
  /* 103532ec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103532f2 jne 0x103532e2 */
  if (!C.zf) goto L_103532e2;
L_103532f4:;
  /* 103532f4 mov ebx, ecx */
  EBX = (ECX);
  /* 103532f6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103532f9 jne 0x10353367 */
  if (!C.zf) goto L_10353367;
L_103532fb:;
  /* 103532fb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103532fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_103532fe:;
  /* 103532fe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103532ff jne 0x103532fb */
  if (!C.zf) goto L_103532fb;
  /* 10353301 pop ebx */
  EBX = (pop32());
  /* 10353302 pop esi */
  ESI = (pop32());
L_10353303:;
  /* 10353303 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10353307 pop edi */
  EDI = (pop32());
  /* 10353308 ret  */
  ESPCHK(0x10353280u, _esp0);
  ESP += 4; return;
L_10353309:;
  /* 10353309 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1035330b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1035330e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1035330f je 0x103532c0 */
  if (C.zf) goto L_103532c0;
L_10353311:;
  /* 10353311 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10353316 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10353318 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1035331a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1035331d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1035331f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10353321 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10353324 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10353329 je 0x10353309 */
  if (C.zf) goto L_10353309;
  /* 1035332b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1035332d je 0x1035335b */
  if (C.zf) goto L_1035335b;
  /* 1035332f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10353331 je 0x10353351 */
  if (C.zf) goto L_10353351;
  /* 10353333 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10353339 je 0x10353347 */
  if (C.zf) goto L_10353347;
  /* 1035333b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10353341 jne 0x10353309 */
  if (!C.zf) goto L_10353309;
  /* 10353343 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10353345 jmp 0x1035335f */
  goto L_1035335f;
L_10353347:;
  /* 10353347 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1035334d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1035334f jmp 0x1035335f */
  goto L_1035335f;
L_10353351:;
  /* 10353351 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10353357 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10353359 jmp 0x1035335f */
  goto L_1035335f;
L_1035335b:;
  /* 1035335b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1035335d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1035335f:;
  /* 1035335f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10353362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10353364 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10353365 je 0x10353371 */
  if (C.zf) goto L_10353371;
L_10353367:;
  /* 10353367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10353369:;
  /* 10353369 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1035336b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1035336e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1035336f jne 0x10353369 */
  if (!C.zf) goto L_10353369;
L_10353371:;
  /* 10353371 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10353374 jne 0x103532fb */
  if (!C.zf) goto L_103532fb;
L_10353376:;
  /* 10353376 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1035337a pop ebx */
  EBX = (pop32());
  /* 1035337b pop esi */
  ESI = (pop32());
  /* 1035337c pop edi */
  EDI = (pop32());
  /* 1035337d ret  */
  ESPCHK(0x10353280u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10353380 (88 bytes, 40 insns) */
void f_10353380(void) {
  FTRACE(0x10353380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353380 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10353384 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10353388 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1035338a je 0x103533d3 */
  if (C.zf) goto L_103533d3;
  /* 1035338c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1035338e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10353392 push edi */
  push32((uint32_t)(EDI));
  /* 10353393 mov edi, ecx */
  EDI = (ECX);
  /* 10353395 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353398 jb 0x103533c7 */
  if (C.cf) goto L_103533c7;
  /* 1035339a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1035339c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1035339f je 0x103533a9 */
  if (C.zf) goto L_103533a9;
  /* 103533a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_103533a3:;
  /* 103533a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103533a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103533a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103533a7 jne 0x103533a3 */
  if (!C.zf) goto L_103533a3;
L_103533a9:;
  /* 103533a9 mov ecx, eax */
  ECX = (EAX);
  /* 103533ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103533ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103533b0 mov ecx, eax */
  ECX = (EAX);
  /* 103533b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103533b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103533b7 mov ecx, edx */
  ECX = (EDX);
  /* 103533b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103533bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103533bf je 0x103533c7 */
  if (C.zf) goto L_103533c7;
  /* 103533c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103533c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103533c5 je 0x103533cd */
  if (C.zf) goto L_103533cd;
L_103533c7:;
  /* 103533c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103533c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103533ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 103533cb jne 0x103533c7 */
  if (!C.zf) goto L_103533c7;
L_103533cd:;
  /* 103533cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103533d1 pop edi */
  EDI = (pop32());
  /* 103533d2 ret  */
  ESPCHK(0x10353380u, _esp0);
  ESP += 4; return;
L_103533d3:;
  /* 103533d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 103533d7 ret  */
  ESPCHK(0x10353380u, _esp0);
  ESP += 4; return;
}

/* FUN_100033d8 @ 0x103533d8 (27 bytes, 13 insns) */
void f_103533d8(void) {
  FTRACE(0x103533d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103533d8 mov eax, dword ptr [0x10355580] */
  EAX = (r32((uint32_t)(0x10355580)));
  /* 103533dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103533df je 0x103533f0 */
  if (C.zf) goto L_103533f0;
  /* 103533e1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 103533e5 call eax */
  call_ind((uint32_t)(EAX), 0x103533e7u);
  /* 103533e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103533e9 pop ecx */
  ECX = (pop32());
  /* 103533ea je 0x103533f0 */
  if (C.zf) goto L_103533f0;
  /* 103533ec push 1 */
  push32((uint32_t)(0x1u));
  /* 103533ee pop eax */
  EAX = (pop32());
  /* 103533ef ret  */
  ESPCHK(0x103533d8u, _esp0);
  ESP += 4; return;
L_103533f0:;
  /* 103533f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103533f2 ret  */
  ESPCHK(0x103533d8u, _esp0);
  ESP += 4; return;
}

/* FUN_100033f3 @ 0x103533f3 (511 bytes, 193 insns) */
void f_103533f3(void) {
  FTRACE(0x103533f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103533f3 push ebp */
  push32((uint32_t)(EBP));
  /* 103533f4 mov ebp, esp */
  EBP = (ESP);
  /* 103533f6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103533f8 push 0x10354420 */
  push32((uint32_t)(0x10354420u));
  /* 103533fd push 0x10353bc0 */
  push32((uint32_t)(0x10353bc0u));
  /* 10353402 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10353408 push eax */
  push32((uint32_t)(EAX));
  /* 10353409 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10353410 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10353413 push ebx */
  push32((uint32_t)(EBX));
  /* 10353414 push esi */
  push32((uint32_t)(ESI));
  /* 10353415 push edi */
  push32((uint32_t)(EDI));
  /* 10353416 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10353419 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1035341b cmp dword ptr [0x103555a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x103555a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353421 jne 0x10353469 */
  if (!C.zf) goto L_10353469;
  /* 10353423 push edi */
  push32((uint32_t)(EDI));
  /* 10353424 push edi */
  push32((uint32_t)(EDI));
  /* 10353425 push 1 */
  push32((uint32_t)(0x1u));
  /* 10353427 pop ebx */
  EBX = (pop32());
  /* 10353428 push ebx */
  push32((uint32_t)(EBX));
  /* 10353429 push 0x10354418 */
  push32((uint32_t)(0x10354418u));
  /* 1035342e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10353433 push esi */
  push32((uint32_t)(ESI));
  /* 10353434 push edi */
  push32((uint32_t)(EDI));
  /* 10353435 call dword ptr [0x10354010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354010))), 0x1035343bu);
  /* 1035343b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035343d je 0x10353447 */
  if (C.zf) goto L_10353447;
  /* 1035343f mov dword ptr [0x103555a8], ebx */
  w32((uint32_t)(0x103555a8), (EBX));
  /* 10353445 jmp 0x10353469 */
  goto L_10353469;
L_10353447:;
  /* 10353447 push edi */
  push32((uint32_t)(EDI));
  /* 10353448 push edi */
  push32((uint32_t)(EDI));
  /* 10353449 push ebx */
  push32((uint32_t)(EBX));
  /* 1035344a push 0x10354414 */
  push32((uint32_t)(0x10354414u));
  /* 1035344f push esi */
  push32((uint32_t)(ESI));
  /* 10353450 push edi */
  push32((uint32_t)(EDI));
  /* 10353451 call dword ptr [0x10354014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354014))), 0x10353457u);
  /* 10353457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10353459 je 0x10353581 */
  if (C.zf) goto L_10353581;
  /* 1035345f mov dword ptr [0x103555a8], 2 */
  w32((uint32_t)(0x103555a8), (0x2u));
L_10353469:;
  /* 10353469 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035346c jle 0x1035347e */
  if ((C.zf||C.sf!=C.of)) goto L_1035347e;
  /* 1035346e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10353471 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10353474 call 0x10353617 */
  push32(0x10353479u); f_10353617();
  /* 10353479 pop ecx */
  ECX = (pop32());
  /* 1035347a pop ecx */
  ECX = (pop32());
  /* 1035347b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1035347e:;
  /* 1035347e mov eax, dword ptr [0x103555a8] */
  EAX = (r32((uint32_t)(0x103555a8)));
  /* 10353483 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353486 jne 0x103534a5 */
  if (!C.zf) goto L_103534a5;
  /* 10353488 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1035348b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1035348e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10353491 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10353494 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10353497 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1035349a call dword ptr [0x10354014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354014))), 0x103534a0u);
  /* 103534a0 jmp 0x10353583 */
  goto L_10353583;
L_103534a5:;
  /* 103534a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103534a8 jne 0x10353581 */
  if (!C.zf) goto L_10353581;
  /* 103534ae cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103534b1 jne 0x103534bb */
  if (!C.zf) goto L_103534bb;
  /* 103534b3 mov eax, dword ptr [0x103555a0] */
  EAX = (r32((uint32_t)(0x103555a0)));
  /* 103534b8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_103534bb:;
  /* 103534bb push edi */
  push32((uint32_t)(EDI));
  /* 103534bc push edi */
  push32((uint32_t)(EDI));
  /* 103534bd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 103534c0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103534c3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 103534c6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103534c8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103534ca and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103534cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103534ce push eax */
  push32((uint32_t)(EAX));
  /* 103534cf push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 103534d2 call dword ptr [0x10354024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354024))), 0x103534d8u);
  /* 103534d8 mov ebx, eax */
  EBX = (EAX);
  /* 103534da mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 103534dd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103534df je 0x10353581 */
  if (C.zf) goto L_10353581;
  /* 103534e5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 103534e8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 103534eb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103534ee and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103534f0 call 0x10353ca0 */
  push32(0x103534f5u); f_10353ca0();
  /* 103534f5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103534f8 mov eax, esp */
  EAX = (ESP);
  /* 103534fa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103534fd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10353501 jmp 0x10353516 */
  goto L_10353516;
  /* 10353503 push 1 */
  push32((uint32_t)(0x1u));
  /* 10353505 pop eax */
  EAX = (pop32());
  /* 10353506 ret  */
  ESPCHK(0x103533f3u, _esp0);
  ESP += 4; return;
  /* 10353507 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1035350a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1035350c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1035350f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10353513 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10353516:;
  /* 10353516 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353519 je 0x10353581 */
  if (C.zf) goto L_10353581;
  /* 1035351b push ebx */
  push32((uint32_t)(EBX));
  /* 1035351c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1035351f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10353522 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10353525 push 1 */
  push32((uint32_t)(0x1u));
  /* 10353527 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1035352a call dword ptr [0x10354024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354024))), 0x10353530u);
  /* 10353530 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10353532 je 0x10353581 */
  if (C.zf) goto L_10353581;
  /* 10353534 push edi */
  push32((uint32_t)(EDI));
  /* 10353535 push edi */
  push32((uint32_t)(EDI));
  /* 10353536 push ebx */
  push32((uint32_t)(EBX));
  /* 10353537 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1035353a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1035353d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10353540 call dword ptr [0x10354010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354010))), 0x10353546u);
  /* 10353546 mov esi, eax */
  ESI = (EAX);
  /* 10353548 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1035354b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035354d je 0x10353581 */
  if (C.zf) goto L_10353581;
  /* 1035354f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10353553 je 0x10353595 */
  if (C.zf) goto L_10353595;
  /* 10353555 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353558 je 0x10353610 */
  if (C.zf) goto L_10353610;
  /* 1035355e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353561 jg 0x10353581 */
  if ((!C.zf&&C.sf==C.of)) goto L_10353581;
  /* 10353563 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10353566 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10353569 push ebx */
  push32((uint32_t)(EBX));
  /* 1035356a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1035356d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10353570 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10353573 call dword ptr [0x10354010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354010))), 0x10353579u);
  /* 10353579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1035357b jne 0x10353610 */
  if (!C.zf) goto L_10353610;
L_10353581:;
  /* 10353581 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10353583:;
  /* 10353583 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10353586 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10353589 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10353590 pop edi */
  EDI = (pop32());
  /* 10353591 pop esi */
  ESI = (pop32());
  /* 10353592 pop ebx */
  EBX = (pop32());
  /* 10353593 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10353594 ret  */
  ESPCHK(0x103533f3u, _esp0);
  ESP += 4; return;
L_10353595:;
  /* 10353595 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1035359c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1035359f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103535a2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103535a4 call 0x10353ca0 */
  push32(0x103535a9u); f_10353ca0();
  /* 103535a9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103535ac mov ebx, esp */
  EBX = (ESP);
  /* 103535ae mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 103535b1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103535b5 jmp 0x103535c9 */
  goto L_103535c9;
  /* 103535b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103535b9 pop eax */
  EAX = (pop32());
  /* 103535ba ret  */
  ESPCHK(0x103533f3u, _esp0);
  ESP += 4; return;
  /* 103535bb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103535be xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103535c0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103535c2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103535c6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_103535c9:;
  /* 103535c9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103535cb je 0x10353581 */
  if (C.zf) goto L_10353581;
  /* 103535cd push esi */
  push32((uint32_t)(ESI));
  /* 103535ce push ebx */
  push32((uint32_t)(EBX));
  /* 103535cf push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 103535d2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 103535d5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103535d8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103535db call dword ptr [0x10354010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354010))), 0x103535e1u);
  /* 103535e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103535e3 je 0x10353581 */
  if (C.zf) goto L_10353581;
  /* 103535e5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103535e8 push edi */
  push32((uint32_t)(EDI));
  /* 103535e9 push edi */
  push32((uint32_t)(EDI));
  /* 103535ea jne 0x103535f0 */
  if (!C.zf) goto L_103535f0;
  /* 103535ec push edi */
  push32((uint32_t)(EDI));
  /* 103535ed push edi */
  push32((uint32_t)(EDI));
  /* 103535ee jmp 0x103535f6 */
  goto L_103535f6;
L_103535f0:;
  /* 103535f0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 103535f3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_103535f6:;
  /* 103535f6 push esi */
  push32((uint32_t)(ESI));
  /* 103535f7 push ebx */
  push32((uint32_t)(EBX));
  /* 103535f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103535fd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10353600 call dword ptr [0x10354074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354074))), 0x10353606u);
  /* 10353606 mov esi, eax */
  ESI = (EAX);
  /* 10353608 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035360a je 0x10353581 */
  if (C.zf) goto L_10353581;
L_10353610:;
  /* 10353610 mov eax, esi */
  EAX = (ESI);
  /* 10353612 jmp 0x10353583 */
  goto L_10353583;
}

/* FUN_10003617 @ 0x10353617 (43 bytes, 20 insns) */
void f_10353617(void) {
  FTRACE(0x10353617u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353617 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1035361b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1035361f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10353621 push esi */
  push32((uint32_t)(ESI));
  /* 10353622 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10353625 je 0x10353634 */
  if (C.zf) goto L_10353634;
L_10353627:;
  /* 10353627 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1035362a je 0x10353634 */
  if (C.zf) goto L_10353634;
  /* 1035362c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1035362d mov esi, ecx */
  ESI = (ECX);
  /* 1035362f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10353630 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10353632 jne 0x10353627 */
  if (!C.zf) goto L_10353627;
L_10353634:;
  /* 10353634 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10353637 pop esi */
  ESI = (pop32());
  /* 10353638 jne 0x1035363f */
  if (!C.zf) goto L_1035363f;
  /* 1035363a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035363e ret  */
  ESPCHK(0x10353617u, _esp0);
  ESP += 4; return;
L_1035363f:;
  /* 1035363f mov eax, edx */
  EAX = (EDX);
  /* 10353641 ret  */
  ESPCHK(0x10353617u, _esp0);
  ESP += 4; return;
}

/* FUN_10003642 @ 0x10353642 (318 bytes, 123 insns) */
void f_10353642(void) {
  FTRACE(0x10353642u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353642 push ebp */
  push32((uint32_t)(EBP));
  /* 10353643 mov ebp, esp */
  EBP = (ESP);
  /* 10353645 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10353647 push 0x10354438 */
  push32((uint32_t)(0x10354438u));
  /* 1035364c push 0x10353bc0 */
  push32((uint32_t)(0x10353bc0u));
  /* 10353651 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10353657 push eax */
  push32((uint32_t)(EAX));
  /* 10353658 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1035365f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10353662 push ebx */
  push32((uint32_t)(EBX));
  /* 10353663 push esi */
  push32((uint32_t)(ESI));
  /* 10353664 push edi */
  push32((uint32_t)(EDI));
  /* 10353665 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10353668 mov eax, dword ptr [0x103555ac] */
  EAX = (r32((uint32_t)(0x103555ac)));
  /* 1035366d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1035366f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353671 jne 0x103536b1 */
  if (!C.zf) goto L_103536b1;
  /* 10353673 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10353676 push eax */
  push32((uint32_t)(EAX));
  /* 10353677 push 1 */
  push32((uint32_t)(0x1u));
  /* 10353679 pop esi */
  ESI = (pop32());
  /* 1035367a push esi */
  push32((uint32_t)(ESI));
  /* 1035367b push 0x10354418 */
  push32((uint32_t)(0x10354418u));
  /* 10353680 push esi */
  push32((uint32_t)(ESI));
  /* 10353681 call dword ptr [0x1035400c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035400c))), 0x10353687u);
  /* 10353687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10353689 je 0x1035368f */
  if (C.zf) goto L_1035368f;
  /* 1035368b mov eax, esi */
  EAX = (ESI);
  /* 1035368d jmp 0x103536ac */
  goto L_103536ac;
L_1035368f:;
  /* 1035368f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10353692 push eax */
  push32((uint32_t)(EAX));
  /* 10353693 push esi */
  push32((uint32_t)(ESI));
  /* 10353694 push 0x10354414 */
  push32((uint32_t)(0x10354414u));
  /* 10353699 push esi */
  push32((uint32_t)(ESI));
  /* 1035369a push ebx */
  push32((uint32_t)(EBX));
  /* 1035369b call dword ptr [0x10354018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354018))), 0x103536a1u);
  /* 103536a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103536a3 je 0x10353777 */
  if (C.zf) goto L_10353777;
  /* 103536a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103536ab pop eax */
  EAX = (pop32());
L_103536ac:;
  /* 103536ac mov dword ptr [0x103555ac], eax */
  w32((uint32_t)(0x103555ac), (EAX));
L_103536b1:;
  /* 103536b1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103536b4 jne 0x103536da */
  if (!C.zf) goto L_103536da;
  /* 103536b6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103536b9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103536bb jne 0x103536c2 */
  if (!C.zf) goto L_103536c2;
  /* 103536bd mov eax, dword ptr [0x10355590] */
  EAX = (r32((uint32_t)(0x10355590)));
L_103536c2:;
  /* 103536c2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 103536c5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103536c8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103536cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103536ce push eax */
  push32((uint32_t)(EAX));
  /* 103536cf call dword ptr [0x10354018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354018))), 0x103536d5u);
  /* 103536d5 jmp 0x10353779 */
  goto L_10353779;
L_103536da:;
  /* 103536da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103536dd jne 0x10353777 */
  if (!C.zf) goto L_10353777;
  /* 103536e3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103536e6 jne 0x103536f0 */
  if (!C.zf) goto L_103536f0;
  /* 103536e8 mov eax, dword ptr [0x103555a0] */
  EAX = (r32((uint32_t)(0x103555a0)));
  /* 103536ed mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_103536f0:;
  /* 103536f0 push ebx */
  push32((uint32_t)(EBX));
  /* 103536f1 push ebx */
  push32((uint32_t)(EBX));
  /* 103536f2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103536f5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103536f8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103536fb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103536fd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103536ff and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10353702 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10353703 push eax */
  push32((uint32_t)(EAX));
  /* 10353704 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10353707 call dword ptr [0x10354024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354024))), 0x1035370du);
  /* 1035370d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10353710 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353712 je 0x10353777 */
  if (C.zf) goto L_10353777;
  /* 10353714 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10353717 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1035371a mov eax, edi */
  EAX = (EDI);
  /* 1035371c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1035371f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10353721 call 0x10353ca0 */
  push32(0x10353726u); f_10353ca0();
  /* 10353726 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10353729 mov esi, esp */
  ESI = (ESP);
  /* 1035372b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1035372e push edi */
  push32((uint32_t)(EDI));
  /* 1035372f push ebx */
  push32((uint32_t)(EBX));
  /* 10353730 push esi */
  push32((uint32_t)(ESI));
  /* 10353731 call 0x10353380 */
  push32(0x10353736u); f_10353380();
  /* 10353736 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10353739 jmp 0x10353746 */
  goto L_10353746;
  /* 1035373b push 1 */
  push32((uint32_t)(0x1u));
  /* 1035373d pop eax */
  EAX = (pop32());
  /* 1035373e ret  */
  ESPCHK(0x10353642u, _esp0);
  ESP += 4; return;
  /* 1035373f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10353742 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10353744 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10353746:;
  /* 10353746 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1035374a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035374c je 0x10353777 */
  if (C.zf) goto L_10353777;
  /* 1035374e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10353751 push esi */
  push32((uint32_t)(ESI));
  /* 10353752 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10353755 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10353758 push 1 */
  push32((uint32_t)(0x1u));
  /* 1035375a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1035375d call dword ptr [0x10354024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10354024))), 0x10353763u);
  /* 10353763 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353765 je 0x10353777 */
  if (C.zf) goto L_10353777;
  /* 10353767 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1035376a push eax */
  push32((uint32_t)(EAX));
  /* 1035376b push esi */
  push32((uint32_t)(ESI));
  /* 1035376c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1035376f call dword ptr [0x1035400c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1035400c))), 0x10353775u);
  /* 10353775 jmp 0x10353779 */
  goto L_10353779;
L_10353777:;
  /* 10353777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10353779:;
  /* 10353779 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1035377c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1035377f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10353786 pop edi */
  EDI = (pop32());
  /* 10353787 pop esi */
  ESI = (pop32());
  /* 10353788 pop ebx */
  EBX = (pop32());
  /* 10353789 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1035378a ret  */
  ESPCHK(0x10353642u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x10353790 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10353790(void) {
  FTRACE(0x10353790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353790 push ebp */
  push32((uint32_t)(EBP));
  /* 10353791 mov ebp, esp */
  EBP = (ESP);
  /* 10353793 push edi */
  push32((uint32_t)(EDI));
  /* 10353794 push esi */
  push32((uint32_t)(ESI));
  /* 10353795 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10353798 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1035379b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1035379e mov eax, ecx */
  EAX = (ECX);
  /* 103537a0 mov edx, ecx */
  EDX = (ECX);
  /* 103537a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103537a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103537a6 jbe 0x103537b0 */
  if ((C.cf||C.zf)) goto L_103537b0;
  /* 103537a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103537aa jb 0x10353928 */
  if (C.cf) goto L_10353928;
L_103537b0:;
  /* 103537b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103537b6 jne 0x103537cc */
  if (!C.zf) goto L_103537cc;
  /* 103537b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103537bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103537be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103537c1 jb 0x103537ec */
  if (C.cf) goto L_103537ec;
  /* 103537c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103537c5 jmp dword ptr [edx*4 + 0x103538d8] */
  switch (EDX) {
    case 0: goto L_103538e8;
    case 1: goto L_103538f0;
    case 2: goto L_103538fc;
    case 3: goto L_10353910;
    default: x86_unimpl("switch@0x103537c5 out of table"); return;
  }
L_103537cc:;
  /* 103537cc mov eax, edi */
  EAX = (EDI);
  /* 103537ce mov edx, 3 */
  EDX = (0x3u);
  /* 103537d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103537d6 jb 0x103537e4 */
  if (C.cf) goto L_103537e4;
  /* 103537d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103537db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103537dd jmp dword ptr [eax*4 + 0x103537f0] */
  switch (EAX) {
    case 1: goto L_10353800;
    case 2: goto L_1035382c;
    case 3: goto L_10353850;
    default: x86_unimpl("switch@0x103537dd out of table"); return;
  }
L_103537e4:;
  /* 103537e4 jmp dword ptr [ecx*4 + 0x103538e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x103538e8)))); return;
  /* 103537eb nop  */
  /* nop */
L_103537ec:;
  /* 103537ec jmp dword ptr [ecx*4 + 0x1035386c] */
  switch (ECX) {
    case 0: goto L_103538cf;
    case 1: goto L_103538bc;
    case 2: goto L_103538b4;
    case 3: goto L_103538ac;
    case 4: goto L_103538a4;
    case 5: goto L_1035389c;
    case 6: goto L_10353894;
    case 7: goto L_1035388c;
    default: x86_unimpl("switch@0x103537ec out of table"); return;
  }
  /* 103537f3 nop  */
  /* nop */
L_10353800:;
  /* 10353800 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10353802 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10353804 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10353806 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10353809 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1035380c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1035380f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10353812 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10353815 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10353818 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1035381b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035381e jb 0x103537ec */
  if (C.cf) goto L_103537ec;
  /* 10353820 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10353822 jmp dword ptr [edx*4 + 0x103538d8] */
  switch (EDX) {
    case 0: goto L_103538e8;
    case 1: goto L_103538f0;
    case 2: goto L_103538fc;
    case 3: goto L_10353910;
    default: x86_unimpl("switch@0x10353822 out of table"); return;
  }
  /* 10353829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1035382c:;
  /* 1035382c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1035382e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10353830 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10353832 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10353835 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10353838 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1035383b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1035383e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10353841 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353844 jb 0x103537ec */
  if (C.cf) goto L_103537ec;
  /* 10353846 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10353848 jmp dword ptr [edx*4 + 0x103538d8] */
  switch (EDX) {
    case 0: goto L_103538e8;
    case 1: goto L_103538f0;
    case 2: goto L_103538fc;
    case 3: goto L_10353910;
    default: x86_unimpl("switch@0x10353848 out of table"); return;
  }
  /* 1035384f nop  */
  /* nop */
L_10353850:;
  /* 10353850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10353852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10353854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10353856 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10353857 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1035385a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1035385b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1035385e jb 0x103537ec */
  if (C.cf) goto L_103537ec;
  /* 10353860 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10353862 jmp dword ptr [edx*4 + 0x103538d8] */
  switch (EDX) {
    case 0: goto L_103538e8;
    case 1: goto L_103538f0;
    case 2: goto L_103538fc;
    case 3: goto L_10353910;
    default: x86_unimpl("switch@0x10353862 out of table"); return;
  }
  /* 10353869 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1035388c:;
  /* 1035388c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10353890 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10353894:;
  /* 10353894 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10353898 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1035389c:;
  /* 1035389c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 103538a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_103538a4:;
  /* 103538a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 103538a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_103538ac:;
  /* 103538ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 103538b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_103538b4:;
  /* 103538b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 103538b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_103538bc:;
  /* 103538bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 103538c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 103538c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103538cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103538cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103538cf:;
  /* 103538cf jmp dword ptr [edx*4 + 0x103538d8] */
  switch (EDX) {
    case 0: goto L_103538e8;
    case 1: goto L_103538f0;
    case 2: goto L_103538fc;
    case 3: goto L_10353910;
    default: x86_unimpl("switch@0x103538cf out of table"); return;
  }
  /* 103538d6 mov edi, edi */
  EDI = (EDI);
L_103538e8:;
  /* 103538e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103538eb pop esi */
  ESI = (pop32());
  /* 103538ec pop edi */
  EDI = (pop32());
  /* 103538ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103538ee ret  */
  ESPCHK(0x10353790u, _esp0);
  ESP += 4; return;
  /* 103538ef nop  */
  /* nop */
L_103538f0:;
  /* 103538f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103538f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103538f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103538f7 pop esi */
  ESI = (pop32());
  /* 103538f8 pop edi */
  EDI = (pop32());
  /* 103538f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103538fa ret  */
  ESPCHK(0x10353790u, _esp0);
  ESP += 4; return;
  /* 103538fb nop  */
  /* nop */
L_103538fc:;
  /* 103538fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103538fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10353900 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10353903 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10353906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10353909 pop esi */
  ESI = (pop32());
  /* 1035390a pop edi */
  EDI = (pop32());
  /* 1035390b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1035390c ret  */
  ESPCHK(0x10353790u, _esp0);
  ESP += 4; return;
  /* 1035390d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10353910:;
  /* 10353910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10353912 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10353914 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10353917 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1035391a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1035391d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10353920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10353923 pop esi */
  ESI = (pop32());
  /* 10353924 pop edi */
  EDI = (pop32());
  /* 10353925 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10353926 ret  */
  ESPCHK(0x10353790u, _esp0);
  ESP += 4; return;
  /* 10353927 nop  */
  /* nop */
L_10353928:;
  /* 10353928 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1035392c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10353930 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10353936 jne 0x1035395c */
  if (!C.zf) goto L_1035395c;
  /* 10353938 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1035393b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1035393e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353941 jb 0x10353950 */
  if (C.cf) goto L_10353950;
  /* 10353943 std  */
  C.df=1;
  /* 10353944 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10353946 cld  */
  C.df=0;
  /* 10353947 jmp dword ptr [edx*4 + 0x10353a70] */
  switch (EDX) {
    case 0: goto L_10353a80;
    case 1: goto L_10353a88;
    case 2: goto L_10353a98;
    case 3: goto L_10353aac;
    default: x86_unimpl("switch@0x10353947 out of table"); return;
  }
  /* 1035394e mov edi, edi */
  EDI = (EDI);
L_10353950:;
  /* 10353950 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10353952 jmp dword ptr [ecx*4 + 0x10353a20] */
  switch (ECX) {
    case 0: goto L_10353a67;
    default: x86_unimpl("switch@0x10353952 out of table"); return;
  }
  /* 10353959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1035395c:;
  /* 1035395c mov eax, edi */
  EAX = (EDI);
  /* 1035395e mov edx, 3 */
  EDX = (0x3u);
  /* 10353963 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353966 jb 0x10353974 */
  if (C.cf) goto L_10353974;
  /* 10353968 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1035396b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1035396d jmp dword ptr [eax*4 + 0x10353978] */
  switch (EAX) {
    case 1: goto L_10353988;
    case 2: goto L_103539a8;
    case 3: goto L_103539d0;
    default: x86_unimpl("switch@0x1035396d out of table"); return;
  }
L_10353974:;
  /* 10353974 jmp dword ptr [ecx*4 + 0x10353a70] */
  switch (ECX) {
    case 0: goto L_10353a80;
    case 1: goto L_10353a88;
    case 2: goto L_10353a98;
    case 3: goto L_10353aac;
    default: x86_unimpl("switch@0x10353974 out of table"); return;
  }
  /* 1035397b nop  */
  /* nop */
L_10353988:;
  /* 10353988 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1035398b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1035398d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10353990 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10353991 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10353994 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10353995 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353998 jb 0x10353950 */
  if (C.cf) goto L_10353950;
  /* 1035399a std  */
  C.df=1;
  /* 1035399b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1035399d cld  */
  C.df=0;
  /* 1035399e jmp dword ptr [edx*4 + 0x10353a70] */
  switch (EDX) {
    case 0: goto L_10353a80;
    case 1: goto L_10353a88;
    case 2: goto L_10353a98;
    case 3: goto L_10353aac;
    default: x86_unimpl("switch@0x1035399e out of table"); return;
  }
  /* 103539a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103539a8:;
  /* 103539a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103539ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103539ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103539b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103539b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103539b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103539b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103539bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103539bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103539c2 jb 0x10353950 */
  if (C.cf) goto L_10353950;
  /* 103539c4 std  */
  C.df=1;
  /* 103539c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103539c7 cld  */
  C.df=0;
  /* 103539c8 jmp dword ptr [edx*4 + 0x10353a70] */
  switch (EDX) {
    case 0: goto L_10353a80;
    case 1: goto L_10353a88;
    case 2: goto L_10353a98;
    case 3: goto L_10353aac;
    default: x86_unimpl("switch@0x103539c8 out of table"); return;
  }
  /* 103539cf nop  */
  /* nop */
L_103539d0:;
  /* 103539d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103539d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103539d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103539d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103539db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103539de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103539e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103539e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103539e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103539ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103539ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103539f0 jb 0x10353950 */
  if (C.cf) goto L_10353950;
  /* 103539f6 std  */
  C.df=1;
  /* 103539f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103539f9 cld  */
  C.df=0;
  /* 103539fa jmp dword ptr [edx*4 + 0x10353a70] */
  switch (EDX) {
    case 0: goto L_10353a80;
    case 1: goto L_10353a88;
    case 2: goto L_10353a98;
    case 3: goto L_10353aac;
    default: x86_unimpl("switch@0x103539fa out of table"); return;
  }
  /* 10353a01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10353a04 and al, 0x3a */
  { uint32_t _r=(AL)&(0x3au); AL = (_r); fl_logic(_r,8); }
  /* 10353a06 xor eax, 0x353a2c10 */
  { uint32_t _r=(EAX)^(0x353a2c10u); EAX = (_r); fl_logic(_r,32); }
  /* 10353a0b adc byte ptr [edx + edi], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + EDI*1))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDI*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10353a0e xor eax, 0x353a3c10 */
  { uint32_t _r=(EAX)^(0x353a3c10u); EAX = (_r); fl_logic(_r,32); }
  /* 10353a13 adc byte ptr [edx + edi + 0x35], al */
  { uint32_t _a=(r8((uint32_t)(EDX + EDI*1 + 0x35))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDI*1 + 0x35), (_r)); fl_add(_a,_b,_r,8); }
  /* 10353a17 adc byte ptr [edx + edi + 0x35], cl */
  { uint32_t _a=(r8((uint32_t)(EDX + EDI*1 + 0x35))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDI*1 + 0x35), (_r)); fl_add(_a,_b,_r,8); }
  /* 10353a1b adc byte ptr [edx + edi + 0x35], dl */
  { uint32_t _a=(r8((uint32_t)(EDX + EDI*1 + 0x35))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EDI*1 + 0x35), (_r)); fl_add(_a,_b,_r,8); }
  /* 10353a24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10353a28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10353a2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10353a30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10353a34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10353a38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10353a3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10353a40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10353a44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10353a48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10353a4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10353a50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10353a54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10353a58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10353a5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10353a63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10353a65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10353a67:;
  /* 10353a67 jmp dword ptr [edx*4 + 0x10353a70] */
  switch (EDX) {
    case 0: goto L_10353a80;
    case 1: goto L_10353a88;
    case 2: goto L_10353a98;
    case 3: goto L_10353aac;
    default: x86_unimpl("switch@0x10353a67 out of table"); return;
  }
  /* 10353a6e mov edi, edi */
  EDI = (EDI);
L_10353a80:;
  /* 10353a80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10353a83 pop esi */
  ESI = (pop32());
  /* 10353a84 pop edi */
  EDI = (pop32());
  /* 10353a85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10353a86 ret  */
  ESPCHK(0x10353790u, _esp0);
  ESP += 4; return;
  /* 10353a87 nop  */
  /* nop */
L_10353a88:;
  /* 10353a88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10353a8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10353a8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10353a91 pop esi */
  ESI = (pop32());
  /* 10353a92 pop edi */
  EDI = (pop32());
  /* 10353a93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10353a94 ret  */
  ESPCHK(0x10353790u, _esp0);
  ESP += 4; return;
  /* 10353a95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10353a98:;
  /* 10353a98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10353a9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10353a9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10353aa1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10353aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10353aa7 pop esi */
  ESI = (pop32());
  /* 10353aa8 pop edi */
  EDI = (pop32());
  /* 10353aa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10353aaa ret  */
  ESPCHK(0x10353790u, _esp0);
  ESP += 4; return;
  /* 10353aab nop  */
  /* nop */
L_10353aac:;
  /* 10353aac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10353aaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10353ab2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10353ab5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10353ab8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10353abb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10353abe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10353ac1 pop esi */
  ESI = (pop32());
  /* 10353ac2 pop edi */
  EDI = (pop32());
  /* 10353ac3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10353ac4 ret  */
  ESPCHK(0x10353790u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10353ac8 (32 bytes, 18 insns) */
void f_10353ac8(void) {
  FTRACE(0x10353ac8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353ac8 push ebp */
  push32((uint32_t)(EBP));
  /* 10353ac9 mov ebp, esp */
  EBP = (ESP);
  /* 10353acb push ebx */
  push32((uint32_t)(EBX));
  /* 10353acc push esi */
  push32((uint32_t)(ESI));
  /* 10353acd push edi */
  push32((uint32_t)(EDI));
  /* 10353ace push ebp */
  push32((uint32_t)(EBP));
  /* 10353acf push 0 */
  push32((uint32_t)(0x0u));
  /* 10353ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10353ad3 push 0x10353ae0 */
  push32((uint32_t)(0x10353ae0u));
  /* 10353ad8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10353adb call 0x10353cd0 */
  push32(0x10353ae0u); f_10353cd0();
  /* 10353ae0 pop ebp */
  EBP = (pop32());
  /* 10353ae1 pop edi */
  EDI = (pop32());
  /* 10353ae2 pop esi */
  ESI = (pop32());
  /* 10353ae3 pop ebx */
  EBX = (pop32());
  /* 10353ae4 mov esp, ebp */
  ESP = (EBP);
  /* 10353ae6 pop ebp */
  EBP = (pop32());
  /* 10353ae7 ret  */
  ESPCHK(0x10353ac8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10353b0a (104 bytes, 33 insns) */
void f_10353b0a(void) {
  FTRACE(0x10353b0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353b0a push ebx */
  push32((uint32_t)(EBX));
  /* 10353b0b push esi */
  push32((uint32_t)(ESI));
  /* 10353b0c push edi */
  push32((uint32_t)(EDI));
  /* 10353b0d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10353b11 push eax */
  push32((uint32_t)(EAX));
  /* 10353b12 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10353b14 push 0x10353ae8 */
  push32((uint32_t)(0x10353ae8u));
  /* 10353b19 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10353b20 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10353b27:;
  /* 10353b27 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10353b2b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10353b2e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10353b31 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353b34 je 0x10353b64 */
  if (C.zf) goto L_10353b64;
  /* 10353b36 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353b3a je 0x10353b64 */
  if (C.zf) goto L_10353b64;
  /* 10353b3c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10353b3f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10353b42 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10353b46 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10353b49 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353b4e jne 0x10353b62 */
  if (!C.zf) goto L_10353b62;
  /* 10353b50 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10353b55 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10353b59 call 0x10353b9e */
  push32(0x10353b5eu); f_10353b9e();
  /* 10353b5e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10353b62u);
L_10353b62:;
  /* 10353b62 jmp 0x10353b27 */
  goto L_10353b27;
L_10353b64:;
  /* 10353b64 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10353b6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10353b6e pop edi */
  EDI = (pop32());
  /* 10353b6f pop esi */
  ESI = (pop32());
  /* 10353b70 pop ebx */
  EBX = (pop32());
  /* 10353b71 ret  */
  ESPCHK(0x10353b0au, _esp0);
  ESP += 4; return;
}

/* FUN_10003b9e @ 0x10353b9e (24 bytes, 10 insns) */
void f_10353b9e(void) {
  FTRACE(0x10353b9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353b9e push ebx */
  push32((uint32_t)(EBX));
  /* 10353b9f push ecx */
  push32((uint32_t)(ECX));
  /* 10353ba0 mov ebx, 0x10355390 */
  EBX = (0x10355390u);
  /* 10353ba5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10353ba8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10353bab mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10353bae mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10353bb1 pop ecx */
  ECX = (pop32());
  /* 10353bb2 pop ebx */
  EBX = (pop32());
  /* 10353bb3 ret 4 */
  ESPCHK(0x10353b9eu, _esp0);
  ESP += 8; return;
}

/* FUN_10003c7d @ 0x10353c7d (27 bytes, 11 insns) */
void f_10353c7d(void) {
  FTRACE(0x10353c7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353c7d push ebp */
  push32((uint32_t)(EBP));
  /* 10353c7e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10353c82 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10353c84 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10353c87 push eax */
  push32((uint32_t)(EAX));
  /* 10353c88 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10353c8b push eax */
  push32((uint32_t)(EAX));
  /* 10353c8c call 0x10353b0a */
  push32(0x10353c91u); f_10353b0a();
  /* 10353c91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10353c94 pop ebp */
  EBP = (pop32());
  /* 10353c95 ret 4 */
  ESPCHK(0x10353c7du, _esp0);
  ESP += 8; return;
}

/* FUN_10003ca0 @ 0x10353ca0 (47 bytes, 17 insns) */
void f_10353ca0(void) {
  FTRACE(0x10353ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 10353ca1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353ca6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10353caa jb 0x10353cc0 */
  if (C.cf) goto L_10353cc0;
L_10353cac:;
  /* 10353cac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10353cb2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10353cb7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10353cb9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10353cbe jae 0x10353cac */
  if (!C.cf) goto L_10353cac;
L_10353cc0:;
  /* 10353cc0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10353cc2 mov eax, esp */
  EAX = (ESP);
  /* 10353cc4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10353cc6 mov esp, ecx */
  ESP = (ECX);
  /* 10353cc8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10353cca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10353ccd push eax */
  push32((uint32_t)(EAX));
  /* 10353cce ret  */
  ESPCHK(0x10353ca0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10353cd0 (6 bytes, 1 insns) */
void f_10353cd0(void) {
  FTRACE(0x10353cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10353cd0 jmp dword ptr [0x10354008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10354008)))); return;
}

